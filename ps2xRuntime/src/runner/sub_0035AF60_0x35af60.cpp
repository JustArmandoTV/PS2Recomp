#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035AF60
// Address: 0x35af60 - 0x35b770
void sub_0035AF60_0x35af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AF60_0x35af60");
#endif

    switch (ctx->pc) {
        case 0x35af60u: goto label_35af60;
        case 0x35af64u: goto label_35af64;
        case 0x35af68u: goto label_35af68;
        case 0x35af6cu: goto label_35af6c;
        case 0x35af70u: goto label_35af70;
        case 0x35af74u: goto label_35af74;
        case 0x35af78u: goto label_35af78;
        case 0x35af7cu: goto label_35af7c;
        case 0x35af80u: goto label_35af80;
        case 0x35af84u: goto label_35af84;
        case 0x35af88u: goto label_35af88;
        case 0x35af8cu: goto label_35af8c;
        case 0x35af90u: goto label_35af90;
        case 0x35af94u: goto label_35af94;
        case 0x35af98u: goto label_35af98;
        case 0x35af9cu: goto label_35af9c;
        case 0x35afa0u: goto label_35afa0;
        case 0x35afa4u: goto label_35afa4;
        case 0x35afa8u: goto label_35afa8;
        case 0x35afacu: goto label_35afac;
        case 0x35afb0u: goto label_35afb0;
        case 0x35afb4u: goto label_35afb4;
        case 0x35afb8u: goto label_35afb8;
        case 0x35afbcu: goto label_35afbc;
        case 0x35afc0u: goto label_35afc0;
        case 0x35afc4u: goto label_35afc4;
        case 0x35afc8u: goto label_35afc8;
        case 0x35afccu: goto label_35afcc;
        case 0x35afd0u: goto label_35afd0;
        case 0x35afd4u: goto label_35afd4;
        case 0x35afd8u: goto label_35afd8;
        case 0x35afdcu: goto label_35afdc;
        case 0x35afe0u: goto label_35afe0;
        case 0x35afe4u: goto label_35afe4;
        case 0x35afe8u: goto label_35afe8;
        case 0x35afecu: goto label_35afec;
        case 0x35aff0u: goto label_35aff0;
        case 0x35aff4u: goto label_35aff4;
        case 0x35aff8u: goto label_35aff8;
        case 0x35affcu: goto label_35affc;
        case 0x35b000u: goto label_35b000;
        case 0x35b004u: goto label_35b004;
        case 0x35b008u: goto label_35b008;
        case 0x35b00cu: goto label_35b00c;
        case 0x35b010u: goto label_35b010;
        case 0x35b014u: goto label_35b014;
        case 0x35b018u: goto label_35b018;
        case 0x35b01cu: goto label_35b01c;
        case 0x35b020u: goto label_35b020;
        case 0x35b024u: goto label_35b024;
        case 0x35b028u: goto label_35b028;
        case 0x35b02cu: goto label_35b02c;
        case 0x35b030u: goto label_35b030;
        case 0x35b034u: goto label_35b034;
        case 0x35b038u: goto label_35b038;
        case 0x35b03cu: goto label_35b03c;
        case 0x35b040u: goto label_35b040;
        case 0x35b044u: goto label_35b044;
        case 0x35b048u: goto label_35b048;
        case 0x35b04cu: goto label_35b04c;
        case 0x35b050u: goto label_35b050;
        case 0x35b054u: goto label_35b054;
        case 0x35b058u: goto label_35b058;
        case 0x35b05cu: goto label_35b05c;
        case 0x35b060u: goto label_35b060;
        case 0x35b064u: goto label_35b064;
        case 0x35b068u: goto label_35b068;
        case 0x35b06cu: goto label_35b06c;
        case 0x35b070u: goto label_35b070;
        case 0x35b074u: goto label_35b074;
        case 0x35b078u: goto label_35b078;
        case 0x35b07cu: goto label_35b07c;
        case 0x35b080u: goto label_35b080;
        case 0x35b084u: goto label_35b084;
        case 0x35b088u: goto label_35b088;
        case 0x35b08cu: goto label_35b08c;
        case 0x35b090u: goto label_35b090;
        case 0x35b094u: goto label_35b094;
        case 0x35b098u: goto label_35b098;
        case 0x35b09cu: goto label_35b09c;
        case 0x35b0a0u: goto label_35b0a0;
        case 0x35b0a4u: goto label_35b0a4;
        case 0x35b0a8u: goto label_35b0a8;
        case 0x35b0acu: goto label_35b0ac;
        case 0x35b0b0u: goto label_35b0b0;
        case 0x35b0b4u: goto label_35b0b4;
        case 0x35b0b8u: goto label_35b0b8;
        case 0x35b0bcu: goto label_35b0bc;
        case 0x35b0c0u: goto label_35b0c0;
        case 0x35b0c4u: goto label_35b0c4;
        case 0x35b0c8u: goto label_35b0c8;
        case 0x35b0ccu: goto label_35b0cc;
        case 0x35b0d0u: goto label_35b0d0;
        case 0x35b0d4u: goto label_35b0d4;
        case 0x35b0d8u: goto label_35b0d8;
        case 0x35b0dcu: goto label_35b0dc;
        case 0x35b0e0u: goto label_35b0e0;
        case 0x35b0e4u: goto label_35b0e4;
        case 0x35b0e8u: goto label_35b0e8;
        case 0x35b0ecu: goto label_35b0ec;
        case 0x35b0f0u: goto label_35b0f0;
        case 0x35b0f4u: goto label_35b0f4;
        case 0x35b0f8u: goto label_35b0f8;
        case 0x35b0fcu: goto label_35b0fc;
        case 0x35b100u: goto label_35b100;
        case 0x35b104u: goto label_35b104;
        case 0x35b108u: goto label_35b108;
        case 0x35b10cu: goto label_35b10c;
        case 0x35b110u: goto label_35b110;
        case 0x35b114u: goto label_35b114;
        case 0x35b118u: goto label_35b118;
        case 0x35b11cu: goto label_35b11c;
        case 0x35b120u: goto label_35b120;
        case 0x35b124u: goto label_35b124;
        case 0x35b128u: goto label_35b128;
        case 0x35b12cu: goto label_35b12c;
        case 0x35b130u: goto label_35b130;
        case 0x35b134u: goto label_35b134;
        case 0x35b138u: goto label_35b138;
        case 0x35b13cu: goto label_35b13c;
        case 0x35b140u: goto label_35b140;
        case 0x35b144u: goto label_35b144;
        case 0x35b148u: goto label_35b148;
        case 0x35b14cu: goto label_35b14c;
        case 0x35b150u: goto label_35b150;
        case 0x35b154u: goto label_35b154;
        case 0x35b158u: goto label_35b158;
        case 0x35b15cu: goto label_35b15c;
        case 0x35b160u: goto label_35b160;
        case 0x35b164u: goto label_35b164;
        case 0x35b168u: goto label_35b168;
        case 0x35b16cu: goto label_35b16c;
        case 0x35b170u: goto label_35b170;
        case 0x35b174u: goto label_35b174;
        case 0x35b178u: goto label_35b178;
        case 0x35b17cu: goto label_35b17c;
        case 0x35b180u: goto label_35b180;
        case 0x35b184u: goto label_35b184;
        case 0x35b188u: goto label_35b188;
        case 0x35b18cu: goto label_35b18c;
        case 0x35b190u: goto label_35b190;
        case 0x35b194u: goto label_35b194;
        case 0x35b198u: goto label_35b198;
        case 0x35b19cu: goto label_35b19c;
        case 0x35b1a0u: goto label_35b1a0;
        case 0x35b1a4u: goto label_35b1a4;
        case 0x35b1a8u: goto label_35b1a8;
        case 0x35b1acu: goto label_35b1ac;
        case 0x35b1b0u: goto label_35b1b0;
        case 0x35b1b4u: goto label_35b1b4;
        case 0x35b1b8u: goto label_35b1b8;
        case 0x35b1bcu: goto label_35b1bc;
        case 0x35b1c0u: goto label_35b1c0;
        case 0x35b1c4u: goto label_35b1c4;
        case 0x35b1c8u: goto label_35b1c8;
        case 0x35b1ccu: goto label_35b1cc;
        case 0x35b1d0u: goto label_35b1d0;
        case 0x35b1d4u: goto label_35b1d4;
        case 0x35b1d8u: goto label_35b1d8;
        case 0x35b1dcu: goto label_35b1dc;
        case 0x35b1e0u: goto label_35b1e0;
        case 0x35b1e4u: goto label_35b1e4;
        case 0x35b1e8u: goto label_35b1e8;
        case 0x35b1ecu: goto label_35b1ec;
        case 0x35b1f0u: goto label_35b1f0;
        case 0x35b1f4u: goto label_35b1f4;
        case 0x35b1f8u: goto label_35b1f8;
        case 0x35b1fcu: goto label_35b1fc;
        case 0x35b200u: goto label_35b200;
        case 0x35b204u: goto label_35b204;
        case 0x35b208u: goto label_35b208;
        case 0x35b20cu: goto label_35b20c;
        case 0x35b210u: goto label_35b210;
        case 0x35b214u: goto label_35b214;
        case 0x35b218u: goto label_35b218;
        case 0x35b21cu: goto label_35b21c;
        case 0x35b220u: goto label_35b220;
        case 0x35b224u: goto label_35b224;
        case 0x35b228u: goto label_35b228;
        case 0x35b22cu: goto label_35b22c;
        case 0x35b230u: goto label_35b230;
        case 0x35b234u: goto label_35b234;
        case 0x35b238u: goto label_35b238;
        case 0x35b23cu: goto label_35b23c;
        case 0x35b240u: goto label_35b240;
        case 0x35b244u: goto label_35b244;
        case 0x35b248u: goto label_35b248;
        case 0x35b24cu: goto label_35b24c;
        case 0x35b250u: goto label_35b250;
        case 0x35b254u: goto label_35b254;
        case 0x35b258u: goto label_35b258;
        case 0x35b25cu: goto label_35b25c;
        case 0x35b260u: goto label_35b260;
        case 0x35b264u: goto label_35b264;
        case 0x35b268u: goto label_35b268;
        case 0x35b26cu: goto label_35b26c;
        case 0x35b270u: goto label_35b270;
        case 0x35b274u: goto label_35b274;
        case 0x35b278u: goto label_35b278;
        case 0x35b27cu: goto label_35b27c;
        case 0x35b280u: goto label_35b280;
        case 0x35b284u: goto label_35b284;
        case 0x35b288u: goto label_35b288;
        case 0x35b28cu: goto label_35b28c;
        case 0x35b290u: goto label_35b290;
        case 0x35b294u: goto label_35b294;
        case 0x35b298u: goto label_35b298;
        case 0x35b29cu: goto label_35b29c;
        case 0x35b2a0u: goto label_35b2a0;
        case 0x35b2a4u: goto label_35b2a4;
        case 0x35b2a8u: goto label_35b2a8;
        case 0x35b2acu: goto label_35b2ac;
        case 0x35b2b0u: goto label_35b2b0;
        case 0x35b2b4u: goto label_35b2b4;
        case 0x35b2b8u: goto label_35b2b8;
        case 0x35b2bcu: goto label_35b2bc;
        case 0x35b2c0u: goto label_35b2c0;
        case 0x35b2c4u: goto label_35b2c4;
        case 0x35b2c8u: goto label_35b2c8;
        case 0x35b2ccu: goto label_35b2cc;
        case 0x35b2d0u: goto label_35b2d0;
        case 0x35b2d4u: goto label_35b2d4;
        case 0x35b2d8u: goto label_35b2d8;
        case 0x35b2dcu: goto label_35b2dc;
        case 0x35b2e0u: goto label_35b2e0;
        case 0x35b2e4u: goto label_35b2e4;
        case 0x35b2e8u: goto label_35b2e8;
        case 0x35b2ecu: goto label_35b2ec;
        case 0x35b2f0u: goto label_35b2f0;
        case 0x35b2f4u: goto label_35b2f4;
        case 0x35b2f8u: goto label_35b2f8;
        case 0x35b2fcu: goto label_35b2fc;
        case 0x35b300u: goto label_35b300;
        case 0x35b304u: goto label_35b304;
        case 0x35b308u: goto label_35b308;
        case 0x35b30cu: goto label_35b30c;
        case 0x35b310u: goto label_35b310;
        case 0x35b314u: goto label_35b314;
        case 0x35b318u: goto label_35b318;
        case 0x35b31cu: goto label_35b31c;
        case 0x35b320u: goto label_35b320;
        case 0x35b324u: goto label_35b324;
        case 0x35b328u: goto label_35b328;
        case 0x35b32cu: goto label_35b32c;
        case 0x35b330u: goto label_35b330;
        case 0x35b334u: goto label_35b334;
        case 0x35b338u: goto label_35b338;
        case 0x35b33cu: goto label_35b33c;
        case 0x35b340u: goto label_35b340;
        case 0x35b344u: goto label_35b344;
        case 0x35b348u: goto label_35b348;
        case 0x35b34cu: goto label_35b34c;
        case 0x35b350u: goto label_35b350;
        case 0x35b354u: goto label_35b354;
        case 0x35b358u: goto label_35b358;
        case 0x35b35cu: goto label_35b35c;
        case 0x35b360u: goto label_35b360;
        case 0x35b364u: goto label_35b364;
        case 0x35b368u: goto label_35b368;
        case 0x35b36cu: goto label_35b36c;
        case 0x35b370u: goto label_35b370;
        case 0x35b374u: goto label_35b374;
        case 0x35b378u: goto label_35b378;
        case 0x35b37cu: goto label_35b37c;
        case 0x35b380u: goto label_35b380;
        case 0x35b384u: goto label_35b384;
        case 0x35b388u: goto label_35b388;
        case 0x35b38cu: goto label_35b38c;
        case 0x35b390u: goto label_35b390;
        case 0x35b394u: goto label_35b394;
        case 0x35b398u: goto label_35b398;
        case 0x35b39cu: goto label_35b39c;
        case 0x35b3a0u: goto label_35b3a0;
        case 0x35b3a4u: goto label_35b3a4;
        case 0x35b3a8u: goto label_35b3a8;
        case 0x35b3acu: goto label_35b3ac;
        case 0x35b3b0u: goto label_35b3b0;
        case 0x35b3b4u: goto label_35b3b4;
        case 0x35b3b8u: goto label_35b3b8;
        case 0x35b3bcu: goto label_35b3bc;
        case 0x35b3c0u: goto label_35b3c0;
        case 0x35b3c4u: goto label_35b3c4;
        case 0x35b3c8u: goto label_35b3c8;
        case 0x35b3ccu: goto label_35b3cc;
        case 0x35b3d0u: goto label_35b3d0;
        case 0x35b3d4u: goto label_35b3d4;
        case 0x35b3d8u: goto label_35b3d8;
        case 0x35b3dcu: goto label_35b3dc;
        case 0x35b3e0u: goto label_35b3e0;
        case 0x35b3e4u: goto label_35b3e4;
        case 0x35b3e8u: goto label_35b3e8;
        case 0x35b3ecu: goto label_35b3ec;
        case 0x35b3f0u: goto label_35b3f0;
        case 0x35b3f4u: goto label_35b3f4;
        case 0x35b3f8u: goto label_35b3f8;
        case 0x35b3fcu: goto label_35b3fc;
        case 0x35b400u: goto label_35b400;
        case 0x35b404u: goto label_35b404;
        case 0x35b408u: goto label_35b408;
        case 0x35b40cu: goto label_35b40c;
        case 0x35b410u: goto label_35b410;
        case 0x35b414u: goto label_35b414;
        case 0x35b418u: goto label_35b418;
        case 0x35b41cu: goto label_35b41c;
        case 0x35b420u: goto label_35b420;
        case 0x35b424u: goto label_35b424;
        case 0x35b428u: goto label_35b428;
        case 0x35b42cu: goto label_35b42c;
        case 0x35b430u: goto label_35b430;
        case 0x35b434u: goto label_35b434;
        case 0x35b438u: goto label_35b438;
        case 0x35b43cu: goto label_35b43c;
        case 0x35b440u: goto label_35b440;
        case 0x35b444u: goto label_35b444;
        case 0x35b448u: goto label_35b448;
        case 0x35b44cu: goto label_35b44c;
        case 0x35b450u: goto label_35b450;
        case 0x35b454u: goto label_35b454;
        case 0x35b458u: goto label_35b458;
        case 0x35b45cu: goto label_35b45c;
        case 0x35b460u: goto label_35b460;
        case 0x35b464u: goto label_35b464;
        case 0x35b468u: goto label_35b468;
        case 0x35b46cu: goto label_35b46c;
        case 0x35b470u: goto label_35b470;
        case 0x35b474u: goto label_35b474;
        case 0x35b478u: goto label_35b478;
        case 0x35b47cu: goto label_35b47c;
        case 0x35b480u: goto label_35b480;
        case 0x35b484u: goto label_35b484;
        case 0x35b488u: goto label_35b488;
        case 0x35b48cu: goto label_35b48c;
        case 0x35b490u: goto label_35b490;
        case 0x35b494u: goto label_35b494;
        case 0x35b498u: goto label_35b498;
        case 0x35b49cu: goto label_35b49c;
        case 0x35b4a0u: goto label_35b4a0;
        case 0x35b4a4u: goto label_35b4a4;
        case 0x35b4a8u: goto label_35b4a8;
        case 0x35b4acu: goto label_35b4ac;
        case 0x35b4b0u: goto label_35b4b0;
        case 0x35b4b4u: goto label_35b4b4;
        case 0x35b4b8u: goto label_35b4b8;
        case 0x35b4bcu: goto label_35b4bc;
        case 0x35b4c0u: goto label_35b4c0;
        case 0x35b4c4u: goto label_35b4c4;
        case 0x35b4c8u: goto label_35b4c8;
        case 0x35b4ccu: goto label_35b4cc;
        case 0x35b4d0u: goto label_35b4d0;
        case 0x35b4d4u: goto label_35b4d4;
        case 0x35b4d8u: goto label_35b4d8;
        case 0x35b4dcu: goto label_35b4dc;
        case 0x35b4e0u: goto label_35b4e0;
        case 0x35b4e4u: goto label_35b4e4;
        case 0x35b4e8u: goto label_35b4e8;
        case 0x35b4ecu: goto label_35b4ec;
        case 0x35b4f0u: goto label_35b4f0;
        case 0x35b4f4u: goto label_35b4f4;
        case 0x35b4f8u: goto label_35b4f8;
        case 0x35b4fcu: goto label_35b4fc;
        case 0x35b500u: goto label_35b500;
        case 0x35b504u: goto label_35b504;
        case 0x35b508u: goto label_35b508;
        case 0x35b50cu: goto label_35b50c;
        case 0x35b510u: goto label_35b510;
        case 0x35b514u: goto label_35b514;
        case 0x35b518u: goto label_35b518;
        case 0x35b51cu: goto label_35b51c;
        case 0x35b520u: goto label_35b520;
        case 0x35b524u: goto label_35b524;
        case 0x35b528u: goto label_35b528;
        case 0x35b52cu: goto label_35b52c;
        case 0x35b530u: goto label_35b530;
        case 0x35b534u: goto label_35b534;
        case 0x35b538u: goto label_35b538;
        case 0x35b53cu: goto label_35b53c;
        case 0x35b540u: goto label_35b540;
        case 0x35b544u: goto label_35b544;
        case 0x35b548u: goto label_35b548;
        case 0x35b54cu: goto label_35b54c;
        case 0x35b550u: goto label_35b550;
        case 0x35b554u: goto label_35b554;
        case 0x35b558u: goto label_35b558;
        case 0x35b55cu: goto label_35b55c;
        case 0x35b560u: goto label_35b560;
        case 0x35b564u: goto label_35b564;
        case 0x35b568u: goto label_35b568;
        case 0x35b56cu: goto label_35b56c;
        case 0x35b570u: goto label_35b570;
        case 0x35b574u: goto label_35b574;
        case 0x35b578u: goto label_35b578;
        case 0x35b57cu: goto label_35b57c;
        case 0x35b580u: goto label_35b580;
        case 0x35b584u: goto label_35b584;
        case 0x35b588u: goto label_35b588;
        case 0x35b58cu: goto label_35b58c;
        case 0x35b590u: goto label_35b590;
        case 0x35b594u: goto label_35b594;
        case 0x35b598u: goto label_35b598;
        case 0x35b59cu: goto label_35b59c;
        case 0x35b5a0u: goto label_35b5a0;
        case 0x35b5a4u: goto label_35b5a4;
        case 0x35b5a8u: goto label_35b5a8;
        case 0x35b5acu: goto label_35b5ac;
        case 0x35b5b0u: goto label_35b5b0;
        case 0x35b5b4u: goto label_35b5b4;
        case 0x35b5b8u: goto label_35b5b8;
        case 0x35b5bcu: goto label_35b5bc;
        case 0x35b5c0u: goto label_35b5c0;
        case 0x35b5c4u: goto label_35b5c4;
        case 0x35b5c8u: goto label_35b5c8;
        case 0x35b5ccu: goto label_35b5cc;
        case 0x35b5d0u: goto label_35b5d0;
        case 0x35b5d4u: goto label_35b5d4;
        case 0x35b5d8u: goto label_35b5d8;
        case 0x35b5dcu: goto label_35b5dc;
        case 0x35b5e0u: goto label_35b5e0;
        case 0x35b5e4u: goto label_35b5e4;
        case 0x35b5e8u: goto label_35b5e8;
        case 0x35b5ecu: goto label_35b5ec;
        case 0x35b5f0u: goto label_35b5f0;
        case 0x35b5f4u: goto label_35b5f4;
        case 0x35b5f8u: goto label_35b5f8;
        case 0x35b5fcu: goto label_35b5fc;
        case 0x35b600u: goto label_35b600;
        case 0x35b604u: goto label_35b604;
        case 0x35b608u: goto label_35b608;
        case 0x35b60cu: goto label_35b60c;
        case 0x35b610u: goto label_35b610;
        case 0x35b614u: goto label_35b614;
        case 0x35b618u: goto label_35b618;
        case 0x35b61cu: goto label_35b61c;
        case 0x35b620u: goto label_35b620;
        case 0x35b624u: goto label_35b624;
        case 0x35b628u: goto label_35b628;
        case 0x35b62cu: goto label_35b62c;
        case 0x35b630u: goto label_35b630;
        case 0x35b634u: goto label_35b634;
        case 0x35b638u: goto label_35b638;
        case 0x35b63cu: goto label_35b63c;
        case 0x35b640u: goto label_35b640;
        case 0x35b644u: goto label_35b644;
        case 0x35b648u: goto label_35b648;
        case 0x35b64cu: goto label_35b64c;
        case 0x35b650u: goto label_35b650;
        case 0x35b654u: goto label_35b654;
        case 0x35b658u: goto label_35b658;
        case 0x35b65cu: goto label_35b65c;
        case 0x35b660u: goto label_35b660;
        case 0x35b664u: goto label_35b664;
        case 0x35b668u: goto label_35b668;
        case 0x35b66cu: goto label_35b66c;
        case 0x35b670u: goto label_35b670;
        case 0x35b674u: goto label_35b674;
        case 0x35b678u: goto label_35b678;
        case 0x35b67cu: goto label_35b67c;
        case 0x35b680u: goto label_35b680;
        case 0x35b684u: goto label_35b684;
        case 0x35b688u: goto label_35b688;
        case 0x35b68cu: goto label_35b68c;
        case 0x35b690u: goto label_35b690;
        case 0x35b694u: goto label_35b694;
        case 0x35b698u: goto label_35b698;
        case 0x35b69cu: goto label_35b69c;
        case 0x35b6a0u: goto label_35b6a0;
        case 0x35b6a4u: goto label_35b6a4;
        case 0x35b6a8u: goto label_35b6a8;
        case 0x35b6acu: goto label_35b6ac;
        case 0x35b6b0u: goto label_35b6b0;
        case 0x35b6b4u: goto label_35b6b4;
        case 0x35b6b8u: goto label_35b6b8;
        case 0x35b6bcu: goto label_35b6bc;
        case 0x35b6c0u: goto label_35b6c0;
        case 0x35b6c4u: goto label_35b6c4;
        case 0x35b6c8u: goto label_35b6c8;
        case 0x35b6ccu: goto label_35b6cc;
        case 0x35b6d0u: goto label_35b6d0;
        case 0x35b6d4u: goto label_35b6d4;
        case 0x35b6d8u: goto label_35b6d8;
        case 0x35b6dcu: goto label_35b6dc;
        case 0x35b6e0u: goto label_35b6e0;
        case 0x35b6e4u: goto label_35b6e4;
        case 0x35b6e8u: goto label_35b6e8;
        case 0x35b6ecu: goto label_35b6ec;
        case 0x35b6f0u: goto label_35b6f0;
        case 0x35b6f4u: goto label_35b6f4;
        case 0x35b6f8u: goto label_35b6f8;
        case 0x35b6fcu: goto label_35b6fc;
        case 0x35b700u: goto label_35b700;
        case 0x35b704u: goto label_35b704;
        case 0x35b708u: goto label_35b708;
        case 0x35b70cu: goto label_35b70c;
        case 0x35b710u: goto label_35b710;
        case 0x35b714u: goto label_35b714;
        case 0x35b718u: goto label_35b718;
        case 0x35b71cu: goto label_35b71c;
        case 0x35b720u: goto label_35b720;
        case 0x35b724u: goto label_35b724;
        case 0x35b728u: goto label_35b728;
        case 0x35b72cu: goto label_35b72c;
        case 0x35b730u: goto label_35b730;
        case 0x35b734u: goto label_35b734;
        case 0x35b738u: goto label_35b738;
        case 0x35b73cu: goto label_35b73c;
        case 0x35b740u: goto label_35b740;
        case 0x35b744u: goto label_35b744;
        case 0x35b748u: goto label_35b748;
        case 0x35b74cu: goto label_35b74c;
        case 0x35b750u: goto label_35b750;
        case 0x35b754u: goto label_35b754;
        case 0x35b758u: goto label_35b758;
        case 0x35b75cu: goto label_35b75c;
        case 0x35b760u: goto label_35b760;
        case 0x35b764u: goto label_35b764;
        case 0x35b768u: goto label_35b768;
        case 0x35b76cu: goto label_35b76c;
        default: break;
    }

    ctx->pc = 0x35af60u;

label_35af60:
    // 0x35af60: 0x3e00008  jr          $ra
label_35af64:
    if (ctx->pc == 0x35AF64u) {
        ctx->pc = 0x35AF64u;
            // 0x35af64: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x35AF68u;
        goto label_35af68;
    }
    ctx->pc = 0x35AF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AF60u;
            // 0x35af64: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35AF68u;
label_35af68:
    // 0x35af68: 0x0  nop
    ctx->pc = 0x35af68u;
    // NOP
label_35af6c:
    // 0x35af6c: 0x0  nop
    ctx->pc = 0x35af6cu;
    // NOP
label_35af70:
    // 0x35af70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_35af74:
    // 0x35af74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35af74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35af78:
    // 0x35af78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35af7c:
    // 0x35af7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35af80:
    // 0x35af80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35af84:
    // 0x35af84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35af84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35af88:
    // 0x35af88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35af8c:
    // 0x35af8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35af90:
    // 0x35af90: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x35af90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35af94:
    // 0x35af94: 0x5483002b  bnel        $a0, $v1, . + 4 + (0x2B << 2)
label_35af98:
    if (ctx->pc == 0x35AF98u) {
        ctx->pc = 0x35AF98u;
            // 0x35af98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x35AF9Cu;
        goto label_35af9c;
    }
    ctx->pc = 0x35AF94u;
    {
        const bool branch_taken_0x35af94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35af94) {
            ctx->pc = 0x35AF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35AF94u;
            // 0x35af98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35B044u;
            goto label_35b044;
        }
    }
    ctx->pc = 0x35AF9Cu;
label_35af9c:
    // 0x35af9c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x35af9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_35afa0:
    // 0x35afa0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_35afa4:
    if (ctx->pc == 0x35AFA4u) {
        ctx->pc = 0x35AFA4u;
            // 0x35afa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AFA8u;
        goto label_35afa8;
    }
    ctx->pc = 0x35AFA0u;
    {
        const bool branch_taken_0x35afa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AFA0u;
            // 0x35afa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35afa0) {
            ctx->pc = 0x35AFD0u;
            goto label_35afd0;
        }
    }
    ctx->pc = 0x35AFA8u;
label_35afa8:
    // 0x35afa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35afa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35afac:
    // 0x35afac: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x35afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_35afb0:
    // 0x35afb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_35afb4:
    // 0x35afb4: 0xc0d71f8  jal         func_35C7E0
label_35afb8:
    if (ctx->pc == 0x35AFB8u) {
        ctx->pc = 0x35AFB8u;
            // 0x35afb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x35AFBCu;
        goto label_35afbc;
    }
    ctx->pc = 0x35AFB4u;
    SET_GPR_U32(ctx, 31, 0x35AFBCu);
    ctx->pc = 0x35AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AFB4u;
            // 0x35afb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C7E0u;
    if (runtime->hasFunction(0x35C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x35C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AFBCu; }
        if (ctx->pc != 0x35AFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C7E0_0x35c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AFBCu; }
        if (ctx->pc != 0x35AFBCu) { return; }
    }
    ctx->pc = 0x35AFBCu;
label_35afbc:
    // 0x35afbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35afbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35afc0:
    // 0x35afc0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x35afc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_35afc4:
    // 0x35afc4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_35afc8:
    if (ctx->pc == 0x35AFC8u) {
        ctx->pc = 0x35AFC8u;
            // 0x35afc8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x35AFCCu;
        goto label_35afcc;
    }
    ctx->pc = 0x35AFC4u;
    {
        const bool branch_taken_0x35afc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AFC4u;
            // 0x35afc8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35afc4) {
            ctx->pc = 0x35AFACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35afac;
        }
    }
    ctx->pc = 0x35AFCCu;
label_35afcc:
    // 0x35afcc: 0x0  nop
    ctx->pc = 0x35afccu;
    // NOP
label_35afd0:
    // 0x35afd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35afd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35afd4:
    // 0x35afd4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x35afd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35afd8:
    // 0x35afd8: 0xc0d7098  jal         func_35C260
label_35afdc:
    if (ctx->pc == 0x35AFDCu) {
        ctx->pc = 0x35AFDCu;
            // 0x35afdc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x35AFE0u;
        goto label_35afe0;
    }
    ctx->pc = 0x35AFD8u;
    SET_GPR_U32(ctx, 31, 0x35AFE0u);
    ctx->pc = 0x35AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AFD8u;
            // 0x35afdc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C260u;
    if (runtime->hasFunction(0x35C260u)) {
        auto targetFn = runtime->lookupFunction(0x35C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AFE0u; }
        if (ctx->pc != 0x35AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C260_0x35c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AFE0u; }
        if (ctx->pc != 0x35AFE0u) { return; }
    }
    ctx->pc = 0x35AFE0u;
label_35afe0:
    // 0x35afe0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35afe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35afe4:
    // 0x35afe4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x35afe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_35afe8:
    // 0x35afe8: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x35afe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_35afec:
    // 0x35afec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_35aff0:
    if (ctx->pc == 0x35AFF0u) {
        ctx->pc = 0x35AFF4u;
        goto label_35aff4;
    }
    ctx->pc = 0x35AFECu;
    {
        const bool branch_taken_0x35afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35afec) {
            ctx->pc = 0x35AFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35afd8;
        }
    }
    ctx->pc = 0x35AFF4u;
label_35aff4:
    // 0x35aff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35aff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35aff8:
    // 0x35aff8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35affc:
    // 0x35affc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35b000:
    // 0x35b000: 0xaca338f0  sw          $v1, 0x38F0($a1)
    ctx->pc = 0x35b000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14576), GPR_U32(ctx, 3));
label_35b004:
    // 0x35b004: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35b008:
    // 0x35b008: 0xaca03904  sw          $zero, 0x3904($a1)
    ctx->pc = 0x35b008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14596), GPR_U32(ctx, 0));
label_35b00c:
    // 0x35b00c: 0x2c820064  sltiu       $v0, $a0, 0x64
    ctx->pc = 0x35b00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_35b010:
    // 0x35b010: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x35b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_35b014:
    // 0x35b014: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_35b018:
    if (ctx->pc == 0x35B018u) {
        ctx->pc = 0x35B01Cu;
        goto label_35b01c;
    }
    ctx->pc = 0x35B014u;
    {
        const bool branch_taken_0x35b014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b014) {
            ctx->pc = 0x35B000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35b000;
        }
    }
    ctx->pc = 0x35B01Cu;
label_35b01c:
    // 0x35b01c: 0x26626ab0  addiu       $v0, $s3, 0x6AB0
    ctx->pc = 0x35b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
label_35b020:
    // 0x35b020: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x35b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_35b024:
    // 0x35b024: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x35b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_35b028:
    // 0x35b028: 0x26656aa4  addiu       $a1, $s3, 0x6AA4
    ctx->pc = 0x35b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27300));
label_35b02c:
    // 0x35b02c: 0x8e626ab4  lw          $v0, 0x6AB4($s3)
    ctx->pc = 0x35b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27316)));
label_35b030:
    // 0x35b030: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x35b030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_35b034:
    // 0x35b034: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x35b034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_35b038:
    // 0x35b038: 0xc05827c  jal         func_1609F0
label_35b03c:
    if (ctx->pc == 0x35B03Cu) {
        ctx->pc = 0x35B03Cu;
            // 0x35b03c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x35B040u;
        goto label_35b040;
    }
    ctx->pc = 0x35B038u;
    SET_GPR_U32(ctx, 31, 0x35B040u);
    ctx->pc = 0x35B03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B038u;
            // 0x35b03c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B040u; }
        if (ctx->pc != 0x35B040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B040u; }
        if (ctx->pc != 0x35B040u) { return; }
    }
    ctx->pc = 0x35B040u;
label_35b040:
    // 0x35b040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35b044:
    // 0x35b044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35b044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35b048:
    // 0x35b048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35b048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35b04c:
    // 0x35b04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b050:
    // 0x35b050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b054:
    // 0x35b054: 0x3e00008  jr          $ra
label_35b058:
    if (ctx->pc == 0x35B058u) {
        ctx->pc = 0x35B058u;
            // 0x35b058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35B05Cu;
        goto label_35b05c;
    }
    ctx->pc = 0x35B054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B054u;
            // 0x35b058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B05Cu;
label_35b05c:
    // 0x35b05c: 0x0  nop
    ctx->pc = 0x35b05cu;
    // NOP
label_35b060:
    // 0x35b060: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x35b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_35b064:
    // 0x35b064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b068:
    // 0x35b068: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_35b06c:
    // 0x35b06c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35b070:
    // 0x35b070: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35b074:
    // 0x35b074: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x35b074u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_35b078:
    // 0x35b078: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35b07c:
    // 0x35b07c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35b080:
    // 0x35b080: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x35b080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_35b084:
    // 0x35b084: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35b088:
    // 0x35b088: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35b088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b08c:
    // 0x35b08c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35b090:
    // 0x35b090: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35b090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35b094:
    // 0x35b094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35b098:
    // 0x35b098: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35b098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_35b09c:
    // 0x35b09c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35b09cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35b0a0:
    // 0x35b0a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35b0a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35b0a4:
    // 0x35b0a4: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35b0a8:
    // 0x35b0a8: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
label_35b0ac:
    if (ctx->pc == 0x35B0ACu) {
        ctx->pc = 0x35B0ACu;
            // 0x35b0ac: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B0B0u;
        goto label_35b0b0;
    }
    ctx->pc = 0x35B0A8u;
    {
        const bool branch_taken_0x35b0a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B0A8u;
            // 0x35b0ac: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b0a8) {
            ctx->pc = 0x35B2F4u;
            goto label_35b2f4;
        }
    }
    ctx->pc = 0x35B0B0u;
label_35b0b0:
    // 0x35b0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b0b4:
    // 0x35b0b4: 0xc04f278  jal         func_13C9E0
label_35b0b8:
    if (ctx->pc == 0x35B0B8u) {
        ctx->pc = 0x35B0B8u;
            // 0x35b0b8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x35B0BCu;
        goto label_35b0bc;
    }
    ctx->pc = 0x35B0B4u;
    SET_GPR_U32(ctx, 31, 0x35B0BCu);
    ctx->pc = 0x35B0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B0B4u;
            // 0x35b0b8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0BCu; }
        if (ctx->pc != 0x35B0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0BCu; }
        if (ctx->pc != 0x35B0BCu) { return; }
    }
    ctx->pc = 0x35B0BCu;
label_35b0bc:
    // 0x35b0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b0c0:
    // 0x35b0c0: 0xc04ce80  jal         func_133A00
label_35b0c4:
    if (ctx->pc == 0x35B0C4u) {
        ctx->pc = 0x35B0C4u;
            // 0x35b0c4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x35B0C8u;
        goto label_35b0c8;
    }
    ctx->pc = 0x35B0C0u;
    SET_GPR_U32(ctx, 31, 0x35B0C8u);
    ctx->pc = 0x35B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B0C0u;
            // 0x35b0c4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0C8u; }
        if (ctx->pc != 0x35B0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0C8u; }
        if (ctx->pc != 0x35B0C8u) { return; }
    }
    ctx->pc = 0x35B0C8u;
label_35b0c8:
    // 0x35b0c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b0cc:
    // 0x35b0cc: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x35b0ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b0d0:
    // 0x35b0d0: 0xc4554008  lwc1        $f21, 0x4008($v0)
    ctx->pc = 0x35b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35b0d4:
    // 0x35b0d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35b0d8:
    // 0x35b0d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b0dc:
    // 0x35b0dc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x35b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_35b0e0:
    // 0x35b0e0: 0xc07698c  jal         func_1DA630
label_35b0e4:
    if (ctx->pc == 0x35B0E4u) {
        ctx->pc = 0x35B0E4u;
            // 0x35b0e4: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x35B0E8u;
        goto label_35b0e8;
    }
    ctx->pc = 0x35B0E0u;
    SET_GPR_U32(ctx, 31, 0x35B0E8u);
    ctx->pc = 0x35B0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B0E0u;
            // 0x35b0e4: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0E8u; }
        if (ctx->pc != 0x35B0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B0E8u; }
        if (ctx->pc != 0x35B0E8u) { return; }
    }
    ctx->pc = 0x35B0E8u;
label_35b0e8:
    // 0x35b0e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35b0ec:
    // 0x35b0ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_35b0f0:
    if (ctx->pc == 0x35B0F0u) {
        ctx->pc = 0x35B0F4u;
        goto label_35b0f4;
    }
    ctx->pc = 0x35B0ECu;
    {
        const bool branch_taken_0x35b0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b0ec) {
            ctx->pc = 0x35B108u;
            goto label_35b108;
        }
    }
    ctx->pc = 0x35B0F4u;
label_35b0f4:
    // 0x35b0f4: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x35b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
label_35b0f8:
    // 0x35b0f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35b0fc:
    // 0x35b0fc: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x35b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_35b100:
    // 0x35b100: 0x10000034  b           . + 4 + (0x34 << 2)
label_35b104:
    if (ctx->pc == 0x35B104u) {
        ctx->pc = 0x35B104u;
            // 0x35b104: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->pc = 0x35B108u;
        goto label_35b108;
    }
    ctx->pc = 0x35B100u;
    {
        const bool branch_taken_0x35b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B100u;
            // 0x35b104: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b100) {
            ctx->pc = 0x35B1D4u;
            goto label_35b1d4;
        }
    }
    ctx->pc = 0x35B108u;
label_35b108:
    // 0x35b108: 0xc0576f4  jal         func_15DBD0
label_35b10c:
    if (ctx->pc == 0x35B10Cu) {
        ctx->pc = 0x35B110u;
        goto label_35b110;
    }
    ctx->pc = 0x35B108u;
    SET_GPR_U32(ctx, 31, 0x35B110u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B110u; }
        if (ctx->pc != 0x35B110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B110u; }
        if (ctx->pc != 0x35B110u) { return; }
    }
    ctx->pc = 0x35B110u;
label_35b110:
    // 0x35b110: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35b110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35b114:
    // 0x35b114: 0xc076984  jal         func_1DA610
label_35b118:
    if (ctx->pc == 0x35B118u) {
        ctx->pc = 0x35B118u;
            // 0x35b118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B11Cu;
        goto label_35b11c;
    }
    ctx->pc = 0x35B114u;
    SET_GPR_U32(ctx, 31, 0x35B11Cu);
    ctx->pc = 0x35B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B114u;
            // 0x35b118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B11Cu; }
        if (ctx->pc != 0x35B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B11Cu; }
        if (ctx->pc != 0x35B11Cu) { return; }
    }
    ctx->pc = 0x35B11Cu;
label_35b11c:
    // 0x35b11c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35b11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b120:
    // 0x35b120: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35b124:
    // 0x35b124: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b128:
    // 0x35b128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b12c:
    // 0x35b12c: 0xc4421800  lwc1        $f2, 0x1800($v0)
    ctx->pc = 0x35b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b130:
    // 0x35b130: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35b130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b134:
    // 0x35b134: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b138:
    // 0x35b138: 0xc4411808  lwc1        $f1, 0x1808($v0)
    ctx->pc = 0x35b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b13c:
    // 0x35b13c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x35b13cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_35b140:
    // 0x35b140: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b144:
    // 0x35b144: 0xc440180c  lwc1        $f0, 0x180C($v0)
    ctx->pc = 0x35b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b148:
    // 0x35b148: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x35b148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_35b14c:
    // 0x35b14c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b150:
    // 0x35b150: 0x8c421804  lw          $v0, 0x1804($v0)
    ctx->pc = 0x35b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
label_35b154:
    // 0x35b154: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x35b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_35b158:
    // 0x35b158: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x35b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_35b15c:
    // 0x35b15c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x35b15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b160:
    // 0x35b160: 0xc04cca0  jal         func_133280
label_35b164:
    if (ctx->pc == 0x35B164u) {
        ctx->pc = 0x35B164u;
            // 0x35b164: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x35B168u;
        goto label_35b168;
    }
    ctx->pc = 0x35B160u;
    SET_GPR_U32(ctx, 31, 0x35B168u);
    ctx->pc = 0x35B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B160u;
            // 0x35b164: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B168u; }
        if (ctx->pc != 0x35B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B168u; }
        if (ctx->pc != 0x35B168u) { return; }
    }
    ctx->pc = 0x35B168u;
label_35b168:
    // 0x35b168: 0xc076980  jal         func_1DA600
label_35b16c:
    if (ctx->pc == 0x35B16Cu) {
        ctx->pc = 0x35B16Cu;
            // 0x35b16c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B170u;
        goto label_35b170;
    }
    ctx->pc = 0x35B168u;
    SET_GPR_U32(ctx, 31, 0x35B170u);
    ctx->pc = 0x35B16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B168u;
            // 0x35b16c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B170u; }
        if (ctx->pc != 0x35B170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B170u; }
        if (ctx->pc != 0x35B170u) { return; }
    }
    ctx->pc = 0x35B170u;
label_35b170:
    // 0x35b170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b174:
    // 0x35b174: 0xc04cc34  jal         func_1330D0
label_35b178:
    if (ctx->pc == 0x35B178u) {
        ctx->pc = 0x35B178u;
            // 0x35b178: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35B17Cu;
        goto label_35b17c;
    }
    ctx->pc = 0x35B174u;
    SET_GPR_U32(ctx, 31, 0x35B17Cu);
    ctx->pc = 0x35B178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B174u;
            // 0x35b178: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B17Cu; }
        if (ctx->pc != 0x35B17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B17Cu; }
        if (ctx->pc != 0x35B17Cu) { return; }
    }
    ctx->pc = 0x35B17Cu;
label_35b17c:
    // 0x35b17c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35b17cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_35b180:
    // 0x35b180: 0xc04c710  jal         func_131C40
label_35b184:
    if (ctx->pc == 0x35B184u) {
        ctx->pc = 0x35B184u;
            // 0x35b184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x35B188u;
        goto label_35b188;
    }
    ctx->pc = 0x35B180u;
    SET_GPR_U32(ctx, 31, 0x35B188u);
    ctx->pc = 0x35B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B180u;
            // 0x35b184: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B188u; }
        if (ctx->pc != 0x35B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B188u; }
        if (ctx->pc != 0x35B188u) { return; }
    }
    ctx->pc = 0x35B188u;
label_35b188:
    // 0x35b188: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x35b188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b18c:
    // 0x35b18c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_35b190:
    if (ctx->pc == 0x35B190u) {
        ctx->pc = 0x35B190u;
            // 0x35b190: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->pc = 0x35B194u;
        goto label_35b194;
    }
    ctx->pc = 0x35B18Cu;
    {
        const bool branch_taken_0x35b18c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B18Cu;
            // 0x35b190: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b18c) {
            ctx->pc = 0x35B19Cu;
            goto label_35b19c;
        }
    }
    ctx->pc = 0x35B194u;
label_35b194:
    // 0x35b194: 0x1000000f  b           . + 4 + (0xF << 2)
label_35b198:
    if (ctx->pc == 0x35B198u) {
        ctx->pc = 0x35B198u;
            // 0x35b198: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x35B19Cu;
        goto label_35b19c;
    }
    ctx->pc = 0x35B194u;
    {
        const bool branch_taken_0x35b194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B194u;
            // 0x35b198: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b194) {
            ctx->pc = 0x35B1D4u;
            goto label_35b1d4;
        }
    }
    ctx->pc = 0x35B19Cu;
label_35b19c:
    // 0x35b19c: 0xc07697c  jal         func_1DA5F0
label_35b1a0:
    if (ctx->pc == 0x35B1A0u) {
        ctx->pc = 0x35B1A0u;
            // 0x35b1a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B1A4u;
        goto label_35b1a4;
    }
    ctx->pc = 0x35B19Cu;
    SET_GPR_U32(ctx, 31, 0x35B1A4u);
    ctx->pc = 0x35B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B19Cu;
            // 0x35b1a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1A4u; }
        if (ctx->pc != 0x35B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1A4u; }
        if (ctx->pc != 0x35B1A4u) { return; }
    }
    ctx->pc = 0x35B1A4u;
label_35b1a4:
    // 0x35b1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b1a8:
    // 0x35b1a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35b1ac:
    // 0x35b1ac: 0xc04cd60  jal         func_133580
label_35b1b0:
    if (ctx->pc == 0x35B1B0u) {
        ctx->pc = 0x35B1B0u;
            // 0x35b1b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B1B4u;
        goto label_35b1b4;
    }
    ctx->pc = 0x35B1ACu;
    SET_GPR_U32(ctx, 31, 0x35B1B4u);
    ctx->pc = 0x35B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B1ACu;
            // 0x35b1b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1B4u; }
        if (ctx->pc != 0x35B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1B4u; }
        if (ctx->pc != 0x35B1B4u) { return; }
    }
    ctx->pc = 0x35B1B4u;
label_35b1b4:
    // 0x35b1b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35b1b8:
    // 0x35b1b8: 0xc04c650  jal         func_131940
label_35b1bc:
    if (ctx->pc == 0x35B1BCu) {
        ctx->pc = 0x35B1BCu;
            // 0x35b1bc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35B1C0u;
        goto label_35b1c0;
    }
    ctx->pc = 0x35B1B8u;
    SET_GPR_U32(ctx, 31, 0x35B1C0u);
    ctx->pc = 0x35B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B1B8u;
            // 0x35b1bc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1C0u; }
        if (ctx->pc != 0x35B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B1C0u; }
        if (ctx->pc != 0x35B1C0u) { return; }
    }
    ctx->pc = 0x35B1C0u;
label_35b1c0:
    // 0x35b1c0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x35b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_35b1c4:
    // 0x35b1c4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x35b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b1c8:
    // 0x35b1c8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x35b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_35b1cc:
    // 0x35b1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35b1d0:
    // 0x35b1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35b1d4:
    // 0x35b1d4: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x35b1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_35b1d8:
    // 0x35b1d8: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_35b1dc:
    if (ctx->pc == 0x35B1DCu) {
        ctx->pc = 0x35B1DCu;
            // 0x35b1dc: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->pc = 0x35B1E0u;
        goto label_35b1e0;
    }
    ctx->pc = 0x35B1D8u;
    {
        const bool branch_taken_0x35b1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B1D8u;
            // 0x35b1dc: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1d8) {
            ctx->pc = 0x35B2F4u;
            goto label_35b2f4;
        }
    }
    ctx->pc = 0x35B1E0u;
label_35b1e0:
    // 0x35b1e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b1e4:
    // 0x35b1e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35b1e8:
    // 0x35b1e8: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x35b1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_35b1ec:
    // 0x35b1ec: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x35b1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35b1f0:
    // 0x35b1f0: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x35b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_35b1f4:
    // 0x35b1f4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35b1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35b1f8:
    // 0x35b1f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b1fc:
    // 0x35b1fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b200:
    // 0x35b200: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x35b200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_35b204:
    // 0x35b204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b208:
    // 0x35b208: 0x8c45e360  lw          $a1, -0x1CA0($v0)
    ctx->pc = 0x35b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_35b20c:
    // 0x35b20c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_35b210:
    // 0x35b210: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x35b210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_35b214:
    // 0x35b214: 0xa7a821  addu        $s5, $a1, $a3
    ctx->pc = 0x35b214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_35b218:
    // 0x35b218: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x35b218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_35b21c:
    // 0x35b21c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x35b21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35b220:
    // 0x35b220: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35b224:
    // 0x35b224: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x35b224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
label_35b228:
    // 0x35b228: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35b22c:
    // 0x35b22c: 0x8cc6e3d8  lw          $a2, -0x1C28($a2)
    ctx->pc = 0x35b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960088)));
label_35b230:
    // 0x35b230: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x35b230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_35b234:
    // 0x35b234: 0x8caae378  lw          $t2, -0x1C88($a1)
    ctx->pc = 0x35b234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
label_35b238:
    // 0x35b238: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x35b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_35b23c:
    // 0x35b23c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x35b23cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35b240:
    // 0x35b240: 0x14ba021  addu        $s4, $t2, $t3
    ctx->pc = 0x35b240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_35b244:
    // 0x35b244: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35b244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35b248:
    // 0x35b248: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35b24c:
    // 0x35b24c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b250:
    // 0x35b250: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x35b250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_35b254:
    // 0x35b254: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x35b254u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35b258:
    // 0x35b258: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x35b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_35b25c:
    // 0x35b25c: 0x8d23e3d8  lw          $v1, -0x1C28($t1)
    ctx->pc = 0x35b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_35b260:
    // 0x35b260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35b264:
    // 0x35b264: 0xaca2e3c0  sw          $v0, -0x1C40($a1)
    ctx->pc = 0x35b264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960064), GPR_U32(ctx, 2));
label_35b268:
    // 0x35b268: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_35b26c:
    // 0x35b26c: 0xad03e3d8  sw          $v1, -0x1C28($t0)
    ctx->pc = 0x35b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 3));
label_35b270:
    // 0x35b270: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b274:
    // 0x35b274: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35b278:
    // 0x35b278: 0xc04e4a4  jal         func_139290
label_35b27c:
    if (ctx->pc == 0x35B27Cu) {
        ctx->pc = 0x35B27Cu;
            // 0x35b27c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B280u;
        goto label_35b280;
    }
    ctx->pc = 0x35B278u;
    SET_GPR_U32(ctx, 31, 0x35B280u);
    ctx->pc = 0x35B27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B278u;
            // 0x35b27c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B280u; }
        if (ctx->pc != 0x35B280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B280u; }
        if (ctx->pc != 0x35B280u) { return; }
    }
    ctx->pc = 0x35B280u;
label_35b280:
    // 0x35b280: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35b280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35b284:
    // 0x35b284: 0xc44144d8  lwc1        $f1, 0x44D8($v0)
    ctx->pc = 0x35b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b288:
    // 0x35b288: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x35b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b28c:
    // 0x35b28c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35b28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b290:
    // 0x35b290: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_35b294:
    if (ctx->pc == 0x35B294u) {
        ctx->pc = 0x35B294u;
            // 0x35b294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35B298u;
        goto label_35b298;
    }
    ctx->pc = 0x35B290u;
    {
        const bool branch_taken_0x35b290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B290u;
            // 0x35b294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b290) {
            ctx->pc = 0x35B29Cu;
            goto label_35b29c;
        }
    }
    ctx->pc = 0x35B298u;
label_35b298:
    // 0x35b298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b29c:
    // 0x35b29c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35b29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b2a0:
    // 0x35b2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b2a4:
    // 0x35b2a4: 0x161280  sll         $v0, $s6, 10
    ctx->pc = 0x35b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 10));
label_35b2a8:
    // 0x35b2a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35b2ac:
    // 0x35b2ac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x35b2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35b2b0:
    // 0x35b2b0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35b2b4:
    // 0x35b2b4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x35b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_35b2b8:
    // 0x35b2b8: 0xc04cdd0  jal         func_133740
label_35b2bc:
    if (ctx->pc == 0x35B2BCu) {
        ctx->pc = 0x35B2BCu;
            // 0x35b2bc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x35B2C0u;
        goto label_35b2c0;
    }
    ctx->pc = 0x35B2B8u;
    SET_GPR_U32(ctx, 31, 0x35B2C0u);
    ctx->pc = 0x35B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B2B8u;
            // 0x35b2bc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2C0u; }
        if (ctx->pc != 0x35B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2C0u; }
        if (ctx->pc != 0x35B2C0u) { return; }
    }
    ctx->pc = 0x35B2C0u;
label_35b2c0:
    // 0x35b2c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35b2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b2c4:
    // 0x35b2c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35b2c8:
    // 0x35b2c8: 0xc04cd60  jal         func_133580
label_35b2cc:
    if (ctx->pc == 0x35B2CCu) {
        ctx->pc = 0x35B2CCu;
            // 0x35b2cc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x35B2D0u;
        goto label_35b2d0;
    }
    ctx->pc = 0x35B2C8u;
    SET_GPR_U32(ctx, 31, 0x35B2D0u);
    ctx->pc = 0x35B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B2C8u;
            // 0x35b2cc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2D0u; }
        if (ctx->pc != 0x35B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2D0u; }
        if (ctx->pc != 0x35B2D0u) { return; }
    }
    ctx->pc = 0x35B2D0u;
label_35b2d0:
    // 0x35b2d0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x35b2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35b2d4:
    // 0x35b2d4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x35b2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_35b2d8:
    // 0x35b2d8: 0x320f809  jalr        $t9
label_35b2dc:
    if (ctx->pc == 0x35B2DCu) {
        ctx->pc = 0x35B2DCu;
            // 0x35b2dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B2E0u;
        goto label_35b2e0;
    }
    ctx->pc = 0x35B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35B2E0u);
        ctx->pc = 0x35B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B2D8u;
            // 0x35b2dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35B2E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35B2E0u; }
            if (ctx->pc != 0x35B2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x35B2E0u;
label_35b2e0:
    // 0x35b2e0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x35b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b2e4:
    // 0x35b2e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35b2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35b2e8:
    // 0x35b2e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35b2ec:
    // 0x35b2ec: 0xc054fd4  jal         func_153F50
label_35b2f0:
    if (ctx->pc == 0x35B2F0u) {
        ctx->pc = 0x35B2F0u;
            // 0x35b2f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B2F4u;
        goto label_35b2f4;
    }
    ctx->pc = 0x35B2ECu;
    SET_GPR_U32(ctx, 31, 0x35B2F4u);
    ctx->pc = 0x35B2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B2ECu;
            // 0x35b2f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2F4u; }
        if (ctx->pc != 0x35B2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B2F4u; }
        if (ctx->pc != 0x35B2F4u) { return; }
    }
    ctx->pc = 0x35B2F4u;
label_35b2f4:
    // 0x35b2f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x35b2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_35b2f8:
    // 0x35b2f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35b2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35b2fc:
    // 0x35b2fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35b2fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35b300:
    // 0x35b300: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35b304:
    // 0x35b304: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35b304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35b308:
    // 0x35b308: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35b308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35b30c:
    // 0x35b30c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35b30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35b310:
    // 0x35b310: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35b310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35b314:
    // 0x35b314: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35b314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35b318:
    // 0x35b318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b31c:
    // 0x35b31c: 0x3e00008  jr          $ra
label_35b320:
    if (ctx->pc == 0x35B320u) {
        ctx->pc = 0x35B320u;
            // 0x35b320: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x35B324u;
        goto label_35b324;
    }
    ctx->pc = 0x35B31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B31Cu;
            // 0x35b320: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B324u;
label_35b324:
    // 0x35b324: 0x0  nop
    ctx->pc = 0x35b324u;
    // NOP
label_35b328:
    // 0x35b328: 0x0  nop
    ctx->pc = 0x35b328u;
    // NOP
label_35b32c:
    // 0x35b32c: 0x0  nop
    ctx->pc = 0x35b32cu;
    // NOP
label_35b330:
    // 0x35b330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_35b334:
    // 0x35b334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b338:
    // 0x35b338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35b33c:
    // 0x35b33c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35b340:
    // 0x35b340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35b344:
    // 0x35b344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35b348:
    // 0x35b348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35b348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b34c:
    // 0x35b34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35b350:
    // 0x35b350: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x35b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35b354:
    // 0x35b354: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_35b358:
    if (ctx->pc == 0x35B358u) {
        ctx->pc = 0x35B358u;
            // 0x35b358: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B35Cu;
        goto label_35b35c;
    }
    ctx->pc = 0x35B354u;
    {
        const bool branch_taken_0x35b354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B354u;
            // 0x35b358: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b354) {
            ctx->pc = 0x35B394u;
            goto label_35b394;
        }
    }
    ctx->pc = 0x35B35Cu;
label_35b35c:
    // 0x35b35c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35b360:
    if (ctx->pc == 0x35B360u) {
        ctx->pc = 0x35B364u;
        goto label_35b364;
    }
    ctx->pc = 0x35B35Cu;
    {
        const bool branch_taken_0x35b35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b35c) {
            ctx->pc = 0x35B36Cu;
            goto label_35b36c;
        }
    }
    ctx->pc = 0x35B364u;
label_35b364:
    // 0x35b364: 0x1000005b  b           . + 4 + (0x5B << 2)
label_35b368:
    if (ctx->pc == 0x35B368u) {
        ctx->pc = 0x35B368u;
            // 0x35b368: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B36Cu;
        goto label_35b36c;
    }
    ctx->pc = 0x35B364u;
    {
        const bool branch_taken_0x35b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B364u;
            // 0x35b368: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b364) {
            ctx->pc = 0x35B4D4u;
            goto label_35b4d4;
        }
    }
    ctx->pc = 0x35B36Cu;
label_35b36c:
    // 0x35b36c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35b370:
    // 0x35b370: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35b374:
    // 0x35b374: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x35b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b378:
    // 0x35b378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35b378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b37c:
    // 0x35b37c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x35b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b380:
    // 0x35b380: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35b380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_35b384:
    // 0x35b384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35b384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b388:
    // 0x35b388: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_35b38c:
    if (ctx->pc == 0x35B38Cu) {
        ctx->pc = 0x35B38Cu;
            // 0x35b38c: 0xe6410054  swc1        $f1, 0x54($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->pc = 0x35B390u;
        goto label_35b390;
    }
    ctx->pc = 0x35B388u;
    {
        const bool branch_taken_0x35b388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B388u;
            // 0x35b38c: 0xe6410054  swc1        $f1, 0x54($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b388) {
            ctx->pc = 0x35B4D0u;
            goto label_35b4d0;
        }
    }
    ctx->pc = 0x35B390u;
label_35b390:
    // 0x35b390: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x35b390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_35b394:
    // 0x35b394: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x35b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_35b398:
    // 0x35b398: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35b39c:
    // 0x35b39c: 0x244244f0  addiu       $v0, $v0, 0x44F0
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17648));
label_35b3a0:
    // 0x35b3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35b3a4:
    // 0x35b3a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_35b3a8:
    // 0x35b3a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35b3ac:
    // 0x35b3ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35b3b0:
    // 0x35b3b0: 0xc0408c8  jal         func_102320
label_35b3b4:
    if (ctx->pc == 0x35B3B4u) {
        ctx->pc = 0x35B3B4u;
            // 0x35b3b4: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35B3B8u;
        goto label_35b3b8;
    }
    ctx->pc = 0x35B3B0u;
    SET_GPR_U32(ctx, 31, 0x35B3B8u);
    ctx->pc = 0x35B3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B3B0u;
            // 0x35b3b4: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B3B8u; }
        if (ctx->pc != 0x35B3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B3B8u; }
        if (ctx->pc != 0x35B3B8u) { return; }
    }
    ctx->pc = 0x35B3B8u;
label_35b3b8:
    // 0x35b3b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x35b3b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b3bc:
    // 0x35b3bc: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_35b3c0:
    if (ctx->pc == 0x35B3C0u) {
        ctx->pc = 0x35B3C4u;
        goto label_35b3c4;
    }
    ctx->pc = 0x35B3BCu;
    {
        const bool branch_taken_0x35b3bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b3bc) {
            ctx->pc = 0x35B4A4u;
            goto label_35b4a4;
        }
    }
    ctx->pc = 0x35B3C4u;
label_35b3c4:
    // 0x35b3c4: 0x8e500064  lw          $s0, 0x64($s2)
    ctx->pc = 0x35b3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_35b3c8:
    // 0x35b3c8: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x35b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_35b3cc:
    // 0x35b3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b3d0:
    // 0x35b3d0: 0xc075ecc  jal         func_1D7B30
label_35b3d4:
    if (ctx->pc == 0x35B3D4u) {
        ctx->pc = 0x35B3D4u;
            // 0x35b3d4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35B3D8u;
        goto label_35b3d8;
    }
    ctx->pc = 0x35B3D0u;
    SET_GPR_U32(ctx, 31, 0x35B3D8u);
    ctx->pc = 0x35B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B3D0u;
            // 0x35b3d4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B3D8u; }
        if (ctx->pc != 0x35B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B3D8u; }
        if (ctx->pc != 0x35B3D8u) { return; }
    }
    ctx->pc = 0x35B3D8u;
label_35b3d8:
    // 0x35b3d8: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x35b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35b3dc:
    // 0x35b3dc: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x35b3dcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35b3e0:
    // 0x35b3e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35b3e4:
    if (ctx->pc == 0x35B3E4u) {
        ctx->pc = 0x35B3E4u;
            // 0x35b3e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B3E8u;
        goto label_35b3e8;
    }
    ctx->pc = 0x35B3E0u;
    {
        const bool branch_taken_0x35b3e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B3E0u;
            // 0x35b3e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3e0) {
            ctx->pc = 0x35B3F8u;
            goto label_35b3f8;
        }
    }
    ctx->pc = 0x35B3E8u;
label_35b3e8:
    // 0x35b3e8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35b3e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35b3ec:
    // 0x35b3ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35b3f0:
    if (ctx->pc == 0x35B3F0u) {
        ctx->pc = 0x35B3F4u;
        goto label_35b3f4;
    }
    ctx->pc = 0x35B3ECu;
    {
        const bool branch_taken_0x35b3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b3ec) {
            ctx->pc = 0x35B3F8u;
            goto label_35b3f8;
        }
    }
    ctx->pc = 0x35B3F4u;
label_35b3f4:
    // 0x35b3f4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x35b3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35b3f8:
    // 0x35b3f8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35b3fc:
    if (ctx->pc == 0x35B3FCu) {
        ctx->pc = 0x35B400u;
        goto label_35b400;
    }
    ctx->pc = 0x35B3F8u;
    {
        const bool branch_taken_0x35b3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b3f8) {
            ctx->pc = 0x35B414u;
            goto label_35b414;
        }
    }
    ctx->pc = 0x35B400u;
label_35b400:
    // 0x35b400: 0xc075eb4  jal         func_1D7AD0
label_35b404:
    if (ctx->pc == 0x35B404u) {
        ctx->pc = 0x35B404u;
            // 0x35b404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B408u;
        goto label_35b408;
    }
    ctx->pc = 0x35B400u;
    SET_GPR_U32(ctx, 31, 0x35B408u);
    ctx->pc = 0x35B404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B400u;
            // 0x35b404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B408u; }
        if (ctx->pc != 0x35B408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B408u; }
        if (ctx->pc != 0x35B408u) { return; }
    }
    ctx->pc = 0x35B408u;
label_35b408:
    // 0x35b408: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35b40c:
    if (ctx->pc == 0x35B40Cu) {
        ctx->pc = 0x35B410u;
        goto label_35b410;
    }
    ctx->pc = 0x35B408u;
    {
        const bool branch_taken_0x35b408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b408) {
            ctx->pc = 0x35B414u;
            goto label_35b414;
        }
    }
    ctx->pc = 0x35B410u;
label_35b410:
    // 0x35b410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35b410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b414:
    // 0x35b414: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_35b418:
    if (ctx->pc == 0x35B418u) {
        ctx->pc = 0x35B41Cu;
        goto label_35b41c;
    }
    ctx->pc = 0x35B414u;
    {
        const bool branch_taken_0x35b414 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b414) {
            ctx->pc = 0x35B42Cu;
            goto label_35b42c;
        }
    }
    ctx->pc = 0x35B41Cu;
label_35b41c:
    // 0x35b41c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x35b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35b420:
    // 0x35b420: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35b424:
    // 0x35b424: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_35b428:
    if (ctx->pc == 0x35B428u) {
        ctx->pc = 0x35B428u;
            // 0x35b428: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x35B42Cu;
        goto label_35b42c;
    }
    ctx->pc = 0x35B424u;
    {
        const bool branch_taken_0x35b424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b424) {
            ctx->pc = 0x35B428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35B424u;
            // 0x35b428: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35B454u;
            goto label_35b454;
        }
    }
    ctx->pc = 0x35B42Cu;
label_35b42c:
    // 0x35b42c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b430:
    // 0x35b430: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x35b430u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_35b434:
    // 0x35b434: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_35b438:
    // 0x35b438: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35b43c:
    // 0x35b43c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x35b43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_35b440:
    // 0x35b440: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x35b440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_35b444:
    // 0x35b444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35b444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b448:
    // 0x35b448: 0xc0bb404  jal         func_2ED010
label_35b44c:
    if (ctx->pc == 0x35B44Cu) {
        ctx->pc = 0x35B44Cu;
            // 0x35b44c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35B450u;
        goto label_35b450;
    }
    ctx->pc = 0x35B448u;
    SET_GPR_U32(ctx, 31, 0x35B450u);
    ctx->pc = 0x35B44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B448u;
            // 0x35b44c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B450u; }
        if (ctx->pc != 0x35B450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B450u; }
        if (ctx->pc != 0x35B450u) { return; }
    }
    ctx->pc = 0x35B450u;
label_35b450:
    // 0x35b450: 0x8e100d60  lw          $s0, 0xD60($s0)
    ctx->pc = 0x35b450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_35b454:
    // 0x35b454: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x35b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_35b458:
    // 0x35b458: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x35b458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_35b45c:
    // 0x35b45c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35b45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35b460:
    // 0x35b460: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x35b460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_35b464:
    // 0x35b464: 0x320f809  jalr        $t9
label_35b468:
    if (ctx->pc == 0x35B468u) {
        ctx->pc = 0x35B468u;
            // 0x35b468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B46Cu;
        goto label_35b46c;
    }
    ctx->pc = 0x35B464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35B46Cu);
        ctx->pc = 0x35B468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B464u;
            // 0x35b468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35B46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35B46Cu; }
            if (ctx->pc != 0x35B46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35B46Cu;
label_35b46c:
    // 0x35b46c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35b46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35b470:
    // 0x35b470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b474:
    // 0x35b474: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x35b474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35b478:
    // 0x35b478: 0x320f809  jalr        $t9
label_35b47c:
    if (ctx->pc == 0x35B47Cu) {
        ctx->pc = 0x35B47Cu;
            // 0x35b47c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35B480u;
        goto label_35b480;
    }
    ctx->pc = 0x35B478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35B480u);
        ctx->pc = 0x35B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B478u;
            // 0x35b47c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35B480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35B480u; }
            if (ctx->pc != 0x35B480u) { return; }
        }
        }
    }
    ctx->pc = 0x35B480u;
label_35b480:
    // 0x35b480: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x35b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_35b484:
    // 0x35b484: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35b488:
    if (ctx->pc == 0x35B488u) {
        ctx->pc = 0x35B488u;
            // 0x35b488: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x35B48Cu;
        goto label_35b48c;
    }
    ctx->pc = 0x35B484u;
    {
        const bool branch_taken_0x35b484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b484) {
            ctx->pc = 0x35B488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35B484u;
            // 0x35b488: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35B4A0u;
            goto label_35b4a0;
        }
    }
    ctx->pc = 0x35B48Cu;
label_35b48c:
    // 0x35b48c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35b48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35b490:
    // 0x35b490: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x35b490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_35b494:
    // 0x35b494: 0x320f809  jalr        $t9
label_35b498:
    if (ctx->pc == 0x35B498u) {
        ctx->pc = 0x35B49Cu;
        goto label_35b49c;
    }
    ctx->pc = 0x35B494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35B49Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35B49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35B49Cu; }
            if (ctx->pc != 0x35B49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35B49Cu;
label_35b49c:
    // 0x35b49c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35b4a0:
    // 0x35b4a0: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x35b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_35b4a4:
    // 0x35b4a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b4a8:
    // 0x35b4a8: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x35b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_35b4ac:
    // 0x35b4ac: 0x8c420e48  lw          $v0, 0xE48($v0)
    ctx->pc = 0x35b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35b4b0:
    // 0x35b4b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b4b4:
    // 0x35b4b4: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x35b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_35b4b8:
    // 0x35b4b8: 0x8c436ac0  lw          $v1, 0x6AC0($v0)
    ctx->pc = 0x35b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27328)));
label_35b4bc:
    // 0x35b4bc: 0x24446ab8  addiu       $a0, $v0, 0x6AB8
    ctx->pc = 0x35b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27320));
label_35b4c0:
    // 0x35b4c0: 0x8c426ac4  lw          $v0, 0x6AC4($v0)
    ctx->pc = 0x35b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27332)));
label_35b4c4:
    // 0x35b4c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35b4c8:
    // 0x35b4c8: 0xc0b4904  jal         func_2D2410
label_35b4cc:
    if (ctx->pc == 0x35B4CCu) {
        ctx->pc = 0x35B4CCu;
            // 0x35b4cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35B4D0u;
        goto label_35b4d0;
    }
    ctx->pc = 0x35B4C8u;
    SET_GPR_U32(ctx, 31, 0x35B4D0u);
    ctx->pc = 0x35B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B4C8u;
            // 0x35b4cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B4D0u; }
        if (ctx->pc != 0x35B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B4D0u; }
        if (ctx->pc != 0x35B4D0u) { return; }
    }
    ctx->pc = 0x35B4D0u;
label_35b4d0:
    // 0x35b4d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x35b4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b4d4:
    // 0x35b4d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35b4d8:
    // 0x35b4d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35b4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35b4dc:
    // 0x35b4dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35b4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35b4e0:
    // 0x35b4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b4e4:
    // 0x35b4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b4e8:
    // 0x35b4e8: 0x3e00008  jr          $ra
label_35b4ec:
    if (ctx->pc == 0x35B4ECu) {
        ctx->pc = 0x35B4ECu;
            // 0x35b4ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35B4F0u;
        goto label_35b4f0;
    }
    ctx->pc = 0x35B4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B4E8u;
            // 0x35b4ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B4F0u;
label_35b4f0:
    // 0x35b4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_35b4f4:
    // 0x35b4f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x35b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_35b4f8:
    // 0x35b4f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_35b4fc:
    // 0x35b4fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x35b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_35b500:
    // 0x35b500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35b504:
    // 0x35b504: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x35b504u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_35b508:
    // 0x35b508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35b50c:
    // 0x35b50c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35b50cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b510:
    // 0x35b510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35b514:
    // 0x35b514: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x35b514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_35b518:
    // 0x35b518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35b51c:
    // 0x35b51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35b520:
    // 0x35b520: 0x2691006c  addiu       $s1, $s4, 0x6C
    ctx->pc = 0x35b520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_35b524:
    // 0x35b524: 0x8c87006c  lw          $a3, 0x6C($a0)
    ctx->pc = 0x35b524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_35b528:
    // 0x35b528: 0x26900074  addiu       $s0, $s4, 0x74
    ctx->pc = 0x35b528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
label_35b52c:
    // 0x35b52c: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x35b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35b530:
    // 0x35b530: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x35b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_35b534:
    // 0x35b534: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x35b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_35b538:
    // 0x35b538: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x35b538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
label_35b53c:
    // 0x35b53c: 0x245202c0  addiu       $s2, $v0, 0x2C0
    ctx->pc = 0x35b53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
label_35b540:
    // 0x35b540: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x35b540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_35b544:
    // 0x35b544: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x35b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_35b548:
    // 0x35b548: 0x344570a4  ori         $a1, $v0, 0x70A4
    ctx->pc = 0x35b548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_35b54c:
    // 0x35b54c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x35b54cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35b550:
    // 0x35b550: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35b550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35b554:
    // 0x35b554: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x35b554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35b558:
    // 0x35b558: 0x3c053d75  lui         $a1, 0x3D75
    ctx->pc = 0x35b558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15733 << 16));
label_35b55c:
    // 0x35b55c: 0x34a5c28f  ori         $a1, $a1, 0xC28F
    ctx->pc = 0x35b55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49807);
label_35b560:
    // 0x35b560: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x35b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_35b564:
    // 0x35b564: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x35b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b568:
    // 0x35b568: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x35b568u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
label_35b56c:
    // 0x35b56c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x35b56cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_35b570:
    // 0x35b570: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35b570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_35b574:
    // 0x35b574: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x35b574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_35b578:
    // 0x35b578: 0xc4820074  lwc1        $f2, 0x74($a0)
    ctx->pc = 0x35b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b57c:
    // 0x35b57c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35b580:
    // 0x35b580: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35b580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b584:
    // 0x35b584: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x35b584u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_35b588:
    // 0x35b588: 0x0  nop
    ctx->pc = 0x35b588u;
    // NOP
label_35b58c:
    // 0x35b58c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35b58cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35b590:
    // 0x35b590: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x35b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b594:
    // 0x35b594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b598:
    // 0x35b598: 0x0  nop
    ctx->pc = 0x35b598u;
    // NOP
label_35b59c:
    // 0x35b59c: 0x4601185d  msub.s      $f1, $f3, $f1
    ctx->pc = 0x35b59cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_35b5a0:
    // 0x35b5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35b5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b5a4:
    // 0x35b5a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_35b5a8:
    if (ctx->pc == 0x35B5A8u) {
        ctx->pc = 0x35B5A8u;
            // 0x35b5a8: 0xe4810074  swc1        $f1, 0x74($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->pc = 0x35B5ACu;
        goto label_35b5ac;
    }
    ctx->pc = 0x35B5A4u;
    {
        const bool branch_taken_0x35b5a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B5A4u;
            // 0x35b5a8: 0xe4810074  swc1        $f1, 0x74($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5a4) {
            ctx->pc = 0x35B5B4u;
            goto label_35b5b4;
        }
    }
    ctx->pc = 0x35B5ACu;
label_35b5ac:
    // 0x35b5ac: 0x10000018  b           . + 4 + (0x18 << 2)
label_35b5b0:
    if (ctx->pc == 0x35B5B0u) {
        ctx->pc = 0x35B5B0u;
            // 0x35b5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35B5B4u;
        goto label_35b5b4;
    }
    ctx->pc = 0x35B5ACu;
    {
        const bool branch_taken_0x35b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B5ACu;
            // 0x35b5b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5ac) {
            ctx->pc = 0x35B610u;
            goto label_35b610;
        }
    }
    ctx->pc = 0x35B5B4u;
label_35b5b4:
    // 0x35b5b4: 0xc04ce84  jal         func_133A10
label_35b5b8:
    if (ctx->pc == 0x35B5B8u) {
        ctx->pc = 0x35B5B8u;
            // 0x35b5b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35B5BCu;
        goto label_35b5bc;
    }
    ctx->pc = 0x35B5B4u;
    SET_GPR_U32(ctx, 31, 0x35B5BCu);
    ctx->pc = 0x35B5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B5B4u;
            // 0x35b5b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B5BCu; }
        if (ctx->pc != 0x35B5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B5BCu; }
        if (ctx->pc != 0x35B5BCu) { return; }
    }
    ctx->pc = 0x35B5BCu;
label_35b5bc:
    // 0x35b5bc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x35b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b5c0:
    // 0x35b5c0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x35b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35b5c4:
    // 0x35b5c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35b5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b5c8:
    // 0x35b5c8: 0x0  nop
    ctx->pc = 0x35b5c8u;
    // NOP
label_35b5cc:
    // 0x35b5cc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35b5ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35b5d0:
    // 0x35b5d0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x35b5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_35b5d4:
    // 0x35b5d4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x35b5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_35b5d8:
    // 0x35b5d8: 0xc6800078  lwc1        $f0, 0x78($s4)
    ctx->pc = 0x35b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b5dc:
    // 0x35b5dc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x35b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b5e0:
    // 0x35b5e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35b5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_35b5e4:
    // 0x35b5e4: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x35b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_35b5e8:
    // 0x35b5e8: 0xc04ceac  jal         func_133AB0
label_35b5ec:
    if (ctx->pc == 0x35B5ECu) {
        ctx->pc = 0x35B5ECu;
            // 0x35b5ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35B5F0u;
        goto label_35b5f0;
    }
    ctx->pc = 0x35B5E8u;
    SET_GPR_U32(ctx, 31, 0x35B5F0u);
    ctx->pc = 0x35B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B5E8u;
            // 0x35b5ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AB0u;
    if (runtime->hasFunction(0x133AB0u)) {
        auto targetFn = runtime->lookupFunction(0x133AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B5F0u; }
        if (ctx->pc != 0x35B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AB0_0x133ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B5F0u; }
        if (ctx->pc != 0x35B5F0u) { return; }
    }
    ctx->pc = 0x35B5F0u;
label_35b5f0:
    // 0x35b5f0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x35b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b5f4:
    // 0x35b5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b5f8:
    // 0x35b5f8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x35b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35b5fc:
    // 0x35b5fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35b5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b600:
    // 0x35b600: 0x0  nop
    ctx->pc = 0x35b600u;
    // NOP
label_35b604:
    // 0x35b604: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35b604u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35b608:
    // 0x35b608: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x35b608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_35b60c:
    // 0x35b60c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x35b60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_35b610:
    // 0x35b610: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35b610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_35b614:
    // 0x35b614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35b614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35b618:
    // 0x35b618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35b618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35b61c:
    // 0x35b61c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35b61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35b620:
    // 0x35b620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b624:
    // 0x35b624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b628:
    // 0x35b628: 0x3e00008  jr          $ra
label_35b62c:
    if (ctx->pc == 0x35B62Cu) {
        ctx->pc = 0x35B62Cu;
            // 0x35b62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35B630u;
        goto label_35b630;
    }
    ctx->pc = 0x35B628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B628u;
            // 0x35b62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B630u;
label_35b630:
    // 0x35b630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35b634:
    // 0x35b634: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x35b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_35b638:
    // 0x35b638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35b63c:
    // 0x35b63c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35b640:
    // 0x35b640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35b644:
    // 0x35b644: 0x3c023dbd  lui         $v0, 0x3DBD
    ctx->pc = 0x35b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15805 << 16));
label_35b648:
    // 0x35b648: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35b648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35b64c:
    // 0x35b64c: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x35b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_35b650:
    // 0x35b650: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x35b650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_35b654:
    // 0x35b654: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35b654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b658:
    // 0x35b658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35b658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b65c:
    // 0x35b65c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x35b65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_35b660:
    // 0x35b660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b664:
    // 0x35b664: 0xc4a50de4  lwc1        $f5, 0xDE4($a1)
    ctx->pc = 0x35b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_35b668:
    // 0x35b668: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x35b668u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_35b66c:
    // 0x35b66c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x35b66cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_35b670:
    // 0x35b670: 0x0  nop
    ctx->pc = 0x35b670u;
    // NOP
label_35b674:
    // 0x35b674: 0x0  nop
    ctx->pc = 0x35b674u;
    // NOP
label_35b678:
    // 0x35b678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35b678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b67c:
    // 0x35b67c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_35b680:
    if (ctx->pc == 0x35B680u) {
        ctx->pc = 0x35B684u;
        goto label_35b684;
    }
    ctx->pc = 0x35B67Cu;
    {
        const bool branch_taken_0x35b67c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35b67c) {
            ctx->pc = 0x35B688u;
            goto label_35b688;
        }
    }
    ctx->pc = 0x35B684u;
label_35b684:
    // 0x35b684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b688:
    // 0x35b688: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35b68c:
    if (ctx->pc == 0x35B68Cu) {
        ctx->pc = 0x35B68Cu;
            // 0x35b68c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35B690u;
        goto label_35b690;
    }
    ctx->pc = 0x35B688u;
    {
        const bool branch_taken_0x35b688 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35b688) {
            ctx->pc = 0x35B68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35B688u;
            // 0x35b68c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35B69Cu;
            goto label_35b69c;
        }
    }
    ctx->pc = 0x35B690u;
label_35b690:
    // 0x35b690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b694:
    // 0x35b694: 0x10000007  b           . + 4 + (0x7 << 2)
label_35b698:
    if (ctx->pc == 0x35B698u) {
        ctx->pc = 0x35B698u;
            // 0x35b698: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35B69Cu;
        goto label_35b69c;
    }
    ctx->pc = 0x35B694u;
    {
        const bool branch_taken_0x35b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B694u;
            // 0x35b698: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b694) {
            ctx->pc = 0x35B6B4u;
            goto label_35b6b4;
        }
    }
    ctx->pc = 0x35B69Cu;
label_35b69c:
    // 0x35b69c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35b6a0:
    // 0x35b6a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35b6a4:
    // 0x35b6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b6a8:
    // 0x35b6a8: 0x0  nop
    ctx->pc = 0x35b6a8u;
    // NOP
label_35b6ac:
    // 0x35b6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35b6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35b6b0:
    // 0x35b6b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35b6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35b6b4:
    // 0x35b6b4: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x35b6b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35b6b8:
    // 0x35b6b8: 0x3c033dbd  lui         $v1, 0x3DBD
    ctx->pc = 0x35b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
label_35b6bc:
    // 0x35b6bc: 0x3467a12f  ori         $a3, $v1, 0xA12F
    ctx->pc = 0x35b6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_35b6c0:
    // 0x35b6c0: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x35b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_35b6c4:
    // 0x35b6c4: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x35b6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_35b6c8:
    // 0x35b6c8: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x35b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
label_35b6cc:
    // 0x35b6cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35b6d0:
    // 0x35b6d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35b6d4:
    // 0x35b6d4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35b6d8:
    // 0x35b6d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35b6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b6dc:
    // 0x35b6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35b6e0:
    // 0x35b6e0: 0x0  nop
    ctx->pc = 0x35b6e0u;
    // NOP
label_35b6e4:
    // 0x35b6e4: 0x46050080  add.s       $f2, $f0, $f5
    ctx->pc = 0x35b6e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_35b6e8:
    // 0x35b6e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35b6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b6ec:
    // 0x35b6ec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x35b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b6f0:
    // 0x35b6f0: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x35b6f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_35b6f4:
    // 0x35b6f4: 0x0  nop
    ctx->pc = 0x35b6f4u;
    // NOP
label_35b6f8:
    // 0x35b6f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35b6f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35b6fc:
    // 0x35b6fc: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x35b6fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_35b700:
    // 0x35b700: 0xc04cc90  jal         func_133240
label_35b704:
    if (ctx->pc == 0x35B704u) {
        ctx->pc = 0x35B704u;
            // 0x35b704: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35B708u;
        goto label_35b708;
    }
    ctx->pc = 0x35B700u;
    SET_GPR_U32(ctx, 31, 0x35B708u);
    ctx->pc = 0x35B704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B700u;
            // 0x35b704: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B708u; }
        if (ctx->pc != 0x35B708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B708u; }
        if (ctx->pc != 0x35B708u) { return; }
    }
    ctx->pc = 0x35B708u;
label_35b708:
    // 0x35b708: 0xc04cc2c  jal         func_1330B0
label_35b70c:
    if (ctx->pc == 0x35B70Cu) {
        ctx->pc = 0x35B70Cu;
            // 0x35b70c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35B710u;
        goto label_35b710;
    }
    ctx->pc = 0x35B708u;
    SET_GPR_U32(ctx, 31, 0x35B710u);
    ctx->pc = 0x35B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B708u;
            // 0x35b70c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B710u; }
        if (ctx->pc != 0x35B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B710u; }
        if (ctx->pc != 0x35B710u) { return; }
    }
    ctx->pc = 0x35B710u;
label_35b710:
    // 0x35b710: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x35b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_35b714:
    // 0x35b714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35b714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35b718:
    // 0x35b718: 0x0  nop
    ctx->pc = 0x35b718u;
    // NOP
label_35b71c:
    // 0x35b71c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35b71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b720:
    // 0x35b720: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_35b724:
    if (ctx->pc == 0x35B724u) {
        ctx->pc = 0x35B724u;
            // 0x35b724: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35B728u;
        goto label_35b728;
    }
    ctx->pc = 0x35B720u;
    {
        const bool branch_taken_0x35b720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35b720) {
            ctx->pc = 0x35B724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35B720u;
            // 0x35b724: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35B730u;
            goto label_35b730;
        }
    }
    ctx->pc = 0x35B728u;
label_35b728:
    // 0x35b728: 0x10000009  b           . + 4 + (0x9 << 2)
label_35b72c:
    if (ctx->pc == 0x35B72Cu) {
        ctx->pc = 0x35B72Cu;
            // 0x35b72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35B730u;
        goto label_35b730;
    }
    ctx->pc = 0x35B728u;
    {
        const bool branch_taken_0x35b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B728u;
            // 0x35b72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b728) {
            ctx->pc = 0x35B750u;
            goto label_35b750;
        }
    }
    ctx->pc = 0x35B730u;
label_35b730:
    // 0x35b730: 0xc04cc44  jal         func_133110
label_35b734:
    if (ctx->pc == 0x35B734u) {
        ctx->pc = 0x35B734u;
            // 0x35b734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B738u;
        goto label_35b738;
    }
    ctx->pc = 0x35B730u;
    SET_GPR_U32(ctx, 31, 0x35B738u);
    ctx->pc = 0x35B734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B730u;
            // 0x35b734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B738u; }
        if (ctx->pc != 0x35B738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B738u; }
        if (ctx->pc != 0x35B738u) { return; }
    }
    ctx->pc = 0x35B738u;
label_35b738:
    // 0x35b738: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35b738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_35b73c:
    // 0x35b73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b740:
    // 0x35b740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b744:
    // 0x35b744: 0xc04cc7c  jal         func_1331F0
label_35b748:
    if (ctx->pc == 0x35B748u) {
        ctx->pc = 0x35B748u;
            // 0x35b748: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35B74Cu;
        goto label_35b74c;
    }
    ctx->pc = 0x35B744u;
    SET_GPR_U32(ctx, 31, 0x35B74Cu);
    ctx->pc = 0x35B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B744u;
            // 0x35b748: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B74Cu; }
        if (ctx->pc != 0x35B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B74Cu; }
        if (ctx->pc != 0x35B74Cu) { return; }
    }
    ctx->pc = 0x35B74Cu;
label_35b74c:
    // 0x35b74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b750:
    // 0x35b750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35b754:
    // 0x35b754: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35b754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35b758:
    // 0x35b758: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35b75c:
    // 0x35b75c: 0x3e00008  jr          $ra
label_35b760:
    if (ctx->pc == 0x35B760u) {
        ctx->pc = 0x35B760u;
            // 0x35b760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35B764u;
        goto label_35b764;
    }
    ctx->pc = 0x35B75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B75Cu;
            // 0x35b760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B764u;
label_35b764:
    // 0x35b764: 0x0  nop
    ctx->pc = 0x35b764u;
    // NOP
label_35b768:
    // 0x35b768: 0x0  nop
    ctx->pc = 0x35b768u;
    // NOP
label_35b76c:
    // 0x35b76c: 0x0  nop
    ctx->pc = 0x35b76cu;
    // NOP
}
