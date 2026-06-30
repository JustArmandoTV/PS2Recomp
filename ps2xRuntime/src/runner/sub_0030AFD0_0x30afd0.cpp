#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030AFD0
// Address: 0x30afd0 - 0x30b6d0
void sub_0030AFD0_0x30afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AFD0_0x30afd0");
#endif

    switch (ctx->pc) {
        case 0x30afd0u: goto label_30afd0;
        case 0x30afd4u: goto label_30afd4;
        case 0x30afd8u: goto label_30afd8;
        case 0x30afdcu: goto label_30afdc;
        case 0x30afe0u: goto label_30afe0;
        case 0x30afe4u: goto label_30afe4;
        case 0x30afe8u: goto label_30afe8;
        case 0x30afecu: goto label_30afec;
        case 0x30aff0u: goto label_30aff0;
        case 0x30aff4u: goto label_30aff4;
        case 0x30aff8u: goto label_30aff8;
        case 0x30affcu: goto label_30affc;
        case 0x30b000u: goto label_30b000;
        case 0x30b004u: goto label_30b004;
        case 0x30b008u: goto label_30b008;
        case 0x30b00cu: goto label_30b00c;
        case 0x30b010u: goto label_30b010;
        case 0x30b014u: goto label_30b014;
        case 0x30b018u: goto label_30b018;
        case 0x30b01cu: goto label_30b01c;
        case 0x30b020u: goto label_30b020;
        case 0x30b024u: goto label_30b024;
        case 0x30b028u: goto label_30b028;
        case 0x30b02cu: goto label_30b02c;
        case 0x30b030u: goto label_30b030;
        case 0x30b034u: goto label_30b034;
        case 0x30b038u: goto label_30b038;
        case 0x30b03cu: goto label_30b03c;
        case 0x30b040u: goto label_30b040;
        case 0x30b044u: goto label_30b044;
        case 0x30b048u: goto label_30b048;
        case 0x30b04cu: goto label_30b04c;
        case 0x30b050u: goto label_30b050;
        case 0x30b054u: goto label_30b054;
        case 0x30b058u: goto label_30b058;
        case 0x30b05cu: goto label_30b05c;
        case 0x30b060u: goto label_30b060;
        case 0x30b064u: goto label_30b064;
        case 0x30b068u: goto label_30b068;
        case 0x30b06cu: goto label_30b06c;
        case 0x30b070u: goto label_30b070;
        case 0x30b074u: goto label_30b074;
        case 0x30b078u: goto label_30b078;
        case 0x30b07cu: goto label_30b07c;
        case 0x30b080u: goto label_30b080;
        case 0x30b084u: goto label_30b084;
        case 0x30b088u: goto label_30b088;
        case 0x30b08cu: goto label_30b08c;
        case 0x30b090u: goto label_30b090;
        case 0x30b094u: goto label_30b094;
        case 0x30b098u: goto label_30b098;
        case 0x30b09cu: goto label_30b09c;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0a4u: goto label_30b0a4;
        case 0x30b0a8u: goto label_30b0a8;
        case 0x30b0acu: goto label_30b0ac;
        case 0x30b0b0u: goto label_30b0b0;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0b8u: goto label_30b0b8;
        case 0x30b0bcu: goto label_30b0bc;
        case 0x30b0c0u: goto label_30b0c0;
        case 0x30b0c4u: goto label_30b0c4;
        case 0x30b0c8u: goto label_30b0c8;
        case 0x30b0ccu: goto label_30b0cc;
        case 0x30b0d0u: goto label_30b0d0;
        case 0x30b0d4u: goto label_30b0d4;
        case 0x30b0d8u: goto label_30b0d8;
        case 0x30b0dcu: goto label_30b0dc;
        case 0x30b0e0u: goto label_30b0e0;
        case 0x30b0e4u: goto label_30b0e4;
        case 0x30b0e8u: goto label_30b0e8;
        case 0x30b0ecu: goto label_30b0ec;
        case 0x30b0f0u: goto label_30b0f0;
        case 0x30b0f4u: goto label_30b0f4;
        case 0x30b0f8u: goto label_30b0f8;
        case 0x30b0fcu: goto label_30b0fc;
        case 0x30b100u: goto label_30b100;
        case 0x30b104u: goto label_30b104;
        case 0x30b108u: goto label_30b108;
        case 0x30b10cu: goto label_30b10c;
        case 0x30b110u: goto label_30b110;
        case 0x30b114u: goto label_30b114;
        case 0x30b118u: goto label_30b118;
        case 0x30b11cu: goto label_30b11c;
        case 0x30b120u: goto label_30b120;
        case 0x30b124u: goto label_30b124;
        case 0x30b128u: goto label_30b128;
        case 0x30b12cu: goto label_30b12c;
        case 0x30b130u: goto label_30b130;
        case 0x30b134u: goto label_30b134;
        case 0x30b138u: goto label_30b138;
        case 0x30b13cu: goto label_30b13c;
        case 0x30b140u: goto label_30b140;
        case 0x30b144u: goto label_30b144;
        case 0x30b148u: goto label_30b148;
        case 0x30b14cu: goto label_30b14c;
        case 0x30b150u: goto label_30b150;
        case 0x30b154u: goto label_30b154;
        case 0x30b158u: goto label_30b158;
        case 0x30b15cu: goto label_30b15c;
        case 0x30b160u: goto label_30b160;
        case 0x30b164u: goto label_30b164;
        case 0x30b168u: goto label_30b168;
        case 0x30b16cu: goto label_30b16c;
        case 0x30b170u: goto label_30b170;
        case 0x30b174u: goto label_30b174;
        case 0x30b178u: goto label_30b178;
        case 0x30b17cu: goto label_30b17c;
        case 0x30b180u: goto label_30b180;
        case 0x30b184u: goto label_30b184;
        case 0x30b188u: goto label_30b188;
        case 0x30b18cu: goto label_30b18c;
        case 0x30b190u: goto label_30b190;
        case 0x30b194u: goto label_30b194;
        case 0x30b198u: goto label_30b198;
        case 0x30b19cu: goto label_30b19c;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b1a4u: goto label_30b1a4;
        case 0x30b1a8u: goto label_30b1a8;
        case 0x30b1acu: goto label_30b1ac;
        case 0x30b1b0u: goto label_30b1b0;
        case 0x30b1b4u: goto label_30b1b4;
        case 0x30b1b8u: goto label_30b1b8;
        case 0x30b1bcu: goto label_30b1bc;
        case 0x30b1c0u: goto label_30b1c0;
        case 0x30b1c4u: goto label_30b1c4;
        case 0x30b1c8u: goto label_30b1c8;
        case 0x30b1ccu: goto label_30b1cc;
        case 0x30b1d0u: goto label_30b1d0;
        case 0x30b1d4u: goto label_30b1d4;
        case 0x30b1d8u: goto label_30b1d8;
        case 0x30b1dcu: goto label_30b1dc;
        case 0x30b1e0u: goto label_30b1e0;
        case 0x30b1e4u: goto label_30b1e4;
        case 0x30b1e8u: goto label_30b1e8;
        case 0x30b1ecu: goto label_30b1ec;
        case 0x30b1f0u: goto label_30b1f0;
        case 0x30b1f4u: goto label_30b1f4;
        case 0x30b1f8u: goto label_30b1f8;
        case 0x30b1fcu: goto label_30b1fc;
        case 0x30b200u: goto label_30b200;
        case 0x30b204u: goto label_30b204;
        case 0x30b208u: goto label_30b208;
        case 0x30b20cu: goto label_30b20c;
        case 0x30b210u: goto label_30b210;
        case 0x30b214u: goto label_30b214;
        case 0x30b218u: goto label_30b218;
        case 0x30b21cu: goto label_30b21c;
        case 0x30b220u: goto label_30b220;
        case 0x30b224u: goto label_30b224;
        case 0x30b228u: goto label_30b228;
        case 0x30b22cu: goto label_30b22c;
        case 0x30b230u: goto label_30b230;
        case 0x30b234u: goto label_30b234;
        case 0x30b238u: goto label_30b238;
        case 0x30b23cu: goto label_30b23c;
        case 0x30b240u: goto label_30b240;
        case 0x30b244u: goto label_30b244;
        case 0x30b248u: goto label_30b248;
        case 0x30b24cu: goto label_30b24c;
        case 0x30b250u: goto label_30b250;
        case 0x30b254u: goto label_30b254;
        case 0x30b258u: goto label_30b258;
        case 0x30b25cu: goto label_30b25c;
        case 0x30b260u: goto label_30b260;
        case 0x30b264u: goto label_30b264;
        case 0x30b268u: goto label_30b268;
        case 0x30b26cu: goto label_30b26c;
        case 0x30b270u: goto label_30b270;
        case 0x30b274u: goto label_30b274;
        case 0x30b278u: goto label_30b278;
        case 0x30b27cu: goto label_30b27c;
        case 0x30b280u: goto label_30b280;
        case 0x30b284u: goto label_30b284;
        case 0x30b288u: goto label_30b288;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b290u: goto label_30b290;
        case 0x30b294u: goto label_30b294;
        case 0x30b298u: goto label_30b298;
        case 0x30b29cu: goto label_30b29c;
        case 0x30b2a0u: goto label_30b2a0;
        case 0x30b2a4u: goto label_30b2a4;
        case 0x30b2a8u: goto label_30b2a8;
        case 0x30b2acu: goto label_30b2ac;
        case 0x30b2b0u: goto label_30b2b0;
        case 0x30b2b4u: goto label_30b2b4;
        case 0x30b2b8u: goto label_30b2b8;
        case 0x30b2bcu: goto label_30b2bc;
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b2c8u: goto label_30b2c8;
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b2d0u: goto label_30b2d0;
        case 0x30b2d4u: goto label_30b2d4;
        case 0x30b2d8u: goto label_30b2d8;
        case 0x30b2dcu: goto label_30b2dc;
        case 0x30b2e0u: goto label_30b2e0;
        case 0x30b2e4u: goto label_30b2e4;
        case 0x30b2e8u: goto label_30b2e8;
        case 0x30b2ecu: goto label_30b2ec;
        case 0x30b2f0u: goto label_30b2f0;
        case 0x30b2f4u: goto label_30b2f4;
        case 0x30b2f8u: goto label_30b2f8;
        case 0x30b2fcu: goto label_30b2fc;
        case 0x30b300u: goto label_30b300;
        case 0x30b304u: goto label_30b304;
        case 0x30b308u: goto label_30b308;
        case 0x30b30cu: goto label_30b30c;
        case 0x30b310u: goto label_30b310;
        case 0x30b314u: goto label_30b314;
        case 0x30b318u: goto label_30b318;
        case 0x30b31cu: goto label_30b31c;
        case 0x30b320u: goto label_30b320;
        case 0x30b324u: goto label_30b324;
        case 0x30b328u: goto label_30b328;
        case 0x30b32cu: goto label_30b32c;
        case 0x30b330u: goto label_30b330;
        case 0x30b334u: goto label_30b334;
        case 0x30b338u: goto label_30b338;
        case 0x30b33cu: goto label_30b33c;
        case 0x30b340u: goto label_30b340;
        case 0x30b344u: goto label_30b344;
        case 0x30b348u: goto label_30b348;
        case 0x30b34cu: goto label_30b34c;
        case 0x30b350u: goto label_30b350;
        case 0x30b354u: goto label_30b354;
        case 0x30b358u: goto label_30b358;
        case 0x30b35cu: goto label_30b35c;
        case 0x30b360u: goto label_30b360;
        case 0x30b364u: goto label_30b364;
        case 0x30b368u: goto label_30b368;
        case 0x30b36cu: goto label_30b36c;
        case 0x30b370u: goto label_30b370;
        case 0x30b374u: goto label_30b374;
        case 0x30b378u: goto label_30b378;
        case 0x30b37cu: goto label_30b37c;
        case 0x30b380u: goto label_30b380;
        case 0x30b384u: goto label_30b384;
        case 0x30b388u: goto label_30b388;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b390u: goto label_30b390;
        case 0x30b394u: goto label_30b394;
        case 0x30b398u: goto label_30b398;
        case 0x30b39cu: goto label_30b39c;
        case 0x30b3a0u: goto label_30b3a0;
        case 0x30b3a4u: goto label_30b3a4;
        case 0x30b3a8u: goto label_30b3a8;
        case 0x30b3acu: goto label_30b3ac;
        case 0x30b3b0u: goto label_30b3b0;
        case 0x30b3b4u: goto label_30b3b4;
        case 0x30b3b8u: goto label_30b3b8;
        case 0x30b3bcu: goto label_30b3bc;
        case 0x30b3c0u: goto label_30b3c0;
        case 0x30b3c4u: goto label_30b3c4;
        case 0x30b3c8u: goto label_30b3c8;
        case 0x30b3ccu: goto label_30b3cc;
        case 0x30b3d0u: goto label_30b3d0;
        case 0x30b3d4u: goto label_30b3d4;
        case 0x30b3d8u: goto label_30b3d8;
        case 0x30b3dcu: goto label_30b3dc;
        case 0x30b3e0u: goto label_30b3e0;
        case 0x30b3e4u: goto label_30b3e4;
        case 0x30b3e8u: goto label_30b3e8;
        case 0x30b3ecu: goto label_30b3ec;
        case 0x30b3f0u: goto label_30b3f0;
        case 0x30b3f4u: goto label_30b3f4;
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b3fcu: goto label_30b3fc;
        case 0x30b400u: goto label_30b400;
        case 0x30b404u: goto label_30b404;
        case 0x30b408u: goto label_30b408;
        case 0x30b40cu: goto label_30b40c;
        case 0x30b410u: goto label_30b410;
        case 0x30b414u: goto label_30b414;
        case 0x30b418u: goto label_30b418;
        case 0x30b41cu: goto label_30b41c;
        case 0x30b420u: goto label_30b420;
        case 0x30b424u: goto label_30b424;
        case 0x30b428u: goto label_30b428;
        case 0x30b42cu: goto label_30b42c;
        case 0x30b430u: goto label_30b430;
        case 0x30b434u: goto label_30b434;
        case 0x30b438u: goto label_30b438;
        case 0x30b43cu: goto label_30b43c;
        case 0x30b440u: goto label_30b440;
        case 0x30b444u: goto label_30b444;
        case 0x30b448u: goto label_30b448;
        case 0x30b44cu: goto label_30b44c;
        case 0x30b450u: goto label_30b450;
        case 0x30b454u: goto label_30b454;
        case 0x30b458u: goto label_30b458;
        case 0x30b45cu: goto label_30b45c;
        case 0x30b460u: goto label_30b460;
        case 0x30b464u: goto label_30b464;
        case 0x30b468u: goto label_30b468;
        case 0x30b46cu: goto label_30b46c;
        case 0x30b470u: goto label_30b470;
        case 0x30b474u: goto label_30b474;
        case 0x30b478u: goto label_30b478;
        case 0x30b47cu: goto label_30b47c;
        case 0x30b480u: goto label_30b480;
        case 0x30b484u: goto label_30b484;
        case 0x30b488u: goto label_30b488;
        case 0x30b48cu: goto label_30b48c;
        case 0x30b490u: goto label_30b490;
        case 0x30b494u: goto label_30b494;
        case 0x30b498u: goto label_30b498;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4a0u: goto label_30b4a0;
        case 0x30b4a4u: goto label_30b4a4;
        case 0x30b4a8u: goto label_30b4a8;
        case 0x30b4acu: goto label_30b4ac;
        case 0x30b4b0u: goto label_30b4b0;
        case 0x30b4b4u: goto label_30b4b4;
        case 0x30b4b8u: goto label_30b4b8;
        case 0x30b4bcu: goto label_30b4bc;
        case 0x30b4c0u: goto label_30b4c0;
        case 0x30b4c4u: goto label_30b4c4;
        case 0x30b4c8u: goto label_30b4c8;
        case 0x30b4ccu: goto label_30b4cc;
        case 0x30b4d0u: goto label_30b4d0;
        case 0x30b4d4u: goto label_30b4d4;
        case 0x30b4d8u: goto label_30b4d8;
        case 0x30b4dcu: goto label_30b4dc;
        case 0x30b4e0u: goto label_30b4e0;
        case 0x30b4e4u: goto label_30b4e4;
        case 0x30b4e8u: goto label_30b4e8;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b4f0u: goto label_30b4f0;
        case 0x30b4f4u: goto label_30b4f4;
        case 0x30b4f8u: goto label_30b4f8;
        case 0x30b4fcu: goto label_30b4fc;
        case 0x30b500u: goto label_30b500;
        case 0x30b504u: goto label_30b504;
        case 0x30b508u: goto label_30b508;
        case 0x30b50cu: goto label_30b50c;
        case 0x30b510u: goto label_30b510;
        case 0x30b514u: goto label_30b514;
        case 0x30b518u: goto label_30b518;
        case 0x30b51cu: goto label_30b51c;
        case 0x30b520u: goto label_30b520;
        case 0x30b524u: goto label_30b524;
        case 0x30b528u: goto label_30b528;
        case 0x30b52cu: goto label_30b52c;
        case 0x30b530u: goto label_30b530;
        case 0x30b534u: goto label_30b534;
        case 0x30b538u: goto label_30b538;
        case 0x30b53cu: goto label_30b53c;
        case 0x30b540u: goto label_30b540;
        case 0x30b544u: goto label_30b544;
        case 0x30b548u: goto label_30b548;
        case 0x30b54cu: goto label_30b54c;
        case 0x30b550u: goto label_30b550;
        case 0x30b554u: goto label_30b554;
        case 0x30b558u: goto label_30b558;
        case 0x30b55cu: goto label_30b55c;
        case 0x30b560u: goto label_30b560;
        case 0x30b564u: goto label_30b564;
        case 0x30b568u: goto label_30b568;
        case 0x30b56cu: goto label_30b56c;
        case 0x30b570u: goto label_30b570;
        case 0x30b574u: goto label_30b574;
        case 0x30b578u: goto label_30b578;
        case 0x30b57cu: goto label_30b57c;
        case 0x30b580u: goto label_30b580;
        case 0x30b584u: goto label_30b584;
        case 0x30b588u: goto label_30b588;
        case 0x30b58cu: goto label_30b58c;
        case 0x30b590u: goto label_30b590;
        case 0x30b594u: goto label_30b594;
        case 0x30b598u: goto label_30b598;
        case 0x30b59cu: goto label_30b59c;
        case 0x30b5a0u: goto label_30b5a0;
        case 0x30b5a4u: goto label_30b5a4;
        case 0x30b5a8u: goto label_30b5a8;
        case 0x30b5acu: goto label_30b5ac;
        case 0x30b5b0u: goto label_30b5b0;
        case 0x30b5b4u: goto label_30b5b4;
        case 0x30b5b8u: goto label_30b5b8;
        case 0x30b5bcu: goto label_30b5bc;
        case 0x30b5c0u: goto label_30b5c0;
        case 0x30b5c4u: goto label_30b5c4;
        case 0x30b5c8u: goto label_30b5c8;
        case 0x30b5ccu: goto label_30b5cc;
        case 0x30b5d0u: goto label_30b5d0;
        case 0x30b5d4u: goto label_30b5d4;
        case 0x30b5d8u: goto label_30b5d8;
        case 0x30b5dcu: goto label_30b5dc;
        case 0x30b5e0u: goto label_30b5e0;
        case 0x30b5e4u: goto label_30b5e4;
        case 0x30b5e8u: goto label_30b5e8;
        case 0x30b5ecu: goto label_30b5ec;
        case 0x30b5f0u: goto label_30b5f0;
        case 0x30b5f4u: goto label_30b5f4;
        case 0x30b5f8u: goto label_30b5f8;
        case 0x30b5fcu: goto label_30b5fc;
        case 0x30b600u: goto label_30b600;
        case 0x30b604u: goto label_30b604;
        case 0x30b608u: goto label_30b608;
        case 0x30b60cu: goto label_30b60c;
        case 0x30b610u: goto label_30b610;
        case 0x30b614u: goto label_30b614;
        case 0x30b618u: goto label_30b618;
        case 0x30b61cu: goto label_30b61c;
        case 0x30b620u: goto label_30b620;
        case 0x30b624u: goto label_30b624;
        case 0x30b628u: goto label_30b628;
        case 0x30b62cu: goto label_30b62c;
        case 0x30b630u: goto label_30b630;
        case 0x30b634u: goto label_30b634;
        case 0x30b638u: goto label_30b638;
        case 0x30b63cu: goto label_30b63c;
        case 0x30b640u: goto label_30b640;
        case 0x30b644u: goto label_30b644;
        case 0x30b648u: goto label_30b648;
        case 0x30b64cu: goto label_30b64c;
        case 0x30b650u: goto label_30b650;
        case 0x30b654u: goto label_30b654;
        case 0x30b658u: goto label_30b658;
        case 0x30b65cu: goto label_30b65c;
        case 0x30b660u: goto label_30b660;
        case 0x30b664u: goto label_30b664;
        case 0x30b668u: goto label_30b668;
        case 0x30b66cu: goto label_30b66c;
        case 0x30b670u: goto label_30b670;
        case 0x30b674u: goto label_30b674;
        case 0x30b678u: goto label_30b678;
        case 0x30b67cu: goto label_30b67c;
        case 0x30b680u: goto label_30b680;
        case 0x30b684u: goto label_30b684;
        case 0x30b688u: goto label_30b688;
        case 0x30b68cu: goto label_30b68c;
        case 0x30b690u: goto label_30b690;
        case 0x30b694u: goto label_30b694;
        case 0x30b698u: goto label_30b698;
        case 0x30b69cu: goto label_30b69c;
        case 0x30b6a0u: goto label_30b6a0;
        case 0x30b6a4u: goto label_30b6a4;
        case 0x30b6a8u: goto label_30b6a8;
        case 0x30b6acu: goto label_30b6ac;
        case 0x30b6b0u: goto label_30b6b0;
        case 0x30b6b4u: goto label_30b6b4;
        case 0x30b6b8u: goto label_30b6b8;
        case 0x30b6bcu: goto label_30b6bc;
        case 0x30b6c0u: goto label_30b6c0;
        case 0x30b6c4u: goto label_30b6c4;
        case 0x30b6c8u: goto label_30b6c8;
        case 0x30b6ccu: goto label_30b6cc;
        default: break;
    }

    ctx->pc = 0x30afd0u;

label_30afd0:
    // 0x30afd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30afd4:
    // 0x30afd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30afd8:
    // 0x30afd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30afdc:
    // 0x30afdc: 0xc0bd374  jal         func_2F4DD0
label_30afe0:
    if (ctx->pc == 0x30AFE0u) {
        ctx->pc = 0x30AFE0u;
            // 0x30afe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30AFE4u;
        goto label_30afe4;
    }
    ctx->pc = 0x30AFDCu;
    SET_GPR_U32(ctx, 31, 0x30AFE4u);
    ctx->pc = 0x30AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFDCu;
            // 0x30afe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4DD0u;
    if (runtime->hasFunction(0x2F4DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFE4u; }
        if (ctx->pc != 0x30AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4DD0_0x2f4dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AFE4u; }
        if (ctx->pc != 0x30AFE4u) { return; }
    }
    ctx->pc = 0x30AFE4u;
label_30afe4:
    // 0x30afe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30afe8:
    // 0x30afe8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30afec:
    // 0x30afec: 0x24423fc0  addiu       $v0, $v0, 0x3FC0
    ctx->pc = 0x30afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_30aff0:
    // 0x30aff0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x30aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_30aff4:
    // 0x30aff4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30aff8:
    // 0x30aff8: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x30aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_30affc:
    // 0x30affc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30affcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b000:
    // 0x30b000: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x30b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_30b004:
    // 0x30b004: 0xaca40c7c  sw          $a0, 0xC7C($a1)
    ctx->pc = 0x30b004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3196), GPR_U32(ctx, 4));
label_30b008:
    // 0x30b008: 0xaca30c80  sw          $v1, 0xC80($a1)
    ctx->pc = 0x30b008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3200), GPR_U32(ctx, 3));
label_30b00c:
    // 0x30b00c: 0xaca40c84  sw          $a0, 0xC84($a1)
    ctx->pc = 0x30b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3204), GPR_U32(ctx, 4));
label_30b010:
    // 0x30b010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b014:
    // 0x30b014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b018:
    // 0x30b018: 0x3e00008  jr          $ra
label_30b01c:
    if (ctx->pc == 0x30B01Cu) {
        ctx->pc = 0x30B01Cu;
            // 0x30b01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30B020u;
        goto label_30b020;
    }
    ctx->pc = 0x30B018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B018u;
            // 0x30b01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B020u;
label_30b020:
    // 0x30b020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b024:
    // 0x30b024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30b028:
    // 0x30b028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b02c:
    // 0x30b02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30b030:
    // 0x30b030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b034:
    // 0x30b034: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_30b038:
    if (ctx->pc == 0x30B038u) {
        ctx->pc = 0x30B038u;
            // 0x30b038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B03Cu;
        goto label_30b03c;
    }
    ctx->pc = 0x30B034u;
    {
        const bool branch_taken_0x30b034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B034u;
            // 0x30b038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b034) {
            ctx->pc = 0x30B0ACu;
            goto label_30b0ac;
        }
    }
    ctx->pc = 0x30B03Cu;
label_30b03c:
    // 0x30b03c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b040:
    // 0x30b040: 0x24423fc0  addiu       $v0, $v0, 0x3FC0
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_30b044:
    // 0x30b044: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_30b048:
    if (ctx->pc == 0x30B048u) {
        ctx->pc = 0x30B048u;
            // 0x30b048: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B04Cu;
        goto label_30b04c;
    }
    ctx->pc = 0x30B044u;
    {
        const bool branch_taken_0x30b044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B044u;
            // 0x30b048: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b044) {
            ctx->pc = 0x30B094u;
            goto label_30b094;
        }
    }
    ctx->pc = 0x30B04Cu;
label_30b04c:
    // 0x30b04c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b050:
    // 0x30b050: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x30b050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_30b054:
    // 0x30b054: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x30b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_30b058:
    // 0x30b058: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x30b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_30b05c:
    // 0x30b05c: 0xc0ad6c4  jal         func_2B5B10
label_30b060:
    if (ctx->pc == 0x30B060u) {
        ctx->pc = 0x30B060u;
            // 0x30b060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B064u;
        goto label_30b064;
    }
    ctx->pc = 0x30B05Cu;
    SET_GPR_U32(ctx, 31, 0x30B064u);
    ctx->pc = 0x30B060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B05Cu;
            // 0x30b060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B064u; }
        if (ctx->pc != 0x30B064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B064u; }
        if (ctx->pc != 0x30B064u) { return; }
    }
    ctx->pc = 0x30B064u;
label_30b064:
    // 0x30b064: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x30b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_30b068:
    // 0x30b068: 0xc0ad670  jal         func_2B59C0
label_30b06c:
    if (ctx->pc == 0x30B06Cu) {
        ctx->pc = 0x30B06Cu;
            // 0x30b06c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30B070u;
        goto label_30b070;
    }
    ctx->pc = 0x30B068u;
    SET_GPR_U32(ctx, 31, 0x30B070u);
    ctx->pc = 0x30B06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B068u;
            // 0x30b06c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B070u; }
        if (ctx->pc != 0x30B070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B070u; }
        if (ctx->pc != 0x30B070u) { return; }
    }
    ctx->pc = 0x30B070u;
label_30b070:
    // 0x30b070: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30b070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_30b074:
    // 0x30b074: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_30b078:
    // 0x30b078: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x30b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_30b07c:
    // 0x30b07c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30b07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30b080:
    // 0x30b080: 0xc0407e8  jal         func_101FA0
label_30b084:
    if (ctx->pc == 0x30B084u) {
        ctx->pc = 0x30B084u;
            // 0x30b084: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x30B088u;
        goto label_30b088;
    }
    ctx->pc = 0x30B080u;
    SET_GPR_U32(ctx, 31, 0x30B088u);
    ctx->pc = 0x30B084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B080u;
            // 0x30b084: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B088u; }
        if (ctx->pc != 0x30B088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B088u; }
        if (ctx->pc != 0x30B088u) { return; }
    }
    ctx->pc = 0x30B088u;
label_30b088:
    // 0x30b088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b08c:
    // 0x30b08c: 0xc0ad6c8  jal         func_2B5B20
label_30b090:
    if (ctx->pc == 0x30B090u) {
        ctx->pc = 0x30B090u;
            // 0x30b090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B094u;
        goto label_30b094;
    }
    ctx->pc = 0x30B08Cu;
    SET_GPR_U32(ctx, 31, 0x30B094u);
    ctx->pc = 0x30B090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B08Cu;
            // 0x30b090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B094u; }
        if (ctx->pc != 0x30B094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B094u; }
        if (ctx->pc != 0x30B094u) { return; }
    }
    ctx->pc = 0x30B094u;
label_30b094:
    // 0x30b094: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30b098:
    // 0x30b098: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b098u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30b09c:
    // 0x30b09c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30b0a0:
    if (ctx->pc == 0x30B0A0u) {
        ctx->pc = 0x30B0A0u;
            // 0x30b0a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B0A4u;
        goto label_30b0a4;
    }
    ctx->pc = 0x30B09Cu;
    {
        const bool branch_taken_0x30b09c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30b09c) {
            ctx->pc = 0x30B0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B09Cu;
            // 0x30b0a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B0B0u;
            goto label_30b0b0;
        }
    }
    ctx->pc = 0x30B0A4u;
label_30b0a4:
    // 0x30b0a4: 0xc0400a8  jal         func_1002A0
label_30b0a8:
    if (ctx->pc == 0x30B0A8u) {
        ctx->pc = 0x30B0A8u;
            // 0x30b0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B0ACu;
        goto label_30b0ac;
    }
    ctx->pc = 0x30B0A4u;
    SET_GPR_U32(ctx, 31, 0x30B0ACu);
    ctx->pc = 0x30B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0A4u;
            // 0x30b0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0ACu; }
        if (ctx->pc != 0x30B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B0ACu; }
        if (ctx->pc != 0x30B0ACu) { return; }
    }
    ctx->pc = 0x30B0ACu;
label_30b0ac:
    // 0x30b0ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30b0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b0b0:
    // 0x30b0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b0b4:
    // 0x30b0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b0b8:
    // 0x30b0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b0bc:
    // 0x30b0bc: 0x3e00008  jr          $ra
label_30b0c0:
    if (ctx->pc == 0x30B0C0u) {
        ctx->pc = 0x30B0C0u;
            // 0x30b0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30B0C4u;
        goto label_30b0c4;
    }
    ctx->pc = 0x30B0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0BCu;
            // 0x30b0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B0C4u;
label_30b0c4:
    // 0x30b0c4: 0x0  nop
    ctx->pc = 0x30b0c4u;
    // NOP
label_30b0c8:
    // 0x30b0c8: 0x0  nop
    ctx->pc = 0x30b0c8u;
    // NOP
label_30b0cc:
    // 0x30b0cc: 0x0  nop
    ctx->pc = 0x30b0ccu;
    // NOP
label_30b0d0:
    // 0x30b0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b0d4:
    // 0x30b0d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30b0d8:
    // 0x30b0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b0dc:
    // 0x30b0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30b0e0:
    // 0x30b0e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b0e4:
    // 0x30b0e4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_30b0e8:
    if (ctx->pc == 0x30B0E8u) {
        ctx->pc = 0x30B0E8u;
            // 0x30b0e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B0ECu;
        goto label_30b0ec;
    }
    ctx->pc = 0x30B0E4u;
    {
        const bool branch_taken_0x30b0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0E4u;
            // 0x30b0e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0e4) {
            ctx->pc = 0x30B15Cu;
            goto label_30b15c;
        }
    }
    ctx->pc = 0x30B0ECu;
label_30b0ec:
    // 0x30b0ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b0f0:
    // 0x30b0f0: 0x24424010  addiu       $v0, $v0, 0x4010
    ctx->pc = 0x30b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
label_30b0f4:
    // 0x30b0f4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_30b0f8:
    if (ctx->pc == 0x30B0F8u) {
        ctx->pc = 0x30B0F8u;
            // 0x30b0f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B0FCu;
        goto label_30b0fc;
    }
    ctx->pc = 0x30B0F4u;
    {
        const bool branch_taken_0x30b0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B0F4u;
            // 0x30b0f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0f4) {
            ctx->pc = 0x30B144u;
            goto label_30b144;
        }
    }
    ctx->pc = 0x30B0FCu;
label_30b0fc:
    // 0x30b0fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b100:
    // 0x30b100: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x30b100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_30b104:
    // 0x30b104: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x30b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_30b108:
    // 0x30b108: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_30b10c:
    // 0x30b10c: 0xc0ad6c4  jal         func_2B5B10
label_30b110:
    if (ctx->pc == 0x30B110u) {
        ctx->pc = 0x30B110u;
            // 0x30b110: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B114u;
        goto label_30b114;
    }
    ctx->pc = 0x30B10Cu;
    SET_GPR_U32(ctx, 31, 0x30B114u);
    ctx->pc = 0x30B110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B10Cu;
            // 0x30b110: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B114u; }
        if (ctx->pc != 0x30B114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B114u; }
        if (ctx->pc != 0x30B114u) { return; }
    }
    ctx->pc = 0x30B114u;
label_30b114:
    // 0x30b114: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x30b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_30b118:
    // 0x30b118: 0xc0ad670  jal         func_2B59C0
label_30b11c:
    if (ctx->pc == 0x30B11Cu) {
        ctx->pc = 0x30B11Cu;
            // 0x30b11c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30B120u;
        goto label_30b120;
    }
    ctx->pc = 0x30B118u;
    SET_GPR_U32(ctx, 31, 0x30B120u);
    ctx->pc = 0x30B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B118u;
            // 0x30b11c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B120u; }
        if (ctx->pc != 0x30B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B120u; }
        if (ctx->pc != 0x30B120u) { return; }
    }
    ctx->pc = 0x30B120u;
label_30b120:
    // 0x30b120: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_30b124:
    // 0x30b124: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_30b128:
    // 0x30b128: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x30b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_30b12c:
    // 0x30b12c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30b130:
    // 0x30b130: 0xc0407e8  jal         func_101FA0
label_30b134:
    if (ctx->pc == 0x30B134u) {
        ctx->pc = 0x30B134u;
            // 0x30b134: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x30B138u;
        goto label_30b138;
    }
    ctx->pc = 0x30B130u;
    SET_GPR_U32(ctx, 31, 0x30B138u);
    ctx->pc = 0x30B134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B130u;
            // 0x30b134: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B138u; }
        if (ctx->pc != 0x30B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B138u; }
        if (ctx->pc != 0x30B138u) { return; }
    }
    ctx->pc = 0x30B138u;
label_30b138:
    // 0x30b138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b13c:
    // 0x30b13c: 0xc0ad6c8  jal         func_2B5B20
label_30b140:
    if (ctx->pc == 0x30B140u) {
        ctx->pc = 0x30B140u;
            // 0x30b140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B144u;
        goto label_30b144;
    }
    ctx->pc = 0x30B13Cu;
    SET_GPR_U32(ctx, 31, 0x30B144u);
    ctx->pc = 0x30B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B13Cu;
            // 0x30b140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B144u; }
        if (ctx->pc != 0x30B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B144u; }
        if (ctx->pc != 0x30B144u) { return; }
    }
    ctx->pc = 0x30B144u;
label_30b144:
    // 0x30b144: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30b148:
    // 0x30b148: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30b14c:
    // 0x30b14c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30b150:
    if (ctx->pc == 0x30B150u) {
        ctx->pc = 0x30B150u;
            // 0x30b150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B154u;
        goto label_30b154;
    }
    ctx->pc = 0x30B14Cu;
    {
        const bool branch_taken_0x30b14c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30b14c) {
            ctx->pc = 0x30B150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B14Cu;
            // 0x30b150: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B160u;
            goto label_30b160;
        }
    }
    ctx->pc = 0x30B154u;
label_30b154:
    // 0x30b154: 0xc0400a8  jal         func_1002A0
label_30b158:
    if (ctx->pc == 0x30B158u) {
        ctx->pc = 0x30B158u;
            // 0x30b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B15Cu;
        goto label_30b15c;
    }
    ctx->pc = 0x30B154u;
    SET_GPR_U32(ctx, 31, 0x30B15Cu);
    ctx->pc = 0x30B158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B154u;
            // 0x30b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B15Cu; }
        if (ctx->pc != 0x30B15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B15Cu; }
        if (ctx->pc != 0x30B15Cu) { return; }
    }
    ctx->pc = 0x30B15Cu;
label_30b15c:
    // 0x30b15c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30b15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b160:
    // 0x30b160: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b164:
    // 0x30b164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b168:
    // 0x30b168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b16c:
    // 0x30b16c: 0x3e00008  jr          $ra
label_30b170:
    if (ctx->pc == 0x30B170u) {
        ctx->pc = 0x30B170u;
            // 0x30b170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30B174u;
        goto label_30b174;
    }
    ctx->pc = 0x30B16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B16Cu;
            // 0x30b170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B174u;
label_30b174:
    // 0x30b174: 0x0  nop
    ctx->pc = 0x30b174u;
    // NOP
label_30b178:
    // 0x30b178: 0x0  nop
    ctx->pc = 0x30b178u;
    // NOP
label_30b17c:
    // 0x30b17c: 0x0  nop
    ctx->pc = 0x30b17cu;
    // NOP
label_30b180:
    // 0x30b180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30b184:
    // 0x30b184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b188:
    // 0x30b188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30b18c:
    // 0x30b18c: 0xc0bd360  jal         func_2F4D80
label_30b190:
    if (ctx->pc == 0x30B190u) {
        ctx->pc = 0x30B190u;
            // 0x30b190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B194u;
        goto label_30b194;
    }
    ctx->pc = 0x30B18Cu;
    SET_GPR_U32(ctx, 31, 0x30B194u);
    ctx->pc = 0x30B190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B18Cu;
            // 0x30b190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D80u;
    if (runtime->hasFunction(0x2F4D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F4D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B194u; }
        if (ctx->pc != 0x30B194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4D80_0x2f4d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B194u; }
        if (ctx->pc != 0x30B194u) { return; }
    }
    ctx->pc = 0x30B194u;
label_30b194:
    // 0x30b194: 0xae0004c4  sw          $zero, 0x4C4($s0)
    ctx->pc = 0x30b194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 0));
label_30b198:
    // 0x30b198: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x30b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
label_30b19c:
    // 0x30b19c: 0xae0004bc  sw          $zero, 0x4BC($s0)
    ctx->pc = 0x30b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1212), GPR_U32(ctx, 0));
label_30b1a0:
    // 0x30b1a0: 0xae0004b8  sw          $zero, 0x4B8($s0)
    ctx->pc = 0x30b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 0));
label_30b1a4:
    // 0x30b1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b1a8:
    // 0x30b1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b1ac:
    // 0x30b1ac: 0x3e00008  jr          $ra
label_30b1b0:
    if (ctx->pc == 0x30B1B0u) {
        ctx->pc = 0x30B1B0u;
            // 0x30b1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30B1B4u;
        goto label_30b1b4;
    }
    ctx->pc = 0x30B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1ACu;
            // 0x30b1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B1B4u;
label_30b1b4:
    // 0x30b1b4: 0x0  nop
    ctx->pc = 0x30b1b4u;
    // NOP
label_30b1b8:
    // 0x30b1b8: 0x0  nop
    ctx->pc = 0x30b1b8u;
    // NOP
label_30b1bc:
    // 0x30b1bc: 0x0  nop
    ctx->pc = 0x30b1bcu;
    // NOP
label_30b1c0:
    // 0x30b1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b1c4:
    // 0x30b1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30b1c8:
    // 0x30b1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b1cc:
    // 0x30b1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30b1d0:
    // 0x30b1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b1d4:
    // 0x30b1d4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_30b1d8:
    if (ctx->pc == 0x30B1D8u) {
        ctx->pc = 0x30B1D8u;
            // 0x30b1d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B1DCu;
        goto label_30b1dc;
    }
    ctx->pc = 0x30B1D4u;
    {
        const bool branch_taken_0x30b1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1D4u;
            // 0x30b1d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1d4) {
            ctx->pc = 0x30B25Cu;
            goto label_30b25c;
        }
    }
    ctx->pc = 0x30B1DCu;
label_30b1dc:
    // 0x30b1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b1e0:
    // 0x30b1e0: 0x3c04a400  lui         $a0, 0xA400
    ctx->pc = 0x30b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
label_30b1e4:
    // 0x30b1e4: 0x24424060  addiu       $v0, $v0, 0x4060
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16480));
label_30b1e8:
    // 0x30b1e8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x30b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_30b1ec:
    // 0x30b1ec: 0xc0733ec  jal         func_1CCFB0
label_30b1f0:
    if (ctx->pc == 0x30B1F0u) {
        ctx->pc = 0x30B1F0u;
            // 0x30b1f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B1F4u;
        goto label_30b1f4;
    }
    ctx->pc = 0x30B1ECu;
    SET_GPR_U32(ctx, 31, 0x30B1F4u);
    ctx->pc = 0x30B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1ECu;
            // 0x30b1f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1F4u; }
        if (ctx->pc != 0x30B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B1F4u; }
        if (ctx->pc != 0x30B1F4u) { return; }
    }
    ctx->pc = 0x30B1F4u;
label_30b1f4:
    // 0x30b1f4: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_30b1f8:
    if (ctx->pc == 0x30B1F8u) {
        ctx->pc = 0x30B1F8u;
            // 0x30b1f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x30B1FCu;
        goto label_30b1fc;
    }
    ctx->pc = 0x30B1F4u;
    {
        const bool branch_taken_0x30b1f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1f4) {
            ctx->pc = 0x30B1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B1F4u;
            // 0x30b1f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B248u;
            goto label_30b248;
        }
    }
    ctx->pc = 0x30B1FCu;
label_30b1fc:
    // 0x30b1fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b200:
    // 0x30b200: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x30b200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_30b204:
    // 0x30b204: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x30b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_30b208:
    // 0x30b208: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x30b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_30b20c:
    // 0x30b20c: 0xc0ad6c4  jal         func_2B5B10
label_30b210:
    if (ctx->pc == 0x30B210u) {
        ctx->pc = 0x30B210u;
            // 0x30b210: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B214u;
        goto label_30b214;
    }
    ctx->pc = 0x30B20Cu;
    SET_GPR_U32(ctx, 31, 0x30B214u);
    ctx->pc = 0x30B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B20Cu;
            // 0x30b210: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B214u; }
        if (ctx->pc != 0x30B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B214u; }
        if (ctx->pc != 0x30B214u) { return; }
    }
    ctx->pc = 0x30B214u;
label_30b214:
    // 0x30b214: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x30b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_30b218:
    // 0x30b218: 0xc0ad670  jal         func_2B59C0
label_30b21c:
    if (ctx->pc == 0x30B21Cu) {
        ctx->pc = 0x30B21Cu;
            // 0x30b21c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30B220u;
        goto label_30b220;
    }
    ctx->pc = 0x30B218u;
    SET_GPR_U32(ctx, 31, 0x30B220u);
    ctx->pc = 0x30B21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B218u;
            // 0x30b21c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B220u; }
        if (ctx->pc != 0x30B220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B220u; }
        if (ctx->pc != 0x30B220u) { return; }
    }
    ctx->pc = 0x30B220u;
label_30b220:
    // 0x30b220: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_30b224:
    // 0x30b224: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x30b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_30b228:
    // 0x30b228: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x30b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_30b22c:
    // 0x30b22c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30b230:
    // 0x30b230: 0xc0407e8  jal         func_101FA0
label_30b234:
    if (ctx->pc == 0x30B234u) {
        ctx->pc = 0x30B234u;
            // 0x30b234: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x30B238u;
        goto label_30b238;
    }
    ctx->pc = 0x30B230u;
    SET_GPR_U32(ctx, 31, 0x30B238u);
    ctx->pc = 0x30B234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B230u;
            // 0x30b234: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B238u; }
        if (ctx->pc != 0x30B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B238u; }
        if (ctx->pc != 0x30B238u) { return; }
    }
    ctx->pc = 0x30B238u;
label_30b238:
    // 0x30b238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b23c:
    // 0x30b23c: 0xc0ad6c8  jal         func_2B5B20
label_30b240:
    if (ctx->pc == 0x30B240u) {
        ctx->pc = 0x30B240u;
            // 0x30b240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B244u;
        goto label_30b244;
    }
    ctx->pc = 0x30B23Cu;
    SET_GPR_U32(ctx, 31, 0x30B244u);
    ctx->pc = 0x30B240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B23Cu;
            // 0x30b240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B244u; }
        if (ctx->pc != 0x30B244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B244u; }
        if (ctx->pc != 0x30B244u) { return; }
    }
    ctx->pc = 0x30B244u;
label_30b244:
    // 0x30b244: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30b244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30b248:
    // 0x30b248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30b24c:
    // 0x30b24c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30b250:
    if (ctx->pc == 0x30B250u) {
        ctx->pc = 0x30B250u;
            // 0x30b250: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B254u;
        goto label_30b254;
    }
    ctx->pc = 0x30B24Cu;
    {
        const bool branch_taken_0x30b24c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30b24c) {
            ctx->pc = 0x30B250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B24Cu;
            // 0x30b250: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B260u;
            goto label_30b260;
        }
    }
    ctx->pc = 0x30B254u;
label_30b254:
    // 0x30b254: 0xc0400a8  jal         func_1002A0
label_30b258:
    if (ctx->pc == 0x30B258u) {
        ctx->pc = 0x30B258u;
            // 0x30b258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B25Cu;
        goto label_30b25c;
    }
    ctx->pc = 0x30B254u;
    SET_GPR_U32(ctx, 31, 0x30B25Cu);
    ctx->pc = 0x30B258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B254u;
            // 0x30b258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B25Cu; }
        if (ctx->pc != 0x30B25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B25Cu; }
        if (ctx->pc != 0x30B25Cu) { return; }
    }
    ctx->pc = 0x30B25Cu;
label_30b25c:
    // 0x30b25c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30b25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b260:
    // 0x30b260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b264:
    // 0x30b264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b268:
    // 0x30b268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b26c:
    // 0x30b26c: 0x3e00008  jr          $ra
label_30b270:
    if (ctx->pc == 0x30B270u) {
        ctx->pc = 0x30B270u;
            // 0x30b270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30B274u;
        goto label_30b274;
    }
    ctx->pc = 0x30B26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B26Cu;
            // 0x30b270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B274u;
label_30b274:
    // 0x30b274: 0x0  nop
    ctx->pc = 0x30b274u;
    // NOP
label_30b278:
    // 0x30b278: 0x0  nop
    ctx->pc = 0x30b278u;
    // NOP
label_30b27c:
    // 0x30b27c: 0x0  nop
    ctx->pc = 0x30b27cu;
    // NOP
label_30b280:
    // 0x30b280: 0x80bd300  j           func_2F4C00
label_30b284:
    if (ctx->pc == 0x30B284u) {
        ctx->pc = 0x30B288u;
        goto label_30b288;
    }
    ctx->pc = 0x30B280u;
    ctx->pc = 0x2F4C00u;
    if (runtime->hasFunction(0x2F4C00u)) {
        auto targetFn = runtime->lookupFunction(0x2F4C00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F4C00_0x2f4c00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x30B288u;
label_30b288:
    // 0x30b288: 0x0  nop
    ctx->pc = 0x30b288u;
    // NOP
label_30b28c:
    // 0x30b28c: 0x0  nop
    ctx->pc = 0x30b28cu;
    // NOP
label_30b290:
    // 0x30b290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b294:
    // 0x30b294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30b298:
    // 0x30b298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b29c:
    // 0x30b29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30b2a0:
    // 0x30b2a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b2a4:
    // 0x30b2a4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_30b2a8:
    if (ctx->pc == 0x30B2A8u) {
        ctx->pc = 0x30B2A8u;
            // 0x30b2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B2ACu;
        goto label_30b2ac;
    }
    ctx->pc = 0x30B2A4u;
    {
        const bool branch_taken_0x30b2a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2A4u;
            // 0x30b2a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2a4) {
            ctx->pc = 0x30B31Cu;
            goto label_30b31c;
        }
    }
    ctx->pc = 0x30B2ACu;
label_30b2ac:
    // 0x30b2ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b2b0:
    // 0x30b2b0: 0x244240b0  addiu       $v0, $v0, 0x40B0
    ctx->pc = 0x30b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16560));
label_30b2b4:
    // 0x30b2b4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_30b2b8:
    if (ctx->pc == 0x30B2B8u) {
        ctx->pc = 0x30B2B8u;
            // 0x30b2b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B2BCu;
        goto label_30b2bc;
    }
    ctx->pc = 0x30B2B4u;
    {
        const bool branch_taken_0x30b2b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2B4u;
            // 0x30b2b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2b4) {
            ctx->pc = 0x30B304u;
            goto label_30b304;
        }
    }
    ctx->pc = 0x30B2BCu;
label_30b2bc:
    // 0x30b2bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b2c0:
    // 0x30b2c0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x30b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_30b2c4:
    // 0x30b2c4: 0x24423290  addiu       $v0, $v0, 0x3290
    ctx->pc = 0x30b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12944));
label_30b2c8:
    // 0x30b2c8: 0x24841850  addiu       $a0, $a0, 0x1850
    ctx->pc = 0x30b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
label_30b2cc:
    // 0x30b2cc: 0xc0ad6c4  jal         func_2B5B10
label_30b2d0:
    if (ctx->pc == 0x30B2D0u) {
        ctx->pc = 0x30B2D0u;
            // 0x30b2d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30B2D4u;
        goto label_30b2d4;
    }
    ctx->pc = 0x30B2CCu;
    SET_GPR_U32(ctx, 31, 0x30B2D4u);
    ctx->pc = 0x30B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2CCu;
            // 0x30b2d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2D4u; }
        if (ctx->pc != 0x30B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2D4u; }
        if (ctx->pc != 0x30B2D4u) { return; }
    }
    ctx->pc = 0x30B2D4u;
label_30b2d4:
    // 0x30b2d4: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x30b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_30b2d8:
    // 0x30b2d8: 0xc0ad670  jal         func_2B59C0
label_30b2dc:
    if (ctx->pc == 0x30B2DCu) {
        ctx->pc = 0x30B2DCu;
            // 0x30b2dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x30B2E0u;
        goto label_30b2e0;
    }
    ctx->pc = 0x30B2D8u;
    SET_GPR_U32(ctx, 31, 0x30B2E0u);
    ctx->pc = 0x30B2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2D8u;
            // 0x30b2dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2E0u; }
        if (ctx->pc != 0x30B2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2E0u; }
        if (ctx->pc != 0x30B2E0u) { return; }
    }
    ctx->pc = 0x30B2E0u;
label_30b2e0:
    // 0x30b2e0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_30b2e4:
    // 0x30b2e4: 0x26240154  addiu       $a0, $s1, 0x154
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_30b2e8:
    // 0x30b2e8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x30b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_30b2ec:
    // 0x30b2ec: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30b2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_30b2f0:
    // 0x30b2f0: 0xc0407e8  jal         func_101FA0
label_30b2f4:
    if (ctx->pc == 0x30B2F4u) {
        ctx->pc = 0x30B2F4u;
            // 0x30b2f4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x30B2F8u;
        goto label_30b2f8;
    }
    ctx->pc = 0x30B2F0u;
    SET_GPR_U32(ctx, 31, 0x30B2F8u);
    ctx->pc = 0x30B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2F0u;
            // 0x30b2f4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2F8u; }
        if (ctx->pc != 0x30B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B2F8u; }
        if (ctx->pc != 0x30B2F8u) { return; }
    }
    ctx->pc = 0x30B2F8u;
label_30b2f8:
    // 0x30b2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b2fc:
    // 0x30b2fc: 0xc0ad6c8  jal         func_2B5B20
label_30b300:
    if (ctx->pc == 0x30B300u) {
        ctx->pc = 0x30B300u;
            // 0x30b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B304u;
        goto label_30b304;
    }
    ctx->pc = 0x30B2FCu;
    SET_GPR_U32(ctx, 31, 0x30B304u);
    ctx->pc = 0x30B300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B2FCu;
            // 0x30b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B20u;
    if (runtime->hasFunction(0x2B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B304u; }
        if (ctx->pc != 0x30B304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B20_0x2b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B304u; }
        if (ctx->pc != 0x30B304u) { return; }
    }
    ctx->pc = 0x30B304u;
label_30b304:
    // 0x30b304: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30b308:
    // 0x30b308: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30b30c:
    // 0x30b30c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30b310:
    if (ctx->pc == 0x30B310u) {
        ctx->pc = 0x30B310u;
            // 0x30b310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B314u;
        goto label_30b314;
    }
    ctx->pc = 0x30B30Cu;
    {
        const bool branch_taken_0x30b30c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30b30c) {
            ctx->pc = 0x30B310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B30Cu;
            // 0x30b310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B320u;
            goto label_30b320;
        }
    }
    ctx->pc = 0x30B314u;
label_30b314:
    // 0x30b314: 0xc0400a8  jal         func_1002A0
label_30b318:
    if (ctx->pc == 0x30B318u) {
        ctx->pc = 0x30B318u;
            // 0x30b318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B31Cu;
        goto label_30b31c;
    }
    ctx->pc = 0x30B314u;
    SET_GPR_U32(ctx, 31, 0x30B31Cu);
    ctx->pc = 0x30B318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B314u;
            // 0x30b318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B31Cu; }
        if (ctx->pc != 0x30B31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B31Cu; }
        if (ctx->pc != 0x30B31Cu) { return; }
    }
    ctx->pc = 0x30B31Cu;
label_30b31c:
    // 0x30b31c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30b31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b320:
    // 0x30b320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b324:
    // 0x30b324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b328:
    // 0x30b328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b32c:
    // 0x30b32c: 0x3e00008  jr          $ra
label_30b330:
    if (ctx->pc == 0x30B330u) {
        ctx->pc = 0x30B330u;
            // 0x30b330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30B334u;
        goto label_30b334;
    }
    ctx->pc = 0x30B32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B32Cu;
            // 0x30b330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B334u;
label_30b334:
    // 0x30b334: 0x0  nop
    ctx->pc = 0x30b334u;
    // NOP
label_30b338:
    // 0x30b338: 0x0  nop
    ctx->pc = 0x30b338u;
    // NOP
label_30b33c:
    // 0x30b33c: 0x0  nop
    ctx->pc = 0x30b33cu;
    // NOP
label_30b340:
    // 0x30b340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30b344:
    // 0x30b344: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x30b344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_30b348:
    // 0x30b348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b34c:
    // 0x30b34c: 0xc040180  jal         func_100600
label_30b350:
    if (ctx->pc == 0x30B350u) {
        ctx->pc = 0x30B350u;
            // 0x30b350: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x30B354u;
        goto label_30b354;
    }
    ctx->pc = 0x30B34Cu;
    SET_GPR_U32(ctx, 31, 0x30B354u);
    ctx->pc = 0x30B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B34Cu;
            // 0x30b350: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B354u; }
        if (ctx->pc != 0x30B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B354u; }
        if (ctx->pc != 0x30B354u) { return; }
    }
    ctx->pc = 0x30B354u;
label_30b354:
    // 0x30b354: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_30b358:
    if (ctx->pc == 0x30B358u) {
        ctx->pc = 0x30B358u;
            // 0x30b358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B35Cu;
        goto label_30b35c;
    }
    ctx->pc = 0x30B354u;
    {
        const bool branch_taken_0x30b354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B354u;
            // 0x30b358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b354) {
            ctx->pc = 0x30B454u;
            goto label_30b454;
        }
    }
    ctx->pc = 0x30B35Cu;
label_30b35c:
    // 0x30b35c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b360:
    // 0x30b360: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x30b360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_30b364:
    // 0x30b364: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x30b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_30b368:
    // 0x30b368: 0x24632a20  addiu       $v1, $v1, 0x2A20
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10784));
label_30b36c:
    // 0x30b36c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30b370:
    // 0x30b370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b374:
    // 0x30b374: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x30b374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_30b378:
    // 0x30b378: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b37c:
    // 0x30b37c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x30b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_30b380:
    // 0x30b380: 0x24424490  addiu       $v0, $v0, 0x4490
    ctx->pc = 0x30b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
label_30b384:
    // 0x30b384: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30b384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_30b388:
    // 0x30b388: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x30b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_30b38c:
    // 0x30b38c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b38cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b390:
    // 0x30b390: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30b390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30b394:
    // 0x30b394: 0xc04cbd8  jal         func_132F60
label_30b398:
    if (ctx->pc == 0x30B398u) {
        ctx->pc = 0x30B398u;
            // 0x30b398: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B39Cu;
        goto label_30b39c;
    }
    ctx->pc = 0x30B394u;
    SET_GPR_U32(ctx, 31, 0x30B39Cu);
    ctx->pc = 0x30B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B394u;
            // 0x30b398: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B39Cu; }
        if (ctx->pc != 0x30B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B39Cu; }
        if (ctx->pc != 0x30B39Cu) { return; }
    }
    ctx->pc = 0x30B39Cu;
label_30b39c:
    // 0x30b39c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b3a0:
    // 0x30b3a0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x30b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_30b3a4:
    // 0x30b3a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b3a8:
    // 0x30b3a8: 0xc04cbd8  jal         func_132F60
label_30b3ac:
    if (ctx->pc == 0x30B3ACu) {
        ctx->pc = 0x30B3ACu;
            // 0x30b3ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B3B0u;
        goto label_30b3b0;
    }
    ctx->pc = 0x30B3A8u;
    SET_GPR_U32(ctx, 31, 0x30B3B0u);
    ctx->pc = 0x30B3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3A8u;
            // 0x30b3ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3B0u; }
        if (ctx->pc != 0x30B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3B0u; }
        if (ctx->pc != 0x30B3B0u) { return; }
    }
    ctx->pc = 0x30B3B0u;
label_30b3b0:
    // 0x30b3b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b3b4:
    // 0x30b3b4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x30b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_30b3b8:
    // 0x30b3b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b3b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b3bc:
    // 0x30b3bc: 0xc04cbd8  jal         func_132F60
label_30b3c0:
    if (ctx->pc == 0x30B3C0u) {
        ctx->pc = 0x30B3C0u;
            // 0x30b3c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B3C4u;
        goto label_30b3c4;
    }
    ctx->pc = 0x30B3BCu;
    SET_GPR_U32(ctx, 31, 0x30B3C4u);
    ctx->pc = 0x30B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3BCu;
            // 0x30b3c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3C4u; }
        if (ctx->pc != 0x30B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3C4u; }
        if (ctx->pc != 0x30B3C4u) { return; }
    }
    ctx->pc = 0x30B3C4u;
label_30b3c4:
    // 0x30b3c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b3c8:
    // 0x30b3c8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_30b3cc:
    // 0x30b3cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b3ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b3d0:
    // 0x30b3d0: 0xc04cbd8  jal         func_132F60
label_30b3d4:
    if (ctx->pc == 0x30B3D4u) {
        ctx->pc = 0x30B3D4u;
            // 0x30b3d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B3D8u;
        goto label_30b3d8;
    }
    ctx->pc = 0x30B3D0u;
    SET_GPR_U32(ctx, 31, 0x30B3D8u);
    ctx->pc = 0x30B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3D0u;
            // 0x30b3d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D8u; }
        if (ctx->pc != 0x30B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3D8u; }
        if (ctx->pc != 0x30B3D8u) { return; }
    }
    ctx->pc = 0x30B3D8u;
label_30b3d8:
    // 0x30b3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b3dc:
    // 0x30b3dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_30b3e0:
    // 0x30b3e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b3e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b3e4:
    // 0x30b3e4: 0xc04cbd8  jal         func_132F60
label_30b3e8:
    if (ctx->pc == 0x30B3E8u) {
        ctx->pc = 0x30B3E8u;
            // 0x30b3e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B3ECu;
        goto label_30b3ec;
    }
    ctx->pc = 0x30B3E4u;
    SET_GPR_U32(ctx, 31, 0x30B3ECu);
    ctx->pc = 0x30B3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3E4u;
            // 0x30b3e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3ECu; }
        if (ctx->pc != 0x30B3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B3ECu; }
        if (ctx->pc != 0x30B3ECu) { return; }
    }
    ctx->pc = 0x30B3ECu;
label_30b3ec:
    // 0x30b3ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b3f0:
    // 0x30b3f0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_30b3f4:
    // 0x30b3f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b3f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b3f8:
    // 0x30b3f8: 0xc04cbd8  jal         func_132F60
label_30b3fc:
    if (ctx->pc == 0x30B3FCu) {
        ctx->pc = 0x30B3FCu;
            // 0x30b3fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B400u;
        goto label_30b400;
    }
    ctx->pc = 0x30B3F8u;
    SET_GPR_U32(ctx, 31, 0x30B400u);
    ctx->pc = 0x30B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B3F8u;
            // 0x30b3fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B400u; }
        if (ctx->pc != 0x30B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B400u; }
        if (ctx->pc != 0x30B400u) { return; }
    }
    ctx->pc = 0x30B400u;
label_30b400:
    // 0x30b400: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x30b400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_30b404:
    // 0x30b404: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x30b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_30b408:
    // 0x30b408: 0x24639a90  addiu       $v1, $v1, -0x6570
    ctx->pc = 0x30b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941328));
label_30b40c:
    // 0x30b40c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x30b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_30b410:
    // 0x30b410: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x30b410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_30b414:
    // 0x30b414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b418:
    // 0x30b418: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x30b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_30b41c:
    // 0x30b41c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b41cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b420:
    // 0x30b420: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x30b420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_30b424:
    // 0x30b424: 0xc04cbd8  jal         func_132F60
label_30b428:
    if (ctx->pc == 0x30B428u) {
        ctx->pc = 0x30B428u;
            // 0x30b428: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B42Cu;
        goto label_30b42c;
    }
    ctx->pc = 0x30B424u;
    SET_GPR_U32(ctx, 31, 0x30B42Cu);
    ctx->pc = 0x30B428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B424u;
            // 0x30b428: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B42Cu; }
        if (ctx->pc != 0x30B42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B42Cu; }
        if (ctx->pc != 0x30B42Cu) { return; }
    }
    ctx->pc = 0x30B42Cu;
label_30b42c:
    // 0x30b42c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b430:
    // 0x30b430: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_30b434:
    // 0x30b434: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b434u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b438:
    // 0x30b438: 0xc04cbd8  jal         func_132F60
label_30b43c:
    if (ctx->pc == 0x30B43Cu) {
        ctx->pc = 0x30B43Cu;
            // 0x30b43c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B440u;
        goto label_30b440;
    }
    ctx->pc = 0x30B438u;
    SET_GPR_U32(ctx, 31, 0x30B440u);
    ctx->pc = 0x30B43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B438u;
            // 0x30b43c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B440u; }
        if (ctx->pc != 0x30B440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B440u; }
        if (ctx->pc != 0x30B440u) { return; }
    }
    ctx->pc = 0x30B440u;
label_30b440:
    // 0x30b440: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30b440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b444:
    // 0x30b444: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x30b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_30b448:
    // 0x30b448: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30b448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30b44c:
    // 0x30b44c: 0xc04cbd8  jal         func_132F60
label_30b450:
    if (ctx->pc == 0x30B450u) {
        ctx->pc = 0x30B450u;
            // 0x30b450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x30B454u;
        goto label_30b454;
    }
    ctx->pc = 0x30B44Cu;
    SET_GPR_U32(ctx, 31, 0x30B454u);
    ctx->pc = 0x30B450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B44Cu;
            // 0x30b450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B454u; }
        if (ctx->pc != 0x30B454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B454u; }
        if (ctx->pc != 0x30B454u) { return; }
    }
    ctx->pc = 0x30B454u;
label_30b454:
    // 0x30b454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b458:
    // 0x30b458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b45c:
    // 0x30b45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b460:
    // 0x30b460: 0x3e00008  jr          $ra
label_30b464:
    if (ctx->pc == 0x30B464u) {
        ctx->pc = 0x30B464u;
            // 0x30b464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30B468u;
        goto label_30b468;
    }
    ctx->pc = 0x30B460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B460u;
            // 0x30b464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B468u;
label_30b468:
    // 0x30b468: 0x0  nop
    ctx->pc = 0x30b468u;
    // NOP
label_30b46c:
    // 0x30b46c: 0x0  nop
    ctx->pc = 0x30b46cu;
    // NOP
label_30b470:
    // 0x30b470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30b474:
    // 0x30b474: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x30b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_30b478:
    // 0x30b478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b47c:
    // 0x30b47c: 0xc040180  jal         func_100600
label_30b480:
    if (ctx->pc == 0x30B480u) {
        ctx->pc = 0x30B480u;
            // 0x30b480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x30B484u;
        goto label_30b484;
    }
    ctx->pc = 0x30B47Cu;
    SET_GPR_U32(ctx, 31, 0x30B484u);
    ctx->pc = 0x30B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B47Cu;
            // 0x30b480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B484u; }
        if (ctx->pc != 0x30B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B484u; }
        if (ctx->pc != 0x30B484u) { return; }
    }
    ctx->pc = 0x30B484u;
label_30b484:
    // 0x30b484: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_30b488:
    if (ctx->pc == 0x30B488u) {
        ctx->pc = 0x30B488u;
            // 0x30b488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B48Cu;
        goto label_30b48c;
    }
    ctx->pc = 0x30B484u;
    {
        const bool branch_taken_0x30b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B484u;
            // 0x30b488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b484) {
            ctx->pc = 0x30B4BCu;
            goto label_30b4bc;
        }
    }
    ctx->pc = 0x30B48Cu;
label_30b48c:
    // 0x30b48c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30b490:
    // 0x30b490: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30b494:
    // 0x30b494: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x30b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
label_30b498:
    // 0x30b498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b49c:
    // 0x30b49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30b4a0:
    // 0x30b4a0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x30b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_30b4a4:
    // 0x30b4a4: 0xc0ca818  jal         func_32A060
label_30b4a8:
    if (ctx->pc == 0x30B4A8u) {
        ctx->pc = 0x30B4A8u;
            // 0x30b4a8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x30B4ACu;
        goto label_30b4ac;
    }
    ctx->pc = 0x30B4A4u;
    SET_GPR_U32(ctx, 31, 0x30B4ACu);
    ctx->pc = 0x30B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4A4u;
            // 0x30b4a8: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A060u;
    if (runtime->hasFunction(0x32A060u)) {
        auto targetFn = runtime->lookupFunction(0x32A060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ACu; }
        if (ctx->pc != 0x30B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A060_0x32a060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4ACu; }
        if (ctx->pc != 0x30B4ACu) { return; }
    }
    ctx->pc = 0x30B4ACu;
label_30b4ac:
    // 0x30b4ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_30b4b0:
    // 0x30b4b0: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x30b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
label_30b4b4:
    // 0x30b4b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_30b4b8:
    // 0x30b4b8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x30b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_30b4bc:
    // 0x30b4bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b4c0:
    // 0x30b4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b4c4:
    // 0x30b4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b4c8:
    // 0x30b4c8: 0x3e00008  jr          $ra
label_30b4cc:
    if (ctx->pc == 0x30B4CCu) {
        ctx->pc = 0x30B4CCu;
            // 0x30b4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x30B4D0u;
        goto label_30b4d0;
    }
    ctx->pc = 0x30B4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4C8u;
            // 0x30b4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B4D0u;
label_30b4d0:
    // 0x30b4d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30b4d4:
    // 0x30b4d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30b4d8:
    // 0x30b4d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30b4dc:
    // 0x30b4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30b4e0:
    // 0x30b4e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b4e4:
    // 0x30b4e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b4e8:
    // 0x30b4e8: 0xc0bd360  jal         func_2F4D80
label_30b4ec:
    if (ctx->pc == 0x30B4ECu) {
        ctx->pc = 0x30B4ECu;
            // 0x30b4ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x30B4F0u;
        goto label_30b4f0;
    }
    ctx->pc = 0x30B4E8u;
    SET_GPR_U32(ctx, 31, 0x30B4F0u);
    ctx->pc = 0x30B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B4E8u;
            // 0x30b4ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D80u;
    if (runtime->hasFunction(0x2F4D80u)) {
        auto targetFn = runtime->lookupFunction(0x2F4D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4F0u; }
        if (ctx->pc != 0x30B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4D80_0x2f4d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B4F0u; }
        if (ctx->pc != 0x30B4F0u) { return; }
    }
    ctx->pc = 0x30B4F0u;
label_30b4f0:
    // 0x30b4f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30b4f4:
    // 0x30b4f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30b4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b4f8:
    // 0x30b4f8: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x30b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_30b4fc:
    // 0x30b4fc: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x30b4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30b500:
    // 0x30b500: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x30b500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_30b504:
    // 0x30b504: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x30b504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b508:
    // 0x30b508: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30b50c:
    // 0x30b50c: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x30b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_30b510:
    // 0x30b510: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x30b510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_30b514:
    // 0x30b514: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_30b518:
    if (ctx->pc == 0x30B518u) {
        ctx->pc = 0x30B51Cu;
        goto label_30b51c;
    }
    ctx->pc = 0x30B514u;
    {
        const bool branch_taken_0x30b514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b514) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B51Cu;
label_30b51c:
    // 0x30b51c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x30b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_30b520:
    // 0x30b520: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x30b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_30b524:
    // 0x30b524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30b528:
    // 0x30b528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b52c:
    // 0x30b52c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_30b530:
    // 0x30b530: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x30b530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_30b534:
    // 0x30b534: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x30b534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_30b538:
    // 0x30b538: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x30b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_30b53c:
    // 0x30b53c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30b540:
    // 0x30b540: 0xc08bff0  jal         func_22FFC0
label_30b544:
    if (ctx->pc == 0x30B544u) {
        ctx->pc = 0x30B544u;
            // 0x30b544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B548u;
        goto label_30b548;
    }
    ctx->pc = 0x30B540u;
    SET_GPR_U32(ctx, 31, 0x30B548u);
    ctx->pc = 0x30B544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B540u;
            // 0x30b544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B548u; }
        if (ctx->pc != 0x30B548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B548u; }
        if (ctx->pc != 0x30B548u) { return; }
    }
    ctx->pc = 0x30B548u;
label_30b548:
    // 0x30b548: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30b548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30b54c:
    // 0x30b54c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x30b54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30b550:
    // 0x30b550: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_30b554:
    if (ctx->pc == 0x30B554u) {
        ctx->pc = 0x30B554u;
            // 0x30b554: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x30B558u;
        goto label_30b558;
    }
    ctx->pc = 0x30B550u;
    {
        const bool branch_taken_0x30b550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B550u;
            // 0x30b554: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b550) {
            ctx->pc = 0x30B504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b504;
        }
    }
    ctx->pc = 0x30B558u;
label_30b558:
    // 0x30b558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b55c:
    // 0x30b55c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30b55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b560:
    // 0x30b560: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30b560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30b564:
    // 0x30b564: 0x8cc30154  lw          $v1, 0x154($a2)
    ctx->pc = 0x30b564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_30b568:
    // 0x30b568: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_30b56c:
    if (ctx->pc == 0x30B56Cu) {
        ctx->pc = 0x30B570u;
        goto label_30b570;
    }
    ctx->pc = 0x30B568u;
    {
        const bool branch_taken_0x30b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b568) {
            ctx->pc = 0x30B5B0u;
            goto label_30b5b0;
        }
    }
    ctx->pc = 0x30B570u;
label_30b570:
    // 0x30b570: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x30b570u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_30b574:
    // 0x30b574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b578:
    // 0x30b578: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x30b578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_30b57c:
    // 0x30b57c: 0x0  nop
    ctx->pc = 0x30b57cu;
    // NOP
label_30b580:
    // 0x30b580: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x30b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_30b584:
    // 0x30b584: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_30b588:
    if (ctx->pc == 0x30B588u) {
        ctx->pc = 0x30B58Cu;
        goto label_30b58c;
    }
    ctx->pc = 0x30B584u;
    {
        const bool branch_taken_0x30b584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b584) {
            ctx->pc = 0x30B5A0u;
            goto label_30b5a0;
        }
    }
    ctx->pc = 0x30B58Cu;
label_30b58c:
    // 0x30b58c: 0x8c44f2e0  lw          $a0, -0xD20($v0)
    ctx->pc = 0x30b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963936)));
label_30b590:
    // 0x30b590: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x30b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_30b594:
    // 0x30b594: 0x802027  not         $a0, $a0
    ctx->pc = 0x30b594u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_30b598:
    // 0x30b598: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_30b59c:
    // 0x30b59c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x30b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_30b5a0:
    // 0x30b5a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_30b5a4:
    // 0x30b5a4: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x30b5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30b5a8:
    // 0x30b5a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_30b5ac:
    if (ctx->pc == 0x30B5ACu) {
        ctx->pc = 0x30B5ACu;
            // 0x30b5ac: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->pc = 0x30B5B0u;
        goto label_30b5b0;
    }
    ctx->pc = 0x30B5A8u;
    {
        const bool branch_taken_0x30b5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5A8u;
            // 0x30b5ac: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5a8) {
            ctx->pc = 0x30B580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b580;
        }
    }
    ctx->pc = 0x30B5B0u;
label_30b5b0:
    // 0x30b5b0: 0x8e630454  lw          $v1, 0x454($s3)
    ctx->pc = 0x30b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1108)));
label_30b5b4:
    // 0x30b5b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30b5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_30b5b8:
    // 0x30b5b8: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x30b5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30b5bc:
    // 0x30b5bc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_30b5c0:
    if (ctx->pc == 0x30B5C0u) {
        ctx->pc = 0x30B5C0u;
            // 0x30b5c0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x30B5C4u;
        goto label_30b5c4;
    }
    ctx->pc = 0x30B5BCu;
    {
        const bool branch_taken_0x30b5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5BCu;
            // 0x30b5c0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5bc) {
            ctx->pc = 0x30B564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b564;
        }
    }
    ctx->pc = 0x30B5C4u;
label_30b5c4:
    // 0x30b5c4: 0xc0c2db4  jal         func_30B6D0
label_30b5c8:
    if (ctx->pc == 0x30B5C8u) {
        ctx->pc = 0x30B5C8u;
            // 0x30b5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B5CCu;
        goto label_30b5cc;
    }
    ctx->pc = 0x30B5C4u;
    SET_GPR_U32(ctx, 31, 0x30B5CCu);
    ctx->pc = 0x30B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5C4u;
            // 0x30b5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B6D0u;
    if (runtime->hasFunction(0x30B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x30B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5CCu; }
        if (ctx->pc != 0x30B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B6D0_0x30b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B5CCu; }
        if (ctx->pc != 0x30B5CCu) { return; }
    }
    ctx->pc = 0x30B5CCu;
label_30b5cc:
    // 0x30b5cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30b5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30b5d0:
    // 0x30b5d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b5d4:
    // 0x30b5d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b5d8:
    // 0x30b5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b5dc:
    // 0x30b5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b5e0:
    // 0x30b5e0: 0x3e00008  jr          $ra
label_30b5e4:
    if (ctx->pc == 0x30B5E4u) {
        ctx->pc = 0x30B5E4u;
            // 0x30b5e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30B5E8u;
        goto label_30b5e8;
    }
    ctx->pc = 0x30B5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5E0u;
            // 0x30b5e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B5E8u;
label_30b5e8:
    // 0x30b5e8: 0x0  nop
    ctx->pc = 0x30b5e8u;
    // NOP
label_30b5ec:
    // 0x30b5ec: 0x0  nop
    ctx->pc = 0x30b5ecu;
    // NOP
label_30b5f0:
    // 0x30b5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30b5f4:
    // 0x30b5f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30b5f8:
    // 0x30b5f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30b5fc:
    // 0x30b5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30b600:
    // 0x30b600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b604:
    // 0x30b604: 0xc0bd300  jal         func_2F4C00
label_30b608:
    if (ctx->pc == 0x30B608u) {
        ctx->pc = 0x30B608u;
            // 0x30b608: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x30B60Cu;
        goto label_30b60c;
    }
    ctx->pc = 0x30B604u;
    SET_GPR_U32(ctx, 31, 0x30B60Cu);
    ctx->pc = 0x30B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B604u;
            // 0x30b608: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C00u;
    if (runtime->hasFunction(0x2F4C00u)) {
        auto targetFn = runtime->lookupFunction(0x2F4C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B60Cu; }
        if (ctx->pc != 0x30B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4C00_0x2f4c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B60Cu; }
        if (ctx->pc != 0x30B60Cu) { return; }
    }
    ctx->pc = 0x30B60Cu;
label_30b60c:
    // 0x30b60c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30b610:
    // 0x30b610: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x30b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_30b614:
    // 0x30b614: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x30b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_30b618:
    // 0x30b618: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x30b618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_30b61c:
    // 0x30b61c: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_30b620:
    if (ctx->pc == 0x30B620u) {
        ctx->pc = 0x30B620u;
            // 0x30b620: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x30B624u;
        goto label_30b624;
    }
    ctx->pc = 0x30B61Cu;
    {
        const bool branch_taken_0x30b61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b61c) {
            ctx->pc = 0x30B620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30B61Cu;
            // 0x30b620: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30B6ACu;
            goto label_30b6ac;
        }
    }
    ctx->pc = 0x30B624u;
label_30b624:
    // 0x30b624: 0x8c91077c  lw          $s1, 0x77C($a0)
    ctx->pc = 0x30b624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_30b628:
    // 0x30b628: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x30b628u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_30b62c:
    // 0x30b62c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30b62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b630:
    // 0x30b630: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x30b630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_30b634:
    // 0x30b634: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x30b634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30b638:
    // 0x30b638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b63c:
    // 0x30b63c: 0x86040644  lh          $a0, 0x644($s0)
    ctx->pc = 0x30b63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1604)));
label_30b640:
    // 0x30b640: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_30b644:
    if (ctx->pc == 0x30B644u) {
        ctx->pc = 0x30B648u;
        goto label_30b648;
    }
    ctx->pc = 0x30B640u;
    {
        const bool branch_taken_0x30b640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30b640) {
            ctx->pc = 0x30B698u;
            goto label_30b698;
        }
    }
    ctx->pc = 0x30B648u;
label_30b648:
    // 0x30b648: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x30b648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_30b64c:
    // 0x30b64c: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x30b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_30b650:
    // 0x30b650: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x30b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_30b654:
    // 0x30b654: 0x38c30011  xori        $v1, $a2, 0x11
    ctx->pc = 0x30b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)17);
label_30b658:
    // 0x30b658: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x30b658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30b65c:
    // 0x30b65c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x30b65cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_30b660:
    // 0x30b660: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x30b660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_30b664:
    // 0x30b664: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x30b664u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_30b668:
    // 0x30b668: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_30b66c:
    // 0x30b66c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_30b670:
    if (ctx->pc == 0x30B670u) {
        ctx->pc = 0x30B674u;
        goto label_30b674;
    }
    ctx->pc = 0x30B66Cu;
    {
        const bool branch_taken_0x30b66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b66c) {
            ctx->pc = 0x30B698u;
            goto label_30b698;
        }
    }
    ctx->pc = 0x30B674u;
label_30b674:
    // 0x30b674: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x30b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_30b678:
    // 0x30b678: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
label_30b67c:
    if (ctx->pc == 0x30B67Cu) {
        ctx->pc = 0x30B680u;
        goto label_30b680;
    }
    ctx->pc = 0x30B678u;
    {
        const bool branch_taken_0x30b678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x30b678) {
            ctx->pc = 0x30B698u;
            goto label_30b698;
        }
    }
    ctx->pc = 0x30B680u;
label_30b680:
    // 0x30b680: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x30b680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30b684:
    // 0x30b684: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x30b684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_30b688:
    // 0x30b688: 0x320f809  jalr        $t9
label_30b68c:
    if (ctx->pc == 0x30B68Cu) {
        ctx->pc = 0x30B68Cu;
            // 0x30b68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30B690u;
        goto label_30b690;
    }
    ctx->pc = 0x30B688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30B690u);
        ctx->pc = 0x30B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B688u;
            // 0x30b68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30B690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30B690u; }
            if (ctx->pc != 0x30B690u) { return; }
        }
        }
    }
    ctx->pc = 0x30B690u;
label_30b690:
    // 0x30b690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b694:
    // 0x30b694: 0xa20311c0  sb          $v1, 0x11C0($s0)
    ctx->pc = 0x30b694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4544), (uint8_t)GPR_U32(ctx, 3));
label_30b698:
    // 0x30b698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30b698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30b69c:
    // 0x30b69c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x30b69cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_30b6a0:
    // 0x30b6a0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_30b6a4:
    if (ctx->pc == 0x30B6A4u) {
        ctx->pc = 0x30B6A4u;
            // 0x30b6a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x30B6A8u;
        goto label_30b6a8;
    }
    ctx->pc = 0x30B6A0u;
    {
        const bool branch_taken_0x30b6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6A0u;
            // 0x30b6a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6a0) {
            ctx->pc = 0x30B634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b634;
        }
    }
    ctx->pc = 0x30B6A8u;
label_30b6a8:
    // 0x30b6a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30b6ac:
    // 0x30b6ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b6b0:
    // 0x30b6b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b6b4:
    // 0x30b6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b6b8:
    // 0x30b6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30b6bc:
    // 0x30b6bc: 0x3e00008  jr          $ra
label_30b6c0:
    if (ctx->pc == 0x30B6C0u) {
        ctx->pc = 0x30B6C0u;
            // 0x30b6c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30B6C4u;
        goto label_30b6c4;
    }
    ctx->pc = 0x30B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B6BCu;
            // 0x30b6c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B6C4u;
label_30b6c4:
    // 0x30b6c4: 0x0  nop
    ctx->pc = 0x30b6c4u;
    // NOP
label_30b6c8:
    // 0x30b6c8: 0x0  nop
    ctx->pc = 0x30b6c8u;
    // NOP
label_30b6cc:
    // 0x30b6cc: 0x0  nop
    ctx->pc = 0x30b6ccu;
    // NOP
}
