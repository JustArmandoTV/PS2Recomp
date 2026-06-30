#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC0A0
// Address: 0x1fc0a0 - 0x1fc8c0
void sub_001FC0A0_0x1fc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC0A0_0x1fc0a0");
#endif

    switch (ctx->pc) {
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        case 0x1fc110u: goto label_1fc110;
        case 0x1fc114u: goto label_1fc114;
        case 0x1fc118u: goto label_1fc118;
        case 0x1fc11cu: goto label_1fc11c;
        case 0x1fc120u: goto label_1fc120;
        case 0x1fc124u: goto label_1fc124;
        case 0x1fc128u: goto label_1fc128;
        case 0x1fc12cu: goto label_1fc12c;
        case 0x1fc130u: goto label_1fc130;
        case 0x1fc134u: goto label_1fc134;
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc13cu: goto label_1fc13c;
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc144u: goto label_1fc144;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc14cu: goto label_1fc14c;
        case 0x1fc150u: goto label_1fc150;
        case 0x1fc154u: goto label_1fc154;
        case 0x1fc158u: goto label_1fc158;
        case 0x1fc15cu: goto label_1fc15c;
        case 0x1fc160u: goto label_1fc160;
        case 0x1fc164u: goto label_1fc164;
        case 0x1fc168u: goto label_1fc168;
        case 0x1fc16cu: goto label_1fc16c;
        case 0x1fc170u: goto label_1fc170;
        case 0x1fc174u: goto label_1fc174;
        case 0x1fc178u: goto label_1fc178;
        case 0x1fc17cu: goto label_1fc17c;
        case 0x1fc180u: goto label_1fc180;
        case 0x1fc184u: goto label_1fc184;
        case 0x1fc188u: goto label_1fc188;
        case 0x1fc18cu: goto label_1fc18c;
        case 0x1fc190u: goto label_1fc190;
        case 0x1fc194u: goto label_1fc194;
        case 0x1fc198u: goto label_1fc198;
        case 0x1fc19cu: goto label_1fc19c;
        case 0x1fc1a0u: goto label_1fc1a0;
        case 0x1fc1a4u: goto label_1fc1a4;
        case 0x1fc1a8u: goto label_1fc1a8;
        case 0x1fc1acu: goto label_1fc1ac;
        case 0x1fc1b0u: goto label_1fc1b0;
        case 0x1fc1b4u: goto label_1fc1b4;
        case 0x1fc1b8u: goto label_1fc1b8;
        case 0x1fc1bcu: goto label_1fc1bc;
        case 0x1fc1c0u: goto label_1fc1c0;
        case 0x1fc1c4u: goto label_1fc1c4;
        case 0x1fc1c8u: goto label_1fc1c8;
        case 0x1fc1ccu: goto label_1fc1cc;
        case 0x1fc1d0u: goto label_1fc1d0;
        case 0x1fc1d4u: goto label_1fc1d4;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc1dcu: goto label_1fc1dc;
        case 0x1fc1e0u: goto label_1fc1e0;
        case 0x1fc1e4u: goto label_1fc1e4;
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc1ecu: goto label_1fc1ec;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1f4u: goto label_1fc1f4;
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc1fcu: goto label_1fc1fc;
        case 0x1fc200u: goto label_1fc200;
        case 0x1fc204u: goto label_1fc204;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc20cu: goto label_1fc20c;
        case 0x1fc210u: goto label_1fc210;
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc220u: goto label_1fc220;
        case 0x1fc224u: goto label_1fc224;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc22cu: goto label_1fc22c;
        case 0x1fc230u: goto label_1fc230;
        case 0x1fc234u: goto label_1fc234;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc23cu: goto label_1fc23c;
        case 0x1fc240u: goto label_1fc240;
        case 0x1fc244u: goto label_1fc244;
        case 0x1fc248u: goto label_1fc248;
        case 0x1fc24cu: goto label_1fc24c;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc254u: goto label_1fc254;
        case 0x1fc258u: goto label_1fc258;
        case 0x1fc25cu: goto label_1fc25c;
        case 0x1fc260u: goto label_1fc260;
        case 0x1fc264u: goto label_1fc264;
        case 0x1fc268u: goto label_1fc268;
        case 0x1fc26cu: goto label_1fc26c;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc274u: goto label_1fc274;
        case 0x1fc278u: goto label_1fc278;
        case 0x1fc27cu: goto label_1fc27c;
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc288u: goto label_1fc288;
        case 0x1fc28cu: goto label_1fc28c;
        case 0x1fc290u: goto label_1fc290;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc29cu: goto label_1fc29c;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2a4u: goto label_1fc2a4;
        case 0x1fc2a8u: goto label_1fc2a8;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2b0u: goto label_1fc2b0;
        case 0x1fc2b4u: goto label_1fc2b4;
        case 0x1fc2b8u: goto label_1fc2b8;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2c4u: goto label_1fc2c4;
        case 0x1fc2c8u: goto label_1fc2c8;
        case 0x1fc2ccu: goto label_1fc2cc;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2d4u: goto label_1fc2d4;
        case 0x1fc2d8u: goto label_1fc2d8;
        case 0x1fc2dcu: goto label_1fc2dc;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc2e8u: goto label_1fc2e8;
        case 0x1fc2ecu: goto label_1fc2ec;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc2f4u: goto label_1fc2f4;
        case 0x1fc2f8u: goto label_1fc2f8;
        case 0x1fc2fcu: goto label_1fc2fc;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc304u: goto label_1fc304;
        case 0x1fc308u: goto label_1fc308;
        case 0x1fc30cu: goto label_1fc30c;
        case 0x1fc310u: goto label_1fc310;
        case 0x1fc314u: goto label_1fc314;
        case 0x1fc318u: goto label_1fc318;
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc320u: goto label_1fc320;
        case 0x1fc324u: goto label_1fc324;
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc32cu: goto label_1fc32c;
        case 0x1fc330u: goto label_1fc330;
        case 0x1fc334u: goto label_1fc334;
        case 0x1fc338u: goto label_1fc338;
        case 0x1fc33cu: goto label_1fc33c;
        case 0x1fc340u: goto label_1fc340;
        case 0x1fc344u: goto label_1fc344;
        case 0x1fc348u: goto label_1fc348;
        case 0x1fc34cu: goto label_1fc34c;
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc358u: goto label_1fc358;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc360u: goto label_1fc360;
        case 0x1fc364u: goto label_1fc364;
        case 0x1fc368u: goto label_1fc368;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc370u: goto label_1fc370;
        case 0x1fc374u: goto label_1fc374;
        case 0x1fc378u: goto label_1fc378;
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc384u: goto label_1fc384;
        case 0x1fc388u: goto label_1fc388;
        case 0x1fc38cu: goto label_1fc38c;
        case 0x1fc390u: goto label_1fc390;
        case 0x1fc394u: goto label_1fc394;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc39cu: goto label_1fc39c;
        case 0x1fc3a0u: goto label_1fc3a0;
        case 0x1fc3a4u: goto label_1fc3a4;
        case 0x1fc3a8u: goto label_1fc3a8;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc3b0u: goto label_1fc3b0;
        case 0x1fc3b4u: goto label_1fc3b4;
        case 0x1fc3b8u: goto label_1fc3b8;
        case 0x1fc3bcu: goto label_1fc3bc;
        case 0x1fc3c0u: goto label_1fc3c0;
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        case 0x1fc3d4u: goto label_1fc3d4;
        case 0x1fc3d8u: goto label_1fc3d8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc3e0u: goto label_1fc3e0;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3e8u: goto label_1fc3e8;
        case 0x1fc3ecu: goto label_1fc3ec;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc3f4u: goto label_1fc3f4;
        case 0x1fc3f8u: goto label_1fc3f8;
        case 0x1fc3fcu: goto label_1fc3fc;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc408u: goto label_1fc408;
        case 0x1fc40cu: goto label_1fc40c;
        case 0x1fc410u: goto label_1fc410;
        case 0x1fc414u: goto label_1fc414;
        case 0x1fc418u: goto label_1fc418;
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc420u: goto label_1fc420;
        case 0x1fc424u: goto label_1fc424;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc42cu: goto label_1fc42c;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc438u: goto label_1fc438;
        case 0x1fc43cu: goto label_1fc43c;
        case 0x1fc440u: goto label_1fc440;
        case 0x1fc444u: goto label_1fc444;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc44cu: goto label_1fc44c;
        case 0x1fc450u: goto label_1fc450;
        case 0x1fc454u: goto label_1fc454;
        case 0x1fc458u: goto label_1fc458;
        case 0x1fc45cu: goto label_1fc45c;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc464u: goto label_1fc464;
        case 0x1fc468u: goto label_1fc468;
        case 0x1fc46cu: goto label_1fc46c;
        case 0x1fc470u: goto label_1fc470;
        case 0x1fc474u: goto label_1fc474;
        case 0x1fc478u: goto label_1fc478;
        case 0x1fc47cu: goto label_1fc47c;
        case 0x1fc480u: goto label_1fc480;
        case 0x1fc484u: goto label_1fc484;
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc48cu: goto label_1fc48c;
        case 0x1fc490u: goto label_1fc490;
        case 0x1fc494u: goto label_1fc494;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc49cu: goto label_1fc49c;
        case 0x1fc4a0u: goto label_1fc4a0;
        case 0x1fc4a4u: goto label_1fc4a4;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4acu: goto label_1fc4ac;
        case 0x1fc4b0u: goto label_1fc4b0;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4b8u: goto label_1fc4b8;
        case 0x1fc4bcu: goto label_1fc4bc;
        case 0x1fc4c0u: goto label_1fc4c0;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4c8u: goto label_1fc4c8;
        case 0x1fc4ccu: goto label_1fc4cc;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4d4u: goto label_1fc4d4;
        case 0x1fc4d8u: goto label_1fc4d8;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4e0u: goto label_1fc4e0;
        case 0x1fc4e4u: goto label_1fc4e4;
        case 0x1fc4e8u: goto label_1fc4e8;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4f0u: goto label_1fc4f0;
        case 0x1fc4f4u: goto label_1fc4f4;
        case 0x1fc4f8u: goto label_1fc4f8;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc500u: goto label_1fc500;
        case 0x1fc504u: goto label_1fc504;
        case 0x1fc508u: goto label_1fc508;
        case 0x1fc50cu: goto label_1fc50c;
        case 0x1fc510u: goto label_1fc510;
        case 0x1fc514u: goto label_1fc514;
        case 0x1fc518u: goto label_1fc518;
        case 0x1fc51cu: goto label_1fc51c;
        case 0x1fc520u: goto label_1fc520;
        case 0x1fc524u: goto label_1fc524;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc52cu: goto label_1fc52c;
        case 0x1fc530u: goto label_1fc530;
        case 0x1fc534u: goto label_1fc534;
        case 0x1fc538u: goto label_1fc538;
        case 0x1fc53cu: goto label_1fc53c;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc544u: goto label_1fc544;
        case 0x1fc548u: goto label_1fc548;
        case 0x1fc54cu: goto label_1fc54c;
        case 0x1fc550u: goto label_1fc550;
        case 0x1fc554u: goto label_1fc554;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc55cu: goto label_1fc55c;
        case 0x1fc560u: goto label_1fc560;
        case 0x1fc564u: goto label_1fc564;
        case 0x1fc568u: goto label_1fc568;
        case 0x1fc56cu: goto label_1fc56c;
        case 0x1fc570u: goto label_1fc570;
        case 0x1fc574u: goto label_1fc574;
        case 0x1fc578u: goto label_1fc578;
        case 0x1fc57cu: goto label_1fc57c;
        case 0x1fc580u: goto label_1fc580;
        case 0x1fc584u: goto label_1fc584;
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc58cu: goto label_1fc58c;
        case 0x1fc590u: goto label_1fc590;
        case 0x1fc594u: goto label_1fc594;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc59cu: goto label_1fc59c;
        case 0x1fc5a0u: goto label_1fc5a0;
        case 0x1fc5a4u: goto label_1fc5a4;
        case 0x1fc5a8u: goto label_1fc5a8;
        case 0x1fc5acu: goto label_1fc5ac;
        case 0x1fc5b0u: goto label_1fc5b0;
        case 0x1fc5b4u: goto label_1fc5b4;
        case 0x1fc5b8u: goto label_1fc5b8;
        case 0x1fc5bcu: goto label_1fc5bc;
        case 0x1fc5c0u: goto label_1fc5c0;
        case 0x1fc5c4u: goto label_1fc5c4;
        case 0x1fc5c8u: goto label_1fc5c8;
        case 0x1fc5ccu: goto label_1fc5cc;
        case 0x1fc5d0u: goto label_1fc5d0;
        case 0x1fc5d4u: goto label_1fc5d4;
        case 0x1fc5d8u: goto label_1fc5d8;
        case 0x1fc5dcu: goto label_1fc5dc;
        case 0x1fc5e0u: goto label_1fc5e0;
        case 0x1fc5e4u: goto label_1fc5e4;
        case 0x1fc5e8u: goto label_1fc5e8;
        case 0x1fc5ecu: goto label_1fc5ec;
        case 0x1fc5f0u: goto label_1fc5f0;
        case 0x1fc5f4u: goto label_1fc5f4;
        case 0x1fc5f8u: goto label_1fc5f8;
        case 0x1fc5fcu: goto label_1fc5fc;
        case 0x1fc600u: goto label_1fc600;
        case 0x1fc604u: goto label_1fc604;
        case 0x1fc608u: goto label_1fc608;
        case 0x1fc60cu: goto label_1fc60c;
        case 0x1fc610u: goto label_1fc610;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc618u: goto label_1fc618;
        case 0x1fc61cu: goto label_1fc61c;
        case 0x1fc620u: goto label_1fc620;
        case 0x1fc624u: goto label_1fc624;
        case 0x1fc628u: goto label_1fc628;
        case 0x1fc62cu: goto label_1fc62c;
        case 0x1fc630u: goto label_1fc630;
        case 0x1fc634u: goto label_1fc634;
        case 0x1fc638u: goto label_1fc638;
        case 0x1fc63cu: goto label_1fc63c;
        case 0x1fc640u: goto label_1fc640;
        case 0x1fc644u: goto label_1fc644;
        case 0x1fc648u: goto label_1fc648;
        case 0x1fc64cu: goto label_1fc64c;
        case 0x1fc650u: goto label_1fc650;
        case 0x1fc654u: goto label_1fc654;
        case 0x1fc658u: goto label_1fc658;
        case 0x1fc65cu: goto label_1fc65c;
        case 0x1fc660u: goto label_1fc660;
        case 0x1fc664u: goto label_1fc664;
        case 0x1fc668u: goto label_1fc668;
        case 0x1fc66cu: goto label_1fc66c;
        case 0x1fc670u: goto label_1fc670;
        case 0x1fc674u: goto label_1fc674;
        case 0x1fc678u: goto label_1fc678;
        case 0x1fc67cu: goto label_1fc67c;
        case 0x1fc680u: goto label_1fc680;
        case 0x1fc684u: goto label_1fc684;
        case 0x1fc688u: goto label_1fc688;
        case 0x1fc68cu: goto label_1fc68c;
        case 0x1fc690u: goto label_1fc690;
        case 0x1fc694u: goto label_1fc694;
        case 0x1fc698u: goto label_1fc698;
        case 0x1fc69cu: goto label_1fc69c;
        case 0x1fc6a0u: goto label_1fc6a0;
        case 0x1fc6a4u: goto label_1fc6a4;
        case 0x1fc6a8u: goto label_1fc6a8;
        case 0x1fc6acu: goto label_1fc6ac;
        case 0x1fc6b0u: goto label_1fc6b0;
        case 0x1fc6b4u: goto label_1fc6b4;
        case 0x1fc6b8u: goto label_1fc6b8;
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc6c0u: goto label_1fc6c0;
        case 0x1fc6c4u: goto label_1fc6c4;
        case 0x1fc6c8u: goto label_1fc6c8;
        case 0x1fc6ccu: goto label_1fc6cc;
        case 0x1fc6d0u: goto label_1fc6d0;
        case 0x1fc6d4u: goto label_1fc6d4;
        case 0x1fc6d8u: goto label_1fc6d8;
        case 0x1fc6dcu: goto label_1fc6dc;
        case 0x1fc6e0u: goto label_1fc6e0;
        case 0x1fc6e4u: goto label_1fc6e4;
        case 0x1fc6e8u: goto label_1fc6e8;
        case 0x1fc6ecu: goto label_1fc6ec;
        case 0x1fc6f0u: goto label_1fc6f0;
        case 0x1fc6f4u: goto label_1fc6f4;
        case 0x1fc6f8u: goto label_1fc6f8;
        case 0x1fc6fcu: goto label_1fc6fc;
        case 0x1fc700u: goto label_1fc700;
        case 0x1fc704u: goto label_1fc704;
        case 0x1fc708u: goto label_1fc708;
        case 0x1fc70cu: goto label_1fc70c;
        case 0x1fc710u: goto label_1fc710;
        case 0x1fc714u: goto label_1fc714;
        case 0x1fc718u: goto label_1fc718;
        case 0x1fc71cu: goto label_1fc71c;
        case 0x1fc720u: goto label_1fc720;
        case 0x1fc724u: goto label_1fc724;
        case 0x1fc728u: goto label_1fc728;
        case 0x1fc72cu: goto label_1fc72c;
        case 0x1fc730u: goto label_1fc730;
        case 0x1fc734u: goto label_1fc734;
        case 0x1fc738u: goto label_1fc738;
        case 0x1fc73cu: goto label_1fc73c;
        case 0x1fc740u: goto label_1fc740;
        case 0x1fc744u: goto label_1fc744;
        case 0x1fc748u: goto label_1fc748;
        case 0x1fc74cu: goto label_1fc74c;
        case 0x1fc750u: goto label_1fc750;
        case 0x1fc754u: goto label_1fc754;
        case 0x1fc758u: goto label_1fc758;
        case 0x1fc75cu: goto label_1fc75c;
        case 0x1fc760u: goto label_1fc760;
        case 0x1fc764u: goto label_1fc764;
        case 0x1fc768u: goto label_1fc768;
        case 0x1fc76cu: goto label_1fc76c;
        case 0x1fc770u: goto label_1fc770;
        case 0x1fc774u: goto label_1fc774;
        case 0x1fc778u: goto label_1fc778;
        case 0x1fc77cu: goto label_1fc77c;
        case 0x1fc780u: goto label_1fc780;
        case 0x1fc784u: goto label_1fc784;
        case 0x1fc788u: goto label_1fc788;
        case 0x1fc78cu: goto label_1fc78c;
        case 0x1fc790u: goto label_1fc790;
        case 0x1fc794u: goto label_1fc794;
        case 0x1fc798u: goto label_1fc798;
        case 0x1fc79cu: goto label_1fc79c;
        case 0x1fc7a0u: goto label_1fc7a0;
        case 0x1fc7a4u: goto label_1fc7a4;
        case 0x1fc7a8u: goto label_1fc7a8;
        case 0x1fc7acu: goto label_1fc7ac;
        case 0x1fc7b0u: goto label_1fc7b0;
        case 0x1fc7b4u: goto label_1fc7b4;
        case 0x1fc7b8u: goto label_1fc7b8;
        case 0x1fc7bcu: goto label_1fc7bc;
        case 0x1fc7c0u: goto label_1fc7c0;
        case 0x1fc7c4u: goto label_1fc7c4;
        case 0x1fc7c8u: goto label_1fc7c8;
        case 0x1fc7ccu: goto label_1fc7cc;
        case 0x1fc7d0u: goto label_1fc7d0;
        case 0x1fc7d4u: goto label_1fc7d4;
        case 0x1fc7d8u: goto label_1fc7d8;
        case 0x1fc7dcu: goto label_1fc7dc;
        case 0x1fc7e0u: goto label_1fc7e0;
        case 0x1fc7e4u: goto label_1fc7e4;
        case 0x1fc7e8u: goto label_1fc7e8;
        case 0x1fc7ecu: goto label_1fc7ec;
        case 0x1fc7f0u: goto label_1fc7f0;
        case 0x1fc7f4u: goto label_1fc7f4;
        case 0x1fc7f8u: goto label_1fc7f8;
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc800u: goto label_1fc800;
        case 0x1fc804u: goto label_1fc804;
        case 0x1fc808u: goto label_1fc808;
        case 0x1fc80cu: goto label_1fc80c;
        case 0x1fc810u: goto label_1fc810;
        case 0x1fc814u: goto label_1fc814;
        case 0x1fc818u: goto label_1fc818;
        case 0x1fc81cu: goto label_1fc81c;
        case 0x1fc820u: goto label_1fc820;
        case 0x1fc824u: goto label_1fc824;
        case 0x1fc828u: goto label_1fc828;
        case 0x1fc82cu: goto label_1fc82c;
        case 0x1fc830u: goto label_1fc830;
        case 0x1fc834u: goto label_1fc834;
        case 0x1fc838u: goto label_1fc838;
        case 0x1fc83cu: goto label_1fc83c;
        case 0x1fc840u: goto label_1fc840;
        case 0x1fc844u: goto label_1fc844;
        case 0x1fc848u: goto label_1fc848;
        case 0x1fc84cu: goto label_1fc84c;
        case 0x1fc850u: goto label_1fc850;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc858u: goto label_1fc858;
        case 0x1fc85cu: goto label_1fc85c;
        case 0x1fc860u: goto label_1fc860;
        case 0x1fc864u: goto label_1fc864;
        case 0x1fc868u: goto label_1fc868;
        case 0x1fc86cu: goto label_1fc86c;
        case 0x1fc870u: goto label_1fc870;
        case 0x1fc874u: goto label_1fc874;
        case 0x1fc878u: goto label_1fc878;
        case 0x1fc87cu: goto label_1fc87c;
        case 0x1fc880u: goto label_1fc880;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc88cu: goto label_1fc88c;
        case 0x1fc890u: goto label_1fc890;
        case 0x1fc894u: goto label_1fc894;
        case 0x1fc898u: goto label_1fc898;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8a0u: goto label_1fc8a0;
        case 0x1fc8a4u: goto label_1fc8a4;
        case 0x1fc8a8u: goto label_1fc8a8;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8b0u: goto label_1fc8b0;
        case 0x1fc8b4u: goto label_1fc8b4;
        case 0x1fc8b8u: goto label_1fc8b8;
        case 0x1fc8bcu: goto label_1fc8bc;
        default: break;
    }

    ctx->pc = 0x1fc0a0u;

label_1fc0a0:
    // 0x1fc0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fc0a4:
    // 0x1fc0a4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fc0a8:
    // 0x1fc0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc0ac:
    // 0x1fc0ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fc0b0:
    // 0x1fc0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc0b4:
    // 0x1fc0b4: 0x2442c520  addiu       $v0, $v0, -0x3AE0
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
label_1fc0b8:
    // 0x1fc0b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fc0bc:
    // 0x1fc0bc: 0x2463d6d0  addiu       $v1, $v1, -0x2930
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956752));
label_1fc0c0:
    // 0x1fc0c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fc0c4:
    // 0x1fc0c4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fc0c8:
    // 0x1fc0c8: 0x2442d630  addiu       $v0, $v0, -0x29D0
    ctx->pc = 0x1fc0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956592));
label_1fc0cc:
    // 0x1fc0cc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fc0d0:
    // 0x1fc0d0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fc0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1fc0d4:
    // 0x1fc0d4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1fc0d8:
    // 0x1fc0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc0dc:
    // 0x1fc0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0e0:
    // 0x1fc0e0: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1fc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_1fc0e4:
    // 0x1fc0e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fc0e8:
    // 0x1fc0e8: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1fc0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_1fc0ec:
    // 0x1fc0ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fc0f0:
    // 0x1fc0f0: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x1fc0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
label_1fc0f4:
    // 0x1fc0f4: 0xc07ff48  jal         func_1FFD20
label_1fc0f8:
    if (ctx->pc == 0x1FC0F8u) {
        ctx->pc = 0x1FC0F8u;
            // 0x1fc0f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FC0FCu;
        goto label_1fc0fc;
    }
    ctx->pc = 0x1FC0F4u;
    SET_GPR_U32(ctx, 31, 0x1FC0FCu);
    ctx->pc = 0x1FC0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0F4u;
            // 0x1fc0f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0FCu; }
        if (ctx->pc != 0x1FC0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0FCu; }
        if (ctx->pc != 0x1FC0FCu) { return; }
    }
    ctx->pc = 0x1FC0FCu;
label_1fc0fc:
    // 0x1fc0fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fc100:
    // 0x1fc100: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fc104:
    // 0x1fc104: 0x2442c240  addiu       $v0, $v0, -0x3DC0
    ctx->pc = 0x1fc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
label_1fc108:
    // 0x1fc108: 0x2463d000  addiu       $v1, $v1, -0x3000
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
label_1fc10c:
    // 0x1fc10c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1fc110:
    // 0x1fc110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc114:
    // 0x1fc114: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fc114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fc118:
    // 0x1fc118: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1fc118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1fc11c:
    // 0x1fc11c: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x1fc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_1fc120:
    // 0x1fc120: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fc124:
    // 0x1fc124: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1fc124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1fc128:
    // 0x1fc128: 0x2463ccf0  addiu       $v1, $v1, -0x3310
    ctx->pc = 0x1fc128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954224));
label_1fc12c:
    // 0x1fc12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc130:
    // 0x1fc130: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1fc130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_1fc134:
    // 0x1fc134: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fc138:
    // 0x1fc138: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1fc138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_1fc13c:
    // 0x1fc13c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1fc140:
    // 0x1fc140: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1fc140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fc144:
    // 0x1fc144: 0xc07ff48  jal         func_1FFD20
label_1fc148:
    if (ctx->pc == 0x1FC148u) {
        ctx->pc = 0x1FC148u;
            // 0x1fc148: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FC14Cu;
        goto label_1fc14c;
    }
    ctx->pc = 0x1FC144u;
    SET_GPR_U32(ctx, 31, 0x1FC14Cu);
    ctx->pc = 0x1FC148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC144u;
            // 0x1fc148: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC14Cu; }
        if (ctx->pc != 0x1FC14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC14Cu; }
        if (ctx->pc != 0x1FC14Cu) { return; }
    }
    ctx->pc = 0x1FC14Cu;
label_1fc14c:
    // 0x1fc14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc150:
    // 0x1fc150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc154:
    // 0x1fc154: 0x3e00008  jr          $ra
label_1fc158:
    if (ctx->pc == 0x1FC158u) {
        ctx->pc = 0x1FC158u;
            // 0x1fc158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1FC15Cu;
        goto label_1fc15c;
    }
    ctx->pc = 0x1FC154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC154u;
            // 0x1fc158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC15Cu;
label_1fc15c:
    // 0x1fc15c: 0x0  nop
    ctx->pc = 0x1fc15cu;
    // NOP
label_1fc160:
    // 0x1fc160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc164:
    // 0x1fc164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc168:
    // 0x1fc168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc16c:
    // 0x1fc16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc170:
    // 0x1fc170: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fc174:
    // 0x1fc174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fc174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc178:
    // 0x1fc178: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1fc178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1fc17c:
    // 0x1fc17c: 0x320f809  jalr        $t9
label_1fc180:
    if (ctx->pc == 0x1FC180u) {
        ctx->pc = 0x1FC184u;
        goto label_1fc184;
    }
    ctx->pc = 0x1FC17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FC184u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC184u; }
            if (ctx->pc != 0x1FC184u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC184u;
label_1fc184:
    // 0x1fc184: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1fc188:
    if (ctx->pc == 0x1FC188u) {
        ctx->pc = 0x1FC188u;
            // 0x1fc188: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1FC18Cu;
        goto label_1fc18c;
    }
    ctx->pc = 0x1FC184u;
    {
        const bool branch_taken_0x1fc184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc184) {
            ctx->pc = 0x1FC188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC184u;
            // 0x1fc188: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1A4u;
            goto label_1fc1a4;
        }
    }
    ctx->pc = 0x1FC18Cu;
label_1fc18c:
    // 0x1fc18c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1fc18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc190:
    // 0x1fc190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc194:
    // 0x1fc194: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1fc198:
    // 0x1fc198: 0x320f809  jalr        $t9
label_1fc19c:
    if (ctx->pc == 0x1FC19Cu) {
        ctx->pc = 0x1FC19Cu;
            // 0x1fc19c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FC1A0u;
        goto label_1fc1a0;
    }
    ctx->pc = 0x1FC198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FC1A0u);
        ctx->pc = 0x1FC19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC198u;
            // 0x1fc19c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1A0u; }
            if (ctx->pc != 0x1FC1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC1A0u;
label_1fc1a0:
    // 0x1fc1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc1a4:
    // 0x1fc1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc1a8:
    // 0x1fc1a8: 0x3e00008  jr          $ra
label_1fc1ac:
    if (ctx->pc == 0x1FC1ACu) {
        ctx->pc = 0x1FC1ACu;
            // 0x1fc1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC1B0u;
        goto label_1fc1b0;
    }
    ctx->pc = 0x1FC1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1A8u;
            // 0x1fc1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC1B0u;
label_1fc1b0:
    // 0x1fc1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc1b4:
    // 0x1fc1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc1b8:
    // 0x1fc1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc1bc:
    // 0x1fc1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc1c0:
    // 0x1fc1c0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1fc1c4:
    if (ctx->pc == 0x1FC1C4u) {
        ctx->pc = 0x1FC1C4u;
            // 0x1fc1c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1C8u;
        goto label_1fc1c8;
    }
    ctx->pc = 0x1FC1C0u;
    {
        const bool branch_taken_0x1fc1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c0) {
            ctx->pc = 0x1FC1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1C0u;
            // 0x1fc1c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC230u;
            goto label_1fc230;
        }
    }
    ctx->pc = 0x1FC1C8u;
label_1fc1c8:
    // 0x1fc1c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc1cc:
    // 0x1fc1cc: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x1fc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_1fc1d0:
    // 0x1fc1d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fc1d4:
    if (ctx->pc == 0x1FC1D4u) {
        ctx->pc = 0x1FC1D4u;
            // 0x1fc1d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC1D8u;
        goto label_1fc1d8;
    }
    ctx->pc = 0x1FC1D0u;
    {
        const bool branch_taken_0x1fc1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1D0u;
            // 0x1fc1d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1d0) {
            ctx->pc = 0x1FC204u;
            goto label_1fc204;
        }
    }
    ctx->pc = 0x1FC1D8u;
label_1fc1d8:
    // 0x1fc1d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc1dc:
    // 0x1fc1dc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fc1e0:
    // 0x1fc1e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1fc1e4:
    if (ctx->pc == 0x1FC1E4u) {
        ctx->pc = 0x1FC1E4u;
            // 0x1fc1e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC1E8u;
        goto label_1fc1e8;
    }
    ctx->pc = 0x1FC1E0u;
    {
        const bool branch_taken_0x1fc1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1E0u;
            // 0x1fc1e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1e0) {
            ctx->pc = 0x1FC204u;
            goto label_1fc204;
        }
    }
    ctx->pc = 0x1FC1E8u;
label_1fc1e8:
    // 0x1fc1e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc1ec:
    // 0x1fc1ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fc1f0:
    // 0x1fc1f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fc1f4:
    if (ctx->pc == 0x1FC1F4u) {
        ctx->pc = 0x1FC1F4u;
            // 0x1fc1f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC1F8u;
        goto label_1fc1f8;
    }
    ctx->pc = 0x1FC1F0u;
    {
        const bool branch_taken_0x1fc1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1F0u;
            // 0x1fc1f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1f0) {
            ctx->pc = 0x1FC204u;
            goto label_1fc204;
        }
    }
    ctx->pc = 0x1FC1F8u;
label_1fc1f8:
    // 0x1fc1f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc1fc:
    // 0x1fc1fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fc200:
    // 0x1fc200: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fc200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fc204:
    // 0x1fc204: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fc204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fc208:
    // 0x1fc208: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fc208u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fc20c:
    // 0x1fc20c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1fc210:
    if (ctx->pc == 0x1FC210u) {
        ctx->pc = 0x1FC214u;
        goto label_1fc214;
    }
    ctx->pc = 0x1FC20Cu;
    {
        const bool branch_taken_0x1fc20c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fc20c) {
            ctx->pc = 0x1FC22Cu;
            goto label_1fc22c;
        }
    }
    ctx->pc = 0x1FC214u;
label_1fc214:
    // 0x1fc214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc218:
    // 0x1fc218: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1fc218u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc21c:
    // 0x1fc21c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fc220:
    // 0x1fc220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc224:
    // 0x1fc224: 0xc0a7ab4  jal         func_29EAD0
label_1fc228:
    if (ctx->pc == 0x1FC228u) {
        ctx->pc = 0x1FC228u;
            // 0x1fc228: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FC22Cu;
        goto label_1fc22c;
    }
    ctx->pc = 0x1FC224u;
    SET_GPR_U32(ctx, 31, 0x1FC22Cu);
    ctx->pc = 0x1FC228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC224u;
            // 0x1fc228: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC22Cu; }
        if (ctx->pc != 0x1FC22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC22Cu; }
        if (ctx->pc != 0x1FC22Cu) { return; }
    }
    ctx->pc = 0x1FC22Cu;
label_1fc22c:
    // 0x1fc22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc230:
    // 0x1fc230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc234:
    // 0x1fc234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc238:
    // 0x1fc238: 0x3e00008  jr          $ra
label_1fc23c:
    if (ctx->pc == 0x1FC23Cu) {
        ctx->pc = 0x1FC23Cu;
            // 0x1fc23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC240u;
        goto label_1fc240;
    }
    ctx->pc = 0x1FC238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC238u;
            // 0x1fc23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC240u;
label_1fc240:
    // 0x1fc240: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1fc244:
    // 0x1fc244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc248:
    // 0x1fc248: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fc248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fc24c:
    // 0x1fc24c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fc24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fc250:
    // 0x1fc250: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fc250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fc254:
    // 0x1fc254: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fc258:
    // 0x1fc258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc25c:
    // 0x1fc25c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc260:
    // 0x1fc260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc264:
    // 0x1fc264: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc268:
    // 0x1fc268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc26c:
    // 0x1fc26c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc270:
    // 0x1fc270: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fc270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fc274:
    // 0x1fc274: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fc274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc278:
    // 0x1fc278: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc27c:
    // 0x1fc27c: 0xc0a7a88  jal         func_29EA20
label_1fc280:
    if (ctx->pc == 0x1FC280u) {
        ctx->pc = 0x1FC280u;
            // 0x1fc280: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FC284u;
        goto label_1fc284;
    }
    ctx->pc = 0x1FC27Cu;
    SET_GPR_U32(ctx, 31, 0x1FC284u);
    ctx->pc = 0x1FC280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC27Cu;
            // 0x1fc280: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC284u; }
        if (ctx->pc != 0x1FC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC284u; }
        if (ctx->pc != 0x1FC284u) { return; }
    }
    ctx->pc = 0x1FC284u;
label_1fc284:
    // 0x1fc284: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc288:
    // 0x1fc288: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fc288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc28c:
    // 0x1fc28c: 0x12a00099  beqz        $s5, . + 4 + (0x99 << 2)
label_1fc290:
    if (ctx->pc == 0x1FC290u) {
        ctx->pc = 0x1FC290u;
            // 0x1fc290: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1FC294u;
        goto label_1fc294;
    }
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC28Cu;
            // 0x1fc290: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC4F4u;
            goto label_1fc4f4;
        }
    }
    ctx->pc = 0x1FC294u;
label_1fc294:
    // 0x1fc294: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc298:
    // 0x1fc298: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fc29c:
    // 0x1fc29c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc29cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc2a0:
    // 0x1fc2a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc2a4:
    // 0x1fc2a4: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fc2a8:
    // 0x1fc2a8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc2ac:
    // 0x1fc2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc2b0:
    // 0x1fc2b0: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x1fc2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_1fc2b4:
    // 0x1fc2b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc2b8:
    // 0x1fc2b8: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fc2bc:
    // 0x1fc2bc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc2c0:
    // 0x1fc2c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc2c4:
    // 0x1fc2c4: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x1fc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_1fc2c8:
    // 0x1fc2c8: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_1fc2cc:
    // 0x1fc2cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc2d0:
    // 0x1fc2d0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fc2d4:
    // 0x1fc2d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fc2d8:
    // 0x1fc2d8: 0xc46f0004  lwc1        $f15, 0x4($v1)
    ctx->pc = 0x1fc2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1fc2dc:
    // 0x1fc2dc: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1fc2e0:
    // 0x1fc2e0: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x1fc2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fc2e4:
    // 0x1fc2e4: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x1fc2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fc2e8:
    // 0x1fc2e8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1fc2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1fc2ec:
    // 0x1fc2ec: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1fc2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fc2f0:
    // 0x1fc2f0: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1fc2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fc2f4:
    // 0x1fc2f4: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1fc2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fc2f8:
    // 0x1fc2f8: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1fc2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fc2fc:
    // 0x1fc2fc: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1fc2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fc300:
    // 0x1fc300: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1fc300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fc304:
    // 0x1fc304: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1fc304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fc308:
    // 0x1fc308: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1fc308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc30c:
    // 0x1fc30c: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1fc30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc310:
    // 0x1fc310: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1fc310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fc314:
    // 0x1fc314: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1fc314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fc318:
    // 0x1fc318: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1fc318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc31c:
    // 0x1fc31c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fc31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc320:
    // 0x1fc320: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fc320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fc324:
    // 0x1fc324: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x1fc324u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fc328:
    // 0x1fc328: 0xe7ae0088  swc1        $f14, 0x88($sp)
    ctx->pc = 0x1fc328u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1fc32c:
    // 0x1fc32c: 0xe7ad008c  swc1        $f13, 0x8C($sp)
    ctx->pc = 0x1fc32cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1fc330:
    // 0x1fc330: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x1fc330u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fc334:
    // 0x1fc334: 0xe7ab0094  swc1        $f11, 0x94($sp)
    ctx->pc = 0x1fc334u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fc338:
    // 0x1fc338: 0xe7aa0098  swc1        $f10, 0x98($sp)
    ctx->pc = 0x1fc338u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fc33c:
    // 0x1fc33c: 0xe7a9009c  swc1        $f9, 0x9C($sp)
    ctx->pc = 0x1fc33cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fc340:
    // 0x1fc340: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x1fc340u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fc344:
    // 0x1fc344: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x1fc344u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fc348:
    // 0x1fc348: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x1fc348u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1fc34c:
    // 0x1fc34c: 0xe7a500ac  swc1        $f5, 0xAC($sp)
    ctx->pc = 0x1fc34cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1fc350:
    // 0x1fc350: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x1fc350u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1fc354:
    // 0x1fc354: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1fc354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1fc358:
    // 0x1fc358: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1fc358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1fc35c:
    // 0x1fc35c: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x1fc35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1fc360:
    // 0x1fc360: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1fc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc364:
    // 0x1fc364: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fc364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fc368:
    // 0x1fc368: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1fc368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc36c:
    // 0x1fc36c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1fc36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1fc370:
    // 0x1fc370: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1fc370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc374:
    // 0x1fc374: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1fc374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1fc378:
    // 0x1fc378: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fc378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc37c:
    // 0x1fc37c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1fc37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1fc380:
    // 0x1fc380: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1fc380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc384:
    // 0x1fc384: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1fc384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fc388:
    // 0x1fc388: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1fc388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc38c:
    // 0x1fc38c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1fc38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1fc390:
    // 0x1fc390: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1fc390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc394:
    // 0x1fc394: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1fc394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fc398:
    // 0x1fc398: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1fc398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc39c:
    // 0x1fc39c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1fc39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1fc3a0:
    // 0x1fc3a0: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1fc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3a4:
    // 0x1fc3a4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1fc3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fc3a8:
    // 0x1fc3a8: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1fc3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3ac:
    // 0x1fc3ac: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1fc3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1fc3b0:
    // 0x1fc3b0: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1fc3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3b4:
    // 0x1fc3b4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1fc3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1fc3b8:
    // 0x1fc3b8: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1fc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3bc:
    // 0x1fc3bc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1fc3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1fc3c0:
    // 0x1fc3c0: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1fc3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3c4:
    // 0x1fc3c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1fc3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fc3c8:
    // 0x1fc3c8: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1fc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3cc:
    // 0x1fc3cc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1fc3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fc3d0:
    // 0x1fc3d0: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1fc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3d4:
    // 0x1fc3d4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1fc3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fc3d8:
    // 0x1fc3d8: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1fc3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3dc:
    // 0x1fc3dc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1fc3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fc3e0:
    // 0x1fc3e0: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1fc3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3e4:
    // 0x1fc3e4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1fc3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1fc3e8:
    // 0x1fc3e8: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1fc3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3ec:
    // 0x1fc3ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1fc3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1fc3f0:
    // 0x1fc3f0: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1fc3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3f4:
    // 0x1fc3f4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1fc3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1fc3f8:
    // 0x1fc3f8: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1fc3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc3fc:
    // 0x1fc3fc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1fc3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1fc400:
    // 0x1fc400: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1fc400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc404:
    // 0x1fc404: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1fc404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1fc408:
    // 0x1fc408: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1fc408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc40c:
    // 0x1fc40c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1fc40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1fc410:
    // 0x1fc410: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1fc410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc414:
    // 0x1fc414: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1fc414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1fc418:
    // 0x1fc418: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1fc418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc41c:
    // 0x1fc41c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1fc41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1fc420:
    // 0x1fc420: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1fc420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc424:
    // 0x1fc424: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1fc424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1fc428:
    // 0x1fc428: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1fc428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc42c:
    // 0x1fc42c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1fc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1fc430:
    // 0x1fc430: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1fc430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc434:
    // 0x1fc434: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1fc434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1fc438:
    // 0x1fc438: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1fc438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc43c:
    // 0x1fc43c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1fc43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1fc440:
    // 0x1fc440: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1fc440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc444:
    // 0x1fc444: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1fc444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1fc448:
    // 0x1fc448: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1fc448u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1fc44c:
    // 0x1fc44c: 0xa7a20134  sh          $v0, 0x134($sp)
    ctx->pc = 0x1fc44cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 308), (uint16_t)GPR_U32(ctx, 2));
label_1fc450:
    // 0x1fc450: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1fc450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1fc454:
    // 0x1fc454: 0xa7a20136  sh          $v0, 0x136($sp)
    ctx->pc = 0x1fc454u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 310), (uint16_t)GPR_U32(ctx, 2));
label_1fc458:
    // 0x1fc458: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1fc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc45c:
    // 0x1fc45c: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1fc45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc460:
    // 0x1fc460: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1fc460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1fc464:
    // 0x1fc464: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1fc464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1fc468:
    // 0x1fc468: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fc46c:
    // 0x1fc46c: 0xc0a456c  jal         func_2915B0
label_1fc470:
    if (ctx->pc == 0x1FC470u) {
        ctx->pc = 0x1FC470u;
            // 0x1fc470: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1FC474u;
        goto label_1fc474;
    }
    ctx->pc = 0x1FC46Cu;
    SET_GPR_U32(ctx, 31, 0x1FC474u);
    ctx->pc = 0x1FC470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC46Cu;
            // 0x1fc470: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC474u; }
        if (ctx->pc != 0x1FC474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC474u; }
        if (ctx->pc != 0x1FC474u) { return; }
    }
    ctx->pc = 0x1FC474u;
label_1fc474:
    // 0x1fc474: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fc478:
    // 0x1fc478: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x1fc478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
label_1fc47c:
    // 0x1fc47c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fc480:
    // 0x1fc480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fc480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc484:
    // 0x1fc484: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1fc484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fc488:
    // 0x1fc488: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fc48c:
    // 0x1fc48c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc490:
    // 0x1fc490: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fc490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fc494:
    // 0x1fc494: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x1fc494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_1fc498:
    // 0x1fc498: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fc49c:
    // 0x1fc49c: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x1fc49cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1fc4a0:
    // 0x1fc4a0: 0x8e89000c  lw          $t1, 0xC($s4)
    ctx->pc = 0x1fc4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fc4a4:
    // 0x1fc4a4: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc4a8:
    // 0x1fc4a8: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fc4ac:
    // 0x1fc4ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fc4acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fc4b0:
    // 0x1fc4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fc4b4:
    if (ctx->pc == 0x1FC4B4u) {
        ctx->pc = 0x1FC4B4u;
            // 0x1fc4b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4B8u;
        goto label_1fc4b8;
    }
    ctx->pc = 0x1FC4B0u;
    {
        const bool branch_taken_0x1fc4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4B0u;
            // 0x1fc4b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4b0) {
            ctx->pc = 0x1FC4C0u;
            goto label_1fc4c0;
        }
    }
    ctx->pc = 0x1FC4B8u;
label_1fc4b8:
    // 0x1fc4b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc4bc:
    if (ctx->pc == 0x1FC4BCu) {
        ctx->pc = 0x1FC4BCu;
            // 0x1fc4bc: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->pc = 0x1FC4C0u;
        goto label_1fc4c0;
    }
    ctx->pc = 0x1FC4B8u;
    {
        const bool branch_taken_0x1fc4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4B8u;
            // 0x1fc4bc: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4b8) {
            ctx->pc = 0x1FC4C4u;
            goto label_1fc4c4;
        }
    }
    ctx->pc = 0x1FC4C0u;
label_1fc4c0:
    // 0x1fc4c0: 0x254301a0  addiu       $v1, $t2, 0x1A0
    ctx->pc = 0x1fc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 416));
label_1fc4c4:
    // 0x1fc4c4: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1fc4c8:
    // 0x1fc4c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fc4cc:
    // 0x1fc4cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fc4d0:
    // 0x1fc4d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fc4d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc4d4:
    // 0x1fc4d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc4d8:
    // 0x1fc4d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc4dc:
    // 0x1fc4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc4e0:
    // 0x1fc4e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1fc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1fc4e4:
    // 0x1fc4e4: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1fc4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1fc4e8:
    // 0x1fc4e8: 0x40f809  jalr        $v0
label_1fc4ec:
    if (ctx->pc == 0x1FC4ECu) {
        ctx->pc = 0x1FC4F0u;
        goto label_1fc4f0;
    }
    ctx->pc = 0x1FC4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC4F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC4F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC4F0u; }
            if (ctx->pc != 0x1FC4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC4F0u;
label_1fc4f0:
    // 0x1fc4f0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1fc4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1fc4f4:
    // 0x1fc4f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1fc4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fc4f8:
    // 0x1fc4f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fc4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fc4fc:
    // 0x1fc4fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fc4fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fc500:
    // 0x1fc500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fc500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc504:
    // 0x1fc504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc508:
    // 0x1fc508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc50c:
    // 0x1fc50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc510:
    // 0x1fc510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc514:
    // 0x1fc514: 0x3e00008  jr          $ra
label_1fc518:
    if (ctx->pc == 0x1FC518u) {
        ctx->pc = 0x1FC518u;
            // 0x1fc518: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1FC51Cu;
        goto label_1fc51c;
    }
    ctx->pc = 0x1FC514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC514u;
            // 0x1fc518: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC51Cu;
label_1fc51c:
    // 0x1fc51c: 0x0  nop
    ctx->pc = 0x1fc51cu;
    // NOP
label_1fc520:
    // 0x1fc520: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1fc524:
    // 0x1fc524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc528:
    // 0x1fc528: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fc528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fc52c:
    // 0x1fc52c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fc52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fc530:
    // 0x1fc530: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fc530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fc534:
    // 0x1fc534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fc538:
    // 0x1fc538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc53c:
    // 0x1fc53c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc540:
    // 0x1fc540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc544:
    // 0x1fc544: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc548:
    // 0x1fc548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc54c:
    // 0x1fc54c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fc54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc550:
    // 0x1fc550: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fc554:
    // 0x1fc554: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fc554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc558:
    // 0x1fc558: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc55c:
    // 0x1fc55c: 0xc0a7a88  jal         func_29EA20
label_1fc560:
    if (ctx->pc == 0x1FC560u) {
        ctx->pc = 0x1FC560u;
            // 0x1fc560: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FC564u;
        goto label_1fc564;
    }
    ctx->pc = 0x1FC55Cu;
    SET_GPR_U32(ctx, 31, 0x1FC564u);
    ctx->pc = 0x1FC560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC55Cu;
            // 0x1fc560: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC564u; }
        if (ctx->pc != 0x1FC564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC564u; }
        if (ctx->pc != 0x1FC564u) { return; }
    }
    ctx->pc = 0x1FC564u;
label_1fc564:
    // 0x1fc564: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1fc564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fc568:
    // 0x1fc568: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fc568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc56c:
    // 0x1fc56c: 0x12a0009f  beqz        $s5, . + 4 + (0x9F << 2)
label_1fc570:
    if (ctx->pc == 0x1FC570u) {
        ctx->pc = 0x1FC570u;
            // 0x1fc570: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1FC574u;
        goto label_1fc574;
    }
    ctx->pc = 0x1FC56Cu;
    {
        const bool branch_taken_0x1fc56c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC56Cu;
            // 0x1fc570: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc56c) {
            ctx->pc = 0x1FC7ECu;
            goto label_1fc7ec;
        }
    }
    ctx->pc = 0x1FC574u;
label_1fc574:
    // 0x1fc574: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc578:
    // 0x1fc578: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fc57c:
    // 0x1fc57c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc580:
    // 0x1fc580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc584:
    // 0x1fc584: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fc584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fc588:
    // 0x1fc588: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc58c:
    // 0x1fc58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc590:
    // 0x1fc590: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x1fc590u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_1fc594:
    // 0x1fc594: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc598:
    // 0x1fc598: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fc59c:
    // 0x1fc59c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc5a0:
    // 0x1fc5a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc5a4:
    // 0x1fc5a4: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x1fc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
label_1fc5a8:
    // 0x1fc5a8: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x1fc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_1fc5ac:
    // 0x1fc5ac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc5acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc5b0:
    // 0x1fc5b0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fc5b4:
    // 0x1fc5b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fc5b8:
    // 0x1fc5b8: 0xc46f0004  lwc1        $f15, 0x4($v1)
    ctx->pc = 0x1fc5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1fc5bc:
    // 0x1fc5bc: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x1fc5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1fc5c0:
    // 0x1fc5c0: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x1fc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fc5c4:
    // 0x1fc5c4: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x1fc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fc5c8:
    // 0x1fc5c8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1fc5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1fc5cc:
    // 0x1fc5cc: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1fc5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fc5d0:
    // 0x1fc5d0: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1fc5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fc5d4:
    // 0x1fc5d4: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1fc5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fc5d8:
    // 0x1fc5d8: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1fc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fc5dc:
    // 0x1fc5dc: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1fc5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fc5e0:
    // 0x1fc5e0: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1fc5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fc5e4:
    // 0x1fc5e4: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1fc5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fc5e8:
    // 0x1fc5e8: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1fc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc5ec:
    // 0x1fc5ec: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1fc5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc5f0:
    // 0x1fc5f0: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1fc5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fc5f4:
    // 0x1fc5f4: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1fc5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fc5f8:
    // 0x1fc5f8: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1fc5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc5fc:
    // 0x1fc5fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fc5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc600:
    // 0x1fc600: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fc600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fc604:
    // 0x1fc604: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x1fc604u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fc608:
    // 0x1fc608: 0xe7ae0088  swc1        $f14, 0x88($sp)
    ctx->pc = 0x1fc608u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1fc60c:
    // 0x1fc60c: 0xe7ad008c  swc1        $f13, 0x8C($sp)
    ctx->pc = 0x1fc60cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1fc610:
    // 0x1fc610: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x1fc610u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fc614:
    // 0x1fc614: 0xe7ab0094  swc1        $f11, 0x94($sp)
    ctx->pc = 0x1fc614u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fc618:
    // 0x1fc618: 0xe7aa0098  swc1        $f10, 0x98($sp)
    ctx->pc = 0x1fc618u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fc61c:
    // 0x1fc61c: 0xe7a9009c  swc1        $f9, 0x9C($sp)
    ctx->pc = 0x1fc61cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fc620:
    // 0x1fc620: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x1fc620u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fc624:
    // 0x1fc624: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x1fc624u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fc628:
    // 0x1fc628: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x1fc628u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1fc62c:
    // 0x1fc62c: 0xe7a500ac  swc1        $f5, 0xAC($sp)
    ctx->pc = 0x1fc62cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1fc630:
    // 0x1fc630: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x1fc630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1fc634:
    // 0x1fc634: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1fc634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1fc638:
    // 0x1fc638: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1fc638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1fc63c:
    // 0x1fc63c: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x1fc63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1fc640:
    // 0x1fc640: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1fc640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc644:
    // 0x1fc644: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fc644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fc648:
    // 0x1fc648: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1fc648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc64c:
    // 0x1fc64c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1fc64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1fc650:
    // 0x1fc650: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1fc650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc654:
    // 0x1fc654: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1fc654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1fc658:
    // 0x1fc658: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fc658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc65c:
    // 0x1fc65c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1fc65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1fc660:
    // 0x1fc660: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1fc660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc664:
    // 0x1fc664: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1fc664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fc668:
    // 0x1fc668: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1fc668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc66c:
    // 0x1fc66c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1fc66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1fc670:
    // 0x1fc670: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1fc670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc674:
    // 0x1fc674: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1fc674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fc678:
    // 0x1fc678: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1fc678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc67c:
    // 0x1fc67c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1fc67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1fc680:
    // 0x1fc680: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1fc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc684:
    // 0x1fc684: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1fc684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fc688:
    // 0x1fc688: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1fc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc68c:
    // 0x1fc68c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1fc68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1fc690:
    // 0x1fc690: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1fc690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc694:
    // 0x1fc694: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1fc694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1fc698:
    // 0x1fc698: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1fc698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc69c:
    // 0x1fc69c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1fc69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1fc6a0:
    // 0x1fc6a0: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1fc6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6a4:
    // 0x1fc6a4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1fc6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fc6a8:
    // 0x1fc6a8: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1fc6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6ac:
    // 0x1fc6ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1fc6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fc6b0:
    // 0x1fc6b0: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1fc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6b4:
    // 0x1fc6b4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1fc6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fc6b8:
    // 0x1fc6b8: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1fc6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6bc:
    // 0x1fc6bc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1fc6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fc6c0:
    // 0x1fc6c0: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1fc6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6c4:
    // 0x1fc6c4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1fc6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1fc6c8:
    // 0x1fc6c8: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1fc6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6cc:
    // 0x1fc6cc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1fc6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1fc6d0:
    // 0x1fc6d0: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1fc6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6d4:
    // 0x1fc6d4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1fc6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1fc6d8:
    // 0x1fc6d8: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1fc6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6dc:
    // 0x1fc6dc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1fc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1fc6e0:
    // 0x1fc6e0: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1fc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6e4:
    // 0x1fc6e4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1fc6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1fc6e8:
    // 0x1fc6e8: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1fc6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6ec:
    // 0x1fc6ec: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1fc6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1fc6f0:
    // 0x1fc6f0: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1fc6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6f4:
    // 0x1fc6f4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1fc6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1fc6f8:
    // 0x1fc6f8: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1fc6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc6fc:
    // 0x1fc6fc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1fc6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1fc700:
    // 0x1fc700: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1fc700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc704:
    // 0x1fc704: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1fc704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1fc708:
    // 0x1fc708: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1fc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc70c:
    // 0x1fc70c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1fc70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1fc710:
    // 0x1fc710: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1fc710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc714:
    // 0x1fc714: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1fc714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1fc718:
    // 0x1fc718: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1fc718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc71c:
    // 0x1fc71c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1fc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1fc720:
    // 0x1fc720: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1fc720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc724:
    // 0x1fc724: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1fc724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1fc728:
    // 0x1fc728: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1fc728u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1fc72c:
    // 0x1fc72c: 0xa7a20134  sh          $v0, 0x134($sp)
    ctx->pc = 0x1fc72cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 308), (uint16_t)GPR_U32(ctx, 2));
label_1fc730:
    // 0x1fc730: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1fc730u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1fc734:
    // 0x1fc734: 0xa7a20136  sh          $v0, 0x136($sp)
    ctx->pc = 0x1fc734u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 310), (uint16_t)GPR_U32(ctx, 2));
label_1fc738:
    // 0x1fc738: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1fc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc73c:
    // 0x1fc73c: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1fc73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc740:
    // 0x1fc740: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1fc740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1fc744:
    // 0x1fc744: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1fc744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1fc748:
    // 0x1fc748: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fc74c:
    // 0x1fc74c: 0xc0a456c  jal         func_2915B0
label_1fc750:
    if (ctx->pc == 0x1FC750u) {
        ctx->pc = 0x1FC750u;
            // 0x1fc750: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1FC754u;
        goto label_1fc754;
    }
    ctx->pc = 0x1FC74Cu;
    SET_GPR_U32(ctx, 31, 0x1FC754u);
    ctx->pc = 0x1FC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC74Cu;
            // 0x1fc750: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC754u; }
        if (ctx->pc != 0x1FC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC754u; }
        if (ctx->pc != 0x1FC754u) { return; }
    }
    ctx->pc = 0x1FC754u;
label_1fc754:
    // 0x1fc754: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fc758:
    // 0x1fc758: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x1fc758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_1fc75c:
    // 0x1fc75c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fc760:
    // 0x1fc760: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fc760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc764:
    // 0x1fc764: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fc768:
    // 0x1fc768: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fc76c:
    // 0x1fc76c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fc76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fc770:
    // 0x1fc770: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fc770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fc774:
    // 0x1fc774: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x1fc774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_1fc778:
    // 0x1fc778: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fc778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fc77c:
    // 0x1fc77c: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1fc780:
    // 0x1fc780: 0x8e89000c  lw          $t1, 0xC($s4)
    ctx->pc = 0x1fc780u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fc784:
    // 0x1fc784: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc788:
    // 0x1fc788: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fc78c:
    // 0x1fc78c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fc78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fc790:
    // 0x1fc790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fc794:
    if (ctx->pc == 0x1FC794u) {
        ctx->pc = 0x1FC794u;
            // 0x1fc794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC798u;
        goto label_1fc798;
    }
    ctx->pc = 0x1FC790u;
    {
        const bool branch_taken_0x1fc790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC790u;
            // 0x1fc794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc790) {
            ctx->pc = 0x1FC7A0u;
            goto label_1fc7a0;
        }
    }
    ctx->pc = 0x1FC798u;
label_1fc798:
    // 0x1fc798: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc79c:
    if (ctx->pc == 0x1FC79Cu) {
        ctx->pc = 0x1FC79Cu;
            // 0x1fc79c: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->pc = 0x1FC7A0u;
        goto label_1fc7a0;
    }
    ctx->pc = 0x1FC798u;
    {
        const bool branch_taken_0x1fc798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC798u;
            // 0x1fc79c: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc798) {
            ctx->pc = 0x1FC7A4u;
            goto label_1fc7a4;
        }
    }
    ctx->pc = 0x1FC7A0u;
label_1fc7a0:
    // 0x1fc7a0: 0x254301a0  addiu       $v1, $t2, 0x1A0
    ctx->pc = 0x1fc7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 416));
label_1fc7a4:
    // 0x1fc7a4: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1fc7a8:
    // 0x1fc7a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fc7ac:
    // 0x1fc7ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fc7b0:
    // 0x1fc7b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fc7b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc7b4:
    // 0x1fc7b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc7b8:
    // 0x1fc7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc7bc:
    // 0x1fc7bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc7c0:
    // 0x1fc7c0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1fc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1fc7c4:
    // 0x1fc7c4: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1fc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1fc7c8:
    // 0x1fc7c8: 0x40f809  jalr        $v0
label_1fc7cc:
    if (ctx->pc == 0x1FC7CCu) {
        ctx->pc = 0x1FC7D0u;
        goto label_1fc7d0;
    }
    ctx->pc = 0x1FC7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC7D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC7D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC7D0u; }
            if (ctx->pc != 0x1FC7D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC7D0u;
label_1fc7d0:
    // 0x1fc7d0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1fc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1fc7d4:
    // 0x1fc7d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc7d8:
    // 0x1fc7d8: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
label_1fc7dc:
    // 0x1fc7dc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc7e0:
    // 0x1fc7e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc7e4:
    // 0x1fc7e4: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x1fc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
label_1fc7e8:
    // 0x1fc7e8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fc7ec:
    // 0x1fc7ec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1fc7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7f0:
    // 0x1fc7f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fc7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fc7f4:
    // 0x1fc7f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fc7f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fc7f8:
    // 0x1fc7f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fc7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc7fc:
    // 0x1fc7fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc800:
    // 0x1fc800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc804:
    // 0x1fc804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc808:
    // 0x1fc808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc80c:
    // 0x1fc80c: 0x3e00008  jr          $ra
label_1fc810:
    if (ctx->pc == 0x1FC810u) {
        ctx->pc = 0x1FC810u;
            // 0x1fc810: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1FC814u;
        goto label_1fc814;
    }
    ctx->pc = 0x1FC80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC80Cu;
            // 0x1fc810: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC814u;
label_1fc814:
    // 0x1fc814: 0x0  nop
    ctx->pc = 0x1fc814u;
    // NOP
label_1fc818:
    // 0x1fc818: 0x0  nop
    ctx->pc = 0x1fc818u;
    // NOP
label_1fc81c:
    // 0x1fc81c: 0x0  nop
    ctx->pc = 0x1fc81cu;
    // NOP
label_1fc820:
    // 0x1fc820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc824:
    // 0x1fc824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc828:
    // 0x1fc828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc82c:
    // 0x1fc82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc830:
    // 0x1fc830: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1fc834:
    if (ctx->pc == 0x1FC834u) {
        ctx->pc = 0x1FC834u;
            // 0x1fc834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC838u;
        goto label_1fc838;
    }
    ctx->pc = 0x1FC830u;
    {
        const bool branch_taken_0x1fc830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc830) {
            ctx->pc = 0x1FC834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC830u;
            // 0x1fc834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8B0u;
            goto label_1fc8b0;
        }
    }
    ctx->pc = 0x1FC838u;
label_1fc838:
    // 0x1fc838: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc83c:
    // 0x1fc83c: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x1fc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
label_1fc840:
    // 0x1fc840: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1fc844:
    if (ctx->pc == 0x1FC844u) {
        ctx->pc = 0x1FC844u;
            // 0x1fc844: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC848u;
        goto label_1fc848;
    }
    ctx->pc = 0x1FC840u;
    {
        const bool branch_taken_0x1fc840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC840u;
            // 0x1fc844: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc840) {
            ctx->pc = 0x1FC884u;
            goto label_1fc884;
        }
    }
    ctx->pc = 0x1FC848u;
label_1fc848:
    // 0x1fc848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc84c:
    // 0x1fc84c: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x1fc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_1fc850:
    // 0x1fc850: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fc854:
    if (ctx->pc == 0x1FC854u) {
        ctx->pc = 0x1FC854u;
            // 0x1fc854: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC858u;
        goto label_1fc858;
    }
    ctx->pc = 0x1FC850u;
    {
        const bool branch_taken_0x1fc850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC850u;
            // 0x1fc854: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc850) {
            ctx->pc = 0x1FC884u;
            goto label_1fc884;
        }
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc85c:
    // 0x1fc85c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fc860:
    // 0x1fc860: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1fc864:
    if (ctx->pc == 0x1FC864u) {
        ctx->pc = 0x1FC864u;
            // 0x1fc864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC868u;
        goto label_1fc868;
    }
    ctx->pc = 0x1FC860u;
    {
        const bool branch_taken_0x1fc860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC860u;
            // 0x1fc864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc860) {
            ctx->pc = 0x1FC884u;
            goto label_1fc884;
        }
    }
    ctx->pc = 0x1FC868u;
label_1fc868:
    // 0x1fc868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc86c:
    // 0x1fc86c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fc870:
    // 0x1fc870: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fc874:
    if (ctx->pc == 0x1FC874u) {
        ctx->pc = 0x1FC874u;
            // 0x1fc874: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FC878u;
        goto label_1fc878;
    }
    ctx->pc = 0x1FC870u;
    {
        const bool branch_taken_0x1fc870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC870u;
            // 0x1fc874: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc870) {
            ctx->pc = 0x1FC884u;
            goto label_1fc884;
        }
    }
    ctx->pc = 0x1FC878u;
label_1fc878:
    // 0x1fc878: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fc87c:
    // 0x1fc87c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fc880:
    // 0x1fc880: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fc880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fc884:
    // 0x1fc884: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fc884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fc888:
    // 0x1fc888: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fc888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fc88c:
    // 0x1fc88c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1fc890:
    if (ctx->pc == 0x1FC890u) {
        ctx->pc = 0x1FC894u;
        goto label_1fc894;
    }
    ctx->pc = 0x1FC88Cu;
    {
        const bool branch_taken_0x1fc88c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fc88c) {
            ctx->pc = 0x1FC8ACu;
            goto label_1fc8ac;
        }
    }
    ctx->pc = 0x1FC894u;
label_1fc894:
    // 0x1fc894: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc898:
    // 0x1fc898: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1fc898u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1fc89c:
    // 0x1fc89c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fc89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fc8a0:
    // 0x1fc8a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8a4:
    // 0x1fc8a4: 0xc0a7ab4  jal         func_29EAD0
label_1fc8a8:
    if (ctx->pc == 0x1FC8A8u) {
        ctx->pc = 0x1FC8A8u;
            // 0x1fc8a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FC8ACu;
        goto label_1fc8ac;
    }
    ctx->pc = 0x1FC8A4u;
    SET_GPR_U32(ctx, 31, 0x1FC8ACu);
    ctx->pc = 0x1FC8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8A4u;
            // 0x1fc8a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8ACu; }
        if (ctx->pc != 0x1FC8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8ACu; }
        if (ctx->pc != 0x1FC8ACu) { return; }
    }
    ctx->pc = 0x1FC8ACu;
label_1fc8ac:
    // 0x1fc8ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8b0:
    // 0x1fc8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc8b4:
    // 0x1fc8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc8b8:
    // 0x1fc8b8: 0x3e00008  jr          $ra
label_1fc8bc:
    if (ctx->pc == 0x1FC8BCu) {
        ctx->pc = 0x1FC8BCu;
            // 0x1fc8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC8C0u;
        goto label_fallthrough_0x1fc8b8;
    }
    ctx->pc = 0x1FC8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8B8u;
            // 0x1fc8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fc8b8:
    ctx->pc = 0x1FC8C0u;
}
