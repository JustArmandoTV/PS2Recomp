#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AD90
// Address: 0x33ad90 - 0x33bd70
void sub_0033AD90_0x33ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AD90_0x33ad90");
#endif

    switch (ctx->pc) {
        case 0x33ad90u: goto label_33ad90;
        case 0x33ad94u: goto label_33ad94;
        case 0x33ad98u: goto label_33ad98;
        case 0x33ad9cu: goto label_33ad9c;
        case 0x33ada0u: goto label_33ada0;
        case 0x33ada4u: goto label_33ada4;
        case 0x33ada8u: goto label_33ada8;
        case 0x33adacu: goto label_33adac;
        case 0x33adb0u: goto label_33adb0;
        case 0x33adb4u: goto label_33adb4;
        case 0x33adb8u: goto label_33adb8;
        case 0x33adbcu: goto label_33adbc;
        case 0x33adc0u: goto label_33adc0;
        case 0x33adc4u: goto label_33adc4;
        case 0x33adc8u: goto label_33adc8;
        case 0x33adccu: goto label_33adcc;
        case 0x33add0u: goto label_33add0;
        case 0x33add4u: goto label_33add4;
        case 0x33add8u: goto label_33add8;
        case 0x33addcu: goto label_33addc;
        case 0x33ade0u: goto label_33ade0;
        case 0x33ade4u: goto label_33ade4;
        case 0x33ade8u: goto label_33ade8;
        case 0x33adecu: goto label_33adec;
        case 0x33adf0u: goto label_33adf0;
        case 0x33adf4u: goto label_33adf4;
        case 0x33adf8u: goto label_33adf8;
        case 0x33adfcu: goto label_33adfc;
        case 0x33ae00u: goto label_33ae00;
        case 0x33ae04u: goto label_33ae04;
        case 0x33ae08u: goto label_33ae08;
        case 0x33ae0cu: goto label_33ae0c;
        case 0x33ae10u: goto label_33ae10;
        case 0x33ae14u: goto label_33ae14;
        case 0x33ae18u: goto label_33ae18;
        case 0x33ae1cu: goto label_33ae1c;
        case 0x33ae20u: goto label_33ae20;
        case 0x33ae24u: goto label_33ae24;
        case 0x33ae28u: goto label_33ae28;
        case 0x33ae2cu: goto label_33ae2c;
        case 0x33ae30u: goto label_33ae30;
        case 0x33ae34u: goto label_33ae34;
        case 0x33ae38u: goto label_33ae38;
        case 0x33ae3cu: goto label_33ae3c;
        case 0x33ae40u: goto label_33ae40;
        case 0x33ae44u: goto label_33ae44;
        case 0x33ae48u: goto label_33ae48;
        case 0x33ae4cu: goto label_33ae4c;
        case 0x33ae50u: goto label_33ae50;
        case 0x33ae54u: goto label_33ae54;
        case 0x33ae58u: goto label_33ae58;
        case 0x33ae5cu: goto label_33ae5c;
        case 0x33ae60u: goto label_33ae60;
        case 0x33ae64u: goto label_33ae64;
        case 0x33ae68u: goto label_33ae68;
        case 0x33ae6cu: goto label_33ae6c;
        case 0x33ae70u: goto label_33ae70;
        case 0x33ae74u: goto label_33ae74;
        case 0x33ae78u: goto label_33ae78;
        case 0x33ae7cu: goto label_33ae7c;
        case 0x33ae80u: goto label_33ae80;
        case 0x33ae84u: goto label_33ae84;
        case 0x33ae88u: goto label_33ae88;
        case 0x33ae8cu: goto label_33ae8c;
        case 0x33ae90u: goto label_33ae90;
        case 0x33ae94u: goto label_33ae94;
        case 0x33ae98u: goto label_33ae98;
        case 0x33ae9cu: goto label_33ae9c;
        case 0x33aea0u: goto label_33aea0;
        case 0x33aea4u: goto label_33aea4;
        case 0x33aea8u: goto label_33aea8;
        case 0x33aeacu: goto label_33aeac;
        case 0x33aeb0u: goto label_33aeb0;
        case 0x33aeb4u: goto label_33aeb4;
        case 0x33aeb8u: goto label_33aeb8;
        case 0x33aebcu: goto label_33aebc;
        case 0x33aec0u: goto label_33aec0;
        case 0x33aec4u: goto label_33aec4;
        case 0x33aec8u: goto label_33aec8;
        case 0x33aeccu: goto label_33aecc;
        case 0x33aed0u: goto label_33aed0;
        case 0x33aed4u: goto label_33aed4;
        case 0x33aed8u: goto label_33aed8;
        case 0x33aedcu: goto label_33aedc;
        case 0x33aee0u: goto label_33aee0;
        case 0x33aee4u: goto label_33aee4;
        case 0x33aee8u: goto label_33aee8;
        case 0x33aeecu: goto label_33aeec;
        case 0x33aef0u: goto label_33aef0;
        case 0x33aef4u: goto label_33aef4;
        case 0x33aef8u: goto label_33aef8;
        case 0x33aefcu: goto label_33aefc;
        case 0x33af00u: goto label_33af00;
        case 0x33af04u: goto label_33af04;
        case 0x33af08u: goto label_33af08;
        case 0x33af0cu: goto label_33af0c;
        case 0x33af10u: goto label_33af10;
        case 0x33af14u: goto label_33af14;
        case 0x33af18u: goto label_33af18;
        case 0x33af1cu: goto label_33af1c;
        case 0x33af20u: goto label_33af20;
        case 0x33af24u: goto label_33af24;
        case 0x33af28u: goto label_33af28;
        case 0x33af2cu: goto label_33af2c;
        case 0x33af30u: goto label_33af30;
        case 0x33af34u: goto label_33af34;
        case 0x33af38u: goto label_33af38;
        case 0x33af3cu: goto label_33af3c;
        case 0x33af40u: goto label_33af40;
        case 0x33af44u: goto label_33af44;
        case 0x33af48u: goto label_33af48;
        case 0x33af4cu: goto label_33af4c;
        case 0x33af50u: goto label_33af50;
        case 0x33af54u: goto label_33af54;
        case 0x33af58u: goto label_33af58;
        case 0x33af5cu: goto label_33af5c;
        case 0x33af60u: goto label_33af60;
        case 0x33af64u: goto label_33af64;
        case 0x33af68u: goto label_33af68;
        case 0x33af6cu: goto label_33af6c;
        case 0x33af70u: goto label_33af70;
        case 0x33af74u: goto label_33af74;
        case 0x33af78u: goto label_33af78;
        case 0x33af7cu: goto label_33af7c;
        case 0x33af80u: goto label_33af80;
        case 0x33af84u: goto label_33af84;
        case 0x33af88u: goto label_33af88;
        case 0x33af8cu: goto label_33af8c;
        case 0x33af90u: goto label_33af90;
        case 0x33af94u: goto label_33af94;
        case 0x33af98u: goto label_33af98;
        case 0x33af9cu: goto label_33af9c;
        case 0x33afa0u: goto label_33afa0;
        case 0x33afa4u: goto label_33afa4;
        case 0x33afa8u: goto label_33afa8;
        case 0x33afacu: goto label_33afac;
        case 0x33afb0u: goto label_33afb0;
        case 0x33afb4u: goto label_33afb4;
        case 0x33afb8u: goto label_33afb8;
        case 0x33afbcu: goto label_33afbc;
        case 0x33afc0u: goto label_33afc0;
        case 0x33afc4u: goto label_33afc4;
        case 0x33afc8u: goto label_33afc8;
        case 0x33afccu: goto label_33afcc;
        case 0x33afd0u: goto label_33afd0;
        case 0x33afd4u: goto label_33afd4;
        case 0x33afd8u: goto label_33afd8;
        case 0x33afdcu: goto label_33afdc;
        case 0x33afe0u: goto label_33afe0;
        case 0x33afe4u: goto label_33afe4;
        case 0x33afe8u: goto label_33afe8;
        case 0x33afecu: goto label_33afec;
        case 0x33aff0u: goto label_33aff0;
        case 0x33aff4u: goto label_33aff4;
        case 0x33aff8u: goto label_33aff8;
        case 0x33affcu: goto label_33affc;
        case 0x33b000u: goto label_33b000;
        case 0x33b004u: goto label_33b004;
        case 0x33b008u: goto label_33b008;
        case 0x33b00cu: goto label_33b00c;
        case 0x33b010u: goto label_33b010;
        case 0x33b014u: goto label_33b014;
        case 0x33b018u: goto label_33b018;
        case 0x33b01cu: goto label_33b01c;
        case 0x33b020u: goto label_33b020;
        case 0x33b024u: goto label_33b024;
        case 0x33b028u: goto label_33b028;
        case 0x33b02cu: goto label_33b02c;
        case 0x33b030u: goto label_33b030;
        case 0x33b034u: goto label_33b034;
        case 0x33b038u: goto label_33b038;
        case 0x33b03cu: goto label_33b03c;
        case 0x33b040u: goto label_33b040;
        case 0x33b044u: goto label_33b044;
        case 0x33b048u: goto label_33b048;
        case 0x33b04cu: goto label_33b04c;
        case 0x33b050u: goto label_33b050;
        case 0x33b054u: goto label_33b054;
        case 0x33b058u: goto label_33b058;
        case 0x33b05cu: goto label_33b05c;
        case 0x33b060u: goto label_33b060;
        case 0x33b064u: goto label_33b064;
        case 0x33b068u: goto label_33b068;
        case 0x33b06cu: goto label_33b06c;
        case 0x33b070u: goto label_33b070;
        case 0x33b074u: goto label_33b074;
        case 0x33b078u: goto label_33b078;
        case 0x33b07cu: goto label_33b07c;
        case 0x33b080u: goto label_33b080;
        case 0x33b084u: goto label_33b084;
        case 0x33b088u: goto label_33b088;
        case 0x33b08cu: goto label_33b08c;
        case 0x33b090u: goto label_33b090;
        case 0x33b094u: goto label_33b094;
        case 0x33b098u: goto label_33b098;
        case 0x33b09cu: goto label_33b09c;
        case 0x33b0a0u: goto label_33b0a0;
        case 0x33b0a4u: goto label_33b0a4;
        case 0x33b0a8u: goto label_33b0a8;
        case 0x33b0acu: goto label_33b0ac;
        case 0x33b0b0u: goto label_33b0b0;
        case 0x33b0b4u: goto label_33b0b4;
        case 0x33b0b8u: goto label_33b0b8;
        case 0x33b0bcu: goto label_33b0bc;
        case 0x33b0c0u: goto label_33b0c0;
        case 0x33b0c4u: goto label_33b0c4;
        case 0x33b0c8u: goto label_33b0c8;
        case 0x33b0ccu: goto label_33b0cc;
        case 0x33b0d0u: goto label_33b0d0;
        case 0x33b0d4u: goto label_33b0d4;
        case 0x33b0d8u: goto label_33b0d8;
        case 0x33b0dcu: goto label_33b0dc;
        case 0x33b0e0u: goto label_33b0e0;
        case 0x33b0e4u: goto label_33b0e4;
        case 0x33b0e8u: goto label_33b0e8;
        case 0x33b0ecu: goto label_33b0ec;
        case 0x33b0f0u: goto label_33b0f0;
        case 0x33b0f4u: goto label_33b0f4;
        case 0x33b0f8u: goto label_33b0f8;
        case 0x33b0fcu: goto label_33b0fc;
        case 0x33b100u: goto label_33b100;
        case 0x33b104u: goto label_33b104;
        case 0x33b108u: goto label_33b108;
        case 0x33b10cu: goto label_33b10c;
        case 0x33b110u: goto label_33b110;
        case 0x33b114u: goto label_33b114;
        case 0x33b118u: goto label_33b118;
        case 0x33b11cu: goto label_33b11c;
        case 0x33b120u: goto label_33b120;
        case 0x33b124u: goto label_33b124;
        case 0x33b128u: goto label_33b128;
        case 0x33b12cu: goto label_33b12c;
        case 0x33b130u: goto label_33b130;
        case 0x33b134u: goto label_33b134;
        case 0x33b138u: goto label_33b138;
        case 0x33b13cu: goto label_33b13c;
        case 0x33b140u: goto label_33b140;
        case 0x33b144u: goto label_33b144;
        case 0x33b148u: goto label_33b148;
        case 0x33b14cu: goto label_33b14c;
        case 0x33b150u: goto label_33b150;
        case 0x33b154u: goto label_33b154;
        case 0x33b158u: goto label_33b158;
        case 0x33b15cu: goto label_33b15c;
        case 0x33b160u: goto label_33b160;
        case 0x33b164u: goto label_33b164;
        case 0x33b168u: goto label_33b168;
        case 0x33b16cu: goto label_33b16c;
        case 0x33b170u: goto label_33b170;
        case 0x33b174u: goto label_33b174;
        case 0x33b178u: goto label_33b178;
        case 0x33b17cu: goto label_33b17c;
        case 0x33b180u: goto label_33b180;
        case 0x33b184u: goto label_33b184;
        case 0x33b188u: goto label_33b188;
        case 0x33b18cu: goto label_33b18c;
        case 0x33b190u: goto label_33b190;
        case 0x33b194u: goto label_33b194;
        case 0x33b198u: goto label_33b198;
        case 0x33b19cu: goto label_33b19c;
        case 0x33b1a0u: goto label_33b1a0;
        case 0x33b1a4u: goto label_33b1a4;
        case 0x33b1a8u: goto label_33b1a8;
        case 0x33b1acu: goto label_33b1ac;
        case 0x33b1b0u: goto label_33b1b0;
        case 0x33b1b4u: goto label_33b1b4;
        case 0x33b1b8u: goto label_33b1b8;
        case 0x33b1bcu: goto label_33b1bc;
        case 0x33b1c0u: goto label_33b1c0;
        case 0x33b1c4u: goto label_33b1c4;
        case 0x33b1c8u: goto label_33b1c8;
        case 0x33b1ccu: goto label_33b1cc;
        case 0x33b1d0u: goto label_33b1d0;
        case 0x33b1d4u: goto label_33b1d4;
        case 0x33b1d8u: goto label_33b1d8;
        case 0x33b1dcu: goto label_33b1dc;
        case 0x33b1e0u: goto label_33b1e0;
        case 0x33b1e4u: goto label_33b1e4;
        case 0x33b1e8u: goto label_33b1e8;
        case 0x33b1ecu: goto label_33b1ec;
        case 0x33b1f0u: goto label_33b1f0;
        case 0x33b1f4u: goto label_33b1f4;
        case 0x33b1f8u: goto label_33b1f8;
        case 0x33b1fcu: goto label_33b1fc;
        case 0x33b200u: goto label_33b200;
        case 0x33b204u: goto label_33b204;
        case 0x33b208u: goto label_33b208;
        case 0x33b20cu: goto label_33b20c;
        case 0x33b210u: goto label_33b210;
        case 0x33b214u: goto label_33b214;
        case 0x33b218u: goto label_33b218;
        case 0x33b21cu: goto label_33b21c;
        case 0x33b220u: goto label_33b220;
        case 0x33b224u: goto label_33b224;
        case 0x33b228u: goto label_33b228;
        case 0x33b22cu: goto label_33b22c;
        case 0x33b230u: goto label_33b230;
        case 0x33b234u: goto label_33b234;
        case 0x33b238u: goto label_33b238;
        case 0x33b23cu: goto label_33b23c;
        case 0x33b240u: goto label_33b240;
        case 0x33b244u: goto label_33b244;
        case 0x33b248u: goto label_33b248;
        case 0x33b24cu: goto label_33b24c;
        case 0x33b250u: goto label_33b250;
        case 0x33b254u: goto label_33b254;
        case 0x33b258u: goto label_33b258;
        case 0x33b25cu: goto label_33b25c;
        case 0x33b260u: goto label_33b260;
        case 0x33b264u: goto label_33b264;
        case 0x33b268u: goto label_33b268;
        case 0x33b26cu: goto label_33b26c;
        case 0x33b270u: goto label_33b270;
        case 0x33b274u: goto label_33b274;
        case 0x33b278u: goto label_33b278;
        case 0x33b27cu: goto label_33b27c;
        case 0x33b280u: goto label_33b280;
        case 0x33b284u: goto label_33b284;
        case 0x33b288u: goto label_33b288;
        case 0x33b28cu: goto label_33b28c;
        case 0x33b290u: goto label_33b290;
        case 0x33b294u: goto label_33b294;
        case 0x33b298u: goto label_33b298;
        case 0x33b29cu: goto label_33b29c;
        case 0x33b2a0u: goto label_33b2a0;
        case 0x33b2a4u: goto label_33b2a4;
        case 0x33b2a8u: goto label_33b2a8;
        case 0x33b2acu: goto label_33b2ac;
        case 0x33b2b0u: goto label_33b2b0;
        case 0x33b2b4u: goto label_33b2b4;
        case 0x33b2b8u: goto label_33b2b8;
        case 0x33b2bcu: goto label_33b2bc;
        case 0x33b2c0u: goto label_33b2c0;
        case 0x33b2c4u: goto label_33b2c4;
        case 0x33b2c8u: goto label_33b2c8;
        case 0x33b2ccu: goto label_33b2cc;
        case 0x33b2d0u: goto label_33b2d0;
        case 0x33b2d4u: goto label_33b2d4;
        case 0x33b2d8u: goto label_33b2d8;
        case 0x33b2dcu: goto label_33b2dc;
        case 0x33b2e0u: goto label_33b2e0;
        case 0x33b2e4u: goto label_33b2e4;
        case 0x33b2e8u: goto label_33b2e8;
        case 0x33b2ecu: goto label_33b2ec;
        case 0x33b2f0u: goto label_33b2f0;
        case 0x33b2f4u: goto label_33b2f4;
        case 0x33b2f8u: goto label_33b2f8;
        case 0x33b2fcu: goto label_33b2fc;
        case 0x33b300u: goto label_33b300;
        case 0x33b304u: goto label_33b304;
        case 0x33b308u: goto label_33b308;
        case 0x33b30cu: goto label_33b30c;
        case 0x33b310u: goto label_33b310;
        case 0x33b314u: goto label_33b314;
        case 0x33b318u: goto label_33b318;
        case 0x33b31cu: goto label_33b31c;
        case 0x33b320u: goto label_33b320;
        case 0x33b324u: goto label_33b324;
        case 0x33b328u: goto label_33b328;
        case 0x33b32cu: goto label_33b32c;
        case 0x33b330u: goto label_33b330;
        case 0x33b334u: goto label_33b334;
        case 0x33b338u: goto label_33b338;
        case 0x33b33cu: goto label_33b33c;
        case 0x33b340u: goto label_33b340;
        case 0x33b344u: goto label_33b344;
        case 0x33b348u: goto label_33b348;
        case 0x33b34cu: goto label_33b34c;
        case 0x33b350u: goto label_33b350;
        case 0x33b354u: goto label_33b354;
        case 0x33b358u: goto label_33b358;
        case 0x33b35cu: goto label_33b35c;
        case 0x33b360u: goto label_33b360;
        case 0x33b364u: goto label_33b364;
        case 0x33b368u: goto label_33b368;
        case 0x33b36cu: goto label_33b36c;
        case 0x33b370u: goto label_33b370;
        case 0x33b374u: goto label_33b374;
        case 0x33b378u: goto label_33b378;
        case 0x33b37cu: goto label_33b37c;
        case 0x33b380u: goto label_33b380;
        case 0x33b384u: goto label_33b384;
        case 0x33b388u: goto label_33b388;
        case 0x33b38cu: goto label_33b38c;
        case 0x33b390u: goto label_33b390;
        case 0x33b394u: goto label_33b394;
        case 0x33b398u: goto label_33b398;
        case 0x33b39cu: goto label_33b39c;
        case 0x33b3a0u: goto label_33b3a0;
        case 0x33b3a4u: goto label_33b3a4;
        case 0x33b3a8u: goto label_33b3a8;
        case 0x33b3acu: goto label_33b3ac;
        case 0x33b3b0u: goto label_33b3b0;
        case 0x33b3b4u: goto label_33b3b4;
        case 0x33b3b8u: goto label_33b3b8;
        case 0x33b3bcu: goto label_33b3bc;
        case 0x33b3c0u: goto label_33b3c0;
        case 0x33b3c4u: goto label_33b3c4;
        case 0x33b3c8u: goto label_33b3c8;
        case 0x33b3ccu: goto label_33b3cc;
        case 0x33b3d0u: goto label_33b3d0;
        case 0x33b3d4u: goto label_33b3d4;
        case 0x33b3d8u: goto label_33b3d8;
        case 0x33b3dcu: goto label_33b3dc;
        case 0x33b3e0u: goto label_33b3e0;
        case 0x33b3e4u: goto label_33b3e4;
        case 0x33b3e8u: goto label_33b3e8;
        case 0x33b3ecu: goto label_33b3ec;
        case 0x33b3f0u: goto label_33b3f0;
        case 0x33b3f4u: goto label_33b3f4;
        case 0x33b3f8u: goto label_33b3f8;
        case 0x33b3fcu: goto label_33b3fc;
        case 0x33b400u: goto label_33b400;
        case 0x33b404u: goto label_33b404;
        case 0x33b408u: goto label_33b408;
        case 0x33b40cu: goto label_33b40c;
        case 0x33b410u: goto label_33b410;
        case 0x33b414u: goto label_33b414;
        case 0x33b418u: goto label_33b418;
        case 0x33b41cu: goto label_33b41c;
        case 0x33b420u: goto label_33b420;
        case 0x33b424u: goto label_33b424;
        case 0x33b428u: goto label_33b428;
        case 0x33b42cu: goto label_33b42c;
        case 0x33b430u: goto label_33b430;
        case 0x33b434u: goto label_33b434;
        case 0x33b438u: goto label_33b438;
        case 0x33b43cu: goto label_33b43c;
        case 0x33b440u: goto label_33b440;
        case 0x33b444u: goto label_33b444;
        case 0x33b448u: goto label_33b448;
        case 0x33b44cu: goto label_33b44c;
        case 0x33b450u: goto label_33b450;
        case 0x33b454u: goto label_33b454;
        case 0x33b458u: goto label_33b458;
        case 0x33b45cu: goto label_33b45c;
        case 0x33b460u: goto label_33b460;
        case 0x33b464u: goto label_33b464;
        case 0x33b468u: goto label_33b468;
        case 0x33b46cu: goto label_33b46c;
        case 0x33b470u: goto label_33b470;
        case 0x33b474u: goto label_33b474;
        case 0x33b478u: goto label_33b478;
        case 0x33b47cu: goto label_33b47c;
        case 0x33b480u: goto label_33b480;
        case 0x33b484u: goto label_33b484;
        case 0x33b488u: goto label_33b488;
        case 0x33b48cu: goto label_33b48c;
        case 0x33b490u: goto label_33b490;
        case 0x33b494u: goto label_33b494;
        case 0x33b498u: goto label_33b498;
        case 0x33b49cu: goto label_33b49c;
        case 0x33b4a0u: goto label_33b4a0;
        case 0x33b4a4u: goto label_33b4a4;
        case 0x33b4a8u: goto label_33b4a8;
        case 0x33b4acu: goto label_33b4ac;
        case 0x33b4b0u: goto label_33b4b0;
        case 0x33b4b4u: goto label_33b4b4;
        case 0x33b4b8u: goto label_33b4b8;
        case 0x33b4bcu: goto label_33b4bc;
        case 0x33b4c0u: goto label_33b4c0;
        case 0x33b4c4u: goto label_33b4c4;
        case 0x33b4c8u: goto label_33b4c8;
        case 0x33b4ccu: goto label_33b4cc;
        case 0x33b4d0u: goto label_33b4d0;
        case 0x33b4d4u: goto label_33b4d4;
        case 0x33b4d8u: goto label_33b4d8;
        case 0x33b4dcu: goto label_33b4dc;
        case 0x33b4e0u: goto label_33b4e0;
        case 0x33b4e4u: goto label_33b4e4;
        case 0x33b4e8u: goto label_33b4e8;
        case 0x33b4ecu: goto label_33b4ec;
        case 0x33b4f0u: goto label_33b4f0;
        case 0x33b4f4u: goto label_33b4f4;
        case 0x33b4f8u: goto label_33b4f8;
        case 0x33b4fcu: goto label_33b4fc;
        case 0x33b500u: goto label_33b500;
        case 0x33b504u: goto label_33b504;
        case 0x33b508u: goto label_33b508;
        case 0x33b50cu: goto label_33b50c;
        case 0x33b510u: goto label_33b510;
        case 0x33b514u: goto label_33b514;
        case 0x33b518u: goto label_33b518;
        case 0x33b51cu: goto label_33b51c;
        case 0x33b520u: goto label_33b520;
        case 0x33b524u: goto label_33b524;
        case 0x33b528u: goto label_33b528;
        case 0x33b52cu: goto label_33b52c;
        case 0x33b530u: goto label_33b530;
        case 0x33b534u: goto label_33b534;
        case 0x33b538u: goto label_33b538;
        case 0x33b53cu: goto label_33b53c;
        case 0x33b540u: goto label_33b540;
        case 0x33b544u: goto label_33b544;
        case 0x33b548u: goto label_33b548;
        case 0x33b54cu: goto label_33b54c;
        case 0x33b550u: goto label_33b550;
        case 0x33b554u: goto label_33b554;
        case 0x33b558u: goto label_33b558;
        case 0x33b55cu: goto label_33b55c;
        case 0x33b560u: goto label_33b560;
        case 0x33b564u: goto label_33b564;
        case 0x33b568u: goto label_33b568;
        case 0x33b56cu: goto label_33b56c;
        case 0x33b570u: goto label_33b570;
        case 0x33b574u: goto label_33b574;
        case 0x33b578u: goto label_33b578;
        case 0x33b57cu: goto label_33b57c;
        case 0x33b580u: goto label_33b580;
        case 0x33b584u: goto label_33b584;
        case 0x33b588u: goto label_33b588;
        case 0x33b58cu: goto label_33b58c;
        case 0x33b590u: goto label_33b590;
        case 0x33b594u: goto label_33b594;
        case 0x33b598u: goto label_33b598;
        case 0x33b59cu: goto label_33b59c;
        case 0x33b5a0u: goto label_33b5a0;
        case 0x33b5a4u: goto label_33b5a4;
        case 0x33b5a8u: goto label_33b5a8;
        case 0x33b5acu: goto label_33b5ac;
        case 0x33b5b0u: goto label_33b5b0;
        case 0x33b5b4u: goto label_33b5b4;
        case 0x33b5b8u: goto label_33b5b8;
        case 0x33b5bcu: goto label_33b5bc;
        case 0x33b5c0u: goto label_33b5c0;
        case 0x33b5c4u: goto label_33b5c4;
        case 0x33b5c8u: goto label_33b5c8;
        case 0x33b5ccu: goto label_33b5cc;
        case 0x33b5d0u: goto label_33b5d0;
        case 0x33b5d4u: goto label_33b5d4;
        case 0x33b5d8u: goto label_33b5d8;
        case 0x33b5dcu: goto label_33b5dc;
        case 0x33b5e0u: goto label_33b5e0;
        case 0x33b5e4u: goto label_33b5e4;
        case 0x33b5e8u: goto label_33b5e8;
        case 0x33b5ecu: goto label_33b5ec;
        case 0x33b5f0u: goto label_33b5f0;
        case 0x33b5f4u: goto label_33b5f4;
        case 0x33b5f8u: goto label_33b5f8;
        case 0x33b5fcu: goto label_33b5fc;
        case 0x33b600u: goto label_33b600;
        case 0x33b604u: goto label_33b604;
        case 0x33b608u: goto label_33b608;
        case 0x33b60cu: goto label_33b60c;
        case 0x33b610u: goto label_33b610;
        case 0x33b614u: goto label_33b614;
        case 0x33b618u: goto label_33b618;
        case 0x33b61cu: goto label_33b61c;
        case 0x33b620u: goto label_33b620;
        case 0x33b624u: goto label_33b624;
        case 0x33b628u: goto label_33b628;
        case 0x33b62cu: goto label_33b62c;
        case 0x33b630u: goto label_33b630;
        case 0x33b634u: goto label_33b634;
        case 0x33b638u: goto label_33b638;
        case 0x33b63cu: goto label_33b63c;
        case 0x33b640u: goto label_33b640;
        case 0x33b644u: goto label_33b644;
        case 0x33b648u: goto label_33b648;
        case 0x33b64cu: goto label_33b64c;
        case 0x33b650u: goto label_33b650;
        case 0x33b654u: goto label_33b654;
        case 0x33b658u: goto label_33b658;
        case 0x33b65cu: goto label_33b65c;
        case 0x33b660u: goto label_33b660;
        case 0x33b664u: goto label_33b664;
        case 0x33b668u: goto label_33b668;
        case 0x33b66cu: goto label_33b66c;
        case 0x33b670u: goto label_33b670;
        case 0x33b674u: goto label_33b674;
        case 0x33b678u: goto label_33b678;
        case 0x33b67cu: goto label_33b67c;
        case 0x33b680u: goto label_33b680;
        case 0x33b684u: goto label_33b684;
        case 0x33b688u: goto label_33b688;
        case 0x33b68cu: goto label_33b68c;
        case 0x33b690u: goto label_33b690;
        case 0x33b694u: goto label_33b694;
        case 0x33b698u: goto label_33b698;
        case 0x33b69cu: goto label_33b69c;
        case 0x33b6a0u: goto label_33b6a0;
        case 0x33b6a4u: goto label_33b6a4;
        case 0x33b6a8u: goto label_33b6a8;
        case 0x33b6acu: goto label_33b6ac;
        case 0x33b6b0u: goto label_33b6b0;
        case 0x33b6b4u: goto label_33b6b4;
        case 0x33b6b8u: goto label_33b6b8;
        case 0x33b6bcu: goto label_33b6bc;
        case 0x33b6c0u: goto label_33b6c0;
        case 0x33b6c4u: goto label_33b6c4;
        case 0x33b6c8u: goto label_33b6c8;
        case 0x33b6ccu: goto label_33b6cc;
        case 0x33b6d0u: goto label_33b6d0;
        case 0x33b6d4u: goto label_33b6d4;
        case 0x33b6d8u: goto label_33b6d8;
        case 0x33b6dcu: goto label_33b6dc;
        case 0x33b6e0u: goto label_33b6e0;
        case 0x33b6e4u: goto label_33b6e4;
        case 0x33b6e8u: goto label_33b6e8;
        case 0x33b6ecu: goto label_33b6ec;
        case 0x33b6f0u: goto label_33b6f0;
        case 0x33b6f4u: goto label_33b6f4;
        case 0x33b6f8u: goto label_33b6f8;
        case 0x33b6fcu: goto label_33b6fc;
        case 0x33b700u: goto label_33b700;
        case 0x33b704u: goto label_33b704;
        case 0x33b708u: goto label_33b708;
        case 0x33b70cu: goto label_33b70c;
        case 0x33b710u: goto label_33b710;
        case 0x33b714u: goto label_33b714;
        case 0x33b718u: goto label_33b718;
        case 0x33b71cu: goto label_33b71c;
        case 0x33b720u: goto label_33b720;
        case 0x33b724u: goto label_33b724;
        case 0x33b728u: goto label_33b728;
        case 0x33b72cu: goto label_33b72c;
        case 0x33b730u: goto label_33b730;
        case 0x33b734u: goto label_33b734;
        case 0x33b738u: goto label_33b738;
        case 0x33b73cu: goto label_33b73c;
        case 0x33b740u: goto label_33b740;
        case 0x33b744u: goto label_33b744;
        case 0x33b748u: goto label_33b748;
        case 0x33b74cu: goto label_33b74c;
        case 0x33b750u: goto label_33b750;
        case 0x33b754u: goto label_33b754;
        case 0x33b758u: goto label_33b758;
        case 0x33b75cu: goto label_33b75c;
        case 0x33b760u: goto label_33b760;
        case 0x33b764u: goto label_33b764;
        case 0x33b768u: goto label_33b768;
        case 0x33b76cu: goto label_33b76c;
        case 0x33b770u: goto label_33b770;
        case 0x33b774u: goto label_33b774;
        case 0x33b778u: goto label_33b778;
        case 0x33b77cu: goto label_33b77c;
        case 0x33b780u: goto label_33b780;
        case 0x33b784u: goto label_33b784;
        case 0x33b788u: goto label_33b788;
        case 0x33b78cu: goto label_33b78c;
        case 0x33b790u: goto label_33b790;
        case 0x33b794u: goto label_33b794;
        case 0x33b798u: goto label_33b798;
        case 0x33b79cu: goto label_33b79c;
        case 0x33b7a0u: goto label_33b7a0;
        case 0x33b7a4u: goto label_33b7a4;
        case 0x33b7a8u: goto label_33b7a8;
        case 0x33b7acu: goto label_33b7ac;
        case 0x33b7b0u: goto label_33b7b0;
        case 0x33b7b4u: goto label_33b7b4;
        case 0x33b7b8u: goto label_33b7b8;
        case 0x33b7bcu: goto label_33b7bc;
        case 0x33b7c0u: goto label_33b7c0;
        case 0x33b7c4u: goto label_33b7c4;
        case 0x33b7c8u: goto label_33b7c8;
        case 0x33b7ccu: goto label_33b7cc;
        case 0x33b7d0u: goto label_33b7d0;
        case 0x33b7d4u: goto label_33b7d4;
        case 0x33b7d8u: goto label_33b7d8;
        case 0x33b7dcu: goto label_33b7dc;
        case 0x33b7e0u: goto label_33b7e0;
        case 0x33b7e4u: goto label_33b7e4;
        case 0x33b7e8u: goto label_33b7e8;
        case 0x33b7ecu: goto label_33b7ec;
        case 0x33b7f0u: goto label_33b7f0;
        case 0x33b7f4u: goto label_33b7f4;
        case 0x33b7f8u: goto label_33b7f8;
        case 0x33b7fcu: goto label_33b7fc;
        case 0x33b800u: goto label_33b800;
        case 0x33b804u: goto label_33b804;
        case 0x33b808u: goto label_33b808;
        case 0x33b80cu: goto label_33b80c;
        case 0x33b810u: goto label_33b810;
        case 0x33b814u: goto label_33b814;
        case 0x33b818u: goto label_33b818;
        case 0x33b81cu: goto label_33b81c;
        case 0x33b820u: goto label_33b820;
        case 0x33b824u: goto label_33b824;
        case 0x33b828u: goto label_33b828;
        case 0x33b82cu: goto label_33b82c;
        case 0x33b830u: goto label_33b830;
        case 0x33b834u: goto label_33b834;
        case 0x33b838u: goto label_33b838;
        case 0x33b83cu: goto label_33b83c;
        case 0x33b840u: goto label_33b840;
        case 0x33b844u: goto label_33b844;
        case 0x33b848u: goto label_33b848;
        case 0x33b84cu: goto label_33b84c;
        case 0x33b850u: goto label_33b850;
        case 0x33b854u: goto label_33b854;
        case 0x33b858u: goto label_33b858;
        case 0x33b85cu: goto label_33b85c;
        case 0x33b860u: goto label_33b860;
        case 0x33b864u: goto label_33b864;
        case 0x33b868u: goto label_33b868;
        case 0x33b86cu: goto label_33b86c;
        case 0x33b870u: goto label_33b870;
        case 0x33b874u: goto label_33b874;
        case 0x33b878u: goto label_33b878;
        case 0x33b87cu: goto label_33b87c;
        case 0x33b880u: goto label_33b880;
        case 0x33b884u: goto label_33b884;
        case 0x33b888u: goto label_33b888;
        case 0x33b88cu: goto label_33b88c;
        case 0x33b890u: goto label_33b890;
        case 0x33b894u: goto label_33b894;
        case 0x33b898u: goto label_33b898;
        case 0x33b89cu: goto label_33b89c;
        case 0x33b8a0u: goto label_33b8a0;
        case 0x33b8a4u: goto label_33b8a4;
        case 0x33b8a8u: goto label_33b8a8;
        case 0x33b8acu: goto label_33b8ac;
        case 0x33b8b0u: goto label_33b8b0;
        case 0x33b8b4u: goto label_33b8b4;
        case 0x33b8b8u: goto label_33b8b8;
        case 0x33b8bcu: goto label_33b8bc;
        case 0x33b8c0u: goto label_33b8c0;
        case 0x33b8c4u: goto label_33b8c4;
        case 0x33b8c8u: goto label_33b8c8;
        case 0x33b8ccu: goto label_33b8cc;
        case 0x33b8d0u: goto label_33b8d0;
        case 0x33b8d4u: goto label_33b8d4;
        case 0x33b8d8u: goto label_33b8d8;
        case 0x33b8dcu: goto label_33b8dc;
        case 0x33b8e0u: goto label_33b8e0;
        case 0x33b8e4u: goto label_33b8e4;
        case 0x33b8e8u: goto label_33b8e8;
        case 0x33b8ecu: goto label_33b8ec;
        case 0x33b8f0u: goto label_33b8f0;
        case 0x33b8f4u: goto label_33b8f4;
        case 0x33b8f8u: goto label_33b8f8;
        case 0x33b8fcu: goto label_33b8fc;
        case 0x33b900u: goto label_33b900;
        case 0x33b904u: goto label_33b904;
        case 0x33b908u: goto label_33b908;
        case 0x33b90cu: goto label_33b90c;
        case 0x33b910u: goto label_33b910;
        case 0x33b914u: goto label_33b914;
        case 0x33b918u: goto label_33b918;
        case 0x33b91cu: goto label_33b91c;
        case 0x33b920u: goto label_33b920;
        case 0x33b924u: goto label_33b924;
        case 0x33b928u: goto label_33b928;
        case 0x33b92cu: goto label_33b92c;
        case 0x33b930u: goto label_33b930;
        case 0x33b934u: goto label_33b934;
        case 0x33b938u: goto label_33b938;
        case 0x33b93cu: goto label_33b93c;
        case 0x33b940u: goto label_33b940;
        case 0x33b944u: goto label_33b944;
        case 0x33b948u: goto label_33b948;
        case 0x33b94cu: goto label_33b94c;
        case 0x33b950u: goto label_33b950;
        case 0x33b954u: goto label_33b954;
        case 0x33b958u: goto label_33b958;
        case 0x33b95cu: goto label_33b95c;
        case 0x33b960u: goto label_33b960;
        case 0x33b964u: goto label_33b964;
        case 0x33b968u: goto label_33b968;
        case 0x33b96cu: goto label_33b96c;
        case 0x33b970u: goto label_33b970;
        case 0x33b974u: goto label_33b974;
        case 0x33b978u: goto label_33b978;
        case 0x33b97cu: goto label_33b97c;
        case 0x33b980u: goto label_33b980;
        case 0x33b984u: goto label_33b984;
        case 0x33b988u: goto label_33b988;
        case 0x33b98cu: goto label_33b98c;
        case 0x33b990u: goto label_33b990;
        case 0x33b994u: goto label_33b994;
        case 0x33b998u: goto label_33b998;
        case 0x33b99cu: goto label_33b99c;
        case 0x33b9a0u: goto label_33b9a0;
        case 0x33b9a4u: goto label_33b9a4;
        case 0x33b9a8u: goto label_33b9a8;
        case 0x33b9acu: goto label_33b9ac;
        case 0x33b9b0u: goto label_33b9b0;
        case 0x33b9b4u: goto label_33b9b4;
        case 0x33b9b8u: goto label_33b9b8;
        case 0x33b9bcu: goto label_33b9bc;
        case 0x33b9c0u: goto label_33b9c0;
        case 0x33b9c4u: goto label_33b9c4;
        case 0x33b9c8u: goto label_33b9c8;
        case 0x33b9ccu: goto label_33b9cc;
        case 0x33b9d0u: goto label_33b9d0;
        case 0x33b9d4u: goto label_33b9d4;
        case 0x33b9d8u: goto label_33b9d8;
        case 0x33b9dcu: goto label_33b9dc;
        case 0x33b9e0u: goto label_33b9e0;
        case 0x33b9e4u: goto label_33b9e4;
        case 0x33b9e8u: goto label_33b9e8;
        case 0x33b9ecu: goto label_33b9ec;
        case 0x33b9f0u: goto label_33b9f0;
        case 0x33b9f4u: goto label_33b9f4;
        case 0x33b9f8u: goto label_33b9f8;
        case 0x33b9fcu: goto label_33b9fc;
        case 0x33ba00u: goto label_33ba00;
        case 0x33ba04u: goto label_33ba04;
        case 0x33ba08u: goto label_33ba08;
        case 0x33ba0cu: goto label_33ba0c;
        case 0x33ba10u: goto label_33ba10;
        case 0x33ba14u: goto label_33ba14;
        case 0x33ba18u: goto label_33ba18;
        case 0x33ba1cu: goto label_33ba1c;
        case 0x33ba20u: goto label_33ba20;
        case 0x33ba24u: goto label_33ba24;
        case 0x33ba28u: goto label_33ba28;
        case 0x33ba2cu: goto label_33ba2c;
        case 0x33ba30u: goto label_33ba30;
        case 0x33ba34u: goto label_33ba34;
        case 0x33ba38u: goto label_33ba38;
        case 0x33ba3cu: goto label_33ba3c;
        case 0x33ba40u: goto label_33ba40;
        case 0x33ba44u: goto label_33ba44;
        case 0x33ba48u: goto label_33ba48;
        case 0x33ba4cu: goto label_33ba4c;
        case 0x33ba50u: goto label_33ba50;
        case 0x33ba54u: goto label_33ba54;
        case 0x33ba58u: goto label_33ba58;
        case 0x33ba5cu: goto label_33ba5c;
        case 0x33ba60u: goto label_33ba60;
        case 0x33ba64u: goto label_33ba64;
        case 0x33ba68u: goto label_33ba68;
        case 0x33ba6cu: goto label_33ba6c;
        case 0x33ba70u: goto label_33ba70;
        case 0x33ba74u: goto label_33ba74;
        case 0x33ba78u: goto label_33ba78;
        case 0x33ba7cu: goto label_33ba7c;
        case 0x33ba80u: goto label_33ba80;
        case 0x33ba84u: goto label_33ba84;
        case 0x33ba88u: goto label_33ba88;
        case 0x33ba8cu: goto label_33ba8c;
        case 0x33ba90u: goto label_33ba90;
        case 0x33ba94u: goto label_33ba94;
        case 0x33ba98u: goto label_33ba98;
        case 0x33ba9cu: goto label_33ba9c;
        case 0x33baa0u: goto label_33baa0;
        case 0x33baa4u: goto label_33baa4;
        case 0x33baa8u: goto label_33baa8;
        case 0x33baacu: goto label_33baac;
        case 0x33bab0u: goto label_33bab0;
        case 0x33bab4u: goto label_33bab4;
        case 0x33bab8u: goto label_33bab8;
        case 0x33babcu: goto label_33babc;
        case 0x33bac0u: goto label_33bac0;
        case 0x33bac4u: goto label_33bac4;
        case 0x33bac8u: goto label_33bac8;
        case 0x33baccu: goto label_33bacc;
        case 0x33bad0u: goto label_33bad0;
        case 0x33bad4u: goto label_33bad4;
        case 0x33bad8u: goto label_33bad8;
        case 0x33badcu: goto label_33badc;
        case 0x33bae0u: goto label_33bae0;
        case 0x33bae4u: goto label_33bae4;
        case 0x33bae8u: goto label_33bae8;
        case 0x33baecu: goto label_33baec;
        case 0x33baf0u: goto label_33baf0;
        case 0x33baf4u: goto label_33baf4;
        case 0x33baf8u: goto label_33baf8;
        case 0x33bafcu: goto label_33bafc;
        case 0x33bb00u: goto label_33bb00;
        case 0x33bb04u: goto label_33bb04;
        case 0x33bb08u: goto label_33bb08;
        case 0x33bb0cu: goto label_33bb0c;
        case 0x33bb10u: goto label_33bb10;
        case 0x33bb14u: goto label_33bb14;
        case 0x33bb18u: goto label_33bb18;
        case 0x33bb1cu: goto label_33bb1c;
        case 0x33bb20u: goto label_33bb20;
        case 0x33bb24u: goto label_33bb24;
        case 0x33bb28u: goto label_33bb28;
        case 0x33bb2cu: goto label_33bb2c;
        case 0x33bb30u: goto label_33bb30;
        case 0x33bb34u: goto label_33bb34;
        case 0x33bb38u: goto label_33bb38;
        case 0x33bb3cu: goto label_33bb3c;
        case 0x33bb40u: goto label_33bb40;
        case 0x33bb44u: goto label_33bb44;
        case 0x33bb48u: goto label_33bb48;
        case 0x33bb4cu: goto label_33bb4c;
        case 0x33bb50u: goto label_33bb50;
        case 0x33bb54u: goto label_33bb54;
        case 0x33bb58u: goto label_33bb58;
        case 0x33bb5cu: goto label_33bb5c;
        case 0x33bb60u: goto label_33bb60;
        case 0x33bb64u: goto label_33bb64;
        case 0x33bb68u: goto label_33bb68;
        case 0x33bb6cu: goto label_33bb6c;
        case 0x33bb70u: goto label_33bb70;
        case 0x33bb74u: goto label_33bb74;
        case 0x33bb78u: goto label_33bb78;
        case 0x33bb7cu: goto label_33bb7c;
        case 0x33bb80u: goto label_33bb80;
        case 0x33bb84u: goto label_33bb84;
        case 0x33bb88u: goto label_33bb88;
        case 0x33bb8cu: goto label_33bb8c;
        case 0x33bb90u: goto label_33bb90;
        case 0x33bb94u: goto label_33bb94;
        case 0x33bb98u: goto label_33bb98;
        case 0x33bb9cu: goto label_33bb9c;
        case 0x33bba0u: goto label_33bba0;
        case 0x33bba4u: goto label_33bba4;
        case 0x33bba8u: goto label_33bba8;
        case 0x33bbacu: goto label_33bbac;
        case 0x33bbb0u: goto label_33bbb0;
        case 0x33bbb4u: goto label_33bbb4;
        case 0x33bbb8u: goto label_33bbb8;
        case 0x33bbbcu: goto label_33bbbc;
        case 0x33bbc0u: goto label_33bbc0;
        case 0x33bbc4u: goto label_33bbc4;
        case 0x33bbc8u: goto label_33bbc8;
        case 0x33bbccu: goto label_33bbcc;
        case 0x33bbd0u: goto label_33bbd0;
        case 0x33bbd4u: goto label_33bbd4;
        case 0x33bbd8u: goto label_33bbd8;
        case 0x33bbdcu: goto label_33bbdc;
        case 0x33bbe0u: goto label_33bbe0;
        case 0x33bbe4u: goto label_33bbe4;
        case 0x33bbe8u: goto label_33bbe8;
        case 0x33bbecu: goto label_33bbec;
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bbf4u: goto label_33bbf4;
        case 0x33bbf8u: goto label_33bbf8;
        case 0x33bbfcu: goto label_33bbfc;
        case 0x33bc00u: goto label_33bc00;
        case 0x33bc04u: goto label_33bc04;
        case 0x33bc08u: goto label_33bc08;
        case 0x33bc0cu: goto label_33bc0c;
        case 0x33bc10u: goto label_33bc10;
        case 0x33bc14u: goto label_33bc14;
        case 0x33bc18u: goto label_33bc18;
        case 0x33bc1cu: goto label_33bc1c;
        case 0x33bc20u: goto label_33bc20;
        case 0x33bc24u: goto label_33bc24;
        case 0x33bc28u: goto label_33bc28;
        case 0x33bc2cu: goto label_33bc2c;
        case 0x33bc30u: goto label_33bc30;
        case 0x33bc34u: goto label_33bc34;
        case 0x33bc38u: goto label_33bc38;
        case 0x33bc3cu: goto label_33bc3c;
        case 0x33bc40u: goto label_33bc40;
        case 0x33bc44u: goto label_33bc44;
        case 0x33bc48u: goto label_33bc48;
        case 0x33bc4cu: goto label_33bc4c;
        case 0x33bc50u: goto label_33bc50;
        case 0x33bc54u: goto label_33bc54;
        case 0x33bc58u: goto label_33bc58;
        case 0x33bc5cu: goto label_33bc5c;
        case 0x33bc60u: goto label_33bc60;
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc68u: goto label_33bc68;
        case 0x33bc6cu: goto label_33bc6c;
        case 0x33bc70u: goto label_33bc70;
        case 0x33bc74u: goto label_33bc74;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc7cu: goto label_33bc7c;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bc88u: goto label_33bc88;
        case 0x33bc8cu: goto label_33bc8c;
        case 0x33bc90u: goto label_33bc90;
        case 0x33bc94u: goto label_33bc94;
        case 0x33bc98u: goto label_33bc98;
        case 0x33bc9cu: goto label_33bc9c;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bca4u: goto label_33bca4;
        case 0x33bca8u: goto label_33bca8;
        case 0x33bcacu: goto label_33bcac;
        case 0x33bcb0u: goto label_33bcb0;
        case 0x33bcb4u: goto label_33bcb4;
        case 0x33bcb8u: goto label_33bcb8;
        case 0x33bcbcu: goto label_33bcbc;
        case 0x33bcc0u: goto label_33bcc0;
        case 0x33bcc4u: goto label_33bcc4;
        case 0x33bcc8u: goto label_33bcc8;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bcd0u: goto label_33bcd0;
        case 0x33bcd4u: goto label_33bcd4;
        case 0x33bcd8u: goto label_33bcd8;
        case 0x33bcdcu: goto label_33bcdc;
        case 0x33bce0u: goto label_33bce0;
        case 0x33bce4u: goto label_33bce4;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcecu: goto label_33bcec;
        case 0x33bcf0u: goto label_33bcf0;
        case 0x33bcf4u: goto label_33bcf4;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd00u: goto label_33bd00;
        case 0x33bd04u: goto label_33bd04;
        case 0x33bd08u: goto label_33bd08;
        case 0x33bd0cu: goto label_33bd0c;
        case 0x33bd10u: goto label_33bd10;
        case 0x33bd14u: goto label_33bd14;
        case 0x33bd18u: goto label_33bd18;
        case 0x33bd1cu: goto label_33bd1c;
        case 0x33bd20u: goto label_33bd20;
        case 0x33bd24u: goto label_33bd24;
        case 0x33bd28u: goto label_33bd28;
        case 0x33bd2cu: goto label_33bd2c;
        case 0x33bd30u: goto label_33bd30;
        case 0x33bd34u: goto label_33bd34;
        case 0x33bd38u: goto label_33bd38;
        case 0x33bd3cu: goto label_33bd3c;
        case 0x33bd40u: goto label_33bd40;
        case 0x33bd44u: goto label_33bd44;
        case 0x33bd48u: goto label_33bd48;
        case 0x33bd4cu: goto label_33bd4c;
        case 0x33bd50u: goto label_33bd50;
        case 0x33bd54u: goto label_33bd54;
        case 0x33bd58u: goto label_33bd58;
        case 0x33bd5cu: goto label_33bd5c;
        case 0x33bd60u: goto label_33bd60;
        case 0x33bd64u: goto label_33bd64;
        case 0x33bd68u: goto label_33bd68;
        case 0x33bd6cu: goto label_33bd6c;
        default: break;
    }

    ctx->pc = 0x33ad90u;

label_33ad90:
    // 0x33ad90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33ad94:
    // 0x33ad94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33ad98:
    // 0x33ad98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33ad9c:
    // 0x33ad9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33ada0:
    // 0x33ada0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33ada4:
    // 0x33ada4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ada8:
    // 0x33ada8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33adac:
    // 0x33adac: 0xc0754b4  jal         func_1D52D0
label_33adb0:
    if (ctx->pc == 0x33ADB0u) {
        ctx->pc = 0x33ADB0u;
            // 0x33adb0: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x33ADB4u;
        goto label_33adb4;
    }
    ctx->pc = 0x33ADACu;
    SET_GPR_U32(ctx, 31, 0x33ADB4u);
    ctx->pc = 0x33ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ADACu;
            // 0x33adb0: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ADB4u; }
        if (ctx->pc != 0x33ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ADB4u; }
        if (ctx->pc != 0x33ADB4u) { return; }
    }
    ctx->pc = 0x33ADB4u;
label_33adb4:
    // 0x33adb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33adb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33adb8:
    // 0x33adb8: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x33adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_33adbc:
    // 0x33adbc: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x33adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_33adc0:
    // 0x33adc0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33adc4:
    if (ctx->pc == 0x33ADC4u) {
        ctx->pc = 0x33ADC8u;
        goto label_33adc8;
    }
    ctx->pc = 0x33ADC0u;
    {
        const bool branch_taken_0x33adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33adc0) {
            ctx->pc = 0x33AE00u;
            goto label_33ae00;
        }
    }
    ctx->pc = 0x33ADC8u;
label_33adc8:
    // 0x33adc8: 0x26320a50  addiu       $s2, $s1, 0xA50
    ctx->pc = 0x33adc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_33adcc:
    // 0x33adcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33adccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33add0:
    // 0x33add0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x33add0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_33add4:
    // 0x33add4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_33add8:
    if (ctx->pc == 0x33ADD8u) {
        ctx->pc = 0x33ADDCu;
        goto label_33addc;
    }
    ctx->pc = 0x33ADD4u;
    {
        const bool branch_taken_0x33add4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33add4) {
            ctx->pc = 0x33ADF0u;
            goto label_33adf0;
        }
    }
    ctx->pc = 0x33ADDCu;
label_33addc:
    // 0x33addc: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x33addcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_33ade0:
    // 0x33ade0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33ade0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_33ade4:
    // 0x33ade4: 0x320f809  jalr        $t9
label_33ade8:
    if (ctx->pc == 0x33ADE8u) {
        ctx->pc = 0x33ADECu;
        goto label_33adec;
    }
    ctx->pc = 0x33ADE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33ADECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33ADECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33ADECu; }
            if (ctx->pc != 0x33ADECu) { return; }
        }
        }
    }
    ctx->pc = 0x33ADECu;
label_33adec:
    // 0x33adec: 0x0  nop
    ctx->pc = 0x33adecu;
    // NOP
label_33adf0:
    // 0x33adf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33adf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_33adf4:
    // 0x33adf4: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x33adf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_33adf8:
    // 0x33adf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_33adfc:
    if (ctx->pc == 0x33ADFCu) {
        ctx->pc = 0x33ADFCu;
            // 0x33adfc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x33AE00u;
        goto label_33ae00;
    }
    ctx->pc = 0x33ADF8u;
    {
        const bool branch_taken_0x33adf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ADF8u;
            // 0x33adfc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33adf8) {
            ctx->pc = 0x33ADD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33add0;
        }
    }
    ctx->pc = 0x33AE00u;
label_33ae00:
    // 0x33ae00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ae04:
    // 0x33ae04: 0xa22211a4  sb          $v0, 0x11A4($s1)
    ctx->pc = 0x33ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4516), (uint8_t)GPR_U32(ctx, 2));
label_33ae08:
    // 0x33ae08: 0xc075ee8  jal         func_1D7BA0
label_33ae0c:
    if (ctx->pc == 0x33AE0Cu) {
        ctx->pc = 0x33AE0Cu;
            // 0x33ae0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AE10u;
        goto label_33ae10;
    }
    ctx->pc = 0x33AE08u;
    SET_GPR_U32(ctx, 31, 0x33AE10u);
    ctx->pc = 0x33AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE08u;
            // 0x33ae0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE10u; }
        if (ctx->pc != 0x33AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE10u; }
        if (ctx->pc != 0x33AE10u) { return; }
    }
    ctx->pc = 0x33AE10u;
label_33ae10:
    // 0x33ae10: 0xc04f26c  jal         func_13C9B0
label_33ae14:
    if (ctx->pc == 0x33AE14u) {
        ctx->pc = 0x33AE14u;
            // 0x33ae14: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x33AE18u;
        goto label_33ae18;
    }
    ctx->pc = 0x33AE10u;
    SET_GPR_U32(ctx, 31, 0x33AE18u);
    ctx->pc = 0x33AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE10u;
            // 0x33ae14: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE18u; }
        if (ctx->pc != 0x33AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE18u; }
        if (ctx->pc != 0x33AE18u) { return; }
    }
    ctx->pc = 0x33AE18u;
label_33ae18:
    // 0x33ae18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33ae18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33ae1c:
    // 0x33ae1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33ae20:
    // 0x33ae20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33ae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33ae24:
    // 0x33ae24: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x33ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_33ae28:
    // 0x33ae28: 0xc04cbd8  jal         func_132F60
label_33ae2c:
    if (ctx->pc == 0x33AE2Cu) {
        ctx->pc = 0x33AE2Cu;
            // 0x33ae2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x33AE30u;
        goto label_33ae30;
    }
    ctx->pc = 0x33AE28u;
    SET_GPR_U32(ctx, 31, 0x33AE30u);
    ctx->pc = 0x33AE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE28u;
            // 0x33ae2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE30u; }
        if (ctx->pc != 0x33AE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE30u; }
        if (ctx->pc != 0x33AE30u) { return; }
    }
    ctx->pc = 0x33AE30u;
label_33ae30:
    // 0x33ae30: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae34:
    // 0x33ae34: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x33ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_33ae38:
    // 0x33ae38: 0xc04cc04  jal         func_133010
label_33ae3c:
    if (ctx->pc == 0x33AE3Cu) {
        ctx->pc = 0x33AE3Cu;
            // 0x33ae3c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE40u;
        goto label_33ae40;
    }
    ctx->pc = 0x33AE38u;
    SET_GPR_U32(ctx, 31, 0x33AE40u);
    ctx->pc = 0x33AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE38u;
            // 0x33ae3c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE40u; }
        if (ctx->pc != 0x33AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE40u; }
        if (ctx->pc != 0x33AE40u) { return; }
    }
    ctx->pc = 0x33AE40u;
label_33ae40:
    // 0x33ae40: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae44:
    // 0x33ae44: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x33ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_33ae48:
    // 0x33ae48: 0xc04cc04  jal         func_133010
label_33ae4c:
    if (ctx->pc == 0x33AE4Cu) {
        ctx->pc = 0x33AE4Cu;
            // 0x33ae4c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE50u;
        goto label_33ae50;
    }
    ctx->pc = 0x33AE48u;
    SET_GPR_U32(ctx, 31, 0x33AE50u);
    ctx->pc = 0x33AE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE48u;
            // 0x33ae4c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE50u; }
        if (ctx->pc != 0x33AE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE50u; }
        if (ctx->pc != 0x33AE50u) { return; }
    }
    ctx->pc = 0x33AE50u;
label_33ae50:
    // 0x33ae50: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae54:
    // 0x33ae54: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x33ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_33ae58:
    // 0x33ae58: 0xc04cc04  jal         func_133010
label_33ae5c:
    if (ctx->pc == 0x33AE5Cu) {
        ctx->pc = 0x33AE5Cu;
            // 0x33ae5c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE60u;
        goto label_33ae60;
    }
    ctx->pc = 0x33AE58u;
    SET_GPR_U32(ctx, 31, 0x33AE60u);
    ctx->pc = 0x33AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE58u;
            // 0x33ae5c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE60u; }
        if (ctx->pc != 0x33AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE60u; }
        if (ctx->pc != 0x33AE60u) { return; }
    }
    ctx->pc = 0x33AE60u;
label_33ae60:
    // 0x33ae60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae64:
    // 0x33ae64: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x33ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_33ae68:
    // 0x33ae68: 0xc04cc04  jal         func_133010
label_33ae6c:
    if (ctx->pc == 0x33AE6Cu) {
        ctx->pc = 0x33AE6Cu;
            // 0x33ae6c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE70u;
        goto label_33ae70;
    }
    ctx->pc = 0x33AE68u;
    SET_GPR_U32(ctx, 31, 0x33AE70u);
    ctx->pc = 0x33AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE68u;
            // 0x33ae6c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE70u; }
        if (ctx->pc != 0x33AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE70u; }
        if (ctx->pc != 0x33AE70u) { return; }
    }
    ctx->pc = 0x33AE70u;
label_33ae70:
    // 0x33ae70: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae74:
    // 0x33ae74: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x33ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_33ae78:
    // 0x33ae78: 0xc04cc04  jal         func_133010
label_33ae7c:
    if (ctx->pc == 0x33AE7Cu) {
        ctx->pc = 0x33AE7Cu;
            // 0x33ae7c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE80u;
        goto label_33ae80;
    }
    ctx->pc = 0x33AE78u;
    SET_GPR_U32(ctx, 31, 0x33AE80u);
    ctx->pc = 0x33AE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE78u;
            // 0x33ae7c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE80u; }
        if (ctx->pc != 0x33AE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE80u; }
        if (ctx->pc != 0x33AE80u) { return; }
    }
    ctx->pc = 0x33AE80u;
label_33ae80:
    // 0x33ae80: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae84:
    // 0x33ae84: 0x26240350  addiu       $a0, $s1, 0x350
    ctx->pc = 0x33ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_33ae88:
    // 0x33ae88: 0xc04cc04  jal         func_133010
label_33ae8c:
    if (ctx->pc == 0x33AE8Cu) {
        ctx->pc = 0x33AE8Cu;
            // 0x33ae8c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AE90u;
        goto label_33ae90;
    }
    ctx->pc = 0x33AE88u;
    SET_GPR_U32(ctx, 31, 0x33AE90u);
    ctx->pc = 0x33AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE88u;
            // 0x33ae8c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE90u; }
        if (ctx->pc != 0x33AE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AE90u; }
        if (ctx->pc != 0x33AE90u) { return; }
    }
    ctx->pc = 0x33AE90u;
label_33ae90:
    // 0x33ae90: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33ae94:
    // 0x33ae94: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x33ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_33ae98:
    // 0x33ae98: 0xc04cc04  jal         func_133010
label_33ae9c:
    if (ctx->pc == 0x33AE9Cu) {
        ctx->pc = 0x33AE9Cu;
            // 0x33ae9c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AEA0u;
        goto label_33aea0;
    }
    ctx->pc = 0x33AE98u;
    SET_GPR_U32(ctx, 31, 0x33AEA0u);
    ctx->pc = 0x33AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AE98u;
            // 0x33ae9c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AEA0u; }
        if (ctx->pc != 0x33AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AEA0u; }
        if (ctx->pc != 0x33AEA0u) { return; }
    }
    ctx->pc = 0x33AEA0u;
label_33aea0:
    // 0x33aea0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33aea4:
    // 0x33aea4: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x33aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_33aea8:
    // 0x33aea8: 0xc04cc04  jal         func_133010
label_33aeac:
    if (ctx->pc == 0x33AEACu) {
        ctx->pc = 0x33AEACu;
            // 0x33aeac: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33AEB0u;
        goto label_33aeb0;
    }
    ctx->pc = 0x33AEA8u;
    SET_GPR_U32(ctx, 31, 0x33AEB0u);
    ctx->pc = 0x33AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AEA8u;
            // 0x33aeac: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AEB0u; }
        if (ctx->pc != 0x33AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AEB0u; }
        if (ctx->pc != 0x33AEB0u) { return; }
    }
    ctx->pc = 0x33AEB0u;
label_33aeb0:
    // 0x33aeb0: 0xae200de4  sw          $zero, 0xDE4($s1)
    ctx->pc = 0x33aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
label_33aeb4:
    // 0x33aeb4: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x33aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_33aeb8:
    // 0x33aeb8: 0xae200dd8  sw          $zero, 0xDD8($s1)
    ctx->pc = 0x33aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3544), GPR_U32(ctx, 0));
label_33aebc:
    // 0x33aebc: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x33aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_33aec0:
    // 0x33aec0: 0xae200e2c  sw          $zero, 0xE2C($s1)
    ctx->pc = 0x33aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3628), GPR_U32(ctx, 0));
label_33aec4:
    // 0x33aec4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33aec8:
    // 0x33aec8: 0xae200dc0  sw          $zero, 0xDC0($s1)
    ctx->pc = 0x33aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3520), GPR_U32(ctx, 0));
label_33aecc:
    // 0x33aecc: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x33aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_33aed0:
    // 0x33aed0: 0xae200dcc  sw          $zero, 0xDCC($s1)
    ctx->pc = 0x33aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
label_33aed4:
    // 0x33aed4: 0xae200dd0  sw          $zero, 0xDD0($s1)
    ctx->pc = 0x33aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3536), GPR_U32(ctx, 0));
label_33aed8:
    // 0x33aed8: 0xae200dd4  sw          $zero, 0xDD4($s1)
    ctx->pc = 0x33aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 0));
label_33aedc:
    // 0x33aedc: 0x8e250d9c  lw          $a1, 0xD9C($s1)
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_33aee0:
    // 0x33aee0: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x33aee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
label_33aee4:
    // 0x33aee4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x33aee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_33aee8:
    // 0x33aee8: 0xae250d9c  sw          $a1, 0xD9C($s1)
    ctx->pc = 0x33aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 5));
label_33aeec:
    // 0x33aeec: 0xae240d9c  sw          $a0, 0xD9C($s1)
    ctx->pc = 0x33aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 4));
label_33aef0:
    // 0x33aef0: 0x8e250d74  lw          $a1, 0xD74($s1)
    ctx->pc = 0x33aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_33aef4:
    // 0x33aef4: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x33aef4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_33aef8:
    // 0x33aef8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x33aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_33aefc:
    // 0x33aefc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x33aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33af00:
    // 0x33af00: 0xa0800281  sb          $zero, 0x281($a0)
    ctx->pc = 0x33af00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 641), (uint8_t)GPR_U32(ctx, 0));
label_33af04:
    // 0x33af04: 0xae230db8  sw          $v1, 0xDB8($s1)
    ctx->pc = 0x33af04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 3));
label_33af08:
    // 0x33af08: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x33af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33af0c:
    // 0x33af0c: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x33af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_33af10:
    // 0x33af10: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33af14:
    // 0x33af14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33af14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33af18:
    // 0x33af18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33af1c:
    // 0x33af1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33af20:
    // 0x33af20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33af20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33af24:
    // 0x33af24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33af24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33af28:
    // 0x33af28: 0x320f809  jalr        $t9
label_33af2c:
    if (ctx->pc == 0x33AF2Cu) {
        ctx->pc = 0x33AF30u;
        goto label_33af30;
    }
    ctx->pc = 0x33AF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33AF30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33AF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33AF30u; }
            if (ctx->pc != 0x33AF30u) { return; }
        }
        }
    }
    ctx->pc = 0x33AF30u;
label_33af30:
    // 0x33af30: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x33af30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_33af34:
    // 0x33af34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33af38:
    // 0x33af38: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x33af38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_33af3c:
    // 0x33af3c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x33af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_33af40:
    // 0x33af40: 0xc07649c  jal         func_1D9270
label_33af44:
    if (ctx->pc == 0x33AF44u) {
        ctx->pc = 0x33AF44u;
            // 0x33af44: 0xa0400566  sb          $zero, 0x566($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33AF48u;
        goto label_33af48;
    }
    ctx->pc = 0x33AF40u;
    SET_GPR_U32(ctx, 31, 0x33AF48u);
    ctx->pc = 0x33AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AF40u;
            // 0x33af44: 0xa0400566  sb          $zero, 0x566($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AF48u; }
        if (ctx->pc != 0x33AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AF48u; }
        if (ctx->pc != 0x33AF48u) { return; }
    }
    ctx->pc = 0x33AF48u;
label_33af48:
    // 0x33af48: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x33af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_33af4c:
    // 0x33af4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33af50:
    // 0x33af50: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_33af54:
    if (ctx->pc == 0x33AF54u) {
        ctx->pc = 0x33AF58u;
        goto label_33af58;
    }
    ctx->pc = 0x33AF50u;
    {
        const bool branch_taken_0x33af50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af50) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF58u;
label_33af58:
    // 0x33af58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33af5c:
    // 0x33af5c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_33af60:
    if (ctx->pc == 0x33AF60u) {
        ctx->pc = 0x33AF64u;
        goto label_33af64;
    }
    ctx->pc = 0x33AF5Cu;
    {
        const bool branch_taken_0x33af5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af5c) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF64u;
label_33af64:
    // 0x33af64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33af68:
    // 0x33af68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_33af6c:
    if (ctx->pc == 0x33AF6Cu) {
        ctx->pc = 0x33AF70u;
        goto label_33af70;
    }
    ctx->pc = 0x33AF68u;
    {
        const bool branch_taken_0x33af68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af68) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF70u;
label_33af70:
    // 0x33af70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33af74:
    if (ctx->pc == 0x33AF74u) {
        ctx->pc = 0x33AF78u;
        goto label_33af78;
    }
    ctx->pc = 0x33AF70u;
    {
        const bool branch_taken_0x33af70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af70) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF78u;
label_33af78:
    // 0x33af78: 0x10000009  b           . + 4 + (0x9 << 2)
label_33af7c:
    if (ctx->pc == 0x33AF7Cu) {
        ctx->pc = 0x33AF7Cu;
            // 0x33af7c: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x33AF80u;
        goto label_33af80;
    }
    ctx->pc = 0x33AF78u;
    {
        const bool branch_taken_0x33af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AF78u;
            // 0x33af7c: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af78) {
            ctx->pc = 0x33AFA0u;
            goto label_33afa0;
        }
    }
    ctx->pc = 0x33AF80u;
label_33af80:
    // 0x33af80: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33af84:
    // 0x33af84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33af88:
    // 0x33af88: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x33af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33af8c:
    // 0x33af8c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33af90:
    // 0x33af90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33af94:
    // 0x33af94: 0xc0a950c  jal         func_2A5430
label_33af98:
    if (ctx->pc == 0x33AF98u) {
        ctx->pc = 0x33AF98u;
            // 0x33af98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x33AF9Cu;
        goto label_33af9c;
    }
    ctx->pc = 0x33AF94u;
    SET_GPR_U32(ctx, 31, 0x33AF9Cu);
    ctx->pc = 0x33AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AF94u;
            // 0x33af98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5430u;
    if (runtime->hasFunction(0x2A5430u)) {
        auto targetFn = runtime->lookupFunction(0x2A5430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AF9Cu; }
        if (ctx->pc != 0x33AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5430_0x2a5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AF9Cu; }
        if (ctx->pc != 0x33AF9Cu) { return; }
    }
    ctx->pc = 0x33AF9Cu;
label_33af9c:
    // 0x33af9c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x33af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33afa0:
    // 0x33afa0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x33afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_33afa4:
    // 0x33afa4: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x33afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33afa8:
    // 0x33afa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33afa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33afac:
    // 0x33afac: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_33afb0:
    // 0x33afb0: 0xe6210de0  swc1        $f1, 0xDE0($s1)
    ctx->pc = 0x33afb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_33afb4:
    // 0x33afb4: 0xe6200ddc  swc1        $f0, 0xDDC($s1)
    ctx->pc = 0x33afb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3548), bits); }
label_33afb8:
    // 0x33afb8: 0xc077fb0  jal         func_1DFEC0
label_33afbc:
    if (ctx->pc == 0x33AFBCu) {
        ctx->pc = 0x33AFBCu;
            // 0x33afbc: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x33AFC0u;
        goto label_33afc0;
    }
    ctx->pc = 0x33AFB8u;
    SET_GPR_U32(ctx, 31, 0x33AFC0u);
    ctx->pc = 0x33AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AFB8u;
            // 0x33afbc: 0xae200de4  sw          $zero, 0xDE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFC0u; }
        if (ctx->pc != 0x33AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFC0u; }
        if (ctx->pc != 0x33AFC0u) { return; }
    }
    ctx->pc = 0x33AFC0u;
label_33afc0:
    // 0x33afc0: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x33afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_33afc4:
    // 0x33afc4: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x33afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_33afc8:
    // 0x33afc8: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x33afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3616), GPR_U32(ctx, 0));
label_33afcc:
    // 0x33afcc: 0xae200e24  sw          $zero, 0xE24($s1)
    ctx->pc = 0x33afccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3620), GPR_U32(ctx, 0));
label_33afd0:
    // 0x33afd0: 0xc0b6764  jal         func_2D9D90
label_33afd4:
    if (ctx->pc == 0x33AFD4u) {
        ctx->pc = 0x33AFD4u;
            // 0x33afd4: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x33AFD8u;
        goto label_33afd8;
    }
    ctx->pc = 0x33AFD0u;
    SET_GPR_U32(ctx, 31, 0x33AFD8u);
    ctx->pc = 0x33AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AFD0u;
            // 0x33afd4: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFD8u; }
        if (ctx->pc != 0x33AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFD8u; }
        if (ctx->pc != 0x33AFD8u) { return; }
    }
    ctx->pc = 0x33AFD8u;
label_33afd8:
    // 0x33afd8: 0xc1309f0  jal         func_4C27C0
label_33afdc:
    if (ctx->pc == 0x33AFDCu) {
        ctx->pc = 0x33AFDCu;
            // 0x33afdc: 0x26240c90  addiu       $a0, $s1, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
        ctx->pc = 0x33AFE0u;
        goto label_33afe0;
    }
    ctx->pc = 0x33AFD8u;
    SET_GPR_U32(ctx, 31, 0x33AFE0u);
    ctx->pc = 0x33AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AFD8u;
            // 0x33afdc: 0x26240c90  addiu       $a0, $s1, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C27C0u;
    if (runtime->hasFunction(0x4C27C0u)) {
        auto targetFn = runtime->lookupFunction(0x4C27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFE0u; }
        if (ctx->pc != 0x33AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C27C0_0x4c27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFE0u; }
        if (ctx->pc != 0x33AFE0u) { return; }
    }
    ctx->pc = 0x33AFE0u;
label_33afe0:
    // 0x33afe0: 0xc077fd4  jal         func_1DFF50
label_33afe4:
    if (ctx->pc == 0x33AFE4u) {
        ctx->pc = 0x33AFE4u;
            // 0x33afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AFE8u;
        goto label_33afe8;
    }
    ctx->pc = 0x33AFE0u;
    SET_GPR_U32(ctx, 31, 0x33AFE8u);
    ctx->pc = 0x33AFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AFE0u;
            // 0x33afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFE8u; }
        if (ctx->pc != 0x33AFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AFE8u; }
        if (ctx->pc != 0x33AFE8u) { return; }
    }
    ctx->pc = 0x33AFE8u;
label_33afe8:
    // 0x33afe8: 0xae2011e8  sw          $zero, 0x11E8($s1)
    ctx->pc = 0x33afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
label_33afec:
    // 0x33afec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x33afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33aff0:
    // 0x33aff0: 0xa22011ec  sb          $zero, 0x11EC($s1)
    ctx->pc = 0x33aff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4588), (uint8_t)GPR_U32(ctx, 0));
label_33aff4:
    // 0x33aff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33aff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33aff8:
    // 0x33aff8: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x33aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_33affc:
    // 0x33affc: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x33affcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_33b000:
    // 0x33b000: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33b004:
    if (ctx->pc == 0x33B004u) {
        ctx->pc = 0x33B004u;
            // 0x33b004: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->pc = 0x33B008u;
        goto label_33b008;
    }
    ctx->pc = 0x33B000u;
    {
        const bool branch_taken_0x33b000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b000) {
            ctx->pc = 0x33B004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B000u;
            // 0x33b004: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B028u;
            goto label_33b028;
        }
    }
    ctx->pc = 0x33B008u;
label_33b008:
    // 0x33b008: 0xe62011e0  swc1        $f0, 0x11E0($s1)
    ctx->pc = 0x33b008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4576), bits); }
label_33b00c:
    // 0x33b00c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x33b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_33b010:
    // 0x33b010: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x33b010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_33b014:
    // 0x33b014: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_33b018:
    // 0x33b018: 0x320f809  jalr        $t9
label_33b01c:
    if (ctx->pc == 0x33B01Cu) {
        ctx->pc = 0x33B020u;
        goto label_33b020;
    }
    ctx->pc = 0x33B018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33B020u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33B020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33B020u; }
            if (ctx->pc != 0x33B020u) { return; }
        }
        }
    }
    ctx->pc = 0x33B020u;
label_33b020:
    // 0x33b020: 0xae2011d4  sw          $zero, 0x11D4($s1)
    ctx->pc = 0x33b020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 0));
label_33b024:
    // 0x33b024: 0x26240ab0  addiu       $a0, $s1, 0xAB0
    ctx->pc = 0x33b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
label_33b028:
    // 0x33b028: 0xc0bbec8  jal         func_2EFB20
label_33b02c:
    if (ctx->pc == 0x33B02Cu) {
        ctx->pc = 0x33B030u;
        goto label_33b030;
    }
    ctx->pc = 0x33B028u;
    SET_GPR_U32(ctx, 31, 0x33B030u);
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B030u; }
        if (ctx->pc != 0x33B030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B030u; }
        if (ctx->pc != 0x33B030u) { return; }
    }
    ctx->pc = 0x33B030u;
label_33b030:
    // 0x33b030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b034:
    // 0x33b034: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x33b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_33b038:
    // 0x33b038: 0x8c420964  lw          $v0, 0x964($v0)
    ctx->pc = 0x33b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
label_33b03c:
    // 0x33b03c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x33b03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33b040:
    // 0x33b040: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_33b044:
    if (ctx->pc == 0x33B044u) {
        ctx->pc = 0x33B044u;
            // 0x33b044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x33B048u;
        goto label_33b048;
    }
    ctx->pc = 0x33B040u;
    {
        const bool branch_taken_0x33b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b040) {
            ctx->pc = 0x33B044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B040u;
            // 0x33b044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B058u;
            goto label_33b058;
        }
    }
    ctx->pc = 0x33B048u;
label_33b048:
    // 0x33b048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b04c:
    // 0x33b04c: 0xc075ecc  jal         func_1D7B30
label_33b050:
    if (ctx->pc == 0x33B050u) {
        ctx->pc = 0x33B050u;
            // 0x33b050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B054u;
        goto label_33b054;
    }
    ctx->pc = 0x33B04Cu;
    SET_GPR_U32(ctx, 31, 0x33B054u);
    ctx->pc = 0x33B050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B04Cu;
            // 0x33b050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B054u; }
        if (ctx->pc != 0x33B054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B054u; }
        if (ctx->pc != 0x33B054u) { return; }
    }
    ctx->pc = 0x33B054u;
label_33b054:
    // 0x33b054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b058:
    // 0x33b058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33b058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b05c:
    // 0x33b05c: 0xa6220c68  sh          $v0, 0xC68($s1)
    ctx->pc = 0x33b05cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3176), (uint16_t)GPR_U32(ctx, 2));
label_33b060:
    // 0x33b060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b064:
    // 0x33b064: 0xc07626c  jal         func_1D89B0
label_33b068:
    if (ctx->pc == 0x33B068u) {
        ctx->pc = 0x33B068u;
            // 0x33b068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B06Cu;
        goto label_33b06c;
    }
    ctx->pc = 0x33B064u;
    SET_GPR_U32(ctx, 31, 0x33B06Cu);
    ctx->pc = 0x33B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B064u;
            // 0x33b068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B06Cu; }
        if (ctx->pc != 0x33B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B06Cu; }
        if (ctx->pc != 0x33B06Cu) { return; }
    }
    ctx->pc = 0x33B06Cu;
label_33b06c:
    // 0x33b06c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x33b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b070:
    // 0x33b070: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x33b070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33b074:
    // 0x33b074: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x33b074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_33b078:
    // 0x33b078: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_33b07c:
    if (ctx->pc == 0x33B07Cu) {
        ctx->pc = 0x33B07Cu;
            // 0x33b07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B080u;
        goto label_33b080;
    }
    ctx->pc = 0x33B078u;
    {
        const bool branch_taken_0x33b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b078) {
            ctx->pc = 0x33B07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B078u;
            // 0x33b07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33b064;
        }
    }
    ctx->pc = 0x33B080u;
label_33b080:
    // 0x33b080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33b080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b084:
    // 0x33b084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b088:
    // 0x33b088: 0xc076220  jal         func_1D8880
label_33b08c:
    if (ctx->pc == 0x33B08Cu) {
        ctx->pc = 0x33B08Cu;
            // 0x33b08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B090u;
        goto label_33b090;
    }
    ctx->pc = 0x33B088u;
    SET_GPR_U32(ctx, 31, 0x33B090u);
    ctx->pc = 0x33B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B088u;
            // 0x33b08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8880u;
    if (runtime->hasFunction(0x1D8880u)) {
        auto targetFn = runtime->lookupFunction(0x1D8880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B090u; }
        if (ctx->pc != 0x33B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8880_0x1d8880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B090u; }
        if (ctx->pc != 0x33B090u) { return; }
    }
    ctx->pc = 0x33B090u;
label_33b090:
    // 0x33b090: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x33b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b094:
    // 0x33b094: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x33b094u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33b098:
    // 0x33b098: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x33b098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_33b09c:
    // 0x33b09c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_33b0a0:
    if (ctx->pc == 0x33B0A0u) {
        ctx->pc = 0x33B0A0u;
            // 0x33b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B0A4u;
        goto label_33b0a4;
    }
    ctx->pc = 0x33B09Cu;
    {
        const bool branch_taken_0x33b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b09c) {
            ctx->pc = 0x33B0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B09Cu;
            // 0x33b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33b088;
        }
    }
    ctx->pc = 0x33B0A4u;
label_33b0a4:
    // 0x33b0a4: 0xc0eeff8  jal         func_3BBFE0
label_33b0a8:
    if (ctx->pc == 0x33B0A8u) {
        ctx->pc = 0x33B0A8u;
            // 0x33b0a8: 0x8e240a60  lw          $a0, 0xA60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
        ctx->pc = 0x33B0ACu;
        goto label_33b0ac;
    }
    ctx->pc = 0x33B0A4u;
    SET_GPR_U32(ctx, 31, 0x33B0ACu);
    ctx->pc = 0x33B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B0A4u;
            // 0x33b0a8: 0x8e240a60  lw          $a0, 0xA60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BBFE0u;
    if (runtime->hasFunction(0x3BBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x3BBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B0ACu; }
        if (ctx->pc != 0x33B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BBFE0_0x3bbfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B0ACu; }
        if (ctx->pc != 0x33B0ACu) { return; }
    }
    ctx->pc = 0x33B0ACu;
label_33b0ac:
    // 0x33b0ac: 0xc076164  jal         func_1D8590
label_33b0b0:
    if (ctx->pc == 0x33B0B0u) {
        ctx->pc = 0x33B0B0u;
            // 0x33b0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B0B4u;
        goto label_33b0b4;
    }
    ctx->pc = 0x33B0ACu;
    SET_GPR_U32(ctx, 31, 0x33B0B4u);
    ctx->pc = 0x33B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B0ACu;
            // 0x33b0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8590u;
    if (runtime->hasFunction(0x1D8590u)) {
        auto targetFn = runtime->lookupFunction(0x1D8590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B0B4u; }
        if (ctx->pc != 0x33B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8590_0x1d8590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B0B4u; }
        if (ctx->pc != 0x33B0B4u) { return; }
    }
    ctx->pc = 0x33B0B4u;
label_33b0b4:
    // 0x33b0b4: 0xae200e10  sw          $zero, 0xE10($s1)
    ctx->pc = 0x33b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 0));
label_33b0b8:
    // 0x33b0b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b0bc:
    // 0x33b0bc: 0xa220119e  sb          $zero, 0x119E($s1)
    ctx->pc = 0x33b0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4510), (uint8_t)GPR_U32(ctx, 0));
label_33b0c0:
    // 0x33b0c0: 0x8e230d60  lw          $v1, 0xD60($s1)
    ctx->pc = 0x33b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_33b0c4:
    // 0x33b0c4: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x33b0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
label_33b0c8:
    // 0x33b0c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33b0cc:
    // 0x33b0cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33b0d0:
    // 0x33b0d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b0d4:
    // 0x33b0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b0d8:
    // 0x33b0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33b0dc:
    // 0x33b0dc: 0x3e00008  jr          $ra
label_33b0e0:
    if (ctx->pc == 0x33B0E0u) {
        ctx->pc = 0x33B0E0u;
            // 0x33b0e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x33B0E4u;
        goto label_33b0e4;
    }
    ctx->pc = 0x33B0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B0DCu;
            // 0x33b0e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33B0E4u;
label_33b0e4:
    // 0x33b0e4: 0x0  nop
    ctx->pc = 0x33b0e4u;
    // NOP
label_33b0e8:
    // 0x33b0e8: 0x0  nop
    ctx->pc = 0x33b0e8u;
    // NOP
label_33b0ec:
    // 0x33b0ec: 0x0  nop
    ctx->pc = 0x33b0ecu;
    // NOP
label_33b0f0:
    // 0x33b0f0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_33b0f4:
    // 0x33b0f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33b0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b0f8:
    // 0x33b0f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x33b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_33b0fc:
    // 0x33b0fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x33b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_33b100:
    // 0x33b100: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_33b104:
    // 0x33b104: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_33b108:
    // 0x33b108: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_33b10c:
    // 0x33b10c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33b110:
    // 0x33b110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33b114:
    // 0x33b114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33b118:
    // 0x33b118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33b11c:
    // 0x33b11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33b120:
    // 0x33b120: 0x8c830e30  lw          $v1, 0xE30($a0)
    ctx->pc = 0x33b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_33b124:
    // 0x33b124: 0x1066004c  beq         $v1, $a2, . + 4 + (0x4C << 2)
label_33b128:
    if (ctx->pc == 0x33B128u) {
        ctx->pc = 0x33B128u;
            // 0x33b128: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B12Cu;
        goto label_33b12c;
    }
    ctx->pc = 0x33B124u;
    {
        const bool branch_taken_0x33b124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x33B128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B124u;
            // 0x33b128: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b124) {
            ctx->pc = 0x33B258u;
            goto label_33b258;
        }
    }
    ctx->pc = 0x33B12Cu;
label_33b12c:
    // 0x33b12c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33b130:
    if (ctx->pc == 0x33B130u) {
        ctx->pc = 0x33B134u;
        goto label_33b134;
    }
    ctx->pc = 0x33B12Cu;
    {
        const bool branch_taken_0x33b12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b12c) {
            ctx->pc = 0x33B13Cu;
            goto label_33b13c;
        }
    }
    ctx->pc = 0x33B134u;
label_33b134:
    // 0x33b134: 0x10000303  b           . + 4 + (0x303 << 2)
label_33b138:
    if (ctx->pc == 0x33B138u) {
        ctx->pc = 0x33B138u;
            // 0x33b138: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x33B13Cu;
        goto label_33b13c;
    }
    ctx->pc = 0x33B134u;
    {
        const bool branch_taken_0x33b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B134u;
            // 0x33b138: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b134) {
            ctx->pc = 0x33BD44u;
            goto label_33bd44;
        }
    }
    ctx->pc = 0x33B13Cu;
label_33b13c:
    // 0x33b13c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33b140:
    // 0x33b140: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x33b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33b144:
    // 0x33b144: 0xc6a20e1c  lwc1        $f2, 0xE1C($s5)
    ctx->pc = 0x33b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33b148:
    // 0x33b148: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x33b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33b14c:
    // 0x33b14c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x33b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_33b150:
    // 0x33b150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33b150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33b154:
    // 0x33b154: 0x0  nop
    ctx->pc = 0x33b154u;
    // NOP
label_33b158:
    // 0x33b158: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x33b158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_33b15c:
    // 0x33b15c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33b15cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33b160:
    // 0x33b160: 0x450102f7  bc1t        . + 4 + (0x2F7 << 2)
label_33b164:
    if (ctx->pc == 0x33B164u) {
        ctx->pc = 0x33B164u;
            // 0x33b164: 0xe6a10e1c  swc1        $f1, 0xE1C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3612), bits); }
        ctx->pc = 0x33B168u;
        goto label_33b168;
    }
    ctx->pc = 0x33B160u;
    {
        const bool branch_taken_0x33b160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B160u;
            // 0x33b164: 0xe6a10e1c  swc1        $f1, 0xE1C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b160) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33B168u;
label_33b168:
    // 0x33b168: 0xaea60e30  sw          $a2, 0xE30($s5)
    ctx->pc = 0x33b168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 6));
label_33b16c:
    // 0x33b16c: 0xc0ceb64  jal         func_33AD90
label_33b170:
    if (ctx->pc == 0x33B170u) {
        ctx->pc = 0x33B170u;
            // 0x33b170: 0xaea00e1c  sw          $zero, 0xE1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x33B174u;
        goto label_33b174;
    }
    ctx->pc = 0x33B16Cu;
    SET_GPR_U32(ctx, 31, 0x33B174u);
    ctx->pc = 0x33B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B16Cu;
            // 0x33b170: 0xaea00e1c  sw          $zero, 0xE1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33AD90u;
    goto label_33ad90;
    ctx->pc = 0x33B174u;
label_33b174:
    // 0x33b174: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33b174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33b178:
    // 0x33b178: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x33b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_33b17c:
    // 0x33b17c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x33b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_33b180:
    // 0x33b180: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x33b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_33b184:
    // 0x33b184: 0x146402ee  bne         $v1, $a0, . + 4 + (0x2EE << 2)
label_33b188:
    if (ctx->pc == 0x33B188u) {
        ctx->pc = 0x33B18Cu;
        goto label_33b18c;
    }
    ctx->pc = 0x33B184u;
    {
        const bool branch_taken_0x33b184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b184) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33B18Cu;
label_33b18c:
    // 0x33b18c: 0x26a402d0  addiu       $a0, $s5, 0x2D0
    ctx->pc = 0x33b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
label_33b190:
    // 0x33b190: 0xc04cc04  jal         func_133010
label_33b194:
    if (ctx->pc == 0x33B194u) {
        ctx->pc = 0x33B194u;
            // 0x33b194: 0x26a502c0  addiu       $a1, $s5, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
        ctx->pc = 0x33B198u;
        goto label_33b198;
    }
    ctx->pc = 0x33B190u;
    SET_GPR_U32(ctx, 31, 0x33B198u);
    ctx->pc = 0x33B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B190u;
            // 0x33b194: 0x26a502c0  addiu       $a1, $s5, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B198u; }
        if (ctx->pc != 0x33B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B198u; }
        if (ctx->pc != 0x33B198u) { return; }
    }
    ctx->pc = 0x33B198u;
label_33b198:
    // 0x33b198: 0x26a402c0  addiu       $a0, $s5, 0x2C0
    ctx->pc = 0x33b198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_33b19c:
    // 0x33b19c: 0xc04cc04  jal         func_133010
label_33b1a0:
    if (ctx->pc == 0x33B1A0u) {
        ctx->pc = 0x33B1A0u;
            // 0x33b1a0: 0x26a503e0  addiu       $a1, $s5, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
        ctx->pc = 0x33B1A4u;
        goto label_33b1a4;
    }
    ctx->pc = 0x33B19Cu;
    SET_GPR_U32(ctx, 31, 0x33B1A4u);
    ctx->pc = 0x33B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B19Cu;
            // 0x33b1a0: 0x26a503e0  addiu       $a1, $s5, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1A4u; }
        if (ctx->pc != 0x33B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1A4u; }
        if (ctx->pc != 0x33B1A4u) { return; }
    }
    ctx->pc = 0x33B1A4u;
label_33b1a4:
    // 0x33b1a4: 0x8eb00d74  lw          $s0, 0xD74($s5)
    ctx->pc = 0x33b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
label_33b1a8:
    // 0x33b1a8: 0xc6a203e8  lwc1        $f2, 0x3E8($s5)
    ctx->pc = 0x33b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33b1ac:
    // 0x33b1ac: 0xc6a103e4  lwc1        $f1, 0x3E4($s5)
    ctx->pc = 0x33b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33b1b0:
    // 0x33b1b0: 0xc6a003e0  lwc1        $f0, 0x3E0($s5)
    ctx->pc = 0x33b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33b1b4:
    // 0x33b1b4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x33b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_33b1b8:
    // 0x33b1b8: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x33b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
label_33b1bc:
    // 0x33b1bc: 0xe7a10224  swc1        $f1, 0x224($sp)
    ctx->pc = 0x33b1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_33b1c0:
    // 0x33b1c0: 0xe7a20228  swc1        $f2, 0x228($sp)
    ctx->pc = 0x33b1c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_33b1c4:
    // 0x33b1c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33b1c8:
    // 0x33b1c8: 0xc0a5444  jal         func_295110
label_33b1cc:
    if (ctx->pc == 0x33B1CCu) {
        ctx->pc = 0x33B1CCu;
            // 0x33b1cc: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x33B1D0u;
        goto label_33b1d0;
    }
    ctx->pc = 0x33B1C8u;
    SET_GPR_U32(ctx, 31, 0x33B1D0u);
    ctx->pc = 0x33B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B1C8u;
            // 0x33b1cc: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1D0u; }
        if (ctx->pc != 0x33B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1D0u; }
        if (ctx->pc != 0x33B1D0u) { return; }
    }
    ctx->pc = 0x33B1D0u;
label_33b1d0:
    // 0x33b1d0: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x33b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
label_33b1d4:
    // 0x33b1d4: 0x26a40560  addiu       $a0, $s5, 0x560
    ctx->pc = 0x33b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_33b1d8:
    // 0x33b1d8: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x33b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_33b1dc:
    // 0x33b1dc: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x33b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_33b1e0:
    // 0x33b1e0: 0xc075368  jal         func_1D4DA0
label_33b1e4:
    if (ctx->pc == 0x33B1E4u) {
        ctx->pc = 0x33B1E4u;
            // 0x33b1e4: 0xae0002dc  sw          $zero, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
        ctx->pc = 0x33B1E8u;
        goto label_33b1e8;
    }
    ctx->pc = 0x33B1E0u;
    SET_GPR_U32(ctx, 31, 0x33B1E8u);
    ctx->pc = 0x33B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B1E0u;
            // 0x33b1e4: 0xae0002dc  sw          $zero, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DA0u;
    if (runtime->hasFunction(0x1D4DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1E8u; }
        if (ctx->pc != 0x33B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DA0_0x1d4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1E8u; }
        if (ctx->pc != 0x33B1E8u) { return; }
    }
    ctx->pc = 0x33B1E8u;
label_33b1e8:
    // 0x33b1e8: 0x26a402e0  addiu       $a0, $s5, 0x2E0
    ctx->pc = 0x33b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
label_33b1ec:
    // 0x33b1ec: 0xc04cc04  jal         func_133010
label_33b1f0:
    if (ctx->pc == 0x33B1F0u) {
        ctx->pc = 0x33B1F0u;
            // 0x33b1f0: 0x26a503f0  addiu       $a1, $s5, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
        ctx->pc = 0x33B1F4u;
        goto label_33b1f4;
    }
    ctx->pc = 0x33B1ECu;
    SET_GPR_U32(ctx, 31, 0x33B1F4u);
    ctx->pc = 0x33B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B1ECu;
            // 0x33b1f0: 0x26a503f0  addiu       $a1, $s5, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1F4u; }
        if (ctx->pc != 0x33B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B1F4u; }
        if (ctx->pc != 0x33B1F4u) { return; }
    }
    ctx->pc = 0x33B1F4u;
label_33b1f4:
    // 0x33b1f4: 0x26a40560  addiu       $a0, $s5, 0x560
    ctx->pc = 0x33b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_33b1f8:
    // 0x33b1f8: 0xc075318  jal         func_1D4C60
label_33b1fc:
    if (ctx->pc == 0x33B1FCu) {
        ctx->pc = 0x33B1FCu;
            // 0x33b1fc: 0x26a502e0  addiu       $a1, $s5, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
        ctx->pc = 0x33B200u;
        goto label_33b200;
    }
    ctx->pc = 0x33B1F8u;
    SET_GPR_U32(ctx, 31, 0x33B200u);
    ctx->pc = 0x33B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B1F8u;
            // 0x33b1fc: 0x26a502e0  addiu       $a1, $s5, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B200u; }
        if (ctx->pc != 0x33B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B200u; }
        if (ctx->pc != 0x33B200u) { return; }
    }
    ctx->pc = 0x33B200u;
label_33b200:
    // 0x33b200: 0x26a50560  addiu       $a1, $s5, 0x560
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_33b204:
    // 0x33b204: 0x26a40840  addiu       $a0, $s5, 0x840
    ctx->pc = 0x33b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2112));
label_33b208:
    // 0x33b208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33b208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b20c:
    // 0x33b20c: 0xc0c6250  jal         func_318940
label_33b210:
    if (ctx->pc == 0x33B210u) {
        ctx->pc = 0x33B210u;
            // 0x33b210: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B214u;
        goto label_33b214;
    }
    ctx->pc = 0x33B20Cu;
    SET_GPR_U32(ctx, 31, 0x33B214u);
    ctx->pc = 0x33B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B20Cu;
            // 0x33b210: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B214u; }
        if (ctx->pc != 0x33B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B214u; }
        if (ctx->pc != 0x33B214u) { return; }
    }
    ctx->pc = 0x33B214u;
label_33b214:
    // 0x33b214: 0x26a50560  addiu       $a1, $s5, 0x560
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1376));
label_33b218:
    // 0x33b218: 0x26a408f0  addiu       $a0, $s5, 0x8F0
    ctx->pc = 0x33b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2288));
label_33b21c:
    // 0x33b21c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33b21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b220:
    // 0x33b220: 0xc0c6250  jal         func_318940
label_33b224:
    if (ctx->pc == 0x33B224u) {
        ctx->pc = 0x33B224u;
            // 0x33b224: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B228u;
        goto label_33b228;
    }
    ctx->pc = 0x33B220u;
    SET_GPR_U32(ctx, 31, 0x33B228u);
    ctx->pc = 0x33B224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B220u;
            // 0x33b224: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B228u; }
        if (ctx->pc != 0x33B228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B228u; }
        if (ctx->pc != 0x33B228u) { return; }
    }
    ctx->pc = 0x33B228u;
label_33b228:
    // 0x33b228: 0xc6ac0400  lwc1        $f12, 0x400($s5)
    ctx->pc = 0x33b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33b22c:
    // 0x33b22c: 0x26a4087c  addiu       $a0, $s5, 0x87C
    ctx->pc = 0x33b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2172));
label_33b230:
    // 0x33b230: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x33b230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_33b234:
    // 0x33b234: 0xc0c753c  jal         func_31D4F0
label_33b238:
    if (ctx->pc == 0x33B238u) {
        ctx->pc = 0x33B238u;
            // 0x33b238: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x33B23Cu;
        goto label_33b23c;
    }
    ctx->pc = 0x33B234u;
    SET_GPR_U32(ctx, 31, 0x33B23Cu);
    ctx->pc = 0x33B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B234u;
            // 0x33b238: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B23Cu; }
        if (ctx->pc != 0x33B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B23Cu; }
        if (ctx->pc != 0x33B23Cu) { return; }
    }
    ctx->pc = 0x33B23Cu;
label_33b23c:
    // 0x33b23c: 0xc6ac0400  lwc1        $f12, 0x400($s5)
    ctx->pc = 0x33b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33b240:
    // 0x33b240: 0x26a4092c  addiu       $a0, $s5, 0x92C
    ctx->pc = 0x33b240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2348));
label_33b244:
    // 0x33b244: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x33b244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_33b248:
    // 0x33b248: 0xc0c753c  jal         func_31D4F0
label_33b24c:
    if (ctx->pc == 0x33B24Cu) {
        ctx->pc = 0x33B24Cu;
            // 0x33b24c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x33B250u;
        goto label_33b250;
    }
    ctx->pc = 0x33B248u;
    SET_GPR_U32(ctx, 31, 0x33B250u);
    ctx->pc = 0x33B24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B248u;
            // 0x33b24c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B250u; }
        if (ctx->pc != 0x33B250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B250u; }
        if (ctx->pc != 0x33B250u) { return; }
    }
    ctx->pc = 0x33B250u;
label_33b250:
    // 0x33b250: 0x100002bb  b           . + 4 + (0x2BB << 2)
label_33b254:
    if (ctx->pc == 0x33B254u) {
        ctx->pc = 0x33B258u;
        goto label_33b258;
    }
    ctx->pc = 0x33B250u;
    {
        const bool branch_taken_0x33b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b250) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33B258u;
label_33b258:
    // 0x33b258: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33b258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33b25c:
    // 0x33b25c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_33b260:
    // 0x33b260: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x33b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33b264:
    // 0x33b264: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x33b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_33b268:
    // 0x33b268: 0x5043021e  beql        $v0, $v1, . + 4 + (0x21E << 2)
label_33b26c:
    if (ctx->pc == 0x33B26Cu) {
        ctx->pc = 0x33B26Cu;
            // 0x33b26c: 0x8eb00d74  lw          $s0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x33B270u;
        goto label_33b270;
    }
    ctx->pc = 0x33B268u;
    {
        const bool branch_taken_0x33b268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b268) {
            ctx->pc = 0x33B26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B268u;
            // 0x33b26c: 0x8eb00d74  lw          $s0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BAE4u;
            goto label_33bae4;
        }
    }
    ctx->pc = 0x33B270u;
label_33b270:
    // 0x33b270: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b274:
    // 0x33b274: 0xc0770d8  jal         func_1DC360
label_33b278:
    if (ctx->pc == 0x33B278u) {
        ctx->pc = 0x33B278u;
            // 0x33b278: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x33B27Cu;
        goto label_33b27c;
    }
    ctx->pc = 0x33B274u;
    SET_GPR_U32(ctx, 31, 0x33B27Cu);
    ctx->pc = 0x33B278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B274u;
            // 0x33b278: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B27Cu; }
        if (ctx->pc != 0x33B27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B27Cu; }
        if (ctx->pc != 0x33B27Cu) { return; }
    }
    ctx->pc = 0x33B27Cu;
label_33b27c:
    // 0x33b27c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x33b27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b280:
    // 0x33b280: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x33b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_33b284:
    // 0x33b284: 0xc0cf010  jal         func_33C040
label_33b288:
    if (ctx->pc == 0x33B288u) {
        ctx->pc = 0x33B288u;
            // 0x33b288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B28Cu;
        goto label_33b28c;
    }
    ctx->pc = 0x33B284u;
    SET_GPR_U32(ctx, 31, 0x33B28Cu);
    ctx->pc = 0x33B288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B284u;
            // 0x33b288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C040u;
    if (runtime->hasFunction(0x33C040u)) {
        auto targetFn = runtime->lookupFunction(0x33C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B28Cu; }
        if (ctx->pc != 0x33B28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C040_0x33c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B28Cu; }
        if (ctx->pc != 0x33B28Cu) { return; }
    }
    ctx->pc = 0x33B28Cu;
label_33b28c:
    // 0x33b28c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x33b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_33b290:
    // 0x33b290: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b294:
    // 0x33b294: 0xc0cf00c  jal         func_33C030
label_33b298:
    if (ctx->pc == 0x33B298u) {
        ctx->pc = 0x33B298u;
            // 0x33b298: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x33B29Cu;
        goto label_33b29c;
    }
    ctx->pc = 0x33B294u;
    SET_GPR_U32(ctx, 31, 0x33B29Cu);
    ctx->pc = 0x33B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B294u;
            // 0x33b298: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C030u;
    if (runtime->hasFunction(0x33C030u)) {
        auto targetFn = runtime->lookupFunction(0x33C030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B29Cu; }
        if (ctx->pc != 0x33B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C030_0x33c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B29Cu; }
        if (ctx->pc != 0x33B29Cu) { return; }
    }
    ctx->pc = 0x33B29Cu;
label_33b29c:
    // 0x33b29c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33b29cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b2a0:
    // 0x33b2a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b2a4:
    // 0x33b2a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33b2a8:
    // 0x33b2a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x33b2a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b2ac:
    // 0x33b2ac: 0xc0770c8  jal         func_1DC320
label_33b2b0:
    if (ctx->pc == 0x33B2B0u) {
        ctx->pc = 0x33B2B0u;
            // 0x33b2b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B2B4u;
        goto label_33b2b4;
    }
    ctx->pc = 0x33B2ACu;
    SET_GPR_U32(ctx, 31, 0x33B2B4u);
    ctx->pc = 0x33B2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2ACu;
            // 0x33b2b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2B4u; }
        if (ctx->pc != 0x33B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2B4u; }
        if (ctx->pc != 0x33B2B4u) { return; }
    }
    ctx->pc = 0x33B2B4u;
label_33b2b4:
    // 0x33b2b4: 0x94510004  lhu         $s1, 0x4($v0)
    ctx->pc = 0x33b2b4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_33b2b8:
    // 0x33b2b8: 0xc0778a0  jal         func_1DE280
label_33b2bc:
    if (ctx->pc == 0x33B2BCu) {
        ctx->pc = 0x33B2BCu;
            // 0x33b2bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B2C0u;
        goto label_33b2c0;
    }
    ctx->pc = 0x33B2B8u;
    SET_GPR_U32(ctx, 31, 0x33B2C0u);
    ctx->pc = 0x33B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2B8u;
            // 0x33b2bc: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE280u;
    if (runtime->hasFunction(0x1DE280u)) {
        auto targetFn = runtime->lookupFunction(0x1DE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2C0u; }
        if (ctx->pc != 0x33B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE280_0x1de280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2C0u; }
        if (ctx->pc != 0x33B2C0u) { return; }
    }
    ctx->pc = 0x33B2C0u;
label_33b2c0:
    // 0x33b2c0: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b2c4:
    // 0x33b2c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b2c8:
    // 0x33b2c8: 0xc0770c8  jal         func_1DC320
label_33b2cc:
    if (ctx->pc == 0x33B2CCu) {
        ctx->pc = 0x33B2CCu;
            // 0x33b2cc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B2D0u;
        goto label_33b2d0;
    }
    ctx->pc = 0x33B2C8u;
    SET_GPR_U32(ctx, 31, 0x33B2D0u);
    ctx->pc = 0x33B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2C8u;
            // 0x33b2cc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2D0u; }
        if (ctx->pc != 0x33B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2D0u; }
        if (ctx->pc != 0x33B2D0u) { return; }
    }
    ctx->pc = 0x33B2D0u;
label_33b2d0:
    // 0x33b2d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x33b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_33b2d4:
    // 0x33b2d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b2d8:
    // 0x33b2d8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x33b2d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b2dc:
    // 0x33b2dc: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x33b2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_33b2e0:
    // 0x33b2e0: 0xc077280  jal         func_1DCA00
label_33b2e4:
    if (ctx->pc == 0x33B2E4u) {
        ctx->pc = 0x33B2E4u;
            // 0x33b2e4: 0xa3a202af  sb          $v0, 0x2AF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33B2E8u;
        goto label_33b2e8;
    }
    ctx->pc = 0x33B2E0u;
    SET_GPR_U32(ctx, 31, 0x33B2E8u);
    ctx->pc = 0x33B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2E0u;
            // 0x33b2e4: 0xa3a202af  sb          $v0, 0x2AF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2E8u; }
        if (ctx->pc != 0x33B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2E8u; }
        if (ctx->pc != 0x33B2E8u) { return; }
    }
    ctx->pc = 0x33B2E8u;
label_33b2e8:
    // 0x33b2e8: 0xc075368  jal         func_1D4DA0
label_33b2ec:
    if (ctx->pc == 0x33B2ECu) {
        ctx->pc = 0x33B2ECu;
            // 0x33b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B2F0u;
        goto label_33b2f0;
    }
    ctx->pc = 0x33B2E8u;
    SET_GPR_U32(ctx, 31, 0x33B2F0u);
    ctx->pc = 0x33B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2E8u;
            // 0x33b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DA0u;
    if (runtime->hasFunction(0x1D4DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2F0u; }
        if (ctx->pc != 0x33B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DA0_0x1d4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2F0u; }
        if (ctx->pc != 0x33B2F0u) { return; }
    }
    ctx->pc = 0x33B2F0u;
label_33b2f0:
    // 0x33b2f0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33b2f4:
    // 0x33b2f4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x33b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_33b2f8:
    // 0x33b2f8: 0xc04cc04  jal         func_133010
label_33b2fc:
    if (ctx->pc == 0x33B2FCu) {
        ctx->pc = 0x33B2FCu;
            // 0x33b2fc: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->pc = 0x33B300u;
        goto label_33b300;
    }
    ctx->pc = 0x33B2F8u;
    SET_GPR_U32(ctx, 31, 0x33B300u);
    ctx->pc = 0x33B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2F8u;
            // 0x33b2fc: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B300u; }
        if (ctx->pc != 0x33B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B300u; }
        if (ctx->pc != 0x33B300u) { return; }
    }
    ctx->pc = 0x33B300u;
label_33b300:
    // 0x33b300: 0xc0cf008  jal         func_33C020
label_33b304:
    if (ctx->pc == 0x33B304u) {
        ctx->pc = 0x33B304u;
            // 0x33b304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B308u;
        goto label_33b308;
    }
    ctx->pc = 0x33B300u;
    SET_GPR_U32(ctx, 31, 0x33B308u);
    ctx->pc = 0x33B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B300u;
            // 0x33b304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C020u;
    if (runtime->hasFunction(0x33C020u)) {
        auto targetFn = runtime->lookupFunction(0x33C020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B308u; }
        if (ctx->pc != 0x33B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C020_0x33c020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B308u; }
        if (ctx->pc != 0x33B308u) { return; }
    }
    ctx->pc = 0x33B308u;
label_33b308:
    // 0x33b308: 0xc0cf004  jal         func_33C010
label_33b30c:
    if (ctx->pc == 0x33B30Cu) {
        ctx->pc = 0x33B30Cu;
            // 0x33b30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B310u;
        goto label_33b310;
    }
    ctx->pc = 0x33B308u;
    SET_GPR_U32(ctx, 31, 0x33B310u);
    ctx->pc = 0x33B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B308u;
            // 0x33b30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C010u;
    if (runtime->hasFunction(0x33C010u)) {
        auto targetFn = runtime->lookupFunction(0x33C010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B310u; }
        if (ctx->pc != 0x33B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C010_0x33c010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B310u; }
        if (ctx->pc != 0x33B310u) { return; }
    }
    ctx->pc = 0x33B310u;
label_33b310:
    // 0x33b310: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
label_33b314:
    if (ctx->pc == 0x33B314u) {
        ctx->pc = 0x33B318u;
        goto label_33b318;
    }
    ctx->pc = 0x33B310u;
    {
        const bool branch_taken_0x33b310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b310) {
            ctx->pc = 0x33B788u;
            goto label_33b788;
        }
    }
    ctx->pc = 0x33B318u;
label_33b318:
    // 0x33b318: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b31c:
    // 0x33b31c: 0xc0770e8  jal         func_1DC3A0
label_33b320:
    if (ctx->pc == 0x33B320u) {
        ctx->pc = 0x33B320u;
            // 0x33b320: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x33B324u;
        goto label_33b324;
    }
    ctx->pc = 0x33B31Cu;
    SET_GPR_U32(ctx, 31, 0x33B324u);
    ctx->pc = 0x33B320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B31Cu;
            // 0x33b320: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3A0u;
    if (runtime->hasFunction(0x1DC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B324u; }
        if (ctx->pc != 0x33B324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3A0_0x1dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B324u; }
        if (ctx->pc != 0x33B324u) { return; }
    }
    ctx->pc = 0x33B324u;
label_33b324:
    // 0x33b324: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_33b328:
    // 0x33b328: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
label_33b32c:
    if (ctx->pc == 0x33B32Cu) {
        ctx->pc = 0x33B330u;
        goto label_33b330;
    }
    ctx->pc = 0x33B328u;
    {
        const bool branch_taken_0x33b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b328) {
            ctx->pc = 0x33B788u;
            goto label_33b788;
        }
    }
    ctx->pc = 0x33B330u;
label_33b330:
    // 0x33b330: 0x6620137  bltzl       $s3, . + 4 + (0x137 << 2)
label_33b334:
    if (ctx->pc == 0x33B334u) {
        ctx->pc = 0x33B334u;
            // 0x33b334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B338u;
        goto label_33b338;
    }
    ctx->pc = 0x33B330u;
    {
        const bool branch_taken_0x33b330 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x33b330) {
            ctx->pc = 0x33B334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B330u;
            // 0x33b334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B810u;
            goto label_33b810;
        }
    }
    ctx->pc = 0x33B338u;
label_33b338:
    // 0x33b338: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x33b338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_33b33c:
    // 0x33b33c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33b340:
    // 0x33b340: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
label_33b344:
    if (ctx->pc == 0x33B344u) {
        ctx->pc = 0x33B348u;
        goto label_33b348;
    }
    ctx->pc = 0x33B340u;
    {
        const bool branch_taken_0x33b340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b340) {
            ctx->pc = 0x33B6F8u;
            goto label_33b6f8;
        }
    }
    ctx->pc = 0x33B348u;
label_33b348:
    // 0x33b348: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x33b348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_33b34c:
    // 0x33b34c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_33b350:
    if (ctx->pc == 0x33B350u) {
        ctx->pc = 0x33B354u;
        goto label_33b354;
    }
    ctx->pc = 0x33B34Cu;
    {
        const bool branch_taken_0x33b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b34c) {
            ctx->pc = 0x33B3C0u;
            goto label_33b3c0;
        }
    }
    ctx->pc = 0x33B354u;
label_33b354:
    // 0x33b354: 0x0  nop
    ctx->pc = 0x33b354u;
    // NOP
label_33b358:
    // 0x33b358: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b35c:
    // 0x33b35c: 0xc0770c8  jal         func_1DC320
label_33b360:
    if (ctx->pc == 0x33B360u) {
        ctx->pc = 0x33B360u;
            // 0x33b360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B364u;
        goto label_33b364;
    }
    ctx->pc = 0x33B35Cu;
    SET_GPR_U32(ctx, 31, 0x33B364u);
    ctx->pc = 0x33B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B35Cu;
            // 0x33b360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B364u; }
        if (ctx->pc != 0x33B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B364u; }
        if (ctx->pc != 0x33B364u) { return; }
    }
    ctx->pc = 0x33B364u;
label_33b364:
    // 0x33b364: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x33b364u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_33b368:
    // 0x33b368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b36c:
    // 0x33b36c: 0xc0c6128  jal         func_3184A0
label_33b370:
    if (ctx->pc == 0x33B370u) {
        ctx->pc = 0x33B370u;
            // 0x33b370: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B374u;
        goto label_33b374;
    }
    ctx->pc = 0x33B36Cu;
    SET_GPR_U32(ctx, 31, 0x33B374u);
    ctx->pc = 0x33B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B36Cu;
            // 0x33b370: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3184A0u;
    if (runtime->hasFunction(0x3184A0u)) {
        auto targetFn = runtime->lookupFunction(0x3184A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B374u; }
        if (ctx->pc != 0x33B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003184A0_0x3184a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B374u; }
        if (ctx->pc != 0x33B374u) { return; }
    }
    ctx->pc = 0x33B374u;
label_33b374:
    // 0x33b374: 0xc0cf000  jal         func_33C000
label_33b378:
    if (ctx->pc == 0x33B378u) {
        ctx->pc = 0x33B378u;
            // 0x33b378: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B37Cu;
        goto label_33b37c;
    }
    ctx->pc = 0x33B374u;
    SET_GPR_U32(ctx, 31, 0x33B37Cu);
    ctx->pc = 0x33B378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B374u;
            // 0x33b378: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C000u;
    if (runtime->hasFunction(0x33C000u)) {
        auto targetFn = runtime->lookupFunction(0x33C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B37Cu; }
        if (ctx->pc != 0x33B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C000_0x33c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B37Cu; }
        if (ctx->pc != 0x33B37Cu) { return; }
    }
    ctx->pc = 0x33B37Cu;
label_33b37c:
    // 0x33b37c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b380:
    // 0x33b380: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33b384:
    if (ctx->pc == 0x33B384u) {
        ctx->pc = 0x33B388u;
        goto label_33b388;
    }
    ctx->pc = 0x33B380u;
    {
        const bool branch_taken_0x33b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b380) {
            ctx->pc = 0x33B3C0u;
            goto label_33b3c0;
        }
    }
    ctx->pc = 0x33B388u;
label_33b388:
    // 0x33b388: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x33b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_33b38c:
    // 0x33b38c: 0xc0770d0  jal         func_1DC340
label_33b390:
    if (ctx->pc == 0x33B390u) {
        ctx->pc = 0x33B390u;
            // 0x33b390: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B394u;
        goto label_33b394;
    }
    ctx->pc = 0x33B38Cu;
    SET_GPR_U32(ctx, 31, 0x33B394u);
    ctx->pc = 0x33B390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B38Cu;
            // 0x33b390: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC340u;
    if (runtime->hasFunction(0x1DC340u)) {
        auto targetFn = runtime->lookupFunction(0x1DC340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B394u; }
        if (ctx->pc != 0x33B394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC340_0x1dc340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B394u; }
        if (ctx->pc != 0x33B394u) { return; }
    }
    ctx->pc = 0x33B394u;
label_33b394:
    // 0x33b394: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33b394u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b398:
    // 0x33b398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b39c:
    // 0x33b39c: 0xc0770c8  jal         func_1DC320
label_33b3a0:
    if (ctx->pc == 0x33B3A0u) {
        ctx->pc = 0x33B3A0u;
            // 0x33b3a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B3A4u;
        goto label_33b3a4;
    }
    ctx->pc = 0x33B39Cu;
    SET_GPR_U32(ctx, 31, 0x33B3A4u);
    ctx->pc = 0x33B3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B39Cu;
            // 0x33b3a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3A4u; }
        if (ctx->pc != 0x33B3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3A4u; }
        if (ctx->pc != 0x33B3A4u) { return; }
    }
    ctx->pc = 0x33B3A4u;
label_33b3a4:
    // 0x33b3a4: 0x1213ffec  beq         $s0, $s3, . + 4 + (-0x14 << 2)
label_33b3a8:
    if (ctx->pc == 0x33B3A8u) {
        ctx->pc = 0x33B3A8u;
            // 0x33b3a8: 0x94510004  lhu         $s1, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x33B3ACu;
        goto label_33b3ac;
    }
    ctx->pc = 0x33B3A4u;
    {
        const bool branch_taken_0x33b3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x33B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3A4u;
            // 0x33b3a8: 0x94510004  lhu         $s1, 0x4($v0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3a4) {
            ctx->pc = 0x33B358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33b358;
        }
    }
    ctx->pc = 0x33B3ACu;
label_33b3ac:
    // 0x33b3ac: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x33b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_33b3b0:
    // 0x33b3b0: 0x30420081  andi        $v0, $v0, 0x81
    ctx->pc = 0x33b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)129);
label_33b3b4:
    // 0x33b3b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_33b3b8:
    if (ctx->pc == 0x33B3B8u) {
        ctx->pc = 0x33B3BCu;
        goto label_33b3bc;
    }
    ctx->pc = 0x33B3B4u;
    {
        const bool branch_taken_0x33b3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b3b4) {
            ctx->pc = 0x33B358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33b358;
        }
    }
    ctx->pc = 0x33B3BCu;
label_33b3bc:
    // 0x33b3bc: 0x0  nop
    ctx->pc = 0x33b3bcu;
    // NOP
label_33b3c0:
    // 0x33b3c0: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b3c4:
    // 0x33b3c4: 0xc0770c8  jal         func_1DC320
label_33b3c8:
    if (ctx->pc == 0x33B3C8u) {
        ctx->pc = 0x33B3C8u;
            // 0x33b3c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B3CCu;
        goto label_33b3cc;
    }
    ctx->pc = 0x33B3C4u;
    SET_GPR_U32(ctx, 31, 0x33B3CCu);
    ctx->pc = 0x33B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3C4u;
            // 0x33b3c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3CCu; }
        if (ctx->pc != 0x33B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3CCu; }
        if (ctx->pc != 0x33B3CCu) { return; }
    }
    ctx->pc = 0x33B3CCu;
label_33b3cc:
    // 0x33b3cc: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x33b3ccu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33b3d0:
    // 0x33b3d0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x33b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_33b3d4:
    // 0x33b3d4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x33b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_33b3d8:
    // 0x33b3d8: 0xc04cc04  jal         func_133010
label_33b3dc:
    if (ctx->pc == 0x33B3DCu) {
        ctx->pc = 0x33B3DCu;
            // 0x33b3dc: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->pc = 0x33B3E0u;
        goto label_33b3e0;
    }
    ctx->pc = 0x33B3D8u;
    SET_GPR_U32(ctx, 31, 0x33B3E0u);
    ctx->pc = 0x33B3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3D8u;
            // 0x33b3dc: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3E0u; }
        if (ctx->pc != 0x33B3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3E0u; }
        if (ctx->pc != 0x33B3E0u) { return; }
    }
    ctx->pc = 0x33B3E0u;
label_33b3e0:
    // 0x33b3e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33b3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b3e4:
    // 0x33b3e4: 0xc0ceff8  jal         func_33BFE0
label_33b3e8:
    if (ctx->pc == 0x33B3E8u) {
        ctx->pc = 0x33B3E8u;
            // 0x33b3e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B3ECu;
        goto label_33b3ec;
    }
    ctx->pc = 0x33B3E4u;
    SET_GPR_U32(ctx, 31, 0x33B3ECu);
    ctx->pc = 0x33B3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3E4u;
            // 0x33b3e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFE0u;
    if (runtime->hasFunction(0x33BFE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3ECu; }
        if (ctx->pc != 0x33B3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFE0_0x33bfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3ECu; }
        if (ctx->pc != 0x33B3ECu) { return; }
    }
    ctx->pc = 0x33B3ECu;
label_33b3ec:
    // 0x33b3ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b3f0:
    // 0x33b3f0: 0xc04cc04  jal         func_133010
label_33b3f4:
    if (ctx->pc == 0x33B3F4u) {
        ctx->pc = 0x33B3F4u;
            // 0x33b3f4: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x33B3F8u;
        goto label_33b3f8;
    }
    ctx->pc = 0x33B3F0u;
    SET_GPR_U32(ctx, 31, 0x33B3F8u);
    ctx->pc = 0x33B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3F0u;
            // 0x33b3f4: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3F8u; }
        if (ctx->pc != 0x33B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3F8u; }
        if (ctx->pc != 0x33B3F8u) { return; }
    }
    ctx->pc = 0x33B3F8u;
label_33b3f8:
    // 0x33b3f8: 0x16400055  bnez        $s2, . + 4 + (0x55 << 2)
label_33b3fc:
    if (ctx->pc == 0x33B3FCu) {
        ctx->pc = 0x33B400u;
        goto label_33b400;
    }
    ctx->pc = 0x33B3F8u;
    {
        const bool branch_taken_0x33b3f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b3f8) {
            ctx->pc = 0x33B550u;
            goto label_33b550;
        }
    }
    ctx->pc = 0x33B400u;
label_33b400:
    // 0x33b400: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x33b400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_33b404:
    // 0x33b404: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x33b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_33b408:
    // 0x33b408: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_33b40c:
    if (ctx->pc == 0x33B40Cu) {
        ctx->pc = 0x33B410u;
        goto label_33b410;
    }
    ctx->pc = 0x33B408u;
    {
        const bool branch_taken_0x33b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b408) {
            ctx->pc = 0x33B488u;
            goto label_33b488;
        }
    }
    ctx->pc = 0x33B410u;
label_33b410:
    // 0x33b410: 0xc0ada8c  jal         func_2B6A30
label_33b414:
    if (ctx->pc == 0x33B414u) {
        ctx->pc = 0x33B414u;
            // 0x33b414: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x33B418u;
        goto label_33b418;
    }
    ctx->pc = 0x33B410u;
    SET_GPR_U32(ctx, 31, 0x33B418u);
    ctx->pc = 0x33B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B410u;
            // 0x33b414: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B418u; }
        if (ctx->pc != 0x33B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B418u; }
        if (ctx->pc != 0x33B418u) { return; }
    }
    ctx->pc = 0x33B418u;
label_33b418:
    // 0x33b418: 0xc0cf0e4  jal         func_33C390
label_33b41c:
    if (ctx->pc == 0x33B41Cu) {
        ctx->pc = 0x33B420u;
        goto label_33b420;
    }
    ctx->pc = 0x33B418u;
    SET_GPR_U32(ctx, 31, 0x33B420u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B420u; }
        if (ctx->pc != 0x33B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B420u; }
        if (ctx->pc != 0x33B420u) { return; }
    }
    ctx->pc = 0x33B420u;
label_33b420:
    // 0x33b420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b424:
    // 0x33b424: 0xc0ceff0  jal         func_33BFC0
label_33b428:
    if (ctx->pc == 0x33B428u) {
        ctx->pc = 0x33B428u;
            // 0x33b428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33B42Cu;
        goto label_33b42c;
    }
    ctx->pc = 0x33B424u;
    SET_GPR_U32(ctx, 31, 0x33B42Cu);
    ctx->pc = 0x33B428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B424u;
            // 0x33b428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B42Cu; }
        if (ctx->pc != 0x33B42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B42Cu; }
        if (ctx->pc != 0x33B42Cu) { return; }
    }
    ctx->pc = 0x33B42Cu;
label_33b42c:
    // 0x33b42c: 0x93a602af  lbu         $a2, 0x2AF($sp)
    ctx->pc = 0x33b42cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 687)));
label_33b430:
    // 0x33b430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b434:
    // 0x33b434: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x33b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33b438:
    // 0x33b438: 0xc0b89e4  jal         func_2E2790
label_33b43c:
    if (ctx->pc == 0x33B43Cu) {
        ctx->pc = 0x33B43Cu;
            // 0x33b43c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33B440u;
        goto label_33b440;
    }
    ctx->pc = 0x33B438u;
    SET_GPR_U32(ctx, 31, 0x33B440u);
    ctx->pc = 0x33B43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B438u;
            // 0x33b43c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B440u; }
        if (ctx->pc != 0x33B440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B440u; }
        if (ctx->pc != 0x33B440u) { return; }
    }
    ctx->pc = 0x33B440u;
label_33b440:
    // 0x33b440: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33b444:
    // 0x33b444: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x33b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33b448:
    // 0x33b448: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b44c:
    // 0x33b44c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x33b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_33b450:
    // 0x33b450: 0xc0b82c4  jal         func_2E0B10
label_33b454:
    if (ctx->pc == 0x33B454u) {
        ctx->pc = 0x33B454u;
            // 0x33b454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B458u;
        goto label_33b458;
    }
    ctx->pc = 0x33B450u;
    SET_GPR_U32(ctx, 31, 0x33B458u);
    ctx->pc = 0x33B454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B450u;
            // 0x33b454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B458u; }
        if (ctx->pc != 0x33B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B458u; }
        if (ctx->pc != 0x33B458u) { return; }
    }
    ctx->pc = 0x33B458u;
label_33b458:
    // 0x33b458: 0xc0cefec  jal         func_33BFB0
label_33b45c:
    if (ctx->pc == 0x33B45Cu) {
        ctx->pc = 0x33B45Cu;
            // 0x33b45c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x33B460u;
        goto label_33b460;
    }
    ctx->pc = 0x33B458u;
    SET_GPR_U32(ctx, 31, 0x33B460u);
    ctx->pc = 0x33B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B458u;
            // 0x33b45c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B460u; }
        if (ctx->pc != 0x33B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B460u; }
        if (ctx->pc != 0x33B460u) { return; }
    }
    ctx->pc = 0x33B460u;
label_33b460:
    // 0x33b460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b464:
    // 0x33b464: 0xc04cc04  jal         func_133010
label_33b468:
    if (ctx->pc == 0x33B468u) {
        ctx->pc = 0x33B468u;
            // 0x33b468: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x33B46Cu;
        goto label_33b46c;
    }
    ctx->pc = 0x33B464u;
    SET_GPR_U32(ctx, 31, 0x33B46Cu);
    ctx->pc = 0x33B468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B464u;
            // 0x33b468: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B46Cu; }
        if (ctx->pc != 0x33B46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B46Cu; }
        if (ctx->pc != 0x33B46Cu) { return; }
    }
    ctx->pc = 0x33B46Cu;
label_33b46c:
    // 0x33b46c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x33b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33b470:
    // 0x33b470: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b474:
    // 0x33b474: 0xc0a9844  jal         func_2A6110
label_33b478:
    if (ctx->pc == 0x33B478u) {
        ctx->pc = 0x33B478u;
            // 0x33b478: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x33B47Cu;
        goto label_33b47c;
    }
    ctx->pc = 0x33B474u;
    SET_GPR_U32(ctx, 31, 0x33B47Cu);
    ctx->pc = 0x33B478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B474u;
            // 0x33b478: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B47Cu; }
        if (ctx->pc != 0x33B47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B47Cu; }
        if (ctx->pc != 0x33B47Cu) { return; }
    }
    ctx->pc = 0x33B47Cu;
label_33b47c:
    // 0x33b47c: 0x10000034  b           . + 4 + (0x34 << 2)
label_33b480:
    if (ctx->pc == 0x33B480u) {
        ctx->pc = 0x33B484u;
        goto label_33b484;
    }
    ctx->pc = 0x33B47Cu;
    {
        const bool branch_taken_0x33b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b47c) {
            ctx->pc = 0x33B550u;
            goto label_33b550;
        }
    }
    ctx->pc = 0x33B484u;
label_33b484:
    // 0x33b484: 0x0  nop
    ctx->pc = 0x33b484u;
    // NOP
label_33b488:
    // 0x33b488: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x33b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_33b48c:
    // 0x33b48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33b490:
    if (ctx->pc == 0x33B490u) {
        ctx->pc = 0x33B494u;
        goto label_33b494;
    }
    ctx->pc = 0x33B48Cu;
    {
        const bool branch_taken_0x33b48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b48c) {
            ctx->pc = 0x33B4A8u;
            goto label_33b4a8;
        }
    }
    ctx->pc = 0x33B494u;
label_33b494:
    // 0x33b494: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x33b494u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33b498:
    // 0x33b498: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x33b498u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b49c:
    // 0x33b49c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x33b49cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b4a0:
    // 0x33b4a0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_33b4a4:
    if (ctx->pc == 0x33B4A4u) {
        ctx->pc = 0x33B4A4u;
            // 0x33b4a4: 0xa3a200a0  sb          $v0, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33B4A8u;
        goto label_33b4a8;
    }
    ctx->pc = 0x33B4A0u;
    {
        const bool branch_taken_0x33b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4A0u;
            // 0x33b4a4: 0xa3a200a0  sb          $v0, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4a0) {
            ctx->pc = 0x33B550u;
            goto label_33b550;
        }
    }
    ctx->pc = 0x33B4A8u;
label_33b4a8:
    // 0x33b4a8: 0xc0cefe8  jal         func_33BFA0
label_33b4ac:
    if (ctx->pc == 0x33B4ACu) {
        ctx->pc = 0x33B4ACu;
            // 0x33b4ac: 0x26a406b0  addiu       $a0, $s5, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1712));
        ctx->pc = 0x33B4B0u;
        goto label_33b4b0;
    }
    ctx->pc = 0x33B4A8u;
    SET_GPR_U32(ctx, 31, 0x33B4B0u);
    ctx->pc = 0x33B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4A8u;
            // 0x33b4ac: 0x26a406b0  addiu       $a0, $s5, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFA0u;
    if (runtime->hasFunction(0x33BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4B0u; }
        if (ctx->pc != 0x33B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFA0_0x33bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4B0u; }
        if (ctx->pc != 0x33B4B0u) { return; }
    }
    ctx->pc = 0x33B4B0u;
label_33b4b0:
    // 0x33b4b0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x33b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_33b4b4:
    // 0x33b4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b4b8:
    // 0x33b4b8: 0xc04cca0  jal         func_133280
label_33b4bc:
    if (ctx->pc == 0x33B4BCu) {
        ctx->pc = 0x33B4BCu;
            // 0x33b4bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B4C0u;
        goto label_33b4c0;
    }
    ctx->pc = 0x33B4B8u;
    SET_GPR_U32(ctx, 31, 0x33B4C0u);
    ctx->pc = 0x33B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4B8u;
            // 0x33b4bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4C0u; }
        if (ctx->pc != 0x33B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4C0u; }
        if (ctx->pc != 0x33B4C0u) { return; }
    }
    ctx->pc = 0x33B4C0u;
label_33b4c0:
    // 0x33b4c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b4c4:
    // 0x33b4c4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x33b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_33b4c8:
    // 0x33b4c8: 0xc0770e4  jal         func_1DC390
label_33b4cc:
    if (ctx->pc == 0x33B4CCu) {
        ctx->pc = 0x33B4CCu;
            // 0x33b4cc: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x33B4D0u;
        goto label_33b4d0;
    }
    ctx->pc = 0x33B4C8u;
    SET_GPR_U32(ctx, 31, 0x33B4D0u);
    ctx->pc = 0x33B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4C8u;
            // 0x33b4cc: 0x641e0001  daddiu      $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4D0u; }
        if (ctx->pc != 0x33B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4D0u; }
        if (ctx->pc != 0x33B4D0u) { return; }
    }
    ctx->pc = 0x33B4D0u;
label_33b4d0:
    // 0x33b4d0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33b4d4:
    // 0x33b4d4: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_33b4d8:
    if (ctx->pc == 0x33B4D8u) {
        ctx->pc = 0x33B4DCu;
        goto label_33b4dc;
    }
    ctx->pc = 0x33B4D4u;
    {
        const bool branch_taken_0x33b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b4d4) {
            ctx->pc = 0x33B550u;
            goto label_33b550;
        }
    }
    ctx->pc = 0x33B4DCu;
label_33b4dc:
    // 0x33b4dc: 0xc0ada8c  jal         func_2B6A30
label_33b4e0:
    if (ctx->pc == 0x33B4E0u) {
        ctx->pc = 0x33B4E0u;
            // 0x33b4e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x33B4E4u;
        goto label_33b4e4;
    }
    ctx->pc = 0x33B4DCu;
    SET_GPR_U32(ctx, 31, 0x33B4E4u);
    ctx->pc = 0x33B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4DCu;
            // 0x33b4e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4E4u; }
        if (ctx->pc != 0x33B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4E4u; }
        if (ctx->pc != 0x33B4E4u) { return; }
    }
    ctx->pc = 0x33B4E4u;
label_33b4e4:
    // 0x33b4e4: 0xc0cf0e4  jal         func_33C390
label_33b4e8:
    if (ctx->pc == 0x33B4E8u) {
        ctx->pc = 0x33B4ECu;
        goto label_33b4ec;
    }
    ctx->pc = 0x33B4E4u;
    SET_GPR_U32(ctx, 31, 0x33B4ECu);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4ECu; }
        if (ctx->pc != 0x33B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4ECu; }
        if (ctx->pc != 0x33B4ECu) { return; }
    }
    ctx->pc = 0x33B4ECu;
label_33b4ec:
    // 0x33b4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b4f0:
    // 0x33b4f0: 0xc0ceff0  jal         func_33BFC0
label_33b4f4:
    if (ctx->pc == 0x33B4F4u) {
        ctx->pc = 0x33B4F4u;
            // 0x33b4f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33B4F8u;
        goto label_33b4f8;
    }
    ctx->pc = 0x33B4F0u;
    SET_GPR_U32(ctx, 31, 0x33B4F8u);
    ctx->pc = 0x33B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4F0u;
            // 0x33b4f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4F8u; }
        if (ctx->pc != 0x33B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4F8u; }
        if (ctx->pc != 0x33B4F8u) { return; }
    }
    ctx->pc = 0x33B4F8u;
label_33b4f8:
    // 0x33b4f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b4fc:
    // 0x33b4fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x33b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_33b500:
    // 0x33b500: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_33b504:
    // 0x33b504: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x33b504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_33b508:
    // 0x33b508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b50c:
    // 0x33b50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b510:
    // 0x33b510: 0xc0b884c  jal         func_2E2130
label_33b514:
    if (ctx->pc == 0x33B514u) {
        ctx->pc = 0x33B514u;
            // 0x33b514: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33B518u;
        goto label_33b518;
    }
    ctx->pc = 0x33B510u;
    SET_GPR_U32(ctx, 31, 0x33B518u);
    ctx->pc = 0x33B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B510u;
            // 0x33b514: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B518u; }
        if (ctx->pc != 0x33B518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B518u; }
        if (ctx->pc != 0x33B518u) { return; }
    }
    ctx->pc = 0x33B518u;
label_33b518:
    // 0x33b518: 0xc0cefe4  jal         func_33BF90
label_33b51c:
    if (ctx->pc == 0x33B51Cu) {
        ctx->pc = 0x33B51Cu;
            // 0x33b51c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x33B520u;
        goto label_33b520;
    }
    ctx->pc = 0x33B518u;
    SET_GPR_U32(ctx, 31, 0x33B520u);
    ctx->pc = 0x33B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B518u;
            // 0x33b51c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BF90u;
    if (runtime->hasFunction(0x33BF90u)) {
        auto targetFn = runtime->lookupFunction(0x33BF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B520u; }
        if (ctx->pc != 0x33B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BF90_0x33bf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B520u; }
        if (ctx->pc != 0x33B520u) { return; }
    }
    ctx->pc = 0x33B520u;
label_33b520:
    // 0x33b520: 0xa3a202af  sb          $v0, 0x2AF($sp)
    ctx->pc = 0x33b520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
label_33b524:
    // 0x33b524: 0xc0cefec  jal         func_33BFB0
label_33b528:
    if (ctx->pc == 0x33B528u) {
        ctx->pc = 0x33B528u;
            // 0x33b528: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x33B52Cu;
        goto label_33b52c;
    }
    ctx->pc = 0x33B524u;
    SET_GPR_U32(ctx, 31, 0x33B52Cu);
    ctx->pc = 0x33B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B524u;
            // 0x33b528: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B52Cu; }
        if (ctx->pc != 0x33B52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B52Cu; }
        if (ctx->pc != 0x33B52Cu) { return; }
    }
    ctx->pc = 0x33B52Cu;
label_33b52c:
    // 0x33b52c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b530:
    // 0x33b530: 0xc04cc04  jal         func_133010
label_33b534:
    if (ctx->pc == 0x33B534u) {
        ctx->pc = 0x33B534u;
            // 0x33b534: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x33B538u;
        goto label_33b538;
    }
    ctx->pc = 0x33B530u;
    SET_GPR_U32(ctx, 31, 0x33B538u);
    ctx->pc = 0x33B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B530u;
            // 0x33b534: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B538u; }
        if (ctx->pc != 0x33B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B538u; }
        if (ctx->pc != 0x33B538u) { return; }
    }
    ctx->pc = 0x33B538u;
label_33b538:
    // 0x33b538: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x33b538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33b53c:
    // 0x33b53c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x33b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_33b540:
    // 0x33b540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b544:
    // 0x33b544: 0xc0a9844  jal         func_2A6110
label_33b548:
    if (ctx->pc == 0x33B548u) {
        ctx->pc = 0x33B548u;
            // 0x33b548: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B54Cu;
        goto label_33b54c;
    }
    ctx->pc = 0x33B544u;
    SET_GPR_U32(ctx, 31, 0x33B54Cu);
    ctx->pc = 0x33B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B544u;
            // 0x33b548: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B54Cu; }
        if (ctx->pc != 0x33B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B54Cu; }
        if (ctx->pc != 0x33B54Cu) { return; }
    }
    ctx->pc = 0x33B54Cu;
label_33b54c:
    // 0x33b54c: 0x0  nop
    ctx->pc = 0x33b54cu;
    // NOP
label_33b550:
    // 0x33b550: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x33b550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_33b554:
    // 0x33b554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b558:
    // 0x33b558: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x33b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_33b55c:
    // 0x33b55c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x33b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_33b560:
    // 0x33b560: 0xc04cc7c  jal         func_1331F0
label_33b564:
    if (ctx->pc == 0x33B564u) {
        ctx->pc = 0x33B564u;
            // 0x33b564: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x33B568u;
        goto label_33b568;
    }
    ctx->pc = 0x33B560u;
    SET_GPR_U32(ctx, 31, 0x33B568u);
    ctx->pc = 0x33B564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B560u;
            // 0x33b564: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B568u; }
        if (ctx->pc != 0x33B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B568u; }
        if (ctx->pc != 0x33B568u) { return; }
    }
    ctx->pc = 0x33B568u;
label_33b568:
    // 0x33b568: 0x3c024118  lui         $v0, 0x4118
    ctx->pc = 0x33b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
label_33b56c:
    // 0x33b56c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x33b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_33b570:
    // 0x33b570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b574:
    // 0x33b574: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x33b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_33b578:
    // 0x33b578: 0xc04cc7c  jal         func_1331F0
label_33b57c:
    if (ctx->pc == 0x33B57Cu) {
        ctx->pc = 0x33B57Cu;
            // 0x33b57c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B580u;
        goto label_33b580;
    }
    ctx->pc = 0x33B578u;
    SET_GPR_U32(ctx, 31, 0x33B580u);
    ctx->pc = 0x33B57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B578u;
            // 0x33b57c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B580u; }
        if (ctx->pc != 0x33B580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B580u; }
        if (ctx->pc != 0x33B580u) { return; }
    }
    ctx->pc = 0x33B580u;
label_33b580:
    // 0x33b580: 0xc0b6dcc  jal         func_2DB730
label_33b584:
    if (ctx->pc == 0x33B584u) {
        ctx->pc = 0x33B588u;
        goto label_33b588;
    }
    ctx->pc = 0x33B580u;
    SET_GPR_U32(ctx, 31, 0x33B588u);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B588u; }
        if (ctx->pc != 0x33B588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B588u; }
        if (ctx->pc != 0x33B588u) { return; }
    }
    ctx->pc = 0x33B588u;
label_33b588:
    // 0x33b588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b58c:
    // 0x33b58c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x33b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_33b590:
    // 0x33b590: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_33b594:
    // 0x33b594: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_33b598:
    // 0x33b598: 0xc0d16dc  jal         func_345B70
label_33b59c:
    if (ctx->pc == 0x33B59Cu) {
        ctx->pc = 0x33B59Cu;
            // 0x33b59c: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x33B5A0u;
        goto label_33b5a0;
    }
    ctx->pc = 0x33B598u;
    SET_GPR_U32(ctx, 31, 0x33B5A0u);
    ctx->pc = 0x33B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B598u;
            // 0x33b59c: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5A0u; }
        if (ctx->pc != 0x33B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5A0u; }
        if (ctx->pc != 0x33B5A0u) { return; }
    }
    ctx->pc = 0x33B5A0u;
label_33b5a0:
    // 0x33b5a0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x33b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_33b5a4:
    // 0x33b5a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33b5a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_33b5a8:
    // 0x33b5a8: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_33b5ac:
    if (ctx->pc == 0x33B5ACu) {
        ctx->pc = 0x33B5ACu;
            // 0x33b5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33B5B0u;
        goto label_33b5b0;
    }
    ctx->pc = 0x33B5A8u;
    {
        const bool branch_taken_0x33b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b5a8) {
            ctx->pc = 0x33B5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B5A8u;
            // 0x33b5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B6E8u;
            goto label_33b6e8;
        }
    }
    ctx->pc = 0x33B5B0u;
label_33b5b0:
    // 0x33b5b0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_33b5b4:
    // 0x33b5b4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_33b5b8:
    if (ctx->pc == 0x33B5B8u) {
        ctx->pc = 0x33B5BCu;
        goto label_33b5bc;
    }
    ctx->pc = 0x33B5B4u;
    {
        const bool branch_taken_0x33b5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b5b4) {
            ctx->pc = 0x33B6E4u;
            goto label_33b6e4;
        }
    }
    ctx->pc = 0x33B5BCu;
label_33b5bc:
    // 0x33b5bc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x33b5bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_33b5c0:
    // 0x33b5c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33b5c4:
    // 0x33b5c4: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
label_33b5c8:
    if (ctx->pc == 0x33B5C8u) {
        ctx->pc = 0x33B5CCu;
        goto label_33b5cc;
    }
    ctx->pc = 0x33B5C4u;
    {
        const bool branch_taken_0x33b5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b5c4) {
            ctx->pc = 0x33B6E4u;
            goto label_33b6e4;
        }
    }
    ctx->pc = 0x33B5CCu;
label_33b5cc:
    // 0x33b5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b5d0:
    // 0x33b5d0: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_33b5d4:
    if (ctx->pc == 0x33B5D4u) {
        ctx->pc = 0x33B5D8u;
        goto label_33b5d8;
    }
    ctx->pc = 0x33B5D0u;
    {
        const bool branch_taken_0x33b5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b5d0) {
            ctx->pc = 0x33B6E4u;
            goto label_33b6e4;
        }
    }
    ctx->pc = 0x33B5D8u;
label_33b5d8:
    // 0x33b5d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_33b5dc:
    // 0x33b5dc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x33b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_33b5e0:
    // 0x33b5e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b5e4:
    // 0x33b5e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33b5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b5e8:
    // 0x33b5e8: 0xc04cc7c  jal         func_1331F0
label_33b5ec:
    if (ctx->pc == 0x33B5ECu) {
        ctx->pc = 0x33B5ECu;
            // 0x33b5ec: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x33B5F0u;
        goto label_33b5f0;
    }
    ctx->pc = 0x33B5E8u;
    SET_GPR_U32(ctx, 31, 0x33B5F0u);
    ctx->pc = 0x33B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B5E8u;
            // 0x33b5ec: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5F0u; }
        if (ctx->pc != 0x33B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5F0u; }
        if (ctx->pc != 0x33B5F0u) { return; }
    }
    ctx->pc = 0x33B5F0u;
label_33b5f0:
    // 0x33b5f0: 0x26a40410  addiu       $a0, $s5, 0x410
    ctx->pc = 0x33b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
label_33b5f4:
    // 0x33b5f4: 0xc04cc04  jal         func_133010
label_33b5f8:
    if (ctx->pc == 0x33B5F8u) {
        ctx->pc = 0x33B5F8u;
            // 0x33b5f8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x33B5FCu;
        goto label_33b5fc;
    }
    ctx->pc = 0x33B5F4u;
    SET_GPR_U32(ctx, 31, 0x33B5FCu);
    ctx->pc = 0x33B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B5F4u;
            // 0x33b5f8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5FCu; }
        if (ctx->pc != 0x33B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B5FCu; }
        if (ctx->pc != 0x33B5FCu) { return; }
    }
    ctx->pc = 0x33B5FCu;
label_33b5fc:
    // 0x33b5fc: 0x26a40420  addiu       $a0, $s5, 0x420
    ctx->pc = 0x33b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1056));
label_33b600:
    // 0x33b600: 0xc04cc04  jal         func_133010
label_33b604:
    if (ctx->pc == 0x33B604u) {
        ctx->pc = 0x33B604u;
            // 0x33b604: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x33B608u;
        goto label_33b608;
    }
    ctx->pc = 0x33B600u;
    SET_GPR_U32(ctx, 31, 0x33B608u);
    ctx->pc = 0x33B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B600u;
            // 0x33b604: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B608u; }
        if (ctx->pc != 0x33B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B608u; }
        if (ctx->pc != 0x33B608u) { return; }
    }
    ctx->pc = 0x33B608u;
label_33b608:
    // 0x33b608: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b60c:
    // 0x33b60c: 0xc0770c8  jal         func_1DC320
label_33b610:
    if (ctx->pc == 0x33B610u) {
        ctx->pc = 0x33B610u;
            // 0x33b610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B614u;
        goto label_33b614;
    }
    ctx->pc = 0x33B60Cu;
    SET_GPR_U32(ctx, 31, 0x33B614u);
    ctx->pc = 0x33B610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B60Cu;
            // 0x33b610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B614u; }
        if (ctx->pc != 0x33B614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B614u; }
        if (ctx->pc != 0x33B614u) { return; }
    }
    ctx->pc = 0x33B614u;
label_33b614:
    // 0x33b614: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x33b614u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_33b618:
    // 0x33b618: 0xc0ceff8  jal         func_33BFE0
label_33b61c:
    if (ctx->pc == 0x33B61Cu) {
        ctx->pc = 0x33B61Cu;
            // 0x33b61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B620u;
        goto label_33b620;
    }
    ctx->pc = 0x33B618u;
    SET_GPR_U32(ctx, 31, 0x33B620u);
    ctx->pc = 0x33B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B618u;
            // 0x33b61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFE0u;
    if (runtime->hasFunction(0x33BFE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B620u; }
        if (ctx->pc != 0x33B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFE0_0x33bfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B620u; }
        if (ctx->pc != 0x33B620u) { return; }
    }
    ctx->pc = 0x33B620u;
label_33b620:
    // 0x33b620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b624:
    // 0x33b624: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x33b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_33b628:
    // 0x33b628: 0xc04cc90  jal         func_133240
label_33b62c:
    if (ctx->pc == 0x33B62Cu) {
        ctx->pc = 0x33B62Cu;
            // 0x33b62c: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x33B630u;
        goto label_33b630;
    }
    ctx->pc = 0x33B628u;
    SET_GPR_U32(ctx, 31, 0x33B630u);
    ctx->pc = 0x33B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B628u;
            // 0x33b62c: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B630u; }
        if (ctx->pc != 0x33B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B630u; }
        if (ctx->pc != 0x33B630u) { return; }
    }
    ctx->pc = 0x33B630u;
label_33b630:
    // 0x33b630: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x33b630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_33b634:
    // 0x33b634: 0xc04cc44  jal         func_133110
label_33b638:
    if (ctx->pc == 0x33B638u) {
        ctx->pc = 0x33B638u;
            // 0x33b638: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B63Cu;
        goto label_33b63c;
    }
    ctx->pc = 0x33B634u;
    SET_GPR_U32(ctx, 31, 0x33B63Cu);
    ctx->pc = 0x33B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B634u;
            // 0x33b638: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B63Cu; }
        if (ctx->pc != 0x33B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B63Cu; }
        if (ctx->pc != 0x33B63Cu) { return; }
    }
    ctx->pc = 0x33B63Cu;
label_33b63c:
    // 0x33b63c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x33b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_33b640:
    // 0x33b640: 0x26a40410  addiu       $a0, $s5, 0x410
    ctx->pc = 0x33b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
label_33b644:
    // 0x33b644: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33b644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_33b648:
    // 0x33b648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33b648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b64c:
    // 0x33b64c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b650:
    // 0x33b650: 0xc04cc7c  jal         func_1331F0
label_33b654:
    if (ctx->pc == 0x33B654u) {
        ctx->pc = 0x33B654u;
            // 0x33b654: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x33B658u;
        goto label_33b658;
    }
    ctx->pc = 0x33B650u;
    SET_GPR_U32(ctx, 31, 0x33B658u);
    ctx->pc = 0x33B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B650u;
            // 0x33b654: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B658u; }
        if (ctx->pc != 0x33B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B658u; }
        if (ctx->pc != 0x33B658u) { return; }
    }
    ctx->pc = 0x33B658u;
label_33b658:
    // 0x33b658: 0xc077228  jal         func_1DC8A0
label_33b65c:
    if (ctx->pc == 0x33B65Cu) {
        ctx->pc = 0x33B65Cu;
            // 0x33b65c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B660u;
        goto label_33b660;
    }
    ctx->pc = 0x33B658u;
    SET_GPR_U32(ctx, 31, 0x33B660u);
    ctx->pc = 0x33B65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B658u;
            // 0x33b65c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B660u; }
        if (ctx->pc != 0x33B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B660u; }
        if (ctx->pc != 0x33B660u) { return; }
    }
    ctx->pc = 0x33B660u;
label_33b660:
    // 0x33b660: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_33b664:
    if (ctx->pc == 0x33B664u) {
        ctx->pc = 0x33B668u;
        goto label_33b668;
    }
    ctx->pc = 0x33B660u;
    {
        const bool branch_taken_0x33b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b660) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B668u;
label_33b668:
    // 0x33b668: 0x3230ffff  andi        $s0, $s1, 0xFFFF
    ctx->pc = 0x33b668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_33b66c:
    // 0x33b66c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x33b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_33b670:
    // 0x33b670: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_33b674:
    if (ctx->pc == 0x33B674u) {
        ctx->pc = 0x33B674u;
            // 0x33b674: 0x32021000  andi        $v0, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
        ctx->pc = 0x33B678u;
        goto label_33b678;
    }
    ctx->pc = 0x33B670u;
    {
        const bool branch_taken_0x33b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b670) {
            ctx->pc = 0x33B674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B670u;
            // 0x33b674: 0x32021000  andi        $v0, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B68Cu;
            goto label_33b68c;
        }
    }
    ctx->pc = 0x33B678u;
label_33b678:
    // 0x33b678: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b67c:
    // 0x33b67c: 0xc0770dc  jal         func_1DC370
label_33b680:
    if (ctx->pc == 0x33B680u) {
        ctx->pc = 0x33B680u;
            // 0x33b680: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x33B684u;
        goto label_33b684;
    }
    ctx->pc = 0x33B67Cu;
    SET_GPR_U32(ctx, 31, 0x33B684u);
    ctx->pc = 0x33B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B67Cu;
            // 0x33b680: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B684u; }
        if (ctx->pc != 0x33B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B684u; }
        if (ctx->pc != 0x33B684u) { return; }
    }
    ctx->pc = 0x33B684u;
label_33b684:
    // 0x33b684: 0x10000007  b           . + 4 + (0x7 << 2)
label_33b688:
    if (ctx->pc == 0x33B688u) {
        ctx->pc = 0x33B688u;
            // 0x33b688: 0x32022000  andi        $v0, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->pc = 0x33B68Cu;
        goto label_33b68c;
    }
    ctx->pc = 0x33B684u;
    {
        const bool branch_taken_0x33b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B684u;
            // 0x33b688: 0x32022000  andi        $v0, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b684) {
            ctx->pc = 0x33B6A4u;
            goto label_33b6a4;
        }
    }
    ctx->pc = 0x33B68Cu;
label_33b68c:
    // 0x33b68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33b690:
    if (ctx->pc == 0x33B690u) {
        ctx->pc = 0x33B694u;
        goto label_33b694;
    }
    ctx->pc = 0x33B68Cu;
    {
        const bool branch_taken_0x33b68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b68c) {
            ctx->pc = 0x33B6A0u;
            goto label_33b6a0;
        }
    }
    ctx->pc = 0x33B694u;
label_33b694:
    // 0x33b694: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b698:
    // 0x33b698: 0xc077fb0  jal         func_1DFEC0
label_33b69c:
    if (ctx->pc == 0x33B69Cu) {
        ctx->pc = 0x33B69Cu;
            // 0x33b69c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x33B6A0u;
        goto label_33b6a0;
    }
    ctx->pc = 0x33B698u;
    SET_GPR_U32(ctx, 31, 0x33B6A0u);
    ctx->pc = 0x33B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B698u;
            // 0x33b69c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6A0u; }
        if (ctx->pc != 0x33B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6A0u; }
        if (ctx->pc != 0x33B6A0u) { return; }
    }
    ctx->pc = 0x33B6A0u;
label_33b6a0:
    // 0x33b6a0: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x33b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_33b6a4:
    // 0x33b6a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_33b6a8:
    if (ctx->pc == 0x33B6A8u) {
        ctx->pc = 0x33B6A8u;
            // 0x33b6a8: 0x32024000  andi        $v0, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->pc = 0x33B6ACu;
        goto label_33b6ac;
    }
    ctx->pc = 0x33B6A4u;
    {
        const bool branch_taken_0x33b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6a4) {
            ctx->pc = 0x33B6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B6A4u;
            // 0x33b6a8: 0x32024000  andi        $v0, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B6C4u;
            goto label_33b6c4;
        }
    }
    ctx->pc = 0x33B6ACu;
label_33b6ac:
    // 0x33b6ac: 0xc077320  jal         func_1DCC80
label_33b6b0:
    if (ctx->pc == 0x33B6B0u) {
        ctx->pc = 0x33B6B0u;
            // 0x33b6b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B6B4u;
        goto label_33b6b4;
    }
    ctx->pc = 0x33B6ACu;
    SET_GPR_U32(ctx, 31, 0x33B6B4u);
    ctx->pc = 0x33B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B6ACu;
            // 0x33b6b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6B4u; }
        if (ctx->pc != 0x33B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6B4u; }
        if (ctx->pc != 0x33B6B4u) { return; }
    }
    ctx->pc = 0x33B6B4u;
label_33b6b4:
    // 0x33b6b4: 0xc0cefd8  jal         func_33BF60
label_33b6b8:
    if (ctx->pc == 0x33B6B8u) {
        ctx->pc = 0x33B6B8u;
            // 0x33b6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B6BCu;
        goto label_33b6bc;
    }
    ctx->pc = 0x33B6B4u;
    SET_GPR_U32(ctx, 31, 0x33B6BCu);
    ctx->pc = 0x33B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B6B4u;
            // 0x33b6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BF60u;
    if (runtime->hasFunction(0x33BF60u)) {
        auto targetFn = runtime->lookupFunction(0x33BF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6BCu; }
        if (ctx->pc != 0x33B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BF60_0x33bf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6BCu; }
        if (ctx->pc != 0x33B6BCu) { return; }
    }
    ctx->pc = 0x33B6BCu;
label_33b6bc:
    // 0x33b6bc: 0x10000053  b           . + 4 + (0x53 << 2)
label_33b6c0:
    if (ctx->pc == 0x33B6C0u) {
        ctx->pc = 0x33B6C4u;
        goto label_33b6c4;
    }
    ctx->pc = 0x33B6BCu;
    {
        const bool branch_taken_0x33b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6bc) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B6C4u;
label_33b6c4:
    // 0x33b6c4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_33b6c8:
    if (ctx->pc == 0x33B6C8u) {
        ctx->pc = 0x33B6CCu;
        goto label_33b6cc;
    }
    ctx->pc = 0x33B6C4u;
    {
        const bool branch_taken_0x33b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6c4) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B6CCu;
label_33b6cc:
    // 0x33b6cc: 0xc077320  jal         func_1DCC80
label_33b6d0:
    if (ctx->pc == 0x33B6D0u) {
        ctx->pc = 0x33B6D0u;
            // 0x33b6d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B6D4u;
        goto label_33b6d4;
    }
    ctx->pc = 0x33B6CCu;
    SET_GPR_U32(ctx, 31, 0x33B6D4u);
    ctx->pc = 0x33B6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B6CCu;
            // 0x33b6d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6D4u; }
        if (ctx->pc != 0x33B6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6D4u; }
        if (ctx->pc != 0x33B6D4u) { return; }
    }
    ctx->pc = 0x33B6D4u;
label_33b6d4:
    // 0x33b6d4: 0xc0cefcc  jal         func_33BF30
label_33b6d8:
    if (ctx->pc == 0x33B6D8u) {
        ctx->pc = 0x33B6D8u;
            // 0x33b6d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B6DCu;
        goto label_33b6dc;
    }
    ctx->pc = 0x33B6D4u;
    SET_GPR_U32(ctx, 31, 0x33B6DCu);
    ctx->pc = 0x33B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B6D4u;
            // 0x33b6d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BF30u;
    if (runtime->hasFunction(0x33BF30u)) {
        auto targetFn = runtime->lookupFunction(0x33BF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6DCu; }
        if (ctx->pc != 0x33B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BF30_0x33bf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B6DCu; }
        if (ctx->pc != 0x33B6DCu) { return; }
    }
    ctx->pc = 0x33B6DCu;
label_33b6dc:
    // 0x33b6dc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_33b6e0:
    if (ctx->pc == 0x33B6E0u) {
        ctx->pc = 0x33B6E4u;
        goto label_33b6e4;
    }
    ctx->pc = 0x33B6DCu;
    {
        const bool branch_taken_0x33b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6dc) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B6E4u;
label_33b6e4:
    // 0x33b6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b6e8:
    // 0x33b6e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x33b6e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b6ec:
    // 0x33b6ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x33b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_33b6f0:
    // 0x33b6f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x33b6f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b6f4:
    // 0x33b6f4: 0x0  nop
    ctx->pc = 0x33b6f4u;
    // NOP
label_33b6f8:
    // 0x33b6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b6fc:
    // 0x33b6fc: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
label_33b700:
    if (ctx->pc == 0x33B700u) {
        ctx->pc = 0x33B704u;
        goto label_33b704;
    }
    ctx->pc = 0x33B6FCu;
    {
        const bool branch_taken_0x33b6fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b6fc) {
            ctx->pc = 0x33B770u;
            goto label_33b770;
        }
    }
    ctx->pc = 0x33B704u;
label_33b704:
    // 0x33b704: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b708:
    // 0x33b708: 0xc0770c8  jal         func_1DC320
label_33b70c:
    if (ctx->pc == 0x33B70Cu) {
        ctx->pc = 0x33B70Cu;
            // 0x33b70c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B710u;
        goto label_33b710;
    }
    ctx->pc = 0x33B708u;
    SET_GPR_U32(ctx, 31, 0x33B710u);
    ctx->pc = 0x33B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B708u;
            // 0x33b70c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B710u; }
        if (ctx->pc != 0x33B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B710u; }
        if (ctx->pc != 0x33B710u) { return; }
    }
    ctx->pc = 0x33B710u;
label_33b710:
    // 0x33b710: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33b710u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33b714:
    // 0x33b714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b718:
    // 0x33b718: 0xc0c6104  jal         func_318410
label_33b71c:
    if (ctx->pc == 0x33B71Cu) {
        ctx->pc = 0x33B71Cu;
            // 0x33b71c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B720u;
        goto label_33b720;
    }
    ctx->pc = 0x33B718u;
    SET_GPR_U32(ctx, 31, 0x33B720u);
    ctx->pc = 0x33B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B718u;
            // 0x33b71c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318410u;
    if (runtime->hasFunction(0x318410u)) {
        auto targetFn = runtime->lookupFunction(0x318410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B720u; }
        if (ctx->pc != 0x33B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318410_0x318410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B720u; }
        if (ctx->pc != 0x33B720u) { return; }
    }
    ctx->pc = 0x33B720u;
label_33b720:
    // 0x33b720: 0xc0cf000  jal         func_33C000
label_33b724:
    if (ctx->pc == 0x33B724u) {
        ctx->pc = 0x33B724u;
            // 0x33b724: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B728u;
        goto label_33b728;
    }
    ctx->pc = 0x33B720u;
    SET_GPR_U32(ctx, 31, 0x33B728u);
    ctx->pc = 0x33B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B720u;
            // 0x33b724: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C000u;
    if (runtime->hasFunction(0x33C000u)) {
        auto targetFn = runtime->lookupFunction(0x33C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B728u; }
        if (ctx->pc != 0x33B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C000_0x33c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B728u; }
        if (ctx->pc != 0x33B728u) { return; }
    }
    ctx->pc = 0x33B728u;
label_33b728:
    // 0x33b728: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b72c:
    // 0x33b72c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_33b730:
    if (ctx->pc == 0x33B730u) {
        ctx->pc = 0x33B734u;
        goto label_33b734;
    }
    ctx->pc = 0x33B72Cu;
    {
        const bool branch_taken_0x33b72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b72c) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B734u;
label_33b734:
    // 0x33b734: 0xc0770d0  jal         func_1DC340
label_33b738:
    if (ctx->pc == 0x33B738u) {
        ctx->pc = 0x33B738u;
            // 0x33b738: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33B73Cu;
        goto label_33b73c;
    }
    ctx->pc = 0x33B734u;
    SET_GPR_U32(ctx, 31, 0x33B73Cu);
    ctx->pc = 0x33B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B734u;
            // 0x33b738: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC340u;
    if (runtime->hasFunction(0x1DC340u)) {
        auto targetFn = runtime->lookupFunction(0x1DC340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B73Cu; }
        if (ctx->pc != 0x33B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC340_0x1dc340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B73Cu; }
        if (ctx->pc != 0x33B73Cu) { return; }
    }
    ctx->pc = 0x33B73Cu;
label_33b73c:
    // 0x33b73c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x33b73cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b740:
    // 0x33b740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b744:
    // 0x33b744: 0xc0770c8  jal         func_1DC320
label_33b748:
    if (ctx->pc == 0x33B748u) {
        ctx->pc = 0x33B748u;
            // 0x33b748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B74Cu;
        goto label_33b74c;
    }
    ctx->pc = 0x33B744u;
    SET_GPR_U32(ctx, 31, 0x33B74Cu);
    ctx->pc = 0x33B748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B744u;
            // 0x33b748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B74Cu; }
        if (ctx->pc != 0x33B74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B74Cu; }
        if (ctx->pc != 0x33B74Cu) { return; }
    }
    ctx->pc = 0x33B74Cu;
label_33b74c:
    // 0x33b74c: 0x94510004  lhu         $s1, 0x4($v0)
    ctx->pc = 0x33b74cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_33b750:
    // 0x33b750: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x33b750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_33b754:
    // 0x33b754: 0xc0770c8  jal         func_1DC320
label_33b758:
    if (ctx->pc == 0x33B758u) {
        ctx->pc = 0x33B758u;
            // 0x33b758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B75Cu;
        goto label_33b75c;
    }
    ctx->pc = 0x33B754u;
    SET_GPR_U32(ctx, 31, 0x33B75Cu);
    ctx->pc = 0x33B758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B754u;
            // 0x33b758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC320u;
    if (runtime->hasFunction(0x1DC320u)) {
        auto targetFn = runtime->lookupFunction(0x1DC320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B75Cu; }
        if (ctx->pc != 0x33B75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC320_0x1dc320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B75Cu; }
        if (ctx->pc != 0x33B75Cu) { return; }
    }
    ctx->pc = 0x33B75Cu;
label_33b75c:
    // 0x33b75c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x33b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_33b760:
    // 0x33b760: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x33b760u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_33b764:
    // 0x33b764: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33b764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b768:
    // 0x33b768: 0xa3a202af  sb          $v0, 0x2AF($sp)
    ctx->pc = 0x33b768u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
label_33b76c:
    // 0x33b76c: 0x0  nop
    ctx->pc = 0x33b76cu;
    // NOP
label_33b770:
    // 0x33b770: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x33b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_33b774:
    // 0x33b774: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x33b774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33b778:
    // 0x33b778: 0x1440feed  bnez        $v0, . + 4 + (-0x113 << 2)
label_33b77c:
    if (ctx->pc == 0x33B77Cu) {
        ctx->pc = 0x33B77Cu;
            // 0x33b77c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x33B780u;
        goto label_33b780;
    }
    ctx->pc = 0x33B778u;
    {
        const bool branch_taken_0x33b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B778u;
            // 0x33b77c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b778) {
            ctx->pc = 0x33B330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33b330;
        }
    }
    ctx->pc = 0x33B780u;
label_33b780:
    // 0x33b780: 0x10000022  b           . + 4 + (0x22 << 2)
label_33b784:
    if (ctx->pc == 0x33B784u) {
        ctx->pc = 0x33B788u;
        goto label_33b788;
    }
    ctx->pc = 0x33B780u;
    {
        const bool branch_taken_0x33b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b780) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B788u;
label_33b788:
    // 0x33b788: 0xc0775b0  jal         func_1DD6C0
label_33b78c:
    if (ctx->pc == 0x33B78Cu) {
        ctx->pc = 0x33B790u;
        goto label_33b790;
    }
    ctx->pc = 0x33B788u;
    SET_GPR_U32(ctx, 31, 0x33B790u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B790u; }
        if (ctx->pc != 0x33B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B790u; }
        if (ctx->pc != 0x33B790u) { return; }
    }
    ctx->pc = 0x33B790u;
label_33b790:
    // 0x33b790: 0xc0775ac  jal         func_1DD6B0
label_33b794:
    if (ctx->pc == 0x33B794u) {
        ctx->pc = 0x33B794u;
            // 0x33b794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B798u;
        goto label_33b798;
    }
    ctx->pc = 0x33B790u;
    SET_GPR_U32(ctx, 31, 0x33B798u);
    ctx->pc = 0x33B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B790u;
            // 0x33b794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B798u; }
        if (ctx->pc != 0x33B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B798u; }
        if (ctx->pc != 0x33B798u) { return; }
    }
    ctx->pc = 0x33B798u;
label_33b798:
    // 0x33b798: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33b79c:
    // 0x33b79c: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_33b7a0:
    if (ctx->pc == 0x33B7A0u) {
        ctx->pc = 0x33B7A0u;
            // 0x33b7a0: 0x26a40410  addiu       $a0, $s5, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
        ctx->pc = 0x33B7A4u;
        goto label_33b7a4;
    }
    ctx->pc = 0x33B79Cu;
    {
        const bool branch_taken_0x33b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b79c) {
            ctx->pc = 0x33B7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B79Cu;
            // 0x33b7a0: 0x26a40410  addiu       $a0, $s5, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B800u;
            goto label_33b800;
        }
    }
    ctx->pc = 0x33B7A4u;
label_33b7a4:
    // 0x33b7a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b7a8:
    // 0x33b7a8: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x33b7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_33b7ac:
    // 0x33b7ac: 0xc0cefc8  jal         func_33BF20
label_33b7b0:
    if (ctx->pc == 0x33B7B0u) {
        ctx->pc = 0x33B7B0u;
            // 0x33b7b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B7B4u;
        goto label_33b7b4;
    }
    ctx->pc = 0x33B7ACu;
    SET_GPR_U32(ctx, 31, 0x33B7B4u);
    ctx->pc = 0x33B7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B7ACu;
            // 0x33b7b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BF20u;
    if (runtime->hasFunction(0x33BF20u)) {
        auto targetFn = runtime->lookupFunction(0x33BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7B4u; }
        if (ctx->pc != 0x33B7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BF20_0x33bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7B4u; }
        if (ctx->pc != 0x33B7B4u) { return; }
    }
    ctx->pc = 0x33B7B4u;
label_33b7b4:
    // 0x33b7b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33b7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33b7b8:
    // 0x33b7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b7bc:
    // 0x33b7bc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x33b7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_33b7c0:
    // 0x33b7c0: 0x320f809  jalr        $t9
label_33b7c4:
    if (ctx->pc == 0x33B7C4u) {
        ctx->pc = 0x33B7C4u;
            // 0x33b7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B7C8u;
        goto label_33b7c8;
    }
    ctx->pc = 0x33B7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33B7C8u);
        ctx->pc = 0x33B7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B7C0u;
            // 0x33b7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33B7C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33B7C8u; }
            if (ctx->pc != 0x33B7C8u) { return; }
        }
        }
    }
    ctx->pc = 0x33B7C8u;
label_33b7c8:
    // 0x33b7c8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x33b7c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_33b7cc:
    // 0x33b7cc: 0x1812  mflo        $v1
    ctx->pc = 0x33b7ccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_33b7d0:
    // 0x33b7d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b7d4:
    // 0x33b7d4: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x33b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_33b7d8:
    // 0x33b7d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33b7dc:
    // 0x33b7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33b7e0:
    // 0x33b7e0: 0xc0cefc4  jal         func_33BF10
label_33b7e4:
    if (ctx->pc == 0x33B7E4u) {
        ctx->pc = 0x33B7E4u;
            // 0x33b7e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x33B7E8u;
        goto label_33b7e8;
    }
    ctx->pc = 0x33B7E0u;
    SET_GPR_U32(ctx, 31, 0x33B7E8u);
    ctx->pc = 0x33B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B7E0u;
            // 0x33b7e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BF10u;
    if (runtime->hasFunction(0x33BF10u)) {
        auto targetFn = runtime->lookupFunction(0x33BF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7E8u; }
        if (ctx->pc != 0x33B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BF10_0x33bf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7E8u; }
        if (ctx->pc != 0x33B7E8u) { return; }
    }
    ctx->pc = 0x33B7E8u;
label_33b7e8:
    // 0x33b7e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b7ec:
    // 0x33b7ec: 0x26a40410  addiu       $a0, $s5, 0x410
    ctx->pc = 0x33b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
label_33b7f0:
    // 0x33b7f0: 0xc04a508  jal         func_129420
label_33b7f4:
    if (ctx->pc == 0x33B7F4u) {
        ctx->pc = 0x33B7F4u;
            // 0x33b7f4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x33B7F8u;
        goto label_33b7f8;
    }
    ctx->pc = 0x33B7F0u;
    SET_GPR_U32(ctx, 31, 0x33B7F8u);
    ctx->pc = 0x33B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B7F0u;
            // 0x33b7f4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7F8u; }
        if (ctx->pc != 0x33B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B7F8u; }
        if (ctx->pc != 0x33B7F8u) { return; }
    }
    ctx->pc = 0x33B7F8u;
label_33b7f8:
    // 0x33b7f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_33b7fc:
    if (ctx->pc == 0x33B7FCu) {
        ctx->pc = 0x33B800u;
        goto label_33b800;
    }
    ctx->pc = 0x33B7F8u;
    {
        const bool branch_taken_0x33b7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7f8) {
            ctx->pc = 0x33B80Cu;
            goto label_33b80c;
        }
    }
    ctx->pc = 0x33B800u;
label_33b800:
    // 0x33b800: 0x26a503e0  addiu       $a1, $s5, 0x3E0
    ctx->pc = 0x33b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
label_33b804:
    // 0x33b804: 0xc04a508  jal         func_129420
label_33b808:
    if (ctx->pc == 0x33B808u) {
        ctx->pc = 0x33B808u;
            // 0x33b808: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x33B80Cu;
        goto label_33b80c;
    }
    ctx->pc = 0x33B804u;
    SET_GPR_U32(ctx, 31, 0x33B80Cu);
    ctx->pc = 0x33B808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B804u;
            // 0x33b808: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B80Cu; }
        if (ctx->pc != 0x33B80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B80Cu; }
        if (ctx->pc != 0x33B80Cu) { return; }
    }
    ctx->pc = 0x33B80Cu;
label_33b80c:
    // 0x33b80c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b810:
    // 0x33b810: 0xc0cefa4  jal         func_33BE90
label_33b814:
    if (ctx->pc == 0x33B814u) {
        ctx->pc = 0x33B814u;
            // 0x33b814: 0x26a50410  addiu       $a1, $s5, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
        ctx->pc = 0x33B818u;
        goto label_33b818;
    }
    ctx->pc = 0x33B810u;
    SET_GPR_U32(ctx, 31, 0x33B818u);
    ctx->pc = 0x33B814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B810u;
            // 0x33b814: 0x26a50410  addiu       $a1, $s5, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE90u;
    if (runtime->hasFunction(0x33BE90u)) {
        auto targetFn = runtime->lookupFunction(0x33BE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B818u; }
        if (ctx->pc != 0x33B818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE90_0x33be90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B818u; }
        if (ctx->pc != 0x33B818u) { return; }
    }
    ctx->pc = 0x33B818u;
label_33b818:
    // 0x33b818: 0xc0cefa0  jal         func_33BE80
label_33b81c:
    if (ctx->pc == 0x33B81Cu) {
        ctx->pc = 0x33B81Cu;
            // 0x33b81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B820u;
        goto label_33b820;
    }
    ctx->pc = 0x33B818u;
    SET_GPR_U32(ctx, 31, 0x33B820u);
    ctx->pc = 0x33B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B818u;
            // 0x33b81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE80u;
    if (runtime->hasFunction(0x33BE80u)) {
        auto targetFn = runtime->lookupFunction(0x33BE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B820u; }
        if (ctx->pc != 0x33B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE80_0x33be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B820u; }
        if (ctx->pc != 0x33B820u) { return; }
    }
    ctx->pc = 0x33B820u;
label_33b820:
    // 0x33b820: 0xc077280  jal         func_1DCA00
label_33b824:
    if (ctx->pc == 0x33B824u) {
        ctx->pc = 0x33B824u;
            // 0x33b824: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B828u;
        goto label_33b828;
    }
    ctx->pc = 0x33B820u;
    SET_GPR_U32(ctx, 31, 0x33B828u);
    ctx->pc = 0x33B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B820u;
            // 0x33b824: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B828u; }
        if (ctx->pc != 0x33B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B828u; }
        if (ctx->pc != 0x33B828u) { return; }
    }
    ctx->pc = 0x33B828u;
label_33b828:
    // 0x33b828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b82c:
    // 0x33b82c: 0xc075318  jal         func_1D4C60
label_33b830:
    if (ctx->pc == 0x33B830u) {
        ctx->pc = 0x33B830u;
            // 0x33b830: 0x26a50420  addiu       $a1, $s5, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1056));
        ctx->pc = 0x33B834u;
        goto label_33b834;
    }
    ctx->pc = 0x33B82Cu;
    SET_GPR_U32(ctx, 31, 0x33B834u);
    ctx->pc = 0x33B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B82Cu;
            // 0x33b830: 0x26a50420  addiu       $a1, $s5, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B834u; }
        if (ctx->pc != 0x33B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B834u; }
        if (ctx->pc != 0x33B834u) { return; }
    }
    ctx->pc = 0x33B834u;
label_33b834:
    // 0x33b834: 0xc077280  jal         func_1DCA00
label_33b838:
    if (ctx->pc == 0x33B838u) {
        ctx->pc = 0x33B838u;
            // 0x33b838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B83Cu;
        goto label_33b83c;
    }
    ctx->pc = 0x33B834u;
    SET_GPR_U32(ctx, 31, 0x33B83Cu);
    ctx->pc = 0x33B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B834u;
            // 0x33b838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B83Cu; }
        if (ctx->pc != 0x33B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B83Cu; }
        if (ctx->pc != 0x33B83Cu) { return; }
    }
    ctx->pc = 0x33B83Cu;
label_33b83c:
    // 0x33b83c: 0xc07727c  jal         func_1DC9F0
label_33b840:
    if (ctx->pc == 0x33B840u) {
        ctx->pc = 0x33B840u;
            // 0x33b840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B844u;
        goto label_33b844;
    }
    ctx->pc = 0x33B83Cu;
    SET_GPR_U32(ctx, 31, 0x33B844u);
    ctx->pc = 0x33B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B83Cu;
            // 0x33b840: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B844u; }
        if (ctx->pc != 0x33B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B844u; }
        if (ctx->pc != 0x33B844u) { return; }
    }
    ctx->pc = 0x33B844u;
label_33b844:
    // 0x33b844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b848:
    // 0x33b848: 0xc0c05e0  jal         func_301780
label_33b84c:
    if (ctx->pc == 0x33B84Cu) {
        ctx->pc = 0x33B84Cu;
            // 0x33b84c: 0x26a407e0  addiu       $a0, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->pc = 0x33B850u;
        goto label_33b850;
    }
    ctx->pc = 0x33B848u;
    SET_GPR_U32(ctx, 31, 0x33B850u);
    ctx->pc = 0x33B84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B848u;
            // 0x33b84c: 0x26a407e0  addiu       $a0, $s5, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B850u; }
        if (ctx->pc != 0x33B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B850u; }
        if (ctx->pc != 0x33B850u) { return; }
    }
    ctx->pc = 0x33B850u;
label_33b850:
    // 0x33b850: 0xc077280  jal         func_1DCA00
label_33b854:
    if (ctx->pc == 0x33B854u) {
        ctx->pc = 0x33B854u;
            // 0x33b854: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B858u;
        goto label_33b858;
    }
    ctx->pc = 0x33B850u;
    SET_GPR_U32(ctx, 31, 0x33B858u);
    ctx->pc = 0x33B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B850u;
            // 0x33b854: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B858u; }
        if (ctx->pc != 0x33B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B858u; }
        if (ctx->pc != 0x33B858u) { return; }
    }
    ctx->pc = 0x33B858u;
label_33b858:
    // 0x33b858: 0xc07727c  jal         func_1DC9F0
label_33b85c:
    if (ctx->pc == 0x33B85Cu) {
        ctx->pc = 0x33B85Cu;
            // 0x33b85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B860u;
        goto label_33b860;
    }
    ctx->pc = 0x33B858u;
    SET_GPR_U32(ctx, 31, 0x33B860u);
    ctx->pc = 0x33B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B858u;
            // 0x33b85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B860u; }
        if (ctx->pc != 0x33B860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B860u; }
        if (ctx->pc != 0x33B860u) { return; }
    }
    ctx->pc = 0x33B860u;
label_33b860:
    // 0x33b860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b864:
    // 0x33b864: 0xc0c05e0  jal         func_301780
label_33b868:
    if (ctx->pc == 0x33B868u) {
        ctx->pc = 0x33B868u;
            // 0x33b868: 0x26a40890  addiu       $a0, $s5, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
        ctx->pc = 0x33B86Cu;
        goto label_33b86c;
    }
    ctx->pc = 0x33B864u;
    SET_GPR_U32(ctx, 31, 0x33B86Cu);
    ctx->pc = 0x33B868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B864u;
            // 0x33b868: 0x26a40890  addiu       $a0, $s5, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B86Cu; }
        if (ctx->pc != 0x33B86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B86Cu; }
        if (ctx->pc != 0x33B86Cu) { return; }
    }
    ctx->pc = 0x33B86Cu;
label_33b86c:
    // 0x33b86c: 0xc04cc14  jal         func_133050
label_33b870:
    if (ctx->pc == 0x33B870u) {
        ctx->pc = 0x33B870u;
            // 0x33b870: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x33B874u;
        goto label_33b874;
    }
    ctx->pc = 0x33B86Cu;
    SET_GPR_U32(ctx, 31, 0x33B874u);
    ctx->pc = 0x33B870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B86Cu;
            // 0x33b870: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B874u; }
        if (ctx->pc != 0x33B874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B874u; }
        if (ctx->pc != 0x33B874u) { return; }
    }
    ctx->pc = 0x33B874u;
label_33b874:
    // 0x33b874: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x33b874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_33b878:
    // 0x33b878: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_33b87c:
    // 0x33b87c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33b87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33b880:
    // 0x33b880: 0x0  nop
    ctx->pc = 0x33b880u;
    // NOP
label_33b884:
    // 0x33b884: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33b884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33b888:
    // 0x33b888: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_33b88c:
    if (ctx->pc == 0x33B88Cu) {
        ctx->pc = 0x33B88Cu;
            // 0x33b88c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x33B890u;
        goto label_33b890;
    }
    ctx->pc = 0x33B888u;
    {
        const bool branch_taken_0x33b888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b888) {
            ctx->pc = 0x33B88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B888u;
            // 0x33b88c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B8C4u;
            goto label_33b8c4;
        }
    }
    ctx->pc = 0x33B890u;
label_33b890:
    // 0x33b890: 0xc077280  jal         func_1DCA00
label_33b894:
    if (ctx->pc == 0x33B894u) {
        ctx->pc = 0x33B894u;
            // 0x33b894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B898u;
        goto label_33b898;
    }
    ctx->pc = 0x33B890u;
    SET_GPR_U32(ctx, 31, 0x33B898u);
    ctx->pc = 0x33B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B890u;
            // 0x33b894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B898u; }
        if (ctx->pc != 0x33B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B898u; }
        if (ctx->pc != 0x33B898u) { return; }
    }
    ctx->pc = 0x33B898u;
label_33b898:
    // 0x33b898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b89c:
    // 0x33b89c: 0xc0c05dc  jal         func_301770
label_33b8a0:
    if (ctx->pc == 0x33B8A0u) {
        ctx->pc = 0x33B8A0u;
            // 0x33b8a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8A4u;
        goto label_33b8a4;
    }
    ctx->pc = 0x33B89Cu;
    SET_GPR_U32(ctx, 31, 0x33B8A4u);
    ctx->pc = 0x33B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B89Cu;
            // 0x33b8a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8A4u; }
        if (ctx->pc != 0x33B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8A4u; }
        if (ctx->pc != 0x33B8A4u) { return; }
    }
    ctx->pc = 0x33B8A4u;
label_33b8a4:
    // 0x33b8a4: 0xc0cef9c  jal         func_33BE70
label_33b8a8:
    if (ctx->pc == 0x33B8A8u) {
        ctx->pc = 0x33B8A8u;
            // 0x33b8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8ACu;
        goto label_33b8ac;
    }
    ctx->pc = 0x33B8A4u;
    SET_GPR_U32(ctx, 31, 0x33B8ACu);
    ctx->pc = 0x33B8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8A4u;
            // 0x33b8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE70u;
    if (runtime->hasFunction(0x33BE70u)) {
        auto targetFn = runtime->lookupFunction(0x33BE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8ACu; }
        if (ctx->pc != 0x33B8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE70_0x33be70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8ACu; }
        if (ctx->pc != 0x33B8ACu) { return; }
    }
    ctx->pc = 0x33B8ACu;
label_33b8ac:
    // 0x33b8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b8b0:
    // 0x33b8b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33b8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b8b4:
    // 0x33b8b4: 0xc075378  jal         func_1D4DE0
label_33b8b8:
    if (ctx->pc == 0x33B8B8u) {
        ctx->pc = 0x33B8B8u;
            // 0x33b8b8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x33B8BCu;
        goto label_33b8bc;
    }
    ctx->pc = 0x33B8B4u;
    SET_GPR_U32(ctx, 31, 0x33B8BCu);
    ctx->pc = 0x33B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8B4u;
            // 0x33b8b8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8BCu; }
        if (ctx->pc != 0x33B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8BCu; }
        if (ctx->pc != 0x33B8BCu) { return; }
    }
    ctx->pc = 0x33B8BCu;
label_33b8bc:
    // 0x33b8bc: 0xe6a00430  swc1        $f0, 0x430($s5)
    ctx->pc = 0x33b8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1072), bits); }
label_33b8c0:
    // 0x33b8c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x33b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_33b8c4:
    // 0x33b8c4: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
label_33b8c8:
    if (ctx->pc == 0x33B8C8u) {
        ctx->pc = 0x33B8C8u;
            // 0x33b8c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8CCu;
        goto label_33b8cc;
    }
    ctx->pc = 0x33B8C4u;
    {
        const bool branch_taken_0x33b8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8c4) {
            ctx->pc = 0x33B8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8C4u;
            // 0x33b8c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BA1Cu;
            goto label_33ba1c;
        }
    }
    ctx->pc = 0x33B8CCu;
label_33b8cc:
    // 0x33b8cc: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x33b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_33b8d0:
    // 0x33b8d0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_33b8d4:
    if (ctx->pc == 0x33B8D4u) {
        ctx->pc = 0x33B8D4u;
            // 0x33b8d4: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x33B8D8u;
        goto label_33b8d8;
    }
    ctx->pc = 0x33B8D0u;
    {
        const bool branch_taken_0x33b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b8d0) {
            ctx->pc = 0x33B8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8D0u;
            // 0x33b8d4: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B958u;
            goto label_33b958;
        }
    }
    ctx->pc = 0x33B8D8u;
label_33b8d8:
    // 0x33b8d8: 0xc0770c0  jal         func_1DC300
label_33b8dc:
    if (ctx->pc == 0x33B8DCu) {
        ctx->pc = 0x33B8DCu;
            // 0x33b8dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8E0u;
        goto label_33b8e0;
    }
    ctx->pc = 0x33B8D8u;
    SET_GPR_U32(ctx, 31, 0x33B8E0u);
    ctx->pc = 0x33B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8D8u;
            // 0x33b8dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8E0u; }
        if (ctx->pc != 0x33B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8E0u; }
        if (ctx->pc != 0x33B8E0u) { return; }
    }
    ctx->pc = 0x33B8E0u;
label_33b8e0:
    // 0x33b8e0: 0xc0cef98  jal         func_33BE60
label_33b8e4:
    if (ctx->pc == 0x33B8E4u) {
        ctx->pc = 0x33B8E4u;
            // 0x33b8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8E8u;
        goto label_33b8e8;
    }
    ctx->pc = 0x33B8E0u;
    SET_GPR_U32(ctx, 31, 0x33B8E8u);
    ctx->pc = 0x33B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8E0u;
            // 0x33b8e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8E8u; }
        if (ctx->pc != 0x33B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8E8u; }
        if (ctx->pc != 0x33B8E8u) { return; }
    }
    ctx->pc = 0x33B8E8u;
label_33b8e8:
    // 0x33b8e8: 0xc0cf0e4  jal         func_33C390
label_33b8ec:
    if (ctx->pc == 0x33B8ECu) {
        ctx->pc = 0x33B8ECu;
            // 0x33b8ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B8F0u;
        goto label_33b8f0;
    }
    ctx->pc = 0x33B8E8u;
    SET_GPR_U32(ctx, 31, 0x33B8F0u);
    ctx->pc = 0x33B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8E8u;
            // 0x33b8ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8F0u; }
        if (ctx->pc != 0x33B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8F0u; }
        if (ctx->pc != 0x33B8F0u) { return; }
    }
    ctx->pc = 0x33B8F0u;
label_33b8f0:
    // 0x33b8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b8f4:
    // 0x33b8f4: 0xc0ceff0  jal         func_33BFC0
label_33b8f8:
    if (ctx->pc == 0x33B8F8u) {
        ctx->pc = 0x33B8F8u;
            // 0x33b8f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33B8FCu;
        goto label_33b8fc;
    }
    ctx->pc = 0x33B8F4u;
    SET_GPR_U32(ctx, 31, 0x33B8FCu);
    ctx->pc = 0x33B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B8F4u;
            // 0x33b8f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8FCu; }
        if (ctx->pc != 0x33B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B8FCu; }
        if (ctx->pc != 0x33B8FCu) { return; }
    }
    ctx->pc = 0x33B8FCu;
label_33b8fc:
    // 0x33b8fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33b8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b900:
    // 0x33b900: 0xc07753c  jal         func_1DD4F0
label_33b904:
    if (ctx->pc == 0x33B904u) {
        ctx->pc = 0x33B904u;
            // 0x33b904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B908u;
        goto label_33b908;
    }
    ctx->pc = 0x33B900u;
    SET_GPR_U32(ctx, 31, 0x33B908u);
    ctx->pc = 0x33B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B900u;
            // 0x33b904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B908u; }
        if (ctx->pc != 0x33B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B908u; }
        if (ctx->pc != 0x33B908u) { return; }
    }
    ctx->pc = 0x33B908u;
label_33b908:
    // 0x33b908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b90c:
    // 0x33b90c: 0xc0cef94  jal         func_33BE50
label_33b910:
    if (ctx->pc == 0x33B910u) {
        ctx->pc = 0x33B910u;
            // 0x33b910: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B914u;
        goto label_33b914;
    }
    ctx->pc = 0x33B90Cu;
    SET_GPR_U32(ctx, 31, 0x33B914u);
    ctx->pc = 0x33B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B90Cu;
            // 0x33b910: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B914u; }
        if (ctx->pc != 0x33B914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B914u; }
        if (ctx->pc != 0x33B914u) { return; }
    }
    ctx->pc = 0x33B914u;
label_33b914:
    // 0x33b914: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33b914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b918:
    // 0x33b918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33b918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b91c:
    // 0x33b91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33b920:
    // 0x33b920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33b920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33b924:
    // 0x33b924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b928:
    // 0x33b928: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33b928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b92c:
    // 0x33b92c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33b92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33b930:
    // 0x33b930: 0x27a902af  addiu       $t1, $sp, 0x2AF
    ctx->pc = 0x33b930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 687));
label_33b934:
    // 0x33b934: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x33b934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33b938:
    // 0x33b938: 0xc0b8704  jal         func_2E1C10
label_33b93c:
    if (ctx->pc == 0x33B93Cu) {
        ctx->pc = 0x33B93Cu;
            // 0x33b93c: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B940u;
        goto label_33b940;
    }
    ctx->pc = 0x33B938u;
    SET_GPR_U32(ctx, 31, 0x33B940u);
    ctx->pc = 0x33B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B938u;
            // 0x33b93c: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B940u; }
        if (ctx->pc != 0x33B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B940u; }
        if (ctx->pc != 0x33B940u) { return; }
    }
    ctx->pc = 0x33B940u;
label_33b940:
    // 0x33b940: 0xc0770c0  jal         func_1DC300
label_33b944:
    if (ctx->pc == 0x33B944u) {
        ctx->pc = 0x33B944u;
            // 0x33b944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B948u;
        goto label_33b948;
    }
    ctx->pc = 0x33B940u;
    SET_GPR_U32(ctx, 31, 0x33B948u);
    ctx->pc = 0x33B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B940u;
            // 0x33b944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B948u; }
        if (ctx->pc != 0x33B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B948u; }
        if (ctx->pc != 0x33B948u) { return; }
    }
    ctx->pc = 0x33B948u;
label_33b948:
    // 0x33b948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b94c:
    // 0x33b94c: 0xc0ab808  jal         func_2AE020
label_33b950:
    if (ctx->pc == 0x33B950u) {
        ctx->pc = 0x33B950u;
            // 0x33b950: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33B954u;
        goto label_33b954;
    }
    ctx->pc = 0x33B94Cu;
    SET_GPR_U32(ctx, 31, 0x33B954u);
    ctx->pc = 0x33B950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B94Cu;
            // 0x33b950: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B954u; }
        if (ctx->pc != 0x33B954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B954u; }
        if (ctx->pc != 0x33B954u) { return; }
    }
    ctx->pc = 0x33B954u;
label_33b954:
    // 0x33b954: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x33b954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_33b958:
    // 0x33b958: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33b95c:
    if (ctx->pc == 0x33B95Cu) {
        ctx->pc = 0x33B95Cu;
            // 0x33b95c: 0x93a200a0  lbu         $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x33B960u;
        goto label_33b960;
    }
    ctx->pc = 0x33B958u;
    {
        const bool branch_taken_0x33b958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b958) {
            ctx->pc = 0x33B95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B958u;
            // 0x33b95c: 0x93a200a0  lbu         $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B97Cu;
            goto label_33b97c;
        }
    }
    ctx->pc = 0x33B960u;
label_33b960:
    // 0x33b960: 0xc0770c0  jal         func_1DC300
label_33b964:
    if (ctx->pc == 0x33B964u) {
        ctx->pc = 0x33B964u;
            // 0x33b964: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B968u;
        goto label_33b968;
    }
    ctx->pc = 0x33B960u;
    SET_GPR_U32(ctx, 31, 0x33B968u);
    ctx->pc = 0x33B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B960u;
            // 0x33b964: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B968u; }
        if (ctx->pc != 0x33B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B968u; }
        if (ctx->pc != 0x33B968u) { return; }
    }
    ctx->pc = 0x33B968u;
label_33b968:
    // 0x33b968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b96c:
    // 0x33b96c: 0x26a506b0  addiu       $a1, $s5, 0x6B0
    ctx->pc = 0x33b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1712));
label_33b970:
    // 0x33b970: 0xc04a508  jal         func_129420
label_33b974:
    if (ctx->pc == 0x33B974u) {
        ctx->pc = 0x33B974u;
            // 0x33b974: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x33B978u;
        goto label_33b978;
    }
    ctx->pc = 0x33B970u;
    SET_GPR_U32(ctx, 31, 0x33B978u);
    ctx->pc = 0x33B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B970u;
            // 0x33b974: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B978u; }
        if (ctx->pc != 0x33B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B978u; }
        if (ctx->pc != 0x33B978u) { return; }
    }
    ctx->pc = 0x33B978u;
label_33b978:
    // 0x33b978: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x33b978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_33b97c:
    // 0x33b97c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x33b97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b980:
    // 0x33b980: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_33b984:
    if (ctx->pc == 0x33B984u) {
        ctx->pc = 0x33B984u;
            // 0x33b984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B988u;
        goto label_33b988;
    }
    ctx->pc = 0x33B980u;
    {
        const bool branch_taken_0x33b980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b980) {
            ctx->pc = 0x33B984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B980u;
            // 0x33b984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B9ACu;
            goto label_33b9ac;
        }
    }
    ctx->pc = 0x33B988u;
label_33b988:
    // 0x33b988: 0xc0770c0  jal         func_1DC300
label_33b98c:
    if (ctx->pc == 0x33B98Cu) {
        ctx->pc = 0x33B98Cu;
            // 0x33b98c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B990u;
        goto label_33b990;
    }
    ctx->pc = 0x33B988u;
    SET_GPR_U32(ctx, 31, 0x33B990u);
    ctx->pc = 0x33B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B988u;
            // 0x33b98c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B990u; }
        if (ctx->pc != 0x33B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B990u; }
        if (ctx->pc != 0x33B990u) { return; }
    }
    ctx->pc = 0x33B990u;
label_33b990:
    // 0x33b990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b994:
    // 0x33b994: 0xc0ab808  jal         func_2AE020
label_33b998:
    if (ctx->pc == 0x33B998u) {
        ctx->pc = 0x33B998u;
            // 0x33b998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33B99Cu;
        goto label_33b99c;
    }
    ctx->pc = 0x33B994u;
    SET_GPR_U32(ctx, 31, 0x33B99Cu);
    ctx->pc = 0x33B998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B994u;
            // 0x33b998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B99Cu; }
        if (ctx->pc != 0x33B99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B99Cu; }
        if (ctx->pc != 0x33B99Cu) { return; }
    }
    ctx->pc = 0x33B99Cu;
label_33b99c:
    // 0x33b99c: 0x26a406b0  addiu       $a0, $s5, 0x6B0
    ctx->pc = 0x33b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1712));
label_33b9a0:
    // 0x33b9a0: 0xc0ab808  jal         func_2AE020
label_33b9a4:
    if (ctx->pc == 0x33B9A4u) {
        ctx->pc = 0x33B9A4u;
            // 0x33b9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33B9A8u;
        goto label_33b9a8;
    }
    ctx->pc = 0x33B9A0u;
    SET_GPR_U32(ctx, 31, 0x33B9A8u);
    ctx->pc = 0x33B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9A0u;
            // 0x33b9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9A8u; }
        if (ctx->pc != 0x33B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9A8u; }
        if (ctx->pc != 0x33B9A8u) { return; }
    }
    ctx->pc = 0x33B9A8u;
label_33b9a8:
    // 0x33b9a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33b9ac:
    // 0x33b9ac: 0xc0cef90  jal         func_33BE40
label_33b9b0:
    if (ctx->pc == 0x33B9B0u) {
        ctx->pc = 0x33B9B4u;
        goto label_33b9b4;
    }
    ctx->pc = 0x33B9ACu;
    SET_GPR_U32(ctx, 31, 0x33B9B4u);
    ctx->pc = 0x33BE40u;
    if (runtime->hasFunction(0x33BE40u)) {
        auto targetFn = runtime->lookupFunction(0x33BE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9B4u; }
        if (ctx->pc != 0x33B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE40_0x33be40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9B4u; }
        if (ctx->pc != 0x33B9B4u) { return; }
    }
    ctx->pc = 0x33B9B4u;
label_33b9b4:
    // 0x33b9b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33b9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b9b8:
    // 0x33b9b8: 0xc0cef8c  jal         func_33BE30
label_33b9bc:
    if (ctx->pc == 0x33B9BCu) {
        ctx->pc = 0x33B9BCu;
            // 0x33b9bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B9C0u;
        goto label_33b9c0;
    }
    ctx->pc = 0x33B9B8u;
    SET_GPR_U32(ctx, 31, 0x33B9C0u);
    ctx->pc = 0x33B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9B8u;
            // 0x33b9bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE30u;
    if (runtime->hasFunction(0x33BE30u)) {
        auto targetFn = runtime->lookupFunction(0x33BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9C0u; }
        if (ctx->pc != 0x33B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE30_0x33be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9C0u; }
        if (ctx->pc != 0x33B9C0u) { return; }
    }
    ctx->pc = 0x33B9C0u;
label_33b9c0:
    // 0x33b9c0: 0xc077330  jal         func_1DCCC0
label_33b9c4:
    if (ctx->pc == 0x33B9C4u) {
        ctx->pc = 0x33B9C4u;
            // 0x33b9c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B9C8u;
        goto label_33b9c8;
    }
    ctx->pc = 0x33B9C0u;
    SET_GPR_U32(ctx, 31, 0x33B9C8u);
    ctx->pc = 0x33B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9C0u;
            // 0x33b9c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9C8u; }
        if (ctx->pc != 0x33B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9C8u; }
        if (ctx->pc != 0x33B9C8u) { return; }
    }
    ctx->pc = 0x33B9C8u;
label_33b9c8:
    // 0x33b9c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_33b9cc:
    if (ctx->pc == 0x33B9CCu) {
        ctx->pc = 0x33B9D0u;
        goto label_33b9d0;
    }
    ctx->pc = 0x33B9C8u;
    {
        const bool branch_taken_0x33b9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b9c8) {
            ctx->pc = 0x33B9E0u;
            goto label_33b9e0;
        }
    }
    ctx->pc = 0x33B9D0u;
label_33b9d0:
    // 0x33b9d0: 0xc07732c  jal         func_1DCCB0
label_33b9d4:
    if (ctx->pc == 0x33B9D4u) {
        ctx->pc = 0x33B9D4u;
            // 0x33b9d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B9D8u;
        goto label_33b9d8;
    }
    ctx->pc = 0x33B9D0u;
    SET_GPR_U32(ctx, 31, 0x33B9D8u);
    ctx->pc = 0x33B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9D0u;
            // 0x33b9d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9D8u; }
        if (ctx->pc != 0x33B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9D8u; }
        if (ctx->pc != 0x33B9D8u) { return; }
    }
    ctx->pc = 0x33B9D8u;
label_33b9d8:
    // 0x33b9d8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_33b9dc:
    if (ctx->pc == 0x33B9DCu) {
        ctx->pc = 0x33B9DCu;
            // 0x33b9dc: 0xc6ac0430  lwc1        $f12, 0x430($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x33B9E0u;
        goto label_33b9e0;
    }
    ctx->pc = 0x33B9D8u;
    {
        const bool branch_taken_0x33b9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b9d8) {
            ctx->pc = 0x33B9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9D8u;
            // 0x33b9dc: 0xc6ac0430  lwc1        $f12, 0x430($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BA40u;
            goto label_33ba40;
        }
    }
    ctx->pc = 0x33B9E0u;
label_33b9e0:
    // 0x33b9e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33b9e4:
    // 0x33b9e4: 0xc0770b4  jal         func_1DC2D0
label_33b9e8:
    if (ctx->pc == 0x33B9E8u) {
        ctx->pc = 0x33B9E8u;
            // 0x33b9e8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x33B9ECu;
        goto label_33b9ec;
    }
    ctx->pc = 0x33B9E4u;
    SET_GPR_U32(ctx, 31, 0x33B9ECu);
    ctx->pc = 0x33B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9E4u;
            // 0x33b9e8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2D0u;
    if (runtime->hasFunction(0x1DC2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9ECu; }
        if (ctx->pc != 0x33B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2D0_0x1dc2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9ECu; }
        if (ctx->pc != 0x33B9ECu) { return; }
    }
    ctx->pc = 0x33B9ECu;
label_33b9ec:
    // 0x33b9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33b9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b9f0:
    // 0x33b9f0: 0xc077320  jal         func_1DCC80
label_33b9f4:
    if (ctx->pc == 0x33B9F4u) {
        ctx->pc = 0x33B9F4u;
            // 0x33b9f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33B9F8u;
        goto label_33b9f8;
    }
    ctx->pc = 0x33B9F0u;
    SET_GPR_U32(ctx, 31, 0x33B9F8u);
    ctx->pc = 0x33B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9F0u;
            // 0x33b9f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9F8u; }
        if (ctx->pc != 0x33B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B9F8u; }
        if (ctx->pc != 0x33B9F8u) { return; }
    }
    ctx->pc = 0x33B9F8u;
label_33b9f8:
    // 0x33b9f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b9fc:
    // 0x33b9fc: 0xc0cef88  jal         func_33BE20
label_33ba00:
    if (ctx->pc == 0x33BA00u) {
        ctx->pc = 0x33BA00u;
            // 0x33ba00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA04u;
        goto label_33ba04;
    }
    ctx->pc = 0x33B9FCu;
    SET_GPR_U32(ctx, 31, 0x33BA04u);
    ctx->pc = 0x33BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B9FCu;
            // 0x33ba00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE20u;
    if (runtime->hasFunction(0x33BE20u)) {
        auto targetFn = runtime->lookupFunction(0x33BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA04u; }
        if (ctx->pc != 0x33BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE20_0x33be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA04u; }
        if (ctx->pc != 0x33BA04u) { return; }
    }
    ctx->pc = 0x33BA04u;
label_33ba04:
    // 0x33ba04: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x33ba04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33ba08:
    // 0x33ba08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ba0c:
    // 0x33ba0c: 0xc0bc1d4  jal         func_2F0750
label_33ba10:
    if (ctx->pc == 0x33BA10u) {
        ctx->pc = 0x33BA10u;
            // 0x33ba10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA14u;
        goto label_33ba14;
    }
    ctx->pc = 0x33BA0Cu;
    SET_GPR_U32(ctx, 31, 0x33BA14u);
    ctx->pc = 0x33BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA0Cu;
            // 0x33ba10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA14u; }
        if (ctx->pc != 0x33BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA14u; }
        if (ctx->pc != 0x33BA14u) { return; }
    }
    ctx->pc = 0x33BA14u;
label_33ba14:
    // 0x33ba14: 0x10000009  b           . + 4 + (0x9 << 2)
label_33ba18:
    if (ctx->pc == 0x33BA18u) {
        ctx->pc = 0x33BA1Cu;
        goto label_33ba1c;
    }
    ctx->pc = 0x33BA14u;
    {
        const bool branch_taken_0x33ba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ba14) {
            ctx->pc = 0x33BA3Cu;
            goto label_33ba3c;
        }
    }
    ctx->pc = 0x33BA1Cu;
label_33ba1c:
    // 0x33ba1c: 0xc0770c0  jal         func_1DC300
label_33ba20:
    if (ctx->pc == 0x33BA20u) {
        ctx->pc = 0x33BA24u;
        goto label_33ba24;
    }
    ctx->pc = 0x33BA1Cu;
    SET_GPR_U32(ctx, 31, 0x33BA24u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA24u; }
        if (ctx->pc != 0x33BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA24u; }
        if (ctx->pc != 0x33BA24u) { return; }
    }
    ctx->pc = 0x33BA24u;
label_33ba24:
    // 0x33ba24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ba28:
    // 0x33ba28: 0xc0ab808  jal         func_2AE020
label_33ba2c:
    if (ctx->pc == 0x33BA2Cu) {
        ctx->pc = 0x33BA2Cu;
            // 0x33ba2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33BA30u;
        goto label_33ba30;
    }
    ctx->pc = 0x33BA28u;
    SET_GPR_U32(ctx, 31, 0x33BA30u);
    ctx->pc = 0x33BA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA28u;
            // 0x33ba2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA30u; }
        if (ctx->pc != 0x33BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA30u; }
        if (ctx->pc != 0x33BA30u) { return; }
    }
    ctx->pc = 0x33BA30u;
label_33ba30:
    // 0x33ba30: 0x26a406b0  addiu       $a0, $s5, 0x6B0
    ctx->pc = 0x33ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1712));
label_33ba34:
    // 0x33ba34: 0xc0ab808  jal         func_2AE020
label_33ba38:
    if (ctx->pc == 0x33BA38u) {
        ctx->pc = 0x33BA38u;
            // 0x33ba38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33BA3Cu;
        goto label_33ba3c;
    }
    ctx->pc = 0x33BA34u;
    SET_GPR_U32(ctx, 31, 0x33BA3Cu);
    ctx->pc = 0x33BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA34u;
            // 0x33ba38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA3Cu; }
        if (ctx->pc != 0x33BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA3Cu; }
        if (ctx->pc != 0x33BA3Cu) { return; }
    }
    ctx->pc = 0x33BA3Cu;
label_33ba3c:
    // 0x33ba3c: 0xc6ac0430  lwc1        $f12, 0x430($s5)
    ctx->pc = 0x33ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33ba40:
    // 0x33ba40: 0xc0cef80  jal         func_33BE00
label_33ba44:
    if (ctx->pc == 0x33BA44u) {
        ctx->pc = 0x33BA44u;
            // 0x33ba44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA48u;
        goto label_33ba48;
    }
    ctx->pc = 0x33BA40u;
    SET_GPR_U32(ctx, 31, 0x33BA48u);
    ctx->pc = 0x33BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA40u;
            // 0x33ba44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE00u;
    if (runtime->hasFunction(0x33BE00u)) {
        auto targetFn = runtime->lookupFunction(0x33BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA48u; }
        if (ctx->pc != 0x33BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE00_0x33be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA48u; }
        if (ctx->pc != 0x33BA48u) { return; }
    }
    ctx->pc = 0x33BA48u;
label_33ba48:
    // 0x33ba48: 0xc6ac0430  lwc1        $f12, 0x430($s5)
    ctx->pc = 0x33ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33ba4c:
    // 0x33ba4c: 0xc0cef78  jal         func_33BDE0
label_33ba50:
    if (ctx->pc == 0x33BA50u) {
        ctx->pc = 0x33BA50u;
            // 0x33ba50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA54u;
        goto label_33ba54;
    }
    ctx->pc = 0x33BA4Cu;
    SET_GPR_U32(ctx, 31, 0x33BA54u);
    ctx->pc = 0x33BA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA4Cu;
            // 0x33ba50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA54u; }
        if (ctx->pc != 0x33BA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA54u; }
        if (ctx->pc != 0x33BA54u) { return; }
    }
    ctx->pc = 0x33BA54u;
label_33ba54:
    // 0x33ba54: 0xc0c05d0  jal         func_301740
label_33ba58:
    if (ctx->pc == 0x33BA58u) {
        ctx->pc = 0x33BA58u;
            // 0x33ba58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA5Cu;
        goto label_33ba5c;
    }
    ctx->pc = 0x33BA54u;
    SET_GPR_U32(ctx, 31, 0x33BA5Cu);
    ctx->pc = 0x33BA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA54u;
            // 0x33ba58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301740u;
    if (runtime->hasFunction(0x301740u)) {
        auto targetFn = runtime->lookupFunction(0x301740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA5Cu; }
        if (ctx->pc != 0x33BA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301740_0x301740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA5Cu; }
        if (ctx->pc != 0x33BA5Cu) { return; }
    }
    ctx->pc = 0x33BA5Cu;
label_33ba5c:
    // 0x33ba5c: 0xc0c05dc  jal         func_301770
label_33ba60:
    if (ctx->pc == 0x33BA60u) {
        ctx->pc = 0x33BA60u;
            // 0x33ba60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA64u;
        goto label_33ba64;
    }
    ctx->pc = 0x33BA5Cu;
    SET_GPR_U32(ctx, 31, 0x33BA64u);
    ctx->pc = 0x33BA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA5Cu;
            // 0x33ba60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA64u; }
        if (ctx->pc != 0x33BA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA64u; }
        if (ctx->pc != 0x33BA64u) { return; }
    }
    ctx->pc = 0x33BA64u;
label_33ba64:
    // 0x33ba64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33ba64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ba68:
    // 0x33ba68: 0xc077280  jal         func_1DCA00
label_33ba6c:
    if (ctx->pc == 0x33BA6Cu) {
        ctx->pc = 0x33BA6Cu;
            // 0x33ba6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA70u;
        goto label_33ba70;
    }
    ctx->pc = 0x33BA68u;
    SET_GPR_U32(ctx, 31, 0x33BA70u);
    ctx->pc = 0x33BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA68u;
            // 0x33ba6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA70u; }
        if (ctx->pc != 0x33BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA70u; }
        if (ctx->pc != 0x33BA70u) { return; }
    }
    ctx->pc = 0x33BA70u;
label_33ba70:
    // 0x33ba70: 0xc07727c  jal         func_1DC9F0
label_33ba74:
    if (ctx->pc == 0x33BA74u) {
        ctx->pc = 0x33BA74u;
            // 0x33ba74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA78u;
        goto label_33ba78;
    }
    ctx->pc = 0x33BA70u;
    SET_GPR_U32(ctx, 31, 0x33BA78u);
    ctx->pc = 0x33BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA70u;
            // 0x33ba74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA78u; }
        if (ctx->pc != 0x33BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA78u; }
        if (ctx->pc != 0x33BA78u) { return; }
    }
    ctx->pc = 0x33BA78u;
label_33ba78:
    // 0x33ba78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33ba7c:
    // 0x33ba7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33ba7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33ba80:
    // 0x33ba80: 0xc0c05d4  jal         func_301750
label_33ba84:
    if (ctx->pc == 0x33BA84u) {
        ctx->pc = 0x33BA84u;
            // 0x33ba84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA88u;
        goto label_33ba88;
    }
    ctx->pc = 0x33BA80u;
    SET_GPR_U32(ctx, 31, 0x33BA88u);
    ctx->pc = 0x33BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA80u;
            // 0x33ba84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA88u; }
        if (ctx->pc != 0x33BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA88u; }
        if (ctx->pc != 0x33BA88u) { return; }
    }
    ctx->pc = 0x33BA88u;
label_33ba88:
    // 0x33ba88: 0xc0775d8  jal         func_1DD760
label_33ba8c:
    if (ctx->pc == 0x33BA8Cu) {
        ctx->pc = 0x33BA8Cu;
            // 0x33ba8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BA90u;
        goto label_33ba90;
    }
    ctx->pc = 0x33BA88u;
    SET_GPR_U32(ctx, 31, 0x33BA90u);
    ctx->pc = 0x33BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA88u;
            // 0x33ba8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA90u; }
        if (ctx->pc != 0x33BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BA90u; }
        if (ctx->pc != 0x33BA90u) { return; }
    }
    ctx->pc = 0x33BA90u;
label_33ba90:
    // 0x33ba90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33ba94:
    // 0x33ba94: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_33ba98:
    // 0x33ba98: 0xc0cef60  jal         func_33BD80
label_33ba9c:
    if (ctx->pc == 0x33BA9Cu) {
        ctx->pc = 0x33BA9Cu;
            // 0x33ba9c: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x33BAA0u;
        goto label_33baa0;
    }
    ctx->pc = 0x33BA98u;
    SET_GPR_U32(ctx, 31, 0x33BAA0u);
    ctx->pc = 0x33BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BA98u;
            // 0x33ba9c: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAA0u; }
        if (ctx->pc != 0x33BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAA0u; }
        if (ctx->pc != 0x33BAA0u) { return; }
    }
    ctx->pc = 0x33BAA0u;
label_33baa0:
    // 0x33baa0: 0xc0770c0  jal         func_1DC300
label_33baa4:
    if (ctx->pc == 0x33BAA4u) {
        ctx->pc = 0x33BAA4u;
            // 0x33baa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BAA8u;
        goto label_33baa8;
    }
    ctx->pc = 0x33BAA0u;
    SET_GPR_U32(ctx, 31, 0x33BAA8u);
    ctx->pc = 0x33BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAA0u;
            // 0x33baa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAA8u; }
        if (ctx->pc != 0x33BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAA8u; }
        if (ctx->pc != 0x33BAA8u) { return; }
    }
    ctx->pc = 0x33BAA8u;
label_33baa8:
    // 0x33baa8: 0xc0cef5c  jal         func_33BD70
label_33baac:
    if (ctx->pc == 0x33BAACu) {
        ctx->pc = 0x33BAACu;
            // 0x33baac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BAB0u;
        goto label_33bab0;
    }
    ctx->pc = 0x33BAA8u;
    SET_GPR_U32(ctx, 31, 0x33BAB0u);
    ctx->pc = 0x33BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAA8u;
            // 0x33baac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD70u;
    if (runtime->hasFunction(0x33BD70u)) {
        auto targetFn = runtime->lookupFunction(0x33BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAB0u; }
        if (ctx->pc != 0x33BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD70_0x33bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAB0u; }
        if (ctx->pc != 0x33BAB0u) { return; }
    }
    ctx->pc = 0x33BAB0u;
label_33bab0:
    // 0x33bab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33bab4:
    // 0x33bab4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_33bab8:
    if (ctx->pc == 0x33BAB8u) {
        ctx->pc = 0x33BAB8u;
            // 0x33bab8: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x33BABCu;
        goto label_33babc;
    }
    ctx->pc = 0x33BAB4u;
    {
        const bool branch_taken_0x33bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bab4) {
            ctx->pc = 0x33BAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAB4u;
            // 0x33bab8: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BAD4u;
            goto label_33bad4;
        }
    }
    ctx->pc = 0x33BABCu;
label_33babc:
    // 0x33babc: 0xc0775d8  jal         func_1DD760
label_33bac0:
    if (ctx->pc == 0x33BAC0u) {
        ctx->pc = 0x33BAC0u;
            // 0x33bac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BAC4u;
        goto label_33bac4;
    }
    ctx->pc = 0x33BABCu;
    SET_GPR_U32(ctx, 31, 0x33BAC4u);
    ctx->pc = 0x33BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BABCu;
            // 0x33bac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAC4u; }
        if (ctx->pc != 0x33BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAC4u; }
        if (ctx->pc != 0x33BAC4u) { return; }
    }
    ctx->pc = 0x33BAC4u;
label_33bac4:
    // 0x33bac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33bac8:
    // 0x33bac8: 0xc077590  jal         func_1DD640
label_33bacc:
    if (ctx->pc == 0x33BACCu) {
        ctx->pc = 0x33BACCu;
            // 0x33bacc: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->pc = 0x33BAD0u;
        goto label_33bad0;
    }
    ctx->pc = 0x33BAC8u;
    SET_GPR_U32(ctx, 31, 0x33BAD0u);
    ctx->pc = 0x33BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAC8u;
            // 0x33bacc: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAD0u; }
        if (ctx->pc != 0x33BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAD0u; }
        if (ctx->pc != 0x33BAD0u) { return; }
    }
    ctx->pc = 0x33BAD0u;
label_33bad0:
    // 0x33bad0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x33bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_33bad4:
    // 0x33bad4: 0xc077884  jal         func_1DE210
label_33bad8:
    if (ctx->pc == 0x33BAD8u) {
        ctx->pc = 0x33BAD8u;
            // 0x33bad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x33BADCu;
        goto label_33badc;
    }
    ctx->pc = 0x33BAD4u;
    SET_GPR_U32(ctx, 31, 0x33BADCu);
    ctx->pc = 0x33BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAD4u;
            // 0x33bad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE210u;
    if (runtime->hasFunction(0x1DE210u)) {
        auto targetFn = runtime->lookupFunction(0x1DE210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BADCu; }
        if (ctx->pc != 0x33BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE210_0x1de210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BADCu; }
        if (ctx->pc != 0x33BADCu) { return; }
    }
    ctx->pc = 0x33BADCu;
label_33badc:
    // 0x33badc: 0x1000000f  b           . + 4 + (0xF << 2)
label_33bae0:
    if (ctx->pc == 0x33BAE0u) {
        ctx->pc = 0x33BAE0u;
            // 0x33bae0: 0x8ea30d6c  lw          $v1, 0xD6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3436)));
        ctx->pc = 0x33BAE4u;
        goto label_33bae4;
    }
    ctx->pc = 0x33BADCu;
    {
        const bool branch_taken_0x33badc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BADCu;
            // 0x33bae0: 0x8ea30d6c  lw          $v1, 0xD6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33badc) {
            ctx->pc = 0x33BB1Cu;
            goto label_33bb1c;
        }
    }
    ctx->pc = 0x33BAE4u;
label_33bae4:
    // 0x33bae4: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x33bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_33bae8:
    // 0x33bae8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_33baec:
    // 0x33baec: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x33baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_33baf0:
    // 0x33baf0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33baf4:
    // 0x33baf4: 0xc0a545c  jal         func_295170
label_33baf8:
    if (ctx->pc == 0x33BAF8u) {
        ctx->pc = 0x33BAF8u;
            // 0x33baf8: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x33BAFCu;
        goto label_33bafc;
    }
    ctx->pc = 0x33BAF4u;
    SET_GPR_U32(ctx, 31, 0x33BAFCu);
    ctx->pc = 0x33BAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BAF4u;
            // 0x33baf8: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAFCu; }
        if (ctx->pc != 0x33BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BAFCu; }
        if (ctx->pc != 0x33BAFCu) { return; }
    }
    ctx->pc = 0x33BAFCu;
label_33bafc:
    // 0x33bafc: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x33bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_33bb00:
    // 0x33bb00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33bb04:
    // 0x33bb04: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x33bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33bb08:
    // 0x33bb08: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33bb0c:
    // 0x33bb0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33bb10:
    // 0x33bb10: 0xc08bf20  jal         func_22FC80
label_33bb14:
    if (ctx->pc == 0x33BB14u) {
        ctx->pc = 0x33BB14u;
            // 0x33bb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BB18u;
        goto label_33bb18;
    }
    ctx->pc = 0x33BB10u;
    SET_GPR_U32(ctx, 31, 0x33BB18u);
    ctx->pc = 0x33BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB10u;
            // 0x33bb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB18u; }
        if (ctx->pc != 0x33BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB18u; }
        if (ctx->pc != 0x33BB18u) { return; }
    }
    ctx->pc = 0x33BB18u;
label_33bb18:
    // 0x33bb18: 0x8ea30d6c  lw          $v1, 0xD6C($s5)
    ctx->pc = 0x33bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3436)));
label_33bb1c:
    // 0x33bb1c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33bb20:
    // 0x33bb20: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x33bb20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_33bb24:
    // 0x33bb24: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_33bb28:
    if (ctx->pc == 0x33BB28u) {
        ctx->pc = 0x33BB28u;
            // 0x33bb28: 0x8ea20da0  lw          $v0, 0xDA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
        ctx->pc = 0x33BB2Cu;
        goto label_33bb2c;
    }
    ctx->pc = 0x33BB24u;
    {
        const bool branch_taken_0x33bb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bb24) {
            ctx->pc = 0x33BB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB24u;
            // 0x33bb28: 0x8ea20da0  lw          $v0, 0xDA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BB4Cu;
            goto label_33bb4c;
        }
    }
    ctx->pc = 0x33BB2Cu;
label_33bb2c:
    // 0x33bb2c: 0x8ea40d70  lw          $a0, 0xD70($s5)
    ctx->pc = 0x33bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
label_33bb30:
    // 0x33bb30: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_33bb34:
    // 0x33bb34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33bb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33bb38:
    // 0x33bb38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bb3c:
    // 0x33bb3c: 0xc0bdf9c  jal         func_2F7E70
label_33bb40:
    if (ctx->pc == 0x33BB40u) {
        ctx->pc = 0x33BB40u;
            // 0x33bb40: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x33BB44u;
        goto label_33bb44;
    }
    ctx->pc = 0x33BB3Cu;
    SET_GPR_U32(ctx, 31, 0x33BB44u);
    ctx->pc = 0x33BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB3Cu;
            // 0x33bb40: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB44u; }
        if (ctx->pc != 0x33BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB44u; }
        if (ctx->pc != 0x33BB44u) { return; }
    }
    ctx->pc = 0x33BB44u;
label_33bb44:
    // 0x33bb44: 0x10000012  b           . + 4 + (0x12 << 2)
label_33bb48:
    if (ctx->pc == 0x33BB48u) {
        ctx->pc = 0x33BB48u;
            // 0x33bb48: 0x8ea30e38  lw          $v1, 0xE38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
        ctx->pc = 0x33BB4Cu;
        goto label_33bb4c;
    }
    ctx->pc = 0x33BB44u;
    {
        const bool branch_taken_0x33bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB44u;
            // 0x33bb48: 0x8ea30e38  lw          $v1, 0xE38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb44) {
            ctx->pc = 0x33BB90u;
            goto label_33bb90;
        }
    }
    ctx->pc = 0x33BB4Cu;
label_33bb4c:
    // 0x33bb4c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x33bb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33bb50:
    // 0x33bb50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_33bb54:
    if (ctx->pc == 0x33BB54u) {
        ctx->pc = 0x33BB54u;
            // 0x33bb54: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->pc = 0x33BB58u;
        goto label_33bb58;
    }
    ctx->pc = 0x33BB50u;
    {
        const bool branch_taken_0x33bb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bb50) {
            ctx->pc = 0x33BB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB50u;
            // 0x33bb54: 0x8ea40d70  lw          $a0, 0xD70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33BB78u;
            goto label_33bb78;
        }
    }
    ctx->pc = 0x33BB58u;
label_33bb58:
    // 0x33bb58: 0x8ea40d70  lw          $a0, 0xD70($s5)
    ctx->pc = 0x33bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3440)));
label_33bb5c:
    // 0x33bb5c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_33bb60:
    // 0x33bb60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33bb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33bb64:
    // 0x33bb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33bb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33bb68:
    // 0x33bb68: 0xc0bdf9c  jal         func_2F7E70
label_33bb6c:
    if (ctx->pc == 0x33BB6Cu) {
        ctx->pc = 0x33BB6Cu;
            // 0x33bb6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33BB70u;
        goto label_33bb70;
    }
    ctx->pc = 0x33BB68u;
    SET_GPR_U32(ctx, 31, 0x33BB70u);
    ctx->pc = 0x33BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB68u;
            // 0x33bb6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB70u; }
        if (ctx->pc != 0x33BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB70u; }
        if (ctx->pc != 0x33BB70u) { return; }
    }
    ctx->pc = 0x33BB70u;
label_33bb70:
    // 0x33bb70: 0x10000006  b           . + 4 + (0x6 << 2)
label_33bb74:
    if (ctx->pc == 0x33BB74u) {
        ctx->pc = 0x33BB78u;
        goto label_33bb78;
    }
    ctx->pc = 0x33BB70u;
    {
        const bool branch_taken_0x33bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb70) {
            ctx->pc = 0x33BB8Cu;
            goto label_33bb8c;
        }
    }
    ctx->pc = 0x33BB78u;
label_33bb78:
    // 0x33bb78: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x33bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_33bb7c:
    // 0x33bb7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33bb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33bb80:
    // 0x33bb80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bb84:
    // 0x33bb84: 0xc0bdf9c  jal         func_2F7E70
label_33bb88:
    if (ctx->pc == 0x33BB88u) {
        ctx->pc = 0x33BB88u;
            // 0x33bb88: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x33BB8Cu;
        goto label_33bb8c;
    }
    ctx->pc = 0x33BB84u;
    SET_GPR_U32(ctx, 31, 0x33BB8Cu);
    ctx->pc = 0x33BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB84u;
            // 0x33bb88: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB8Cu; }
        if (ctx->pc != 0x33BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BB8Cu; }
        if (ctx->pc != 0x33BB8Cu) { return; }
    }
    ctx->pc = 0x33BB8Cu;
label_33bb8c:
    // 0x33bb8c: 0x8ea30e38  lw          $v1, 0xE38($s5)
    ctx->pc = 0x33bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3640)));
label_33bb90:
    // 0x33bb90: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x33bb90u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33bb94:
    // 0x33bb94: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_33bb98:
    if (ctx->pc == 0x33BB98u) {
        ctx->pc = 0x33BB98u;
            // 0x33bb98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BB9Cu;
        goto label_33bb9c;
    }
    ctx->pc = 0x33BB94u;
    {
        const bool branch_taken_0x33bb94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BB94u;
            // 0x33bb98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb94) {
            ctx->pc = 0x33BBACu;
            goto label_33bbac;
        }
    }
    ctx->pc = 0x33BB9Cu;
label_33bb9c:
    // 0x33bb9c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x33bb9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_33bba0:
    // 0x33bba0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_33bba4:
    if (ctx->pc == 0x33BBA4u) {
        ctx->pc = 0x33BBA8u;
        goto label_33bba8;
    }
    ctx->pc = 0x33BBA0u;
    {
        const bool branch_taken_0x33bba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bba0) {
            ctx->pc = 0x33BBACu;
            goto label_33bbac;
        }
    }
    ctx->pc = 0x33BBA8u;
label_33bba8:
    // 0x33bba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33bbac:
    // 0x33bbac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_33bbb0:
    if (ctx->pc == 0x33BBB0u) {
        ctx->pc = 0x33BBB4u;
        goto label_33bbb4;
    }
    ctx->pc = 0x33BBACu;
    {
        const bool branch_taken_0x33bbac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbac) {
            ctx->pc = 0x33BBC8u;
            goto label_33bbc8;
        }
    }
    ctx->pc = 0x33BBB4u;
label_33bbb4:
    // 0x33bbb4: 0xc075eb4  jal         func_1D7AD0
label_33bbb8:
    if (ctx->pc == 0x33BBB8u) {
        ctx->pc = 0x33BBB8u;
            // 0x33bbb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BBBCu;
        goto label_33bbbc;
    }
    ctx->pc = 0x33BBB4u;
    SET_GPR_U32(ctx, 31, 0x33BBBCu);
    ctx->pc = 0x33BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BBB4u;
            // 0x33bbb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BBBCu; }
        if (ctx->pc != 0x33BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BBBCu; }
        if (ctx->pc != 0x33BBBCu) { return; }
    }
    ctx->pc = 0x33BBBCu;
label_33bbbc:
    // 0x33bbbc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_33bbc0:
    if (ctx->pc == 0x33BBC0u) {
        ctx->pc = 0x33BBC4u;
        goto label_33bbc4;
    }
    ctx->pc = 0x33BBBCu;
    {
        const bool branch_taken_0x33bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbbc) {
            ctx->pc = 0x33BBC8u;
            goto label_33bbc8;
        }
    }
    ctx->pc = 0x33BBC4u;
label_33bbc4:
    // 0x33bbc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33bbc8:
    // 0x33bbc8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_33bbcc:
    if (ctx->pc == 0x33BBCCu) {
        ctx->pc = 0x33BBD0u;
        goto label_33bbd0;
    }
    ctx->pc = 0x33BBC8u;
    {
        const bool branch_taken_0x33bbc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbc8) {
            ctx->pc = 0x33BBE0u;
            goto label_33bbe0;
        }
    }
    ctx->pc = 0x33BBD0u;
label_33bbd0:
    // 0x33bbd0: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x33bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_33bbd4:
    // 0x33bbd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33bbd8:
    // 0x33bbd8: 0x14830059  bne         $a0, $v1, . + 4 + (0x59 << 2)
label_33bbdc:
    if (ctx->pc == 0x33BBDCu) {
        ctx->pc = 0x33BBE0u;
        goto label_33bbe0;
    }
    ctx->pc = 0x33BBD8u;
    {
        const bool branch_taken_0x33bbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bbd8) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33BBE0u;
label_33bbe0:
    // 0x33bbe0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33bbe4:
    // 0x33bbe4: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_33bbe8:
    // 0x33bbe8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x33bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33bbec:
    // 0x33bbec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bbf0:
    // 0x33bbf0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33bbf4:
    // 0x33bbf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bbf8:
    // 0x33bbf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bbfc:
    // 0x33bbfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33bc00:
    // 0x33bc00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33bc00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33bc04:
    // 0x33bc04: 0x320f809  jalr        $t9
label_33bc08:
    if (ctx->pc == 0x33BC08u) {
        ctx->pc = 0x33BC0Cu;
        goto label_33bc0c;
    }
    ctx->pc = 0x33BC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BC0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BC0Cu; }
            if (ctx->pc != 0x33BC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33BC0Cu;
label_33bc0c:
    // 0x33bc0c: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x33bc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_33bc10:
    // 0x33bc10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33bc14:
    // 0x33bc14: 0xc07649c  jal         func_1D9270
label_33bc18:
    if (ctx->pc == 0x33BC18u) {
        ctx->pc = 0x33BC18u;
            // 0x33bc18: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x33BC1Cu;
        goto label_33bc1c;
    }
    ctx->pc = 0x33BC14u;
    SET_GPR_U32(ctx, 31, 0x33BC1Cu);
    ctx->pc = 0x33BC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BC14u;
            // 0x33bc18: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BC1Cu; }
        if (ctx->pc != 0x33BC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33BC1Cu; }
        if (ctx->pc != 0x33BC1Cu) { return; }
    }
    ctx->pc = 0x33BC1Cu;
label_33bc1c:
    // 0x33bc1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33bc20:
    // 0x33bc20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33bc24:
    // 0x33bc24: 0xaea31220  sw          $v1, 0x1220($s5)
    ctx->pc = 0x33bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4640), GPR_U32(ctx, 3));
label_33bc28:
    // 0x33bc28: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x33bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33bc2c:
    // 0x33bc2c: 0x8ea30d98  lw          $v1, 0xD98($s5)
    ctx->pc = 0x33bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_33bc30:
    // 0x33bc30: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33bc34:
    // 0x33bc34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33bc38:
    // 0x33bc38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33bc3c:
    // 0x33bc3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bc40:
    // 0x33bc40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33bc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33bc44:
    // 0x33bc44: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33bc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33bc48:
    // 0x33bc48: 0x320f809  jalr        $t9
label_33bc4c:
    if (ctx->pc == 0x33BC4Cu) {
        ctx->pc = 0x33BC50u;
        goto label_33bc50;
    }
    ctx->pc = 0x33BC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BC50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BC50u; }
            if (ctx->pc != 0x33BC50u) { return; }
        }
        }
    }
    ctx->pc = 0x33BC50u;
label_33bc50:
    // 0x33bc50: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x33bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_33bc54:
    // 0x33bc54: 0x8ea40d98  lw          $a0, 0xD98($s5)
    ctx->pc = 0x33bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_33bc58:
    // 0x33bc58: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_33bc5c:
    // 0x33bc5c: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x33bc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_33bc60:
    // 0x33bc60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33bc64:
    // 0x33bc64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_33bc68:
    // 0x33bc68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33bc6c:
    // 0x33bc6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bc70:
    // 0x33bc70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33bc74:
    // 0x33bc74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33bc78:
    // 0x33bc78: 0x320f809  jalr        $t9
label_33bc7c:
    if (ctx->pc == 0x33BC7Cu) {
        ctx->pc = 0x33BC80u;
        goto label_33bc80;
    }
    ctx->pc = 0x33BC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BC80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BC80u; }
            if (ctx->pc != 0x33BC80u) { return; }
        }
        }
    }
    ctx->pc = 0x33BC80u;
label_33bc80:
    // 0x33bc80: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_33bc84:
    if (ctx->pc == 0x33BC84u) {
        ctx->pc = 0x33BC84u;
            // 0x33bc84: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x33BC88u;
        goto label_33bc88;
    }
    ctx->pc = 0x33BC80u;
    {
        const bool branch_taken_0x33bc80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BC80u;
            // 0x33bc84: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc80) {
            ctx->pc = 0x33BCE0u;
            goto label_33bce0;
        }
    }
    ctx->pc = 0x33BC88u;
label_33bc88:
    // 0x33bc88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33bc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33bc8c:
    // 0x33bc8c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33bc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_33bc90:
    // 0x33bc90: 0x320f809  jalr        $t9
label_33bc94:
    if (ctx->pc == 0x33BC94u) {
        ctx->pc = 0x33BC94u;
            // 0x33bc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BC98u;
        goto label_33bc98;
    }
    ctx->pc = 0x33BC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BC98u);
        ctx->pc = 0x33BC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BC90u;
            // 0x33bc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BC98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BC98u; }
            if (ctx->pc != 0x33BC98u) { return; }
        }
        }
    }
    ctx->pc = 0x33BC98u;
label_33bc98:
    // 0x33bc98: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33bc9c:
    // 0x33bc9c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_33bca0:
    if (ctx->pc == 0x33BCA0u) {
        ctx->pc = 0x33BCA4u;
        goto label_33bca4;
    }
    ctx->pc = 0x33BC9Cu;
    {
        const bool branch_taken_0x33bc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bc9c) {
            ctx->pc = 0x33BCE0u;
            goto label_33bce0;
        }
    }
    ctx->pc = 0x33BCA4u;
label_33bca4:
    // 0x33bca4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33bca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33bca8:
    // 0x33bca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bcac:
    // 0x33bcac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33bcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33bcb0:
    // 0x33bcb0: 0x320f809  jalr        $t9
label_33bcb4:
    if (ctx->pc == 0x33BCB4u) {
        ctx->pc = 0x33BCB4u;
            // 0x33bcb4: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x33BCB8u;
        goto label_33bcb8;
    }
    ctx->pc = 0x33BCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BCB8u);
        ctx->pc = 0x33BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BCB0u;
            // 0x33bcb4: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BCB8u; }
            if (ctx->pc != 0x33BCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x33BCB8u;
label_33bcb8:
    // 0x33bcb8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x33bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_33bcbc:
    // 0x33bcbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bcc0:
    // 0x33bcc0: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x33bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
label_33bcc4:
    // 0x33bcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33bcc8:
    // 0x33bcc8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x33bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_33bccc:
    // 0x33bccc: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x33bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_33bcd0:
    // 0x33bcd0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33bcd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33bcd4:
    // 0x33bcd4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_33bcd8:
    // 0x33bcd8: 0x320f809  jalr        $t9
label_33bcdc:
    if (ctx->pc == 0x33BCDCu) {
        ctx->pc = 0x33BCDCu;
            // 0x33bcdc: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x33BCE0u;
        goto label_33bce0;
    }
    ctx->pc = 0x33BCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BCE0u);
        ctx->pc = 0x33BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BCD8u;
            // 0x33bcdc: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BCE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BCE0u; }
            if (ctx->pc != 0x33BCE0u) { return; }
        }
        }
    }
    ctx->pc = 0x33BCE0u;
label_33bce0:
    // 0x33bce0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_33bce4:
    if (ctx->pc == 0x33BCE4u) {
        ctx->pc = 0x33BCE8u;
        goto label_33bce8;
    }
    ctx->pc = 0x33BCE0u;
    {
        const bool branch_taken_0x33bce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bce0) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33BCE8u;
label_33bce8:
    // 0x33bce8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x33bce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33bcec:
    // 0x33bcec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33bcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_33bcf0:
    // 0x33bcf0: 0x320f809  jalr        $t9
label_33bcf4:
    if (ctx->pc == 0x33BCF4u) {
        ctx->pc = 0x33BCF4u;
            // 0x33bcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33BCF8u;
        goto label_33bcf8;
    }
    ctx->pc = 0x33BCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BCF8u);
        ctx->pc = 0x33BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BCF0u;
            // 0x33bcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BCF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BCF8u; }
            if (ctx->pc != 0x33BCF8u) { return; }
        }
        }
    }
    ctx->pc = 0x33BCF8u;
label_33bcf8:
    // 0x33bcf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33bcfc:
    // 0x33bcfc: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_33bd00:
    if (ctx->pc == 0x33BD00u) {
        ctx->pc = 0x33BD04u;
        goto label_33bd04;
    }
    ctx->pc = 0x33BCFCu;
    {
        const bool branch_taken_0x33bcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bcfc) {
            ctx->pc = 0x33BD40u;
            goto label_33bd40;
        }
    }
    ctx->pc = 0x33BD04u;
label_33bd04:
    // 0x33bd04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x33bd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33bd08:
    // 0x33bd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33bd0c:
    // 0x33bd0c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33bd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33bd10:
    // 0x33bd10: 0x320f809  jalr        $t9
label_33bd14:
    if (ctx->pc == 0x33BD14u) {
        ctx->pc = 0x33BD14u;
            // 0x33bd14: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x33BD18u;
        goto label_33bd18;
    }
    ctx->pc = 0x33BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BD18u);
        ctx->pc = 0x33BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BD10u;
            // 0x33bd14: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BD18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BD18u; }
            if (ctx->pc != 0x33BD18u) { return; }
        }
        }
    }
    ctx->pc = 0x33BD18u;
label_33bd18:
    // 0x33bd18: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x33bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_33bd1c:
    // 0x33bd1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bd20:
    // 0x33bd20: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x33bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
label_33bd24:
    // 0x33bd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33bd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33bd28:
    // 0x33bd28: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x33bd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_33bd2c:
    // 0x33bd2c: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x33bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_33bd30:
    // 0x33bd30: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x33bd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33bd34:
    // 0x33bd34: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x33bd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_33bd38:
    // 0x33bd38: 0x320f809  jalr        $t9
label_33bd3c:
    if (ctx->pc == 0x33BD3Cu) {
        ctx->pc = 0x33BD3Cu;
            // 0x33bd3c: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x33BD40u;
        goto label_33bd40;
    }
    ctx->pc = 0x33BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33BD40u);
        ctx->pc = 0x33BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BD38u;
            // 0x33bd3c: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33BD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33BD40u; }
            if (ctx->pc != 0x33BD40u) { return; }
        }
        }
    }
    ctx->pc = 0x33BD40u;
label_33bd40:
    // 0x33bd40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33bd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_33bd44:
    // 0x33bd44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33bd44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33bd48:
    // 0x33bd48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33bd48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33bd4c:
    // 0x33bd4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33bd4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33bd50:
    // 0x33bd50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33bd50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33bd54:
    // 0x33bd54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33bd54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33bd58:
    // 0x33bd58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33bd58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33bd5c:
    // 0x33bd5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33bd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33bd60:
    // 0x33bd60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33bd64:
    // 0x33bd64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33bd68:
    // 0x33bd68: 0x3e00008  jr          $ra
label_33bd6c:
    if (ctx->pc == 0x33BD6Cu) {
        ctx->pc = 0x33BD6Cu;
            // 0x33bd6c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x33BD70u;
        goto label_fallthrough_0x33bd68;
    }
    ctx->pc = 0x33BD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BD68u;
            // 0x33bd6c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x33bd68:
    ctx->pc = 0x33BD70u;
}
