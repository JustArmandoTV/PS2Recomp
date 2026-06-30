#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038AD40
// Address: 0x38ad40 - 0x38c2b0
void sub_0038AD40_0x38ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AD40_0x38ad40");
#endif

    switch (ctx->pc) {
        case 0x38ad40u: goto label_38ad40;
        case 0x38ad44u: goto label_38ad44;
        case 0x38ad48u: goto label_38ad48;
        case 0x38ad4cu: goto label_38ad4c;
        case 0x38ad50u: goto label_38ad50;
        case 0x38ad54u: goto label_38ad54;
        case 0x38ad58u: goto label_38ad58;
        case 0x38ad5cu: goto label_38ad5c;
        case 0x38ad60u: goto label_38ad60;
        case 0x38ad64u: goto label_38ad64;
        case 0x38ad68u: goto label_38ad68;
        case 0x38ad6cu: goto label_38ad6c;
        case 0x38ad70u: goto label_38ad70;
        case 0x38ad74u: goto label_38ad74;
        case 0x38ad78u: goto label_38ad78;
        case 0x38ad7cu: goto label_38ad7c;
        case 0x38ad80u: goto label_38ad80;
        case 0x38ad84u: goto label_38ad84;
        case 0x38ad88u: goto label_38ad88;
        case 0x38ad8cu: goto label_38ad8c;
        case 0x38ad90u: goto label_38ad90;
        case 0x38ad94u: goto label_38ad94;
        case 0x38ad98u: goto label_38ad98;
        case 0x38ad9cu: goto label_38ad9c;
        case 0x38ada0u: goto label_38ada0;
        case 0x38ada4u: goto label_38ada4;
        case 0x38ada8u: goto label_38ada8;
        case 0x38adacu: goto label_38adac;
        case 0x38adb0u: goto label_38adb0;
        case 0x38adb4u: goto label_38adb4;
        case 0x38adb8u: goto label_38adb8;
        case 0x38adbcu: goto label_38adbc;
        case 0x38adc0u: goto label_38adc0;
        case 0x38adc4u: goto label_38adc4;
        case 0x38adc8u: goto label_38adc8;
        case 0x38adccu: goto label_38adcc;
        case 0x38add0u: goto label_38add0;
        case 0x38add4u: goto label_38add4;
        case 0x38add8u: goto label_38add8;
        case 0x38addcu: goto label_38addc;
        case 0x38ade0u: goto label_38ade0;
        case 0x38ade4u: goto label_38ade4;
        case 0x38ade8u: goto label_38ade8;
        case 0x38adecu: goto label_38adec;
        case 0x38adf0u: goto label_38adf0;
        case 0x38adf4u: goto label_38adf4;
        case 0x38adf8u: goto label_38adf8;
        case 0x38adfcu: goto label_38adfc;
        case 0x38ae00u: goto label_38ae00;
        case 0x38ae04u: goto label_38ae04;
        case 0x38ae08u: goto label_38ae08;
        case 0x38ae0cu: goto label_38ae0c;
        case 0x38ae10u: goto label_38ae10;
        case 0x38ae14u: goto label_38ae14;
        case 0x38ae18u: goto label_38ae18;
        case 0x38ae1cu: goto label_38ae1c;
        case 0x38ae20u: goto label_38ae20;
        case 0x38ae24u: goto label_38ae24;
        case 0x38ae28u: goto label_38ae28;
        case 0x38ae2cu: goto label_38ae2c;
        case 0x38ae30u: goto label_38ae30;
        case 0x38ae34u: goto label_38ae34;
        case 0x38ae38u: goto label_38ae38;
        case 0x38ae3cu: goto label_38ae3c;
        case 0x38ae40u: goto label_38ae40;
        case 0x38ae44u: goto label_38ae44;
        case 0x38ae48u: goto label_38ae48;
        case 0x38ae4cu: goto label_38ae4c;
        case 0x38ae50u: goto label_38ae50;
        case 0x38ae54u: goto label_38ae54;
        case 0x38ae58u: goto label_38ae58;
        case 0x38ae5cu: goto label_38ae5c;
        case 0x38ae60u: goto label_38ae60;
        case 0x38ae64u: goto label_38ae64;
        case 0x38ae68u: goto label_38ae68;
        case 0x38ae6cu: goto label_38ae6c;
        case 0x38ae70u: goto label_38ae70;
        case 0x38ae74u: goto label_38ae74;
        case 0x38ae78u: goto label_38ae78;
        case 0x38ae7cu: goto label_38ae7c;
        case 0x38ae80u: goto label_38ae80;
        case 0x38ae84u: goto label_38ae84;
        case 0x38ae88u: goto label_38ae88;
        case 0x38ae8cu: goto label_38ae8c;
        case 0x38ae90u: goto label_38ae90;
        case 0x38ae94u: goto label_38ae94;
        case 0x38ae98u: goto label_38ae98;
        case 0x38ae9cu: goto label_38ae9c;
        case 0x38aea0u: goto label_38aea0;
        case 0x38aea4u: goto label_38aea4;
        case 0x38aea8u: goto label_38aea8;
        case 0x38aeacu: goto label_38aeac;
        case 0x38aeb0u: goto label_38aeb0;
        case 0x38aeb4u: goto label_38aeb4;
        case 0x38aeb8u: goto label_38aeb8;
        case 0x38aebcu: goto label_38aebc;
        case 0x38aec0u: goto label_38aec0;
        case 0x38aec4u: goto label_38aec4;
        case 0x38aec8u: goto label_38aec8;
        case 0x38aeccu: goto label_38aecc;
        case 0x38aed0u: goto label_38aed0;
        case 0x38aed4u: goto label_38aed4;
        case 0x38aed8u: goto label_38aed8;
        case 0x38aedcu: goto label_38aedc;
        case 0x38aee0u: goto label_38aee0;
        case 0x38aee4u: goto label_38aee4;
        case 0x38aee8u: goto label_38aee8;
        case 0x38aeecu: goto label_38aeec;
        case 0x38aef0u: goto label_38aef0;
        case 0x38aef4u: goto label_38aef4;
        case 0x38aef8u: goto label_38aef8;
        case 0x38aefcu: goto label_38aefc;
        case 0x38af00u: goto label_38af00;
        case 0x38af04u: goto label_38af04;
        case 0x38af08u: goto label_38af08;
        case 0x38af0cu: goto label_38af0c;
        case 0x38af10u: goto label_38af10;
        case 0x38af14u: goto label_38af14;
        case 0x38af18u: goto label_38af18;
        case 0x38af1cu: goto label_38af1c;
        case 0x38af20u: goto label_38af20;
        case 0x38af24u: goto label_38af24;
        case 0x38af28u: goto label_38af28;
        case 0x38af2cu: goto label_38af2c;
        case 0x38af30u: goto label_38af30;
        case 0x38af34u: goto label_38af34;
        case 0x38af38u: goto label_38af38;
        case 0x38af3cu: goto label_38af3c;
        case 0x38af40u: goto label_38af40;
        case 0x38af44u: goto label_38af44;
        case 0x38af48u: goto label_38af48;
        case 0x38af4cu: goto label_38af4c;
        case 0x38af50u: goto label_38af50;
        case 0x38af54u: goto label_38af54;
        case 0x38af58u: goto label_38af58;
        case 0x38af5cu: goto label_38af5c;
        case 0x38af60u: goto label_38af60;
        case 0x38af64u: goto label_38af64;
        case 0x38af68u: goto label_38af68;
        case 0x38af6cu: goto label_38af6c;
        case 0x38af70u: goto label_38af70;
        case 0x38af74u: goto label_38af74;
        case 0x38af78u: goto label_38af78;
        case 0x38af7cu: goto label_38af7c;
        case 0x38af80u: goto label_38af80;
        case 0x38af84u: goto label_38af84;
        case 0x38af88u: goto label_38af88;
        case 0x38af8cu: goto label_38af8c;
        case 0x38af90u: goto label_38af90;
        case 0x38af94u: goto label_38af94;
        case 0x38af98u: goto label_38af98;
        case 0x38af9cu: goto label_38af9c;
        case 0x38afa0u: goto label_38afa0;
        case 0x38afa4u: goto label_38afa4;
        case 0x38afa8u: goto label_38afa8;
        case 0x38afacu: goto label_38afac;
        case 0x38afb0u: goto label_38afb0;
        case 0x38afb4u: goto label_38afb4;
        case 0x38afb8u: goto label_38afb8;
        case 0x38afbcu: goto label_38afbc;
        case 0x38afc0u: goto label_38afc0;
        case 0x38afc4u: goto label_38afc4;
        case 0x38afc8u: goto label_38afc8;
        case 0x38afccu: goto label_38afcc;
        case 0x38afd0u: goto label_38afd0;
        case 0x38afd4u: goto label_38afd4;
        case 0x38afd8u: goto label_38afd8;
        case 0x38afdcu: goto label_38afdc;
        case 0x38afe0u: goto label_38afe0;
        case 0x38afe4u: goto label_38afe4;
        case 0x38afe8u: goto label_38afe8;
        case 0x38afecu: goto label_38afec;
        case 0x38aff0u: goto label_38aff0;
        case 0x38aff4u: goto label_38aff4;
        case 0x38aff8u: goto label_38aff8;
        case 0x38affcu: goto label_38affc;
        case 0x38b000u: goto label_38b000;
        case 0x38b004u: goto label_38b004;
        case 0x38b008u: goto label_38b008;
        case 0x38b00cu: goto label_38b00c;
        case 0x38b010u: goto label_38b010;
        case 0x38b014u: goto label_38b014;
        case 0x38b018u: goto label_38b018;
        case 0x38b01cu: goto label_38b01c;
        case 0x38b020u: goto label_38b020;
        case 0x38b024u: goto label_38b024;
        case 0x38b028u: goto label_38b028;
        case 0x38b02cu: goto label_38b02c;
        case 0x38b030u: goto label_38b030;
        case 0x38b034u: goto label_38b034;
        case 0x38b038u: goto label_38b038;
        case 0x38b03cu: goto label_38b03c;
        case 0x38b040u: goto label_38b040;
        case 0x38b044u: goto label_38b044;
        case 0x38b048u: goto label_38b048;
        case 0x38b04cu: goto label_38b04c;
        case 0x38b050u: goto label_38b050;
        case 0x38b054u: goto label_38b054;
        case 0x38b058u: goto label_38b058;
        case 0x38b05cu: goto label_38b05c;
        case 0x38b060u: goto label_38b060;
        case 0x38b064u: goto label_38b064;
        case 0x38b068u: goto label_38b068;
        case 0x38b06cu: goto label_38b06c;
        case 0x38b070u: goto label_38b070;
        case 0x38b074u: goto label_38b074;
        case 0x38b078u: goto label_38b078;
        case 0x38b07cu: goto label_38b07c;
        case 0x38b080u: goto label_38b080;
        case 0x38b084u: goto label_38b084;
        case 0x38b088u: goto label_38b088;
        case 0x38b08cu: goto label_38b08c;
        case 0x38b090u: goto label_38b090;
        case 0x38b094u: goto label_38b094;
        case 0x38b098u: goto label_38b098;
        case 0x38b09cu: goto label_38b09c;
        case 0x38b0a0u: goto label_38b0a0;
        case 0x38b0a4u: goto label_38b0a4;
        case 0x38b0a8u: goto label_38b0a8;
        case 0x38b0acu: goto label_38b0ac;
        case 0x38b0b0u: goto label_38b0b0;
        case 0x38b0b4u: goto label_38b0b4;
        case 0x38b0b8u: goto label_38b0b8;
        case 0x38b0bcu: goto label_38b0bc;
        case 0x38b0c0u: goto label_38b0c0;
        case 0x38b0c4u: goto label_38b0c4;
        case 0x38b0c8u: goto label_38b0c8;
        case 0x38b0ccu: goto label_38b0cc;
        case 0x38b0d0u: goto label_38b0d0;
        case 0x38b0d4u: goto label_38b0d4;
        case 0x38b0d8u: goto label_38b0d8;
        case 0x38b0dcu: goto label_38b0dc;
        case 0x38b0e0u: goto label_38b0e0;
        case 0x38b0e4u: goto label_38b0e4;
        case 0x38b0e8u: goto label_38b0e8;
        case 0x38b0ecu: goto label_38b0ec;
        case 0x38b0f0u: goto label_38b0f0;
        case 0x38b0f4u: goto label_38b0f4;
        case 0x38b0f8u: goto label_38b0f8;
        case 0x38b0fcu: goto label_38b0fc;
        case 0x38b100u: goto label_38b100;
        case 0x38b104u: goto label_38b104;
        case 0x38b108u: goto label_38b108;
        case 0x38b10cu: goto label_38b10c;
        case 0x38b110u: goto label_38b110;
        case 0x38b114u: goto label_38b114;
        case 0x38b118u: goto label_38b118;
        case 0x38b11cu: goto label_38b11c;
        case 0x38b120u: goto label_38b120;
        case 0x38b124u: goto label_38b124;
        case 0x38b128u: goto label_38b128;
        case 0x38b12cu: goto label_38b12c;
        case 0x38b130u: goto label_38b130;
        case 0x38b134u: goto label_38b134;
        case 0x38b138u: goto label_38b138;
        case 0x38b13cu: goto label_38b13c;
        case 0x38b140u: goto label_38b140;
        case 0x38b144u: goto label_38b144;
        case 0x38b148u: goto label_38b148;
        case 0x38b14cu: goto label_38b14c;
        case 0x38b150u: goto label_38b150;
        case 0x38b154u: goto label_38b154;
        case 0x38b158u: goto label_38b158;
        case 0x38b15cu: goto label_38b15c;
        case 0x38b160u: goto label_38b160;
        case 0x38b164u: goto label_38b164;
        case 0x38b168u: goto label_38b168;
        case 0x38b16cu: goto label_38b16c;
        case 0x38b170u: goto label_38b170;
        case 0x38b174u: goto label_38b174;
        case 0x38b178u: goto label_38b178;
        case 0x38b17cu: goto label_38b17c;
        case 0x38b180u: goto label_38b180;
        case 0x38b184u: goto label_38b184;
        case 0x38b188u: goto label_38b188;
        case 0x38b18cu: goto label_38b18c;
        case 0x38b190u: goto label_38b190;
        case 0x38b194u: goto label_38b194;
        case 0x38b198u: goto label_38b198;
        case 0x38b19cu: goto label_38b19c;
        case 0x38b1a0u: goto label_38b1a0;
        case 0x38b1a4u: goto label_38b1a4;
        case 0x38b1a8u: goto label_38b1a8;
        case 0x38b1acu: goto label_38b1ac;
        case 0x38b1b0u: goto label_38b1b0;
        case 0x38b1b4u: goto label_38b1b4;
        case 0x38b1b8u: goto label_38b1b8;
        case 0x38b1bcu: goto label_38b1bc;
        case 0x38b1c0u: goto label_38b1c0;
        case 0x38b1c4u: goto label_38b1c4;
        case 0x38b1c8u: goto label_38b1c8;
        case 0x38b1ccu: goto label_38b1cc;
        case 0x38b1d0u: goto label_38b1d0;
        case 0x38b1d4u: goto label_38b1d4;
        case 0x38b1d8u: goto label_38b1d8;
        case 0x38b1dcu: goto label_38b1dc;
        case 0x38b1e0u: goto label_38b1e0;
        case 0x38b1e4u: goto label_38b1e4;
        case 0x38b1e8u: goto label_38b1e8;
        case 0x38b1ecu: goto label_38b1ec;
        case 0x38b1f0u: goto label_38b1f0;
        case 0x38b1f4u: goto label_38b1f4;
        case 0x38b1f8u: goto label_38b1f8;
        case 0x38b1fcu: goto label_38b1fc;
        case 0x38b200u: goto label_38b200;
        case 0x38b204u: goto label_38b204;
        case 0x38b208u: goto label_38b208;
        case 0x38b20cu: goto label_38b20c;
        case 0x38b210u: goto label_38b210;
        case 0x38b214u: goto label_38b214;
        case 0x38b218u: goto label_38b218;
        case 0x38b21cu: goto label_38b21c;
        case 0x38b220u: goto label_38b220;
        case 0x38b224u: goto label_38b224;
        case 0x38b228u: goto label_38b228;
        case 0x38b22cu: goto label_38b22c;
        case 0x38b230u: goto label_38b230;
        case 0x38b234u: goto label_38b234;
        case 0x38b238u: goto label_38b238;
        case 0x38b23cu: goto label_38b23c;
        case 0x38b240u: goto label_38b240;
        case 0x38b244u: goto label_38b244;
        case 0x38b248u: goto label_38b248;
        case 0x38b24cu: goto label_38b24c;
        case 0x38b250u: goto label_38b250;
        case 0x38b254u: goto label_38b254;
        case 0x38b258u: goto label_38b258;
        case 0x38b25cu: goto label_38b25c;
        case 0x38b260u: goto label_38b260;
        case 0x38b264u: goto label_38b264;
        case 0x38b268u: goto label_38b268;
        case 0x38b26cu: goto label_38b26c;
        case 0x38b270u: goto label_38b270;
        case 0x38b274u: goto label_38b274;
        case 0x38b278u: goto label_38b278;
        case 0x38b27cu: goto label_38b27c;
        case 0x38b280u: goto label_38b280;
        case 0x38b284u: goto label_38b284;
        case 0x38b288u: goto label_38b288;
        case 0x38b28cu: goto label_38b28c;
        case 0x38b290u: goto label_38b290;
        case 0x38b294u: goto label_38b294;
        case 0x38b298u: goto label_38b298;
        case 0x38b29cu: goto label_38b29c;
        case 0x38b2a0u: goto label_38b2a0;
        case 0x38b2a4u: goto label_38b2a4;
        case 0x38b2a8u: goto label_38b2a8;
        case 0x38b2acu: goto label_38b2ac;
        case 0x38b2b0u: goto label_38b2b0;
        case 0x38b2b4u: goto label_38b2b4;
        case 0x38b2b8u: goto label_38b2b8;
        case 0x38b2bcu: goto label_38b2bc;
        case 0x38b2c0u: goto label_38b2c0;
        case 0x38b2c4u: goto label_38b2c4;
        case 0x38b2c8u: goto label_38b2c8;
        case 0x38b2ccu: goto label_38b2cc;
        case 0x38b2d0u: goto label_38b2d0;
        case 0x38b2d4u: goto label_38b2d4;
        case 0x38b2d8u: goto label_38b2d8;
        case 0x38b2dcu: goto label_38b2dc;
        case 0x38b2e0u: goto label_38b2e0;
        case 0x38b2e4u: goto label_38b2e4;
        case 0x38b2e8u: goto label_38b2e8;
        case 0x38b2ecu: goto label_38b2ec;
        case 0x38b2f0u: goto label_38b2f0;
        case 0x38b2f4u: goto label_38b2f4;
        case 0x38b2f8u: goto label_38b2f8;
        case 0x38b2fcu: goto label_38b2fc;
        case 0x38b300u: goto label_38b300;
        case 0x38b304u: goto label_38b304;
        case 0x38b308u: goto label_38b308;
        case 0x38b30cu: goto label_38b30c;
        case 0x38b310u: goto label_38b310;
        case 0x38b314u: goto label_38b314;
        case 0x38b318u: goto label_38b318;
        case 0x38b31cu: goto label_38b31c;
        case 0x38b320u: goto label_38b320;
        case 0x38b324u: goto label_38b324;
        case 0x38b328u: goto label_38b328;
        case 0x38b32cu: goto label_38b32c;
        case 0x38b330u: goto label_38b330;
        case 0x38b334u: goto label_38b334;
        case 0x38b338u: goto label_38b338;
        case 0x38b33cu: goto label_38b33c;
        case 0x38b340u: goto label_38b340;
        case 0x38b344u: goto label_38b344;
        case 0x38b348u: goto label_38b348;
        case 0x38b34cu: goto label_38b34c;
        case 0x38b350u: goto label_38b350;
        case 0x38b354u: goto label_38b354;
        case 0x38b358u: goto label_38b358;
        case 0x38b35cu: goto label_38b35c;
        case 0x38b360u: goto label_38b360;
        case 0x38b364u: goto label_38b364;
        case 0x38b368u: goto label_38b368;
        case 0x38b36cu: goto label_38b36c;
        case 0x38b370u: goto label_38b370;
        case 0x38b374u: goto label_38b374;
        case 0x38b378u: goto label_38b378;
        case 0x38b37cu: goto label_38b37c;
        case 0x38b380u: goto label_38b380;
        case 0x38b384u: goto label_38b384;
        case 0x38b388u: goto label_38b388;
        case 0x38b38cu: goto label_38b38c;
        case 0x38b390u: goto label_38b390;
        case 0x38b394u: goto label_38b394;
        case 0x38b398u: goto label_38b398;
        case 0x38b39cu: goto label_38b39c;
        case 0x38b3a0u: goto label_38b3a0;
        case 0x38b3a4u: goto label_38b3a4;
        case 0x38b3a8u: goto label_38b3a8;
        case 0x38b3acu: goto label_38b3ac;
        case 0x38b3b0u: goto label_38b3b0;
        case 0x38b3b4u: goto label_38b3b4;
        case 0x38b3b8u: goto label_38b3b8;
        case 0x38b3bcu: goto label_38b3bc;
        case 0x38b3c0u: goto label_38b3c0;
        case 0x38b3c4u: goto label_38b3c4;
        case 0x38b3c8u: goto label_38b3c8;
        case 0x38b3ccu: goto label_38b3cc;
        case 0x38b3d0u: goto label_38b3d0;
        case 0x38b3d4u: goto label_38b3d4;
        case 0x38b3d8u: goto label_38b3d8;
        case 0x38b3dcu: goto label_38b3dc;
        case 0x38b3e0u: goto label_38b3e0;
        case 0x38b3e4u: goto label_38b3e4;
        case 0x38b3e8u: goto label_38b3e8;
        case 0x38b3ecu: goto label_38b3ec;
        case 0x38b3f0u: goto label_38b3f0;
        case 0x38b3f4u: goto label_38b3f4;
        case 0x38b3f8u: goto label_38b3f8;
        case 0x38b3fcu: goto label_38b3fc;
        case 0x38b400u: goto label_38b400;
        case 0x38b404u: goto label_38b404;
        case 0x38b408u: goto label_38b408;
        case 0x38b40cu: goto label_38b40c;
        case 0x38b410u: goto label_38b410;
        case 0x38b414u: goto label_38b414;
        case 0x38b418u: goto label_38b418;
        case 0x38b41cu: goto label_38b41c;
        case 0x38b420u: goto label_38b420;
        case 0x38b424u: goto label_38b424;
        case 0x38b428u: goto label_38b428;
        case 0x38b42cu: goto label_38b42c;
        case 0x38b430u: goto label_38b430;
        case 0x38b434u: goto label_38b434;
        case 0x38b438u: goto label_38b438;
        case 0x38b43cu: goto label_38b43c;
        case 0x38b440u: goto label_38b440;
        case 0x38b444u: goto label_38b444;
        case 0x38b448u: goto label_38b448;
        case 0x38b44cu: goto label_38b44c;
        case 0x38b450u: goto label_38b450;
        case 0x38b454u: goto label_38b454;
        case 0x38b458u: goto label_38b458;
        case 0x38b45cu: goto label_38b45c;
        case 0x38b460u: goto label_38b460;
        case 0x38b464u: goto label_38b464;
        case 0x38b468u: goto label_38b468;
        case 0x38b46cu: goto label_38b46c;
        case 0x38b470u: goto label_38b470;
        case 0x38b474u: goto label_38b474;
        case 0x38b478u: goto label_38b478;
        case 0x38b47cu: goto label_38b47c;
        case 0x38b480u: goto label_38b480;
        case 0x38b484u: goto label_38b484;
        case 0x38b488u: goto label_38b488;
        case 0x38b48cu: goto label_38b48c;
        case 0x38b490u: goto label_38b490;
        case 0x38b494u: goto label_38b494;
        case 0x38b498u: goto label_38b498;
        case 0x38b49cu: goto label_38b49c;
        case 0x38b4a0u: goto label_38b4a0;
        case 0x38b4a4u: goto label_38b4a4;
        case 0x38b4a8u: goto label_38b4a8;
        case 0x38b4acu: goto label_38b4ac;
        case 0x38b4b0u: goto label_38b4b0;
        case 0x38b4b4u: goto label_38b4b4;
        case 0x38b4b8u: goto label_38b4b8;
        case 0x38b4bcu: goto label_38b4bc;
        case 0x38b4c0u: goto label_38b4c0;
        case 0x38b4c4u: goto label_38b4c4;
        case 0x38b4c8u: goto label_38b4c8;
        case 0x38b4ccu: goto label_38b4cc;
        case 0x38b4d0u: goto label_38b4d0;
        case 0x38b4d4u: goto label_38b4d4;
        case 0x38b4d8u: goto label_38b4d8;
        case 0x38b4dcu: goto label_38b4dc;
        case 0x38b4e0u: goto label_38b4e0;
        case 0x38b4e4u: goto label_38b4e4;
        case 0x38b4e8u: goto label_38b4e8;
        case 0x38b4ecu: goto label_38b4ec;
        case 0x38b4f0u: goto label_38b4f0;
        case 0x38b4f4u: goto label_38b4f4;
        case 0x38b4f8u: goto label_38b4f8;
        case 0x38b4fcu: goto label_38b4fc;
        case 0x38b500u: goto label_38b500;
        case 0x38b504u: goto label_38b504;
        case 0x38b508u: goto label_38b508;
        case 0x38b50cu: goto label_38b50c;
        case 0x38b510u: goto label_38b510;
        case 0x38b514u: goto label_38b514;
        case 0x38b518u: goto label_38b518;
        case 0x38b51cu: goto label_38b51c;
        case 0x38b520u: goto label_38b520;
        case 0x38b524u: goto label_38b524;
        case 0x38b528u: goto label_38b528;
        case 0x38b52cu: goto label_38b52c;
        case 0x38b530u: goto label_38b530;
        case 0x38b534u: goto label_38b534;
        case 0x38b538u: goto label_38b538;
        case 0x38b53cu: goto label_38b53c;
        case 0x38b540u: goto label_38b540;
        case 0x38b544u: goto label_38b544;
        case 0x38b548u: goto label_38b548;
        case 0x38b54cu: goto label_38b54c;
        case 0x38b550u: goto label_38b550;
        case 0x38b554u: goto label_38b554;
        case 0x38b558u: goto label_38b558;
        case 0x38b55cu: goto label_38b55c;
        case 0x38b560u: goto label_38b560;
        case 0x38b564u: goto label_38b564;
        case 0x38b568u: goto label_38b568;
        case 0x38b56cu: goto label_38b56c;
        case 0x38b570u: goto label_38b570;
        case 0x38b574u: goto label_38b574;
        case 0x38b578u: goto label_38b578;
        case 0x38b57cu: goto label_38b57c;
        case 0x38b580u: goto label_38b580;
        case 0x38b584u: goto label_38b584;
        case 0x38b588u: goto label_38b588;
        case 0x38b58cu: goto label_38b58c;
        case 0x38b590u: goto label_38b590;
        case 0x38b594u: goto label_38b594;
        case 0x38b598u: goto label_38b598;
        case 0x38b59cu: goto label_38b59c;
        case 0x38b5a0u: goto label_38b5a0;
        case 0x38b5a4u: goto label_38b5a4;
        case 0x38b5a8u: goto label_38b5a8;
        case 0x38b5acu: goto label_38b5ac;
        case 0x38b5b0u: goto label_38b5b0;
        case 0x38b5b4u: goto label_38b5b4;
        case 0x38b5b8u: goto label_38b5b8;
        case 0x38b5bcu: goto label_38b5bc;
        case 0x38b5c0u: goto label_38b5c0;
        case 0x38b5c4u: goto label_38b5c4;
        case 0x38b5c8u: goto label_38b5c8;
        case 0x38b5ccu: goto label_38b5cc;
        case 0x38b5d0u: goto label_38b5d0;
        case 0x38b5d4u: goto label_38b5d4;
        case 0x38b5d8u: goto label_38b5d8;
        case 0x38b5dcu: goto label_38b5dc;
        case 0x38b5e0u: goto label_38b5e0;
        case 0x38b5e4u: goto label_38b5e4;
        case 0x38b5e8u: goto label_38b5e8;
        case 0x38b5ecu: goto label_38b5ec;
        case 0x38b5f0u: goto label_38b5f0;
        case 0x38b5f4u: goto label_38b5f4;
        case 0x38b5f8u: goto label_38b5f8;
        case 0x38b5fcu: goto label_38b5fc;
        case 0x38b600u: goto label_38b600;
        case 0x38b604u: goto label_38b604;
        case 0x38b608u: goto label_38b608;
        case 0x38b60cu: goto label_38b60c;
        case 0x38b610u: goto label_38b610;
        case 0x38b614u: goto label_38b614;
        case 0x38b618u: goto label_38b618;
        case 0x38b61cu: goto label_38b61c;
        case 0x38b620u: goto label_38b620;
        case 0x38b624u: goto label_38b624;
        case 0x38b628u: goto label_38b628;
        case 0x38b62cu: goto label_38b62c;
        case 0x38b630u: goto label_38b630;
        case 0x38b634u: goto label_38b634;
        case 0x38b638u: goto label_38b638;
        case 0x38b63cu: goto label_38b63c;
        case 0x38b640u: goto label_38b640;
        case 0x38b644u: goto label_38b644;
        case 0x38b648u: goto label_38b648;
        case 0x38b64cu: goto label_38b64c;
        case 0x38b650u: goto label_38b650;
        case 0x38b654u: goto label_38b654;
        case 0x38b658u: goto label_38b658;
        case 0x38b65cu: goto label_38b65c;
        case 0x38b660u: goto label_38b660;
        case 0x38b664u: goto label_38b664;
        case 0x38b668u: goto label_38b668;
        case 0x38b66cu: goto label_38b66c;
        case 0x38b670u: goto label_38b670;
        case 0x38b674u: goto label_38b674;
        case 0x38b678u: goto label_38b678;
        case 0x38b67cu: goto label_38b67c;
        case 0x38b680u: goto label_38b680;
        case 0x38b684u: goto label_38b684;
        case 0x38b688u: goto label_38b688;
        case 0x38b68cu: goto label_38b68c;
        case 0x38b690u: goto label_38b690;
        case 0x38b694u: goto label_38b694;
        case 0x38b698u: goto label_38b698;
        case 0x38b69cu: goto label_38b69c;
        case 0x38b6a0u: goto label_38b6a0;
        case 0x38b6a4u: goto label_38b6a4;
        case 0x38b6a8u: goto label_38b6a8;
        case 0x38b6acu: goto label_38b6ac;
        case 0x38b6b0u: goto label_38b6b0;
        case 0x38b6b4u: goto label_38b6b4;
        case 0x38b6b8u: goto label_38b6b8;
        case 0x38b6bcu: goto label_38b6bc;
        case 0x38b6c0u: goto label_38b6c0;
        case 0x38b6c4u: goto label_38b6c4;
        case 0x38b6c8u: goto label_38b6c8;
        case 0x38b6ccu: goto label_38b6cc;
        case 0x38b6d0u: goto label_38b6d0;
        case 0x38b6d4u: goto label_38b6d4;
        case 0x38b6d8u: goto label_38b6d8;
        case 0x38b6dcu: goto label_38b6dc;
        case 0x38b6e0u: goto label_38b6e0;
        case 0x38b6e4u: goto label_38b6e4;
        case 0x38b6e8u: goto label_38b6e8;
        case 0x38b6ecu: goto label_38b6ec;
        case 0x38b6f0u: goto label_38b6f0;
        case 0x38b6f4u: goto label_38b6f4;
        case 0x38b6f8u: goto label_38b6f8;
        case 0x38b6fcu: goto label_38b6fc;
        case 0x38b700u: goto label_38b700;
        case 0x38b704u: goto label_38b704;
        case 0x38b708u: goto label_38b708;
        case 0x38b70cu: goto label_38b70c;
        case 0x38b710u: goto label_38b710;
        case 0x38b714u: goto label_38b714;
        case 0x38b718u: goto label_38b718;
        case 0x38b71cu: goto label_38b71c;
        case 0x38b720u: goto label_38b720;
        case 0x38b724u: goto label_38b724;
        case 0x38b728u: goto label_38b728;
        case 0x38b72cu: goto label_38b72c;
        case 0x38b730u: goto label_38b730;
        case 0x38b734u: goto label_38b734;
        case 0x38b738u: goto label_38b738;
        case 0x38b73cu: goto label_38b73c;
        case 0x38b740u: goto label_38b740;
        case 0x38b744u: goto label_38b744;
        case 0x38b748u: goto label_38b748;
        case 0x38b74cu: goto label_38b74c;
        case 0x38b750u: goto label_38b750;
        case 0x38b754u: goto label_38b754;
        case 0x38b758u: goto label_38b758;
        case 0x38b75cu: goto label_38b75c;
        case 0x38b760u: goto label_38b760;
        case 0x38b764u: goto label_38b764;
        case 0x38b768u: goto label_38b768;
        case 0x38b76cu: goto label_38b76c;
        case 0x38b770u: goto label_38b770;
        case 0x38b774u: goto label_38b774;
        case 0x38b778u: goto label_38b778;
        case 0x38b77cu: goto label_38b77c;
        case 0x38b780u: goto label_38b780;
        case 0x38b784u: goto label_38b784;
        case 0x38b788u: goto label_38b788;
        case 0x38b78cu: goto label_38b78c;
        case 0x38b790u: goto label_38b790;
        case 0x38b794u: goto label_38b794;
        case 0x38b798u: goto label_38b798;
        case 0x38b79cu: goto label_38b79c;
        case 0x38b7a0u: goto label_38b7a0;
        case 0x38b7a4u: goto label_38b7a4;
        case 0x38b7a8u: goto label_38b7a8;
        case 0x38b7acu: goto label_38b7ac;
        case 0x38b7b0u: goto label_38b7b0;
        case 0x38b7b4u: goto label_38b7b4;
        case 0x38b7b8u: goto label_38b7b8;
        case 0x38b7bcu: goto label_38b7bc;
        case 0x38b7c0u: goto label_38b7c0;
        case 0x38b7c4u: goto label_38b7c4;
        case 0x38b7c8u: goto label_38b7c8;
        case 0x38b7ccu: goto label_38b7cc;
        case 0x38b7d0u: goto label_38b7d0;
        case 0x38b7d4u: goto label_38b7d4;
        case 0x38b7d8u: goto label_38b7d8;
        case 0x38b7dcu: goto label_38b7dc;
        case 0x38b7e0u: goto label_38b7e0;
        case 0x38b7e4u: goto label_38b7e4;
        case 0x38b7e8u: goto label_38b7e8;
        case 0x38b7ecu: goto label_38b7ec;
        case 0x38b7f0u: goto label_38b7f0;
        case 0x38b7f4u: goto label_38b7f4;
        case 0x38b7f8u: goto label_38b7f8;
        case 0x38b7fcu: goto label_38b7fc;
        case 0x38b800u: goto label_38b800;
        case 0x38b804u: goto label_38b804;
        case 0x38b808u: goto label_38b808;
        case 0x38b80cu: goto label_38b80c;
        case 0x38b810u: goto label_38b810;
        case 0x38b814u: goto label_38b814;
        case 0x38b818u: goto label_38b818;
        case 0x38b81cu: goto label_38b81c;
        case 0x38b820u: goto label_38b820;
        case 0x38b824u: goto label_38b824;
        case 0x38b828u: goto label_38b828;
        case 0x38b82cu: goto label_38b82c;
        case 0x38b830u: goto label_38b830;
        case 0x38b834u: goto label_38b834;
        case 0x38b838u: goto label_38b838;
        case 0x38b83cu: goto label_38b83c;
        case 0x38b840u: goto label_38b840;
        case 0x38b844u: goto label_38b844;
        case 0x38b848u: goto label_38b848;
        case 0x38b84cu: goto label_38b84c;
        case 0x38b850u: goto label_38b850;
        case 0x38b854u: goto label_38b854;
        case 0x38b858u: goto label_38b858;
        case 0x38b85cu: goto label_38b85c;
        case 0x38b860u: goto label_38b860;
        case 0x38b864u: goto label_38b864;
        case 0x38b868u: goto label_38b868;
        case 0x38b86cu: goto label_38b86c;
        case 0x38b870u: goto label_38b870;
        case 0x38b874u: goto label_38b874;
        case 0x38b878u: goto label_38b878;
        case 0x38b87cu: goto label_38b87c;
        case 0x38b880u: goto label_38b880;
        case 0x38b884u: goto label_38b884;
        case 0x38b888u: goto label_38b888;
        case 0x38b88cu: goto label_38b88c;
        case 0x38b890u: goto label_38b890;
        case 0x38b894u: goto label_38b894;
        case 0x38b898u: goto label_38b898;
        case 0x38b89cu: goto label_38b89c;
        case 0x38b8a0u: goto label_38b8a0;
        case 0x38b8a4u: goto label_38b8a4;
        case 0x38b8a8u: goto label_38b8a8;
        case 0x38b8acu: goto label_38b8ac;
        case 0x38b8b0u: goto label_38b8b0;
        case 0x38b8b4u: goto label_38b8b4;
        case 0x38b8b8u: goto label_38b8b8;
        case 0x38b8bcu: goto label_38b8bc;
        case 0x38b8c0u: goto label_38b8c0;
        case 0x38b8c4u: goto label_38b8c4;
        case 0x38b8c8u: goto label_38b8c8;
        case 0x38b8ccu: goto label_38b8cc;
        case 0x38b8d0u: goto label_38b8d0;
        case 0x38b8d4u: goto label_38b8d4;
        case 0x38b8d8u: goto label_38b8d8;
        case 0x38b8dcu: goto label_38b8dc;
        case 0x38b8e0u: goto label_38b8e0;
        case 0x38b8e4u: goto label_38b8e4;
        case 0x38b8e8u: goto label_38b8e8;
        case 0x38b8ecu: goto label_38b8ec;
        case 0x38b8f0u: goto label_38b8f0;
        case 0x38b8f4u: goto label_38b8f4;
        case 0x38b8f8u: goto label_38b8f8;
        case 0x38b8fcu: goto label_38b8fc;
        case 0x38b900u: goto label_38b900;
        case 0x38b904u: goto label_38b904;
        case 0x38b908u: goto label_38b908;
        case 0x38b90cu: goto label_38b90c;
        case 0x38b910u: goto label_38b910;
        case 0x38b914u: goto label_38b914;
        case 0x38b918u: goto label_38b918;
        case 0x38b91cu: goto label_38b91c;
        case 0x38b920u: goto label_38b920;
        case 0x38b924u: goto label_38b924;
        case 0x38b928u: goto label_38b928;
        case 0x38b92cu: goto label_38b92c;
        case 0x38b930u: goto label_38b930;
        case 0x38b934u: goto label_38b934;
        case 0x38b938u: goto label_38b938;
        case 0x38b93cu: goto label_38b93c;
        case 0x38b940u: goto label_38b940;
        case 0x38b944u: goto label_38b944;
        case 0x38b948u: goto label_38b948;
        case 0x38b94cu: goto label_38b94c;
        case 0x38b950u: goto label_38b950;
        case 0x38b954u: goto label_38b954;
        case 0x38b958u: goto label_38b958;
        case 0x38b95cu: goto label_38b95c;
        case 0x38b960u: goto label_38b960;
        case 0x38b964u: goto label_38b964;
        case 0x38b968u: goto label_38b968;
        case 0x38b96cu: goto label_38b96c;
        case 0x38b970u: goto label_38b970;
        case 0x38b974u: goto label_38b974;
        case 0x38b978u: goto label_38b978;
        case 0x38b97cu: goto label_38b97c;
        case 0x38b980u: goto label_38b980;
        case 0x38b984u: goto label_38b984;
        case 0x38b988u: goto label_38b988;
        case 0x38b98cu: goto label_38b98c;
        case 0x38b990u: goto label_38b990;
        case 0x38b994u: goto label_38b994;
        case 0x38b998u: goto label_38b998;
        case 0x38b99cu: goto label_38b99c;
        case 0x38b9a0u: goto label_38b9a0;
        case 0x38b9a4u: goto label_38b9a4;
        case 0x38b9a8u: goto label_38b9a8;
        case 0x38b9acu: goto label_38b9ac;
        case 0x38b9b0u: goto label_38b9b0;
        case 0x38b9b4u: goto label_38b9b4;
        case 0x38b9b8u: goto label_38b9b8;
        case 0x38b9bcu: goto label_38b9bc;
        case 0x38b9c0u: goto label_38b9c0;
        case 0x38b9c4u: goto label_38b9c4;
        case 0x38b9c8u: goto label_38b9c8;
        case 0x38b9ccu: goto label_38b9cc;
        case 0x38b9d0u: goto label_38b9d0;
        case 0x38b9d4u: goto label_38b9d4;
        case 0x38b9d8u: goto label_38b9d8;
        case 0x38b9dcu: goto label_38b9dc;
        case 0x38b9e0u: goto label_38b9e0;
        case 0x38b9e4u: goto label_38b9e4;
        case 0x38b9e8u: goto label_38b9e8;
        case 0x38b9ecu: goto label_38b9ec;
        case 0x38b9f0u: goto label_38b9f0;
        case 0x38b9f4u: goto label_38b9f4;
        case 0x38b9f8u: goto label_38b9f8;
        case 0x38b9fcu: goto label_38b9fc;
        case 0x38ba00u: goto label_38ba00;
        case 0x38ba04u: goto label_38ba04;
        case 0x38ba08u: goto label_38ba08;
        case 0x38ba0cu: goto label_38ba0c;
        case 0x38ba10u: goto label_38ba10;
        case 0x38ba14u: goto label_38ba14;
        case 0x38ba18u: goto label_38ba18;
        case 0x38ba1cu: goto label_38ba1c;
        case 0x38ba20u: goto label_38ba20;
        case 0x38ba24u: goto label_38ba24;
        case 0x38ba28u: goto label_38ba28;
        case 0x38ba2cu: goto label_38ba2c;
        case 0x38ba30u: goto label_38ba30;
        case 0x38ba34u: goto label_38ba34;
        case 0x38ba38u: goto label_38ba38;
        case 0x38ba3cu: goto label_38ba3c;
        case 0x38ba40u: goto label_38ba40;
        case 0x38ba44u: goto label_38ba44;
        case 0x38ba48u: goto label_38ba48;
        case 0x38ba4cu: goto label_38ba4c;
        case 0x38ba50u: goto label_38ba50;
        case 0x38ba54u: goto label_38ba54;
        case 0x38ba58u: goto label_38ba58;
        case 0x38ba5cu: goto label_38ba5c;
        case 0x38ba60u: goto label_38ba60;
        case 0x38ba64u: goto label_38ba64;
        case 0x38ba68u: goto label_38ba68;
        case 0x38ba6cu: goto label_38ba6c;
        case 0x38ba70u: goto label_38ba70;
        case 0x38ba74u: goto label_38ba74;
        case 0x38ba78u: goto label_38ba78;
        case 0x38ba7cu: goto label_38ba7c;
        case 0x38ba80u: goto label_38ba80;
        case 0x38ba84u: goto label_38ba84;
        case 0x38ba88u: goto label_38ba88;
        case 0x38ba8cu: goto label_38ba8c;
        case 0x38ba90u: goto label_38ba90;
        case 0x38ba94u: goto label_38ba94;
        case 0x38ba98u: goto label_38ba98;
        case 0x38ba9cu: goto label_38ba9c;
        case 0x38baa0u: goto label_38baa0;
        case 0x38baa4u: goto label_38baa4;
        case 0x38baa8u: goto label_38baa8;
        case 0x38baacu: goto label_38baac;
        case 0x38bab0u: goto label_38bab0;
        case 0x38bab4u: goto label_38bab4;
        case 0x38bab8u: goto label_38bab8;
        case 0x38babcu: goto label_38babc;
        case 0x38bac0u: goto label_38bac0;
        case 0x38bac4u: goto label_38bac4;
        case 0x38bac8u: goto label_38bac8;
        case 0x38baccu: goto label_38bacc;
        case 0x38bad0u: goto label_38bad0;
        case 0x38bad4u: goto label_38bad4;
        case 0x38bad8u: goto label_38bad8;
        case 0x38badcu: goto label_38badc;
        case 0x38bae0u: goto label_38bae0;
        case 0x38bae4u: goto label_38bae4;
        case 0x38bae8u: goto label_38bae8;
        case 0x38baecu: goto label_38baec;
        case 0x38baf0u: goto label_38baf0;
        case 0x38baf4u: goto label_38baf4;
        case 0x38baf8u: goto label_38baf8;
        case 0x38bafcu: goto label_38bafc;
        case 0x38bb00u: goto label_38bb00;
        case 0x38bb04u: goto label_38bb04;
        case 0x38bb08u: goto label_38bb08;
        case 0x38bb0cu: goto label_38bb0c;
        case 0x38bb10u: goto label_38bb10;
        case 0x38bb14u: goto label_38bb14;
        case 0x38bb18u: goto label_38bb18;
        case 0x38bb1cu: goto label_38bb1c;
        case 0x38bb20u: goto label_38bb20;
        case 0x38bb24u: goto label_38bb24;
        case 0x38bb28u: goto label_38bb28;
        case 0x38bb2cu: goto label_38bb2c;
        case 0x38bb30u: goto label_38bb30;
        case 0x38bb34u: goto label_38bb34;
        case 0x38bb38u: goto label_38bb38;
        case 0x38bb3cu: goto label_38bb3c;
        case 0x38bb40u: goto label_38bb40;
        case 0x38bb44u: goto label_38bb44;
        case 0x38bb48u: goto label_38bb48;
        case 0x38bb4cu: goto label_38bb4c;
        case 0x38bb50u: goto label_38bb50;
        case 0x38bb54u: goto label_38bb54;
        case 0x38bb58u: goto label_38bb58;
        case 0x38bb5cu: goto label_38bb5c;
        case 0x38bb60u: goto label_38bb60;
        case 0x38bb64u: goto label_38bb64;
        case 0x38bb68u: goto label_38bb68;
        case 0x38bb6cu: goto label_38bb6c;
        case 0x38bb70u: goto label_38bb70;
        case 0x38bb74u: goto label_38bb74;
        case 0x38bb78u: goto label_38bb78;
        case 0x38bb7cu: goto label_38bb7c;
        case 0x38bb80u: goto label_38bb80;
        case 0x38bb84u: goto label_38bb84;
        case 0x38bb88u: goto label_38bb88;
        case 0x38bb8cu: goto label_38bb8c;
        case 0x38bb90u: goto label_38bb90;
        case 0x38bb94u: goto label_38bb94;
        case 0x38bb98u: goto label_38bb98;
        case 0x38bb9cu: goto label_38bb9c;
        case 0x38bba0u: goto label_38bba0;
        case 0x38bba4u: goto label_38bba4;
        case 0x38bba8u: goto label_38bba8;
        case 0x38bbacu: goto label_38bbac;
        case 0x38bbb0u: goto label_38bbb0;
        case 0x38bbb4u: goto label_38bbb4;
        case 0x38bbb8u: goto label_38bbb8;
        case 0x38bbbcu: goto label_38bbbc;
        case 0x38bbc0u: goto label_38bbc0;
        case 0x38bbc4u: goto label_38bbc4;
        case 0x38bbc8u: goto label_38bbc8;
        case 0x38bbccu: goto label_38bbcc;
        case 0x38bbd0u: goto label_38bbd0;
        case 0x38bbd4u: goto label_38bbd4;
        case 0x38bbd8u: goto label_38bbd8;
        case 0x38bbdcu: goto label_38bbdc;
        case 0x38bbe0u: goto label_38bbe0;
        case 0x38bbe4u: goto label_38bbe4;
        case 0x38bbe8u: goto label_38bbe8;
        case 0x38bbecu: goto label_38bbec;
        case 0x38bbf0u: goto label_38bbf0;
        case 0x38bbf4u: goto label_38bbf4;
        case 0x38bbf8u: goto label_38bbf8;
        case 0x38bbfcu: goto label_38bbfc;
        case 0x38bc00u: goto label_38bc00;
        case 0x38bc04u: goto label_38bc04;
        case 0x38bc08u: goto label_38bc08;
        case 0x38bc0cu: goto label_38bc0c;
        case 0x38bc10u: goto label_38bc10;
        case 0x38bc14u: goto label_38bc14;
        case 0x38bc18u: goto label_38bc18;
        case 0x38bc1cu: goto label_38bc1c;
        case 0x38bc20u: goto label_38bc20;
        case 0x38bc24u: goto label_38bc24;
        case 0x38bc28u: goto label_38bc28;
        case 0x38bc2cu: goto label_38bc2c;
        case 0x38bc30u: goto label_38bc30;
        case 0x38bc34u: goto label_38bc34;
        case 0x38bc38u: goto label_38bc38;
        case 0x38bc3cu: goto label_38bc3c;
        case 0x38bc40u: goto label_38bc40;
        case 0x38bc44u: goto label_38bc44;
        case 0x38bc48u: goto label_38bc48;
        case 0x38bc4cu: goto label_38bc4c;
        case 0x38bc50u: goto label_38bc50;
        case 0x38bc54u: goto label_38bc54;
        case 0x38bc58u: goto label_38bc58;
        case 0x38bc5cu: goto label_38bc5c;
        case 0x38bc60u: goto label_38bc60;
        case 0x38bc64u: goto label_38bc64;
        case 0x38bc68u: goto label_38bc68;
        case 0x38bc6cu: goto label_38bc6c;
        case 0x38bc70u: goto label_38bc70;
        case 0x38bc74u: goto label_38bc74;
        case 0x38bc78u: goto label_38bc78;
        case 0x38bc7cu: goto label_38bc7c;
        case 0x38bc80u: goto label_38bc80;
        case 0x38bc84u: goto label_38bc84;
        case 0x38bc88u: goto label_38bc88;
        case 0x38bc8cu: goto label_38bc8c;
        case 0x38bc90u: goto label_38bc90;
        case 0x38bc94u: goto label_38bc94;
        case 0x38bc98u: goto label_38bc98;
        case 0x38bc9cu: goto label_38bc9c;
        case 0x38bca0u: goto label_38bca0;
        case 0x38bca4u: goto label_38bca4;
        case 0x38bca8u: goto label_38bca8;
        case 0x38bcacu: goto label_38bcac;
        case 0x38bcb0u: goto label_38bcb0;
        case 0x38bcb4u: goto label_38bcb4;
        case 0x38bcb8u: goto label_38bcb8;
        case 0x38bcbcu: goto label_38bcbc;
        case 0x38bcc0u: goto label_38bcc0;
        case 0x38bcc4u: goto label_38bcc4;
        case 0x38bcc8u: goto label_38bcc8;
        case 0x38bcccu: goto label_38bccc;
        case 0x38bcd0u: goto label_38bcd0;
        case 0x38bcd4u: goto label_38bcd4;
        case 0x38bcd8u: goto label_38bcd8;
        case 0x38bcdcu: goto label_38bcdc;
        case 0x38bce0u: goto label_38bce0;
        case 0x38bce4u: goto label_38bce4;
        case 0x38bce8u: goto label_38bce8;
        case 0x38bcecu: goto label_38bcec;
        case 0x38bcf0u: goto label_38bcf0;
        case 0x38bcf4u: goto label_38bcf4;
        case 0x38bcf8u: goto label_38bcf8;
        case 0x38bcfcu: goto label_38bcfc;
        case 0x38bd00u: goto label_38bd00;
        case 0x38bd04u: goto label_38bd04;
        case 0x38bd08u: goto label_38bd08;
        case 0x38bd0cu: goto label_38bd0c;
        case 0x38bd10u: goto label_38bd10;
        case 0x38bd14u: goto label_38bd14;
        case 0x38bd18u: goto label_38bd18;
        case 0x38bd1cu: goto label_38bd1c;
        case 0x38bd20u: goto label_38bd20;
        case 0x38bd24u: goto label_38bd24;
        case 0x38bd28u: goto label_38bd28;
        case 0x38bd2cu: goto label_38bd2c;
        case 0x38bd30u: goto label_38bd30;
        case 0x38bd34u: goto label_38bd34;
        case 0x38bd38u: goto label_38bd38;
        case 0x38bd3cu: goto label_38bd3c;
        case 0x38bd40u: goto label_38bd40;
        case 0x38bd44u: goto label_38bd44;
        case 0x38bd48u: goto label_38bd48;
        case 0x38bd4cu: goto label_38bd4c;
        case 0x38bd50u: goto label_38bd50;
        case 0x38bd54u: goto label_38bd54;
        case 0x38bd58u: goto label_38bd58;
        case 0x38bd5cu: goto label_38bd5c;
        case 0x38bd60u: goto label_38bd60;
        case 0x38bd64u: goto label_38bd64;
        case 0x38bd68u: goto label_38bd68;
        case 0x38bd6cu: goto label_38bd6c;
        case 0x38bd70u: goto label_38bd70;
        case 0x38bd74u: goto label_38bd74;
        case 0x38bd78u: goto label_38bd78;
        case 0x38bd7cu: goto label_38bd7c;
        case 0x38bd80u: goto label_38bd80;
        case 0x38bd84u: goto label_38bd84;
        case 0x38bd88u: goto label_38bd88;
        case 0x38bd8cu: goto label_38bd8c;
        case 0x38bd90u: goto label_38bd90;
        case 0x38bd94u: goto label_38bd94;
        case 0x38bd98u: goto label_38bd98;
        case 0x38bd9cu: goto label_38bd9c;
        case 0x38bda0u: goto label_38bda0;
        case 0x38bda4u: goto label_38bda4;
        case 0x38bda8u: goto label_38bda8;
        case 0x38bdacu: goto label_38bdac;
        case 0x38bdb0u: goto label_38bdb0;
        case 0x38bdb4u: goto label_38bdb4;
        case 0x38bdb8u: goto label_38bdb8;
        case 0x38bdbcu: goto label_38bdbc;
        case 0x38bdc0u: goto label_38bdc0;
        case 0x38bdc4u: goto label_38bdc4;
        case 0x38bdc8u: goto label_38bdc8;
        case 0x38bdccu: goto label_38bdcc;
        case 0x38bdd0u: goto label_38bdd0;
        case 0x38bdd4u: goto label_38bdd4;
        case 0x38bdd8u: goto label_38bdd8;
        case 0x38bddcu: goto label_38bddc;
        case 0x38bde0u: goto label_38bde0;
        case 0x38bde4u: goto label_38bde4;
        case 0x38bde8u: goto label_38bde8;
        case 0x38bdecu: goto label_38bdec;
        case 0x38bdf0u: goto label_38bdf0;
        case 0x38bdf4u: goto label_38bdf4;
        case 0x38bdf8u: goto label_38bdf8;
        case 0x38bdfcu: goto label_38bdfc;
        case 0x38be00u: goto label_38be00;
        case 0x38be04u: goto label_38be04;
        case 0x38be08u: goto label_38be08;
        case 0x38be0cu: goto label_38be0c;
        case 0x38be10u: goto label_38be10;
        case 0x38be14u: goto label_38be14;
        case 0x38be18u: goto label_38be18;
        case 0x38be1cu: goto label_38be1c;
        case 0x38be20u: goto label_38be20;
        case 0x38be24u: goto label_38be24;
        case 0x38be28u: goto label_38be28;
        case 0x38be2cu: goto label_38be2c;
        case 0x38be30u: goto label_38be30;
        case 0x38be34u: goto label_38be34;
        case 0x38be38u: goto label_38be38;
        case 0x38be3cu: goto label_38be3c;
        case 0x38be40u: goto label_38be40;
        case 0x38be44u: goto label_38be44;
        case 0x38be48u: goto label_38be48;
        case 0x38be4cu: goto label_38be4c;
        case 0x38be50u: goto label_38be50;
        case 0x38be54u: goto label_38be54;
        case 0x38be58u: goto label_38be58;
        case 0x38be5cu: goto label_38be5c;
        case 0x38be60u: goto label_38be60;
        case 0x38be64u: goto label_38be64;
        case 0x38be68u: goto label_38be68;
        case 0x38be6cu: goto label_38be6c;
        case 0x38be70u: goto label_38be70;
        case 0x38be74u: goto label_38be74;
        case 0x38be78u: goto label_38be78;
        case 0x38be7cu: goto label_38be7c;
        case 0x38be80u: goto label_38be80;
        case 0x38be84u: goto label_38be84;
        case 0x38be88u: goto label_38be88;
        case 0x38be8cu: goto label_38be8c;
        case 0x38be90u: goto label_38be90;
        case 0x38be94u: goto label_38be94;
        case 0x38be98u: goto label_38be98;
        case 0x38be9cu: goto label_38be9c;
        case 0x38bea0u: goto label_38bea0;
        case 0x38bea4u: goto label_38bea4;
        case 0x38bea8u: goto label_38bea8;
        case 0x38beacu: goto label_38beac;
        case 0x38beb0u: goto label_38beb0;
        case 0x38beb4u: goto label_38beb4;
        case 0x38beb8u: goto label_38beb8;
        case 0x38bebcu: goto label_38bebc;
        case 0x38bec0u: goto label_38bec0;
        case 0x38bec4u: goto label_38bec4;
        case 0x38bec8u: goto label_38bec8;
        case 0x38beccu: goto label_38becc;
        case 0x38bed0u: goto label_38bed0;
        case 0x38bed4u: goto label_38bed4;
        case 0x38bed8u: goto label_38bed8;
        case 0x38bedcu: goto label_38bedc;
        case 0x38bee0u: goto label_38bee0;
        case 0x38bee4u: goto label_38bee4;
        case 0x38bee8u: goto label_38bee8;
        case 0x38beecu: goto label_38beec;
        case 0x38bef0u: goto label_38bef0;
        case 0x38bef4u: goto label_38bef4;
        case 0x38bef8u: goto label_38bef8;
        case 0x38befcu: goto label_38befc;
        case 0x38bf00u: goto label_38bf00;
        case 0x38bf04u: goto label_38bf04;
        case 0x38bf08u: goto label_38bf08;
        case 0x38bf0cu: goto label_38bf0c;
        case 0x38bf10u: goto label_38bf10;
        case 0x38bf14u: goto label_38bf14;
        case 0x38bf18u: goto label_38bf18;
        case 0x38bf1cu: goto label_38bf1c;
        case 0x38bf20u: goto label_38bf20;
        case 0x38bf24u: goto label_38bf24;
        case 0x38bf28u: goto label_38bf28;
        case 0x38bf2cu: goto label_38bf2c;
        case 0x38bf30u: goto label_38bf30;
        case 0x38bf34u: goto label_38bf34;
        case 0x38bf38u: goto label_38bf38;
        case 0x38bf3cu: goto label_38bf3c;
        case 0x38bf40u: goto label_38bf40;
        case 0x38bf44u: goto label_38bf44;
        case 0x38bf48u: goto label_38bf48;
        case 0x38bf4cu: goto label_38bf4c;
        case 0x38bf50u: goto label_38bf50;
        case 0x38bf54u: goto label_38bf54;
        case 0x38bf58u: goto label_38bf58;
        case 0x38bf5cu: goto label_38bf5c;
        case 0x38bf60u: goto label_38bf60;
        case 0x38bf64u: goto label_38bf64;
        case 0x38bf68u: goto label_38bf68;
        case 0x38bf6cu: goto label_38bf6c;
        case 0x38bf70u: goto label_38bf70;
        case 0x38bf74u: goto label_38bf74;
        case 0x38bf78u: goto label_38bf78;
        case 0x38bf7cu: goto label_38bf7c;
        case 0x38bf80u: goto label_38bf80;
        case 0x38bf84u: goto label_38bf84;
        case 0x38bf88u: goto label_38bf88;
        case 0x38bf8cu: goto label_38bf8c;
        case 0x38bf90u: goto label_38bf90;
        case 0x38bf94u: goto label_38bf94;
        case 0x38bf98u: goto label_38bf98;
        case 0x38bf9cu: goto label_38bf9c;
        case 0x38bfa0u: goto label_38bfa0;
        case 0x38bfa4u: goto label_38bfa4;
        case 0x38bfa8u: goto label_38bfa8;
        case 0x38bfacu: goto label_38bfac;
        case 0x38bfb0u: goto label_38bfb0;
        case 0x38bfb4u: goto label_38bfb4;
        case 0x38bfb8u: goto label_38bfb8;
        case 0x38bfbcu: goto label_38bfbc;
        case 0x38bfc0u: goto label_38bfc0;
        case 0x38bfc4u: goto label_38bfc4;
        case 0x38bfc8u: goto label_38bfc8;
        case 0x38bfccu: goto label_38bfcc;
        case 0x38bfd0u: goto label_38bfd0;
        case 0x38bfd4u: goto label_38bfd4;
        case 0x38bfd8u: goto label_38bfd8;
        case 0x38bfdcu: goto label_38bfdc;
        case 0x38bfe0u: goto label_38bfe0;
        case 0x38bfe4u: goto label_38bfe4;
        case 0x38bfe8u: goto label_38bfe8;
        case 0x38bfecu: goto label_38bfec;
        case 0x38bff0u: goto label_38bff0;
        case 0x38bff4u: goto label_38bff4;
        case 0x38bff8u: goto label_38bff8;
        case 0x38bffcu: goto label_38bffc;
        case 0x38c000u: goto label_38c000;
        case 0x38c004u: goto label_38c004;
        case 0x38c008u: goto label_38c008;
        case 0x38c00cu: goto label_38c00c;
        case 0x38c010u: goto label_38c010;
        case 0x38c014u: goto label_38c014;
        case 0x38c018u: goto label_38c018;
        case 0x38c01cu: goto label_38c01c;
        case 0x38c020u: goto label_38c020;
        case 0x38c024u: goto label_38c024;
        case 0x38c028u: goto label_38c028;
        case 0x38c02cu: goto label_38c02c;
        case 0x38c030u: goto label_38c030;
        case 0x38c034u: goto label_38c034;
        case 0x38c038u: goto label_38c038;
        case 0x38c03cu: goto label_38c03c;
        case 0x38c040u: goto label_38c040;
        case 0x38c044u: goto label_38c044;
        case 0x38c048u: goto label_38c048;
        case 0x38c04cu: goto label_38c04c;
        case 0x38c050u: goto label_38c050;
        case 0x38c054u: goto label_38c054;
        case 0x38c058u: goto label_38c058;
        case 0x38c05cu: goto label_38c05c;
        case 0x38c060u: goto label_38c060;
        case 0x38c064u: goto label_38c064;
        case 0x38c068u: goto label_38c068;
        case 0x38c06cu: goto label_38c06c;
        case 0x38c070u: goto label_38c070;
        case 0x38c074u: goto label_38c074;
        case 0x38c078u: goto label_38c078;
        case 0x38c07cu: goto label_38c07c;
        case 0x38c080u: goto label_38c080;
        case 0x38c084u: goto label_38c084;
        case 0x38c088u: goto label_38c088;
        case 0x38c08cu: goto label_38c08c;
        case 0x38c090u: goto label_38c090;
        case 0x38c094u: goto label_38c094;
        case 0x38c098u: goto label_38c098;
        case 0x38c09cu: goto label_38c09c;
        case 0x38c0a0u: goto label_38c0a0;
        case 0x38c0a4u: goto label_38c0a4;
        case 0x38c0a8u: goto label_38c0a8;
        case 0x38c0acu: goto label_38c0ac;
        case 0x38c0b0u: goto label_38c0b0;
        case 0x38c0b4u: goto label_38c0b4;
        case 0x38c0b8u: goto label_38c0b8;
        case 0x38c0bcu: goto label_38c0bc;
        case 0x38c0c0u: goto label_38c0c0;
        case 0x38c0c4u: goto label_38c0c4;
        case 0x38c0c8u: goto label_38c0c8;
        case 0x38c0ccu: goto label_38c0cc;
        case 0x38c0d0u: goto label_38c0d0;
        case 0x38c0d4u: goto label_38c0d4;
        case 0x38c0d8u: goto label_38c0d8;
        case 0x38c0dcu: goto label_38c0dc;
        case 0x38c0e0u: goto label_38c0e0;
        case 0x38c0e4u: goto label_38c0e4;
        case 0x38c0e8u: goto label_38c0e8;
        case 0x38c0ecu: goto label_38c0ec;
        case 0x38c0f0u: goto label_38c0f0;
        case 0x38c0f4u: goto label_38c0f4;
        case 0x38c0f8u: goto label_38c0f8;
        case 0x38c0fcu: goto label_38c0fc;
        case 0x38c100u: goto label_38c100;
        case 0x38c104u: goto label_38c104;
        case 0x38c108u: goto label_38c108;
        case 0x38c10cu: goto label_38c10c;
        case 0x38c110u: goto label_38c110;
        case 0x38c114u: goto label_38c114;
        case 0x38c118u: goto label_38c118;
        case 0x38c11cu: goto label_38c11c;
        case 0x38c120u: goto label_38c120;
        case 0x38c124u: goto label_38c124;
        case 0x38c128u: goto label_38c128;
        case 0x38c12cu: goto label_38c12c;
        case 0x38c130u: goto label_38c130;
        case 0x38c134u: goto label_38c134;
        case 0x38c138u: goto label_38c138;
        case 0x38c13cu: goto label_38c13c;
        case 0x38c140u: goto label_38c140;
        case 0x38c144u: goto label_38c144;
        case 0x38c148u: goto label_38c148;
        case 0x38c14cu: goto label_38c14c;
        case 0x38c150u: goto label_38c150;
        case 0x38c154u: goto label_38c154;
        case 0x38c158u: goto label_38c158;
        case 0x38c15cu: goto label_38c15c;
        case 0x38c160u: goto label_38c160;
        case 0x38c164u: goto label_38c164;
        case 0x38c168u: goto label_38c168;
        case 0x38c16cu: goto label_38c16c;
        case 0x38c170u: goto label_38c170;
        case 0x38c174u: goto label_38c174;
        case 0x38c178u: goto label_38c178;
        case 0x38c17cu: goto label_38c17c;
        case 0x38c180u: goto label_38c180;
        case 0x38c184u: goto label_38c184;
        case 0x38c188u: goto label_38c188;
        case 0x38c18cu: goto label_38c18c;
        case 0x38c190u: goto label_38c190;
        case 0x38c194u: goto label_38c194;
        case 0x38c198u: goto label_38c198;
        case 0x38c19cu: goto label_38c19c;
        case 0x38c1a0u: goto label_38c1a0;
        case 0x38c1a4u: goto label_38c1a4;
        case 0x38c1a8u: goto label_38c1a8;
        case 0x38c1acu: goto label_38c1ac;
        case 0x38c1b0u: goto label_38c1b0;
        case 0x38c1b4u: goto label_38c1b4;
        case 0x38c1b8u: goto label_38c1b8;
        case 0x38c1bcu: goto label_38c1bc;
        case 0x38c1c0u: goto label_38c1c0;
        case 0x38c1c4u: goto label_38c1c4;
        case 0x38c1c8u: goto label_38c1c8;
        case 0x38c1ccu: goto label_38c1cc;
        case 0x38c1d0u: goto label_38c1d0;
        case 0x38c1d4u: goto label_38c1d4;
        case 0x38c1d8u: goto label_38c1d8;
        case 0x38c1dcu: goto label_38c1dc;
        case 0x38c1e0u: goto label_38c1e0;
        case 0x38c1e4u: goto label_38c1e4;
        case 0x38c1e8u: goto label_38c1e8;
        case 0x38c1ecu: goto label_38c1ec;
        case 0x38c1f0u: goto label_38c1f0;
        case 0x38c1f4u: goto label_38c1f4;
        case 0x38c1f8u: goto label_38c1f8;
        case 0x38c1fcu: goto label_38c1fc;
        case 0x38c200u: goto label_38c200;
        case 0x38c204u: goto label_38c204;
        case 0x38c208u: goto label_38c208;
        case 0x38c20cu: goto label_38c20c;
        case 0x38c210u: goto label_38c210;
        case 0x38c214u: goto label_38c214;
        case 0x38c218u: goto label_38c218;
        case 0x38c21cu: goto label_38c21c;
        case 0x38c220u: goto label_38c220;
        case 0x38c224u: goto label_38c224;
        case 0x38c228u: goto label_38c228;
        case 0x38c22cu: goto label_38c22c;
        case 0x38c230u: goto label_38c230;
        case 0x38c234u: goto label_38c234;
        case 0x38c238u: goto label_38c238;
        case 0x38c23cu: goto label_38c23c;
        case 0x38c240u: goto label_38c240;
        case 0x38c244u: goto label_38c244;
        case 0x38c248u: goto label_38c248;
        case 0x38c24cu: goto label_38c24c;
        case 0x38c250u: goto label_38c250;
        case 0x38c254u: goto label_38c254;
        case 0x38c258u: goto label_38c258;
        case 0x38c25cu: goto label_38c25c;
        case 0x38c260u: goto label_38c260;
        case 0x38c264u: goto label_38c264;
        case 0x38c268u: goto label_38c268;
        case 0x38c26cu: goto label_38c26c;
        case 0x38c270u: goto label_38c270;
        case 0x38c274u: goto label_38c274;
        case 0x38c278u: goto label_38c278;
        case 0x38c27cu: goto label_38c27c;
        case 0x38c280u: goto label_38c280;
        case 0x38c284u: goto label_38c284;
        case 0x38c288u: goto label_38c288;
        case 0x38c28cu: goto label_38c28c;
        case 0x38c290u: goto label_38c290;
        case 0x38c294u: goto label_38c294;
        case 0x38c298u: goto label_38c298;
        case 0x38c29cu: goto label_38c29c;
        case 0x38c2a0u: goto label_38c2a0;
        case 0x38c2a4u: goto label_38c2a4;
        case 0x38c2a8u: goto label_38c2a8;
        case 0x38c2acu: goto label_38c2ac;
        default: break;
    }

    ctx->pc = 0x38ad40u;

label_38ad40:
    // 0x38ad40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38ad44:
    // 0x38ad44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38ad48:
    // 0x38ad48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38ad4c:
    // 0x38ad4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38ad50:
    // 0x38ad50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38ad54:
    // 0x38ad54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38ad54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ad58:
    // 0x38ad58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38ad5c:
    // 0x38ad5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38ad5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38ad60:
    // 0x38ad60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38ad64:
    // 0x38ad64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38ad64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38ad68:
    // 0x38ad68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38ad6c:
    // 0x38ad6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x38ad6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38ad70:
    // 0x38ad70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38ad74:
    // 0x38ad74: 0x8ce40d60  lw          $a0, 0xD60($a3)
    ctx->pc = 0x38ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3424)));
label_38ad78:
    // 0x38ad78: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x38ad78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38ad7c:
    // 0x38ad7c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x38ad7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38ad80:
    // 0x38ad80: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38ad80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38ad84:
    // 0x38ad84: 0x320f809  jalr        $t9
label_38ad88:
    if (ctx->pc == 0x38AD88u) {
        ctx->pc = 0x38AD88u;
            // 0x38ad88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x38AD8Cu;
        goto label_38ad8c;
    }
    ctx->pc = 0x38AD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AD8Cu);
        ctx->pc = 0x38AD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AD84u;
            // 0x38ad88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AD8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AD8Cu; }
            if (ctx->pc != 0x38AD8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38AD8Cu;
label_38ad8c:
    // 0x38ad8c: 0x8e440a6c  lw          $a0, 0xA6C($s2)
    ctx->pc = 0x38ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2668)));
label_38ad90:
    // 0x38ad90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38ad94:
    // 0x38ad94: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
label_38ad98:
    if (ctx->pc == 0x38AD98u) {
        ctx->pc = 0x38AD98u;
            // 0x38ad98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AD9Cu;
        goto label_38ad9c;
    }
    ctx->pc = 0x38AD94u;
    {
        const bool branch_taken_0x38ad94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AD94u;
            // 0x38ad98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad94) {
            ctx->pc = 0x38AEC0u;
            goto label_38aec0;
        }
    }
    ctx->pc = 0x38AD9Cu;
label_38ad9c:
    // 0x38ad9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38ada0:
    // 0x38ada0: 0x50830048  beql        $a0, $v1, . + 4 + (0x48 << 2)
label_38ada4:
    if (ctx->pc == 0x38ADA4u) {
        ctx->pc = 0x38ADA4u;
            // 0x38ada4: 0x8e420e30  lw          $v0, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->pc = 0x38ADA8u;
        goto label_38ada8;
    }
    ctx->pc = 0x38ADA0u;
    {
        const bool branch_taken_0x38ada0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38ada0) {
            ctx->pc = 0x38ADA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38ADA0u;
            // 0x38ada4: 0x8e420e30  lw          $v0, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AEC4u;
            goto label_38aec4;
        }
    }
    ctx->pc = 0x38ADA8u;
label_38ada8:
    // 0x38ada8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38adac:
    // 0x38adac: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_38adb0:
    if (ctx->pc == 0x38ADB0u) {
        ctx->pc = 0x38ADB4u;
        goto label_38adb4;
    }
    ctx->pc = 0x38ADACu;
    {
        const bool branch_taken_0x38adac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38adac) {
            ctx->pc = 0x38AEC0u;
            goto label_38aec0;
        }
    }
    ctx->pc = 0x38ADB4u;
label_38adb4:
    // 0x38adb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38adb8:
    // 0x38adb8: 0x5083003b  beql        $a0, $v1, . + 4 + (0x3B << 2)
label_38adbc:
    if (ctx->pc == 0x38ADBCu) {
        ctx->pc = 0x38ADBCu;
            // 0x38adbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38ADC0u;
        goto label_38adc0;
    }
    ctx->pc = 0x38ADB8u;
    {
        const bool branch_taken_0x38adb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38adb8) {
            ctx->pc = 0x38ADBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38ADB8u;
            // 0x38adbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AEA8u;
            goto label_38aea8;
        }
    }
    ctx->pc = 0x38ADC0u;
label_38adc0:
    // 0x38adc0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_38adc4:
    if (ctx->pc == 0x38ADC4u) {
        ctx->pc = 0x38ADC4u;
            // 0x38adc4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x38ADC8u;
        goto label_38adc8;
    }
    ctx->pc = 0x38ADC0u;
    {
        const bool branch_taken_0x38adc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38adc0) {
            ctx->pc = 0x38ADC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38ADC0u;
            // 0x38adc4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38ADD0u;
            goto label_38add0;
        }
    }
    ctx->pc = 0x38ADC8u;
label_38adc8:
    // 0x38adc8: 0x10000047  b           . + 4 + (0x47 << 2)
label_38adcc:
    if (ctx->pc == 0x38ADCCu) {
        ctx->pc = 0x38ADCCu;
            // 0x38adcc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x38ADD0u;
        goto label_38add0;
    }
    ctx->pc = 0x38ADC8u;
    {
        const bool branch_taken_0x38adc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ADC8u;
            // 0x38adcc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adc8) {
            ctx->pc = 0x38AEE8u;
            goto label_38aee8;
        }
    }
    ctx->pc = 0x38ADD0u;
label_38add0:
    // 0x38add0: 0xc0754b4  jal         func_1D52D0
label_38add4:
    if (ctx->pc == 0x38ADD4u) {
        ctx->pc = 0x38ADD8u;
        goto label_38add8;
    }
    ctx->pc = 0x38ADD0u;
    SET_GPR_U32(ctx, 31, 0x38ADD8u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ADD8u; }
        if (ctx->pc != 0x38ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38ADD8u; }
        if (ctx->pc != 0x38ADD8u) { return; }
    }
    ctx->pc = 0x38ADD8u;
label_38add8:
    // 0x38add8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x38add8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38addc:
    // 0x38addc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38ade0:
    // 0x38ade0: 0x8c431b90  lw          $v1, 0x1B90($v0)
    ctx->pc = 0x38ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7056)));
label_38ade4:
    // 0x38ade4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x38ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_38ade8:
    // 0x38ade8: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_38adec:
    if (ctx->pc == 0x38ADECu) {
        ctx->pc = 0x38ADECu;
            // 0x38adec: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x38ADF0u;
        goto label_38adf0;
    }
    ctx->pc = 0x38ADE8u;
    {
        const bool branch_taken_0x38ade8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38ade8) {
            ctx->pc = 0x38ADECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38ADE8u;
            // 0x38adec: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AE5Cu;
            goto label_38ae5c;
        }
    }
    ctx->pc = 0x38ADF0u;
label_38adf0:
    // 0x38adf0: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x38adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
label_38adf4:
    // 0x38adf4: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x38adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_38adf8:
    // 0x38adf8: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x38adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38adfc:
    // 0x38adfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38adfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ae00:
    // 0x38ae00: 0x0  nop
    ctx->pc = 0x38ae00u;
    // NOP
label_38ae04:
    // 0x38ae04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38ae04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38ae08:
    // 0x38ae08: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_38ae0c:
    if (ctx->pc == 0x38AE0Cu) {
        ctx->pc = 0x38AE0Cu;
            // 0x38ae0c: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x38AE10u;
        goto label_38ae10;
    }
    ctx->pc = 0x38AE08u;
    {
        const bool branch_taken_0x38ae08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38ae08) {
            ctx->pc = 0x38AE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AE08u;
            // 0x38ae0c: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AE3Cu;
            goto label_38ae3c;
        }
    }
    ctx->pc = 0x38AE10u;
label_38ae10:
    // 0x38ae10: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x38ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_38ae14:
    // 0x38ae14: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x38ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_38ae18:
    // 0x38ae18: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_38ae1c:
    if (ctx->pc == 0x38AE1Cu) {
        ctx->pc = 0x38AE1Cu;
            // 0x38ae1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AE20u;
        goto label_38ae20;
    }
    ctx->pc = 0x38AE18u;
    {
        const bool branch_taken_0x38ae18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae18) {
            ctx->pc = 0x38AE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AE18u;
            // 0x38ae1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AE78u;
            goto label_38ae78;
        }
    }
    ctx->pc = 0x38AE20u;
label_38ae20:
    // 0x38ae20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x38ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38ae24:
    // 0x38ae24: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_38ae28:
    if (ctx->pc == 0x38AE28u) {
        ctx->pc = 0x38AE2Cu;
        goto label_38ae2c;
    }
    ctx->pc = 0x38AE24u;
    {
        const bool branch_taken_0x38ae24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae24) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38AE2Cu;
label_38ae2c:
    // 0x38ae2c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x38ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38ae30:
    // 0x38ae30: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_38ae34:
    if (ctx->pc == 0x38AE34u) {
        ctx->pc = 0x38AE38u;
        goto label_38ae38;
    }
    ctx->pc = 0x38AE30u;
    {
        const bool branch_taken_0x38ae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae30) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38AE38u;
label_38ae38:
    // 0x38ae38: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x38ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_38ae3c:
    // 0x38ae3c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x38ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_38ae40:
    // 0x38ae40: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_38ae44:
    if (ctx->pc == 0x38AE44u) {
        ctx->pc = 0x38AE48u;
        goto label_38ae48;
    }
    ctx->pc = 0x38AE40u;
    {
        const bool branch_taken_0x38ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae40) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38AE48u;
label_38ae48:
    // 0x38ae48: 0x92030ce4  lbu         $v1, 0xCE4($s0)
    ctx->pc = 0x38ae48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3300)));
label_38ae4c:
    // 0x38ae4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x38ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38ae50:
    // 0x38ae50: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_38ae54:
    if (ctx->pc == 0x38AE54u) {
        ctx->pc = 0x38AE58u;
        goto label_38ae58;
    }
    ctx->pc = 0x38AE50u;
    {
        const bool branch_taken_0x38ae50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae50) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38AE58u;
label_38ae58:
    // 0x38ae58: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x38ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_38ae5c:
    // 0x38ae5c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x38ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_38ae60:
    // 0x38ae60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_38ae64:
    if (ctx->pc == 0x38AE64u) {
        ctx->pc = 0x38AE68u;
        goto label_38ae68;
    }
    ctx->pc = 0x38AE60u;
    {
        const bool branch_taken_0x38ae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ae60) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38AE68u;
label_38ae68:
    // 0x38ae68: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x38ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_38ae6c:
    // 0x38ae6c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_38ae70:
    if (ctx->pc == 0x38AE70u) {
        ctx->pc = 0x38AE70u;
            // 0x38ae70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AE74u;
        goto label_38ae74;
    }
    ctx->pc = 0x38AE6Cu;
    {
        const bool branch_taken_0x38ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38ae6c) {
            ctx->pc = 0x38AE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AE6Cu;
            // 0x38ae70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AE90u;
            goto label_38ae90;
        }
    }
    ctx->pc = 0x38AE74u;
label_38ae74:
    // 0x38ae74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38ae74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38ae78:
    // 0x38ae78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38ae7c:
    // 0x38ae7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38ae7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38ae80:
    // 0x38ae80: 0xc0e292c  jal         func_38A4B0
label_38ae84:
    if (ctx->pc == 0x38AE84u) {
        ctx->pc = 0x38AE84u;
            // 0x38ae84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AE88u;
        goto label_38ae88;
    }
    ctx->pc = 0x38AE80u;
    SET_GPR_U32(ctx, 31, 0x38AE88u);
    ctx->pc = 0x38AE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AE80u;
            // 0x38ae84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38A4B0u;
    if (runtime->hasFunction(0x38A4B0u)) {
        auto targetFn = runtime->lookupFunction(0x38A4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AE88u; }
        if (ctx->pc != 0x38AE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038A4B0_0x38a4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AE88u; }
        if (ctx->pc != 0x38AE88u) { return; }
    }
    ctx->pc = 0x38AE88u;
label_38ae88:
    // 0x38ae88: 0x10000016  b           . + 4 + (0x16 << 2)
label_38ae8c:
    if (ctx->pc == 0x38AE8Cu) {
        ctx->pc = 0x38AE90u;
        goto label_38ae90;
    }
    ctx->pc = 0x38AE88u;
    {
        const bool branch_taken_0x38ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ae88) {
            ctx->pc = 0x38AEE4u;
            goto label_38aee4;
        }
    }
    ctx->pc = 0x38AE90u;
label_38ae90:
    // 0x38ae90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38ae94:
    // 0x38ae94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38ae94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38ae98:
    // 0x38ae98: 0xc0e2838  jal         func_38A0E0
label_38ae9c:
    if (ctx->pc == 0x38AE9Cu) {
        ctx->pc = 0x38AE9Cu;
            // 0x38ae9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AEA0u;
        goto label_38aea0;
    }
    ctx->pc = 0x38AE98u;
    SET_GPR_U32(ctx, 31, 0x38AEA0u);
    ctx->pc = 0x38AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AE98u;
            // 0x38ae9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38A0E0u;
    if (runtime->hasFunction(0x38A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x38A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEA0u; }
        if (ctx->pc != 0x38AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038A0E0_0x38a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEA0u; }
        if (ctx->pc != 0x38AEA0u) { return; }
    }
    ctx->pc = 0x38AEA0u;
label_38aea0:
    // 0x38aea0: 0x10000010  b           . + 4 + (0x10 << 2)
label_38aea4:
    if (ctx->pc == 0x38AEA4u) {
        ctx->pc = 0x38AEA8u;
        goto label_38aea8;
    }
    ctx->pc = 0x38AEA0u;
    {
        const bool branch_taken_0x38aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aea0) {
            ctx->pc = 0x38AEE4u;
            goto label_38aee4;
        }
    }
    ctx->pc = 0x38AEA8u;
label_38aea8:
    // 0x38aea8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38aea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38aeac:
    // 0x38aeac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38aeb0:
    // 0x38aeb0: 0xc0e2a70  jal         func_38A9C0
label_38aeb4:
    if (ctx->pc == 0x38AEB4u) {
        ctx->pc = 0x38AEB4u;
            // 0x38aeb4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AEB8u;
        goto label_38aeb8;
    }
    ctx->pc = 0x38AEB0u;
    SET_GPR_U32(ctx, 31, 0x38AEB8u);
    ctx->pc = 0x38AEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AEB0u;
            // 0x38aeb4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38A9C0u;
    if (runtime->hasFunction(0x38A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x38A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEB8u; }
        if (ctx->pc != 0x38AEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038A9C0_0x38a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEB8u; }
        if (ctx->pc != 0x38AEB8u) { return; }
    }
    ctx->pc = 0x38AEB8u;
label_38aeb8:
    // 0x38aeb8: 0x1000000a  b           . + 4 + (0xA << 2)
label_38aebc:
    if (ctx->pc == 0x38AEBCu) {
        ctx->pc = 0x38AEC0u;
        goto label_38aec0;
    }
    ctx->pc = 0x38AEB8u;
    {
        const bool branch_taken_0x38aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aeb8) {
            ctx->pc = 0x38AEE4u;
            goto label_38aee4;
        }
    }
    ctx->pc = 0x38AEC0u;
label_38aec0:
    // 0x38aec0: 0x8e420e30  lw          $v0, 0xE30($s2)
    ctx->pc = 0x38aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_38aec4:
    // 0x38aec4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38aec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38aec8:
    // 0x38aec8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38aecc:
    // 0x38aecc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38aeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38aed0:
    // 0x38aed0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38aed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38aed4:
    // 0x38aed4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x38aed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_38aed8:
    // 0x38aed8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x38aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_38aedc:
    // 0x38aedc: 0xc0e2a14  jal         func_38A850
label_38aee0:
    if (ctx->pc == 0x38AEE0u) {
        ctx->pc = 0x38AEE0u;
            // 0x38aee0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x38AEE4u;
        goto label_38aee4;
    }
    ctx->pc = 0x38AEDCu;
    SET_GPR_U32(ctx, 31, 0x38AEE4u);
    ctx->pc = 0x38AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38AEDCu;
            // 0x38aee0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x38A850u;
    if (runtime->hasFunction(0x38A850u)) {
        auto targetFn = runtime->lookupFunction(0x38A850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEE4u; }
        if (ctx->pc != 0x38AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038A850_0x38a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AEE4u; }
        if (ctx->pc != 0x38AEE4u) { return; }
    }
    ctx->pc = 0x38AEE4u;
label_38aee4:
    // 0x38aee4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x38aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_38aee8:
    // 0x38aee8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x38aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38aeec:
    // 0x38aeec: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x38aeecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_38aef0:
    // 0x38aef0: 0x50830022  beql        $a0, $v1, . + 4 + (0x22 << 2)
label_38aef4:
    if (ctx->pc == 0x38AEF4u) {
        ctx->pc = 0x38AEF4u;
            // 0x38aef4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x38AEF8u;
        goto label_38aef8;
    }
    ctx->pc = 0x38AEF0u;
    {
        const bool branch_taken_0x38aef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38aef0) {
            ctx->pc = 0x38AEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AEF0u;
            // 0x38aef4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AF7Cu;
            goto label_38af7c;
        }
    }
    ctx->pc = 0x38AEF8u;
label_38aef8:
    // 0x38aef8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38aefc:
    // 0x38aefc: 0x50830041  beql        $a0, $v1, . + 4 + (0x41 << 2)
label_38af00:
    if (ctx->pc == 0x38AF00u) {
        ctx->pc = 0x38AF00u;
            // 0x38af00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x38AF04u;
        goto label_38af04;
    }
    ctx->pc = 0x38AEFCu;
    {
        const bool branch_taken_0x38aefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38aefc) {
            ctx->pc = 0x38AF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AEFCu;
            // 0x38af00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B004u;
            goto label_38b004;
        }
    }
    ctx->pc = 0x38AF04u;
label_38af04:
    // 0x38af04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38af04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38af08:
    // 0x38af08: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
label_38af0c:
    if (ctx->pc == 0x38AF0Cu) {
        ctx->pc = 0x38AF10u;
        goto label_38af10;
    }
    ctx->pc = 0x38AF08u;
    {
        const bool branch_taken_0x38af08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38af08) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF10u;
label_38af10:
    // 0x38af10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38af14:
    // 0x38af14: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
label_38af18:
    if (ctx->pc == 0x38AF18u) {
        ctx->pc = 0x38AF18u;
            // 0x38af18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38AF1Cu;
        goto label_38af1c;
    }
    ctx->pc = 0x38AF14u;
    {
        const bool branch_taken_0x38af14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38af14) {
            ctx->pc = 0x38AF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AF14u;
            // 0x38af18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AF74u;
            goto label_38af74;
        }
    }
    ctx->pc = 0x38AF1Cu;
label_38af1c:
    // 0x38af1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38af20:
    // 0x38af20: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_38af24:
    if (ctx->pc == 0x38AF24u) {
        ctx->pc = 0x38AF24u;
            // 0x38af24: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x38AF28u;
        goto label_38af28;
    }
    ctx->pc = 0x38AF20u;
    {
        const bool branch_taken_0x38af20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38af20) {
            ctx->pc = 0x38AF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38AF20u;
            // 0x38af24: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38AF48u;
            goto label_38af48;
        }
    }
    ctx->pc = 0x38AF28u;
label_38af28:
    // 0x38af28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38af2c:
    // 0x38af2c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_38af30:
    if (ctx->pc == 0x38AF30u) {
        ctx->pc = 0x38AF34u;
        goto label_38af34;
    }
    ctx->pc = 0x38AF2Cu;
    {
        const bool branch_taken_0x38af2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38af2c) {
            ctx->pc = 0x38AF44u;
            goto label_38af44;
        }
    }
    ctx->pc = 0x38AF34u;
label_38af34:
    // 0x38af34: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_38af38:
    if (ctx->pc == 0x38AF38u) {
        ctx->pc = 0x38AF3Cu;
        goto label_38af3c;
    }
    ctx->pc = 0x38AF34u;
    {
        const bool branch_taken_0x38af34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38af34) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF3Cu;
label_38af3c:
    // 0x38af3c: 0x10000030  b           . + 4 + (0x30 << 2)
label_38af40:
    if (ctx->pc == 0x38AF40u) {
        ctx->pc = 0x38AF44u;
        goto label_38af44;
    }
    ctx->pc = 0x38AF3Cu;
    {
        const bool branch_taken_0x38af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38af3c) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF44u;
label_38af44:
    // 0x38af44: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x38af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38af48:
    // 0x38af48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38af48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38af4c:
    // 0x38af4c: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x38af4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_38af50:
    // 0x38af50: 0x320f809  jalr        $t9
label_38af54:
    if (ctx->pc == 0x38AF54u) {
        ctx->pc = 0x38AF54u;
            // 0x38af54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AF58u;
        goto label_38af58;
    }
    ctx->pc = 0x38AF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AF58u);
        ctx->pc = 0x38AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AF50u;
            // 0x38af54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AF58u; }
            if (ctx->pc != 0x38AF58u) { return; }
        }
        }
    }
    ctx->pc = 0x38AF58u;
label_38af58:
    // 0x38af58: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x38af58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_38af5c:
    // 0x38af5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38af60:
    // 0x38af60: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_38af64:
    if (ctx->pc == 0x38AF64u) {
        ctx->pc = 0x38AF68u;
        goto label_38af68;
    }
    ctx->pc = 0x38AF60u;
    {
        const bool branch_taken_0x38af60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38af60) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF68u;
label_38af68:
    // 0x38af68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38af6c:
    // 0x38af6c: 0x10000024  b           . + 4 + (0x24 << 2)
label_38af70:
    if (ctx->pc == 0x38AF70u) {
        ctx->pc = 0x38AF70u;
            // 0x38af70: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x38AF74u;
        goto label_38af74;
    }
    ctx->pc = 0x38AF6Cu;
    {
        const bool branch_taken_0x38af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AF6Cu;
            // 0x38af70: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af6c) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF74u;
label_38af74:
    // 0x38af74: 0x10000022  b           . + 4 + (0x22 << 2)
label_38af78:
    if (ctx->pc == 0x38AF78u) {
        ctx->pc = 0x38AF78u;
            // 0x38af78: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x38AF7Cu;
        goto label_38af7c;
    }
    ctx->pc = 0x38AF74u;
    {
        const bool branch_taken_0x38af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AF74u;
            // 0x38af78: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af74) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AF7Cu;
label_38af7c:
    // 0x38af7c: 0xc0754b4  jal         func_1D52D0
label_38af80:
    if (ctx->pc == 0x38AF80u) {
        ctx->pc = 0x38AF84u;
        goto label_38af84;
    }
    ctx->pc = 0x38AF7Cu;
    SET_GPR_U32(ctx, 31, 0x38AF84u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AF84u; }
        if (ctx->pc != 0x38AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38AF84u; }
        if (ctx->pc != 0x38AF84u) { return; }
    }
    ctx->pc = 0x38AF84u;
label_38af84:
    // 0x38af84: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38af84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38af88:
    // 0x38af88: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x38af88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38af8c:
    // 0x38af8c: 0x8c641b98  lw          $a0, 0x1B98($v1)
    ctx->pc = 0x38af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7064)));
label_38af90:
    // 0x38af90: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x38af90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_38af94:
    // 0x38af94: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_38af98:
    if (ctx->pc == 0x38AF98u) {
        ctx->pc = 0x38AF9Cu;
        goto label_38af9c;
    }
    ctx->pc = 0x38AF94u;
    {
        const bool branch_taken_0x38af94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38af94) {
            ctx->pc = 0x38AFCCu;
            goto label_38afcc;
        }
    }
    ctx->pc = 0x38AF9Cu;
label_38af9c:
    // 0x38af9c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x38af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38afa0:
    // 0x38afa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38afa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38afa4:
    // 0x38afa4: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x38afa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_38afa8:
    // 0x38afa8: 0x320f809  jalr        $t9
label_38afac:
    if (ctx->pc == 0x38AFACu) {
        ctx->pc = 0x38AFACu;
            // 0x38afac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AFB0u;
        goto label_38afb0;
    }
    ctx->pc = 0x38AFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AFB0u);
        ctx->pc = 0x38AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AFA8u;
            // 0x38afac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AFB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AFB0u; }
            if (ctx->pc != 0x38AFB0u) { return; }
        }
        }
    }
    ctx->pc = 0x38AFB0u;
label_38afb0:
    // 0x38afb0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x38afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_38afb4:
    // 0x38afb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38afb8:
    // 0x38afb8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_38afbc:
    if (ctx->pc == 0x38AFBCu) {
        ctx->pc = 0x38AFC0u;
        goto label_38afc0;
    }
    ctx->pc = 0x38AFB8u;
    {
        const bool branch_taken_0x38afb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38afb8) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AFC0u;
label_38afc0:
    // 0x38afc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38afc4:
    // 0x38afc4: 0x1000000e  b           . + 4 + (0xE << 2)
label_38afc8:
    if (ctx->pc == 0x38AFC8u) {
        ctx->pc = 0x38AFC8u;
            // 0x38afc8: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x38AFCCu;
        goto label_38afcc;
    }
    ctx->pc = 0x38AFC4u;
    {
        const bool branch_taken_0x38afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AFC4u;
            // 0x38afc8: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38afc4) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AFCCu;
label_38afcc:
    // 0x38afcc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_38afd0:
    if (ctx->pc == 0x38AFD0u) {
        ctx->pc = 0x38AFD4u;
        goto label_38afd4;
    }
    ctx->pc = 0x38AFCCu;
    {
        const bool branch_taken_0x38afcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38afcc) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AFD4u;
label_38afd4:
    // 0x38afd4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x38afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38afd8:
    // 0x38afd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38afd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38afdc:
    // 0x38afdc: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x38afdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_38afe0:
    // 0x38afe0: 0x320f809  jalr        $t9
label_38afe4:
    if (ctx->pc == 0x38AFE4u) {
        ctx->pc = 0x38AFE4u;
            // 0x38afe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38AFE8u;
        goto label_38afe8;
    }
    ctx->pc = 0x38AFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AFE8u);
        ctx->pc = 0x38AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38AFE0u;
            // 0x38afe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38AFE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38AFE8u; }
            if (ctx->pc != 0x38AFE8u) { return; }
        }
        }
    }
    ctx->pc = 0x38AFE8u;
label_38afe8:
    // 0x38afe8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x38afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_38afec:
    // 0x38afec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38afecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38aff0:
    // 0x38aff0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_38aff4:
    if (ctx->pc == 0x38AFF4u) {
        ctx->pc = 0x38AFF8u;
        goto label_38aff8;
    }
    ctx->pc = 0x38AFF0u;
    {
        const bool branch_taken_0x38aff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38aff0) {
            ctx->pc = 0x38B000u;
            goto label_38b000;
        }
    }
    ctx->pc = 0x38AFF8u;
label_38aff8:
    // 0x38aff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38affc:
    // 0x38affc: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x38affcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_38b000:
    // 0x38b000: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38b004:
    // 0x38b004: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38b004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b008:
    // 0x38b008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38b008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b00c:
    // 0x38b00c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38b00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b010:
    // 0x38b010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38b010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38b014:
    // 0x38b014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38b018:
    // 0x38b018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38b01c:
    // 0x38b01c: 0x3e00008  jr          $ra
label_38b020:
    if (ctx->pc == 0x38B020u) {
        ctx->pc = 0x38B020u;
            // 0x38b020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38B024u;
        goto label_38b024;
    }
    ctx->pc = 0x38B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B01Cu;
            // 0x38b020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38B024u;
label_38b024:
    // 0x38b024: 0x0  nop
    ctx->pc = 0x38b024u;
    // NOP
label_38b028:
    // 0x38b028: 0x0  nop
    ctx->pc = 0x38b028u;
    // NOP
label_38b02c:
    // 0x38b02c: 0x0  nop
    ctx->pc = 0x38b02cu;
    // NOP
label_38b030:
    // 0x38b030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38b034:
    // 0x38b034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38b038:
    // 0x38b038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38b03c:
    // 0x38b03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38b040:
    // 0x38b040: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38b040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b044:
    // 0x38b044: 0xc04cc04  jal         func_133010
label_38b048:
    if (ctx->pc == 0x38B048u) {
        ctx->pc = 0x38B048u;
            // 0x38b048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B04Cu;
        goto label_38b04c;
    }
    ctx->pc = 0x38B044u;
    SET_GPR_U32(ctx, 31, 0x38B04Cu);
    ctx->pc = 0x38B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B044u;
            // 0x38b048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B04Cu; }
        if (ctx->pc != 0x38B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B04Cu; }
        if (ctx->pc != 0x38B04Cu) { return; }
    }
    ctx->pc = 0x38B04Cu;
label_38b04c:
    // 0x38b04c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38b04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b050:
    // 0x38b050: 0xc04cc04  jal         func_133010
label_38b054:
    if (ctx->pc == 0x38B054u) {
        ctx->pc = 0x38B054u;
            // 0x38b054: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x38B058u;
        goto label_38b058;
    }
    ctx->pc = 0x38B050u;
    SET_GPR_U32(ctx, 31, 0x38B058u);
    ctx->pc = 0x38B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B050u;
            // 0x38b054: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B058u; }
        if (ctx->pc != 0x38B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B058u; }
        if (ctx->pc != 0x38B058u) { return; }
    }
    ctx->pc = 0x38B058u;
label_38b058:
    // 0x38b058: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x38b058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_38b05c:
    // 0x38b05c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x38b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_38b060:
    // 0x38b060: 0xc04cc04  jal         func_133010
label_38b064:
    if (ctx->pc == 0x38B064u) {
        ctx->pc = 0x38B064u;
            // 0x38b064: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->pc = 0x38B068u;
        goto label_38b068;
    }
    ctx->pc = 0x38B060u;
    SET_GPR_U32(ctx, 31, 0x38B068u);
    ctx->pc = 0x38B064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B060u;
            // 0x38b064: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B068u; }
        if (ctx->pc != 0x38B068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B068u; }
        if (ctx->pc != 0x38B068u) { return; }
    }
    ctx->pc = 0x38B068u;
label_38b068:
    // 0x38b068: 0xc04ab66  jal         func_12AD98
label_38b06c:
    if (ctx->pc == 0x38B06Cu) {
        ctx->pc = 0x38B070u;
        goto label_38b070;
    }
    ctx->pc = 0x38B068u;
    SET_GPR_U32(ctx, 31, 0x38B070u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B070u; }
        if (ctx->pc != 0x38B070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B070u; }
        if (ctx->pc != 0x38B070u) { return; }
    }
    ctx->pc = 0x38B070u;
label_38b070:
    // 0x38b070: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38b074:
    // 0x38b074: 0xc04ab66  jal         func_12AD98
label_38b078:
    if (ctx->pc == 0x38B078u) {
        ctx->pc = 0x38B078u;
            // 0x38b078: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38B07Cu;
        goto label_38b07c;
    }
    ctx->pc = 0x38B074u;
    SET_GPR_U32(ctx, 31, 0x38B07Cu);
    ctx->pc = 0x38B078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B074u;
            // 0x38b078: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B07Cu; }
        if (ctx->pc != 0x38B07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B07Cu; }
        if (ctx->pc != 0x38B07Cu) { return; }
    }
    ctx->pc = 0x38B07Cu;
label_38b07c:
    // 0x38b07c: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x38b07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_38b080:
    // 0x38b080: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38b084:
    // 0x38b084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38b084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38b088:
    // 0x38b088: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38b08c:
    if (ctx->pc == 0x38B08Cu) {
        ctx->pc = 0x38B08Cu;
            // 0x38b08c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38B090u;
        goto label_38b090;
    }
    ctx->pc = 0x38B088u;
    {
        const bool branch_taken_0x38b088 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38b088) {
            ctx->pc = 0x38B08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B088u;
            // 0x38b08c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B09Cu;
            goto label_38b09c;
        }
    }
    ctx->pc = 0x38B090u;
label_38b090:
    // 0x38b090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b094:
    // 0x38b094: 0x10000007  b           . + 4 + (0x7 << 2)
label_38b098:
    if (ctx->pc == 0x38B098u) {
        ctx->pc = 0x38B098u;
            // 0x38b098: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38B09Cu;
        goto label_38b09c;
    }
    ctx->pc = 0x38B094u;
    {
        const bool branch_taken_0x38b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B094u;
            // 0x38b098: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b094) {
            ctx->pc = 0x38B0B4u;
            goto label_38b0b4;
        }
    }
    ctx->pc = 0x38B09Cu;
label_38b09c:
    // 0x38b09c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38b0a0:
    // 0x38b0a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38b0a4:
    // 0x38b0a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b0a8:
    // 0x38b0a8: 0x0  nop
    ctx->pc = 0x38b0a8u;
    // NOP
label_38b0ac:
    // 0x38b0ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38b0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38b0b0:
    // 0x38b0b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38b0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38b0b4:
    // 0x38b0b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38b0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38b0b8:
    // 0x38b0b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38b0bc:
    // 0x38b0bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x38b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_38b0c0:
    // 0x38b0c0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x38b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_38b0c4:
    // 0x38b0c4: 0x34630347  ori         $v1, $v1, 0x347
    ctx->pc = 0x38b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)839);
label_38b0c8:
    // 0x38b0c8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x38b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_38b0cc:
    // 0x38b0cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b0ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b0d0:
    // 0x38b0d0: 0x0  nop
    ctx->pc = 0x38b0d0u;
    // NOP
label_38b0d4:
    // 0x38b0d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38b0d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b0d8:
    // 0x38b0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b0dc:
    // 0x38b0dc: 0x0  nop
    ctx->pc = 0x38b0dcu;
    // NOP
label_38b0e0:
    // 0x38b0e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38b0e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38b0e4:
    // 0x38b0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b0e8:
    // 0x38b0e8: 0x0  nop
    ctx->pc = 0x38b0e8u;
    // NOP
label_38b0ec:
    // 0x38b0ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38b0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b0f0:
    // 0x38b0f0: 0xc04ab66  jal         func_12AD98
label_38b0f4:
    if (ctx->pc == 0x38B0F4u) {
        ctx->pc = 0x38B0F4u;
            // 0x38b0f4: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->pc = 0x38B0F8u;
        goto label_38b0f8;
    }
    ctx->pc = 0x38B0F0u;
    SET_GPR_U32(ctx, 31, 0x38B0F8u);
    ctx->pc = 0x38B0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B0F0u;
            // 0x38b0f4: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B0F8u; }
        if (ctx->pc != 0x38B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B0F8u; }
        if (ctx->pc != 0x38B0F8u) { return; }
    }
    ctx->pc = 0x38B0F8u;
label_38b0f8:
    // 0x38b0f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38b0fc:
    // 0x38b0fc: 0xc04ab66  jal         func_12AD98
label_38b100:
    if (ctx->pc == 0x38B100u) {
        ctx->pc = 0x38B100u;
            // 0x38b100: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38B104u;
        goto label_38b104;
    }
    ctx->pc = 0x38B0FCu;
    SET_GPR_U32(ctx, 31, 0x38B104u);
    ctx->pc = 0x38B100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B0FCu;
            // 0x38b100: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B104u; }
        if (ctx->pc != 0x38B104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B104u; }
        if (ctx->pc != 0x38B104u) { return; }
    }
    ctx->pc = 0x38B104u;
label_38b104:
    // 0x38b104: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x38b104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_38b108:
    // 0x38b108: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38b10c:
    // 0x38b10c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38b110:
    // 0x38b110: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_38b114:
    if (ctx->pc == 0x38B114u) {
        ctx->pc = 0x38B114u;
            // 0x38b114: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x38B118u;
        goto label_38b118;
    }
    ctx->pc = 0x38B110u;
    {
        const bool branch_taken_0x38b110 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x38b110) {
            ctx->pc = 0x38B114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B110u;
            // 0x38b114: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B124u;
            goto label_38b124;
        }
    }
    ctx->pc = 0x38B118u;
label_38b118:
    // 0x38b118: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b118u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b11c:
    // 0x38b11c: 0x10000007  b           . + 4 + (0x7 << 2)
label_38b120:
    if (ctx->pc == 0x38B120u) {
        ctx->pc = 0x38B120u;
            // 0x38b120: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38B124u;
        goto label_38b124;
    }
    ctx->pc = 0x38B11Cu;
    {
        const bool branch_taken_0x38b11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B11Cu;
            // 0x38b120: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b11c) {
            ctx->pc = 0x38B13Cu;
            goto label_38b13c;
        }
    }
    ctx->pc = 0x38B124u;
label_38b124:
    // 0x38b124: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_38b128:
    // 0x38b128: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38b12c:
    // 0x38b12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b130:
    // 0x38b130: 0x0  nop
    ctx->pc = 0x38b130u;
    // NOP
label_38b134:
    // 0x38b134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38b134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38b138:
    // 0x38b138: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38b138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38b13c:
    // 0x38b13c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38b13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38b140:
    // 0x38b140: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38b140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_38b144:
    // 0x38b144: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x38b144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_38b148:
    // 0x38b148: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x38b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_38b14c:
    // 0x38b14c: 0x34630347  ori         $v1, $v1, 0x347
    ctx->pc = 0x38b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)839);
label_38b150:
    // 0x38b150: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x38b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_38b154:
    // 0x38b154: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b154u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b158:
    // 0x38b158: 0x0  nop
    ctx->pc = 0x38b158u;
    // NOP
label_38b15c:
    // 0x38b15c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38b15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b160:
    // 0x38b160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b164:
    // 0x38b164: 0x0  nop
    ctx->pc = 0x38b164u;
    // NOP
label_38b168:
    // 0x38b168: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38b168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38b16c:
    // 0x38b16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38b16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b170:
    // 0x38b170: 0x0  nop
    ctx->pc = 0x38b170u;
    // NOP
label_38b174:
    // 0x38b174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38b174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b178:
    // 0x38b178: 0xc04ab66  jal         func_12AD98
label_38b17c:
    if (ctx->pc == 0x38B17Cu) {
        ctx->pc = 0x38B17Cu;
            // 0x38b17c: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x38B180u;
        goto label_38b180;
    }
    ctx->pc = 0x38B178u;
    SET_GPR_U32(ctx, 31, 0x38B180u);
    ctx->pc = 0x38B17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B178u;
            // 0x38b17c: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B180u; }
        if (ctx->pc != 0x38B180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B180u; }
        if (ctx->pc != 0x38B180u) { return; }
    }
    ctx->pc = 0x38B180u;
label_38b180:
    // 0x38b180: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38b184:
    // 0x38b184: 0xc04ab66  jal         func_12AD98
label_38b188:
    if (ctx->pc == 0x38B188u) {
        ctx->pc = 0x38B188u;
            // 0x38b188: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x38B18Cu;
        goto label_38b18c;
    }
    ctx->pc = 0x38B184u;
    SET_GPR_U32(ctx, 31, 0x38B18Cu);
    ctx->pc = 0x38B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B184u;
            // 0x38b188: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B18Cu; }
        if (ctx->pc != 0x38B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B18Cu; }
        if (ctx->pc != 0x38B18Cu) { return; }
    }
    ctx->pc = 0x38B18Cu;
label_38b18c:
    // 0x38b18c: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x38b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_38b190:
    // 0x38b190: 0x512825  or          $a1, $v0, $s1
    ctx->pc = 0x38b190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_38b194:
    // 0x38b194: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38b194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38b198:
    // 0x38b198: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_38b19c:
    if (ctx->pc == 0x38B19Cu) {
        ctx->pc = 0x38B19Cu;
            // 0x38b19c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x38B1A0u;
        goto label_38b1a0;
    }
    ctx->pc = 0x38B198u;
    {
        const bool branch_taken_0x38b198 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x38b198) {
            ctx->pc = 0x38B19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B198u;
            // 0x38b19c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B1ACu;
            goto label_38b1ac;
        }
    }
    ctx->pc = 0x38B1A0u;
label_38b1a0:
    // 0x38b1a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x38b1a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b1a4:
    // 0x38b1a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_38b1a8:
    if (ctx->pc == 0x38B1A8u) {
        ctx->pc = 0x38B1A8u;
            // 0x38b1a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38B1ACu;
        goto label_38b1ac;
    }
    ctx->pc = 0x38B1A4u;
    {
        const bool branch_taken_0x38b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B1A4u;
            // 0x38b1a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1a4) {
            ctx->pc = 0x38B1C4u;
            goto label_38b1c4;
        }
    }
    ctx->pc = 0x38B1ACu;
label_38b1ac:
    // 0x38b1ac: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x38b1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_38b1b0:
    // 0x38b1b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38b1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38b1b4:
    // 0x38b1b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b1b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b1b8:
    // 0x38b1b8: 0x0  nop
    ctx->pc = 0x38b1b8u;
    // NOP
label_38b1bc:
    // 0x38b1bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x38b1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_38b1c0:
    // 0x38b1c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x38b1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_38b1c4:
    // 0x38b1c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x38b1c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38b1c8:
    // 0x38b1c8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x38b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_38b1cc:
    // 0x38b1cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x38b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_38b1d0:
    // 0x38b1d0: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x38b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_38b1d4:
    // 0x38b1d4: 0x34840347  ori         $a0, $a0, 0x347
    ctx->pc = 0x38b1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)839);
label_38b1d8:
    // 0x38b1d8: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x38b1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_38b1dc:
    // 0x38b1dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x38b1dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b1e0:
    // 0x38b1e0: 0x0  nop
    ctx->pc = 0x38b1e0u;
    // NOP
label_38b1e4:
    // 0x38b1e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x38b1e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b1e8:
    // 0x38b1e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b1ec:
    // 0x38b1ec: 0x0  nop
    ctx->pc = 0x38b1ecu;
    // NOP
label_38b1f0:
    // 0x38b1f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38b1f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38b1f4:
    // 0x38b1f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38b1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b1f8:
    // 0x38b1f8: 0x0  nop
    ctx->pc = 0x38b1f8u;
    // NOP
label_38b1fc:
    // 0x38b1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38b1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38b200:
    // 0x38b200: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x38b200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_38b204:
    // 0x38b204: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x38b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b208:
    // 0x38b208: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x38b208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_38b20c:
    // 0x38b20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b210:
    // 0x38b210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38b210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38b214:
    // 0x38b214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38b218:
    // 0x38b218: 0x3e00008  jr          $ra
label_38b21c:
    if (ctx->pc == 0x38B21Cu) {
        ctx->pc = 0x38B21Cu;
            // 0x38b21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38B220u;
        goto label_38b220;
    }
    ctx->pc = 0x38B218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B218u;
            // 0x38b21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38B220u;
label_38b220:
    // 0x38b220: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x38b220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_38b224:
    // 0x38b224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b228:
    // 0x38b228: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x38b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_38b22c:
    // 0x38b22c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38b22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b230:
    // 0x38b230: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38b234:
    // 0x38b234: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38b238:
    // 0x38b238: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38b23c:
    // 0x38b23c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38b23cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b240:
    // 0x38b240: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38b244:
    // 0x38b244: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38b244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b248:
    // 0x38b248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38b24c:
    // 0x38b24c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38b250:
    // 0x38b250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38b254:
    // 0x38b254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38b254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38b258:
    // 0x38b258: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x38b258u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_38b25c:
    // 0x38b25c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x38b25cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38b260:
    // 0x38b260: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38b260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38b264:
    // 0x38b264: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b268:
    // 0x38b268: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38b268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b26c:
    // 0x38b26c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38b270:
    if (ctx->pc == 0x38B270u) {
        ctx->pc = 0x38B270u;
            // 0x38b270: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38B274u;
        goto label_38b274;
    }
    ctx->pc = 0x38B26Cu;
    {
        const bool branch_taken_0x38b26c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B26Cu;
            // 0x38b270: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b26c) {
            ctx->pc = 0x38B278u;
            goto label_38b278;
        }
    }
    ctx->pc = 0x38B274u;
label_38b274:
    // 0x38b274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38b274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b278:
    // 0x38b278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38b278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38b27c:
    // 0x38b27c: 0x506000aa  beql        $v1, $zero, . + 4 + (0xAA << 2)
label_38b280:
    if (ctx->pc == 0x38B280u) {
        ctx->pc = 0x38B280u;
            // 0x38b280: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x38B284u;
        goto label_38b284;
    }
    ctx->pc = 0x38B27Cu;
    {
        const bool branch_taken_0x38b27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b27c) {
            ctx->pc = 0x38B280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B27Cu;
            // 0x38b280: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B528u;
            goto label_38b528;
        }
    }
    ctx->pc = 0x38B284u;
label_38b284:
    // 0x38b284: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38b284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38b288:
    // 0x38b288: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x38b288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_38b28c:
    // 0x38b28c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x38b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38b290:
    // 0x38b290: 0xc6a20030  lwc1        $f2, 0x30($s5)
    ctx->pc = 0x38b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b294:
    // 0x38b294: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x38b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b298:
    // 0x38b298: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x38b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b29c:
    // 0x38b29c: 0x3462f983  ori         $v0, $v1, 0xF983
    ctx->pc = 0x38b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_38b2a0:
    // 0x38b2a0: 0x8cb00130  lw          $s0, 0x130($a1)
    ctx->pc = 0x38b2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_38b2a4:
    // 0x38b2a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38b2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38b2a8:
    // 0x38b2a8: 0x0  nop
    ctx->pc = 0x38b2a8u;
    // NOP
label_38b2ac:
    // 0x38b2ac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38b2acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38b2b0:
    // 0x38b2b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38b2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38b2b4:
    // 0x38b2b4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38b2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38b2b8:
    // 0x38b2b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b2b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_38b2bc:
    // 0x38b2bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b2bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38b2c0:
    // 0x38b2c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b2c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38b2c4:
    // 0x38b2c4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x38b2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38b2c8:
    // 0x38b2c8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x38b2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38b2cc:
    // 0x38b2cc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x38b2ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_38b2d0:
    // 0x38b2d0: 0xc04f308  jal         func_13CC20
label_38b2d4:
    if (ctx->pc == 0x38B2D4u) {
        ctx->pc = 0x38B2D4u;
            // 0x38b2d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38B2D8u;
        goto label_38b2d8;
    }
    ctx->pc = 0x38B2D0u;
    SET_GPR_U32(ctx, 31, 0x38B2D8u);
    ctx->pc = 0x38B2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B2D0u;
            // 0x38b2d4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2D8u; }
        if (ctx->pc != 0x38B2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2D8u; }
        if (ctx->pc != 0x38B2D8u) { return; }
    }
    ctx->pc = 0x38B2D8u;
label_38b2d8:
    // 0x38b2d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b2dc:
    // 0x38b2dc: 0xc04ce80  jal         func_133A00
label_38b2e0:
    if (ctx->pc == 0x38B2E0u) {
        ctx->pc = 0x38B2E0u;
            // 0x38b2e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B2E4u;
        goto label_38b2e4;
    }
    ctx->pc = 0x38B2DCu;
    SET_GPR_U32(ctx, 31, 0x38B2E4u);
    ctx->pc = 0x38B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B2DCu;
            // 0x38b2e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2E4u; }
        if (ctx->pc != 0x38B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2E4u; }
        if (ctx->pc != 0x38B2E4u) { return; }
    }
    ctx->pc = 0x38B2E4u;
label_38b2e4:
    // 0x38b2e4: 0xc049514  jal         func_125450
label_38b2e8:
    if (ctx->pc == 0x38B2E8u) {
        ctx->pc = 0x38B2E8u;
            // 0x38b2e8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x38B2ECu;
        goto label_38b2ec;
    }
    ctx->pc = 0x38B2E4u;
    SET_GPR_U32(ctx, 31, 0x38B2ECu);
    ctx->pc = 0x38B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B2E4u;
            // 0x38b2e8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2ECu; }
        if (ctx->pc != 0x38B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2ECu; }
        if (ctx->pc != 0x38B2ECu) { return; }
    }
    ctx->pc = 0x38B2ECu;
label_38b2ec:
    // 0x38b2ec: 0xc0474b6  jal         func_11D2D8
label_38b2f0:
    if (ctx->pc == 0x38B2F0u) {
        ctx->pc = 0x38B2F0u;
            // 0x38b2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B2F4u;
        goto label_38b2f4;
    }
    ctx->pc = 0x38B2ECu;
    SET_GPR_U32(ctx, 31, 0x38B2F4u);
    ctx->pc = 0x38B2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B2ECu;
            // 0x38b2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2F4u; }
        if (ctx->pc != 0x38B2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2F4u; }
        if (ctx->pc != 0x38B2F4u) { return; }
    }
    ctx->pc = 0x38B2F4u;
label_38b2f4:
    // 0x38b2f4: 0xc0497dc  jal         func_125F70
label_38b2f8:
    if (ctx->pc == 0x38B2F8u) {
        ctx->pc = 0x38B2F8u;
            // 0x38b2f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B2FCu;
        goto label_38b2fc;
    }
    ctx->pc = 0x38B2F4u;
    SET_GPR_U32(ctx, 31, 0x38B2FCu);
    ctx->pc = 0x38B2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B2F4u;
            // 0x38b2f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2FCu; }
        if (ctx->pc != 0x38B2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B2FCu; }
        if (ctx->pc != 0x38B2FCu) { return; }
    }
    ctx->pc = 0x38B2FCu;
label_38b2fc:
    // 0x38b2fc: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x38b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38b300:
    // 0x38b300: 0xc049514  jal         func_125450
label_38b304:
    if (ctx->pc == 0x38B304u) {
        ctx->pc = 0x38B304u;
            // 0x38b304: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x38B308u;
        goto label_38b308;
    }
    ctx->pc = 0x38B300u;
    SET_GPR_U32(ctx, 31, 0x38B308u);
    ctx->pc = 0x38B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B300u;
            // 0x38b304: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B308u; }
        if (ctx->pc != 0x38B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B308u; }
        if (ctx->pc != 0x38B308u) { return; }
    }
    ctx->pc = 0x38B308u;
label_38b308:
    // 0x38b308: 0xc0474b6  jal         func_11D2D8
label_38b30c:
    if (ctx->pc == 0x38B30Cu) {
        ctx->pc = 0x38B30Cu;
            // 0x38b30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B310u;
        goto label_38b310;
    }
    ctx->pc = 0x38B308u;
    SET_GPR_U32(ctx, 31, 0x38B310u);
    ctx->pc = 0x38B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B308u;
            // 0x38b30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B310u; }
        if (ctx->pc != 0x38B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B310u; }
        if (ctx->pc != 0x38B310u) { return; }
    }
    ctx->pc = 0x38B310u;
label_38b310:
    // 0x38b310: 0xc0497dc  jal         func_125F70
label_38b314:
    if (ctx->pc == 0x38B314u) {
        ctx->pc = 0x38B314u;
            // 0x38b314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B318u;
        goto label_38b318;
    }
    ctx->pc = 0x38B310u;
    SET_GPR_U32(ctx, 31, 0x38B318u);
    ctx->pc = 0x38B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B310u;
            // 0x38b314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B318u; }
        if (ctx->pc != 0x38B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B318u; }
        if (ctx->pc != 0x38B318u) { return; }
    }
    ctx->pc = 0x38B318u;
label_38b318:
    // 0x38b318: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x38b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38b31c:
    // 0x38b31c: 0xc049514  jal         func_125450
label_38b320:
    if (ctx->pc == 0x38B320u) {
        ctx->pc = 0x38B320u;
            // 0x38b320: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x38B324u;
        goto label_38b324;
    }
    ctx->pc = 0x38B31Cu;
    SET_GPR_U32(ctx, 31, 0x38B324u);
    ctx->pc = 0x38B320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B31Cu;
            // 0x38b320: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B324u; }
        if (ctx->pc != 0x38B324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B324u; }
        if (ctx->pc != 0x38B324u) { return; }
    }
    ctx->pc = 0x38B324u;
label_38b324:
    // 0x38b324: 0xc0474b6  jal         func_11D2D8
label_38b328:
    if (ctx->pc == 0x38B328u) {
        ctx->pc = 0x38B328u;
            // 0x38b328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B32Cu;
        goto label_38b32c;
    }
    ctx->pc = 0x38B324u;
    SET_GPR_U32(ctx, 31, 0x38B32Cu);
    ctx->pc = 0x38B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B324u;
            // 0x38b328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B32Cu; }
        if (ctx->pc != 0x38B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B32Cu; }
        if (ctx->pc != 0x38B32Cu) { return; }
    }
    ctx->pc = 0x38B32Cu;
label_38b32c:
    // 0x38b32c: 0xc0497dc  jal         func_125F70
label_38b330:
    if (ctx->pc == 0x38B330u) {
        ctx->pc = 0x38B330u;
            // 0x38b330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B334u;
        goto label_38b334;
    }
    ctx->pc = 0x38B32Cu;
    SET_GPR_U32(ctx, 31, 0x38B334u);
    ctx->pc = 0x38B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B32Cu;
            // 0x38b330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B334u; }
        if (ctx->pc != 0x38B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B334u; }
        if (ctx->pc != 0x38B334u) { return; }
    }
    ctx->pc = 0x38B334u;
label_38b334:
    // 0x38b334: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b338:
    // 0x38b338: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x38b338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_38b33c:
    // 0x38b33c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38b33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b340:
    // 0x38b340: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x38b340u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_38b344:
    // 0x38b344: 0xc04ce50  jal         func_133940
label_38b348:
    if (ctx->pc == 0x38B348u) {
        ctx->pc = 0x38B348u;
            // 0x38b348: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x38B34Cu;
        goto label_38b34c;
    }
    ctx->pc = 0x38B344u;
    SET_GPR_U32(ctx, 31, 0x38B34Cu);
    ctx->pc = 0x38B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B344u;
            // 0x38b348: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B34Cu; }
        if (ctx->pc != 0x38B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B34Cu; }
        if (ctx->pc != 0x38B34Cu) { return; }
    }
    ctx->pc = 0x38B34Cu;
label_38b34c:
    // 0x38b34c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38b350:
    // 0x38b350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38b350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b354:
    // 0x38b354: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_38b358:
    // 0x38b358: 0xc07698c  jal         func_1DA630
label_38b35c:
    if (ctx->pc == 0x38B35Cu) {
        ctx->pc = 0x38B35Cu;
            // 0x38b35c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x38B360u;
        goto label_38b360;
    }
    ctx->pc = 0x38B358u;
    SET_GPR_U32(ctx, 31, 0x38B360u);
    ctx->pc = 0x38B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B358u;
            // 0x38b35c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B360u; }
        if (ctx->pc != 0x38B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B360u; }
        if (ctx->pc != 0x38B360u) { return; }
    }
    ctx->pc = 0x38B360u;
label_38b360:
    // 0x38b360: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38b364:
    // 0x38b364: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_38b368:
    if (ctx->pc == 0x38B368u) {
        ctx->pc = 0x38B36Cu;
        goto label_38b36c;
    }
    ctx->pc = 0x38B364u;
    {
        const bool branch_taken_0x38b364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38b364) {
            ctx->pc = 0x38B374u;
            goto label_38b374;
        }
    }
    ctx->pc = 0x38B36Cu;
label_38b36c:
    // 0x38b36c: 0x10000031  b           . + 4 + (0x31 << 2)
label_38b370:
    if (ctx->pc == 0x38B370u) {
        ctx->pc = 0x38B370u;
            // 0x38b370: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38B374u;
        goto label_38b374;
    }
    ctx->pc = 0x38B36Cu;
    {
        const bool branch_taken_0x38b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B36Cu;
            // 0x38b370: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b36c) {
            ctx->pc = 0x38B434u;
            goto label_38b434;
        }
    }
    ctx->pc = 0x38B374u;
label_38b374:
    // 0x38b374: 0xc0576f4  jal         func_15DBD0
label_38b378:
    if (ctx->pc == 0x38B378u) {
        ctx->pc = 0x38B37Cu;
        goto label_38b37c;
    }
    ctx->pc = 0x38B374u;
    SET_GPR_U32(ctx, 31, 0x38B37Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B37Cu; }
        if (ctx->pc != 0x38B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B37Cu; }
        if (ctx->pc != 0x38B37Cu) { return; }
    }
    ctx->pc = 0x38B37Cu;
label_38b37c:
    // 0x38b37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38b37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b380:
    // 0x38b380: 0xc076984  jal         func_1DA610
label_38b384:
    if (ctx->pc == 0x38B384u) {
        ctx->pc = 0x38B384u;
            // 0x38b384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B388u;
        goto label_38b388;
    }
    ctx->pc = 0x38B380u;
    SET_GPR_U32(ctx, 31, 0x38B388u);
    ctx->pc = 0x38B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B380u;
            // 0x38b384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B388u; }
        if (ctx->pc != 0x38B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B388u; }
        if (ctx->pc != 0x38B388u) { return; }
    }
    ctx->pc = 0x38B388u;
label_38b388:
    // 0x38b388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38b388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b38c:
    // 0x38b38c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38b390:
    // 0x38b390: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b394:
    // 0x38b394: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x38b394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b398:
    // 0x38b398: 0xc4421bb0  lwc1        $f2, 0x1BB0($v0)
    ctx->pc = 0x38b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b39c:
    // 0x38b39c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38b39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b3a0:
    // 0x38b3a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b3a4:
    // 0x38b3a4: 0xc4411bb8  lwc1        $f1, 0x1BB8($v0)
    ctx->pc = 0x38b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b3a8:
    // 0x38b3a8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x38b3a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_38b3ac:
    // 0x38b3ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b3b0:
    // 0x38b3b0: 0xc4401bbc  lwc1        $f0, 0x1BBC($v0)
    ctx->pc = 0x38b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b3b4:
    // 0x38b3b4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x38b3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_38b3b8:
    // 0x38b3b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b3bc:
    // 0x38b3bc: 0x8c421bb4  lw          $v0, 0x1BB4($v0)
    ctx->pc = 0x38b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
label_38b3c0:
    // 0x38b3c0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x38b3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_38b3c4:
    // 0x38b3c4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x38b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_38b3c8:
    // 0x38b3c8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x38b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b3cc:
    // 0x38b3cc: 0xc04cca0  jal         func_133280
label_38b3d0:
    if (ctx->pc == 0x38B3D0u) {
        ctx->pc = 0x38B3D0u;
            // 0x38b3d0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x38B3D4u;
        goto label_38b3d4;
    }
    ctx->pc = 0x38B3CCu;
    SET_GPR_U32(ctx, 31, 0x38B3D4u);
    ctx->pc = 0x38B3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B3CCu;
            // 0x38b3d0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3D4u; }
        if (ctx->pc != 0x38B3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3D4u; }
        if (ctx->pc != 0x38B3D4u) { return; }
    }
    ctx->pc = 0x38B3D4u;
label_38b3d4:
    // 0x38b3d4: 0xc076980  jal         func_1DA600
label_38b3d8:
    if (ctx->pc == 0x38B3D8u) {
        ctx->pc = 0x38B3D8u;
            // 0x38b3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B3DCu;
        goto label_38b3dc;
    }
    ctx->pc = 0x38B3D4u;
    SET_GPR_U32(ctx, 31, 0x38B3DCu);
    ctx->pc = 0x38B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B3D4u;
            // 0x38b3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3DCu; }
        if (ctx->pc != 0x38B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3DCu; }
        if (ctx->pc != 0x38B3DCu) { return; }
    }
    ctx->pc = 0x38B3DCu;
label_38b3dc:
    // 0x38b3dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38b3e0:
    // 0x38b3e0: 0xc04cc34  jal         func_1330D0
label_38b3e4:
    if (ctx->pc == 0x38B3E4u) {
        ctx->pc = 0x38B3E4u;
            // 0x38b3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B3E8u;
        goto label_38b3e8;
    }
    ctx->pc = 0x38B3E0u;
    SET_GPR_U32(ctx, 31, 0x38B3E8u);
    ctx->pc = 0x38B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B3E0u;
            // 0x38b3e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3E8u; }
        if (ctx->pc != 0x38B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B3E8u; }
        if (ctx->pc != 0x38B3E8u) { return; }
    }
    ctx->pc = 0x38B3E8u;
label_38b3e8:
    // 0x38b3e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38b3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b3ec:
    // 0x38b3ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_38b3f0:
    if (ctx->pc == 0x38B3F0u) {
        ctx->pc = 0x38B3F0u;
            // 0x38b3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B3F4u;
        goto label_38b3f4;
    }
    ctx->pc = 0x38B3ECu;
    {
        const bool branch_taken_0x38b3ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b3ec) {
            ctx->pc = 0x38B3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B3ECu;
            // 0x38b3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B3FCu;
            goto label_38b3fc;
        }
    }
    ctx->pc = 0x38B3F4u;
label_38b3f4:
    // 0x38b3f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_38b3f8:
    if (ctx->pc == 0x38B3F8u) {
        ctx->pc = 0x38B3F8u;
            // 0x38b3f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38B3FCu;
        goto label_38b3fc;
    }
    ctx->pc = 0x38B3F4u;
    {
        const bool branch_taken_0x38b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B3F4u;
            // 0x38b3f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b3f4) {
            ctx->pc = 0x38B434u;
            goto label_38b434;
        }
    }
    ctx->pc = 0x38B3FCu;
label_38b3fc:
    // 0x38b3fc: 0xc07697c  jal         func_1DA5F0
label_38b400:
    if (ctx->pc == 0x38B400u) {
        ctx->pc = 0x38B404u;
        goto label_38b404;
    }
    ctx->pc = 0x38B3FCu;
    SET_GPR_U32(ctx, 31, 0x38B404u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B404u; }
        if (ctx->pc != 0x38B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B404u; }
        if (ctx->pc != 0x38B404u) { return; }
    }
    ctx->pc = 0x38B404u;
label_38b404:
    // 0x38b404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38b404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b408:
    // 0x38b408: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38b408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38b40c:
    // 0x38b40c: 0xc04cd60  jal         func_133580
label_38b410:
    if (ctx->pc == 0x38B410u) {
        ctx->pc = 0x38B410u;
            // 0x38b410: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38B414u;
        goto label_38b414;
    }
    ctx->pc = 0x38B40Cu;
    SET_GPR_U32(ctx, 31, 0x38B414u);
    ctx->pc = 0x38B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B40Cu;
            // 0x38b410: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B414u; }
        if (ctx->pc != 0x38B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B414u; }
        if (ctx->pc != 0x38B414u) { return; }
    }
    ctx->pc = 0x38B414u;
label_38b414:
    // 0x38b414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b418:
    // 0x38b418: 0xc04c650  jal         func_131940
label_38b41c:
    if (ctx->pc == 0x38B41Cu) {
        ctx->pc = 0x38B41Cu;
            // 0x38b41c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x38B420u;
        goto label_38b420;
    }
    ctx->pc = 0x38B418u;
    SET_GPR_U32(ctx, 31, 0x38B420u);
    ctx->pc = 0x38B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B418u;
            // 0x38b41c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B420u; }
        if (ctx->pc != 0x38B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B420u; }
        if (ctx->pc != 0x38B420u) { return; }
    }
    ctx->pc = 0x38B420u;
label_38b420:
    // 0x38b420: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x38b420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_38b424:
    // 0x38b424: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38b424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38b428:
    // 0x38b428: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x38b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_38b42c:
    // 0x38b42c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b430:
    // 0x38b430: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38b434:
    // 0x38b434: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38b434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38b438:
    // 0x38b438: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_38b43c:
    if (ctx->pc == 0x38B43Cu) {
        ctx->pc = 0x38B440u;
        goto label_38b440;
    }
    ctx->pc = 0x38B438u;
    {
        const bool branch_taken_0x38b438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b438) {
            ctx->pc = 0x38B524u;
            goto label_38b524;
        }
    }
    ctx->pc = 0x38B440u;
label_38b440:
    // 0x38b440: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38b444:
    // 0x38b444: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x38b444u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_38b448:
    // 0x38b448: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x38b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38b44c:
    // 0x38b44c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b450:
    // 0x38b450: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b454:
    // 0x38b454: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x38b454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38b458:
    // 0x38b458: 0x8c45e3d8  lw          $a1, -0x1C28($v0)
    ctx->pc = 0x38b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38b45c:
    // 0x38b45c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b460:
    // 0x38b460: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x38b460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_38b464:
    // 0x38b464: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x38b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_38b468:
    // 0x38b468: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x38b468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b46c:
    // 0x38b46c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b470:
    // 0x38b470: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x38b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_38b474:
    // 0x38b474: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x38b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_38b478:
    // 0x38b478: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x38b478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b47c:
    // 0x38b47c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x38b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38b480:
    // 0x38b480: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x38b480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38b484:
    // 0x38b484: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x38b484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38b488:
    // 0x38b488: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x38b488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_38b48c:
    // 0x38b48c: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x38b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_38b490:
    // 0x38b490: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x38b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_38b494:
    // 0x38b494: 0x92a20020  lbu         $v0, 0x20($s5)
    ctx->pc = 0x38b494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
label_38b498:
    // 0x38b498: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x38b498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_38b49c:
    // 0x38b49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b4a0:
    // 0x38b4a0: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x38b4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38b4a4:
    // 0x38b4a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x38b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38b4a8:
    // 0x38b4a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_38b4ac:
    // 0x38b4ac: 0x401027  not         $v0, $v0
    ctx->pc = 0x38b4acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_38b4b0:
    // 0x38b4b0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x38b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_38b4b4:
    // 0x38b4b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38b4b8:
    // 0x38b4b8: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x38b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_38b4bc:
    // 0x38b4bc: 0xc04e4a4  jal         func_139290
label_38b4c0:
    if (ctx->pc == 0x38B4C0u) {
        ctx->pc = 0x38B4C0u;
            // 0x38b4c0: 0x25160010  addiu       $s6, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->pc = 0x38B4C4u;
        goto label_38b4c4;
    }
    ctx->pc = 0x38B4BCu;
    SET_GPR_U32(ctx, 31, 0x38B4C4u);
    ctx->pc = 0x38B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B4BCu;
            // 0x38b4c0: 0x25160010  addiu       $s6, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B4C4u; }
        if (ctx->pc != 0x38B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B4C4u; }
        if (ctx->pc != 0x38B4C4u) { return; }
    }
    ctx->pc = 0x38B4C4u;
label_38b4c4:
    // 0x38b4c4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x38b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b4c8:
    // 0x38b4c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b4cc:
    // 0x38b4cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x38b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38b4d0:
    // 0x38b4d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38b4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b4d4:
    // 0x38b4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38b4d8:
    // 0x38b4d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x38b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_38b4dc:
    // 0x38b4dc: 0xc04cd60  jal         func_133580
label_38b4e0:
    if (ctx->pc == 0x38B4E0u) {
        ctx->pc = 0x38B4E0u;
            // 0x38b4e0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x38B4E4u;
        goto label_38b4e4;
    }
    ctx->pc = 0x38B4DCu;
    SET_GPR_U32(ctx, 31, 0x38B4E4u);
    ctx->pc = 0x38B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B4DCu;
            // 0x38b4e0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B4E4u; }
        if (ctx->pc != 0x38B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B4E4u; }
        if (ctx->pc != 0x38B4E4u) { return; }
    }
    ctx->pc = 0x38B4E4u;
label_38b4e4:
    // 0x38b4e4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38b4e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38b4e8:
    // 0x38b4e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b4ec:
    // 0x38b4ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38b4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b4f0:
    // 0x38b4f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x38b4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b4f4:
    // 0x38b4f4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b4f8:
    // 0x38b4f8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38b4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38b4fc:
    // 0x38b4fc: 0xc04cfcc  jal         func_133F30
label_38b500:
    if (ctx->pc == 0x38B500u) {
        ctx->pc = 0x38B500u;
            // 0x38b500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B504u;
        goto label_38b504;
    }
    ctx->pc = 0x38B4FCu;
    SET_GPR_U32(ctx, 31, 0x38B504u);
    ctx->pc = 0x38B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B4FCu;
            // 0x38b500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B504u; }
        if (ctx->pc != 0x38B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B504u; }
        if (ctx->pc != 0x38B504u) { return; }
    }
    ctx->pc = 0x38B504u;
label_38b504:
    // 0x38b504: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x38b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_38b508:
    // 0x38b508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38b508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b50c:
    // 0x38b50c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38b50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b510:
    // 0x38b510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38b510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b514:
    // 0x38b514: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38b514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38b518:
    // 0x38b518: 0xc0538d8  jal         func_14E360
label_38b51c:
    if (ctx->pc == 0x38B51Cu) {
        ctx->pc = 0x38B51Cu;
            // 0x38b51c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x38B520u;
        goto label_38b520;
    }
    ctx->pc = 0x38B518u;
    SET_GPR_U32(ctx, 31, 0x38B520u);
    ctx->pc = 0x38B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B518u;
            // 0x38b51c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B520u; }
        if (ctx->pc != 0x38B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B520u; }
        if (ctx->pc != 0x38B520u) { return; }
    }
    ctx->pc = 0x38B520u;
label_38b520:
    // 0x38b520: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x38b520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_38b524:
    // 0x38b524: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x38b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38b528:
    // 0x38b528: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x38b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_38b52c:
    // 0x38b52c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38b52cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38b530:
    // 0x38b530: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x38b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38b534:
    // 0x38b534: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38b534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38b538:
    // 0x38b538: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38b53c:
    // 0x38b53c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38b53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b540:
    // 0x38b540: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38b540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b544:
    // 0x38b544: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38b544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b548:
    // 0x38b548: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38b548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38b54c:
    // 0x38b54c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38b54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38b550:
    // 0x38b550: 0x3e00008  jr          $ra
label_38b554:
    if (ctx->pc == 0x38B554u) {
        ctx->pc = 0x38B554u;
            // 0x38b554: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x38B558u;
        goto label_38b558;
    }
    ctx->pc = 0x38B550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B550u;
            // 0x38b554: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38B558u;
label_38b558:
    // 0x38b558: 0x0  nop
    ctx->pc = 0x38b558u;
    // NOP
label_38b55c:
    // 0x38b55c: 0x0  nop
    ctx->pc = 0x38b55cu;
    // NOP
label_38b560:
    // 0x38b560: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x38b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_38b564:
    // 0x38b564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38b564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b568:
    // 0x38b568: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x38b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_38b56c:
    // 0x38b56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38b56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b570:
    // 0x38b570: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38b574:
    // 0x38b574: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38b574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38b578:
    // 0x38b578: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38b57c:
    // 0x38b57c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38b57cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b580:
    // 0x38b580: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38b584:
    // 0x38b584: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38b588:
    // 0x38b588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38b58c:
    // 0x38b58c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38b590:
    // 0x38b590: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38b590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38b594:
    // 0x38b594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b598:
    // 0x38b598: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b59c:
    // 0x38b59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38b59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b5a0:
    // 0x38b5a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38b5a4:
    if (ctx->pc == 0x38B5A4u) {
        ctx->pc = 0x38B5A4u;
            // 0x38b5a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38B5A8u;
        goto label_38b5a8;
    }
    ctx->pc = 0x38B5A0u;
    {
        const bool branch_taken_0x38b5a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B5A0u;
            // 0x38b5a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5a0) {
            ctx->pc = 0x38B5ACu;
            goto label_38b5ac;
        }
    }
    ctx->pc = 0x38B5A8u;
label_38b5a8:
    // 0x38b5a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38b5a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b5ac:
    // 0x38b5ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38b5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38b5b0:
    // 0x38b5b0: 0x5060008f  beql        $v1, $zero, . + 4 + (0x8F << 2)
label_38b5b4:
    if (ctx->pc == 0x38B5B4u) {
        ctx->pc = 0x38B5B4u;
            // 0x38b5b4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x38B5B8u;
        goto label_38b5b8;
    }
    ctx->pc = 0x38B5B0u;
    {
        const bool branch_taken_0x38b5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b5b0) {
            ctx->pc = 0x38B5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B5B0u;
            // 0x38b5b4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B7F0u;
            goto label_38b7f0;
        }
    }
    ctx->pc = 0x38B5B8u;
label_38b5b8:
    // 0x38b5b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38b5bc:
    // 0x38b5bc: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x38b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_38b5c0:
    // 0x38b5c0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x38b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38b5c4:
    // 0x38b5c4: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x38b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b5c8:
    // 0x38b5c8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x38b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b5cc:
    // 0x38b5cc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x38b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b5d0:
    // 0x38b5d0: 0x3462f983  ori         $v0, $v1, 0xF983
    ctx->pc = 0x38b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_38b5d4:
    // 0x38b5d4: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x38b5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_38b5d8:
    // 0x38b5d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38b5dc:
    // 0x38b5dc: 0x0  nop
    ctx->pc = 0x38b5dcu;
    // NOP
label_38b5e0:
    // 0x38b5e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38b5e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38b5e4:
    // 0x38b5e4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38b5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38b5e8:
    // 0x38b5e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38b5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38b5ec:
    // 0x38b5ec: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b5ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_38b5f0:
    // 0x38b5f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b5f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38b5f4:
    // 0x38b5f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b5f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38b5f8:
    // 0x38b5f8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x38b5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38b5fc:
    // 0x38b5fc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x38b5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38b600:
    // 0x38b600: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x38b600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_38b604:
    // 0x38b604: 0xc04f308  jal         func_13CC20
label_38b608:
    if (ctx->pc == 0x38B608u) {
        ctx->pc = 0x38B608u;
            // 0x38b608: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38B60Cu;
        goto label_38b60c;
    }
    ctx->pc = 0x38B604u;
    SET_GPR_U32(ctx, 31, 0x38B60Cu);
    ctx->pc = 0x38B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B604u;
            // 0x38b608: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B60Cu; }
        if (ctx->pc != 0x38B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B60Cu; }
        if (ctx->pc != 0x38B60Cu) { return; }
    }
    ctx->pc = 0x38B60Cu;
label_38b60c:
    // 0x38b60c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b610:
    // 0x38b610: 0xc04ce80  jal         func_133A00
label_38b614:
    if (ctx->pc == 0x38B614u) {
        ctx->pc = 0x38B614u;
            // 0x38b614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B618u;
        goto label_38b618;
    }
    ctx->pc = 0x38B610u;
    SET_GPR_U32(ctx, 31, 0x38B618u);
    ctx->pc = 0x38B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B610u;
            // 0x38b614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B618u; }
        if (ctx->pc != 0x38B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B618u; }
        if (ctx->pc != 0x38B618u) { return; }
    }
    ctx->pc = 0x38B618u;
label_38b618:
    // 0x38b618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38b61c:
    // 0x38b61c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38b61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b620:
    // 0x38b620: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_38b624:
    // 0x38b624: 0xc07698c  jal         func_1DA630
label_38b628:
    if (ctx->pc == 0x38B628u) {
        ctx->pc = 0x38B628u;
            // 0x38b628: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x38B62Cu;
        goto label_38b62c;
    }
    ctx->pc = 0x38B624u;
    SET_GPR_U32(ctx, 31, 0x38B62Cu);
    ctx->pc = 0x38B628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B624u;
            // 0x38b628: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B62Cu; }
        if (ctx->pc != 0x38B62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B62Cu; }
        if (ctx->pc != 0x38B62Cu) { return; }
    }
    ctx->pc = 0x38B62Cu;
label_38b62c:
    // 0x38b62c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38b630:
    // 0x38b630: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_38b634:
    if (ctx->pc == 0x38B634u) {
        ctx->pc = 0x38B638u;
        goto label_38b638;
    }
    ctx->pc = 0x38B630u;
    {
        const bool branch_taken_0x38b630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38b630) {
            ctx->pc = 0x38B640u;
            goto label_38b640;
        }
    }
    ctx->pc = 0x38B638u;
label_38b638:
    // 0x38b638: 0x10000031  b           . + 4 + (0x31 << 2)
label_38b63c:
    if (ctx->pc == 0x38B63Cu) {
        ctx->pc = 0x38B63Cu;
            // 0x38b63c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38B640u;
        goto label_38b640;
    }
    ctx->pc = 0x38B638u;
    {
        const bool branch_taken_0x38b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B638u;
            // 0x38b63c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b638) {
            ctx->pc = 0x38B700u;
            goto label_38b700;
        }
    }
    ctx->pc = 0x38B640u;
label_38b640:
    // 0x38b640: 0xc0576f4  jal         func_15DBD0
label_38b644:
    if (ctx->pc == 0x38B644u) {
        ctx->pc = 0x38B648u;
        goto label_38b648;
    }
    ctx->pc = 0x38B640u;
    SET_GPR_U32(ctx, 31, 0x38B648u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B648u; }
        if (ctx->pc != 0x38B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B648u; }
        if (ctx->pc != 0x38B648u) { return; }
    }
    ctx->pc = 0x38B648u;
label_38b648:
    // 0x38b648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38b648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b64c:
    // 0x38b64c: 0xc076984  jal         func_1DA610
label_38b650:
    if (ctx->pc == 0x38B650u) {
        ctx->pc = 0x38B650u;
            // 0x38b650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B654u;
        goto label_38b654;
    }
    ctx->pc = 0x38B64Cu;
    SET_GPR_U32(ctx, 31, 0x38B654u);
    ctx->pc = 0x38B650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B64Cu;
            // 0x38b650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B654u; }
        if (ctx->pc != 0x38B654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B654u; }
        if (ctx->pc != 0x38B654u) { return; }
    }
    ctx->pc = 0x38B654u;
label_38b654:
    // 0x38b654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38b654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b658:
    // 0x38b658: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38b65c:
    // 0x38b65c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b660:
    // 0x38b660: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x38b660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b664:
    // 0x38b664: 0xc4421bb0  lwc1        $f2, 0x1BB0($v0)
    ctx->pc = 0x38b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b668:
    // 0x38b668: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38b668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b66c:
    // 0x38b66c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b670:
    // 0x38b670: 0xc4411bb8  lwc1        $f1, 0x1BB8($v0)
    ctx->pc = 0x38b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b674:
    // 0x38b674: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x38b674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_38b678:
    // 0x38b678: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b67c:
    // 0x38b67c: 0xc4401bbc  lwc1        $f0, 0x1BBC($v0)
    ctx->pc = 0x38b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b680:
    // 0x38b680: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x38b680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_38b684:
    // 0x38b684: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b688:
    // 0x38b688: 0x8c421bb4  lw          $v0, 0x1BB4($v0)
    ctx->pc = 0x38b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
label_38b68c:
    // 0x38b68c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x38b68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_38b690:
    // 0x38b690: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x38b690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_38b694:
    // 0x38b694: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x38b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b698:
    // 0x38b698: 0xc04cca0  jal         func_133280
label_38b69c:
    if (ctx->pc == 0x38B69Cu) {
        ctx->pc = 0x38B69Cu;
            // 0x38b69c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x38B6A0u;
        goto label_38b6a0;
    }
    ctx->pc = 0x38B698u;
    SET_GPR_U32(ctx, 31, 0x38B6A0u);
    ctx->pc = 0x38B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B698u;
            // 0x38b69c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6A0u; }
        if (ctx->pc != 0x38B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6A0u; }
        if (ctx->pc != 0x38B6A0u) { return; }
    }
    ctx->pc = 0x38B6A0u;
label_38b6a0:
    // 0x38b6a0: 0xc076980  jal         func_1DA600
label_38b6a4:
    if (ctx->pc == 0x38B6A4u) {
        ctx->pc = 0x38B6A4u;
            // 0x38b6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B6A8u;
        goto label_38b6a8;
    }
    ctx->pc = 0x38B6A0u;
    SET_GPR_U32(ctx, 31, 0x38B6A8u);
    ctx->pc = 0x38B6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6A0u;
            // 0x38b6a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6A8u; }
        if (ctx->pc != 0x38B6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6A8u; }
        if (ctx->pc != 0x38B6A8u) { return; }
    }
    ctx->pc = 0x38B6A8u;
label_38b6a8:
    // 0x38b6a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38b6ac:
    // 0x38b6ac: 0xc04cc34  jal         func_1330D0
label_38b6b0:
    if (ctx->pc == 0x38B6B0u) {
        ctx->pc = 0x38B6B0u;
            // 0x38b6b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B6B4u;
        goto label_38b6b4;
    }
    ctx->pc = 0x38B6ACu;
    SET_GPR_U32(ctx, 31, 0x38B6B4u);
    ctx->pc = 0x38B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6ACu;
            // 0x38b6b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6B4u; }
        if (ctx->pc != 0x38B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6B4u; }
        if (ctx->pc != 0x38B6B4u) { return; }
    }
    ctx->pc = 0x38B6B4u;
label_38b6b4:
    // 0x38b6b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38b6b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b6b8:
    // 0x38b6b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_38b6bc:
    if (ctx->pc == 0x38B6BCu) {
        ctx->pc = 0x38B6BCu;
            // 0x38b6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B6C0u;
        goto label_38b6c0;
    }
    ctx->pc = 0x38B6B8u;
    {
        const bool branch_taken_0x38b6b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b6b8) {
            ctx->pc = 0x38B6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6B8u;
            // 0x38b6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B6C8u;
            goto label_38b6c8;
        }
    }
    ctx->pc = 0x38B6C0u;
label_38b6c0:
    // 0x38b6c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_38b6c4:
    if (ctx->pc == 0x38B6C4u) {
        ctx->pc = 0x38B6C4u;
            // 0x38b6c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38B6C8u;
        goto label_38b6c8;
    }
    ctx->pc = 0x38B6C0u;
    {
        const bool branch_taken_0x38b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6C0u;
            // 0x38b6c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6c0) {
            ctx->pc = 0x38B700u;
            goto label_38b700;
        }
    }
    ctx->pc = 0x38B6C8u;
label_38b6c8:
    // 0x38b6c8: 0xc07697c  jal         func_1DA5F0
label_38b6cc:
    if (ctx->pc == 0x38B6CCu) {
        ctx->pc = 0x38B6D0u;
        goto label_38b6d0;
    }
    ctx->pc = 0x38B6C8u;
    SET_GPR_U32(ctx, 31, 0x38B6D0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6D0u; }
        if (ctx->pc != 0x38B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6D0u; }
        if (ctx->pc != 0x38B6D0u) { return; }
    }
    ctx->pc = 0x38B6D0u;
label_38b6d0:
    // 0x38b6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38b6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b6d4:
    // 0x38b6d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38b6d8:
    // 0x38b6d8: 0xc04cd60  jal         func_133580
label_38b6dc:
    if (ctx->pc == 0x38B6DCu) {
        ctx->pc = 0x38B6DCu;
            // 0x38b6dc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38B6E0u;
        goto label_38b6e0;
    }
    ctx->pc = 0x38B6D8u;
    SET_GPR_U32(ctx, 31, 0x38B6E0u);
    ctx->pc = 0x38B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6D8u;
            // 0x38b6dc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6E0u; }
        if (ctx->pc != 0x38B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6E0u; }
        if (ctx->pc != 0x38B6E0u) { return; }
    }
    ctx->pc = 0x38B6E0u;
label_38b6e0:
    // 0x38b6e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38b6e4:
    // 0x38b6e4: 0xc04c650  jal         func_131940
label_38b6e8:
    if (ctx->pc == 0x38B6E8u) {
        ctx->pc = 0x38B6E8u;
            // 0x38b6e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x38B6ECu;
        goto label_38b6ec;
    }
    ctx->pc = 0x38B6E4u;
    SET_GPR_U32(ctx, 31, 0x38B6ECu);
    ctx->pc = 0x38B6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B6E4u;
            // 0x38b6e8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6ECu; }
        if (ctx->pc != 0x38B6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B6ECu; }
        if (ctx->pc != 0x38B6ECu) { return; }
    }
    ctx->pc = 0x38B6ECu;
label_38b6ec:
    // 0x38b6ec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x38b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_38b6f0:
    // 0x38b6f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38b6f4:
    // 0x38b6f4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x38b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_38b6f8:
    // 0x38b6f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b6fc:
    // 0x38b6fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38b700:
    // 0x38b700: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38b700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38b704:
    // 0x38b704: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_38b708:
    if (ctx->pc == 0x38B708u) {
        ctx->pc = 0x38B70Cu;
        goto label_38b70c;
    }
    ctx->pc = 0x38B704u;
    {
        const bool branch_taken_0x38b704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b704) {
            ctx->pc = 0x38B7ECu;
            goto label_38b7ec;
        }
    }
    ctx->pc = 0x38B70Cu;
label_38b70c:
    // 0x38b70c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38b710:
    // 0x38b710: 0x8e120018  lw          $s2, 0x18($s0)
    ctx->pc = 0x38b710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38b714:
    // 0x38b714: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x38b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38b718:
    // 0x38b718: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x38b718u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38b71c:
    // 0x38b71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b720:
    // 0x38b720: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b724:
    // 0x38b724: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x38b724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38b728:
    // 0x38b728: 0x8c45e3d8  lw          $a1, -0x1C28($v0)
    ctx->pc = 0x38b728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38b72c:
    // 0x38b72c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b730:
    // 0x38b730: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x38b730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_38b734:
    // 0x38b734: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x38b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_38b738:
    // 0x38b738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38b738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38b73c:
    // 0x38b73c: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x38b73cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b740:
    // 0x38b740: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x38b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_38b744:
    // 0x38b744: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x38b744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38b748:
    // 0x38b748: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x38b748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_38b74c:
    // 0x38b74c: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x38b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_38b750:
    // 0x38b750: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x38b750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_38b754:
    // 0x38b754: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x38b754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38b758:
    // 0x38b758: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x38b758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38b75c:
    // 0x38b75c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x38b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_38b760:
    // 0x38b760: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x38b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_38b764:
    // 0x38b764: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x38b764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_38b768:
    // 0x38b768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b76c:
    // 0x38b76c: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x38b76cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38b770:
    // 0x38b770: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x38b770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38b774:
    // 0x38b774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_38b778:
    // 0x38b778: 0x401027  not         $v0, $v0
    ctx->pc = 0x38b778u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_38b77c:
    // 0x38b77c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x38b77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_38b780:
    // 0x38b780: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38b780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38b784:
    // 0x38b784: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x38b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_38b788:
    // 0x38b788: 0xc04e4a4  jal         func_139290
label_38b78c:
    if (ctx->pc == 0x38B78Cu) {
        ctx->pc = 0x38B78Cu;
            // 0x38b78c: 0x24f60010  addiu       $s6, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x38B790u;
        goto label_38b790;
    }
    ctx->pc = 0x38B788u;
    SET_GPR_U32(ctx, 31, 0x38B790u);
    ctx->pc = 0x38B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B788u;
            // 0x38b78c: 0x24f60010  addiu       $s6, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B790u; }
        if (ctx->pc != 0x38B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B790u; }
        if (ctx->pc != 0x38B790u) { return; }
    }
    ctx->pc = 0x38B790u;
label_38b790:
    // 0x38b790: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x38b790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38b794:
    // 0x38b794: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b798:
    // 0x38b798: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38b79c:
    // 0x38b79c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x38b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38b7a0:
    // 0x38b7a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_38b7a4:
    // 0x38b7a4: 0xc04cd60  jal         func_133580
label_38b7a8:
    if (ctx->pc == 0x38B7A8u) {
        ctx->pc = 0x38B7A8u;
            // 0x38b7a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B7ACu;
        goto label_38b7ac;
    }
    ctx->pc = 0x38B7A4u;
    SET_GPR_U32(ctx, 31, 0x38B7ACu);
    ctx->pc = 0x38B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B7A4u;
            // 0x38b7a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7ACu; }
        if (ctx->pc != 0x38B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7ACu; }
        if (ctx->pc != 0x38B7ACu) { return; }
    }
    ctx->pc = 0x38B7ACu;
label_38b7ac:
    // 0x38b7ac: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38b7acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38b7b0:
    // 0x38b7b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38b7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b7b4:
    // 0x38b7b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38b7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b7b8:
    // 0x38b7b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x38b7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38b7bc:
    // 0x38b7bc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38b7c0:
    // 0x38b7c0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38b7c4:
    // 0x38b7c4: 0xc04cfcc  jal         func_133F30
label_38b7c8:
    if (ctx->pc == 0x38B7C8u) {
        ctx->pc = 0x38B7C8u;
            // 0x38b7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B7CCu;
        goto label_38b7cc;
    }
    ctx->pc = 0x38B7C4u;
    SET_GPR_U32(ctx, 31, 0x38B7CCu);
    ctx->pc = 0x38B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B7C4u;
            // 0x38b7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7CCu; }
        if (ctx->pc != 0x38B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7CCu; }
        if (ctx->pc != 0x38B7CCu) { return; }
    }
    ctx->pc = 0x38B7CCu;
label_38b7cc:
    // 0x38b7cc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x38b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_38b7d0:
    // 0x38b7d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38b7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38b7d4:
    // 0x38b7d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38b7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b7d8:
    // 0x38b7d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x38b7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38b7dc:
    // 0x38b7dc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38b7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38b7e0:
    // 0x38b7e0: 0xc0538d8  jal         func_14E360
label_38b7e4:
    if (ctx->pc == 0x38B7E4u) {
        ctx->pc = 0x38B7E4u;
            // 0x38b7e4: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x38B7E8u;
        goto label_38b7e8;
    }
    ctx->pc = 0x38B7E0u;
    SET_GPR_U32(ctx, 31, 0x38B7E8u);
    ctx->pc = 0x38B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B7E0u;
            // 0x38b7e4: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7E8u; }
        if (ctx->pc != 0x38B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B7E8u; }
        if (ctx->pc != 0x38B7E8u) { return; }
    }
    ctx->pc = 0x38B7E8u;
label_38b7e8:
    // 0x38b7e8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x38b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_38b7ec:
    // 0x38b7ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x38b7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38b7f0:
    // 0x38b7f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38b7f4:
    // 0x38b7f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38b7f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38b7f8:
    // 0x38b7f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38b7f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38b7fc:
    // 0x38b7fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38b7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b800:
    // 0x38b800: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38b800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b804:
    // 0x38b804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38b804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b808:
    // 0x38b808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38b808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38b80c:
    // 0x38b80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38b80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38b810:
    // 0x38b810: 0x3e00008  jr          $ra
label_38b814:
    if (ctx->pc == 0x38B814u) {
        ctx->pc = 0x38B814u;
            // 0x38b814: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x38B818u;
        goto label_38b818;
    }
    ctx->pc = 0x38B810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B810u;
            // 0x38b814: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38B818u;
label_38b818:
    // 0x38b818: 0x0  nop
    ctx->pc = 0x38b818u;
    // NOP
label_38b81c:
    // 0x38b81c: 0x0  nop
    ctx->pc = 0x38b81cu;
    // NOP
label_38b820:
    // 0x38b820: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x38b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_38b824:
    // 0x38b824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b828:
    // 0x38b828: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38b82c:
    // 0x38b82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38b82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38b830:
    // 0x38b830: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38b834:
    // 0x38b834: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38b838:
    // 0x38b838: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38b83c:
    // 0x38b83c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38b840:
    // 0x38b840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38b844:
    // 0x38b844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38b844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b848:
    // 0x38b848: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38b848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38b84c:
    // 0x38b84c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38b84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b850:
    // 0x38b850: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b854:
    // 0x38b854: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38b854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b858:
    // 0x38b858: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38b85c:
    if (ctx->pc == 0x38B85Cu) {
        ctx->pc = 0x38B85Cu;
            // 0x38b85c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38B860u;
        goto label_38b860;
    }
    ctx->pc = 0x38B858u;
    {
        const bool branch_taken_0x38b858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B858u;
            // 0x38b85c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b858) {
            ctx->pc = 0x38B864u;
            goto label_38b864;
        }
    }
    ctx->pc = 0x38B860u;
label_38b860:
    // 0x38b860: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38b860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b864:
    // 0x38b864: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38b864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38b868:
    // 0x38b868: 0x506000aa  beql        $v1, $zero, . + 4 + (0xAA << 2)
label_38b86c:
    if (ctx->pc == 0x38B86Cu) {
        ctx->pc = 0x38B86Cu;
            // 0x38b86c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x38B870u;
        goto label_38b870;
    }
    ctx->pc = 0x38B868u;
    {
        const bool branch_taken_0x38b868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b868) {
            ctx->pc = 0x38B86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B868u;
            // 0x38b86c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38BB14u;
            goto label_38bb14;
        }
    }
    ctx->pc = 0x38B870u;
label_38b870:
    // 0x38b870: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38b870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38b874:
    // 0x38b874: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x38b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38b878:
    // 0x38b878: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x38b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38b87c:
    // 0x38b87c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x38b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38b880:
    // 0x38b880: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x38b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38b884:
    // 0x38b884: 0x8c520130  lw          $s2, 0x130($v0)
    ctx->pc = 0x38b884u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_38b888:
    // 0x38b888: 0xc04f3fc  jal         func_13CFF0
label_38b88c:
    if (ctx->pc == 0x38B88Cu) {
        ctx->pc = 0x38B88Cu;
            // 0x38b88c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x38B890u;
        goto label_38b890;
    }
    ctx->pc = 0x38B888u;
    SET_GPR_U32(ctx, 31, 0x38B890u);
    ctx->pc = 0x38B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B888u;
            // 0x38b88c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B890u; }
        if (ctx->pc != 0x38B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B890u; }
        if (ctx->pc != 0x38B890u) { return; }
    }
    ctx->pc = 0x38B890u;
label_38b890:
    // 0x38b890: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x38b890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38b894:
    // 0x38b894: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38b894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38b898:
    // 0x38b898: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x38b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_38b89c:
    // 0x38b89c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x38b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_38b8a0:
    // 0x38b8a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38b8a4:
    // 0x38b8a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_38b8a8:
    // 0x38b8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38b8ac:
    // 0x38b8ac: 0xc04cce8  jal         func_1333A0
label_38b8b0:
    if (ctx->pc == 0x38B8B0u) {
        ctx->pc = 0x38B8B0u;
            // 0x38b8b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x38B8B4u;
        goto label_38b8b4;
    }
    ctx->pc = 0x38B8ACu;
    SET_GPR_U32(ctx, 31, 0x38B8B4u);
    ctx->pc = 0x38B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B8ACu;
            // 0x38b8b0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B8B4u; }
        if (ctx->pc != 0x38B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B8B4u; }
        if (ctx->pc != 0x38B8B4u) { return; }
    }
    ctx->pc = 0x38B8B4u;
label_38b8b4:
    // 0x38b8b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x38b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_38b8b8:
    // 0x38b8b8: 0xc04ccf4  jal         func_1333D0
label_38b8bc:
    if (ctx->pc == 0x38B8BCu) {
        ctx->pc = 0x38B8BCu;
            // 0x38b8bc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38B8C0u;
        goto label_38b8c0;
    }
    ctx->pc = 0x38B8B8u;
    SET_GPR_U32(ctx, 31, 0x38B8C0u);
    ctx->pc = 0x38B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B8B8u;
            // 0x38b8bc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B8C0u; }
        if (ctx->pc != 0x38B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B8C0u; }
        if (ctx->pc != 0x38B8C0u) { return; }
    }
    ctx->pc = 0x38B8C0u;
label_38b8c0:
    // 0x38b8c0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x38b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_38b8c4:
    // 0x38b8c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x38b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_38b8c8:
    // 0x38b8c8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x38b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_38b8cc:
    // 0x38b8cc: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x38b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b8d0:
    // 0x38b8d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38b8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38b8d4:
    // 0x38b8d4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x38b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b8d8:
    // 0x38b8d8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x38b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b8dc:
    // 0x38b8dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38b8dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38b8e0:
    // 0x38b8e0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38b8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38b8e4:
    // 0x38b8e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38b8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38b8e8:
    // 0x38b8e8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_38b8ec:
    // 0x38b8ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b8ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38b8f0:
    // 0x38b8f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b8f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38b8f4:
    // 0x38b8f4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x38b8f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38b8f8:
    // 0x38b8f8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x38b8f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_38b8fc:
    // 0x38b8fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x38b8fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_38b900:
    // 0x38b900: 0xc04ce10  jal         func_133840
label_38b904:
    if (ctx->pc == 0x38B904u) {
        ctx->pc = 0x38B904u;
            // 0x38b904: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x38B908u;
        goto label_38b908;
    }
    ctx->pc = 0x38B900u;
    SET_GPR_U32(ctx, 31, 0x38B908u);
    ctx->pc = 0x38B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B900u;
            // 0x38b904: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133840u;
    if (runtime->hasFunction(0x133840u)) {
        auto targetFn = runtime->lookupFunction(0x133840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B908u; }
        if (ctx->pc != 0x38B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133840_0x133840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B908u; }
        if (ctx->pc != 0x38B908u) { return; }
    }
    ctx->pc = 0x38B908u;
label_38b908:
    // 0x38b908: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x38b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_38b90c:
    // 0x38b90c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x38b90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38b910:
    // 0x38b910: 0xc04cd60  jal         func_133580
label_38b914:
    if (ctx->pc == 0x38B914u) {
        ctx->pc = 0x38B914u;
            // 0x38b914: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B918u;
        goto label_38b918;
    }
    ctx->pc = 0x38B910u;
    SET_GPR_U32(ctx, 31, 0x38B918u);
    ctx->pc = 0x38B914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B910u;
            // 0x38b914: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B918u; }
        if (ctx->pc != 0x38B918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B918u; }
        if (ctx->pc != 0x38B918u) { return; }
    }
    ctx->pc = 0x38B918u;
label_38b918:
    // 0x38b918: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x38b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_38b91c:
    // 0x38b91c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x38b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_38b920:
    // 0x38b920: 0xc04cd60  jal         func_133580
label_38b924:
    if (ctx->pc == 0x38B924u) {
        ctx->pc = 0x38B924u;
            // 0x38b924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B928u;
        goto label_38b928;
    }
    ctx->pc = 0x38B920u;
    SET_GPR_U32(ctx, 31, 0x38B928u);
    ctx->pc = 0x38B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B920u;
            // 0x38b924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B928u; }
        if (ctx->pc != 0x38B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B928u; }
        if (ctx->pc != 0x38B928u) { return; }
    }
    ctx->pc = 0x38B928u;
label_38b928:
    // 0x38b928: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38b928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38b92c:
    // 0x38b92c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b930:
    // 0x38b930: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38b930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_38b934:
    // 0x38b934: 0xc07698c  jal         func_1DA630
label_38b938:
    if (ctx->pc == 0x38B938u) {
        ctx->pc = 0x38B938u;
            // 0x38b938: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x38B93Cu;
        goto label_38b93c;
    }
    ctx->pc = 0x38B934u;
    SET_GPR_U32(ctx, 31, 0x38B93Cu);
    ctx->pc = 0x38B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B934u;
            // 0x38b938: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B93Cu; }
        if (ctx->pc != 0x38B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B93Cu; }
        if (ctx->pc != 0x38B93Cu) { return; }
    }
    ctx->pc = 0x38B93Cu;
label_38b93c:
    // 0x38b93c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38b940:
    // 0x38b940: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_38b944:
    if (ctx->pc == 0x38B944u) {
        ctx->pc = 0x38B948u;
        goto label_38b948;
    }
    ctx->pc = 0x38B940u;
    {
        const bool branch_taken_0x38b940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38b940) {
            ctx->pc = 0x38B950u;
            goto label_38b950;
        }
    }
    ctx->pc = 0x38B948u;
label_38b948:
    // 0x38b948: 0x10000031  b           . + 4 + (0x31 << 2)
label_38b94c:
    if (ctx->pc == 0x38B94Cu) {
        ctx->pc = 0x38B94Cu;
            // 0x38b94c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38B950u;
        goto label_38b950;
    }
    ctx->pc = 0x38B948u;
    {
        const bool branch_taken_0x38b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B948u;
            // 0x38b94c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b948) {
            ctx->pc = 0x38BA10u;
            goto label_38ba10;
        }
    }
    ctx->pc = 0x38B950u;
label_38b950:
    // 0x38b950: 0xc0576f4  jal         func_15DBD0
label_38b954:
    if (ctx->pc == 0x38B954u) {
        ctx->pc = 0x38B958u;
        goto label_38b958;
    }
    ctx->pc = 0x38B950u;
    SET_GPR_U32(ctx, 31, 0x38B958u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B958u; }
        if (ctx->pc != 0x38B958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B958u; }
        if (ctx->pc != 0x38B958u) { return; }
    }
    ctx->pc = 0x38B958u;
label_38b958:
    // 0x38b958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b95c:
    // 0x38b95c: 0xc076984  jal         func_1DA610
label_38b960:
    if (ctx->pc == 0x38B960u) {
        ctx->pc = 0x38B960u;
            // 0x38b960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B964u;
        goto label_38b964;
    }
    ctx->pc = 0x38B95Cu;
    SET_GPR_U32(ctx, 31, 0x38B964u);
    ctx->pc = 0x38B960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B95Cu;
            // 0x38b960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B964u; }
        if (ctx->pc != 0x38B964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B964u; }
        if (ctx->pc != 0x38B964u) { return; }
    }
    ctx->pc = 0x38B964u;
label_38b964:
    // 0x38b964: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38b964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b968:
    // 0x38b968: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38b968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38b96c:
    // 0x38b96c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b970:
    // 0x38b970: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x38b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_38b974:
    // 0x38b974: 0xc4421bb0  lwc1        $f2, 0x1BB0($v0)
    ctx->pc = 0x38b974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38b978:
    // 0x38b978: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38b978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b97c:
    // 0x38b97c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b980:
    // 0x38b980: 0xc4411bb8  lwc1        $f1, 0x1BB8($v0)
    ctx->pc = 0x38b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38b984:
    // 0x38b984: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x38b984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_38b988:
    // 0x38b988: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b98c:
    // 0x38b98c: 0xc4401bbc  lwc1        $f0, 0x1BBC($v0)
    ctx->pc = 0x38b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b990:
    // 0x38b990: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x38b990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_38b994:
    // 0x38b994: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38b994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38b998:
    // 0x38b998: 0x8c421bb4  lw          $v0, 0x1BB4($v0)
    ctx->pc = 0x38b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
label_38b99c:
    // 0x38b99c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x38b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_38b9a0:
    // 0x38b9a0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x38b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_38b9a4:
    // 0x38b9a4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x38b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38b9a8:
    // 0x38b9a8: 0xc04cca0  jal         func_133280
label_38b9ac:
    if (ctx->pc == 0x38B9ACu) {
        ctx->pc = 0x38B9ACu;
            // 0x38b9ac: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x38B9B0u;
        goto label_38b9b0;
    }
    ctx->pc = 0x38B9A8u;
    SET_GPR_U32(ctx, 31, 0x38B9B0u);
    ctx->pc = 0x38B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9A8u;
            // 0x38b9ac: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9B0u; }
        if (ctx->pc != 0x38B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9B0u; }
        if (ctx->pc != 0x38B9B0u) { return; }
    }
    ctx->pc = 0x38B9B0u;
label_38b9b0:
    // 0x38b9b0: 0xc076980  jal         func_1DA600
label_38b9b4:
    if (ctx->pc == 0x38B9B4u) {
        ctx->pc = 0x38B9B4u;
            // 0x38b9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B9B8u;
        goto label_38b9b8;
    }
    ctx->pc = 0x38B9B0u;
    SET_GPR_U32(ctx, 31, 0x38B9B8u);
    ctx->pc = 0x38B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9B0u;
            // 0x38b9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9B8u; }
        if (ctx->pc != 0x38B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9B8u; }
        if (ctx->pc != 0x38B9B8u) { return; }
    }
    ctx->pc = 0x38B9B8u;
label_38b9b8:
    // 0x38b9b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38b9bc:
    // 0x38b9bc: 0xc04cc34  jal         func_1330D0
label_38b9c0:
    if (ctx->pc == 0x38B9C0u) {
        ctx->pc = 0x38B9C0u;
            // 0x38b9c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B9C4u;
        goto label_38b9c4;
    }
    ctx->pc = 0x38B9BCu;
    SET_GPR_U32(ctx, 31, 0x38B9C4u);
    ctx->pc = 0x38B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9BCu;
            // 0x38b9c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9C4u; }
        if (ctx->pc != 0x38B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9C4u; }
        if (ctx->pc != 0x38B9C4u) { return; }
    }
    ctx->pc = 0x38B9C4u;
label_38b9c4:
    // 0x38b9c4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38b9c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38b9c8:
    // 0x38b9c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_38b9cc:
    if (ctx->pc == 0x38B9CCu) {
        ctx->pc = 0x38B9CCu;
            // 0x38b9cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38B9D0u;
        goto label_38b9d0;
    }
    ctx->pc = 0x38B9C8u;
    {
        const bool branch_taken_0x38b9c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b9c8) {
            ctx->pc = 0x38B9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9C8u;
            // 0x38b9cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38B9D8u;
            goto label_38b9d8;
        }
    }
    ctx->pc = 0x38B9D0u;
label_38b9d0:
    // 0x38b9d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_38b9d4:
    if (ctx->pc == 0x38B9D4u) {
        ctx->pc = 0x38B9D4u;
            // 0x38b9d4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38B9D8u;
        goto label_38b9d8;
    }
    ctx->pc = 0x38B9D0u;
    {
        const bool branch_taken_0x38b9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9D0u;
            // 0x38b9d4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9d0) {
            ctx->pc = 0x38BA10u;
            goto label_38ba10;
        }
    }
    ctx->pc = 0x38B9D8u;
label_38b9d8:
    // 0x38b9d8: 0xc07697c  jal         func_1DA5F0
label_38b9dc:
    if (ctx->pc == 0x38B9DCu) {
        ctx->pc = 0x38B9E0u;
        goto label_38b9e0;
    }
    ctx->pc = 0x38B9D8u;
    SET_GPR_U32(ctx, 31, 0x38B9E0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9E0u; }
        if (ctx->pc != 0x38B9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9E0u; }
        if (ctx->pc != 0x38B9E0u) { return; }
    }
    ctx->pc = 0x38B9E0u;
label_38b9e0:
    // 0x38b9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b9e4:
    // 0x38b9e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38b9e8:
    // 0x38b9e8: 0xc04cd60  jal         func_133580
label_38b9ec:
    if (ctx->pc == 0x38B9ECu) {
        ctx->pc = 0x38B9ECu;
            // 0x38b9ec: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x38B9F0u;
        goto label_38b9f0;
    }
    ctx->pc = 0x38B9E8u;
    SET_GPR_U32(ctx, 31, 0x38B9F0u);
    ctx->pc = 0x38B9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9E8u;
            // 0x38b9ec: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9F0u; }
        if (ctx->pc != 0x38B9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9F0u; }
        if (ctx->pc != 0x38B9F0u) { return; }
    }
    ctx->pc = 0x38B9F0u;
label_38b9f0:
    // 0x38b9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b9f4:
    // 0x38b9f4: 0xc04c650  jal         func_131940
label_38b9f8:
    if (ctx->pc == 0x38B9F8u) {
        ctx->pc = 0x38B9F8u;
            // 0x38b9f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38B9FCu;
        goto label_38b9fc;
    }
    ctx->pc = 0x38B9F4u;
    SET_GPR_U32(ctx, 31, 0x38B9FCu);
    ctx->pc = 0x38B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38B9F4u;
            // 0x38b9f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9FCu; }
        if (ctx->pc != 0x38B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38B9FCu; }
        if (ctx->pc != 0x38B9FCu) { return; }
    }
    ctx->pc = 0x38B9FCu;
label_38b9fc:
    // 0x38b9fc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x38b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_38ba00:
    // 0x38ba00: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38ba04:
    // 0x38ba04: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x38ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_38ba08:
    // 0x38ba08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38ba0c:
    // 0x38ba0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38ba10:
    // 0x38ba10: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38ba10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38ba14:
    // 0x38ba14: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_38ba18:
    if (ctx->pc == 0x38BA18u) {
        ctx->pc = 0x38BA1Cu;
        goto label_38ba1c;
    }
    ctx->pc = 0x38BA14u;
    {
        const bool branch_taken_0x38ba14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ba14) {
            ctx->pc = 0x38BB10u;
            goto label_38bb10;
        }
    }
    ctx->pc = 0x38BA1Cu;
label_38ba1c:
    // 0x38ba1c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38ba20:
    // 0x38ba20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38ba24:
    // 0x38ba24: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x38ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38ba28:
    // 0x38ba28: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x38ba28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38ba2c:
    // 0x38ba2c: 0x8c63e360  lw          $v1, -0x1CA0($v1)
    ctx->pc = 0x38ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_38ba30:
    // 0x38ba30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ba34:
    // 0x38ba34: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x38ba34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_38ba38:
    // 0x38ba38: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x38ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_38ba3c:
    // 0x38ba3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x38ba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_38ba40:
    // 0x38ba40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ba44:
    // 0x38ba44: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x38ba44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38ba48:
    // 0x38ba48: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x38ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38ba4c:
    // 0x38ba4c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x38ba4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38ba50:
    // 0x38ba50: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x38ba50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_38ba54:
    // 0x38ba54: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x38ba54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_38ba58:
    // 0x38ba58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ba5c:
    // 0x38ba5c: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x38ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_38ba60:
    // 0x38ba60: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x38ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_38ba64:
    // 0x38ba64: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x38ba64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38ba68:
    // 0x38ba68: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38ba6c:
    // 0x38ba6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38ba70:
    // 0x38ba70: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x38ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_38ba74:
    // 0x38ba74: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x38ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_38ba78:
    // 0x38ba78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ba7c:
    // 0x38ba7c: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x38ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_38ba80:
    // 0x38ba80: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_38ba84:
    // 0x38ba84: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x38ba84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_38ba88:
    // 0x38ba88: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x38ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38ba8c:
    // 0x38ba8c: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x38ba8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38ba90:
    // 0x38ba90: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x38ba90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_38ba94:
    // 0x38ba94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38ba98:
    // 0x38ba98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38ba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ba9c:
    // 0x38ba9c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x38ba9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_38baa0:
    // 0x38baa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38baa4:
    // 0x38baa4: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x38baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_38baa8:
    // 0x38baa8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x38baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38baac:
    // 0x38baac: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x38baacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38bab0:
    // 0x38bab0: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x38bab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_38bab4:
    // 0x38bab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38bab8:
    // 0x38bab8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x38bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_38babc:
    // 0x38babc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x38babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_38bac0:
    // 0x38bac0: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x38bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_38bac4:
    // 0x38bac4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x38bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38bac8:
    // 0x38bac8: 0xc04e4a4  jal         func_139290
label_38bacc:
    if (ctx->pc == 0x38BACCu) {
        ctx->pc = 0x38BACCu;
            // 0x38bacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BAD0u;
        goto label_38bad0;
    }
    ctx->pc = 0x38BAC8u;
    SET_GPR_U32(ctx, 31, 0x38BAD0u);
    ctx->pc = 0x38BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BAC8u;
            // 0x38bacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BAD0u; }
        if (ctx->pc != 0x38BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BAD0u; }
        if (ctx->pc != 0x38BAD0u) { return; }
    }
    ctx->pc = 0x38BAD0u;
label_38bad0:
    // 0x38bad0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38bad4:
    // 0x38bad4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x38bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_38bad8:
    // 0x38bad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38badc:
    // 0x38badc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38badcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bae0:
    // 0x38bae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38bae4:
    // 0x38bae4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38bae8:
    // 0x38bae8: 0xc04cd60  jal         func_133580
label_38baec:
    if (ctx->pc == 0x38BAECu) {
        ctx->pc = 0x38BAECu;
            // 0x38baec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x38BAF0u;
        goto label_38baf0;
    }
    ctx->pc = 0x38BAE8u;
    SET_GPR_U32(ctx, 31, 0x38BAF0u);
    ctx->pc = 0x38BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BAE8u;
            // 0x38baec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BAF0u; }
        if (ctx->pc != 0x38BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BAF0u; }
        if (ctx->pc != 0x38BAF0u) { return; }
    }
    ctx->pc = 0x38BAF0u;
label_38baf0:
    // 0x38baf0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38baf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38baf4:
    // 0x38baf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38baf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38baf8:
    // 0x38baf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38baf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38bafc:
    // 0x38bafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38bafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bb00:
    // 0x38bb00: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x38bb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_38bb04:
    // 0x38bb04: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38bb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38bb08:
    // 0x38bb08: 0xc04cfcc  jal         func_133F30
label_38bb0c:
    if (ctx->pc == 0x38BB0Cu) {
        ctx->pc = 0x38BB0Cu;
            // 0x38bb0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BB10u;
        goto label_38bb10;
    }
    ctx->pc = 0x38BB08u;
    SET_GPR_U32(ctx, 31, 0x38BB10u);
    ctx->pc = 0x38BB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BB08u;
            // 0x38bb0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BB10u; }
        if (ctx->pc != 0x38BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BB10u; }
        if (ctx->pc != 0x38BB10u) { return; }
    }
    ctx->pc = 0x38BB10u;
label_38bb10:
    // 0x38bb10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38bb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38bb14:
    // 0x38bb14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38bb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38bb18:
    // 0x38bb18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38bb18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38bb1c:
    // 0x38bb1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38bb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38bb20:
    // 0x38bb20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38bb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38bb24:
    // 0x38bb24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38bb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38bb28:
    // 0x38bb28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38bb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38bb2c:
    // 0x38bb2c: 0x3e00008  jr          $ra
label_38bb30:
    if (ctx->pc == 0x38BB30u) {
        ctx->pc = 0x38BB30u;
            // 0x38bb30: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x38BB34u;
        goto label_38bb34;
    }
    ctx->pc = 0x38BB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BB2Cu;
            // 0x38bb30: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38BB34u;
label_38bb34:
    // 0x38bb34: 0x0  nop
    ctx->pc = 0x38bb34u;
    // NOP
label_38bb38:
    // 0x38bb38: 0x0  nop
    ctx->pc = 0x38bb38u;
    // NOP
label_38bb3c:
    // 0x38bb3c: 0x0  nop
    ctx->pc = 0x38bb3cu;
    // NOP
label_38bb40:
    // 0x38bb40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x38bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_38bb44:
    // 0x38bb44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38bb48:
    // 0x38bb48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38bb4c:
    // 0x38bb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38bb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38bb50:
    // 0x38bb50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38bb54:
    // 0x38bb54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38bb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38bb58:
    // 0x38bb58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38bb5c:
    // 0x38bb5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38bb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38bb60:
    // 0x38bb60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38bb64:
    // 0x38bb64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38bb68:
    // 0x38bb68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38bb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bb6c:
    // 0x38bb6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38bb6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38bb70:
    // 0x38bb70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38bb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38bb74:
    // 0x38bb74: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38bb78:
    // 0x38bb78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38bb78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38bb7c:
    // 0x38bb7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38bb80:
    if (ctx->pc == 0x38BB80u) {
        ctx->pc = 0x38BB80u;
            // 0x38bb80: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38BB84u;
        goto label_38bb84;
    }
    ctx->pc = 0x38BB7Cu;
    {
        const bool branch_taken_0x38bb7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BB7Cu;
            // 0x38bb80: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb7c) {
            ctx->pc = 0x38BB88u;
            goto label_38bb88;
        }
    }
    ctx->pc = 0x38BB84u;
label_38bb84:
    // 0x38bb84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38bb84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38bb88:
    // 0x38bb88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38bb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38bb8c:
    // 0x38bb8c: 0x5060009a  beql        $v1, $zero, . + 4 + (0x9A << 2)
label_38bb90:
    if (ctx->pc == 0x38BB90u) {
        ctx->pc = 0x38BB90u;
            // 0x38bb90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x38BB94u;
        goto label_38bb94;
    }
    ctx->pc = 0x38BB8Cu;
    {
        const bool branch_taken_0x38bb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bb8c) {
            ctx->pc = 0x38BB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38BB8Cu;
            // 0x38bb90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38BDF8u;
            goto label_38bdf8;
        }
    }
    ctx->pc = 0x38BB94u;
label_38bb94:
    // 0x38bb94: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38bb98:
    // 0x38bb98: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x38bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_38bb9c:
    // 0x38bb9c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x38bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38bba0:
    // 0x38bba0: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x38bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38bba4:
    // 0x38bba4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x38bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38bba8:
    // 0x38bba8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x38bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38bbac:
    // 0x38bbac: 0x3462f983  ori         $v0, $v1, 0xF983
    ctx->pc = 0x38bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_38bbb0:
    // 0x38bbb0: 0x8cb20130  lw          $s2, 0x130($a1)
    ctx->pc = 0x38bbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_38bbb4:
    // 0x38bbb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38bbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38bbb8:
    // 0x38bbb8: 0x0  nop
    ctx->pc = 0x38bbb8u;
    // NOP
label_38bbbc:
    // 0x38bbbc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38bbbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38bbc0:
    // 0x38bbc0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38bbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38bbc4:
    // 0x38bbc4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38bbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38bbc8:
    // 0x38bbc8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38bbc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_38bbcc:
    // 0x38bbcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38bbccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38bbd0:
    // 0x38bbd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38bbd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38bbd4:
    // 0x38bbd4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x38bbd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38bbd8:
    // 0x38bbd8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x38bbd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38bbdc:
    // 0x38bbdc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x38bbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_38bbe0:
    // 0x38bbe0: 0xc04f308  jal         func_13CC20
label_38bbe4:
    if (ctx->pc == 0x38BBE4u) {
        ctx->pc = 0x38BBE4u;
            // 0x38bbe4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38BBE8u;
        goto label_38bbe8;
    }
    ctx->pc = 0x38BBE0u;
    SET_GPR_U32(ctx, 31, 0x38BBE8u);
    ctx->pc = 0x38BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BBE0u;
            // 0x38bbe4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BBE8u; }
        if (ctx->pc != 0x38BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BBE8u; }
        if (ctx->pc != 0x38BBE8u) { return; }
    }
    ctx->pc = 0x38BBE8u;
label_38bbe8:
    // 0x38bbe8: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x38bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38bbec:
    // 0x38bbec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bbf0:
    // 0x38bbf0: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x38bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_38bbf4:
    // 0x38bbf4: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x38bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38bbf8:
    // 0x38bbf8: 0xc04ce50  jal         func_133940
label_38bbfc:
    if (ctx->pc == 0x38BBFCu) {
        ctx->pc = 0x38BBFCu;
            // 0x38bbfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BC00u;
        goto label_38bc00;
    }
    ctx->pc = 0x38BBF8u;
    SET_GPR_U32(ctx, 31, 0x38BC00u);
    ctx->pc = 0x38BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BBF8u;
            // 0x38bbfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC00u; }
        if (ctx->pc != 0x38BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC00u; }
        if (ctx->pc != 0x38BC00u) { return; }
    }
    ctx->pc = 0x38BC00u;
label_38bc00:
    // 0x38bc00: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bc04:
    // 0x38bc04: 0xc04ce80  jal         func_133A00
label_38bc08:
    if (ctx->pc == 0x38BC08u) {
        ctx->pc = 0x38BC08u;
            // 0x38bc08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BC0Cu;
        goto label_38bc0c;
    }
    ctx->pc = 0x38BC04u;
    SET_GPR_U32(ctx, 31, 0x38BC0Cu);
    ctx->pc = 0x38BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC04u;
            // 0x38bc08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC0Cu; }
        if (ctx->pc != 0x38BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC0Cu; }
        if (ctx->pc != 0x38BC0Cu) { return; }
    }
    ctx->pc = 0x38BC0Cu;
label_38bc0c:
    // 0x38bc0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38bc10:
    // 0x38bc10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38bc14:
    // 0x38bc14: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_38bc18:
    // 0x38bc18: 0xc07698c  jal         func_1DA630
label_38bc1c:
    if (ctx->pc == 0x38BC1Cu) {
        ctx->pc = 0x38BC1Cu;
            // 0x38bc1c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x38BC20u;
        goto label_38bc20;
    }
    ctx->pc = 0x38BC18u;
    SET_GPR_U32(ctx, 31, 0x38BC20u);
    ctx->pc = 0x38BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC18u;
            // 0x38bc1c: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC20u; }
        if (ctx->pc != 0x38BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC20u; }
        if (ctx->pc != 0x38BC20u) { return; }
    }
    ctx->pc = 0x38BC20u;
label_38bc20:
    // 0x38bc20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38bc24:
    // 0x38bc24: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_38bc28:
    if (ctx->pc == 0x38BC28u) {
        ctx->pc = 0x38BC2Cu;
        goto label_38bc2c;
    }
    ctx->pc = 0x38BC24u;
    {
        const bool branch_taken_0x38bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38bc24) {
            ctx->pc = 0x38BC34u;
            goto label_38bc34;
        }
    }
    ctx->pc = 0x38BC2Cu;
label_38bc2c:
    // 0x38bc2c: 0x10000031  b           . + 4 + (0x31 << 2)
label_38bc30:
    if (ctx->pc == 0x38BC30u) {
        ctx->pc = 0x38BC30u;
            // 0x38bc30: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38BC34u;
        goto label_38bc34;
    }
    ctx->pc = 0x38BC2Cu;
    {
        const bool branch_taken_0x38bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC2Cu;
            // 0x38bc30: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc2c) {
            ctx->pc = 0x38BCF4u;
            goto label_38bcf4;
        }
    }
    ctx->pc = 0x38BC34u;
label_38bc34:
    // 0x38bc34: 0xc0576f4  jal         func_15DBD0
label_38bc38:
    if (ctx->pc == 0x38BC38u) {
        ctx->pc = 0x38BC3Cu;
        goto label_38bc3c;
    }
    ctx->pc = 0x38BC34u;
    SET_GPR_U32(ctx, 31, 0x38BC3Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC3Cu; }
        if (ctx->pc != 0x38BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC3Cu; }
        if (ctx->pc != 0x38BC3Cu) { return; }
    }
    ctx->pc = 0x38BC3Cu;
label_38bc3c:
    // 0x38bc3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38bc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bc40:
    // 0x38bc40: 0xc076984  jal         func_1DA610
label_38bc44:
    if (ctx->pc == 0x38BC44u) {
        ctx->pc = 0x38BC44u;
            // 0x38bc44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BC48u;
        goto label_38bc48;
    }
    ctx->pc = 0x38BC40u;
    SET_GPR_U32(ctx, 31, 0x38BC48u);
    ctx->pc = 0x38BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC40u;
            // 0x38bc44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC48u; }
        if (ctx->pc != 0x38BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC48u; }
        if (ctx->pc != 0x38BC48u) { return; }
    }
    ctx->pc = 0x38BC48u;
label_38bc48:
    // 0x38bc48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38bc48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bc4c:
    // 0x38bc4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38bc50:
    // 0x38bc50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bc54:
    // 0x38bc54: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x38bc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bc58:
    // 0x38bc58: 0xc4421bb0  lwc1        $f2, 0x1BB0($v0)
    ctx->pc = 0x38bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38bc5c:
    // 0x38bc5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38bc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bc60:
    // 0x38bc60: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bc64:
    // 0x38bc64: 0xc4411bb8  lwc1        $f1, 0x1BB8($v0)
    ctx->pc = 0x38bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38bc68:
    // 0x38bc68: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x38bc68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_38bc6c:
    // 0x38bc6c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bc70:
    // 0x38bc70: 0xc4401bbc  lwc1        $f0, 0x1BBC($v0)
    ctx->pc = 0x38bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38bc74:
    // 0x38bc74: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x38bc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_38bc78:
    // 0x38bc78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bc7c:
    // 0x38bc7c: 0x8c421bb4  lw          $v0, 0x1BB4($v0)
    ctx->pc = 0x38bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
label_38bc80:
    // 0x38bc80: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x38bc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_38bc84:
    // 0x38bc84: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x38bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_38bc88:
    // 0x38bc88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x38bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38bc8c:
    // 0x38bc8c: 0xc04cca0  jal         func_133280
label_38bc90:
    if (ctx->pc == 0x38BC90u) {
        ctx->pc = 0x38BC90u;
            // 0x38bc90: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x38BC94u;
        goto label_38bc94;
    }
    ctx->pc = 0x38BC8Cu;
    SET_GPR_U32(ctx, 31, 0x38BC94u);
    ctx->pc = 0x38BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC8Cu;
            // 0x38bc90: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC94u; }
        if (ctx->pc != 0x38BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC94u; }
        if (ctx->pc != 0x38BC94u) { return; }
    }
    ctx->pc = 0x38BC94u;
label_38bc94:
    // 0x38bc94: 0xc076980  jal         func_1DA600
label_38bc98:
    if (ctx->pc == 0x38BC98u) {
        ctx->pc = 0x38BC98u;
            // 0x38bc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BC9Cu;
        goto label_38bc9c;
    }
    ctx->pc = 0x38BC94u;
    SET_GPR_U32(ctx, 31, 0x38BC9Cu);
    ctx->pc = 0x38BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BC94u;
            // 0x38bc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC9Cu; }
        if (ctx->pc != 0x38BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BC9Cu; }
        if (ctx->pc != 0x38BC9Cu) { return; }
    }
    ctx->pc = 0x38BC9Cu;
label_38bc9c:
    // 0x38bc9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38bca0:
    // 0x38bca0: 0xc04cc34  jal         func_1330D0
label_38bca4:
    if (ctx->pc == 0x38BCA4u) {
        ctx->pc = 0x38BCA4u;
            // 0x38bca4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BCA8u;
        goto label_38bca8;
    }
    ctx->pc = 0x38BCA0u;
    SET_GPR_U32(ctx, 31, 0x38BCA8u);
    ctx->pc = 0x38BCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BCA0u;
            // 0x38bca4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCA8u; }
        if (ctx->pc != 0x38BCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCA8u; }
        if (ctx->pc != 0x38BCA8u) { return; }
    }
    ctx->pc = 0x38BCA8u;
label_38bca8:
    // 0x38bca8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38bca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38bcac:
    // 0x38bcac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_38bcb0:
    if (ctx->pc == 0x38BCB0u) {
        ctx->pc = 0x38BCB0u;
            // 0x38bcb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BCB4u;
        goto label_38bcb4;
    }
    ctx->pc = 0x38BCACu;
    {
        const bool branch_taken_0x38bcac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38bcac) {
            ctx->pc = 0x38BCB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38BCACu;
            // 0x38bcb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38BCBCu;
            goto label_38bcbc;
        }
    }
    ctx->pc = 0x38BCB4u;
label_38bcb4:
    // 0x38bcb4: 0x1000000f  b           . + 4 + (0xF << 2)
label_38bcb8:
    if (ctx->pc == 0x38BCB8u) {
        ctx->pc = 0x38BCB8u;
            // 0x38bcb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38BCBCu;
        goto label_38bcbc;
    }
    ctx->pc = 0x38BCB4u;
    {
        const bool branch_taken_0x38bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BCB4u;
            // 0x38bcb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcb4) {
            ctx->pc = 0x38BCF4u;
            goto label_38bcf4;
        }
    }
    ctx->pc = 0x38BCBCu;
label_38bcbc:
    // 0x38bcbc: 0xc07697c  jal         func_1DA5F0
label_38bcc0:
    if (ctx->pc == 0x38BCC0u) {
        ctx->pc = 0x38BCC4u;
        goto label_38bcc4;
    }
    ctx->pc = 0x38BCBCu;
    SET_GPR_U32(ctx, 31, 0x38BCC4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCC4u; }
        if (ctx->pc != 0x38BCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCC4u; }
        if (ctx->pc != 0x38BCC4u) { return; }
    }
    ctx->pc = 0x38BCC4u;
label_38bcc4:
    // 0x38bcc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bcc8:
    // 0x38bcc8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38bccc:
    // 0x38bccc: 0xc04cd60  jal         func_133580
label_38bcd0:
    if (ctx->pc == 0x38BCD0u) {
        ctx->pc = 0x38BCD0u;
            // 0x38bcd0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38BCD4u;
        goto label_38bcd4;
    }
    ctx->pc = 0x38BCCCu;
    SET_GPR_U32(ctx, 31, 0x38BCD4u);
    ctx->pc = 0x38BCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BCCCu;
            // 0x38bcd0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCD4u; }
        if (ctx->pc != 0x38BCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCD4u; }
        if (ctx->pc != 0x38BCD4u) { return; }
    }
    ctx->pc = 0x38BCD4u;
label_38bcd4:
    // 0x38bcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bcd8:
    // 0x38bcd8: 0xc04c650  jal         func_131940
label_38bcdc:
    if (ctx->pc == 0x38BCDCu) {
        ctx->pc = 0x38BCDCu;
            // 0x38bcdc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38BCE0u;
        goto label_38bce0;
    }
    ctx->pc = 0x38BCD8u;
    SET_GPR_U32(ctx, 31, 0x38BCE0u);
    ctx->pc = 0x38BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BCD8u;
            // 0x38bcdc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCE0u; }
        if (ctx->pc != 0x38BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BCE0u; }
        if (ctx->pc != 0x38BCE0u) { return; }
    }
    ctx->pc = 0x38BCE0u;
label_38bce0:
    // 0x38bce0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x38bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_38bce4:
    // 0x38bce4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38bce8:
    // 0x38bce8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x38bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_38bcec:
    // 0x38bcec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38bcf0:
    // 0x38bcf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38bcf4:
    // 0x38bcf4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38bcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38bcf8:
    // 0x38bcf8: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_38bcfc:
    if (ctx->pc == 0x38BCFCu) {
        ctx->pc = 0x38BD00u;
        goto label_38bd00;
    }
    ctx->pc = 0x38BCF8u;
    {
        const bool branch_taken_0x38bcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bcf8) {
            ctx->pc = 0x38BDF4u;
            goto label_38bdf4;
        }
    }
    ctx->pc = 0x38BD00u;
label_38bd00:
    // 0x38bd00: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38bd04:
    // 0x38bd04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38bd08:
    // 0x38bd08: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x38bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38bd0c:
    // 0x38bd0c: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x38bd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38bd10:
    // 0x38bd10: 0x8c63e360  lw          $v1, -0x1CA0($v1)
    ctx->pc = 0x38bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_38bd14:
    // 0x38bd14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bd18:
    // 0x38bd18: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x38bd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_38bd1c:
    // 0x38bd1c: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x38bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_38bd20:
    // 0x38bd20: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x38bd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_38bd24:
    // 0x38bd24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bd28:
    // 0x38bd28: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x38bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38bd2c:
    // 0x38bd2c: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x38bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38bd30:
    // 0x38bd30: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x38bd30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38bd34:
    // 0x38bd34: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x38bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_38bd38:
    // 0x38bd38: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x38bd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_38bd3c:
    // 0x38bd3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bd40:
    // 0x38bd40: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x38bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_38bd44:
    // 0x38bd44: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x38bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_38bd48:
    // 0x38bd48: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x38bd48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38bd4c:
    // 0x38bd4c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38bd50:
    // 0x38bd50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38bd54:
    // 0x38bd54: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x38bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_38bd58:
    // 0x38bd58: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x38bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_38bd5c:
    // 0x38bd5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bd60:
    // 0x38bd60: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x38bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_38bd64:
    // 0x38bd64: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_38bd68:
    // 0x38bd68: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x38bd68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_38bd6c:
    // 0x38bd6c: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x38bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38bd70:
    // 0x38bd70: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x38bd70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38bd74:
    // 0x38bd74: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x38bd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_38bd78:
    // 0x38bd78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38bd7c:
    // 0x38bd7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38bd80:
    // 0x38bd80: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x38bd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_38bd84:
    // 0x38bd84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bd88:
    // 0x38bd88: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x38bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_38bd8c:
    // 0x38bd8c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x38bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38bd90:
    // 0x38bd90: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x38bd90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38bd94:
    // 0x38bd94: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x38bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_38bd98:
    // 0x38bd98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38bd9c:
    // 0x38bd9c: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x38bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_38bda0:
    // 0x38bda0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x38bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_38bda4:
    // 0x38bda4: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x38bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_38bda8:
    // 0x38bda8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x38bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38bdac:
    // 0x38bdac: 0xc04e4a4  jal         func_139290
label_38bdb0:
    if (ctx->pc == 0x38BDB0u) {
        ctx->pc = 0x38BDB0u;
            // 0x38bdb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BDB4u;
        goto label_38bdb4;
    }
    ctx->pc = 0x38BDACu;
    SET_GPR_U32(ctx, 31, 0x38BDB4u);
    ctx->pc = 0x38BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BDACu;
            // 0x38bdb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDB4u; }
        if (ctx->pc != 0x38BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDB4u; }
        if (ctx->pc != 0x38BDB4u) { return; }
    }
    ctx->pc = 0x38BDB4u;
label_38bdb4:
    // 0x38bdb4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38bdb8:
    // 0x38bdb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bdbc:
    // 0x38bdbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38bdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38bdc0:
    // 0x38bdc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38bdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bdc4:
    // 0x38bdc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38bdc8:
    // 0x38bdc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38bdcc:
    // 0x38bdcc: 0xc04cd60  jal         func_133580
label_38bdd0:
    if (ctx->pc == 0x38BDD0u) {
        ctx->pc = 0x38BDD0u;
            // 0x38bdd0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x38BDD4u;
        goto label_38bdd4;
    }
    ctx->pc = 0x38BDCCu;
    SET_GPR_U32(ctx, 31, 0x38BDD4u);
    ctx->pc = 0x38BDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BDCCu;
            // 0x38bdd0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDD4u; }
        if (ctx->pc != 0x38BDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDD4u; }
        if (ctx->pc != 0x38BDD4u) { return; }
    }
    ctx->pc = 0x38BDD4u;
label_38bdd4:
    // 0x38bdd4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38bdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38bdd8:
    // 0x38bdd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38bddc:
    // 0x38bddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38bddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38bde0:
    // 0x38bde0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38bde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bde4:
    // 0x38bde4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x38bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bde8:
    // 0x38bde8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38bde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38bdec:
    // 0x38bdec: 0xc04cfcc  jal         func_133F30
label_38bdf0:
    if (ctx->pc == 0x38BDF0u) {
        ctx->pc = 0x38BDF0u;
            // 0x38bdf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BDF4u;
        goto label_38bdf4;
    }
    ctx->pc = 0x38BDECu;
    SET_GPR_U32(ctx, 31, 0x38BDF4u);
    ctx->pc = 0x38BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BDECu;
            // 0x38bdf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDF4u; }
        if (ctx->pc != 0x38BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BDF4u; }
        if (ctx->pc != 0x38BDF4u) { return; }
    }
    ctx->pc = 0x38BDF4u;
label_38bdf4:
    // 0x38bdf4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38bdf8:
    // 0x38bdf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38bdfc:
    // 0x38bdfc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38bdfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38be00:
    // 0x38be00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38be00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38be04:
    // 0x38be04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38be04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38be08:
    // 0x38be08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38be08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38be0c:
    // 0x38be0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38be0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38be10:
    // 0x38be10: 0x3e00008  jr          $ra
label_38be14:
    if (ctx->pc == 0x38BE14u) {
        ctx->pc = 0x38BE14u;
            // 0x38be14: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x38BE18u;
        goto label_38be18;
    }
    ctx->pc = 0x38BE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BE10u;
            // 0x38be14: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38BE18u;
label_38be18:
    // 0x38be18: 0x0  nop
    ctx->pc = 0x38be18u;
    // NOP
label_38be1c:
    // 0x38be1c: 0x0  nop
    ctx->pc = 0x38be1cu;
    // NOP
label_38be20:
    // 0x38be20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x38be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_38be24:
    // 0x38be24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38be28:
    // 0x38be28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_38be2c:
    // 0x38be2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38be2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38be30:
    // 0x38be30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38be34:
    // 0x38be34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38be38:
    // 0x38be38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38be3c:
    // 0x38be3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38be3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38be40:
    // 0x38be40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38be40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38be44:
    // 0x38be44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38be44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38be48:
    // 0x38be48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38be48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38be4c:
    // 0x38be4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38be4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38be50:
    // 0x38be50: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38be54:
    // 0x38be54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38be54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38be58:
    // 0x38be58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38be5c:
    if (ctx->pc == 0x38BE5Cu) {
        ctx->pc = 0x38BE5Cu;
            // 0x38be5c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38BE60u;
        goto label_38be60;
    }
    ctx->pc = 0x38BE58u;
    {
        const bool branch_taken_0x38be58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BE58u;
            // 0x38be5c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be58) {
            ctx->pc = 0x38BE64u;
            goto label_38be64;
        }
    }
    ctx->pc = 0x38BE60u;
label_38be60:
    // 0x38be60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38be60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38be64:
    // 0x38be64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38be68:
    // 0x38be68: 0x50600094  beql        $v1, $zero, . + 4 + (0x94 << 2)
label_38be6c:
    if (ctx->pc == 0x38BE6Cu) {
        ctx->pc = 0x38BE6Cu;
            // 0x38be6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x38BE70u;
        goto label_38be70;
    }
    ctx->pc = 0x38BE68u;
    {
        const bool branch_taken_0x38be68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38be68) {
            ctx->pc = 0x38BE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38BE68u;
            // 0x38be6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C0BCu;
            goto label_38c0bc;
        }
    }
    ctx->pc = 0x38BE70u;
label_38be70:
    // 0x38be70: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38be70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38be74:
    // 0x38be74: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x38be74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_38be78:
    // 0x38be78: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x38be78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38be7c:
    // 0x38be7c: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x38be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38be80:
    // 0x38be80: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x38be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38be84:
    // 0x38be84: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x38be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38be88:
    // 0x38be88: 0x3462f983  ori         $v0, $v1, 0xF983
    ctx->pc = 0x38be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_38be8c:
    // 0x38be8c: 0x8cb20130  lw          $s2, 0x130($a1)
    ctx->pc = 0x38be8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_38be90:
    // 0x38be90: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38be90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38be94:
    // 0x38be94: 0x0  nop
    ctx->pc = 0x38be94u;
    // NOP
label_38be98:
    // 0x38be98: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38be98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38be9c:
    // 0x38be9c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38be9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38bea0:
    // 0x38bea0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38bea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38bea4:
    // 0x38bea4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38bea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_38bea8:
    // 0x38bea8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38bea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38beac:
    // 0x38beac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38beacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38beb0:
    // 0x38beb0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x38beb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38beb4:
    // 0x38beb4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x38beb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38beb8:
    // 0x38beb8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x38beb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_38bebc:
    // 0x38bebc: 0xc04f308  jal         func_13CC20
label_38bec0:
    if (ctx->pc == 0x38BEC0u) {
        ctx->pc = 0x38BEC0u;
            // 0x38bec0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38BEC4u;
        goto label_38bec4;
    }
    ctx->pc = 0x38BEBCu;
    SET_GPR_U32(ctx, 31, 0x38BEC4u);
    ctx->pc = 0x38BEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BEBCu;
            // 0x38bec0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BEC4u; }
        if (ctx->pc != 0x38BEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BEC4u; }
        if (ctx->pc != 0x38BEC4u) { return; }
    }
    ctx->pc = 0x38BEC4u;
label_38bec4:
    // 0x38bec4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bec8:
    // 0x38bec8: 0xc04ce80  jal         func_133A00
label_38becc:
    if (ctx->pc == 0x38BECCu) {
        ctx->pc = 0x38BECCu;
            // 0x38becc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BED0u;
        goto label_38bed0;
    }
    ctx->pc = 0x38BEC8u;
    SET_GPR_U32(ctx, 31, 0x38BED0u);
    ctx->pc = 0x38BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BEC8u;
            // 0x38becc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BED0u; }
        if (ctx->pc != 0x38BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BED0u; }
        if (ctx->pc != 0x38BED0u) { return; }
    }
    ctx->pc = 0x38BED0u;
label_38bed0:
    // 0x38bed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38bed4:
    // 0x38bed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38bed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38bed8:
    // 0x38bed8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x38bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_38bedc:
    // 0x38bedc: 0xc07698c  jal         func_1DA630
label_38bee0:
    if (ctx->pc == 0x38BEE0u) {
        ctx->pc = 0x38BEE0u;
            // 0x38bee0: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x38BEE4u;
        goto label_38bee4;
    }
    ctx->pc = 0x38BEDCu;
    SET_GPR_U32(ctx, 31, 0x38BEE4u);
    ctx->pc = 0x38BEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BEDCu;
            // 0x38bee0: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BEE4u; }
        if (ctx->pc != 0x38BEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BEE4u; }
        if (ctx->pc != 0x38BEE4u) { return; }
    }
    ctx->pc = 0x38BEE4u;
label_38bee4:
    // 0x38bee4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38bee8:
    // 0x38bee8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_38beec:
    if (ctx->pc == 0x38BEECu) {
        ctx->pc = 0x38BEF0u;
        goto label_38bef0;
    }
    ctx->pc = 0x38BEE8u;
    {
        const bool branch_taken_0x38bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38bee8) {
            ctx->pc = 0x38BEF8u;
            goto label_38bef8;
        }
    }
    ctx->pc = 0x38BEF0u;
label_38bef0:
    // 0x38bef0: 0x10000031  b           . + 4 + (0x31 << 2)
label_38bef4:
    if (ctx->pc == 0x38BEF4u) {
        ctx->pc = 0x38BEF4u;
            // 0x38bef4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38BEF8u;
        goto label_38bef8;
    }
    ctx->pc = 0x38BEF0u;
    {
        const bool branch_taken_0x38bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BEF0u;
            // 0x38bef4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bef0) {
            ctx->pc = 0x38BFB8u;
            goto label_38bfb8;
        }
    }
    ctx->pc = 0x38BEF8u;
label_38bef8:
    // 0x38bef8: 0xc0576f4  jal         func_15DBD0
label_38befc:
    if (ctx->pc == 0x38BEFCu) {
        ctx->pc = 0x38BF00u;
        goto label_38bf00;
    }
    ctx->pc = 0x38BEF8u;
    SET_GPR_U32(ctx, 31, 0x38BF00u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF00u; }
        if (ctx->pc != 0x38BF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF00u; }
        if (ctx->pc != 0x38BF00u) { return; }
    }
    ctx->pc = 0x38BF00u;
label_38bf00:
    // 0x38bf00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf04:
    // 0x38bf04: 0xc076984  jal         func_1DA610
label_38bf08:
    if (ctx->pc == 0x38BF08u) {
        ctx->pc = 0x38BF08u;
            // 0x38bf08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BF0Cu;
        goto label_38bf0c;
    }
    ctx->pc = 0x38BF04u;
    SET_GPR_U32(ctx, 31, 0x38BF0Cu);
    ctx->pc = 0x38BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF04u;
            // 0x38bf08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF0Cu; }
        if (ctx->pc != 0x38BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF0Cu; }
        if (ctx->pc != 0x38BF0Cu) { return; }
    }
    ctx->pc = 0x38BF0Cu;
label_38bf0c:
    // 0x38bf0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38bf0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf10:
    // 0x38bf10: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38bf14:
    // 0x38bf14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bf18:
    // 0x38bf18: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x38bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38bf1c:
    // 0x38bf1c: 0xc4421bb0  lwc1        $f2, 0x1BB0($v0)
    ctx->pc = 0x38bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38bf20:
    // 0x38bf20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38bf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38bf24:
    // 0x38bf24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bf28:
    // 0x38bf28: 0xc4411bb8  lwc1        $f1, 0x1BB8($v0)
    ctx->pc = 0x38bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38bf2c:
    // 0x38bf2c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x38bf2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_38bf30:
    // 0x38bf30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bf34:
    // 0x38bf34: 0xc4401bbc  lwc1        $f0, 0x1BBC($v0)
    ctx->pc = 0x38bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38bf38:
    // 0x38bf38: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x38bf38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_38bf3c:
    // 0x38bf3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x38bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38bf40:
    // 0x38bf40: 0x8c421bb4  lw          $v0, 0x1BB4($v0)
    ctx->pc = 0x38bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7092)));
label_38bf44:
    // 0x38bf44: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x38bf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_38bf48:
    // 0x38bf48: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x38bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_38bf4c:
    // 0x38bf4c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x38bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38bf50:
    // 0x38bf50: 0xc04cca0  jal         func_133280
label_38bf54:
    if (ctx->pc == 0x38BF54u) {
        ctx->pc = 0x38BF54u;
            // 0x38bf54: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x38BF58u;
        goto label_38bf58;
    }
    ctx->pc = 0x38BF50u;
    SET_GPR_U32(ctx, 31, 0x38BF58u);
    ctx->pc = 0x38BF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF50u;
            // 0x38bf54: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF58u; }
        if (ctx->pc != 0x38BF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF58u; }
        if (ctx->pc != 0x38BF58u) { return; }
    }
    ctx->pc = 0x38BF58u;
label_38bf58:
    // 0x38bf58: 0xc076980  jal         func_1DA600
label_38bf5c:
    if (ctx->pc == 0x38BF5Cu) {
        ctx->pc = 0x38BF5Cu;
            // 0x38bf5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BF60u;
        goto label_38bf60;
    }
    ctx->pc = 0x38BF58u;
    SET_GPR_U32(ctx, 31, 0x38BF60u);
    ctx->pc = 0x38BF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF58u;
            // 0x38bf5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF60u; }
        if (ctx->pc != 0x38BF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF60u; }
        if (ctx->pc != 0x38BF60u) { return; }
    }
    ctx->pc = 0x38BF60u;
label_38bf60:
    // 0x38bf60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x38bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_38bf64:
    // 0x38bf64: 0xc04cc34  jal         func_1330D0
label_38bf68:
    if (ctx->pc == 0x38BF68u) {
        ctx->pc = 0x38BF68u;
            // 0x38bf68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BF6Cu;
        goto label_38bf6c;
    }
    ctx->pc = 0x38BF64u;
    SET_GPR_U32(ctx, 31, 0x38BF6Cu);
    ctx->pc = 0x38BF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF64u;
            // 0x38bf68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF6Cu; }
        if (ctx->pc != 0x38BF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF6Cu; }
        if (ctx->pc != 0x38BF6Cu) { return; }
    }
    ctx->pc = 0x38BF6Cu;
label_38bf6c:
    // 0x38bf6c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x38bf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38bf70:
    // 0x38bf70: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_38bf74:
    if (ctx->pc == 0x38BF74u) {
        ctx->pc = 0x38BF74u;
            // 0x38bf74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38BF78u;
        goto label_38bf78;
    }
    ctx->pc = 0x38BF70u;
    {
        const bool branch_taken_0x38bf70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38bf70) {
            ctx->pc = 0x38BF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF70u;
            // 0x38bf74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38BF80u;
            goto label_38bf80;
        }
    }
    ctx->pc = 0x38BF78u;
label_38bf78:
    // 0x38bf78: 0x1000000f  b           . + 4 + (0xF << 2)
label_38bf7c:
    if (ctx->pc == 0x38BF7Cu) {
        ctx->pc = 0x38BF7Cu;
            // 0x38bf7c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38BF80u;
        goto label_38bf80;
    }
    ctx->pc = 0x38BF78u;
    {
        const bool branch_taken_0x38bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF78u;
            // 0x38bf7c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf78) {
            ctx->pc = 0x38BFB8u;
            goto label_38bfb8;
        }
    }
    ctx->pc = 0x38BF80u;
label_38bf80:
    // 0x38bf80: 0xc07697c  jal         func_1DA5F0
label_38bf84:
    if (ctx->pc == 0x38BF84u) {
        ctx->pc = 0x38BF88u;
        goto label_38bf88;
    }
    ctx->pc = 0x38BF80u;
    SET_GPR_U32(ctx, 31, 0x38BF88u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF88u; }
        if (ctx->pc != 0x38BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF88u; }
        if (ctx->pc != 0x38BF88u) { return; }
    }
    ctx->pc = 0x38BF88u;
label_38bf88:
    // 0x38bf88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38bf8c:
    // 0x38bf8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38bf90:
    // 0x38bf90: 0xc04cd60  jal         func_133580
label_38bf94:
    if (ctx->pc == 0x38BF94u) {
        ctx->pc = 0x38BF94u;
            // 0x38bf94: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x38BF98u;
        goto label_38bf98;
    }
    ctx->pc = 0x38BF90u;
    SET_GPR_U32(ctx, 31, 0x38BF98u);
    ctx->pc = 0x38BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF90u;
            // 0x38bf94: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF98u; }
        if (ctx->pc != 0x38BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BF98u; }
        if (ctx->pc != 0x38BF98u) { return; }
    }
    ctx->pc = 0x38BF98u;
label_38bf98:
    // 0x38bf98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38bf9c:
    // 0x38bf9c: 0xc04c650  jal         func_131940
label_38bfa0:
    if (ctx->pc == 0x38BFA0u) {
        ctx->pc = 0x38BFA0u;
            // 0x38bfa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38BFA4u;
        goto label_38bfa4;
    }
    ctx->pc = 0x38BF9Cu;
    SET_GPR_U32(ctx, 31, 0x38BFA4u);
    ctx->pc = 0x38BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38BF9Cu;
            // 0x38bfa0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BFA4u; }
        if (ctx->pc != 0x38BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38BFA4u; }
        if (ctx->pc != 0x38BFA4u) { return; }
    }
    ctx->pc = 0x38BFA4u;
label_38bfa4:
    // 0x38bfa4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x38bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_38bfa8:
    // 0x38bfa8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38bfac:
    // 0x38bfac: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x38bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_38bfb0:
    // 0x38bfb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38bfb4:
    // 0x38bfb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38bfb8:
    // 0x38bfb8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38bfb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38bfbc:
    // 0x38bfbc: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_38bfc0:
    if (ctx->pc == 0x38BFC0u) {
        ctx->pc = 0x38BFC4u;
        goto label_38bfc4;
    }
    ctx->pc = 0x38BFBCu;
    {
        const bool branch_taken_0x38bfbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bfbc) {
            ctx->pc = 0x38C0B8u;
            goto label_38c0b8;
        }
    }
    ctx->pc = 0x38BFC4u;
label_38bfc4:
    // 0x38bfc4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38bfc8:
    // 0x38bfc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38bfcc:
    // 0x38bfcc: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x38bfccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38bfd0:
    // 0x38bfd0: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x38bfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38bfd4:
    // 0x38bfd4: 0x8c63e360  lw          $v1, -0x1CA0($v1)
    ctx->pc = 0x38bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_38bfd8:
    // 0x38bfd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bfdc:
    // 0x38bfdc: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x38bfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_38bfe0:
    // 0x38bfe0: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x38bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_38bfe4:
    // 0x38bfe4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x38bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_38bfe8:
    // 0x38bfe8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38bfec:
    // 0x38bfec: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x38bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38bff0:
    // 0x38bff0: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x38bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_38bff4:
    // 0x38bff4: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x38bff4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38bff8:
    // 0x38bff8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x38bff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_38bffc:
    // 0x38bffc: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x38bffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_38c000:
    // 0x38c000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38c004:
    // 0x38c004: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x38c004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_38c008:
    // 0x38c008: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x38c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_38c00c:
    // 0x38c00c: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x38c00cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_38c010:
    // 0x38c010: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38c010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38c014:
    // 0x38c014: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38c018:
    // 0x38c018: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x38c018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_38c01c:
    // 0x38c01c: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x38c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_38c020:
    // 0x38c020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38c024:
    // 0x38c024: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x38c024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_38c028:
    // 0x38c028: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38c028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_38c02c:
    // 0x38c02c: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x38c02cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_38c030:
    // 0x38c030: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x38c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38c034:
    // 0x38c034: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x38c034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38c038:
    // 0x38c038: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x38c038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_38c03c:
    // 0x38c03c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38c040:
    // 0x38c040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38c040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c044:
    // 0x38c044: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x38c044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_38c048:
    // 0x38c048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38c048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38c04c:
    // 0x38c04c: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x38c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_38c050:
    // 0x38c050: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x38c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38c054:
    // 0x38c054: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x38c054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38c058:
    // 0x38c058: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x38c058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_38c05c:
    // 0x38c05c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c060:
    // 0x38c060: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x38c060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_38c064:
    // 0x38c064: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x38c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_38c068:
    // 0x38c068: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x38c068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_38c06c:
    // 0x38c06c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x38c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_38c070:
    // 0x38c070: 0xc04e4a4  jal         func_139290
label_38c074:
    if (ctx->pc == 0x38C074u) {
        ctx->pc = 0x38C074u;
            // 0x38c074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C078u;
        goto label_38c078;
    }
    ctx->pc = 0x38C070u;
    SET_GPR_U32(ctx, 31, 0x38C078u);
    ctx->pc = 0x38C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C070u;
            // 0x38c074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C078u; }
        if (ctx->pc != 0x38C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C078u; }
        if (ctx->pc != 0x38C078u) { return; }
    }
    ctx->pc = 0x38C078u;
label_38c078:
    // 0x38c078: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38c07c:
    // 0x38c07c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38c080:
    // 0x38c080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c084:
    // 0x38c084: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38c084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c088:
    // 0x38c088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38c088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38c08c:
    // 0x38c08c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_38c090:
    // 0x38c090: 0xc04cd60  jal         func_133580
label_38c094:
    if (ctx->pc == 0x38C094u) {
        ctx->pc = 0x38C094u;
            // 0x38c094: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x38C098u;
        goto label_38c098;
    }
    ctx->pc = 0x38C090u;
    SET_GPR_U32(ctx, 31, 0x38C098u);
    ctx->pc = 0x38C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C090u;
            // 0x38c094: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C098u; }
        if (ctx->pc != 0x38C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C098u; }
        if (ctx->pc != 0x38C098u) { return; }
    }
    ctx->pc = 0x38C098u;
label_38c098:
    // 0x38c098: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38c098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38c09c:
    // 0x38c09c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38c0a0:
    // 0x38c0a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38c0a4:
    // 0x38c0a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38c0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c0a8:
    // 0x38c0a8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x38c0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38c0ac:
    // 0x38c0ac: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38c0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38c0b0:
    // 0x38c0b0: 0xc04cfcc  jal         func_133F30
label_38c0b4:
    if (ctx->pc == 0x38C0B4u) {
        ctx->pc = 0x38C0B4u;
            // 0x38c0b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C0B8u;
        goto label_38c0b8;
    }
    ctx->pc = 0x38C0B0u;
    SET_GPR_U32(ctx, 31, 0x38C0B8u);
    ctx->pc = 0x38C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C0B0u;
            // 0x38c0b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C0B8u; }
        if (ctx->pc != 0x38C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C0B8u; }
        if (ctx->pc != 0x38C0B8u) { return; }
    }
    ctx->pc = 0x38C0B8u;
label_38c0b8:
    // 0x38c0b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38c0bc:
    // 0x38c0bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c0c0:
    // 0x38c0c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38c0c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38c0c4:
    // 0x38c0c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38c0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38c0c8:
    // 0x38c0c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38c0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38c0cc:
    // 0x38c0cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38c0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38c0d0:
    // 0x38c0d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38c0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c0d4:
    // 0x38c0d4: 0x3e00008  jr          $ra
label_38c0d8:
    if (ctx->pc == 0x38C0D8u) {
        ctx->pc = 0x38C0D8u;
            // 0x38c0d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x38C0DCu;
        goto label_38c0dc;
    }
    ctx->pc = 0x38C0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C0D4u;
            // 0x38c0d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C0DCu;
label_38c0dc:
    // 0x38c0dc: 0x0  nop
    ctx->pc = 0x38c0dcu;
    // NOP
label_38c0e0:
    // 0x38c0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38c0e4:
    // 0x38c0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c0e8:
    // 0x38c0e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38c0ec:
    // 0x38c0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38c0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c0f0:
    // 0x38c0f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c0f4:
    // 0x38c0f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38c0f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38c0f8:
    // 0x38c0f8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x38c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38c0fc:
    // 0x38c0fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38c0fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c100:
    // 0x38c100: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38c104:
    if (ctx->pc == 0x38C104u) {
        ctx->pc = 0x38C104u;
            // 0x38c104: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C108u;
        goto label_38c108;
    }
    ctx->pc = 0x38C100u;
    {
        const bool branch_taken_0x38c100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C100u;
            // 0x38c104: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c100) {
            ctx->pc = 0x38C10Cu;
            goto label_38c10c;
        }
    }
    ctx->pc = 0x38C108u;
label_38c108:
    // 0x38c108: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38c108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c10c:
    // 0x38c10c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38c10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38c110:
    // 0x38c110: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_38c114:
    if (ctx->pc == 0x38C114u) {
        ctx->pc = 0x38C114u;
            // 0x38c114: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x38C118u;
        goto label_38c118;
    }
    ctx->pc = 0x38C110u;
    {
        const bool branch_taken_0x38c110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c110) {
            ctx->pc = 0x38C114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C110u;
            // 0x38c114: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C23Cu;
            goto label_38c23c;
        }
    }
    ctx->pc = 0x38C118u;
label_38c118:
    // 0x38c118: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38c11c:
    // 0x38c11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c120:
    // 0x38c120: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38c124:
    // 0x38c124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c128:
    // 0x38c128: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x38c128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_38c12c:
    // 0x38c12c: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x38c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c130:
    // 0x38c130: 0xc04cc7c  jal         func_1331F0
label_38c134:
    if (ctx->pc == 0x38C134u) {
        ctx->pc = 0x38C134u;
            // 0x38c134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38C138u;
        goto label_38c138;
    }
    ctx->pc = 0x38C130u;
    SET_GPR_U32(ctx, 31, 0x38C138u);
    ctx->pc = 0x38C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C130u;
            // 0x38c134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C138u; }
        if (ctx->pc != 0x38C138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C138u; }
        if (ctx->pc != 0x38C138u) { return; }
    }
    ctx->pc = 0x38C138u;
label_38c138:
    // 0x38c138: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x38c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_38c13c:
    // 0x38c13c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x38c13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_38c140:
    // 0x38c140: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38c140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c144:
    // 0x38c144: 0xc04cc7c  jal         func_1331F0
label_38c148:
    if (ctx->pc == 0x38C148u) {
        ctx->pc = 0x38C148u;
            // 0x38c148: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38C14Cu;
        goto label_38c14c;
    }
    ctx->pc = 0x38C144u;
    SET_GPR_U32(ctx, 31, 0x38C14Cu);
    ctx->pc = 0x38C148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C144u;
            // 0x38c148: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C14Cu; }
        if (ctx->pc != 0x38C14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C14Cu; }
        if (ctx->pc != 0x38C14Cu) { return; }
    }
    ctx->pc = 0x38C14Cu;
label_38c14c:
    // 0x38c14c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x38c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c150:
    // 0x38c150: 0x3c043b32  lui         $a0, 0x3B32
    ctx->pc = 0x38c150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15154 << 16));
label_38c154:
    // 0x38c154: 0x3484864d  ori         $a0, $a0, 0x864D
    ctx->pc = 0x38c154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34381);
label_38c158:
    // 0x38c158: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x38c158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_38c15c:
    // 0x38c15c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x38c15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38c160:
    // 0x38c160: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x38c160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_38c164:
    // 0x38c164: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x38c164u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38c168:
    // 0x38c168: 0x0  nop
    ctx->pc = 0x38c168u;
    // NOP
label_38c16c:
    // 0x38c16c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x38c16cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_38c170:
    // 0x38c170: 0x4614181d  msub.s      $f0, $f3, $f20
    ctx->pc = 0x38c170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_38c174:
    // 0x38c174: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x38c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_38c178:
    // 0x38c178: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x38c178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c17c:
    // 0x38c17c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38c17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c180:
    // 0x38c180: 0x0  nop
    ctx->pc = 0x38c180u;
    // NOP
label_38c184:
    // 0x38c184: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x38c184u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_38c188:
    // 0x38c188: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x38c188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_38c18c:
    // 0x38c18c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x38c18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_38c190:
    // 0x38c190: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x38c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c194:
    // 0x38c194: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x38c194u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_38c198:
    // 0x38c198: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x38c198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_38c19c:
    // 0x38c19c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x38c19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_38c1a0:
    // 0x38c1a0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x38c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c1a4:
    // 0x38c1a4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x38c1a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_38c1a8:
    // 0x38c1a8: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x38c1a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_38c1ac:
    // 0x38c1ac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x38c1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_38c1b0:
    // 0x38c1b0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x38c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c1b4:
    // 0x38c1b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x38c1b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c1b8:
    // 0x38c1b8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_38c1bc:
    if (ctx->pc == 0x38C1BCu) {
        ctx->pc = 0x38C1C0u;
        goto label_38c1c0;
    }
    ctx->pc = 0x38C1B8u;
    {
        const bool branch_taken_0x38c1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38c1b8) {
            ctx->pc = 0x38C1E8u;
            goto label_38c1e8;
        }
    }
    ctx->pc = 0x38C1C0u;
label_38c1c0:
    // 0x38c1c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38c1c4:
    // 0x38c1c4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_38c1c8:
    // 0x38c1c8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x38c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38c1cc:
    // 0x38c1cc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x38c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38c1d0:
    // 0x38c1d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38c1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_38c1d4:
    // 0x38c1d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x38c1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c1d8:
    // 0x38c1d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_38c1dc:
    if (ctx->pc == 0x38C1DCu) {
        ctx->pc = 0x38C1DCu;
            // 0x38c1dc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x38C1E0u;
        goto label_38c1e0;
    }
    ctx->pc = 0x38C1D8u;
    {
        const bool branch_taken_0x38c1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C1D8u;
            // 0x38c1dc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1d8) {
            ctx->pc = 0x38C1FCu;
            goto label_38c1fc;
        }
    }
    ctx->pc = 0x38C1E0u;
label_38c1e0:
    // 0x38c1e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_38c1e4:
    if (ctx->pc == 0x38C1E4u) {
        ctx->pc = 0x38C1E4u;
            // 0x38c1e4: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x38C1E8u;
        goto label_38c1e8;
    }
    ctx->pc = 0x38C1E0u;
    {
        const bool branch_taken_0x38c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C1E0u;
            // 0x38c1e4: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1e0) {
            ctx->pc = 0x38C1FCu;
            goto label_38c1fc;
        }
    }
    ctx->pc = 0x38C1E8u;
label_38c1e8:
    // 0x38c1e8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x38c1e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c1ec:
    // 0x38c1ec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_38c1f0:
    if (ctx->pc == 0x38C1F0u) {
        ctx->pc = 0x38C1F0u;
            // 0x38c1f0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x38C1F4u;
        goto label_38c1f4;
    }
    ctx->pc = 0x38C1ECu;
    {
        const bool branch_taken_0x38c1ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38c1ec) {
            ctx->pc = 0x38C1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38C1ECu;
            // 0x38c1f0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38C200u;
            goto label_38c200;
        }
    }
    ctx->pc = 0x38C1F4u;
label_38c1f4:
    // 0x38c1f4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x38c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_38c1f8:
    // 0x38c1f8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x38c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_38c1fc:
    // 0x38c1fc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x38c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_38c200:
    // 0x38c200: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_38c204:
    if (ctx->pc == 0x38C204u) {
        ctx->pc = 0x38C208u;
        goto label_38c208;
    }
    ctx->pc = 0x38C200u;
    {
        const bool branch_taken_0x38c200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c200) {
            ctx->pc = 0x38C238u;
            goto label_38c238;
        }
    }
    ctx->pc = 0x38C208u;
label_38c208:
    // 0x38c208: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x38c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38c20c:
    // 0x38c20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38c20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c210:
    // 0x38c210: 0x0  nop
    ctx->pc = 0x38c210u;
    // NOP
label_38c214:
    // 0x38c214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38c214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38c218:
    // 0x38c218: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38c21c:
    if (ctx->pc == 0x38C21Cu) {
        ctx->pc = 0x38C21Cu;
            // 0x38c21c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38C220u;
        goto label_38c220;
    }
    ctx->pc = 0x38C218u;
    {
        const bool branch_taken_0x38c218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C218u;
            // 0x38c21c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c218) {
            ctx->pc = 0x38C224u;
            goto label_38c224;
        }
    }
    ctx->pc = 0x38C220u;
label_38c220:
    // 0x38c220: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38c220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c224:
    // 0x38c224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_38c228:
    // 0x38c228: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_38c22c:
    if (ctx->pc == 0x38C22Cu) {
        ctx->pc = 0x38C230u;
        goto label_38c230;
    }
    ctx->pc = 0x38C228u;
    {
        const bool branch_taken_0x38c228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c228) {
            ctx->pc = 0x38C238u;
            goto label_38c238;
        }
    }
    ctx->pc = 0x38C230u;
label_38c230:
    // 0x38c230: 0xa0f809  jalr        $a1
label_38c234:
    if (ctx->pc == 0x38C234u) {
        ctx->pc = 0x38C234u;
            // 0x38c234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C238u;
        goto label_38c238;
    }
    ctx->pc = 0x38C230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38C238u);
        ctx->pc = 0x38C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C230u;
            // 0x38c234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C238u; }
            if (ctx->pc != 0x38C238u) { return; }
        }
        }
    }
    ctx->pc = 0x38C238u;
label_38c238:
    // 0x38c238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38c23c:
    // 0x38c23c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c240:
    // 0x38c240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38c240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c244:
    // 0x38c244: 0x3e00008  jr          $ra
label_38c248:
    if (ctx->pc == 0x38C248u) {
        ctx->pc = 0x38C248u;
            // 0x38c248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38C24Cu;
        goto label_38c24c;
    }
    ctx->pc = 0x38C244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C244u;
            // 0x38c248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C24Cu;
label_38c24c:
    // 0x38c24c: 0x0  nop
    ctx->pc = 0x38c24cu;
    // NOP
label_38c250:
    // 0x38c250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c254:
    // 0x38c254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c258:
    // 0x38c258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38c25c:
    // 0x38c25c: 0xc0e7d30  jal         func_39F4C0
label_38c260:
    if (ctx->pc == 0x38C260u) {
        ctx->pc = 0x38C260u;
            // 0x38c260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38C264u;
        goto label_38c264;
    }
    ctx->pc = 0x38C25Cu;
    SET_GPR_U32(ctx, 31, 0x38C264u);
    ctx->pc = 0x38C260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C25Cu;
            // 0x38c260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4C0u;
    if (runtime->hasFunction(0x39F4C0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C264u; }
        if (ctx->pc != 0x38C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4C0_0x39f4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C264u; }
        if (ctx->pc != 0x38C264u) { return; }
    }
    ctx->pc = 0x38C264u;
label_38c264:
    // 0x38c264: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x38c264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_38c268:
    // 0x38c268: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x38c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_38c26c:
    // 0x38c26c: 0xc04cc04  jal         func_133010
label_38c270:
    if (ctx->pc == 0x38C270u) {
        ctx->pc = 0x38C270u;
            // 0x38c270: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->pc = 0x38C274u;
        goto label_38c274;
    }
    ctx->pc = 0x38C26Cu;
    SET_GPR_U32(ctx, 31, 0x38C274u);
    ctx->pc = 0x38C270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C26Cu;
            // 0x38c270: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C274u; }
        if (ctx->pc != 0x38C274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C274u; }
        if (ctx->pc != 0x38C274u) { return; }
    }
    ctx->pc = 0x38C274u;
label_38c274:
    // 0x38c274: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x38c274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_38c278:
    // 0x38c278: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x38c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_38c27c:
    // 0x38c27c: 0xc04cc04  jal         func_133010
label_38c280:
    if (ctx->pc == 0x38C280u) {
        ctx->pc = 0x38C280u;
            // 0x38c280: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->pc = 0x38C284u;
        goto label_38c284;
    }
    ctx->pc = 0x38C27Cu;
    SET_GPR_U32(ctx, 31, 0x38C284u);
    ctx->pc = 0x38C280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C27Cu;
            // 0x38c280: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C284u; }
        if (ctx->pc != 0x38C284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C284u; }
        if (ctx->pc != 0x38C284u) { return; }
    }
    ctx->pc = 0x38C284u;
label_38c284:
    // 0x38c284: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x38c284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_38c288:
    // 0x38c288: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x38c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_38c28c:
    // 0x38c28c: 0xc04cc04  jal         func_133010
label_38c290:
    if (ctx->pc == 0x38C290u) {
        ctx->pc = 0x38C290u;
            // 0x38c290: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->pc = 0x38C294u;
        goto label_38c294;
    }
    ctx->pc = 0x38C28Cu;
    SET_GPR_U32(ctx, 31, 0x38C294u);
    ctx->pc = 0x38C290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38C28Cu;
            // 0x38c290: 0x24a55ef0  addiu       $a1, $a1, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C294u; }
        if (ctx->pc != 0x38C294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38C294u; }
        if (ctx->pc != 0x38C294u) { return; }
    }
    ctx->pc = 0x38C294u;
label_38c294:
    // 0x38c294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38c298:
    // 0x38c298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38c29c:
    // 0x38c29c: 0x3e00008  jr          $ra
label_38c2a0:
    if (ctx->pc == 0x38C2A0u) {
        ctx->pc = 0x38C2A0u;
            // 0x38c2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38C2A4u;
        goto label_38c2a4;
    }
    ctx->pc = 0x38C29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C29Cu;
            // 0x38c2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C2A4u;
label_38c2a4:
    // 0x38c2a4: 0x0  nop
    ctx->pc = 0x38c2a4u;
    // NOP
label_38c2a8:
    // 0x38c2a8: 0x0  nop
    ctx->pc = 0x38c2a8u;
    // NOP
label_38c2ac:
    // 0x38c2ac: 0x0  nop
    ctx->pc = 0x38c2acu;
    // NOP
}
