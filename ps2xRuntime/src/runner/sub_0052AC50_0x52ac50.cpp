#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052AC50
// Address: 0x52ac50 - 0x52c040
void sub_0052AC50_0x52ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052AC50_0x52ac50");
#endif

    switch (ctx->pc) {
        case 0x52ac50u: goto label_52ac50;
        case 0x52ac54u: goto label_52ac54;
        case 0x52ac58u: goto label_52ac58;
        case 0x52ac5cu: goto label_52ac5c;
        case 0x52ac60u: goto label_52ac60;
        case 0x52ac64u: goto label_52ac64;
        case 0x52ac68u: goto label_52ac68;
        case 0x52ac6cu: goto label_52ac6c;
        case 0x52ac70u: goto label_52ac70;
        case 0x52ac74u: goto label_52ac74;
        case 0x52ac78u: goto label_52ac78;
        case 0x52ac7cu: goto label_52ac7c;
        case 0x52ac80u: goto label_52ac80;
        case 0x52ac84u: goto label_52ac84;
        case 0x52ac88u: goto label_52ac88;
        case 0x52ac8cu: goto label_52ac8c;
        case 0x52ac90u: goto label_52ac90;
        case 0x52ac94u: goto label_52ac94;
        case 0x52ac98u: goto label_52ac98;
        case 0x52ac9cu: goto label_52ac9c;
        case 0x52aca0u: goto label_52aca0;
        case 0x52aca4u: goto label_52aca4;
        case 0x52aca8u: goto label_52aca8;
        case 0x52acacu: goto label_52acac;
        case 0x52acb0u: goto label_52acb0;
        case 0x52acb4u: goto label_52acb4;
        case 0x52acb8u: goto label_52acb8;
        case 0x52acbcu: goto label_52acbc;
        case 0x52acc0u: goto label_52acc0;
        case 0x52acc4u: goto label_52acc4;
        case 0x52acc8u: goto label_52acc8;
        case 0x52acccu: goto label_52accc;
        case 0x52acd0u: goto label_52acd0;
        case 0x52acd4u: goto label_52acd4;
        case 0x52acd8u: goto label_52acd8;
        case 0x52acdcu: goto label_52acdc;
        case 0x52ace0u: goto label_52ace0;
        case 0x52ace4u: goto label_52ace4;
        case 0x52ace8u: goto label_52ace8;
        case 0x52acecu: goto label_52acec;
        case 0x52acf0u: goto label_52acf0;
        case 0x52acf4u: goto label_52acf4;
        case 0x52acf8u: goto label_52acf8;
        case 0x52acfcu: goto label_52acfc;
        case 0x52ad00u: goto label_52ad00;
        case 0x52ad04u: goto label_52ad04;
        case 0x52ad08u: goto label_52ad08;
        case 0x52ad0cu: goto label_52ad0c;
        case 0x52ad10u: goto label_52ad10;
        case 0x52ad14u: goto label_52ad14;
        case 0x52ad18u: goto label_52ad18;
        case 0x52ad1cu: goto label_52ad1c;
        case 0x52ad20u: goto label_52ad20;
        case 0x52ad24u: goto label_52ad24;
        case 0x52ad28u: goto label_52ad28;
        case 0x52ad2cu: goto label_52ad2c;
        case 0x52ad30u: goto label_52ad30;
        case 0x52ad34u: goto label_52ad34;
        case 0x52ad38u: goto label_52ad38;
        case 0x52ad3cu: goto label_52ad3c;
        case 0x52ad40u: goto label_52ad40;
        case 0x52ad44u: goto label_52ad44;
        case 0x52ad48u: goto label_52ad48;
        case 0x52ad4cu: goto label_52ad4c;
        case 0x52ad50u: goto label_52ad50;
        case 0x52ad54u: goto label_52ad54;
        case 0x52ad58u: goto label_52ad58;
        case 0x52ad5cu: goto label_52ad5c;
        case 0x52ad60u: goto label_52ad60;
        case 0x52ad64u: goto label_52ad64;
        case 0x52ad68u: goto label_52ad68;
        case 0x52ad6cu: goto label_52ad6c;
        case 0x52ad70u: goto label_52ad70;
        case 0x52ad74u: goto label_52ad74;
        case 0x52ad78u: goto label_52ad78;
        case 0x52ad7cu: goto label_52ad7c;
        case 0x52ad80u: goto label_52ad80;
        case 0x52ad84u: goto label_52ad84;
        case 0x52ad88u: goto label_52ad88;
        case 0x52ad8cu: goto label_52ad8c;
        case 0x52ad90u: goto label_52ad90;
        case 0x52ad94u: goto label_52ad94;
        case 0x52ad98u: goto label_52ad98;
        case 0x52ad9cu: goto label_52ad9c;
        case 0x52ada0u: goto label_52ada0;
        case 0x52ada4u: goto label_52ada4;
        case 0x52ada8u: goto label_52ada8;
        case 0x52adacu: goto label_52adac;
        case 0x52adb0u: goto label_52adb0;
        case 0x52adb4u: goto label_52adb4;
        case 0x52adb8u: goto label_52adb8;
        case 0x52adbcu: goto label_52adbc;
        case 0x52adc0u: goto label_52adc0;
        case 0x52adc4u: goto label_52adc4;
        case 0x52adc8u: goto label_52adc8;
        case 0x52adccu: goto label_52adcc;
        case 0x52add0u: goto label_52add0;
        case 0x52add4u: goto label_52add4;
        case 0x52add8u: goto label_52add8;
        case 0x52addcu: goto label_52addc;
        case 0x52ade0u: goto label_52ade0;
        case 0x52ade4u: goto label_52ade4;
        case 0x52ade8u: goto label_52ade8;
        case 0x52adecu: goto label_52adec;
        case 0x52adf0u: goto label_52adf0;
        case 0x52adf4u: goto label_52adf4;
        case 0x52adf8u: goto label_52adf8;
        case 0x52adfcu: goto label_52adfc;
        case 0x52ae00u: goto label_52ae00;
        case 0x52ae04u: goto label_52ae04;
        case 0x52ae08u: goto label_52ae08;
        case 0x52ae0cu: goto label_52ae0c;
        case 0x52ae10u: goto label_52ae10;
        case 0x52ae14u: goto label_52ae14;
        case 0x52ae18u: goto label_52ae18;
        case 0x52ae1cu: goto label_52ae1c;
        case 0x52ae20u: goto label_52ae20;
        case 0x52ae24u: goto label_52ae24;
        case 0x52ae28u: goto label_52ae28;
        case 0x52ae2cu: goto label_52ae2c;
        case 0x52ae30u: goto label_52ae30;
        case 0x52ae34u: goto label_52ae34;
        case 0x52ae38u: goto label_52ae38;
        case 0x52ae3cu: goto label_52ae3c;
        case 0x52ae40u: goto label_52ae40;
        case 0x52ae44u: goto label_52ae44;
        case 0x52ae48u: goto label_52ae48;
        case 0x52ae4cu: goto label_52ae4c;
        case 0x52ae50u: goto label_52ae50;
        case 0x52ae54u: goto label_52ae54;
        case 0x52ae58u: goto label_52ae58;
        case 0x52ae5cu: goto label_52ae5c;
        case 0x52ae60u: goto label_52ae60;
        case 0x52ae64u: goto label_52ae64;
        case 0x52ae68u: goto label_52ae68;
        case 0x52ae6cu: goto label_52ae6c;
        case 0x52ae70u: goto label_52ae70;
        case 0x52ae74u: goto label_52ae74;
        case 0x52ae78u: goto label_52ae78;
        case 0x52ae7cu: goto label_52ae7c;
        case 0x52ae80u: goto label_52ae80;
        case 0x52ae84u: goto label_52ae84;
        case 0x52ae88u: goto label_52ae88;
        case 0x52ae8cu: goto label_52ae8c;
        case 0x52ae90u: goto label_52ae90;
        case 0x52ae94u: goto label_52ae94;
        case 0x52ae98u: goto label_52ae98;
        case 0x52ae9cu: goto label_52ae9c;
        case 0x52aea0u: goto label_52aea0;
        case 0x52aea4u: goto label_52aea4;
        case 0x52aea8u: goto label_52aea8;
        case 0x52aeacu: goto label_52aeac;
        case 0x52aeb0u: goto label_52aeb0;
        case 0x52aeb4u: goto label_52aeb4;
        case 0x52aeb8u: goto label_52aeb8;
        case 0x52aebcu: goto label_52aebc;
        case 0x52aec0u: goto label_52aec0;
        case 0x52aec4u: goto label_52aec4;
        case 0x52aec8u: goto label_52aec8;
        case 0x52aeccu: goto label_52aecc;
        case 0x52aed0u: goto label_52aed0;
        case 0x52aed4u: goto label_52aed4;
        case 0x52aed8u: goto label_52aed8;
        case 0x52aedcu: goto label_52aedc;
        case 0x52aee0u: goto label_52aee0;
        case 0x52aee4u: goto label_52aee4;
        case 0x52aee8u: goto label_52aee8;
        case 0x52aeecu: goto label_52aeec;
        case 0x52aef0u: goto label_52aef0;
        case 0x52aef4u: goto label_52aef4;
        case 0x52aef8u: goto label_52aef8;
        case 0x52aefcu: goto label_52aefc;
        case 0x52af00u: goto label_52af00;
        case 0x52af04u: goto label_52af04;
        case 0x52af08u: goto label_52af08;
        case 0x52af0cu: goto label_52af0c;
        case 0x52af10u: goto label_52af10;
        case 0x52af14u: goto label_52af14;
        case 0x52af18u: goto label_52af18;
        case 0x52af1cu: goto label_52af1c;
        case 0x52af20u: goto label_52af20;
        case 0x52af24u: goto label_52af24;
        case 0x52af28u: goto label_52af28;
        case 0x52af2cu: goto label_52af2c;
        case 0x52af30u: goto label_52af30;
        case 0x52af34u: goto label_52af34;
        case 0x52af38u: goto label_52af38;
        case 0x52af3cu: goto label_52af3c;
        case 0x52af40u: goto label_52af40;
        case 0x52af44u: goto label_52af44;
        case 0x52af48u: goto label_52af48;
        case 0x52af4cu: goto label_52af4c;
        case 0x52af50u: goto label_52af50;
        case 0x52af54u: goto label_52af54;
        case 0x52af58u: goto label_52af58;
        case 0x52af5cu: goto label_52af5c;
        case 0x52af60u: goto label_52af60;
        case 0x52af64u: goto label_52af64;
        case 0x52af68u: goto label_52af68;
        case 0x52af6cu: goto label_52af6c;
        case 0x52af70u: goto label_52af70;
        case 0x52af74u: goto label_52af74;
        case 0x52af78u: goto label_52af78;
        case 0x52af7cu: goto label_52af7c;
        case 0x52af80u: goto label_52af80;
        case 0x52af84u: goto label_52af84;
        case 0x52af88u: goto label_52af88;
        case 0x52af8cu: goto label_52af8c;
        case 0x52af90u: goto label_52af90;
        case 0x52af94u: goto label_52af94;
        case 0x52af98u: goto label_52af98;
        case 0x52af9cu: goto label_52af9c;
        case 0x52afa0u: goto label_52afa0;
        case 0x52afa4u: goto label_52afa4;
        case 0x52afa8u: goto label_52afa8;
        case 0x52afacu: goto label_52afac;
        case 0x52afb0u: goto label_52afb0;
        case 0x52afb4u: goto label_52afb4;
        case 0x52afb8u: goto label_52afb8;
        case 0x52afbcu: goto label_52afbc;
        case 0x52afc0u: goto label_52afc0;
        case 0x52afc4u: goto label_52afc4;
        case 0x52afc8u: goto label_52afc8;
        case 0x52afccu: goto label_52afcc;
        case 0x52afd0u: goto label_52afd0;
        case 0x52afd4u: goto label_52afd4;
        case 0x52afd8u: goto label_52afd8;
        case 0x52afdcu: goto label_52afdc;
        case 0x52afe0u: goto label_52afe0;
        case 0x52afe4u: goto label_52afe4;
        case 0x52afe8u: goto label_52afe8;
        case 0x52afecu: goto label_52afec;
        case 0x52aff0u: goto label_52aff0;
        case 0x52aff4u: goto label_52aff4;
        case 0x52aff8u: goto label_52aff8;
        case 0x52affcu: goto label_52affc;
        case 0x52b000u: goto label_52b000;
        case 0x52b004u: goto label_52b004;
        case 0x52b008u: goto label_52b008;
        case 0x52b00cu: goto label_52b00c;
        case 0x52b010u: goto label_52b010;
        case 0x52b014u: goto label_52b014;
        case 0x52b018u: goto label_52b018;
        case 0x52b01cu: goto label_52b01c;
        case 0x52b020u: goto label_52b020;
        case 0x52b024u: goto label_52b024;
        case 0x52b028u: goto label_52b028;
        case 0x52b02cu: goto label_52b02c;
        case 0x52b030u: goto label_52b030;
        case 0x52b034u: goto label_52b034;
        case 0x52b038u: goto label_52b038;
        case 0x52b03cu: goto label_52b03c;
        case 0x52b040u: goto label_52b040;
        case 0x52b044u: goto label_52b044;
        case 0x52b048u: goto label_52b048;
        case 0x52b04cu: goto label_52b04c;
        case 0x52b050u: goto label_52b050;
        case 0x52b054u: goto label_52b054;
        case 0x52b058u: goto label_52b058;
        case 0x52b05cu: goto label_52b05c;
        case 0x52b060u: goto label_52b060;
        case 0x52b064u: goto label_52b064;
        case 0x52b068u: goto label_52b068;
        case 0x52b06cu: goto label_52b06c;
        case 0x52b070u: goto label_52b070;
        case 0x52b074u: goto label_52b074;
        case 0x52b078u: goto label_52b078;
        case 0x52b07cu: goto label_52b07c;
        case 0x52b080u: goto label_52b080;
        case 0x52b084u: goto label_52b084;
        case 0x52b088u: goto label_52b088;
        case 0x52b08cu: goto label_52b08c;
        case 0x52b090u: goto label_52b090;
        case 0x52b094u: goto label_52b094;
        case 0x52b098u: goto label_52b098;
        case 0x52b09cu: goto label_52b09c;
        case 0x52b0a0u: goto label_52b0a0;
        case 0x52b0a4u: goto label_52b0a4;
        case 0x52b0a8u: goto label_52b0a8;
        case 0x52b0acu: goto label_52b0ac;
        case 0x52b0b0u: goto label_52b0b0;
        case 0x52b0b4u: goto label_52b0b4;
        case 0x52b0b8u: goto label_52b0b8;
        case 0x52b0bcu: goto label_52b0bc;
        case 0x52b0c0u: goto label_52b0c0;
        case 0x52b0c4u: goto label_52b0c4;
        case 0x52b0c8u: goto label_52b0c8;
        case 0x52b0ccu: goto label_52b0cc;
        case 0x52b0d0u: goto label_52b0d0;
        case 0x52b0d4u: goto label_52b0d4;
        case 0x52b0d8u: goto label_52b0d8;
        case 0x52b0dcu: goto label_52b0dc;
        case 0x52b0e0u: goto label_52b0e0;
        case 0x52b0e4u: goto label_52b0e4;
        case 0x52b0e8u: goto label_52b0e8;
        case 0x52b0ecu: goto label_52b0ec;
        case 0x52b0f0u: goto label_52b0f0;
        case 0x52b0f4u: goto label_52b0f4;
        case 0x52b0f8u: goto label_52b0f8;
        case 0x52b0fcu: goto label_52b0fc;
        case 0x52b100u: goto label_52b100;
        case 0x52b104u: goto label_52b104;
        case 0x52b108u: goto label_52b108;
        case 0x52b10cu: goto label_52b10c;
        case 0x52b110u: goto label_52b110;
        case 0x52b114u: goto label_52b114;
        case 0x52b118u: goto label_52b118;
        case 0x52b11cu: goto label_52b11c;
        case 0x52b120u: goto label_52b120;
        case 0x52b124u: goto label_52b124;
        case 0x52b128u: goto label_52b128;
        case 0x52b12cu: goto label_52b12c;
        case 0x52b130u: goto label_52b130;
        case 0x52b134u: goto label_52b134;
        case 0x52b138u: goto label_52b138;
        case 0x52b13cu: goto label_52b13c;
        case 0x52b140u: goto label_52b140;
        case 0x52b144u: goto label_52b144;
        case 0x52b148u: goto label_52b148;
        case 0x52b14cu: goto label_52b14c;
        case 0x52b150u: goto label_52b150;
        case 0x52b154u: goto label_52b154;
        case 0x52b158u: goto label_52b158;
        case 0x52b15cu: goto label_52b15c;
        case 0x52b160u: goto label_52b160;
        case 0x52b164u: goto label_52b164;
        case 0x52b168u: goto label_52b168;
        case 0x52b16cu: goto label_52b16c;
        case 0x52b170u: goto label_52b170;
        case 0x52b174u: goto label_52b174;
        case 0x52b178u: goto label_52b178;
        case 0x52b17cu: goto label_52b17c;
        case 0x52b180u: goto label_52b180;
        case 0x52b184u: goto label_52b184;
        case 0x52b188u: goto label_52b188;
        case 0x52b18cu: goto label_52b18c;
        case 0x52b190u: goto label_52b190;
        case 0x52b194u: goto label_52b194;
        case 0x52b198u: goto label_52b198;
        case 0x52b19cu: goto label_52b19c;
        case 0x52b1a0u: goto label_52b1a0;
        case 0x52b1a4u: goto label_52b1a4;
        case 0x52b1a8u: goto label_52b1a8;
        case 0x52b1acu: goto label_52b1ac;
        case 0x52b1b0u: goto label_52b1b0;
        case 0x52b1b4u: goto label_52b1b4;
        case 0x52b1b8u: goto label_52b1b8;
        case 0x52b1bcu: goto label_52b1bc;
        case 0x52b1c0u: goto label_52b1c0;
        case 0x52b1c4u: goto label_52b1c4;
        case 0x52b1c8u: goto label_52b1c8;
        case 0x52b1ccu: goto label_52b1cc;
        case 0x52b1d0u: goto label_52b1d0;
        case 0x52b1d4u: goto label_52b1d4;
        case 0x52b1d8u: goto label_52b1d8;
        case 0x52b1dcu: goto label_52b1dc;
        case 0x52b1e0u: goto label_52b1e0;
        case 0x52b1e4u: goto label_52b1e4;
        case 0x52b1e8u: goto label_52b1e8;
        case 0x52b1ecu: goto label_52b1ec;
        case 0x52b1f0u: goto label_52b1f0;
        case 0x52b1f4u: goto label_52b1f4;
        case 0x52b1f8u: goto label_52b1f8;
        case 0x52b1fcu: goto label_52b1fc;
        case 0x52b200u: goto label_52b200;
        case 0x52b204u: goto label_52b204;
        case 0x52b208u: goto label_52b208;
        case 0x52b20cu: goto label_52b20c;
        case 0x52b210u: goto label_52b210;
        case 0x52b214u: goto label_52b214;
        case 0x52b218u: goto label_52b218;
        case 0x52b21cu: goto label_52b21c;
        case 0x52b220u: goto label_52b220;
        case 0x52b224u: goto label_52b224;
        case 0x52b228u: goto label_52b228;
        case 0x52b22cu: goto label_52b22c;
        case 0x52b230u: goto label_52b230;
        case 0x52b234u: goto label_52b234;
        case 0x52b238u: goto label_52b238;
        case 0x52b23cu: goto label_52b23c;
        case 0x52b240u: goto label_52b240;
        case 0x52b244u: goto label_52b244;
        case 0x52b248u: goto label_52b248;
        case 0x52b24cu: goto label_52b24c;
        case 0x52b250u: goto label_52b250;
        case 0x52b254u: goto label_52b254;
        case 0x52b258u: goto label_52b258;
        case 0x52b25cu: goto label_52b25c;
        case 0x52b260u: goto label_52b260;
        case 0x52b264u: goto label_52b264;
        case 0x52b268u: goto label_52b268;
        case 0x52b26cu: goto label_52b26c;
        case 0x52b270u: goto label_52b270;
        case 0x52b274u: goto label_52b274;
        case 0x52b278u: goto label_52b278;
        case 0x52b27cu: goto label_52b27c;
        case 0x52b280u: goto label_52b280;
        case 0x52b284u: goto label_52b284;
        case 0x52b288u: goto label_52b288;
        case 0x52b28cu: goto label_52b28c;
        case 0x52b290u: goto label_52b290;
        case 0x52b294u: goto label_52b294;
        case 0x52b298u: goto label_52b298;
        case 0x52b29cu: goto label_52b29c;
        case 0x52b2a0u: goto label_52b2a0;
        case 0x52b2a4u: goto label_52b2a4;
        case 0x52b2a8u: goto label_52b2a8;
        case 0x52b2acu: goto label_52b2ac;
        case 0x52b2b0u: goto label_52b2b0;
        case 0x52b2b4u: goto label_52b2b4;
        case 0x52b2b8u: goto label_52b2b8;
        case 0x52b2bcu: goto label_52b2bc;
        case 0x52b2c0u: goto label_52b2c0;
        case 0x52b2c4u: goto label_52b2c4;
        case 0x52b2c8u: goto label_52b2c8;
        case 0x52b2ccu: goto label_52b2cc;
        case 0x52b2d0u: goto label_52b2d0;
        case 0x52b2d4u: goto label_52b2d4;
        case 0x52b2d8u: goto label_52b2d8;
        case 0x52b2dcu: goto label_52b2dc;
        case 0x52b2e0u: goto label_52b2e0;
        case 0x52b2e4u: goto label_52b2e4;
        case 0x52b2e8u: goto label_52b2e8;
        case 0x52b2ecu: goto label_52b2ec;
        case 0x52b2f0u: goto label_52b2f0;
        case 0x52b2f4u: goto label_52b2f4;
        case 0x52b2f8u: goto label_52b2f8;
        case 0x52b2fcu: goto label_52b2fc;
        case 0x52b300u: goto label_52b300;
        case 0x52b304u: goto label_52b304;
        case 0x52b308u: goto label_52b308;
        case 0x52b30cu: goto label_52b30c;
        case 0x52b310u: goto label_52b310;
        case 0x52b314u: goto label_52b314;
        case 0x52b318u: goto label_52b318;
        case 0x52b31cu: goto label_52b31c;
        case 0x52b320u: goto label_52b320;
        case 0x52b324u: goto label_52b324;
        case 0x52b328u: goto label_52b328;
        case 0x52b32cu: goto label_52b32c;
        case 0x52b330u: goto label_52b330;
        case 0x52b334u: goto label_52b334;
        case 0x52b338u: goto label_52b338;
        case 0x52b33cu: goto label_52b33c;
        case 0x52b340u: goto label_52b340;
        case 0x52b344u: goto label_52b344;
        case 0x52b348u: goto label_52b348;
        case 0x52b34cu: goto label_52b34c;
        case 0x52b350u: goto label_52b350;
        case 0x52b354u: goto label_52b354;
        case 0x52b358u: goto label_52b358;
        case 0x52b35cu: goto label_52b35c;
        case 0x52b360u: goto label_52b360;
        case 0x52b364u: goto label_52b364;
        case 0x52b368u: goto label_52b368;
        case 0x52b36cu: goto label_52b36c;
        case 0x52b370u: goto label_52b370;
        case 0x52b374u: goto label_52b374;
        case 0x52b378u: goto label_52b378;
        case 0x52b37cu: goto label_52b37c;
        case 0x52b380u: goto label_52b380;
        case 0x52b384u: goto label_52b384;
        case 0x52b388u: goto label_52b388;
        case 0x52b38cu: goto label_52b38c;
        case 0x52b390u: goto label_52b390;
        case 0x52b394u: goto label_52b394;
        case 0x52b398u: goto label_52b398;
        case 0x52b39cu: goto label_52b39c;
        case 0x52b3a0u: goto label_52b3a0;
        case 0x52b3a4u: goto label_52b3a4;
        case 0x52b3a8u: goto label_52b3a8;
        case 0x52b3acu: goto label_52b3ac;
        case 0x52b3b0u: goto label_52b3b0;
        case 0x52b3b4u: goto label_52b3b4;
        case 0x52b3b8u: goto label_52b3b8;
        case 0x52b3bcu: goto label_52b3bc;
        case 0x52b3c0u: goto label_52b3c0;
        case 0x52b3c4u: goto label_52b3c4;
        case 0x52b3c8u: goto label_52b3c8;
        case 0x52b3ccu: goto label_52b3cc;
        case 0x52b3d0u: goto label_52b3d0;
        case 0x52b3d4u: goto label_52b3d4;
        case 0x52b3d8u: goto label_52b3d8;
        case 0x52b3dcu: goto label_52b3dc;
        case 0x52b3e0u: goto label_52b3e0;
        case 0x52b3e4u: goto label_52b3e4;
        case 0x52b3e8u: goto label_52b3e8;
        case 0x52b3ecu: goto label_52b3ec;
        case 0x52b3f0u: goto label_52b3f0;
        case 0x52b3f4u: goto label_52b3f4;
        case 0x52b3f8u: goto label_52b3f8;
        case 0x52b3fcu: goto label_52b3fc;
        case 0x52b400u: goto label_52b400;
        case 0x52b404u: goto label_52b404;
        case 0x52b408u: goto label_52b408;
        case 0x52b40cu: goto label_52b40c;
        case 0x52b410u: goto label_52b410;
        case 0x52b414u: goto label_52b414;
        case 0x52b418u: goto label_52b418;
        case 0x52b41cu: goto label_52b41c;
        case 0x52b420u: goto label_52b420;
        case 0x52b424u: goto label_52b424;
        case 0x52b428u: goto label_52b428;
        case 0x52b42cu: goto label_52b42c;
        case 0x52b430u: goto label_52b430;
        case 0x52b434u: goto label_52b434;
        case 0x52b438u: goto label_52b438;
        case 0x52b43cu: goto label_52b43c;
        case 0x52b440u: goto label_52b440;
        case 0x52b444u: goto label_52b444;
        case 0x52b448u: goto label_52b448;
        case 0x52b44cu: goto label_52b44c;
        case 0x52b450u: goto label_52b450;
        case 0x52b454u: goto label_52b454;
        case 0x52b458u: goto label_52b458;
        case 0x52b45cu: goto label_52b45c;
        case 0x52b460u: goto label_52b460;
        case 0x52b464u: goto label_52b464;
        case 0x52b468u: goto label_52b468;
        case 0x52b46cu: goto label_52b46c;
        case 0x52b470u: goto label_52b470;
        case 0x52b474u: goto label_52b474;
        case 0x52b478u: goto label_52b478;
        case 0x52b47cu: goto label_52b47c;
        case 0x52b480u: goto label_52b480;
        case 0x52b484u: goto label_52b484;
        case 0x52b488u: goto label_52b488;
        case 0x52b48cu: goto label_52b48c;
        case 0x52b490u: goto label_52b490;
        case 0x52b494u: goto label_52b494;
        case 0x52b498u: goto label_52b498;
        case 0x52b49cu: goto label_52b49c;
        case 0x52b4a0u: goto label_52b4a0;
        case 0x52b4a4u: goto label_52b4a4;
        case 0x52b4a8u: goto label_52b4a8;
        case 0x52b4acu: goto label_52b4ac;
        case 0x52b4b0u: goto label_52b4b0;
        case 0x52b4b4u: goto label_52b4b4;
        case 0x52b4b8u: goto label_52b4b8;
        case 0x52b4bcu: goto label_52b4bc;
        case 0x52b4c0u: goto label_52b4c0;
        case 0x52b4c4u: goto label_52b4c4;
        case 0x52b4c8u: goto label_52b4c8;
        case 0x52b4ccu: goto label_52b4cc;
        case 0x52b4d0u: goto label_52b4d0;
        case 0x52b4d4u: goto label_52b4d4;
        case 0x52b4d8u: goto label_52b4d8;
        case 0x52b4dcu: goto label_52b4dc;
        case 0x52b4e0u: goto label_52b4e0;
        case 0x52b4e4u: goto label_52b4e4;
        case 0x52b4e8u: goto label_52b4e8;
        case 0x52b4ecu: goto label_52b4ec;
        case 0x52b4f0u: goto label_52b4f0;
        case 0x52b4f4u: goto label_52b4f4;
        case 0x52b4f8u: goto label_52b4f8;
        case 0x52b4fcu: goto label_52b4fc;
        case 0x52b500u: goto label_52b500;
        case 0x52b504u: goto label_52b504;
        case 0x52b508u: goto label_52b508;
        case 0x52b50cu: goto label_52b50c;
        case 0x52b510u: goto label_52b510;
        case 0x52b514u: goto label_52b514;
        case 0x52b518u: goto label_52b518;
        case 0x52b51cu: goto label_52b51c;
        case 0x52b520u: goto label_52b520;
        case 0x52b524u: goto label_52b524;
        case 0x52b528u: goto label_52b528;
        case 0x52b52cu: goto label_52b52c;
        case 0x52b530u: goto label_52b530;
        case 0x52b534u: goto label_52b534;
        case 0x52b538u: goto label_52b538;
        case 0x52b53cu: goto label_52b53c;
        case 0x52b540u: goto label_52b540;
        case 0x52b544u: goto label_52b544;
        case 0x52b548u: goto label_52b548;
        case 0x52b54cu: goto label_52b54c;
        case 0x52b550u: goto label_52b550;
        case 0x52b554u: goto label_52b554;
        case 0x52b558u: goto label_52b558;
        case 0x52b55cu: goto label_52b55c;
        case 0x52b560u: goto label_52b560;
        case 0x52b564u: goto label_52b564;
        case 0x52b568u: goto label_52b568;
        case 0x52b56cu: goto label_52b56c;
        case 0x52b570u: goto label_52b570;
        case 0x52b574u: goto label_52b574;
        case 0x52b578u: goto label_52b578;
        case 0x52b57cu: goto label_52b57c;
        case 0x52b580u: goto label_52b580;
        case 0x52b584u: goto label_52b584;
        case 0x52b588u: goto label_52b588;
        case 0x52b58cu: goto label_52b58c;
        case 0x52b590u: goto label_52b590;
        case 0x52b594u: goto label_52b594;
        case 0x52b598u: goto label_52b598;
        case 0x52b59cu: goto label_52b59c;
        case 0x52b5a0u: goto label_52b5a0;
        case 0x52b5a4u: goto label_52b5a4;
        case 0x52b5a8u: goto label_52b5a8;
        case 0x52b5acu: goto label_52b5ac;
        case 0x52b5b0u: goto label_52b5b0;
        case 0x52b5b4u: goto label_52b5b4;
        case 0x52b5b8u: goto label_52b5b8;
        case 0x52b5bcu: goto label_52b5bc;
        case 0x52b5c0u: goto label_52b5c0;
        case 0x52b5c4u: goto label_52b5c4;
        case 0x52b5c8u: goto label_52b5c8;
        case 0x52b5ccu: goto label_52b5cc;
        case 0x52b5d0u: goto label_52b5d0;
        case 0x52b5d4u: goto label_52b5d4;
        case 0x52b5d8u: goto label_52b5d8;
        case 0x52b5dcu: goto label_52b5dc;
        case 0x52b5e0u: goto label_52b5e0;
        case 0x52b5e4u: goto label_52b5e4;
        case 0x52b5e8u: goto label_52b5e8;
        case 0x52b5ecu: goto label_52b5ec;
        case 0x52b5f0u: goto label_52b5f0;
        case 0x52b5f4u: goto label_52b5f4;
        case 0x52b5f8u: goto label_52b5f8;
        case 0x52b5fcu: goto label_52b5fc;
        case 0x52b600u: goto label_52b600;
        case 0x52b604u: goto label_52b604;
        case 0x52b608u: goto label_52b608;
        case 0x52b60cu: goto label_52b60c;
        case 0x52b610u: goto label_52b610;
        case 0x52b614u: goto label_52b614;
        case 0x52b618u: goto label_52b618;
        case 0x52b61cu: goto label_52b61c;
        case 0x52b620u: goto label_52b620;
        case 0x52b624u: goto label_52b624;
        case 0x52b628u: goto label_52b628;
        case 0x52b62cu: goto label_52b62c;
        case 0x52b630u: goto label_52b630;
        case 0x52b634u: goto label_52b634;
        case 0x52b638u: goto label_52b638;
        case 0x52b63cu: goto label_52b63c;
        case 0x52b640u: goto label_52b640;
        case 0x52b644u: goto label_52b644;
        case 0x52b648u: goto label_52b648;
        case 0x52b64cu: goto label_52b64c;
        case 0x52b650u: goto label_52b650;
        case 0x52b654u: goto label_52b654;
        case 0x52b658u: goto label_52b658;
        case 0x52b65cu: goto label_52b65c;
        case 0x52b660u: goto label_52b660;
        case 0x52b664u: goto label_52b664;
        case 0x52b668u: goto label_52b668;
        case 0x52b66cu: goto label_52b66c;
        case 0x52b670u: goto label_52b670;
        case 0x52b674u: goto label_52b674;
        case 0x52b678u: goto label_52b678;
        case 0x52b67cu: goto label_52b67c;
        case 0x52b680u: goto label_52b680;
        case 0x52b684u: goto label_52b684;
        case 0x52b688u: goto label_52b688;
        case 0x52b68cu: goto label_52b68c;
        case 0x52b690u: goto label_52b690;
        case 0x52b694u: goto label_52b694;
        case 0x52b698u: goto label_52b698;
        case 0x52b69cu: goto label_52b69c;
        case 0x52b6a0u: goto label_52b6a0;
        case 0x52b6a4u: goto label_52b6a4;
        case 0x52b6a8u: goto label_52b6a8;
        case 0x52b6acu: goto label_52b6ac;
        case 0x52b6b0u: goto label_52b6b0;
        case 0x52b6b4u: goto label_52b6b4;
        case 0x52b6b8u: goto label_52b6b8;
        case 0x52b6bcu: goto label_52b6bc;
        case 0x52b6c0u: goto label_52b6c0;
        case 0x52b6c4u: goto label_52b6c4;
        case 0x52b6c8u: goto label_52b6c8;
        case 0x52b6ccu: goto label_52b6cc;
        case 0x52b6d0u: goto label_52b6d0;
        case 0x52b6d4u: goto label_52b6d4;
        case 0x52b6d8u: goto label_52b6d8;
        case 0x52b6dcu: goto label_52b6dc;
        case 0x52b6e0u: goto label_52b6e0;
        case 0x52b6e4u: goto label_52b6e4;
        case 0x52b6e8u: goto label_52b6e8;
        case 0x52b6ecu: goto label_52b6ec;
        case 0x52b6f0u: goto label_52b6f0;
        case 0x52b6f4u: goto label_52b6f4;
        case 0x52b6f8u: goto label_52b6f8;
        case 0x52b6fcu: goto label_52b6fc;
        case 0x52b700u: goto label_52b700;
        case 0x52b704u: goto label_52b704;
        case 0x52b708u: goto label_52b708;
        case 0x52b70cu: goto label_52b70c;
        case 0x52b710u: goto label_52b710;
        case 0x52b714u: goto label_52b714;
        case 0x52b718u: goto label_52b718;
        case 0x52b71cu: goto label_52b71c;
        case 0x52b720u: goto label_52b720;
        case 0x52b724u: goto label_52b724;
        case 0x52b728u: goto label_52b728;
        case 0x52b72cu: goto label_52b72c;
        case 0x52b730u: goto label_52b730;
        case 0x52b734u: goto label_52b734;
        case 0x52b738u: goto label_52b738;
        case 0x52b73cu: goto label_52b73c;
        case 0x52b740u: goto label_52b740;
        case 0x52b744u: goto label_52b744;
        case 0x52b748u: goto label_52b748;
        case 0x52b74cu: goto label_52b74c;
        case 0x52b750u: goto label_52b750;
        case 0x52b754u: goto label_52b754;
        case 0x52b758u: goto label_52b758;
        case 0x52b75cu: goto label_52b75c;
        case 0x52b760u: goto label_52b760;
        case 0x52b764u: goto label_52b764;
        case 0x52b768u: goto label_52b768;
        case 0x52b76cu: goto label_52b76c;
        case 0x52b770u: goto label_52b770;
        case 0x52b774u: goto label_52b774;
        case 0x52b778u: goto label_52b778;
        case 0x52b77cu: goto label_52b77c;
        case 0x52b780u: goto label_52b780;
        case 0x52b784u: goto label_52b784;
        case 0x52b788u: goto label_52b788;
        case 0x52b78cu: goto label_52b78c;
        case 0x52b790u: goto label_52b790;
        case 0x52b794u: goto label_52b794;
        case 0x52b798u: goto label_52b798;
        case 0x52b79cu: goto label_52b79c;
        case 0x52b7a0u: goto label_52b7a0;
        case 0x52b7a4u: goto label_52b7a4;
        case 0x52b7a8u: goto label_52b7a8;
        case 0x52b7acu: goto label_52b7ac;
        case 0x52b7b0u: goto label_52b7b0;
        case 0x52b7b4u: goto label_52b7b4;
        case 0x52b7b8u: goto label_52b7b8;
        case 0x52b7bcu: goto label_52b7bc;
        case 0x52b7c0u: goto label_52b7c0;
        case 0x52b7c4u: goto label_52b7c4;
        case 0x52b7c8u: goto label_52b7c8;
        case 0x52b7ccu: goto label_52b7cc;
        case 0x52b7d0u: goto label_52b7d0;
        case 0x52b7d4u: goto label_52b7d4;
        case 0x52b7d8u: goto label_52b7d8;
        case 0x52b7dcu: goto label_52b7dc;
        case 0x52b7e0u: goto label_52b7e0;
        case 0x52b7e4u: goto label_52b7e4;
        case 0x52b7e8u: goto label_52b7e8;
        case 0x52b7ecu: goto label_52b7ec;
        case 0x52b7f0u: goto label_52b7f0;
        case 0x52b7f4u: goto label_52b7f4;
        case 0x52b7f8u: goto label_52b7f8;
        case 0x52b7fcu: goto label_52b7fc;
        case 0x52b800u: goto label_52b800;
        case 0x52b804u: goto label_52b804;
        case 0x52b808u: goto label_52b808;
        case 0x52b80cu: goto label_52b80c;
        case 0x52b810u: goto label_52b810;
        case 0x52b814u: goto label_52b814;
        case 0x52b818u: goto label_52b818;
        case 0x52b81cu: goto label_52b81c;
        case 0x52b820u: goto label_52b820;
        case 0x52b824u: goto label_52b824;
        case 0x52b828u: goto label_52b828;
        case 0x52b82cu: goto label_52b82c;
        case 0x52b830u: goto label_52b830;
        case 0x52b834u: goto label_52b834;
        case 0x52b838u: goto label_52b838;
        case 0x52b83cu: goto label_52b83c;
        case 0x52b840u: goto label_52b840;
        case 0x52b844u: goto label_52b844;
        case 0x52b848u: goto label_52b848;
        case 0x52b84cu: goto label_52b84c;
        case 0x52b850u: goto label_52b850;
        case 0x52b854u: goto label_52b854;
        case 0x52b858u: goto label_52b858;
        case 0x52b85cu: goto label_52b85c;
        case 0x52b860u: goto label_52b860;
        case 0x52b864u: goto label_52b864;
        case 0x52b868u: goto label_52b868;
        case 0x52b86cu: goto label_52b86c;
        case 0x52b870u: goto label_52b870;
        case 0x52b874u: goto label_52b874;
        case 0x52b878u: goto label_52b878;
        case 0x52b87cu: goto label_52b87c;
        case 0x52b880u: goto label_52b880;
        case 0x52b884u: goto label_52b884;
        case 0x52b888u: goto label_52b888;
        case 0x52b88cu: goto label_52b88c;
        case 0x52b890u: goto label_52b890;
        case 0x52b894u: goto label_52b894;
        case 0x52b898u: goto label_52b898;
        case 0x52b89cu: goto label_52b89c;
        case 0x52b8a0u: goto label_52b8a0;
        case 0x52b8a4u: goto label_52b8a4;
        case 0x52b8a8u: goto label_52b8a8;
        case 0x52b8acu: goto label_52b8ac;
        case 0x52b8b0u: goto label_52b8b0;
        case 0x52b8b4u: goto label_52b8b4;
        case 0x52b8b8u: goto label_52b8b8;
        case 0x52b8bcu: goto label_52b8bc;
        case 0x52b8c0u: goto label_52b8c0;
        case 0x52b8c4u: goto label_52b8c4;
        case 0x52b8c8u: goto label_52b8c8;
        case 0x52b8ccu: goto label_52b8cc;
        case 0x52b8d0u: goto label_52b8d0;
        case 0x52b8d4u: goto label_52b8d4;
        case 0x52b8d8u: goto label_52b8d8;
        case 0x52b8dcu: goto label_52b8dc;
        case 0x52b8e0u: goto label_52b8e0;
        case 0x52b8e4u: goto label_52b8e4;
        case 0x52b8e8u: goto label_52b8e8;
        case 0x52b8ecu: goto label_52b8ec;
        case 0x52b8f0u: goto label_52b8f0;
        case 0x52b8f4u: goto label_52b8f4;
        case 0x52b8f8u: goto label_52b8f8;
        case 0x52b8fcu: goto label_52b8fc;
        case 0x52b900u: goto label_52b900;
        case 0x52b904u: goto label_52b904;
        case 0x52b908u: goto label_52b908;
        case 0x52b90cu: goto label_52b90c;
        case 0x52b910u: goto label_52b910;
        case 0x52b914u: goto label_52b914;
        case 0x52b918u: goto label_52b918;
        case 0x52b91cu: goto label_52b91c;
        case 0x52b920u: goto label_52b920;
        case 0x52b924u: goto label_52b924;
        case 0x52b928u: goto label_52b928;
        case 0x52b92cu: goto label_52b92c;
        case 0x52b930u: goto label_52b930;
        case 0x52b934u: goto label_52b934;
        case 0x52b938u: goto label_52b938;
        case 0x52b93cu: goto label_52b93c;
        case 0x52b940u: goto label_52b940;
        case 0x52b944u: goto label_52b944;
        case 0x52b948u: goto label_52b948;
        case 0x52b94cu: goto label_52b94c;
        case 0x52b950u: goto label_52b950;
        case 0x52b954u: goto label_52b954;
        case 0x52b958u: goto label_52b958;
        case 0x52b95cu: goto label_52b95c;
        case 0x52b960u: goto label_52b960;
        case 0x52b964u: goto label_52b964;
        case 0x52b968u: goto label_52b968;
        case 0x52b96cu: goto label_52b96c;
        case 0x52b970u: goto label_52b970;
        case 0x52b974u: goto label_52b974;
        case 0x52b978u: goto label_52b978;
        case 0x52b97cu: goto label_52b97c;
        case 0x52b980u: goto label_52b980;
        case 0x52b984u: goto label_52b984;
        case 0x52b988u: goto label_52b988;
        case 0x52b98cu: goto label_52b98c;
        case 0x52b990u: goto label_52b990;
        case 0x52b994u: goto label_52b994;
        case 0x52b998u: goto label_52b998;
        case 0x52b99cu: goto label_52b99c;
        case 0x52b9a0u: goto label_52b9a0;
        case 0x52b9a4u: goto label_52b9a4;
        case 0x52b9a8u: goto label_52b9a8;
        case 0x52b9acu: goto label_52b9ac;
        case 0x52b9b0u: goto label_52b9b0;
        case 0x52b9b4u: goto label_52b9b4;
        case 0x52b9b8u: goto label_52b9b8;
        case 0x52b9bcu: goto label_52b9bc;
        case 0x52b9c0u: goto label_52b9c0;
        case 0x52b9c4u: goto label_52b9c4;
        case 0x52b9c8u: goto label_52b9c8;
        case 0x52b9ccu: goto label_52b9cc;
        case 0x52b9d0u: goto label_52b9d0;
        case 0x52b9d4u: goto label_52b9d4;
        case 0x52b9d8u: goto label_52b9d8;
        case 0x52b9dcu: goto label_52b9dc;
        case 0x52b9e0u: goto label_52b9e0;
        case 0x52b9e4u: goto label_52b9e4;
        case 0x52b9e8u: goto label_52b9e8;
        case 0x52b9ecu: goto label_52b9ec;
        case 0x52b9f0u: goto label_52b9f0;
        case 0x52b9f4u: goto label_52b9f4;
        case 0x52b9f8u: goto label_52b9f8;
        case 0x52b9fcu: goto label_52b9fc;
        case 0x52ba00u: goto label_52ba00;
        case 0x52ba04u: goto label_52ba04;
        case 0x52ba08u: goto label_52ba08;
        case 0x52ba0cu: goto label_52ba0c;
        case 0x52ba10u: goto label_52ba10;
        case 0x52ba14u: goto label_52ba14;
        case 0x52ba18u: goto label_52ba18;
        case 0x52ba1cu: goto label_52ba1c;
        case 0x52ba20u: goto label_52ba20;
        case 0x52ba24u: goto label_52ba24;
        case 0x52ba28u: goto label_52ba28;
        case 0x52ba2cu: goto label_52ba2c;
        case 0x52ba30u: goto label_52ba30;
        case 0x52ba34u: goto label_52ba34;
        case 0x52ba38u: goto label_52ba38;
        case 0x52ba3cu: goto label_52ba3c;
        case 0x52ba40u: goto label_52ba40;
        case 0x52ba44u: goto label_52ba44;
        case 0x52ba48u: goto label_52ba48;
        case 0x52ba4cu: goto label_52ba4c;
        case 0x52ba50u: goto label_52ba50;
        case 0x52ba54u: goto label_52ba54;
        case 0x52ba58u: goto label_52ba58;
        case 0x52ba5cu: goto label_52ba5c;
        case 0x52ba60u: goto label_52ba60;
        case 0x52ba64u: goto label_52ba64;
        case 0x52ba68u: goto label_52ba68;
        case 0x52ba6cu: goto label_52ba6c;
        case 0x52ba70u: goto label_52ba70;
        case 0x52ba74u: goto label_52ba74;
        case 0x52ba78u: goto label_52ba78;
        case 0x52ba7cu: goto label_52ba7c;
        case 0x52ba80u: goto label_52ba80;
        case 0x52ba84u: goto label_52ba84;
        case 0x52ba88u: goto label_52ba88;
        case 0x52ba8cu: goto label_52ba8c;
        case 0x52ba90u: goto label_52ba90;
        case 0x52ba94u: goto label_52ba94;
        case 0x52ba98u: goto label_52ba98;
        case 0x52ba9cu: goto label_52ba9c;
        case 0x52baa0u: goto label_52baa0;
        case 0x52baa4u: goto label_52baa4;
        case 0x52baa8u: goto label_52baa8;
        case 0x52baacu: goto label_52baac;
        case 0x52bab0u: goto label_52bab0;
        case 0x52bab4u: goto label_52bab4;
        case 0x52bab8u: goto label_52bab8;
        case 0x52babcu: goto label_52babc;
        case 0x52bac0u: goto label_52bac0;
        case 0x52bac4u: goto label_52bac4;
        case 0x52bac8u: goto label_52bac8;
        case 0x52baccu: goto label_52bacc;
        case 0x52bad0u: goto label_52bad0;
        case 0x52bad4u: goto label_52bad4;
        case 0x52bad8u: goto label_52bad8;
        case 0x52badcu: goto label_52badc;
        case 0x52bae0u: goto label_52bae0;
        case 0x52bae4u: goto label_52bae4;
        case 0x52bae8u: goto label_52bae8;
        case 0x52baecu: goto label_52baec;
        case 0x52baf0u: goto label_52baf0;
        case 0x52baf4u: goto label_52baf4;
        case 0x52baf8u: goto label_52baf8;
        case 0x52bafcu: goto label_52bafc;
        case 0x52bb00u: goto label_52bb00;
        case 0x52bb04u: goto label_52bb04;
        case 0x52bb08u: goto label_52bb08;
        case 0x52bb0cu: goto label_52bb0c;
        case 0x52bb10u: goto label_52bb10;
        case 0x52bb14u: goto label_52bb14;
        case 0x52bb18u: goto label_52bb18;
        case 0x52bb1cu: goto label_52bb1c;
        case 0x52bb20u: goto label_52bb20;
        case 0x52bb24u: goto label_52bb24;
        case 0x52bb28u: goto label_52bb28;
        case 0x52bb2cu: goto label_52bb2c;
        case 0x52bb30u: goto label_52bb30;
        case 0x52bb34u: goto label_52bb34;
        case 0x52bb38u: goto label_52bb38;
        case 0x52bb3cu: goto label_52bb3c;
        case 0x52bb40u: goto label_52bb40;
        case 0x52bb44u: goto label_52bb44;
        case 0x52bb48u: goto label_52bb48;
        case 0x52bb4cu: goto label_52bb4c;
        case 0x52bb50u: goto label_52bb50;
        case 0x52bb54u: goto label_52bb54;
        case 0x52bb58u: goto label_52bb58;
        case 0x52bb5cu: goto label_52bb5c;
        case 0x52bb60u: goto label_52bb60;
        case 0x52bb64u: goto label_52bb64;
        case 0x52bb68u: goto label_52bb68;
        case 0x52bb6cu: goto label_52bb6c;
        case 0x52bb70u: goto label_52bb70;
        case 0x52bb74u: goto label_52bb74;
        case 0x52bb78u: goto label_52bb78;
        case 0x52bb7cu: goto label_52bb7c;
        case 0x52bb80u: goto label_52bb80;
        case 0x52bb84u: goto label_52bb84;
        case 0x52bb88u: goto label_52bb88;
        case 0x52bb8cu: goto label_52bb8c;
        case 0x52bb90u: goto label_52bb90;
        case 0x52bb94u: goto label_52bb94;
        case 0x52bb98u: goto label_52bb98;
        case 0x52bb9cu: goto label_52bb9c;
        case 0x52bba0u: goto label_52bba0;
        case 0x52bba4u: goto label_52bba4;
        case 0x52bba8u: goto label_52bba8;
        case 0x52bbacu: goto label_52bbac;
        case 0x52bbb0u: goto label_52bbb0;
        case 0x52bbb4u: goto label_52bbb4;
        case 0x52bbb8u: goto label_52bbb8;
        case 0x52bbbcu: goto label_52bbbc;
        case 0x52bbc0u: goto label_52bbc0;
        case 0x52bbc4u: goto label_52bbc4;
        case 0x52bbc8u: goto label_52bbc8;
        case 0x52bbccu: goto label_52bbcc;
        case 0x52bbd0u: goto label_52bbd0;
        case 0x52bbd4u: goto label_52bbd4;
        case 0x52bbd8u: goto label_52bbd8;
        case 0x52bbdcu: goto label_52bbdc;
        case 0x52bbe0u: goto label_52bbe0;
        case 0x52bbe4u: goto label_52bbe4;
        case 0x52bbe8u: goto label_52bbe8;
        case 0x52bbecu: goto label_52bbec;
        case 0x52bbf0u: goto label_52bbf0;
        case 0x52bbf4u: goto label_52bbf4;
        case 0x52bbf8u: goto label_52bbf8;
        case 0x52bbfcu: goto label_52bbfc;
        case 0x52bc00u: goto label_52bc00;
        case 0x52bc04u: goto label_52bc04;
        case 0x52bc08u: goto label_52bc08;
        case 0x52bc0cu: goto label_52bc0c;
        case 0x52bc10u: goto label_52bc10;
        case 0x52bc14u: goto label_52bc14;
        case 0x52bc18u: goto label_52bc18;
        case 0x52bc1cu: goto label_52bc1c;
        case 0x52bc20u: goto label_52bc20;
        case 0x52bc24u: goto label_52bc24;
        case 0x52bc28u: goto label_52bc28;
        case 0x52bc2cu: goto label_52bc2c;
        case 0x52bc30u: goto label_52bc30;
        case 0x52bc34u: goto label_52bc34;
        case 0x52bc38u: goto label_52bc38;
        case 0x52bc3cu: goto label_52bc3c;
        case 0x52bc40u: goto label_52bc40;
        case 0x52bc44u: goto label_52bc44;
        case 0x52bc48u: goto label_52bc48;
        case 0x52bc4cu: goto label_52bc4c;
        case 0x52bc50u: goto label_52bc50;
        case 0x52bc54u: goto label_52bc54;
        case 0x52bc58u: goto label_52bc58;
        case 0x52bc5cu: goto label_52bc5c;
        case 0x52bc60u: goto label_52bc60;
        case 0x52bc64u: goto label_52bc64;
        case 0x52bc68u: goto label_52bc68;
        case 0x52bc6cu: goto label_52bc6c;
        case 0x52bc70u: goto label_52bc70;
        case 0x52bc74u: goto label_52bc74;
        case 0x52bc78u: goto label_52bc78;
        case 0x52bc7cu: goto label_52bc7c;
        case 0x52bc80u: goto label_52bc80;
        case 0x52bc84u: goto label_52bc84;
        case 0x52bc88u: goto label_52bc88;
        case 0x52bc8cu: goto label_52bc8c;
        case 0x52bc90u: goto label_52bc90;
        case 0x52bc94u: goto label_52bc94;
        case 0x52bc98u: goto label_52bc98;
        case 0x52bc9cu: goto label_52bc9c;
        case 0x52bca0u: goto label_52bca0;
        case 0x52bca4u: goto label_52bca4;
        case 0x52bca8u: goto label_52bca8;
        case 0x52bcacu: goto label_52bcac;
        case 0x52bcb0u: goto label_52bcb0;
        case 0x52bcb4u: goto label_52bcb4;
        case 0x52bcb8u: goto label_52bcb8;
        case 0x52bcbcu: goto label_52bcbc;
        case 0x52bcc0u: goto label_52bcc0;
        case 0x52bcc4u: goto label_52bcc4;
        case 0x52bcc8u: goto label_52bcc8;
        case 0x52bcccu: goto label_52bccc;
        case 0x52bcd0u: goto label_52bcd0;
        case 0x52bcd4u: goto label_52bcd4;
        case 0x52bcd8u: goto label_52bcd8;
        case 0x52bcdcu: goto label_52bcdc;
        case 0x52bce0u: goto label_52bce0;
        case 0x52bce4u: goto label_52bce4;
        case 0x52bce8u: goto label_52bce8;
        case 0x52bcecu: goto label_52bcec;
        case 0x52bcf0u: goto label_52bcf0;
        case 0x52bcf4u: goto label_52bcf4;
        case 0x52bcf8u: goto label_52bcf8;
        case 0x52bcfcu: goto label_52bcfc;
        case 0x52bd00u: goto label_52bd00;
        case 0x52bd04u: goto label_52bd04;
        case 0x52bd08u: goto label_52bd08;
        case 0x52bd0cu: goto label_52bd0c;
        case 0x52bd10u: goto label_52bd10;
        case 0x52bd14u: goto label_52bd14;
        case 0x52bd18u: goto label_52bd18;
        case 0x52bd1cu: goto label_52bd1c;
        case 0x52bd20u: goto label_52bd20;
        case 0x52bd24u: goto label_52bd24;
        case 0x52bd28u: goto label_52bd28;
        case 0x52bd2cu: goto label_52bd2c;
        case 0x52bd30u: goto label_52bd30;
        case 0x52bd34u: goto label_52bd34;
        case 0x52bd38u: goto label_52bd38;
        case 0x52bd3cu: goto label_52bd3c;
        case 0x52bd40u: goto label_52bd40;
        case 0x52bd44u: goto label_52bd44;
        case 0x52bd48u: goto label_52bd48;
        case 0x52bd4cu: goto label_52bd4c;
        case 0x52bd50u: goto label_52bd50;
        case 0x52bd54u: goto label_52bd54;
        case 0x52bd58u: goto label_52bd58;
        case 0x52bd5cu: goto label_52bd5c;
        case 0x52bd60u: goto label_52bd60;
        case 0x52bd64u: goto label_52bd64;
        case 0x52bd68u: goto label_52bd68;
        case 0x52bd6cu: goto label_52bd6c;
        case 0x52bd70u: goto label_52bd70;
        case 0x52bd74u: goto label_52bd74;
        case 0x52bd78u: goto label_52bd78;
        case 0x52bd7cu: goto label_52bd7c;
        case 0x52bd80u: goto label_52bd80;
        case 0x52bd84u: goto label_52bd84;
        case 0x52bd88u: goto label_52bd88;
        case 0x52bd8cu: goto label_52bd8c;
        case 0x52bd90u: goto label_52bd90;
        case 0x52bd94u: goto label_52bd94;
        case 0x52bd98u: goto label_52bd98;
        case 0x52bd9cu: goto label_52bd9c;
        case 0x52bda0u: goto label_52bda0;
        case 0x52bda4u: goto label_52bda4;
        case 0x52bda8u: goto label_52bda8;
        case 0x52bdacu: goto label_52bdac;
        case 0x52bdb0u: goto label_52bdb0;
        case 0x52bdb4u: goto label_52bdb4;
        case 0x52bdb8u: goto label_52bdb8;
        case 0x52bdbcu: goto label_52bdbc;
        case 0x52bdc0u: goto label_52bdc0;
        case 0x52bdc4u: goto label_52bdc4;
        case 0x52bdc8u: goto label_52bdc8;
        case 0x52bdccu: goto label_52bdcc;
        case 0x52bdd0u: goto label_52bdd0;
        case 0x52bdd4u: goto label_52bdd4;
        case 0x52bdd8u: goto label_52bdd8;
        case 0x52bddcu: goto label_52bddc;
        case 0x52bde0u: goto label_52bde0;
        case 0x52bde4u: goto label_52bde4;
        case 0x52bde8u: goto label_52bde8;
        case 0x52bdecu: goto label_52bdec;
        case 0x52bdf0u: goto label_52bdf0;
        case 0x52bdf4u: goto label_52bdf4;
        case 0x52bdf8u: goto label_52bdf8;
        case 0x52bdfcu: goto label_52bdfc;
        case 0x52be00u: goto label_52be00;
        case 0x52be04u: goto label_52be04;
        case 0x52be08u: goto label_52be08;
        case 0x52be0cu: goto label_52be0c;
        case 0x52be10u: goto label_52be10;
        case 0x52be14u: goto label_52be14;
        case 0x52be18u: goto label_52be18;
        case 0x52be1cu: goto label_52be1c;
        case 0x52be20u: goto label_52be20;
        case 0x52be24u: goto label_52be24;
        case 0x52be28u: goto label_52be28;
        case 0x52be2cu: goto label_52be2c;
        case 0x52be30u: goto label_52be30;
        case 0x52be34u: goto label_52be34;
        case 0x52be38u: goto label_52be38;
        case 0x52be3cu: goto label_52be3c;
        case 0x52be40u: goto label_52be40;
        case 0x52be44u: goto label_52be44;
        case 0x52be48u: goto label_52be48;
        case 0x52be4cu: goto label_52be4c;
        case 0x52be50u: goto label_52be50;
        case 0x52be54u: goto label_52be54;
        case 0x52be58u: goto label_52be58;
        case 0x52be5cu: goto label_52be5c;
        case 0x52be60u: goto label_52be60;
        case 0x52be64u: goto label_52be64;
        case 0x52be68u: goto label_52be68;
        case 0x52be6cu: goto label_52be6c;
        case 0x52be70u: goto label_52be70;
        case 0x52be74u: goto label_52be74;
        case 0x52be78u: goto label_52be78;
        case 0x52be7cu: goto label_52be7c;
        case 0x52be80u: goto label_52be80;
        case 0x52be84u: goto label_52be84;
        case 0x52be88u: goto label_52be88;
        case 0x52be8cu: goto label_52be8c;
        case 0x52be90u: goto label_52be90;
        case 0x52be94u: goto label_52be94;
        case 0x52be98u: goto label_52be98;
        case 0x52be9cu: goto label_52be9c;
        case 0x52bea0u: goto label_52bea0;
        case 0x52bea4u: goto label_52bea4;
        case 0x52bea8u: goto label_52bea8;
        case 0x52beacu: goto label_52beac;
        case 0x52beb0u: goto label_52beb0;
        case 0x52beb4u: goto label_52beb4;
        case 0x52beb8u: goto label_52beb8;
        case 0x52bebcu: goto label_52bebc;
        case 0x52bec0u: goto label_52bec0;
        case 0x52bec4u: goto label_52bec4;
        case 0x52bec8u: goto label_52bec8;
        case 0x52beccu: goto label_52becc;
        case 0x52bed0u: goto label_52bed0;
        case 0x52bed4u: goto label_52bed4;
        case 0x52bed8u: goto label_52bed8;
        case 0x52bedcu: goto label_52bedc;
        case 0x52bee0u: goto label_52bee0;
        case 0x52bee4u: goto label_52bee4;
        case 0x52bee8u: goto label_52bee8;
        case 0x52beecu: goto label_52beec;
        case 0x52bef0u: goto label_52bef0;
        case 0x52bef4u: goto label_52bef4;
        case 0x52bef8u: goto label_52bef8;
        case 0x52befcu: goto label_52befc;
        case 0x52bf00u: goto label_52bf00;
        case 0x52bf04u: goto label_52bf04;
        case 0x52bf08u: goto label_52bf08;
        case 0x52bf0cu: goto label_52bf0c;
        case 0x52bf10u: goto label_52bf10;
        case 0x52bf14u: goto label_52bf14;
        case 0x52bf18u: goto label_52bf18;
        case 0x52bf1cu: goto label_52bf1c;
        case 0x52bf20u: goto label_52bf20;
        case 0x52bf24u: goto label_52bf24;
        case 0x52bf28u: goto label_52bf28;
        case 0x52bf2cu: goto label_52bf2c;
        case 0x52bf30u: goto label_52bf30;
        case 0x52bf34u: goto label_52bf34;
        case 0x52bf38u: goto label_52bf38;
        case 0x52bf3cu: goto label_52bf3c;
        case 0x52bf40u: goto label_52bf40;
        case 0x52bf44u: goto label_52bf44;
        case 0x52bf48u: goto label_52bf48;
        case 0x52bf4cu: goto label_52bf4c;
        case 0x52bf50u: goto label_52bf50;
        case 0x52bf54u: goto label_52bf54;
        case 0x52bf58u: goto label_52bf58;
        case 0x52bf5cu: goto label_52bf5c;
        case 0x52bf60u: goto label_52bf60;
        case 0x52bf64u: goto label_52bf64;
        case 0x52bf68u: goto label_52bf68;
        case 0x52bf6cu: goto label_52bf6c;
        case 0x52bf70u: goto label_52bf70;
        case 0x52bf74u: goto label_52bf74;
        case 0x52bf78u: goto label_52bf78;
        case 0x52bf7cu: goto label_52bf7c;
        case 0x52bf80u: goto label_52bf80;
        case 0x52bf84u: goto label_52bf84;
        case 0x52bf88u: goto label_52bf88;
        case 0x52bf8cu: goto label_52bf8c;
        case 0x52bf90u: goto label_52bf90;
        case 0x52bf94u: goto label_52bf94;
        case 0x52bf98u: goto label_52bf98;
        case 0x52bf9cu: goto label_52bf9c;
        case 0x52bfa0u: goto label_52bfa0;
        case 0x52bfa4u: goto label_52bfa4;
        case 0x52bfa8u: goto label_52bfa8;
        case 0x52bfacu: goto label_52bfac;
        case 0x52bfb0u: goto label_52bfb0;
        case 0x52bfb4u: goto label_52bfb4;
        case 0x52bfb8u: goto label_52bfb8;
        case 0x52bfbcu: goto label_52bfbc;
        case 0x52bfc0u: goto label_52bfc0;
        case 0x52bfc4u: goto label_52bfc4;
        case 0x52bfc8u: goto label_52bfc8;
        case 0x52bfccu: goto label_52bfcc;
        case 0x52bfd0u: goto label_52bfd0;
        case 0x52bfd4u: goto label_52bfd4;
        case 0x52bfd8u: goto label_52bfd8;
        case 0x52bfdcu: goto label_52bfdc;
        case 0x52bfe0u: goto label_52bfe0;
        case 0x52bfe4u: goto label_52bfe4;
        case 0x52bfe8u: goto label_52bfe8;
        case 0x52bfecu: goto label_52bfec;
        case 0x52bff0u: goto label_52bff0;
        case 0x52bff4u: goto label_52bff4;
        case 0x52bff8u: goto label_52bff8;
        case 0x52bffcu: goto label_52bffc;
        case 0x52c000u: goto label_52c000;
        case 0x52c004u: goto label_52c004;
        case 0x52c008u: goto label_52c008;
        case 0x52c00cu: goto label_52c00c;
        case 0x52c010u: goto label_52c010;
        case 0x52c014u: goto label_52c014;
        case 0x52c018u: goto label_52c018;
        case 0x52c01cu: goto label_52c01c;
        case 0x52c020u: goto label_52c020;
        case 0x52c024u: goto label_52c024;
        case 0x52c028u: goto label_52c028;
        case 0x52c02cu: goto label_52c02c;
        case 0x52c030u: goto label_52c030;
        case 0x52c034u: goto label_52c034;
        case 0x52c038u: goto label_52c038;
        case 0x52c03cu: goto label_52c03c;
        default: break;
    }

    ctx->pc = 0x52ac50u;

label_52ac50:
    // 0x52ac50: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x52ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_52ac54:
    // 0x52ac54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x52ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52ac58:
    // 0x52ac58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x52ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_52ac5c:
    // 0x52ac5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x52ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_52ac60:
    // 0x52ac60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x52ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_52ac64:
    // 0x52ac64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52ac64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52ac68:
    // 0x52ac68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52ac6c:
    // 0x52ac6c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x52ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_52ac70:
    // 0x52ac70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_52ac74:
    // 0x52ac74: 0x267201a0  addiu       $s2, $s3, 0x1A0
    ctx->pc = 0x52ac74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
label_52ac78:
    // 0x52ac78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x52ac78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_52ac7c:
    // 0x52ac7c: 0x26710170  addiu       $s1, $s3, 0x170
    ctx->pc = 0x52ac7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_52ac80:
    // 0x52ac80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x52ac80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_52ac84:
    // 0x52ac84: 0x949001f2  lhu         $s0, 0x1F2($a0)
    ctx->pc = 0x52ac84u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 498)));
label_52ac88:
    // 0x52ac88: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x52ac88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_52ac8c:
    // 0x52ac8c: 0xc0dc9bc  jal         func_3726F0
label_52ac90:
    if (ctx->pc == 0x52AC90u) {
        ctx->pc = 0x52AC90u;
            // 0x52ac90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52AC94u;
        goto label_52ac94;
    }
    ctx->pc = 0x52AC8Cu;
    SET_GPR_U32(ctx, 31, 0x52AC94u);
    ctx->pc = 0x52AC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AC8Cu;
            // 0x52ac90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC94u; }
        if (ctx->pc != 0x52AC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AC94u; }
        if (ctx->pc != 0x52AC94u) { return; }
    }
    ctx->pc = 0x52AC94u;
label_52ac94:
    // 0x52ac94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x52ac94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52ac98:
    // 0x52ac98: 0xc0dc9a0  jal         func_372680
label_52ac9c:
    if (ctx->pc == 0x52AC9Cu) {
        ctx->pc = 0x52AC9Cu;
            // 0x52ac9c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x52ACA0u;
        goto label_52aca0;
    }
    ctx->pc = 0x52AC98u;
    SET_GPR_U32(ctx, 31, 0x52ACA0u);
    ctx->pc = 0x52AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AC98u;
            // 0x52ac9c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACA0u; }
        if (ctx->pc != 0x52ACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACA0u; }
        if (ctx->pc != 0x52ACA0u) { return; }
    }
    ctx->pc = 0x52ACA0u;
label_52aca0:
    // 0x52aca0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x52aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_52aca4:
    // 0x52aca4: 0xc04cc04  jal         func_133010
label_52aca8:
    if (ctx->pc == 0x52ACA8u) {
        ctx->pc = 0x52ACA8u;
            // 0x52aca8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x52ACACu;
        goto label_52acac;
    }
    ctx->pc = 0x52ACA4u;
    SET_GPR_U32(ctx, 31, 0x52ACACu);
    ctx->pc = 0x52ACA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ACA4u;
            // 0x52aca8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACACu; }
        if (ctx->pc != 0x52ACACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACACu; }
        if (ctx->pc != 0x52ACACu) { return; }
    }
    ctx->pc = 0x52ACACu;
label_52acac:
    // 0x52acac: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x52acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52acb0:
    // 0x52acb0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x52acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_52acb4:
    // 0x52acb4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x52acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52acb8:
    // 0x52acb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52acb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52acbc:
    // 0x52acbc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x52acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52acc0:
    // 0x52acc0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x52acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52acc4:
    // 0x52acc4: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x52acc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_52acc8:
    // 0x52acc8: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x52acc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_52accc:
    // 0x52accc: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x52acccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_52acd0:
    // 0x52acd0: 0xc04c720  jal         func_131C80
label_52acd4:
    if (ctx->pc == 0x52ACD4u) {
        ctx->pc = 0x52ACD4u;
            // 0x52acd4: 0xe7a301cc  swc1        $f3, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->pc = 0x52ACD8u;
        goto label_52acd8;
    }
    ctx->pc = 0x52ACD0u;
    SET_GPR_U32(ctx, 31, 0x52ACD8u);
    ctx->pc = 0x52ACD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ACD0u;
            // 0x52acd4: 0xe7a301cc  swc1        $f3, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACD8u; }
        if (ctx->pc != 0x52ACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACD8u; }
        if (ctx->pc != 0x52ACD8u) { return; }
    }
    ctx->pc = 0x52ACD8u;
label_52acd8:
    // 0x52acd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52acdc:
    // 0x52acdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x52acdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52ace0:
    // 0x52ace0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52ace4:
    // 0x52ace4: 0xc6600200  lwc1        $f0, 0x200($s3)
    ctx->pc = 0x52ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52ace8:
    // 0x52ace8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x52ace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52acec:
    // 0x52acec: 0xc0b8160  jal         func_2E0580
label_52acf0:
    if (ctx->pc == 0x52ACF0u) {
        ctx->pc = 0x52ACF0u;
            // 0x52acf0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x52ACF4u;
        goto label_52acf4;
    }
    ctx->pc = 0x52ACECu;
    SET_GPR_U32(ctx, 31, 0x52ACF4u);
    ctx->pc = 0x52ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ACECu;
            // 0x52acf0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACF4u; }
        if (ctx->pc != 0x52ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ACF4u; }
        if (ctx->pc != 0x52ACF4u) { return; }
    }
    ctx->pc = 0x52ACF4u;
label_52acf4:
    // 0x52acf4: 0x96420052  lhu         $v0, 0x52($s2)
    ctx->pc = 0x52acf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_52acf8:
    // 0x52acf8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x52acf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_52acfc:
    // 0x52acfc: 0x506200bb  beql        $v1, $v0, . + 4 + (0xBB << 2)
label_52ad00:
    if (ctx->pc == 0x52AD00u) {
        ctx->pc = 0x52AD00u;
            // 0x52ad00: 0xc6600200  lwc1        $f0, 0x200($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x52AD04u;
        goto label_52ad04;
    }
    ctx->pc = 0x52ACFCu;
    {
        const bool branch_taken_0x52acfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x52acfc) {
            ctx->pc = 0x52AD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52ACFCu;
            // 0x52ad00: 0xc6600200  lwc1        $f0, 0x200($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x52AFECu;
            goto label_52afec;
        }
    }
    ctx->pc = 0x52AD04u;
label_52ad04:
    // 0x52ad04: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x52ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_52ad08:
    // 0x52ad08: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x52ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_52ad0c:
    // 0x52ad0c: 0xc04cc04  jal         func_133010
label_52ad10:
    if (ctx->pc == 0x52AD10u) {
        ctx->pc = 0x52AD10u;
            // 0x52ad10: 0x267000f0  addiu       $s0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x52AD14u;
        goto label_52ad14;
    }
    ctx->pc = 0x52AD0Cu;
    SET_GPR_U32(ctx, 31, 0x52AD14u);
    ctx->pc = 0x52AD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AD0Cu;
            // 0x52ad10: 0x267000f0  addiu       $s0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD14u; }
        if (ctx->pc != 0x52AD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD14u; }
        if (ctx->pc != 0x52AD14u) { return; }
    }
    ctx->pc = 0x52AD14u;
label_52ad14:
    // 0x52ad14: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x52ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52ad18:
    // 0x52ad18: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x52ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52ad1c:
    // 0x52ad1c: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x52ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52ad20:
    // 0x52ad20: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x52ad20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_52ad24:
    // 0x52ad24: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x52ad24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_52ad28:
    // 0x52ad28: 0x46000344  c1          0x344
    ctx->pc = 0x52ad28u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_52ad2c:
    // 0x52ad2c: 0x0  nop
    ctx->pc = 0x52ad2cu;
    // NOP
label_52ad30:
    // 0x52ad30: 0x0  nop
    ctx->pc = 0x52ad30u;
    // NOP
label_52ad34:
    // 0x52ad34: 0xc04780a  jal         func_11E028
label_52ad38:
    if (ctx->pc == 0x52AD38u) {
        ctx->pc = 0x52AD3Cu;
        goto label_52ad3c;
    }
    ctx->pc = 0x52AD34u;
    SET_GPR_U32(ctx, 31, 0x52AD3Cu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD3Cu; }
        if (ctx->pc != 0x52AD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD3Cu; }
        if (ctx->pc != 0x52AD3Cu) { return; }
    }
    ctx->pc = 0x52AD3Cu;
label_52ad3c:
    // 0x52ad3c: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x52ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52ad40:
    // 0x52ad40: 0xc7ad0168  lwc1        $f13, 0x168($sp)
    ctx->pc = 0x52ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_52ad44:
    // 0x52ad44: 0xc04780a  jal         func_11E028
label_52ad48:
    if (ctx->pc == 0x52AD48u) {
        ctx->pc = 0x52AD48u;
            // 0x52ad48: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x52AD4Cu;
        goto label_52ad4c;
    }
    ctx->pc = 0x52AD44u;
    SET_GPR_U32(ctx, 31, 0x52AD4Cu);
    ctx->pc = 0x52AD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AD44u;
            // 0x52ad48: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD4Cu; }
        if (ctx->pc != 0x52AD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD4Cu; }
        if (ctx->pc != 0x52AD4Cu) { return; }
    }
    ctx->pc = 0x52AD4Cu;
label_52ad4c:
    // 0x52ad4c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x52ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_52ad50:
    // 0x52ad50: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x52ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_52ad54:
    // 0x52ad54: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x52ad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_52ad58:
    // 0x52ad58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x52ad58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_52ad5c:
    // 0x52ad5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52ad60:
    // 0x52ad60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52ad60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52ad64:
    // 0x52ad64: 0x0  nop
    ctx->pc = 0x52ad64u;
    // NOP
label_52ad68:
    // 0x52ad68: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x52ad68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_52ad6c:
    // 0x52ad6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52ad6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52ad70:
    // 0x52ad70: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x52ad70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52ad74:
    // 0x52ad74: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x52ad74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_52ad78:
    // 0x52ad78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52ad78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52ad7c:
    // 0x52ad7c: 0xc04c970  jal         func_1325C0
label_52ad80:
    if (ctx->pc == 0x52AD80u) {
        ctx->pc = 0x52AD80u;
            // 0x52ad80: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x52AD84u;
        goto label_52ad84;
    }
    ctx->pc = 0x52AD7Cu;
    SET_GPR_U32(ctx, 31, 0x52AD84u);
    ctx->pc = 0x52AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AD7Cu;
            // 0x52ad80: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD84u; }
        if (ctx->pc != 0x52AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AD84u; }
        if (ctx->pc != 0x52AD84u) { return; }
    }
    ctx->pc = 0x52AD84u;
label_52ad84:
    // 0x52ad84: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x52ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_52ad88:
    // 0x52ad88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52ad8c:
    // 0x52ad8c: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x52ad8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_52ad90:
    // 0x52ad90: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x52ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_52ad94:
    // 0x52ad94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52ad98:
    // 0x52ad98: 0x0  nop
    ctx->pc = 0x52ad98u;
    // NOP
label_52ad9c:
    // 0x52ad9c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x52ad9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_52ada0:
    // 0x52ada0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52ada0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52ada4:
    // 0x52ada4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52ada4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52ada8:
    // 0x52ada8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x52ada8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_52adac:
    // 0x52adac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52adacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52adb0:
    // 0x52adb0: 0xc04c970  jal         func_1325C0
label_52adb4:
    if (ctx->pc == 0x52ADB4u) {
        ctx->pc = 0x52ADB4u;
            // 0x52adb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52ADB8u;
        goto label_52adb8;
    }
    ctx->pc = 0x52ADB0u;
    SET_GPR_U32(ctx, 31, 0x52ADB8u);
    ctx->pc = 0x52ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADB0u;
            // 0x52adb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADB8u; }
        if (ctx->pc != 0x52ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADB8u; }
        if (ctx->pc != 0x52ADB8u) { return; }
    }
    ctx->pc = 0x52ADB8u;
label_52adb8:
    // 0x52adb8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x52adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_52adbc:
    // 0x52adbc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x52adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_52adc0:
    // 0x52adc0: 0xc04c72c  jal         func_131CB0
label_52adc4:
    if (ctx->pc == 0x52ADC4u) {
        ctx->pc = 0x52ADC4u;
            // 0x52adc4: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x52ADC8u;
        goto label_52adc8;
    }
    ctx->pc = 0x52ADC0u;
    SET_GPR_U32(ctx, 31, 0x52ADC8u);
    ctx->pc = 0x52ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADC0u;
            // 0x52adc4: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADC8u; }
        if (ctx->pc != 0x52ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADC8u; }
        if (ctx->pc != 0x52ADC8u) { return; }
    }
    ctx->pc = 0x52ADC8u;
label_52adc8:
    // 0x52adc8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52adcc:
    // 0x52adcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x52adccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52add0:
    // 0x52add0: 0xc04cbf0  jal         func_132FC0
label_52add4:
    if (ctx->pc == 0x52ADD4u) {
        ctx->pc = 0x52ADD4u;
            // 0x52add4: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x52ADD8u;
        goto label_52add8;
    }
    ctx->pc = 0x52ADD0u;
    SET_GPR_U32(ctx, 31, 0x52ADD8u);
    ctx->pc = 0x52ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADD0u;
            // 0x52add4: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADD8u; }
        if (ctx->pc != 0x52ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADD8u; }
        if (ctx->pc != 0x52ADD8u) { return; }
    }
    ctx->pc = 0x52ADD8u;
label_52add8:
    // 0x52add8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52addc:
    // 0x52addc: 0xc04cc44  jal         func_133110
label_52ade0:
    if (ctx->pc == 0x52ADE0u) {
        ctx->pc = 0x52ADE0u;
            // 0x52ade0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ADE4u;
        goto label_52ade4;
    }
    ctx->pc = 0x52ADDCu;
    SET_GPR_U32(ctx, 31, 0x52ADE4u);
    ctx->pc = 0x52ADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADDCu;
            // 0x52ade0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADE4u; }
        if (ctx->pc != 0x52ADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADE4u; }
        if (ctx->pc != 0x52ADE4u) { return; }
    }
    ctx->pc = 0x52ADE4u;
label_52ade4:
    // 0x52ade4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52ade8:
    // 0x52ade8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x52ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_52adec:
    // 0x52adec: 0xc04cbf0  jal         func_132FC0
label_52adf0:
    if (ctx->pc == 0x52ADF0u) {
        ctx->pc = 0x52ADF0u;
            // 0x52adf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52ADF4u;
        goto label_52adf4;
    }
    ctx->pc = 0x52ADECu;
    SET_GPR_U32(ctx, 31, 0x52ADF4u);
    ctx->pc = 0x52ADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADECu;
            // 0x52adf0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADF4u; }
        if (ctx->pc != 0x52ADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52ADF4u; }
        if (ctx->pc != 0x52ADF4u) { return; }
    }
    ctx->pc = 0x52ADF4u;
label_52adf4:
    // 0x52adf4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52adf8:
    // 0x52adf8: 0xc04cc44  jal         func_133110
label_52adfc:
    if (ctx->pc == 0x52ADFCu) {
        ctx->pc = 0x52ADFCu;
            // 0x52adfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52AE00u;
        goto label_52ae00;
    }
    ctx->pc = 0x52ADF8u;
    SET_GPR_U32(ctx, 31, 0x52AE00u);
    ctx->pc = 0x52ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52ADF8u;
            // 0x52adfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE00u; }
        if (ctx->pc != 0x52AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE00u; }
        if (ctx->pc != 0x52AE00u) { return; }
    }
    ctx->pc = 0x52AE00u;
label_52ae00:
    // 0x52ae00: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x52ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_52ae04:
    // 0x52ae04: 0xc075328  jal         func_1D4CA0
label_52ae08:
    if (ctx->pc == 0x52AE08u) {
        ctx->pc = 0x52AE08u;
            // 0x52ae08: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x52AE0Cu;
        goto label_52ae0c;
    }
    ctx->pc = 0x52AE04u;
    SET_GPR_U32(ctx, 31, 0x52AE0Cu);
    ctx->pc = 0x52AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AE04u;
            // 0x52ae08: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE0Cu; }
        if (ctx->pc != 0x52AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE0Cu; }
        if (ctx->pc != 0x52AE0Cu) { return; }
    }
    ctx->pc = 0x52AE0Cu;
label_52ae0c:
    // 0x52ae0c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x52ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_52ae10:
    // 0x52ae10: 0xc04f278  jal         func_13C9E0
label_52ae14:
    if (ctx->pc == 0x52AE14u) {
        ctx->pc = 0x52AE14u;
            // 0x52ae14: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x52AE18u;
        goto label_52ae18;
    }
    ctx->pc = 0x52AE10u;
    SET_GPR_U32(ctx, 31, 0x52AE18u);
    ctx->pc = 0x52AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AE10u;
            // 0x52ae14: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE18u; }
        if (ctx->pc != 0x52AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE18u; }
        if (ctx->pc != 0x52AE18u) { return; }
    }
    ctx->pc = 0x52AE18u;
label_52ae18:
    // 0x52ae18: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x52ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_52ae1c:
    // 0x52ae1c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x52ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_52ae20:
    // 0x52ae20: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x52ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_52ae24:
    // 0x52ae24: 0xc04cca0  jal         func_133280
label_52ae28:
    if (ctx->pc == 0x52AE28u) {
        ctx->pc = 0x52AE28u;
            // 0x52ae28: 0x24c6ccc0  addiu       $a2, $a2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954176));
        ctx->pc = 0x52AE2Cu;
        goto label_52ae2c;
    }
    ctx->pc = 0x52AE24u;
    SET_GPR_U32(ctx, 31, 0x52AE2Cu);
    ctx->pc = 0x52AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AE24u;
            // 0x52ae28: 0x24c6ccc0  addiu       $a2, $a2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE2Cu; }
        if (ctx->pc != 0x52AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE2Cu; }
        if (ctx->pc != 0x52AE2Cu) { return; }
    }
    ctx->pc = 0x52AE2Cu;
label_52ae2c:
    // 0x52ae2c: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x52ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52ae30:
    // 0x52ae30: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x52ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52ae34:
    // 0x52ae34: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x52ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52ae38:
    // 0x52ae38: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x52ae38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_52ae3c:
    // 0x52ae3c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x52ae3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_52ae40:
    // 0x52ae40: 0x46000344  c1          0x344
    ctx->pc = 0x52ae40u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_52ae44:
    // 0x52ae44: 0x0  nop
    ctx->pc = 0x52ae44u;
    // NOP
label_52ae48:
    // 0x52ae48: 0x0  nop
    ctx->pc = 0x52ae48u;
    // NOP
label_52ae4c:
    // 0x52ae4c: 0xc04780a  jal         func_11E028
label_52ae50:
    if (ctx->pc == 0x52AE50u) {
        ctx->pc = 0x52AE54u;
        goto label_52ae54;
    }
    ctx->pc = 0x52AE4Cu;
    SET_GPR_U32(ctx, 31, 0x52AE54u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE54u; }
        if (ctx->pc != 0x52AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE54u; }
        if (ctx->pc != 0x52AE54u) { return; }
    }
    ctx->pc = 0x52AE54u;
label_52ae54:
    // 0x52ae54: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x52ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52ae58:
    // 0x52ae58: 0xc7ad0168  lwc1        $f13, 0x168($sp)
    ctx->pc = 0x52ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_52ae5c:
    // 0x52ae5c: 0xc04780a  jal         func_11E028
label_52ae60:
    if (ctx->pc == 0x52AE60u) {
        ctx->pc = 0x52AE60u;
            // 0x52ae60: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x52AE64u;
        goto label_52ae64;
    }
    ctx->pc = 0x52AE5Cu;
    SET_GPR_U32(ctx, 31, 0x52AE64u);
    ctx->pc = 0x52AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AE5Cu;
            // 0x52ae60: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE64u; }
        if (ctx->pc != 0x52AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE64u; }
        if (ctx->pc != 0x52AE64u) { return; }
    }
    ctx->pc = 0x52AE64u;
label_52ae64:
    // 0x52ae64: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x52ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_52ae68:
    // 0x52ae68: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x52ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_52ae6c:
    // 0x52ae6c: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x52ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_52ae70:
    // 0x52ae70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x52ae70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_52ae74:
    // 0x52ae74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52ae78:
    // 0x52ae78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52ae78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52ae7c:
    // 0x52ae7c: 0x0  nop
    ctx->pc = 0x52ae7cu;
    // NOP
label_52ae80:
    // 0x52ae80: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x52ae80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_52ae84:
    // 0x52ae84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52ae84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52ae88:
    // 0x52ae88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x52ae88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52ae8c:
    // 0x52ae8c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x52ae8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_52ae90:
    // 0x52ae90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52ae94:
    // 0x52ae94: 0xc04c970  jal         func_1325C0
label_52ae98:
    if (ctx->pc == 0x52AE98u) {
        ctx->pc = 0x52AE98u;
            // 0x52ae98: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x52AE9Cu;
        goto label_52ae9c;
    }
    ctx->pc = 0x52AE94u;
    SET_GPR_U32(ctx, 31, 0x52AE9Cu);
    ctx->pc = 0x52AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AE94u;
            // 0x52ae98: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE9Cu; }
        if (ctx->pc != 0x52AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AE9Cu; }
        if (ctx->pc != 0x52AE9Cu) { return; }
    }
    ctx->pc = 0x52AE9Cu;
label_52ae9c:
    // 0x52ae9c: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x52ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_52aea0:
    // 0x52aea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52aea4:
    // 0x52aea4: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x52aea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_52aea8:
    // 0x52aea8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x52aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_52aeac:
    // 0x52aeac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52aeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52aeb0:
    // 0x52aeb0: 0x0  nop
    ctx->pc = 0x52aeb0u;
    // NOP
label_52aeb4:
    // 0x52aeb4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x52aeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_52aeb8:
    // 0x52aeb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52aeb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52aebc:
    // 0x52aebc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52aebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52aec0:
    // 0x52aec0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x52aec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_52aec4:
    // 0x52aec4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52aec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52aec8:
    // 0x52aec8: 0xc04c970  jal         func_1325C0
label_52aecc:
    if (ctx->pc == 0x52AECCu) {
        ctx->pc = 0x52AECCu;
            // 0x52aecc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52AED0u;
        goto label_52aed0;
    }
    ctx->pc = 0x52AEC8u;
    SET_GPR_U32(ctx, 31, 0x52AED0u);
    ctx->pc = 0x52AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AEC8u;
            // 0x52aecc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AED0u; }
        if (ctx->pc != 0x52AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AED0u; }
        if (ctx->pc != 0x52AED0u) { return; }
    }
    ctx->pc = 0x52AED0u;
label_52aed0:
    // 0x52aed0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x52aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_52aed4:
    // 0x52aed4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x52aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_52aed8:
    // 0x52aed8: 0xc04c72c  jal         func_131CB0
label_52aedc:
    if (ctx->pc == 0x52AEDCu) {
        ctx->pc = 0x52AEDCu;
            // 0x52aedc: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x52AEE0u;
        goto label_52aee0;
    }
    ctx->pc = 0x52AED8u;
    SET_GPR_U32(ctx, 31, 0x52AEE0u);
    ctx->pc = 0x52AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AED8u;
            // 0x52aedc: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEE0u; }
        if (ctx->pc != 0x52AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEE0u; }
        if (ctx->pc != 0x52AEE0u) { return; }
    }
    ctx->pc = 0x52AEE0u;
label_52aee0:
    // 0x52aee0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x52aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_52aee4:
    // 0x52aee4: 0xc075328  jal         func_1D4CA0
label_52aee8:
    if (ctx->pc == 0x52AEE8u) {
        ctx->pc = 0x52AEE8u;
            // 0x52aee8: 0x26650230  addiu       $a1, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->pc = 0x52AEECu;
        goto label_52aeec;
    }
    ctx->pc = 0x52AEE4u;
    SET_GPR_U32(ctx, 31, 0x52AEECu);
    ctx->pc = 0x52AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AEE4u;
            // 0x52aee8: 0x26650230  addiu       $a1, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEECu; }
        if (ctx->pc != 0x52AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEECu; }
        if (ctx->pc != 0x52AEECu) { return; }
    }
    ctx->pc = 0x52AEECu;
label_52aeec:
    // 0x52aeec: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x52aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_52aef0:
    // 0x52aef0: 0xc04c74c  jal         func_131D30
label_52aef4:
    if (ctx->pc == 0x52AEF4u) {
        ctx->pc = 0x52AEF4u;
            // 0x52aef4: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x52AEF8u;
        goto label_52aef8;
    }
    ctx->pc = 0x52AEF0u;
    SET_GPR_U32(ctx, 31, 0x52AEF8u);
    ctx->pc = 0x52AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AEF0u;
            // 0x52aef4: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEF8u; }
        if (ctx->pc != 0x52AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AEF8u; }
        if (ctx->pc != 0x52AEF8u) { return; }
    }
    ctx->pc = 0x52AEF8u;
label_52aef8:
    // 0x52aef8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x52aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_52aefc:
    // 0x52aefc: 0xc04c74c  jal         func_131D30
label_52af00:
    if (ctx->pc == 0x52AF00u) {
        ctx->pc = 0x52AF00u;
            // 0x52af00: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x52AF04u;
        goto label_52af04;
    }
    ctx->pc = 0x52AEFCu;
    SET_GPR_U32(ctx, 31, 0x52AF04u);
    ctx->pc = 0x52AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AEFCu;
            // 0x52af00: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF04u; }
        if (ctx->pc != 0x52AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF04u; }
        if (ctx->pc != 0x52AF04u) { return; }
    }
    ctx->pc = 0x52AF04u;
label_52af04:
    // 0x52af04: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x52af04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_52af08:
    // 0x52af08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52af08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52af0c:
    // 0x52af0c: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x52af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52af10:
    // 0x52af10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x52af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_52af14:
    // 0x52af14: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x52af14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52af18:
    // 0x52af18: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x52af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_52af1c:
    // 0x52af1c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x52af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_52af20:
    // 0x52af20: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x52af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52af24:
    // 0x52af24: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x52af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_52af28:
    // 0x52af28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52af28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52af2c:
    // 0x52af2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52af2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52af30:
    // 0x52af30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x52af30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_52af34:
    // 0x52af34: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x52af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_52af38:
    // 0x52af38: 0xc04cc7c  jal         func_1331F0
label_52af3c:
    if (ctx->pc == 0x52AF3Cu) {
        ctx->pc = 0x52AF3Cu;
            // 0x52af3c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->pc = 0x52AF40u;
        goto label_52af40;
    }
    ctx->pc = 0x52AF38u;
    SET_GPR_U32(ctx, 31, 0x52AF40u);
    ctx->pc = 0x52AF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AF38u;
            // 0x52af3c: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF40u; }
        if (ctx->pc != 0x52AF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF40u; }
        if (ctx->pc != 0x52AF40u) { return; }
    }
    ctx->pc = 0x52AF40u;
label_52af40:
    // 0x52af40: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x52af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_52af44:
    // 0x52af44: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x52af44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_52af48:
    // 0x52af48: 0xc04cc90  jal         func_133240
label_52af4c:
    if (ctx->pc == 0x52AF4Cu) {
        ctx->pc = 0x52AF4Cu;
            // 0x52af4c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x52AF50u;
        goto label_52af50;
    }
    ctx->pc = 0x52AF48u;
    SET_GPR_U32(ctx, 31, 0x52AF50u);
    ctx->pc = 0x52AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AF48u;
            // 0x52af4c: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF50u; }
        if (ctx->pc != 0x52AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AF50u; }
        if (ctx->pc != 0x52AF50u) { return; }
    }
    ctx->pc = 0x52AF50u;
label_52af50:
    // 0x52af50: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x52af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52af54:
    // 0x52af54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52af58:
    // 0x52af58: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x52af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52af5c:
    // 0x52af5c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52af60:
    // 0x52af60: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x52af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52af64:
    // 0x52af64: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x52af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_52af68:
    // 0x52af68: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x52af68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_52af6c:
    // 0x52af6c: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x52af6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_52af70:
    // 0x52af70: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x52af70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_52af74:
    // 0x52af74: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x52af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52af78:
    // 0x52af78: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x52af78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52af7c:
    // 0x52af7c: 0x0  nop
    ctx->pc = 0x52af7cu;
    // NOP
label_52af80:
    // 0x52af80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x52af80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_52af84:
    // 0x52af84: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x52af84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_52af88:
    // 0x52af88: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x52af88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_52af8c:
    // 0x52af8c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x52af8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_52af90:
    // 0x52af90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x52af90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_52af94:
    // 0x52af94: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x52af94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_52af98:
    // 0x52af98: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x52af98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_52af9c:
    // 0x52af9c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x52af9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_52afa0:
    // 0x52afa0: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x52afa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_52afa4:
    // 0x52afa4: 0xc088b74  jal         func_222DD0
label_52afa8:
    if (ctx->pc == 0x52AFA8u) {
        ctx->pc = 0x52AFA8u;
            // 0x52afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52AFACu;
        goto label_52afac;
    }
    ctx->pc = 0x52AFA4u;
    SET_GPR_U32(ctx, 31, 0x52AFACu);
    ctx->pc = 0x52AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AFA4u;
            // 0x52afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AFACu; }
        if (ctx->pc != 0x52AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AFACu; }
        if (ctx->pc != 0x52AFACu) { return; }
    }
    ctx->pc = 0x52AFACu;
label_52afac:
    // 0x52afac: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52afacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52afb0:
    // 0x52afb0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52afb4:
    // 0x52afb4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52afb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52afb8:
    // 0x52afb8: 0x320f809  jalr        $t9
label_52afbc:
    if (ctx->pc == 0x52AFBCu) {
        ctx->pc = 0x52AFBCu;
            // 0x52afbc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x52AFC0u;
        goto label_52afc0;
    }
    ctx->pc = 0x52AFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52AFC0u);
        ctx->pc = 0x52AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AFB8u;
            // 0x52afbc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52AFC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52AFC0u; }
            if (ctx->pc != 0x52AFC0u) { return; }
        }
        }
    }
    ctx->pc = 0x52AFC0u;
label_52afc0:
    // 0x52afc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52afc4:
    // 0x52afc4: 0xa2620211  sb          $v0, 0x211($s3)
    ctx->pc = 0x52afc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 2));
label_52afc8:
    // 0x52afc8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x52afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52afcc:
    // 0x52afcc: 0xe6600230  swc1        $f0, 0x230($s3)
    ctx->pc = 0x52afccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
label_52afd0:
    // 0x52afd0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x52afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52afd4:
    // 0x52afd4: 0xe6600234  swc1        $f0, 0x234($s3)
    ctx->pc = 0x52afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 564), bits); }
label_52afd8:
    // 0x52afd8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x52afd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52afdc:
    // 0x52afdc: 0xe6600238  swc1        $f0, 0x238($s3)
    ctx->pc = 0x52afdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 568), bits); }
label_52afe0:
    // 0x52afe0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x52afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52afe4:
    // 0x52afe4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_52afe8:
    if (ctx->pc == 0x52AFE8u) {
        ctx->pc = 0x52AFE8u;
            // 0x52afe8: 0xe660023c  swc1        $f0, 0x23C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 572), bits); }
        ctx->pc = 0x52AFECu;
        goto label_52afec;
    }
    ctx->pc = 0x52AFE4u;
    {
        const bool branch_taken_0x52afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52AFE4u;
            // 0x52afe8: 0xe660023c  swc1        $f0, 0x23C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52afe4) {
            ctx->pc = 0x52B0D8u;
            goto label_52b0d8;
        }
    }
    ctx->pc = 0x52AFECu;
label_52afec:
    // 0x52afec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x52afecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_52aff0:
    // 0x52aff0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x52aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_52aff4:
    // 0x52aff4: 0xc04cc04  jal         func_133010
label_52aff8:
    if (ctx->pc == 0x52AFF8u) {
        ctx->pc = 0x52AFF8u;
            // 0x52aff8: 0xe6600228  swc1        $f0, 0x228($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
        ctx->pc = 0x52AFFCu;
        goto label_52affc;
    }
    ctx->pc = 0x52AFF4u;
    SET_GPR_U32(ctx, 31, 0x52AFFCu);
    ctx->pc = 0x52AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52AFF4u;
            // 0x52aff8: 0xe6600228  swc1        $f0, 0x228($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AFFCu; }
        if (ctx->pc != 0x52AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52AFFCu; }
        if (ctx->pc != 0x52AFFCu) { return; }
    }
    ctx->pc = 0x52AFFCu;
label_52affc:
    // 0x52affc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x52affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_52b000:
    // 0x52b000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x52b000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52b004:
    // 0x52b004: 0xc04cbf0  jal         func_132FC0
label_52b008:
    if (ctx->pc == 0x52B008u) {
        ctx->pc = 0x52B008u;
            // 0x52b008: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x52B00Cu;
        goto label_52b00c;
    }
    ctx->pc = 0x52B004u;
    SET_GPR_U32(ctx, 31, 0x52B00Cu);
    ctx->pc = 0x52B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B004u;
            // 0x52b008: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B00Cu; }
        if (ctx->pc != 0x52B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B00Cu; }
        if (ctx->pc != 0x52B00Cu) { return; }
    }
    ctx->pc = 0x52B00Cu;
label_52b00c:
    // 0x52b00c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x52b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_52b010:
    // 0x52b010: 0xc04cc44  jal         func_133110
label_52b014:
    if (ctx->pc == 0x52B014u) {
        ctx->pc = 0x52B014u;
            // 0x52b014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B018u;
        goto label_52b018;
    }
    ctx->pc = 0x52B010u;
    SET_GPR_U32(ctx, 31, 0x52B018u);
    ctx->pc = 0x52B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B010u;
            // 0x52b014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B018u; }
        if (ctx->pc != 0x52B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B018u; }
        if (ctx->pc != 0x52B018u) { return; }
    }
    ctx->pc = 0x52B018u;
label_52b018:
    // 0x52b018: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x52b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_52b01c:
    // 0x52b01c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x52b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_52b020:
    // 0x52b020: 0xc04cbf0  jal         func_132FC0
label_52b024:
    if (ctx->pc == 0x52B024u) {
        ctx->pc = 0x52B024u;
            // 0x52b024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B028u;
        goto label_52b028;
    }
    ctx->pc = 0x52B020u;
    SET_GPR_U32(ctx, 31, 0x52B028u);
    ctx->pc = 0x52B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B020u;
            // 0x52b024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B028u; }
        if (ctx->pc != 0x52B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B028u; }
        if (ctx->pc != 0x52B028u) { return; }
    }
    ctx->pc = 0x52B028u;
label_52b028:
    // 0x52b028: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x52b028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_52b02c:
    // 0x52b02c: 0xc04cc44  jal         func_133110
label_52b030:
    if (ctx->pc == 0x52B030u) {
        ctx->pc = 0x52B030u;
            // 0x52b030: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B034u;
        goto label_52b034;
    }
    ctx->pc = 0x52B02Cu;
    SET_GPR_U32(ctx, 31, 0x52B034u);
    ctx->pc = 0x52B030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B02Cu;
            // 0x52b030: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B034u; }
        if (ctx->pc != 0x52B034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B034u; }
        if (ctx->pc != 0x52B034u) { return; }
    }
    ctx->pc = 0x52B034u;
label_52b034:
    // 0x52b034: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x52b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_52b038:
    // 0x52b038: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x52b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52b03c:
    // 0x52b03c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52b03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52b040:
    // 0x52b040: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x52b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_52b044:
    // 0x52b044: 0xc04cc7c  jal         func_1331F0
label_52b048:
    if (ctx->pc == 0x52B048u) {
        ctx->pc = 0x52B048u;
            // 0x52b048: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52B04Cu;
        goto label_52b04c;
    }
    ctx->pc = 0x52B044u;
    SET_GPR_U32(ctx, 31, 0x52B04Cu);
    ctx->pc = 0x52B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B044u;
            // 0x52b048: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B04Cu; }
        if (ctx->pc != 0x52B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B04Cu; }
        if (ctx->pc != 0x52B04Cu) { return; }
    }
    ctx->pc = 0x52B04Cu;
label_52b04c:
    // 0x52b04c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52b050:
    // 0x52b050: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x52b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52b054:
    // 0x52b054: 0xc04cc90  jal         func_133240
label_52b058:
    if (ctx->pc == 0x52B058u) {
        ctx->pc = 0x52B058u;
            // 0x52b058: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x52B05Cu;
        goto label_52b05c;
    }
    ctx->pc = 0x52B054u;
    SET_GPR_U32(ctx, 31, 0x52B05Cu);
    ctx->pc = 0x52B058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B054u;
            // 0x52b058: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B05Cu; }
        if (ctx->pc != 0x52B05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B05Cu; }
        if (ctx->pc != 0x52B05Cu) { return; }
    }
    ctx->pc = 0x52B05Cu;
label_52b05c:
    // 0x52b05c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x52b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b060:
    // 0x52b060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52b064:
    // 0x52b064: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x52b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52b068:
    // 0x52b068: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52b06c:
    // 0x52b06c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x52b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b070:
    // 0x52b070: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x52b070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_52b074:
    // 0x52b074: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x52b074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_52b078:
    // 0x52b078: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x52b078u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_52b07c:
    // 0x52b07c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x52b07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_52b080:
    // 0x52b080: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x52b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b084:
    // 0x52b084: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x52b084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52b088:
    // 0x52b088: 0x0  nop
    ctx->pc = 0x52b088u;
    // NOP
label_52b08c:
    // 0x52b08c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x52b08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_52b090:
    // 0x52b090: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x52b090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_52b094:
    // 0x52b094: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x52b094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_52b098:
    // 0x52b098: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x52b098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_52b09c:
    // 0x52b09c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x52b09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_52b0a0:
    // 0x52b0a0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x52b0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_52b0a4:
    // 0x52b0a4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x52b0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_52b0a8:
    // 0x52b0a8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x52b0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_52b0ac:
    // 0x52b0ac: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x52b0acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_52b0b0:
    // 0x52b0b0: 0xc088b74  jal         func_222DD0
label_52b0b4:
    if (ctx->pc == 0x52B0B4u) {
        ctx->pc = 0x52B0B4u;
            // 0x52b0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B0B8u;
        goto label_52b0b8;
    }
    ctx->pc = 0x52B0B0u;
    SET_GPR_U32(ctx, 31, 0x52B0B8u);
    ctx->pc = 0x52B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B0B0u;
            // 0x52b0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0B8u; }
        if (ctx->pc != 0x52B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0B8u; }
        if (ctx->pc != 0x52B0B8u) { return; }
    }
    ctx->pc = 0x52B0B8u;
label_52b0b8:
    // 0x52b0b8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52b0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52b0bc:
    // 0x52b0bc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52b0c0:
    // 0x52b0c0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52b0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52b0c4:
    // 0x52b0c4: 0x320f809  jalr        $t9
label_52b0c8:
    if (ctx->pc == 0x52B0C8u) {
        ctx->pc = 0x52B0C8u;
            // 0x52b0c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x52B0CCu;
        goto label_52b0cc;
    }
    ctx->pc = 0x52B0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B0CCu);
        ctx->pc = 0x52B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B0C4u;
            // 0x52b0c8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B0CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B0CCu; }
            if (ctx->pc != 0x52B0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x52B0CCu;
label_52b0cc:
    // 0x52b0cc: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x52b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_52b0d0:
    // 0x52b0d0: 0xc0c6278  jal         func_3189E0
label_52b0d4:
    if (ctx->pc == 0x52B0D4u) {
        ctx->pc = 0x52B0D4u;
            // 0x52b0d4: 0xa2600211  sb          $zero, 0x211($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x52B0D8u;
        goto label_52b0d8;
    }
    ctx->pc = 0x52B0D0u;
    SET_GPR_U32(ctx, 31, 0x52B0D8u);
    ctx->pc = 0x52B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B0D0u;
            // 0x52b0d4: 0xa2600211  sb          $zero, 0x211($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 529), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0D8u; }
        if (ctx->pc != 0x52B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0D8u; }
        if (ctx->pc != 0x52B0D8u) { return; }
    }
    ctx->pc = 0x52B0D8u;
label_52b0d8:
    // 0x52b0d8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x52b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_52b0dc:
    // 0x52b0dc: 0xc04c720  jal         func_131C80
label_52b0e0:
    if (ctx->pc == 0x52B0E0u) {
        ctx->pc = 0x52B0E0u;
            // 0x52b0e0: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->pc = 0x52B0E4u;
        goto label_52b0e4;
    }
    ctx->pc = 0x52B0DCu;
    SET_GPR_U32(ctx, 31, 0x52B0E4u);
    ctx->pc = 0x52B0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B0DCu;
            // 0x52b0e0: 0x26650170  addiu       $a1, $s3, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0E4u; }
        if (ctx->pc != 0x52B0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B0E4u; }
        if (ctx->pc != 0x52B0E4u) { return; }
    }
    ctx->pc = 0x52B0E4u;
label_52b0e4:
    // 0x52b0e4: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x52b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52b0e8:
    // 0x52b0e8: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x52b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b0ec:
    // 0x52b0ec: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x52b0ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b0f0:
    // 0x52b0f0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_52b0f4:
    if (ctx->pc == 0x52B0F4u) {
        ctx->pc = 0x52B0F4u;
            // 0x52b0f4: 0xc622000c  lwc1        $f2, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x52B0F8u;
        goto label_52b0f8;
    }
    ctx->pc = 0x52B0F0u;
    {
        const bool branch_taken_0x52b0f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52b0f0) {
            ctx->pc = 0x52B0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B0F0u;
            // 0x52b0f4: 0xc622000c  lwc1        $f2, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x52B138u;
            goto label_52b138;
        }
    }
    ctx->pc = 0x52B0F8u;
label_52b0f8:
    // 0x52b0f8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x52b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b0fc:
    // 0x52b0fc: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x52b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b100:
    // 0x52b100: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52b100u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b104:
    // 0x52b104: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_52b108:
    if (ctx->pc == 0x52B108u) {
        ctx->pc = 0x52B10Cu;
        goto label_52b10c;
    }
    ctx->pc = 0x52B104u;
    {
        const bool branch_taken_0x52b104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52b104) {
            ctx->pc = 0x52B134u;
            goto label_52b134;
        }
    }
    ctx->pc = 0x52B10Cu;
label_52b10c:
    // 0x52b10c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x52b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b110:
    // 0x52b110: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x52b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b114:
    // 0x52b114: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52b114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b118:
    // 0x52b118: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_52b11c:
    if (ctx->pc == 0x52B11Cu) {
        ctx->pc = 0x52B120u;
        goto label_52b120;
    }
    ctx->pc = 0x52B118u;
    {
        const bool branch_taken_0x52b118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52b118) {
            ctx->pc = 0x52B134u;
            goto label_52b134;
        }
    }
    ctx->pc = 0x52B120u;
label_52b120:
    // 0x52b120: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x52b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b124:
    // 0x52b124: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x52b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b128:
    // 0x52b128: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x52b128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b12c:
    // 0x52b12c: 0x45030051  bc1tl       . + 4 + (0x51 << 2)
label_52b130:
    if (ctx->pc == 0x52B130u) {
        ctx->pc = 0x52B130u;
            // 0x52b130: 0x92640210  lbu         $a0, 0x210($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->pc = 0x52B134u;
        goto label_52b134;
    }
    ctx->pc = 0x52B12Cu;
    {
        const bool branch_taken_0x52b12c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52b12c) {
            ctx->pc = 0x52B130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B12Cu;
            // 0x52b130: 0x92640210  lbu         $a0, 0x210($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52B274u;
            goto label_52b274;
        }
    }
    ctx->pc = 0x52B134u;
label_52b134:
    // 0x52b134: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x52b134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b138:
    // 0x52b138: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x52b138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_52b13c:
    // 0x52b13c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x52b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b140:
    // 0x52b140: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x52b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b144:
    // 0x52b144: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x52b144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_52b148:
    // 0x52b148: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x52b148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_52b14c:
    // 0x52b14c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x52b14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_52b150:
    // 0x52b150: 0xc0d8a80  jal         func_362A00
label_52b154:
    if (ctx->pc == 0x52B154u) {
        ctx->pc = 0x52B154u;
            // 0x52b154: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x52B158u;
        goto label_52b158;
    }
    ctx->pc = 0x52B150u;
    SET_GPR_U32(ctx, 31, 0x52B158u);
    ctx->pc = 0x52B154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B150u;
            // 0x52b154: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B158u; }
        if (ctx->pc != 0x52B158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B158u; }
        if (ctx->pc != 0x52B158u) { return; }
    }
    ctx->pc = 0x52B158u;
label_52b158:
    // 0x52b158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52b158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b15c:
    // 0x52b15c: 0xc0d8a80  jal         func_362A00
label_52b160:
    if (ctx->pc == 0x52B160u) {
        ctx->pc = 0x52B160u;
            // 0x52b160: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52B164u;
        goto label_52b164;
    }
    ctx->pc = 0x52B15Cu;
    SET_GPR_U32(ctx, 31, 0x52B164u);
    ctx->pc = 0x52B160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B15Cu;
            // 0x52b160: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B164u; }
        if (ctx->pc != 0x52B164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B164u; }
        if (ctx->pc != 0x52B164u) { return; }
    }
    ctx->pc = 0x52B164u;
label_52b164:
    // 0x52b164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b168:
    // 0x52b168: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x52b168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b16c:
    // 0x52b16c: 0xc0d8a6c  jal         func_3629B0
label_52b170:
    if (ctx->pc == 0x52B170u) {
        ctx->pc = 0x52B170u;
            // 0x52b170: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B174u;
        goto label_52b174;
    }
    ctx->pc = 0x52B16Cu;
    SET_GPR_U32(ctx, 31, 0x52B174u);
    ctx->pc = 0x52B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B16Cu;
            // 0x52b170: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B174u; }
        if (ctx->pc != 0x52B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B174u; }
        if (ctx->pc != 0x52B174u) { return; }
    }
    ctx->pc = 0x52B174u;
label_52b174:
    // 0x52b174: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x52b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_52b178:
    // 0x52b178: 0xc0b6e90  jal         func_2DBA40
label_52b17c:
    if (ctx->pc == 0x52B17Cu) {
        ctx->pc = 0x52B17Cu;
            // 0x52b17c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52B180u;
        goto label_52b180;
    }
    ctx->pc = 0x52B178u;
    SET_GPR_U32(ctx, 31, 0x52B180u);
    ctx->pc = 0x52B17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B178u;
            // 0x52b17c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B180u; }
        if (ctx->pc != 0x52B180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B180u; }
        if (ctx->pc != 0x52B180u) { return; }
    }
    ctx->pc = 0x52B180u;
label_52b180:
    // 0x52b180: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x52b180u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_52b184:
    // 0x52b184: 0xc0d8a80  jal         func_362A00
label_52b188:
    if (ctx->pc == 0x52B188u) {
        ctx->pc = 0x52B188u;
            // 0x52b188: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x52B18Cu;
        goto label_52b18c;
    }
    ctx->pc = 0x52B184u;
    SET_GPR_U32(ctx, 31, 0x52B18Cu);
    ctx->pc = 0x52B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B184u;
            // 0x52b188: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B18Cu; }
        if (ctx->pc != 0x52B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B18Cu; }
        if (ctx->pc != 0x52B18Cu) { return; }
    }
    ctx->pc = 0x52B18Cu;
label_52b18c:
    // 0x52b18c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x52b18cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_52b190:
    // 0x52b190: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52b190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b194:
    // 0x52b194: 0xc0d8a54  jal         func_362950
label_52b198:
    if (ctx->pc == 0x52B198u) {
        ctx->pc = 0x52B198u;
            // 0x52b198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B19Cu;
        goto label_52b19c;
    }
    ctx->pc = 0x52B194u;
    SET_GPR_U32(ctx, 31, 0x52B19Cu);
    ctx->pc = 0x52B198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B194u;
            // 0x52b198: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B19Cu; }
        if (ctx->pc != 0x52B19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B19Cu; }
        if (ctx->pc != 0x52B19Cu) { return; }
    }
    ctx->pc = 0x52B19Cu;
label_52b19c:
    // 0x52b19c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x52b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_52b1a0:
    // 0x52b1a0: 0xc0b6e90  jal         func_2DBA40
label_52b1a4:
    if (ctx->pc == 0x52B1A4u) {
        ctx->pc = 0x52B1A4u;
            // 0x52b1a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52B1A8u;
        goto label_52b1a8;
    }
    ctx->pc = 0x52B1A0u;
    SET_GPR_U32(ctx, 31, 0x52B1A8u);
    ctx->pc = 0x52B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1A0u;
            // 0x52b1a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1A8u; }
        if (ctx->pc != 0x52B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1A8u; }
        if (ctx->pc != 0x52B1A8u) { return; }
    }
    ctx->pc = 0x52B1A8u;
label_52b1a8:
    // 0x52b1a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x52b1a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_52b1ac:
    // 0x52b1ac: 0xc0d8a80  jal         func_362A00
label_52b1b0:
    if (ctx->pc == 0x52B1B0u) {
        ctx->pc = 0x52B1B0u;
            // 0x52b1b0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52B1B4u;
        goto label_52b1b4;
    }
    ctx->pc = 0x52B1ACu;
    SET_GPR_U32(ctx, 31, 0x52B1B4u);
    ctx->pc = 0x52B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1ACu;
            // 0x52b1b0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1B4u; }
        if (ctx->pc != 0x52B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1B4u; }
        if (ctx->pc != 0x52B1B4u) { return; }
    }
    ctx->pc = 0x52B1B4u;
label_52b1b4:
    // 0x52b1b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x52b1b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_52b1b8:
    // 0x52b1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52b1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b1bc:
    // 0x52b1bc: 0xc0d8a3c  jal         func_3628F0
label_52b1c0:
    if (ctx->pc == 0x52B1C0u) {
        ctx->pc = 0x52B1C0u;
            // 0x52b1c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B1C4u;
        goto label_52b1c4;
    }
    ctx->pc = 0x52B1BCu;
    SET_GPR_U32(ctx, 31, 0x52B1C4u);
    ctx->pc = 0x52B1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1BCu;
            // 0x52b1c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1C4u; }
        if (ctx->pc != 0x52B1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1C4u; }
        if (ctx->pc != 0x52B1C4u) { return; }
    }
    ctx->pc = 0x52B1C4u;
label_52b1c4:
    // 0x52b1c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x52b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52b1c8:
    // 0x52b1c8: 0xc0b6e00  jal         func_2DB800
label_52b1cc:
    if (ctx->pc == 0x52B1CCu) {
        ctx->pc = 0x52B1CCu;
            // 0x52b1cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B1D0u;
        goto label_52b1d0;
    }
    ctx->pc = 0x52B1C8u;
    SET_GPR_U32(ctx, 31, 0x52B1D0u);
    ctx->pc = 0x52B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1C8u;
            // 0x52b1cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1D0u; }
        if (ctx->pc != 0x52B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1D0u; }
        if (ctx->pc != 0x52B1D0u) { return; }
    }
    ctx->pc = 0x52B1D0u;
label_52b1d0:
    // 0x52b1d0: 0xc0d8a80  jal         func_362A00
label_52b1d4:
    if (ctx->pc == 0x52B1D4u) {
        ctx->pc = 0x52B1D4u;
            // 0x52b1d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52B1D8u;
        goto label_52b1d8;
    }
    ctx->pc = 0x52B1D0u;
    SET_GPR_U32(ctx, 31, 0x52B1D8u);
    ctx->pc = 0x52B1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1D0u;
            // 0x52b1d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1D8u; }
        if (ctx->pc != 0x52B1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1D8u; }
        if (ctx->pc != 0x52B1D8u) { return; }
    }
    ctx->pc = 0x52B1D8u;
label_52b1d8:
    // 0x52b1d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52b1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b1dc:
    // 0x52b1dc: 0xc0d8a80  jal         func_362A00
label_52b1e0:
    if (ctx->pc == 0x52B1E0u) {
        ctx->pc = 0x52B1E0u;
            // 0x52b1e0: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x52B1E4u;
        goto label_52b1e4;
    }
    ctx->pc = 0x52B1DCu;
    SET_GPR_U32(ctx, 31, 0x52B1E4u);
    ctx->pc = 0x52B1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1DCu;
            // 0x52b1e0: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1E4u; }
        if (ctx->pc != 0x52B1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1E4u; }
        if (ctx->pc != 0x52B1E4u) { return; }
    }
    ctx->pc = 0x52B1E4u;
label_52b1e4:
    // 0x52b1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52b1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b1e8:
    // 0x52b1e8: 0xc0d8a2c  jal         func_3628B0
label_52b1ec:
    if (ctx->pc == 0x52B1ECu) {
        ctx->pc = 0x52B1ECu;
            // 0x52b1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B1F0u;
        goto label_52b1f0;
    }
    ctx->pc = 0x52B1E8u;
    SET_GPR_U32(ctx, 31, 0x52B1F0u);
    ctx->pc = 0x52B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1E8u;
            // 0x52b1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1F0u; }
        if (ctx->pc != 0x52B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1F0u; }
        if (ctx->pc != 0x52B1F0u) { return; }
    }
    ctx->pc = 0x52B1F0u;
label_52b1f0:
    // 0x52b1f0: 0xc0d8a24  jal         func_362890
label_52b1f4:
    if (ctx->pc == 0x52B1F4u) {
        ctx->pc = 0x52B1F4u;
            // 0x52b1f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x52B1F8u;
        goto label_52b1f8;
    }
    ctx->pc = 0x52B1F0u;
    SET_GPR_U32(ctx, 31, 0x52B1F8u);
    ctx->pc = 0x52B1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B1F0u;
            // 0x52b1f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1F8u; }
        if (ctx->pc != 0x52B1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B1F8u; }
        if (ctx->pc != 0x52B1F8u) { return; }
    }
    ctx->pc = 0x52B1F8u;
label_52b1f8:
    // 0x52b1f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_52b1fc:
    if (ctx->pc == 0x52B1FCu) {
        ctx->pc = 0x52B200u;
        goto label_52b200;
    }
    ctx->pc = 0x52B1F8u;
    {
        const bool branch_taken_0x52b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52b1f8) {
            ctx->pc = 0x52B20Cu;
            goto label_52b20c;
        }
    }
    ctx->pc = 0x52B200u;
label_52b200:
    // 0x52b200: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x52b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52b204:
    // 0x52b204: 0xc0d8a14  jal         func_362850
label_52b208:
    if (ctx->pc == 0x52B208u) {
        ctx->pc = 0x52B208u;
            // 0x52b208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B20Cu;
        goto label_52b20c;
    }
    ctx->pc = 0x52B204u;
    SET_GPR_U32(ctx, 31, 0x52B20Cu);
    ctx->pc = 0x52B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B204u;
            // 0x52b208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B20Cu; }
        if (ctx->pc != 0x52B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B20Cu; }
        if (ctx->pc != 0x52B20Cu) { return; }
    }
    ctx->pc = 0x52B20Cu;
label_52b20c:
    // 0x52b20c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52b210:
    // 0x52b210: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52b214:
    // 0x52b214: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x52b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52b218:
    // 0x52b218: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x52b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b21c:
    // 0x52b21c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x52b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b220:
    // 0x52b220: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x52b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52b224:
    // 0x52b224: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x52b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b228:
    // 0x52b228: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x52b228u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_52b22c:
    // 0x52b22c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x52b22cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_52b230:
    // 0x52b230: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x52b230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_52b234:
    // 0x52b234: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x52b234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_52b238:
    // 0x52b238: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x52b238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_52b23c:
    // 0x52b23c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x52b23cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_52b240:
    // 0x52b240: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x52b240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_52b244:
    // 0x52b244: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x52b244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_52b248:
    // 0x52b248: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x52b248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_52b24c:
    // 0x52b24c: 0xc088b74  jal         func_222DD0
label_52b250:
    if (ctx->pc == 0x52B250u) {
        ctx->pc = 0x52B250u;
            // 0x52b250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B254u;
        goto label_52b254;
    }
    ctx->pc = 0x52B24Cu;
    SET_GPR_U32(ctx, 31, 0x52B254u);
    ctx->pc = 0x52B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B24Cu;
            // 0x52b250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B254u; }
        if (ctx->pc != 0x52B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B254u; }
        if (ctx->pc != 0x52B254u) { return; }
    }
    ctx->pc = 0x52B254u;
label_52b254:
    // 0x52b254: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52b254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52b258:
    // 0x52b258: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52b25c:
    // 0x52b25c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x52b25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_52b260:
    // 0x52b260: 0x320f809  jalr        $t9
label_52b264:
    if (ctx->pc == 0x52B264u) {
        ctx->pc = 0x52B264u;
            // 0x52b264: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B268u;
        goto label_52b268;
    }
    ctx->pc = 0x52B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B268u);
        ctx->pc = 0x52B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B260u;
            // 0x52b264: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B268u; }
            if (ctx->pc != 0x52B268u) { return; }
        }
        }
    }
    ctx->pc = 0x52B268u;
label_52b268:
    // 0x52b268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b26c:
    // 0x52b26c: 0x10000011  b           . + 4 + (0x11 << 2)
label_52b270:
    if (ctx->pc == 0x52B270u) {
        ctx->pc = 0x52B270u;
            // 0x52b270: 0xa2630210  sb          $v1, 0x210($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52B274u;
        goto label_52b274;
    }
    ctx->pc = 0x52B26Cu;
    {
        const bool branch_taken_0x52b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B26Cu;
            // 0x52b270: 0xa2630210  sb          $v1, 0x210($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b26c) {
            ctx->pc = 0x52B2B4u;
            goto label_52b2b4;
        }
    }
    ctx->pc = 0x52B274u;
label_52b274:
    // 0x52b274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b278:
    // 0x52b278: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_52b27c:
    if (ctx->pc == 0x52B27Cu) {
        ctx->pc = 0x52B27Cu;
            // 0x52b27c: 0x96440050  lhu         $a0, 0x50($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x52B280u;
        goto label_52b280;
    }
    ctx->pc = 0x52B278u;
    {
        const bool branch_taken_0x52b278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52b278) {
            ctx->pc = 0x52B27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B278u;
            // 0x52b27c: 0x96440050  lhu         $a0, 0x50($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52B2B8u;
            goto label_52b2b8;
        }
    }
    ctx->pc = 0x52B280u;
label_52b280:
    // 0x52b280: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x52b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_52b284:
    // 0x52b284: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x52b284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_52b288:
    // 0x52b288: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x52b288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_52b28c:
    // 0x52b28c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x52b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_52b290:
    // 0x52b290: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x52b290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_52b294:
    // 0x52b294: 0xc088b74  jal         func_222DD0
label_52b298:
    if (ctx->pc == 0x52B298u) {
        ctx->pc = 0x52B298u;
            // 0x52b298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B29Cu;
        goto label_52b29c;
    }
    ctx->pc = 0x52B294u;
    SET_GPR_U32(ctx, 31, 0x52B29Cu);
    ctx->pc = 0x52B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B294u;
            // 0x52b298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B29Cu; }
        if (ctx->pc != 0x52B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B29Cu; }
        if (ctx->pc != 0x52B29Cu) { return; }
    }
    ctx->pc = 0x52B29Cu;
label_52b29c:
    // 0x52b29c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52b29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52b2a0:
    // 0x52b2a0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52b2a4:
    // 0x52b2a4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x52b2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_52b2a8:
    // 0x52b2a8: 0x320f809  jalr        $t9
label_52b2ac:
    if (ctx->pc == 0x52B2ACu) {
        ctx->pc = 0x52B2ACu;
            // 0x52b2ac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B2B0u;
        goto label_52b2b0;
    }
    ctx->pc = 0x52B2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B2B0u);
        ctx->pc = 0x52B2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B2A8u;
            // 0x52b2ac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B2B0u; }
            if (ctx->pc != 0x52B2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x52B2B0u;
label_52b2b0:
    // 0x52b2b0: 0xa2600210  sb          $zero, 0x210($s3)
    ctx->pc = 0x52b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 528), (uint8_t)GPR_U32(ctx, 0));
label_52b2b4:
    // 0x52b2b4: 0x96440050  lhu         $a0, 0x50($s2)
    ctx->pc = 0x52b2b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_52b2b8:
    // 0x52b2b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52b2bc:
    // 0x52b2bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_52b2c0:
    if (ctx->pc == 0x52B2C0u) {
        ctx->pc = 0x52B2C4u;
        goto label_52b2c4;
    }
    ctx->pc = 0x52B2BCu;
    {
        const bool branch_taken_0x52b2bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x52b2bc) {
            ctx->pc = 0x52B2D8u;
            goto label_52b2d8;
        }
    }
    ctx->pc = 0x52B2C4u;
label_52b2c4:
    // 0x52b2c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x52b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52b2c8:
    // 0x52b2c8: 0xae6300e0  sw          $v1, 0xE0($s3)
    ctx->pc = 0x52b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 3));
label_52b2cc:
    // 0x52b2cc: 0xc6600224  lwc1        $f0, 0x224($s3)
    ctx->pc = 0x52b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b2d0:
    // 0x52b2d0: 0x10000010  b           . + 4 + (0x10 << 2)
label_52b2d4:
    if (ctx->pc == 0x52B2D4u) {
        ctx->pc = 0x52B2D4u;
            // 0x52b2d4: 0xe6600200  swc1        $f0, 0x200($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->pc = 0x52B2D8u;
        goto label_52b2d8;
    }
    ctx->pc = 0x52B2D0u;
    {
        const bool branch_taken_0x52b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52B2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B2D0u;
            // 0x52b2d4: 0xe6600200  swc1        $f0, 0x200($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b2d0) {
            ctx->pc = 0x52B314u;
            goto label_52b314;
        }
    }
    ctx->pc = 0x52B2D8u;
label_52b2d8:
    // 0x52b2d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52b2dc:
    // 0x52b2dc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x52b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_52b2e0:
    // 0x52b2e0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52b2e4:
    // 0x52b2e4: 0xc6610220  lwc1        $f1, 0x220($s3)
    ctx->pc = 0x52b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b2e8:
    // 0x52b2e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52b2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52b2ec:
    // 0x52b2ec: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x52b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b2f0:
    // 0x52b2f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x52b2f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_52b2f4:
    // 0x52b2f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x52b2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b2f8:
    // 0x52b2f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_52b2fc:
    if (ctx->pc == 0x52B2FCu) {
        ctx->pc = 0x52B2FCu;
            // 0x52b2fc: 0xe6610220  swc1        $f1, 0x220($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
        ctx->pc = 0x52B300u;
        goto label_52b300;
    }
    ctx->pc = 0x52B2F8u;
    {
        const bool branch_taken_0x52b2f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x52B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B2F8u;
            // 0x52b2fc: 0xe6610220  swc1        $f1, 0x220($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b2f8) {
            ctx->pc = 0x52B304u;
            goto label_52b304;
        }
    }
    ctx->pc = 0x52B300u;
label_52b300:
    // 0x52b300: 0xae600220  sw          $zero, 0x220($s3)
    ctx->pc = 0x52b300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 0));
label_52b304:
    // 0x52b304: 0x8e64024c  lw          $a0, 0x24C($s3)
    ctx->pc = 0x52b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
label_52b308:
    // 0x52b308: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x52b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_52b30c:
    // 0x52b30c: 0xc122d2c  jal         func_48B4B0
label_52b310:
    if (ctx->pc == 0x52B310u) {
        ctx->pc = 0x52B310u;
            // 0x52b310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B314u;
        goto label_52b314;
    }
    ctx->pc = 0x52B30Cu;
    SET_GPR_U32(ctx, 31, 0x52B314u);
    ctx->pc = 0x52B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B30Cu;
            // 0x52b310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B314u; }
        if (ctx->pc != 0x52B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B314u; }
        if (ctx->pc != 0x52B314u) { return; }
    }
    ctx->pc = 0x52B314u;
label_52b314:
    // 0x52b314: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x52b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_52b318:
    // 0x52b318: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x52b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_52b31c:
    // 0x52b31c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x52b31cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52b320:
    // 0x52b320: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52b324:
    // 0x52b324: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x52b324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52b328:
    // 0x52b328: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52b328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52b32c:
    // 0x52b32c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52b32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52b330:
    // 0x52b330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52b330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52b334:
    // 0x52b334: 0x3e00008  jr          $ra
label_52b338:
    if (ctx->pc == 0x52B338u) {
        ctx->pc = 0x52B338u;
            // 0x52b338: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x52B33Cu;
        goto label_52b33c;
    }
    ctx->pc = 0x52B334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B334u;
            // 0x52b338: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52B33Cu;
label_52b33c:
    // 0x52b33c: 0x0  nop
    ctx->pc = 0x52b33cu;
    // NOP
label_52b340:
    // 0x52b340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52b344:
    // 0x52b344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52b348:
    // 0x52b348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52b34c:
    // 0x52b34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52b350:
    // 0x52b350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52b350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52b354:
    // 0x52b354: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x52b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_52b358:
    // 0x52b358: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x52b358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_52b35c:
    // 0x52b35c: 0xc0e393c  jal         func_38E4F0
label_52b360:
    if (ctx->pc == 0x52B360u) {
        ctx->pc = 0x52B360u;
            // 0x52b360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B364u;
        goto label_52b364;
    }
    ctx->pc = 0x52B35Cu;
    SET_GPR_U32(ctx, 31, 0x52B364u);
    ctx->pc = 0x52B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B35Cu;
            // 0x52b360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B364u; }
        if (ctx->pc != 0x52B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B364u; }
        if (ctx->pc != 0x52B364u) { return; }
    }
    ctx->pc = 0x52B364u;
label_52b364:
    // 0x52b364: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52b364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52b368:
    // 0x52b368: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x52b368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_52b36c:
    // 0x52b36c: 0x320f809  jalr        $t9
label_52b370:
    if (ctx->pc == 0x52B370u) {
        ctx->pc = 0x52B370u;
            // 0x52b370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B374u;
        goto label_52b374;
    }
    ctx->pc = 0x52B36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B374u);
        ctx->pc = 0x52B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B36Cu;
            // 0x52b370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B374u; }
            if (ctx->pc != 0x52B374u) { return; }
        }
        }
    }
    ctx->pc = 0x52B374u;
label_52b374:
    // 0x52b374: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x52b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b378:
    // 0x52b378: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x52b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_52b37c:
    // 0x52b37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52b37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52b380:
    // 0x52b380: 0x0  nop
    ctx->pc = 0x52b380u;
    // NOP
label_52b384:
    // 0x52b384: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x52b384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52b388:
    // 0x52b388: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_52b38c:
    if (ctx->pc == 0x52B38Cu) {
        ctx->pc = 0x52B38Cu;
            // 0x52b38c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x52B390u;
        goto label_52b390;
    }
    ctx->pc = 0x52B388u;
    {
        const bool branch_taken_0x52b388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52b388) {
            ctx->pc = 0x52B38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B388u;
            // 0x52b38c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x52B3A0u;
            goto label_52b3a0;
        }
    }
    ctx->pc = 0x52B390u;
label_52b390:
    // 0x52b390: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52b390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52b394:
    // 0x52b394: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x52b394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_52b398:
    // 0x52b398: 0x10000007  b           . + 4 + (0x7 << 2)
label_52b39c:
    if (ctx->pc == 0x52B39Cu) {
        ctx->pc = 0x52B39Cu;
            // 0x52b39c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B3A0u;
        goto label_52b3a0;
    }
    ctx->pc = 0x52B398u;
    {
        const bool branch_taken_0x52b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B398u;
            // 0x52b39c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b398) {
            ctx->pc = 0x52B3B8u;
            goto label_52b3b8;
        }
    }
    ctx->pc = 0x52B3A0u;
label_52b3a0:
    // 0x52b3a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x52b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_52b3a4:
    // 0x52b3a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52b3a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52b3a8:
    // 0x52b3a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x52b3a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_52b3ac:
    // 0x52b3ac: 0x0  nop
    ctx->pc = 0x52b3acu;
    // NOP
label_52b3b0:
    // 0x52b3b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x52b3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_52b3b4:
    // 0x52b3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52b3b8:
    // 0x52b3b8: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x52b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_52b3bc:
    // 0x52b3bc: 0xc0b89e4  jal         func_2E2790
label_52b3c0:
    if (ctx->pc == 0x52B3C0u) {
        ctx->pc = 0x52B3C0u;
            // 0x52b3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52B3C4u;
        goto label_52b3c4;
    }
    ctx->pc = 0x52B3BCu;
    SET_GPR_U32(ctx, 31, 0x52B3C4u);
    ctx->pc = 0x52B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B3BCu;
            // 0x52b3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3C4u; }
        if (ctx->pc != 0x52B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3C4u; }
        if (ctx->pc != 0x52B3C4u) { return; }
    }
    ctx->pc = 0x52B3C4u;
label_52b3c4:
    // 0x52b3c4: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x52b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b3c8:
    // 0x52b3c8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x52b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_52b3cc:
    // 0x52b3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52b3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52b3d0:
    // 0x52b3d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x52b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_52b3d4:
    // 0x52b3d4: 0xc60c01d0  lwc1        $f12, 0x1D0($s0)
    ctx->pc = 0x52b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52b3d8:
    // 0x52b3d8: 0xc60e01d8  lwc1        $f14, 0x1D8($s0)
    ctx->pc = 0x52b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_52b3dc:
    // 0x52b3dc: 0xc04cbd8  jal         func_132F60
label_52b3e0:
    if (ctx->pc == 0x52B3E0u) {
        ctx->pc = 0x52B3E0u;
            // 0x52b3e0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x52B3E4u;
        goto label_52b3e4;
    }
    ctx->pc = 0x52B3DCu;
    SET_GPR_U32(ctx, 31, 0x52B3E4u);
    ctx->pc = 0x52B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B3DCu;
            // 0x52b3e0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3E4u; }
        if (ctx->pc != 0x52B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3E4u; }
        if (ctx->pc != 0x52B3E4u) { return; }
    }
    ctx->pc = 0x52B3E4u;
label_52b3e4:
    // 0x52b3e4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x52b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_52b3e8:
    // 0x52b3e8: 0xc04c74c  jal         func_131D30
label_52b3ec:
    if (ctx->pc == 0x52B3ECu) {
        ctx->pc = 0x52B3ECu;
            // 0x52b3ec: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x52B3F0u;
        goto label_52b3f0;
    }
    ctx->pc = 0x52B3E8u;
    SET_GPR_U32(ctx, 31, 0x52B3F0u);
    ctx->pc = 0x52B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B3E8u;
            // 0x52b3ec: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3F0u; }
        if (ctx->pc != 0x52B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3F0u; }
        if (ctx->pc != 0x52B3F0u) { return; }
    }
    ctx->pc = 0x52B3F0u;
label_52b3f0:
    // 0x52b3f0: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x52b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_52b3f4:
    // 0x52b3f4: 0xc04c74c  jal         func_131D30
label_52b3f8:
    if (ctx->pc == 0x52B3F8u) {
        ctx->pc = 0x52B3F8u;
            // 0x52b3f8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x52B3FCu;
        goto label_52b3fc;
    }
    ctx->pc = 0x52B3F4u;
    SET_GPR_U32(ctx, 31, 0x52B3FCu);
    ctx->pc = 0x52B3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B3F4u;
            // 0x52b3f8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3FCu; }
        if (ctx->pc != 0x52B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B3FCu; }
        if (ctx->pc != 0x52B3FCu) { return; }
    }
    ctx->pc = 0x52B3FCu;
label_52b3fc:
    // 0x52b3fc: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x52b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_52b400:
    // 0x52b400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52b404:
    // 0x52b404: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x52b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_52b408:
    // 0x52b408: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x52b408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_52b40c:
    // 0x52b40c: 0xc04c74c  jal         func_131D30
label_52b410:
    if (ctx->pc == 0x52B410u) {
        ctx->pc = 0x52B410u;
            // 0x52b410: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x52B414u;
        goto label_52b414;
    }
    ctx->pc = 0x52B40Cu;
    SET_GPR_U32(ctx, 31, 0x52B414u);
    ctx->pc = 0x52B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B40Cu;
            // 0x52b410: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B414u; }
        if (ctx->pc != 0x52B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B414u; }
        if (ctx->pc != 0x52B414u) { return; }
    }
    ctx->pc = 0x52B414u;
label_52b414:
    // 0x52b414: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x52b414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_52b418:
    // 0x52b418: 0xc04c720  jal         func_131C80
label_52b41c:
    if (ctx->pc == 0x52B41Cu) {
        ctx->pc = 0x52B41Cu;
            // 0x52b41c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x52B420u;
        goto label_52b420;
    }
    ctx->pc = 0x52B418u;
    SET_GPR_U32(ctx, 31, 0x52B420u);
    ctx->pc = 0x52B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B418u;
            // 0x52b41c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B420u; }
        if (ctx->pc != 0x52B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B420u; }
        if (ctx->pc != 0x52B420u) { return; }
    }
    ctx->pc = 0x52B420u;
label_52b420:
    // 0x52b420: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x52b420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_52b424:
    // 0x52b424: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x52b424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_52b428:
    // 0x52b428: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x52b428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_52b42c:
    // 0x52b42c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x52b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_52b430:
    // 0x52b430: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x52b430u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b434:
    // 0x52b434: 0xc088b74  jal         func_222DD0
label_52b438:
    if (ctx->pc == 0x52B438u) {
        ctx->pc = 0x52B438u;
            // 0x52b438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B43Cu;
        goto label_52b43c;
    }
    ctx->pc = 0x52B434u;
    SET_GPR_U32(ctx, 31, 0x52B43Cu);
    ctx->pc = 0x52B438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B434u;
            // 0x52b438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B43Cu; }
        if (ctx->pc != 0x52B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B43Cu; }
        if (ctx->pc != 0x52B43Cu) { return; }
    }
    ctx->pc = 0x52B43Cu;
label_52b43c:
    // 0x52b43c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x52b43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_52b440:
    // 0x52b440: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x52b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_52b444:
    // 0x52b444: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52b444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52b448:
    // 0x52b448: 0x320f809  jalr        $t9
label_52b44c:
    if (ctx->pc == 0x52B44Cu) {
        ctx->pc = 0x52B44Cu;
            // 0x52b44c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52B450u;
        goto label_52b450;
    }
    ctx->pc = 0x52B448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B450u);
        ctx->pc = 0x52B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B448u;
            // 0x52b44c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B450u; }
            if (ctx->pc != 0x52B450u) { return; }
        }
        }
    }
    ctx->pc = 0x52B450u;
label_52b450:
    // 0x52b450: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x52b450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b454:
    // 0x52b454: 0xc088b74  jal         func_222DD0
label_52b458:
    if (ctx->pc == 0x52B458u) {
        ctx->pc = 0x52B458u;
            // 0x52b458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B45Cu;
        goto label_52b45c;
    }
    ctx->pc = 0x52B454u;
    SET_GPR_U32(ctx, 31, 0x52B45Cu);
    ctx->pc = 0x52B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B454u;
            // 0x52b458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B45Cu; }
        if (ctx->pc != 0x52B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B45Cu; }
        if (ctx->pc != 0x52B45Cu) { return; }
    }
    ctx->pc = 0x52B45Cu;
label_52b45c:
    // 0x52b45c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x52b45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_52b460:
    // 0x52b460: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x52b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_52b464:
    // 0x52b464: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x52b464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_52b468:
    // 0x52b468: 0x320f809  jalr        $t9
label_52b46c:
    if (ctx->pc == 0x52B46Cu) {
        ctx->pc = 0x52B46Cu;
            // 0x52b46c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52B470u;
        goto label_52b470;
    }
    ctx->pc = 0x52B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52B470u);
        ctx->pc = 0x52B46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B468u;
            // 0x52b46c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52B470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52B470u; }
            if (ctx->pc != 0x52B470u) { return; }
        }
        }
    }
    ctx->pc = 0x52B470u;
label_52b470:
    // 0x52b470: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x52b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b474:
    // 0x52b474: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x52b474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_52b478:
    // 0x52b478: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x52b478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_52b47c:
    // 0x52b47c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52b480:
    // 0x52b480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52b480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b484:
    // 0x52b484: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x52b484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_52b488:
    // 0x52b488: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x52b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b48c:
    // 0x52b48c: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x52b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_52b490:
    // 0x52b490: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x52b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b494:
    // 0x52b494: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x52b494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_52b498:
    // 0x52b498: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x52b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b49c:
    // 0x52b49c: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x52b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_52b4a0:
    // 0x52b4a0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b4a4:
    // 0x52b4a4: 0xc08914c  jal         func_224530
label_52b4a8:
    if (ctx->pc == 0x52B4A8u) {
        ctx->pc = 0x52B4A8u;
            // 0x52b4a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B4ACu;
        goto label_52b4ac;
    }
    ctx->pc = 0x52B4A4u;
    SET_GPR_U32(ctx, 31, 0x52B4ACu);
    ctx->pc = 0x52B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B4A4u;
            // 0x52b4a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B4ACu; }
        if (ctx->pc != 0x52B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B4ACu; }
        if (ctx->pc != 0x52B4ACu) { return; }
    }
    ctx->pc = 0x52B4ACu;
label_52b4ac:
    // 0x52b4ac: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x52b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b4b0:
    // 0x52b4b0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52b4b4:
    // 0x52b4b4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x52b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_52b4b8:
    // 0x52b4b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x52b4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52b4bc:
    // 0x52b4bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b4c0:
    // 0x52b4c0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x52b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_52b4c4:
    // 0x52b4c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52b4c8:
    // 0x52b4c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52b4cc:
    // 0x52b4cc: 0xc08bff0  jal         func_22FFC0
label_52b4d0:
    if (ctx->pc == 0x52B4D0u) {
        ctx->pc = 0x52B4D0u;
            // 0x52b4d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B4D4u;
        goto label_52b4d4;
    }
    ctx->pc = 0x52B4CCu;
    SET_GPR_U32(ctx, 31, 0x52B4D4u);
    ctx->pc = 0x52B4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B4CCu;
            // 0x52b4d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B4D4u; }
        if (ctx->pc != 0x52B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B4D4u; }
        if (ctx->pc != 0x52B4D4u) { return; }
    }
    ctx->pc = 0x52B4D4u;
label_52b4d4:
    // 0x52b4d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52b4d8:
    // 0x52b4d8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x52b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b4dc:
    // 0x52b4dc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x52b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b4e0:
    // 0x52b4e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x52b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_52b4e4:
    // 0x52b4e4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x52b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b4e8:
    // 0x52b4e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x52b4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_52b4ec:
    // 0x52b4ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x52b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_52b4f0:
    // 0x52b4f0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x52b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_52b4f4:
    // 0x52b4f4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x52b4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_52b4f8:
    // 0x52b4f8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x52b4f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_52b4fc:
    // 0x52b4fc: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x52b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52b500:
    // 0x52b500: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x52b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b504:
    // 0x52b504: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x52b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b508:
    // 0x52b508: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x52b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b50c:
    // 0x52b50c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x52b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_52b510:
    // 0x52b510: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x52b510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_52b514:
    // 0x52b514: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x52b514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_52b518:
    // 0x52b518: 0xc0892b0  jal         func_224AC0
label_52b51c:
    if (ctx->pc == 0x52B51Cu) {
        ctx->pc = 0x52B51Cu;
            // 0x52b51c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x52B520u;
        goto label_52b520;
    }
    ctx->pc = 0x52B518u;
    SET_GPR_U32(ctx, 31, 0x52B520u);
    ctx->pc = 0x52B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B518u;
            // 0x52b51c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B520u; }
        if (ctx->pc != 0x52B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B520u; }
        if (ctx->pc != 0x52B520u) { return; }
    }
    ctx->pc = 0x52B520u;
label_52b520:
    // 0x52b520: 0xa2000210  sb          $zero, 0x210($s0)
    ctx->pc = 0x52b520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
label_52b524:
    // 0x52b524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52b524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b528:
    // 0x52b528: 0xa2030211  sb          $v1, 0x211($s0)
    ctx->pc = 0x52b528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 3));
label_52b52c:
    // 0x52b52c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x52b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_52b530:
    // 0x52b530: 0xc6000224  lwc1        $f0, 0x224($s0)
    ctx->pc = 0x52b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b534:
    // 0x52b534: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x52b534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_52b538:
    // 0x52b538: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x52b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_52b53c:
    // 0x52b53c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x52b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_52b540:
    // 0x52b540: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x52b540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
label_52b544:
    // 0x52b544: 0x8c63b600  lw          $v1, -0x4A00($v1)
    ctx->pc = 0x52b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948352)));
label_52b548:
    // 0x52b548: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x52b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_52b54c:
    // 0x52b54c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x52b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b550:
    // 0x52b550: 0xe6000248  swc1        $f0, 0x248($s0)
    ctx->pc = 0x52b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 584), bits); }
label_52b554:
    // 0x52b554: 0xa204004c  sb          $a0, 0x4C($s0)
    ctx->pc = 0x52b554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 4));
label_52b558:
    // 0x52b558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52b55c:
    // 0x52b55c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52b55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52b560:
    // 0x52b560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52b560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52b564:
    // 0x52b564: 0x3e00008  jr          $ra
label_52b568:
    if (ctx->pc == 0x52B568u) {
        ctx->pc = 0x52B568u;
            // 0x52b568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52B56Cu;
        goto label_52b56c;
    }
    ctx->pc = 0x52B564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B564u;
            // 0x52b568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52B56Cu;
label_52b56c:
    // 0x52b56c: 0x0  nop
    ctx->pc = 0x52b56cu;
    // NOP
label_52b570:
    // 0x52b570: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x52b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_52b574:
    // 0x52b574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52b578:
    // 0x52b578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52b57c:
    // 0x52b57c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52b580:
    // 0x52b580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52b580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52b584:
    // 0x52b584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52b588:
    // 0x52b588: 0xc0892d0  jal         func_224B40
label_52b58c:
    if (ctx->pc == 0x52B58Cu) {
        ctx->pc = 0x52B58Cu;
            // 0x52b58c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x52B590u;
        goto label_52b590;
    }
    ctx->pc = 0x52B588u;
    SET_GPR_U32(ctx, 31, 0x52B590u);
    ctx->pc = 0x52B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B588u;
            // 0x52b58c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B590u; }
        if (ctx->pc != 0x52B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B590u; }
        if (ctx->pc != 0x52B590u) { return; }
    }
    ctx->pc = 0x52B590u;
label_52b590:
    // 0x52b590: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52b594:
    // 0x52b594: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x52b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_52b598:
    // 0x52b598: 0x8c42b600  lw          $v0, -0x4A00($v0)
    ctx->pc = 0x52b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948352)));
label_52b59c:
    // 0x52b59c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x52b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_52b5a0:
    // 0x52b5a0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x52b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_52b5a4:
    // 0x52b5a4: 0xc0b6e68  jal         func_2DB9A0
label_52b5a8:
    if (ctx->pc == 0x52B5A8u) {
        ctx->pc = 0x52B5A8u;
            // 0x52b5a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x52B5ACu;
        goto label_52b5ac;
    }
    ctx->pc = 0x52B5A4u;
    SET_GPR_U32(ctx, 31, 0x52B5ACu);
    ctx->pc = 0x52B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B5A4u;
            // 0x52b5a8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5ACu; }
        if (ctx->pc != 0x52B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5ACu; }
        if (ctx->pc != 0x52B5ACu) { return; }
    }
    ctx->pc = 0x52B5ACu;
label_52b5ac:
    // 0x52b5ac: 0xc0b6dac  jal         func_2DB6B0
label_52b5b0:
    if (ctx->pc == 0x52B5B0u) {
        ctx->pc = 0x52B5B0u;
            // 0x52b5b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52B5B4u;
        goto label_52b5b4;
    }
    ctx->pc = 0x52B5ACu;
    SET_GPR_U32(ctx, 31, 0x52B5B4u);
    ctx->pc = 0x52B5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B5ACu;
            // 0x52b5b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5B4u; }
        if (ctx->pc != 0x52B5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5B4u; }
        if (ctx->pc != 0x52B5B4u) { return; }
    }
    ctx->pc = 0x52B5B4u;
label_52b5b4:
    // 0x52b5b4: 0xc0cac94  jal         func_32B250
label_52b5b8:
    if (ctx->pc == 0x52B5B8u) {
        ctx->pc = 0x52B5B8u;
            // 0x52b5b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52B5BCu;
        goto label_52b5bc;
    }
    ctx->pc = 0x52B5B4u;
    SET_GPR_U32(ctx, 31, 0x52B5BCu);
    ctx->pc = 0x52B5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B5B4u;
            // 0x52b5b8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5BCu; }
        if (ctx->pc != 0x52B5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5BCu; }
        if (ctx->pc != 0x52B5BCu) { return; }
    }
    ctx->pc = 0x52B5BCu;
label_52b5bc:
    // 0x52b5bc: 0xc0cac84  jal         func_32B210
label_52b5c0:
    if (ctx->pc == 0x52B5C0u) {
        ctx->pc = 0x52B5C0u;
            // 0x52b5c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52B5C4u;
        goto label_52b5c4;
    }
    ctx->pc = 0x52B5BCu;
    SET_GPR_U32(ctx, 31, 0x52B5C4u);
    ctx->pc = 0x52B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B5BCu;
            // 0x52b5c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5C4u; }
        if (ctx->pc != 0x52B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5C4u; }
        if (ctx->pc != 0x52B5C4u) { return; }
    }
    ctx->pc = 0x52B5C4u;
label_52b5c4:
    // 0x52b5c4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x52b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_52b5c8:
    // 0x52b5c8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x52b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_52b5cc:
    // 0x52b5cc: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x52b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52b5d0:
    // 0x52b5d0: 0xc0a5a68  jal         func_2969A0
label_52b5d4:
    if (ctx->pc == 0x52B5D4u) {
        ctx->pc = 0x52B5D4u;
            // 0x52b5d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52B5D8u;
        goto label_52b5d8;
    }
    ctx->pc = 0x52B5D0u;
    SET_GPR_U32(ctx, 31, 0x52B5D8u);
    ctx->pc = 0x52B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B5D0u;
            // 0x52b5d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5D8u; }
        if (ctx->pc != 0x52B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B5D8u; }
        if (ctx->pc != 0x52B5D8u) { return; }
    }
    ctx->pc = 0x52B5D8u;
label_52b5d8:
    // 0x52b5d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52b5dc:
    // 0x52b5dc: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x52b5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_52b5e0:
    // 0x52b5e0: 0x8c43b600  lw          $v1, -0x4A00($v0)
    ctx->pc = 0x52b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948352)));
label_52b5e4:
    // 0x52b5e4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x52b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b5e8:
    // 0x52b5e8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x52b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b5ec:
    // 0x52b5ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x52b5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b5f0:
    // 0x52b5f0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x52b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b5f4:
    // 0x52b5f4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x52b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_52b5f8:
    // 0x52b5f8: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x52b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_52b5fc:
    // 0x52b5fc: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x52b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_52b600:
    // 0x52b600: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x52b600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_52b604:
    // 0x52b604: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x52b604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_52b608:
    // 0x52b608: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52b60c:
    // 0x52b60c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x52b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_52b610:
    // 0x52b610: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x52b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_52b614:
    // 0x52b614: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x52b614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_52b618:
    // 0x52b618: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b61c:
    // 0x52b61c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x52b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_52b620:
    // 0x52b620: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52b624:
    // 0x52b624: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x52b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_52b628:
    // 0x52b628: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x52b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_52b62c:
    // 0x52b62c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x52b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_52b630:
    // 0x52b630: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x52b630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_52b634:
    // 0x52b634: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x52b634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_52b638:
    // 0x52b638: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x52b638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_52b63c:
    // 0x52b63c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x52b63cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_52b640:
    // 0x52b640: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x52b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_52b644:
    // 0x52b644: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x52b644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_52b648:
    // 0x52b648: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x52b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b64c:
    // 0x52b64c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x52b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_52b650:
    // 0x52b650: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x52b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b654:
    // 0x52b654: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x52b654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_52b658:
    // 0x52b658: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x52b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b65c:
    // 0x52b65c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x52b65cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_52b660:
    // 0x52b660: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x52b660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_52b664:
    // 0x52b664: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x52b664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_52b668:
    // 0x52b668: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x52b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b66c:
    // 0x52b66c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x52b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b670:
    // 0x52b670: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x52b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b674:
    // 0x52b674: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x52b674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_52b678:
    // 0x52b678: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x52b678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_52b67c:
    // 0x52b67c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x52b67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_52b680:
    // 0x52b680: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x52b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_52b684:
    // 0x52b684: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x52b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_52b688:
    // 0x52b688: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x52b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52b68c:
    // 0x52b68c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x52b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b690:
    // 0x52b690: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x52b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b694:
    // 0x52b694: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x52b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b698:
    // 0x52b698: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x52b698u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_52b69c:
    // 0x52b69c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x52b69cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_52b6a0:
    // 0x52b6a0: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x52b6a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_52b6a4:
    // 0x52b6a4: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x52b6a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_52b6a8:
    // 0x52b6a8: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x52b6a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_52b6ac:
    // 0x52b6ac: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x52b6acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_52b6b0:
    // 0x52b6b0: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x52b6b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_52b6b4:
    // 0x52b6b4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x52b6b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_52b6b8:
    // 0x52b6b8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x52b6b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_52b6bc:
    // 0x52b6bc: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x52b6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_52b6c0:
    // 0x52b6c0: 0xc0a7a88  jal         func_29EA20
label_52b6c4:
    if (ctx->pc == 0x52B6C4u) {
        ctx->pc = 0x52B6C4u;
            // 0x52b6c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x52B6C8u;
        goto label_52b6c8;
    }
    ctx->pc = 0x52B6C0u;
    SET_GPR_U32(ctx, 31, 0x52B6C8u);
    ctx->pc = 0x52B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B6C0u;
            // 0x52b6c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B6C8u; }
        if (ctx->pc != 0x52B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B6C8u; }
        if (ctx->pc != 0x52B6C8u) { return; }
    }
    ctx->pc = 0x52B6C8u;
label_52b6c8:
    // 0x52b6c8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x52b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_52b6cc:
    // 0x52b6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b6d0:
    // 0x52b6d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_52b6d4:
    if (ctx->pc == 0x52B6D4u) {
        ctx->pc = 0x52B6D4u;
            // 0x52b6d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52B6D8u;
        goto label_52b6d8;
    }
    ctx->pc = 0x52B6D0u;
    {
        const bool branch_taken_0x52b6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52B6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B6D0u;
            // 0x52b6d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b6d0) {
            ctx->pc = 0x52B720u;
            goto label_52b720;
        }
    }
    ctx->pc = 0x52B6D8u;
label_52b6d8:
    // 0x52b6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b6dc:
    // 0x52b6dc: 0xc088ef4  jal         func_223BD0
label_52b6e0:
    if (ctx->pc == 0x52B6E0u) {
        ctx->pc = 0x52B6E0u;
            // 0x52b6e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x52B6E4u;
        goto label_52b6e4;
    }
    ctx->pc = 0x52B6DCu;
    SET_GPR_U32(ctx, 31, 0x52B6E4u);
    ctx->pc = 0x52B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B6DCu;
            // 0x52b6e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B6E4u; }
        if (ctx->pc != 0x52B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B6E4u; }
        if (ctx->pc != 0x52B6E4u) { return; }
    }
    ctx->pc = 0x52B6E4u;
label_52b6e4:
    // 0x52b6e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52b6e8:
    // 0x52b6e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52b6ec:
    // 0x52b6ec: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x52b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_52b6f0:
    // 0x52b6f0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x52b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_52b6f4:
    // 0x52b6f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52b6f8:
    // 0x52b6f8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x52b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_52b6fc:
    // 0x52b6fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b700:
    // 0x52b700: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52b700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52b704:
    // 0x52b704: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x52b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_52b708:
    // 0x52b708: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x52b708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_52b70c:
    // 0x52b70c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x52b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_52b710:
    // 0x52b710: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52b714:
    // 0x52b714: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x52b714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_52b718:
    // 0x52b718: 0xc088b38  jal         func_222CE0
label_52b71c:
    if (ctx->pc == 0x52B71Cu) {
        ctx->pc = 0x52B71Cu;
            // 0x52b71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B720u;
        goto label_52b720;
    }
    ctx->pc = 0x52B718u;
    SET_GPR_U32(ctx, 31, 0x52B720u);
    ctx->pc = 0x52B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B718u;
            // 0x52b71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B720u; }
        if (ctx->pc != 0x52B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B720u; }
        if (ctx->pc != 0x52B720u) { return; }
    }
    ctx->pc = 0x52B720u;
label_52b720:
    // 0x52b720: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x52b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_52b724:
    // 0x52b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b728:
    // 0x52b728: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x52b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_52b72c:
    // 0x52b72c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52b730:
    // 0x52b730: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x52b730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_52b734:
    // 0x52b734: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52b734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52b738:
    // 0x52b738: 0xc08914c  jal         func_224530
label_52b73c:
    if (ctx->pc == 0x52B73Cu) {
        ctx->pc = 0x52B73Cu;
            // 0x52b73c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B740u;
        goto label_52b740;
    }
    ctx->pc = 0x52B738u;
    SET_GPR_U32(ctx, 31, 0x52B740u);
    ctx->pc = 0x52B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B738u;
            // 0x52b73c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B740u; }
        if (ctx->pc != 0x52B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B740u; }
        if (ctx->pc != 0x52B740u) { return; }
    }
    ctx->pc = 0x52B740u;
label_52b740:
    // 0x52b740: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x52b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b744:
    // 0x52b744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52b744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b748:
    // 0x52b748: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x52b748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b74c:
    // 0x52b74c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x52b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_52b750:
    // 0x52b750: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x52b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b754:
    // 0x52b754: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x52b754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_52b758:
    // 0x52b758: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x52b758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_52b75c:
    // 0x52b75c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x52b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_52b760:
    // 0x52b760: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x52b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_52b764:
    // 0x52b764: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x52b764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_52b768:
    // 0x52b768: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x52b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52b76c:
    // 0x52b76c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x52b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52b770:
    // 0x52b770: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x52b770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52b774:
    // 0x52b774: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x52b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52b778:
    // 0x52b778: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x52b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_52b77c:
    // 0x52b77c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x52b77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_52b780:
    // 0x52b780: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x52b780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_52b784:
    // 0x52b784: 0xc0892b0  jal         func_224AC0
label_52b788:
    if (ctx->pc == 0x52B788u) {
        ctx->pc = 0x52B788u;
            // 0x52b788: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x52B78Cu;
        goto label_52b78c;
    }
    ctx->pc = 0x52B784u;
    SET_GPR_U32(ctx, 31, 0x52B78Cu);
    ctx->pc = 0x52B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B784u;
            // 0x52b788: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B78Cu; }
        if (ctx->pc != 0x52B78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B78Cu; }
        if (ctx->pc != 0x52B78Cu) { return; }
    }
    ctx->pc = 0x52B78Cu;
label_52b78c:
    // 0x52b78c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x52b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_52b790:
    // 0x52b790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b794:
    // 0x52b794: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x52b794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_52b798:
    // 0x52b798: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x52b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_52b79c:
    // 0x52b79c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x52b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_52b7a0:
    // 0x52b7a0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x52b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_52b7a4:
    // 0x52b7a4: 0xc0891d8  jal         func_224760
label_52b7a8:
    if (ctx->pc == 0x52B7A8u) {
        ctx->pc = 0x52B7A8u;
            // 0x52b7a8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x52B7ACu;
        goto label_52b7ac;
    }
    ctx->pc = 0x52B7A4u;
    SET_GPR_U32(ctx, 31, 0x52B7ACu);
    ctx->pc = 0x52B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B7A4u;
            // 0x52b7a8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7ACu; }
        if (ctx->pc != 0x52B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7ACu; }
        if (ctx->pc != 0x52B7ACu) { return; }
    }
    ctx->pc = 0x52B7ACu;
label_52b7ac:
    // 0x52b7ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x52b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_52b7b0:
    // 0x52b7b0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x52b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_52b7b4:
    // 0x52b7b4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x52b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_52b7b8:
    // 0x52b7b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52b7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b7bc:
    // 0x52b7bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b7c0:
    // 0x52b7c0: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x52b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_52b7c4:
    // 0x52b7c4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52b7c8:
    // 0x52b7c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52b7cc:
    // 0x52b7cc: 0xc08c164  jal         func_230590
label_52b7d0:
    if (ctx->pc == 0x52B7D0u) {
        ctx->pc = 0x52B7D0u;
            // 0x52b7d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52B7D4u;
        goto label_52b7d4;
    }
    ctx->pc = 0x52B7CCu;
    SET_GPR_U32(ctx, 31, 0x52B7D4u);
    ctx->pc = 0x52B7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B7CCu;
            // 0x52b7d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7D4u; }
        if (ctx->pc != 0x52B7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7D4u; }
        if (ctx->pc != 0x52B7D4u) { return; }
    }
    ctx->pc = 0x52B7D4u;
label_52b7d4:
    // 0x52b7d4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x52b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_52b7d8:
    // 0x52b7d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b7dc:
    // 0x52b7dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52b7e0:
    // 0x52b7e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x52b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_52b7e4:
    // 0x52b7e4: 0xc0a7a88  jal         func_29EA20
label_52b7e8:
    if (ctx->pc == 0x52B7E8u) {
        ctx->pc = 0x52B7E8u;
            // 0x52b7e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x52B7ECu;
        goto label_52b7ec;
    }
    ctx->pc = 0x52B7E4u;
    SET_GPR_U32(ctx, 31, 0x52B7ECu);
    ctx->pc = 0x52B7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B7E4u;
            // 0x52b7e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7ECu; }
        if (ctx->pc != 0x52B7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B7ECu; }
        if (ctx->pc != 0x52B7ECu) { return; }
    }
    ctx->pc = 0x52B7ECu;
label_52b7ec:
    // 0x52b7ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x52b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_52b7f0:
    // 0x52b7f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52b7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b7f4:
    // 0x52b7f4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_52b7f8:
    if (ctx->pc == 0x52B7F8u) {
        ctx->pc = 0x52B7F8u;
            // 0x52b7f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52B7FCu;
        goto label_52b7fc;
    }
    ctx->pc = 0x52B7F4u;
    {
        const bool branch_taken_0x52b7f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x52B7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B7F4u;
            // 0x52b7f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b7f4) {
            ctx->pc = 0x52B818u;
            goto label_52b818;
        }
    }
    ctx->pc = 0x52B7FCu;
label_52b7fc:
    // 0x52b7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x52b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52b800:
    // 0x52b800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52b800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52b804:
    // 0x52b804: 0xc0869d0  jal         func_21A740
label_52b808:
    if (ctx->pc == 0x52B808u) {
        ctx->pc = 0x52B808u;
            // 0x52b808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B80Cu;
        goto label_52b80c;
    }
    ctx->pc = 0x52B804u;
    SET_GPR_U32(ctx, 31, 0x52B80Cu);
    ctx->pc = 0x52B808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B804u;
            // 0x52b808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B80Cu; }
        if (ctx->pc != 0x52B80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B80Cu; }
        if (ctx->pc != 0x52B80Cu) { return; }
    }
    ctx->pc = 0x52B80Cu;
label_52b80c:
    // 0x52b80c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52b810:
    // 0x52b810: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x52b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_52b814:
    // 0x52b814: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x52b814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_52b818:
    // 0x52b818: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x52b818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_52b81c:
    // 0x52b81c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52b820:
    // 0x52b820: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52b824:
    // 0x52b824: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52b828:
    // 0x52b828: 0xc08c650  jal         func_231940
label_52b82c:
    if (ctx->pc == 0x52B82Cu) {
        ctx->pc = 0x52B82Cu;
            // 0x52b82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B830u;
        goto label_52b830;
    }
    ctx->pc = 0x52B828u;
    SET_GPR_U32(ctx, 31, 0x52B830u);
    ctx->pc = 0x52B82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B828u;
            // 0x52b82c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B830u; }
        if (ctx->pc != 0x52B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B830u; }
        if (ctx->pc != 0x52B830u) { return; }
    }
    ctx->pc = 0x52B830u;
label_52b830:
    // 0x52b830: 0xc040180  jal         func_100600
label_52b834:
    if (ctx->pc == 0x52B834u) {
        ctx->pc = 0x52B834u;
            // 0x52b834: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x52B838u;
        goto label_52b838;
    }
    ctx->pc = 0x52B830u;
    SET_GPR_U32(ctx, 31, 0x52B838u);
    ctx->pc = 0x52B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B830u;
            // 0x52b834: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B838u; }
        if (ctx->pc != 0x52B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B838u; }
        if (ctx->pc != 0x52B838u) { return; }
    }
    ctx->pc = 0x52B838u;
label_52b838:
    // 0x52b838: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_52b83c:
    if (ctx->pc == 0x52B83Cu) {
        ctx->pc = 0x52B83Cu;
            // 0x52b83c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x52B840u;
        goto label_52b840;
    }
    ctx->pc = 0x52B838u;
    {
        const bool branch_taken_0x52b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52b838) {
            ctx->pc = 0x52B83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B838u;
            // 0x52b83c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52B888u;
            goto label_52b888;
        }
    }
    ctx->pc = 0x52B840u;
label_52b840:
    // 0x52b840: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x52b840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52b844:
    // 0x52b844: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x52b844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_52b848:
    // 0x52b848: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x52b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_52b84c:
    // 0x52b84c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x52b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_52b850:
    // 0x52b850: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x52b850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_52b854:
    // 0x52b854: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x52b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_52b858:
    // 0x52b858: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x52b858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_52b85c:
    // 0x52b85c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x52b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_52b860:
    // 0x52b860: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x52b860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_52b864:
    // 0x52b864: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x52b864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_52b868:
    // 0x52b868: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x52b868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_52b86c:
    // 0x52b86c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x52b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_52b870:
    // 0x52b870: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x52b870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_52b874:
    // 0x52b874: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x52b874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_52b878:
    // 0x52b878: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x52b878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_52b87c:
    // 0x52b87c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x52b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_52b880:
    // 0x52b880: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x52b880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_52b884:
    // 0x52b884: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x52b884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_52b888:
    // 0x52b888: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x52b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_52b88c:
    // 0x52b88c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x52b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_52b890:
    // 0x52b890: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x52b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_52b894:
    // 0x52b894: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x52b894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_52b898:
    // 0x52b898: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x52b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_52b89c:
    // 0x52b89c: 0xc040180  jal         func_100600
label_52b8a0:
    if (ctx->pc == 0x52B8A0u) {
        ctx->pc = 0x52B8A0u;
            // 0x52b8a0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x52B8A4u;
        goto label_52b8a4;
    }
    ctx->pc = 0x52B89Cu;
    SET_GPR_U32(ctx, 31, 0x52B8A4u);
    ctx->pc = 0x52B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B89Cu;
            // 0x52b8a0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8A4u; }
        if (ctx->pc != 0x52B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8A4u; }
        if (ctx->pc != 0x52B8A4u) { return; }
    }
    ctx->pc = 0x52B8A4u;
label_52b8a4:
    // 0x52b8a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52b8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b8a8:
    // 0x52b8a8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_52b8ac:
    if (ctx->pc == 0x52B8ACu) {
        ctx->pc = 0x52B8B0u;
        goto label_52b8b0;
    }
    ctx->pc = 0x52B8A8u;
    {
        const bool branch_taken_0x52b8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52b8a8) {
            ctx->pc = 0x52B928u;
            goto label_52b928;
        }
    }
    ctx->pc = 0x52B8B0u;
label_52b8b0:
    // 0x52b8b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x52b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_52b8b4:
    // 0x52b8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x52b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52b8b8:
    // 0x52b8b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x52b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_52b8bc:
    // 0x52b8bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x52b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_52b8c0:
    // 0x52b8c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x52b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_52b8c4:
    // 0x52b8c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x52b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_52b8c8:
    // 0x52b8c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x52b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_52b8cc:
    // 0x52b8cc: 0xc040138  jal         func_1004E0
label_52b8d0:
    if (ctx->pc == 0x52B8D0u) {
        ctx->pc = 0x52B8D0u;
            // 0x52b8d0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x52B8D4u;
        goto label_52b8d4;
    }
    ctx->pc = 0x52B8CCu;
    SET_GPR_U32(ctx, 31, 0x52B8D4u);
    ctx->pc = 0x52B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B8CCu;
            // 0x52b8d0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8D4u; }
        if (ctx->pc != 0x52B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8D4u; }
        if (ctx->pc != 0x52B8D4u) { return; }
    }
    ctx->pc = 0x52B8D4u;
label_52b8d4:
    // 0x52b8d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52b8d8:
    // 0x52b8d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52b8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b8dc:
    // 0x52b8dc: 0xc040138  jal         func_1004E0
label_52b8e0:
    if (ctx->pc == 0x52B8E0u) {
        ctx->pc = 0x52B8E0u;
            // 0x52b8e0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x52B8E4u;
        goto label_52b8e4;
    }
    ctx->pc = 0x52B8DCu;
    SET_GPR_U32(ctx, 31, 0x52B8E4u);
    ctx->pc = 0x52B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B8DCu;
            // 0x52b8e0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8E4u; }
        if (ctx->pc != 0x52B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B8E4u; }
        if (ctx->pc != 0x52B8E4u) { return; }
    }
    ctx->pc = 0x52B8E4u;
label_52b8e4:
    // 0x52b8e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x52b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_52b8e8:
    // 0x52b8e8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x52b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_52b8ec:
    // 0x52b8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b8f0:
    // 0x52b8f0: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x52b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_52b8f4:
    // 0x52b8f4: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x52b8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_52b8f8:
    // 0x52b8f8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x52b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_52b8fc:
    // 0x52b8fc: 0xc040840  jal         func_102100
label_52b900:
    if (ctx->pc == 0x52B900u) {
        ctx->pc = 0x52B900u;
            // 0x52b900: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52B904u;
        goto label_52b904;
    }
    ctx->pc = 0x52B8FCu;
    SET_GPR_U32(ctx, 31, 0x52B904u);
    ctx->pc = 0x52B900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B8FCu;
            // 0x52b900: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B904u; }
        if (ctx->pc != 0x52B904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B904u; }
        if (ctx->pc != 0x52B904u) { return; }
    }
    ctx->pc = 0x52B904u;
label_52b904:
    // 0x52b904: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x52b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_52b908:
    // 0x52b908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x52b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52b90c:
    // 0x52b90c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x52b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_52b910:
    // 0x52b910: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x52b910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_52b914:
    // 0x52b914: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x52b914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_52b918:
    // 0x52b918: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x52b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_52b91c:
    // 0x52b91c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x52b91cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_52b920:
    // 0x52b920: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_52b924:
    if (ctx->pc == 0x52B924u) {
        ctx->pc = 0x52B928u;
        goto label_52b928;
    }
    ctx->pc = 0x52B920u;
    {
        const bool branch_taken_0x52b920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52b920) {
            ctx->pc = 0x52B90Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52b90c;
        }
    }
    ctx->pc = 0x52B928u;
label_52b928:
    // 0x52b928: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x52b928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_52b92c:
    // 0x52b92c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x52b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52b930:
    // 0x52b930: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x52b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_52b934:
    // 0x52b934: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52b934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52b938:
    // 0x52b938: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x52b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52b93c:
    // 0x52b93c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x52b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52b940:
    // 0x52b940: 0xc0e7d2c  jal         func_39F4B0
label_52b944:
    if (ctx->pc == 0x52B944u) {
        ctx->pc = 0x52B944u;
            // 0x52b944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B948u;
        goto label_52b948;
    }
    ctx->pc = 0x52B940u;
    SET_GPR_U32(ctx, 31, 0x52B948u);
    ctx->pc = 0x52B944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B940u;
            // 0x52b944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B948u; }
        if (ctx->pc != 0x52B948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B948u; }
        if (ctx->pc != 0x52B948u) { return; }
    }
    ctx->pc = 0x52B948u;
label_52b948:
    // 0x52b948: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x52b948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_52b94c:
    // 0x52b94c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x52b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_52b950:
    // 0x52b950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52b950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52b954:
    // 0x52b954: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x52b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_52b958:
    // 0x52b958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x52b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52b95c:
    // 0x52b95c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52b960:
    // 0x52b960: 0xc0e7d2c  jal         func_39F4B0
label_52b964:
    if (ctx->pc == 0x52B964u) {
        ctx->pc = 0x52B964u;
            // 0x52b964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B968u;
        goto label_52b968;
    }
    ctx->pc = 0x52B960u;
    SET_GPR_U32(ctx, 31, 0x52B968u);
    ctx->pc = 0x52B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B960u;
            // 0x52b964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B968u; }
        if (ctx->pc != 0x52B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B968u; }
        if (ctx->pc != 0x52B968u) { return; }
    }
    ctx->pc = 0x52B968u;
label_52b968:
    // 0x52b968: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x52b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_52b96c:
    // 0x52b96c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x52b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_52b970:
    // 0x52b970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52b970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52b974:
    // 0x52b974: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52b978:
    // 0x52b978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x52b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52b97c:
    // 0x52b97c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x52b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_52b980:
    // 0x52b980: 0xc0e7d2c  jal         func_39F4B0
label_52b984:
    if (ctx->pc == 0x52B984u) {
        ctx->pc = 0x52B984u;
            // 0x52b984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52B988u;
        goto label_52b988;
    }
    ctx->pc = 0x52B980u;
    SET_GPR_U32(ctx, 31, 0x52B988u);
    ctx->pc = 0x52B984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B980u;
            // 0x52b984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B988u; }
        if (ctx->pc != 0x52B988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B988u; }
        if (ctx->pc != 0x52B988u) { return; }
    }
    ctx->pc = 0x52B988u;
label_52b988:
    // 0x52b988: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x52b988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_52b98c:
    // 0x52b98c: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x52b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_52b990:
    // 0x52b990: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x52b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_52b994:
    // 0x52b994: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x52b994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_52b998:
    // 0x52b998: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x52b998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_52b99c:
    // 0x52b99c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x52b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_52b9a0:
    // 0x52b9a0: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x52b9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_52b9a4:
    // 0x52b9a4: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x52b9a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_52b9a8:
    // 0x52b9a8: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x52b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_52b9ac:
    // 0x52b9ac: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x52b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_52b9b0:
    // 0x52b9b0: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x52b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_52b9b4:
    // 0x52b9b4: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x52b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_52b9b8:
    // 0x52b9b8: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x52b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_52b9bc:
    // 0x52b9bc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x52b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_52b9c0:
    // 0x52b9c0: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x52b9c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_52b9c4:
    // 0x52b9c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_52b9c8:
    if (ctx->pc == 0x52B9C8u) {
        ctx->pc = 0x52B9C8u;
            // 0x52b9c8: 0xae220240  sw          $v0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
        ctx->pc = 0x52B9CCu;
        goto label_52b9cc;
    }
    ctx->pc = 0x52B9C4u;
    {
        const bool branch_taken_0x52b9c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x52B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52B9C4u;
            // 0x52b9c8: 0xae220240  sw          $v0, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52b9c4) {
            ctx->pc = 0x52B9D0u;
            goto label_52b9d0;
        }
    }
    ctx->pc = 0x52B9CCu;
label_52b9cc:
    // 0x52b9cc: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x52b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
label_52b9d0:
    // 0x52b9d0: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x52b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_52b9d4:
    // 0x52b9d4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x52b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_52b9d8:
    // 0x52b9d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52b9dc:
    // 0x52b9dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x52b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_52b9e0:
    // 0x52b9e0: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x52b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_52b9e4:
    // 0x52b9e4: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x52b9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52b9e8:
    // 0x52b9e8: 0xc040180  jal         func_100600
label_52b9ec:
    if (ctx->pc == 0x52B9ECu) {
        ctx->pc = 0x52B9ECu;
            // 0x52b9ec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x52B9F0u;
        goto label_52b9f0;
    }
    ctx->pc = 0x52B9E8u;
    SET_GPR_U32(ctx, 31, 0x52B9F0u);
    ctx->pc = 0x52B9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52B9E8u;
            // 0x52b9ec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B9F0u; }
        if (ctx->pc != 0x52B9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52B9F0u; }
        if (ctx->pc != 0x52B9F0u) { return; }
    }
    ctx->pc = 0x52B9F0u;
label_52b9f0:
    // 0x52b9f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52b9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52b9f4:
    // 0x52b9f4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_52b9f8:
    if (ctx->pc == 0x52B9F8u) {
        ctx->pc = 0x52B9F8u;
            // 0x52b9f8: 0xae30024c  sw          $s0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 16));
        ctx->pc = 0x52B9FCu;
        goto label_52b9fc;
    }
    ctx->pc = 0x52B9F4u;
    {
        const bool branch_taken_0x52b9f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52b9f4) {
            ctx->pc = 0x52B9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52B9F4u;
            // 0x52b9f8: 0xae30024c  sw          $s0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52BA34u;
            goto label_52ba34;
        }
    }
    ctx->pc = 0x52B9FCu;
label_52b9fc:
    // 0x52b9fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52ba00:
    // 0x52ba00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x52ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52ba04:
    // 0x52ba04: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x52ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_52ba08:
    // 0x52ba08: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x52ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_52ba0c:
    // 0x52ba0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52ba10:
    // 0x52ba10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x52ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_52ba14:
    // 0x52ba14: 0xc040138  jal         func_1004E0
label_52ba18:
    if (ctx->pc == 0x52BA18u) {
        ctx->pc = 0x52BA18u;
            // 0x52ba18: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x52BA1Cu;
        goto label_52ba1c;
    }
    ctx->pc = 0x52BA14u;
    SET_GPR_U32(ctx, 31, 0x52BA1Cu);
    ctx->pc = 0x52BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BA14u;
            // 0x52ba18: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA1Cu; }
        if (ctx->pc != 0x52BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA1Cu; }
        if (ctx->pc != 0x52BA1Cu) { return; }
    }
    ctx->pc = 0x52BA1Cu;
label_52ba1c:
    // 0x52ba1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x52ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_52ba20:
    // 0x52ba20: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x52ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_52ba24:
    // 0x52ba24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ba28:
    // 0x52ba28: 0xc04a576  jal         func_1295D8
label_52ba2c:
    if (ctx->pc == 0x52BA2Cu) {
        ctx->pc = 0x52BA2Cu;
            // 0x52ba2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x52BA30u;
        goto label_52ba30;
    }
    ctx->pc = 0x52BA28u;
    SET_GPR_U32(ctx, 31, 0x52BA30u);
    ctx->pc = 0x52BA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BA28u;
            // 0x52ba2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA30u; }
        if (ctx->pc != 0x52BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA30u; }
        if (ctx->pc != 0x52BA30u) { return; }
    }
    ctx->pc = 0x52BA30u;
label_52ba30:
    // 0x52ba30: 0xae30024c  sw          $s0, 0x24C($s1)
    ctx->pc = 0x52ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 16));
label_52ba34:
    // 0x52ba34: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x52ba34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_52ba38:
    // 0x52ba38: 0x92470c6a  lbu         $a3, 0xC6A($s2)
    ctx->pc = 0x52ba38u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_52ba3c:
    // 0x52ba3c: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x52ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_52ba40:
    // 0x52ba40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52ba44:
    // 0x52ba44: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x52ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_52ba48:
    // 0x52ba48: 0x24c6cc90  addiu       $a2, $a2, -0x3370
    ctx->pc = 0x52ba48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954128));
label_52ba4c:
    // 0x52ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52ba50:
    // 0x52ba50: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x52ba50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_52ba54:
    // 0x52ba54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52ba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ba58:
    // 0x52ba58: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x52ba58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_52ba5c:
    // 0x52ba5c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x52ba5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_52ba60:
    // 0x52ba60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x52ba60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52ba64:
    // 0x52ba64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52ba64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52ba68:
    // 0x52ba68: 0xc122cd8  jal         func_48B360
label_52ba6c:
    if (ctx->pc == 0x52BA6Cu) {
        ctx->pc = 0x52BA6Cu;
            // 0x52ba6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52BA70u;
        goto label_52ba70;
    }
    ctx->pc = 0x52BA68u;
    SET_GPR_U32(ctx, 31, 0x52BA70u);
    ctx->pc = 0x52BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BA68u;
            // 0x52ba6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA70u; }
        if (ctx->pc != 0x52BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA70u; }
        if (ctx->pc != 0x52BA70u) { return; }
    }
    ctx->pc = 0x52BA70u;
label_52ba70:
    // 0x52ba70: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x52ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_52ba74:
    // 0x52ba74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x52ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52ba78:
    // 0x52ba78: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x52ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_52ba7c:
    // 0x52ba7c: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x52ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_52ba80:
    // 0x52ba80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52ba84:
    // 0x52ba84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x52ba84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52ba88:
    // 0x52ba88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52ba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52ba8c:
    // 0x52ba8c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x52ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_52ba90:
    // 0x52ba90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x52ba90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52ba94:
    // 0x52ba94: 0xc122cd8  jal         func_48B360
label_52ba98:
    if (ctx->pc == 0x52BA98u) {
        ctx->pc = 0x52BA98u;
            // 0x52ba98: 0x34460dae  ori         $a2, $v0, 0xDAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
        ctx->pc = 0x52BA9Cu;
        goto label_52ba9c;
    }
    ctx->pc = 0x52BA94u;
    SET_GPR_U32(ctx, 31, 0x52BA9Cu);
    ctx->pc = 0x52BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BA94u;
            // 0x52ba98: 0x34460dae  ori         $a2, $v0, 0xDAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA9Cu; }
        if (ctx->pc != 0x52BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BA9Cu; }
        if (ctx->pc != 0x52BA9Cu) { return; }
    }
    ctx->pc = 0x52BA9Cu;
label_52ba9c:
    // 0x52ba9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_52baa0:
    // 0x52baa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52baa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52baa4:
    // 0x52baa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52baa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52baa8:
    // 0x52baa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52baa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52baac:
    // 0x52baac: 0x3e00008  jr          $ra
label_52bab0:
    if (ctx->pc == 0x52BAB0u) {
        ctx->pc = 0x52BAB0u;
            // 0x52bab0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x52BAB4u;
        goto label_52bab4;
    }
    ctx->pc = 0x52BAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BAACu;
            // 0x52bab0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BAB4u;
label_52bab4:
    // 0x52bab4: 0x0  nop
    ctx->pc = 0x52bab4u;
    // NOP
label_52bab8:
    // 0x52bab8: 0x0  nop
    ctx->pc = 0x52bab8u;
    // NOP
label_52babc:
    // 0x52babc: 0x0  nop
    ctx->pc = 0x52babcu;
    // NOP
label_52bac0:
    // 0x52bac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x52bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_52bac4:
    // 0x52bac4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52bac8:
    // 0x52bac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52bacc:
    // 0x52bacc: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x52baccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_52bad0:
    // 0x52bad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52bad4:
    // 0x52bad4: 0x8c450c78  lw          $a1, 0xC78($v0)
    ctx->pc = 0x52bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_52bad8:
    // 0x52bad8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x52bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_52badc:
    // 0x52badc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x52badcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_52bae0:
    // 0x52bae0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x52bae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_52bae4:
    // 0x52bae4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x52bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_52bae8:
    // 0x52bae8: 0xac860214  sw          $a2, 0x214($a0)
    ctx->pc = 0x52bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 6));
label_52baec:
    // 0x52baec: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x52baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_52baf0:
    // 0x52baf0: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x52baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52baf4:
    // 0x52baf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x52baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_52baf8:
    // 0x52baf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x52baf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_52bafc:
    // 0x52bafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52bafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52bb00:
    // 0x52bb00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x52bb00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_52bb04:
    // 0x52bb04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x52bb04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_52bb08:
    // 0x52bb08: 0xe4810224  swc1        $f1, 0x224($a0)
    ctx->pc = 0x52bb08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
label_52bb0c:
    // 0x52bb0c: 0xac800228  sw          $zero, 0x228($a0)
    ctx->pc = 0x52bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 0));
label_52bb10:
    // 0x52bb10: 0xc4810224  lwc1        $f1, 0x224($a0)
    ctx->pc = 0x52bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bb14:
    // 0x52bb14: 0xe4810200  swc1        $f1, 0x200($a0)
    ctx->pc = 0x52bb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
label_52bb18:
    // 0x52bb18: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x52bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bb1c:
    // 0x52bb1c: 0xe4810204  swc1        $f1, 0x204($a0)
    ctx->pc = 0x52bb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
label_52bb20:
    // 0x52bb20: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x52bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bb24:
    // 0x52bb24: 0xe4810208  swc1        $f1, 0x208($a0)
    ctx->pc = 0x52bb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 520), bits); }
label_52bb28:
    // 0x52bb28: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x52bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
label_52bb2c:
    // 0x52bb2c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x52bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_52bb30:
    // 0x52bb30: 0xac82021c  sw          $v0, 0x21C($a0)
    ctx->pc = 0x52bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
label_52bb34:
    // 0x52bb34: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x52bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bb38:
    // 0x52bb38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x52bb38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52bb3c:
    // 0x52bb3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_52bb40:
    if (ctx->pc == 0x52BB40u) {
        ctx->pc = 0x52BB40u;
            // 0x52bb40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BB44u;
        goto label_52bb44;
    }
    ctx->pc = 0x52BB3Cu;
    {
        const bool branch_taken_0x52bb3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x52BB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BB3Cu;
            // 0x52bb40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bb3c) {
            ctx->pc = 0x52BB54u;
            goto label_52bb54;
        }
    }
    ctx->pc = 0x52BB44u;
label_52bb44:
    // 0x52bb44: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52bb44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52bb48:
    // 0x52bb48: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x52bb48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_52bb4c:
    // 0x52bb4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_52bb50:
    if (ctx->pc == 0x52BB50u) {
        ctx->pc = 0x52BB50u;
            // 0x52bb50: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->pc = 0x52BB54u;
        goto label_52bb54;
    }
    ctx->pc = 0x52BB4Cu;
    {
        const bool branch_taken_0x52bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BB4Cu;
            // 0x52bb50: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bb4c) {
            ctx->pc = 0x52BB70u;
            goto label_52bb70;
        }
    }
    ctx->pc = 0x52BB54u;
label_52bb54:
    // 0x52bb54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x52bb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_52bb58:
    // 0x52bb58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x52bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_52bb5c:
    // 0x52bb5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52bb5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52bb60:
    // 0x52bb60: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x52bb60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_52bb64:
    // 0x52bb64: 0x0  nop
    ctx->pc = 0x52bb64u;
    // NOP
label_52bb68:
    // 0x52bb68: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x52bb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_52bb6c:
    // 0x52bb6c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x52bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_52bb70:
    // 0x52bb70: 0xc0b89e4  jal         func_2E2790
label_52bb74:
    if (ctx->pc == 0x52BB74u) {
        ctx->pc = 0x52BB74u;
            // 0x52bb74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52BB78u;
        goto label_52bb78;
    }
    ctx->pc = 0x52BB70u;
    SET_GPR_U32(ctx, 31, 0x52BB78u);
    ctx->pc = 0x52BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BB70u;
            // 0x52bb74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BB78u; }
        if (ctx->pc != 0x52BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BB78u; }
        if (ctx->pc != 0x52BB78u) { return; }
    }
    ctx->pc = 0x52BB78u;
label_52bb78:
    // 0x52bb78: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x52bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bb7c:
    // 0x52bb7c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x52bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_52bb80:
    // 0x52bb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52bb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52bb84:
    // 0x52bb84: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x52bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_52bb88:
    // 0x52bb88: 0xc60c01d0  lwc1        $f12, 0x1D0($s0)
    ctx->pc = 0x52bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52bb8c:
    // 0x52bb8c: 0xc60e01d8  lwc1        $f14, 0x1D8($s0)
    ctx->pc = 0x52bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_52bb90:
    // 0x52bb90: 0xc04cbd8  jal         func_132F60
label_52bb94:
    if (ctx->pc == 0x52BB94u) {
        ctx->pc = 0x52BB94u;
            // 0x52bb94: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x52BB98u;
        goto label_52bb98;
    }
    ctx->pc = 0x52BB90u;
    SET_GPR_U32(ctx, 31, 0x52BB98u);
    ctx->pc = 0x52BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BB90u;
            // 0x52bb94: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BB98u; }
        if (ctx->pc != 0x52BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BB98u; }
        if (ctx->pc != 0x52BB98u) { return; }
    }
    ctx->pc = 0x52BB98u;
label_52bb98:
    // 0x52bb98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52bb9c:
    // 0x52bb9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x52bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_52bba0:
    // 0x52bba0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x52bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_52bba4:
    // 0x52bba4: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x52bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52bba8:
    // 0x52bba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52bba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52bbac:
    // 0x52bbac: 0x0  nop
    ctx->pc = 0x52bbacu;
    // NOP
label_52bbb0:
    // 0x52bbb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x52bbb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52bbb4:
    // 0x52bbb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_52bbb8:
    if (ctx->pc == 0x52BBB8u) {
        ctx->pc = 0x52BBB8u;
            // 0x52bbb8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x52BBBCu;
        goto label_52bbbc;
    }
    ctx->pc = 0x52BBB4u;
    {
        const bool branch_taken_0x52bbb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x52BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BBB4u;
            // 0x52bbb8: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bbb4) {
            ctx->pc = 0x52BBCCu;
            goto label_52bbcc;
        }
    }
    ctx->pc = 0x52BBBCu;
label_52bbbc:
    // 0x52bbbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52bbbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52bbc0:
    // 0x52bbc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x52bbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_52bbc4:
    // 0x52bbc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_52bbc8:
    if (ctx->pc == 0x52BBC8u) {
        ctx->pc = 0x52BBC8u;
            // 0x52bbc8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x52BBCCu;
        goto label_52bbcc;
    }
    ctx->pc = 0x52BBC4u;
    {
        const bool branch_taken_0x52bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BBC4u;
            // 0x52bbc8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bbc4) {
            ctx->pc = 0x52BBE8u;
            goto label_52bbe8;
        }
    }
    ctx->pc = 0x52BBCCu;
label_52bbcc:
    // 0x52bbcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x52bbccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_52bbd0:
    // 0x52bbd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x52bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_52bbd4:
    // 0x52bbd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52bbd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52bbd8:
    // 0x52bbd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x52bbd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_52bbdc:
    // 0x52bbdc: 0x0  nop
    ctx->pc = 0x52bbdcu;
    // NOP
label_52bbe0:
    // 0x52bbe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52bbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_52bbe4:
    // 0x52bbe4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x52bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_52bbe8:
    // 0x52bbe8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x52bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_52bbec:
    // 0x52bbec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x52bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_52bbf0:
    // 0x52bbf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x52bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52bbf4:
    // 0x52bbf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x52bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_52bbf8:
    // 0x52bbf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x52bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_52bbfc:
    // 0x52bbfc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x52bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52bc00:
    // 0x52bc00: 0xc04cc90  jal         func_133240
label_52bc04:
    if (ctx->pc == 0x52BC04u) {
        ctx->pc = 0x52BC04u;
            // 0x52bc04: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x52BC08u;
        goto label_52bc08;
    }
    ctx->pc = 0x52BC00u;
    SET_GPR_U32(ctx, 31, 0x52BC08u);
    ctx->pc = 0x52BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC00u;
            // 0x52bc04: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC08u; }
        if (ctx->pc != 0x52BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC08u; }
        if (ctx->pc != 0x52BC08u) { return; }
    }
    ctx->pc = 0x52BC08u;
label_52bc08:
    // 0x52bc08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x52bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_52bc0c:
    // 0x52bc0c: 0xc04cc44  jal         func_133110
label_52bc10:
    if (ctx->pc == 0x52BC10u) {
        ctx->pc = 0x52BC10u;
            // 0x52bc10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BC14u;
        goto label_52bc14;
    }
    ctx->pc = 0x52BC0Cu;
    SET_GPR_U32(ctx, 31, 0x52BC14u);
    ctx->pc = 0x52BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC0Cu;
            // 0x52bc10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC14u; }
        if (ctx->pc != 0x52BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC14u; }
        if (ctx->pc != 0x52BC14u) { return; }
    }
    ctx->pc = 0x52BC14u;
label_52bc14:
    // 0x52bc14: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x52bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_52bc18:
    // 0x52bc18: 0xc04780a  jal         func_11E028
label_52bc1c:
    if (ctx->pc == 0x52BC1Cu) {
        ctx->pc = 0x52BC1Cu;
            // 0x52bc1c: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x52BC20u;
        goto label_52bc20;
    }
    ctx->pc = 0x52BC18u;
    SET_GPR_U32(ctx, 31, 0x52BC20u);
    ctx->pc = 0x52BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC18u;
            // 0x52bc1c: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC20u; }
        if (ctx->pc != 0x52BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC20u; }
        if (ctx->pc != 0x52BC20u) { return; }
    }
    ctx->pc = 0x52BC20u;
label_52bc20:
    // 0x52bc20: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x52bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_52bc24:
    // 0x52bc24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52bc28:
    // 0x52bc28: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x52bc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_52bc2c:
    // 0x52bc2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x52bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_52bc30:
    // 0x52bc30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x52bc30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_52bc34:
    // 0x52bc34: 0x0  nop
    ctx->pc = 0x52bc34u;
    // NOP
label_52bc38:
    // 0x52bc38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x52bc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_52bc3c:
    // 0x52bc3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52bc3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52bc40:
    // 0x52bc40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52bc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52bc44:
    // 0x52bc44: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x52bc44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_52bc48:
    // 0x52bc48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x52bc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_52bc4c:
    // 0x52bc4c: 0xc04c970  jal         func_1325C0
label_52bc50:
    if (ctx->pc == 0x52BC50u) {
        ctx->pc = 0x52BC50u;
            // 0x52bc50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52BC54u;
        goto label_52bc54;
    }
    ctx->pc = 0x52BC4Cu;
    SET_GPR_U32(ctx, 31, 0x52BC54u);
    ctx->pc = 0x52BC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC4Cu;
            // 0x52bc50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC54u; }
        if (ctx->pc != 0x52BC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC54u; }
        if (ctx->pc != 0x52BC54u) { return; }
    }
    ctx->pc = 0x52BC54u;
label_52bc54:
    // 0x52bc54: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x52bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_52bc58:
    // 0x52bc58: 0xc04c74c  jal         func_131D30
label_52bc5c:
    if (ctx->pc == 0x52BC5Cu) {
        ctx->pc = 0x52BC5Cu;
            // 0x52bc5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52BC60u;
        goto label_52bc60;
    }
    ctx->pc = 0x52BC58u;
    SET_GPR_U32(ctx, 31, 0x52BC60u);
    ctx->pc = 0x52BC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC58u;
            // 0x52bc5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC60u; }
        if (ctx->pc != 0x52BC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC60u; }
        if (ctx->pc != 0x52BC60u) { return; }
    }
    ctx->pc = 0x52BC60u;
label_52bc60:
    // 0x52bc60: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x52bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_52bc64:
    // 0x52bc64: 0xc04c74c  jal         func_131D30
label_52bc68:
    if (ctx->pc == 0x52BC68u) {
        ctx->pc = 0x52BC68u;
            // 0x52bc68: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52BC6Cu;
        goto label_52bc6c;
    }
    ctx->pc = 0x52BC64u;
    SET_GPR_U32(ctx, 31, 0x52BC6Cu);
    ctx->pc = 0x52BC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC64u;
            // 0x52bc68: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC6Cu; }
        if (ctx->pc != 0x52BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC6Cu; }
        if (ctx->pc != 0x52BC6Cu) { return; }
    }
    ctx->pc = 0x52BC6Cu;
label_52bc6c:
    // 0x52bc6c: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x52bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_52bc70:
    // 0x52bc70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x52bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_52bc74:
    // 0x52bc74: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x52bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_52bc78:
    // 0x52bc78: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x52bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_52bc7c:
    // 0x52bc7c: 0xc04c74c  jal         func_131D30
label_52bc80:
    if (ctx->pc == 0x52BC80u) {
        ctx->pc = 0x52BC80u;
            // 0x52bc80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52BC84u;
        goto label_52bc84;
    }
    ctx->pc = 0x52BC7Cu;
    SET_GPR_U32(ctx, 31, 0x52BC84u);
    ctx->pc = 0x52BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC7Cu;
            // 0x52bc80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC84u; }
        if (ctx->pc != 0x52BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC84u; }
        if (ctx->pc != 0x52BC84u) { return; }
    }
    ctx->pc = 0x52BC84u;
label_52bc84:
    // 0x52bc84: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x52bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_52bc88:
    // 0x52bc88: 0xc04c720  jal         func_131C80
label_52bc8c:
    if (ctx->pc == 0x52BC8Cu) {
        ctx->pc = 0x52BC8Cu;
            // 0x52bc8c: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->pc = 0x52BC90u;
        goto label_52bc90;
    }
    ctx->pc = 0x52BC88u;
    SET_GPR_U32(ctx, 31, 0x52BC90u);
    ctx->pc = 0x52BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC88u;
            // 0x52bc8c: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC90u; }
        if (ctx->pc != 0x52BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC90u; }
        if (ctx->pc != 0x52BC90u) { return; }
    }
    ctx->pc = 0x52BC90u;
label_52bc90:
    // 0x52bc90: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x52bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_52bc94:
    // 0x52bc94: 0xc04c720  jal         func_131C80
label_52bc98:
    if (ctx->pc == 0x52BC98u) {
        ctx->pc = 0x52BC98u;
            // 0x52bc98: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->pc = 0x52BC9Cu;
        goto label_52bc9c;
    }
    ctx->pc = 0x52BC94u;
    SET_GPR_U32(ctx, 31, 0x52BC9Cu);
    ctx->pc = 0x52BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BC94u;
            // 0x52bc98: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC9Cu; }
        if (ctx->pc != 0x52BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BC9Cu; }
        if (ctx->pc != 0x52BC9Cu) { return; }
    }
    ctx->pc = 0x52BC9Cu;
label_52bc9c:
    // 0x52bc9c: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x52bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52bca0:
    // 0x52bca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52bca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52bca4:
    // 0x52bca4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x52bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52bca8:
    // 0x52bca8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x52bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52bcac:
    // 0x52bcac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x52bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_52bcb0:
    // 0x52bcb0: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x52bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_52bcb4:
    // 0x52bcb4: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x52bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52bcb8:
    // 0x52bcb8: 0xe6000234  swc1        $f0, 0x234($s0)
    ctx->pc = 0x52bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
label_52bcbc:
    // 0x52bcbc: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x52bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52bcc0:
    // 0x52bcc0: 0xe6000238  swc1        $f0, 0x238($s0)
    ctx->pc = 0x52bcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
label_52bcc4:
    // 0x52bcc4: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x52bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52bcc8:
    // 0x52bcc8: 0xe600023c  swc1        $f0, 0x23C($s0)
    ctx->pc = 0x52bcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
label_52bccc:
    // 0x52bccc: 0xa2000210  sb          $zero, 0x210($s0)
    ctx->pc = 0x52bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 0));
label_52bcd0:
    // 0x52bcd0: 0xa2060211  sb          $a2, 0x211($s0)
    ctx->pc = 0x52bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 6));
label_52bcd4:
    // 0x52bcd4: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x52bcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_52bcd8:
    // 0x52bcd8: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x52bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_52bcdc:
    // 0x52bcdc: 0xa2040066  sb          $a0, 0x66($s0)
    ctx->pc = 0x52bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 4));
label_52bce0:
    // 0x52bce0: 0xa2060067  sb          $a2, 0x67($s0)
    ctx->pc = 0x52bce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 6));
label_52bce4:
    // 0x52bce4: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x52bce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_52bce8:
    // 0x52bce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52bcec:
    // 0x52bcec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52bcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52bcf0:
    // 0x52bcf0: 0x3e00008  jr          $ra
label_52bcf4:
    if (ctx->pc == 0x52BCF4u) {
        ctx->pc = 0x52BCF4u;
            // 0x52bcf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52BCF8u;
        goto label_52bcf8;
    }
    ctx->pc = 0x52BCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BCF0u;
            // 0x52bcf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BCF8u;
label_52bcf8:
    // 0x52bcf8: 0x0  nop
    ctx->pc = 0x52bcf8u;
    // NOP
label_52bcfc:
    // 0x52bcfc: 0x0  nop
    ctx->pc = 0x52bcfcu;
    // NOP
label_52bd00:
    // 0x52bd00: 0x814aeb0  j           func_52BAC0
label_52bd04:
    if (ctx->pc == 0x52BD04u) {
        ctx->pc = 0x52BD08u;
        goto label_52bd08;
    }
    ctx->pc = 0x52BD00u;
    ctx->pc = 0x52BAC0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_52bac0;
    ctx->pc = 0x52BD08u;
label_52bd08:
    // 0x52bd08: 0x0  nop
    ctx->pc = 0x52bd08u;
    // NOP
label_52bd0c:
    // 0x52bd0c: 0x0  nop
    ctx->pc = 0x52bd0cu;
    // NOP
label_52bd10:
    // 0x52bd10: 0x3e00008  jr          $ra
label_52bd14:
    if (ctx->pc == 0x52BD14u) {
        ctx->pc = 0x52BD14u;
            // 0x52bd14: 0x240236d8  addiu       $v0, $zero, 0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14040));
        ctx->pc = 0x52BD18u;
        goto label_52bd18;
    }
    ctx->pc = 0x52BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BD10u;
            // 0x52bd14: 0x240236d8  addiu       $v0, $zero, 0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BD18u;
label_52bd18:
    // 0x52bd18: 0x0  nop
    ctx->pc = 0x52bd18u;
    // NOP
label_52bd1c:
    // 0x52bd1c: 0x0  nop
    ctx->pc = 0x52bd1cu;
    // NOP
label_52bd20:
    // 0x52bd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52bd24:
    // 0x52bd24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52bd28:
    // 0x52bd28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52bd2c:
    // 0x52bd2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52bd30:
    // 0x52bd30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x52bd30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52bd34:
    // 0x52bd34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52bd38:
    // 0x52bd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52bd3c:
    // 0x52bd3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52bd40:
    // 0x52bd40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x52bd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52bd44:
    // 0x52bd44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_52bd48:
    if (ctx->pc == 0x52BD48u) {
        ctx->pc = 0x52BD48u;
            // 0x52bd48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BD4Cu;
        goto label_52bd4c;
    }
    ctx->pc = 0x52BD44u;
    {
        const bool branch_taken_0x52bd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BD44u;
            // 0x52bd48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bd44) {
            ctx->pc = 0x52BD88u;
            goto label_52bd88;
        }
    }
    ctx->pc = 0x52BD4Cu;
label_52bd4c:
    // 0x52bd4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52bd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52bd50:
    // 0x52bd50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52bd50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52bd54:
    // 0x52bd54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52bd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52bd58:
    // 0x52bd58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x52bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52bd5c:
    // 0x52bd5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_52bd60:
    // 0x52bd60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x52bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52bd64:
    // 0x52bd64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52bd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52bd68:
    // 0x52bd68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x52bd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52bd6c:
    // 0x52bd6c: 0x320f809  jalr        $t9
label_52bd70:
    if (ctx->pc == 0x52BD70u) {
        ctx->pc = 0x52BD74u;
        goto label_52bd74;
    }
    ctx->pc = 0x52BD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52BD74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52BD74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52BD74u; }
            if (ctx->pc != 0x52BD74u) { return; }
        }
        }
    }
    ctx->pc = 0x52BD74u;
label_52bd74:
    // 0x52bd74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x52bd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_52bd78:
    // 0x52bd78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52bd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52bd7c:
    // 0x52bd7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x52bd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52bd80:
    // 0x52bd80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_52bd84:
    if (ctx->pc == 0x52BD84u) {
        ctx->pc = 0x52BD84u;
            // 0x52bd84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52BD88u;
        goto label_52bd88;
    }
    ctx->pc = 0x52BD80u;
    {
        const bool branch_taken_0x52bd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BD80u;
            // 0x52bd84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bd80) {
            ctx->pc = 0x52BD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52bd58;
        }
    }
    ctx->pc = 0x52BD88u;
label_52bd88:
    // 0x52bd88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52bd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52bd8c:
    // 0x52bd8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52bd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52bd90:
    // 0x52bd90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52bd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52bd94:
    // 0x52bd94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52bd94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52bd98:
    // 0x52bd98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52bd98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52bd9c:
    // 0x52bd9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52bd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52bda0:
    // 0x52bda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52bda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52bda4:
    // 0x52bda4: 0x3e00008  jr          $ra
label_52bda8:
    if (ctx->pc == 0x52BDA8u) {
        ctx->pc = 0x52BDA8u;
            // 0x52bda8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52BDACu;
        goto label_52bdac;
    }
    ctx->pc = 0x52BDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BDA4u;
            // 0x52bda8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BDACu;
label_52bdac:
    // 0x52bdac: 0x0  nop
    ctx->pc = 0x52bdacu;
    // NOP
label_52bdb0:
    // 0x52bdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52bdb4:
    // 0x52bdb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52bdb8:
    // 0x52bdb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52bdbc:
    // 0x52bdbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x52bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_52bdc0:
    // 0x52bdc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52bdc4:
    // 0x52bdc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x52bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52bdc8:
    // 0x52bdc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52bdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52bdcc:
    // 0x52bdcc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x52bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_52bdd0:
    // 0x52bdd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52bdd4:
    // 0x52bdd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52bdd8:
    // 0x52bdd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_52bddc:
    // 0x52bddc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x52bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52bde0:
    // 0x52bde0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x52bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_52bde4:
    // 0x52bde4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x52bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_52bde8:
    // 0x52bde8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_52bdec:
    // 0x52bdec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x52bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_52bdf0:
    // 0x52bdf0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x52bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52bdf4:
    // 0x52bdf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_52bdf8:
    // 0x52bdf8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x52bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52bdfc:
    // 0x52bdfc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52be00:
    // 0x52be00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x52be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52be04:
    // 0x52be04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52be04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52be08:
    // 0x52be08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x52be08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52be0c:
    // 0x52be0c: 0xc0a997c  jal         func_2A65F0
label_52be10:
    if (ctx->pc == 0x52BE10u) {
        ctx->pc = 0x52BE10u;
            // 0x52be10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x52BE14u;
        goto label_52be14;
    }
    ctx->pc = 0x52BE0Cu;
    SET_GPR_U32(ctx, 31, 0x52BE14u);
    ctx->pc = 0x52BE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE0Cu;
            // 0x52be10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE14u; }
        if (ctx->pc != 0x52BE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE14u; }
        if (ctx->pc != 0x52BE14u) { return; }
    }
    ctx->pc = 0x52BE14u;
label_52be14:
    // 0x52be14: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x52be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_52be18:
    // 0x52be18: 0xc0d879c  jal         func_361E70
label_52be1c:
    if (ctx->pc == 0x52BE1Cu) {
        ctx->pc = 0x52BE1Cu;
            // 0x52be1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BE20u;
        goto label_52be20;
    }
    ctx->pc = 0x52BE18u;
    SET_GPR_U32(ctx, 31, 0x52BE20u);
    ctx->pc = 0x52BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE18u;
            // 0x52be1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE20u; }
        if (ctx->pc != 0x52BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE20u; }
        if (ctx->pc != 0x52BE20u) { return; }
    }
    ctx->pc = 0x52BE20u;
label_52be20:
    // 0x52be20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52be20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52be24:
    // 0x52be24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52be24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52be28:
    // 0x52be28: 0x3e00008  jr          $ra
label_52be2c:
    if (ctx->pc == 0x52BE2Cu) {
        ctx->pc = 0x52BE2Cu;
            // 0x52be2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52BE30u;
        goto label_52be30;
    }
    ctx->pc = 0x52BE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE28u;
            // 0x52be2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BE30u;
label_52be30:
    // 0x52be30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52be34:
    // 0x52be34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52be38:
    // 0x52be38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52be3c:
    // 0x52be3c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_52be40:
    // 0x52be40: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_52be44:
    if (ctx->pc == 0x52BE44u) {
        ctx->pc = 0x52BE44u;
            // 0x52be44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BE48u;
        goto label_52be48;
    }
    ctx->pc = 0x52BE40u;
    {
        const bool branch_taken_0x52be40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE40u;
            // 0x52be44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52be40) {
            ctx->pc = 0x52BF60u;
            goto label_52bf60;
        }
    }
    ctx->pc = 0x52BE48u;
label_52be48:
    // 0x52be48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x52be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52be4c:
    // 0x52be4c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_52be50:
    // 0x52be50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52be50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_52be54:
    // 0x52be54: 0xc075128  jal         func_1D44A0
label_52be58:
    if (ctx->pc == 0x52BE58u) {
        ctx->pc = 0x52BE58u;
            // 0x52be58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x52BE5Cu;
        goto label_52be5c;
    }
    ctx->pc = 0x52BE54u;
    SET_GPR_U32(ctx, 31, 0x52BE5Cu);
    ctx->pc = 0x52BE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE54u;
            // 0x52be58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE5Cu; }
        if (ctx->pc != 0x52BE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52BE5Cu; }
        if (ctx->pc != 0x52BE5Cu) { return; }
    }
    ctx->pc = 0x52BE5Cu;
label_52be5c:
    // 0x52be5c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x52be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52be60:
    // 0x52be60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52be64:
    // 0x52be64: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x52be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_52be68:
    // 0x52be68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x52be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_52be6c:
    // 0x52be6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52be6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52be70:
    // 0x52be70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52be74:
    if (ctx->pc == 0x52BE74u) {
        ctx->pc = 0x52BE74u;
            // 0x52be74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x52BE78u;
        goto label_52be78;
    }
    ctx->pc = 0x52BE70u;
    {
        const bool branch_taken_0x52be70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE70u;
            // 0x52be74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52be70) {
            ctx->pc = 0x52BE80u;
            goto label_52be80;
        }
    }
    ctx->pc = 0x52BE78u;
label_52be78:
    // 0x52be78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52be7c:
    // 0x52be7c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_52be80:
    // 0x52be80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52be84:
    // 0x52be84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52be88:
    // 0x52be88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x52be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52be8c:
    // 0x52be8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52be90:
    // 0x52be90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52be90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52be94:
    // 0x52be94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52be98:
    if (ctx->pc == 0x52BE98u) {
        ctx->pc = 0x52BE98u;
            // 0x52be98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52BE9Cu;
        goto label_52be9c;
    }
    ctx->pc = 0x52BE94u;
    {
        const bool branch_taken_0x52be94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52be94) {
            ctx->pc = 0x52BE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52BE94u;
            // 0x52be98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52BEA8u;
            goto label_52bea8;
        }
    }
    ctx->pc = 0x52BE9Cu;
label_52be9c:
    // 0x52be9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52bea0:
    // 0x52bea0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x52bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_52bea4:
    // 0x52bea4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52bea8:
    // 0x52bea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52beac:
    // 0x52beac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52beacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_52beb0:
    // 0x52beb0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52beb4:
    // 0x52beb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52beb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52beb8:
    // 0x52beb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52bebc:
    if (ctx->pc == 0x52BEBCu) {
        ctx->pc = 0x52BEBCu;
            // 0x52bebc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52BEC0u;
        goto label_52bec0;
    }
    ctx->pc = 0x52BEB8u;
    {
        const bool branch_taken_0x52beb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52beb8) {
            ctx->pc = 0x52BEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52BEB8u;
            // 0x52bebc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52BECCu;
            goto label_52becc;
        }
    }
    ctx->pc = 0x52BEC0u;
label_52bec0:
    // 0x52bec0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52bec4:
    // 0x52bec4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x52bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_52bec8:
    // 0x52bec8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52bec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52becc:
    // 0x52becc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52beccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52bed0:
    // 0x52bed0: 0x320f809  jalr        $t9
label_52bed4:
    if (ctx->pc == 0x52BED4u) {
        ctx->pc = 0x52BED4u;
            // 0x52bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BED8u;
        goto label_52bed8;
    }
    ctx->pc = 0x52BED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52BED8u);
        ctx->pc = 0x52BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BED0u;
            // 0x52bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52BED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52BED8u; }
            if (ctx->pc != 0x52BED8u) { return; }
        }
        }
    }
    ctx->pc = 0x52BED8u;
label_52bed8:
    // 0x52bed8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52bedc:
    // 0x52bedc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bee0:
    // 0x52bee0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x52bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_52bee4:
    // 0x52bee4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52bee8:
    // 0x52bee8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52bee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52beec:
    // 0x52beec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52beecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52bef0:
    // 0x52bef0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52bef4:
    if (ctx->pc == 0x52BEF4u) {
        ctx->pc = 0x52BEF4u;
            // 0x52bef4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x52BEF8u;
        goto label_52bef8;
    }
    ctx->pc = 0x52BEF0u;
    {
        const bool branch_taken_0x52bef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52bef0) {
            ctx->pc = 0x52BEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52BEF0u;
            // 0x52bef4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52BF04u;
            goto label_52bf04;
        }
    }
    ctx->pc = 0x52BEF8u;
label_52bef8:
    // 0x52bef8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52befc:
    // 0x52befc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52befcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_52bf00:
    // 0x52bf00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52bf04:
    // 0x52bf04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf08:
    // 0x52bf08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x52bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52bf0c:
    // 0x52bf0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52bf10:
    // 0x52bf10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52bf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52bf14:
    // 0x52bf14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52bf14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52bf18:
    // 0x52bf18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52bf1c:
    if (ctx->pc == 0x52BF1Cu) {
        ctx->pc = 0x52BF20u;
        goto label_52bf20;
    }
    ctx->pc = 0x52BF18u;
    {
        const bool branch_taken_0x52bf18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52bf18) {
            ctx->pc = 0x52BF28u;
            goto label_52bf28;
        }
    }
    ctx->pc = 0x52BF20u;
label_52bf20:
    // 0x52bf20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf24:
    // 0x52bf24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x52bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_52bf28:
    // 0x52bf28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf2c:
    // 0x52bf2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_52bf30:
    // 0x52bf30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52bf30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52bf34:
    // 0x52bf34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52bf38:
    if (ctx->pc == 0x52BF38u) {
        ctx->pc = 0x52BF3Cu;
        goto label_52bf3c;
    }
    ctx->pc = 0x52BF34u;
    {
        const bool branch_taken_0x52bf34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52bf34) {
            ctx->pc = 0x52BF44u;
            goto label_52bf44;
        }
    }
    ctx->pc = 0x52BF3Cu;
label_52bf3c:
    // 0x52bf3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf40:
    // 0x52bf40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x52bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_52bf44:
    // 0x52bf44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf48:
    // 0x52bf48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x52bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52bf4c:
    // 0x52bf4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52bf4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52bf50:
    // 0x52bf50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52bf54:
    if (ctx->pc == 0x52BF54u) {
        ctx->pc = 0x52BF54u;
            // 0x52bf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52BF58u;
        goto label_52bf58;
    }
    ctx->pc = 0x52BF50u;
    {
        const bool branch_taken_0x52bf50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52bf50) {
            ctx->pc = 0x52BF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52BF50u;
            // 0x52bf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52BF64u;
            goto label_52bf64;
        }
    }
    ctx->pc = 0x52BF58u;
label_52bf58:
    // 0x52bf58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52bf5c:
    // 0x52bf5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x52bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_52bf60:
    // 0x52bf60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52bf64:
    // 0x52bf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52bf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52bf68:
    // 0x52bf68: 0x3e00008  jr          $ra
label_52bf6c:
    if (ctx->pc == 0x52BF6Cu) {
        ctx->pc = 0x52BF6Cu;
            // 0x52bf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52BF70u;
        goto label_52bf70;
    }
    ctx->pc = 0x52BF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BF68u;
            // 0x52bf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52BF70u;
label_52bf70:
    // 0x52bf70: 0x814a4cc  j           func_529330
label_52bf74:
    if (ctx->pc == 0x52BF74u) {
        ctx->pc = 0x52BF74u;
            // 0x52bf74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x52BF78u;
        goto label_52bf78;
    }
    ctx->pc = 0x52BF70u;
    ctx->pc = 0x52BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BF70u;
            // 0x52bf74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529330u;
    {
        auto targetFn = runtime->lookupFunction(0x529330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52BF78u;
label_52bf78:
    // 0x52bf78: 0x0  nop
    ctx->pc = 0x52bf78u;
    // NOP
label_52bf7c:
    // 0x52bf7c: 0x0  nop
    ctx->pc = 0x52bf7cu;
    // NOP
label_52bf80:
    // 0x52bf80: 0x814a720  j           func_529C80
label_52bf84:
    if (ctx->pc == 0x52BF84u) {
        ctx->pc = 0x52BF84u;
            // 0x52bf84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52BF88u;
        goto label_52bf88;
    }
    ctx->pc = 0x52BF80u;
    ctx->pc = 0x52BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BF80u;
            // 0x52bf84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529C80u;
    {
        auto targetFn = runtime->lookupFunction(0x529C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52BF88u;
label_52bf88:
    // 0x52bf88: 0x0  nop
    ctx->pc = 0x52bf88u;
    // NOP
label_52bf8c:
    // 0x52bf8c: 0x0  nop
    ctx->pc = 0x52bf8cu;
    // NOP
label_52bf90:
    // 0x52bf90: 0x814a474  j           func_5291D0
label_52bf94:
    if (ctx->pc == 0x52BF94u) {
        ctx->pc = 0x52BF94u;
            // 0x52bf94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52BF98u;
        goto label_52bf98;
    }
    ctx->pc = 0x52BF90u;
    ctx->pc = 0x52BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BF90u;
            // 0x52bf94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5291D0u;
    if (runtime->hasFunction(0x5291D0u)) {
        auto targetFn = runtime->lookupFunction(0x5291D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_005291D0_0x5291d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52BF98u;
label_52bf98:
    // 0x52bf98: 0x0  nop
    ctx->pc = 0x52bf98u;
    // NOP
label_52bf9c:
    // 0x52bf9c: 0x0  nop
    ctx->pc = 0x52bf9cu;
    // NOP
label_52bfa0:
    // 0x52bfa0: 0x814a450  j           func_529140
label_52bfa4:
    if (ctx->pc == 0x52BFA4u) {
        ctx->pc = 0x52BFA4u;
            // 0x52bfa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52BFA8u;
        goto label_52bfa8;
    }
    ctx->pc = 0x52BFA0u;
    ctx->pc = 0x52BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52BFA0u;
            // 0x52bfa4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x529140u;
    {
        auto targetFn = runtime->lookupFunction(0x529140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52BFA8u;
label_52bfa8:
    // 0x52bfa8: 0x0  nop
    ctx->pc = 0x52bfa8u;
    // NOP
label_52bfac:
    // 0x52bfac: 0x0  nop
    ctx->pc = 0x52bfacu;
    // NOP
label_52bfb0:
    // 0x52bfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52bfb4:
    // 0x52bfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52bfb8:
    // 0x52bfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52bfbc:
    // 0x52bfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52bfc0:
    // 0x52bfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52bfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52bfc4:
    // 0x52bfc4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_52bfc8:
    if (ctx->pc == 0x52BFC8u) {
        ctx->pc = 0x52BFC8u;
            // 0x52bfc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52BFCCu;
        goto label_52bfcc;
    }
    ctx->pc = 0x52BFC4u;
    {
        const bool branch_taken_0x52bfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BFC4u;
            // 0x52bfc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bfc4) {
            ctx->pc = 0x52C020u;
            goto label_52c020;
        }
    }
    ctx->pc = 0x52BFCCu;
label_52bfcc:
    // 0x52bfcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52bfd0:
    // 0x52bfd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52bfd4:
    // 0x52bfd4: 0x246368b0  addiu       $v1, $v1, 0x68B0
    ctx->pc = 0x52bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26800));
label_52bfd8:
    // 0x52bfd8: 0x244268e8  addiu       $v0, $v0, 0x68E8
    ctx->pc = 0x52bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26856));
label_52bfdc:
    // 0x52bfdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52bfe0:
    // 0x52bfe0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_52bfe4:
    if (ctx->pc == 0x52BFE4u) {
        ctx->pc = 0x52BFE4u;
            // 0x52bfe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52BFE8u;
        goto label_52bfe8;
    }
    ctx->pc = 0x52BFE0u;
    {
        const bool branch_taken_0x52bfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52BFE0u;
            // 0x52bfe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52bfe0) {
            ctx->pc = 0x52C008u;
            goto label_52c008;
        }
    }
    ctx->pc = 0x52BFE8u;
label_52bfe8:
    // 0x52bfe8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52bfec:
    // 0x52bfec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52bff0:
    // 0x52bff0: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x52bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
label_52bff4:
    // 0x52bff4: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x52bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
label_52bff8:
    // 0x52bff8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52bffc:
    // 0x52bffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52bffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c000:
    // 0x52c000: 0xc14b010  jal         func_52C040
label_52c004:
    if (ctx->pc == 0x52C004u) {
        ctx->pc = 0x52C004u;
            // 0x52c004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52C008u;
        goto label_52c008;
    }
    ctx->pc = 0x52C000u;
    SET_GPR_U32(ctx, 31, 0x52C008u);
    ctx->pc = 0x52C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C000u;
            // 0x52c004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C040u;
    if (runtime->hasFunction(0x52C040u)) {
        auto targetFn = runtime->lookupFunction(0x52C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C008u; }
        if (ctx->pc != 0x52C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052C040_0x52c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C008u; }
        if (ctx->pc != 0x52C008u) { return; }
    }
    ctx->pc = 0x52C008u;
label_52c008:
    // 0x52c008: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52c00c:
    // 0x52c00c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c00cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52c010:
    // 0x52c010: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52c014:
    if (ctx->pc == 0x52C014u) {
        ctx->pc = 0x52C014u;
            // 0x52c014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C018u;
        goto label_52c018;
    }
    ctx->pc = 0x52C010u;
    {
        const bool branch_taken_0x52c010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c010) {
            ctx->pc = 0x52C014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C010u;
            // 0x52c014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C024u;
            goto label_52c024;
        }
    }
    ctx->pc = 0x52C018u;
label_52c018:
    // 0x52c018: 0xc0400a8  jal         func_1002A0
label_52c01c:
    if (ctx->pc == 0x52C01Cu) {
        ctx->pc = 0x52C01Cu;
            // 0x52c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C020u;
        goto label_52c020;
    }
    ctx->pc = 0x52C018u;
    SET_GPR_U32(ctx, 31, 0x52C020u);
    ctx->pc = 0x52C01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C018u;
            // 0x52c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C020u; }
        if (ctx->pc != 0x52C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C020u; }
        if (ctx->pc != 0x52C020u) { return; }
    }
    ctx->pc = 0x52C020u;
label_52c020:
    // 0x52c020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52c020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52c024:
    // 0x52c024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52c028:
    // 0x52c028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c02c:
    // 0x52c02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c030:
    // 0x52c030: 0x3e00008  jr          $ra
label_52c034:
    if (ctx->pc == 0x52C034u) {
        ctx->pc = 0x52C034u;
            // 0x52c034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52C038u;
        goto label_52c038;
    }
    ctx->pc = 0x52C030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C030u;
            // 0x52c034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C038u;
label_52c038:
    // 0x52c038: 0x0  nop
    ctx->pc = 0x52c038u;
    // NOP
label_52c03c:
    // 0x52c03c: 0x0  nop
    ctx->pc = 0x52c03cu;
    // NOP
}
