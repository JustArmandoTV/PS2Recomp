#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046AB30
// Address: 0x46ab30 - 0x46b3c0
void sub_0046AB30_0x46ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AB30_0x46ab30");
#endif

    switch (ctx->pc) {
        case 0x46ab30u: goto label_46ab30;
        case 0x46ab34u: goto label_46ab34;
        case 0x46ab38u: goto label_46ab38;
        case 0x46ab3cu: goto label_46ab3c;
        case 0x46ab40u: goto label_46ab40;
        case 0x46ab44u: goto label_46ab44;
        case 0x46ab48u: goto label_46ab48;
        case 0x46ab4cu: goto label_46ab4c;
        case 0x46ab50u: goto label_46ab50;
        case 0x46ab54u: goto label_46ab54;
        case 0x46ab58u: goto label_46ab58;
        case 0x46ab5cu: goto label_46ab5c;
        case 0x46ab60u: goto label_46ab60;
        case 0x46ab64u: goto label_46ab64;
        case 0x46ab68u: goto label_46ab68;
        case 0x46ab6cu: goto label_46ab6c;
        case 0x46ab70u: goto label_46ab70;
        case 0x46ab74u: goto label_46ab74;
        case 0x46ab78u: goto label_46ab78;
        case 0x46ab7cu: goto label_46ab7c;
        case 0x46ab80u: goto label_46ab80;
        case 0x46ab84u: goto label_46ab84;
        case 0x46ab88u: goto label_46ab88;
        case 0x46ab8cu: goto label_46ab8c;
        case 0x46ab90u: goto label_46ab90;
        case 0x46ab94u: goto label_46ab94;
        case 0x46ab98u: goto label_46ab98;
        case 0x46ab9cu: goto label_46ab9c;
        case 0x46aba0u: goto label_46aba0;
        case 0x46aba4u: goto label_46aba4;
        case 0x46aba8u: goto label_46aba8;
        case 0x46abacu: goto label_46abac;
        case 0x46abb0u: goto label_46abb0;
        case 0x46abb4u: goto label_46abb4;
        case 0x46abb8u: goto label_46abb8;
        case 0x46abbcu: goto label_46abbc;
        case 0x46abc0u: goto label_46abc0;
        case 0x46abc4u: goto label_46abc4;
        case 0x46abc8u: goto label_46abc8;
        case 0x46abccu: goto label_46abcc;
        case 0x46abd0u: goto label_46abd0;
        case 0x46abd4u: goto label_46abd4;
        case 0x46abd8u: goto label_46abd8;
        case 0x46abdcu: goto label_46abdc;
        case 0x46abe0u: goto label_46abe0;
        case 0x46abe4u: goto label_46abe4;
        case 0x46abe8u: goto label_46abe8;
        case 0x46abecu: goto label_46abec;
        case 0x46abf0u: goto label_46abf0;
        case 0x46abf4u: goto label_46abf4;
        case 0x46abf8u: goto label_46abf8;
        case 0x46abfcu: goto label_46abfc;
        case 0x46ac00u: goto label_46ac00;
        case 0x46ac04u: goto label_46ac04;
        case 0x46ac08u: goto label_46ac08;
        case 0x46ac0cu: goto label_46ac0c;
        case 0x46ac10u: goto label_46ac10;
        case 0x46ac14u: goto label_46ac14;
        case 0x46ac18u: goto label_46ac18;
        case 0x46ac1cu: goto label_46ac1c;
        case 0x46ac20u: goto label_46ac20;
        case 0x46ac24u: goto label_46ac24;
        case 0x46ac28u: goto label_46ac28;
        case 0x46ac2cu: goto label_46ac2c;
        case 0x46ac30u: goto label_46ac30;
        case 0x46ac34u: goto label_46ac34;
        case 0x46ac38u: goto label_46ac38;
        case 0x46ac3cu: goto label_46ac3c;
        case 0x46ac40u: goto label_46ac40;
        case 0x46ac44u: goto label_46ac44;
        case 0x46ac48u: goto label_46ac48;
        case 0x46ac4cu: goto label_46ac4c;
        case 0x46ac50u: goto label_46ac50;
        case 0x46ac54u: goto label_46ac54;
        case 0x46ac58u: goto label_46ac58;
        case 0x46ac5cu: goto label_46ac5c;
        case 0x46ac60u: goto label_46ac60;
        case 0x46ac64u: goto label_46ac64;
        case 0x46ac68u: goto label_46ac68;
        case 0x46ac6cu: goto label_46ac6c;
        case 0x46ac70u: goto label_46ac70;
        case 0x46ac74u: goto label_46ac74;
        case 0x46ac78u: goto label_46ac78;
        case 0x46ac7cu: goto label_46ac7c;
        case 0x46ac80u: goto label_46ac80;
        case 0x46ac84u: goto label_46ac84;
        case 0x46ac88u: goto label_46ac88;
        case 0x46ac8cu: goto label_46ac8c;
        case 0x46ac90u: goto label_46ac90;
        case 0x46ac94u: goto label_46ac94;
        case 0x46ac98u: goto label_46ac98;
        case 0x46ac9cu: goto label_46ac9c;
        case 0x46aca0u: goto label_46aca0;
        case 0x46aca4u: goto label_46aca4;
        case 0x46aca8u: goto label_46aca8;
        case 0x46acacu: goto label_46acac;
        case 0x46acb0u: goto label_46acb0;
        case 0x46acb4u: goto label_46acb4;
        case 0x46acb8u: goto label_46acb8;
        case 0x46acbcu: goto label_46acbc;
        case 0x46acc0u: goto label_46acc0;
        case 0x46acc4u: goto label_46acc4;
        case 0x46acc8u: goto label_46acc8;
        case 0x46acccu: goto label_46accc;
        case 0x46acd0u: goto label_46acd0;
        case 0x46acd4u: goto label_46acd4;
        case 0x46acd8u: goto label_46acd8;
        case 0x46acdcu: goto label_46acdc;
        case 0x46ace0u: goto label_46ace0;
        case 0x46ace4u: goto label_46ace4;
        case 0x46ace8u: goto label_46ace8;
        case 0x46acecu: goto label_46acec;
        case 0x46acf0u: goto label_46acf0;
        case 0x46acf4u: goto label_46acf4;
        case 0x46acf8u: goto label_46acf8;
        case 0x46acfcu: goto label_46acfc;
        case 0x46ad00u: goto label_46ad00;
        case 0x46ad04u: goto label_46ad04;
        case 0x46ad08u: goto label_46ad08;
        case 0x46ad0cu: goto label_46ad0c;
        case 0x46ad10u: goto label_46ad10;
        case 0x46ad14u: goto label_46ad14;
        case 0x46ad18u: goto label_46ad18;
        case 0x46ad1cu: goto label_46ad1c;
        case 0x46ad20u: goto label_46ad20;
        case 0x46ad24u: goto label_46ad24;
        case 0x46ad28u: goto label_46ad28;
        case 0x46ad2cu: goto label_46ad2c;
        case 0x46ad30u: goto label_46ad30;
        case 0x46ad34u: goto label_46ad34;
        case 0x46ad38u: goto label_46ad38;
        case 0x46ad3cu: goto label_46ad3c;
        case 0x46ad40u: goto label_46ad40;
        case 0x46ad44u: goto label_46ad44;
        case 0x46ad48u: goto label_46ad48;
        case 0x46ad4cu: goto label_46ad4c;
        case 0x46ad50u: goto label_46ad50;
        case 0x46ad54u: goto label_46ad54;
        case 0x46ad58u: goto label_46ad58;
        case 0x46ad5cu: goto label_46ad5c;
        case 0x46ad60u: goto label_46ad60;
        case 0x46ad64u: goto label_46ad64;
        case 0x46ad68u: goto label_46ad68;
        case 0x46ad6cu: goto label_46ad6c;
        case 0x46ad70u: goto label_46ad70;
        case 0x46ad74u: goto label_46ad74;
        case 0x46ad78u: goto label_46ad78;
        case 0x46ad7cu: goto label_46ad7c;
        case 0x46ad80u: goto label_46ad80;
        case 0x46ad84u: goto label_46ad84;
        case 0x46ad88u: goto label_46ad88;
        case 0x46ad8cu: goto label_46ad8c;
        case 0x46ad90u: goto label_46ad90;
        case 0x46ad94u: goto label_46ad94;
        case 0x46ad98u: goto label_46ad98;
        case 0x46ad9cu: goto label_46ad9c;
        case 0x46ada0u: goto label_46ada0;
        case 0x46ada4u: goto label_46ada4;
        case 0x46ada8u: goto label_46ada8;
        case 0x46adacu: goto label_46adac;
        case 0x46adb0u: goto label_46adb0;
        case 0x46adb4u: goto label_46adb4;
        case 0x46adb8u: goto label_46adb8;
        case 0x46adbcu: goto label_46adbc;
        case 0x46adc0u: goto label_46adc0;
        case 0x46adc4u: goto label_46adc4;
        case 0x46adc8u: goto label_46adc8;
        case 0x46adccu: goto label_46adcc;
        case 0x46add0u: goto label_46add0;
        case 0x46add4u: goto label_46add4;
        case 0x46add8u: goto label_46add8;
        case 0x46addcu: goto label_46addc;
        case 0x46ade0u: goto label_46ade0;
        case 0x46ade4u: goto label_46ade4;
        case 0x46ade8u: goto label_46ade8;
        case 0x46adecu: goto label_46adec;
        case 0x46adf0u: goto label_46adf0;
        case 0x46adf4u: goto label_46adf4;
        case 0x46adf8u: goto label_46adf8;
        case 0x46adfcu: goto label_46adfc;
        case 0x46ae00u: goto label_46ae00;
        case 0x46ae04u: goto label_46ae04;
        case 0x46ae08u: goto label_46ae08;
        case 0x46ae0cu: goto label_46ae0c;
        case 0x46ae10u: goto label_46ae10;
        case 0x46ae14u: goto label_46ae14;
        case 0x46ae18u: goto label_46ae18;
        case 0x46ae1cu: goto label_46ae1c;
        case 0x46ae20u: goto label_46ae20;
        case 0x46ae24u: goto label_46ae24;
        case 0x46ae28u: goto label_46ae28;
        case 0x46ae2cu: goto label_46ae2c;
        case 0x46ae30u: goto label_46ae30;
        case 0x46ae34u: goto label_46ae34;
        case 0x46ae38u: goto label_46ae38;
        case 0x46ae3cu: goto label_46ae3c;
        case 0x46ae40u: goto label_46ae40;
        case 0x46ae44u: goto label_46ae44;
        case 0x46ae48u: goto label_46ae48;
        case 0x46ae4cu: goto label_46ae4c;
        case 0x46ae50u: goto label_46ae50;
        case 0x46ae54u: goto label_46ae54;
        case 0x46ae58u: goto label_46ae58;
        case 0x46ae5cu: goto label_46ae5c;
        case 0x46ae60u: goto label_46ae60;
        case 0x46ae64u: goto label_46ae64;
        case 0x46ae68u: goto label_46ae68;
        case 0x46ae6cu: goto label_46ae6c;
        case 0x46ae70u: goto label_46ae70;
        case 0x46ae74u: goto label_46ae74;
        case 0x46ae78u: goto label_46ae78;
        case 0x46ae7cu: goto label_46ae7c;
        case 0x46ae80u: goto label_46ae80;
        case 0x46ae84u: goto label_46ae84;
        case 0x46ae88u: goto label_46ae88;
        case 0x46ae8cu: goto label_46ae8c;
        case 0x46ae90u: goto label_46ae90;
        case 0x46ae94u: goto label_46ae94;
        case 0x46ae98u: goto label_46ae98;
        case 0x46ae9cu: goto label_46ae9c;
        case 0x46aea0u: goto label_46aea0;
        case 0x46aea4u: goto label_46aea4;
        case 0x46aea8u: goto label_46aea8;
        case 0x46aeacu: goto label_46aeac;
        case 0x46aeb0u: goto label_46aeb0;
        case 0x46aeb4u: goto label_46aeb4;
        case 0x46aeb8u: goto label_46aeb8;
        case 0x46aebcu: goto label_46aebc;
        case 0x46aec0u: goto label_46aec0;
        case 0x46aec4u: goto label_46aec4;
        case 0x46aec8u: goto label_46aec8;
        case 0x46aeccu: goto label_46aecc;
        case 0x46aed0u: goto label_46aed0;
        case 0x46aed4u: goto label_46aed4;
        case 0x46aed8u: goto label_46aed8;
        case 0x46aedcu: goto label_46aedc;
        case 0x46aee0u: goto label_46aee0;
        case 0x46aee4u: goto label_46aee4;
        case 0x46aee8u: goto label_46aee8;
        case 0x46aeecu: goto label_46aeec;
        case 0x46aef0u: goto label_46aef0;
        case 0x46aef4u: goto label_46aef4;
        case 0x46aef8u: goto label_46aef8;
        case 0x46aefcu: goto label_46aefc;
        case 0x46af00u: goto label_46af00;
        case 0x46af04u: goto label_46af04;
        case 0x46af08u: goto label_46af08;
        case 0x46af0cu: goto label_46af0c;
        case 0x46af10u: goto label_46af10;
        case 0x46af14u: goto label_46af14;
        case 0x46af18u: goto label_46af18;
        case 0x46af1cu: goto label_46af1c;
        case 0x46af20u: goto label_46af20;
        case 0x46af24u: goto label_46af24;
        case 0x46af28u: goto label_46af28;
        case 0x46af2cu: goto label_46af2c;
        case 0x46af30u: goto label_46af30;
        case 0x46af34u: goto label_46af34;
        case 0x46af38u: goto label_46af38;
        case 0x46af3cu: goto label_46af3c;
        case 0x46af40u: goto label_46af40;
        case 0x46af44u: goto label_46af44;
        case 0x46af48u: goto label_46af48;
        case 0x46af4cu: goto label_46af4c;
        case 0x46af50u: goto label_46af50;
        case 0x46af54u: goto label_46af54;
        case 0x46af58u: goto label_46af58;
        case 0x46af5cu: goto label_46af5c;
        case 0x46af60u: goto label_46af60;
        case 0x46af64u: goto label_46af64;
        case 0x46af68u: goto label_46af68;
        case 0x46af6cu: goto label_46af6c;
        case 0x46af70u: goto label_46af70;
        case 0x46af74u: goto label_46af74;
        case 0x46af78u: goto label_46af78;
        case 0x46af7cu: goto label_46af7c;
        case 0x46af80u: goto label_46af80;
        case 0x46af84u: goto label_46af84;
        case 0x46af88u: goto label_46af88;
        case 0x46af8cu: goto label_46af8c;
        case 0x46af90u: goto label_46af90;
        case 0x46af94u: goto label_46af94;
        case 0x46af98u: goto label_46af98;
        case 0x46af9cu: goto label_46af9c;
        case 0x46afa0u: goto label_46afa0;
        case 0x46afa4u: goto label_46afa4;
        case 0x46afa8u: goto label_46afa8;
        case 0x46afacu: goto label_46afac;
        case 0x46afb0u: goto label_46afb0;
        case 0x46afb4u: goto label_46afb4;
        case 0x46afb8u: goto label_46afb8;
        case 0x46afbcu: goto label_46afbc;
        case 0x46afc0u: goto label_46afc0;
        case 0x46afc4u: goto label_46afc4;
        case 0x46afc8u: goto label_46afc8;
        case 0x46afccu: goto label_46afcc;
        case 0x46afd0u: goto label_46afd0;
        case 0x46afd4u: goto label_46afd4;
        case 0x46afd8u: goto label_46afd8;
        case 0x46afdcu: goto label_46afdc;
        case 0x46afe0u: goto label_46afe0;
        case 0x46afe4u: goto label_46afe4;
        case 0x46afe8u: goto label_46afe8;
        case 0x46afecu: goto label_46afec;
        case 0x46aff0u: goto label_46aff0;
        case 0x46aff4u: goto label_46aff4;
        case 0x46aff8u: goto label_46aff8;
        case 0x46affcu: goto label_46affc;
        case 0x46b000u: goto label_46b000;
        case 0x46b004u: goto label_46b004;
        case 0x46b008u: goto label_46b008;
        case 0x46b00cu: goto label_46b00c;
        case 0x46b010u: goto label_46b010;
        case 0x46b014u: goto label_46b014;
        case 0x46b018u: goto label_46b018;
        case 0x46b01cu: goto label_46b01c;
        case 0x46b020u: goto label_46b020;
        case 0x46b024u: goto label_46b024;
        case 0x46b028u: goto label_46b028;
        case 0x46b02cu: goto label_46b02c;
        case 0x46b030u: goto label_46b030;
        case 0x46b034u: goto label_46b034;
        case 0x46b038u: goto label_46b038;
        case 0x46b03cu: goto label_46b03c;
        case 0x46b040u: goto label_46b040;
        case 0x46b044u: goto label_46b044;
        case 0x46b048u: goto label_46b048;
        case 0x46b04cu: goto label_46b04c;
        case 0x46b050u: goto label_46b050;
        case 0x46b054u: goto label_46b054;
        case 0x46b058u: goto label_46b058;
        case 0x46b05cu: goto label_46b05c;
        case 0x46b060u: goto label_46b060;
        case 0x46b064u: goto label_46b064;
        case 0x46b068u: goto label_46b068;
        case 0x46b06cu: goto label_46b06c;
        case 0x46b070u: goto label_46b070;
        case 0x46b074u: goto label_46b074;
        case 0x46b078u: goto label_46b078;
        case 0x46b07cu: goto label_46b07c;
        case 0x46b080u: goto label_46b080;
        case 0x46b084u: goto label_46b084;
        case 0x46b088u: goto label_46b088;
        case 0x46b08cu: goto label_46b08c;
        case 0x46b090u: goto label_46b090;
        case 0x46b094u: goto label_46b094;
        case 0x46b098u: goto label_46b098;
        case 0x46b09cu: goto label_46b09c;
        case 0x46b0a0u: goto label_46b0a0;
        case 0x46b0a4u: goto label_46b0a4;
        case 0x46b0a8u: goto label_46b0a8;
        case 0x46b0acu: goto label_46b0ac;
        case 0x46b0b0u: goto label_46b0b0;
        case 0x46b0b4u: goto label_46b0b4;
        case 0x46b0b8u: goto label_46b0b8;
        case 0x46b0bcu: goto label_46b0bc;
        case 0x46b0c0u: goto label_46b0c0;
        case 0x46b0c4u: goto label_46b0c4;
        case 0x46b0c8u: goto label_46b0c8;
        case 0x46b0ccu: goto label_46b0cc;
        case 0x46b0d0u: goto label_46b0d0;
        case 0x46b0d4u: goto label_46b0d4;
        case 0x46b0d8u: goto label_46b0d8;
        case 0x46b0dcu: goto label_46b0dc;
        case 0x46b0e0u: goto label_46b0e0;
        case 0x46b0e4u: goto label_46b0e4;
        case 0x46b0e8u: goto label_46b0e8;
        case 0x46b0ecu: goto label_46b0ec;
        case 0x46b0f0u: goto label_46b0f0;
        case 0x46b0f4u: goto label_46b0f4;
        case 0x46b0f8u: goto label_46b0f8;
        case 0x46b0fcu: goto label_46b0fc;
        case 0x46b100u: goto label_46b100;
        case 0x46b104u: goto label_46b104;
        case 0x46b108u: goto label_46b108;
        case 0x46b10cu: goto label_46b10c;
        case 0x46b110u: goto label_46b110;
        case 0x46b114u: goto label_46b114;
        case 0x46b118u: goto label_46b118;
        case 0x46b11cu: goto label_46b11c;
        case 0x46b120u: goto label_46b120;
        case 0x46b124u: goto label_46b124;
        case 0x46b128u: goto label_46b128;
        case 0x46b12cu: goto label_46b12c;
        case 0x46b130u: goto label_46b130;
        case 0x46b134u: goto label_46b134;
        case 0x46b138u: goto label_46b138;
        case 0x46b13cu: goto label_46b13c;
        case 0x46b140u: goto label_46b140;
        case 0x46b144u: goto label_46b144;
        case 0x46b148u: goto label_46b148;
        case 0x46b14cu: goto label_46b14c;
        case 0x46b150u: goto label_46b150;
        case 0x46b154u: goto label_46b154;
        case 0x46b158u: goto label_46b158;
        case 0x46b15cu: goto label_46b15c;
        case 0x46b160u: goto label_46b160;
        case 0x46b164u: goto label_46b164;
        case 0x46b168u: goto label_46b168;
        case 0x46b16cu: goto label_46b16c;
        case 0x46b170u: goto label_46b170;
        case 0x46b174u: goto label_46b174;
        case 0x46b178u: goto label_46b178;
        case 0x46b17cu: goto label_46b17c;
        case 0x46b180u: goto label_46b180;
        case 0x46b184u: goto label_46b184;
        case 0x46b188u: goto label_46b188;
        case 0x46b18cu: goto label_46b18c;
        case 0x46b190u: goto label_46b190;
        case 0x46b194u: goto label_46b194;
        case 0x46b198u: goto label_46b198;
        case 0x46b19cu: goto label_46b19c;
        case 0x46b1a0u: goto label_46b1a0;
        case 0x46b1a4u: goto label_46b1a4;
        case 0x46b1a8u: goto label_46b1a8;
        case 0x46b1acu: goto label_46b1ac;
        case 0x46b1b0u: goto label_46b1b0;
        case 0x46b1b4u: goto label_46b1b4;
        case 0x46b1b8u: goto label_46b1b8;
        case 0x46b1bcu: goto label_46b1bc;
        case 0x46b1c0u: goto label_46b1c0;
        case 0x46b1c4u: goto label_46b1c4;
        case 0x46b1c8u: goto label_46b1c8;
        case 0x46b1ccu: goto label_46b1cc;
        case 0x46b1d0u: goto label_46b1d0;
        case 0x46b1d4u: goto label_46b1d4;
        case 0x46b1d8u: goto label_46b1d8;
        case 0x46b1dcu: goto label_46b1dc;
        case 0x46b1e0u: goto label_46b1e0;
        case 0x46b1e4u: goto label_46b1e4;
        case 0x46b1e8u: goto label_46b1e8;
        case 0x46b1ecu: goto label_46b1ec;
        case 0x46b1f0u: goto label_46b1f0;
        case 0x46b1f4u: goto label_46b1f4;
        case 0x46b1f8u: goto label_46b1f8;
        case 0x46b1fcu: goto label_46b1fc;
        case 0x46b200u: goto label_46b200;
        case 0x46b204u: goto label_46b204;
        case 0x46b208u: goto label_46b208;
        case 0x46b20cu: goto label_46b20c;
        case 0x46b210u: goto label_46b210;
        case 0x46b214u: goto label_46b214;
        case 0x46b218u: goto label_46b218;
        case 0x46b21cu: goto label_46b21c;
        case 0x46b220u: goto label_46b220;
        case 0x46b224u: goto label_46b224;
        case 0x46b228u: goto label_46b228;
        case 0x46b22cu: goto label_46b22c;
        case 0x46b230u: goto label_46b230;
        case 0x46b234u: goto label_46b234;
        case 0x46b238u: goto label_46b238;
        case 0x46b23cu: goto label_46b23c;
        case 0x46b240u: goto label_46b240;
        case 0x46b244u: goto label_46b244;
        case 0x46b248u: goto label_46b248;
        case 0x46b24cu: goto label_46b24c;
        case 0x46b250u: goto label_46b250;
        case 0x46b254u: goto label_46b254;
        case 0x46b258u: goto label_46b258;
        case 0x46b25cu: goto label_46b25c;
        case 0x46b260u: goto label_46b260;
        case 0x46b264u: goto label_46b264;
        case 0x46b268u: goto label_46b268;
        case 0x46b26cu: goto label_46b26c;
        case 0x46b270u: goto label_46b270;
        case 0x46b274u: goto label_46b274;
        case 0x46b278u: goto label_46b278;
        case 0x46b27cu: goto label_46b27c;
        case 0x46b280u: goto label_46b280;
        case 0x46b284u: goto label_46b284;
        case 0x46b288u: goto label_46b288;
        case 0x46b28cu: goto label_46b28c;
        case 0x46b290u: goto label_46b290;
        case 0x46b294u: goto label_46b294;
        case 0x46b298u: goto label_46b298;
        case 0x46b29cu: goto label_46b29c;
        case 0x46b2a0u: goto label_46b2a0;
        case 0x46b2a4u: goto label_46b2a4;
        case 0x46b2a8u: goto label_46b2a8;
        case 0x46b2acu: goto label_46b2ac;
        case 0x46b2b0u: goto label_46b2b0;
        case 0x46b2b4u: goto label_46b2b4;
        case 0x46b2b8u: goto label_46b2b8;
        case 0x46b2bcu: goto label_46b2bc;
        case 0x46b2c0u: goto label_46b2c0;
        case 0x46b2c4u: goto label_46b2c4;
        case 0x46b2c8u: goto label_46b2c8;
        case 0x46b2ccu: goto label_46b2cc;
        case 0x46b2d0u: goto label_46b2d0;
        case 0x46b2d4u: goto label_46b2d4;
        case 0x46b2d8u: goto label_46b2d8;
        case 0x46b2dcu: goto label_46b2dc;
        case 0x46b2e0u: goto label_46b2e0;
        case 0x46b2e4u: goto label_46b2e4;
        case 0x46b2e8u: goto label_46b2e8;
        case 0x46b2ecu: goto label_46b2ec;
        case 0x46b2f0u: goto label_46b2f0;
        case 0x46b2f4u: goto label_46b2f4;
        case 0x46b2f8u: goto label_46b2f8;
        case 0x46b2fcu: goto label_46b2fc;
        case 0x46b300u: goto label_46b300;
        case 0x46b304u: goto label_46b304;
        case 0x46b308u: goto label_46b308;
        case 0x46b30cu: goto label_46b30c;
        case 0x46b310u: goto label_46b310;
        case 0x46b314u: goto label_46b314;
        case 0x46b318u: goto label_46b318;
        case 0x46b31cu: goto label_46b31c;
        case 0x46b320u: goto label_46b320;
        case 0x46b324u: goto label_46b324;
        case 0x46b328u: goto label_46b328;
        case 0x46b32cu: goto label_46b32c;
        case 0x46b330u: goto label_46b330;
        case 0x46b334u: goto label_46b334;
        case 0x46b338u: goto label_46b338;
        case 0x46b33cu: goto label_46b33c;
        case 0x46b340u: goto label_46b340;
        case 0x46b344u: goto label_46b344;
        case 0x46b348u: goto label_46b348;
        case 0x46b34cu: goto label_46b34c;
        case 0x46b350u: goto label_46b350;
        case 0x46b354u: goto label_46b354;
        case 0x46b358u: goto label_46b358;
        case 0x46b35cu: goto label_46b35c;
        case 0x46b360u: goto label_46b360;
        case 0x46b364u: goto label_46b364;
        case 0x46b368u: goto label_46b368;
        case 0x46b36cu: goto label_46b36c;
        case 0x46b370u: goto label_46b370;
        case 0x46b374u: goto label_46b374;
        case 0x46b378u: goto label_46b378;
        case 0x46b37cu: goto label_46b37c;
        case 0x46b380u: goto label_46b380;
        case 0x46b384u: goto label_46b384;
        case 0x46b388u: goto label_46b388;
        case 0x46b38cu: goto label_46b38c;
        case 0x46b390u: goto label_46b390;
        case 0x46b394u: goto label_46b394;
        case 0x46b398u: goto label_46b398;
        case 0x46b39cu: goto label_46b39c;
        case 0x46b3a0u: goto label_46b3a0;
        case 0x46b3a4u: goto label_46b3a4;
        case 0x46b3a8u: goto label_46b3a8;
        case 0x46b3acu: goto label_46b3ac;
        case 0x46b3b0u: goto label_46b3b0;
        case 0x46b3b4u: goto label_46b3b4;
        case 0x46b3b8u: goto label_46b3b8;
        case 0x46b3bcu: goto label_46b3bc;
        default: break;
    }

    ctx->pc = 0x46ab30u;

label_46ab30:
    // 0x46ab30: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x46ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_46ab34:
    // 0x46ab34: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x46ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_46ab38:
    // 0x46ab38: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x46ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_46ab3c:
    // 0x46ab3c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x46ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_46ab40:
    // 0x46ab40: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x46ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_46ab44:
    // 0x46ab44: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x46ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_46ab48:
    // 0x46ab48: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x46ab48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46ab4c:
    // 0x46ab4c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x46ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_46ab50:
    // 0x46ab50: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x46ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_46ab54:
    // 0x46ab54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x46ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_46ab58:
    // 0x46ab58: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x46ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46ab5c:
    // 0x46ab5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x46ab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_46ab60:
    // 0x46ab60: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46ab64:
    // 0x46ab64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46ab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_46ab68:
    // 0x46ab68: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x46ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_46ab6c:
    // 0x46ab6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46ab70:
    // 0x46ab70: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46ab74:
    // 0x46ab74: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x46ab74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ab78:
    // 0x46ab78: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x46ab78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_46ab7c:
    // 0x46ab7c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x46ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46ab80:
    // 0x46ab80: 0x561823  subu        $v1, $v0, $s6
    ctx->pc = 0x46ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46ab84:
    // 0x46ab84: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x46ab84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_46ab88:
    // 0x46ab88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46ab8c:
    // 0x46ab8c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x46ab8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_46ab90:
    // 0x46ab90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46ab94:
    // 0x46ab94: 0x8c5ee3e8  lw          $fp, -0x1C18($v0)
    ctx->pc = 0x46ab94u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_46ab98:
    // 0x46ab98: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x46ab98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_46ab9c:
    // 0x46ab9c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x46ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46aba0:
    // 0x46aba0: 0x24540070  addiu       $s4, $v0, 0x70
    ctx->pc = 0x46aba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_46aba4:
    // 0x46aba4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x46aba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_46aba8:
    // 0x46aba8: 0x320f809  jalr        $t9
label_46abac:
    if (ctx->pc == 0x46ABACu) {
        ctx->pc = 0x46ABACu;
            // 0x46abac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46ABB0u;
        goto label_46abb0;
    }
    ctx->pc = 0x46ABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46ABB0u);
        ctx->pc = 0x46ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46ABA8u;
            // 0x46abac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46ABB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46ABB0u; }
            if (ctx->pc != 0x46ABB0u) { return; }
        }
        }
    }
    ctx->pc = 0x46ABB0u;
label_46abb0:
    // 0x46abb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x46abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_46abb4:
    // 0x46abb4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x46abb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_46abb8:
    // 0x46abb8: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x46abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_46abbc:
    // 0x46abbc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x46abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_46abc0:
    // 0x46abc0: 0x2484caf0  addiu       $a0, $a0, -0x3510
    ctx->pc = 0x46abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953712));
label_46abc4:
    // 0x46abc4: 0x8e920048  lw          $s2, 0x48($s4)
    ctx->pc = 0x46abc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_46abc8:
    // 0x46abc8: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x46abc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_46abcc:
    // 0x46abcc: 0x8e91004c  lw          $s1, 0x4C($s4)
    ctx->pc = 0x46abccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_46abd0:
    // 0x46abd0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x46abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_46abd4:
    // 0x46abd4: 0xa3a00110  sb          $zero, 0x110($sp)
    ctx->pc = 0x46abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 0));
label_46abd8:
    // 0x46abd8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x46abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_46abdc:
    // 0x46abdc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_46abe0:
    // 0x46abe0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x46abe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46abe4:
    // 0x46abe4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x46abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46abe8:
    // 0x46abe8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x46abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46abec:
    // 0x46abec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46abf0:
    // 0x46abf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46abf4:
    // 0x46abf4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46abf8:
    // 0x46abf8: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x46abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_46abfc:
    // 0x46abfc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x46abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_46ac00:
    // 0x46ac00: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x46ac00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_46ac04:
    // 0x46ac04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x46ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_46ac08:
    // 0x46ac08: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
label_46ac0c:
    if (ctx->pc == 0x46AC0Cu) {
        ctx->pc = 0x46AC0Cu;
            // 0x46ac0c: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x46AC10u;
        goto label_46ac10;
    }
    ctx->pc = 0x46AC08u;
    {
        const bool branch_taken_0x46ac08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x46AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AC08u;
            // 0x46ac0c: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ac08) {
            ctx->pc = 0x46ACB8u;
            goto label_46acb8;
        }
    }
    ctx->pc = 0x46AC10u;
label_46ac10:
    // 0x46ac10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x46ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46ac14:
    // 0x46ac14: 0x50a20019  beql        $a1, $v0, . + 4 + (0x19 << 2)
label_46ac18:
    if (ctx->pc == 0x46AC18u) {
        ctx->pc = 0x46AC18u;
            // 0x46ac18: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x46AC1Cu;
        goto label_46ac1c;
    }
    ctx->pc = 0x46AC14u;
    {
        const bool branch_taken_0x46ac14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ac14) {
            ctx->pc = 0x46AC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46AC14u;
            // 0x46ac18: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46AC7Cu;
            goto label_46ac7c;
        }
    }
    ctx->pc = 0x46AC1Cu;
label_46ac1c:
    // 0x46ac1c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x46ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46ac20:
    // 0x46ac20: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
label_46ac24:
    if (ctx->pc == 0x46AC24u) {
        ctx->pc = 0x46AC24u;
            // 0x46ac24: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x46AC28u;
        goto label_46ac28;
    }
    ctx->pc = 0x46AC20u;
    {
        const bool branch_taken_0x46ac20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ac20) {
            ctx->pc = 0x46AC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46AC20u;
            // 0x46ac24: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46AC40u;
            goto label_46ac40;
        }
    }
    ctx->pc = 0x46AC28u;
label_46ac28:
    // 0x46ac28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46ac2c:
    // 0x46ac2c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_46ac30:
    if (ctx->pc == 0x46AC30u) {
        ctx->pc = 0x46AC34u;
        goto label_46ac34;
    }
    ctx->pc = 0x46AC2Cu;
    {
        const bool branch_taken_0x46ac2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ac2c) {
            ctx->pc = 0x46AC3Cu;
            goto label_46ac3c;
        }
    }
    ctx->pc = 0x46AC34u;
label_46ac34:
    // 0x46ac34: 0x1000002e  b           . + 4 + (0x2E << 2)
label_46ac38:
    if (ctx->pc == 0x46AC38u) {
        ctx->pc = 0x46AC38u;
            // 0x46ac38: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x46AC3Cu;
        goto label_46ac3c;
    }
    ctx->pc = 0x46AC34u;
    {
        const bool branch_taken_0x46ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AC34u;
            // 0x46ac38: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ac34) {
            ctx->pc = 0x46ACF0u;
            goto label_46acf0;
        }
    }
    ctx->pc = 0x46AC3Cu;
label_46ac3c:
    // 0x46ac3c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x46ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_46ac40:
    // 0x46ac40: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x46ac40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46ac44:
    // 0x46ac44: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x46ac44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_46ac48:
    // 0x46ac48: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46ac4c:
    // 0x46ac4c: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x46ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_46ac50:
    // 0x46ac50: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x46ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_46ac54:
    // 0x46ac54: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x46ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_46ac58:
    // 0x46ac58: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46ac5c:
    // 0x46ac5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46ac60:
    // 0x46ac60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ac64:
    // 0x46ac64: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46ac68:
    // 0x46ac68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ac6c:
    // 0x46ac6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x46ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46ac70:
    // 0x46ac70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ac74:
    // 0x46ac74: 0x1000002a  b           . + 4 + (0x2A << 2)
label_46ac78:
    if (ctx->pc == 0x46AC78u) {
        ctx->pc = 0x46AC78u;
            // 0x46ac78: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46AC7Cu;
        goto label_46ac7c;
    }
    ctx->pc = 0x46AC74u;
    {
        const bool branch_taken_0x46ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AC74u;
            // 0x46ac78: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ac74) {
            ctx->pc = 0x46AD20u;
            goto label_46ad20;
        }
    }
    ctx->pc = 0x46AC7Cu;
label_46ac7c:
    // 0x46ac7c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x46ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_46ac80:
    // 0x46ac80: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x46ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_46ac84:
    // 0x46ac84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46ac88:
    // 0x46ac88: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x46ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_46ac8c:
    // 0x46ac8c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x46ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_46ac90:
    // 0x46ac90: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x46ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_46ac94:
    // 0x46ac94: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46ac98:
    // 0x46ac98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46ac9c:
    // 0x46ac9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46aca0:
    // 0x46aca0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46aca4:
    // 0x46aca4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46aca8:
    // 0x46aca8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x46aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46acac:
    // 0x46acac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46acb0:
    // 0x46acb0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_46acb4:
    if (ctx->pc == 0x46ACB4u) {
        ctx->pc = 0x46ACB4u;
            // 0x46acb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46ACB8u;
        goto label_46acb8;
    }
    ctx->pc = 0x46ACB0u;
    {
        const bool branch_taken_0x46acb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46ACB0u;
            // 0x46acb4: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46acb0) {
            ctx->pc = 0x46AD20u;
            goto label_46ad20;
        }
    }
    ctx->pc = 0x46ACB8u;
label_46acb8:
    // 0x46acb8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x46acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_46acbc:
    // 0x46acbc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46acc0:
    // 0x46acc0: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x46acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_46acc4:
    // 0x46acc4: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x46acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_46acc8:
    // 0x46acc8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46accc:
    // 0x46accc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x46acccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46acd0:
    // 0x46acd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46acd4:
    // 0x46acd4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46acd8:
    // 0x46acd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46acdc:
    // 0x46acdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ace0:
    // 0x46ace0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x46ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46ace4:
    // 0x46ace4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ace8:
    // 0x46ace8: 0x1000000d  b           . + 4 + (0xD << 2)
label_46acec:
    if (ctx->pc == 0x46ACECu) {
        ctx->pc = 0x46ACECu;
            // 0x46acec: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46ACF0u;
        goto label_46acf0;
    }
    ctx->pc = 0x46ACE8u;
    {
        const bool branch_taken_0x46ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46ACE8u;
            // 0x46acec: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ace8) {
            ctx->pc = 0x46AD20u;
            goto label_46ad20;
        }
    }
    ctx->pc = 0x46ACF0u;
label_46acf0:
    // 0x46acf0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46acf4:
    // 0x46acf4: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x46acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_46acf8:
    // 0x46acf8: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x46acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_46acfc:
    // 0x46acfc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46ad00:
    // 0x46ad00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x46ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46ad04:
    // 0x46ad04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ad08:
    // 0x46ad08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46ad0c:
    // 0x46ad0c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_46ad10:
    // 0x46ad10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46ad14:
    // 0x46ad14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x46ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_46ad18:
    // 0x46ad18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ad1c:
    // 0x46ad1c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x46ad1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ad20:
    // 0x46ad20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46ad24:
    // 0x46ad24: 0x27a30238  addiu       $v1, $sp, 0x238
    ctx->pc = 0x46ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_46ad28:
    // 0x46ad28: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x46ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_46ad2c:
    // 0x46ad2c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_46ad30:
    if (ctx->pc == 0x46AD30u) {
        ctx->pc = 0x46AD30u;
            // 0x46ad30: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x46AD34u;
        goto label_46ad34;
    }
    ctx->pc = 0x46AD2Cu;
    {
        const bool branch_taken_0x46ad2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AD2Cu;
            // 0x46ad30: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ad2c) {
            ctx->pc = 0x46AD50u;
            goto label_46ad50;
        }
    }
    ctx->pc = 0x46AD34u;
label_46ad34:
    // 0x46ad34: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x46ad34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_46ad38:
    // 0x46ad38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46ad3c:
    // 0x46ad3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46ad40:
    // 0x46ad40: 0x0  nop
    ctx->pc = 0x46ad40u;
    // NOP
label_46ad44:
    // 0x46ad44: 0x0  nop
    ctx->pc = 0x46ad44u;
    // NOP
label_46ad48:
    // 0x46ad48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46ad4c:
    if (ctx->pc == 0x46AD4Cu) {
        ctx->pc = 0x46AD50u;
        goto label_46ad50;
    }
    ctx->pc = 0x46AD48u;
    {
        const bool branch_taken_0x46ad48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ad48) {
            ctx->pc = 0x46AD34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ad34;
        }
    }
    ctx->pc = 0x46AD50u;
label_46ad50:
    // 0x46ad50: 0x27a20238  addiu       $v0, $sp, 0x238
    ctx->pc = 0x46ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_46ad54:
    // 0x46ad54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46ad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46ad58:
    // 0x46ad58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x46ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_46ad5c:
    // 0x46ad5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x46ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46ad60:
    // 0x46ad60: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46ad60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46ad64:
    // 0x46ad64: 0x27a6025c  addiu       $a2, $sp, 0x25C
    ctx->pc = 0x46ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_46ad68:
    // 0x46ad68: 0x27a70258  addiu       $a3, $sp, 0x258
    ctx->pc = 0x46ad68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
label_46ad6c:
    // 0x46ad6c: 0x27a80254  addiu       $t0, $sp, 0x254
    ctx->pc = 0x46ad6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
label_46ad70:
    // 0x46ad70: 0x27a90250  addiu       $t1, $sp, 0x250
    ctx->pc = 0x46ad70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_46ad74:
    // 0x46ad74: 0x27aa024c  addiu       $t2, $sp, 0x24C
    ctx->pc = 0x46ad74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
label_46ad78:
    // 0x46ad78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x46ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_46ad7c:
    // 0x46ad7c: 0x27ab0248  addiu       $t3, $sp, 0x248
    ctx->pc = 0x46ad7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_46ad80:
    // 0x46ad80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46ad80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46ad84:
    // 0x46ad84: 0xc11ccac  jal         func_4732B0
label_46ad88:
    if (ctx->pc == 0x46AD88u) {
        ctx->pc = 0x46AD88u;
            // 0x46ad88: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->pc = 0x46AD8Cu;
        goto label_46ad8c;
    }
    ctx->pc = 0x46AD84u;
    SET_GPR_U32(ctx, 31, 0x46AD8Cu);
    ctx->pc = 0x46AD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AD84u;
            // 0x46ad88: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4732B0u;
    if (runtime->hasFunction(0x4732B0u)) {
        auto targetFn = runtime->lookupFunction(0x4732B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AD8Cu; }
        if (ctx->pc != 0x46AD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004732B0_0x4732b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AD8Cu; }
        if (ctx->pc != 0x46AD8Cu) { return; }
    }
    ctx->pc = 0x46AD8Cu;
label_46ad8c:
    // 0x46ad8c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x46ad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_46ad90:
    // 0x46ad90: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x46ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_46ad94:
    // 0x46ad94: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x46ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_46ad98:
    // 0x46ad98: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x46ad98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_46ad9c:
    // 0x46ad9c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x46ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_46ada0:
    // 0x46ada0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46ada0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ada4:
    // 0x46ada4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x46ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46ada8:
    // 0x46ada8: 0x8fb70258  lw          $s7, 0x258($sp)
    ctx->pc = 0x46ada8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_46adac:
    // 0x46adac: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x46adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46adb0:
    // 0x46adb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46adb4:
    // 0x46adb4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x46adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_46adb8:
    // 0x46adb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46adbc:
    // 0x46adbc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x46adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_46adc0:
    // 0x46adc0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x46adc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46adc4:
    // 0x46adc4: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x46adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_46adc8:
    // 0x46adc8: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x46adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_46adcc:
    // 0x46adcc: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x46adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46add0:
    // 0x46add0: 0xc0506b8  jal         func_141AE0
label_46add4:
    if (ctx->pc == 0x46ADD4u) {
        ctx->pc = 0x46ADD4u;
            // 0x46add4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x46ADD8u;
        goto label_46add8;
    }
    ctx->pc = 0x46ADD0u;
    SET_GPR_U32(ctx, 31, 0x46ADD8u);
    ctx->pc = 0x46ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46ADD0u;
            // 0x46add4: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ADD8u; }
        if (ctx->pc != 0x46ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ADD8u; }
        if (ctx->pc != 0x46ADD8u) { return; }
    }
    ctx->pc = 0x46ADD8u;
label_46add8:
    // 0x46add8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46add8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46addc:
    // 0x46addc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46addcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46ade0:
    // 0x46ade0: 0xc04e894  jal         func_13A250
label_46ade4:
    if (ctx->pc == 0x46ADE4u) {
        ctx->pc = 0x46ADE4u;
            // 0x46ade4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46ADE8u;
        goto label_46ade8;
    }
    ctx->pc = 0x46ADE0u;
    SET_GPR_U32(ctx, 31, 0x46ADE8u);
    ctx->pc = 0x46ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46ADE0u;
            // 0x46ade4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ADE8u; }
        if (ctx->pc != 0x46ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46ADE8u; }
        if (ctx->pc != 0x46ADE8u) { return; }
    }
    ctx->pc = 0x46ADE8u;
label_46ade8:
    // 0x46ade8: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x46ade8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
label_46adec:
    // 0x46adec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x46adecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_46adf0:
    // 0x46adf0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46adf4:
    if (ctx->pc == 0x46ADF4u) {
        ctx->pc = 0x46ADF8u;
        goto label_46adf8;
    }
    ctx->pc = 0x46ADF0u;
    {
        const bool branch_taken_0x46adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46adf0) {
            ctx->pc = 0x46ADDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46addc;
        }
    }
    ctx->pc = 0x46ADF8u;
label_46adf8:
    // 0x46adf8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46adfc:
    // 0x46adfc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46ae00:
    // 0x46ae00: 0xc440ea00  lwc1        $f0, -0x1600($v0)
    ctx->pc = 0x46ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46ae04:
    // 0x46ae04: 0xc461ea04  lwc1        $f1, -0x15FC($v1)
    ctx->pc = 0x46ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46ae08:
    // 0x46ae08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae0c:
    // 0x46ae0c: 0xc442ea08  lwc1        $f2, -0x15F8($v0)
    ctx->pc = 0x46ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46ae10:
    // 0x46ae10: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46ae14:
    // 0x46ae14: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x46ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_46ae18:
    // 0x46ae18: 0xe7a1022c  swc1        $f1, 0x22C($sp)
    ctx->pc = 0x46ae18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_46ae1c:
    // 0x46ae1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae20:
    // 0x46ae20: 0xc460ea1c  lwc1        $f0, -0x15E4($v1)
    ctx->pc = 0x46ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46ae24:
    // 0x46ae24: 0xc441ea20  lwc1        $f1, -0x15E0($v0)
    ctx->pc = 0x46ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46ae28:
    // 0x46ae28: 0xe7a20230  swc1        $f2, 0x230($sp)
    ctx->pc = 0x46ae28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_46ae2c:
    // 0x46ae2c: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x46ae2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_46ae30:
    // 0x46ae30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae34:
    // 0x46ae34: 0xc440ea24  lwc1        $f0, -0x15DC($v0)
    ctx->pc = 0x46ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46ae38:
    // 0x46ae38: 0xe7a1021c  swc1        $f1, 0x21C($sp)
    ctx->pc = 0x46ae38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_46ae3c:
    // 0x46ae3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae40:
    // 0x46ae40: 0xc44ce9e0  lwc1        $f12, -0x1620($v0)
    ctx->pc = 0x46ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46ae44:
    // 0x46ae44: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae48:
    // 0x46ae48: 0xc44de9e4  lwc1        $f13, -0x161C($v0)
    ctx->pc = 0x46ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_46ae4c:
    // 0x46ae4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46ae50:
    // 0x46ae50: 0xc44ee9e8  lwc1        $f14, -0x1618($v0)
    ctx->pc = 0x46ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_46ae54:
    // 0x46ae54: 0xc04e888  jal         func_13A220
label_46ae58:
    if (ctx->pc == 0x46AE58u) {
        ctx->pc = 0x46AE58u;
            // 0x46ae58: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->pc = 0x46AE5Cu;
        goto label_46ae5c;
    }
    ctx->pc = 0x46AE54u;
    SET_GPR_U32(ctx, 31, 0x46AE5Cu);
    ctx->pc = 0x46AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AE54u;
            // 0x46ae58: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A220u;
    if (runtime->hasFunction(0x13A220u)) {
        auto targetFn = runtime->lookupFunction(0x13A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AE5Cu; }
        if (ctx->pc != 0x46AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A220_0x13a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AE5Cu; }
        if (ctx->pc != 0x46AE5Cu) { return; }
    }
    ctx->pc = 0x46AE5Cu;
label_46ae5c:
    // 0x46ae5c: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x46ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_46ae60:
    // 0x46ae60: 0xc04cb44  jal         func_132D10
label_46ae64:
    if (ctx->pc == 0x46AE64u) {
        ctx->pc = 0x46AE64u;
            // 0x46ae64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46AE68u;
        goto label_46ae68;
    }
    ctx->pc = 0x46AE60u;
    SET_GPR_U32(ctx, 31, 0x46AE68u);
    ctx->pc = 0x46AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AE60u;
            // 0x46ae64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AE68u; }
        if (ctx->pc != 0x46AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AE68u; }
        if (ctx->pc != 0x46AE68u) { return; }
    }
    ctx->pc = 0x46AE68u;
label_46ae68:
    // 0x46ae68: 0x27a30208  addiu       $v1, $sp, 0x208
    ctx->pc = 0x46ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_46ae6c:
    // 0x46ae6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_46ae70:
    if (ctx->pc == 0x46AE70u) {
        ctx->pc = 0x46AE70u;
            // 0x46ae70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x46AE74u;
        goto label_46ae74;
    }
    ctx->pc = 0x46AE6Cu;
    {
        const bool branch_taken_0x46ae6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AE6Cu;
            // 0x46ae70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ae6c) {
            ctx->pc = 0x46AE90u;
            goto label_46ae90;
        }
    }
    ctx->pc = 0x46AE74u;
label_46ae74:
    // 0x46ae74: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x46ae74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_46ae78:
    // 0x46ae78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46ae7c:
    // 0x46ae7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46ae80:
    // 0x46ae80: 0x0  nop
    ctx->pc = 0x46ae80u;
    // NOP
label_46ae84:
    // 0x46ae84: 0x0  nop
    ctx->pc = 0x46ae84u;
    // NOP
label_46ae88:
    // 0x46ae88: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46ae8c:
    if (ctx->pc == 0x46AE8Cu) {
        ctx->pc = 0x46AE90u;
        goto label_46ae90;
    }
    ctx->pc = 0x46AE88u;
    {
        const bool branch_taken_0x46ae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ae88) {
            ctx->pc = 0x46AE74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ae74;
        }
    }
    ctx->pc = 0x46AE90u;
label_46ae90:
    // 0x46ae90: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x46ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_46ae94:
    // 0x46ae94: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x46ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_46ae98:
    // 0x46ae98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x46ae98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_46ae9c:
    // 0x46ae9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46aea0:
    // 0x46aea0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x46aea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_46aea4:
    // 0x46aea4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x46aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46aea8:
    // 0x46aea8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x46aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_46aeac:
    // 0x46aeac: 0x24a5e9f0  addiu       $a1, $a1, -0x1610
    ctx->pc = 0x46aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961648));
label_46aeb0:
    // 0x46aeb0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x46aeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_46aeb4:
    // 0x46aeb4: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x46aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_46aeb8:
    // 0x46aeb8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x46aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_46aebc:
    // 0x46aebc: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x46aebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_46aec0:
    // 0x46aec0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46aec4:
    // 0x46aec4: 0xc44ce9ec  lwc1        $f12, -0x1614($v0)
    ctx->pc = 0x46aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46aec8:
    // 0x46aec8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x46aec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_46aecc:
    // 0x46aecc: 0xc04e95c  jal         func_13A570
label_46aed0:
    if (ctx->pc == 0x46AED0u) {
        ctx->pc = 0x46AED0u;
            // 0x46aed0: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->pc = 0x46AED4u;
        goto label_46aed4;
    }
    ctx->pc = 0x46AECCu;
    SET_GPR_U32(ctx, 31, 0x46AED4u);
    ctx->pc = 0x46AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AECCu;
            // 0x46aed0: 0x27a70228  addiu       $a3, $sp, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A570u;
    if (runtime->hasFunction(0x13A570u)) {
        auto targetFn = runtime->lookupFunction(0x13A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AED4u; }
        if (ctx->pc != 0x46AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A570_0x13a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AED4u; }
        if (ctx->pc != 0x46AED4u) { return; }
    }
    ctx->pc = 0x46AED4u;
label_46aed4:
    // 0x46aed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46aed8:
    // 0x46aed8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x46aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_46aedc:
    // 0x46aedc: 0xc04e9a8  jal         func_13A6A0
label_46aee0:
    if (ctx->pc == 0x46AEE0u) {
        ctx->pc = 0x46AEE0u;
            // 0x46aee0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x46AEE4u;
        goto label_46aee4;
    }
    ctx->pc = 0x46AEDCu;
    SET_GPR_U32(ctx, 31, 0x46AEE4u);
    ctx->pc = 0x46AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AEDCu;
            // 0x46aee0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEE4u; }
        if (ctx->pc != 0x46AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEE4u; }
        if (ctx->pc != 0x46AEE4u) { return; }
    }
    ctx->pc = 0x46AEE4u;
label_46aee4:
    // 0x46aee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46aee8:
    // 0x46aee8: 0xc04e894  jal         func_13A250
label_46aeec:
    if (ctx->pc == 0x46AEECu) {
        ctx->pc = 0x46AEECu;
            // 0x46aeec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46AEF0u;
        goto label_46aef0;
    }
    ctx->pc = 0x46AEE8u;
    SET_GPR_U32(ctx, 31, 0x46AEF0u);
    ctx->pc = 0x46AEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AEE8u;
            // 0x46aeec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEF0u; }
        if (ctx->pc != 0x46AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEF0u; }
        if (ctx->pc != 0x46AEF0u) { return; }
    }
    ctx->pc = 0x46AEF0u;
label_46aef0:
    // 0x46aef0: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x46aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_46aef4:
    // 0x46aef4: 0xc04cb44  jal         func_132D10
label_46aef8:
    if (ctx->pc == 0x46AEF8u) {
        ctx->pc = 0x46AEF8u;
            // 0x46aef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46AEFCu;
        goto label_46aefc;
    }
    ctx->pc = 0x46AEF4u;
    SET_GPR_U32(ctx, 31, 0x46AEFCu);
    ctx->pc = 0x46AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AEF4u;
            // 0x46aef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEFCu; }
        if (ctx->pc != 0x46AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AEFCu; }
        if (ctx->pc != 0x46AEFCu) { return; }
    }
    ctx->pc = 0x46AEFCu;
label_46aefc:
    // 0x46aefc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46af00:
    // 0x46af00: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x46af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_46af04:
    // 0x46af04: 0x24a5ea0c  addiu       $a1, $a1, -0x15F4
    ctx->pc = 0x46af04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961676));
label_46af08:
    // 0x46af08: 0xc04e94c  jal         func_13A530
label_46af0c:
    if (ctx->pc == 0x46AF0Cu) {
        ctx->pc = 0x46AF0Cu;
            // 0x46af0c: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->pc = 0x46AF10u;
        goto label_46af10;
    }
    ctx->pc = 0x46AF08u;
    SET_GPR_U32(ctx, 31, 0x46AF10u);
    ctx->pc = 0x46AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF08u;
            // 0x46af0c: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (runtime->hasFunction(0x13A530u)) {
        auto targetFn = runtime->lookupFunction(0x13A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF10u; }
        if (ctx->pc != 0x46AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A530_0x13a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF10u; }
        if (ctx->pc != 0x46AF10u) { return; }
    }
    ctx->pc = 0x46AF10u;
label_46af10:
    // 0x46af10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46af14:
    // 0x46af14: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x46af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_46af18:
    // 0x46af18: 0xc04e9a8  jal         func_13A6A0
label_46af1c:
    if (ctx->pc == 0x46AF1Cu) {
        ctx->pc = 0x46AF1Cu;
            // 0x46af1c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x46AF20u;
        goto label_46af20;
    }
    ctx->pc = 0x46AF18u;
    SET_GPR_U32(ctx, 31, 0x46AF20u);
    ctx->pc = 0x46AF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF18u;
            // 0x46af1c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (runtime->hasFunction(0x13A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x13A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF20u; }
        if (ctx->pc != 0x46AF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A6A0_0x13a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF20u; }
        if (ctx->pc != 0x46AF20u) { return; }
    }
    ctx->pc = 0x46AF20u;
label_46af20:
    // 0x46af20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46af24:
    // 0x46af24: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x46af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_46af28:
    // 0x46af28: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x46af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46af2c:
    // 0x46af2c: 0xc04ecc0  jal         func_13B300
label_46af30:
    if (ctx->pc == 0x46AF30u) {
        ctx->pc = 0x46AF30u;
            // 0x46af30: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46AF34u;
        goto label_46af34;
    }
    ctx->pc = 0x46AF2Cu;
    SET_GPR_U32(ctx, 31, 0x46AF34u);
    ctx->pc = 0x46AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF2Cu;
            // 0x46af30: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B300u;
    if (runtime->hasFunction(0x13B300u)) {
        auto targetFn = runtime->lookupFunction(0x13B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF34u; }
        if (ctx->pc != 0x46AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B300_0x13b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF34u; }
        if (ctx->pc != 0x46AF34u) { return; }
    }
    ctx->pc = 0x46AF34u;
label_46af34:
    // 0x46af34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46af38:
    // 0x46af38: 0xc04e894  jal         func_13A250
label_46af3c:
    if (ctx->pc == 0x46AF3Cu) {
        ctx->pc = 0x46AF3Cu;
            // 0x46af3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46AF40u;
        goto label_46af40;
    }
    ctx->pc = 0x46AF38u;
    SET_GPR_U32(ctx, 31, 0x46AF40u);
    ctx->pc = 0x46AF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF38u;
            // 0x46af3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF40u; }
        if (ctx->pc != 0x46AF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF40u; }
        if (ctx->pc != 0x46AF40u) { return; }
    }
    ctx->pc = 0x46AF40u;
label_46af40:
    // 0x46af40: 0xc04f01c  jal         func_13C070
label_46af44:
    if (ctx->pc == 0x46AF44u) {
        ctx->pc = 0x46AF48u;
        goto label_46af48;
    }
    ctx->pc = 0x46AF40u;
    SET_GPR_U32(ctx, 31, 0x46AF48u);
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF48u; }
        if (ctx->pc != 0x46AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C070_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF48u; }
        if (ctx->pc != 0x46AF48u) { return; }
    }
    ctx->pc = 0x46AF48u;
label_46af48:
    // 0x46af48: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x46af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_46af4c:
    // 0x46af4c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x46af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_46af50:
    // 0x46af50: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46af54:
    // 0x46af54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46af58:
    // 0x46af58: 0xc04f018  jal         func_13C060
label_46af5c:
    if (ctx->pc == 0x46AF5Cu) {
        ctx->pc = 0x46AF5Cu;
            // 0x46af5c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x46AF60u;
        goto label_46af60;
    }
    ctx->pc = 0x46AF58u;
    SET_GPR_U32(ctx, 31, 0x46AF60u);
    ctx->pc = 0x46AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF58u;
            // 0x46af5c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C060u;
    if (runtime->hasFunction(0x13C060u)) {
        auto targetFn = runtime->lookupFunction(0x13C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF60u; }
        if (ctx->pc != 0x46AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C060_0x13c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF60u; }
        if (ctx->pc != 0x46AF60u) { return; }
    }
    ctx->pc = 0x46AF60u;
label_46af60:
    // 0x46af60: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x46af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_46af64:
    // 0x46af64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46af68:
    // 0x46af68: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x46af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_46af6c:
    // 0x46af6c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46af70:
    // 0x46af70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46af74:
    // 0x46af74: 0xc04f674  jal         func_13D9D0
label_46af78:
    if (ctx->pc == 0x46AF78u) {
        ctx->pc = 0x46AF78u;
            // 0x46af78: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->pc = 0x46AF7Cu;
        goto label_46af7c;
    }
    ctx->pc = 0x46AF74u;
    SET_GPR_U32(ctx, 31, 0x46AF7Cu);
    ctx->pc = 0x46AF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF74u;
            // 0x46af78: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF7Cu; }
        if (ctx->pc != 0x46AF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF7Cu; }
        if (ctx->pc != 0x46AF7Cu) { return; }
    }
    ctx->pc = 0x46AF7Cu;
label_46af7c:
    // 0x46af7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x46af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46af80:
    // 0x46af80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46af84:
    // 0x46af84: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x46af84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_46af88:
    // 0x46af88: 0xc04e4a4  jal         func_139290
label_46af8c:
    if (ctx->pc == 0x46AF8Cu) {
        ctx->pc = 0x46AF8Cu;
            // 0x46af8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46AF90u;
        goto label_46af90;
    }
    ctx->pc = 0x46AF88u;
    SET_GPR_U32(ctx, 31, 0x46AF90u);
    ctx->pc = 0x46AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AF88u;
            // 0x46af8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF90u; }
        if (ctx->pc != 0x46AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AF90u; }
        if (ctx->pc != 0x46AF90u) { return; }
    }
    ctx->pc = 0x46AF90u;
label_46af90:
    // 0x46af90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46af90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46af94:
    // 0x46af94: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x46af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
label_46af98:
    // 0x46af98: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x46af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46af9c:
    // 0x46af9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46af9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46afa0:
    // 0x46afa0: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x46afa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_46afa4:
    // 0x46afa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_46afa8:
    if (ctx->pc == 0x46AFA8u) {
        ctx->pc = 0x46AFA8u;
            // 0x46afa8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x46AFACu;
        goto label_46afac;
    }
    ctx->pc = 0x46AFA4u;
    {
        const bool branch_taken_0x46afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46AFA4u;
            // 0x46afa8: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46afa4) {
            ctx->pc = 0x46AFBCu;
            goto label_46afbc;
        }
    }
    ctx->pc = 0x46AFACu;
label_46afac:
    // 0x46afac: 0x3c02c200  lui         $v0, 0xC200
    ctx->pc = 0x46afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49664 << 16));
label_46afb0:
    // 0x46afb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46afb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46afb4:
    // 0x46afb4: 0x0  nop
    ctx->pc = 0x46afb4u;
    // NOP
label_46afb8:
    // 0x46afb8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x46afb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_46afbc:
    // 0x46afbc: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x46afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_46afc0:
    // 0x46afc0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x46afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46afc4:
    // 0x46afc4: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x46afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46afc8:
    // 0x46afc8: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x46afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46afcc:
    // 0x46afcc: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x46afccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_46afd0:
    // 0x46afd0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x46afd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_46afd4:
    // 0x46afd4: 0x4603a001  sub.s       $f0, $f20, $f3
    ctx->pc = 0x46afd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
label_46afd8:
    // 0x46afd8: 0xc7a2023c  lwc1        $f2, 0x23C($sp)
    ctx->pc = 0x46afd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46afdc:
    // 0x46afdc: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x46afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_46afe0:
    // 0x46afe0: 0xc7a40238  lwc1        $f4, 0x238($sp)
    ctx->pc = 0x46afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_46afe4:
    // 0x46afe4: 0x46001340  add.s       $f13, $f2, $f0
    ctx->pc = 0x46afe4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_46afe8:
    // 0x46afe8: 0xc04f3fc  jal         func_13CFF0
label_46afec:
    if (ctx->pc == 0x46AFECu) {
        ctx->pc = 0x46AFECu;
            // 0x46afec: 0x46042b00  add.s       $f12, $f5, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->pc = 0x46AFF0u;
        goto label_46aff0;
    }
    ctx->pc = 0x46AFE8u;
    SET_GPR_U32(ctx, 31, 0x46AFF0u);
    ctx->pc = 0x46AFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46AFE8u;
            // 0x46afec: 0x46042b00  add.s       $f12, $f5, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AFF0u; }
        if (ctx->pc != 0x46AFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46AFF0u; }
        if (ctx->pc != 0x46AFF0u) { return; }
    }
    ctx->pc = 0x46AFF0u;
label_46aff0:
    // 0x46aff0: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46aff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46aff4:
    // 0x46aff4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x46aff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_46aff8:
    // 0x46aff8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_46affc:
    if (ctx->pc == 0x46AFFCu) {
        ctx->pc = 0x46B000u;
        goto label_46b000;
    }
    ctx->pc = 0x46AFF8u;
    {
        const bool branch_taken_0x46aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46aff8) {
            ctx->pc = 0x46B06Cu;
            goto label_46b06c;
        }
    }
    ctx->pc = 0x46B000u;
label_46b000:
    // 0x46b000: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46b004:
    // 0x46b004: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x46b004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_46b008:
    // 0x46b008: 0xc4420838  lwc1        $f2, 0x838($v0)
    ctx->pc = 0x46b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46b00c:
    // 0x46b00c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x46b00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b010:
    // 0x46b010: 0x0  nop
    ctx->pc = 0x46b010u;
    // NOP
label_46b014:
    // 0x46b014: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x46b014u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_46b018:
    // 0x46b018: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46b01c:
    // 0x46b01c: 0xc4400840  lwc1        $f0, 0x840($v0)
    ctx->pc = 0x46b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b020:
    // 0x46b020: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x46b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46b024:
    // 0x46b024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x46b024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_46b028:
    // 0x46b028: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x46b028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46b02c:
    // 0x46b02c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_46b030:
    if (ctx->pc == 0x46B030u) {
        ctx->pc = 0x46B030u;
            // 0x46b030: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->pc = 0x46B034u;
        goto label_46b034;
    }
    ctx->pc = 0x46B02Cu;
    {
        const bool branch_taken_0x46b02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x46B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B02Cu;
            // 0x46b030: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b02c) {
            ctx->pc = 0x46B03Cu;
            goto label_46b03c;
        }
    }
    ctx->pc = 0x46B034u;
label_46b034:
    // 0x46b034: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x46b034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_46b038:
    // 0x46b038: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x46b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_46b03c:
    // 0x46b03c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x46b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46b040:
    // 0x46b040: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x46b040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46b044:
    // 0x46b044: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_46b048:
    if (ctx->pc == 0x46B048u) {
        ctx->pc = 0x46B048u;
            // 0x46b048: 0xc7a001f4  lwc1        $f0, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x46B04Cu;
        goto label_46b04c;
    }
    ctx->pc = 0x46B044u;
    {
        const bool branch_taken_0x46b044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x46b044) {
            ctx->pc = 0x46B048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B044u;
            // 0x46b048: 0xc7a001f4  lwc1        $f0, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B064u;
            goto label_46b064;
        }
    }
    ctx->pc = 0x46B04Cu;
label_46b04c:
    // 0x46b04c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x46b04cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_46b050:
    // 0x46b050: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x46b050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_46b054:
    // 0x46b054: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x46b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b058:
    // 0x46b058: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x46b058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_46b05c:
    // 0x46b05c: 0x10000003  b           . + 4 + (0x3 << 2)
label_46b060:
    if (ctx->pc == 0x46B060u) {
        ctx->pc = 0x46B060u;
            // 0x46b060: 0xe7a001f4  swc1        $f0, 0x1F4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
        ctx->pc = 0x46B064u;
        goto label_46b064;
    }
    ctx->pc = 0x46B05Cu;
    {
        const bool branch_taken_0x46b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B05Cu;
            // 0x46b060: 0xe7a001f4  swc1        $f0, 0x1F4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b05c) {
            ctx->pc = 0x46B06Cu;
            goto label_46b06c;
        }
    }
    ctx->pc = 0x46B064u;
label_46b064:
    // 0x46b064: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x46b064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_46b068:
    // 0x46b068: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x46b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_46b06c:
    // 0x46b06c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46b070:
    // 0x46b070: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x46b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46b074:
    // 0x46b074: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x46b074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_46b078:
    // 0x46b078: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_46b07c:
    if (ctx->pc == 0x46B07Cu) {
        ctx->pc = 0x46B07Cu;
            // 0x46b07c: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->pc = 0x46B080u;
        goto label_46b080;
    }
    ctx->pc = 0x46B078u;
    {
        const bool branch_taken_0x46b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b078) {
            ctx->pc = 0x46B07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B078u;
            // 0x46b07c: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B09Cu;
            goto label_46b09c;
        }
    }
    ctx->pc = 0x46B080u;
label_46b080:
    // 0x46b080: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x46b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46b084:
    // 0x46b084: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x46b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_46b088:
    // 0x46b088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46b088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b08c:
    // 0x46b08c: 0x0  nop
    ctx->pc = 0x46b08cu;
    // NOP
label_46b090:
    // 0x46b090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x46b090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_46b094:
    // 0x46b094: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x46b094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_46b098:
    // 0x46b098: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x46b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_46b09c:
    // 0x46b09c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x46b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b0a0:
    // 0x46b0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46b0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b0a4:
    // 0x46b0a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46b0a8:
    // 0x46b0a8: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x46b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_46b0ac:
    // 0x46b0ac: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x46b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_46b0b0:
    // 0x46b0b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x46b0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b0b4:
    // 0x46b0b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x46b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_46b0b8:
    // 0x46b0b8: 0x24a300b4  addiu       $v1, $a1, 0xB4
    ctx->pc = 0x46b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 180));
label_46b0bc:
    // 0x46b0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46b0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b0c0:
    // 0x46b0c0: 0x0  nop
    ctx->pc = 0x46b0c0u;
    // NOP
label_46b0c4:
    // 0x46b0c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x46b0c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_46b0c8:
    // 0x46b0c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b0cc:
    // 0x46b0cc: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x46b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_46b0d0:
    // 0x46b0d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46b0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_46b0d4:
    // 0x46b0d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x46b0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_46b0d8:
    // 0x46b0d8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x46b0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_46b0dc:
    // 0x46b0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46b0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b0e0:
    // 0x46b0e0: 0x0  nop
    ctx->pc = 0x46b0e0u;
    // NOP
label_46b0e4:
    // 0x46b0e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x46b0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_46b0e8:
    // 0x46b0e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x46b0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_46b0ec:
    // 0x46b0ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x46b0ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_46b0f0:
    // 0x46b0f0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x46b0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_46b0f4:
    // 0x46b0f4: 0xc04ce30  jal         func_1338C0
label_46b0f8:
    if (ctx->pc == 0x46B0F8u) {
        ctx->pc = 0x46B0F8u;
            // 0x46b0f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B0FCu;
        goto label_46b0fc;
    }
    ctx->pc = 0x46B0F4u;
    SET_GPR_U32(ctx, 31, 0x46B0FCu);
    ctx->pc = 0x46B0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B0F4u;
            // 0x46b0f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B0FCu; }
        if (ctx->pc != 0x46B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B0FCu; }
        if (ctx->pc != 0x46B0FCu) { return; }
    }
    ctx->pc = 0x46B0FCu;
label_46b0fc:
    // 0x46b0fc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x46b0fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46b100:
    // 0x46b100: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x46b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b104:
    // 0x46b104: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46b104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b108:
    // 0x46b108: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x46b108u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_46b10c:
    // 0x46b10c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x46b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_46b110:
    // 0x46b110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b114:
    // 0x46b114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46b114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b118:
    // 0x46b118: 0x0  nop
    ctx->pc = 0x46b118u;
    // NOP
label_46b11c:
    // 0x46b11c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x46b11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_46b120:
    // 0x46b120: 0x4600b302  mul.s       $f12, $f22, $f0
    ctx->pc = 0x46b120u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_46b124:
    // 0x46b124: 0xc04ce50  jal         func_133940
label_46b128:
    if (ctx->pc == 0x46B128u) {
        ctx->pc = 0x46B128u;
            // 0x46b128: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x46B12Cu;
        goto label_46b12c;
    }
    ctx->pc = 0x46B124u;
    SET_GPR_U32(ctx, 31, 0x46B12Cu);
    ctx->pc = 0x46B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B124u;
            // 0x46b128: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B12Cu; }
        if (ctx->pc != 0x46B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B12Cu; }
        if (ctx->pc != 0x46B12Cu) { return; }
    }
    ctx->pc = 0x46B12Cu;
label_46b12c:
    // 0x46b12c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x46b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_46b130:
    // 0x46b130: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46b134:
    // 0x46b134: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x46b134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46b138:
    // 0x46b138: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x46b138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b13c:
    // 0x46b13c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x46b13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_46b140:
    // 0x46b140: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46b140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b144:
    // 0x46b144: 0xc04ce50  jal         func_133940
label_46b148:
    if (ctx->pc == 0x46B148u) {
        ctx->pc = 0x46B148u;
            // 0x46b148: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x46B14Cu;
        goto label_46b14c;
    }
    ctx->pc = 0x46B144u;
    SET_GPR_U32(ctx, 31, 0x46B14Cu);
    ctx->pc = 0x46B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B144u;
            // 0x46b148: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B14Cu; }
        if (ctx->pc != 0x46B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B14Cu; }
        if (ctx->pc != 0x46B14Cu) { return; }
    }
    ctx->pc = 0x46B14Cu;
label_46b14c:
    // 0x46b14c: 0xc04e738  jal         func_139CE0
label_46b150:
    if (ctx->pc == 0x46B150u) {
        ctx->pc = 0x46B150u;
            // 0x46b150: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x46B154u;
        goto label_46b154;
    }
    ctx->pc = 0x46B14Cu;
    SET_GPR_U32(ctx, 31, 0x46B154u);
    ctx->pc = 0x46B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B14Cu;
            // 0x46b150: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B154u; }
        if (ctx->pc != 0x46B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B154u; }
        if (ctx->pc != 0x46B154u) { return; }
    }
    ctx->pc = 0x46B154u;
label_46b154:
    // 0x46b154: 0x8e870040  lw          $a3, 0x40($s4)
    ctx->pc = 0x46b154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_46b158:
    // 0x46b158: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
label_46b15c:
    if (ctx->pc == 0x46B15Cu) {
        ctx->pc = 0x46B15Cu;
            // 0x46b15c: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x46B160u;
        goto label_46b160;
    }
    ctx->pc = 0x46B158u;
    {
        const bool branch_taken_0x46b158 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b158) {
            ctx->pc = 0x46B15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B158u;
            // 0x46b15c: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B18Cu;
            goto label_46b18c;
        }
    }
    ctx->pc = 0x46B160u;
label_46b160:
    // 0x46b160: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x46b160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b164:
    // 0x46b164: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x46b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46b168:
    // 0x46b168: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x46b168u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_46b16c:
    // 0x46b16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b170:
    // 0x46b170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b174:
    // 0x46b174: 0x27a801c0  addiu       $t0, $sp, 0x1C0
    ctx->pc = 0x46b174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b178:
    // 0x46b178: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x46b178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_46b17c:
    // 0x46b17c: 0xc04cff4  jal         func_133FD0
label_46b180:
    if (ctx->pc == 0x46B180u) {
        ctx->pc = 0x46B180u;
            // 0x46b180: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B184u;
        goto label_46b184;
    }
    ctx->pc = 0x46B17Cu;
    SET_GPR_U32(ctx, 31, 0x46B184u);
    ctx->pc = 0x46B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B17Cu;
            // 0x46b180: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B184u; }
        if (ctx->pc != 0x46B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B184u; }
        if (ctx->pc != 0x46B184u) { return; }
    }
    ctx->pc = 0x46B184u;
label_46b184:
    // 0x46b184: 0x10000009  b           . + 4 + (0x9 << 2)
label_46b188:
    if (ctx->pc == 0x46B188u) {
        ctx->pc = 0x46B188u;
            // 0x46b188: 0x93a20110  lbu         $v0, 0x110($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->pc = 0x46B18Cu;
        goto label_46b18c;
    }
    ctx->pc = 0x46B184u;
    {
        const bool branch_taken_0x46b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B184u;
            // 0x46b188: 0x93a20110  lbu         $v0, 0x110($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b184) {
            ctx->pc = 0x46B1ACu;
            goto label_46b1ac;
        }
    }
    ctx->pc = 0x46B18Cu;
label_46b18c:
    // 0x46b18c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x46b18cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_46b190:
    // 0x46b190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b194:
    // 0x46b194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b198:
    // 0x46b198: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x46b198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b19c:
    // 0x46b19c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x46b19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_46b1a0:
    // 0x46b1a0: 0xc04cfcc  jal         func_133F30
label_46b1a4:
    if (ctx->pc == 0x46B1A4u) {
        ctx->pc = 0x46B1A4u;
            // 0x46b1a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B1A8u;
        goto label_46b1a8;
    }
    ctx->pc = 0x46B1A0u;
    SET_GPR_U32(ctx, 31, 0x46B1A8u);
    ctx->pc = 0x46B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B1A0u;
            // 0x46b1a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B1A8u; }
        if (ctx->pc != 0x46B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B1A8u; }
        if (ctx->pc != 0x46B1A8u) { return; }
    }
    ctx->pc = 0x46B1A8u;
label_46b1a8:
    // 0x46b1a8: 0x93a20110  lbu         $v0, 0x110($sp)
    ctx->pc = 0x46b1a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
label_46b1ac:
    // 0x46b1ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_46b1b0:
    if (ctx->pc == 0x46B1B0u) {
        ctx->pc = 0x46B1B4u;
        goto label_46b1b4;
    }
    ctx->pc = 0x46B1ACu;
    {
        const bool branch_taken_0x46b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b1ac) {
            ctx->pc = 0x46B1F0u;
            goto label_46b1f0;
        }
    }
    ctx->pc = 0x46B1B4u;
label_46b1b4:
    // 0x46b1b4: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x46b1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_46b1b8:
    // 0x46b1b8: 0x24071290  addiu       $a3, $zero, 0x1290
    ctx->pc = 0x46b1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4752));
label_46b1bc:
    // 0x46b1bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46b1c0:
    // 0x46b1c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x46b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b1c4:
    // 0x46b1c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x46b1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46b1c8:
    // 0x46b1c8: 0x8c450848  lw          $a1, 0x848($v0)
    ctx->pc = 0x46b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2120)));
label_46b1cc:
    // 0x46b1cc: 0x29030024  slti        $v1, $t0, 0x24
    ctx->pc = 0x46b1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)36) ? 1 : 0);
label_46b1d0:
    // 0x46b1d0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x46b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_46b1d4:
    // 0x46b1d4: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x46b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_46b1d8:
    // 0x46b1d8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x46b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_46b1dc:
    // 0x46b1dc: 0x24e70090  addiu       $a3, $a3, 0x90
    ctx->pc = 0x46b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
label_46b1e0:
    // 0x46b1e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x46b1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_46b1e4:
    // 0x46b1e4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_46b1e8:
    if (ctx->pc == 0x46B1E8u) {
        ctx->pc = 0x46B1E8u;
            // 0x46b1e8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x46B1ECu;
        goto label_46b1ec;
    }
    ctx->pc = 0x46B1E4u;
    {
        const bool branch_taken_0x46b1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B1E4u;
            // 0x46b1e8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1e4) {
            ctx->pc = 0x46B1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46b1c0;
        }
    }
    ctx->pc = 0x46B1ECu;
label_46b1ec:
    // 0x46b1ec: 0x0  nop
    ctx->pc = 0x46b1ecu;
    // NOP
label_46b1f0:
    // 0x46b1f0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x46b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_46b1f4:
    // 0x46b1f4: 0x202a824  and         $s5, $s0, $v0
    ctx->pc = 0x46b1f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_46b1f8:
    // 0x46b1f8: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_46b1fc:
    if (ctx->pc == 0x46B1FCu) {
        ctx->pc = 0x46B1FCu;
            // 0x46b1fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x46B200u;
        goto label_46b200;
    }
    ctx->pc = 0x46B1F8u;
    {
        const bool branch_taken_0x46b1f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B1F8u;
            // 0x46b1fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1f8) {
            ctx->pc = 0x46B220u;
            goto label_46b220;
        }
    }
    ctx->pc = 0x46B200u;
label_46b200:
    // 0x46b200: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x46b200u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
label_46b204:
    // 0x46b204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b208:
    // 0x46b208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46b208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b20c:
    // 0x46b20c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x46b20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46b210:
    // 0x46b210: 0xc0538d8  jal         func_14E360
label_46b214:
    if (ctx->pc == 0x46B214u) {
        ctx->pc = 0x46B214u;
            // 0x46b214: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B218u;
        goto label_46b218;
    }
    ctx->pc = 0x46B210u;
    SET_GPR_U32(ctx, 31, 0x46B218u);
    ctx->pc = 0x46B214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B210u;
            // 0x46b214: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B218u; }
        if (ctx->pc != 0x46B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B218u; }
        if (ctx->pc != 0x46B218u) { return; }
    }
    ctx->pc = 0x46B218u;
label_46b218:
    // 0x46b218: 0x10000008  b           . + 4 + (0x8 << 2)
label_46b21c:
    if (ctx->pc == 0x46B21Cu) {
        ctx->pc = 0x46B21Cu;
            // 0x46b21c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x46B220u;
        goto label_46b220;
    }
    ctx->pc = 0x46B218u;
    {
        const bool branch_taken_0x46b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B218u;
            // 0x46b21c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b218) {
            ctx->pc = 0x46B23Cu;
            goto label_46b23c;
        }
    }
    ctx->pc = 0x46B220u;
label_46b220:
    // 0x46b220: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x46b220u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
label_46b224:
    // 0x46b224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b228:
    // 0x46b228: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46b228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b22c:
    // 0x46b22c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x46b22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46b230:
    // 0x46b230: 0xc050044  jal         func_140110
label_46b234:
    if (ctx->pc == 0x46B234u) {
        ctx->pc = 0x46B234u;
            // 0x46b234: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B238u;
        goto label_46b238;
    }
    ctx->pc = 0x46B230u;
    SET_GPR_U32(ctx, 31, 0x46B238u);
    ctx->pc = 0x46B234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B230u;
            // 0x46b234: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B238u; }
        if (ctx->pc != 0x46B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B238u; }
        if (ctx->pc != 0x46B238u) { return; }
    }
    ctx->pc = 0x46B238u;
label_46b238:
    // 0x46b238: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x46b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b23c:
    // 0x46b23c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x46b23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_46b240:
    // 0x46b240: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x46b240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_46b244:
    // 0x46b244: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46b244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46b248:
    // 0x46b248: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x46b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_46b24c:
    // 0x46b24c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_46b250:
    if (ctx->pc == 0x46B250u) {
        ctx->pc = 0x46B254u;
        goto label_46b254;
    }
    ctx->pc = 0x46B24Cu;
    {
        const bool branch_taken_0x46b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b24c) {
            ctx->pc = 0x46B358u;
            goto label_46b358;
        }
    }
    ctx->pc = 0x46B254u;
label_46b254:
    // 0x46b254: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x46b254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_46b258:
    // 0x46b258: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46b258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46b25c:
    // 0x46b25c: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x46b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46b260:
    // 0x46b260: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x46b260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_46b264:
    // 0x46b264: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x46b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_46b268:
    // 0x46b268: 0x2463f2d0  addiu       $v1, $v1, -0xD30
    ctx->pc = 0x46b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963920));
label_46b26c:
    // 0x46b26c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x46b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_46b270:
    // 0x46b270: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x46b270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_46b274:
    // 0x46b274: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_46b278:
    if (ctx->pc == 0x46B278u) {
        ctx->pc = 0x46B278u;
            // 0x46b278: 0x62b021  addu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x46B27Cu;
        goto label_46b27c;
    }
    ctx->pc = 0x46B274u;
    {
        const bool branch_taken_0x46b274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B274u;
            // 0x46b278: 0x62b021  addu        $s6, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b274) {
            ctx->pc = 0x46B2B0u;
            goto label_46b2b0;
        }
    }
    ctx->pc = 0x46B27Cu;
label_46b27c:
    // 0x46b27c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x46b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b280:
    // 0x46b280: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x46b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_46b284:
    // 0x46b284: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x46b284u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46b288:
    // 0x46b288: 0xc0528ec  jal         func_14A3B0
label_46b28c:
    if (ctx->pc == 0x46B28Cu) {
        ctx->pc = 0x46B28Cu;
            // 0x46b28c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B290u;
        goto label_46b290;
    }
    ctx->pc = 0x46B288u;
    SET_GPR_U32(ctx, 31, 0x46B290u);
    ctx->pc = 0x46B28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B288u;
            // 0x46b28c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B290u; }
        if (ctx->pc != 0x46B290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B290u; }
        if (ctx->pc != 0x46B290u) { return; }
    }
    ctx->pc = 0x46B290u;
label_46b290:
    // 0x46b290: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x46b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_46b294:
    // 0x46b294: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x46b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46b298:
    // 0x46b298: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x46b298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_46b29c:
    // 0x46b29c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x46b29cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46b2a0:
    // 0x46b2a0: 0xc04cce8  jal         func_1333A0
label_46b2a4:
    if (ctx->pc == 0x46B2A4u) {
        ctx->pc = 0x46B2A4u;
            // 0x46b2a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46B2A8u;
        goto label_46b2a8;
    }
    ctx->pc = 0x46B2A0u;
    SET_GPR_U32(ctx, 31, 0x46B2A8u);
    ctx->pc = 0x46B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2A0u;
            // 0x46b2a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2A8u; }
        if (ctx->pc != 0x46B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2A8u; }
        if (ctx->pc != 0x46B2A8u) { return; }
    }
    ctx->pc = 0x46B2A8u;
label_46b2a8:
    // 0x46b2a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_46b2ac:
    if (ctx->pc == 0x46B2ACu) {
        ctx->pc = 0x46B2ACu;
            // 0x46b2ac: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x46B2B0u;
        goto label_46b2b0;
    }
    ctx->pc = 0x46B2A8u;
    {
        const bool branch_taken_0x46b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2A8u;
            // 0x46b2ac: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b2a8) {
            ctx->pc = 0x46B2C4u;
            goto label_46b2c4;
        }
    }
    ctx->pc = 0x46B2B0u;
label_46b2b0:
    // 0x46b2b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46b2b4:
    // 0x46b2b4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x46b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46b2b8:
    // 0x46b2b8: 0xc04cce8  jal         func_1333A0
label_46b2bc:
    if (ctx->pc == 0x46B2BCu) {
        ctx->pc = 0x46B2BCu;
            // 0x46b2bc: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->pc = 0x46B2C0u;
        goto label_46b2c0;
    }
    ctx->pc = 0x46B2B8u;
    SET_GPR_U32(ctx, 31, 0x46B2C0u);
    ctx->pc = 0x46B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2B8u;
            // 0x46b2bc: 0x24a5f210  addiu       $a1, $a1, -0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2C0u; }
        if (ctx->pc != 0x46B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2C0u; }
        if (ctx->pc != 0x46B2C0u) { return; }
    }
    ctx->pc = 0x46B2C0u;
label_46b2c0:
    // 0x46b2c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x46b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46b2c4:
    // 0x46b2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b2c8:
    // 0x46b2c8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x46b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_46b2cc:
    // 0x46b2cc: 0xc04e4a4  jal         func_139290
label_46b2d0:
    if (ctx->pc == 0x46B2D0u) {
        ctx->pc = 0x46B2D0u;
            // 0x46b2d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B2D4u;
        goto label_46b2d4;
    }
    ctx->pc = 0x46B2CCu;
    SET_GPR_U32(ctx, 31, 0x46B2D4u);
    ctx->pc = 0x46B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2CCu;
            // 0x46b2d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2D4u; }
        if (ctx->pc != 0x46B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2D4u; }
        if (ctx->pc != 0x46B2D4u) { return; }
    }
    ctx->pc = 0x46B2D4u;
label_46b2d4:
    // 0x46b2d4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x46b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46b2d8:
    // 0x46b2d8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x46b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_46b2dc:
    // 0x46b2dc: 0xc04cd60  jal         func_133580
label_46b2e0:
    if (ctx->pc == 0x46B2E0u) {
        ctx->pc = 0x46B2E0u;
            // 0x46b2e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B2E4u;
        goto label_46b2e4;
    }
    ctx->pc = 0x46B2DCu;
    SET_GPR_U32(ctx, 31, 0x46B2E4u);
    ctx->pc = 0x46B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2DCu;
            // 0x46b2e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2E4u; }
        if (ctx->pc != 0x46B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2E4u; }
        if (ctx->pc != 0x46B2E4u) { return; }
    }
    ctx->pc = 0x46B2E4u;
label_46b2e4:
    // 0x46b2e4: 0xc04e738  jal         func_139CE0
label_46b2e8:
    if (ctx->pc == 0x46B2E8u) {
        ctx->pc = 0x46B2E8u;
            // 0x46b2e8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x46B2ECu;
        goto label_46b2ec;
    }
    ctx->pc = 0x46B2E4u;
    SET_GPR_U32(ctx, 31, 0x46B2ECu);
    ctx->pc = 0x46B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B2E4u;
            // 0x46b2e8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2ECu; }
        if (ctx->pc != 0x46B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B2ECu; }
        if (ctx->pc != 0x46B2ECu) { return; }
    }
    ctx->pc = 0x46B2ECu;
label_46b2ec:
    // 0x46b2ec: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x46b2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46b2f0:
    // 0x46b2f0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x46b2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_46b2f4:
    // 0x46b2f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b2f8:
    // 0x46b2f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b2fc:
    // 0x46b2fc: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x46b2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46b300:
    // 0x46b300: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x46b300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_46b304:
    // 0x46b304: 0xc04cfcc  jal         func_133F30
label_46b308:
    if (ctx->pc == 0x46B308u) {
        ctx->pc = 0x46B308u;
            // 0x46b308: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B30Cu;
        goto label_46b30c;
    }
    ctx->pc = 0x46B304u;
    SET_GPR_U32(ctx, 31, 0x46B30Cu);
    ctx->pc = 0x46B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B304u;
            // 0x46b308: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B30Cu; }
        if (ctx->pc != 0x46B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B30Cu; }
        if (ctx->pc != 0x46B30Cu) { return; }
    }
    ctx->pc = 0x46B30Cu;
label_46b30c:
    // 0x46b30c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x46b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_46b310:
    // 0x46b310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b314:
    // 0x46b314: 0x8e870054  lw          $a3, 0x54($s4)
    ctx->pc = 0x46b314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_46b318:
    // 0x46b318: 0xc04e4cc  jal         func_139330
label_46b31c:
    if (ctx->pc == 0x46B31Cu) {
        ctx->pc = 0x46B31Cu;
            // 0x46b31c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B320u;
        goto label_46b320;
    }
    ctx->pc = 0x46B318u;
    SET_GPR_U32(ctx, 31, 0x46B320u);
    ctx->pc = 0x46B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B318u;
            // 0x46b31c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B320u; }
        if (ctx->pc != 0x46B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B320u; }
        if (ctx->pc != 0x46B320u) { return; }
    }
    ctx->pc = 0x46B320u;
label_46b320:
    // 0x46b320: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_46b324:
    if (ctx->pc == 0x46B324u) {
        ctx->pc = 0x46B324u;
            // 0x46b324: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x46B328u;
        goto label_46b328;
    }
    ctx->pc = 0x46B320u;
    {
        const bool branch_taken_0x46b320 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B320u;
            // 0x46b324: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b320) {
            ctx->pc = 0x46B344u;
            goto label_46b344;
        }
    }
    ctx->pc = 0x46B328u;
label_46b328:
    // 0x46b328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b32c:
    // 0x46b32c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46b32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b330:
    // 0x46b330: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x46b330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46b334:
    // 0x46b334: 0xc0538d8  jal         func_14E360
label_46b338:
    if (ctx->pc == 0x46B338u) {
        ctx->pc = 0x46B338u;
            // 0x46b338: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B33Cu;
        goto label_46b33c;
    }
    ctx->pc = 0x46B334u;
    SET_GPR_U32(ctx, 31, 0x46B33Cu);
    ctx->pc = 0x46B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B334u;
            // 0x46b338: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B33Cu; }
        if (ctx->pc != 0x46B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B33Cu; }
        if (ctx->pc != 0x46B33Cu) { return; }
    }
    ctx->pc = 0x46B33Cu;
label_46b33c:
    // 0x46b33c: 0x10000006  b           . + 4 + (0x6 << 2)
label_46b340:
    if (ctx->pc == 0x46B340u) {
        ctx->pc = 0x46B344u;
        goto label_46b344;
    }
    ctx->pc = 0x46B33Cu;
    {
        const bool branch_taken_0x46b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b33c) {
            ctx->pc = 0x46B358u;
            goto label_46b358;
        }
    }
    ctx->pc = 0x46B344u;
label_46b344:
    // 0x46b344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b348:
    // 0x46b348: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46b348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b34c:
    // 0x46b34c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x46b34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46b350:
    // 0x46b350: 0xc050044  jal         func_140110
label_46b354:
    if (ctx->pc == 0x46B354u) {
        ctx->pc = 0x46B354u;
            // 0x46b354: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B358u;
        goto label_46b358;
    }
    ctx->pc = 0x46B350u;
    SET_GPR_U32(ctx, 31, 0x46B358u);
    ctx->pc = 0x46B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B350u;
            // 0x46b354: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B358u; }
        if (ctx->pc != 0x46B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B358u; }
        if (ctx->pc != 0x46B358u) { return; }
    }
    ctx->pc = 0x46B358u;
label_46b358:
    // 0x46b358: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x46b358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_46b35c:
    // 0x46b35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46b35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b360:
    // 0x46b360: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x46b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_46b364:
    // 0x46b364: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46b368:
    // 0x46b368: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x46b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46b36c:
    // 0x46b36c: 0xc04f674  jal         func_13D9D0
label_46b370:
    if (ctx->pc == 0x46B370u) {
        ctx->pc = 0x46B370u;
            // 0x46b370: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x46B374u;
        goto label_46b374;
    }
    ctx->pc = 0x46B36Cu;
    SET_GPR_U32(ctx, 31, 0x46B374u);
    ctx->pc = 0x46B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B36Cu;
            // 0x46b370: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B374u; }
        if (ctx->pc != 0x46B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B374u; }
        if (ctx->pc != 0x46B374u) { return; }
    }
    ctx->pc = 0x46B374u;
label_46b374:
    // 0x46b374: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x46b374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_46b378:
    // 0x46b378: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46b378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46b37c:
    // 0x46b37c: 0x320f809  jalr        $t9
label_46b380:
    if (ctx->pc == 0x46B380u) {
        ctx->pc = 0x46B380u;
            // 0x46b380: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B384u;
        goto label_46b384;
    }
    ctx->pc = 0x46B37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B384u);
        ctx->pc = 0x46B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B37Cu;
            // 0x46b380: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B384u; }
            if (ctx->pc != 0x46B384u) { return; }
        }
        }
    }
    ctx->pc = 0x46B384u;
label_46b384:
    // 0x46b384: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x46b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_46b388:
    // 0x46b388: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x46b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_46b38c:
    // 0x46b38c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x46b38cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46b390:
    // 0x46b390: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x46b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_46b394:
    // 0x46b394: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x46b394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46b398:
    // 0x46b398: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x46b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46b39c:
    // 0x46b39c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x46b39cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46b3a0:
    // 0x46b3a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x46b3a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46b3a4:
    // 0x46b3a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x46b3a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46b3a8:
    // 0x46b3a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x46b3a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46b3ac:
    // 0x46b3ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x46b3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46b3b0:
    // 0x46b3b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46b3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46b3b4:
    // 0x46b3b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46b3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46b3b8:
    // 0x46b3b8: 0x3e00008  jr          $ra
label_46b3bc:
    if (ctx->pc == 0x46B3BCu) {
        ctx->pc = 0x46B3BCu;
            // 0x46b3bc: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x46B3C0u;
        goto label_fallthrough_0x46b3b8;
    }
    ctx->pc = 0x46B3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B3B8u;
            // 0x46b3bc: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x46b3b8:
    ctx->pc = 0x46B3C0u;
}
