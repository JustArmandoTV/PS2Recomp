#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032AB00
// Address: 0x32ab00 - 0x32b210
void sub_0032AB00_0x32ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AB00_0x32ab00");
#endif

    switch (ctx->pc) {
        case 0x32ab00u: goto label_32ab00;
        case 0x32ab04u: goto label_32ab04;
        case 0x32ab08u: goto label_32ab08;
        case 0x32ab0cu: goto label_32ab0c;
        case 0x32ab10u: goto label_32ab10;
        case 0x32ab14u: goto label_32ab14;
        case 0x32ab18u: goto label_32ab18;
        case 0x32ab1cu: goto label_32ab1c;
        case 0x32ab20u: goto label_32ab20;
        case 0x32ab24u: goto label_32ab24;
        case 0x32ab28u: goto label_32ab28;
        case 0x32ab2cu: goto label_32ab2c;
        case 0x32ab30u: goto label_32ab30;
        case 0x32ab34u: goto label_32ab34;
        case 0x32ab38u: goto label_32ab38;
        case 0x32ab3cu: goto label_32ab3c;
        case 0x32ab40u: goto label_32ab40;
        case 0x32ab44u: goto label_32ab44;
        case 0x32ab48u: goto label_32ab48;
        case 0x32ab4cu: goto label_32ab4c;
        case 0x32ab50u: goto label_32ab50;
        case 0x32ab54u: goto label_32ab54;
        case 0x32ab58u: goto label_32ab58;
        case 0x32ab5cu: goto label_32ab5c;
        case 0x32ab60u: goto label_32ab60;
        case 0x32ab64u: goto label_32ab64;
        case 0x32ab68u: goto label_32ab68;
        case 0x32ab6cu: goto label_32ab6c;
        case 0x32ab70u: goto label_32ab70;
        case 0x32ab74u: goto label_32ab74;
        case 0x32ab78u: goto label_32ab78;
        case 0x32ab7cu: goto label_32ab7c;
        case 0x32ab80u: goto label_32ab80;
        case 0x32ab84u: goto label_32ab84;
        case 0x32ab88u: goto label_32ab88;
        case 0x32ab8cu: goto label_32ab8c;
        case 0x32ab90u: goto label_32ab90;
        case 0x32ab94u: goto label_32ab94;
        case 0x32ab98u: goto label_32ab98;
        case 0x32ab9cu: goto label_32ab9c;
        case 0x32aba0u: goto label_32aba0;
        case 0x32aba4u: goto label_32aba4;
        case 0x32aba8u: goto label_32aba8;
        case 0x32abacu: goto label_32abac;
        case 0x32abb0u: goto label_32abb0;
        case 0x32abb4u: goto label_32abb4;
        case 0x32abb8u: goto label_32abb8;
        case 0x32abbcu: goto label_32abbc;
        case 0x32abc0u: goto label_32abc0;
        case 0x32abc4u: goto label_32abc4;
        case 0x32abc8u: goto label_32abc8;
        case 0x32abccu: goto label_32abcc;
        case 0x32abd0u: goto label_32abd0;
        case 0x32abd4u: goto label_32abd4;
        case 0x32abd8u: goto label_32abd8;
        case 0x32abdcu: goto label_32abdc;
        case 0x32abe0u: goto label_32abe0;
        case 0x32abe4u: goto label_32abe4;
        case 0x32abe8u: goto label_32abe8;
        case 0x32abecu: goto label_32abec;
        case 0x32abf0u: goto label_32abf0;
        case 0x32abf4u: goto label_32abf4;
        case 0x32abf8u: goto label_32abf8;
        case 0x32abfcu: goto label_32abfc;
        case 0x32ac00u: goto label_32ac00;
        case 0x32ac04u: goto label_32ac04;
        case 0x32ac08u: goto label_32ac08;
        case 0x32ac0cu: goto label_32ac0c;
        case 0x32ac10u: goto label_32ac10;
        case 0x32ac14u: goto label_32ac14;
        case 0x32ac18u: goto label_32ac18;
        case 0x32ac1cu: goto label_32ac1c;
        case 0x32ac20u: goto label_32ac20;
        case 0x32ac24u: goto label_32ac24;
        case 0x32ac28u: goto label_32ac28;
        case 0x32ac2cu: goto label_32ac2c;
        case 0x32ac30u: goto label_32ac30;
        case 0x32ac34u: goto label_32ac34;
        case 0x32ac38u: goto label_32ac38;
        case 0x32ac3cu: goto label_32ac3c;
        case 0x32ac40u: goto label_32ac40;
        case 0x32ac44u: goto label_32ac44;
        case 0x32ac48u: goto label_32ac48;
        case 0x32ac4cu: goto label_32ac4c;
        case 0x32ac50u: goto label_32ac50;
        case 0x32ac54u: goto label_32ac54;
        case 0x32ac58u: goto label_32ac58;
        case 0x32ac5cu: goto label_32ac5c;
        case 0x32ac60u: goto label_32ac60;
        case 0x32ac64u: goto label_32ac64;
        case 0x32ac68u: goto label_32ac68;
        case 0x32ac6cu: goto label_32ac6c;
        case 0x32ac70u: goto label_32ac70;
        case 0x32ac74u: goto label_32ac74;
        case 0x32ac78u: goto label_32ac78;
        case 0x32ac7cu: goto label_32ac7c;
        case 0x32ac80u: goto label_32ac80;
        case 0x32ac84u: goto label_32ac84;
        case 0x32ac88u: goto label_32ac88;
        case 0x32ac8cu: goto label_32ac8c;
        case 0x32ac90u: goto label_32ac90;
        case 0x32ac94u: goto label_32ac94;
        case 0x32ac98u: goto label_32ac98;
        case 0x32ac9cu: goto label_32ac9c;
        case 0x32aca0u: goto label_32aca0;
        case 0x32aca4u: goto label_32aca4;
        case 0x32aca8u: goto label_32aca8;
        case 0x32acacu: goto label_32acac;
        case 0x32acb0u: goto label_32acb0;
        case 0x32acb4u: goto label_32acb4;
        case 0x32acb8u: goto label_32acb8;
        case 0x32acbcu: goto label_32acbc;
        case 0x32acc0u: goto label_32acc0;
        case 0x32acc4u: goto label_32acc4;
        case 0x32acc8u: goto label_32acc8;
        case 0x32acccu: goto label_32accc;
        case 0x32acd0u: goto label_32acd0;
        case 0x32acd4u: goto label_32acd4;
        case 0x32acd8u: goto label_32acd8;
        case 0x32acdcu: goto label_32acdc;
        case 0x32ace0u: goto label_32ace0;
        case 0x32ace4u: goto label_32ace4;
        case 0x32ace8u: goto label_32ace8;
        case 0x32acecu: goto label_32acec;
        case 0x32acf0u: goto label_32acf0;
        case 0x32acf4u: goto label_32acf4;
        case 0x32acf8u: goto label_32acf8;
        case 0x32acfcu: goto label_32acfc;
        case 0x32ad00u: goto label_32ad00;
        case 0x32ad04u: goto label_32ad04;
        case 0x32ad08u: goto label_32ad08;
        case 0x32ad0cu: goto label_32ad0c;
        case 0x32ad10u: goto label_32ad10;
        case 0x32ad14u: goto label_32ad14;
        case 0x32ad18u: goto label_32ad18;
        case 0x32ad1cu: goto label_32ad1c;
        case 0x32ad20u: goto label_32ad20;
        case 0x32ad24u: goto label_32ad24;
        case 0x32ad28u: goto label_32ad28;
        case 0x32ad2cu: goto label_32ad2c;
        case 0x32ad30u: goto label_32ad30;
        case 0x32ad34u: goto label_32ad34;
        case 0x32ad38u: goto label_32ad38;
        case 0x32ad3cu: goto label_32ad3c;
        case 0x32ad40u: goto label_32ad40;
        case 0x32ad44u: goto label_32ad44;
        case 0x32ad48u: goto label_32ad48;
        case 0x32ad4cu: goto label_32ad4c;
        case 0x32ad50u: goto label_32ad50;
        case 0x32ad54u: goto label_32ad54;
        case 0x32ad58u: goto label_32ad58;
        case 0x32ad5cu: goto label_32ad5c;
        case 0x32ad60u: goto label_32ad60;
        case 0x32ad64u: goto label_32ad64;
        case 0x32ad68u: goto label_32ad68;
        case 0x32ad6cu: goto label_32ad6c;
        case 0x32ad70u: goto label_32ad70;
        case 0x32ad74u: goto label_32ad74;
        case 0x32ad78u: goto label_32ad78;
        case 0x32ad7cu: goto label_32ad7c;
        case 0x32ad80u: goto label_32ad80;
        case 0x32ad84u: goto label_32ad84;
        case 0x32ad88u: goto label_32ad88;
        case 0x32ad8cu: goto label_32ad8c;
        case 0x32ad90u: goto label_32ad90;
        case 0x32ad94u: goto label_32ad94;
        case 0x32ad98u: goto label_32ad98;
        case 0x32ad9cu: goto label_32ad9c;
        case 0x32ada0u: goto label_32ada0;
        case 0x32ada4u: goto label_32ada4;
        case 0x32ada8u: goto label_32ada8;
        case 0x32adacu: goto label_32adac;
        case 0x32adb0u: goto label_32adb0;
        case 0x32adb4u: goto label_32adb4;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adbcu: goto label_32adbc;
        case 0x32adc0u: goto label_32adc0;
        case 0x32adc4u: goto label_32adc4;
        case 0x32adc8u: goto label_32adc8;
        case 0x32adccu: goto label_32adcc;
        case 0x32add0u: goto label_32add0;
        case 0x32add4u: goto label_32add4;
        case 0x32add8u: goto label_32add8;
        case 0x32addcu: goto label_32addc;
        case 0x32ade0u: goto label_32ade0;
        case 0x32ade4u: goto label_32ade4;
        case 0x32ade8u: goto label_32ade8;
        case 0x32adecu: goto label_32adec;
        case 0x32adf0u: goto label_32adf0;
        case 0x32adf4u: goto label_32adf4;
        case 0x32adf8u: goto label_32adf8;
        case 0x32adfcu: goto label_32adfc;
        case 0x32ae00u: goto label_32ae00;
        case 0x32ae04u: goto label_32ae04;
        case 0x32ae08u: goto label_32ae08;
        case 0x32ae0cu: goto label_32ae0c;
        case 0x32ae10u: goto label_32ae10;
        case 0x32ae14u: goto label_32ae14;
        case 0x32ae18u: goto label_32ae18;
        case 0x32ae1cu: goto label_32ae1c;
        case 0x32ae20u: goto label_32ae20;
        case 0x32ae24u: goto label_32ae24;
        case 0x32ae28u: goto label_32ae28;
        case 0x32ae2cu: goto label_32ae2c;
        case 0x32ae30u: goto label_32ae30;
        case 0x32ae34u: goto label_32ae34;
        case 0x32ae38u: goto label_32ae38;
        case 0x32ae3cu: goto label_32ae3c;
        case 0x32ae40u: goto label_32ae40;
        case 0x32ae44u: goto label_32ae44;
        case 0x32ae48u: goto label_32ae48;
        case 0x32ae4cu: goto label_32ae4c;
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        case 0x32af38u: goto label_32af38;
        case 0x32af3cu: goto label_32af3c;
        case 0x32af40u: goto label_32af40;
        case 0x32af44u: goto label_32af44;
        case 0x32af48u: goto label_32af48;
        case 0x32af4cu: goto label_32af4c;
        case 0x32af50u: goto label_32af50;
        case 0x32af54u: goto label_32af54;
        case 0x32af58u: goto label_32af58;
        case 0x32af5cu: goto label_32af5c;
        case 0x32af60u: goto label_32af60;
        case 0x32af64u: goto label_32af64;
        case 0x32af68u: goto label_32af68;
        case 0x32af6cu: goto label_32af6c;
        case 0x32af70u: goto label_32af70;
        case 0x32af74u: goto label_32af74;
        case 0x32af78u: goto label_32af78;
        case 0x32af7cu: goto label_32af7c;
        case 0x32af80u: goto label_32af80;
        case 0x32af84u: goto label_32af84;
        case 0x32af88u: goto label_32af88;
        case 0x32af8cu: goto label_32af8c;
        case 0x32af90u: goto label_32af90;
        case 0x32af94u: goto label_32af94;
        case 0x32af98u: goto label_32af98;
        case 0x32af9cu: goto label_32af9c;
        case 0x32afa0u: goto label_32afa0;
        case 0x32afa4u: goto label_32afa4;
        case 0x32afa8u: goto label_32afa8;
        case 0x32afacu: goto label_32afac;
        case 0x32afb0u: goto label_32afb0;
        case 0x32afb4u: goto label_32afb4;
        case 0x32afb8u: goto label_32afb8;
        case 0x32afbcu: goto label_32afbc;
        case 0x32afc0u: goto label_32afc0;
        case 0x32afc4u: goto label_32afc4;
        case 0x32afc8u: goto label_32afc8;
        case 0x32afccu: goto label_32afcc;
        case 0x32afd0u: goto label_32afd0;
        case 0x32afd4u: goto label_32afd4;
        case 0x32afd8u: goto label_32afd8;
        case 0x32afdcu: goto label_32afdc;
        case 0x32afe0u: goto label_32afe0;
        case 0x32afe4u: goto label_32afe4;
        case 0x32afe8u: goto label_32afe8;
        case 0x32afecu: goto label_32afec;
        case 0x32aff0u: goto label_32aff0;
        case 0x32aff4u: goto label_32aff4;
        case 0x32aff8u: goto label_32aff8;
        case 0x32affcu: goto label_32affc;
        case 0x32b000u: goto label_32b000;
        case 0x32b004u: goto label_32b004;
        case 0x32b008u: goto label_32b008;
        case 0x32b00cu: goto label_32b00c;
        case 0x32b010u: goto label_32b010;
        case 0x32b014u: goto label_32b014;
        case 0x32b018u: goto label_32b018;
        case 0x32b01cu: goto label_32b01c;
        case 0x32b020u: goto label_32b020;
        case 0x32b024u: goto label_32b024;
        case 0x32b028u: goto label_32b028;
        case 0x32b02cu: goto label_32b02c;
        case 0x32b030u: goto label_32b030;
        case 0x32b034u: goto label_32b034;
        case 0x32b038u: goto label_32b038;
        case 0x32b03cu: goto label_32b03c;
        case 0x32b040u: goto label_32b040;
        case 0x32b044u: goto label_32b044;
        case 0x32b048u: goto label_32b048;
        case 0x32b04cu: goto label_32b04c;
        case 0x32b050u: goto label_32b050;
        case 0x32b054u: goto label_32b054;
        case 0x32b058u: goto label_32b058;
        case 0x32b05cu: goto label_32b05c;
        case 0x32b060u: goto label_32b060;
        case 0x32b064u: goto label_32b064;
        case 0x32b068u: goto label_32b068;
        case 0x32b06cu: goto label_32b06c;
        case 0x32b070u: goto label_32b070;
        case 0x32b074u: goto label_32b074;
        case 0x32b078u: goto label_32b078;
        case 0x32b07cu: goto label_32b07c;
        case 0x32b080u: goto label_32b080;
        case 0x32b084u: goto label_32b084;
        case 0x32b088u: goto label_32b088;
        case 0x32b08cu: goto label_32b08c;
        case 0x32b090u: goto label_32b090;
        case 0x32b094u: goto label_32b094;
        case 0x32b098u: goto label_32b098;
        case 0x32b09cu: goto label_32b09c;
        case 0x32b0a0u: goto label_32b0a0;
        case 0x32b0a4u: goto label_32b0a4;
        case 0x32b0a8u: goto label_32b0a8;
        case 0x32b0acu: goto label_32b0ac;
        case 0x32b0b0u: goto label_32b0b0;
        case 0x32b0b4u: goto label_32b0b4;
        case 0x32b0b8u: goto label_32b0b8;
        case 0x32b0bcu: goto label_32b0bc;
        case 0x32b0c0u: goto label_32b0c0;
        case 0x32b0c4u: goto label_32b0c4;
        case 0x32b0c8u: goto label_32b0c8;
        case 0x32b0ccu: goto label_32b0cc;
        case 0x32b0d0u: goto label_32b0d0;
        case 0x32b0d4u: goto label_32b0d4;
        case 0x32b0d8u: goto label_32b0d8;
        case 0x32b0dcu: goto label_32b0dc;
        case 0x32b0e0u: goto label_32b0e0;
        case 0x32b0e4u: goto label_32b0e4;
        case 0x32b0e8u: goto label_32b0e8;
        case 0x32b0ecu: goto label_32b0ec;
        case 0x32b0f0u: goto label_32b0f0;
        case 0x32b0f4u: goto label_32b0f4;
        case 0x32b0f8u: goto label_32b0f8;
        case 0x32b0fcu: goto label_32b0fc;
        case 0x32b100u: goto label_32b100;
        case 0x32b104u: goto label_32b104;
        case 0x32b108u: goto label_32b108;
        case 0x32b10cu: goto label_32b10c;
        case 0x32b110u: goto label_32b110;
        case 0x32b114u: goto label_32b114;
        case 0x32b118u: goto label_32b118;
        case 0x32b11cu: goto label_32b11c;
        case 0x32b120u: goto label_32b120;
        case 0x32b124u: goto label_32b124;
        case 0x32b128u: goto label_32b128;
        case 0x32b12cu: goto label_32b12c;
        case 0x32b130u: goto label_32b130;
        case 0x32b134u: goto label_32b134;
        case 0x32b138u: goto label_32b138;
        case 0x32b13cu: goto label_32b13c;
        case 0x32b140u: goto label_32b140;
        case 0x32b144u: goto label_32b144;
        case 0x32b148u: goto label_32b148;
        case 0x32b14cu: goto label_32b14c;
        case 0x32b150u: goto label_32b150;
        case 0x32b154u: goto label_32b154;
        case 0x32b158u: goto label_32b158;
        case 0x32b15cu: goto label_32b15c;
        case 0x32b160u: goto label_32b160;
        case 0x32b164u: goto label_32b164;
        case 0x32b168u: goto label_32b168;
        case 0x32b16cu: goto label_32b16c;
        case 0x32b170u: goto label_32b170;
        case 0x32b174u: goto label_32b174;
        case 0x32b178u: goto label_32b178;
        case 0x32b17cu: goto label_32b17c;
        case 0x32b180u: goto label_32b180;
        case 0x32b184u: goto label_32b184;
        case 0x32b188u: goto label_32b188;
        case 0x32b18cu: goto label_32b18c;
        case 0x32b190u: goto label_32b190;
        case 0x32b194u: goto label_32b194;
        case 0x32b198u: goto label_32b198;
        case 0x32b19cu: goto label_32b19c;
        case 0x32b1a0u: goto label_32b1a0;
        case 0x32b1a4u: goto label_32b1a4;
        case 0x32b1a8u: goto label_32b1a8;
        case 0x32b1acu: goto label_32b1ac;
        case 0x32b1b0u: goto label_32b1b0;
        case 0x32b1b4u: goto label_32b1b4;
        case 0x32b1b8u: goto label_32b1b8;
        case 0x32b1bcu: goto label_32b1bc;
        case 0x32b1c0u: goto label_32b1c0;
        case 0x32b1c4u: goto label_32b1c4;
        case 0x32b1c8u: goto label_32b1c8;
        case 0x32b1ccu: goto label_32b1cc;
        case 0x32b1d0u: goto label_32b1d0;
        case 0x32b1d4u: goto label_32b1d4;
        case 0x32b1d8u: goto label_32b1d8;
        case 0x32b1dcu: goto label_32b1dc;
        case 0x32b1e0u: goto label_32b1e0;
        case 0x32b1e4u: goto label_32b1e4;
        case 0x32b1e8u: goto label_32b1e8;
        case 0x32b1ecu: goto label_32b1ec;
        case 0x32b1f0u: goto label_32b1f0;
        case 0x32b1f4u: goto label_32b1f4;
        case 0x32b1f8u: goto label_32b1f8;
        case 0x32b1fcu: goto label_32b1fc;
        case 0x32b200u: goto label_32b200;
        case 0x32b204u: goto label_32b204;
        case 0x32b208u: goto label_32b208;
        case 0x32b20cu: goto label_32b20c;
        default: break;
    }

    ctx->pc = 0x32ab00u;

label_32ab00:
    // 0x32ab00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_32ab04:
    // 0x32ab04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x32ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_32ab08:
    // 0x32ab08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x32ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_32ab0c:
    // 0x32ab0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x32ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_32ab10:
    // 0x32ab10: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x32ab10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32ab14:
    // 0x32ab14: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x32ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_32ab18:
    // 0x32ab18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x32ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_32ab1c:
    // 0x32ab1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_32ab20:
    // 0x32ab20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32ab20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ab24:
    // 0x32ab24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_32ab28:
    // 0x32ab28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32ab2c:
    // 0x32ab2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32ab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32ab30:
    // 0x32ab30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32ab30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32ab34:
    // 0x32ab34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32ab38:
    // 0x32ab38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x32ab38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32ab3c:
    // 0x32ab3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_32ab40:
    // 0x32ab40: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x32ab40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32ab44:
    // 0x32ab44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x32ab44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_32ab48:
    // 0x32ab48: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x32ab48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_32ab4c:
    // 0x32ab4c: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x32ab4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_32ab50:
    // 0x32ab50: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
label_32ab54:
    if (ctx->pc == 0x32AB54u) {
        ctx->pc = 0x32AB54u;
            // 0x32ab54: 0x26b6006c  addiu       $s6, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x32AB58u;
        goto label_32ab58;
    }
    ctx->pc = 0x32AB50u;
    {
        const bool branch_taken_0x32ab50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AB50u;
            // 0x32ab54: 0x26b6006c  addiu       $s6, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab50) {
            ctx->pc = 0x32AE08u;
            goto label_32ae08;
        }
    }
    ctx->pc = 0x32AB58u;
label_32ab58:
    // 0x32ab58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ab5c:
    // 0x32ab5c: 0xc04f278  jal         func_13C9E0
label_32ab60:
    if (ctx->pc == 0x32AB60u) {
        ctx->pc = 0x32AB60u;
            // 0x32ab60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x32AB64u;
        goto label_32ab64;
    }
    ctx->pc = 0x32AB5Cu;
    SET_GPR_U32(ctx, 31, 0x32AB64u);
    ctx->pc = 0x32AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AB5Cu;
            // 0x32ab60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB64u; }
        if (ctx->pc != 0x32AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB64u; }
        if (ctx->pc != 0x32AB64u) { return; }
    }
    ctx->pc = 0x32AB64u;
label_32ab64:
    // 0x32ab64: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x32ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32ab68:
    // 0x32ab68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ab6c:
    // 0x32ab6c: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x32ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_32ab70:
    // 0x32ab70: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x32ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_32ab74:
    // 0x32ab74: 0xc04ce50  jal         func_133940
label_32ab78:
    if (ctx->pc == 0x32AB78u) {
        ctx->pc = 0x32AB78u;
            // 0x32ab78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AB7Cu;
        goto label_32ab7c;
    }
    ctx->pc = 0x32AB74u;
    SET_GPR_U32(ctx, 31, 0x32AB7Cu);
    ctx->pc = 0x32AB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AB74u;
            // 0x32ab78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB7Cu; }
        if (ctx->pc != 0x32AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB7Cu; }
        if (ctx->pc != 0x32AB7Cu) { return; }
    }
    ctx->pc = 0x32AB7Cu;
label_32ab7c:
    // 0x32ab7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32ab80:
    // 0x32ab80: 0xc04ce80  jal         func_133A00
label_32ab84:
    if (ctx->pc == 0x32AB84u) {
        ctx->pc = 0x32AB84u;
            // 0x32ab84: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x32AB88u;
        goto label_32ab88;
    }
    ctx->pc = 0x32AB80u;
    SET_GPR_U32(ctx, 31, 0x32AB88u);
    ctx->pc = 0x32AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AB80u;
            // 0x32ab84: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB88u; }
        if (ctx->pc != 0x32AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AB88u; }
        if (ctx->pc != 0x32AB88u) { return; }
    }
    ctx->pc = 0x32AB88u;
label_32ab88:
    // 0x32ab88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32ab8c:
    // 0x32ab8c: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x32ab8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_32ab90:
    // 0x32ab90: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x32ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32ab94:
    // 0x32ab94: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x32ab94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32ab98:
    // 0x32ab98: 0xc07698c  jal         func_1DA630
label_32ab9c:
    if (ctx->pc == 0x32AB9Cu) {
        ctx->pc = 0x32AB9Cu;
            // 0x32ab9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ABA0u;
        goto label_32aba0;
    }
    ctx->pc = 0x32AB98u;
    SET_GPR_U32(ctx, 31, 0x32ABA0u);
    ctx->pc = 0x32AB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AB98u;
            // 0x32ab9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABA0u; }
        if (ctx->pc != 0x32ABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABA0u; }
        if (ctx->pc != 0x32ABA0u) { return; }
    }
    ctx->pc = 0x32ABA0u;
label_32aba0:
    // 0x32aba0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32aba4:
    // 0x32aba4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32aba8:
    if (ctx->pc == 0x32ABA8u) {
        ctx->pc = 0x32ABACu;
        goto label_32abac;
    }
    ctx->pc = 0x32ABA4u;
    {
        const bool branch_taken_0x32aba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32aba4) {
            ctx->pc = 0x32ABB4u;
            goto label_32abb4;
        }
    }
    ctx->pc = 0x32ABACu;
label_32abac:
    // 0x32abac: 0x10000033  b           . + 4 + (0x33 << 2)
label_32abb0:
    if (ctx->pc == 0x32ABB0u) {
        ctx->pc = 0x32ABB0u;
            // 0x32abb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32ABB4u;
        goto label_32abb4;
    }
    ctx->pc = 0x32ABACu;
    {
        const bool branch_taken_0x32abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32ABACu;
            // 0x32abb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abac) {
            ctx->pc = 0x32AC7Cu;
            goto label_32ac7c;
        }
    }
    ctx->pc = 0x32ABB4u;
label_32abb4:
    // 0x32abb4: 0xc0576f4  jal         func_15DBD0
label_32abb8:
    if (ctx->pc == 0x32ABB8u) {
        ctx->pc = 0x32ABBCu;
        goto label_32abbc;
    }
    ctx->pc = 0x32ABB4u;
    SET_GPR_U32(ctx, 31, 0x32ABBCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABBCu; }
        if (ctx->pc != 0x32ABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABBCu; }
        if (ctx->pc != 0x32ABBCu) { return; }
    }
    ctx->pc = 0x32ABBCu;
label_32abbc:
    // 0x32abbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32abbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32abc0:
    // 0x32abc0: 0xc076984  jal         func_1DA610
label_32abc4:
    if (ctx->pc == 0x32ABC4u) {
        ctx->pc = 0x32ABC4u;
            // 0x32abc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ABC8u;
        goto label_32abc8;
    }
    ctx->pc = 0x32ABC0u;
    SET_GPR_U32(ctx, 31, 0x32ABC8u);
    ctx->pc = 0x32ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ABC0u;
            // 0x32abc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABC8u; }
        if (ctx->pc != 0x32ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ABC8u; }
        if (ctx->pc != 0x32ABC8u) { return; }
    }
    ctx->pc = 0x32ABC8u;
label_32abc8:
    // 0x32abc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32abc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32abcc:
    // 0x32abcc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x32abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_32abd0:
    // 0x32abd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32abd4:
    // 0x32abd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32abd8:
    // 0x32abd8: 0xc442fa50  lwc1        $f2, -0x5B0($v0)
    ctx->pc = 0x32abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32abdc:
    // 0x32abdc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32abdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32abe0:
    // 0x32abe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32abe4:
    // 0x32abe4: 0xc441fa58  lwc1        $f1, -0x5A8($v0)
    ctx->pc = 0x32abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32abe8:
    // 0x32abe8: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x32abe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_32abec:
    // 0x32abec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32abf0:
    // 0x32abf0: 0xc440fa5c  lwc1        $f0, -0x5A4($v0)
    ctx->pc = 0x32abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32abf4:
    // 0x32abf4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x32abf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_32abf8:
    // 0x32abf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32abfc:
    // 0x32abfc: 0x8c42fa54  lw          $v0, -0x5AC($v0)
    ctx->pc = 0x32abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965844)));
label_32ac00:
    // 0x32ac00: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x32ac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_32ac04:
    // 0x32ac04: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x32ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_32ac08:
    // 0x32ac08: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x32ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ac0c:
    // 0x32ac0c: 0xc04cca0  jal         func_133280
label_32ac10:
    if (ctx->pc == 0x32AC10u) {
        ctx->pc = 0x32AC10u;
            // 0x32ac10: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x32AC14u;
        goto label_32ac14;
    }
    ctx->pc = 0x32AC0Cu;
    SET_GPR_U32(ctx, 31, 0x32AC14u);
    ctx->pc = 0x32AC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC0Cu;
            // 0x32ac10: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC14u; }
        if (ctx->pc != 0x32AC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC14u; }
        if (ctx->pc != 0x32AC14u) { return; }
    }
    ctx->pc = 0x32AC14u;
label_32ac14:
    // 0x32ac14: 0xc076980  jal         func_1DA600
label_32ac18:
    if (ctx->pc == 0x32AC18u) {
        ctx->pc = 0x32AC18u;
            // 0x32ac18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AC1Cu;
        goto label_32ac1c;
    }
    ctx->pc = 0x32AC14u;
    SET_GPR_U32(ctx, 31, 0x32AC1Cu);
    ctx->pc = 0x32AC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC14u;
            // 0x32ac18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC1Cu; }
        if (ctx->pc != 0x32AC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC1Cu; }
        if (ctx->pc != 0x32AC1Cu) { return; }
    }
    ctx->pc = 0x32AC1Cu;
label_32ac1c:
    // 0x32ac1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x32ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_32ac20:
    // 0x32ac20: 0xc04cc34  jal         func_1330D0
label_32ac24:
    if (ctx->pc == 0x32AC24u) {
        ctx->pc = 0x32AC24u;
            // 0x32ac24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AC28u;
        goto label_32ac28;
    }
    ctx->pc = 0x32AC20u;
    SET_GPR_U32(ctx, 31, 0x32AC28u);
    ctx->pc = 0x32AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC20u;
            // 0x32ac24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC28u; }
        if (ctx->pc != 0x32AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC28u; }
        if (ctx->pc != 0x32AC28u) { return; }
    }
    ctx->pc = 0x32AC28u;
label_32ac28:
    // 0x32ac28: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32ac2c:
    // 0x32ac2c: 0xc461d150  lwc1        $f1, -0x2EB0($v1)
    ctx->pc = 0x32ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32ac30:
    // 0x32ac30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32ac30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32ac34:
    // 0x32ac34: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_32ac38:
    if (ctx->pc == 0x32AC38u) {
        ctx->pc = 0x32AC38u;
            // 0x32ac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AC3Cu;
        goto label_32ac3c;
    }
    ctx->pc = 0x32AC34u;
    {
        const bool branch_taken_0x32ac34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ac34) {
            ctx->pc = 0x32AC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC34u;
            // 0x32ac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32AC44u;
            goto label_32ac44;
        }
    }
    ctx->pc = 0x32AC3Cu;
label_32ac3c:
    // 0x32ac3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_32ac40:
    if (ctx->pc == 0x32AC40u) {
        ctx->pc = 0x32AC40u;
            // 0x32ac40: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32AC44u;
        goto label_32ac44;
    }
    ctx->pc = 0x32AC3Cu;
    {
        const bool branch_taken_0x32ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC3Cu;
            // 0x32ac40: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac3c) {
            ctx->pc = 0x32AC7Cu;
            goto label_32ac7c;
        }
    }
    ctx->pc = 0x32AC44u;
label_32ac44:
    // 0x32ac44: 0xc07697c  jal         func_1DA5F0
label_32ac48:
    if (ctx->pc == 0x32AC48u) {
        ctx->pc = 0x32AC4Cu;
        goto label_32ac4c;
    }
    ctx->pc = 0x32AC44u;
    SET_GPR_U32(ctx, 31, 0x32AC4Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC4Cu; }
        if (ctx->pc != 0x32AC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC4Cu; }
        if (ctx->pc != 0x32AC4Cu) { return; }
    }
    ctx->pc = 0x32AC4Cu;
label_32ac4c:
    // 0x32ac4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ac50:
    // 0x32ac50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_32ac54:
    // 0x32ac54: 0xc04cd60  jal         func_133580
label_32ac58:
    if (ctx->pc == 0x32AC58u) {
        ctx->pc = 0x32AC58u;
            // 0x32ac58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AC5Cu;
        goto label_32ac5c;
    }
    ctx->pc = 0x32AC54u;
    SET_GPR_U32(ctx, 31, 0x32AC5Cu);
    ctx->pc = 0x32AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC54u;
            // 0x32ac58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC5Cu; }
        if (ctx->pc != 0x32AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC5Cu; }
        if (ctx->pc != 0x32AC5Cu) { return; }
    }
    ctx->pc = 0x32AC5Cu;
label_32ac5c:
    // 0x32ac5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x32ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32ac60:
    // 0x32ac60: 0xc04c650  jal         func_131940
label_32ac64:
    if (ctx->pc == 0x32AC64u) {
        ctx->pc = 0x32AC64u;
            // 0x32ac64: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x32AC68u;
        goto label_32ac68;
    }
    ctx->pc = 0x32AC60u;
    SET_GPR_U32(ctx, 31, 0x32AC68u);
    ctx->pc = 0x32AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC60u;
            // 0x32ac64: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC68u; }
        if (ctx->pc != 0x32AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AC68u; }
        if (ctx->pc != 0x32AC68u) { return; }
    }
    ctx->pc = 0x32AC68u;
label_32ac68:
    // 0x32ac68: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x32ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_32ac6c:
    // 0x32ac6c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x32ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32ac70:
    // 0x32ac70: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_32ac74:
    // 0x32ac74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_32ac78:
    // 0x32ac78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ac7c:
    // 0x32ac7c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x32ac7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_32ac80:
    // 0x32ac80: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_32ac84:
    if (ctx->pc == 0x32AC84u) {
        ctx->pc = 0x32AC84u;
            // 0x32ac84: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x32AC88u;
        goto label_32ac88;
    }
    ctx->pc = 0x32AC80u;
    {
        const bool branch_taken_0x32ac80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC80u;
            // 0x32ac84: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac80) {
            ctx->pc = 0x32AE08u;
            goto label_32ae08;
        }
    }
    ctx->pc = 0x32AC88u;
label_32ac88:
    // 0x32ac88: 0x8ec30018  lw          $v1, 0x18($s6)
    ctx->pc = 0x32ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_32ac8c:
    // 0x32ac8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ac90:
    // 0x32ac90: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_32ac94:
    if (ctx->pc == 0x32AC94u) {
        ctx->pc = 0x32AC94u;
            // 0x32ac94: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x32AC98u;
        goto label_32ac98;
    }
    ctx->pc = 0x32AC90u;
    {
        const bool branch_taken_0x32ac90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32AC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AC90u;
            // 0x32ac94: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac90) {
            ctx->pc = 0x32AD3Cu;
            goto label_32ad3c;
        }
    }
    ctx->pc = 0x32AC98u;
label_32ac98:
    // 0x32ac98: 0xc6d40008  lwc1        $f20, 0x8($s6)
    ctx->pc = 0x32ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32ac9c:
    // 0x32ac9c: 0x26d00008  addiu       $s0, $s6, 0x8
    ctx->pc = 0x32ac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_32aca0:
    // 0x32aca0: 0xc049514  jal         func_125450
label_32aca4:
    if (ctx->pc == 0x32ACA4u) {
        ctx->pc = 0x32ACA4u;
            // 0x32aca4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x32ACA8u;
        goto label_32aca8;
    }
    ctx->pc = 0x32ACA0u;
    SET_GPR_U32(ctx, 31, 0x32ACA8u);
    ctx->pc = 0x32ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ACA0u;
            // 0x32aca4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACA8u; }
        if (ctx->pc != 0x32ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACA8u; }
        if (ctx->pc != 0x32ACA8u) { return; }
    }
    ctx->pc = 0x32ACA8u;
label_32aca8:
    // 0x32aca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32acac:
    // 0x32acac: 0xc04020c  jal         func_100830
label_32acb0:
    if (ctx->pc == 0x32ACB0u) {
        ctx->pc = 0x32ACB0u;
            // 0x32acb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ACB4u;
        goto label_32acb4;
    }
    ctx->pc = 0x32ACACu;
    SET_GPR_U32(ctx, 31, 0x32ACB4u);
    ctx->pc = 0x32ACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ACACu;
            // 0x32acb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACB4u; }
        if (ctx->pc != 0x32ACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACB4u; }
        if (ctx->pc != 0x32ACB4u) { return; }
    }
    ctx->pc = 0x32ACB4u;
label_32acb4:
    // 0x32acb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32acb8:
    if (ctx->pc == 0x32ACB8u) {
        ctx->pc = 0x32ACBCu;
        goto label_32acbc;
    }
    ctx->pc = 0x32ACB4u;
    {
        const bool branch_taken_0x32acb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32acb4) {
            ctx->pc = 0x32ACD8u;
            goto label_32acd8;
        }
    }
    ctx->pc = 0x32ACBCu;
label_32acbc:
    // 0x32acbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x32acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32acc0:
    // 0x32acc0: 0x0  nop
    ctx->pc = 0x32acc0u;
    // NOP
label_32acc4:
    // 0x32acc4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x32acc4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_32acc8:
    // 0x32acc8: 0x0  nop
    ctx->pc = 0x32acc8u;
    // NOP
label_32accc:
    // 0x32accc: 0x0  nop
    ctx->pc = 0x32acccu;
    // NOP
label_32acd0:
    // 0x32acd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_32acd4:
    if (ctx->pc == 0x32ACD4u) {
        ctx->pc = 0x32ACD8u;
        goto label_32acd8;
    }
    ctx->pc = 0x32ACD0u;
    {
        const bool branch_taken_0x32acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32acd0) {
            ctx->pc = 0x32ACDCu;
            goto label_32acdc;
        }
    }
    ctx->pc = 0x32ACD8u;
label_32acd8:
    // 0x32acd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32acd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32acdc:
    // 0x32acdc: 0xc054c3c  jal         func_1530F0
label_32ace0:
    if (ctx->pc == 0x32ACE0u) {
        ctx->pc = 0x32ACE0u;
            // 0x32ace0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32ACE4u;
        goto label_32ace4;
    }
    ctx->pc = 0x32ACDCu;
    SET_GPR_U32(ctx, 31, 0x32ACE4u);
    ctx->pc = 0x32ACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ACDCu;
            // 0x32ace0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACE4u; }
        if (ctx->pc != 0x32ACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACE4u; }
        if (ctx->pc != 0x32ACE4u) { return; }
    }
    ctx->pc = 0x32ACE4u;
label_32ace4:
    // 0x32ace4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x32ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32ace8:
    // 0x32ace8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32ace8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32acec:
    // 0x32acec: 0xc04cd60  jal         func_133580
label_32acf0:
    if (ctx->pc == 0x32ACF0u) {
        ctx->pc = 0x32ACF0u;
            // 0x32acf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ACF4u;
        goto label_32acf4;
    }
    ctx->pc = 0x32ACECu;
    SET_GPR_U32(ctx, 31, 0x32ACF4u);
    ctx->pc = 0x32ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ACECu;
            // 0x32acf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACF4u; }
        if (ctx->pc != 0x32ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ACF4u; }
        if (ctx->pc != 0x32ACF4u) { return; }
    }
    ctx->pc = 0x32ACF4u;
label_32acf4:
    // 0x32acf4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32acf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32acf8:
    // 0x32acf8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32acf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32acfc:
    // 0x32acfc: 0x320f809  jalr        $t9
label_32ad00:
    if (ctx->pc == 0x32AD00u) {
        ctx->pc = 0x32AD00u;
            // 0x32ad00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AD04u;
        goto label_32ad04;
    }
    ctx->pc = 0x32ACFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32AD04u);
        ctx->pc = 0x32AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32ACFCu;
            // 0x32ad00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32AD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32AD04u; }
            if (ctx->pc != 0x32AD04u) { return; }
        }
        }
    }
    ctx->pc = 0x32AD04u;
label_32ad04:
    // 0x32ad04: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x32ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32ad08:
    // 0x32ad08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32ad08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad0c:
    // 0x32ad0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ad10:
    // 0x32ad10: 0xc054fd4  jal         func_153F50
label_32ad14:
    if (ctx->pc == 0x32AD14u) {
        ctx->pc = 0x32AD14u;
            // 0x32ad14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AD18u;
        goto label_32ad18;
    }
    ctx->pc = 0x32AD10u;
    SET_GPR_U32(ctx, 31, 0x32AD18u);
    ctx->pc = 0x32AD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AD10u;
            // 0x32ad14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AD18u; }
        if (ctx->pc != 0x32AD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AD18u; }
        if (ctx->pc != 0x32AD18u) { return; }
    }
    ctx->pc = 0x32AD18u;
label_32ad18:
    // 0x32ad18: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x32ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32ad1c:
    // 0x32ad1c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x32ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_32ad20:
    // 0x32ad20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32ad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32ad24:
    // 0x32ad24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32ad24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ad28:
    // 0x32ad28: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x32ad28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_32ad2c:
    // 0x32ad2c: 0xc055234  jal         func_1548D0
label_32ad30:
    if (ctx->pc == 0x32AD30u) {
        ctx->pc = 0x32AD30u;
            // 0x32ad30: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x32AD34u;
        goto label_32ad34;
    }
    ctx->pc = 0x32AD2Cu;
    SET_GPR_U32(ctx, 31, 0x32AD34u);
    ctx->pc = 0x32AD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AD2Cu;
            // 0x32ad30: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AD34u; }
        if (ctx->pc != 0x32AD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AD34u; }
        if (ctx->pc != 0x32AD34u) { return; }
    }
    ctx->pc = 0x32AD34u;
label_32ad34:
    // 0x32ad34: 0x10000035  b           . + 4 + (0x35 << 2)
label_32ad38:
    if (ctx->pc == 0x32AD38u) {
        ctx->pc = 0x32AD38u;
            // 0x32ad38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x32AD3Cu;
        goto label_32ad3c;
    }
    ctx->pc = 0x32AD34u;
    {
        const bool branch_taken_0x32ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AD34u;
            // 0x32ad38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad34) {
            ctx->pc = 0x32AE0Cu;
            goto label_32ae0c;
        }
    }
    ctx->pc = 0x32AD3Cu;
label_32ad3c:
    // 0x32ad3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32ad40:
    // 0x32ad40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32ad44:
    // 0x32ad44: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x32ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_32ad48:
    // 0x32ad48: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x32ad48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_32ad4c:
    // 0x32ad4c: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x32ad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_32ad50:
    // 0x32ad50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32ad54:
    // 0x32ad54: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x32ad54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32ad58:
    // 0x32ad58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32ad5c:
    // 0x32ad5c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x32ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_32ad60:
    // 0x32ad60: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x32ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_32ad64:
    // 0x32ad64: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_32ad68:
    // 0x32ad68: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x32ad68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_32ad6c:
    // 0x32ad6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32ad70:
    // 0x32ad70: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x32ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_32ad74:
    // 0x32ad74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32ad78:
    // 0x32ad78: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x32ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
label_32ad7c:
    // 0x32ad7c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x32ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_32ad80:
    // 0x32ad80: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x32ad80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_32ad84:
    // 0x32ad84: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_32ad88:
    // 0x32ad88: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x32ad88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_32ad8c:
    // 0x32ad8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32ad8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ad90:
    // 0x32ad90: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x32ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_32ad94:
    // 0x32ad94: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x32ad94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_32ad98:
    // 0x32ad98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32ad9c:
    // 0x32ad9c: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x32ad9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_32ada0:
    // 0x32ada0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32ada4:
    // 0x32ada4: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x32ada4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_32ada8:
    // 0x32ada8: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x32ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_32adac:
    // 0x32adac: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x32adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_32adb0:
    // 0x32adb0: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x32adb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_32adb4:
    // 0x32adb4: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x32adb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_32adb8:
    // 0x32adb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32adbc:
    // 0x32adbc: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x32adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_32adc0:
    // 0x32adc0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x32adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_32adc4:
    // 0x32adc4: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x32adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_32adc8:
    // 0x32adc8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x32adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_32adcc:
    // 0x32adcc: 0xc04e4a4  jal         func_139290
label_32add0:
    if (ctx->pc == 0x32ADD0u) {
        ctx->pc = 0x32ADD0u;
            // 0x32add0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ADD4u;
        goto label_32add4;
    }
    ctx->pc = 0x32ADCCu;
    SET_GPR_U32(ctx, 31, 0x32ADD4u);
    ctx->pc = 0x32ADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ADCCu;
            // 0x32add0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ADD4u; }
        if (ctx->pc != 0x32ADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ADD4u; }
        if (ctx->pc != 0x32ADD4u) { return; }
    }
    ctx->pc = 0x32ADD4u;
label_32add4:
    // 0x32add4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x32add4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32add8:
    // 0x32add8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32add8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32addc:
    // 0x32addc: 0xc04cd60  jal         func_133580
label_32ade0:
    if (ctx->pc == 0x32ADE0u) {
        ctx->pc = 0x32ADE0u;
            // 0x32ade0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ADE4u;
        goto label_32ade4;
    }
    ctx->pc = 0x32ADDCu;
    SET_GPR_U32(ctx, 31, 0x32ADE4u);
    ctx->pc = 0x32ADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32ADDCu;
            // 0x32ade0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ADE4u; }
        if (ctx->pc != 0x32ADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32ADE4u; }
        if (ctx->pc != 0x32ADE4u) { return; }
    }
    ctx->pc = 0x32ADE4u;
label_32ade4:
    // 0x32ade4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32ade8:
    // 0x32ade8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32ade8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32adec:
    // 0x32adec: 0x320f809  jalr        $t9
label_32adf0:
    if (ctx->pc == 0x32ADF0u) {
        ctx->pc = 0x32ADF0u;
            // 0x32adf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32ADF4u;
        goto label_32adf4;
    }
    ctx->pc = 0x32ADECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32ADF4u);
        ctx->pc = 0x32ADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32ADECu;
            // 0x32adf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32ADF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32ADF4u; }
            if (ctx->pc != 0x32ADF4u) { return; }
        }
        }
    }
    ctx->pc = 0x32ADF4u;
label_32adf4:
    // 0x32adf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32adf8:
    // 0x32adf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32adf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32adfc:
    // 0x32adfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32adfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32ae00:
    // 0x32ae00: 0xc054fd4  jal         func_153F50
label_32ae04:
    if (ctx->pc == 0x32AE04u) {
        ctx->pc = 0x32AE04u;
            // 0x32ae04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32AE08u;
        goto label_32ae08;
    }
    ctx->pc = 0x32AE00u;
    SET_GPR_U32(ctx, 31, 0x32AE08u);
    ctx->pc = 0x32AE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE00u;
            // 0x32ae04: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AE08u; }
        if (ctx->pc != 0x32AE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AE08u; }
        if (ctx->pc != 0x32AE08u) { return; }
    }
    ctx->pc = 0x32AE08u;
label_32ae08:
    // 0x32ae08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x32ae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_32ae0c:
    // 0x32ae0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x32ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32ae10:
    // 0x32ae10: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x32ae10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32ae14:
    // 0x32ae14: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x32ae14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32ae18:
    // 0x32ae18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x32ae18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32ae1c:
    // 0x32ae1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32ae1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32ae20:
    // 0x32ae20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32ae20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32ae24:
    // 0x32ae24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32ae24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ae28:
    // 0x32ae28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32ae28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ae2c:
    // 0x32ae2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ae2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ae30:
    // 0x32ae30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32ae30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ae34:
    // 0x32ae34: 0x3e00008  jr          $ra
label_32ae38:
    if (ctx->pc == 0x32AE38u) {
        ctx->pc = 0x32AE38u;
            // 0x32ae38: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x32AE3Cu;
        goto label_32ae3c;
    }
    ctx->pc = 0x32AE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE34u;
            // 0x32ae38: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32AE3Cu;
label_32ae3c:
    // 0x32ae3c: 0x0  nop
    ctx->pc = 0x32ae3cu;
    // NOP
label_32ae40:
    // 0x32ae40: 0x3e00008  jr          $ra
label_32ae44:
    if (ctx->pc == 0x32AE44u) {
        ctx->pc = 0x32AE48u;
        goto label_32ae48;
    }
    ctx->pc = 0x32AE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32AE48u;
label_32ae48:
    // 0x32ae48: 0x0  nop
    ctx->pc = 0x32ae48u;
    // NOP
label_32ae4c:
    // 0x32ae4c: 0x0  nop
    ctx->pc = 0x32ae4cu;
    // NOP
label_32ae50:
    // 0x32ae50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32ae54:
    // 0x32ae54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32ae58:
    // 0x32ae58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32ae5c:
    // 0x32ae5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ae60:
    // 0x32ae60: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x32ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_32ae64:
    // 0x32ae64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32ae68:
    if (ctx->pc == 0x32AE68u) {
        ctx->pc = 0x32AE68u;
            // 0x32ae68: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x32AE6Cu;
        goto label_32ae6c;
    }
    ctx->pc = 0x32AE64u;
    {
        const bool branch_taken_0x32ae64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ae64) {
            ctx->pc = 0x32AE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE64u;
            // 0x32ae68: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32AE80u;
            goto label_32ae80;
        }
    }
    ctx->pc = 0x32AE6Cu;
label_32ae6c:
    // 0x32ae6c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x32ae6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_32ae70:
    // 0x32ae70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32ae70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32ae74:
    // 0x32ae74: 0x320f809  jalr        $t9
label_32ae78:
    if (ctx->pc == 0x32AE78u) {
        ctx->pc = 0x32AE78u;
            // 0x32ae78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32AE7Cu;
        goto label_32ae7c;
    }
    ctx->pc = 0x32AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32AE7Cu);
        ctx->pc = 0x32AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE74u;
            // 0x32ae78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32AE7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32AE7Cu; }
            if (ctx->pc != 0x32AE7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32AE7Cu;
label_32ae7c:
    // 0x32ae7c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x32ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_32ae80:
    // 0x32ae80: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_32ae84:
    // 0x32ae84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32ae88:
    if (ctx->pc == 0x32AE88u) {
        ctx->pc = 0x32AE88u;
            // 0x32ae88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x32AE8Cu;
        goto label_32ae8c;
    }
    ctx->pc = 0x32AE84u;
    {
        const bool branch_taken_0x32ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ae84) {
            ctx->pc = 0x32AE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE84u;
            // 0x32ae88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32AEA0u;
            goto label_32aea0;
        }
    }
    ctx->pc = 0x32AE8Cu;
label_32ae8c:
    // 0x32ae8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ae8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ae90:
    // 0x32ae90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32ae90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32ae94:
    // 0x32ae94: 0x320f809  jalr        $t9
label_32ae98:
    if (ctx->pc == 0x32AE98u) {
        ctx->pc = 0x32AE98u;
            // 0x32ae98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32AE9Cu;
        goto label_32ae9c;
    }
    ctx->pc = 0x32AE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32AE9Cu);
        ctx->pc = 0x32AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AE94u;
            // 0x32ae98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32AE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32AE9Cu; }
            if (ctx->pc != 0x32AE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32AE9Cu;
label_32ae9c:
    // 0x32ae9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x32ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_32aea0:
    // 0x32aea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32aea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32aea4:
    // 0x32aea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32aea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32aea8:
    // 0x32aea8: 0x3e00008  jr          $ra
label_32aeac:
    if (ctx->pc == 0x32AEACu) {
        ctx->pc = 0x32AEACu;
            // 0x32aeac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32AEB0u;
        goto label_32aeb0;
    }
    ctx->pc = 0x32AEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32AEA8u;
            // 0x32aeac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32AEB0u;
label_32aeb0:
    // 0x32aeb0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x32aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_32aeb4:
    // 0x32aeb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32aeb8:
    // 0x32aeb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32aebc:
    // 0x32aebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32aec0:
    // 0x32aec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32aec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32aec4:
    // 0x32aec4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32aec8:
    // 0x32aec8: 0xc0892d0  jal         func_224B40
label_32aecc:
    if (ctx->pc == 0x32AECCu) {
        ctx->pc = 0x32AECCu;
            // 0x32aecc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x32AED0u;
        goto label_32aed0;
    }
    ctx->pc = 0x32AEC8u;
    SET_GPR_U32(ctx, 31, 0x32AED0u);
    ctx->pc = 0x32AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AEC8u;
            // 0x32aecc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AED0u; }
        if (ctx->pc != 0x32AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AED0u; }
        if (ctx->pc != 0x32AED0u) { return; }
    }
    ctx->pc = 0x32AED0u;
label_32aed0:
    // 0x32aed0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32aed4:
    // 0x32aed4: 0x546000c6  bnel        $v1, $zero, . + 4 + (0xC6 << 2)
label_32aed8:
    if (ctx->pc == 0x32AED8u) {
        ctx->pc = 0x32AED8u;
            // 0x32aed8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x32AEDCu;
        goto label_32aedc;
    }
    ctx->pc = 0x32AED4u;
    {
        const bool branch_taken_0x32aed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32aed4) {
            ctx->pc = 0x32AED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32AED4u;
            // 0x32aed8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B1F0u;
            goto label_32b1f0;
        }
    }
    ctx->pc = 0x32AEDCu;
label_32aedc:
    // 0x32aedc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32aee0:
    // 0x32aee0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x32aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_32aee4:
    // 0x32aee4: 0x8c423e48  lw          $v0, 0x3E48($v0)
    ctx->pc = 0x32aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
label_32aee8:
    // 0x32aee8: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_32aeec:
    // 0x32aeec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x32aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_32aef0:
    // 0x32aef0: 0xc0b6e68  jal         func_2DB9A0
label_32aef4:
    if (ctx->pc == 0x32AEF4u) {
        ctx->pc = 0x32AEF4u;
            // 0x32aef4: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x32AEF8u;
        goto label_32aef8;
    }
    ctx->pc = 0x32AEF0u;
    SET_GPR_U32(ctx, 31, 0x32AEF8u);
    ctx->pc = 0x32AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AEF0u;
            // 0x32aef4: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AEF8u; }
        if (ctx->pc != 0x32AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AEF8u; }
        if (ctx->pc != 0x32AEF8u) { return; }
    }
    ctx->pc = 0x32AEF8u;
label_32aef8:
    // 0x32aef8: 0xc0b6dac  jal         func_2DB6B0
label_32aefc:
    if (ctx->pc == 0x32AEFCu) {
        ctx->pc = 0x32AEFCu;
            // 0x32aefc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32AF00u;
        goto label_32af00;
    }
    ctx->pc = 0x32AEF8u;
    SET_GPR_U32(ctx, 31, 0x32AF00u);
    ctx->pc = 0x32AEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AEF8u;
            // 0x32aefc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF00u; }
        if (ctx->pc != 0x32AF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF00u; }
        if (ctx->pc != 0x32AF00u) { return; }
    }
    ctx->pc = 0x32AF00u;
label_32af00:
    // 0x32af00: 0xc0cac94  jal         func_32B250
label_32af04:
    if (ctx->pc == 0x32AF04u) {
        ctx->pc = 0x32AF04u;
            // 0x32af04: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x32AF08u;
        goto label_32af08;
    }
    ctx->pc = 0x32AF00u;
    SET_GPR_U32(ctx, 31, 0x32AF08u);
    ctx->pc = 0x32AF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AF00u;
            // 0x32af04: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF08u; }
        if (ctx->pc != 0x32AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF08u; }
        if (ctx->pc != 0x32AF08u) { return; }
    }
    ctx->pc = 0x32AF08u;
label_32af08:
    // 0x32af08: 0xc0cac84  jal         func_32B210
label_32af0c:
    if (ctx->pc == 0x32AF0Cu) {
        ctx->pc = 0x32AF0Cu;
            // 0x32af0c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32AF10u;
        goto label_32af10;
    }
    ctx->pc = 0x32AF08u;
    SET_GPR_U32(ctx, 31, 0x32AF10u);
    ctx->pc = 0x32AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AF08u;
            // 0x32af0c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF10u; }
        if (ctx->pc != 0x32AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF10u; }
        if (ctx->pc != 0x32AF10u) { return; }
    }
    ctx->pc = 0x32AF10u;
label_32af10:
    // 0x32af10: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x32af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_32af14:
    // 0x32af14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x32af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_32af18:
    // 0x32af18: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x32af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32af1c:
    // 0x32af1c: 0xc0a5a68  jal         func_2969A0
label_32af20:
    if (ctx->pc == 0x32AF20u) {
        ctx->pc = 0x32AF20u;
            // 0x32af20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x32AF24u;
        goto label_32af24;
    }
    ctx->pc = 0x32AF1Cu;
    SET_GPR_U32(ctx, 31, 0x32AF24u);
    ctx->pc = 0x32AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32AF1Cu;
            // 0x32af20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF24u; }
        if (ctx->pc != 0x32AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32AF24u; }
        if (ctx->pc != 0x32AF24u) { return; }
    }
    ctx->pc = 0x32AF24u;
label_32af24:
    // 0x32af24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32af28:
    // 0x32af28: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x32af28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_32af2c:
    // 0x32af2c: 0x8c433e48  lw          $v1, 0x3E48($v0)
    ctx->pc = 0x32af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15944)));
label_32af30:
    // 0x32af30: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x32af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32af34:
    // 0x32af34: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x32af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32af38:
    // 0x32af38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32af38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32af3c:
    // 0x32af3c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x32af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32af40:
    // 0x32af40: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x32af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_32af44:
    // 0x32af44: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x32af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_32af48:
    // 0x32af48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x32af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_32af4c:
    // 0x32af4c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x32af4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_32af50:
    // 0x32af50: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x32af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_32af54:
    // 0x32af54: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x32af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_32af58:
    // 0x32af58: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x32af58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_32af5c:
    // 0x32af5c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x32af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_32af60:
    // 0x32af60: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x32af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_32af64:
    // 0x32af64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32af68:
    // 0x32af68: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x32af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_32af6c:
    // 0x32af6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_32af70:
    // 0x32af70: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x32af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_32af74:
    // 0x32af74: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x32af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_32af78:
    // 0x32af78: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x32af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_32af7c:
    // 0x32af7c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x32af7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_32af80:
    // 0x32af80: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x32af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_32af84:
    // 0x32af84: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x32af84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_32af88:
    // 0x32af88: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x32af88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_32af8c:
    // 0x32af8c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x32af8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_32af90:
    // 0x32af90: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x32af90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_32af94:
    // 0x32af94: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x32af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32af98:
    // 0x32af98: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x32af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_32af9c:
    // 0x32af9c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x32af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32afa0:
    // 0x32afa0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x32afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_32afa4:
    // 0x32afa4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x32afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32afa8:
    // 0x32afa8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x32afa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_32afac:
    // 0x32afac: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x32afacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_32afb0:
    // 0x32afb0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x32afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_32afb4:
    // 0x32afb4: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x32afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32afb8:
    // 0x32afb8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x32afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32afbc:
    // 0x32afbc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x32afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32afc0:
    // 0x32afc0: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x32afc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_32afc4:
    // 0x32afc4: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x32afc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_32afc8:
    // 0x32afc8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_32afcc:
    // 0x32afcc: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x32afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32afd0:
    // 0x32afd0: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x32afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32afd4:
    // 0x32afd4: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x32afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32afd8:
    // 0x32afd8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x32afd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32afdc:
    // 0x32afdc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x32afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32afe0:
    // 0x32afe0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x32afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32afe4:
    // 0x32afe4: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x32afe4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_32afe8:
    // 0x32afe8: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x32afe8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_32afec:
    // 0x32afec: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x32afecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_32aff0:
    // 0x32aff0: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x32aff0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_32aff4:
    // 0x32aff4: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x32aff4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_32aff8:
    // 0x32aff8: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x32aff8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_32affc:
    // 0x32affc: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x32affcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_32b000:
    // 0x32b000: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x32b000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_32b004:
    // 0x32b004: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x32b004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_32b008:
    // 0x32b008: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x32b008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_32b00c:
    // 0x32b00c: 0xc0a7a88  jal         func_29EA20
label_32b010:
    if (ctx->pc == 0x32B010u) {
        ctx->pc = 0x32B010u;
            // 0x32b010: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x32B014u;
        goto label_32b014;
    }
    ctx->pc = 0x32B00Cu;
    SET_GPR_U32(ctx, 31, 0x32B014u);
    ctx->pc = 0x32B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B00Cu;
            // 0x32b010: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B014u; }
        if (ctx->pc != 0x32B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B014u; }
        if (ctx->pc != 0x32B014u) { return; }
    }
    ctx->pc = 0x32B014u;
label_32b014:
    // 0x32b014: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x32b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_32b018:
    // 0x32b018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32b018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b01c:
    // 0x32b01c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_32b020:
    if (ctx->pc == 0x32B020u) {
        ctx->pc = 0x32B020u;
            // 0x32b020: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x32B024u;
        goto label_32b024;
    }
    ctx->pc = 0x32B01Cu;
    {
        const bool branch_taken_0x32b01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B01Cu;
            // 0x32b020: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b01c) {
            ctx->pc = 0x32B06Cu;
            goto label_32b06c;
        }
    }
    ctx->pc = 0x32B024u;
label_32b024:
    // 0x32b024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b028:
    // 0x32b028: 0xc088ef4  jal         func_223BD0
label_32b02c:
    if (ctx->pc == 0x32B02Cu) {
        ctx->pc = 0x32B02Cu;
            // 0x32b02c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x32B030u;
        goto label_32b030;
    }
    ctx->pc = 0x32B028u;
    SET_GPR_U32(ctx, 31, 0x32B030u);
    ctx->pc = 0x32B02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B028u;
            // 0x32b02c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B030u; }
        if (ctx->pc != 0x32B030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B030u; }
        if (ctx->pc != 0x32B030u) { return; }
    }
    ctx->pc = 0x32B030u;
label_32b030:
    // 0x32b030: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b034:
    // 0x32b034: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b038:
    // 0x32b038: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x32b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_32b03c:
    // 0x32b03c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x32b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_32b040:
    // 0x32b040: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32b044:
    // 0x32b044: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x32b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_32b048:
    // 0x32b048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b04c:
    // 0x32b04c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b050:
    // 0x32b050: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x32b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_32b054:
    // 0x32b054: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x32b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_32b058:
    // 0x32b058: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x32b058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_32b05c:
    // 0x32b05c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32b060:
    // 0x32b060: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x32b060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_32b064:
    // 0x32b064: 0xc088b38  jal         func_222CE0
label_32b068:
    if (ctx->pc == 0x32B068u) {
        ctx->pc = 0x32B068u;
            // 0x32b068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B06Cu;
        goto label_32b06c;
    }
    ctx->pc = 0x32B064u;
    SET_GPR_U32(ctx, 31, 0x32B06Cu);
    ctx->pc = 0x32B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B064u;
            // 0x32b068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B06Cu; }
        if (ctx->pc != 0x32B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B06Cu; }
        if (ctx->pc != 0x32B06Cu) { return; }
    }
    ctx->pc = 0x32B06Cu;
label_32b06c:
    // 0x32b06c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x32b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_32b070:
    // 0x32b070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b074:
    // 0x32b074: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x32b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_32b078:
    // 0x32b078: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x32b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32b07c:
    // 0x32b07c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x32b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_32b080:
    // 0x32b080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b084:
    // 0x32b084: 0xc08914c  jal         func_224530
label_32b088:
    if (ctx->pc == 0x32B088u) {
        ctx->pc = 0x32B088u;
            // 0x32b088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B08Cu;
        goto label_32b08c;
    }
    ctx->pc = 0x32B084u;
    SET_GPR_U32(ctx, 31, 0x32B08Cu);
    ctx->pc = 0x32B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B084u;
            // 0x32b088: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B08Cu; }
        if (ctx->pc != 0x32B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B08Cu; }
        if (ctx->pc != 0x32B08Cu) { return; }
    }
    ctx->pc = 0x32B08Cu;
label_32b08c:
    // 0x32b08c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x32b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32b090:
    // 0x32b090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b094:
    // 0x32b094: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x32b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32b098:
    // 0x32b098: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_32b09c:
    // 0x32b09c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x32b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32b0a0:
    // 0x32b0a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x32b0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32b0a4:
    // 0x32b0a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32b0a8:
    // 0x32b0a8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32b0ac:
    // 0x32b0ac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x32b0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32b0b0:
    // 0x32b0b0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x32b0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32b0b4:
    // 0x32b0b4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x32b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32b0b8:
    // 0x32b0b8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x32b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32b0bc:
    // 0x32b0bc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x32b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32b0c0:
    // 0x32b0c0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x32b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32b0c4:
    // 0x32b0c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32b0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_32b0c8:
    // 0x32b0c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x32b0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_32b0cc:
    // 0x32b0cc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x32b0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_32b0d0:
    // 0x32b0d0: 0xc0892b0  jal         func_224AC0
label_32b0d4:
    if (ctx->pc == 0x32B0D4u) {
        ctx->pc = 0x32B0D4u;
            // 0x32b0d4: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x32B0D8u;
        goto label_32b0d8;
    }
    ctx->pc = 0x32B0D0u;
    SET_GPR_U32(ctx, 31, 0x32B0D8u);
    ctx->pc = 0x32B0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B0D0u;
            // 0x32b0d4: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B0D8u; }
        if (ctx->pc != 0x32B0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B0D8u; }
        if (ctx->pc != 0x32B0D8u) { return; }
    }
    ctx->pc = 0x32B0D8u;
label_32b0d8:
    // 0x32b0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b0dc:
    // 0x32b0dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x32b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_32b0e0:
    // 0x32b0e0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x32b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_32b0e4:
    // 0x32b0e4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x32b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_32b0e8:
    // 0x32b0e8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x32b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_32b0ec:
    // 0x32b0ec: 0xc0891d8  jal         func_224760
label_32b0f0:
    if (ctx->pc == 0x32B0F0u) {
        ctx->pc = 0x32B0F0u;
            // 0x32b0f0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x32B0F4u;
        goto label_32b0f4;
    }
    ctx->pc = 0x32B0ECu;
    SET_GPR_U32(ctx, 31, 0x32B0F4u);
    ctx->pc = 0x32B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B0ECu;
            // 0x32b0f0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B0F4u; }
        if (ctx->pc != 0x32B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B0F4u; }
        if (ctx->pc != 0x32B0F4u) { return; }
    }
    ctx->pc = 0x32B0F4u;
label_32b0f4:
    // 0x32b0f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b0f8:
    // 0x32b0f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32b0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b0fc:
    // 0x32b0fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32b100:
    // 0x32b100: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x32b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32b104:
    // 0x32b104: 0xc08c164  jal         func_230590
label_32b108:
    if (ctx->pc == 0x32B108u) {
        ctx->pc = 0x32B108u;
            // 0x32b108: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32B10Cu;
        goto label_32b10c;
    }
    ctx->pc = 0x32B104u;
    SET_GPR_U32(ctx, 31, 0x32B10Cu);
    ctx->pc = 0x32B108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B104u;
            // 0x32b108: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B10Cu; }
        if (ctx->pc != 0x32B10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B10Cu; }
        if (ctx->pc != 0x32B10Cu) { return; }
    }
    ctx->pc = 0x32B10Cu;
label_32b10c:
    // 0x32b10c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x32b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_32b110:
    // 0x32b110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b114:
    // 0x32b114: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_32b118:
    // 0x32b118: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x32b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_32b11c:
    // 0x32b11c: 0xc0a7a88  jal         func_29EA20
label_32b120:
    if (ctx->pc == 0x32B120u) {
        ctx->pc = 0x32B120u;
            // 0x32b120: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x32B124u;
        goto label_32b124;
    }
    ctx->pc = 0x32B11Cu;
    SET_GPR_U32(ctx, 31, 0x32B124u);
    ctx->pc = 0x32B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B11Cu;
            // 0x32b120: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B124u; }
        if (ctx->pc != 0x32B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B124u; }
        if (ctx->pc != 0x32B124u) { return; }
    }
    ctx->pc = 0x32B124u;
label_32b124:
    // 0x32b124: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x32b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_32b128:
    // 0x32b128: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32b128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b12c:
    // 0x32b12c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_32b130:
    if (ctx->pc == 0x32B130u) {
        ctx->pc = 0x32B130u;
            // 0x32b130: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x32B134u;
        goto label_32b134;
    }
    ctx->pc = 0x32B12Cu;
    {
        const bool branch_taken_0x32b12c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B12Cu;
            // 0x32b130: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b12c) {
            ctx->pc = 0x32B150u;
            goto label_32b150;
        }
    }
    ctx->pc = 0x32B134u;
label_32b134:
    // 0x32b134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32b134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b138:
    // 0x32b138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32b138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b13c:
    // 0x32b13c: 0xc0869d0  jal         func_21A740
label_32b140:
    if (ctx->pc == 0x32B140u) {
        ctx->pc = 0x32B140u;
            // 0x32b140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B144u;
        goto label_32b144;
    }
    ctx->pc = 0x32B13Cu;
    SET_GPR_U32(ctx, 31, 0x32B144u);
    ctx->pc = 0x32B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B13Cu;
            // 0x32b140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B144u; }
        if (ctx->pc != 0x32B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B144u; }
        if (ctx->pc != 0x32B144u) { return; }
    }
    ctx->pc = 0x32B144u;
label_32b144:
    // 0x32b144: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b148:
    // 0x32b148: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x32b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_32b14c:
    // 0x32b14c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_32b150:
    // 0x32b150: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x32b150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_32b154:
    // 0x32b154: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b158:
    // 0x32b158: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32b15c:
    // 0x32b15c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x32b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32b160:
    // 0x32b160: 0xc08c650  jal         func_231940
label_32b164:
    if (ctx->pc == 0x32B164u) {
        ctx->pc = 0x32B164u;
            // 0x32b164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B168u;
        goto label_32b168;
    }
    ctx->pc = 0x32B160u;
    SET_GPR_U32(ctx, 31, 0x32B168u);
    ctx->pc = 0x32B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B160u;
            // 0x32b164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B168u; }
        if (ctx->pc != 0x32B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B168u; }
        if (ctx->pc != 0x32B168u) { return; }
    }
    ctx->pc = 0x32B168u;
label_32b168:
    // 0x32b168: 0xc040180  jal         func_100600
label_32b16c:
    if (ctx->pc == 0x32B16Cu) {
        ctx->pc = 0x32B16Cu;
            // 0x32b16c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x32B170u;
        goto label_32b170;
    }
    ctx->pc = 0x32B168u;
    SET_GPR_U32(ctx, 31, 0x32B170u);
    ctx->pc = 0x32B16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B168u;
            // 0x32b16c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B170u; }
        if (ctx->pc != 0x32B170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B170u; }
        if (ctx->pc != 0x32B170u) { return; }
    }
    ctx->pc = 0x32B170u;
label_32b170:
    // 0x32b170: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_32b174:
    if (ctx->pc == 0x32B174u) {
        ctx->pc = 0x32B174u;
            // 0x32b174: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x32B178u;
        goto label_32b178;
    }
    ctx->pc = 0x32B170u;
    {
        const bool branch_taken_0x32b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b170) {
            ctx->pc = 0x32B174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B170u;
            // 0x32b174: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B1C0u;
            goto label_32b1c0;
        }
    }
    ctx->pc = 0x32B178u;
label_32b178:
    // 0x32b178: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x32b178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32b17c:
    // 0x32b17c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x32b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_32b180:
    // 0x32b180: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x32b180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_32b184:
    // 0x32b184: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32b184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32b188:
    // 0x32b188: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x32b188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_32b18c:
    // 0x32b18c: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x32b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_32b190:
    // 0x32b190: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x32b190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_32b194:
    // 0x32b194: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x32b194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_32b198:
    // 0x32b198: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x32b198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_32b19c:
    // 0x32b19c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x32b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_32b1a0:
    // 0x32b1a0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_32b1a4:
    // 0x32b1a4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x32b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_32b1a8:
    // 0x32b1a8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x32b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_32b1ac:
    // 0x32b1ac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x32b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_32b1b0:
    // 0x32b1b0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x32b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_32b1b4:
    // 0x32b1b4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x32b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_32b1b8:
    // 0x32b1b8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x32b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_32b1bc:
    // 0x32b1bc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x32b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_32b1c0:
    // 0x32b1c0: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x32b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_32b1c4:
    // 0x32b1c4: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x32b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_32b1c8:
    // 0x32b1c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b1cc:
    // 0x32b1cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x32b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32b1d0:
    // 0x32b1d0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x32b1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_32b1d4:
    // 0x32b1d4: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_32b1d8:
    // 0x32b1d8: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x32b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_32b1dc:
    // 0x32b1dc: 0xa2240064  sb          $a0, 0x64($s1)
    ctx->pc = 0x32b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 4));
label_32b1e0:
    // 0x32b1e0: 0xa2240065  sb          $a0, 0x65($s1)
    ctx->pc = 0x32b1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 4));
label_32b1e4:
    // 0x32b1e4: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x32b1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_32b1e8:
    // 0x32b1e8: 0xa2230069  sb          $v1, 0x69($s1)
    ctx->pc = 0x32b1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 3));
label_32b1ec:
    // 0x32b1ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32b1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32b1f0:
    // 0x32b1f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32b1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32b1f4:
    // 0x32b1f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b1f8:
    // 0x32b1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b1fc:
    // 0x32b1fc: 0x3e00008  jr          $ra
label_32b200:
    if (ctx->pc == 0x32B200u) {
        ctx->pc = 0x32B200u;
            // 0x32b200: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x32B204u;
        goto label_32b204;
    }
    ctx->pc = 0x32B1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B1FCu;
            // 0x32b200: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B204u;
label_32b204:
    // 0x32b204: 0x0  nop
    ctx->pc = 0x32b204u;
    // NOP
label_32b208:
    // 0x32b208: 0x0  nop
    ctx->pc = 0x32b208u;
    // NOP
label_32b20c:
    // 0x32b20c: 0x0  nop
    ctx->pc = 0x32b20cu;
    // NOP
}
