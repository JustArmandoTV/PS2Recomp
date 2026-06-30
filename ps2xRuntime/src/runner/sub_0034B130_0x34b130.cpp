#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034B130
// Address: 0x34b130 - 0x34bd00
void sub_0034B130_0x34b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B130_0x34b130");
#endif

    switch (ctx->pc) {
        case 0x34b130u: goto label_34b130;
        case 0x34b134u: goto label_34b134;
        case 0x34b138u: goto label_34b138;
        case 0x34b13cu: goto label_34b13c;
        case 0x34b140u: goto label_34b140;
        case 0x34b144u: goto label_34b144;
        case 0x34b148u: goto label_34b148;
        case 0x34b14cu: goto label_34b14c;
        case 0x34b150u: goto label_34b150;
        case 0x34b154u: goto label_34b154;
        case 0x34b158u: goto label_34b158;
        case 0x34b15cu: goto label_34b15c;
        case 0x34b160u: goto label_34b160;
        case 0x34b164u: goto label_34b164;
        case 0x34b168u: goto label_34b168;
        case 0x34b16cu: goto label_34b16c;
        case 0x34b170u: goto label_34b170;
        case 0x34b174u: goto label_34b174;
        case 0x34b178u: goto label_34b178;
        case 0x34b17cu: goto label_34b17c;
        case 0x34b180u: goto label_34b180;
        case 0x34b184u: goto label_34b184;
        case 0x34b188u: goto label_34b188;
        case 0x34b18cu: goto label_34b18c;
        case 0x34b190u: goto label_34b190;
        case 0x34b194u: goto label_34b194;
        case 0x34b198u: goto label_34b198;
        case 0x34b19cu: goto label_34b19c;
        case 0x34b1a0u: goto label_34b1a0;
        case 0x34b1a4u: goto label_34b1a4;
        case 0x34b1a8u: goto label_34b1a8;
        case 0x34b1acu: goto label_34b1ac;
        case 0x34b1b0u: goto label_34b1b0;
        case 0x34b1b4u: goto label_34b1b4;
        case 0x34b1b8u: goto label_34b1b8;
        case 0x34b1bcu: goto label_34b1bc;
        case 0x34b1c0u: goto label_34b1c0;
        case 0x34b1c4u: goto label_34b1c4;
        case 0x34b1c8u: goto label_34b1c8;
        case 0x34b1ccu: goto label_34b1cc;
        case 0x34b1d0u: goto label_34b1d0;
        case 0x34b1d4u: goto label_34b1d4;
        case 0x34b1d8u: goto label_34b1d8;
        case 0x34b1dcu: goto label_34b1dc;
        case 0x34b1e0u: goto label_34b1e0;
        case 0x34b1e4u: goto label_34b1e4;
        case 0x34b1e8u: goto label_34b1e8;
        case 0x34b1ecu: goto label_34b1ec;
        case 0x34b1f0u: goto label_34b1f0;
        case 0x34b1f4u: goto label_34b1f4;
        case 0x34b1f8u: goto label_34b1f8;
        case 0x34b1fcu: goto label_34b1fc;
        case 0x34b200u: goto label_34b200;
        case 0x34b204u: goto label_34b204;
        case 0x34b208u: goto label_34b208;
        case 0x34b20cu: goto label_34b20c;
        case 0x34b210u: goto label_34b210;
        case 0x34b214u: goto label_34b214;
        case 0x34b218u: goto label_34b218;
        case 0x34b21cu: goto label_34b21c;
        case 0x34b220u: goto label_34b220;
        case 0x34b224u: goto label_34b224;
        case 0x34b228u: goto label_34b228;
        case 0x34b22cu: goto label_34b22c;
        case 0x34b230u: goto label_34b230;
        case 0x34b234u: goto label_34b234;
        case 0x34b238u: goto label_34b238;
        case 0x34b23cu: goto label_34b23c;
        case 0x34b240u: goto label_34b240;
        case 0x34b244u: goto label_34b244;
        case 0x34b248u: goto label_34b248;
        case 0x34b24cu: goto label_34b24c;
        case 0x34b250u: goto label_34b250;
        case 0x34b254u: goto label_34b254;
        case 0x34b258u: goto label_34b258;
        case 0x34b25cu: goto label_34b25c;
        case 0x34b260u: goto label_34b260;
        case 0x34b264u: goto label_34b264;
        case 0x34b268u: goto label_34b268;
        case 0x34b26cu: goto label_34b26c;
        case 0x34b270u: goto label_34b270;
        case 0x34b274u: goto label_34b274;
        case 0x34b278u: goto label_34b278;
        case 0x34b27cu: goto label_34b27c;
        case 0x34b280u: goto label_34b280;
        case 0x34b284u: goto label_34b284;
        case 0x34b288u: goto label_34b288;
        case 0x34b28cu: goto label_34b28c;
        case 0x34b290u: goto label_34b290;
        case 0x34b294u: goto label_34b294;
        case 0x34b298u: goto label_34b298;
        case 0x34b29cu: goto label_34b29c;
        case 0x34b2a0u: goto label_34b2a0;
        case 0x34b2a4u: goto label_34b2a4;
        case 0x34b2a8u: goto label_34b2a8;
        case 0x34b2acu: goto label_34b2ac;
        case 0x34b2b0u: goto label_34b2b0;
        case 0x34b2b4u: goto label_34b2b4;
        case 0x34b2b8u: goto label_34b2b8;
        case 0x34b2bcu: goto label_34b2bc;
        case 0x34b2c0u: goto label_34b2c0;
        case 0x34b2c4u: goto label_34b2c4;
        case 0x34b2c8u: goto label_34b2c8;
        case 0x34b2ccu: goto label_34b2cc;
        case 0x34b2d0u: goto label_34b2d0;
        case 0x34b2d4u: goto label_34b2d4;
        case 0x34b2d8u: goto label_34b2d8;
        case 0x34b2dcu: goto label_34b2dc;
        case 0x34b2e0u: goto label_34b2e0;
        case 0x34b2e4u: goto label_34b2e4;
        case 0x34b2e8u: goto label_34b2e8;
        case 0x34b2ecu: goto label_34b2ec;
        case 0x34b2f0u: goto label_34b2f0;
        case 0x34b2f4u: goto label_34b2f4;
        case 0x34b2f8u: goto label_34b2f8;
        case 0x34b2fcu: goto label_34b2fc;
        case 0x34b300u: goto label_34b300;
        case 0x34b304u: goto label_34b304;
        case 0x34b308u: goto label_34b308;
        case 0x34b30cu: goto label_34b30c;
        case 0x34b310u: goto label_34b310;
        case 0x34b314u: goto label_34b314;
        case 0x34b318u: goto label_34b318;
        case 0x34b31cu: goto label_34b31c;
        case 0x34b320u: goto label_34b320;
        case 0x34b324u: goto label_34b324;
        case 0x34b328u: goto label_34b328;
        case 0x34b32cu: goto label_34b32c;
        case 0x34b330u: goto label_34b330;
        case 0x34b334u: goto label_34b334;
        case 0x34b338u: goto label_34b338;
        case 0x34b33cu: goto label_34b33c;
        case 0x34b340u: goto label_34b340;
        case 0x34b344u: goto label_34b344;
        case 0x34b348u: goto label_34b348;
        case 0x34b34cu: goto label_34b34c;
        case 0x34b350u: goto label_34b350;
        case 0x34b354u: goto label_34b354;
        case 0x34b358u: goto label_34b358;
        case 0x34b35cu: goto label_34b35c;
        case 0x34b360u: goto label_34b360;
        case 0x34b364u: goto label_34b364;
        case 0x34b368u: goto label_34b368;
        case 0x34b36cu: goto label_34b36c;
        case 0x34b370u: goto label_34b370;
        case 0x34b374u: goto label_34b374;
        case 0x34b378u: goto label_34b378;
        case 0x34b37cu: goto label_34b37c;
        case 0x34b380u: goto label_34b380;
        case 0x34b384u: goto label_34b384;
        case 0x34b388u: goto label_34b388;
        case 0x34b38cu: goto label_34b38c;
        case 0x34b390u: goto label_34b390;
        case 0x34b394u: goto label_34b394;
        case 0x34b398u: goto label_34b398;
        case 0x34b39cu: goto label_34b39c;
        case 0x34b3a0u: goto label_34b3a0;
        case 0x34b3a4u: goto label_34b3a4;
        case 0x34b3a8u: goto label_34b3a8;
        case 0x34b3acu: goto label_34b3ac;
        case 0x34b3b0u: goto label_34b3b0;
        case 0x34b3b4u: goto label_34b3b4;
        case 0x34b3b8u: goto label_34b3b8;
        case 0x34b3bcu: goto label_34b3bc;
        case 0x34b3c0u: goto label_34b3c0;
        case 0x34b3c4u: goto label_34b3c4;
        case 0x34b3c8u: goto label_34b3c8;
        case 0x34b3ccu: goto label_34b3cc;
        case 0x34b3d0u: goto label_34b3d0;
        case 0x34b3d4u: goto label_34b3d4;
        case 0x34b3d8u: goto label_34b3d8;
        case 0x34b3dcu: goto label_34b3dc;
        case 0x34b3e0u: goto label_34b3e0;
        case 0x34b3e4u: goto label_34b3e4;
        case 0x34b3e8u: goto label_34b3e8;
        case 0x34b3ecu: goto label_34b3ec;
        case 0x34b3f0u: goto label_34b3f0;
        case 0x34b3f4u: goto label_34b3f4;
        case 0x34b3f8u: goto label_34b3f8;
        case 0x34b3fcu: goto label_34b3fc;
        case 0x34b400u: goto label_34b400;
        case 0x34b404u: goto label_34b404;
        case 0x34b408u: goto label_34b408;
        case 0x34b40cu: goto label_34b40c;
        case 0x34b410u: goto label_34b410;
        case 0x34b414u: goto label_34b414;
        case 0x34b418u: goto label_34b418;
        case 0x34b41cu: goto label_34b41c;
        case 0x34b420u: goto label_34b420;
        case 0x34b424u: goto label_34b424;
        case 0x34b428u: goto label_34b428;
        case 0x34b42cu: goto label_34b42c;
        case 0x34b430u: goto label_34b430;
        case 0x34b434u: goto label_34b434;
        case 0x34b438u: goto label_34b438;
        case 0x34b43cu: goto label_34b43c;
        case 0x34b440u: goto label_34b440;
        case 0x34b444u: goto label_34b444;
        case 0x34b448u: goto label_34b448;
        case 0x34b44cu: goto label_34b44c;
        case 0x34b450u: goto label_34b450;
        case 0x34b454u: goto label_34b454;
        case 0x34b458u: goto label_34b458;
        case 0x34b45cu: goto label_34b45c;
        case 0x34b460u: goto label_34b460;
        case 0x34b464u: goto label_34b464;
        case 0x34b468u: goto label_34b468;
        case 0x34b46cu: goto label_34b46c;
        case 0x34b470u: goto label_34b470;
        case 0x34b474u: goto label_34b474;
        case 0x34b478u: goto label_34b478;
        case 0x34b47cu: goto label_34b47c;
        case 0x34b480u: goto label_34b480;
        case 0x34b484u: goto label_34b484;
        case 0x34b488u: goto label_34b488;
        case 0x34b48cu: goto label_34b48c;
        case 0x34b490u: goto label_34b490;
        case 0x34b494u: goto label_34b494;
        case 0x34b498u: goto label_34b498;
        case 0x34b49cu: goto label_34b49c;
        case 0x34b4a0u: goto label_34b4a0;
        case 0x34b4a4u: goto label_34b4a4;
        case 0x34b4a8u: goto label_34b4a8;
        case 0x34b4acu: goto label_34b4ac;
        case 0x34b4b0u: goto label_34b4b0;
        case 0x34b4b4u: goto label_34b4b4;
        case 0x34b4b8u: goto label_34b4b8;
        case 0x34b4bcu: goto label_34b4bc;
        case 0x34b4c0u: goto label_34b4c0;
        case 0x34b4c4u: goto label_34b4c4;
        case 0x34b4c8u: goto label_34b4c8;
        case 0x34b4ccu: goto label_34b4cc;
        case 0x34b4d0u: goto label_34b4d0;
        case 0x34b4d4u: goto label_34b4d4;
        case 0x34b4d8u: goto label_34b4d8;
        case 0x34b4dcu: goto label_34b4dc;
        case 0x34b4e0u: goto label_34b4e0;
        case 0x34b4e4u: goto label_34b4e4;
        case 0x34b4e8u: goto label_34b4e8;
        case 0x34b4ecu: goto label_34b4ec;
        case 0x34b4f0u: goto label_34b4f0;
        case 0x34b4f4u: goto label_34b4f4;
        case 0x34b4f8u: goto label_34b4f8;
        case 0x34b4fcu: goto label_34b4fc;
        case 0x34b500u: goto label_34b500;
        case 0x34b504u: goto label_34b504;
        case 0x34b508u: goto label_34b508;
        case 0x34b50cu: goto label_34b50c;
        case 0x34b510u: goto label_34b510;
        case 0x34b514u: goto label_34b514;
        case 0x34b518u: goto label_34b518;
        case 0x34b51cu: goto label_34b51c;
        case 0x34b520u: goto label_34b520;
        case 0x34b524u: goto label_34b524;
        case 0x34b528u: goto label_34b528;
        case 0x34b52cu: goto label_34b52c;
        case 0x34b530u: goto label_34b530;
        case 0x34b534u: goto label_34b534;
        case 0x34b538u: goto label_34b538;
        case 0x34b53cu: goto label_34b53c;
        case 0x34b540u: goto label_34b540;
        case 0x34b544u: goto label_34b544;
        case 0x34b548u: goto label_34b548;
        case 0x34b54cu: goto label_34b54c;
        case 0x34b550u: goto label_34b550;
        case 0x34b554u: goto label_34b554;
        case 0x34b558u: goto label_34b558;
        case 0x34b55cu: goto label_34b55c;
        case 0x34b560u: goto label_34b560;
        case 0x34b564u: goto label_34b564;
        case 0x34b568u: goto label_34b568;
        case 0x34b56cu: goto label_34b56c;
        case 0x34b570u: goto label_34b570;
        case 0x34b574u: goto label_34b574;
        case 0x34b578u: goto label_34b578;
        case 0x34b57cu: goto label_34b57c;
        case 0x34b580u: goto label_34b580;
        case 0x34b584u: goto label_34b584;
        case 0x34b588u: goto label_34b588;
        case 0x34b58cu: goto label_34b58c;
        case 0x34b590u: goto label_34b590;
        case 0x34b594u: goto label_34b594;
        case 0x34b598u: goto label_34b598;
        case 0x34b59cu: goto label_34b59c;
        case 0x34b5a0u: goto label_34b5a0;
        case 0x34b5a4u: goto label_34b5a4;
        case 0x34b5a8u: goto label_34b5a8;
        case 0x34b5acu: goto label_34b5ac;
        case 0x34b5b0u: goto label_34b5b0;
        case 0x34b5b4u: goto label_34b5b4;
        case 0x34b5b8u: goto label_34b5b8;
        case 0x34b5bcu: goto label_34b5bc;
        case 0x34b5c0u: goto label_34b5c0;
        case 0x34b5c4u: goto label_34b5c4;
        case 0x34b5c8u: goto label_34b5c8;
        case 0x34b5ccu: goto label_34b5cc;
        case 0x34b5d0u: goto label_34b5d0;
        case 0x34b5d4u: goto label_34b5d4;
        case 0x34b5d8u: goto label_34b5d8;
        case 0x34b5dcu: goto label_34b5dc;
        case 0x34b5e0u: goto label_34b5e0;
        case 0x34b5e4u: goto label_34b5e4;
        case 0x34b5e8u: goto label_34b5e8;
        case 0x34b5ecu: goto label_34b5ec;
        case 0x34b5f0u: goto label_34b5f0;
        case 0x34b5f4u: goto label_34b5f4;
        case 0x34b5f8u: goto label_34b5f8;
        case 0x34b5fcu: goto label_34b5fc;
        case 0x34b600u: goto label_34b600;
        case 0x34b604u: goto label_34b604;
        case 0x34b608u: goto label_34b608;
        case 0x34b60cu: goto label_34b60c;
        case 0x34b610u: goto label_34b610;
        case 0x34b614u: goto label_34b614;
        case 0x34b618u: goto label_34b618;
        case 0x34b61cu: goto label_34b61c;
        case 0x34b620u: goto label_34b620;
        case 0x34b624u: goto label_34b624;
        case 0x34b628u: goto label_34b628;
        case 0x34b62cu: goto label_34b62c;
        case 0x34b630u: goto label_34b630;
        case 0x34b634u: goto label_34b634;
        case 0x34b638u: goto label_34b638;
        case 0x34b63cu: goto label_34b63c;
        case 0x34b640u: goto label_34b640;
        case 0x34b644u: goto label_34b644;
        case 0x34b648u: goto label_34b648;
        case 0x34b64cu: goto label_34b64c;
        case 0x34b650u: goto label_34b650;
        case 0x34b654u: goto label_34b654;
        case 0x34b658u: goto label_34b658;
        case 0x34b65cu: goto label_34b65c;
        case 0x34b660u: goto label_34b660;
        case 0x34b664u: goto label_34b664;
        case 0x34b668u: goto label_34b668;
        case 0x34b66cu: goto label_34b66c;
        case 0x34b670u: goto label_34b670;
        case 0x34b674u: goto label_34b674;
        case 0x34b678u: goto label_34b678;
        case 0x34b67cu: goto label_34b67c;
        case 0x34b680u: goto label_34b680;
        case 0x34b684u: goto label_34b684;
        case 0x34b688u: goto label_34b688;
        case 0x34b68cu: goto label_34b68c;
        case 0x34b690u: goto label_34b690;
        case 0x34b694u: goto label_34b694;
        case 0x34b698u: goto label_34b698;
        case 0x34b69cu: goto label_34b69c;
        case 0x34b6a0u: goto label_34b6a0;
        case 0x34b6a4u: goto label_34b6a4;
        case 0x34b6a8u: goto label_34b6a8;
        case 0x34b6acu: goto label_34b6ac;
        case 0x34b6b0u: goto label_34b6b0;
        case 0x34b6b4u: goto label_34b6b4;
        case 0x34b6b8u: goto label_34b6b8;
        case 0x34b6bcu: goto label_34b6bc;
        case 0x34b6c0u: goto label_34b6c0;
        case 0x34b6c4u: goto label_34b6c4;
        case 0x34b6c8u: goto label_34b6c8;
        case 0x34b6ccu: goto label_34b6cc;
        case 0x34b6d0u: goto label_34b6d0;
        case 0x34b6d4u: goto label_34b6d4;
        case 0x34b6d8u: goto label_34b6d8;
        case 0x34b6dcu: goto label_34b6dc;
        case 0x34b6e0u: goto label_34b6e0;
        case 0x34b6e4u: goto label_34b6e4;
        case 0x34b6e8u: goto label_34b6e8;
        case 0x34b6ecu: goto label_34b6ec;
        case 0x34b6f0u: goto label_34b6f0;
        case 0x34b6f4u: goto label_34b6f4;
        case 0x34b6f8u: goto label_34b6f8;
        case 0x34b6fcu: goto label_34b6fc;
        case 0x34b700u: goto label_34b700;
        case 0x34b704u: goto label_34b704;
        case 0x34b708u: goto label_34b708;
        case 0x34b70cu: goto label_34b70c;
        case 0x34b710u: goto label_34b710;
        case 0x34b714u: goto label_34b714;
        case 0x34b718u: goto label_34b718;
        case 0x34b71cu: goto label_34b71c;
        case 0x34b720u: goto label_34b720;
        case 0x34b724u: goto label_34b724;
        case 0x34b728u: goto label_34b728;
        case 0x34b72cu: goto label_34b72c;
        case 0x34b730u: goto label_34b730;
        case 0x34b734u: goto label_34b734;
        case 0x34b738u: goto label_34b738;
        case 0x34b73cu: goto label_34b73c;
        case 0x34b740u: goto label_34b740;
        case 0x34b744u: goto label_34b744;
        case 0x34b748u: goto label_34b748;
        case 0x34b74cu: goto label_34b74c;
        case 0x34b750u: goto label_34b750;
        case 0x34b754u: goto label_34b754;
        case 0x34b758u: goto label_34b758;
        case 0x34b75cu: goto label_34b75c;
        case 0x34b760u: goto label_34b760;
        case 0x34b764u: goto label_34b764;
        case 0x34b768u: goto label_34b768;
        case 0x34b76cu: goto label_34b76c;
        case 0x34b770u: goto label_34b770;
        case 0x34b774u: goto label_34b774;
        case 0x34b778u: goto label_34b778;
        case 0x34b77cu: goto label_34b77c;
        case 0x34b780u: goto label_34b780;
        case 0x34b784u: goto label_34b784;
        case 0x34b788u: goto label_34b788;
        case 0x34b78cu: goto label_34b78c;
        case 0x34b790u: goto label_34b790;
        case 0x34b794u: goto label_34b794;
        case 0x34b798u: goto label_34b798;
        case 0x34b79cu: goto label_34b79c;
        case 0x34b7a0u: goto label_34b7a0;
        case 0x34b7a4u: goto label_34b7a4;
        case 0x34b7a8u: goto label_34b7a8;
        case 0x34b7acu: goto label_34b7ac;
        case 0x34b7b0u: goto label_34b7b0;
        case 0x34b7b4u: goto label_34b7b4;
        case 0x34b7b8u: goto label_34b7b8;
        case 0x34b7bcu: goto label_34b7bc;
        case 0x34b7c0u: goto label_34b7c0;
        case 0x34b7c4u: goto label_34b7c4;
        case 0x34b7c8u: goto label_34b7c8;
        case 0x34b7ccu: goto label_34b7cc;
        case 0x34b7d0u: goto label_34b7d0;
        case 0x34b7d4u: goto label_34b7d4;
        case 0x34b7d8u: goto label_34b7d8;
        case 0x34b7dcu: goto label_34b7dc;
        case 0x34b7e0u: goto label_34b7e0;
        case 0x34b7e4u: goto label_34b7e4;
        case 0x34b7e8u: goto label_34b7e8;
        case 0x34b7ecu: goto label_34b7ec;
        case 0x34b7f0u: goto label_34b7f0;
        case 0x34b7f4u: goto label_34b7f4;
        case 0x34b7f8u: goto label_34b7f8;
        case 0x34b7fcu: goto label_34b7fc;
        case 0x34b800u: goto label_34b800;
        case 0x34b804u: goto label_34b804;
        case 0x34b808u: goto label_34b808;
        case 0x34b80cu: goto label_34b80c;
        case 0x34b810u: goto label_34b810;
        case 0x34b814u: goto label_34b814;
        case 0x34b818u: goto label_34b818;
        case 0x34b81cu: goto label_34b81c;
        case 0x34b820u: goto label_34b820;
        case 0x34b824u: goto label_34b824;
        case 0x34b828u: goto label_34b828;
        case 0x34b82cu: goto label_34b82c;
        case 0x34b830u: goto label_34b830;
        case 0x34b834u: goto label_34b834;
        case 0x34b838u: goto label_34b838;
        case 0x34b83cu: goto label_34b83c;
        case 0x34b840u: goto label_34b840;
        case 0x34b844u: goto label_34b844;
        case 0x34b848u: goto label_34b848;
        case 0x34b84cu: goto label_34b84c;
        case 0x34b850u: goto label_34b850;
        case 0x34b854u: goto label_34b854;
        case 0x34b858u: goto label_34b858;
        case 0x34b85cu: goto label_34b85c;
        case 0x34b860u: goto label_34b860;
        case 0x34b864u: goto label_34b864;
        case 0x34b868u: goto label_34b868;
        case 0x34b86cu: goto label_34b86c;
        case 0x34b870u: goto label_34b870;
        case 0x34b874u: goto label_34b874;
        case 0x34b878u: goto label_34b878;
        case 0x34b87cu: goto label_34b87c;
        case 0x34b880u: goto label_34b880;
        case 0x34b884u: goto label_34b884;
        case 0x34b888u: goto label_34b888;
        case 0x34b88cu: goto label_34b88c;
        case 0x34b890u: goto label_34b890;
        case 0x34b894u: goto label_34b894;
        case 0x34b898u: goto label_34b898;
        case 0x34b89cu: goto label_34b89c;
        case 0x34b8a0u: goto label_34b8a0;
        case 0x34b8a4u: goto label_34b8a4;
        case 0x34b8a8u: goto label_34b8a8;
        case 0x34b8acu: goto label_34b8ac;
        case 0x34b8b0u: goto label_34b8b0;
        case 0x34b8b4u: goto label_34b8b4;
        case 0x34b8b8u: goto label_34b8b8;
        case 0x34b8bcu: goto label_34b8bc;
        case 0x34b8c0u: goto label_34b8c0;
        case 0x34b8c4u: goto label_34b8c4;
        case 0x34b8c8u: goto label_34b8c8;
        case 0x34b8ccu: goto label_34b8cc;
        case 0x34b8d0u: goto label_34b8d0;
        case 0x34b8d4u: goto label_34b8d4;
        case 0x34b8d8u: goto label_34b8d8;
        case 0x34b8dcu: goto label_34b8dc;
        case 0x34b8e0u: goto label_34b8e0;
        case 0x34b8e4u: goto label_34b8e4;
        case 0x34b8e8u: goto label_34b8e8;
        case 0x34b8ecu: goto label_34b8ec;
        case 0x34b8f0u: goto label_34b8f0;
        case 0x34b8f4u: goto label_34b8f4;
        case 0x34b8f8u: goto label_34b8f8;
        case 0x34b8fcu: goto label_34b8fc;
        case 0x34b900u: goto label_34b900;
        case 0x34b904u: goto label_34b904;
        case 0x34b908u: goto label_34b908;
        case 0x34b90cu: goto label_34b90c;
        case 0x34b910u: goto label_34b910;
        case 0x34b914u: goto label_34b914;
        case 0x34b918u: goto label_34b918;
        case 0x34b91cu: goto label_34b91c;
        case 0x34b920u: goto label_34b920;
        case 0x34b924u: goto label_34b924;
        case 0x34b928u: goto label_34b928;
        case 0x34b92cu: goto label_34b92c;
        case 0x34b930u: goto label_34b930;
        case 0x34b934u: goto label_34b934;
        case 0x34b938u: goto label_34b938;
        case 0x34b93cu: goto label_34b93c;
        case 0x34b940u: goto label_34b940;
        case 0x34b944u: goto label_34b944;
        case 0x34b948u: goto label_34b948;
        case 0x34b94cu: goto label_34b94c;
        case 0x34b950u: goto label_34b950;
        case 0x34b954u: goto label_34b954;
        case 0x34b958u: goto label_34b958;
        case 0x34b95cu: goto label_34b95c;
        case 0x34b960u: goto label_34b960;
        case 0x34b964u: goto label_34b964;
        case 0x34b968u: goto label_34b968;
        case 0x34b96cu: goto label_34b96c;
        case 0x34b970u: goto label_34b970;
        case 0x34b974u: goto label_34b974;
        case 0x34b978u: goto label_34b978;
        case 0x34b97cu: goto label_34b97c;
        case 0x34b980u: goto label_34b980;
        case 0x34b984u: goto label_34b984;
        case 0x34b988u: goto label_34b988;
        case 0x34b98cu: goto label_34b98c;
        case 0x34b990u: goto label_34b990;
        case 0x34b994u: goto label_34b994;
        case 0x34b998u: goto label_34b998;
        case 0x34b99cu: goto label_34b99c;
        case 0x34b9a0u: goto label_34b9a0;
        case 0x34b9a4u: goto label_34b9a4;
        case 0x34b9a8u: goto label_34b9a8;
        case 0x34b9acu: goto label_34b9ac;
        case 0x34b9b0u: goto label_34b9b0;
        case 0x34b9b4u: goto label_34b9b4;
        case 0x34b9b8u: goto label_34b9b8;
        case 0x34b9bcu: goto label_34b9bc;
        case 0x34b9c0u: goto label_34b9c0;
        case 0x34b9c4u: goto label_34b9c4;
        case 0x34b9c8u: goto label_34b9c8;
        case 0x34b9ccu: goto label_34b9cc;
        case 0x34b9d0u: goto label_34b9d0;
        case 0x34b9d4u: goto label_34b9d4;
        case 0x34b9d8u: goto label_34b9d8;
        case 0x34b9dcu: goto label_34b9dc;
        case 0x34b9e0u: goto label_34b9e0;
        case 0x34b9e4u: goto label_34b9e4;
        case 0x34b9e8u: goto label_34b9e8;
        case 0x34b9ecu: goto label_34b9ec;
        case 0x34b9f0u: goto label_34b9f0;
        case 0x34b9f4u: goto label_34b9f4;
        case 0x34b9f8u: goto label_34b9f8;
        case 0x34b9fcu: goto label_34b9fc;
        case 0x34ba00u: goto label_34ba00;
        case 0x34ba04u: goto label_34ba04;
        case 0x34ba08u: goto label_34ba08;
        case 0x34ba0cu: goto label_34ba0c;
        case 0x34ba10u: goto label_34ba10;
        case 0x34ba14u: goto label_34ba14;
        case 0x34ba18u: goto label_34ba18;
        case 0x34ba1cu: goto label_34ba1c;
        case 0x34ba20u: goto label_34ba20;
        case 0x34ba24u: goto label_34ba24;
        case 0x34ba28u: goto label_34ba28;
        case 0x34ba2cu: goto label_34ba2c;
        case 0x34ba30u: goto label_34ba30;
        case 0x34ba34u: goto label_34ba34;
        case 0x34ba38u: goto label_34ba38;
        case 0x34ba3cu: goto label_34ba3c;
        case 0x34ba40u: goto label_34ba40;
        case 0x34ba44u: goto label_34ba44;
        case 0x34ba48u: goto label_34ba48;
        case 0x34ba4cu: goto label_34ba4c;
        case 0x34ba50u: goto label_34ba50;
        case 0x34ba54u: goto label_34ba54;
        case 0x34ba58u: goto label_34ba58;
        case 0x34ba5cu: goto label_34ba5c;
        case 0x34ba60u: goto label_34ba60;
        case 0x34ba64u: goto label_34ba64;
        case 0x34ba68u: goto label_34ba68;
        case 0x34ba6cu: goto label_34ba6c;
        case 0x34ba70u: goto label_34ba70;
        case 0x34ba74u: goto label_34ba74;
        case 0x34ba78u: goto label_34ba78;
        case 0x34ba7cu: goto label_34ba7c;
        case 0x34ba80u: goto label_34ba80;
        case 0x34ba84u: goto label_34ba84;
        case 0x34ba88u: goto label_34ba88;
        case 0x34ba8cu: goto label_34ba8c;
        case 0x34ba90u: goto label_34ba90;
        case 0x34ba94u: goto label_34ba94;
        case 0x34ba98u: goto label_34ba98;
        case 0x34ba9cu: goto label_34ba9c;
        case 0x34baa0u: goto label_34baa0;
        case 0x34baa4u: goto label_34baa4;
        case 0x34baa8u: goto label_34baa8;
        case 0x34baacu: goto label_34baac;
        case 0x34bab0u: goto label_34bab0;
        case 0x34bab4u: goto label_34bab4;
        case 0x34bab8u: goto label_34bab8;
        case 0x34babcu: goto label_34babc;
        case 0x34bac0u: goto label_34bac0;
        case 0x34bac4u: goto label_34bac4;
        case 0x34bac8u: goto label_34bac8;
        case 0x34baccu: goto label_34bacc;
        case 0x34bad0u: goto label_34bad0;
        case 0x34bad4u: goto label_34bad4;
        case 0x34bad8u: goto label_34bad8;
        case 0x34badcu: goto label_34badc;
        case 0x34bae0u: goto label_34bae0;
        case 0x34bae4u: goto label_34bae4;
        case 0x34bae8u: goto label_34bae8;
        case 0x34baecu: goto label_34baec;
        case 0x34baf0u: goto label_34baf0;
        case 0x34baf4u: goto label_34baf4;
        case 0x34baf8u: goto label_34baf8;
        case 0x34bafcu: goto label_34bafc;
        case 0x34bb00u: goto label_34bb00;
        case 0x34bb04u: goto label_34bb04;
        case 0x34bb08u: goto label_34bb08;
        case 0x34bb0cu: goto label_34bb0c;
        case 0x34bb10u: goto label_34bb10;
        case 0x34bb14u: goto label_34bb14;
        case 0x34bb18u: goto label_34bb18;
        case 0x34bb1cu: goto label_34bb1c;
        case 0x34bb20u: goto label_34bb20;
        case 0x34bb24u: goto label_34bb24;
        case 0x34bb28u: goto label_34bb28;
        case 0x34bb2cu: goto label_34bb2c;
        case 0x34bb30u: goto label_34bb30;
        case 0x34bb34u: goto label_34bb34;
        case 0x34bb38u: goto label_34bb38;
        case 0x34bb3cu: goto label_34bb3c;
        case 0x34bb40u: goto label_34bb40;
        case 0x34bb44u: goto label_34bb44;
        case 0x34bb48u: goto label_34bb48;
        case 0x34bb4cu: goto label_34bb4c;
        case 0x34bb50u: goto label_34bb50;
        case 0x34bb54u: goto label_34bb54;
        case 0x34bb58u: goto label_34bb58;
        case 0x34bb5cu: goto label_34bb5c;
        case 0x34bb60u: goto label_34bb60;
        case 0x34bb64u: goto label_34bb64;
        case 0x34bb68u: goto label_34bb68;
        case 0x34bb6cu: goto label_34bb6c;
        case 0x34bb70u: goto label_34bb70;
        case 0x34bb74u: goto label_34bb74;
        case 0x34bb78u: goto label_34bb78;
        case 0x34bb7cu: goto label_34bb7c;
        case 0x34bb80u: goto label_34bb80;
        case 0x34bb84u: goto label_34bb84;
        case 0x34bb88u: goto label_34bb88;
        case 0x34bb8cu: goto label_34bb8c;
        case 0x34bb90u: goto label_34bb90;
        case 0x34bb94u: goto label_34bb94;
        case 0x34bb98u: goto label_34bb98;
        case 0x34bb9cu: goto label_34bb9c;
        case 0x34bba0u: goto label_34bba0;
        case 0x34bba4u: goto label_34bba4;
        case 0x34bba8u: goto label_34bba8;
        case 0x34bbacu: goto label_34bbac;
        case 0x34bbb0u: goto label_34bbb0;
        case 0x34bbb4u: goto label_34bbb4;
        case 0x34bbb8u: goto label_34bbb8;
        case 0x34bbbcu: goto label_34bbbc;
        case 0x34bbc0u: goto label_34bbc0;
        case 0x34bbc4u: goto label_34bbc4;
        case 0x34bbc8u: goto label_34bbc8;
        case 0x34bbccu: goto label_34bbcc;
        case 0x34bbd0u: goto label_34bbd0;
        case 0x34bbd4u: goto label_34bbd4;
        case 0x34bbd8u: goto label_34bbd8;
        case 0x34bbdcu: goto label_34bbdc;
        case 0x34bbe0u: goto label_34bbe0;
        case 0x34bbe4u: goto label_34bbe4;
        case 0x34bbe8u: goto label_34bbe8;
        case 0x34bbecu: goto label_34bbec;
        case 0x34bbf0u: goto label_34bbf0;
        case 0x34bbf4u: goto label_34bbf4;
        case 0x34bbf8u: goto label_34bbf8;
        case 0x34bbfcu: goto label_34bbfc;
        case 0x34bc00u: goto label_34bc00;
        case 0x34bc04u: goto label_34bc04;
        case 0x34bc08u: goto label_34bc08;
        case 0x34bc0cu: goto label_34bc0c;
        case 0x34bc10u: goto label_34bc10;
        case 0x34bc14u: goto label_34bc14;
        case 0x34bc18u: goto label_34bc18;
        case 0x34bc1cu: goto label_34bc1c;
        case 0x34bc20u: goto label_34bc20;
        case 0x34bc24u: goto label_34bc24;
        case 0x34bc28u: goto label_34bc28;
        case 0x34bc2cu: goto label_34bc2c;
        case 0x34bc30u: goto label_34bc30;
        case 0x34bc34u: goto label_34bc34;
        case 0x34bc38u: goto label_34bc38;
        case 0x34bc3cu: goto label_34bc3c;
        case 0x34bc40u: goto label_34bc40;
        case 0x34bc44u: goto label_34bc44;
        case 0x34bc48u: goto label_34bc48;
        case 0x34bc4cu: goto label_34bc4c;
        case 0x34bc50u: goto label_34bc50;
        case 0x34bc54u: goto label_34bc54;
        case 0x34bc58u: goto label_34bc58;
        case 0x34bc5cu: goto label_34bc5c;
        case 0x34bc60u: goto label_34bc60;
        case 0x34bc64u: goto label_34bc64;
        case 0x34bc68u: goto label_34bc68;
        case 0x34bc6cu: goto label_34bc6c;
        case 0x34bc70u: goto label_34bc70;
        case 0x34bc74u: goto label_34bc74;
        case 0x34bc78u: goto label_34bc78;
        case 0x34bc7cu: goto label_34bc7c;
        case 0x34bc80u: goto label_34bc80;
        case 0x34bc84u: goto label_34bc84;
        case 0x34bc88u: goto label_34bc88;
        case 0x34bc8cu: goto label_34bc8c;
        case 0x34bc90u: goto label_34bc90;
        case 0x34bc94u: goto label_34bc94;
        case 0x34bc98u: goto label_34bc98;
        case 0x34bc9cu: goto label_34bc9c;
        case 0x34bca0u: goto label_34bca0;
        case 0x34bca4u: goto label_34bca4;
        case 0x34bca8u: goto label_34bca8;
        case 0x34bcacu: goto label_34bcac;
        case 0x34bcb0u: goto label_34bcb0;
        case 0x34bcb4u: goto label_34bcb4;
        case 0x34bcb8u: goto label_34bcb8;
        case 0x34bcbcu: goto label_34bcbc;
        case 0x34bcc0u: goto label_34bcc0;
        case 0x34bcc4u: goto label_34bcc4;
        case 0x34bcc8u: goto label_34bcc8;
        case 0x34bcccu: goto label_34bccc;
        case 0x34bcd0u: goto label_34bcd0;
        case 0x34bcd4u: goto label_34bcd4;
        case 0x34bcd8u: goto label_34bcd8;
        case 0x34bcdcu: goto label_34bcdc;
        case 0x34bce0u: goto label_34bce0;
        case 0x34bce4u: goto label_34bce4;
        case 0x34bce8u: goto label_34bce8;
        case 0x34bcecu: goto label_34bcec;
        case 0x34bcf0u: goto label_34bcf0;
        case 0x34bcf4u: goto label_34bcf4;
        case 0x34bcf8u: goto label_34bcf8;
        case 0x34bcfcu: goto label_34bcfc;
        default: break;
    }

    ctx->pc = 0x34b130u;

label_34b130:
    // 0x34b130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34b134:
    // 0x34b134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34b138:
    // 0x34b138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34b13c:
    // 0x34b13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b140:
    // 0x34b140: 0x8c429764  lw          $v0, -0x689C($v0)
    ctx->pc = 0x34b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940516)));
label_34b144:
    // 0x34b144: 0x30420402  andi        $v0, $v0, 0x402
    ctx->pc = 0x34b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1026);
label_34b148:
    // 0x34b148: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_34b14c:
    if (ctx->pc == 0x34B14Cu) {
        ctx->pc = 0x34B14Cu;
            // 0x34b14c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B150u;
        goto label_34b150;
    }
    ctx->pc = 0x34B148u;
    {
        const bool branch_taken_0x34b148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B148u;
            // 0x34b14c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b148) {
            ctx->pc = 0x34B16Cu;
            goto label_34b16c;
        }
    }
    ctx->pc = 0x34B150u;
label_34b150:
    // 0x34b150: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34b150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34b154:
    // 0x34b154: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x34b154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_34b158:
    // 0x34b158: 0x320f809  jalr        $t9
label_34b15c:
    if (ctx->pc == 0x34B15Cu) {
        ctx->pc = 0x34B15Cu;
            // 0x34b15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B160u;
        goto label_34b160;
    }
    ctx->pc = 0x34B158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B160u);
        ctx->pc = 0x34B15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B158u;
            // 0x34b15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34B160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34B160u; }
            if (ctx->pc != 0x34B160u) { return; }
        }
        }
    }
    ctx->pc = 0x34B160u;
label_34b160:
    // 0x34b160: 0xa60007b4  sh          $zero, 0x7B4($s0)
    ctx->pc = 0x34b160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1972), (uint16_t)GPR_U32(ctx, 0));
label_34b164:
    // 0x34b164: 0x10000032  b           . + 4 + (0x32 << 2)
label_34b168:
    if (ctx->pc == 0x34B168u) {
        ctx->pc = 0x34B168u;
            // 0x34b168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34B16Cu;
        goto label_34b16c;
    }
    ctx->pc = 0x34B164u;
    {
        const bool branch_taken_0x34b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B164u;
            // 0x34b168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b164) {
            ctx->pc = 0x34B230u;
            goto label_34b230;
        }
    }
    ctx->pc = 0x34B16Cu;
label_34b16c:
    // 0x34b16c: 0x8e050764  lw          $a1, 0x764($s0)
    ctx->pc = 0x34b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
label_34b170:
    // 0x34b170: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_34b174:
    if (ctx->pc == 0x34B174u) {
        ctx->pc = 0x34B174u;
            // 0x34b174: 0x8e050768  lw          $a1, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->pc = 0x34B178u;
        goto label_34b178;
    }
    ctx->pc = 0x34B170u;
    {
        const bool branch_taken_0x34b170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b170) {
            ctx->pc = 0x34B174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B170u;
            // 0x34b174: 0x8e050768  lw          $a1, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B1A0u;
            goto label_34b1a0;
        }
    }
    ctx->pc = 0x34B178u;
label_34b178:
    // 0x34b178: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x34b178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_34b17c:
    // 0x34b17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b180:
    // 0x34b180: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_34b184:
    if (ctx->pc == 0x34B184u) {
        ctx->pc = 0x34B188u;
        goto label_34b188;
    }
    ctx->pc = 0x34B180u;
    {
        const bool branch_taken_0x34b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34b180) {
            ctx->pc = 0x34B19Cu;
            goto label_34b19c;
        }
    }
    ctx->pc = 0x34B188u;
label_34b188:
    // 0x34b188: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b18c:
    // 0x34b18c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b190:
    // 0x34b190: 0xc057b7c  jal         func_15EDF0
label_34b194:
    if (ctx->pc == 0x34B194u) {
        ctx->pc = 0x34B194u;
            // 0x34b194: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B198u;
        goto label_34b198;
    }
    ctx->pc = 0x34B190u;
    SET_GPR_U32(ctx, 31, 0x34B198u);
    ctx->pc = 0x34B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B190u;
            // 0x34b194: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B198u; }
        if (ctx->pc != 0x34B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B198u; }
        if (ctx->pc != 0x34B198u) { return; }
    }
    ctx->pc = 0x34B198u;
label_34b198:
    // 0x34b198: 0xae000764  sw          $zero, 0x764($s0)
    ctx->pc = 0x34b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 0));
label_34b19c:
    // 0x34b19c: 0x8e050768  lw          $a1, 0x768($s0)
    ctx->pc = 0x34b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_34b1a0:
    // 0x34b1a0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_34b1a4:
    if (ctx->pc == 0x34B1A4u) {
        ctx->pc = 0x34B1A4u;
            // 0x34b1a4: 0x8e03079c  lw          $v1, 0x79C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
        ctx->pc = 0x34B1A8u;
        goto label_34b1a8;
    }
    ctx->pc = 0x34B1A0u;
    {
        const bool branch_taken_0x34b1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b1a0) {
            ctx->pc = 0x34B1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B1A0u;
            // 0x34b1a4: 0x8e03079c  lw          $v1, 0x79C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B1D0u;
            goto label_34b1d0;
        }
    }
    ctx->pc = 0x34B1A8u;
label_34b1a8:
    // 0x34b1a8: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x34b1a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_34b1ac:
    // 0x34b1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b1b0:
    // 0x34b1b0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_34b1b4:
    if (ctx->pc == 0x34B1B4u) {
        ctx->pc = 0x34B1B8u;
        goto label_34b1b8;
    }
    ctx->pc = 0x34B1B0u;
    {
        const bool branch_taken_0x34b1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34b1b0) {
            ctx->pc = 0x34B1CCu;
            goto label_34b1cc;
        }
    }
    ctx->pc = 0x34B1B8u;
label_34b1b8:
    // 0x34b1b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b1bc:
    // 0x34b1bc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b1c0:
    // 0x34b1c0: 0xc057b7c  jal         func_15EDF0
label_34b1c4:
    if (ctx->pc == 0x34B1C4u) {
        ctx->pc = 0x34B1C4u;
            // 0x34b1c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B1C8u;
        goto label_34b1c8;
    }
    ctx->pc = 0x34B1C0u;
    SET_GPR_U32(ctx, 31, 0x34B1C8u);
    ctx->pc = 0x34B1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B1C0u;
            // 0x34b1c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B1C8u; }
        if (ctx->pc != 0x34B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B1C8u; }
        if (ctx->pc != 0x34B1C8u) { return; }
    }
    ctx->pc = 0x34B1C8u;
label_34b1c8:
    // 0x34b1c8: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x34b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
label_34b1cc:
    // 0x34b1cc: 0x8e03079c  lw          $v1, 0x79C($s0)
    ctx->pc = 0x34b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
label_34b1d0:
    // 0x34b1d0: 0x8e0207a0  lw          $v0, 0x7A0($s0)
    ctx->pc = 0x34b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1952)));
label_34b1d4:
    // 0x34b1d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34b1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34b1d8:
    // 0x34b1d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_34b1dc:
    if (ctx->pc == 0x34B1DCu) {
        ctx->pc = 0x34B1DCu;
            // 0x34b1dc: 0x8e030790  lw          $v1, 0x790($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
        ctx->pc = 0x34B1E0u;
        goto label_34b1e0;
    }
    ctx->pc = 0x34B1D8u;
    {
        const bool branch_taken_0x34b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b1d8) {
            ctx->pc = 0x34B1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B1D8u;
            // 0x34b1dc: 0x8e030790  lw          $v1, 0x790($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B1F4u;
            goto label_34b1f4;
        }
    }
    ctx->pc = 0x34B1E0u;
label_34b1e0:
    // 0x34b1e0: 0x8e030790  lw          $v1, 0x790($s0)
    ctx->pc = 0x34b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_34b1e4:
    // 0x34b1e4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_34b1e8:
    // 0x34b1e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_34b1ec:
    // 0x34b1ec: 0xae020790  sw          $v0, 0x790($s0)
    ctx->pc = 0x34b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 2));
label_34b1f0:
    // 0x34b1f0: 0x8e030790  lw          $v1, 0x790($s0)
    ctx->pc = 0x34b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_34b1f4:
    // 0x34b1f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x34b1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34b1f8:
    // 0x34b1f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_34b1fc:
    if (ctx->pc == 0x34B1FCu) {
        ctx->pc = 0x34B1FCu;
            // 0x34b1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B200u;
        goto label_34b200;
    }
    ctx->pc = 0x34B1F8u;
    {
        const bool branch_taken_0x34b1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b1f8) {
            ctx->pc = 0x34B1FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B1F8u;
            // 0x34b1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B230u;
            goto label_34b230;
        }
    }
    ctx->pc = 0x34B200u;
label_34b200:
    // 0x34b200: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x34b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_34b204:
    // 0x34b204: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_34b208:
    if (ctx->pc == 0x34B208u) {
        ctx->pc = 0x34B20Cu;
        goto label_34b20c;
    }
    ctx->pc = 0x34B204u;
    {
        const bool branch_taken_0x34b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b204) {
            ctx->pc = 0x34B22Cu;
            goto label_34b22c;
        }
    }
    ctx->pc = 0x34B20Cu;
label_34b20c:
    // 0x34b20c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x34b20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34b210:
    // 0x34b210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b214:
    // 0x34b214: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x34b214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_34b218:
    // 0x34b218: 0x320f809  jalr        $t9
label_34b21c:
    if (ctx->pc == 0x34B21Cu) {
        ctx->pc = 0x34B21Cu;
            // 0x34b21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B220u;
        goto label_34b220;
    }
    ctx->pc = 0x34B218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B220u);
        ctx->pc = 0x34B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B218u;
            // 0x34b21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34B220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34B220u; }
            if (ctx->pc != 0x34B220u) { return; }
        }
        }
    }
    ctx->pc = 0x34B220u;
label_34b220:
    // 0x34b220: 0xa60007b4  sh          $zero, 0x7B4($s0)
    ctx->pc = 0x34b220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1972), (uint16_t)GPR_U32(ctx, 0));
label_34b224:
    // 0x34b224: 0x10000002  b           . + 4 + (0x2 << 2)
label_34b228:
    if (ctx->pc == 0x34B228u) {
        ctx->pc = 0x34B228u;
            // 0x34b228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34B22Cu;
        goto label_34b22c;
    }
    ctx->pc = 0x34B224u;
    {
        const bool branch_taken_0x34b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B224u;
            // 0x34b228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b224) {
            ctx->pc = 0x34B230u;
            goto label_34b230;
        }
    }
    ctx->pc = 0x34B22Cu;
label_34b22c:
    // 0x34b22c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b230:
    // 0x34b230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b234:
    // 0x34b234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b238:
    // 0x34b238: 0x3e00008  jr          $ra
label_34b23c:
    if (ctx->pc == 0x34B23Cu) {
        ctx->pc = 0x34B23Cu;
            // 0x34b23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x34B240u;
        goto label_34b240;
    }
    ctx->pc = 0x34B238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B238u;
            // 0x34b23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B240u;
label_34b240:
    // 0x34b240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34b244:
    // 0x34b244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34b244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34b248:
    // 0x34b248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34b24c:
    // 0x34b24c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x34b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34b250:
    // 0x34b250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34b254:
    // 0x34b254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b258:
    // 0x34b258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34b25c:
    // 0x34b25c: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_34b260:
    // 0x34b260: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_34b264:
    if (ctx->pc == 0x34B264u) {
        ctx->pc = 0x34B264u;
            // 0x34b264: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x34B268u;
        goto label_34b268;
    }
    ctx->pc = 0x34B260u;
    {
        const bool branch_taken_0x34b260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B260u;
            // 0x34b264: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b260) {
            ctx->pc = 0x34B284u;
            goto label_34b284;
        }
    }
    ctx->pc = 0x34B268u;
label_34b268:
    // 0x34b268: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x34b268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_34b26c:
    // 0x34b26c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_34b270:
    // 0x34b270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34b274:
    // 0x34b274: 0x0  nop
    ctx->pc = 0x34b274u;
    // NOP
label_34b278:
    // 0x34b278: 0x0  nop
    ctx->pc = 0x34b278u;
    // NOP
label_34b27c:
    // 0x34b27c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_34b280:
    if (ctx->pc == 0x34B280u) {
        ctx->pc = 0x34B284u;
        goto label_34b284;
    }
    ctx->pc = 0x34B27Cu;
    {
        const bool branch_taken_0x34b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b27c) {
            ctx->pc = 0x34B268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34b268;
        }
    }
    ctx->pc = 0x34B284u;
label_34b284:
    // 0x34b284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b288:
    // 0x34b288: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_34b28c:
    // 0x34b28c: 0xa2230758  sb          $v1, 0x758($s1)
    ctx->pc = 0x34b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1880), (uint8_t)GPR_U32(ctx, 3));
label_34b290:
    // 0x34b290: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34b290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_34b294:
    // 0x34b294: 0x8623075c  lh          $v1, 0x75C($s1)
    ctx->pc = 0x34b294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1884)));
label_34b298:
    // 0x34b298: 0x24423040  addiu       $v0, $v0, 0x3040
    ctx->pc = 0x34b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12352));
label_34b29c:
    // 0x34b29c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34b2a0:
    // 0x34b2a0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x34b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34b2a4:
    // 0x34b2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34b2a8:
    // 0x34b2a8: 0xa623075c  sh          $v1, 0x75C($s1)
    ctx->pc = 0x34b2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1884), (uint16_t)GPR_U32(ctx, 3));
label_34b2ac:
    // 0x34b2ac: 0xa220075a  sb          $zero, 0x75A($s1)
    ctx->pc = 0x34b2acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1882), (uint8_t)GPR_U32(ctx, 0));
label_34b2b0:
    // 0x34b2b0: 0xa220075b  sb          $zero, 0x75B($s1)
    ctx->pc = 0x34b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1883), (uint8_t)GPR_U32(ctx, 0));
label_34b2b4:
    // 0x34b2b4: 0x822308aa  lb          $v1, 0x8AA($s1)
    ctx->pc = 0x34b2b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2218)));
label_34b2b8:
    // 0x34b2b8: 0x8628075c  lh          $t0, 0x75C($s1)
    ctx->pc = 0x34b2b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1884)));
label_34b2bc:
    // 0x34b2bc: 0x8e2708a4  lw          $a3, 0x8A4($s1)
    ctx->pc = 0x34b2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
label_34b2c0:
    // 0x34b2c0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x34b2c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34b2c4:
    // 0x34b2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34b2c8:
    // 0x34b2c8: 0x80490000  lb          $t1, 0x0($v0)
    ctx->pc = 0x34b2c8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_34b2cc:
    // 0x34b2cc: 0xc043be4  jal         func_10EF90
label_34b2d0:
    if (ctx->pc == 0x34B2D0u) {
        ctx->pc = 0x34B2D0u;
            // 0x34b2d0: 0x24c63078  addiu       $a2, $a2, 0x3078 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12408));
        ctx->pc = 0x34B2D4u;
        goto label_34b2d4;
    }
    ctx->pc = 0x34B2CCu;
    SET_GPR_U32(ctx, 31, 0x34B2D4u);
    ctx->pc = 0x34B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B2CCu;
            // 0x34b2d0: 0x24c63078  addiu       $a2, $a2, 0x3078 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B2D4u; }
        if (ctx->pc != 0x34B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B2D4u; }
        if (ctx->pc != 0x34B2D4u) { return; }
    }
    ctx->pc = 0x34B2D4u;
label_34b2d4:
    // 0x34b2d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34b2d8:
    // 0x34b2d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_34b2dc:
    // 0x34b2dc: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x34b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34b2e0:
    // 0x34b2e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34b2e4:
    // 0x34b2e4: 0x8c431638  lw          $v1, 0x1638($v0)
    ctx->pc = 0x34b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5688)));
label_34b2e8:
    // 0x34b2e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x34b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_34b2ec:
    // 0x34b2ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_34b2f0:
    // 0x34b2f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34b2f4:
    if (ctx->pc == 0x34B2F4u) {
        ctx->pc = 0x34B2F4u;
            // 0x34b2f4: 0x24890004  addiu       $t1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x34B2F8u;
        goto label_34b2f8;
    }
    ctx->pc = 0x34B2F0u;
    {
        const bool branch_taken_0x34b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B2F0u;
            // 0x34b2f4: 0x24890004  addiu       $t1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2f0) {
            ctx->pc = 0x34B308u;
            goto label_34b308;
        }
    }
    ctx->pc = 0x34B2F8u;
label_34b2f8:
    // 0x34b2f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34b2fc:
    // 0x34b2fc: 0x8c421630  lw          $v0, 0x1630($v0)
    ctx->pc = 0x34b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5680)));
label_34b300:
    // 0x34b300: 0x401027  not         $v0, $v0
    ctx->pc = 0x34b300u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_34b304:
    // 0x34b304: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x34b304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_34b308:
    // 0x34b308: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x34b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_34b30c:
    // 0x34b30c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x34b30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_34b310:
    // 0x34b310: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x34b310u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_34b314:
    // 0x34b314: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34b318:
    // 0x34b318: 0x24427578  addiu       $v0, $v0, 0x7578
    ctx->pc = 0x34b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30072));
label_34b31c:
    // 0x34b31c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x34b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_34b320:
    // 0x34b320: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x34b320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_34b324:
    // 0x34b324: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34b328:
    // 0x34b328: 0xad230034  sw          $v1, 0x34($t1)
    ctx->pc = 0x34b328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 3));
label_34b32c:
    // 0x34b32c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x34b32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_34b330:
    // 0x34b330: 0x92230759  lbu         $v1, 0x759($s1)
    ctx->pc = 0x34b330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1881)));
label_34b334:
    // 0x34b334: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b338:
    // 0x34b338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34b33c:
    // 0x34b33c: 0xc0aa5d8  jal         func_2A9760
label_34b340:
    if (ctx->pc == 0x34B340u) {
        ctx->pc = 0x34B340u;
            // 0x34b340: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x34B344u;
        goto label_34b344;
    }
    ctx->pc = 0x34B33Cu;
    SET_GPR_U32(ctx, 31, 0x34B344u);
    ctx->pc = 0x34B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B33Cu;
            // 0x34b340: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B344u; }
        if (ctx->pc != 0x34B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B344u; }
        if (ctx->pc != 0x34B344u) { return; }
    }
    ctx->pc = 0x34B344u;
label_34b344:
    // 0x34b344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b348:
    // 0x34b348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34b34c:
    // 0x34b34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b350:
    // 0x34b350: 0x3e00008  jr          $ra
label_34b354:
    if (ctx->pc == 0x34B354u) {
        ctx->pc = 0x34B354u;
            // 0x34b354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x34B358u;
        goto label_34b358;
    }
    ctx->pc = 0x34B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B350u;
            // 0x34b354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B358u;
label_34b358:
    // 0x34b358: 0x0  nop
    ctx->pc = 0x34b358u;
    // NOP
label_34b35c:
    // 0x34b35c: 0x0  nop
    ctx->pc = 0x34b35cu;
    // NOP
label_34b360:
    // 0x34b360: 0x3e00008  jr          $ra
label_34b364:
    if (ctx->pc == 0x34B364u) {
        ctx->pc = 0x34B368u;
        goto label_34b368;
    }
    ctx->pc = 0x34B360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B368u;
label_34b368:
    // 0x34b368: 0x0  nop
    ctx->pc = 0x34b368u;
    // NOP
label_34b36c:
    // 0x34b36c: 0x0  nop
    ctx->pc = 0x34b36cu;
    // NOP
label_34b370:
    // 0x34b370: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x34b370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34b374:
    // 0x34b374: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x34b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b378:
    // 0x34b378: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x34b378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_34b37c:
    // 0x34b37c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x34b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b380:
    // 0x34b380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b384:
    // 0x34b384: 0xa4a30830  sh          $v1, 0x830($a1)
    ctx->pc = 0x34b384u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2096), (uint16_t)GPR_U32(ctx, 3));
label_34b388:
    // 0x34b388: 0xa4a00832  sh          $zero, 0x832($a1)
    ctx->pc = 0x34b388u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2098), (uint16_t)GPR_U32(ctx, 0));
label_34b38c:
    // 0x34b38c: 0xe4a00834  swc1        $f0, 0x834($a1)
    ctx->pc = 0x34b38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2100), bits); }
label_34b390:
    // 0x34b390: 0xaca70838  sw          $a3, 0x838($a1)
    ctx->pc = 0x34b390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2104), GPR_U32(ctx, 7));
label_34b394:
    // 0x34b394: 0xaca6083c  sw          $a2, 0x83C($a1)
    ctx->pc = 0x34b394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2108), GPR_U32(ctx, 6));
label_34b398:
    // 0x34b398: 0x3e00008  jr          $ra
label_34b39c:
    if (ctx->pc == 0x34B39Cu) {
        ctx->pc = 0x34B39Cu;
            // 0x34b39c: 0xe4a10840  swc1        $f1, 0x840($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2112), bits); }
        ctx->pc = 0x34B3A0u;
        goto label_34b3a0;
    }
    ctx->pc = 0x34B398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B398u;
            // 0x34b39c: 0xe4a10840  swc1        $f1, 0x840($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B3A0u;
label_34b3a0:
    // 0x34b3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34b3a4:
    // 0x34b3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34b3a8:
    // 0x34b3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34b3ac:
    // 0x34b3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b3b0:
    // 0x34b3b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34b3b4:
    // 0x34b3b4: 0xc0d3424  jal         func_34D090
label_34b3b8:
    if (ctx->pc == 0x34B3B8u) {
        ctx->pc = 0x34B3B8u;
            // 0x34b3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B3BCu;
        goto label_34b3bc;
    }
    ctx->pc = 0x34B3B4u;
    SET_GPR_U32(ctx, 31, 0x34B3BCu);
    ctx->pc = 0x34B3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B3B4u;
            // 0x34b3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D090u;
    if (runtime->hasFunction(0x34D090u)) {
        auto targetFn = runtime->lookupFunction(0x34D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3BCu; }
        if (ctx->pc != 0x34B3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D090_0x34d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3BCu; }
        if (ctx->pc != 0x34B3BCu) { return; }
    }
    ctx->pc = 0x34B3BCu;
label_34b3bc:
    // 0x34b3bc: 0xc0d33a4  jal         func_34CE90
label_34b3c0:
    if (ctx->pc == 0x34B3C0u) {
        ctx->pc = 0x34B3C0u;
            // 0x34b3c0: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->pc = 0x34B3C4u;
        goto label_34b3c4;
    }
    ctx->pc = 0x34B3BCu;
    SET_GPR_U32(ctx, 31, 0x34B3C4u);
    ctx->pc = 0x34B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B3BCu;
            // 0x34b3c0: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE90u;
    if (runtime->hasFunction(0x34CE90u)) {
        auto targetFn = runtime->lookupFunction(0x34CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3C4u; }
        if (ctx->pc != 0x34B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE90_0x34ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3C4u; }
        if (ctx->pc != 0x34B3C4u) { return; }
    }
    ctx->pc = 0x34B3C4u;
label_34b3c4:
    // 0x34b3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b3c8:
    // 0x34b3c8: 0xc0da1f0  jal         func_3687C0
label_34b3cc:
    if (ctx->pc == 0x34B3CCu) {
        ctx->pc = 0x34B3CCu;
            // 0x34b3cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B3D0u;
        goto label_34b3d0;
    }
    ctx->pc = 0x34B3C8u;
    SET_GPR_U32(ctx, 31, 0x34B3D0u);
    ctx->pc = 0x34B3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B3C8u;
            // 0x34b3cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3687C0u;
    if (runtime->hasFunction(0x3687C0u)) {
        auto targetFn = runtime->lookupFunction(0x3687C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3D0u; }
        if (ctx->pc != 0x34B3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003687C0_0x3687c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B3D0u; }
        if (ctx->pc != 0x34B3D0u) { return; }
    }
    ctx->pc = 0x34B3D0u;
label_34b3d0:
    // 0x34b3d0: 0x8e240790  lw          $a0, 0x790($s1)
    ctx->pc = 0x34b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_34b3d4:
    // 0x34b3d4: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x34b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_34b3d8:
    // 0x34b3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34b3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34b3dc:
    // 0x34b3dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34b3e0:
    // 0x34b3e0: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34b3e4:
    // 0x34b3e4: 0x92230828  lbu         $v1, 0x828($s1)
    ctx->pc = 0x34b3e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2088)));
label_34b3e8:
    // 0x34b3e8: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_34b3ec:
    if (ctx->pc == 0x34B3ECu) {
        ctx->pc = 0x34B3ECu;
            // 0x34b3ec: 0x26300818  addiu       $s0, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->pc = 0x34B3F0u;
        goto label_34b3f0;
    }
    ctx->pc = 0x34B3E8u;
    {
        const bool branch_taken_0x34b3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B3E8u;
            // 0x34b3ec: 0x26300818  addiu       $s0, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3e8) {
            ctx->pc = 0x34B494u;
            goto label_34b494;
        }
    }
    ctx->pc = 0x34B3F0u;
label_34b3f0:
    // 0x34b3f0: 0x8e250764  lw          $a1, 0x764($s1)
    ctx->pc = 0x34b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
label_34b3f4:
    // 0x34b3f4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_34b3f8:
    if (ctx->pc == 0x34B3F8u) {
        ctx->pc = 0x34B3F8u;
            // 0x34b3f8: 0x8e220764  lw          $v0, 0x764($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
        ctx->pc = 0x34B3FCu;
        goto label_34b3fc;
    }
    ctx->pc = 0x34B3F4u;
    {
        const bool branch_taken_0x34b3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b3f4) {
            ctx->pc = 0x34B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B3F4u;
            // 0x34b3f8: 0x8e220764  lw          $v0, 0x764($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B414u;
            goto label_34b414;
        }
    }
    ctx->pc = 0x34B3FCu;
label_34b3fc:
    // 0x34b3fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b400:
    // 0x34b400: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b404:
    // 0x34b404: 0xc057b7c  jal         func_15EDF0
label_34b408:
    if (ctx->pc == 0x34B408u) {
        ctx->pc = 0x34B408u;
            // 0x34b408: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B40Cu;
        goto label_34b40c;
    }
    ctx->pc = 0x34B404u;
    SET_GPR_U32(ctx, 31, 0x34B40Cu);
    ctx->pc = 0x34B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B404u;
            // 0x34b408: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B40Cu; }
        if (ctx->pc != 0x34B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B40Cu; }
        if (ctx->pc != 0x34B40Cu) { return; }
    }
    ctx->pc = 0x34B40Cu;
label_34b40c:
    // 0x34b40c: 0xae200764  sw          $zero, 0x764($s1)
    ctx->pc = 0x34b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 0));
label_34b410:
    // 0x34b410: 0x8e220764  lw          $v0, 0x764($s1)
    ctx->pc = 0x34b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
label_34b414:
    // 0x34b414: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_34b418:
    if (ctx->pc == 0x34B418u) {
        ctx->pc = 0x34B418u;
            // 0x34b418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B41Cu;
        goto label_34b41c;
    }
    ctx->pc = 0x34B414u;
    {
        const bool branch_taken_0x34b414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b414) {
            ctx->pc = 0x34B418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B414u;
            // 0x34b418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B488u;
            goto label_34b488;
        }
    }
    ctx->pc = 0x34B41Cu;
label_34b41c:
    // 0x34b41c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x34b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_34b420:
    // 0x34b420: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34b420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34b424:
    // 0x34b424: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b428:
    // 0x34b428: 0xc040140  jal         func_100500
label_34b42c:
    if (ctx->pc == 0x34B42Cu) {
        ctx->pc = 0x34B42Cu;
            // 0x34b42c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B430u;
        goto label_34b430;
    }
    ctx->pc = 0x34B428u;
    SET_GPR_U32(ctx, 31, 0x34B430u);
    ctx->pc = 0x34B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B428u;
            // 0x34b42c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B430u; }
        if (ctx->pc != 0x34B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B430u; }
        if (ctx->pc != 0x34B430u) { return; }
    }
    ctx->pc = 0x34B430u;
label_34b430:
    // 0x34b430: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_34b434:
    if (ctx->pc == 0x34B434u) {
        ctx->pc = 0x34B434u;
            // 0x34b434: 0xae220764  sw          $v0, 0x764($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 2));
        ctx->pc = 0x34B438u;
        goto label_34b438;
    }
    ctx->pc = 0x34B430u;
    {
        const bool branch_taken_0x34b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b430) {
            ctx->pc = 0x34B434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B430u;
            // 0x34b434: 0xae220764  sw          $v0, 0x764($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B464u;
            goto label_34b464;
        }
    }
    ctx->pc = 0x34B438u;
label_34b438:
    // 0x34b438: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x34b438u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_34b43c:
    // 0x34b43c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x34b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b440:
    // 0x34b440: 0x92060013  lbu         $a2, 0x13($s0)
    ctx->pc = 0x34b440u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
label_34b444:
    // 0x34b444: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x34b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b448:
    // 0x34b448: 0x92070014  lbu         $a3, 0x14($s0)
    ctx->pc = 0x34b448u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_34b44c:
    // 0x34b44c: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x34b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b450:
    // 0x34b450: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x34b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_34b454:
    // 0x34b454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b458:
    // 0x34b458: 0xc0fb4c8  jal         func_3ED320
label_34b45c:
    if (ctx->pc == 0x34B45Cu) {
        ctx->pc = 0x34B45Cu;
            // 0x34b45c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B460u;
        goto label_34b460;
    }
    ctx->pc = 0x34B458u;
    SET_GPR_U32(ctx, 31, 0x34B460u);
    ctx->pc = 0x34B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B458u;
            // 0x34b45c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ED320u;
    if (runtime->hasFunction(0x3ED320u)) {
        auto targetFn = runtime->lookupFunction(0x3ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B460u; }
        if (ctx->pc != 0x34B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ED320_0x3ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B460u; }
        if (ctx->pc != 0x34B460u) { return; }
    }
    ctx->pc = 0x34B460u;
label_34b460:
    // 0x34b460: 0xae220764  sw          $v0, 0x764($s1)
    ctx->pc = 0x34b460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1892), GPR_U32(ctx, 2));
label_34b464:
    // 0x34b464: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x34b464u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_34b468:
    // 0x34b468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34b46c:
    if (ctx->pc == 0x34B46Cu) {
        ctx->pc = 0x34B470u;
        goto label_34b470;
    }
    ctx->pc = 0x34B468u;
    {
        const bool branch_taken_0x34b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b468) {
            ctx->pc = 0x34B484u;
            goto label_34b484;
        }
    }
    ctx->pc = 0x34B470u;
label_34b470:
    // 0x34b470: 0x8e230764  lw          $v1, 0x764($s1)
    ctx->pc = 0x34b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1892)));
label_34b474:
    // 0x34b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b478:
    // 0x34b478: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x34b478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_34b47c:
    // 0x34b47c: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x34b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_34b480:
    // 0x34b480: 0xa46400e6  sh          $a0, 0xE6($v1)
    ctx->pc = 0x34b480u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 230), (uint16_t)GPR_U32(ctx, 4));
label_34b484:
    // 0x34b484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b488:
    // 0x34b488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b48c:
    // 0x34b48c: 0xc04a576  jal         func_1295D8
label_34b490:
    if (ctx->pc == 0x34B490u) {
        ctx->pc = 0x34B490u;
            // 0x34b490: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x34B494u;
        goto label_34b494;
    }
    ctx->pc = 0x34B48Cu;
    SET_GPR_U32(ctx, 31, 0x34B494u);
    ctx->pc = 0x34B490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B48Cu;
            // 0x34b490: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B494u; }
        if (ctx->pc != 0x34B494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B494u; }
        if (ctx->pc != 0x34B494u) { return; }
    }
    ctx->pc = 0x34B494u;
label_34b494:
    // 0x34b494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34b494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b498:
    // 0x34b498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34b49c:
    // 0x34b49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b4a0:
    // 0x34b4a0: 0x3e00008  jr          $ra
label_34b4a4:
    if (ctx->pc == 0x34B4A4u) {
        ctx->pc = 0x34B4A4u;
            // 0x34b4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34B4A8u;
        goto label_34b4a8;
    }
    ctx->pc = 0x34B4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B4A0u;
            // 0x34b4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B4A8u;
label_34b4a8:
    // 0x34b4a8: 0x0  nop
    ctx->pc = 0x34b4a8u;
    // NOP
label_34b4ac:
    // 0x34b4ac: 0x0  nop
    ctx->pc = 0x34b4acu;
    // NOP
label_34b4b0:
    // 0x34b4b0: 0x8ca30790  lw          $v1, 0x790($a1)
    ctx->pc = 0x34b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34b4b4:
    // 0x34b4b4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_34b4b8:
    // 0x34b4b8: 0xaca30790  sw          $v1, 0x790($a1)
    ctx->pc = 0x34b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1936), GPR_U32(ctx, 3));
label_34b4bc:
    // 0x34b4bc: 0xa4a007b4  sh          $zero, 0x7B4($a1)
    ctx->pc = 0x34b4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1972), (uint16_t)GPR_U32(ctx, 0));
label_34b4c0:
    // 0x34b4c0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x34b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34b4c4:
    // 0x34b4c4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_34b4c8:
    if (ctx->pc == 0x34B4C8u) {
        ctx->pc = 0x34B4C8u;
            // 0x34b4c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x34B4CCu;
        goto label_34b4cc;
    }
    ctx->pc = 0x34B4C4u;
    {
        const bool branch_taken_0x34b4c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x34b4c4) {
            ctx->pc = 0x34B4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B4C4u;
            // 0x34b4c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B4D8u;
            goto label_34b4d8;
        }
    }
    ctx->pc = 0x34B4CCu;
label_34b4cc:
    // 0x34b4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34b4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b4d0:
    // 0x34b4d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_34b4d4:
    if (ctx->pc == 0x34B4D4u) {
        ctx->pc = 0x34B4D4u;
            // 0x34b4d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34B4D8u;
        goto label_34b4d8;
    }
    ctx->pc = 0x34B4D0u;
    {
        const bool branch_taken_0x34b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B4D0u;
            // 0x34b4d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b4d0) {
            ctx->pc = 0x34B4F0u;
            goto label_34b4f0;
        }
    }
    ctx->pc = 0x34B4D8u;
label_34b4d8:
    // 0x34b4d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34b4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34b4dc:
    // 0x34b4dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34b4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_34b4e0:
    // 0x34b4e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34b4e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b4e4:
    // 0x34b4e4: 0x0  nop
    ctx->pc = 0x34b4e4u;
    // NOP
label_34b4e8:
    // 0x34b4e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34b4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34b4ec:
    // 0x34b4ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34b4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34b4f0:
    // 0x34b4f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34b4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34b4f4:
    // 0x34b4f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34b4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_34b4f8:
    // 0x34b4f8: 0x3e00008  jr          $ra
label_34b4fc:
    if (ctx->pc == 0x34B4FCu) {
        ctx->pc = 0x34B4FCu;
            // 0x34b4fc: 0xa4a307b6  sh          $v1, 0x7B6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1974), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34B500u;
        goto label_34b500;
    }
    ctx->pc = 0x34B4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B4F8u;
            // 0x34b4fc: 0xa4a307b6  sh          $v1, 0x7B6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1974), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B500u;
label_34b500:
    // 0x34b500: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x34b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34b504:
    // 0x34b504: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_34b508:
    if (ctx->pc == 0x34B508u) {
        ctx->pc = 0x34B50Cu;
        goto label_34b50c;
    }
    ctx->pc = 0x34B504u;
    {
        const bool branch_taken_0x34b504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b504) {
            ctx->pc = 0x34B51Cu;
            goto label_34b51c;
        }
    }
    ctx->pc = 0x34B50Cu;
label_34b50c:
    // 0x34b50c: 0x8ca30790  lw          $v1, 0x790($a1)
    ctx->pc = 0x34b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34b510:
    // 0x34b510: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x34b510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_34b514:
    // 0x34b514: 0xaca30790  sw          $v1, 0x790($a1)
    ctx->pc = 0x34b514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1936), GPR_U32(ctx, 3));
label_34b518:
    // 0x34b518: 0xaca407b8  sw          $a0, 0x7B8($a1)
    ctx->pc = 0x34b518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1976), GPR_U32(ctx, 4));
label_34b51c:
    // 0x34b51c: 0x3e00008  jr          $ra
label_34b520:
    if (ctx->pc == 0x34B520u) {
        ctx->pc = 0x34B524u;
        goto label_34b524;
    }
    ctx->pc = 0x34B51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B524u;
label_34b524:
    // 0x34b524: 0x0  nop
    ctx->pc = 0x34b524u;
    // NOP
label_34b528:
    // 0x34b528: 0x0  nop
    ctx->pc = 0x34b528u;
    // NOP
label_34b52c:
    // 0x34b52c: 0x0  nop
    ctx->pc = 0x34b52cu;
    // NOP
label_34b530:
    // 0x34b530: 0x8ca30790  lw          $v1, 0x790($a1)
    ctx->pc = 0x34b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34b534:
    // 0x34b534: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34b534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_34b538:
    // 0x34b538: 0x3e00008  jr          $ra
label_34b53c:
    if (ctx->pc == 0x34B53Cu) {
        ctx->pc = 0x34B53Cu;
            // 0x34b53c: 0xaca30790  sw          $v1, 0x790($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1936), GPR_U32(ctx, 3));
        ctx->pc = 0x34B540u;
        goto label_34b540;
    }
    ctx->pc = 0x34B538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B538u;
            // 0x34b53c: 0xaca30790  sw          $v1, 0x790($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B540u;
label_34b540:
    // 0x34b540: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x34b540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34b544:
    // 0x34b544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b548:
    // 0x34b548: 0x24a40874  addiu       $a0, $a1, 0x874
    ctx->pc = 0x34b548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2164));
label_34b54c:
    // 0x34b54c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_34b550:
    if (ctx->pc == 0x34B550u) {
        ctx->pc = 0x34B550u;
            // 0x34b550: 0xa0a30874  sb          $v1, 0x874($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2164), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34B554u;
        goto label_34b554;
    }
    ctx->pc = 0x34B54Cu;
    {
        const bool branch_taken_0x34b54c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B54Cu;
            // 0x34b550: 0xa0a30874  sb          $v1, 0x874($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2164), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b54c) {
            ctx->pc = 0x34B558u;
            goto label_34b558;
        }
    }
    ctx->pc = 0x34B554u;
label_34b554:
    // 0x34b554: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x34b554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_34b558:
    // 0x34b558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b55c:
    // 0x34b55c: 0x3e00008  jr          $ra
label_34b560:
    if (ctx->pc == 0x34B560u) {
        ctx->pc = 0x34B560u;
            // 0x34b560: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34B564u;
        goto label_34b564;
    }
    ctx->pc = 0x34B55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B55Cu;
            // 0x34b560: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B564u;
label_34b564:
    // 0x34b564: 0x0  nop
    ctx->pc = 0x34b564u;
    // NOP
label_34b568:
    // 0x34b568: 0x0  nop
    ctx->pc = 0x34b568u;
    // NOP
label_34b56c:
    // 0x34b56c: 0x0  nop
    ctx->pc = 0x34b56cu;
    // NOP
label_34b570:
    // 0x34b570: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x34b570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_34b574:
    // 0x34b574: 0xc4830054  lwc1        $f3, 0x54($a0)
    ctx->pc = 0x34b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34b578:
    // 0x34b578: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x34b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34b57c:
    // 0x34b57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b580:
    // 0x34b580: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x34b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b584:
    // 0x34b584: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x34b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b588:
    // 0x34b588: 0xa0a30874  sb          $v1, 0x874($a1)
    ctx->pc = 0x34b588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2164), (uint8_t)GPR_U32(ctx, 3));
label_34b58c:
    // 0x34b58c: 0xaca60884  sw          $a2, 0x884($a1)
    ctx->pc = 0x34b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2180), GPR_U32(ctx, 6));
label_34b590:
    // 0x34b590: 0xe4a00888  swc1        $f0, 0x888($a1)
    ctx->pc = 0x34b590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2184), bits); }
label_34b594:
    // 0x34b594: 0xe4a1088c  swc1        $f1, 0x88C($a1)
    ctx->pc = 0x34b594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2188), bits); }
label_34b598:
    // 0x34b598: 0xe4a20890  swc1        $f2, 0x890($a1)
    ctx->pc = 0x34b598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2192), bits); }
label_34b59c:
    // 0x34b59c: 0x3e00008  jr          $ra
label_34b5a0:
    if (ctx->pc == 0x34B5A0u) {
        ctx->pc = 0x34B5A0u;
            // 0x34b5a0: 0xe4a30894  swc1        $f3, 0x894($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2196), bits); }
        ctx->pc = 0x34B5A4u;
        goto label_34b5a4;
    }
    ctx->pc = 0x34B59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B59Cu;
            // 0x34b5a0: 0xe4a30894  swc1        $f3, 0x894($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B5A4u;
label_34b5a4:
    // 0x34b5a4: 0x0  nop
    ctx->pc = 0x34b5a4u;
    // NOP
label_34b5a8:
    // 0x34b5a8: 0x0  nop
    ctx->pc = 0x34b5a8u;
    // NOP
label_34b5ac:
    // 0x34b5ac: 0x0  nop
    ctx->pc = 0x34b5acu;
    // NOP
label_34b5b0:
    // 0x34b5b0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x34b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34b5b4:
    // 0x34b5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5b8:
    // 0x34b5b8: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x34b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b5bc:
    // 0x34b5bc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x34b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b5c0:
    // 0x34b5c0: 0xa0a30874  sb          $v1, 0x874($a1)
    ctx->pc = 0x34b5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2164), (uint8_t)GPR_U32(ctx, 3));
label_34b5c4:
    // 0x34b5c4: 0xe4a00878  swc1        $f0, 0x878($a1)
    ctx->pc = 0x34b5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2168), bits); }
label_34b5c8:
    // 0x34b5c8: 0xe4a1087c  swc1        $f1, 0x87C($a1)
    ctx->pc = 0x34b5c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2172), bits); }
label_34b5cc:
    // 0x34b5cc: 0x3e00008  jr          $ra
label_34b5d0:
    if (ctx->pc == 0x34B5D0u) {
        ctx->pc = 0x34B5D0u;
            // 0x34b5d0: 0xe4a20880  swc1        $f2, 0x880($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2176), bits); }
        ctx->pc = 0x34B5D4u;
        goto label_34b5d4;
    }
    ctx->pc = 0x34B5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B5CCu;
            // 0x34b5d0: 0xe4a20880  swc1        $f2, 0x880($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B5D4u;
label_34b5d4:
    // 0x34b5d4: 0x0  nop
    ctx->pc = 0x34b5d4u;
    // NOP
label_34b5d8:
    // 0x34b5d8: 0x0  nop
    ctx->pc = 0x34b5d8u;
    // NOP
label_34b5dc:
    // 0x34b5dc: 0x0  nop
    ctx->pc = 0x34b5dcu;
    // NOP
label_34b5e0:
    // 0x34b5e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5e4:
    // 0x34b5e4: 0xa0a30804  sb          $v1, 0x804($a1)
    ctx->pc = 0x34b5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2052), (uint8_t)GPR_U32(ctx, 3));
label_34b5e8:
    // 0x34b5e8: 0x3e00008  jr          $ra
label_34b5ec:
    if (ctx->pc == 0x34B5ECu) {
        ctx->pc = 0x34B5ECu;
            // 0x34b5ec: 0xa0a30805  sb          $v1, 0x805($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2053), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34B5F0u;
        goto label_34b5f0;
    }
    ctx->pc = 0x34B5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B5E8u;
            // 0x34b5ec: 0xa0a30805  sb          $v1, 0x805($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2053), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B5F0u;
label_34b5f0:
    // 0x34b5f0: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x34b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34b5f4:
    // 0x34b5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5f8:
    // 0x34b5f8: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x34b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34b5fc:
    // 0x34b5fc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x34b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b600:
    // 0x34b600: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x34b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b604:
    // 0x34b604: 0xa0a30804  sb          $v1, 0x804($a1)
    ctx->pc = 0x34b604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2052), (uint8_t)GPR_U32(ctx, 3));
label_34b608:
    // 0x34b608: 0xe4a00808  swc1        $f0, 0x808($a1)
    ctx->pc = 0x34b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2056), bits); }
label_34b60c:
    // 0x34b60c: 0xe4a1080c  swc1        $f1, 0x80C($a1)
    ctx->pc = 0x34b60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2060), bits); }
label_34b610:
    // 0x34b610: 0xe4a20810  swc1        $f2, 0x810($a1)
    ctx->pc = 0x34b610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2064), bits); }
label_34b614:
    // 0x34b614: 0x3e00008  jr          $ra
label_34b618:
    if (ctx->pc == 0x34B618u) {
        ctx->pc = 0x34B618u;
            // 0x34b618: 0xe4a30814  swc1        $f3, 0x814($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2068), bits); }
        ctx->pc = 0x34B61Cu;
        goto label_34b61c;
    }
    ctx->pc = 0x34B614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B614u;
            // 0x34b618: 0xe4a30814  swc1        $f3, 0x814($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2068), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B61Cu;
label_34b61c:
    // 0x34b61c: 0x0  nop
    ctx->pc = 0x34b61cu;
    // NOP
label_34b620:
    // 0x34b620: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x34b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_34b624:
    // 0x34b624: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x34b624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b628:
    // 0x34b628: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x34b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_34b62c:
    // 0x34b62c: 0x403026  xor         $a2, $v0, $zero
    ctx->pc = 0x34b62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_34b630:
    // 0x34b630: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x34b630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_34b634:
    // 0x34b634: 0x812c6ec  j           func_4B1BB0
label_34b638:
    if (ctx->pc == 0x34B638u) {
        ctx->pc = 0x34B638u;
            // 0x34b638: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x34B63Cu;
        goto label_34b63c;
    }
    ctx->pc = 0x34B634u;
    ctx->pc = 0x34B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B634u;
            // 0x34b638: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B63Cu;
label_34b63c:
    // 0x34b63c: 0x0  nop
    ctx->pc = 0x34b63cu;
    // NOP
label_34b640:
    // 0x34b640: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34b640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b644:
    // 0x34b644: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x34b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_34b648:
    // 0x34b648: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x34b648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_34b64c:
    // 0x34b64c: 0x812c6fc  j           func_4B1BF0
label_34b650:
    if (ctx->pc == 0x34B650u) {
        ctx->pc = 0x34B650u;
            // 0x34b650: 0x8c460014  lw          $a2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x34B654u;
        goto label_34b654;
    }
    ctx->pc = 0x34B64Cu;
    ctx->pc = 0x34B650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B64Cu;
            // 0x34b650: 0x8c460014  lw          $a2, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1BF0u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B654u;
label_34b654:
    // 0x34b654: 0x0  nop
    ctx->pc = 0x34b654u;
    // NOP
label_34b658:
    // 0x34b658: 0x0  nop
    ctx->pc = 0x34b658u;
    // NOP
label_34b65c:
    // 0x34b65c: 0x0  nop
    ctx->pc = 0x34b65cu;
    // NOP
label_34b660:
    // 0x34b660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34b660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b664:
    // 0x34b664: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x34b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b668:
    // 0x34b668: 0xc44d0024  lwc1        $f13, 0x24($v0)
    ctx->pc = 0x34b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b66c:
    // 0x34b66c: 0xc44e0034  lwc1        $f14, 0x34($v0)
    ctx->pc = 0x34b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b670:
    // 0x34b670: 0x812c708  j           func_4B1C20
label_34b674:
    if (ctx->pc == 0x34B674u) {
        ctx->pc = 0x34B674u;
            // 0x34b674: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->pc = 0x34B678u;
        goto label_34b678;
    }
    ctx->pc = 0x34B670u;
    ctx->pc = 0x34B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B670u;
            // 0x34b674: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C20u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B678u;
label_34b678:
    // 0x34b678: 0x0  nop
    ctx->pc = 0x34b678u;
    // NOP
label_34b67c:
    // 0x34b67c: 0x0  nop
    ctx->pc = 0x34b67cu;
    // NOP
label_34b680:
    // 0x34b680: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34b680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b684:
    // 0x34b684: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x34b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b688:
    // 0x34b688: 0xc44d0024  lwc1        $f13, 0x24($v0)
    ctx->pc = 0x34b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b68c:
    // 0x34b68c: 0xc44e0034  lwc1        $f14, 0x34($v0)
    ctx->pc = 0x34b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b690:
    // 0x34b690: 0x812c714  j           func_4B1C50
label_34b694:
    if (ctx->pc == 0x34B694u) {
        ctx->pc = 0x34B694u;
            // 0x34b694: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->pc = 0x34B698u;
        goto label_34b698;
    }
    ctx->pc = 0x34B690u;
    ctx->pc = 0x34B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B690u;
            // 0x34b694: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C50u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B698u;
label_34b698:
    // 0x34b698: 0x0  nop
    ctx->pc = 0x34b698u;
    // NOP
label_34b69c:
    // 0x34b69c: 0x0  nop
    ctx->pc = 0x34b69cu;
    // NOP
label_34b6a0:
    // 0x34b6a0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x34b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_34b6a4:
    // 0x34b6a4: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x34b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b6a8:
    // 0x34b6a8: 0xc48d0024  lwc1        $f13, 0x24($a0)
    ctx->pc = 0x34b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b6ac:
    // 0x34b6ac: 0xc48e0034  lwc1        $f14, 0x34($a0)
    ctx->pc = 0x34b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b6b0:
    // 0x34b6b0: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x34b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_34b6b4:
    // 0x34b6b4: 0x812c724  j           func_4B1C90
label_34b6b8:
    if (ctx->pc == 0x34B6B8u) {
        ctx->pc = 0x34B6B8u;
            // 0x34b6b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B6BCu;
        goto label_34b6bc;
    }
    ctx->pc = 0x34B6B4u;
    ctx->pc = 0x34B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B6B4u;
            // 0x34b6b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1C90u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B6BCu;
label_34b6bc:
    // 0x34b6bc: 0x0  nop
    ctx->pc = 0x34b6bcu;
    // NOP
label_34b6c0:
    // 0x34b6c0: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x34b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b6c4:
    // 0x34b6c4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x34b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_34b6c8:
    // 0x34b6c8: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x34b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_34b6cc:
    // 0x34b6cc: 0x812c734  j           func_4B1CD0
label_34b6d0:
    if (ctx->pc == 0x34B6D0u) {
        ctx->pc = 0x34B6D0u;
            // 0x34b6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B6D4u;
        goto label_34b6d4;
    }
    ctx->pc = 0x34B6CCu;
    ctx->pc = 0x34B6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B6CCu;
            // 0x34b6d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1CD0u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B6D4u;
label_34b6d4:
    // 0x34b6d4: 0x0  nop
    ctx->pc = 0x34b6d4u;
    // NOP
label_34b6d8:
    // 0x34b6d8: 0x0  nop
    ctx->pc = 0x34b6d8u;
    // NOP
label_34b6dc:
    // 0x34b6dc: 0x0  nop
    ctx->pc = 0x34b6dcu;
    // NOP
label_34b6e0:
    // 0x34b6e0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x34b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_34b6e4:
    // 0x34b6e4: 0xc48c0014  lwc1        $f12, 0x14($a0)
    ctx->pc = 0x34b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b6e8:
    // 0x34b6e8: 0xc48d0024  lwc1        $f13, 0x24($a0)
    ctx->pc = 0x34b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b6ec:
    // 0x34b6ec: 0xc48e0034  lwc1        $f14, 0x34($a0)
    ctx->pc = 0x34b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b6f0:
    // 0x34b6f0: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x34b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_34b6f4:
    // 0x34b6f4: 0x812c744  j           func_4B1D10
label_34b6f8:
    if (ctx->pc == 0x34B6F8u) {
        ctx->pc = 0x34B6F8u;
            // 0x34b6f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B6FCu;
        goto label_34b6fc;
    }
    ctx->pc = 0x34B6F4u;
    ctx->pc = 0x34B6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B6F4u;
            // 0x34b6f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1D10u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B6FCu;
label_34b6fc:
    // 0x34b6fc: 0x0  nop
    ctx->pc = 0x34b6fcu;
    // NOP
label_34b700:
    // 0x34b700: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34b700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b704:
    // 0x34b704: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x34b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b708:
    // 0x34b708: 0xc44d0024  lwc1        $f13, 0x24($v0)
    ctx->pc = 0x34b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b70c:
    // 0x34b70c: 0xc44e0034  lwc1        $f14, 0x34($v0)
    ctx->pc = 0x34b70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b710:
    // 0x34b710: 0x812c754  j           func_4B1D50
label_34b714:
    if (ctx->pc == 0x34B714u) {
        ctx->pc = 0x34B714u;
            // 0x34b714: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->pc = 0x34B718u;
        goto label_34b718;
    }
    ctx->pc = 0x34B710u;
    ctx->pc = 0x34B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B710u;
            // 0x34b714: 0x8ca40774  lw          $a0, 0x774($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1D50u;
    {
        auto targetFn = runtime->lookupFunction(0x4B1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34B718u;
label_34b718:
    // 0x34b718: 0x0  nop
    ctx->pc = 0x34b718u;
    // NOP
label_34b71c:
    // 0x34b71c: 0x0  nop
    ctx->pc = 0x34b71cu;
    // NOP
label_34b720:
    // 0x34b720: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x34b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_34b724:
    // 0x34b724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34b728:
    // 0x34b728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34b72c:
    // 0x34b72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34b730:
    // 0x34b730: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34b730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b734:
    // 0x34b734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34b738:
    // 0x34b738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b73c:
    // 0x34b73c: 0x8ca40898  lw          $a0, 0x898($a1)
    ctx->pc = 0x34b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2200)));
label_34b740:
    // 0x34b740: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34b740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34b744:
    // 0x34b744: 0xc0d3404  jal         func_34D010
label_34b748:
    if (ctx->pc == 0x34B748u) {
        ctx->pc = 0x34B748u;
            // 0x34b748: 0x26120790  addiu       $s2, $s0, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
        ctx->pc = 0x34B74Cu;
        goto label_34b74c;
    }
    ctx->pc = 0x34B744u;
    SET_GPR_U32(ctx, 31, 0x34B74Cu);
    ctx->pc = 0x34B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B744u;
            // 0x34b748: 0x26120790  addiu       $s2, $s0, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D010u;
    if (runtime->hasFunction(0x34D010u)) {
        auto targetFn = runtime->lookupFunction(0x34D010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B74Cu; }
        if (ctx->pc != 0x34B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D010_0x34d010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B74Cu; }
        if (ctx->pc != 0x34B74Cu) { return; }
    }
    ctx->pc = 0x34B74Cu;
label_34b74c:
    // 0x34b74c: 0xc0d3380  jal         func_34CE00
label_34b750:
    if (ctx->pc == 0x34B750u) {
        ctx->pc = 0x34B750u;
            // 0x34b750: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->pc = 0x34B754u;
        goto label_34b754;
    }
    ctx->pc = 0x34B74Cu;
    SET_GPR_U32(ctx, 31, 0x34B754u);
    ctx->pc = 0x34B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B74Cu;
            // 0x34b750: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE00u;
    if (runtime->hasFunction(0x34CE00u)) {
        auto targetFn = runtime->lookupFunction(0x34CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B754u; }
        if (ctx->pc != 0x34B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE00_0x34ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B754u; }
        if (ctx->pc != 0x34B754u) { return; }
    }
    ctx->pc = 0x34B754u;
label_34b754:
    // 0x34b754: 0x8e040790  lw          $a0, 0x790($s0)
    ctx->pc = 0x34b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_34b758:
    // 0x34b758: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x34b758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_34b75c:
    // 0x34b75c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_34b760:
    if (ctx->pc == 0x34B760u) {
        ctx->pc = 0x34B760u;
            // 0x34b760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B764u;
        goto label_34b764;
    }
    ctx->pc = 0x34B75Cu;
    {
        const bool branch_taken_0x34b75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b75c) {
            ctx->pc = 0x34B760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B75Cu;
            // 0x34b760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B814u;
            goto label_34b814;
        }
    }
    ctx->pc = 0x34B764u;
label_34b764:
    // 0x34b764: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_34b768:
    // 0x34b768: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34b76c:
    // 0x34b76c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34b770:
    // 0x34b770: 0xae030790  sw          $v1, 0x790($s0)
    ctx->pc = 0x34b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 3));
label_34b774:
    // 0x34b774: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34b774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34b778:
    // 0x34b778: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_34b77c:
    // 0x34b77c: 0xae030790  sw          $v1, 0x790($s0)
    ctx->pc = 0x34b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 3));
label_34b780:
    // 0x34b780: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x34b780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34b784:
    // 0x34b784: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_34b788:
    if (ctx->pc == 0x34B788u) {
        ctx->pc = 0x34B788u;
            // 0x34b788: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x34B78Cu;
        goto label_34b78c;
    }
    ctx->pc = 0x34B784u;
    {
        const bool branch_taken_0x34b784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B784u;
            // 0x34b788: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b784) {
            ctx->pc = 0x34B7A8u;
            goto label_34b7a8;
        }
    }
    ctx->pc = 0x34B78Cu;
label_34b78c:
    // 0x34b78c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x34b78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_34b790:
    // 0x34b790: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34b790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_34b794:
    // 0x34b794: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34b798:
    // 0x34b798: 0x0  nop
    ctx->pc = 0x34b798u;
    // NOP
label_34b79c:
    // 0x34b79c: 0x0  nop
    ctx->pc = 0x34b79cu;
    // NOP
label_34b7a0:
    // 0x34b7a0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_34b7a4:
    if (ctx->pc == 0x34B7A4u) {
        ctx->pc = 0x34B7A8u;
        goto label_34b7a8;
    }
    ctx->pc = 0x34B7A0u;
    {
        const bool branch_taken_0x34b7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b7a0) {
            ctx->pc = 0x34B78Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34b78c;
        }
    }
    ctx->pc = 0x34B7A8u;
label_34b7a8:
    // 0x34b7a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34b7ac:
    // 0x34b7ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34b7b0:
    // 0x34b7b0: 0xc4611628  lwc1        $f1, 0x1628($v1)
    ctx->pc = 0x34b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b7b4:
    // 0x34b7b4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_34b7b8:
    // 0x34b7b8: 0xc440162c  lwc1        $f0, 0x162C($v0)
    ctx->pc = 0x34b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b7bc:
    // 0x34b7bc: 0x8e0708a4  lw          $a3, 0x8A4($s0)
    ctx->pc = 0x34b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
label_34b7c0:
    // 0x34b7c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34b7c4:
    // 0x34b7c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_34b7c8:
    // 0x34b7c8: 0x820308ab  lb          $v1, 0x8AB($s0)
    ctx->pc = 0x34b7c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2219)));
label_34b7cc:
    // 0x34b7cc: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x34b7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_34b7d0:
    // 0x34b7d0: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x34b7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_34b7d4:
    // 0x34b7d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34b7d8:
    // 0x34b7d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_34b7dc:
    // 0x34b7dc: 0x8c480158  lw          $t0, 0x158($v0)
    ctx->pc = 0x34b7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_34b7e0:
    // 0x34b7e0: 0xc043be4  jal         func_10EF90
label_34b7e4:
    if (ctx->pc == 0x34B7E4u) {
        ctx->pc = 0x34B7E4u;
            // 0x34b7e4: 0x24c63060  addiu       $a2, $a2, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12384));
        ctx->pc = 0x34B7E8u;
        goto label_34b7e8;
    }
    ctx->pc = 0x34B7E0u;
    SET_GPR_U32(ctx, 31, 0x34B7E8u);
    ctx->pc = 0x34B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B7E0u;
            // 0x34b7e4: 0x24c63060  addiu       $a2, $a2, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B7E8u; }
        if (ctx->pc != 0x34B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B7E8u; }
        if (ctx->pc != 0x34B7E8u) { return; }
    }
    ctx->pc = 0x34B7E8u;
label_34b7e8:
    // 0x34b7e8: 0x862502fc  lh          $a1, 0x2FC($s1)
    ctx->pc = 0x34b7e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 764)));
label_34b7ec:
    // 0x34b7ec: 0xa6250308  sh          $a1, 0x308($s1)
    ctx->pc = 0x34b7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 776), (uint16_t)GPR_U32(ctx, 5));
label_34b7f0:
    // 0x34b7f0: 0xc05d006  jal         func_174018
label_34b7f4:
    if (ctx->pc == 0x34B7F4u) {
        ctx->pc = 0x34B7F4u;
            // 0x34b7f4: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->pc = 0x34B7F8u;
        goto label_34b7f8;
    }
    ctx->pc = 0x34B7F0u;
    SET_GPR_U32(ctx, 31, 0x34B7F8u);
    ctx->pc = 0x34B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B7F0u;
            // 0x34b7f4: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B7F8u; }
        if (ctx->pc != 0x34B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B7F8u; }
        if (ctx->pc != 0x34B7F8u) { return; }
    }
    ctx->pc = 0x34B7F8u;
label_34b7f8:
    // 0x34b7f8: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x34b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_34b7fc:
    // 0x34b7fc: 0xc05d85a  jal         func_176168
label_34b800:
    if (ctx->pc == 0x34B800u) {
        ctx->pc = 0x34B800u;
            // 0x34b800: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x34B804u;
        goto label_34b804;
    }
    ctx->pc = 0x34B7FCu;
    SET_GPR_U32(ctx, 31, 0x34B804u);
    ctx->pc = 0x34B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B7FCu;
            // 0x34b800: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B804u; }
        if (ctx->pc != 0x34B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B804u; }
        if (ctx->pc != 0x34B804u) { return; }
    }
    ctx->pc = 0x34B804u;
label_34b804:
    // 0x34b804: 0x8e020790  lw          $v0, 0x790($s0)
    ctx->pc = 0x34b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
label_34b808:
    // 0x34b808: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x34b808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_34b80c:
    // 0x34b80c: 0xae020790  sw          $v0, 0x790($s0)
    ctx->pc = 0x34b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 2));
label_34b810:
    // 0x34b810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34b814:
    // 0x34b814: 0xc0da1f0  jal         func_3687C0
label_34b818:
    if (ctx->pc == 0x34B818u) {
        ctx->pc = 0x34B818u;
            // 0x34b818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B81Cu;
        goto label_34b81c;
    }
    ctx->pc = 0x34B814u;
    SET_GPR_U32(ctx, 31, 0x34B81Cu);
    ctx->pc = 0x34B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B814u;
            // 0x34b818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3687C0u;
    if (runtime->hasFunction(0x3687C0u)) {
        auto targetFn = runtime->lookupFunction(0x3687C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B81Cu; }
        if (ctx->pc != 0x34B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003687C0_0x3687c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B81Cu; }
        if (ctx->pc != 0x34B81Cu) { return; }
    }
    ctx->pc = 0x34B81Cu;
label_34b81c:
    // 0x34b81c: 0xc0f9844  jal         func_3E6110
label_34b820:
    if (ctx->pc == 0x34B820u) {
        ctx->pc = 0x34B820u;
            // 0x34b820: 0x8e040784  lw          $a0, 0x784($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1924)));
        ctx->pc = 0x34B824u;
        goto label_34b824;
    }
    ctx->pc = 0x34B81Cu;
    SET_GPR_U32(ctx, 31, 0x34B824u);
    ctx->pc = 0x34B820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B81Cu;
            // 0x34b820: 0x8e040784  lw          $a0, 0x784($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1924)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6110u;
    if (runtime->hasFunction(0x3E6110u)) {
        auto targetFn = runtime->lookupFunction(0x3E6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B824u; }
        if (ctx->pc != 0x34B824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E6110_0x3e6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B824u; }
        if (ctx->pc != 0x34B824u) { return; }
    }
    ctx->pc = 0x34B824u;
label_34b824:
    // 0x34b824: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34b828:
    // 0x34b828: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x34b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_34b82c:
    // 0x34b82c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34b82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34b830:
    // 0x34b830: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_34b834:
    // 0x34b834: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x34b834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34b838:
    // 0x34b838: 0xc12c760  jal         func_4B1D80
label_34b83c:
    if (ctx->pc == 0x34B83Cu) {
        ctx->pc = 0x34B83Cu;
            // 0x34b83c: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->pc = 0x34B840u;
        goto label_34b840;
    }
    ctx->pc = 0x34B838u;
    SET_GPR_U32(ctx, 31, 0x34B840u);
    ctx->pc = 0x34B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B838u;
            // 0x34b83c: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1D80u;
    if (runtime->hasFunction(0x4B1D80u)) {
        auto targetFn = runtime->lookupFunction(0x4B1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B840u; }
        if (ctx->pc != 0x34B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B1D80_0x4b1d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B840u; }
        if (ctx->pc != 0x34B840u) { return; }
    }
    ctx->pc = 0x34B840u;
label_34b840:
    // 0x34b840: 0xc12c7e8  jal         func_4B1FA0
label_34b844:
    if (ctx->pc == 0x34B844u) {
        ctx->pc = 0x34B844u;
            // 0x34b844: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->pc = 0x34B848u;
        goto label_34b848;
    }
    ctx->pc = 0x34B840u;
    SET_GPR_U32(ctx, 31, 0x34B848u);
    ctx->pc = 0x34B844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B840u;
            // 0x34b844: 0x8e040774  lw          $a0, 0x774($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B1FA0u;
    if (runtime->hasFunction(0x4B1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x4B1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B848u; }
        if (ctx->pc != 0x34B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B1FA0_0x4b1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B848u; }
        if (ctx->pc != 0x34B848u) { return; }
    }
    ctx->pc = 0x34B848u;
label_34b848:
    // 0x34b848: 0x92020828  lbu         $v0, 0x828($s0)
    ctx->pc = 0x34b848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2088)));
label_34b84c:
    // 0x34b84c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_34b850:
    if (ctx->pc == 0x34B850u) {
        ctx->pc = 0x34B850u;
            // 0x34b850: 0x26110818  addiu       $s1, $s0, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
        ctx->pc = 0x34B854u;
        goto label_34b854;
    }
    ctx->pc = 0x34B84Cu;
    {
        const bool branch_taken_0x34b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B84Cu;
            // 0x34b850: 0x26110818  addiu       $s1, $s0, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b84c) {
            ctx->pc = 0x34B8F8u;
            goto label_34b8f8;
        }
    }
    ctx->pc = 0x34B854u;
label_34b854:
    // 0x34b854: 0x8e050764  lw          $a1, 0x764($s0)
    ctx->pc = 0x34b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
label_34b858:
    // 0x34b858: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_34b85c:
    if (ctx->pc == 0x34B85Cu) {
        ctx->pc = 0x34B85Cu;
            // 0x34b85c: 0x8e020764  lw          $v0, 0x764($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
        ctx->pc = 0x34B860u;
        goto label_34b860;
    }
    ctx->pc = 0x34B858u;
    {
        const bool branch_taken_0x34b858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b858) {
            ctx->pc = 0x34B85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B858u;
            // 0x34b85c: 0x8e020764  lw          $v0, 0x764($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B878u;
            goto label_34b878;
        }
    }
    ctx->pc = 0x34B860u;
label_34b860:
    // 0x34b860: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b864:
    // 0x34b864: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b868:
    // 0x34b868: 0xc057b7c  jal         func_15EDF0
label_34b86c:
    if (ctx->pc == 0x34B86Cu) {
        ctx->pc = 0x34B86Cu;
            // 0x34b86c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B870u;
        goto label_34b870;
    }
    ctx->pc = 0x34B868u;
    SET_GPR_U32(ctx, 31, 0x34B870u);
    ctx->pc = 0x34B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B868u;
            // 0x34b86c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B870u; }
        if (ctx->pc != 0x34B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B870u; }
        if (ctx->pc != 0x34B870u) { return; }
    }
    ctx->pc = 0x34B870u;
label_34b870:
    // 0x34b870: 0xae000764  sw          $zero, 0x764($s0)
    ctx->pc = 0x34b870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 0));
label_34b874:
    // 0x34b874: 0x8e020764  lw          $v0, 0x764($s0)
    ctx->pc = 0x34b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
label_34b878:
    // 0x34b878: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_34b87c:
    if (ctx->pc == 0x34B87Cu) {
        ctx->pc = 0x34B87Cu;
            // 0x34b87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B880u;
        goto label_34b880;
    }
    ctx->pc = 0x34B878u;
    {
        const bool branch_taken_0x34b878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b878) {
            ctx->pc = 0x34B87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B878u;
            // 0x34b87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B8ECu;
            goto label_34b8ec;
        }
    }
    ctx->pc = 0x34B880u;
label_34b880:
    // 0x34b880: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_34b884:
    // 0x34b884: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34b888:
    // 0x34b888: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b88c:
    // 0x34b88c: 0xc040140  jal         func_100500
label_34b890:
    if (ctx->pc == 0x34B890u) {
        ctx->pc = 0x34B890u;
            // 0x34b890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B894u;
        goto label_34b894;
    }
    ctx->pc = 0x34B88Cu;
    SET_GPR_U32(ctx, 31, 0x34B894u);
    ctx->pc = 0x34B890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B88Cu;
            // 0x34b890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B894u; }
        if (ctx->pc != 0x34B894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B894u; }
        if (ctx->pc != 0x34B894u) { return; }
    }
    ctx->pc = 0x34B894u;
label_34b894:
    // 0x34b894: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_34b898:
    if (ctx->pc == 0x34B898u) {
        ctx->pc = 0x34B898u;
            // 0x34b898: 0xae020764  sw          $v0, 0x764($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 2));
        ctx->pc = 0x34B89Cu;
        goto label_34b89c;
    }
    ctx->pc = 0x34B894u;
    {
        const bool branch_taken_0x34b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b894) {
            ctx->pc = 0x34B898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B894u;
            // 0x34b898: 0xae020764  sw          $v0, 0x764($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B8C8u;
            goto label_34b8c8;
        }
    }
    ctx->pc = 0x34B89Cu;
label_34b89c:
    // 0x34b89c: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x34b89cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
label_34b8a0:
    // 0x34b8a0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x34b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b8a4:
    // 0x34b8a4: 0x92260013  lbu         $a2, 0x13($s1)
    ctx->pc = 0x34b8a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
label_34b8a8:
    // 0x34b8a8: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x34b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b8ac:
    // 0x34b8ac: 0x92270014  lbu         $a3, 0x14($s1)
    ctx->pc = 0x34b8acu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_34b8b0:
    // 0x34b8b0: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x34b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b8b4:
    // 0x34b8b4: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x34b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_34b8b8:
    // 0x34b8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b8bc:
    // 0x34b8bc: 0xc0fb4c8  jal         func_3ED320
label_34b8c0:
    if (ctx->pc == 0x34B8C0u) {
        ctx->pc = 0x34B8C0u;
            // 0x34b8c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B8C4u;
        goto label_34b8c4;
    }
    ctx->pc = 0x34B8BCu;
    SET_GPR_U32(ctx, 31, 0x34B8C4u);
    ctx->pc = 0x34B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B8BCu;
            // 0x34b8c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ED320u;
    if (runtime->hasFunction(0x3ED320u)) {
        auto targetFn = runtime->lookupFunction(0x3ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B8C4u; }
        if (ctx->pc != 0x34B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ED320_0x3ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B8C4u; }
        if (ctx->pc != 0x34B8C4u) { return; }
    }
    ctx->pc = 0x34B8C4u;
label_34b8c4:
    // 0x34b8c4: 0xae020764  sw          $v0, 0x764($s0)
    ctx->pc = 0x34b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 2));
label_34b8c8:
    // 0x34b8c8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x34b8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_34b8cc:
    // 0x34b8cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34b8d0:
    if (ctx->pc == 0x34B8D0u) {
        ctx->pc = 0x34B8D4u;
        goto label_34b8d4;
    }
    ctx->pc = 0x34B8CCu;
    {
        const bool branch_taken_0x34b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b8cc) {
            ctx->pc = 0x34B8E8u;
            goto label_34b8e8;
        }
    }
    ctx->pc = 0x34B8D4u;
label_34b8d4:
    // 0x34b8d4: 0x86240016  lh          $a0, 0x16($s1)
    ctx->pc = 0x34b8d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_34b8d8:
    // 0x34b8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b8dc:
    // 0x34b8dc: 0x8e030764  lw          $v1, 0x764($s0)
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1892)));
label_34b8e0:
    // 0x34b8e0: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x34b8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_34b8e4:
    // 0x34b8e4: 0xa46400e6  sh          $a0, 0xE6($v1)
    ctx->pc = 0x34b8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 230), (uint16_t)GPR_U32(ctx, 4));
label_34b8e8:
    // 0x34b8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34b8ec:
    // 0x34b8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b8f0:
    // 0x34b8f0: 0xc04a576  jal         func_1295D8
label_34b8f4:
    if (ctx->pc == 0x34B8F4u) {
        ctx->pc = 0x34B8F4u;
            // 0x34b8f4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x34B8F8u;
        goto label_34b8f8;
    }
    ctx->pc = 0x34B8F0u;
    SET_GPR_U32(ctx, 31, 0x34B8F8u);
    ctx->pc = 0x34B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B8F0u;
            // 0x34b8f4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B8F8u; }
        if (ctx->pc != 0x34B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B8F8u; }
        if (ctx->pc != 0x34B8F8u) { return; }
    }
    ctx->pc = 0x34B8F8u;
label_34b8f8:
    // 0x34b8f8: 0x92020844  lbu         $v0, 0x844($s0)
    ctx->pc = 0x34b8f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2116)));
label_34b8fc:
    // 0x34b8fc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_34b900:
    if (ctx->pc == 0x34B900u) {
        ctx->pc = 0x34B900u;
            // 0x34b900: 0x26110844  addiu       $s1, $s0, 0x844 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2116));
        ctx->pc = 0x34B904u;
        goto label_34b904;
    }
    ctx->pc = 0x34B8FCu;
    {
        const bool branch_taken_0x34b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B8FCu;
            // 0x34b900: 0x26110844  addiu       $s1, $s0, 0x844 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b8fc) {
            ctx->pc = 0x34B9A4u;
            goto label_34b9a4;
        }
    }
    ctx->pc = 0x34B904u;
label_34b904:
    // 0x34b904: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x34b904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_34b908:
    // 0x34b908: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_34b90c:
    if (ctx->pc == 0x34B90Cu) {
        ctx->pc = 0x34B90Cu;
            // 0x34b90c: 0x8e050768  lw          $a1, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->pc = 0x34B910u;
        goto label_34b910;
    }
    ctx->pc = 0x34B908u;
    {
        const bool branch_taken_0x34b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b908) {
            ctx->pc = 0x34B90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B908u;
            // 0x34b90c: 0x8e050768  lw          $a1, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B934u;
            goto label_34b934;
        }
    }
    ctx->pc = 0x34B910u;
label_34b910:
    // 0x34b910: 0x8e050768  lw          $a1, 0x768($s0)
    ctx->pc = 0x34b910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_34b914:
    // 0x34b914: 0x50a00020  beql        $a1, $zero, . + 4 + (0x20 << 2)
label_34b918:
    if (ctx->pc == 0x34B918u) {
        ctx->pc = 0x34B918u;
            // 0x34b918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B91Cu;
        goto label_34b91c;
    }
    ctx->pc = 0x34B914u;
    {
        const bool branch_taken_0x34b914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b914) {
            ctx->pc = 0x34B918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B914u;
            // 0x34b918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B998u;
            goto label_34b998;
        }
    }
    ctx->pc = 0x34B91Cu;
label_34b91c:
    // 0x34b91c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b920:
    // 0x34b920: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b924:
    // 0x34b924: 0xc057b7c  jal         func_15EDF0
label_34b928:
    if (ctx->pc == 0x34B928u) {
        ctx->pc = 0x34B928u;
            // 0x34b928: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B92Cu;
        goto label_34b92c;
    }
    ctx->pc = 0x34B924u;
    SET_GPR_U32(ctx, 31, 0x34B92Cu);
    ctx->pc = 0x34B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B924u;
            // 0x34b928: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B92Cu; }
        if (ctx->pc != 0x34B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B92Cu; }
        if (ctx->pc != 0x34B92Cu) { return; }
    }
    ctx->pc = 0x34B92Cu;
label_34b92c:
    // 0x34b92c: 0x10000019  b           . + 4 + (0x19 << 2)
label_34b930:
    if (ctx->pc == 0x34B930u) {
        ctx->pc = 0x34B930u;
            // 0x34b930: 0xae000768  sw          $zero, 0x768($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
        ctx->pc = 0x34B934u;
        goto label_34b934;
    }
    ctx->pc = 0x34B92Cu;
    {
        const bool branch_taken_0x34b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B92Cu;
            // 0x34b930: 0xae000768  sw          $zero, 0x768($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b92c) {
            ctx->pc = 0x34B994u;
            goto label_34b994;
        }
    }
    ctx->pc = 0x34B934u;
label_34b934:
    // 0x34b934: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_34b938:
    if (ctx->pc == 0x34B938u) {
        ctx->pc = 0x34B938u;
            // 0x34b938: 0x8e020768  lw          $v0, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->pc = 0x34B93Cu;
        goto label_34b93c;
    }
    ctx->pc = 0x34B934u;
    {
        const bool branch_taken_0x34b934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b934) {
            ctx->pc = 0x34B938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B934u;
            // 0x34b938: 0x8e020768  lw          $v0, 0x768($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B954u;
            goto label_34b954;
        }
    }
    ctx->pc = 0x34B93Cu;
label_34b93c:
    // 0x34b93c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34b940:
    // 0x34b940: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x34b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_34b944:
    // 0x34b944: 0xc057b7c  jal         func_15EDF0
label_34b948:
    if (ctx->pc == 0x34B948u) {
        ctx->pc = 0x34B948u;
            // 0x34b948: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34B94Cu;
        goto label_34b94c;
    }
    ctx->pc = 0x34B944u;
    SET_GPR_U32(ctx, 31, 0x34B94Cu);
    ctx->pc = 0x34B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B944u;
            // 0x34b948: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B94Cu; }
        if (ctx->pc != 0x34B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B94Cu; }
        if (ctx->pc != 0x34B94Cu) { return; }
    }
    ctx->pc = 0x34B94Cu;
label_34b94c:
    // 0x34b94c: 0xae000768  sw          $zero, 0x768($s0)
    ctx->pc = 0x34b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 0));
label_34b950:
    // 0x34b950: 0x8e020768  lw          $v0, 0x768($s0)
    ctx->pc = 0x34b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_34b954:
    // 0x34b954: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_34b958:
    if (ctx->pc == 0x34B958u) {
        ctx->pc = 0x34B95Cu;
        goto label_34b95c;
    }
    ctx->pc = 0x34B954u;
    {
        const bool branch_taken_0x34b954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b954) {
            ctx->pc = 0x34B994u;
            goto label_34b994;
        }
    }
    ctx->pc = 0x34B95Cu;
label_34b95c:
    // 0x34b95c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_34b960:
    // 0x34b960: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34b964:
    // 0x34b964: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34b964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b968:
    // 0x34b968: 0xc040140  jal         func_100500
label_34b96c:
    if (ctx->pc == 0x34B96Cu) {
        ctx->pc = 0x34B96Cu;
            // 0x34b96c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B970u;
        goto label_34b970;
    }
    ctx->pc = 0x34B968u;
    SET_GPR_U32(ctx, 31, 0x34B970u);
    ctx->pc = 0x34B96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B968u;
            // 0x34b96c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B970u; }
        if (ctx->pc != 0x34B970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B970u; }
        if (ctx->pc != 0x34B970u) { return; }
    }
    ctx->pc = 0x34B970u;
label_34b970:
    // 0x34b970: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_34b974:
    if (ctx->pc == 0x34B974u) {
        ctx->pc = 0x34B974u;
            // 0x34b974: 0xae020768  sw          $v0, 0x768($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 2));
        ctx->pc = 0x34B978u;
        goto label_34b978;
    }
    ctx->pc = 0x34B970u;
    {
        const bool branch_taken_0x34b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b970) {
            ctx->pc = 0x34B974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B970u;
            // 0x34b974: 0xae020768  sw          $v0, 0x768($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34B994u;
            goto label_34b994;
        }
    }
    ctx->pc = 0x34B978u;
label_34b978:
    // 0x34b978: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x34b978u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_34b97c:
    // 0x34b97c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x34b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b980:
    // 0x34b980: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x34b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b984:
    // 0x34b984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b988:
    // 0x34b988: 0xc0fb370  jal         func_3ECDC0
label_34b98c:
    if (ctx->pc == 0x34B98Cu) {
        ctx->pc = 0x34B98Cu;
            // 0x34b98c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B990u;
        goto label_34b990;
    }
    ctx->pc = 0x34B988u;
    SET_GPR_U32(ctx, 31, 0x34B990u);
    ctx->pc = 0x34B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B988u;
            // 0x34b98c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ECDC0u;
    if (runtime->hasFunction(0x3ECDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3ECDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B990u; }
        if (ctx->pc != 0x34B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ECDC0_0x3ecdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B990u; }
        if (ctx->pc != 0x34B990u) { return; }
    }
    ctx->pc = 0x34B990u;
label_34b990:
    // 0x34b990: 0xae020768  sw          $v0, 0x768($s0)
    ctx->pc = 0x34b990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1896), GPR_U32(ctx, 2));
label_34b994:
    // 0x34b994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34b998:
    // 0x34b998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b99c:
    // 0x34b99c: 0xc04a576  jal         func_1295D8
label_34b9a0:
    if (ctx->pc == 0x34B9A0u) {
        ctx->pc = 0x34B9A0u;
            // 0x34b9a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x34B9A4u;
        goto label_34b9a4;
    }
    ctx->pc = 0x34B99Cu;
    SET_GPR_U32(ctx, 31, 0x34B9A4u);
    ctx->pc = 0x34B9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B99Cu;
            // 0x34b9a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B9A4u; }
        if (ctx->pc != 0x34B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B9A4u; }
        if (ctx->pc != 0x34B9A4u) { return; }
    }
    ctx->pc = 0x34B9A4u;
label_34b9a4:
    // 0x34b9a4: 0x92020854  lbu         $v0, 0x854($s0)
    ctx->pc = 0x34b9a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2132)));
label_34b9a8:
    // 0x34b9a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_34b9ac:
    if (ctx->pc == 0x34B9ACu) {
        ctx->pc = 0x34B9ACu;
            // 0x34b9ac: 0x26110854  addiu       $s1, $s0, 0x854 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2132));
        ctx->pc = 0x34B9B0u;
        goto label_34b9b0;
    }
    ctx->pc = 0x34B9A8u;
    {
        const bool branch_taken_0x34b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B9A8u;
            // 0x34b9ac: 0x26110854  addiu       $s1, $s0, 0x854 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b9a8) {
            ctx->pc = 0x34BA10u;
            goto label_34ba10;
        }
    }
    ctx->pc = 0x34B9B0u;
label_34b9b0:
    // 0x34b9b0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x34b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34b9b4:
    // 0x34b9b4: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x34b9b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_34b9b8:
    // 0x34b9b8: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x34b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34b9bc:
    // 0x34b9bc: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x34b9bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_34b9c0:
    // 0x34b9c0: 0xc62e0018  lwc1        $f14, 0x18($s1)
    ctx->pc = 0x34b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34b9c4:
    // 0x34b9c4: 0x92270004  lbu         $a3, 0x4($s1)
    ctx->pc = 0x34b9c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_34b9c8:
    // 0x34b9c8: 0xc62f000c  lwc1        $f15, 0xC($s1)
    ctx->pc = 0x34b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_34b9cc:
    // 0x34b9cc: 0x92280005  lbu         $t0, 0x5($s1)
    ctx->pc = 0x34b9ccu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_34b9d0:
    // 0x34b9d0: 0xc6300010  lwc1        $f16, 0x10($s1)
    ctx->pc = 0x34b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_34b9d4:
    // 0x34b9d4: 0xc631001c  lwc1        $f17, 0x1C($s1)
    ctx->pc = 0x34b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_34b9d8:
    // 0x34b9d8: 0xc0fb644  jal         func_3ED910
label_34b9dc:
    if (ctx->pc == 0x34B9DCu) {
        ctx->pc = 0x34B9DCu;
            // 0x34b9dc: 0x8e040760  lw          $a0, 0x760($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1888)));
        ctx->pc = 0x34B9E0u;
        goto label_34b9e0;
    }
    ctx->pc = 0x34B9D8u;
    SET_GPR_U32(ctx, 31, 0x34B9E0u);
    ctx->pc = 0x34B9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34B9D8u;
            // 0x34b9dc: 0x8e040760  lw          $a0, 0x760($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ED910u;
    if (runtime->hasFunction(0x3ED910u)) {
        auto targetFn = runtime->lookupFunction(0x3ED910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B9E0u; }
        if (ctx->pc != 0x34B9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ED910_0x3ed910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34B9E0u; }
        if (ctx->pc != 0x34B9E0u) { return; }
    }
    ctx->pc = 0x34B9E0u;
label_34b9e0:
    // 0x34b9e0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x34b9e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_34b9e4:
    // 0x34b9e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_34b9e8:
    if (ctx->pc == 0x34B9E8u) {
        ctx->pc = 0x34B9E8u;
            // 0x34b9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B9ECu;
        goto label_34b9ec;
    }
    ctx->pc = 0x34B9E4u;
    {
        const bool branch_taken_0x34b9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b9e4) {
            ctx->pc = 0x34B9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34B9E4u;
            // 0x34b9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BA04u;
            goto label_34ba04;
        }
    }
    ctx->pc = 0x34B9ECu;
label_34b9ec:
    // 0x34b9ec: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x34b9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_34b9f0:
    // 0x34b9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b9f4:
    // 0x34b9f4: 0x8e030760  lw          $v1, 0x760($s0)
    ctx->pc = 0x34b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1888)));
label_34b9f8:
    // 0x34b9f8: 0xa062009c  sb          $v0, 0x9C($v1)
    ctx->pc = 0x34b9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 2));
label_34b9fc:
    // 0x34b9fc: 0xa464009e  sh          $a0, 0x9E($v1)
    ctx->pc = 0x34b9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 158), (uint16_t)GPR_U32(ctx, 4));
label_34ba00:
    // 0x34ba00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34ba04:
    // 0x34ba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ba08:
    // 0x34ba08: 0xc04a576  jal         func_1295D8
label_34ba0c:
    if (ctx->pc == 0x34BA0Cu) {
        ctx->pc = 0x34BA0Cu;
            // 0x34ba0c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x34BA10u;
        goto label_34ba10;
    }
    ctx->pc = 0x34BA08u;
    SET_GPR_U32(ctx, 31, 0x34BA10u);
    ctx->pc = 0x34BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA08u;
            // 0x34ba0c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA10u; }
        if (ctx->pc != 0x34BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA10u; }
        if (ctx->pc != 0x34BA10u) { return; }
    }
    ctx->pc = 0x34BA10u;
label_34ba10:
    // 0x34ba10: 0x92020874  lbu         $v0, 0x874($s0)
    ctx->pc = 0x34ba10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2164)));
label_34ba14:
    // 0x34ba14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_34ba18:
    if (ctx->pc == 0x34BA18u) {
        ctx->pc = 0x34BA18u;
            // 0x34ba18: 0x26110874  addiu       $s1, $s0, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2164));
        ctx->pc = 0x34BA1Cu;
        goto label_34ba1c;
    }
    ctx->pc = 0x34BA14u;
    {
        const bool branch_taken_0x34ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA14u;
            // 0x34ba18: 0x26110874  addiu       $s1, $s0, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba14) {
            ctx->pc = 0x34BA8Cu;
            goto label_34ba8c;
        }
    }
    ctx->pc = 0x34BA1Cu;
label_34ba1c:
    // 0x34ba1c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x34ba1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_34ba20:
    // 0x34ba20: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_34ba24:
    if (ctx->pc == 0x34BA24u) {
        ctx->pc = 0x34BA24u;
            // 0x34ba24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BA28u;
        goto label_34ba28;
    }
    ctx->pc = 0x34BA20u;
    {
        const bool branch_taken_0x34ba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba20) {
            ctx->pc = 0x34BA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA20u;
            // 0x34ba24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BA68u;
            goto label_34ba68;
        }
    }
    ctx->pc = 0x34BA28u;
label_34ba28:
    // 0x34ba28: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x34ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34ba2c:
    // 0x34ba2c: 0xc62e000c  lwc1        $f14, 0xC($s1)
    ctx->pc = 0x34ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34ba30:
    // 0x34ba30: 0xc0517cc  jal         func_145F30
label_34ba34:
    if (ctx->pc == 0x34BA34u) {
        ctx->pc = 0x34BA34u;
            // 0x34ba34: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x34BA38u;
        goto label_34ba38;
    }
    ctx->pc = 0x34BA30u;
    SET_GPR_U32(ctx, 31, 0x34BA38u);
    ctx->pc = 0x34BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA30u;
            // 0x34ba34: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA38u; }
        if (ctx->pc != 0x34BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F30_0x145f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA38u; }
        if (ctx->pc != 0x34BA38u) { return; }
    }
    ctx->pc = 0x34BA38u;
label_34ba38:
    // 0x34ba38: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x34ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34ba3c:
    // 0x34ba3c: 0xc62e001c  lwc1        $f14, 0x1C($s1)
    ctx->pc = 0x34ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34ba40:
    // 0x34ba40: 0xc62f0020  lwc1        $f15, 0x20($s1)
    ctx->pc = 0x34ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_34ba44:
    // 0x34ba44: 0xc05182c  jal         func_1460B0
label_34ba48:
    if (ctx->pc == 0x34BA48u) {
        ctx->pc = 0x34BA48u;
            // 0x34ba48: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x34BA4Cu;
        goto label_34ba4c;
    }
    ctx->pc = 0x34BA44u;
    SET_GPR_U32(ctx, 31, 0x34BA4Cu);
    ctx->pc = 0x34BA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA44u;
            // 0x34ba48: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA4Cu; }
        if (ctx->pc != 0x34BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460B0_0x1460b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA4Cu; }
        if (ctx->pc != 0x34BA4Cu) { return; }
    }
    ctx->pc = 0x34BA4Cu;
label_34ba4c:
    // 0x34ba4c: 0xc0517c0  jal         func_145F00
label_34ba50:
    if (ctx->pc == 0x34BA50u) {
        ctx->pc = 0x34BA50u;
            // 0x34ba50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34BA54u;
        goto label_34ba54;
    }
    ctx->pc = 0x34BA4Cu;
    SET_GPR_U32(ctx, 31, 0x34BA54u);
    ctx->pc = 0x34BA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA4Cu;
            // 0x34ba50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA54u; }
        if (ctx->pc != 0x34BA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F00_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA54u; }
        if (ctx->pc != 0x34BA54u) { return; }
    }
    ctx->pc = 0x34BA54u;
label_34ba54:
    // 0x34ba54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ba58:
    // 0x34ba58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ba5c:
    // 0x34ba5c: 0x8c42e3e8  lw          $v0, -0x1C18($v0)
    ctx->pc = 0x34ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_34ba60:
    // 0x34ba60: 0x10000006  b           . + 4 + (0x6 << 2)
label_34ba64:
    if (ctx->pc == 0x34BA64u) {
        ctx->pc = 0x34BA64u;
            // 0x34ba64: 0xa0430013  sb          $v1, 0x13($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x34BA68u;
        goto label_34ba68;
    }
    ctx->pc = 0x34BA60u;
    {
        const bool branch_taken_0x34ba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA60u;
            // 0x34ba64: 0xa0430013  sb          $v1, 0x13($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ba60) {
            ctx->pc = 0x34BA7Cu;
            goto label_34ba7c;
        }
    }
    ctx->pc = 0x34BA68u;
label_34ba68:
    // 0x34ba68: 0xc0517c0  jal         func_145F00
label_34ba6c:
    if (ctx->pc == 0x34BA6Cu) {
        ctx->pc = 0x34BA70u;
        goto label_34ba70;
    }
    ctx->pc = 0x34BA68u;
    SET_GPR_U32(ctx, 31, 0x34BA70u);
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA70u; }
        if (ctx->pc != 0x34BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F00_0x145f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA70u; }
        if (ctx->pc != 0x34BA70u) { return; }
    }
    ctx->pc = 0x34BA70u;
label_34ba70:
    // 0x34ba70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ba74:
    // 0x34ba74: 0x8c42e3e8  lw          $v0, -0x1C18($v0)
    ctx->pc = 0x34ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_34ba78:
    // 0x34ba78: 0xa0400013  sb          $zero, 0x13($v0)
    ctx->pc = 0x34ba78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 0));
label_34ba7c:
    // 0x34ba7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34ba80:
    // 0x34ba80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ba80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ba84:
    // 0x34ba84: 0xc04a576  jal         func_1295D8
label_34ba88:
    if (ctx->pc == 0x34BA88u) {
        ctx->pc = 0x34BA88u;
            // 0x34ba88: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x34BA8Cu;
        goto label_34ba8c;
    }
    ctx->pc = 0x34BA84u;
    SET_GPR_U32(ctx, 31, 0x34BA8Cu);
    ctx->pc = 0x34BA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA84u;
            // 0x34ba88: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA8Cu; }
        if (ctx->pc != 0x34BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA8Cu; }
        if (ctx->pc != 0x34BA8Cu) { return; }
    }
    ctx->pc = 0x34BA8Cu;
label_34ba8c:
    // 0x34ba8c: 0xc0d2f58  jal         func_34BD60
label_34ba90:
    if (ctx->pc == 0x34BA90u) {
        ctx->pc = 0x34BA90u;
            // 0x34ba90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BA94u;
        goto label_34ba94;
    }
    ctx->pc = 0x34BA8Cu;
    SET_GPR_U32(ctx, 31, 0x34BA94u);
    ctx->pc = 0x34BA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA8Cu;
            // 0x34ba90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BD60u;
    if (runtime->hasFunction(0x34BD60u)) {
        auto targetFn = runtime->lookupFunction(0x34BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA94u; }
        if (ctx->pc != 0x34BA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BD60_0x34bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BA94u; }
        if (ctx->pc != 0x34BA94u) { return; }
    }
    ctx->pc = 0x34BA94u;
label_34ba94:
    // 0x34ba94: 0x8e050794  lw          $a1, 0x794($s0)
    ctx->pc = 0x34ba94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1940)));
label_34ba98:
    // 0x34ba98: 0xc112b44  jal         func_44AD10
label_34ba9c:
    if (ctx->pc == 0x34BA9Cu) {
        ctx->pc = 0x34BA9Cu;
            // 0x34ba9c: 0x260408a0  addiu       $a0, $s0, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
        ctx->pc = 0x34BAA0u;
        goto label_34baa0;
    }
    ctx->pc = 0x34BA98u;
    SET_GPR_U32(ctx, 31, 0x34BAA0u);
    ctx->pc = 0x34BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BA98u;
            // 0x34ba9c: 0x260408a0  addiu       $a0, $s0, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AD10u;
    if (runtime->hasFunction(0x44AD10u)) {
        auto targetFn = runtime->lookupFunction(0x44AD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAA0u; }
        if (ctx->pc != 0x34BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AD10_0x44ad10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAA0u; }
        if (ctx->pc != 0x34BAA0u) { return; }
    }
    ctx->pc = 0x34BAA0u;
label_34baa0:
    // 0x34baa0: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x34baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
label_34baa4:
    // 0x34baa4: 0xc0d3404  jal         func_34D010
label_34baa8:
    if (ctx->pc == 0x34BAA8u) {
        ctx->pc = 0x34BAA8u;
            // 0x34baa8: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->pc = 0x34BAACu;
        goto label_34baac;
    }
    ctx->pc = 0x34BAA4u;
    SET_GPR_U32(ctx, 31, 0x34BAACu);
    ctx->pc = 0x34BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAA4u;
            // 0x34baa8: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D010u;
    if (runtime->hasFunction(0x34D010u)) {
        auto targetFn = runtime->lookupFunction(0x34D010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAACu; }
        if (ctx->pc != 0x34BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D010_0x34d010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAACu; }
        if (ctx->pc != 0x34BAACu) { return; }
    }
    ctx->pc = 0x34BAACu;
label_34baac:
    // 0x34baac: 0xc0f14bc  jal         func_3C52F0
label_34bab0:
    if (ctx->pc == 0x34BAB0u) {
        ctx->pc = 0x34BAB0u;
            // 0x34bab0: 0x8e040778  lw          $a0, 0x778($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
        ctx->pc = 0x34BAB4u;
        goto label_34bab4;
    }
    ctx->pc = 0x34BAACu;
    SET_GPR_U32(ctx, 31, 0x34BAB4u);
    ctx->pc = 0x34BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAACu;
            // 0x34bab0: 0x8e040778  lw          $a0, 0x778($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C52F0u;
    if (runtime->hasFunction(0x3C52F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAB4u; }
        if (ctx->pc != 0x34BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C52F0_0x3c52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAB4u; }
        if (ctx->pc != 0x34BAB4u) { return; }
    }
    ctx->pc = 0x34BAB4u;
label_34bab4:
    // 0x34bab4: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x34bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
label_34bab8:
    // 0x34bab8: 0xc0d33a4  jal         func_34CE90
label_34babc:
    if (ctx->pc == 0x34BABCu) {
        ctx->pc = 0x34BABCu;
            // 0x34babc: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->pc = 0x34BAC0u;
        goto label_34bac0;
    }
    ctx->pc = 0x34BAB8u;
    SET_GPR_U32(ctx, 31, 0x34BAC0u);
    ctx->pc = 0x34BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAB8u;
            // 0x34babc: 0x24440054  addiu       $a0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34CE90u;
    if (runtime->hasFunction(0x34CE90u)) {
        auto targetFn = runtime->lookupFunction(0x34CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAC0u; }
        if (ctx->pc != 0x34BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034CE90_0x34ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAC0u; }
        if (ctx->pc != 0x34BAC0u) { return; }
    }
    ctx->pc = 0x34BAC0u;
label_34bac0:
    // 0x34bac0: 0xc0f13b4  jal         func_3C4ED0
label_34bac4:
    if (ctx->pc == 0x34BAC4u) {
        ctx->pc = 0x34BAC4u;
            // 0x34bac4: 0x8e04077c  lw          $a0, 0x77C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
        ctx->pc = 0x34BAC8u;
        goto label_34bac8;
    }
    ctx->pc = 0x34BAC0u;
    SET_GPR_U32(ctx, 31, 0x34BAC8u);
    ctx->pc = 0x34BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAC0u;
            // 0x34bac4: 0x8e04077c  lw          $a0, 0x77C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4ED0u;
    if (runtime->hasFunction(0x3C4ED0u)) {
        auto targetFn = runtime->lookupFunction(0x3C4ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAC8u; }
        if (ctx->pc != 0x34BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4ED0_0x3c4ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAC8u; }
        if (ctx->pc != 0x34BAC8u) { return; }
    }
    ctx->pc = 0x34BAC8u;
label_34bac8:
    // 0x34bac8: 0xc0f1598  jal         func_3C5660
label_34bacc:
    if (ctx->pc == 0x34BACCu) {
        ctx->pc = 0x34BACCu;
            // 0x34bacc: 0x8e040780  lw          $a0, 0x780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
        ctx->pc = 0x34BAD0u;
        goto label_34bad0;
    }
    ctx->pc = 0x34BAC8u;
    SET_GPR_U32(ctx, 31, 0x34BAD0u);
    ctx->pc = 0x34BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAC8u;
            // 0x34bacc: 0x8e040780  lw          $a0, 0x780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C5660u;
    if (runtime->hasFunction(0x3C5660u)) {
        auto targetFn = runtime->lookupFunction(0x3C5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAD0u; }
        if (ctx->pc != 0x34BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C5660_0x3c5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BAD0u; }
        if (ctx->pc != 0x34BAD0u) { return; }
    }
    ctx->pc = 0x34BAD0u;
label_34bad0:
    // 0x34bad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34bad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34bad4:
    // 0x34bad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34bad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34bad8:
    // 0x34bad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34bad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34badc:
    // 0x34badc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34badcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34bae0:
    // 0x34bae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34bae4:
    // 0x34bae4: 0x3e00008  jr          $ra
label_34bae8:
    if (ctx->pc == 0x34BAE8u) {
        ctx->pc = 0x34BAE8u;
            // 0x34bae8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x34BAECu;
        goto label_34baec;
    }
    ctx->pc = 0x34BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAE4u;
            // 0x34bae8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BAECu;
label_34baec:
    // 0x34baec: 0x0  nop
    ctx->pc = 0x34baecu;
    // NOP
label_34baf0:
    // 0x34baf0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x34baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_34baf4:
    // 0x34baf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34baf8:
    // 0x34baf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34baf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34bafc:
    // 0x34bafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34bb00:
    // 0x34bb00: 0x8ca40790  lw          $a0, 0x790($a1)
    ctx->pc = 0x34bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34bb04:
    // 0x34bb04: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x34bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_34bb08:
    // 0x34bb08: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_34bb0c:
    if (ctx->pc == 0x34BB0Cu) {
        ctx->pc = 0x34BB0Cu;
            // 0x34bb0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34BB10u;
        goto label_34bb10;
    }
    ctx->pc = 0x34BB08u;
    {
        const bool branch_taken_0x34bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BB08u;
            // 0x34bb0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb08) {
            ctx->pc = 0x34BBBCu;
            goto label_34bbbc;
        }
    }
    ctx->pc = 0x34BB10u;
label_34bb10:
    // 0x34bb10: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_34bb14:
    // 0x34bb14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34bb18:
    // 0x34bb18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34bb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34bb1c:
    // 0x34bb1c: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34bb20:
    // 0x34bb20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34bb24:
    // 0x34bb24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_34bb28:
    // 0x34bb28: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34bb2c:
    // 0x34bb2c: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x34bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34bb30:
    // 0x34bb30: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_34bb34:
    if (ctx->pc == 0x34BB34u) {
        ctx->pc = 0x34BB34u;
            // 0x34bb34: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x34BB38u;
        goto label_34bb38;
    }
    ctx->pc = 0x34BB30u;
    {
        const bool branch_taken_0x34bb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BB30u;
            // 0x34bb34: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb30) {
            ctx->pc = 0x34BB54u;
            goto label_34bb54;
        }
    }
    ctx->pc = 0x34BB38u;
label_34bb38:
    // 0x34bb38: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x34bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_34bb3c:
    // 0x34bb3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_34bb40:
    // 0x34bb40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34bb44:
    // 0x34bb44: 0x0  nop
    ctx->pc = 0x34bb44u;
    // NOP
label_34bb48:
    // 0x34bb48: 0x0  nop
    ctx->pc = 0x34bb48u;
    // NOP
label_34bb4c:
    // 0x34bb4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_34bb50:
    if (ctx->pc == 0x34BB50u) {
        ctx->pc = 0x34BB54u;
        goto label_34bb54;
    }
    ctx->pc = 0x34BB4Cu;
    {
        const bool branch_taken_0x34bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb4c) {
            ctx->pc = 0x34BB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bb38;
        }
    }
    ctx->pc = 0x34BB54u;
label_34bb54:
    // 0x34bb54: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34bb58:
    // 0x34bb58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x34bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_34bb5c:
    // 0x34bb5c: 0xc4611628  lwc1        $f1, 0x1628($v1)
    ctx->pc = 0x34bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34bb60:
    // 0x34bb60: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x34bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_34bb64:
    // 0x34bb64: 0xc440162c  lwc1        $f0, 0x162C($v0)
    ctx->pc = 0x34bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34bb68:
    // 0x34bb68: 0x8e2708a4  lw          $a3, 0x8A4($s1)
    ctx->pc = 0x34bb68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
label_34bb6c:
    // 0x34bb6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34bb70:
    // 0x34bb70: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_34bb74:
    // 0x34bb74: 0x822308ab  lb          $v1, 0x8AB($s1)
    ctx->pc = 0x34bb74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2219)));
label_34bb78:
    // 0x34bb78: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x34bb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_34bb7c:
    // 0x34bb7c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x34bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_34bb80:
    // 0x34bb80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34bb84:
    // 0x34bb84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_34bb88:
    // 0x34bb88: 0x8c480138  lw          $t0, 0x138($v0)
    ctx->pc = 0x34bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_34bb8c:
    // 0x34bb8c: 0xc043be4  jal         func_10EF90
label_34bb90:
    if (ctx->pc == 0x34BB90u) {
        ctx->pc = 0x34BB90u;
            // 0x34bb90: 0x24c63060  addiu       $a2, $a2, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12384));
        ctx->pc = 0x34BB94u;
        goto label_34bb94;
    }
    ctx->pc = 0x34BB8Cu;
    SET_GPR_U32(ctx, 31, 0x34BB94u);
    ctx->pc = 0x34BB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BB8Cu;
            // 0x34bb90: 0x24c63060  addiu       $a2, $a2, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BB94u; }
        if (ctx->pc != 0x34BB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BB94u; }
        if (ctx->pc != 0x34BB94u) { return; }
    }
    ctx->pc = 0x34BB94u;
label_34bb94:
    // 0x34bb94: 0x860502fc  lh          $a1, 0x2FC($s0)
    ctx->pc = 0x34bb94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 764)));
label_34bb98:
    // 0x34bb98: 0xa6050308  sh          $a1, 0x308($s0)
    ctx->pc = 0x34bb98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 776), (uint16_t)GPR_U32(ctx, 5));
label_34bb9c:
    // 0x34bb9c: 0xc05d006  jal         func_174018
label_34bba0:
    if (ctx->pc == 0x34BBA0u) {
        ctx->pc = 0x34BBA0u;
            // 0x34bba0: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x34BBA4u;
        goto label_34bba4;
    }
    ctx->pc = 0x34BB9Cu;
    SET_GPR_U32(ctx, 31, 0x34BBA4u);
    ctx->pc = 0x34BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BB9Cu;
            // 0x34bba0: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BBA4u; }
        if (ctx->pc != 0x34BBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BBA4u; }
        if (ctx->pc != 0x34BBA4u) { return; }
    }
    ctx->pc = 0x34BBA4u;
label_34bba4:
    // 0x34bba4: 0x8e040188  lw          $a0, 0x188($s0)
    ctx->pc = 0x34bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_34bba8:
    // 0x34bba8: 0xc05d85a  jal         func_176168
label_34bbac:
    if (ctx->pc == 0x34BBACu) {
        ctx->pc = 0x34BBACu;
            // 0x34bbac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34BBB0u;
        goto label_34bbb0;
    }
    ctx->pc = 0x34BBA8u;
    SET_GPR_U32(ctx, 31, 0x34BBB0u);
    ctx->pc = 0x34BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BBA8u;
            // 0x34bbac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BBB0u; }
        if (ctx->pc != 0x34BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BBB0u; }
        if (ctx->pc != 0x34BBB0u) { return; }
    }
    ctx->pc = 0x34BBB0u;
label_34bbb0:
    // 0x34bbb0: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x34bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_34bbb4:
    // 0x34bbb4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x34bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_34bbb8:
    // 0x34bbb8: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34bbbc:
    // 0x34bbbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34bbc0:
    // 0x34bbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34bbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34bbc4:
    // 0x34bbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34bbc8:
    // 0x34bbc8: 0x3e00008  jr          $ra
label_34bbcc:
    if (ctx->pc == 0x34BBCCu) {
        ctx->pc = 0x34BBCCu;
            // 0x34bbcc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x34BBD0u;
        goto label_34bbd0;
    }
    ctx->pc = 0x34BBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BBC8u;
            // 0x34bbcc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BBD0u;
label_34bbd0:
    // 0x34bbd0: 0x8ca70790  lw          $a3, 0x790($a1)
    ctx->pc = 0x34bbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34bbd4:
    // 0x34bbd4: 0x24880024  addiu       $t0, $a0, 0x24
    ctx->pc = 0x34bbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_34bbd8:
    // 0x34bbd8: 0x30e40002  andi        $a0, $a3, 0x2
    ctx->pc = 0x34bbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_34bbdc:
    // 0x34bbdc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_34bbe0:
    if (ctx->pc == 0x34BBE0u) {
        ctx->pc = 0x34BBE0u;
            // 0x34bbe0: 0x24a30790  addiu       $v1, $a1, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
        ctx->pc = 0x34BBE4u;
        goto label_34bbe4;
    }
    ctx->pc = 0x34BBDCu;
    {
        const bool branch_taken_0x34bbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BBDCu;
            // 0x34bbe0: 0x24a30790  addiu       $v1, $a1, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bbdc) {
            ctx->pc = 0x34BC08u;
            goto label_34bc08;
        }
    }
    ctx->pc = 0x34BBE4u;
label_34bbe4:
    // 0x34bbe4: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x34bbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_34bbe8:
    // 0x34bbe8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x34bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_34bbec:
    // 0x34bbec: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x34bbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_34bbf0:
    // 0x34bbf0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x34bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_34bbf4:
    // 0x34bbf4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x34bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_34bbf8:
    // 0x34bbf8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x34bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34bbfc:
    // 0x34bbfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34bc00:
    // 0x34bc00: 0x1000000b  b           . + 4 + (0xB << 2)
label_34bc04:
    if (ctx->pc == 0x34BC04u) {
        ctx->pc = 0x34BC04u;
            // 0x34bc04: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x34BC08u;
        goto label_34bc08;
    }
    ctx->pc = 0x34BC00u;
    {
        const bool branch_taken_0x34bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC00u;
            // 0x34bc04: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc00) {
            ctx->pc = 0x34BC30u;
            goto label_34bc30;
        }
    }
    ctx->pc = 0x34BC08u;
label_34bc08:
    // 0x34bc08: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x34bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_34bc0c:
    // 0x34bc0c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x34bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_34bc10:
    // 0x34bc10: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x34bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
label_34bc14:
    // 0x34bc14: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x34bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
label_34bc18:
    // 0x34bc18: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x34bc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34bc1c:
    // 0x34bc1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34bc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_34bc20:
    // 0x34bc20: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x34bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_34bc24:
    // 0x34bc24: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x34bc24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34bc28:
    // 0x34bc28: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x34bc28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_34bc2c:
    // 0x34bc2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34bc30:
    // 0x34bc30: 0x8ca40790  lw          $a0, 0x790($a1)
    ctx->pc = 0x34bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_34bc34:
    // 0x34bc34: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x34bc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_34bc38:
    // 0x34bc38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_34bc3c:
    if (ctx->pc == 0x34BC3Cu) {
        ctx->pc = 0x34BC3Cu;
            // 0x34bc3c: 0xc5010000  lwc1        $f1, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x34BC40u;
        goto label_34bc40;
    }
    ctx->pc = 0x34BC38u;
    {
        const bool branch_taken_0x34bc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC38u;
            // 0x34bc3c: 0xc5010000  lwc1        $f1, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc38) {
            ctx->pc = 0x34BC58u;
            goto label_34bc58;
        }
    }
    ctx->pc = 0x34BC40u;
label_34bc40:
    // 0x34bc40: 0xc4a007b0  lwc1        $f0, 0x7B0($a1)
    ctx->pc = 0x34bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34bc44:
    // 0x34bc44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34bc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34bc48:
    // 0x34bc48: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_34bc4c:
    if (ctx->pc == 0x34BC4Cu) {
        ctx->pc = 0x34BC4Cu;
            // 0x34bc4c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x34BC50u;
        goto label_34bc50;
    }
    ctx->pc = 0x34BC48u;
    {
        const bool branch_taken_0x34bc48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34bc48) {
            ctx->pc = 0x34BC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC48u;
            // 0x34bc4c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BC70u;
            goto label_34bc70;
        }
    }
    ctx->pc = 0x34BC50u;
label_34bc50:
    // 0x34bc50: 0x10000006  b           . + 4 + (0x6 << 2)
label_34bc54:
    if (ctx->pc == 0x34BC54u) {
        ctx->pc = 0x34BC54u;
            // 0x34bc54: 0xe4a107b0  swc1        $f1, 0x7B0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1968), bits); }
        ctx->pc = 0x34BC58u;
        goto label_34bc58;
    }
    ctx->pc = 0x34BC50u;
    {
        const bool branch_taken_0x34bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC50u;
            // 0x34bc54: 0xe4a107b0  swc1        $f1, 0x7B0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc50) {
            ctx->pc = 0x34BC6Cu;
            goto label_34bc6c;
        }
    }
    ctx->pc = 0x34BC58u;
label_34bc58:
    // 0x34bc58: 0xc4a007ac  lwc1        $f0, 0x7AC($a1)
    ctx->pc = 0x34bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34bc5c:
    // 0x34bc5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34bc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34bc60:
    // 0x34bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34bc64:
    if (ctx->pc == 0x34BC64u) {
        ctx->pc = 0x34BC68u;
        goto label_34bc68;
    }
    ctx->pc = 0x34BC60u;
    {
        const bool branch_taken_0x34bc60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34bc60) {
            ctx->pc = 0x34BC6Cu;
            goto label_34bc6c;
        }
    }
    ctx->pc = 0x34BC68u;
label_34bc68:
    // 0x34bc68: 0xe4a107ac  swc1        $f1, 0x7AC($a1)
    ctx->pc = 0x34bc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1964), bits); }
label_34bc6c:
    // 0x34bc6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x34bc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34bc70:
    // 0x34bc70: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x34bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_34bc74:
    // 0x34bc74: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x34bc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34bc78:
    // 0x34bc78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_34bc7c:
    if (ctx->pc == 0x34BC7Cu) {
        ctx->pc = 0x34BC80u;
        goto label_34bc80;
    }
    ctx->pc = 0x34BC78u;
    {
        const bool branch_taken_0x34bc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bc78) {
            ctx->pc = 0x34BC90u;
            goto label_34bc90;
        }
    }
    ctx->pc = 0x34BC80u;
label_34bc80:
    // 0x34bc80: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x34bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
label_34bc84:
    // 0x34bc84: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x34bc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_34bc88:
    // 0x34bc88: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x34bc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34bc8c:
    // 0x34bc8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34bc90:
    // 0x34bc90: 0x3e00008  jr          $ra
label_34bc94:
    if (ctx->pc == 0x34BC94u) {
        ctx->pc = 0x34BC98u;
        goto label_34bc98;
    }
    ctx->pc = 0x34BC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BC98u;
label_34bc98:
    // 0x34bc98: 0x0  nop
    ctx->pc = 0x34bc98u;
    // NOP
label_34bc9c:
    // 0x34bc9c: 0x0  nop
    ctx->pc = 0x34bc9cu;
    // NOP
label_34bca0:
    // 0x34bca0: 0x3e00008  jr          $ra
label_34bca4:
    if (ctx->pc == 0x34BCA4u) {
        ctx->pc = 0x34BCA8u;
        goto label_34bca8;
    }
    ctx->pc = 0x34BCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BCA8u;
label_34bca8:
    // 0x34bca8: 0x0  nop
    ctx->pc = 0x34bca8u;
    // NOP
label_34bcac:
    // 0x34bcac: 0x0  nop
    ctx->pc = 0x34bcacu;
    // NOP
label_34bcb0:
    // 0x34bcb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34bcb4:
    // 0x34bcb4: 0xa0830855  sb          $v1, 0x855($a0)
    ctx->pc = 0x34bcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2133), (uint8_t)GPR_U32(ctx, 3));
label_34bcb8:
    // 0x34bcb8: 0x3e00008  jr          $ra
label_34bcbc:
    if (ctx->pc == 0x34BCBCu) {
        ctx->pc = 0x34BCBCu;
            // 0x34bcbc: 0xa485085a  sh          $a1, 0x85A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2138), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x34BCC0u;
        goto label_34bcc0;
    }
    ctx->pc = 0x34BCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCB8u;
            // 0x34bcbc: 0xa485085a  sh          $a1, 0x85A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2138), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BCC0u;
label_34bcc0:
    // 0x34bcc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34bcc4:
    // 0x34bcc4: 0xa0830854  sb          $v1, 0x854($a0)
    ctx->pc = 0x34bcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2132), (uint8_t)GPR_U32(ctx, 3));
label_34bcc8:
    // 0x34bcc8: 0xa0850856  sb          $a1, 0x856($a0)
    ctx->pc = 0x34bcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2134), (uint8_t)GPR_U32(ctx, 5));
label_34bccc:
    // 0x34bccc: 0xa0860857  sb          $a2, 0x857($a0)
    ctx->pc = 0x34bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2135), (uint8_t)GPR_U32(ctx, 6));
label_34bcd0:
    // 0x34bcd0: 0xa0870858  sb          $a3, 0x858($a0)
    ctx->pc = 0x34bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2136), (uint8_t)GPR_U32(ctx, 7));
label_34bcd4:
    // 0x34bcd4: 0xa0880859  sb          $t0, 0x859($a0)
    ctx->pc = 0x34bcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2137), (uint8_t)GPR_U32(ctx, 8));
label_34bcd8:
    // 0x34bcd8: 0xe48c085c  swc1        $f12, 0x85C($a0)
    ctx->pc = 0x34bcd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2140), bits); }
label_34bcdc:
    // 0x34bcdc: 0xe48d0860  swc1        $f13, 0x860($a0)
    ctx->pc = 0x34bcdcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2144), bits); }
label_34bce0:
    // 0x34bce0: 0xe48e0864  swc1        $f14, 0x864($a0)
    ctx->pc = 0x34bce0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2148), bits); }
label_34bce4:
    // 0x34bce4: 0xe48f0868  swc1        $f15, 0x868($a0)
    ctx->pc = 0x34bce4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2152), bits); }
label_34bce8:
    // 0x34bce8: 0xe490086c  swc1        $f16, 0x86C($a0)
    ctx->pc = 0x34bce8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2156), bits); }
label_34bcec:
    // 0x34bcec: 0x3e00008  jr          $ra
label_34bcf0:
    if (ctx->pc == 0x34BCF0u) {
        ctx->pc = 0x34BCF0u;
            // 0x34bcf0: 0xe4910870  swc1        $f17, 0x870($a0) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2160), bits); }
        ctx->pc = 0x34BCF4u;
        goto label_34bcf4;
    }
    ctx->pc = 0x34BCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCECu;
            // 0x34bcf0: 0xe4910870  swc1        $f17, 0x870($a0) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BCF4u;
label_34bcf4:
    // 0x34bcf4: 0x0  nop
    ctx->pc = 0x34bcf4u;
    // NOP
label_34bcf8:
    // 0x34bcf8: 0x0  nop
    ctx->pc = 0x34bcf8u;
    // NOP
label_34bcfc:
    // 0x34bcfc: 0x0  nop
    ctx->pc = 0x34bcfcu;
    // NOP
}
