#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053AFA0
// Address: 0x53afa0 - 0x53b800
void sub_0053AFA0_0x53afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053AFA0_0x53afa0");
#endif

    switch (ctx->pc) {
        case 0x53afa0u: goto label_53afa0;
        case 0x53afa4u: goto label_53afa4;
        case 0x53afa8u: goto label_53afa8;
        case 0x53afacu: goto label_53afac;
        case 0x53afb0u: goto label_53afb0;
        case 0x53afb4u: goto label_53afb4;
        case 0x53afb8u: goto label_53afb8;
        case 0x53afbcu: goto label_53afbc;
        case 0x53afc0u: goto label_53afc0;
        case 0x53afc4u: goto label_53afc4;
        case 0x53afc8u: goto label_53afc8;
        case 0x53afccu: goto label_53afcc;
        case 0x53afd0u: goto label_53afd0;
        case 0x53afd4u: goto label_53afd4;
        case 0x53afd8u: goto label_53afd8;
        case 0x53afdcu: goto label_53afdc;
        case 0x53afe0u: goto label_53afe0;
        case 0x53afe4u: goto label_53afe4;
        case 0x53afe8u: goto label_53afe8;
        case 0x53afecu: goto label_53afec;
        case 0x53aff0u: goto label_53aff0;
        case 0x53aff4u: goto label_53aff4;
        case 0x53aff8u: goto label_53aff8;
        case 0x53affcu: goto label_53affc;
        case 0x53b000u: goto label_53b000;
        case 0x53b004u: goto label_53b004;
        case 0x53b008u: goto label_53b008;
        case 0x53b00cu: goto label_53b00c;
        case 0x53b010u: goto label_53b010;
        case 0x53b014u: goto label_53b014;
        case 0x53b018u: goto label_53b018;
        case 0x53b01cu: goto label_53b01c;
        case 0x53b020u: goto label_53b020;
        case 0x53b024u: goto label_53b024;
        case 0x53b028u: goto label_53b028;
        case 0x53b02cu: goto label_53b02c;
        case 0x53b030u: goto label_53b030;
        case 0x53b034u: goto label_53b034;
        case 0x53b038u: goto label_53b038;
        case 0x53b03cu: goto label_53b03c;
        case 0x53b040u: goto label_53b040;
        case 0x53b044u: goto label_53b044;
        case 0x53b048u: goto label_53b048;
        case 0x53b04cu: goto label_53b04c;
        case 0x53b050u: goto label_53b050;
        case 0x53b054u: goto label_53b054;
        case 0x53b058u: goto label_53b058;
        case 0x53b05cu: goto label_53b05c;
        case 0x53b060u: goto label_53b060;
        case 0x53b064u: goto label_53b064;
        case 0x53b068u: goto label_53b068;
        case 0x53b06cu: goto label_53b06c;
        case 0x53b070u: goto label_53b070;
        case 0x53b074u: goto label_53b074;
        case 0x53b078u: goto label_53b078;
        case 0x53b07cu: goto label_53b07c;
        case 0x53b080u: goto label_53b080;
        case 0x53b084u: goto label_53b084;
        case 0x53b088u: goto label_53b088;
        case 0x53b08cu: goto label_53b08c;
        case 0x53b090u: goto label_53b090;
        case 0x53b094u: goto label_53b094;
        case 0x53b098u: goto label_53b098;
        case 0x53b09cu: goto label_53b09c;
        case 0x53b0a0u: goto label_53b0a0;
        case 0x53b0a4u: goto label_53b0a4;
        case 0x53b0a8u: goto label_53b0a8;
        case 0x53b0acu: goto label_53b0ac;
        case 0x53b0b0u: goto label_53b0b0;
        case 0x53b0b4u: goto label_53b0b4;
        case 0x53b0b8u: goto label_53b0b8;
        case 0x53b0bcu: goto label_53b0bc;
        case 0x53b0c0u: goto label_53b0c0;
        case 0x53b0c4u: goto label_53b0c4;
        case 0x53b0c8u: goto label_53b0c8;
        case 0x53b0ccu: goto label_53b0cc;
        case 0x53b0d0u: goto label_53b0d0;
        case 0x53b0d4u: goto label_53b0d4;
        case 0x53b0d8u: goto label_53b0d8;
        case 0x53b0dcu: goto label_53b0dc;
        case 0x53b0e0u: goto label_53b0e0;
        case 0x53b0e4u: goto label_53b0e4;
        case 0x53b0e8u: goto label_53b0e8;
        case 0x53b0ecu: goto label_53b0ec;
        case 0x53b0f0u: goto label_53b0f0;
        case 0x53b0f4u: goto label_53b0f4;
        case 0x53b0f8u: goto label_53b0f8;
        case 0x53b0fcu: goto label_53b0fc;
        case 0x53b100u: goto label_53b100;
        case 0x53b104u: goto label_53b104;
        case 0x53b108u: goto label_53b108;
        case 0x53b10cu: goto label_53b10c;
        case 0x53b110u: goto label_53b110;
        case 0x53b114u: goto label_53b114;
        case 0x53b118u: goto label_53b118;
        case 0x53b11cu: goto label_53b11c;
        case 0x53b120u: goto label_53b120;
        case 0x53b124u: goto label_53b124;
        case 0x53b128u: goto label_53b128;
        case 0x53b12cu: goto label_53b12c;
        case 0x53b130u: goto label_53b130;
        case 0x53b134u: goto label_53b134;
        case 0x53b138u: goto label_53b138;
        case 0x53b13cu: goto label_53b13c;
        case 0x53b140u: goto label_53b140;
        case 0x53b144u: goto label_53b144;
        case 0x53b148u: goto label_53b148;
        case 0x53b14cu: goto label_53b14c;
        case 0x53b150u: goto label_53b150;
        case 0x53b154u: goto label_53b154;
        case 0x53b158u: goto label_53b158;
        case 0x53b15cu: goto label_53b15c;
        case 0x53b160u: goto label_53b160;
        case 0x53b164u: goto label_53b164;
        case 0x53b168u: goto label_53b168;
        case 0x53b16cu: goto label_53b16c;
        case 0x53b170u: goto label_53b170;
        case 0x53b174u: goto label_53b174;
        case 0x53b178u: goto label_53b178;
        case 0x53b17cu: goto label_53b17c;
        case 0x53b180u: goto label_53b180;
        case 0x53b184u: goto label_53b184;
        case 0x53b188u: goto label_53b188;
        case 0x53b18cu: goto label_53b18c;
        case 0x53b190u: goto label_53b190;
        case 0x53b194u: goto label_53b194;
        case 0x53b198u: goto label_53b198;
        case 0x53b19cu: goto label_53b19c;
        case 0x53b1a0u: goto label_53b1a0;
        case 0x53b1a4u: goto label_53b1a4;
        case 0x53b1a8u: goto label_53b1a8;
        case 0x53b1acu: goto label_53b1ac;
        case 0x53b1b0u: goto label_53b1b0;
        case 0x53b1b4u: goto label_53b1b4;
        case 0x53b1b8u: goto label_53b1b8;
        case 0x53b1bcu: goto label_53b1bc;
        case 0x53b1c0u: goto label_53b1c0;
        case 0x53b1c4u: goto label_53b1c4;
        case 0x53b1c8u: goto label_53b1c8;
        case 0x53b1ccu: goto label_53b1cc;
        case 0x53b1d0u: goto label_53b1d0;
        case 0x53b1d4u: goto label_53b1d4;
        case 0x53b1d8u: goto label_53b1d8;
        case 0x53b1dcu: goto label_53b1dc;
        case 0x53b1e0u: goto label_53b1e0;
        case 0x53b1e4u: goto label_53b1e4;
        case 0x53b1e8u: goto label_53b1e8;
        case 0x53b1ecu: goto label_53b1ec;
        case 0x53b1f0u: goto label_53b1f0;
        case 0x53b1f4u: goto label_53b1f4;
        case 0x53b1f8u: goto label_53b1f8;
        case 0x53b1fcu: goto label_53b1fc;
        case 0x53b200u: goto label_53b200;
        case 0x53b204u: goto label_53b204;
        case 0x53b208u: goto label_53b208;
        case 0x53b20cu: goto label_53b20c;
        case 0x53b210u: goto label_53b210;
        case 0x53b214u: goto label_53b214;
        case 0x53b218u: goto label_53b218;
        case 0x53b21cu: goto label_53b21c;
        case 0x53b220u: goto label_53b220;
        case 0x53b224u: goto label_53b224;
        case 0x53b228u: goto label_53b228;
        case 0x53b22cu: goto label_53b22c;
        case 0x53b230u: goto label_53b230;
        case 0x53b234u: goto label_53b234;
        case 0x53b238u: goto label_53b238;
        case 0x53b23cu: goto label_53b23c;
        case 0x53b240u: goto label_53b240;
        case 0x53b244u: goto label_53b244;
        case 0x53b248u: goto label_53b248;
        case 0x53b24cu: goto label_53b24c;
        case 0x53b250u: goto label_53b250;
        case 0x53b254u: goto label_53b254;
        case 0x53b258u: goto label_53b258;
        case 0x53b25cu: goto label_53b25c;
        case 0x53b260u: goto label_53b260;
        case 0x53b264u: goto label_53b264;
        case 0x53b268u: goto label_53b268;
        case 0x53b26cu: goto label_53b26c;
        case 0x53b270u: goto label_53b270;
        case 0x53b274u: goto label_53b274;
        case 0x53b278u: goto label_53b278;
        case 0x53b27cu: goto label_53b27c;
        case 0x53b280u: goto label_53b280;
        case 0x53b284u: goto label_53b284;
        case 0x53b288u: goto label_53b288;
        case 0x53b28cu: goto label_53b28c;
        case 0x53b290u: goto label_53b290;
        case 0x53b294u: goto label_53b294;
        case 0x53b298u: goto label_53b298;
        case 0x53b29cu: goto label_53b29c;
        case 0x53b2a0u: goto label_53b2a0;
        case 0x53b2a4u: goto label_53b2a4;
        case 0x53b2a8u: goto label_53b2a8;
        case 0x53b2acu: goto label_53b2ac;
        case 0x53b2b0u: goto label_53b2b0;
        case 0x53b2b4u: goto label_53b2b4;
        case 0x53b2b8u: goto label_53b2b8;
        case 0x53b2bcu: goto label_53b2bc;
        case 0x53b2c0u: goto label_53b2c0;
        case 0x53b2c4u: goto label_53b2c4;
        case 0x53b2c8u: goto label_53b2c8;
        case 0x53b2ccu: goto label_53b2cc;
        case 0x53b2d0u: goto label_53b2d0;
        case 0x53b2d4u: goto label_53b2d4;
        case 0x53b2d8u: goto label_53b2d8;
        case 0x53b2dcu: goto label_53b2dc;
        case 0x53b2e0u: goto label_53b2e0;
        case 0x53b2e4u: goto label_53b2e4;
        case 0x53b2e8u: goto label_53b2e8;
        case 0x53b2ecu: goto label_53b2ec;
        case 0x53b2f0u: goto label_53b2f0;
        case 0x53b2f4u: goto label_53b2f4;
        case 0x53b2f8u: goto label_53b2f8;
        case 0x53b2fcu: goto label_53b2fc;
        case 0x53b300u: goto label_53b300;
        case 0x53b304u: goto label_53b304;
        case 0x53b308u: goto label_53b308;
        case 0x53b30cu: goto label_53b30c;
        case 0x53b310u: goto label_53b310;
        case 0x53b314u: goto label_53b314;
        case 0x53b318u: goto label_53b318;
        case 0x53b31cu: goto label_53b31c;
        case 0x53b320u: goto label_53b320;
        case 0x53b324u: goto label_53b324;
        case 0x53b328u: goto label_53b328;
        case 0x53b32cu: goto label_53b32c;
        case 0x53b330u: goto label_53b330;
        case 0x53b334u: goto label_53b334;
        case 0x53b338u: goto label_53b338;
        case 0x53b33cu: goto label_53b33c;
        case 0x53b340u: goto label_53b340;
        case 0x53b344u: goto label_53b344;
        case 0x53b348u: goto label_53b348;
        case 0x53b34cu: goto label_53b34c;
        case 0x53b350u: goto label_53b350;
        case 0x53b354u: goto label_53b354;
        case 0x53b358u: goto label_53b358;
        case 0x53b35cu: goto label_53b35c;
        case 0x53b360u: goto label_53b360;
        case 0x53b364u: goto label_53b364;
        case 0x53b368u: goto label_53b368;
        case 0x53b36cu: goto label_53b36c;
        case 0x53b370u: goto label_53b370;
        case 0x53b374u: goto label_53b374;
        case 0x53b378u: goto label_53b378;
        case 0x53b37cu: goto label_53b37c;
        case 0x53b380u: goto label_53b380;
        case 0x53b384u: goto label_53b384;
        case 0x53b388u: goto label_53b388;
        case 0x53b38cu: goto label_53b38c;
        case 0x53b390u: goto label_53b390;
        case 0x53b394u: goto label_53b394;
        case 0x53b398u: goto label_53b398;
        case 0x53b39cu: goto label_53b39c;
        case 0x53b3a0u: goto label_53b3a0;
        case 0x53b3a4u: goto label_53b3a4;
        case 0x53b3a8u: goto label_53b3a8;
        case 0x53b3acu: goto label_53b3ac;
        case 0x53b3b0u: goto label_53b3b0;
        case 0x53b3b4u: goto label_53b3b4;
        case 0x53b3b8u: goto label_53b3b8;
        case 0x53b3bcu: goto label_53b3bc;
        case 0x53b3c0u: goto label_53b3c0;
        case 0x53b3c4u: goto label_53b3c4;
        case 0x53b3c8u: goto label_53b3c8;
        case 0x53b3ccu: goto label_53b3cc;
        case 0x53b3d0u: goto label_53b3d0;
        case 0x53b3d4u: goto label_53b3d4;
        case 0x53b3d8u: goto label_53b3d8;
        case 0x53b3dcu: goto label_53b3dc;
        case 0x53b3e0u: goto label_53b3e0;
        case 0x53b3e4u: goto label_53b3e4;
        case 0x53b3e8u: goto label_53b3e8;
        case 0x53b3ecu: goto label_53b3ec;
        case 0x53b3f0u: goto label_53b3f0;
        case 0x53b3f4u: goto label_53b3f4;
        case 0x53b3f8u: goto label_53b3f8;
        case 0x53b3fcu: goto label_53b3fc;
        case 0x53b400u: goto label_53b400;
        case 0x53b404u: goto label_53b404;
        case 0x53b408u: goto label_53b408;
        case 0x53b40cu: goto label_53b40c;
        case 0x53b410u: goto label_53b410;
        case 0x53b414u: goto label_53b414;
        case 0x53b418u: goto label_53b418;
        case 0x53b41cu: goto label_53b41c;
        case 0x53b420u: goto label_53b420;
        case 0x53b424u: goto label_53b424;
        case 0x53b428u: goto label_53b428;
        case 0x53b42cu: goto label_53b42c;
        case 0x53b430u: goto label_53b430;
        case 0x53b434u: goto label_53b434;
        case 0x53b438u: goto label_53b438;
        case 0x53b43cu: goto label_53b43c;
        case 0x53b440u: goto label_53b440;
        case 0x53b444u: goto label_53b444;
        case 0x53b448u: goto label_53b448;
        case 0x53b44cu: goto label_53b44c;
        case 0x53b450u: goto label_53b450;
        case 0x53b454u: goto label_53b454;
        case 0x53b458u: goto label_53b458;
        case 0x53b45cu: goto label_53b45c;
        case 0x53b460u: goto label_53b460;
        case 0x53b464u: goto label_53b464;
        case 0x53b468u: goto label_53b468;
        case 0x53b46cu: goto label_53b46c;
        case 0x53b470u: goto label_53b470;
        case 0x53b474u: goto label_53b474;
        case 0x53b478u: goto label_53b478;
        case 0x53b47cu: goto label_53b47c;
        case 0x53b480u: goto label_53b480;
        case 0x53b484u: goto label_53b484;
        case 0x53b488u: goto label_53b488;
        case 0x53b48cu: goto label_53b48c;
        case 0x53b490u: goto label_53b490;
        case 0x53b494u: goto label_53b494;
        case 0x53b498u: goto label_53b498;
        case 0x53b49cu: goto label_53b49c;
        case 0x53b4a0u: goto label_53b4a0;
        case 0x53b4a4u: goto label_53b4a4;
        case 0x53b4a8u: goto label_53b4a8;
        case 0x53b4acu: goto label_53b4ac;
        case 0x53b4b0u: goto label_53b4b0;
        case 0x53b4b4u: goto label_53b4b4;
        case 0x53b4b8u: goto label_53b4b8;
        case 0x53b4bcu: goto label_53b4bc;
        case 0x53b4c0u: goto label_53b4c0;
        case 0x53b4c4u: goto label_53b4c4;
        case 0x53b4c8u: goto label_53b4c8;
        case 0x53b4ccu: goto label_53b4cc;
        case 0x53b4d0u: goto label_53b4d0;
        case 0x53b4d4u: goto label_53b4d4;
        case 0x53b4d8u: goto label_53b4d8;
        case 0x53b4dcu: goto label_53b4dc;
        case 0x53b4e0u: goto label_53b4e0;
        case 0x53b4e4u: goto label_53b4e4;
        case 0x53b4e8u: goto label_53b4e8;
        case 0x53b4ecu: goto label_53b4ec;
        case 0x53b4f0u: goto label_53b4f0;
        case 0x53b4f4u: goto label_53b4f4;
        case 0x53b4f8u: goto label_53b4f8;
        case 0x53b4fcu: goto label_53b4fc;
        case 0x53b500u: goto label_53b500;
        case 0x53b504u: goto label_53b504;
        case 0x53b508u: goto label_53b508;
        case 0x53b50cu: goto label_53b50c;
        case 0x53b510u: goto label_53b510;
        case 0x53b514u: goto label_53b514;
        case 0x53b518u: goto label_53b518;
        case 0x53b51cu: goto label_53b51c;
        case 0x53b520u: goto label_53b520;
        case 0x53b524u: goto label_53b524;
        case 0x53b528u: goto label_53b528;
        case 0x53b52cu: goto label_53b52c;
        case 0x53b530u: goto label_53b530;
        case 0x53b534u: goto label_53b534;
        case 0x53b538u: goto label_53b538;
        case 0x53b53cu: goto label_53b53c;
        case 0x53b540u: goto label_53b540;
        case 0x53b544u: goto label_53b544;
        case 0x53b548u: goto label_53b548;
        case 0x53b54cu: goto label_53b54c;
        case 0x53b550u: goto label_53b550;
        case 0x53b554u: goto label_53b554;
        case 0x53b558u: goto label_53b558;
        case 0x53b55cu: goto label_53b55c;
        case 0x53b560u: goto label_53b560;
        case 0x53b564u: goto label_53b564;
        case 0x53b568u: goto label_53b568;
        case 0x53b56cu: goto label_53b56c;
        case 0x53b570u: goto label_53b570;
        case 0x53b574u: goto label_53b574;
        case 0x53b578u: goto label_53b578;
        case 0x53b57cu: goto label_53b57c;
        case 0x53b580u: goto label_53b580;
        case 0x53b584u: goto label_53b584;
        case 0x53b588u: goto label_53b588;
        case 0x53b58cu: goto label_53b58c;
        case 0x53b590u: goto label_53b590;
        case 0x53b594u: goto label_53b594;
        case 0x53b598u: goto label_53b598;
        case 0x53b59cu: goto label_53b59c;
        case 0x53b5a0u: goto label_53b5a0;
        case 0x53b5a4u: goto label_53b5a4;
        case 0x53b5a8u: goto label_53b5a8;
        case 0x53b5acu: goto label_53b5ac;
        case 0x53b5b0u: goto label_53b5b0;
        case 0x53b5b4u: goto label_53b5b4;
        case 0x53b5b8u: goto label_53b5b8;
        case 0x53b5bcu: goto label_53b5bc;
        case 0x53b5c0u: goto label_53b5c0;
        case 0x53b5c4u: goto label_53b5c4;
        case 0x53b5c8u: goto label_53b5c8;
        case 0x53b5ccu: goto label_53b5cc;
        case 0x53b5d0u: goto label_53b5d0;
        case 0x53b5d4u: goto label_53b5d4;
        case 0x53b5d8u: goto label_53b5d8;
        case 0x53b5dcu: goto label_53b5dc;
        case 0x53b5e0u: goto label_53b5e0;
        case 0x53b5e4u: goto label_53b5e4;
        case 0x53b5e8u: goto label_53b5e8;
        case 0x53b5ecu: goto label_53b5ec;
        case 0x53b5f0u: goto label_53b5f0;
        case 0x53b5f4u: goto label_53b5f4;
        case 0x53b5f8u: goto label_53b5f8;
        case 0x53b5fcu: goto label_53b5fc;
        case 0x53b600u: goto label_53b600;
        case 0x53b604u: goto label_53b604;
        case 0x53b608u: goto label_53b608;
        case 0x53b60cu: goto label_53b60c;
        case 0x53b610u: goto label_53b610;
        case 0x53b614u: goto label_53b614;
        case 0x53b618u: goto label_53b618;
        case 0x53b61cu: goto label_53b61c;
        case 0x53b620u: goto label_53b620;
        case 0x53b624u: goto label_53b624;
        case 0x53b628u: goto label_53b628;
        case 0x53b62cu: goto label_53b62c;
        case 0x53b630u: goto label_53b630;
        case 0x53b634u: goto label_53b634;
        case 0x53b638u: goto label_53b638;
        case 0x53b63cu: goto label_53b63c;
        case 0x53b640u: goto label_53b640;
        case 0x53b644u: goto label_53b644;
        case 0x53b648u: goto label_53b648;
        case 0x53b64cu: goto label_53b64c;
        case 0x53b650u: goto label_53b650;
        case 0x53b654u: goto label_53b654;
        case 0x53b658u: goto label_53b658;
        case 0x53b65cu: goto label_53b65c;
        case 0x53b660u: goto label_53b660;
        case 0x53b664u: goto label_53b664;
        case 0x53b668u: goto label_53b668;
        case 0x53b66cu: goto label_53b66c;
        case 0x53b670u: goto label_53b670;
        case 0x53b674u: goto label_53b674;
        case 0x53b678u: goto label_53b678;
        case 0x53b67cu: goto label_53b67c;
        case 0x53b680u: goto label_53b680;
        case 0x53b684u: goto label_53b684;
        case 0x53b688u: goto label_53b688;
        case 0x53b68cu: goto label_53b68c;
        case 0x53b690u: goto label_53b690;
        case 0x53b694u: goto label_53b694;
        case 0x53b698u: goto label_53b698;
        case 0x53b69cu: goto label_53b69c;
        case 0x53b6a0u: goto label_53b6a0;
        case 0x53b6a4u: goto label_53b6a4;
        case 0x53b6a8u: goto label_53b6a8;
        case 0x53b6acu: goto label_53b6ac;
        case 0x53b6b0u: goto label_53b6b0;
        case 0x53b6b4u: goto label_53b6b4;
        case 0x53b6b8u: goto label_53b6b8;
        case 0x53b6bcu: goto label_53b6bc;
        case 0x53b6c0u: goto label_53b6c0;
        case 0x53b6c4u: goto label_53b6c4;
        case 0x53b6c8u: goto label_53b6c8;
        case 0x53b6ccu: goto label_53b6cc;
        case 0x53b6d0u: goto label_53b6d0;
        case 0x53b6d4u: goto label_53b6d4;
        case 0x53b6d8u: goto label_53b6d8;
        case 0x53b6dcu: goto label_53b6dc;
        case 0x53b6e0u: goto label_53b6e0;
        case 0x53b6e4u: goto label_53b6e4;
        case 0x53b6e8u: goto label_53b6e8;
        case 0x53b6ecu: goto label_53b6ec;
        case 0x53b6f0u: goto label_53b6f0;
        case 0x53b6f4u: goto label_53b6f4;
        case 0x53b6f8u: goto label_53b6f8;
        case 0x53b6fcu: goto label_53b6fc;
        case 0x53b700u: goto label_53b700;
        case 0x53b704u: goto label_53b704;
        case 0x53b708u: goto label_53b708;
        case 0x53b70cu: goto label_53b70c;
        case 0x53b710u: goto label_53b710;
        case 0x53b714u: goto label_53b714;
        case 0x53b718u: goto label_53b718;
        case 0x53b71cu: goto label_53b71c;
        case 0x53b720u: goto label_53b720;
        case 0x53b724u: goto label_53b724;
        case 0x53b728u: goto label_53b728;
        case 0x53b72cu: goto label_53b72c;
        case 0x53b730u: goto label_53b730;
        case 0x53b734u: goto label_53b734;
        case 0x53b738u: goto label_53b738;
        case 0x53b73cu: goto label_53b73c;
        case 0x53b740u: goto label_53b740;
        case 0x53b744u: goto label_53b744;
        case 0x53b748u: goto label_53b748;
        case 0x53b74cu: goto label_53b74c;
        case 0x53b750u: goto label_53b750;
        case 0x53b754u: goto label_53b754;
        case 0x53b758u: goto label_53b758;
        case 0x53b75cu: goto label_53b75c;
        case 0x53b760u: goto label_53b760;
        case 0x53b764u: goto label_53b764;
        case 0x53b768u: goto label_53b768;
        case 0x53b76cu: goto label_53b76c;
        case 0x53b770u: goto label_53b770;
        case 0x53b774u: goto label_53b774;
        case 0x53b778u: goto label_53b778;
        case 0x53b77cu: goto label_53b77c;
        case 0x53b780u: goto label_53b780;
        case 0x53b784u: goto label_53b784;
        case 0x53b788u: goto label_53b788;
        case 0x53b78cu: goto label_53b78c;
        case 0x53b790u: goto label_53b790;
        case 0x53b794u: goto label_53b794;
        case 0x53b798u: goto label_53b798;
        case 0x53b79cu: goto label_53b79c;
        case 0x53b7a0u: goto label_53b7a0;
        case 0x53b7a4u: goto label_53b7a4;
        case 0x53b7a8u: goto label_53b7a8;
        case 0x53b7acu: goto label_53b7ac;
        case 0x53b7b0u: goto label_53b7b0;
        case 0x53b7b4u: goto label_53b7b4;
        case 0x53b7b8u: goto label_53b7b8;
        case 0x53b7bcu: goto label_53b7bc;
        case 0x53b7c0u: goto label_53b7c0;
        case 0x53b7c4u: goto label_53b7c4;
        case 0x53b7c8u: goto label_53b7c8;
        case 0x53b7ccu: goto label_53b7cc;
        case 0x53b7d0u: goto label_53b7d0;
        case 0x53b7d4u: goto label_53b7d4;
        case 0x53b7d8u: goto label_53b7d8;
        case 0x53b7dcu: goto label_53b7dc;
        case 0x53b7e0u: goto label_53b7e0;
        case 0x53b7e4u: goto label_53b7e4;
        case 0x53b7e8u: goto label_53b7e8;
        case 0x53b7ecu: goto label_53b7ec;
        case 0x53b7f0u: goto label_53b7f0;
        case 0x53b7f4u: goto label_53b7f4;
        case 0x53b7f8u: goto label_53b7f8;
        case 0x53b7fcu: goto label_53b7fc;
        default: break;
    }

    ctx->pc = 0x53afa0u;

label_53afa0:
    // 0x53afa0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x53afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_53afa4:
    // 0x53afa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53afa8:
    // 0x53afa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x53afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_53afac:
    // 0x53afac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x53afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_53afb0:
    // 0x53afb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x53afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_53afb4:
    // 0x53afb4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x53afb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_53afb8:
    // 0x53afb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x53afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_53afbc:
    // 0x53afbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53afc0:
    // 0x53afc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53afc4:
    // 0x53afc4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x53afc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53afc8:
    // 0x53afc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53afcc:
    // 0x53afcc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x53afccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53afd0:
    // 0x53afd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53afd4:
    // 0x53afd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53afd8:
    // 0x53afd8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x53afd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_53afdc:
    // 0x53afdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53afe0:
    // 0x53afe0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x53afe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53afe4:
    // 0x53afe4: 0x2438004  sllv        $s0, $v1, $s2
    ctx->pc = 0x53afe4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_53afe8:
    // 0x53afe8: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x53afe8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_53afec:
    // 0x53afec: 0x2002827  not         $a1, $s0
    ctx->pc = 0x53afecu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_53aff0:
    // 0x53aff0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x53aff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_53aff4:
    // 0x53aff4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x53aff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_53aff8:
    // 0x53aff8: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x53aff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_53affc:
    // 0x53affc: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x53affcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_53b000:
    // 0x53b000: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_53b004:
    if (ctx->pc == 0x53B004u) {
        ctx->pc = 0x53B004u;
            // 0x53b004: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B008u;
        goto label_53b008;
    }
    ctx->pc = 0x53B000u;
    {
        const bool branch_taken_0x53b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B000u;
            // 0x53b004: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b000) {
            ctx->pc = 0x53B194u;
            goto label_53b194;
        }
    }
    ctx->pc = 0x53B008u;
label_53b008:
    // 0x53b008: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x53b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_53b00c:
    // 0x53b00c: 0xc04f278  jal         func_13C9E0
label_53b010:
    if (ctx->pc == 0x53B010u) {
        ctx->pc = 0x53B010u;
            // 0x53b010: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x53B014u;
        goto label_53b014;
    }
    ctx->pc = 0x53B00Cu;
    SET_GPR_U32(ctx, 31, 0x53B014u);
    ctx->pc = 0x53B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B00Cu;
            // 0x53b010: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B014u; }
        if (ctx->pc != 0x53B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B014u; }
        if (ctx->pc != 0x53B014u) { return; }
    }
    ctx->pc = 0x53B014u;
label_53b014:
    // 0x53b014: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x53b014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_53b018:
    // 0x53b018: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x53b018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_53b01c:
    // 0x53b01c: 0xc6a000dc  lwc1        $f0, 0xDC($s5)
    ctx->pc = 0x53b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b020:
    // 0x53b020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x53b020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53b024:
    // 0x53b024: 0x0  nop
    ctx->pc = 0x53b024u;
    // NOP
label_53b028:
    // 0x53b028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x53b028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_53b02c:
    // 0x53b02c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x53b02cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_53b030:
    // 0x53b030: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x53b030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_53b034:
    // 0x53b034: 0xc04f29c  jal         func_13CA70
label_53b038:
    if (ctx->pc == 0x53B038u) {
        ctx->pc = 0x53B038u;
            // 0x53b038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B03Cu;
        goto label_53b03c;
    }
    ctx->pc = 0x53B034u;
    SET_GPR_U32(ctx, 31, 0x53B03Cu);
    ctx->pc = 0x53B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B034u;
            // 0x53b038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B03Cu; }
        if (ctx->pc != 0x53B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B03Cu; }
        if (ctx->pc != 0x53B03Cu) { return; }
    }
    ctx->pc = 0x53B03Cu;
label_53b03c:
    // 0x53b03c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x53b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53b040:
    // 0x53b040: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x53b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_53b044:
    // 0x53b044: 0xc04cd60  jal         func_133580
label_53b048:
    if (ctx->pc == 0x53B048u) {
        ctx->pc = 0x53B048u;
            // 0x53b048: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B04Cu;
        goto label_53b04c;
    }
    ctx->pc = 0x53B044u;
    SET_GPR_U32(ctx, 31, 0x53B04Cu);
    ctx->pc = 0x53B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B044u;
            // 0x53b048: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B04Cu; }
        if (ctx->pc != 0x53B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B04Cu; }
        if (ctx->pc != 0x53B04Cu) { return; }
    }
    ctx->pc = 0x53B04Cu;
label_53b04c:
    // 0x53b04c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x53b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53b050:
    // 0x53b050: 0xc04ce80  jal         func_133A00
label_53b054:
    if (ctx->pc == 0x53B054u) {
        ctx->pc = 0x53B054u;
            // 0x53b054: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x53B058u;
        goto label_53b058;
    }
    ctx->pc = 0x53B050u;
    SET_GPR_U32(ctx, 31, 0x53B058u);
    ctx->pc = 0x53B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B050u;
            // 0x53b054: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B058u; }
        if (ctx->pc != 0x53B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B058u; }
        if (ctx->pc != 0x53B058u) { return; }
    }
    ctx->pc = 0x53B058u;
label_53b058:
    // 0x53b058: 0xc0d4108  jal         func_350420
label_53b05c:
    if (ctx->pc == 0x53B05Cu) {
        ctx->pc = 0x53B05Cu;
            // 0x53b05c: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x53B060u;
        goto label_53b060;
    }
    ctx->pc = 0x53B058u;
    SET_GPR_U32(ctx, 31, 0x53B060u);
    ctx->pc = 0x53B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B058u;
            // 0x53b05c: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B060u; }
        if (ctx->pc != 0x53B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B060u; }
        if (ctx->pc != 0x53B060u) { return; }
    }
    ctx->pc = 0x53B060u;
label_53b060:
    // 0x53b060: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x53b060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53b064:
    // 0x53b064: 0xc0d4104  jal         func_350410
label_53b068:
    if (ctx->pc == 0x53B068u) {
        ctx->pc = 0x53B068u;
            // 0x53b068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B06Cu;
        goto label_53b06c;
    }
    ctx->pc = 0x53B064u;
    SET_GPR_U32(ctx, 31, 0x53B06Cu);
    ctx->pc = 0x53B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B064u;
            // 0x53b068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B06Cu; }
        if (ctx->pc != 0x53B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B06Cu; }
        if (ctx->pc != 0x53B06Cu) { return; }
    }
    ctx->pc = 0x53B06Cu;
label_53b06c:
    // 0x53b06c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x53b06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53b070:
    // 0x53b070: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x53b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_53b074:
    // 0x53b074: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x53b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_53b078:
    // 0x53b078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53b07c:
    // 0x53b07c: 0xc44cd378  lwc1        $f12, -0x2C88($v0)
    ctx->pc = 0x53b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53b080:
    // 0x53b080: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x53b080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_53b084:
    // 0x53b084: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x53b084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53b088:
    // 0x53b088: 0xc0d40ac  jal         func_3502B0
label_53b08c:
    if (ctx->pc == 0x53B08Cu) {
        ctx->pc = 0x53B08Cu;
            // 0x53b08c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B090u;
        goto label_53b090;
    }
    ctx->pc = 0x53B088u;
    SET_GPR_U32(ctx, 31, 0x53B090u);
    ctx->pc = 0x53B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B088u;
            // 0x53b08c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B090u; }
        if (ctx->pc != 0x53B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B090u; }
        if (ctx->pc != 0x53B090u) { return; }
    }
    ctx->pc = 0x53B090u;
label_53b090:
    // 0x53b090: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x53b090u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_53b094:
    // 0x53b094: 0x28520002  slti        $s2, $v0, 0x2
    ctx->pc = 0x53b094u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_53b098:
    // 0x53b098: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x53b098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_53b09c:
    // 0x53b09c: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x53b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_53b0a0:
    // 0x53b0a0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x53b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_53b0a4:
    // 0x53b0a4: 0xc0d590c  jal         func_356430
label_53b0a8:
    if (ctx->pc == 0x53B0A8u) {
        ctx->pc = 0x53B0A8u;
            // 0x53b0a8: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x53B0ACu;
        goto label_53b0ac;
    }
    ctx->pc = 0x53B0A4u;
    SET_GPR_U32(ctx, 31, 0x53B0ACu);
    ctx->pc = 0x53B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B0A4u;
            // 0x53b0a8: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B0ACu; }
        if (ctx->pc != 0x53B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B0ACu; }
        if (ctx->pc != 0x53B0ACu) { return; }
    }
    ctx->pc = 0x53B0ACu;
label_53b0ac:
    // 0x53b0ac: 0x5240003a  beql        $s2, $zero, . + 4 + (0x3A << 2)
label_53b0b0:
    if (ctx->pc == 0x53B0B0u) {
        ctx->pc = 0x53B0B0u;
            // 0x53b0b0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x53B0B4u;
        goto label_53b0b4;
    }
    ctx->pc = 0x53B0ACu;
    {
        const bool branch_taken_0x53b0ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b0ac) {
            ctx->pc = 0x53B0B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B0ACu;
            // 0x53b0b0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B198u;
            goto label_53b198;
        }
    }
    ctx->pc = 0x53B0B4u;
label_53b0b4:
    // 0x53b0b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53b0b8:
    // 0x53b0b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b0bc:
    // 0x53b0bc: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x53b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_53b0c0:
    // 0x53b0c0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x53b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_53b0c4:
    // 0x53b0c4: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x53b0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_53b0c8:
    // 0x53b0c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53b0cc:
    // 0x53b0cc: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x53b0ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_53b0d0:
    // 0x53b0d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b0d4:
    // 0x53b0d4: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x53b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_53b0d8:
    // 0x53b0d8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x53b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_53b0dc:
    // 0x53b0dc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x53b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_53b0e0:
    // 0x53b0e0: 0x869021  addu        $s2, $a0, $a2
    ctx->pc = 0x53b0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_53b0e4:
    // 0x53b0e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53b0e8:
    // 0x53b0e8: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x53b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_53b0ec:
    // 0x53b0ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b0f0:
    // 0x53b0f0: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x53b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_53b0f4:
    // 0x53b0f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x53b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_53b0f8:
    // 0x53b0f8: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x53b0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_53b0fc:
    // 0x53b0fc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x53b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_53b100:
    // 0x53b100: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x53b100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_53b104:
    // 0x53b104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53b108:
    // 0x53b108: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x53b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_53b10c:
    // 0x53b10c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x53b10cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_53b110:
    // 0x53b110: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53b110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53b114:
    // 0x53b114: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x53b114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_53b118:
    // 0x53b118: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b11c:
    // 0x53b11c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x53b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_53b120:
    // 0x53b120: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x53b120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_53b124:
    // 0x53b124: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x53b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_53b128:
    // 0x53b128: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x53b128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_53b12c:
    // 0x53b12c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x53b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_53b130:
    // 0x53b130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x53b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_53b134:
    // 0x53b134: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x53b134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_53b138:
    // 0x53b138: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x53b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_53b13c:
    // 0x53b13c: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x53b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_53b140:
    // 0x53b140: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x53b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_53b144:
    // 0x53b144: 0xc04e4a4  jal         func_139290
label_53b148:
    if (ctx->pc == 0x53B148u) {
        ctx->pc = 0x53B148u;
            // 0x53b148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B14Cu;
        goto label_53b14c;
    }
    ctx->pc = 0x53B144u;
    SET_GPR_U32(ctx, 31, 0x53B14Cu);
    ctx->pc = 0x53B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B144u;
            // 0x53b148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B14Cu; }
        if (ctx->pc != 0x53B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B14Cu; }
        if (ctx->pc != 0x53B14Cu) { return; }
    }
    ctx->pc = 0x53B14Cu;
label_53b14c:
    // 0x53b14c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x53b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_53b150:
    // 0x53b150: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x53b150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53b154:
    // 0x53b154: 0xc04cd60  jal         func_133580
label_53b158:
    if (ctx->pc == 0x53B158u) {
        ctx->pc = 0x53B158u;
            // 0x53b158: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x53B15Cu;
        goto label_53b15c;
    }
    ctx->pc = 0x53B154u;
    SET_GPR_U32(ctx, 31, 0x53B15Cu);
    ctx->pc = 0x53B158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B154u;
            // 0x53b158: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B15Cu; }
        if (ctx->pc != 0x53B15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B15Cu; }
        if (ctx->pc != 0x53B15Cu) { return; }
    }
    ctx->pc = 0x53B15Cu;
label_53b15c:
    // 0x53b15c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x53b15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_53b160:
    // 0x53b160: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53b160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53b164:
    // 0x53b164: 0x320f809  jalr        $t9
label_53b168:
    if (ctx->pc == 0x53B168u) {
        ctx->pc = 0x53B168u;
            // 0x53b168: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B16Cu;
        goto label_53b16c;
    }
    ctx->pc = 0x53B164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B16Cu);
        ctx->pc = 0x53B168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B164u;
            // 0x53b168: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B16Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B16Cu; }
            if (ctx->pc != 0x53B16Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53B16Cu;
label_53b16c:
    // 0x53b16c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x53b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53b170:
    // 0x53b170: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x53b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53b174:
    // 0x53b174: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x53b174u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_53b178:
    // 0x53b178: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x53b178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_53b17c:
    // 0x53b17c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53b17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53b180:
    // 0x53b180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53b180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b184:
    // 0x53b184: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x53b184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_53b188:
    // 0x53b188: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x53b188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_53b18c:
    // 0x53b18c: 0xc04cff4  jal         func_133FD0
label_53b190:
    if (ctx->pc == 0x53B190u) {
        ctx->pc = 0x53B190u;
            // 0x53b190: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B194u;
        goto label_53b194;
    }
    ctx->pc = 0x53B18Cu;
    SET_GPR_U32(ctx, 31, 0x53B194u);
    ctx->pc = 0x53B190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B18Cu;
            // 0x53b190: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B194u; }
        if (ctx->pc != 0x53B194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B194u; }
        if (ctx->pc != 0x53B194u) { return; }
    }
    ctx->pc = 0x53B194u;
label_53b194:
    // 0x53b194: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x53b194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_53b198:
    // 0x53b198: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x53b198u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53b19c:
    // 0x53b19c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x53b19cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53b1a0:
    // 0x53b1a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x53b1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53b1a4:
    // 0x53b1a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53b1a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53b1a8:
    // 0x53b1a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53b1a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53b1ac:
    // 0x53b1ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53b1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53b1b0:
    // 0x53b1b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53b1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53b1b4:
    // 0x53b1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53b1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53b1b8:
    // 0x53b1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53b1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53b1bc:
    // 0x53b1bc: 0x3e00008  jr          $ra
label_53b1c0:
    if (ctx->pc == 0x53B1C0u) {
        ctx->pc = 0x53B1C0u;
            // 0x53b1c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x53B1C4u;
        goto label_53b1c4;
    }
    ctx->pc = 0x53B1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B1BCu;
            // 0x53b1c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B1C4u;
label_53b1c4:
    // 0x53b1c4: 0x0  nop
    ctx->pc = 0x53b1c4u;
    // NOP
label_53b1c8:
    // 0x53b1c8: 0x0  nop
    ctx->pc = 0x53b1c8u;
    // NOP
label_53b1cc:
    // 0x53b1cc: 0x0  nop
    ctx->pc = 0x53b1ccu;
    // NOP
label_53b1d0:
    // 0x53b1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53b1d4:
    // 0x53b1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53b1d8:
    // 0x53b1d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53b1d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b1dc:
    // 0x53b1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53b1e0:
    // 0x53b1e0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x53b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_53b1e4:
    // 0x53b1e4: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x53b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b1e8:
    // 0x53b1e8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x53b1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_53b1ec:
    // 0x53b1ec: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x53b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b1f0:
    // 0x53b1f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x53b1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b1f4:
    // 0x53b1f4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x53b1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_53b1f8:
    // 0x53b1f8: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x53b1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b1fc:
    // 0x53b1fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x53b1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_53b200:
    // 0x53b200: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x53b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b204:
    // 0x53b204: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_53b208:
    if (ctx->pc == 0x53B208u) {
        ctx->pc = 0x53B208u;
            // 0x53b208: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x53B20Cu;
        goto label_53b20c;
    }
    ctx->pc = 0x53B204u;
    {
        const bool branch_taken_0x53b204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B204u;
            // 0x53b208: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b204) {
            ctx->pc = 0x53B23Cu;
            goto label_53b23c;
        }
    }
    ctx->pc = 0x53B20Cu;
label_53b20c:
    // 0x53b20c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x53b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_53b210:
    // 0x53b210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b214:
    // 0x53b214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53b214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b218:
    // 0x53b218: 0x0  nop
    ctx->pc = 0x53b218u;
    // NOP
label_53b21c:
    // 0x53b21c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x53b21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_53b220:
    // 0x53b220: 0xc088b74  jal         func_222DD0
label_53b224:
    if (ctx->pc == 0x53B224u) {
        ctx->pc = 0x53B224u;
            // 0x53b224: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x53B228u;
        goto label_53b228;
    }
    ctx->pc = 0x53B220u;
    SET_GPR_U32(ctx, 31, 0x53B228u);
    ctx->pc = 0x53B224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B220u;
            // 0x53b224: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B228u; }
        if (ctx->pc != 0x53B228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B228u; }
        if (ctx->pc != 0x53B228u) { return; }
    }
    ctx->pc = 0x53B228u;
label_53b228:
    // 0x53b228: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x53b228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_53b22c:
    // 0x53b22c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x53b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_53b230:
    // 0x53b230: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53b230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53b234:
    // 0x53b234: 0x320f809  jalr        $t9
label_53b238:
    if (ctx->pc == 0x53B238u) {
        ctx->pc = 0x53B238u;
            // 0x53b238: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53B23Cu;
        goto label_53b23c;
    }
    ctx->pc = 0x53B234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B23Cu);
        ctx->pc = 0x53B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B234u;
            // 0x53b238: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B23Cu; }
            if (ctx->pc != 0x53B23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53B23Cu;
label_53b23c:
    // 0x53b23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53b23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53b240:
    // 0x53b240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53b240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53b244:
    // 0x53b244: 0x3e00008  jr          $ra
label_53b248:
    if (ctx->pc == 0x53B248u) {
        ctx->pc = 0x53B248u;
            // 0x53b248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53B24Cu;
        goto label_53b24c;
    }
    ctx->pc = 0x53B244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B244u;
            // 0x53b248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B24Cu;
label_53b24c:
    // 0x53b24c: 0x0  nop
    ctx->pc = 0x53b24cu;
    // NOP
label_53b250:
    // 0x53b250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x53b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_53b254:
    // 0x53b254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53b258:
    // 0x53b258: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x53b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_53b25c:
    // 0x53b25c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x53b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_53b260:
    // 0x53b260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x53b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_53b264:
    // 0x53b264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x53b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_53b268:
    // 0x53b268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x53b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_53b26c:
    // 0x53b26c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x53b26cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_53b270:
    // 0x53b270: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x53b270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53b274:
    // 0x53b274: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x53b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_53b278:
    // 0x53b278: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_53b27c:
    if (ctx->pc == 0x53B27Cu) {
        ctx->pc = 0x53B27Cu;
            // 0x53b27c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B280u;
        goto label_53b280;
    }
    ctx->pc = 0x53B278u;
    {
        const bool branch_taken_0x53b278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B278u;
            // 0x53b27c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b278) {
            ctx->pc = 0x53B2A4u;
            goto label_53b2a4;
        }
    }
    ctx->pc = 0x53B280u;
label_53b280:
    // 0x53b280: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_53b284:
    if (ctx->pc == 0x53B284u) {
        ctx->pc = 0x53B284u;
            // 0x53b284: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53B288u;
        goto label_53b288;
    }
    ctx->pc = 0x53B280u;
    {
        const bool branch_taken_0x53b280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b280) {
            ctx->pc = 0x53B284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B280u;
            // 0x53b284: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B290u;
            goto label_53b290;
        }
    }
    ctx->pc = 0x53B288u;
label_53b288:
    // 0x53b288: 0x10000123  b           . + 4 + (0x123 << 2)
label_53b28c:
    if (ctx->pc == 0x53B28Cu) {
        ctx->pc = 0x53B28Cu;
            // 0x53b28c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x53B290u;
        goto label_53b290;
    }
    ctx->pc = 0x53B288u;
    {
        const bool branch_taken_0x53b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B288u;
            // 0x53b28c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b288) {
            ctx->pc = 0x53B718u;
            goto label_53b718;
        }
    }
    ctx->pc = 0x53B290u;
label_53b290:
    // 0x53b290: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x53b290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_53b294:
    // 0x53b294: 0x320f809  jalr        $t9
label_53b298:
    if (ctx->pc == 0x53B298u) {
        ctx->pc = 0x53B29Cu;
        goto label_53b29c;
    }
    ctx->pc = 0x53B294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B29Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B29Cu; }
            if (ctx->pc != 0x53B29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53B29Cu;
label_53b29c:
    // 0x53b29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53b2a0:
    // 0x53b2a0: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x53b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
label_53b2a4:
    // 0x53b2a4: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x53b2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_53b2a8:
    // 0x53b2a8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x53b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_53b2ac:
    // 0x53b2ac: 0x265100e4  addiu       $s1, $s2, 0xE4
    ctx->pc = 0x53b2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 228));
label_53b2b0:
    // 0x53b2b0: 0xc0dc9bc  jal         func_3726F0
label_53b2b4:
    if (ctx->pc == 0x53B2B4u) {
        ctx->pc = 0x53B2B4u;
            // 0x53b2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B2B8u;
        goto label_53b2b8;
    }
    ctx->pc = 0x53B2B0u;
    SET_GPR_U32(ctx, 31, 0x53B2B8u);
    ctx->pc = 0x53B2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B2B0u;
            // 0x53b2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B2B8u; }
        if (ctx->pc != 0x53B2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B2B8u; }
        if (ctx->pc != 0x53B2B8u) { return; }
    }
    ctx->pc = 0x53B2B8u;
label_53b2b8:
    // 0x53b2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b2bc:
    // 0x53b2bc: 0xc0dc9a0  jal         func_372680
label_53b2c0:
    if (ctx->pc == 0x53B2C0u) {
        ctx->pc = 0x53B2C0u;
            // 0x53b2c0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x53B2C4u;
        goto label_53b2c4;
    }
    ctx->pc = 0x53B2BCu;
    SET_GPR_U32(ctx, 31, 0x53B2C4u);
    ctx->pc = 0x53B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B2BCu;
            // 0x53b2c0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B2C4u; }
        if (ctx->pc != 0x53B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B2C4u; }
        if (ctx->pc != 0x53B2C4u) { return; }
    }
    ctx->pc = 0x53B2C4u;
label_53b2c4:
    // 0x53b2c4: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x53b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_53b2c8:
    // 0x53b2c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53b2cc:
    // 0x53b2cc: 0x508300ce  beql        $a0, $v1, . + 4 + (0xCE << 2)
label_53b2d0:
    if (ctx->pc == 0x53B2D0u) {
        ctx->pc = 0x53B2D0u;
            // 0x53b2d0: 0xc64100e0  lwc1        $f1, 0xE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53B2D4u;
        goto label_53b2d4;
    }
    ctx->pc = 0x53B2CCu;
    {
        const bool branch_taken_0x53b2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53b2cc) {
            ctx->pc = 0x53B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B2CCu;
            // 0x53b2d0: 0xc64100e0  lwc1        $f1, 0xE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B608u;
            goto label_53b608;
        }
    }
    ctx->pc = 0x53B2D4u;
label_53b2d4:
    // 0x53b2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53b2d8:
    // 0x53b2d8: 0x50830062  beql        $a0, $v1, . + 4 + (0x62 << 2)
label_53b2dc:
    if (ctx->pc == 0x53B2DCu) {
        ctx->pc = 0x53B2DCu;
            // 0x53b2dc: 0xc64100e0  lwc1        $f1, 0xE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53B2E0u;
        goto label_53b2e0;
    }
    ctx->pc = 0x53B2D8u;
    {
        const bool branch_taken_0x53b2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53b2d8) {
            ctx->pc = 0x53B2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B2D8u;
            // 0x53b2dc: 0xc64100e0  lwc1        $f1, 0xE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B464u;
            goto label_53b464;
        }
    }
    ctx->pc = 0x53B2E0u;
label_53b2e0:
    // 0x53b2e0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_53b2e4:
    if (ctx->pc == 0x53B2E4u) {
        ctx->pc = 0x53B2E4u;
            // 0x53b2e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53B2E8u;
        goto label_53b2e8;
    }
    ctx->pc = 0x53B2E0u;
    {
        const bool branch_taken_0x53b2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b2e0) {
            ctx->pc = 0x53B2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B2E0u;
            // 0x53b2e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B2F0u;
            goto label_53b2f0;
        }
    }
    ctx->pc = 0x53B2E8u;
label_53b2e8:
    // 0x53b2e8: 0x1000010a  b           . + 4 + (0x10A << 2)
label_53b2ec:
    if (ctx->pc == 0x53B2ECu) {
        ctx->pc = 0x53B2F0u;
        goto label_53b2f0;
    }
    ctx->pc = 0x53B2E8u;
    {
        const bool branch_taken_0x53b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b2e8) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B2F0u;
label_53b2f0:
    // 0x53b2f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x53b2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_53b2f4:
    // 0x53b2f4: 0x0  nop
    ctx->pc = 0x53b2f4u;
    // NOP
label_53b2f8:
    // 0x53b2f8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x53b2f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b2fc:
    // 0x53b2fc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_53b300:
    if (ctx->pc == 0x53B300u) {
        ctx->pc = 0x53B304u;
        goto label_53b304;
    }
    ctx->pc = 0x53B2FCu;
    {
        const bool branch_taken_0x53b2fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b2fc) {
            ctx->pc = 0x53B32Cu;
            goto label_53b32c;
        }
    }
    ctx->pc = 0x53B304u;
label_53b304:
    // 0x53b304: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53b304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53b308:
    // 0x53b308: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53b30c:
    // 0x53b30c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x53b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b310:
    // 0x53b310: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x53b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b314:
    // 0x53b314: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53b314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53b318:
    // 0x53b318: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x53b318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b31c:
    // 0x53b31c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_53b320:
    if (ctx->pc == 0x53B320u) {
        ctx->pc = 0x53B320u;
            // 0x53b320: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B324u;
        goto label_53b324;
    }
    ctx->pc = 0x53B31Cu;
    {
        const bool branch_taken_0x53b31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B31Cu;
            // 0x53b320: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b31c) {
            ctx->pc = 0x53B340u;
            goto label_53b340;
        }
    }
    ctx->pc = 0x53B324u;
label_53b324:
    // 0x53b324: 0x10000006  b           . + 4 + (0x6 << 2)
label_53b328:
    if (ctx->pc == 0x53B328u) {
        ctx->pc = 0x53B328u;
            // 0x53b328: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B32Cu;
        goto label_53b32c;
    }
    ctx->pc = 0x53B324u;
    {
        const bool branch_taken_0x53b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B324u;
            // 0x53b328: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b324) {
            ctx->pc = 0x53B340u;
            goto label_53b340;
        }
    }
    ctx->pc = 0x53B32Cu;
label_53b32c:
    // 0x53b32c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x53b32cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b330:
    // 0x53b330: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_53b334:
    if (ctx->pc == 0x53B334u) {
        ctx->pc = 0x53B334u;
            // 0x53b334: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53B338u;
        goto label_53b338;
    }
    ctx->pc = 0x53B330u;
    {
        const bool branch_taken_0x53b330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b330) {
            ctx->pc = 0x53B334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B330u;
            // 0x53b334: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B344u;
            goto label_53b344;
        }
    }
    ctx->pc = 0x53B338u;
label_53b338:
    // 0x53b338: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b33c:
    // 0x53b33c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_53b340:
    // 0x53b340: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x53b340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b344:
    // 0x53b344: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b348:
    // 0x53b348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53b348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b34c:
    // 0x53b34c: 0x0  nop
    ctx->pc = 0x53b34cu;
    // NOP
label_53b350:
    // 0x53b350: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b354:
    // 0x53b354: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_53b358:
    if (ctx->pc == 0x53B358u) {
        ctx->pc = 0x53B358u;
            // 0x53b358: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53B35Cu;
        goto label_53b35c;
    }
    ctx->pc = 0x53B354u;
    {
        const bool branch_taken_0x53b354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B354u;
            // 0x53b358: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b354) {
            ctx->pc = 0x53B374u;
            goto label_53b374;
        }
    }
    ctx->pc = 0x53B35Cu;
label_53b35c:
    // 0x53b35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53b35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b360:
    // 0x53b360: 0x0  nop
    ctx->pc = 0x53b360u;
    // NOP
label_53b364:
    // 0x53b364: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b364u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b368:
    // 0x53b368: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53b36c:
    if (ctx->pc == 0x53B36Cu) {
        ctx->pc = 0x53B370u;
        goto label_53b370;
    }
    ctx->pc = 0x53B368u;
    {
        const bool branch_taken_0x53b368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b368) {
            ctx->pc = 0x53B374u;
            goto label_53b374;
        }
    }
    ctx->pc = 0x53B370u;
label_53b370:
    // 0x53b370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x53b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53b374:
    // 0x53b374: 0x108000e7  beqz        $a0, . + 4 + (0xE7 << 2)
label_53b378:
    if (ctx->pc == 0x53B378u) {
        ctx->pc = 0x53B37Cu;
        goto label_53b37c;
    }
    ctx->pc = 0x53B374u;
    {
        const bool branch_taken_0x53b374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b374) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B37Cu;
label_53b37c:
    // 0x53b37c: 0x824200ed  lb          $v0, 0xED($s2)
    ctx->pc = 0x53b37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_53b380:
    // 0x53b380: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_53b384:
    if (ctx->pc == 0x53B384u) {
        ctx->pc = 0x53B388u;
        goto label_53b388;
    }
    ctx->pc = 0x53B380u;
    {
        const bool branch_taken_0x53b380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53b380) {
            ctx->pc = 0x53B3A0u;
            goto label_53b3a0;
        }
    }
    ctx->pc = 0x53B388u;
label_53b388:
    // 0x53b388: 0x924200ec  lbu         $v0, 0xEC($s2)
    ctx->pc = 0x53b388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b38c:
    // 0x53b38c: 0x924300f4  lbu         $v1, 0xF4($s2)
    ctx->pc = 0x53b38cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 244)));
label_53b390:
    // 0x53b390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x53b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_53b394:
    // 0x53b394: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x53b394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_53b398:
    // 0x53b398: 0x10000006  b           . + 4 + (0x6 << 2)
label_53b39c:
    if (ctx->pc == 0x53B39Cu) {
        ctx->pc = 0x53B39Cu;
            // 0x53b39c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x53B3A0u;
        goto label_53b3a0;
    }
    ctx->pc = 0x53B398u;
    {
        const bool branch_taken_0x53b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B398u;
            // 0x53b39c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b398) {
            ctx->pc = 0x53B3B4u;
            goto label_53b3b4;
        }
    }
    ctx->pc = 0x53B3A0u;
label_53b3a0:
    // 0x53b3a0: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_53b3a4:
    if (ctx->pc == 0x53B3A4u) {
        ctx->pc = 0x53B3A4u;
            // 0x53b3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B3A8u;
        goto label_53b3a8;
    }
    ctx->pc = 0x53B3A0u;
    {
        const bool branch_taken_0x53b3a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x53b3a0) {
            ctx->pc = 0x53B3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B3A0u;
            // 0x53b3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B3B4u;
            goto label_53b3b4;
        }
    }
    ctx->pc = 0x53B3A8u;
label_53b3a8:
    // 0x53b3a8: 0x924200ec  lbu         $v0, 0xEC($s2)
    ctx->pc = 0x53b3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b3ac:
    // 0x53b3ac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x53b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_53b3b0:
    // 0x53b3b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x53b3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_53b3b4:
    // 0x53b3b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_53b3b8:
    if (ctx->pc == 0x53B3B8u) {
        ctx->pc = 0x53B3B8u;
            // 0x53b3b8: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x53B3BCu;
        goto label_53b3bc;
    }
    ctx->pc = 0x53B3B4u;
    {
        const bool branch_taken_0x53b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b3b4) {
            ctx->pc = 0x53B3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B3B4u;
            // 0x53b3b8: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B3CCu;
            goto label_53b3cc;
        }
    }
    ctx->pc = 0x53B3BCu;
label_53b3bc:
    // 0x53b3bc: 0x824200ed  lb          $v0, 0xED($s2)
    ctx->pc = 0x53b3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_53b3c0:
    // 0x53b3c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x53b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_53b3c4:
    // 0x53b3c4: 0xa24200ed  sb          $v0, 0xED($s2)
    ctx->pc = 0x53b3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 237), (uint8_t)GPR_U32(ctx, 2));
label_53b3c8:
    // 0x53b3c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x53b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_53b3cc:
    // 0x53b3cc: 0x924500ed  lbu         $a1, 0xED($s2)
    ctx->pc = 0x53b3ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_53b3d0:
    // 0x53b3d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x53b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_53b3d4:
    // 0x53b3d4: 0x924300ec  lbu         $v1, 0xEC($s2)
    ctx->pc = 0x53b3d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b3d8:
    // 0x53b3d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53b3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53b3dc:
    // 0x53b3dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x53b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_53b3e0:
    // 0x53b3e0: 0xa24200ec  sb          $v0, 0xEC($s2)
    ctx->pc = 0x53b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 236), (uint8_t)GPR_U32(ctx, 2));
label_53b3e4:
    // 0x53b3e4: 0xc64d00d8  lwc1        $f13, 0xD8($s2)
    ctx->pc = 0x53b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_53b3e8:
    // 0x53b3e8: 0xc14ee00  jal         func_53B800
label_53b3ec:
    if (ctx->pc == 0x53B3ECu) {
        ctx->pc = 0x53B3ECu;
            // 0x53b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B3F0u;
        goto label_53b3f0;
    }
    ctx->pc = 0x53B3E8u;
    SET_GPR_U32(ctx, 31, 0x53B3F0u);
    ctx->pc = 0x53B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B3E8u;
            // 0x53b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53B800u;
    if (runtime->hasFunction(0x53B800u)) {
        auto targetFn = runtime->lookupFunction(0x53B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B3F0u; }
        if (ctx->pc != 0x53B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053B800_0x53b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B3F0u; }
        if (ctx->pc != 0x53B3F0u) { return; }
    }
    ctx->pc = 0x53B3F0u;
label_53b3f0:
    // 0x53b3f0: 0x924300ec  lbu         $v1, 0xEC($s2)
    ctx->pc = 0x53b3f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b3f4:
    // 0x53b3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53b3f8:
    // 0x53b3f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x53b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_53b3fc:
    // 0x53b3fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53b400:
    // 0x53b400: 0xc0d1c10  jal         func_347040
label_53b404:
    if (ctx->pc == 0x53B404u) {
        ctx->pc = 0x53B404u;
            // 0x53b404: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x53B408u;
        goto label_53b408;
    }
    ctx->pc = 0x53B400u;
    SET_GPR_U32(ctx, 31, 0x53B408u);
    ctx->pc = 0x53B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B400u;
            // 0x53b404: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B408u; }
        if (ctx->pc != 0x53B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B408u; }
        if (ctx->pc != 0x53B408u) { return; }
    }
    ctx->pc = 0x53B408u;
label_53b408:
    // 0x53b408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b40c:
    // 0x53b40c: 0xc04cc1c  jal         func_133070
label_53b410:
    if (ctx->pc == 0x53B410u) {
        ctx->pc = 0x53B410u;
            // 0x53b410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B414u;
        goto label_53b414;
    }
    ctx->pc = 0x53B40Cu;
    SET_GPR_U32(ctx, 31, 0x53B414u);
    ctx->pc = 0x53B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B40Cu;
            // 0x53b410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B414u; }
        if (ctx->pc != 0x53B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B414u; }
        if (ctx->pc != 0x53B414u) { return; }
    }
    ctx->pc = 0x53B414u;
label_53b414:
    // 0x53b414: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x53b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53b418:
    // 0x53b418: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x53b418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_53b41c:
    // 0x53b41c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x53b41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53b420:
    // 0x53b420: 0x824500ed  lb          $a1, 0xED($s2)
    ctx->pc = 0x53b420u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 237)));
label_53b424:
    // 0x53b424: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x53b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_53b428:
    // 0x53b428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53b42c:
    // 0x53b42c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x53b42cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_53b430:
    // 0x53b430: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x53b430u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_53b434:
    // 0x53b434: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53b434u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b438:
    // 0x53b438: 0x0  nop
    ctx->pc = 0x53b438u;
    // NOP
label_53b43c:
    // 0x53b43c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53b43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53b440:
    // 0x53b440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x53b440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b444:
    // 0x53b444: 0x0  nop
    ctx->pc = 0x53b444u;
    // NOP
label_53b448:
    // 0x53b448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x53b448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_53b44c:
    // 0x53b44c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x53b44cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_53b450:
    // 0x53b450: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x53b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
label_53b454:
    // 0x53b454: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x53b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b458:
    // 0x53b458: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x53b458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_53b45c:
    // 0x53b45c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_53b460:
    if (ctx->pc == 0x53B460u) {
        ctx->pc = 0x53B460u;
            // 0x53b460: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x53B464u;
        goto label_53b464;
    }
    ctx->pc = 0x53B45Cu;
    {
        const bool branch_taken_0x53b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B45Cu;
            // 0x53b460: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b45c) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B464u;
label_53b464:
    // 0x53b464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b468:
    // 0x53b468: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x53b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b46c:
    // 0x53b46c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53b46cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53b470:
    // 0x53b470: 0xc088b74  jal         func_222DD0
label_53b474:
    if (ctx->pc == 0x53B474u) {
        ctx->pc = 0x53B474u;
            // 0x53b474: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->pc = 0x53B478u;
        goto label_53b478;
    }
    ctx->pc = 0x53B470u;
    SET_GPR_U32(ctx, 31, 0x53B478u);
    ctx->pc = 0x53B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B470u;
            // 0x53b474: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B478u; }
        if (ctx->pc != 0x53B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B478u; }
        if (ctx->pc != 0x53B478u) { return; }
    }
    ctx->pc = 0x53B478u;
label_53b478:
    // 0x53b478: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x53b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b47c:
    // 0x53b47c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x53b47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_53b480:
    // 0x53b480: 0x0  nop
    ctx->pc = 0x53b480u;
    // NOP
label_53b484:
    // 0x53b484: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x53b484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b488:
    // 0x53b488: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_53b48c:
    if (ctx->pc == 0x53B48Cu) {
        ctx->pc = 0x53B490u;
        goto label_53b490;
    }
    ctx->pc = 0x53B488u;
    {
        const bool branch_taken_0x53b488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b488) {
            ctx->pc = 0x53B4B8u;
            goto label_53b4b8;
        }
    }
    ctx->pc = 0x53B490u;
label_53b490:
    // 0x53b490: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53b490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53b494:
    // 0x53b494: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53b494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53b498:
    // 0x53b498: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x53b498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b49c:
    // 0x53b49c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x53b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b4a0:
    // 0x53b4a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53b4a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53b4a4:
    // 0x53b4a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x53b4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b4a8:
    // 0x53b4a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_53b4ac:
    if (ctx->pc == 0x53B4ACu) {
        ctx->pc = 0x53B4ACu;
            // 0x53b4ac: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B4B0u;
        goto label_53b4b0;
    }
    ctx->pc = 0x53B4A8u;
    {
        const bool branch_taken_0x53b4a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B4A8u;
            // 0x53b4ac: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b4a8) {
            ctx->pc = 0x53B4CCu;
            goto label_53b4cc;
        }
    }
    ctx->pc = 0x53B4B0u;
label_53b4b0:
    // 0x53b4b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_53b4b4:
    if (ctx->pc == 0x53B4B4u) {
        ctx->pc = 0x53B4B4u;
            // 0x53b4b4: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B4B8u;
        goto label_53b4b8;
    }
    ctx->pc = 0x53B4B0u;
    {
        const bool branch_taken_0x53b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B4B0u;
            // 0x53b4b4: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b4b0) {
            ctx->pc = 0x53B4CCu;
            goto label_53b4cc;
        }
    }
    ctx->pc = 0x53B4B8u;
label_53b4b8:
    // 0x53b4b8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x53b4b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b4bc:
    // 0x53b4bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_53b4c0:
    if (ctx->pc == 0x53B4C0u) {
        ctx->pc = 0x53B4C0u;
            // 0x53b4c0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53B4C4u;
        goto label_53b4c4;
    }
    ctx->pc = 0x53B4BCu;
    {
        const bool branch_taken_0x53b4bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b4bc) {
            ctx->pc = 0x53B4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B4BCu;
            // 0x53b4c0: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B4D0u;
            goto label_53b4d0;
        }
    }
    ctx->pc = 0x53B4C4u;
label_53b4c4:
    // 0x53b4c4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b4c8:
    // 0x53b4c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_53b4cc:
    // 0x53b4cc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x53b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b4d0:
    // 0x53b4d0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b4d4:
    // 0x53b4d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53b4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b4d8:
    // 0x53b4d8: 0x0  nop
    ctx->pc = 0x53b4d8u;
    // NOP
label_53b4dc:
    // 0x53b4dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b4dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b4e0:
    // 0x53b4e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_53b4e4:
    if (ctx->pc == 0x53B4E4u) {
        ctx->pc = 0x53B4E4u;
            // 0x53b4e4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53B4E8u;
        goto label_53b4e8;
    }
    ctx->pc = 0x53B4E0u;
    {
        const bool branch_taken_0x53b4e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B4E0u;
            // 0x53b4e4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b4e0) {
            ctx->pc = 0x53B500u;
            goto label_53b500;
        }
    }
    ctx->pc = 0x53B4E8u;
label_53b4e8:
    // 0x53b4e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53b4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b4ec:
    // 0x53b4ec: 0x0  nop
    ctx->pc = 0x53b4ecu;
    // NOP
label_53b4f0:
    // 0x53b4f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b4f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b4f4:
    // 0x53b4f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53b4f8:
    if (ctx->pc == 0x53B4F8u) {
        ctx->pc = 0x53B4FCu;
        goto label_53b4fc;
    }
    ctx->pc = 0x53B4F4u;
    {
        const bool branch_taken_0x53b4f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b4f4) {
            ctx->pc = 0x53B500u;
            goto label_53b500;
        }
    }
    ctx->pc = 0x53B4FCu;
label_53b4fc:
    // 0x53b4fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x53b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53b500:
    // 0x53b500: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
label_53b504:
    if (ctx->pc == 0x53B504u) {
        ctx->pc = 0x53B508u;
        goto label_53b508;
    }
    ctx->pc = 0x53B500u;
    {
        const bool branch_taken_0x53b500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b500) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B508u;
label_53b508:
    // 0x53b508: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x53b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_53b50c:
    // 0x53b50c: 0x924300ec  lbu         $v1, 0xEC($s2)
    ctx->pc = 0x53b50cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b510:
    // 0x53b510: 0x34443333  ori         $a0, $v0, 0x3333
    ctx->pc = 0x53b510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_53b514:
    // 0x53b514: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x53b514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_53b518:
    // 0x53b518: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x53b518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53b51c:
    // 0x53b51c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x53b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_53b520:
    // 0x53b520: 0xc64000d8  lwc1        $f0, 0xD8($s2)
    ctx->pc = 0x53b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b524:
    // 0x53b524: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53b524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53b528:
    // 0x53b528: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x53b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_53b52c:
    // 0x53b52c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x53b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53b530:
    // 0x53b530: 0xc04cc90  jal         func_133240
label_53b534:
    if (ctx->pc == 0x53B534u) {
        ctx->pc = 0x53B534u;
            // 0x53b534: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x53B538u;
        goto label_53b538;
    }
    ctx->pc = 0x53B530u;
    SET_GPR_U32(ctx, 31, 0x53B538u);
    ctx->pc = 0x53B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B530u;
            // 0x53b534: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B538u; }
        if (ctx->pc != 0x53B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B538u; }
        if (ctx->pc != 0x53B538u) { return; }
    }
    ctx->pc = 0x53B538u;
label_53b538:
    // 0x53b538: 0xc04cc14  jal         func_133050
label_53b53c:
    if (ctx->pc == 0x53B53Cu) {
        ctx->pc = 0x53B53Cu;
            // 0x53b53c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x53B540u;
        goto label_53b540;
    }
    ctx->pc = 0x53B538u;
    SET_GPR_U32(ctx, 31, 0x53B540u);
    ctx->pc = 0x53B53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B538u;
            // 0x53b53c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B540u; }
        if (ctx->pc != 0x53B540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B540u; }
        if (ctx->pc != 0x53B540u) { return; }
    }
    ctx->pc = 0x53B540u;
label_53b540:
    // 0x53b540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x53b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_53b544:
    // 0x53b544: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x53b544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_53b548:
    // 0x53b548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x53b548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53b54c:
    // 0x53b54c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x53b54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53b550:
    // 0x53b550: 0xc04cc44  jal         func_133110
label_53b554:
    if (ctx->pc == 0x53B554u) {
        ctx->pc = 0x53B554u;
            // 0x53b554: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x53B558u;
        goto label_53b558;
    }
    ctx->pc = 0x53B550u;
    SET_GPR_U32(ctx, 31, 0x53B558u);
    ctx->pc = 0x53B554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B550u;
            // 0x53b554: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B558u; }
        if (ctx->pc != 0x53B558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B558u; }
        if (ctx->pc != 0x53B558u) { return; }
    }
    ctx->pc = 0x53B558u;
label_53b558:
    // 0x53b558: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x53b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_53b55c:
    // 0x53b55c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x53b55cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_53b560:
    // 0x53b560: 0xc04cc70  jal         func_1331C0
label_53b564:
    if (ctx->pc == 0x53B564u) {
        ctx->pc = 0x53B564u;
            // 0x53b564: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B568u;
        goto label_53b568;
    }
    ctx->pc = 0x53B560u;
    SET_GPR_U32(ctx, 31, 0x53B568u);
    ctx->pc = 0x53B564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B560u;
            // 0x53b564: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B568u; }
        if (ctx->pc != 0x53B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B568u; }
        if (ctx->pc != 0x53B568u) { return; }
    }
    ctx->pc = 0x53B568u;
label_53b568:
    // 0x53b568: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b56c:
    // 0x53b56c: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x53b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_53b570:
    // 0x53b570: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x53b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53b574:
    // 0x53b574: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x53b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_53b578:
    // 0x53b578: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x53b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_53b57c:
    // 0x53b57c: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x53b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_53b580:
    // 0x53b580: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x53b580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_53b584:
    // 0x53b584: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53b588:
    // 0x53b588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b58c:
    // 0x53b58c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x53b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_53b590:
    // 0x53b590: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x53b590u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_53b594:
    // 0x53b594: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x53b594u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_53b598:
    // 0x53b598: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x53b598u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_53b59c:
    // 0x53b59c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x53b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b5a0:
    // 0x53b5a0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x53b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b5a4:
    // 0x53b5a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x53b5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_53b5a8:
    // 0x53b5a8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x53b5a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_53b5ac:
    // 0x53b5ac: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x53b5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_53b5b0:
    // 0x53b5b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x53b5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_53b5b4:
    // 0x53b5b4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x53b5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_53b5b8:
    // 0x53b5b8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x53b5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_53b5bc:
    // 0x53b5bc: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x53b5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_53b5c0:
    // 0x53b5c0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x53b5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_53b5c4:
    // 0x53b5c4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x53b5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_53b5c8:
    // 0x53b5c8: 0xc088b74  jal         func_222DD0
label_53b5cc:
    if (ctx->pc == 0x53B5CCu) {
        ctx->pc = 0x53B5CCu;
            // 0x53b5cc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x53B5D0u;
        goto label_53b5d0;
    }
    ctx->pc = 0x53B5C8u;
    SET_GPR_U32(ctx, 31, 0x53B5D0u);
    ctx->pc = 0x53B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B5C8u;
            // 0x53b5cc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B5D0u; }
        if (ctx->pc != 0x53B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B5D0u; }
        if (ctx->pc != 0x53B5D0u) { return; }
    }
    ctx->pc = 0x53B5D0u;
label_53b5d0:
    // 0x53b5d0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x53b5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_53b5d4:
    // 0x53b5d4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x53b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_53b5d8:
    // 0x53b5d8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53b5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53b5dc:
    // 0x53b5dc: 0x320f809  jalr        $t9
label_53b5e0:
    if (ctx->pc == 0x53B5E0u) {
        ctx->pc = 0x53B5E0u;
            // 0x53b5e0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53B5E4u;
        goto label_53b5e4;
    }
    ctx->pc = 0x53B5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B5E4u);
        ctx->pc = 0x53B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B5DCu;
            // 0x53b5e0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B5E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B5E4u; }
            if (ctx->pc != 0x53B5E4u) { return; }
        }
        }
    }
    ctx->pc = 0x53B5E4u;
label_53b5e4:
    // 0x53b5e4: 0x0  nop
    ctx->pc = 0x53b5e4u;
    // NOP
label_53b5e8:
    // 0x53b5e8: 0x0  nop
    ctx->pc = 0x53b5e8u;
    // NOP
label_53b5ec:
    // 0x53b5ec: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x53b5ecu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[21];
label_53b5f0:
    // 0x53b5f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53b5f4:
    // 0x53b5f4: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x53b5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
label_53b5f8:
    // 0x53b5f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x53b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b5fc:
    // 0x53b5fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x53b5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_53b600:
    // 0x53b600: 0x10000044  b           . + 4 + (0x44 << 2)
label_53b604:
    if (ctx->pc == 0x53B604u) {
        ctx->pc = 0x53B604u;
            // 0x53b604: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x53B608u;
        goto label_53b608;
    }
    ctx->pc = 0x53B600u;
    {
        const bool branch_taken_0x53b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B600u;
            // 0x53b604: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b600) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B608u;
label_53b608:
    // 0x53b608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b60c:
    // 0x53b60c: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x53b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b610:
    // 0x53b610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x53b610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_53b614:
    // 0x53b614: 0xc088b74  jal         func_222DD0
label_53b618:
    if (ctx->pc == 0x53B618u) {
        ctx->pc = 0x53B618u;
            // 0x53b618: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->pc = 0x53B61Cu;
        goto label_53b61c;
    }
    ctx->pc = 0x53B614u;
    SET_GPR_U32(ctx, 31, 0x53B61Cu);
    ctx->pc = 0x53B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B614u;
            // 0x53b618: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B61Cu; }
        if (ctx->pc != 0x53B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B61Cu; }
        if (ctx->pc != 0x53B61Cu) { return; }
    }
    ctx->pc = 0x53B61Cu;
label_53b61c:
    // 0x53b61c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x53b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b620:
    // 0x53b620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x53b620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_53b624:
    // 0x53b624: 0x0  nop
    ctx->pc = 0x53b624u;
    // NOP
label_53b628:
    // 0x53b628: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x53b628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b62c:
    // 0x53b62c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_53b630:
    if (ctx->pc == 0x53B630u) {
        ctx->pc = 0x53B634u;
        goto label_53b634;
    }
    ctx->pc = 0x53B62Cu;
    {
        const bool branch_taken_0x53b62c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b62c) {
            ctx->pc = 0x53B65Cu;
            goto label_53b65c;
        }
    }
    ctx->pc = 0x53B634u;
label_53b634:
    // 0x53b634: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53b634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53b638:
    // 0x53b638: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53b63c:
    // 0x53b63c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x53b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b640:
    // 0x53b640: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x53b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b644:
    // 0x53b644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53b644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53b648:
    // 0x53b648: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x53b648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b64c:
    // 0x53b64c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_53b650:
    if (ctx->pc == 0x53B650u) {
        ctx->pc = 0x53B650u;
            // 0x53b650: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B654u;
        goto label_53b654;
    }
    ctx->pc = 0x53B64Cu;
    {
        const bool branch_taken_0x53b64c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B64Cu;
            // 0x53b650: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b64c) {
            ctx->pc = 0x53B670u;
            goto label_53b670;
        }
    }
    ctx->pc = 0x53B654u;
label_53b654:
    // 0x53b654: 0x10000006  b           . + 4 + (0x6 << 2)
label_53b658:
    if (ctx->pc == 0x53B658u) {
        ctx->pc = 0x53B658u;
            // 0x53b658: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x53B65Cu;
        goto label_53b65c;
    }
    ctx->pc = 0x53B654u;
    {
        const bool branch_taken_0x53b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B654u;
            // 0x53b658: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b654) {
            ctx->pc = 0x53B670u;
            goto label_53b670;
        }
    }
    ctx->pc = 0x53B65Cu;
label_53b65c:
    // 0x53b65c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x53b65cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b660:
    // 0x53b660: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_53b664:
    if (ctx->pc == 0x53B664u) {
        ctx->pc = 0x53B664u;
            // 0x53b664: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53B668u;
        goto label_53b668;
    }
    ctx->pc = 0x53B660u;
    {
        const bool branch_taken_0x53b660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b660) {
            ctx->pc = 0x53B664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B660u;
            // 0x53b664: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B674u;
            goto label_53b674;
        }
    }
    ctx->pc = 0x53B668u;
label_53b668:
    // 0x53b668: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b66c:
    // 0x53b66c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_53b670:
    // 0x53b670: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x53b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b674:
    // 0x53b674: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53b674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53b678:
    // 0x53b678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53b678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b67c:
    // 0x53b67c: 0x0  nop
    ctx->pc = 0x53b67cu;
    // NOP
label_53b680:
    // 0x53b680: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b680u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b684:
    // 0x53b684: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_53b688:
    if (ctx->pc == 0x53B688u) {
        ctx->pc = 0x53B688u;
            // 0x53b688: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53B68Cu;
        goto label_53b68c;
    }
    ctx->pc = 0x53B684u;
    {
        const bool branch_taken_0x53b684 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B684u;
            // 0x53b688: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b684) {
            ctx->pc = 0x53B6A4u;
            goto label_53b6a4;
        }
    }
    ctx->pc = 0x53B68Cu;
label_53b68c:
    // 0x53b68c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53b68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53b690:
    // 0x53b690: 0x0  nop
    ctx->pc = 0x53b690u;
    // NOP
label_53b694:
    // 0x53b694: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53b694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53b698:
    // 0x53b698: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53b69c:
    if (ctx->pc == 0x53B69Cu) {
        ctx->pc = 0x53B6A0u;
        goto label_53b6a0;
    }
    ctx->pc = 0x53B698u;
    {
        const bool branch_taken_0x53b698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53b698) {
            ctx->pc = 0x53B6A4u;
            goto label_53b6a4;
        }
    }
    ctx->pc = 0x53B6A0u;
label_53b6a0:
    // 0x53b6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x53b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53b6a4:
    // 0x53b6a4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_53b6a8:
    if (ctx->pc == 0x53B6A8u) {
        ctx->pc = 0x53B6ACu;
        goto label_53b6ac;
    }
    ctx->pc = 0x53B6A4u;
    {
        const bool branch_taken_0x53b6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b6a4) {
            ctx->pc = 0x53B714u;
            goto label_53b714;
        }
    }
    ctx->pc = 0x53B6ACu;
label_53b6ac:
    // 0x53b6ac: 0x924300ec  lbu         $v1, 0xEC($s2)
    ctx->pc = 0x53b6acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 236)));
label_53b6b0:
    // 0x53b6b0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x53b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_53b6b4:
    // 0x53b6b4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x53b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_53b6b8:
    // 0x53b6b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53b6bc:
    // 0x53b6bc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x53b6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53b6c0:
    // 0x53b6c0: 0xc04cc04  jal         func_133010
label_53b6c4:
    if (ctx->pc == 0x53B6C4u) {
        ctx->pc = 0x53B6C4u;
            // 0x53b6c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B6C8u;
        goto label_53b6c8;
    }
    ctx->pc = 0x53B6C0u;
    SET_GPR_U32(ctx, 31, 0x53B6C8u);
    ctx->pc = 0x53B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B6C0u;
            // 0x53b6c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B6C8u; }
        if (ctx->pc != 0x53B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B6C8u; }
        if (ctx->pc != 0x53B6C8u) { return; }
    }
    ctx->pc = 0x53B6C8u;
label_53b6c8:
    // 0x53b6c8: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x53b6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_53b6cc:
    // 0x53b6cc: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_53b6d0:
    if (ctx->pc == 0x53B6D0u) {
        ctx->pc = 0x53B6D0u;
            // 0x53b6d0: 0xc6600010  lwc1        $f0, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53B6D4u;
        goto label_53b6d4;
    }
    ctx->pc = 0x53B6CCu;
    {
        const bool branch_taken_0x53b6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b6cc) {
            ctx->pc = 0x53B6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B6CCu;
            // 0x53b6d0: 0xc6600010  lwc1        $f0, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B704u;
            goto label_53b704;
        }
    }
    ctx->pc = 0x53B6D4u;
label_53b6d4:
    // 0x53b6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53b6d8:
    // 0x53b6d8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x53b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_53b6dc:
    // 0x53b6dc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x53b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_53b6e0:
    // 0x53b6e0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x53b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_53b6e4:
    // 0x53b6e4: 0xc088b74  jal         func_222DD0
label_53b6e8:
    if (ctx->pc == 0x53B6E8u) {
        ctx->pc = 0x53B6E8u;
            // 0x53b6e8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x53B6ECu;
        goto label_53b6ec;
    }
    ctx->pc = 0x53B6E4u;
    SET_GPR_U32(ctx, 31, 0x53B6ECu);
    ctx->pc = 0x53B6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B6E4u;
            // 0x53b6e8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B6ECu; }
        if (ctx->pc != 0x53B6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B6ECu; }
        if (ctx->pc != 0x53B6ECu) { return; }
    }
    ctx->pc = 0x53B6ECu;
label_53b6ec:
    // 0x53b6ec: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x53b6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_53b6f0:
    // 0x53b6f0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x53b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_53b6f4:
    // 0x53b6f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53b6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53b6f8:
    // 0x53b6f8: 0x320f809  jalr        $t9
label_53b6fc:
    if (ctx->pc == 0x53B6FCu) {
        ctx->pc = 0x53B6FCu;
            // 0x53b6fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x53B700u;
        goto label_53b700;
    }
    ctx->pc = 0x53B6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B700u);
        ctx->pc = 0x53B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B6F8u;
            // 0x53b6fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B700u; }
            if (ctx->pc != 0x53B700u) { return; }
        }
        }
    }
    ctx->pc = 0x53B700u;
label_53b700:
    // 0x53b700: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x53b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b704:
    // 0x53b704: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x53b704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
label_53b708:
    // 0x53b708: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x53b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b70c:
    // 0x53b70c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x53b70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_53b710:
    // 0x53b710: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x53b710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_53b714:
    // 0x53b714: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x53b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_53b718:
    // 0x53b718: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x53b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53b71c:
    // 0x53b71c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x53b71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53b720:
    // 0x53b720: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53b724:
    // 0x53b724: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x53b724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53b728:
    // 0x53b728: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x53b728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53b72c:
    // 0x53b72c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x53b72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53b730:
    // 0x53b730: 0x3e00008  jr          $ra
label_53b734:
    if (ctx->pc == 0x53B734u) {
        ctx->pc = 0x53B734u;
            // 0x53b734: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x53B738u;
        goto label_53b738;
    }
    ctx->pc = 0x53B730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B730u;
            // 0x53b734: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B738u;
label_53b738:
    // 0x53b738: 0x0  nop
    ctx->pc = 0x53b738u;
    // NOP
label_53b73c:
    // 0x53b73c: 0x0  nop
    ctx->pc = 0x53b73cu;
    // NOP
label_53b740:
    // 0x53b740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x53b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_53b744:
    // 0x53b744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53b748:
    // 0x53b748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53b74c:
    // 0x53b74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53b750:
    // 0x53b750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53b754:
    // 0x53b754: 0x8c9200a4  lw          $s2, 0xA4($a0)
    ctx->pc = 0x53b754u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_53b758:
    // 0x53b758: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_53b75c:
    if (ctx->pc == 0x53B75Cu) {
        ctx->pc = 0x53B75Cu;
            // 0x53b75c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B760u;
        goto label_53b760;
    }
    ctx->pc = 0x53B758u;
    {
        const bool branch_taken_0x53b758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B758u;
            // 0x53b75c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b758) {
            ctx->pc = 0x53B7CCu;
            goto label_53b7cc;
        }
    }
    ctx->pc = 0x53B760u;
label_53b760:
    // 0x53b760: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x53b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_53b764:
    // 0x53b764: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x53b764u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_53b768:
    // 0x53b768: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_53b76c:
    if (ctx->pc == 0x53B76Cu) {
        ctx->pc = 0x53B76Cu;
            // 0x53b76c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B770u;
        goto label_53b770;
    }
    ctx->pc = 0x53B768u;
    {
        const bool branch_taken_0x53b768 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x53B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B768u;
            // 0x53b76c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b768) {
            ctx->pc = 0x53B780u;
            goto label_53b780;
        }
    }
    ctx->pc = 0x53B770u;
label_53b770:
    // 0x53b770: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x53b770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_53b774:
    // 0x53b774: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_53b778:
    if (ctx->pc == 0x53B778u) {
        ctx->pc = 0x53B77Cu;
        goto label_53b77c;
    }
    ctx->pc = 0x53B774u;
    {
        const bool branch_taken_0x53b774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b774) {
            ctx->pc = 0x53B780u;
            goto label_53b780;
        }
    }
    ctx->pc = 0x53B77Cu;
label_53b77c:
    // 0x53b77c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x53b77cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53b780:
    // 0x53b780: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_53b784:
    if (ctx->pc == 0x53B784u) {
        ctx->pc = 0x53B788u;
        goto label_53b788;
    }
    ctx->pc = 0x53B780u;
    {
        const bool branch_taken_0x53b780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53b780) {
            ctx->pc = 0x53B79Cu;
            goto label_53b79c;
        }
    }
    ctx->pc = 0x53B788u;
label_53b788:
    // 0x53b788: 0xc075eb4  jal         func_1D7AD0
label_53b78c:
    if (ctx->pc == 0x53B78Cu) {
        ctx->pc = 0x53B78Cu;
            // 0x53b78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B790u;
        goto label_53b790;
    }
    ctx->pc = 0x53B788u;
    SET_GPR_U32(ctx, 31, 0x53B790u);
    ctx->pc = 0x53B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B788u;
            // 0x53b78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B790u; }
        if (ctx->pc != 0x53B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B790u; }
        if (ctx->pc != 0x53B790u) { return; }
    }
    ctx->pc = 0x53B790u;
label_53b790:
    // 0x53b790: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_53b794:
    if (ctx->pc == 0x53B794u) {
        ctx->pc = 0x53B798u;
        goto label_53b798;
    }
    ctx->pc = 0x53B790u;
    {
        const bool branch_taken_0x53b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53b790) {
            ctx->pc = 0x53B79Cu;
            goto label_53b79c;
        }
    }
    ctx->pc = 0x53B798u;
label_53b798:
    // 0x53b798: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53b798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53b79c:
    // 0x53b79c: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
label_53b7a0:
    if (ctx->pc == 0x53B7A0u) {
        ctx->pc = 0x53B7A0u;
            // 0x53b7a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x53B7A4u;
        goto label_53b7a4;
    }
    ctx->pc = 0x53B79Cu;
    {
        const bool branch_taken_0x53b79c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b79c) {
            ctx->pc = 0x53B7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B79Cu;
            // 0x53b7a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B7D0u;
            goto label_53b7d0;
        }
    }
    ctx->pc = 0x53B7A4u;
label_53b7a4:
    // 0x53b7a4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x53b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_53b7a8:
    // 0x53b7a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53b7ac:
    // 0x53b7ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53b7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53b7b0:
    // 0x53b7b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x53b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_53b7b4:
    // 0x53b7b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53b7b8:
    // 0x53b7b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x53b7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53b7bc:
    // 0x53b7bc: 0x8c440e48  lw          $a0, 0xE48($v0)
    ctx->pc = 0x53b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_53b7c0:
    // 0x53b7c0: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x53b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53b7c4:
    // 0x53b7c4: 0xc0d6814  jal         func_35A050
label_53b7c8:
    if (ctx->pc == 0x53B7C8u) {
        ctx->pc = 0x53B7C8u;
            // 0x53b7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B7CCu;
        goto label_53b7cc;
    }
    ctx->pc = 0x53B7C4u;
    SET_GPR_U32(ctx, 31, 0x53B7CCu);
    ctx->pc = 0x53B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B7C4u;
            // 0x53b7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A050u;
    if (runtime->hasFunction(0x35A050u)) {
        auto targetFn = runtime->lookupFunction(0x35A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B7CCu; }
        if (ctx->pc != 0x53B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A050_0x35a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B7CCu; }
        if (ctx->pc != 0x53B7CCu) { return; }
    }
    ctx->pc = 0x53B7CCu;
label_53b7cc:
    // 0x53b7cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x53b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53b7d0:
    // 0x53b7d0: 0xc0baaa0  jal         func_2EAA80
label_53b7d4:
    if (ctx->pc == 0x53B7D4u) {
        ctx->pc = 0x53B7D4u;
            // 0x53b7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53B7D8u;
        goto label_53b7d8;
    }
    ctx->pc = 0x53B7D0u;
    SET_GPR_U32(ctx, 31, 0x53B7D8u);
    ctx->pc = 0x53B7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B7D0u;
            // 0x53b7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B7D8u; }
        if (ctx->pc != 0x53B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B7D8u; }
        if (ctx->pc != 0x53B7D8u) { return; }
    }
    ctx->pc = 0x53B7D8u;
label_53b7d8:
    // 0x53b7d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53b7dc:
    // 0x53b7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53b7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53b7e0:
    // 0x53b7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53b7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53b7e4:
    // 0x53b7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53b7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53b7e8:
    // 0x53b7e8: 0x3e00008  jr          $ra
label_53b7ec:
    if (ctx->pc == 0x53B7ECu) {
        ctx->pc = 0x53B7ECu;
            // 0x53b7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53B7F0u;
        goto label_53b7f0;
    }
    ctx->pc = 0x53B7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B7E8u;
            // 0x53b7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B7F0u;
label_53b7f0:
    // 0x53b7f0: 0x80e34b0  j           func_38D2C0
label_53b7f4:
    if (ctx->pc == 0x53B7F4u) {
        ctx->pc = 0x53B7F8u;
        goto label_53b7f8;
    }
    ctx->pc = 0x53B7F0u;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x53B7F8u;
label_53b7f8:
    // 0x53b7f8: 0x0  nop
    ctx->pc = 0x53b7f8u;
    // NOP
label_53b7fc:
    // 0x53b7fc: 0x0  nop
    ctx->pc = 0x53b7fcu;
    // NOP
}
