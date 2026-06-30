#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045AC00
// Address: 0x45ac00 - 0x45b5a0
void sub_0045AC00_0x45ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AC00_0x45ac00");
#endif

    switch (ctx->pc) {
        case 0x45ac00u: goto label_45ac00;
        case 0x45ac04u: goto label_45ac04;
        case 0x45ac08u: goto label_45ac08;
        case 0x45ac0cu: goto label_45ac0c;
        case 0x45ac10u: goto label_45ac10;
        case 0x45ac14u: goto label_45ac14;
        case 0x45ac18u: goto label_45ac18;
        case 0x45ac1cu: goto label_45ac1c;
        case 0x45ac20u: goto label_45ac20;
        case 0x45ac24u: goto label_45ac24;
        case 0x45ac28u: goto label_45ac28;
        case 0x45ac2cu: goto label_45ac2c;
        case 0x45ac30u: goto label_45ac30;
        case 0x45ac34u: goto label_45ac34;
        case 0x45ac38u: goto label_45ac38;
        case 0x45ac3cu: goto label_45ac3c;
        case 0x45ac40u: goto label_45ac40;
        case 0x45ac44u: goto label_45ac44;
        case 0x45ac48u: goto label_45ac48;
        case 0x45ac4cu: goto label_45ac4c;
        case 0x45ac50u: goto label_45ac50;
        case 0x45ac54u: goto label_45ac54;
        case 0x45ac58u: goto label_45ac58;
        case 0x45ac5cu: goto label_45ac5c;
        case 0x45ac60u: goto label_45ac60;
        case 0x45ac64u: goto label_45ac64;
        case 0x45ac68u: goto label_45ac68;
        case 0x45ac6cu: goto label_45ac6c;
        case 0x45ac70u: goto label_45ac70;
        case 0x45ac74u: goto label_45ac74;
        case 0x45ac78u: goto label_45ac78;
        case 0x45ac7cu: goto label_45ac7c;
        case 0x45ac80u: goto label_45ac80;
        case 0x45ac84u: goto label_45ac84;
        case 0x45ac88u: goto label_45ac88;
        case 0x45ac8cu: goto label_45ac8c;
        case 0x45ac90u: goto label_45ac90;
        case 0x45ac94u: goto label_45ac94;
        case 0x45ac98u: goto label_45ac98;
        case 0x45ac9cu: goto label_45ac9c;
        case 0x45aca0u: goto label_45aca0;
        case 0x45aca4u: goto label_45aca4;
        case 0x45aca8u: goto label_45aca8;
        case 0x45acacu: goto label_45acac;
        case 0x45acb0u: goto label_45acb0;
        case 0x45acb4u: goto label_45acb4;
        case 0x45acb8u: goto label_45acb8;
        case 0x45acbcu: goto label_45acbc;
        case 0x45acc0u: goto label_45acc0;
        case 0x45acc4u: goto label_45acc4;
        case 0x45acc8u: goto label_45acc8;
        case 0x45acccu: goto label_45accc;
        case 0x45acd0u: goto label_45acd0;
        case 0x45acd4u: goto label_45acd4;
        case 0x45acd8u: goto label_45acd8;
        case 0x45acdcu: goto label_45acdc;
        case 0x45ace0u: goto label_45ace0;
        case 0x45ace4u: goto label_45ace4;
        case 0x45ace8u: goto label_45ace8;
        case 0x45acecu: goto label_45acec;
        case 0x45acf0u: goto label_45acf0;
        case 0x45acf4u: goto label_45acf4;
        case 0x45acf8u: goto label_45acf8;
        case 0x45acfcu: goto label_45acfc;
        case 0x45ad00u: goto label_45ad00;
        case 0x45ad04u: goto label_45ad04;
        case 0x45ad08u: goto label_45ad08;
        case 0x45ad0cu: goto label_45ad0c;
        case 0x45ad10u: goto label_45ad10;
        case 0x45ad14u: goto label_45ad14;
        case 0x45ad18u: goto label_45ad18;
        case 0x45ad1cu: goto label_45ad1c;
        case 0x45ad20u: goto label_45ad20;
        case 0x45ad24u: goto label_45ad24;
        case 0x45ad28u: goto label_45ad28;
        case 0x45ad2cu: goto label_45ad2c;
        case 0x45ad30u: goto label_45ad30;
        case 0x45ad34u: goto label_45ad34;
        case 0x45ad38u: goto label_45ad38;
        case 0x45ad3cu: goto label_45ad3c;
        case 0x45ad40u: goto label_45ad40;
        case 0x45ad44u: goto label_45ad44;
        case 0x45ad48u: goto label_45ad48;
        case 0x45ad4cu: goto label_45ad4c;
        case 0x45ad50u: goto label_45ad50;
        case 0x45ad54u: goto label_45ad54;
        case 0x45ad58u: goto label_45ad58;
        case 0x45ad5cu: goto label_45ad5c;
        case 0x45ad60u: goto label_45ad60;
        case 0x45ad64u: goto label_45ad64;
        case 0x45ad68u: goto label_45ad68;
        case 0x45ad6cu: goto label_45ad6c;
        case 0x45ad70u: goto label_45ad70;
        case 0x45ad74u: goto label_45ad74;
        case 0x45ad78u: goto label_45ad78;
        case 0x45ad7cu: goto label_45ad7c;
        case 0x45ad80u: goto label_45ad80;
        case 0x45ad84u: goto label_45ad84;
        case 0x45ad88u: goto label_45ad88;
        case 0x45ad8cu: goto label_45ad8c;
        case 0x45ad90u: goto label_45ad90;
        case 0x45ad94u: goto label_45ad94;
        case 0x45ad98u: goto label_45ad98;
        case 0x45ad9cu: goto label_45ad9c;
        case 0x45ada0u: goto label_45ada0;
        case 0x45ada4u: goto label_45ada4;
        case 0x45ada8u: goto label_45ada8;
        case 0x45adacu: goto label_45adac;
        case 0x45adb0u: goto label_45adb0;
        case 0x45adb4u: goto label_45adb4;
        case 0x45adb8u: goto label_45adb8;
        case 0x45adbcu: goto label_45adbc;
        case 0x45adc0u: goto label_45adc0;
        case 0x45adc4u: goto label_45adc4;
        case 0x45adc8u: goto label_45adc8;
        case 0x45adccu: goto label_45adcc;
        case 0x45add0u: goto label_45add0;
        case 0x45add4u: goto label_45add4;
        case 0x45add8u: goto label_45add8;
        case 0x45addcu: goto label_45addc;
        case 0x45ade0u: goto label_45ade0;
        case 0x45ade4u: goto label_45ade4;
        case 0x45ade8u: goto label_45ade8;
        case 0x45adecu: goto label_45adec;
        case 0x45adf0u: goto label_45adf0;
        case 0x45adf4u: goto label_45adf4;
        case 0x45adf8u: goto label_45adf8;
        case 0x45adfcu: goto label_45adfc;
        case 0x45ae00u: goto label_45ae00;
        case 0x45ae04u: goto label_45ae04;
        case 0x45ae08u: goto label_45ae08;
        case 0x45ae0cu: goto label_45ae0c;
        case 0x45ae10u: goto label_45ae10;
        case 0x45ae14u: goto label_45ae14;
        case 0x45ae18u: goto label_45ae18;
        case 0x45ae1cu: goto label_45ae1c;
        case 0x45ae20u: goto label_45ae20;
        case 0x45ae24u: goto label_45ae24;
        case 0x45ae28u: goto label_45ae28;
        case 0x45ae2cu: goto label_45ae2c;
        case 0x45ae30u: goto label_45ae30;
        case 0x45ae34u: goto label_45ae34;
        case 0x45ae38u: goto label_45ae38;
        case 0x45ae3cu: goto label_45ae3c;
        case 0x45ae40u: goto label_45ae40;
        case 0x45ae44u: goto label_45ae44;
        case 0x45ae48u: goto label_45ae48;
        case 0x45ae4cu: goto label_45ae4c;
        case 0x45ae50u: goto label_45ae50;
        case 0x45ae54u: goto label_45ae54;
        case 0x45ae58u: goto label_45ae58;
        case 0x45ae5cu: goto label_45ae5c;
        case 0x45ae60u: goto label_45ae60;
        case 0x45ae64u: goto label_45ae64;
        case 0x45ae68u: goto label_45ae68;
        case 0x45ae6cu: goto label_45ae6c;
        case 0x45ae70u: goto label_45ae70;
        case 0x45ae74u: goto label_45ae74;
        case 0x45ae78u: goto label_45ae78;
        case 0x45ae7cu: goto label_45ae7c;
        case 0x45ae80u: goto label_45ae80;
        case 0x45ae84u: goto label_45ae84;
        case 0x45ae88u: goto label_45ae88;
        case 0x45ae8cu: goto label_45ae8c;
        case 0x45ae90u: goto label_45ae90;
        case 0x45ae94u: goto label_45ae94;
        case 0x45ae98u: goto label_45ae98;
        case 0x45ae9cu: goto label_45ae9c;
        case 0x45aea0u: goto label_45aea0;
        case 0x45aea4u: goto label_45aea4;
        case 0x45aea8u: goto label_45aea8;
        case 0x45aeacu: goto label_45aeac;
        case 0x45aeb0u: goto label_45aeb0;
        case 0x45aeb4u: goto label_45aeb4;
        case 0x45aeb8u: goto label_45aeb8;
        case 0x45aebcu: goto label_45aebc;
        case 0x45aec0u: goto label_45aec0;
        case 0x45aec4u: goto label_45aec4;
        case 0x45aec8u: goto label_45aec8;
        case 0x45aeccu: goto label_45aecc;
        case 0x45aed0u: goto label_45aed0;
        case 0x45aed4u: goto label_45aed4;
        case 0x45aed8u: goto label_45aed8;
        case 0x45aedcu: goto label_45aedc;
        case 0x45aee0u: goto label_45aee0;
        case 0x45aee4u: goto label_45aee4;
        case 0x45aee8u: goto label_45aee8;
        case 0x45aeecu: goto label_45aeec;
        case 0x45aef0u: goto label_45aef0;
        case 0x45aef4u: goto label_45aef4;
        case 0x45aef8u: goto label_45aef8;
        case 0x45aefcu: goto label_45aefc;
        case 0x45af00u: goto label_45af00;
        case 0x45af04u: goto label_45af04;
        case 0x45af08u: goto label_45af08;
        case 0x45af0cu: goto label_45af0c;
        case 0x45af10u: goto label_45af10;
        case 0x45af14u: goto label_45af14;
        case 0x45af18u: goto label_45af18;
        case 0x45af1cu: goto label_45af1c;
        case 0x45af20u: goto label_45af20;
        case 0x45af24u: goto label_45af24;
        case 0x45af28u: goto label_45af28;
        case 0x45af2cu: goto label_45af2c;
        case 0x45af30u: goto label_45af30;
        case 0x45af34u: goto label_45af34;
        case 0x45af38u: goto label_45af38;
        case 0x45af3cu: goto label_45af3c;
        case 0x45af40u: goto label_45af40;
        case 0x45af44u: goto label_45af44;
        case 0x45af48u: goto label_45af48;
        case 0x45af4cu: goto label_45af4c;
        case 0x45af50u: goto label_45af50;
        case 0x45af54u: goto label_45af54;
        case 0x45af58u: goto label_45af58;
        case 0x45af5cu: goto label_45af5c;
        case 0x45af60u: goto label_45af60;
        case 0x45af64u: goto label_45af64;
        case 0x45af68u: goto label_45af68;
        case 0x45af6cu: goto label_45af6c;
        case 0x45af70u: goto label_45af70;
        case 0x45af74u: goto label_45af74;
        case 0x45af78u: goto label_45af78;
        case 0x45af7cu: goto label_45af7c;
        case 0x45af80u: goto label_45af80;
        case 0x45af84u: goto label_45af84;
        case 0x45af88u: goto label_45af88;
        case 0x45af8cu: goto label_45af8c;
        case 0x45af90u: goto label_45af90;
        case 0x45af94u: goto label_45af94;
        case 0x45af98u: goto label_45af98;
        case 0x45af9cu: goto label_45af9c;
        case 0x45afa0u: goto label_45afa0;
        case 0x45afa4u: goto label_45afa4;
        case 0x45afa8u: goto label_45afa8;
        case 0x45afacu: goto label_45afac;
        case 0x45afb0u: goto label_45afb0;
        case 0x45afb4u: goto label_45afb4;
        case 0x45afb8u: goto label_45afb8;
        case 0x45afbcu: goto label_45afbc;
        case 0x45afc0u: goto label_45afc0;
        case 0x45afc4u: goto label_45afc4;
        case 0x45afc8u: goto label_45afc8;
        case 0x45afccu: goto label_45afcc;
        case 0x45afd0u: goto label_45afd0;
        case 0x45afd4u: goto label_45afd4;
        case 0x45afd8u: goto label_45afd8;
        case 0x45afdcu: goto label_45afdc;
        case 0x45afe0u: goto label_45afe0;
        case 0x45afe4u: goto label_45afe4;
        case 0x45afe8u: goto label_45afe8;
        case 0x45afecu: goto label_45afec;
        case 0x45aff0u: goto label_45aff0;
        case 0x45aff4u: goto label_45aff4;
        case 0x45aff8u: goto label_45aff8;
        case 0x45affcu: goto label_45affc;
        case 0x45b000u: goto label_45b000;
        case 0x45b004u: goto label_45b004;
        case 0x45b008u: goto label_45b008;
        case 0x45b00cu: goto label_45b00c;
        case 0x45b010u: goto label_45b010;
        case 0x45b014u: goto label_45b014;
        case 0x45b018u: goto label_45b018;
        case 0x45b01cu: goto label_45b01c;
        case 0x45b020u: goto label_45b020;
        case 0x45b024u: goto label_45b024;
        case 0x45b028u: goto label_45b028;
        case 0x45b02cu: goto label_45b02c;
        case 0x45b030u: goto label_45b030;
        case 0x45b034u: goto label_45b034;
        case 0x45b038u: goto label_45b038;
        case 0x45b03cu: goto label_45b03c;
        case 0x45b040u: goto label_45b040;
        case 0x45b044u: goto label_45b044;
        case 0x45b048u: goto label_45b048;
        case 0x45b04cu: goto label_45b04c;
        case 0x45b050u: goto label_45b050;
        case 0x45b054u: goto label_45b054;
        case 0x45b058u: goto label_45b058;
        case 0x45b05cu: goto label_45b05c;
        case 0x45b060u: goto label_45b060;
        case 0x45b064u: goto label_45b064;
        case 0x45b068u: goto label_45b068;
        case 0x45b06cu: goto label_45b06c;
        case 0x45b070u: goto label_45b070;
        case 0x45b074u: goto label_45b074;
        case 0x45b078u: goto label_45b078;
        case 0x45b07cu: goto label_45b07c;
        case 0x45b080u: goto label_45b080;
        case 0x45b084u: goto label_45b084;
        case 0x45b088u: goto label_45b088;
        case 0x45b08cu: goto label_45b08c;
        case 0x45b090u: goto label_45b090;
        case 0x45b094u: goto label_45b094;
        case 0x45b098u: goto label_45b098;
        case 0x45b09cu: goto label_45b09c;
        case 0x45b0a0u: goto label_45b0a0;
        case 0x45b0a4u: goto label_45b0a4;
        case 0x45b0a8u: goto label_45b0a8;
        case 0x45b0acu: goto label_45b0ac;
        case 0x45b0b0u: goto label_45b0b0;
        case 0x45b0b4u: goto label_45b0b4;
        case 0x45b0b8u: goto label_45b0b8;
        case 0x45b0bcu: goto label_45b0bc;
        case 0x45b0c0u: goto label_45b0c0;
        case 0x45b0c4u: goto label_45b0c4;
        case 0x45b0c8u: goto label_45b0c8;
        case 0x45b0ccu: goto label_45b0cc;
        case 0x45b0d0u: goto label_45b0d0;
        case 0x45b0d4u: goto label_45b0d4;
        case 0x45b0d8u: goto label_45b0d8;
        case 0x45b0dcu: goto label_45b0dc;
        case 0x45b0e0u: goto label_45b0e0;
        case 0x45b0e4u: goto label_45b0e4;
        case 0x45b0e8u: goto label_45b0e8;
        case 0x45b0ecu: goto label_45b0ec;
        case 0x45b0f0u: goto label_45b0f0;
        case 0x45b0f4u: goto label_45b0f4;
        case 0x45b0f8u: goto label_45b0f8;
        case 0x45b0fcu: goto label_45b0fc;
        case 0x45b100u: goto label_45b100;
        case 0x45b104u: goto label_45b104;
        case 0x45b108u: goto label_45b108;
        case 0x45b10cu: goto label_45b10c;
        case 0x45b110u: goto label_45b110;
        case 0x45b114u: goto label_45b114;
        case 0x45b118u: goto label_45b118;
        case 0x45b11cu: goto label_45b11c;
        case 0x45b120u: goto label_45b120;
        case 0x45b124u: goto label_45b124;
        case 0x45b128u: goto label_45b128;
        case 0x45b12cu: goto label_45b12c;
        case 0x45b130u: goto label_45b130;
        case 0x45b134u: goto label_45b134;
        case 0x45b138u: goto label_45b138;
        case 0x45b13cu: goto label_45b13c;
        case 0x45b140u: goto label_45b140;
        case 0x45b144u: goto label_45b144;
        case 0x45b148u: goto label_45b148;
        case 0x45b14cu: goto label_45b14c;
        case 0x45b150u: goto label_45b150;
        case 0x45b154u: goto label_45b154;
        case 0x45b158u: goto label_45b158;
        case 0x45b15cu: goto label_45b15c;
        case 0x45b160u: goto label_45b160;
        case 0x45b164u: goto label_45b164;
        case 0x45b168u: goto label_45b168;
        case 0x45b16cu: goto label_45b16c;
        case 0x45b170u: goto label_45b170;
        case 0x45b174u: goto label_45b174;
        case 0x45b178u: goto label_45b178;
        case 0x45b17cu: goto label_45b17c;
        case 0x45b180u: goto label_45b180;
        case 0x45b184u: goto label_45b184;
        case 0x45b188u: goto label_45b188;
        case 0x45b18cu: goto label_45b18c;
        case 0x45b190u: goto label_45b190;
        case 0x45b194u: goto label_45b194;
        case 0x45b198u: goto label_45b198;
        case 0x45b19cu: goto label_45b19c;
        case 0x45b1a0u: goto label_45b1a0;
        case 0x45b1a4u: goto label_45b1a4;
        case 0x45b1a8u: goto label_45b1a8;
        case 0x45b1acu: goto label_45b1ac;
        case 0x45b1b0u: goto label_45b1b0;
        case 0x45b1b4u: goto label_45b1b4;
        case 0x45b1b8u: goto label_45b1b8;
        case 0x45b1bcu: goto label_45b1bc;
        case 0x45b1c0u: goto label_45b1c0;
        case 0x45b1c4u: goto label_45b1c4;
        case 0x45b1c8u: goto label_45b1c8;
        case 0x45b1ccu: goto label_45b1cc;
        case 0x45b1d0u: goto label_45b1d0;
        case 0x45b1d4u: goto label_45b1d4;
        case 0x45b1d8u: goto label_45b1d8;
        case 0x45b1dcu: goto label_45b1dc;
        case 0x45b1e0u: goto label_45b1e0;
        case 0x45b1e4u: goto label_45b1e4;
        case 0x45b1e8u: goto label_45b1e8;
        case 0x45b1ecu: goto label_45b1ec;
        case 0x45b1f0u: goto label_45b1f0;
        case 0x45b1f4u: goto label_45b1f4;
        case 0x45b1f8u: goto label_45b1f8;
        case 0x45b1fcu: goto label_45b1fc;
        case 0x45b200u: goto label_45b200;
        case 0x45b204u: goto label_45b204;
        case 0x45b208u: goto label_45b208;
        case 0x45b20cu: goto label_45b20c;
        case 0x45b210u: goto label_45b210;
        case 0x45b214u: goto label_45b214;
        case 0x45b218u: goto label_45b218;
        case 0x45b21cu: goto label_45b21c;
        case 0x45b220u: goto label_45b220;
        case 0x45b224u: goto label_45b224;
        case 0x45b228u: goto label_45b228;
        case 0x45b22cu: goto label_45b22c;
        case 0x45b230u: goto label_45b230;
        case 0x45b234u: goto label_45b234;
        case 0x45b238u: goto label_45b238;
        case 0x45b23cu: goto label_45b23c;
        case 0x45b240u: goto label_45b240;
        case 0x45b244u: goto label_45b244;
        case 0x45b248u: goto label_45b248;
        case 0x45b24cu: goto label_45b24c;
        case 0x45b250u: goto label_45b250;
        case 0x45b254u: goto label_45b254;
        case 0x45b258u: goto label_45b258;
        case 0x45b25cu: goto label_45b25c;
        case 0x45b260u: goto label_45b260;
        case 0x45b264u: goto label_45b264;
        case 0x45b268u: goto label_45b268;
        case 0x45b26cu: goto label_45b26c;
        case 0x45b270u: goto label_45b270;
        case 0x45b274u: goto label_45b274;
        case 0x45b278u: goto label_45b278;
        case 0x45b27cu: goto label_45b27c;
        case 0x45b280u: goto label_45b280;
        case 0x45b284u: goto label_45b284;
        case 0x45b288u: goto label_45b288;
        case 0x45b28cu: goto label_45b28c;
        case 0x45b290u: goto label_45b290;
        case 0x45b294u: goto label_45b294;
        case 0x45b298u: goto label_45b298;
        case 0x45b29cu: goto label_45b29c;
        case 0x45b2a0u: goto label_45b2a0;
        case 0x45b2a4u: goto label_45b2a4;
        case 0x45b2a8u: goto label_45b2a8;
        case 0x45b2acu: goto label_45b2ac;
        case 0x45b2b0u: goto label_45b2b0;
        case 0x45b2b4u: goto label_45b2b4;
        case 0x45b2b8u: goto label_45b2b8;
        case 0x45b2bcu: goto label_45b2bc;
        case 0x45b2c0u: goto label_45b2c0;
        case 0x45b2c4u: goto label_45b2c4;
        case 0x45b2c8u: goto label_45b2c8;
        case 0x45b2ccu: goto label_45b2cc;
        case 0x45b2d0u: goto label_45b2d0;
        case 0x45b2d4u: goto label_45b2d4;
        case 0x45b2d8u: goto label_45b2d8;
        case 0x45b2dcu: goto label_45b2dc;
        case 0x45b2e0u: goto label_45b2e0;
        case 0x45b2e4u: goto label_45b2e4;
        case 0x45b2e8u: goto label_45b2e8;
        case 0x45b2ecu: goto label_45b2ec;
        case 0x45b2f0u: goto label_45b2f0;
        case 0x45b2f4u: goto label_45b2f4;
        case 0x45b2f8u: goto label_45b2f8;
        case 0x45b2fcu: goto label_45b2fc;
        case 0x45b300u: goto label_45b300;
        case 0x45b304u: goto label_45b304;
        case 0x45b308u: goto label_45b308;
        case 0x45b30cu: goto label_45b30c;
        case 0x45b310u: goto label_45b310;
        case 0x45b314u: goto label_45b314;
        case 0x45b318u: goto label_45b318;
        case 0x45b31cu: goto label_45b31c;
        case 0x45b320u: goto label_45b320;
        case 0x45b324u: goto label_45b324;
        case 0x45b328u: goto label_45b328;
        case 0x45b32cu: goto label_45b32c;
        case 0x45b330u: goto label_45b330;
        case 0x45b334u: goto label_45b334;
        case 0x45b338u: goto label_45b338;
        case 0x45b33cu: goto label_45b33c;
        case 0x45b340u: goto label_45b340;
        case 0x45b344u: goto label_45b344;
        case 0x45b348u: goto label_45b348;
        case 0x45b34cu: goto label_45b34c;
        case 0x45b350u: goto label_45b350;
        case 0x45b354u: goto label_45b354;
        case 0x45b358u: goto label_45b358;
        case 0x45b35cu: goto label_45b35c;
        case 0x45b360u: goto label_45b360;
        case 0x45b364u: goto label_45b364;
        case 0x45b368u: goto label_45b368;
        case 0x45b36cu: goto label_45b36c;
        case 0x45b370u: goto label_45b370;
        case 0x45b374u: goto label_45b374;
        case 0x45b378u: goto label_45b378;
        case 0x45b37cu: goto label_45b37c;
        case 0x45b380u: goto label_45b380;
        case 0x45b384u: goto label_45b384;
        case 0x45b388u: goto label_45b388;
        case 0x45b38cu: goto label_45b38c;
        case 0x45b390u: goto label_45b390;
        case 0x45b394u: goto label_45b394;
        case 0x45b398u: goto label_45b398;
        case 0x45b39cu: goto label_45b39c;
        case 0x45b3a0u: goto label_45b3a0;
        case 0x45b3a4u: goto label_45b3a4;
        case 0x45b3a8u: goto label_45b3a8;
        case 0x45b3acu: goto label_45b3ac;
        case 0x45b3b0u: goto label_45b3b0;
        case 0x45b3b4u: goto label_45b3b4;
        case 0x45b3b8u: goto label_45b3b8;
        case 0x45b3bcu: goto label_45b3bc;
        case 0x45b3c0u: goto label_45b3c0;
        case 0x45b3c4u: goto label_45b3c4;
        case 0x45b3c8u: goto label_45b3c8;
        case 0x45b3ccu: goto label_45b3cc;
        case 0x45b3d0u: goto label_45b3d0;
        case 0x45b3d4u: goto label_45b3d4;
        case 0x45b3d8u: goto label_45b3d8;
        case 0x45b3dcu: goto label_45b3dc;
        case 0x45b3e0u: goto label_45b3e0;
        case 0x45b3e4u: goto label_45b3e4;
        case 0x45b3e8u: goto label_45b3e8;
        case 0x45b3ecu: goto label_45b3ec;
        case 0x45b3f0u: goto label_45b3f0;
        case 0x45b3f4u: goto label_45b3f4;
        case 0x45b3f8u: goto label_45b3f8;
        case 0x45b3fcu: goto label_45b3fc;
        case 0x45b400u: goto label_45b400;
        case 0x45b404u: goto label_45b404;
        case 0x45b408u: goto label_45b408;
        case 0x45b40cu: goto label_45b40c;
        case 0x45b410u: goto label_45b410;
        case 0x45b414u: goto label_45b414;
        case 0x45b418u: goto label_45b418;
        case 0x45b41cu: goto label_45b41c;
        case 0x45b420u: goto label_45b420;
        case 0x45b424u: goto label_45b424;
        case 0x45b428u: goto label_45b428;
        case 0x45b42cu: goto label_45b42c;
        case 0x45b430u: goto label_45b430;
        case 0x45b434u: goto label_45b434;
        case 0x45b438u: goto label_45b438;
        case 0x45b43cu: goto label_45b43c;
        case 0x45b440u: goto label_45b440;
        case 0x45b444u: goto label_45b444;
        case 0x45b448u: goto label_45b448;
        case 0x45b44cu: goto label_45b44c;
        case 0x45b450u: goto label_45b450;
        case 0x45b454u: goto label_45b454;
        case 0x45b458u: goto label_45b458;
        case 0x45b45cu: goto label_45b45c;
        case 0x45b460u: goto label_45b460;
        case 0x45b464u: goto label_45b464;
        case 0x45b468u: goto label_45b468;
        case 0x45b46cu: goto label_45b46c;
        case 0x45b470u: goto label_45b470;
        case 0x45b474u: goto label_45b474;
        case 0x45b478u: goto label_45b478;
        case 0x45b47cu: goto label_45b47c;
        case 0x45b480u: goto label_45b480;
        case 0x45b484u: goto label_45b484;
        case 0x45b488u: goto label_45b488;
        case 0x45b48cu: goto label_45b48c;
        case 0x45b490u: goto label_45b490;
        case 0x45b494u: goto label_45b494;
        case 0x45b498u: goto label_45b498;
        case 0x45b49cu: goto label_45b49c;
        case 0x45b4a0u: goto label_45b4a0;
        case 0x45b4a4u: goto label_45b4a4;
        case 0x45b4a8u: goto label_45b4a8;
        case 0x45b4acu: goto label_45b4ac;
        case 0x45b4b0u: goto label_45b4b0;
        case 0x45b4b4u: goto label_45b4b4;
        case 0x45b4b8u: goto label_45b4b8;
        case 0x45b4bcu: goto label_45b4bc;
        case 0x45b4c0u: goto label_45b4c0;
        case 0x45b4c4u: goto label_45b4c4;
        case 0x45b4c8u: goto label_45b4c8;
        case 0x45b4ccu: goto label_45b4cc;
        case 0x45b4d0u: goto label_45b4d0;
        case 0x45b4d4u: goto label_45b4d4;
        case 0x45b4d8u: goto label_45b4d8;
        case 0x45b4dcu: goto label_45b4dc;
        case 0x45b4e0u: goto label_45b4e0;
        case 0x45b4e4u: goto label_45b4e4;
        case 0x45b4e8u: goto label_45b4e8;
        case 0x45b4ecu: goto label_45b4ec;
        case 0x45b4f0u: goto label_45b4f0;
        case 0x45b4f4u: goto label_45b4f4;
        case 0x45b4f8u: goto label_45b4f8;
        case 0x45b4fcu: goto label_45b4fc;
        case 0x45b500u: goto label_45b500;
        case 0x45b504u: goto label_45b504;
        case 0x45b508u: goto label_45b508;
        case 0x45b50cu: goto label_45b50c;
        case 0x45b510u: goto label_45b510;
        case 0x45b514u: goto label_45b514;
        case 0x45b518u: goto label_45b518;
        case 0x45b51cu: goto label_45b51c;
        case 0x45b520u: goto label_45b520;
        case 0x45b524u: goto label_45b524;
        case 0x45b528u: goto label_45b528;
        case 0x45b52cu: goto label_45b52c;
        case 0x45b530u: goto label_45b530;
        case 0x45b534u: goto label_45b534;
        case 0x45b538u: goto label_45b538;
        case 0x45b53cu: goto label_45b53c;
        case 0x45b540u: goto label_45b540;
        case 0x45b544u: goto label_45b544;
        case 0x45b548u: goto label_45b548;
        case 0x45b54cu: goto label_45b54c;
        case 0x45b550u: goto label_45b550;
        case 0x45b554u: goto label_45b554;
        case 0x45b558u: goto label_45b558;
        case 0x45b55cu: goto label_45b55c;
        case 0x45b560u: goto label_45b560;
        case 0x45b564u: goto label_45b564;
        case 0x45b568u: goto label_45b568;
        case 0x45b56cu: goto label_45b56c;
        case 0x45b570u: goto label_45b570;
        case 0x45b574u: goto label_45b574;
        case 0x45b578u: goto label_45b578;
        case 0x45b57cu: goto label_45b57c;
        case 0x45b580u: goto label_45b580;
        case 0x45b584u: goto label_45b584;
        case 0x45b588u: goto label_45b588;
        case 0x45b58cu: goto label_45b58c;
        case 0x45b590u: goto label_45b590;
        case 0x45b594u: goto label_45b594;
        case 0x45b598u: goto label_45b598;
        case 0x45b59cu: goto label_45b59c;
        default: break;
    }

    ctx->pc = 0x45ac00u;

label_45ac00:
    // 0x45ac00: 0x3e00008  jr          $ra
label_45ac04:
    if (ctx->pc == 0x45AC04u) {
        ctx->pc = 0x45AC04u;
            // 0x45ac04: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->pc = 0x45AC08u;
        goto label_45ac08;
    }
    ctx->pc = 0x45AC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45AC00u;
            // 0x45ac04: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45AC08u;
label_45ac08:
    // 0x45ac08: 0x0  nop
    ctx->pc = 0x45ac08u;
    // NOP
label_45ac0c:
    // 0x45ac0c: 0x0  nop
    ctx->pc = 0x45ac0cu;
    // NOP
label_45ac10:
    // 0x45ac10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x45ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_45ac14:
    // 0x45ac14: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x45ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_45ac18:
    // 0x45ac18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_45ac1c:
    // 0x45ac1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x45ac1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45ac20:
    // 0x45ac20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45ac24:
    // 0x45ac24: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x45ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_45ac28:
    // 0x45ac28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45ac2c:
    // 0x45ac2c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x45ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_45ac30:
    // 0x45ac30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45ac30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45ac34:
    // 0x45ac34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45ac34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45ac38:
    // 0x45ac38: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x45ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ac3c:
    // 0x45ac3c: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x45ac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_45ac40:
    // 0x45ac40: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x45ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ac44:
    // 0x45ac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45ac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ac48:
    // 0x45ac48: 0x0  nop
    ctx->pc = 0x45ac48u;
    // NOP
label_45ac4c:
    // 0x45ac4c: 0xe4810164  swc1        $f1, 0x164($a0)
    ctx->pc = 0x45ac4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
label_45ac50:
    // 0x45ac50: 0xc48100f4  lwc1        $f1, 0xF4($a0)
    ctx->pc = 0x45ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ac54:
    // 0x45ac54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x45ac54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_45ac58:
    // 0x45ac58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45ac58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_45ac5c:
    // 0x45ac5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45ac5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45ac60:
    // 0x45ac60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x45ac60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_45ac64:
    // 0x45ac64: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x45ac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_45ac68:
    // 0x45ac68: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x45ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45ac6c:
    // 0x45ac6c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x45ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ac70:
    // 0x45ac70: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x45ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ac74:
    // 0x45ac74: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x45ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ac78:
    // 0x45ac78: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x45ac78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_45ac7c:
    // 0x45ac7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45ac80:
    // 0x45ac80: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x45ac80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_45ac84:
    // 0x45ac84: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x45ac84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_45ac88:
    // 0x45ac88: 0xc04c968  jal         func_1325A0
label_45ac8c:
    if (ctx->pc == 0x45AC8Cu) {
        ctx->pc = 0x45AC8Cu;
            // 0x45ac8c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x45AC90u;
        goto label_45ac90;
    }
    ctx->pc = 0x45AC88u;
    SET_GPR_U32(ctx, 31, 0x45AC90u);
    ctx->pc = 0x45AC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AC88u;
            // 0x45ac8c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AC90u; }
        if (ctx->pc != 0x45AC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AC90u; }
        if (ctx->pc != 0x45AC90u) { return; }
    }
    ctx->pc = 0x45AC90u;
label_45ac90:
    // 0x45ac90: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x45ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ac94:
    // 0x45ac94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45ac98:
    // 0x45ac98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45ac98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ac9c:
    // 0x45ac9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45ac9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45aca0:
    // 0x45aca0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x45aca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_45aca4:
    // 0x45aca4: 0xc04ca18  jal         func_132860
label_45aca8:
    if (ctx->pc == 0x45ACA8u) {
        ctx->pc = 0x45ACA8u;
            // 0x45aca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45ACACu;
        goto label_45acac;
    }
    ctx->pc = 0x45ACA4u;
    SET_GPR_U32(ctx, 31, 0x45ACACu);
    ctx->pc = 0x45ACA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ACA4u;
            // 0x45aca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ACACu; }
        if (ctx->pc != 0x45ACACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ACACu; }
        if (ctx->pc != 0x45ACACu) { return; }
    }
    ctx->pc = 0x45ACACu;
label_45acac:
    // 0x45acac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45acacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45acb0:
    // 0x45acb0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x45acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_45acb4:
    // 0x45acb4: 0xc04c72c  jal         func_131CB0
label_45acb8:
    if (ctx->pc == 0x45ACB8u) {
        ctx->pc = 0x45ACB8u;
            // 0x45acb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45ACBCu;
        goto label_45acbc;
    }
    ctx->pc = 0x45ACB4u;
    SET_GPR_U32(ctx, 31, 0x45ACBCu);
    ctx->pc = 0x45ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ACB4u;
            // 0x45acb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ACBCu; }
        if (ctx->pc != 0x45ACBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ACBCu; }
        if (ctx->pc != 0x45ACBCu) { return; }
    }
    ctx->pc = 0x45ACBCu;
label_45acbc:
    // 0x45acbc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x45acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45acc0:
    // 0x45acc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45acc4:
    // 0x45acc4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x45acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45acc8:
    // 0x45acc8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x45acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45accc:
    // 0x45accc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x45acccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_45acd0:
    // 0x45acd0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x45acd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_45acd4:
    // 0x45acd4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x45acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45acd8:
    // 0x45acd8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x45acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45acdc:
    // 0x45acdc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x45acdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_45ace0:
    // 0x45ace0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x45ace0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_45ace4:
    // 0x45ace4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x45ace4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_45ace8:
    // 0x45ace8: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x45ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45acec:
    // 0x45acec: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x45acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45acf0:
    // 0x45acf0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x45acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45acf4:
    // 0x45acf4: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x45acf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_45acf8:
    // 0x45acf8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x45acf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_45acfc:
    // 0x45acfc: 0xc0d8a80  jal         func_362A00
label_45ad00:
    if (ctx->pc == 0x45AD00u) {
        ctx->pc = 0x45AD00u;
            // 0x45ad00: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x45AD04u;
        goto label_45ad04;
    }
    ctx->pc = 0x45ACFCu;
    SET_GPR_U32(ctx, 31, 0x45AD04u);
    ctx->pc = 0x45AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ACFCu;
            // 0x45ad00: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD04u; }
        if (ctx->pc != 0x45AD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD04u; }
        if (ctx->pc != 0x45AD04u) { return; }
    }
    ctx->pc = 0x45AD04u;
label_45ad04:
    // 0x45ad04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45ad04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ad08:
    // 0x45ad08: 0xc0d8a80  jal         func_362A00
label_45ad0c:
    if (ctx->pc == 0x45AD0Cu) {
        ctx->pc = 0x45AD0Cu;
            // 0x45ad0c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45AD10u;
        goto label_45ad10;
    }
    ctx->pc = 0x45AD08u;
    SET_GPR_U32(ctx, 31, 0x45AD10u);
    ctx->pc = 0x45AD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD08u;
            // 0x45ad0c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD10u; }
        if (ctx->pc != 0x45AD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD10u; }
        if (ctx->pc != 0x45AD10u) { return; }
    }
    ctx->pc = 0x45AD10u;
label_45ad10:
    // 0x45ad10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45ad10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45ad14:
    // 0x45ad14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45ad14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ad18:
    // 0x45ad18: 0xc0d8a6c  jal         func_3629B0
label_45ad1c:
    if (ctx->pc == 0x45AD1Cu) {
        ctx->pc = 0x45AD1Cu;
            // 0x45ad1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x45AD20u;
        goto label_45ad20;
    }
    ctx->pc = 0x45AD18u;
    SET_GPR_U32(ctx, 31, 0x45AD20u);
    ctx->pc = 0x45AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD18u;
            // 0x45ad1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD20u; }
        if (ctx->pc != 0x45AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD20u; }
        if (ctx->pc != 0x45AD20u) { return; }
    }
    ctx->pc = 0x45AD20u;
label_45ad20:
    // 0x45ad20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45ad24:
    // 0x45ad24: 0xc0b6e90  jal         func_2DBA40
label_45ad28:
    if (ctx->pc == 0x45AD28u) {
        ctx->pc = 0x45AD28u;
            // 0x45ad28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45AD2Cu;
        goto label_45ad2c;
    }
    ctx->pc = 0x45AD24u;
    SET_GPR_U32(ctx, 31, 0x45AD2Cu);
    ctx->pc = 0x45AD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD24u;
            // 0x45ad28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD2Cu; }
        if (ctx->pc != 0x45AD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD2Cu; }
        if (ctx->pc != 0x45AD2Cu) { return; }
    }
    ctx->pc = 0x45AD2Cu;
label_45ad2c:
    // 0x45ad2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x45ad2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_45ad30:
    // 0x45ad30: 0xc0d8a80  jal         func_362A00
label_45ad34:
    if (ctx->pc == 0x45AD34u) {
        ctx->pc = 0x45AD34u;
            // 0x45ad34: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45AD38u;
        goto label_45ad38;
    }
    ctx->pc = 0x45AD30u;
    SET_GPR_U32(ctx, 31, 0x45AD38u);
    ctx->pc = 0x45AD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD30u;
            // 0x45ad34: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD38u; }
        if (ctx->pc != 0x45AD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD38u; }
        if (ctx->pc != 0x45AD38u) { return; }
    }
    ctx->pc = 0x45AD38u;
label_45ad38:
    // 0x45ad38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45ad38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45ad3c:
    // 0x45ad3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ad40:
    // 0x45ad40: 0xc0d8a54  jal         func_362950
label_45ad44:
    if (ctx->pc == 0x45AD44u) {
        ctx->pc = 0x45AD44u;
            // 0x45ad44: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x45AD48u;
        goto label_45ad48;
    }
    ctx->pc = 0x45AD40u;
    SET_GPR_U32(ctx, 31, 0x45AD48u);
    ctx->pc = 0x45AD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD40u;
            // 0x45ad44: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD48u; }
        if (ctx->pc != 0x45AD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD48u; }
        if (ctx->pc != 0x45AD48u) { return; }
    }
    ctx->pc = 0x45AD48u;
label_45ad48:
    // 0x45ad48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45ad4c:
    // 0x45ad4c: 0xc0b6e90  jal         func_2DBA40
label_45ad50:
    if (ctx->pc == 0x45AD50u) {
        ctx->pc = 0x45AD50u;
            // 0x45ad50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45AD54u;
        goto label_45ad54;
    }
    ctx->pc = 0x45AD4Cu;
    SET_GPR_U32(ctx, 31, 0x45AD54u);
    ctx->pc = 0x45AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD4Cu;
            // 0x45ad50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD54u; }
        if (ctx->pc != 0x45AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD54u; }
        if (ctx->pc != 0x45AD54u) { return; }
    }
    ctx->pc = 0x45AD54u;
label_45ad54:
    // 0x45ad54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x45ad54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_45ad58:
    // 0x45ad58: 0xc0d8a80  jal         func_362A00
label_45ad5c:
    if (ctx->pc == 0x45AD5Cu) {
        ctx->pc = 0x45AD5Cu;
            // 0x45ad5c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45AD60u;
        goto label_45ad60;
    }
    ctx->pc = 0x45AD58u;
    SET_GPR_U32(ctx, 31, 0x45AD60u);
    ctx->pc = 0x45AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD58u;
            // 0x45ad5c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD60u; }
        if (ctx->pc != 0x45AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD60u; }
        if (ctx->pc != 0x45AD60u) { return; }
    }
    ctx->pc = 0x45AD60u;
label_45ad60:
    // 0x45ad60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45ad60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45ad64:
    // 0x45ad64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ad68:
    // 0x45ad68: 0xc0d8a3c  jal         func_3628F0
label_45ad6c:
    if (ctx->pc == 0x45AD6Cu) {
        ctx->pc = 0x45AD6Cu;
            // 0x45ad6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x45AD70u;
        goto label_45ad70;
    }
    ctx->pc = 0x45AD68u;
    SET_GPR_U32(ctx, 31, 0x45AD70u);
    ctx->pc = 0x45AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD68u;
            // 0x45ad6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD70u; }
        if (ctx->pc != 0x45AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD70u; }
        if (ctx->pc != 0x45AD70u) { return; }
    }
    ctx->pc = 0x45AD70u;
label_45ad70:
    // 0x45ad70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45ad74:
    // 0x45ad74: 0xc0b6e00  jal         func_2DB800
label_45ad78:
    if (ctx->pc == 0x45AD78u) {
        ctx->pc = 0x45AD78u;
            // 0x45ad78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AD7Cu;
        goto label_45ad7c;
    }
    ctx->pc = 0x45AD74u;
    SET_GPR_U32(ctx, 31, 0x45AD7Cu);
    ctx->pc = 0x45AD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD74u;
            // 0x45ad78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD7Cu; }
        if (ctx->pc != 0x45AD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD7Cu; }
        if (ctx->pc != 0x45AD7Cu) { return; }
    }
    ctx->pc = 0x45AD7Cu;
label_45ad7c:
    // 0x45ad7c: 0xc0d8a80  jal         func_362A00
label_45ad80:
    if (ctx->pc == 0x45AD80u) {
        ctx->pc = 0x45AD80u;
            // 0x45ad80: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45AD84u;
        goto label_45ad84;
    }
    ctx->pc = 0x45AD7Cu;
    SET_GPR_U32(ctx, 31, 0x45AD84u);
    ctx->pc = 0x45AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD7Cu;
            // 0x45ad80: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD84u; }
        if (ctx->pc != 0x45AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD84u; }
        if (ctx->pc != 0x45AD84u) { return; }
    }
    ctx->pc = 0x45AD84u;
label_45ad84:
    // 0x45ad84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45ad84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ad88:
    // 0x45ad88: 0xc0d8a80  jal         func_362A00
label_45ad8c:
    if (ctx->pc == 0x45AD8Cu) {
        ctx->pc = 0x45AD8Cu;
            // 0x45ad8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45AD90u;
        goto label_45ad90;
    }
    ctx->pc = 0x45AD88u;
    SET_GPR_U32(ctx, 31, 0x45AD90u);
    ctx->pc = 0x45AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD88u;
            // 0x45ad8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD90u; }
        if (ctx->pc != 0x45AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD90u; }
        if (ctx->pc != 0x45AD90u) { return; }
    }
    ctx->pc = 0x45AD90u;
label_45ad90:
    // 0x45ad90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45ad94:
    // 0x45ad94: 0xc0d8a2c  jal         func_3628B0
label_45ad98:
    if (ctx->pc == 0x45AD98u) {
        ctx->pc = 0x45AD98u;
            // 0x45ad98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AD9Cu;
        goto label_45ad9c;
    }
    ctx->pc = 0x45AD94u;
    SET_GPR_U32(ctx, 31, 0x45AD9Cu);
    ctx->pc = 0x45AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD94u;
            // 0x45ad98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD9Cu; }
        if (ctx->pc != 0x45AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AD9Cu; }
        if (ctx->pc != 0x45AD9Cu) { return; }
    }
    ctx->pc = 0x45AD9Cu;
label_45ad9c:
    // 0x45ad9c: 0xc0d8a24  jal         func_362890
label_45ada0:
    if (ctx->pc == 0x45ADA0u) {
        ctx->pc = 0x45ADA0u;
            // 0x45ada0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x45ADA4u;
        goto label_45ada4;
    }
    ctx->pc = 0x45AD9Cu;
    SET_GPR_U32(ctx, 31, 0x45ADA4u);
    ctx->pc = 0x45ADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AD9Cu;
            // 0x45ada0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ADA4u; }
        if (ctx->pc != 0x45ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ADA4u; }
        if (ctx->pc != 0x45ADA4u) { return; }
    }
    ctx->pc = 0x45ADA4u;
label_45ada4:
    // 0x45ada4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_45ada8:
    if (ctx->pc == 0x45ADA8u) {
        ctx->pc = 0x45ADA8u;
            // 0x45ada8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x45ADACu;
        goto label_45adac;
    }
    ctx->pc = 0x45ADA4u;
    {
        const bool branch_taken_0x45ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ada4) {
            ctx->pc = 0x45ADA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45ADA4u;
            // 0x45ada8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45ADBCu;
            goto label_45adbc;
        }
    }
    ctx->pc = 0x45ADACu;
label_45adac:
    // 0x45adac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45adb0:
    // 0x45adb0: 0xc0d8a14  jal         func_362850
label_45adb4:
    if (ctx->pc == 0x45ADB4u) {
        ctx->pc = 0x45ADB4u;
            // 0x45adb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45ADB8u;
        goto label_45adb8;
    }
    ctx->pc = 0x45ADB0u;
    SET_GPR_U32(ctx, 31, 0x45ADB8u);
    ctx->pc = 0x45ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45ADB0u;
            // 0x45adb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ADB8u; }
        if (ctx->pc != 0x45ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45ADB8u; }
        if (ctx->pc != 0x45ADB8u) { return; }
    }
    ctx->pc = 0x45ADB8u;
label_45adb8:
    // 0x45adb8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x45adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45adbc:
    // 0x45adbc: 0x3c03c234  lui         $v1, 0xC234
    ctx->pc = 0x45adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49716 << 16));
label_45adc0:
    // 0x45adc0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x45adc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45adc4:
    // 0x45adc4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x45adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_45adc8:
    // 0x45adc8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x45adc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_45adcc:
    // 0x45adcc: 0x34640b60  ori         $a0, $v1, 0xB60
    ctx->pc = 0x45adccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_45add0:
    // 0x45add0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x45add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45add4:
    // 0x45add4: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x45add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_45add8:
    // 0x45add8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x45add8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45addc:
    // 0x45addc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45addcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ade0:
    // 0x45ade0: 0x0  nop
    ctx->pc = 0x45ade0u;
    // NOP
label_45ade4:
    // 0x45ade4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x45ade4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_45ade8:
    // 0x45ade8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x45ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45adec:
    // 0x45adec: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x45adecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_45adf0:
    // 0x45adf0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x45adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45adf4:
    // 0x45adf4: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x45adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
label_45adf8:
    // 0x45adf8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x45adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45adfc:
    // 0x45adfc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x45adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_45ae00:
    // 0x45ae00: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x45ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ae04:
    // 0x45ae04: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x45ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_45ae08:
    // 0x45ae08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x45ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ae0c:
    // 0x45ae0c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x45ae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_45ae10:
    // 0x45ae10: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x45ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ae14:
    // 0x45ae14: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x45ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_45ae18:
    // 0x45ae18: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x45ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ae1c:
    // 0x45ae1c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x45ae1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
label_45ae20:
    // 0x45ae20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x45ae20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_45ae24:
    // 0x45ae24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45ae24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45ae28:
    // 0x45ae28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x45ae28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_45ae2c:
    // 0x45ae2c: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x45ae2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_45ae30:
    // 0x45ae30: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x45ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ae34:
    // 0x45ae34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x45ae34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_45ae38:
    // 0x45ae38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x45ae38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_45ae3c:
    // 0x45ae3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45ae3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45ae40:
    // 0x45ae40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x45ae40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_45ae44:
    // 0x45ae44: 0xe6000160  swc1        $f0, 0x160($s0)
    ctx->pc = 0x45ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
label_45ae48:
    // 0x45ae48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45ae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_45ae4c:
    // 0x45ae4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45ae50:
    // 0x45ae50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45ae50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45ae54:
    // 0x45ae54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45ae54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45ae58:
    // 0x45ae58: 0x3e00008  jr          $ra
label_45ae5c:
    if (ctx->pc == 0x45AE5Cu) {
        ctx->pc = 0x45AE5Cu;
            // 0x45ae5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45AE60u;
        goto label_45ae60;
    }
    ctx->pc = 0x45AE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45AE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45AE58u;
            // 0x45ae5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45AE60u;
label_45ae60:
    // 0x45ae60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_45ae64:
    // 0x45ae64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45ae68:
    // 0x45ae68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45ae6c:
    // 0x45ae6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45ae70:
    // 0x45ae70: 0xc0e393c  jal         func_38E4F0
label_45ae74:
    if (ctx->pc == 0x45AE74u) {
        ctx->pc = 0x45AE74u;
            // 0x45ae74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AE78u;
        goto label_45ae78;
    }
    ctx->pc = 0x45AE70u;
    SET_GPR_U32(ctx, 31, 0x45AE78u);
    ctx->pc = 0x45AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AE70u;
            // 0x45ae74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AE78u; }
        if (ctx->pc != 0x45AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AE78u; }
        if (ctx->pc != 0x45AE78u) { return; }
    }
    ctx->pc = 0x45AE78u;
label_45ae78:
    // 0x45ae78: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x45ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_45ae7c:
    // 0x45ae7c: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x45ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_45ae80:
    // 0x45ae80: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x45ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_45ae84:
    // 0x45ae84: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x45ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_45ae88:
    // 0x45ae88: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x45ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_45ae8c:
    // 0x45ae8c: 0x3c05420c  lui         $a1, 0x420C
    ctx->pc = 0x45ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16908 << 16));
label_45ae90:
    // 0x45ae90: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x45ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_45ae94:
    // 0x45ae94: 0x3c04c20c  lui         $a0, 0xC20C
    ctx->pc = 0x45ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49676 << 16));
label_45ae98:
    // 0x45ae98: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x45ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_45ae9c:
    // 0x45ae9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45aea0:
    // 0x45aea0: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x45aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_45aea4:
    // 0x45aea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45aea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aea8:
    // 0x45aea8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x45aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_45aeac:
    // 0x45aeac: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x45aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45aeb0:
    // 0x45aeb0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x45aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_45aeb4:
    // 0x45aeb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x45aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_45aeb8:
    // 0x45aeb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45aebc:
    // 0x45aebc: 0xc08bff0  jal         func_22FFC0
label_45aec0:
    if (ctx->pc == 0x45AEC0u) {
        ctx->pc = 0x45AEC0u;
            // 0x45aec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AEC4u;
        goto label_45aec4;
    }
    ctx->pc = 0x45AEBCu;
    SET_GPR_U32(ctx, 31, 0x45AEC4u);
    ctx->pc = 0x45AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AEBCu;
            // 0x45aec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AEC4u; }
        if (ctx->pc != 0x45AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AEC4u; }
        if (ctx->pc != 0x45AEC4u) { return; }
    }
    ctx->pc = 0x45AEC4u;
label_45aec4:
    // 0x45aec4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45aec8:
    // 0x45aec8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45aecc:
    // 0x45aecc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45aed0:
    // 0x45aed0: 0xc08914c  jal         func_224530
label_45aed4:
    if (ctx->pc == 0x45AED4u) {
        ctx->pc = 0x45AED4u;
            // 0x45aed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AED8u;
        goto label_45aed8;
    }
    ctx->pc = 0x45AED0u;
    SET_GPR_U32(ctx, 31, 0x45AED8u);
    ctx->pc = 0x45AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AED0u;
            // 0x45aed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AED8u; }
        if (ctx->pc != 0x45AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AED8u; }
        if (ctx->pc != 0x45AED8u) { return; }
    }
    ctx->pc = 0x45AED8u;
label_45aed8:
    // 0x45aed8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45aedc:
    // 0x45aedc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x45aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45aee0:
    // 0x45aee0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x45aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45aee4:
    // 0x45aee4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x45aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45aee8:
    // 0x45aee8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x45aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45aeec:
    // 0x45aeec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x45aeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45aef0:
    // 0x45aef0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x45aef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_45aef4:
    // 0x45aef4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x45aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_45aef8:
    // 0x45aef8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x45aef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_45aefc:
    // 0x45aefc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x45aefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_45af00:
    // 0x45af00: 0xc60300ec  lwc1        $f3, 0xEC($s0)
    ctx->pc = 0x45af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45af04:
    // 0x45af04: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x45af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45af08:
    // 0x45af08: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x45af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45af0c:
    // 0x45af0c: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x45af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45af10:
    // 0x45af10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x45af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_45af14:
    // 0x45af14: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x45af14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_45af18:
    // 0x45af18: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x45af18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_45af1c:
    // 0x45af1c: 0xc0892b0  jal         func_224AC0
label_45af20:
    if (ctx->pc == 0x45AF20u) {
        ctx->pc = 0x45AF20u;
            // 0x45af20: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x45AF24u;
        goto label_45af24;
    }
    ctx->pc = 0x45AF1Cu;
    SET_GPR_U32(ctx, 31, 0x45AF24u);
    ctx->pc = 0x45AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AF1Cu;
            // 0x45af20: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AF24u; }
        if (ctx->pc != 0x45AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AF24u; }
        if (ctx->pc != 0x45AF24u) { return; }
    }
    ctx->pc = 0x45AF24u;
label_45af24:
    // 0x45af24: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x45af24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_45af28:
    // 0x45af28: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x45af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_45af2c:
    // 0x45af2c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x45af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_45af30:
    // 0x45af30: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x45af30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_45af34:
    // 0x45af34: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x45af34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45af38:
    // 0x45af38: 0xc088b74  jal         func_222DD0
label_45af3c:
    if (ctx->pc == 0x45AF3Cu) {
        ctx->pc = 0x45AF3Cu;
            // 0x45af3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AF40u;
        goto label_45af40;
    }
    ctx->pc = 0x45AF38u;
    SET_GPR_U32(ctx, 31, 0x45AF40u);
    ctx->pc = 0x45AF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AF38u;
            // 0x45af3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AF40u; }
        if (ctx->pc != 0x45AF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AF40u; }
        if (ctx->pc != 0x45AF40u) { return; }
    }
    ctx->pc = 0x45AF40u;
label_45af40:
    // 0x45af40: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x45af40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_45af44:
    // 0x45af44: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x45af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_45af48:
    // 0x45af48: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x45af48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_45af4c:
    // 0x45af4c: 0x320f809  jalr        $t9
label_45af50:
    if (ctx->pc == 0x45AF50u) {
        ctx->pc = 0x45AF50u;
            // 0x45af50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45AF54u;
        goto label_45af54;
    }
    ctx->pc = 0x45AF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45AF54u);
        ctx->pc = 0x45AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45AF4Cu;
            // 0x45af50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45AF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45AF54u; }
            if (ctx->pc != 0x45AF54u) { return; }
        }
        }
    }
    ctx->pc = 0x45AF54u;
label_45af54:
    // 0x45af54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45af58:
    // 0x45af58: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x45af58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
label_45af5c:
    // 0x45af5c: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x45af5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_45af60:
    // 0x45af60: 0xa2020066  sb          $v0, 0x66($s0)
    ctx->pc = 0x45af60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 2));
label_45af64:
    // 0x45af64: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x45af64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_45af68:
    // 0x45af68: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x45af68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
label_45af6c:
    // 0x45af6c: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x45af6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_45af70:
    // 0x45af70: 0xa202006a  sb          $v0, 0x6A($s0)
    ctx->pc = 0x45af70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 2));
label_45af74:
    // 0x45af74: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x45af74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_45af78:
    // 0x45af78: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x45af78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_45af7c:
    // 0x45af7c: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x45af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_45af80:
    // 0x45af80: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x45af80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_45af84:
    // 0x45af84: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x45af84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_45af88:
    // 0x45af88: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x45af88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_45af8c:
    // 0x45af8c: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x45af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_45af90:
    // 0x45af90: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x45af90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_45af94:
    // 0x45af94: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x45af94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_45af98:
    // 0x45af98: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x45af98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_45af9c:
    // 0x45af9c: 0xc122c94  jal         func_48B250
label_45afa0:
    if (ctx->pc == 0x45AFA0u) {
        ctx->pc = 0x45AFA0u;
            // 0x45afa0: 0x8e040170  lw          $a0, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->pc = 0x45AFA4u;
        goto label_45afa4;
    }
    ctx->pc = 0x45AF9Cu;
    SET_GPR_U32(ctx, 31, 0x45AFA4u);
    ctx->pc = 0x45AFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AF9Cu;
            // 0x45afa0: 0x8e040170  lw          $a0, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AFA4u; }
        if (ctx->pc != 0x45AFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AFA4u; }
        if (ctx->pc != 0x45AFA4u) { return; }
    }
    ctx->pc = 0x45AFA4u;
label_45afa4:
    // 0x45afa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45afa8:
    // 0x45afa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45afa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45afac:
    // 0x45afac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45afacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45afb0:
    // 0x45afb0: 0x3e00008  jr          $ra
label_45afb4:
    if (ctx->pc == 0x45AFB4u) {
        ctx->pc = 0x45AFB4u;
            // 0x45afb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45AFB8u;
        goto label_45afb8;
    }
    ctx->pc = 0x45AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45AFB0u;
            // 0x45afb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45AFB8u;
label_45afb8:
    // 0x45afb8: 0x0  nop
    ctx->pc = 0x45afb8u;
    // NOP
label_45afbc:
    // 0x45afbc: 0x0  nop
    ctx->pc = 0x45afbcu;
    // NOP
label_45afc0:
    // 0x45afc0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x45afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_45afc4:
    // 0x45afc4: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x45afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_45afc8:
    // 0x45afc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x45afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_45afcc:
    // 0x45afcc: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x45afccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
label_45afd0:
    // 0x45afd0: 0x84a30d98  lh          $v1, 0xD98($a1)
    ctx->pc = 0x45afd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 3480)));
label_45afd4:
    // 0x45afd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45afd8:
    // 0x45afd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45afdc:
    // 0x45afdc: 0x24640134  addiu       $a0, $v1, 0x134
    ctx->pc = 0x45afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
label_45afe0:
    // 0x45afe0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x45afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_45afe4:
    // 0x45afe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_45afe8:
    if (ctx->pc == 0x45AFE8u) {
        ctx->pc = 0x45AFECu;
        goto label_45afec;
    }
    ctx->pc = 0x45AFE4u;
    {
        const bool branch_taken_0x45afe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45afe4) {
            ctx->pc = 0x45AFF0u;
            goto label_45aff0;
        }
    }
    ctx->pc = 0x45AFECu;
label_45afec:
    // 0x45afec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x45afecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_45aff0:
    // 0x45aff0: 0x3e00008  jr          $ra
label_45aff4:
    if (ctx->pc == 0x45AFF4u) {
        ctx->pc = 0x45AFF8u;
        goto label_45aff8;
    }
    ctx->pc = 0x45AFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45AFF8u;
label_45aff8:
    // 0x45aff8: 0x0  nop
    ctx->pc = 0x45aff8u;
    // NOP
label_45affc:
    // 0x45affc: 0x0  nop
    ctx->pc = 0x45affcu;
    // NOP
label_45b000:
    // 0x45b000: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x45b000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_45b004:
    // 0x45b004: 0x8cc300f8  lw          $v1, 0xF8($a2)
    ctx->pc = 0x45b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
label_45b008:
    // 0x45b008: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_45b00c:
    if (ctx->pc == 0x45B00Cu) {
        ctx->pc = 0x45B00Cu;
            // 0x45b00c: 0x84a30d98  lh          $v1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->pc = 0x45B010u;
        goto label_45b010;
    }
    ctx->pc = 0x45B008u;
    {
        const bool branch_taken_0x45b008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b008) {
            ctx->pc = 0x45B00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B008u;
            // 0x45b00c: 0x84a30d98  lh          $v1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B048u;
            goto label_45b048;
        }
    }
    ctx->pc = 0x45B010u;
label_45b010:
    // 0x45b010: 0xc4c100fc  lwc1        $f1, 0xFC($a2)
    ctx->pc = 0x45b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45b014:
    // 0x45b014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45b014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45b018:
    // 0x45b018: 0x0  nop
    ctx->pc = 0x45b018u;
    // NOP
label_45b01c:
    // 0x45b01c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x45b01cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45b020:
    // 0x45b020: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_45b024:
    if (ctx->pc == 0x45B024u) {
        ctx->pc = 0x45B028u;
        goto label_45b028;
    }
    ctx->pc = 0x45B020u;
    {
        const bool branch_taken_0x45b020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45b020) {
            ctx->pc = 0x45B044u;
            goto label_45b044;
        }
    }
    ctx->pc = 0x45B028u;
label_45b028:
    // 0x45b028: 0x80a30e3f  lb          $v1, 0xE3F($a1)
    ctx->pc = 0x45b028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
label_45b02c:
    // 0x45b02c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_45b030:
    if (ctx->pc == 0x45B030u) {
        ctx->pc = 0x45B030u;
            // 0x45b030: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x45B034u;
        goto label_45b034;
    }
    ctx->pc = 0x45B02Cu;
    {
        const bool branch_taken_0x45b02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b02c) {
            ctx->pc = 0x45B030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B02Cu;
            // 0x45b030: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B040u;
            goto label_45b040;
        }
    }
    ctx->pc = 0x45B034u;
label_45b034:
    // 0x45b034: 0xc4c00164  lwc1        $f0, 0x164($a2)
    ctx->pc = 0x45b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45b038:
    // 0x45b038: 0x10000002  b           . + 4 + (0x2 << 2)
label_45b03c:
    if (ctx->pc == 0x45B03Cu) {
        ctx->pc = 0x45B03Cu;
            // 0x45b03c: 0xe4c000fc  swc1        $f0, 0xFC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 252), bits); }
        ctx->pc = 0x45B040u;
        goto label_45b040;
    }
    ctx->pc = 0x45B038u;
    {
        const bool branch_taken_0x45b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B038u;
            // 0x45b03c: 0xe4c000fc  swc1        $f0, 0xFC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b038) {
            ctx->pc = 0x45B044u;
            goto label_45b044;
        }
    }
    ctx->pc = 0x45B040u;
label_45b040:
    // 0x45b040: 0xacc300fc  sw          $v1, 0xFC($a2)
    ctx->pc = 0x45b040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 3));
label_45b044:
    // 0x45b044: 0x84a30d98  lh          $v1, 0xD98($a1)
    ctx->pc = 0x45b044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 3480)));
label_45b048:
    // 0x45b048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45b04c:
    // 0x45b04c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x45b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_45b050:
    // 0x45b050: 0x24640134  addiu       $a0, $v1, 0x134
    ctx->pc = 0x45b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
label_45b054:
    // 0x45b054: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x45b054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_45b058:
    // 0x45b058: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_45b05c:
    if (ctx->pc == 0x45B05Cu) {
        ctx->pc = 0x45B05Cu;
            // 0x45b05c: 0x8cc30130  lw          $v1, 0x130($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
        ctx->pc = 0x45B060u;
        goto label_45b060;
    }
    ctx->pc = 0x45B058u;
    {
        const bool branch_taken_0x45b058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b058) {
            ctx->pc = 0x45B05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B058u;
            // 0x45b05c: 0x8cc30130  lw          $v1, 0x130($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B068u;
            goto label_45b068;
        }
    }
    ctx->pc = 0x45B060u;
label_45b060:
    // 0x45b060: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x45b060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_45b064:
    // 0x45b064: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x45b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_45b068:
    // 0x45b068: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_45b06c:
    // 0x45b06c: 0x3e00008  jr          $ra
label_45b070:
    if (ctx->pc == 0x45B070u) {
        ctx->pc = 0x45B070u;
            // 0x45b070: 0xacc30130  sw          $v1, 0x130($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
        ctx->pc = 0x45B074u;
        goto label_45b074;
    }
    ctx->pc = 0x45B06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B06Cu;
            // 0x45b070: 0xacc30130  sw          $v1, 0x130($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B074u;
label_45b074:
    // 0x45b074: 0x0  nop
    ctx->pc = 0x45b074u;
    // NOP
label_45b078:
    // 0x45b078: 0x0  nop
    ctx->pc = 0x45b078u;
    // NOP
label_45b07c:
    // 0x45b07c: 0x0  nop
    ctx->pc = 0x45b07cu;
    // NOP
label_45b080:
    // 0x45b080: 0x3e00008  jr          $ra
label_45b084:
    if (ctx->pc == 0x45B084u) {
        ctx->pc = 0x45B084u;
            // 0x45b084: 0x240259e2  addiu       $v0, $zero, 0x59E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23010));
        ctx->pc = 0x45B088u;
        goto label_45b088;
    }
    ctx->pc = 0x45B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B080u;
            // 0x45b084: 0x240259e2  addiu       $v0, $zero, 0x59E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B088u;
label_45b088:
    // 0x45b088: 0x0  nop
    ctx->pc = 0x45b088u;
    // NOP
label_45b08c:
    // 0x45b08c: 0x0  nop
    ctx->pc = 0x45b08cu;
    // NOP
label_45b090:
    // 0x45b090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_45b094:
    // 0x45b094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_45b098:
    // 0x45b098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45b09c:
    // 0x45b09c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45b0a0:
    // 0x45b0a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x45b0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b0a4:
    // 0x45b0a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45b0a8:
    // 0x45b0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b0ac:
    // 0x45b0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b0b0:
    // 0x45b0b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x45b0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_45b0b4:
    // 0x45b0b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_45b0b8:
    if (ctx->pc == 0x45B0B8u) {
        ctx->pc = 0x45B0B8u;
            // 0x45b0b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B0BCu;
        goto label_45b0bc;
    }
    ctx->pc = 0x45B0B4u;
    {
        const bool branch_taken_0x45b0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B0B4u;
            // 0x45b0b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b0b4) {
            ctx->pc = 0x45B0F8u;
            goto label_45b0f8;
        }
    }
    ctx->pc = 0x45B0BCu;
label_45b0bc:
    // 0x45b0bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45b0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b0c0:
    // 0x45b0c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x45b0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b0c4:
    // 0x45b0c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45b0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b0c8:
    // 0x45b0c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x45b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_45b0cc:
    // 0x45b0cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x45b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45b0d0:
    // 0x45b0d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45b0d4:
    // 0x45b0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45b0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45b0d8:
    // 0x45b0d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45b0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45b0dc:
    // 0x45b0dc: 0x320f809  jalr        $t9
label_45b0e0:
    if (ctx->pc == 0x45B0E0u) {
        ctx->pc = 0x45B0E4u;
        goto label_45b0e4;
    }
    ctx->pc = 0x45B0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B0E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B0E4u; }
            if (ctx->pc != 0x45B0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x45B0E4u;
label_45b0e4:
    // 0x45b0e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x45b0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_45b0e8:
    // 0x45b0e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x45b0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_45b0ec:
    // 0x45b0ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x45b0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_45b0f0:
    // 0x45b0f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_45b0f4:
    if (ctx->pc == 0x45B0F4u) {
        ctx->pc = 0x45B0F4u;
            // 0x45b0f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x45B0F8u;
        goto label_45b0f8;
    }
    ctx->pc = 0x45B0F0u;
    {
        const bool branch_taken_0x45b0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B0F0u;
            // 0x45b0f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b0f0) {
            ctx->pc = 0x45B0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45b0c8;
        }
    }
    ctx->pc = 0x45B0F8u;
label_45b0f8:
    // 0x45b0f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x45b0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45b0fc:
    // 0x45b0fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45b100:
    // 0x45b100: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45b100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45b104:
    // 0x45b104: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45b104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45b108:
    // 0x45b108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45b108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45b10c:
    // 0x45b10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45b110:
    // 0x45b110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b114:
    // 0x45b114: 0x3e00008  jr          $ra
label_45b118:
    if (ctx->pc == 0x45B118u) {
        ctx->pc = 0x45B118u;
            // 0x45b118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45B11Cu;
        goto label_45b11c;
    }
    ctx->pc = 0x45B114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B114u;
            // 0x45b118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B11Cu;
label_45b11c:
    // 0x45b11c: 0x0  nop
    ctx->pc = 0x45b11cu;
    // NOP
label_45b120:
    // 0x45b120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_45b124:
    // 0x45b124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45b124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b128:
    // 0x45b128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45b12c:
    // 0x45b12c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x45b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_45b130:
    // 0x45b130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b134:
    // 0x45b134: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x45b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_45b138:
    // 0x45b138: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x45b138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45b13c:
    // 0x45b13c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x45b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_45b140:
    // 0x45b140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45b144:
    // 0x45b144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45b148:
    // 0x45b148: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x45b148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_45b14c:
    // 0x45b14c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x45b14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45b150:
    // 0x45b150: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x45b150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_45b154:
    // 0x45b154: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_45b158:
    // 0x45b158: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x45b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_45b15c:
    // 0x45b15c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x45b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_45b160:
    // 0x45b160: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x45b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_45b164:
    // 0x45b164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45b164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45b168:
    // 0x45b168: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x45b168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_45b16c:
    // 0x45b16c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x45b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_45b170:
    // 0x45b170: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x45b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_45b174:
    // 0x45b174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45b178:
    // 0x45b178: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45b178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45b17c:
    // 0x45b17c: 0xc0a997c  jal         func_2A65F0
label_45b180:
    if (ctx->pc == 0x45B180u) {
        ctx->pc = 0x45B180u;
            // 0x45b180: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x45B184u;
        goto label_45b184;
    }
    ctx->pc = 0x45B17Cu;
    SET_GPR_U32(ctx, 31, 0x45B184u);
    ctx->pc = 0x45B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B17Cu;
            // 0x45b180: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B184u; }
        if (ctx->pc != 0x45B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B184u; }
        if (ctx->pc != 0x45B184u) { return; }
    }
    ctx->pc = 0x45B184u;
label_45b184:
    // 0x45b184: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x45b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_45b188:
    // 0x45b188: 0xc0d879c  jal         func_361E70
label_45b18c:
    if (ctx->pc == 0x45B18Cu) {
        ctx->pc = 0x45B18Cu;
            // 0x45b18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B190u;
        goto label_45b190;
    }
    ctx->pc = 0x45B188u;
    SET_GPR_U32(ctx, 31, 0x45B190u);
    ctx->pc = 0x45B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B188u;
            // 0x45b18c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B190u; }
        if (ctx->pc != 0x45B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B190u; }
        if (ctx->pc != 0x45B190u) { return; }
    }
    ctx->pc = 0x45B190u;
label_45b190:
    // 0x45b190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45b194:
    // 0x45b194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b198:
    // 0x45b198: 0x3e00008  jr          $ra
label_45b19c:
    if (ctx->pc == 0x45B19Cu) {
        ctx->pc = 0x45B19Cu;
            // 0x45b19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45B1A0u;
        goto label_45b1a0;
    }
    ctx->pc = 0x45B198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B198u;
            // 0x45b19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B1A0u;
label_45b1a0:
    // 0x45b1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_45b1a4:
    // 0x45b1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45b1a8:
    // 0x45b1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b1ac:
    // 0x45b1ac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x45b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_45b1b0:
    // 0x45b1b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_45b1b4:
    if (ctx->pc == 0x45B1B4u) {
        ctx->pc = 0x45B1B4u;
            // 0x45b1b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B1B8u;
        goto label_45b1b8;
    }
    ctx->pc = 0x45B1B0u;
    {
        const bool branch_taken_0x45b1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B1B0u;
            // 0x45b1b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b1b0) {
            ctx->pc = 0x45B2D0u;
            goto label_45b2d0;
        }
    }
    ctx->pc = 0x45B1B8u;
label_45b1b8:
    // 0x45b1b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x45b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_45b1bc:
    // 0x45b1bc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x45b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_45b1c0:
    // 0x45b1c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x45b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_45b1c4:
    // 0x45b1c4: 0xc075128  jal         func_1D44A0
label_45b1c8:
    if (ctx->pc == 0x45B1C8u) {
        ctx->pc = 0x45B1C8u;
            // 0x45b1c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x45B1CCu;
        goto label_45b1cc;
    }
    ctx->pc = 0x45B1C4u;
    SET_GPR_U32(ctx, 31, 0x45B1CCu);
    ctx->pc = 0x45B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B1C4u;
            // 0x45b1c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B1CCu; }
        if (ctx->pc != 0x45B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B1CCu; }
        if (ctx->pc != 0x45B1CCu) { return; }
    }
    ctx->pc = 0x45B1CCu;
label_45b1cc:
    // 0x45b1cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x45b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45b1d0:
    // 0x45b1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b1d4:
    // 0x45b1d4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x45b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_45b1d8:
    // 0x45b1d8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x45b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_45b1dc:
    // 0x45b1dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x45b1dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_45b1e0:
    // 0x45b1e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_45b1e4:
    if (ctx->pc == 0x45B1E4u) {
        ctx->pc = 0x45B1E4u;
            // 0x45b1e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x45B1E8u;
        goto label_45b1e8;
    }
    ctx->pc = 0x45B1E0u;
    {
        const bool branch_taken_0x45b1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B1E0u;
            // 0x45b1e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b1e0) {
            ctx->pc = 0x45B1F0u;
            goto label_45b1f0;
        }
    }
    ctx->pc = 0x45B1E8u;
label_45b1e8:
    // 0x45b1e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b1ec:
    // 0x45b1ec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x45b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_45b1f0:
    // 0x45b1f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x45b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45b1f4:
    // 0x45b1f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b1f8:
    // 0x45b1f8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x45b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_45b1fc:
    // 0x45b1fc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x45b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_45b200:
    // 0x45b200: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x45b200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_45b204:
    // 0x45b204: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_45b208:
    if (ctx->pc == 0x45B208u) {
        ctx->pc = 0x45B208u;
            // 0x45b208: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x45B20Cu;
        goto label_45b20c;
    }
    ctx->pc = 0x45B204u;
    {
        const bool branch_taken_0x45b204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b204) {
            ctx->pc = 0x45B208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B204u;
            // 0x45b208: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B218u;
            goto label_45b218;
        }
    }
    ctx->pc = 0x45B20Cu;
label_45b20c:
    // 0x45b20c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b210:
    // 0x45b210: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x45b210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_45b214:
    // 0x45b214: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x45b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45b218:
    // 0x45b218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b21c:
    // 0x45b21c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x45b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_45b220:
    // 0x45b220: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x45b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_45b224:
    // 0x45b224: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x45b224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_45b228:
    // 0x45b228: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_45b22c:
    if (ctx->pc == 0x45B22Cu) {
        ctx->pc = 0x45B22Cu;
            // 0x45b22c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x45B230u;
        goto label_45b230;
    }
    ctx->pc = 0x45B228u;
    {
        const bool branch_taken_0x45b228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b228) {
            ctx->pc = 0x45B22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B228u;
            // 0x45b22c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B23Cu;
            goto label_45b23c;
        }
    }
    ctx->pc = 0x45B230u;
label_45b230:
    // 0x45b230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b234:
    // 0x45b234: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x45b234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_45b238:
    // 0x45b238: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45b238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45b23c:
    // 0x45b23c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x45b23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_45b240:
    // 0x45b240: 0x320f809  jalr        $t9
label_45b244:
    if (ctx->pc == 0x45B244u) {
        ctx->pc = 0x45B244u;
            // 0x45b244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B248u;
        goto label_45b248;
    }
    ctx->pc = 0x45B240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B248u);
        ctx->pc = 0x45B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B240u;
            // 0x45b244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B248u; }
            if (ctx->pc != 0x45B248u) { return; }
        }
        }
    }
    ctx->pc = 0x45B248u;
label_45b248:
    // 0x45b248: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x45b248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45b24c:
    // 0x45b24c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b250:
    // 0x45b250: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x45b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_45b254:
    // 0x45b254: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x45b254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_45b258:
    // 0x45b258: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x45b258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_45b25c:
    // 0x45b25c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x45b25cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_45b260:
    // 0x45b260: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_45b264:
    if (ctx->pc == 0x45B264u) {
        ctx->pc = 0x45B264u;
            // 0x45b264: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x45B268u;
        goto label_45b268;
    }
    ctx->pc = 0x45B260u;
    {
        const bool branch_taken_0x45b260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b260) {
            ctx->pc = 0x45B264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B260u;
            // 0x45b264: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B274u;
            goto label_45b274;
        }
    }
    ctx->pc = 0x45B268u;
label_45b268:
    // 0x45b268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b26c:
    // 0x45b26c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x45b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_45b270:
    // 0x45b270: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x45b270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45b274:
    // 0x45b274: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b278:
    // 0x45b278: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x45b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_45b27c:
    // 0x45b27c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x45b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_45b280:
    // 0x45b280: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x45b280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_45b284:
    // 0x45b284: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x45b284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_45b288:
    // 0x45b288: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_45b28c:
    if (ctx->pc == 0x45B28Cu) {
        ctx->pc = 0x45B290u;
        goto label_45b290;
    }
    ctx->pc = 0x45B288u;
    {
        const bool branch_taken_0x45b288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b288) {
            ctx->pc = 0x45B298u;
            goto label_45b298;
        }
    }
    ctx->pc = 0x45B290u;
label_45b290:
    // 0x45b290: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b294:
    // 0x45b294: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x45b294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_45b298:
    // 0x45b298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b29c:
    // 0x45b29c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x45b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_45b2a0:
    // 0x45b2a0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x45b2a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45b2a4:
    // 0x45b2a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_45b2a8:
    if (ctx->pc == 0x45B2A8u) {
        ctx->pc = 0x45B2ACu;
        goto label_45b2ac;
    }
    ctx->pc = 0x45B2A4u;
    {
        const bool branch_taken_0x45b2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b2a4) {
            ctx->pc = 0x45B2B4u;
            goto label_45b2b4;
        }
    }
    ctx->pc = 0x45B2ACu;
label_45b2ac:
    // 0x45b2ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b2b0:
    // 0x45b2b0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x45b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_45b2b4:
    // 0x45b2b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b2b8:
    // 0x45b2b8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x45b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_45b2bc:
    // 0x45b2bc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x45b2bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45b2c0:
    // 0x45b2c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_45b2c4:
    if (ctx->pc == 0x45B2C4u) {
        ctx->pc = 0x45B2C4u;
            // 0x45b2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x45B2C8u;
        goto label_45b2c8;
    }
    ctx->pc = 0x45B2C0u;
    {
        const bool branch_taken_0x45b2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b2c0) {
            ctx->pc = 0x45B2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B2C0u;
            // 0x45b2c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B2D4u;
            goto label_45b2d4;
        }
    }
    ctx->pc = 0x45B2C8u;
label_45b2c8:
    // 0x45b2c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45b2cc:
    // 0x45b2cc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x45b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_45b2d0:
    // 0x45b2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45b2d4:
    // 0x45b2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b2d8:
    // 0x45b2d8: 0x3e00008  jr          $ra
label_45b2dc:
    if (ctx->pc == 0x45B2DCu) {
        ctx->pc = 0x45B2DCu;
            // 0x45b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45B2E0u;
        goto label_45b2e0;
    }
    ctx->pc = 0x45B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B2D8u;
            // 0x45b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B2E0u;
label_45b2e0:
    // 0x45b2e0: 0x8116680  j           func_459A00
label_45b2e4:
    if (ctx->pc == 0x45B2E4u) {
        ctx->pc = 0x45B2E4u;
            // 0x45b2e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x45B2E8u;
        goto label_45b2e8;
    }
    ctx->pc = 0x45B2E0u;
    ctx->pc = 0x45B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B2E0u;
            // 0x45b2e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459A00u;
    {
        auto targetFn = runtime->lookupFunction(0x459A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x45B2E8u;
label_45b2e8:
    // 0x45b2e8: 0x0  nop
    ctx->pc = 0x45b2e8u;
    // NOP
label_45b2ec:
    // 0x45b2ec: 0x0  nop
    ctx->pc = 0x45b2ecu;
    // NOP
label_45b2f0:
    // 0x45b2f0: 0x81162d8  j           func_458B60
label_45b2f4:
    if (ctx->pc == 0x45B2F4u) {
        ctx->pc = 0x45B2F4u;
            // 0x45b2f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x45B2F8u;
        goto label_45b2f8;
    }
    ctx->pc = 0x45B2F0u;
    ctx->pc = 0x45B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B2F0u;
            // 0x45b2f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x458B60u;
    if (runtime->hasFunction(0x458B60u)) {
        auto targetFn = runtime->lookupFunction(0x458B60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00458B60_0x458b60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x45B2F8u;
label_45b2f8:
    // 0x45b2f8: 0x0  nop
    ctx->pc = 0x45b2f8u;
    // NOP
label_45b2fc:
    // 0x45b2fc: 0x0  nop
    ctx->pc = 0x45b2fcu;
    // NOP
label_45b300:
    // 0x45b300: 0x8116330  j           func_458CC0
label_45b304:
    if (ctx->pc == 0x45B304u) {
        ctx->pc = 0x45B304u;
            // 0x45b304: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x45B308u;
        goto label_45b308;
    }
    ctx->pc = 0x45B300u;
    ctx->pc = 0x45B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B300u;
            // 0x45b304: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x458CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x458CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x45B308u;
label_45b308:
    // 0x45b308: 0x0  nop
    ctx->pc = 0x45b308u;
    // NOP
label_45b30c:
    // 0x45b30c: 0x0  nop
    ctx->pc = 0x45b30cu;
    // NOP
label_45b310:
    // 0x45b310: 0x811623c  j           func_4588F0
label_45b314:
    if (ctx->pc == 0x45B314u) {
        ctx->pc = 0x45B314u;
            // 0x45b314: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x45B318u;
        goto label_45b318;
    }
    ctx->pc = 0x45B310u;
    ctx->pc = 0x45B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B310u;
            // 0x45b314: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4588F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4588F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x45B318u;
label_45b318:
    // 0x45b318: 0x0  nop
    ctx->pc = 0x45b318u;
    // NOP
label_45b31c:
    // 0x45b31c: 0x0  nop
    ctx->pc = 0x45b31cu;
    // NOP
label_45b320:
    // 0x45b320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_45b324:
    // 0x45b324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45b328:
    // 0x45b328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b32c:
    // 0x45b32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b330:
    // 0x45b330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45b330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b334:
    // 0x45b334: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_45b338:
    if (ctx->pc == 0x45B338u) {
        ctx->pc = 0x45B338u;
            // 0x45b338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B33Cu;
        goto label_45b33c;
    }
    ctx->pc = 0x45B334u;
    {
        const bool branch_taken_0x45b334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B334u;
            // 0x45b338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b334) {
            ctx->pc = 0x45B388u;
            goto label_45b388;
        }
    }
    ctx->pc = 0x45B33Cu;
label_45b33c:
    // 0x45b33c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_45b340:
    // 0x45b340: 0x2442e420  addiu       $v0, $v0, -0x1BE0
    ctx->pc = 0x45b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960160));
label_45b344:
    // 0x45b344: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_45b348:
    if (ctx->pc == 0x45B348u) {
        ctx->pc = 0x45B348u;
            // 0x45b348: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x45B34Cu;
        goto label_45b34c;
    }
    ctx->pc = 0x45B344u;
    {
        const bool branch_taken_0x45b344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B344u;
            // 0x45b348: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b344) {
            ctx->pc = 0x45B370u;
            goto label_45b370;
        }
    }
    ctx->pc = 0x45B34Cu;
label_45b34c:
    // 0x45b34c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_45b350:
    // 0x45b350: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x45b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_45b354:
    // 0x45b354: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x45b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_45b358:
    // 0x45b358: 0x2484e118  addiu       $a0, $a0, -0x1EE8
    ctx->pc = 0x45b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959384));
label_45b35c:
    // 0x45b35c: 0xc0ad6c4  jal         func_2B5B10
label_45b360:
    if (ctx->pc == 0x45B360u) {
        ctx->pc = 0x45B360u;
            // 0x45b360: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x45B364u;
        goto label_45b364;
    }
    ctx->pc = 0x45B35Cu;
    SET_GPR_U32(ctx, 31, 0x45B364u);
    ctx->pc = 0x45B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B35Cu;
            // 0x45b360: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B364u; }
        if (ctx->pc != 0x45B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B364u; }
        if (ctx->pc != 0x45B364u) { return; }
    }
    ctx->pc = 0x45B364u;
label_45b364:
    // 0x45b364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45b364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45b368:
    // 0x45b368: 0xc075bf8  jal         func_1D6FE0
label_45b36c:
    if (ctx->pc == 0x45B36Cu) {
        ctx->pc = 0x45B36Cu;
            // 0x45b36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B370u;
        goto label_45b370;
    }
    ctx->pc = 0x45B368u;
    SET_GPR_U32(ctx, 31, 0x45B370u);
    ctx->pc = 0x45B36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B368u;
            // 0x45b36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B370u; }
        if (ctx->pc != 0x45B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B370u; }
        if (ctx->pc != 0x45B370u) { return; }
    }
    ctx->pc = 0x45B370u;
label_45b370:
    // 0x45b370: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x45b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_45b374:
    // 0x45b374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45b374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_45b378:
    // 0x45b378: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_45b37c:
    if (ctx->pc == 0x45B37Cu) {
        ctx->pc = 0x45B37Cu;
            // 0x45b37c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B380u;
        goto label_45b380;
    }
    ctx->pc = 0x45B378u;
    {
        const bool branch_taken_0x45b378 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45b378) {
            ctx->pc = 0x45B37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B378u;
            // 0x45b37c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B38Cu;
            goto label_45b38c;
        }
    }
    ctx->pc = 0x45B380u;
label_45b380:
    // 0x45b380: 0xc0400a8  jal         func_1002A0
label_45b384:
    if (ctx->pc == 0x45B384u) {
        ctx->pc = 0x45B384u;
            // 0x45b384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B388u;
        goto label_45b388;
    }
    ctx->pc = 0x45B380u;
    SET_GPR_U32(ctx, 31, 0x45B388u);
    ctx->pc = 0x45B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B380u;
            // 0x45b384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B388u; }
        if (ctx->pc != 0x45B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B388u; }
        if (ctx->pc != 0x45B388u) { return; }
    }
    ctx->pc = 0x45B388u;
label_45b388:
    // 0x45b388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45b388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45b38c:
    // 0x45b38c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45b38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45b390:
    // 0x45b390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45b394:
    // 0x45b394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b398:
    // 0x45b398: 0x3e00008  jr          $ra
label_45b39c:
    if (ctx->pc == 0x45B39Cu) {
        ctx->pc = 0x45B39Cu;
            // 0x45b39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45B3A0u;
        goto label_45b3a0;
    }
    ctx->pc = 0x45B398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B398u;
            // 0x45b39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B3A0u;
label_45b3a0:
    // 0x45b3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_45b3a4:
    // 0x45b3a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45b3a8:
    // 0x45b3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45b3ac:
    // 0x45b3ac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x45b3acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_45b3b0:
    // 0x45b3b0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_45b3b4:
    if (ctx->pc == 0x45B3B4u) {
        ctx->pc = 0x45B3B8u;
        goto label_45b3b8;
    }
    ctx->pc = 0x45B3B0u;
    {
        const bool branch_taken_0x45b3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b3b0) {
            ctx->pc = 0x45B3C0u;
            goto label_45b3c0;
        }
    }
    ctx->pc = 0x45B3B8u;
label_45b3b8:
    // 0x45b3b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_45b3bc:
    if (ctx->pc == 0x45B3BCu) {
        ctx->pc = 0x45B3BCu;
            // 0x45b3bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x45B3C0u;
        goto label_45b3c0;
    }
    ctx->pc = 0x45B3B8u;
    {
        const bool branch_taken_0x45b3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B3B8u;
            // 0x45b3bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b3b8) {
            ctx->pc = 0x45B3CCu;
            goto label_45b3cc;
        }
    }
    ctx->pc = 0x45B3C0u;
label_45b3c0:
    // 0x45b3c0: 0xc0ce2e0  jal         func_338B80
label_45b3c4:
    if (ctx->pc == 0x45B3C4u) {
        ctx->pc = 0x45B3C8u;
        goto label_45b3c8;
    }
    ctx->pc = 0x45B3C0u;
    SET_GPR_U32(ctx, 31, 0x45B3C8u);
    ctx->pc = 0x338B80u;
    if (runtime->hasFunction(0x338B80u)) {
        auto targetFn = runtime->lookupFunction(0x338B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B3C8u; }
        if (ctx->pc != 0x45B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00338B80_0x338b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B3C8u; }
        if (ctx->pc != 0x45B3C8u) { return; }
    }
    ctx->pc = 0x45B3C8u;
label_45b3c8:
    // 0x45b3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_45b3cc:
    // 0x45b3cc: 0x3e00008  jr          $ra
label_45b3d0:
    if (ctx->pc == 0x45B3D0u) {
        ctx->pc = 0x45B3D0u;
            // 0x45b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x45B3D4u;
        goto label_45b3d4;
    }
    ctx->pc = 0x45B3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B3CCu;
            // 0x45b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B3D4u;
label_45b3d4:
    // 0x45b3d4: 0x0  nop
    ctx->pc = 0x45b3d4u;
    // NOP
label_45b3d8:
    // 0x45b3d8: 0x0  nop
    ctx->pc = 0x45b3d8u;
    // NOP
label_45b3dc:
    // 0x45b3dc: 0x0  nop
    ctx->pc = 0x45b3dcu;
    // NOP
label_45b3e0:
    // 0x45b3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_45b3e4:
    // 0x45b3e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45b3e8:
    // 0x45b3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45b3ec:
    // 0x45b3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b3f0:
    // 0x45b3f0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x45b3f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_45b3f4:
    // 0x45b3f4: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_45b3f8:
    if (ctx->pc == 0x45B3F8u) {
        ctx->pc = 0x45B3F8u;
            // 0x45b3f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B3FCu;
        goto label_45b3fc;
    }
    ctx->pc = 0x45B3F4u;
    {
        const bool branch_taken_0x45b3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x45B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B3F4u;
            // 0x45b3f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b3f4) {
            ctx->pc = 0x45B458u;
            goto label_45b458;
        }
    }
    ctx->pc = 0x45B3FCu;
label_45b3fc:
    // 0x45b3fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45b400:
    // 0x45b400: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_45b404:
    if (ctx->pc == 0x45B404u) {
        ctx->pc = 0x45B408u;
        goto label_45b408;
    }
    ctx->pc = 0x45B400u;
    {
        const bool branch_taken_0x45b400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b400) {
            ctx->pc = 0x45B410u;
            goto label_45b410;
        }
    }
    ctx->pc = 0x45B408u;
label_45b408:
    // 0x45b408: 0x10000016  b           . + 4 + (0x16 << 2)
label_45b40c:
    if (ctx->pc == 0x45B40Cu) {
        ctx->pc = 0x45B40Cu;
            // 0x45b40c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x45B410u;
        goto label_45b410;
    }
    ctx->pc = 0x45B408u;
    {
        const bool branch_taken_0x45b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B408u;
            // 0x45b40c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b408) {
            ctx->pc = 0x45B464u;
            goto label_45b464;
        }
    }
    ctx->pc = 0x45B410u;
label_45b410:
    // 0x45b410: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45b410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45b414:
    // 0x45b414: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x45b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_45b418:
    // 0x45b418: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x45b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45b41c:
    // 0x45b41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45b41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45b420:
    // 0x45b420: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x45b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45b424:
    // 0x45b424: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45b424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_45b428:
    // 0x45b428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x45b428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45b42c:
    // 0x45b42c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_45b430:
    if (ctx->pc == 0x45B430u) {
        ctx->pc = 0x45B430u;
            // 0x45b430: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->pc = 0x45B434u;
        goto label_45b434;
    }
    ctx->pc = 0x45B42Cu;
    {
        const bool branch_taken_0x45b42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x45B430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B42Cu;
            // 0x45b430: 0xe6010070  swc1        $f1, 0x70($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b42c) {
            ctx->pc = 0x45B460u;
            goto label_45b460;
        }
    }
    ctx->pc = 0x45B434u;
label_45b434:
    // 0x45b434: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45b434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45b438:
    // 0x45b438: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x45b438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45b43c:
    // 0x45b43c: 0x320f809  jalr        $t9
label_45b440:
    if (ctx->pc == 0x45B440u) {
        ctx->pc = 0x45B444u;
        goto label_45b444;
    }
    ctx->pc = 0x45B43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B444u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B444u; }
            if (ctx->pc != 0x45B444u) { return; }
        }
        }
    }
    ctx->pc = 0x45B444u;
label_45b444:
    // 0x45b444: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45b448:
    // 0x45b448: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x45b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_45b44c:
    // 0x45b44c: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x45b44cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_45b450:
    // 0x45b450: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_45b454:
    if (ctx->pc == 0x45B454u) {
        ctx->pc = 0x45B458u;
        goto label_45b458;
    }
    ctx->pc = 0x45B450u;
    {
        const bool branch_taken_0x45b450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b450) {
            ctx->pc = 0x45B460u;
            goto label_45b460;
        }
    }
    ctx->pc = 0x45B458u;
label_45b458:
    // 0x45b458: 0xc0ce3dc  jal         func_338F70
label_45b45c:
    if (ctx->pc == 0x45B45Cu) {
        ctx->pc = 0x45B45Cu;
            // 0x45b45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B460u;
        goto label_45b460;
    }
    ctx->pc = 0x45B458u;
    SET_GPR_U32(ctx, 31, 0x45B460u);
    ctx->pc = 0x45B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B458u;
            // 0x45b45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x338F70u;
    if (runtime->hasFunction(0x338F70u)) {
        auto targetFn = runtime->lookupFunction(0x338F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B460u; }
        if (ctx->pc != 0x45B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00338F70_0x338f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B460u; }
        if (ctx->pc != 0x45B460u) { return; }
    }
    ctx->pc = 0x45B460u;
label_45b460:
    // 0x45b460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45b464:
    // 0x45b464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b468:
    // 0x45b468: 0x3e00008  jr          $ra
label_45b46c:
    if (ctx->pc == 0x45B46Cu) {
        ctx->pc = 0x45B46Cu;
            // 0x45b46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45B470u;
        goto label_45b470;
    }
    ctx->pc = 0x45B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B468u;
            // 0x45b46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B470u;
label_45b470:
    // 0x45b470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_45b474:
    // 0x45b474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45b478:
    // 0x45b478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b47c:
    // 0x45b47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b480:
    // 0x45b480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45b480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b484:
    // 0x45b484: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_45b488:
    if (ctx->pc == 0x45B488u) {
        ctx->pc = 0x45B488u;
            // 0x45b488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B48Cu;
        goto label_45b48c;
    }
    ctx->pc = 0x45B484u;
    {
        const bool branch_taken_0x45b484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B484u;
            // 0x45b488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b484) {
            ctx->pc = 0x45B4C8u;
            goto label_45b4c8;
        }
    }
    ctx->pc = 0x45B48Cu;
label_45b48c:
    // 0x45b48c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_45b490:
    // 0x45b490: 0x2442e450  addiu       $v0, $v0, -0x1BB0
    ctx->pc = 0x45b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960208));
label_45b494:
    // 0x45b494: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_45b498:
    if (ctx->pc == 0x45B498u) {
        ctx->pc = 0x45B498u;
            // 0x45b498: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x45B49Cu;
        goto label_45b49c;
    }
    ctx->pc = 0x45B494u;
    {
        const bool branch_taken_0x45b494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B494u;
            // 0x45b498: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b494) {
            ctx->pc = 0x45B4B0u;
            goto label_45b4b0;
        }
    }
    ctx->pc = 0x45B49Cu;
label_45b49c:
    // 0x45b49c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_45b4a0:
    // 0x45b4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b4a4:
    // 0x45b4a4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x45b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_45b4a8:
    // 0x45b4a8: 0xc057a68  jal         func_15E9A0
label_45b4ac:
    if (ctx->pc == 0x45B4ACu) {
        ctx->pc = 0x45B4ACu;
            // 0x45b4ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x45B4B0u;
        goto label_45b4b0;
    }
    ctx->pc = 0x45B4A8u;
    SET_GPR_U32(ctx, 31, 0x45B4B0u);
    ctx->pc = 0x45B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B4A8u;
            // 0x45b4ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4B0u; }
        if (ctx->pc != 0x45B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4B0u; }
        if (ctx->pc != 0x45B4B0u) { return; }
    }
    ctx->pc = 0x45B4B0u;
label_45b4b0:
    // 0x45b4b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x45b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_45b4b4:
    // 0x45b4b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45b4b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_45b4b8:
    // 0x45b4b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_45b4bc:
    if (ctx->pc == 0x45B4BCu) {
        ctx->pc = 0x45B4BCu;
            // 0x45b4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B4C0u;
        goto label_45b4c0;
    }
    ctx->pc = 0x45B4B8u;
    {
        const bool branch_taken_0x45b4b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45b4b8) {
            ctx->pc = 0x45B4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B4B8u;
            // 0x45b4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B4CCu;
            goto label_45b4cc;
        }
    }
    ctx->pc = 0x45B4C0u;
label_45b4c0:
    // 0x45b4c0: 0xc0400a8  jal         func_1002A0
label_45b4c4:
    if (ctx->pc == 0x45B4C4u) {
        ctx->pc = 0x45B4C4u;
            // 0x45b4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B4C8u;
        goto label_45b4c8;
    }
    ctx->pc = 0x45B4C0u;
    SET_GPR_U32(ctx, 31, 0x45B4C8u);
    ctx->pc = 0x45B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B4C0u;
            // 0x45b4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4C8u; }
        if (ctx->pc != 0x45B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4C8u; }
        if (ctx->pc != 0x45B4C8u) { return; }
    }
    ctx->pc = 0x45B4C8u;
label_45b4c8:
    // 0x45b4c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45b4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45b4cc:
    // 0x45b4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45b4d0:
    // 0x45b4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45b4d4:
    // 0x45b4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b4d8:
    // 0x45b4d8: 0x3e00008  jr          $ra
label_45b4dc:
    if (ctx->pc == 0x45B4DCu) {
        ctx->pc = 0x45B4DCu;
            // 0x45b4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45B4E0u;
        goto label_45b4e0;
    }
    ctx->pc = 0x45B4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B4D8u;
            // 0x45b4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B4E0u;
label_45b4e0:
    // 0x45b4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_45b4e4:
    // 0x45b4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45b4e8:
    // 0x45b4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b4ec:
    // 0x45b4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45b4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b4f0:
    // 0x45b4f0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45b4f4:
    // 0x45b4f4: 0xc0c9a58  jal         func_326960
label_45b4f8:
    if (ctx->pc == 0x45B4F8u) {
        ctx->pc = 0x45B4F8u;
            // 0x45b4f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B4FCu;
        goto label_45b4fc;
    }
    ctx->pc = 0x45B4F4u;
    SET_GPR_U32(ctx, 31, 0x45B4FCu);
    ctx->pc = 0x45B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B4F4u;
            // 0x45b4f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4FCu; }
        if (ctx->pc != 0x45B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B4FCu; }
        if (ctx->pc != 0x45B4FCu) { return; }
    }
    ctx->pc = 0x45B4FCu;
label_45b4fc:
    // 0x45b4fc: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x45b4fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_45b500:
    // 0x45b500: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45b504:
    // 0x45b504: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_45b508:
    if (ctx->pc == 0x45B508u) {
        ctx->pc = 0x45B508u;
            // 0x45b508: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x45B50Cu;
        goto label_45b50c;
    }
    ctx->pc = 0x45B504u;
    {
        const bool branch_taken_0x45b504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b504) {
            ctx->pc = 0x45B508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B504u;
            // 0x45b508: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B514u;
            goto label_45b514;
        }
    }
    ctx->pc = 0x45B50Cu;
label_45b50c:
    // 0x45b50c: 0x10000020  b           . + 4 + (0x20 << 2)
label_45b510:
    if (ctx->pc == 0x45B510u) {
        ctx->pc = 0x45B510u;
            // 0x45b510: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x45B514u;
        goto label_45b514;
    }
    ctx->pc = 0x45B50Cu;
    {
        const bool branch_taken_0x45b50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B50Cu;
            // 0x45b510: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b50c) {
            ctx->pc = 0x45B590u;
            goto label_45b590;
        }
    }
    ctx->pc = 0x45B514u;
label_45b514:
    // 0x45b514: 0xc0c917c  jal         func_3245F0
label_45b518:
    if (ctx->pc == 0x45B518u) {
        ctx->pc = 0x45B518u;
            // 0x45b518: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B51Cu;
        goto label_45b51c;
    }
    ctx->pc = 0x45B514u;
    SET_GPR_U32(ctx, 31, 0x45B51Cu);
    ctx->pc = 0x45B518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B514u;
            // 0x45b518: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245F0u;
    if (runtime->hasFunction(0x3245F0u)) {
        auto targetFn = runtime->lookupFunction(0x3245F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B51Cu; }
        if (ctx->pc != 0x45B51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245F0_0x3245f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B51Cu; }
        if (ctx->pc != 0x45B51Cu) { return; }
    }
    ctx->pc = 0x45B51Cu;
label_45b51c:
    // 0x45b51c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_45b520:
    if (ctx->pc == 0x45B520u) {
        ctx->pc = 0x45B520u;
            // 0x45b520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B524u;
        goto label_45b524;
    }
    ctx->pc = 0x45B51Cu;
    {
        const bool branch_taken_0x45b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b51c) {
            ctx->pc = 0x45B520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B51Cu;
            // 0x45b520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B548u;
            goto label_45b548;
        }
    }
    ctx->pc = 0x45B524u;
label_45b524:
    // 0x45b524: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_45b528:
    // 0x45b528: 0xc0c9190  jal         func_324640
label_45b52c:
    if (ctx->pc == 0x45B52Cu) {
        ctx->pc = 0x45B52Cu;
            // 0x45b52c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45B530u;
        goto label_45b530;
    }
    ctx->pc = 0x45B528u;
    SET_GPR_U32(ctx, 31, 0x45B530u);
    ctx->pc = 0x45B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B528u;
            // 0x45b52c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B530u; }
        if (ctx->pc != 0x45B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B530u; }
        if (ctx->pc != 0x45B530u) { return; }
    }
    ctx->pc = 0x45B530u;
label_45b530:
    // 0x45b530: 0xc0c9c84  jal         func_327210
label_45b534:
    if (ctx->pc == 0x45B534u) {
        ctx->pc = 0x45B534u;
            // 0x45b534: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x45B538u;
        goto label_45b538;
    }
    ctx->pc = 0x45B530u;
    SET_GPR_U32(ctx, 31, 0x45B538u);
    ctx->pc = 0x45B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B530u;
            // 0x45b534: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B538u; }
        if (ctx->pc != 0x45B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B538u; }
        if (ctx->pc != 0x45B538u) { return; }
    }
    ctx->pc = 0x45B538u;
label_45b538:
    // 0x45b538: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_45b53c:
    // 0x45b53c: 0xc0c9190  jal         func_324640
label_45b540:
    if (ctx->pc == 0x45B540u) {
        ctx->pc = 0x45B540u;
            // 0x45b540: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B544u;
        goto label_45b544;
    }
    ctx->pc = 0x45B53Cu;
    SET_GPR_U32(ctx, 31, 0x45B544u);
    ctx->pc = 0x45B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B53Cu;
            // 0x45b540: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B544u; }
        if (ctx->pc != 0x45B544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B544u; }
        if (ctx->pc != 0x45B544u) { return; }
    }
    ctx->pc = 0x45B544u;
label_45b544:
    // 0x45b544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45b548:
    // 0x45b548: 0xc116d68  jal         func_45B5A0
label_45b54c:
    if (ctx->pc == 0x45B54Cu) {
        ctx->pc = 0x45B550u;
        goto label_45b550;
    }
    ctx->pc = 0x45B548u;
    SET_GPR_U32(ctx, 31, 0x45B550u);
    ctx->pc = 0x45B5A0u;
    if (runtime->hasFunction(0x45B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x45B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B550u; }
        if (ctx->pc != 0x45B550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045B5A0_0x45b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B550u; }
        if (ctx->pc != 0x45B550u) { return; }
    }
    ctx->pc = 0x45B550u;
label_45b550:
    // 0x45b550: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x45b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45b554:
    // 0x45b554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45b554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45b558:
    // 0x45b558: 0x0  nop
    ctx->pc = 0x45b558u;
    // NOP
label_45b55c:
    // 0x45b55c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x45b55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45b560:
    // 0x45b560: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_45b564:
    if (ctx->pc == 0x45B564u) {
        ctx->pc = 0x45B568u;
        goto label_45b568;
    }
    ctx->pc = 0x45B560u;
    {
        const bool branch_taken_0x45b560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45b560) {
            ctx->pc = 0x45B578u;
            goto label_45b578;
        }
    }
    ctx->pc = 0x45B568u;
label_45b568:
    // 0x45b568: 0xc0c85f8  jal         func_3217E0
label_45b56c:
    if (ctx->pc == 0x45B56Cu) {
        ctx->pc = 0x45B56Cu;
            // 0x45b56c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x45B570u;
        goto label_45b570;
    }
    ctx->pc = 0x45B568u;
    SET_GPR_U32(ctx, 31, 0x45B570u);
    ctx->pc = 0x45B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B568u;
            // 0x45b56c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B570u; }
        if (ctx->pc != 0x45B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B570u; }
        if (ctx->pc != 0x45B570u) { return; }
    }
    ctx->pc = 0x45B570u;
label_45b570:
    // 0x45b570: 0x10000006  b           . + 4 + (0x6 << 2)
label_45b574:
    if (ctx->pc == 0x45B574u) {
        ctx->pc = 0x45B578u;
        goto label_45b578;
    }
    ctx->pc = 0x45B570u;
    {
        const bool branch_taken_0x45b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b570) {
            ctx->pc = 0x45B58Cu;
            goto label_45b58c;
        }
    }
    ctx->pc = 0x45B578u;
label_45b578:
    // 0x45b578: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45b578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45b57c:
    // 0x45b57c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x45b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_45b580:
    // 0x45b580: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x45b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45b584:
    // 0x45b584: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45b584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_45b588:
    // 0x45b588: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x45b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_45b58c:
    // 0x45b58c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45b590:
    // 0x45b590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b594:
    // 0x45b594: 0x3e00008  jr          $ra
label_45b598:
    if (ctx->pc == 0x45B598u) {
        ctx->pc = 0x45B598u;
            // 0x45b598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45B59Cu;
        goto label_45b59c;
    }
    ctx->pc = 0x45B594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B594u;
            // 0x45b598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B59Cu;
label_45b59c:
    // 0x45b59c: 0x0  nop
    ctx->pc = 0x45b59cu;
    // NOP
}
