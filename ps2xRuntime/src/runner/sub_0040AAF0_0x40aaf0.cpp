#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040AAF0
// Address: 0x40aaf0 - 0x40b9c0
void sub_0040AAF0_0x40aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AAF0_0x40aaf0");
#endif

    switch (ctx->pc) {
        case 0x40aaf0u: goto label_40aaf0;
        case 0x40aaf4u: goto label_40aaf4;
        case 0x40aaf8u: goto label_40aaf8;
        case 0x40aafcu: goto label_40aafc;
        case 0x40ab00u: goto label_40ab00;
        case 0x40ab04u: goto label_40ab04;
        case 0x40ab08u: goto label_40ab08;
        case 0x40ab0cu: goto label_40ab0c;
        case 0x40ab10u: goto label_40ab10;
        case 0x40ab14u: goto label_40ab14;
        case 0x40ab18u: goto label_40ab18;
        case 0x40ab1cu: goto label_40ab1c;
        case 0x40ab20u: goto label_40ab20;
        case 0x40ab24u: goto label_40ab24;
        case 0x40ab28u: goto label_40ab28;
        case 0x40ab2cu: goto label_40ab2c;
        case 0x40ab30u: goto label_40ab30;
        case 0x40ab34u: goto label_40ab34;
        case 0x40ab38u: goto label_40ab38;
        case 0x40ab3cu: goto label_40ab3c;
        case 0x40ab40u: goto label_40ab40;
        case 0x40ab44u: goto label_40ab44;
        case 0x40ab48u: goto label_40ab48;
        case 0x40ab4cu: goto label_40ab4c;
        case 0x40ab50u: goto label_40ab50;
        case 0x40ab54u: goto label_40ab54;
        case 0x40ab58u: goto label_40ab58;
        case 0x40ab5cu: goto label_40ab5c;
        case 0x40ab60u: goto label_40ab60;
        case 0x40ab64u: goto label_40ab64;
        case 0x40ab68u: goto label_40ab68;
        case 0x40ab6cu: goto label_40ab6c;
        case 0x40ab70u: goto label_40ab70;
        case 0x40ab74u: goto label_40ab74;
        case 0x40ab78u: goto label_40ab78;
        case 0x40ab7cu: goto label_40ab7c;
        case 0x40ab80u: goto label_40ab80;
        case 0x40ab84u: goto label_40ab84;
        case 0x40ab88u: goto label_40ab88;
        case 0x40ab8cu: goto label_40ab8c;
        case 0x40ab90u: goto label_40ab90;
        case 0x40ab94u: goto label_40ab94;
        case 0x40ab98u: goto label_40ab98;
        case 0x40ab9cu: goto label_40ab9c;
        case 0x40aba0u: goto label_40aba0;
        case 0x40aba4u: goto label_40aba4;
        case 0x40aba8u: goto label_40aba8;
        case 0x40abacu: goto label_40abac;
        case 0x40abb0u: goto label_40abb0;
        case 0x40abb4u: goto label_40abb4;
        case 0x40abb8u: goto label_40abb8;
        case 0x40abbcu: goto label_40abbc;
        case 0x40abc0u: goto label_40abc0;
        case 0x40abc4u: goto label_40abc4;
        case 0x40abc8u: goto label_40abc8;
        case 0x40abccu: goto label_40abcc;
        case 0x40abd0u: goto label_40abd0;
        case 0x40abd4u: goto label_40abd4;
        case 0x40abd8u: goto label_40abd8;
        case 0x40abdcu: goto label_40abdc;
        case 0x40abe0u: goto label_40abe0;
        case 0x40abe4u: goto label_40abe4;
        case 0x40abe8u: goto label_40abe8;
        case 0x40abecu: goto label_40abec;
        case 0x40abf0u: goto label_40abf0;
        case 0x40abf4u: goto label_40abf4;
        case 0x40abf8u: goto label_40abf8;
        case 0x40abfcu: goto label_40abfc;
        case 0x40ac00u: goto label_40ac00;
        case 0x40ac04u: goto label_40ac04;
        case 0x40ac08u: goto label_40ac08;
        case 0x40ac0cu: goto label_40ac0c;
        case 0x40ac10u: goto label_40ac10;
        case 0x40ac14u: goto label_40ac14;
        case 0x40ac18u: goto label_40ac18;
        case 0x40ac1cu: goto label_40ac1c;
        case 0x40ac20u: goto label_40ac20;
        case 0x40ac24u: goto label_40ac24;
        case 0x40ac28u: goto label_40ac28;
        case 0x40ac2cu: goto label_40ac2c;
        case 0x40ac30u: goto label_40ac30;
        case 0x40ac34u: goto label_40ac34;
        case 0x40ac38u: goto label_40ac38;
        case 0x40ac3cu: goto label_40ac3c;
        case 0x40ac40u: goto label_40ac40;
        case 0x40ac44u: goto label_40ac44;
        case 0x40ac48u: goto label_40ac48;
        case 0x40ac4cu: goto label_40ac4c;
        case 0x40ac50u: goto label_40ac50;
        case 0x40ac54u: goto label_40ac54;
        case 0x40ac58u: goto label_40ac58;
        case 0x40ac5cu: goto label_40ac5c;
        case 0x40ac60u: goto label_40ac60;
        case 0x40ac64u: goto label_40ac64;
        case 0x40ac68u: goto label_40ac68;
        case 0x40ac6cu: goto label_40ac6c;
        case 0x40ac70u: goto label_40ac70;
        case 0x40ac74u: goto label_40ac74;
        case 0x40ac78u: goto label_40ac78;
        case 0x40ac7cu: goto label_40ac7c;
        case 0x40ac80u: goto label_40ac80;
        case 0x40ac84u: goto label_40ac84;
        case 0x40ac88u: goto label_40ac88;
        case 0x40ac8cu: goto label_40ac8c;
        case 0x40ac90u: goto label_40ac90;
        case 0x40ac94u: goto label_40ac94;
        case 0x40ac98u: goto label_40ac98;
        case 0x40ac9cu: goto label_40ac9c;
        case 0x40aca0u: goto label_40aca0;
        case 0x40aca4u: goto label_40aca4;
        case 0x40aca8u: goto label_40aca8;
        case 0x40acacu: goto label_40acac;
        case 0x40acb0u: goto label_40acb0;
        case 0x40acb4u: goto label_40acb4;
        case 0x40acb8u: goto label_40acb8;
        case 0x40acbcu: goto label_40acbc;
        case 0x40acc0u: goto label_40acc0;
        case 0x40acc4u: goto label_40acc4;
        case 0x40acc8u: goto label_40acc8;
        case 0x40acccu: goto label_40accc;
        case 0x40acd0u: goto label_40acd0;
        case 0x40acd4u: goto label_40acd4;
        case 0x40acd8u: goto label_40acd8;
        case 0x40acdcu: goto label_40acdc;
        case 0x40ace0u: goto label_40ace0;
        case 0x40ace4u: goto label_40ace4;
        case 0x40ace8u: goto label_40ace8;
        case 0x40acecu: goto label_40acec;
        case 0x40acf0u: goto label_40acf0;
        case 0x40acf4u: goto label_40acf4;
        case 0x40acf8u: goto label_40acf8;
        case 0x40acfcu: goto label_40acfc;
        case 0x40ad00u: goto label_40ad00;
        case 0x40ad04u: goto label_40ad04;
        case 0x40ad08u: goto label_40ad08;
        case 0x40ad0cu: goto label_40ad0c;
        case 0x40ad10u: goto label_40ad10;
        case 0x40ad14u: goto label_40ad14;
        case 0x40ad18u: goto label_40ad18;
        case 0x40ad1cu: goto label_40ad1c;
        case 0x40ad20u: goto label_40ad20;
        case 0x40ad24u: goto label_40ad24;
        case 0x40ad28u: goto label_40ad28;
        case 0x40ad2cu: goto label_40ad2c;
        case 0x40ad30u: goto label_40ad30;
        case 0x40ad34u: goto label_40ad34;
        case 0x40ad38u: goto label_40ad38;
        case 0x40ad3cu: goto label_40ad3c;
        case 0x40ad40u: goto label_40ad40;
        case 0x40ad44u: goto label_40ad44;
        case 0x40ad48u: goto label_40ad48;
        case 0x40ad4cu: goto label_40ad4c;
        case 0x40ad50u: goto label_40ad50;
        case 0x40ad54u: goto label_40ad54;
        case 0x40ad58u: goto label_40ad58;
        case 0x40ad5cu: goto label_40ad5c;
        case 0x40ad60u: goto label_40ad60;
        case 0x40ad64u: goto label_40ad64;
        case 0x40ad68u: goto label_40ad68;
        case 0x40ad6cu: goto label_40ad6c;
        case 0x40ad70u: goto label_40ad70;
        case 0x40ad74u: goto label_40ad74;
        case 0x40ad78u: goto label_40ad78;
        case 0x40ad7cu: goto label_40ad7c;
        case 0x40ad80u: goto label_40ad80;
        case 0x40ad84u: goto label_40ad84;
        case 0x40ad88u: goto label_40ad88;
        case 0x40ad8cu: goto label_40ad8c;
        case 0x40ad90u: goto label_40ad90;
        case 0x40ad94u: goto label_40ad94;
        case 0x40ad98u: goto label_40ad98;
        case 0x40ad9cu: goto label_40ad9c;
        case 0x40ada0u: goto label_40ada0;
        case 0x40ada4u: goto label_40ada4;
        case 0x40ada8u: goto label_40ada8;
        case 0x40adacu: goto label_40adac;
        case 0x40adb0u: goto label_40adb0;
        case 0x40adb4u: goto label_40adb4;
        case 0x40adb8u: goto label_40adb8;
        case 0x40adbcu: goto label_40adbc;
        case 0x40adc0u: goto label_40adc0;
        case 0x40adc4u: goto label_40adc4;
        case 0x40adc8u: goto label_40adc8;
        case 0x40adccu: goto label_40adcc;
        case 0x40add0u: goto label_40add0;
        case 0x40add4u: goto label_40add4;
        case 0x40add8u: goto label_40add8;
        case 0x40addcu: goto label_40addc;
        case 0x40ade0u: goto label_40ade0;
        case 0x40ade4u: goto label_40ade4;
        case 0x40ade8u: goto label_40ade8;
        case 0x40adecu: goto label_40adec;
        case 0x40adf0u: goto label_40adf0;
        case 0x40adf4u: goto label_40adf4;
        case 0x40adf8u: goto label_40adf8;
        case 0x40adfcu: goto label_40adfc;
        case 0x40ae00u: goto label_40ae00;
        case 0x40ae04u: goto label_40ae04;
        case 0x40ae08u: goto label_40ae08;
        case 0x40ae0cu: goto label_40ae0c;
        case 0x40ae10u: goto label_40ae10;
        case 0x40ae14u: goto label_40ae14;
        case 0x40ae18u: goto label_40ae18;
        case 0x40ae1cu: goto label_40ae1c;
        case 0x40ae20u: goto label_40ae20;
        case 0x40ae24u: goto label_40ae24;
        case 0x40ae28u: goto label_40ae28;
        case 0x40ae2cu: goto label_40ae2c;
        case 0x40ae30u: goto label_40ae30;
        case 0x40ae34u: goto label_40ae34;
        case 0x40ae38u: goto label_40ae38;
        case 0x40ae3cu: goto label_40ae3c;
        case 0x40ae40u: goto label_40ae40;
        case 0x40ae44u: goto label_40ae44;
        case 0x40ae48u: goto label_40ae48;
        case 0x40ae4cu: goto label_40ae4c;
        case 0x40ae50u: goto label_40ae50;
        case 0x40ae54u: goto label_40ae54;
        case 0x40ae58u: goto label_40ae58;
        case 0x40ae5cu: goto label_40ae5c;
        case 0x40ae60u: goto label_40ae60;
        case 0x40ae64u: goto label_40ae64;
        case 0x40ae68u: goto label_40ae68;
        case 0x40ae6cu: goto label_40ae6c;
        case 0x40ae70u: goto label_40ae70;
        case 0x40ae74u: goto label_40ae74;
        case 0x40ae78u: goto label_40ae78;
        case 0x40ae7cu: goto label_40ae7c;
        case 0x40ae80u: goto label_40ae80;
        case 0x40ae84u: goto label_40ae84;
        case 0x40ae88u: goto label_40ae88;
        case 0x40ae8cu: goto label_40ae8c;
        case 0x40ae90u: goto label_40ae90;
        case 0x40ae94u: goto label_40ae94;
        case 0x40ae98u: goto label_40ae98;
        case 0x40ae9cu: goto label_40ae9c;
        case 0x40aea0u: goto label_40aea0;
        case 0x40aea4u: goto label_40aea4;
        case 0x40aea8u: goto label_40aea8;
        case 0x40aeacu: goto label_40aeac;
        case 0x40aeb0u: goto label_40aeb0;
        case 0x40aeb4u: goto label_40aeb4;
        case 0x40aeb8u: goto label_40aeb8;
        case 0x40aebcu: goto label_40aebc;
        case 0x40aec0u: goto label_40aec0;
        case 0x40aec4u: goto label_40aec4;
        case 0x40aec8u: goto label_40aec8;
        case 0x40aeccu: goto label_40aecc;
        case 0x40aed0u: goto label_40aed0;
        case 0x40aed4u: goto label_40aed4;
        case 0x40aed8u: goto label_40aed8;
        case 0x40aedcu: goto label_40aedc;
        case 0x40aee0u: goto label_40aee0;
        case 0x40aee4u: goto label_40aee4;
        case 0x40aee8u: goto label_40aee8;
        case 0x40aeecu: goto label_40aeec;
        case 0x40aef0u: goto label_40aef0;
        case 0x40aef4u: goto label_40aef4;
        case 0x40aef8u: goto label_40aef8;
        case 0x40aefcu: goto label_40aefc;
        case 0x40af00u: goto label_40af00;
        case 0x40af04u: goto label_40af04;
        case 0x40af08u: goto label_40af08;
        case 0x40af0cu: goto label_40af0c;
        case 0x40af10u: goto label_40af10;
        case 0x40af14u: goto label_40af14;
        case 0x40af18u: goto label_40af18;
        case 0x40af1cu: goto label_40af1c;
        case 0x40af20u: goto label_40af20;
        case 0x40af24u: goto label_40af24;
        case 0x40af28u: goto label_40af28;
        case 0x40af2cu: goto label_40af2c;
        case 0x40af30u: goto label_40af30;
        case 0x40af34u: goto label_40af34;
        case 0x40af38u: goto label_40af38;
        case 0x40af3cu: goto label_40af3c;
        case 0x40af40u: goto label_40af40;
        case 0x40af44u: goto label_40af44;
        case 0x40af48u: goto label_40af48;
        case 0x40af4cu: goto label_40af4c;
        case 0x40af50u: goto label_40af50;
        case 0x40af54u: goto label_40af54;
        case 0x40af58u: goto label_40af58;
        case 0x40af5cu: goto label_40af5c;
        case 0x40af60u: goto label_40af60;
        case 0x40af64u: goto label_40af64;
        case 0x40af68u: goto label_40af68;
        case 0x40af6cu: goto label_40af6c;
        case 0x40af70u: goto label_40af70;
        case 0x40af74u: goto label_40af74;
        case 0x40af78u: goto label_40af78;
        case 0x40af7cu: goto label_40af7c;
        case 0x40af80u: goto label_40af80;
        case 0x40af84u: goto label_40af84;
        case 0x40af88u: goto label_40af88;
        case 0x40af8cu: goto label_40af8c;
        case 0x40af90u: goto label_40af90;
        case 0x40af94u: goto label_40af94;
        case 0x40af98u: goto label_40af98;
        case 0x40af9cu: goto label_40af9c;
        case 0x40afa0u: goto label_40afa0;
        case 0x40afa4u: goto label_40afa4;
        case 0x40afa8u: goto label_40afa8;
        case 0x40afacu: goto label_40afac;
        case 0x40afb0u: goto label_40afb0;
        case 0x40afb4u: goto label_40afb4;
        case 0x40afb8u: goto label_40afb8;
        case 0x40afbcu: goto label_40afbc;
        case 0x40afc0u: goto label_40afc0;
        case 0x40afc4u: goto label_40afc4;
        case 0x40afc8u: goto label_40afc8;
        case 0x40afccu: goto label_40afcc;
        case 0x40afd0u: goto label_40afd0;
        case 0x40afd4u: goto label_40afd4;
        case 0x40afd8u: goto label_40afd8;
        case 0x40afdcu: goto label_40afdc;
        case 0x40afe0u: goto label_40afe0;
        case 0x40afe4u: goto label_40afe4;
        case 0x40afe8u: goto label_40afe8;
        case 0x40afecu: goto label_40afec;
        case 0x40aff0u: goto label_40aff0;
        case 0x40aff4u: goto label_40aff4;
        case 0x40aff8u: goto label_40aff8;
        case 0x40affcu: goto label_40affc;
        case 0x40b000u: goto label_40b000;
        case 0x40b004u: goto label_40b004;
        case 0x40b008u: goto label_40b008;
        case 0x40b00cu: goto label_40b00c;
        case 0x40b010u: goto label_40b010;
        case 0x40b014u: goto label_40b014;
        case 0x40b018u: goto label_40b018;
        case 0x40b01cu: goto label_40b01c;
        case 0x40b020u: goto label_40b020;
        case 0x40b024u: goto label_40b024;
        case 0x40b028u: goto label_40b028;
        case 0x40b02cu: goto label_40b02c;
        case 0x40b030u: goto label_40b030;
        case 0x40b034u: goto label_40b034;
        case 0x40b038u: goto label_40b038;
        case 0x40b03cu: goto label_40b03c;
        case 0x40b040u: goto label_40b040;
        case 0x40b044u: goto label_40b044;
        case 0x40b048u: goto label_40b048;
        case 0x40b04cu: goto label_40b04c;
        case 0x40b050u: goto label_40b050;
        case 0x40b054u: goto label_40b054;
        case 0x40b058u: goto label_40b058;
        case 0x40b05cu: goto label_40b05c;
        case 0x40b060u: goto label_40b060;
        case 0x40b064u: goto label_40b064;
        case 0x40b068u: goto label_40b068;
        case 0x40b06cu: goto label_40b06c;
        case 0x40b070u: goto label_40b070;
        case 0x40b074u: goto label_40b074;
        case 0x40b078u: goto label_40b078;
        case 0x40b07cu: goto label_40b07c;
        case 0x40b080u: goto label_40b080;
        case 0x40b084u: goto label_40b084;
        case 0x40b088u: goto label_40b088;
        case 0x40b08cu: goto label_40b08c;
        case 0x40b090u: goto label_40b090;
        case 0x40b094u: goto label_40b094;
        case 0x40b098u: goto label_40b098;
        case 0x40b09cu: goto label_40b09c;
        case 0x40b0a0u: goto label_40b0a0;
        case 0x40b0a4u: goto label_40b0a4;
        case 0x40b0a8u: goto label_40b0a8;
        case 0x40b0acu: goto label_40b0ac;
        case 0x40b0b0u: goto label_40b0b0;
        case 0x40b0b4u: goto label_40b0b4;
        case 0x40b0b8u: goto label_40b0b8;
        case 0x40b0bcu: goto label_40b0bc;
        case 0x40b0c0u: goto label_40b0c0;
        case 0x40b0c4u: goto label_40b0c4;
        case 0x40b0c8u: goto label_40b0c8;
        case 0x40b0ccu: goto label_40b0cc;
        case 0x40b0d0u: goto label_40b0d0;
        case 0x40b0d4u: goto label_40b0d4;
        case 0x40b0d8u: goto label_40b0d8;
        case 0x40b0dcu: goto label_40b0dc;
        case 0x40b0e0u: goto label_40b0e0;
        case 0x40b0e4u: goto label_40b0e4;
        case 0x40b0e8u: goto label_40b0e8;
        case 0x40b0ecu: goto label_40b0ec;
        case 0x40b0f0u: goto label_40b0f0;
        case 0x40b0f4u: goto label_40b0f4;
        case 0x40b0f8u: goto label_40b0f8;
        case 0x40b0fcu: goto label_40b0fc;
        case 0x40b100u: goto label_40b100;
        case 0x40b104u: goto label_40b104;
        case 0x40b108u: goto label_40b108;
        case 0x40b10cu: goto label_40b10c;
        case 0x40b110u: goto label_40b110;
        case 0x40b114u: goto label_40b114;
        case 0x40b118u: goto label_40b118;
        case 0x40b11cu: goto label_40b11c;
        case 0x40b120u: goto label_40b120;
        case 0x40b124u: goto label_40b124;
        case 0x40b128u: goto label_40b128;
        case 0x40b12cu: goto label_40b12c;
        case 0x40b130u: goto label_40b130;
        case 0x40b134u: goto label_40b134;
        case 0x40b138u: goto label_40b138;
        case 0x40b13cu: goto label_40b13c;
        case 0x40b140u: goto label_40b140;
        case 0x40b144u: goto label_40b144;
        case 0x40b148u: goto label_40b148;
        case 0x40b14cu: goto label_40b14c;
        case 0x40b150u: goto label_40b150;
        case 0x40b154u: goto label_40b154;
        case 0x40b158u: goto label_40b158;
        case 0x40b15cu: goto label_40b15c;
        case 0x40b160u: goto label_40b160;
        case 0x40b164u: goto label_40b164;
        case 0x40b168u: goto label_40b168;
        case 0x40b16cu: goto label_40b16c;
        case 0x40b170u: goto label_40b170;
        case 0x40b174u: goto label_40b174;
        case 0x40b178u: goto label_40b178;
        case 0x40b17cu: goto label_40b17c;
        case 0x40b180u: goto label_40b180;
        case 0x40b184u: goto label_40b184;
        case 0x40b188u: goto label_40b188;
        case 0x40b18cu: goto label_40b18c;
        case 0x40b190u: goto label_40b190;
        case 0x40b194u: goto label_40b194;
        case 0x40b198u: goto label_40b198;
        case 0x40b19cu: goto label_40b19c;
        case 0x40b1a0u: goto label_40b1a0;
        case 0x40b1a4u: goto label_40b1a4;
        case 0x40b1a8u: goto label_40b1a8;
        case 0x40b1acu: goto label_40b1ac;
        case 0x40b1b0u: goto label_40b1b0;
        case 0x40b1b4u: goto label_40b1b4;
        case 0x40b1b8u: goto label_40b1b8;
        case 0x40b1bcu: goto label_40b1bc;
        case 0x40b1c0u: goto label_40b1c0;
        case 0x40b1c4u: goto label_40b1c4;
        case 0x40b1c8u: goto label_40b1c8;
        case 0x40b1ccu: goto label_40b1cc;
        case 0x40b1d0u: goto label_40b1d0;
        case 0x40b1d4u: goto label_40b1d4;
        case 0x40b1d8u: goto label_40b1d8;
        case 0x40b1dcu: goto label_40b1dc;
        case 0x40b1e0u: goto label_40b1e0;
        case 0x40b1e4u: goto label_40b1e4;
        case 0x40b1e8u: goto label_40b1e8;
        case 0x40b1ecu: goto label_40b1ec;
        case 0x40b1f0u: goto label_40b1f0;
        case 0x40b1f4u: goto label_40b1f4;
        case 0x40b1f8u: goto label_40b1f8;
        case 0x40b1fcu: goto label_40b1fc;
        case 0x40b200u: goto label_40b200;
        case 0x40b204u: goto label_40b204;
        case 0x40b208u: goto label_40b208;
        case 0x40b20cu: goto label_40b20c;
        case 0x40b210u: goto label_40b210;
        case 0x40b214u: goto label_40b214;
        case 0x40b218u: goto label_40b218;
        case 0x40b21cu: goto label_40b21c;
        case 0x40b220u: goto label_40b220;
        case 0x40b224u: goto label_40b224;
        case 0x40b228u: goto label_40b228;
        case 0x40b22cu: goto label_40b22c;
        case 0x40b230u: goto label_40b230;
        case 0x40b234u: goto label_40b234;
        case 0x40b238u: goto label_40b238;
        case 0x40b23cu: goto label_40b23c;
        case 0x40b240u: goto label_40b240;
        case 0x40b244u: goto label_40b244;
        case 0x40b248u: goto label_40b248;
        case 0x40b24cu: goto label_40b24c;
        case 0x40b250u: goto label_40b250;
        case 0x40b254u: goto label_40b254;
        case 0x40b258u: goto label_40b258;
        case 0x40b25cu: goto label_40b25c;
        case 0x40b260u: goto label_40b260;
        case 0x40b264u: goto label_40b264;
        case 0x40b268u: goto label_40b268;
        case 0x40b26cu: goto label_40b26c;
        case 0x40b270u: goto label_40b270;
        case 0x40b274u: goto label_40b274;
        case 0x40b278u: goto label_40b278;
        case 0x40b27cu: goto label_40b27c;
        case 0x40b280u: goto label_40b280;
        case 0x40b284u: goto label_40b284;
        case 0x40b288u: goto label_40b288;
        case 0x40b28cu: goto label_40b28c;
        case 0x40b290u: goto label_40b290;
        case 0x40b294u: goto label_40b294;
        case 0x40b298u: goto label_40b298;
        case 0x40b29cu: goto label_40b29c;
        case 0x40b2a0u: goto label_40b2a0;
        case 0x40b2a4u: goto label_40b2a4;
        case 0x40b2a8u: goto label_40b2a8;
        case 0x40b2acu: goto label_40b2ac;
        case 0x40b2b0u: goto label_40b2b0;
        case 0x40b2b4u: goto label_40b2b4;
        case 0x40b2b8u: goto label_40b2b8;
        case 0x40b2bcu: goto label_40b2bc;
        case 0x40b2c0u: goto label_40b2c0;
        case 0x40b2c4u: goto label_40b2c4;
        case 0x40b2c8u: goto label_40b2c8;
        case 0x40b2ccu: goto label_40b2cc;
        case 0x40b2d0u: goto label_40b2d0;
        case 0x40b2d4u: goto label_40b2d4;
        case 0x40b2d8u: goto label_40b2d8;
        case 0x40b2dcu: goto label_40b2dc;
        case 0x40b2e0u: goto label_40b2e0;
        case 0x40b2e4u: goto label_40b2e4;
        case 0x40b2e8u: goto label_40b2e8;
        case 0x40b2ecu: goto label_40b2ec;
        case 0x40b2f0u: goto label_40b2f0;
        case 0x40b2f4u: goto label_40b2f4;
        case 0x40b2f8u: goto label_40b2f8;
        case 0x40b2fcu: goto label_40b2fc;
        case 0x40b300u: goto label_40b300;
        case 0x40b304u: goto label_40b304;
        case 0x40b308u: goto label_40b308;
        case 0x40b30cu: goto label_40b30c;
        case 0x40b310u: goto label_40b310;
        case 0x40b314u: goto label_40b314;
        case 0x40b318u: goto label_40b318;
        case 0x40b31cu: goto label_40b31c;
        case 0x40b320u: goto label_40b320;
        case 0x40b324u: goto label_40b324;
        case 0x40b328u: goto label_40b328;
        case 0x40b32cu: goto label_40b32c;
        case 0x40b330u: goto label_40b330;
        case 0x40b334u: goto label_40b334;
        case 0x40b338u: goto label_40b338;
        case 0x40b33cu: goto label_40b33c;
        case 0x40b340u: goto label_40b340;
        case 0x40b344u: goto label_40b344;
        case 0x40b348u: goto label_40b348;
        case 0x40b34cu: goto label_40b34c;
        case 0x40b350u: goto label_40b350;
        case 0x40b354u: goto label_40b354;
        case 0x40b358u: goto label_40b358;
        case 0x40b35cu: goto label_40b35c;
        case 0x40b360u: goto label_40b360;
        case 0x40b364u: goto label_40b364;
        case 0x40b368u: goto label_40b368;
        case 0x40b36cu: goto label_40b36c;
        case 0x40b370u: goto label_40b370;
        case 0x40b374u: goto label_40b374;
        case 0x40b378u: goto label_40b378;
        case 0x40b37cu: goto label_40b37c;
        case 0x40b380u: goto label_40b380;
        case 0x40b384u: goto label_40b384;
        case 0x40b388u: goto label_40b388;
        case 0x40b38cu: goto label_40b38c;
        case 0x40b390u: goto label_40b390;
        case 0x40b394u: goto label_40b394;
        case 0x40b398u: goto label_40b398;
        case 0x40b39cu: goto label_40b39c;
        case 0x40b3a0u: goto label_40b3a0;
        case 0x40b3a4u: goto label_40b3a4;
        case 0x40b3a8u: goto label_40b3a8;
        case 0x40b3acu: goto label_40b3ac;
        case 0x40b3b0u: goto label_40b3b0;
        case 0x40b3b4u: goto label_40b3b4;
        case 0x40b3b8u: goto label_40b3b8;
        case 0x40b3bcu: goto label_40b3bc;
        case 0x40b3c0u: goto label_40b3c0;
        case 0x40b3c4u: goto label_40b3c4;
        case 0x40b3c8u: goto label_40b3c8;
        case 0x40b3ccu: goto label_40b3cc;
        case 0x40b3d0u: goto label_40b3d0;
        case 0x40b3d4u: goto label_40b3d4;
        case 0x40b3d8u: goto label_40b3d8;
        case 0x40b3dcu: goto label_40b3dc;
        case 0x40b3e0u: goto label_40b3e0;
        case 0x40b3e4u: goto label_40b3e4;
        case 0x40b3e8u: goto label_40b3e8;
        case 0x40b3ecu: goto label_40b3ec;
        case 0x40b3f0u: goto label_40b3f0;
        case 0x40b3f4u: goto label_40b3f4;
        case 0x40b3f8u: goto label_40b3f8;
        case 0x40b3fcu: goto label_40b3fc;
        case 0x40b400u: goto label_40b400;
        case 0x40b404u: goto label_40b404;
        case 0x40b408u: goto label_40b408;
        case 0x40b40cu: goto label_40b40c;
        case 0x40b410u: goto label_40b410;
        case 0x40b414u: goto label_40b414;
        case 0x40b418u: goto label_40b418;
        case 0x40b41cu: goto label_40b41c;
        case 0x40b420u: goto label_40b420;
        case 0x40b424u: goto label_40b424;
        case 0x40b428u: goto label_40b428;
        case 0x40b42cu: goto label_40b42c;
        case 0x40b430u: goto label_40b430;
        case 0x40b434u: goto label_40b434;
        case 0x40b438u: goto label_40b438;
        case 0x40b43cu: goto label_40b43c;
        case 0x40b440u: goto label_40b440;
        case 0x40b444u: goto label_40b444;
        case 0x40b448u: goto label_40b448;
        case 0x40b44cu: goto label_40b44c;
        case 0x40b450u: goto label_40b450;
        case 0x40b454u: goto label_40b454;
        case 0x40b458u: goto label_40b458;
        case 0x40b45cu: goto label_40b45c;
        case 0x40b460u: goto label_40b460;
        case 0x40b464u: goto label_40b464;
        case 0x40b468u: goto label_40b468;
        case 0x40b46cu: goto label_40b46c;
        case 0x40b470u: goto label_40b470;
        case 0x40b474u: goto label_40b474;
        case 0x40b478u: goto label_40b478;
        case 0x40b47cu: goto label_40b47c;
        case 0x40b480u: goto label_40b480;
        case 0x40b484u: goto label_40b484;
        case 0x40b488u: goto label_40b488;
        case 0x40b48cu: goto label_40b48c;
        case 0x40b490u: goto label_40b490;
        case 0x40b494u: goto label_40b494;
        case 0x40b498u: goto label_40b498;
        case 0x40b49cu: goto label_40b49c;
        case 0x40b4a0u: goto label_40b4a0;
        case 0x40b4a4u: goto label_40b4a4;
        case 0x40b4a8u: goto label_40b4a8;
        case 0x40b4acu: goto label_40b4ac;
        case 0x40b4b0u: goto label_40b4b0;
        case 0x40b4b4u: goto label_40b4b4;
        case 0x40b4b8u: goto label_40b4b8;
        case 0x40b4bcu: goto label_40b4bc;
        case 0x40b4c0u: goto label_40b4c0;
        case 0x40b4c4u: goto label_40b4c4;
        case 0x40b4c8u: goto label_40b4c8;
        case 0x40b4ccu: goto label_40b4cc;
        case 0x40b4d0u: goto label_40b4d0;
        case 0x40b4d4u: goto label_40b4d4;
        case 0x40b4d8u: goto label_40b4d8;
        case 0x40b4dcu: goto label_40b4dc;
        case 0x40b4e0u: goto label_40b4e0;
        case 0x40b4e4u: goto label_40b4e4;
        case 0x40b4e8u: goto label_40b4e8;
        case 0x40b4ecu: goto label_40b4ec;
        case 0x40b4f0u: goto label_40b4f0;
        case 0x40b4f4u: goto label_40b4f4;
        case 0x40b4f8u: goto label_40b4f8;
        case 0x40b4fcu: goto label_40b4fc;
        case 0x40b500u: goto label_40b500;
        case 0x40b504u: goto label_40b504;
        case 0x40b508u: goto label_40b508;
        case 0x40b50cu: goto label_40b50c;
        case 0x40b510u: goto label_40b510;
        case 0x40b514u: goto label_40b514;
        case 0x40b518u: goto label_40b518;
        case 0x40b51cu: goto label_40b51c;
        case 0x40b520u: goto label_40b520;
        case 0x40b524u: goto label_40b524;
        case 0x40b528u: goto label_40b528;
        case 0x40b52cu: goto label_40b52c;
        case 0x40b530u: goto label_40b530;
        case 0x40b534u: goto label_40b534;
        case 0x40b538u: goto label_40b538;
        case 0x40b53cu: goto label_40b53c;
        case 0x40b540u: goto label_40b540;
        case 0x40b544u: goto label_40b544;
        case 0x40b548u: goto label_40b548;
        case 0x40b54cu: goto label_40b54c;
        case 0x40b550u: goto label_40b550;
        case 0x40b554u: goto label_40b554;
        case 0x40b558u: goto label_40b558;
        case 0x40b55cu: goto label_40b55c;
        case 0x40b560u: goto label_40b560;
        case 0x40b564u: goto label_40b564;
        case 0x40b568u: goto label_40b568;
        case 0x40b56cu: goto label_40b56c;
        case 0x40b570u: goto label_40b570;
        case 0x40b574u: goto label_40b574;
        case 0x40b578u: goto label_40b578;
        case 0x40b57cu: goto label_40b57c;
        case 0x40b580u: goto label_40b580;
        case 0x40b584u: goto label_40b584;
        case 0x40b588u: goto label_40b588;
        case 0x40b58cu: goto label_40b58c;
        case 0x40b590u: goto label_40b590;
        case 0x40b594u: goto label_40b594;
        case 0x40b598u: goto label_40b598;
        case 0x40b59cu: goto label_40b59c;
        case 0x40b5a0u: goto label_40b5a0;
        case 0x40b5a4u: goto label_40b5a4;
        case 0x40b5a8u: goto label_40b5a8;
        case 0x40b5acu: goto label_40b5ac;
        case 0x40b5b0u: goto label_40b5b0;
        case 0x40b5b4u: goto label_40b5b4;
        case 0x40b5b8u: goto label_40b5b8;
        case 0x40b5bcu: goto label_40b5bc;
        case 0x40b5c0u: goto label_40b5c0;
        case 0x40b5c4u: goto label_40b5c4;
        case 0x40b5c8u: goto label_40b5c8;
        case 0x40b5ccu: goto label_40b5cc;
        case 0x40b5d0u: goto label_40b5d0;
        case 0x40b5d4u: goto label_40b5d4;
        case 0x40b5d8u: goto label_40b5d8;
        case 0x40b5dcu: goto label_40b5dc;
        case 0x40b5e0u: goto label_40b5e0;
        case 0x40b5e4u: goto label_40b5e4;
        case 0x40b5e8u: goto label_40b5e8;
        case 0x40b5ecu: goto label_40b5ec;
        case 0x40b5f0u: goto label_40b5f0;
        case 0x40b5f4u: goto label_40b5f4;
        case 0x40b5f8u: goto label_40b5f8;
        case 0x40b5fcu: goto label_40b5fc;
        case 0x40b600u: goto label_40b600;
        case 0x40b604u: goto label_40b604;
        case 0x40b608u: goto label_40b608;
        case 0x40b60cu: goto label_40b60c;
        case 0x40b610u: goto label_40b610;
        case 0x40b614u: goto label_40b614;
        case 0x40b618u: goto label_40b618;
        case 0x40b61cu: goto label_40b61c;
        case 0x40b620u: goto label_40b620;
        case 0x40b624u: goto label_40b624;
        case 0x40b628u: goto label_40b628;
        case 0x40b62cu: goto label_40b62c;
        case 0x40b630u: goto label_40b630;
        case 0x40b634u: goto label_40b634;
        case 0x40b638u: goto label_40b638;
        case 0x40b63cu: goto label_40b63c;
        case 0x40b640u: goto label_40b640;
        case 0x40b644u: goto label_40b644;
        case 0x40b648u: goto label_40b648;
        case 0x40b64cu: goto label_40b64c;
        case 0x40b650u: goto label_40b650;
        case 0x40b654u: goto label_40b654;
        case 0x40b658u: goto label_40b658;
        case 0x40b65cu: goto label_40b65c;
        case 0x40b660u: goto label_40b660;
        case 0x40b664u: goto label_40b664;
        case 0x40b668u: goto label_40b668;
        case 0x40b66cu: goto label_40b66c;
        case 0x40b670u: goto label_40b670;
        case 0x40b674u: goto label_40b674;
        case 0x40b678u: goto label_40b678;
        case 0x40b67cu: goto label_40b67c;
        case 0x40b680u: goto label_40b680;
        case 0x40b684u: goto label_40b684;
        case 0x40b688u: goto label_40b688;
        case 0x40b68cu: goto label_40b68c;
        case 0x40b690u: goto label_40b690;
        case 0x40b694u: goto label_40b694;
        case 0x40b698u: goto label_40b698;
        case 0x40b69cu: goto label_40b69c;
        case 0x40b6a0u: goto label_40b6a0;
        case 0x40b6a4u: goto label_40b6a4;
        case 0x40b6a8u: goto label_40b6a8;
        case 0x40b6acu: goto label_40b6ac;
        case 0x40b6b0u: goto label_40b6b0;
        case 0x40b6b4u: goto label_40b6b4;
        case 0x40b6b8u: goto label_40b6b8;
        case 0x40b6bcu: goto label_40b6bc;
        case 0x40b6c0u: goto label_40b6c0;
        case 0x40b6c4u: goto label_40b6c4;
        case 0x40b6c8u: goto label_40b6c8;
        case 0x40b6ccu: goto label_40b6cc;
        case 0x40b6d0u: goto label_40b6d0;
        case 0x40b6d4u: goto label_40b6d4;
        case 0x40b6d8u: goto label_40b6d8;
        case 0x40b6dcu: goto label_40b6dc;
        case 0x40b6e0u: goto label_40b6e0;
        case 0x40b6e4u: goto label_40b6e4;
        case 0x40b6e8u: goto label_40b6e8;
        case 0x40b6ecu: goto label_40b6ec;
        case 0x40b6f0u: goto label_40b6f0;
        case 0x40b6f4u: goto label_40b6f4;
        case 0x40b6f8u: goto label_40b6f8;
        case 0x40b6fcu: goto label_40b6fc;
        case 0x40b700u: goto label_40b700;
        case 0x40b704u: goto label_40b704;
        case 0x40b708u: goto label_40b708;
        case 0x40b70cu: goto label_40b70c;
        case 0x40b710u: goto label_40b710;
        case 0x40b714u: goto label_40b714;
        case 0x40b718u: goto label_40b718;
        case 0x40b71cu: goto label_40b71c;
        case 0x40b720u: goto label_40b720;
        case 0x40b724u: goto label_40b724;
        case 0x40b728u: goto label_40b728;
        case 0x40b72cu: goto label_40b72c;
        case 0x40b730u: goto label_40b730;
        case 0x40b734u: goto label_40b734;
        case 0x40b738u: goto label_40b738;
        case 0x40b73cu: goto label_40b73c;
        case 0x40b740u: goto label_40b740;
        case 0x40b744u: goto label_40b744;
        case 0x40b748u: goto label_40b748;
        case 0x40b74cu: goto label_40b74c;
        case 0x40b750u: goto label_40b750;
        case 0x40b754u: goto label_40b754;
        case 0x40b758u: goto label_40b758;
        case 0x40b75cu: goto label_40b75c;
        case 0x40b760u: goto label_40b760;
        case 0x40b764u: goto label_40b764;
        case 0x40b768u: goto label_40b768;
        case 0x40b76cu: goto label_40b76c;
        case 0x40b770u: goto label_40b770;
        case 0x40b774u: goto label_40b774;
        case 0x40b778u: goto label_40b778;
        case 0x40b77cu: goto label_40b77c;
        case 0x40b780u: goto label_40b780;
        case 0x40b784u: goto label_40b784;
        case 0x40b788u: goto label_40b788;
        case 0x40b78cu: goto label_40b78c;
        case 0x40b790u: goto label_40b790;
        case 0x40b794u: goto label_40b794;
        case 0x40b798u: goto label_40b798;
        case 0x40b79cu: goto label_40b79c;
        case 0x40b7a0u: goto label_40b7a0;
        case 0x40b7a4u: goto label_40b7a4;
        case 0x40b7a8u: goto label_40b7a8;
        case 0x40b7acu: goto label_40b7ac;
        case 0x40b7b0u: goto label_40b7b0;
        case 0x40b7b4u: goto label_40b7b4;
        case 0x40b7b8u: goto label_40b7b8;
        case 0x40b7bcu: goto label_40b7bc;
        case 0x40b7c0u: goto label_40b7c0;
        case 0x40b7c4u: goto label_40b7c4;
        case 0x40b7c8u: goto label_40b7c8;
        case 0x40b7ccu: goto label_40b7cc;
        case 0x40b7d0u: goto label_40b7d0;
        case 0x40b7d4u: goto label_40b7d4;
        case 0x40b7d8u: goto label_40b7d8;
        case 0x40b7dcu: goto label_40b7dc;
        case 0x40b7e0u: goto label_40b7e0;
        case 0x40b7e4u: goto label_40b7e4;
        case 0x40b7e8u: goto label_40b7e8;
        case 0x40b7ecu: goto label_40b7ec;
        case 0x40b7f0u: goto label_40b7f0;
        case 0x40b7f4u: goto label_40b7f4;
        case 0x40b7f8u: goto label_40b7f8;
        case 0x40b7fcu: goto label_40b7fc;
        case 0x40b800u: goto label_40b800;
        case 0x40b804u: goto label_40b804;
        case 0x40b808u: goto label_40b808;
        case 0x40b80cu: goto label_40b80c;
        case 0x40b810u: goto label_40b810;
        case 0x40b814u: goto label_40b814;
        case 0x40b818u: goto label_40b818;
        case 0x40b81cu: goto label_40b81c;
        case 0x40b820u: goto label_40b820;
        case 0x40b824u: goto label_40b824;
        case 0x40b828u: goto label_40b828;
        case 0x40b82cu: goto label_40b82c;
        case 0x40b830u: goto label_40b830;
        case 0x40b834u: goto label_40b834;
        case 0x40b838u: goto label_40b838;
        case 0x40b83cu: goto label_40b83c;
        case 0x40b840u: goto label_40b840;
        case 0x40b844u: goto label_40b844;
        case 0x40b848u: goto label_40b848;
        case 0x40b84cu: goto label_40b84c;
        case 0x40b850u: goto label_40b850;
        case 0x40b854u: goto label_40b854;
        case 0x40b858u: goto label_40b858;
        case 0x40b85cu: goto label_40b85c;
        case 0x40b860u: goto label_40b860;
        case 0x40b864u: goto label_40b864;
        case 0x40b868u: goto label_40b868;
        case 0x40b86cu: goto label_40b86c;
        case 0x40b870u: goto label_40b870;
        case 0x40b874u: goto label_40b874;
        case 0x40b878u: goto label_40b878;
        case 0x40b87cu: goto label_40b87c;
        case 0x40b880u: goto label_40b880;
        case 0x40b884u: goto label_40b884;
        case 0x40b888u: goto label_40b888;
        case 0x40b88cu: goto label_40b88c;
        case 0x40b890u: goto label_40b890;
        case 0x40b894u: goto label_40b894;
        case 0x40b898u: goto label_40b898;
        case 0x40b89cu: goto label_40b89c;
        case 0x40b8a0u: goto label_40b8a0;
        case 0x40b8a4u: goto label_40b8a4;
        case 0x40b8a8u: goto label_40b8a8;
        case 0x40b8acu: goto label_40b8ac;
        case 0x40b8b0u: goto label_40b8b0;
        case 0x40b8b4u: goto label_40b8b4;
        case 0x40b8b8u: goto label_40b8b8;
        case 0x40b8bcu: goto label_40b8bc;
        case 0x40b8c0u: goto label_40b8c0;
        case 0x40b8c4u: goto label_40b8c4;
        case 0x40b8c8u: goto label_40b8c8;
        case 0x40b8ccu: goto label_40b8cc;
        case 0x40b8d0u: goto label_40b8d0;
        case 0x40b8d4u: goto label_40b8d4;
        case 0x40b8d8u: goto label_40b8d8;
        case 0x40b8dcu: goto label_40b8dc;
        case 0x40b8e0u: goto label_40b8e0;
        case 0x40b8e4u: goto label_40b8e4;
        case 0x40b8e8u: goto label_40b8e8;
        case 0x40b8ecu: goto label_40b8ec;
        case 0x40b8f0u: goto label_40b8f0;
        case 0x40b8f4u: goto label_40b8f4;
        case 0x40b8f8u: goto label_40b8f8;
        case 0x40b8fcu: goto label_40b8fc;
        case 0x40b900u: goto label_40b900;
        case 0x40b904u: goto label_40b904;
        case 0x40b908u: goto label_40b908;
        case 0x40b90cu: goto label_40b90c;
        case 0x40b910u: goto label_40b910;
        case 0x40b914u: goto label_40b914;
        case 0x40b918u: goto label_40b918;
        case 0x40b91cu: goto label_40b91c;
        case 0x40b920u: goto label_40b920;
        case 0x40b924u: goto label_40b924;
        case 0x40b928u: goto label_40b928;
        case 0x40b92cu: goto label_40b92c;
        case 0x40b930u: goto label_40b930;
        case 0x40b934u: goto label_40b934;
        case 0x40b938u: goto label_40b938;
        case 0x40b93cu: goto label_40b93c;
        case 0x40b940u: goto label_40b940;
        case 0x40b944u: goto label_40b944;
        case 0x40b948u: goto label_40b948;
        case 0x40b94cu: goto label_40b94c;
        case 0x40b950u: goto label_40b950;
        case 0x40b954u: goto label_40b954;
        case 0x40b958u: goto label_40b958;
        case 0x40b95cu: goto label_40b95c;
        case 0x40b960u: goto label_40b960;
        case 0x40b964u: goto label_40b964;
        case 0x40b968u: goto label_40b968;
        case 0x40b96cu: goto label_40b96c;
        case 0x40b970u: goto label_40b970;
        case 0x40b974u: goto label_40b974;
        case 0x40b978u: goto label_40b978;
        case 0x40b97cu: goto label_40b97c;
        case 0x40b980u: goto label_40b980;
        case 0x40b984u: goto label_40b984;
        case 0x40b988u: goto label_40b988;
        case 0x40b98cu: goto label_40b98c;
        case 0x40b990u: goto label_40b990;
        case 0x40b994u: goto label_40b994;
        case 0x40b998u: goto label_40b998;
        case 0x40b99cu: goto label_40b99c;
        case 0x40b9a0u: goto label_40b9a0;
        case 0x40b9a4u: goto label_40b9a4;
        case 0x40b9a8u: goto label_40b9a8;
        case 0x40b9acu: goto label_40b9ac;
        case 0x40b9b0u: goto label_40b9b0;
        case 0x40b9b4u: goto label_40b9b4;
        case 0x40b9b8u: goto label_40b9b8;
        case 0x40b9bcu: goto label_40b9bc;
        default: break;
    }

    ctx->pc = 0x40aaf0u;

label_40aaf0:
    // 0x40aaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40aaf4:
    // 0x40aaf4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40aaf8:
    // 0x40aaf8: 0xc460fc70  lwc1        $f0, -0x390($v1)
    ctx->pc = 0x40aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40aafc:
    // 0x40aafc: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x40aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_40ab00:
    // 0x40ab00: 0xc4c1fc74  lwc1        $f1, -0x38C($a2)
    ctx->pc = 0x40ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294966388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ab04:
    // 0x40ab04: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x40ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40ab08:
    // 0x40ab08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40ab0c:
    // 0x40ab0c: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x40ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40ab10:
    // 0x40ab10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x40ab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_40ab14:
    // 0x40ab14: 0x8ca500c8  lw          $a1, 0xC8($a1)
    ctx->pc = 0x40ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_40ab18:
    // 0x40ab18: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x40ab18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_40ab1c:
    // 0x40ab1c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x40ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ab20:
    // 0x40ab20: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x40ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_40ab24:
    // 0x40ab24: 0xc4a20dbc  lwc1        $f2, 0xDBC($a1)
    ctx->pc = 0x40ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40ab28:
    // 0x40ab28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ab28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ab2c:
    // 0x40ab2c: 0x8ca60d60  lw          $a2, 0xD60($a1)
    ctx->pc = 0x40ab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_40ab30:
    // 0x40ab30: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x40ab30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_40ab34:
    // 0x40ab34: 0x8ca30550  lw          $v1, 0x550($a1)
    ctx->pc = 0x40ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_40ab38:
    // 0x40ab38: 0x80c60004  lb          $a2, 0x4($a2)
    ctx->pc = 0x40ab38u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_40ab3c:
    // 0x40ab3c: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x40ab3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_40ab40:
    // 0x40ab40: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x40ab40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ab44:
    // 0x40ab44: 0x0  nop
    ctx->pc = 0x40ab44u;
    // NOP
label_40ab48:
    // 0x40ab48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x40ab48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40ab4c:
    // 0x40ab4c: 0x2463ffd5  addiu       $v1, $v1, -0x2B
    ctx->pc = 0x40ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967253));
label_40ab50:
    // 0x40ab50: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x40ab50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_40ab54:
    // 0x40ab54: 0x0  nop
    ctx->pc = 0x40ab54u;
    // NOP
label_40ab58:
    // 0x40ab58: 0x0  nop
    ctx->pc = 0x40ab58u;
    // NOP
label_40ab5c:
    // 0x40ab5c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x40ab5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_40ab60:
    // 0x40ab60: 0x502000ad  beql        $at, $zero, . + 4 + (0xAD << 2)
label_40ab64:
    if (ctx->pc == 0x40AB64u) {
        ctx->pc = 0x40AB64u;
            // 0x40ab64: 0xc4a40dc4  lwc1        $f4, 0xDC4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x40AB68u;
        goto label_40ab68;
    }
    ctx->pc = 0x40AB60u;
    {
        const bool branch_taken_0x40ab60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ab60) {
            ctx->pc = 0x40AB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AB60u;
            // 0x40ab64: 0xc4a40dc4  lwc1        $f4, 0xDC4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AE18u;
            goto label_40ae18;
        }
    }
    ctx->pc = 0x40AB68u;
label_40ab68:
    // 0x40ab68: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x40ab68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40ab6c:
    // 0x40ab6c: 0x0  nop
    ctx->pc = 0x40ab6cu;
    // NOP
label_40ab70:
    // 0x40ab70: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x40ab70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ab74:
    // 0x40ab74: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_40ab78:
    if (ctx->pc == 0x40AB78u) {
        ctx->pc = 0x40AB78u;
            // 0x40ab78: 0xc4a50dc4  lwc1        $f5, 0xDC4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->pc = 0x40AB7Cu;
        goto label_40ab7c;
    }
    ctx->pc = 0x40AB74u;
    {
        const bool branch_taken_0x40ab74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AB74u;
            // 0x40ab78: 0xc4a50dc4  lwc1        $f5, 0xDC4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ab74) {
            ctx->pc = 0x40AC94u;
            goto label_40ac94;
        }
    }
    ctx->pc = 0x40AB7Cu;
label_40ab7c:
    // 0x40ab7c: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x40ab7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_40ab80:
    // 0x40ab80: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x40ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_40ab84:
    // 0x40ab84: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x40ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_40ab88:
    // 0x40ab88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ab88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ab8c:
    // 0x40ab8c: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x40ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40ab90:
    // 0x40ab90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40ab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ab94:
    // 0x40ab94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40ab98:
    if (ctx->pc == 0x40AB98u) {
        ctx->pc = 0x40AB98u;
            // 0x40ab98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40AB9Cu;
        goto label_40ab9c;
    }
    ctx->pc = 0x40AB94u;
    {
        const bool branch_taken_0x40ab94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AB94u;
            // 0x40ab98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ab94) {
            ctx->pc = 0x40ABA0u;
            goto label_40aba0;
        }
    }
    ctx->pc = 0x40AB9Cu;
label_40ab9c:
    // 0x40ab9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40aba0:
    // 0x40aba0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x40aba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_40aba4:
    // 0x40aba4: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x40aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_40aba8:
    // 0x40aba8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x40aba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_40abac:
    // 0x40abac: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x40abacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_40abb0:
    // 0x40abb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40abb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40abb4:
    // 0x40abb4: 0x0  nop
    ctx->pc = 0x40abb4u;
    // NOP
label_40abb8:
    // 0x40abb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40abb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40abbc:
    // 0x40abbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40abc0:
    if (ctx->pc == 0x40ABC0u) {
        ctx->pc = 0x40ABC0u;
            // 0x40abc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40ABC4u;
        goto label_40abc4;
    }
    ctx->pc = 0x40ABBCu;
    {
        const bool branch_taken_0x40abbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40ABC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ABBCu;
            // 0x40abc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40abbc) {
            ctx->pc = 0x40ABC8u;
            goto label_40abc8;
        }
    }
    ctx->pc = 0x40ABC4u;
label_40abc4:
    // 0x40abc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40abc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40abc8:
    // 0x40abc8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x40abc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_40abcc:
    // 0x40abcc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x40abccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_40abd0:
    // 0x40abd0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_40abd4:
    if (ctx->pc == 0x40ABD4u) {
        ctx->pc = 0x40ABD8u;
        goto label_40abd8;
    }
    ctx->pc = 0x40ABD0u;
    {
        const bool branch_taken_0x40abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40abd0) {
            ctx->pc = 0x40ABE4u;
            goto label_40abe4;
        }
    }
    ctx->pc = 0x40ABD8u;
label_40abd8:
    // 0x40abd8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x40abd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_40abdc:
    // 0x40abdc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_40abe0:
    if (ctx->pc == 0x40ABE0u) {
        ctx->pc = 0x40ABE0u;
            // 0x40abe0: 0x46002886  mov.s       $f2, $f5 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x40ABE4u;
        goto label_40abe4;
    }
    ctx->pc = 0x40ABDCu;
    {
        const bool branch_taken_0x40abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ABDCu;
            // 0x40abe0: 0x46002886  mov.s       $f2, $f5 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40abdc) {
            ctx->pc = 0x40AC88u;
            goto label_40ac88;
        }
    }
    ctx->pc = 0x40ABE4u;
label_40abe4:
    // 0x40abe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40abe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40abe8:
    // 0x40abe8: 0x0  nop
    ctx->pc = 0x40abe8u;
    // NOP
label_40abec:
    // 0x40abec: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x40abecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40abf0:
    // 0x40abf0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_40abf4:
    if (ctx->pc == 0x40ABF4u) {
        ctx->pc = 0x40ABF8u;
        goto label_40abf8;
    }
    ctx->pc = 0x40ABF0u;
    {
        const bool branch_taken_0x40abf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40abf0) {
            ctx->pc = 0x40AC3Cu;
            goto label_40ac3c;
        }
    }
    ctx->pc = 0x40ABF8u;
label_40abf8:
    // 0x40abf8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x40abf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40abfc:
    // 0x40abfc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_40ac00:
    if (ctx->pc == 0x40AC00u) {
        ctx->pc = 0x40AC00u;
            // 0x40ac00: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x40AC04u;
        goto label_40ac04;
    }
    ctx->pc = 0x40ABFCu;
    {
        const bool branch_taken_0x40abfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40abfc) {
            ctx->pc = 0x40AC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40ABFCu;
            // 0x40ac00: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AC18u;
            goto label_40ac18;
        }
    }
    ctx->pc = 0x40AC04u;
label_40ac04:
    // 0x40ac04: 0x3c033ac4  lui         $v1, 0x3AC4
    ctx->pc = 0x40ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15044 << 16));
label_40ac08:
    // 0x40ac08: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x40ac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_40ac0c:
    // 0x40ac0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ac0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac10:
    // 0x40ac10: 0x10000005  b           . + 4 + (0x5 << 2)
label_40ac14:
    if (ctx->pc == 0x40AC14u) {
        ctx->pc = 0x40AC14u;
            // 0x40ac14: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x40AC18u;
        goto label_40ac18;
    }
    ctx->pc = 0x40AC10u;
    {
        const bool branch_taken_0x40ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC10u;
            // 0x40ac14: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ac10) {
            ctx->pc = 0x40AC28u;
            goto label_40ac28;
        }
    }
    ctx->pc = 0x40AC18u;
label_40ac18:
    // 0x40ac18: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x40ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_40ac1c:
    // 0x40ac1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ac1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac20:
    // 0x40ac20: 0x0  nop
    ctx->pc = 0x40ac20u;
    // NOP
label_40ac24:
    // 0x40ac24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40ac24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_40ac28:
    // 0x40ac28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ac28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac2c:
    // 0x40ac2c: 0x0  nop
    ctx->pc = 0x40ac2cu;
    // NOP
label_40ac30:
    // 0x40ac30: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x40ac30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_40ac34:
    // 0x40ac34: 0x10000014  b           . + 4 + (0x14 << 2)
label_40ac38:
    if (ctx->pc == 0x40AC38u) {
        ctx->pc = 0x40AC38u;
            // 0x40ac38: 0x4604115c  madd.s      $f5, $f2, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
        ctx->pc = 0x40AC3Cu;
        goto label_40ac3c;
    }
    ctx->pc = 0x40AC34u;
    {
        const bool branch_taken_0x40ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC34u;
            // 0x40ac38: 0x4604115c  madd.s      $f5, $f2, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ac34) {
            ctx->pc = 0x40AC88u;
            goto label_40ac88;
        }
    }
    ctx->pc = 0x40AC3Cu;
label_40ac3c:
    // 0x40ac3c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x40ac3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ac40:
    // 0x40ac40: 0x45020073  bc1fl       . + 4 + (0x73 << 2)
label_40ac44:
    if (ctx->pc == 0x40AC44u) {
        ctx->pc = 0x40AC44u;
            // 0x40ac44: 0xe4820058  swc1        $f2, 0x58($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->pc = 0x40AC48u;
        goto label_40ac48;
    }
    ctx->pc = 0x40AC40u;
    {
        const bool branch_taken_0x40ac40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ac40) {
            ctx->pc = 0x40AC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC40u;
            // 0x40ac44: 0xe4820058  swc1        $f2, 0x58($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AC48u;
label_40ac48:
    // 0x40ac48: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x40ac48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ac4c:
    // 0x40ac4c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_40ac50:
    if (ctx->pc == 0x40AC50u) {
        ctx->pc = 0x40AC50u;
            // 0x40ac50: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->pc = 0x40AC54u;
        goto label_40ac54;
    }
    ctx->pc = 0x40AC4Cu;
    {
        const bool branch_taken_0x40ac4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ac4c) {
            ctx->pc = 0x40AC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC4Cu;
            // 0x40ac50: 0x3c033c03  lui         $v1, 0x3C03 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AC68u;
            goto label_40ac68;
        }
    }
    ctx->pc = 0x40AC54u;
label_40ac54:
    // 0x40ac54: 0x3c033ac4  lui         $v1, 0x3AC4
    ctx->pc = 0x40ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15044 << 16));
label_40ac58:
    // 0x40ac58: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x40ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_40ac5c:
    // 0x40ac5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ac5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac60:
    // 0x40ac60: 0x10000005  b           . + 4 + (0x5 << 2)
label_40ac64:
    if (ctx->pc == 0x40AC64u) {
        ctx->pc = 0x40AC64u;
            // 0x40ac64: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x40AC68u;
        goto label_40ac68;
    }
    ctx->pc = 0x40AC60u;
    {
        const bool branch_taken_0x40ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC60u;
            // 0x40ac64: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ac60) {
            ctx->pc = 0x40AC78u;
            goto label_40ac78;
        }
    }
    ctx->pc = 0x40AC68u;
label_40ac68:
    // 0x40ac68: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x40ac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
label_40ac6c:
    // 0x40ac6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ac6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac70:
    // 0x40ac70: 0x0  nop
    ctx->pc = 0x40ac70u;
    // NOP
label_40ac74:
    // 0x40ac74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x40ac74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_40ac78:
    // 0x40ac78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ac78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ac7c:
    // 0x40ac7c: 0x0  nop
    ctx->pc = 0x40ac7cu;
    // NOP
label_40ac80:
    // 0x40ac80: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x40ac80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_40ac84:
    // 0x40ac84: 0x4604115c  madd.s      $f5, $f2, $f4
    ctx->pc = 0x40ac84u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_40ac88:
    // 0x40ac88: 0xe4820058  swc1        $f2, 0x58($a0)
    ctx->pc = 0x40ac88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_40ac8c:
    // 0x40ac8c: 0x10000060  b           . + 4 + (0x60 << 2)
label_40ac90:
    if (ctx->pc == 0x40AC90u) {
        ctx->pc = 0x40AC94u;
        goto label_40ac94;
    }
    ctx->pc = 0x40AC8Cu;
    {
        const bool branch_taken_0x40ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ac8c) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AC94u;
label_40ac94:
    // 0x40ac94: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x40ac94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_40ac98:
    // 0x40ac98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x40ac98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ac9c:
    // 0x40ac9c: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
label_40aca0:
    if (ctx->pc == 0x40ACA0u) {
        ctx->pc = 0x40ACA0u;
            // 0x40aca0: 0x46052842  mul.s       $f1, $f5, $f5 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->pc = 0x40ACA4u;
        goto label_40aca4;
    }
    ctx->pc = 0x40AC9Cu;
    {
        const bool branch_taken_0x40ac9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ac9c) {
            ctx->pc = 0x40ACA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AC9Cu;
            // 0x40aca0: 0x46052842  mul.s       $f1, $f5, $f5 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AD14u;
            goto label_40ad14;
        }
    }
    ctx->pc = 0x40ACA4u;
label_40aca4:
    // 0x40aca4: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x40aca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40aca8:
    // 0x40aca8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_40acac:
    if (ctx->pc == 0x40ACACu) {
        ctx->pc = 0x40ACB0u;
        goto label_40acb0;
    }
    ctx->pc = 0x40ACA8u;
    {
        const bool branch_taken_0x40aca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40aca8) {
            ctx->pc = 0x40ACDCu;
            goto label_40acdc;
        }
    }
    ctx->pc = 0x40ACB0u;
label_40acb0:
    // 0x40acb0: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40acb4:
    // 0x40acb4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40acb8:
    // 0x40acb8: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40acb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40acbc:
    // 0x40acbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40acbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40acc0:
    // 0x40acc0: 0x0  nop
    ctx->pc = 0x40acc0u;
    // NOP
label_40acc4:
    // 0x40acc4: 0x4604015d  msub.s      $f5, $f0, $f4
    ctx->pc = 0x40acc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_40acc8:
    // 0x40acc8: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x40acc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40accc:
    // 0x40accc: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_40acd0:
    if (ctx->pc == 0x40ACD0u) {
        ctx->pc = 0x40ACD4u;
        goto label_40acd4;
    }
    ctx->pc = 0x40ACCCu;
    {
        const bool branch_taken_0x40accc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40accc) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ACD4u;
label_40acd4:
    // 0x40acd4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_40acd8:
    if (ctx->pc == 0x40ACD8u) {
        ctx->pc = 0x40ACD8u;
            // 0x40acd8: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x40ACDCu;
        goto label_40acdc;
    }
    ctx->pc = 0x40ACD4u;
    {
        const bool branch_taken_0x40acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ACD4u;
            // 0x40acd8: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40acd4) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ACDCu;
label_40acdc:
    // 0x40acdc: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x40acdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ace0:
    // 0x40ace0: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
label_40ace4:
    if (ctx->pc == 0x40ACE4u) {
        ctx->pc = 0x40ACE8u;
        goto label_40ace8;
    }
    ctx->pc = 0x40ACE0u;
    {
        const bool branch_taken_0x40ace0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ace0) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ACE8u;
label_40ace8:
    // 0x40ace8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40acec:
    // 0x40acec: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40acf0:
    // 0x40acf0: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40acf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40acf4:
    // 0x40acf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40acf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40acf8:
    // 0x40acf8: 0x0  nop
    ctx->pc = 0x40acf8u;
    // NOP
label_40acfc:
    // 0x40acfc: 0x4604015c  madd.s      $f5, $f0, $f4
    ctx->pc = 0x40acfcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_40ad00:
    // 0x40ad00: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x40ad00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad04:
    // 0x40ad04: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_40ad08:
    if (ctx->pc == 0x40AD08u) {
        ctx->pc = 0x40AD0Cu;
        goto label_40ad0c;
    }
    ctx->pc = 0x40AD04u;
    {
        const bool branch_taken_0x40ad04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad04) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD0Cu;
label_40ad0c:
    // 0x40ad0c: 0x10000040  b           . + 4 + (0x40 << 2)
label_40ad10:
    if (ctx->pc == 0x40AD10u) {
        ctx->pc = 0x40AD10u;
            // 0x40ad10: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x40AD14u;
        goto label_40ad14;
    }
    ctx->pc = 0x40AD0Cu;
    {
        const bool branch_taken_0x40ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AD0Cu;
            // 0x40ad10: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad0c) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD14u;
label_40ad14:
    // 0x40ad14: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x40ad14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_40ad18:
    // 0x40ad18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40ad18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad1c:
    // 0x40ad1c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_40ad20:
    if (ctx->pc == 0x40AD20u) {
        ctx->pc = 0x40AD24u;
        goto label_40ad24;
    }
    ctx->pc = 0x40AD1Cu;
    {
        const bool branch_taken_0x40ad1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad1c) {
            ctx->pc = 0x40AD94u;
            goto label_40ad94;
        }
    }
    ctx->pc = 0x40AD24u;
label_40ad24:
    // 0x40ad24: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x40ad24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad28:
    // 0x40ad28: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_40ad2c:
    if (ctx->pc == 0x40AD2Cu) {
        ctx->pc = 0x40AD30u;
        goto label_40ad30;
    }
    ctx->pc = 0x40AD28u;
    {
        const bool branch_taken_0x40ad28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad28) {
            ctx->pc = 0x40AD5Cu;
            goto label_40ad5c;
        }
    }
    ctx->pc = 0x40AD30u;
label_40ad30:
    // 0x40ad30: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40ad34:
    // 0x40ad34: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40ad34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40ad38:
    // 0x40ad38: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40ad38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40ad3c:
    // 0x40ad3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ad3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ad40:
    // 0x40ad40: 0x0  nop
    ctx->pc = 0x40ad40u;
    // NOP
label_40ad44:
    // 0x40ad44: 0x4604015d  msub.s      $f5, $f0, $f4
    ctx->pc = 0x40ad44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_40ad48:
    // 0x40ad48: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x40ad48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad4c:
    // 0x40ad4c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_40ad50:
    if (ctx->pc == 0x40AD50u) {
        ctx->pc = 0x40AD54u;
        goto label_40ad54;
    }
    ctx->pc = 0x40AD4Cu;
    {
        const bool branch_taken_0x40ad4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad4c) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD54u;
label_40ad54:
    // 0x40ad54: 0x1000002e  b           . + 4 + (0x2E << 2)
label_40ad58:
    if (ctx->pc == 0x40AD58u) {
        ctx->pc = 0x40AD58u;
            // 0x40ad58: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40AD5Cu;
        goto label_40ad5c;
    }
    ctx->pc = 0x40AD54u;
    {
        const bool branch_taken_0x40ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AD54u;
            // 0x40ad58: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad54) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD5Cu;
label_40ad5c:
    // 0x40ad5c: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x40ad5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad60:
    // 0x40ad60: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_40ad64:
    if (ctx->pc == 0x40AD64u) {
        ctx->pc = 0x40AD68u;
        goto label_40ad68;
    }
    ctx->pc = 0x40AD60u;
    {
        const bool branch_taken_0x40ad60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad60) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD68u;
label_40ad68:
    // 0x40ad68: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x40ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_40ad6c:
    // 0x40ad6c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x40ad6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_40ad70:
    // 0x40ad70: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40ad70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40ad74:
    // 0x40ad74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40ad74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ad78:
    // 0x40ad78: 0x0  nop
    ctx->pc = 0x40ad78u;
    // NOP
label_40ad7c:
    // 0x40ad7c: 0x4604015c  madd.s      $f5, $f0, $f4
    ctx->pc = 0x40ad7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_40ad80:
    // 0x40ad80: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x40ad80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad84:
    // 0x40ad84: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_40ad88:
    if (ctx->pc == 0x40AD88u) {
        ctx->pc = 0x40AD8Cu;
        goto label_40ad8c;
    }
    ctx->pc = 0x40AD84u;
    {
        const bool branch_taken_0x40ad84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad84) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD8Cu;
label_40ad8c:
    // 0x40ad8c: 0x10000020  b           . + 4 + (0x20 << 2)
label_40ad90:
    if (ctx->pc == 0x40AD90u) {
        ctx->pc = 0x40AD90u;
            // 0x40ad90: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40AD94u;
        goto label_40ad94;
    }
    ctx->pc = 0x40AD8Cu;
    {
        const bool branch_taken_0x40ad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AD8Cu;
            // 0x40ad90: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ad8c) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AD94u;
label_40ad94:
    // 0x40ad94: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x40ad94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ad98:
    // 0x40ad98: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_40ad9c:
    if (ctx->pc == 0x40AD9Cu) {
        ctx->pc = 0x40ADA0u;
        goto label_40ada0;
    }
    ctx->pc = 0x40AD98u;
    {
        const bool branch_taken_0x40ad98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ad98) {
            ctx->pc = 0x40ADD4u;
            goto label_40add4;
        }
    }
    ctx->pc = 0x40ADA0u;
label_40ada0:
    // 0x40ada0: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x40ada0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_40ada4:
    // 0x40ada4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x40ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_40ada8:
    // 0x40ada8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x40ada8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_40adac:
    // 0x40adac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40adacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40adb0:
    // 0x40adb0: 0x0  nop
    ctx->pc = 0x40adb0u;
    // NOP
label_40adb4:
    // 0x40adb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40adb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40adb8:
    // 0x40adb8: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40adb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40adbc:
    // 0x40adbc: 0x4600215c  madd.s      $f5, $f4, $f0
    ctx->pc = 0x40adbcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_40adc0:
    // 0x40adc0: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x40adc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40adc4:
    // 0x40adc4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_40adc8:
    if (ctx->pc == 0x40ADC8u) {
        ctx->pc = 0x40ADCCu;
        goto label_40adcc;
    }
    ctx->pc = 0x40ADC4u;
    {
        const bool branch_taken_0x40adc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40adc4) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ADCCu;
label_40adcc:
    // 0x40adcc: 0x10000010  b           . + 4 + (0x10 << 2)
label_40add0:
    if (ctx->pc == 0x40ADD0u) {
        ctx->pc = 0x40ADD0u;
            // 0x40add0: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x40ADD4u;
        goto label_40add4;
    }
    ctx->pc = 0x40ADCCu;
    {
        const bool branch_taken_0x40adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40ADCCu;
            // 0x40add0: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40adcc) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ADD4u;
label_40add4:
    // 0x40add4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x40add4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40add8:
    // 0x40add8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_40addc:
    if (ctx->pc == 0x40ADDCu) {
        ctx->pc = 0x40ADE0u;
        goto label_40ade0;
    }
    ctx->pc = 0x40ADD8u;
    {
        const bool branch_taken_0x40add8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40add8) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40ADE0u;
label_40ade0:
    // 0x40ade0: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x40ade0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_40ade4:
    // 0x40ade4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x40ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_40ade8:
    // 0x40ade8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x40ade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_40adec:
    // 0x40adec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40adecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40adf0:
    // 0x40adf0: 0x0  nop
    ctx->pc = 0x40adf0u;
    // NOP
label_40adf4:
    // 0x40adf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40adf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40adf8:
    // 0x40adf8: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x40adf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_40adfc:
    // 0x40adfc: 0x4600215c  madd.s      $f5, $f4, $f0
    ctx->pc = 0x40adfcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_40ae00:
    // 0x40ae00: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x40ae00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ae04:
    // 0x40ae04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40ae08:
    if (ctx->pc == 0x40AE08u) {
        ctx->pc = 0x40AE0Cu;
        goto label_40ae0c;
    }
    ctx->pc = 0x40AE04u;
    {
        const bool branch_taken_0x40ae04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40ae04) {
            ctx->pc = 0x40AE10u;
            goto label_40ae10;
        }
    }
    ctx->pc = 0x40AE0Cu;
label_40ae0c:
    // 0x40ae0c: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x40ae0cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_40ae10:
    // 0x40ae10: 0xe4a50dc4  swc1        $f5, 0xDC4($a1)
    ctx->pc = 0x40ae10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3524), bits); }
label_40ae14:
    // 0x40ae14: 0xc4a40dc4  lwc1        $f4, 0xDC4($a1)
    ctx->pc = 0x40ae14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40ae18:
    // 0x40ae18: 0x8ca30550  lw          $v1, 0x550($a1)
    ctx->pc = 0x40ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_40ae1c:
    // 0x40ae1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ae1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ae20:
    // 0x40ae20: 0x0  nop
    ctx->pc = 0x40ae20u;
    // NOP
label_40ae24:
    // 0x40ae24: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x40ae24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ae28:
    // 0x40ae28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40ae2c:
    if (ctx->pc == 0x40AE2Cu) {
        ctx->pc = 0x40AE2Cu;
            // 0x40ae2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40AE30u;
        goto label_40ae30;
    }
    ctx->pc = 0x40AE28u;
    {
        const bool branch_taken_0x40ae28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AE28u;
            // 0x40ae2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae28) {
            ctx->pc = 0x40AE34u;
            goto label_40ae34;
        }
    }
    ctx->pc = 0x40AE30u;
label_40ae30:
    // 0x40ae30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ae34:
    // 0x40ae34: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_40ae38:
    if (ctx->pc == 0x40AE38u) {
        ctx->pc = 0x40AE38u;
            // 0x40ae38: 0x43042  srl         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x40AE3Cu;
        goto label_40ae3c;
    }
    ctx->pc = 0x40AE34u;
    {
        const bool branch_taken_0x40ae34 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x40ae34) {
            ctx->pc = 0x40AE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AE34u;
            // 0x40ae38: 0x43042  srl         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AE48u;
            goto label_40ae48;
        }
    }
    ctx->pc = 0x40AE3Cu;
label_40ae3c:
    // 0x40ae3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40ae3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ae40:
    // 0x40ae40: 0x10000007  b           . + 4 + (0x7 << 2)
label_40ae44:
    if (ctx->pc == 0x40AE44u) {
        ctx->pc = 0x40AE44u;
            // 0x40ae44: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40AE48u;
        goto label_40ae48;
    }
    ctx->pc = 0x40AE40u;
    {
        const bool branch_taken_0x40ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AE40u;
            // 0x40ae44: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae40) {
            ctx->pc = 0x40AE60u;
            goto label_40ae60;
        }
    }
    ctx->pc = 0x40AE48u;
label_40ae48:
    // 0x40ae48: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x40ae48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_40ae4c:
    // 0x40ae4c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x40ae4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_40ae50:
    // 0x40ae50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x40ae50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ae54:
    // 0x40ae54: 0x0  nop
    ctx->pc = 0x40ae54u;
    // NOP
label_40ae58:
    // 0x40ae58: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x40ae58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_40ae5c:
    // 0x40ae5c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x40ae5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_40ae60:
    // 0x40ae60: 0x8ca50d6c  lw          $a1, 0xD6C($a1)
    ctx->pc = 0x40ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_40ae64:
    // 0x40ae64: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x40ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_40ae68:
    // 0x40ae68: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x40ae68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40ae6c:
    // 0x40ae6c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x40ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_40ae70:
    // 0x40ae70: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x40ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_40ae74:
    // 0x40ae74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x40ae74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40ae78:
    // 0x40ae78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40ae78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ae7c:
    // 0x40ae7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40ae80:
    // 0x40ae80: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x40ae80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40ae84:
    // 0x40ae84: 0x90a50008  lbu         $a1, 0x8($a1)
    ctx->pc = 0x40ae84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_40ae88:
    // 0x40ae88: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x40ae88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_40ae8c:
    // 0x40ae8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40ae8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40ae90:
    // 0x40ae90: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x40ae90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_40ae94:
    // 0x40ae94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40ae98:
    if (ctx->pc == 0x40AE98u) {
        ctx->pc = 0x40AE98u;
            // 0x40ae98: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x40AE9Cu;
        goto label_40ae9c;
    }
    ctx->pc = 0x40AE94u;
    {
        const bool branch_taken_0x40ae94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AE94u;
            // 0x40ae98: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ae94) {
            ctx->pc = 0x40AEA0u;
            goto label_40aea0;
        }
    }
    ctx->pc = 0x40AE9Cu;
label_40ae9c:
    // 0x40ae9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40aea0:
    // 0x40aea0: 0x8066010d  lb          $a2, 0x10D($v1)
    ctx->pc = 0x40aea0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_40aea4:
    // 0x40aea4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x40aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_40aea8:
    // 0x40aea8: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x40aea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_40aeac:
    // 0x40aeac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40aeb0:
    // 0x40aeb0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x40aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_40aeb4:
    // 0x40aeb4: 0xa0660114  sb          $a2, 0x114($v1)
    ctx->pc = 0x40aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 276), (uint8_t)GPR_U32(ctx, 6));
label_40aeb8:
    // 0x40aeb8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x40aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_40aebc:
    // 0x40aebc: 0xa065010f  sb          $a1, 0x10F($v1)
    ctx->pc = 0x40aebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 271), (uint8_t)GPR_U32(ctx, 5));
label_40aec0:
    // 0x40aec0: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x40aec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_40aec4:
    // 0x40aec4: 0x80660112  lb          $a2, 0x112($v1)
    ctx->pc = 0x40aec4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 274)));
label_40aec8:
    // 0x40aec8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x40aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40aecc:
    // 0x40aecc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x40aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40aed0:
    // 0x40aed0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x40aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_40aed4:
    // 0x40aed4: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x40aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
label_40aed8:
    // 0x40aed8: 0x8cc6005c  lw          $a2, 0x5C($a2)
    ctx->pc = 0x40aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_40aedc:
    // 0x40aedc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x40aedcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_40aee0:
    // 0x40aee0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40aee4:
    // 0x40aee4: 0x8cc600b4  lw          $a2, 0xB4($a2)
    ctx->pc = 0x40aee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_40aee8:
    // 0x40aee8: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x40aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_40aeec:
    // 0x40aeec: 0xa0650111  sb          $a1, 0x111($v1)
    ctx->pc = 0x40aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 273), (uint8_t)GPR_U32(ctx, 5));
label_40aef0:
    // 0x40aef0: 0x80650114  lb          $a1, 0x114($v1)
    ctx->pc = 0x40aef0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_40aef4:
    // 0x40aef4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x40aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40aef8:
    // 0x40aef8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_40aefc:
    // 0x40aefc: 0x8ca5005c  lw          $a1, 0x5C($a1)
    ctx->pc = 0x40aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_40af00:
    // 0x40af00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x40af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_40af04:
    // 0x40af04: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x40af04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40af08:
    // 0x40af08: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x40af08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_40af0c:
    // 0x40af0c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x40af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_40af10:
    // 0x40af10: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x40af10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_40af14:
    // 0x40af14: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x40af14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_40af18:
    // 0x40af18: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x40af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_40af1c:
    // 0x40af1c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x40af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_40af20:
    // 0x40af20: 0x3e00008  jr          $ra
label_40af24:
    if (ctx->pc == 0x40AF24u) {
        ctx->pc = 0x40AF24u;
            // 0x40af24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40AF28u;
        goto label_40af28;
    }
    ctx->pc = 0x40AF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AF20u;
            // 0x40af24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40AF28u;
label_40af28:
    // 0x40af28: 0x0  nop
    ctx->pc = 0x40af28u;
    // NOP
label_40af2c:
    // 0x40af2c: 0x0  nop
    ctx->pc = 0x40af2cu;
    // NOP
label_40af30:
    // 0x40af30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40af34:
    // 0x40af34: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40af34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40af38:
    // 0x40af38: 0xc461fc60  lwc1        $f1, -0x3A0($v1)
    ctx->pc = 0x40af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40af3c:
    // 0x40af3c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x40af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40af40:
    // 0x40af40: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40af40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40af44:
    // 0x40af44: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x40af44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_40af48:
    // 0x40af48: 0xc460fc68  lwc1        $f0, -0x398($v1)
    ctx->pc = 0x40af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40af4c:
    // 0x40af4c: 0x8ca700c8  lw          $a3, 0xC8($a1)
    ctx->pc = 0x40af4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_40af50:
    // 0x40af50: 0xc482fc64  lwc1        $f2, -0x39C($a0)
    ctx->pc = 0x40af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40af54:
    // 0x40af54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40af54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40af58:
    // 0x40af58: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40af58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40af5c:
    // 0x40af5c: 0xc461fc6c  lwc1        $f1, -0x394($v1)
    ctx->pc = 0x40af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40af60:
    // 0x40af60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40af60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40af64:
    // 0x40af64: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40af64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40af68:
    // 0x40af68: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x40af68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_40af6c:
    // 0x40af6c: 0xc4e40dc4  lwc1        $f4, 0xDC4($a3)
    ctx->pc = 0x40af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40af70:
    // 0x40af70: 0x8ce30550  lw          $v1, 0x550($a3)
    ctx->pc = 0x40af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1360)));
label_40af74:
    // 0x40af74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40af74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40af78:
    // 0x40af78: 0x0  nop
    ctx->pc = 0x40af78u;
    // NOP
label_40af7c:
    // 0x40af7c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x40af7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40af80:
    // 0x40af80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40af84:
    if (ctx->pc == 0x40AF84u) {
        ctx->pc = 0x40AF84u;
            // 0x40af84: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->pc = 0x40AF88u;
        goto label_40af88;
    }
    ctx->pc = 0x40AF80u;
    {
        const bool branch_taken_0x40af80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AF80u;
            // 0x40af84: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af80) {
            ctx->pc = 0x40AF8Cu;
            goto label_40af8c;
        }
    }
    ctx->pc = 0x40AF88u;
label_40af88:
    // 0x40af88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40af88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40af8c:
    // 0x40af8c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_40af90:
    if (ctx->pc == 0x40AF90u) {
        ctx->pc = 0x40AF90u;
            // 0x40af90: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x40AF94u;
        goto label_40af94;
    }
    ctx->pc = 0x40AF8Cu;
    {
        const bool branch_taken_0x40af8c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x40af8c) {
            ctx->pc = 0x40AF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40AF8Cu;
            // 0x40af90: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40AFA0u;
            goto label_40afa0;
        }
    }
    ctx->pc = 0x40AF94u;
label_40af94:
    // 0x40af94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40af94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40af98:
    // 0x40af98: 0x10000007  b           . + 4 + (0x7 << 2)
label_40af9c:
    if (ctx->pc == 0x40AF9Cu) {
        ctx->pc = 0x40AF9Cu;
            // 0x40af9c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40AFA0u;
        goto label_40afa0;
    }
    ctx->pc = 0x40AF98u;
    {
        const bool branch_taken_0x40af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AF98u;
            // 0x40af9c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af98) {
            ctx->pc = 0x40AFB8u;
            goto label_40afb8;
        }
    }
    ctx->pc = 0x40AFA0u;
label_40afa0:
    // 0x40afa0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x40afa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_40afa4:
    // 0x40afa4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x40afa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_40afa8:
    // 0x40afa8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40afa8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40afac:
    // 0x40afac: 0x0  nop
    ctx->pc = 0x40afacu;
    // NOP
label_40afb0:
    // 0x40afb0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x40afb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_40afb4:
    // 0x40afb4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x40afb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_40afb8:
    // 0x40afb8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x40afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_40afbc:
    // 0x40afbc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x40afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_40afc0:
    // 0x40afc0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x40afc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40afc4:
    // 0x40afc4: 0x8ce50d6c  lw          $a1, 0xD6C($a3)
    ctx->pc = 0x40afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3436)));
label_40afc8:
    // 0x40afc8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x40afc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40afcc:
    // 0x40afcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40afccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40afd0:
    // 0x40afd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40afd4:
    // 0x40afd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x40afd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40afd8:
    // 0x40afd8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x40afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_40afdc:
    // 0x40afdc: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x40afdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_40afe0:
    // 0x40afe0: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x40afe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_40afe4:
    // 0x40afe4: 0x90a50008  lbu         $a1, 0x8($a1)
    ctx->pc = 0x40afe4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_40afe8:
    // 0x40afe8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x40afe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_40afec:
    // 0x40afec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40afecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40aff0:
    // 0x40aff0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40aff4:
    if (ctx->pc == 0x40AFF4u) {
        ctx->pc = 0x40AFF4u;
            // 0x40aff4: 0x2ca60001  sltiu       $a2, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x40AFF8u;
        goto label_40aff8;
    }
    ctx->pc = 0x40AFF0u;
    {
        const bool branch_taken_0x40aff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40AFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40AFF0u;
            // 0x40aff4: 0x2ca60001  sltiu       $a2, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40aff0) {
            ctx->pc = 0x40AFFCu;
            goto label_40affc;
        }
    }
    ctx->pc = 0x40AFF8u;
label_40aff8:
    // 0x40aff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40affc:
    // 0x40affc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x40affcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_40b000:
    // 0x40b000: 0x8065010d  lb          $a1, 0x10D($v1)
    ctx->pc = 0x40b000u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_40b004:
    // 0x40b004: 0x863026  xor         $a2, $a0, $a2
    ctx->pc = 0x40b004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_40b008:
    // 0x40b008: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x40b008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_40b00c:
    // 0x40b00c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x40b00cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40b010:
    // 0x40b010: 0x0  nop
    ctx->pc = 0x40b010u;
    // NOP
label_40b014:
    // 0x40b014: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x40b014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b018:
    // 0x40b018: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_40b01c:
    if (ctx->pc == 0x40B01Cu) {
        ctx->pc = 0x40B01Cu;
            // 0x40b01c: 0xa0650114  sb          $a1, 0x114($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 276), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x40B020u;
        goto label_40b020;
    }
    ctx->pc = 0x40B018u;
    {
        const bool branch_taken_0x40b018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B018u;
            // 0x40b01c: 0xa0650114  sb          $a1, 0x114($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 276), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b018) {
            ctx->pc = 0x40B0C4u;
            goto label_40b0c4;
        }
    }
    ctx->pc = 0x40B020u;
label_40b020:
    // 0x40b020: 0x3c043f0e  lui         $a0, 0x3F0E
    ctx->pc = 0x40b020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16142 << 16));
label_40b024:
    // 0x40b024: 0x348438e4  ori         $a0, $a0, 0x38E4
    ctx->pc = 0x40b024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14564);
label_40b028:
    // 0x40b028: 0xc4e10de4  lwc1        $f1, 0xDE4($a3)
    ctx->pc = 0x40b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b02c:
    // 0x40b02c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40b02cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b030:
    // 0x40b030: 0x0  nop
    ctx->pc = 0x40b030u;
    // NOP
label_40b034:
    // 0x40b034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40b034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b038:
    // 0x40b038: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_40b03c:
    if (ctx->pc == 0x40B03Cu) {
        ctx->pc = 0x40B03Cu;
            // 0x40b03c: 0xa060010f  sb          $zero, 0x10F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 271), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x40B040u;
        goto label_40b040;
    }
    ctx->pc = 0x40B038u;
    {
        const bool branch_taken_0x40b038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40b038) {
            ctx->pc = 0x40B03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B038u;
            // 0x40b03c: 0xa060010f  sb          $zero, 0x10F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 271), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B064u;
            goto label_40b064;
        }
    }
    ctx->pc = 0x40B040u;
label_40b040:
    // 0x40b040: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x40b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b044:
    // 0x40b044: 0xa064010f  sb          $a0, 0x10F($v1)
    ctx->pc = 0x40b044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 271), (uint8_t)GPR_U32(ctx, 4));
label_40b048:
    // 0x40b048: 0x80640112  lb          $a0, 0x112($v1)
    ctx->pc = 0x40b048u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 274)));
label_40b04c:
    // 0x40b04c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b050:
    // 0x40b050: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x40b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_40b054:
    // 0x40b054: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x40b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_40b058:
    // 0x40b058: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x40b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_40b05c:
    // 0x40b05c: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b060:
    if (ctx->pc == 0x40B060u) {
        ctx->pc = 0x40B060u;
            // 0x40b060: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->pc = 0x40B064u;
        goto label_40b064;
    }
    ctx->pc = 0x40B05Cu;
    {
        const bool branch_taken_0x40b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B05Cu;
            // 0x40b060: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b05c) {
            ctx->pc = 0x40B07Cu;
            goto label_40b07c;
        }
    }
    ctx->pc = 0x40B064u;
label_40b064:
    // 0x40b064: 0x80640112  lb          $a0, 0x112($v1)
    ctx->pc = 0x40b064u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 274)));
label_40b068:
    // 0x40b068: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b06c:
    // 0x40b06c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x40b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_40b070:
    // 0x40b070: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x40b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_40b074:
    // 0x40b074: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x40b074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40b078:
    // 0x40b078: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x40b078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_40b07c:
    // 0x40b07c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x40b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_40b080:
    // 0x40b080: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x40b080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40b084:
    // 0x40b084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40b084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b088:
    // 0x40b088: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x40b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_40b08c:
    // 0x40b08c: 0x46001143  div.s       $f5, $f2, $f0
    ctx->pc = 0x40b08cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[5] = ctx->f[2] / ctx->f[0];
label_40b090:
    // 0x40b090: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x40b090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40b094:
    // 0x40b094: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x40b094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
label_40b098:
    // 0x40b098: 0xa0650111  sb          $a1, 0x111($v1)
    ctx->pc = 0x40b098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 273), (uint8_t)GPR_U32(ctx, 5));
label_40b09c:
    // 0x40b09c: 0x80650114  lb          $a1, 0x114($v1)
    ctx->pc = 0x40b09cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_40b0a0:
    // 0x40b0a0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x40b0a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_40b0a4:
    // 0x40b0a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b0a8:
    // 0x40b0a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x40b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40b0ac:
    // 0x40b0ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_40b0b0:
    // 0x40b0b0: 0x8ca5005c  lw          $a1, 0x5C($a1)
    ctx->pc = 0x40b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_40b0b4:
    // 0x40b0b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x40b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_40b0b8:
    // 0x40b0b8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x40b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40b0bc:
    // 0x40b0bc: 0x10000017  b           . + 4 + (0x17 << 2)
label_40b0c0:
    if (ctx->pc == 0x40B0C0u) {
        ctx->pc = 0x40B0C0u;
            // 0x40b0c0: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x40B0C4u;
        goto label_40b0c4;
    }
    ctx->pc = 0x40B0BCu;
    {
        const bool branch_taken_0x40b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B0BCu;
            // 0x40b0c0: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0bc) {
            ctx->pc = 0x40B11Cu;
            goto label_40b11c;
        }
    }
    ctx->pc = 0x40B0C4u;
label_40b0c4:
    // 0x40b0c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x40b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_40b0c8:
    // 0x40b0c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40b0c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b0cc:
    // 0x40b0cc: 0x0  nop
    ctx->pc = 0x40b0ccu;
    // NOP
label_40b0d0:
    // 0x40b0d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x40b0d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b0d4:
    // 0x40b0d4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_40b0d8:
    if (ctx->pc == 0x40B0D8u) {
        ctx->pc = 0x40B0D8u;
            // 0x40b0d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->pc = 0x40B0DCu;
        goto label_40b0dc;
    }
    ctx->pc = 0x40B0D4u;
    {
        const bool branch_taken_0x40b0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40b0d4) {
            ctx->pc = 0x40B0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B0D4u;
            // 0x40b0d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B120u;
            goto label_40b120;
        }
    }
    ctx->pc = 0x40B0DCu;
label_40b0dc:
    // 0x40b0dc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x40b0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_40b0e0:
    // 0x40b0e0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x40b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40b0e4:
    // 0x40b0e4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x40b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_40b0e8:
    // 0x40b0e8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x40b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40b0ec:
    // 0x40b0ec: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x40b0ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[5] = ctx->f[0] / ctx->f[1];
label_40b0f0:
    // 0x40b0f0: 0xa0640111  sb          $a0, 0x111($v1)
    ctx->pc = 0x40b0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 273), (uint8_t)GPR_U32(ctx, 4));
label_40b0f4:
    // 0x40b0f4: 0x80650114  lb          $a1, 0x114($v1)
    ctx->pc = 0x40b0f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_40b0f8:
    // 0x40b0f8: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x40b0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_40b0fc:
    // 0x40b0fc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x40b0fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_40b100:
    // 0x40b100: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b104:
    // 0x40b104: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x40b104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_40b108:
    // 0x40b108: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_40b10c:
    // 0x40b10c: 0x8ca5005c  lw          $a1, 0x5C($a1)
    ctx->pc = 0x40b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_40b110:
    // 0x40b110: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x40b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_40b114:
    // 0x40b114: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x40b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40b118:
    // 0x40b118: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x40b118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_40b11c:
    // 0x40b11c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x40b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_40b120:
    // 0x40b120: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x40b120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_40b124:
    // 0x40b124: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x40b124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_40b128:
    // 0x40b128: 0xe4650050  swc1        $f5, 0x50($v1)
    ctx->pc = 0x40b128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_40b12c:
    // 0x40b12c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x40b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_40b130:
    // 0x40b130: 0x3e00008  jr          $ra
label_40b134:
    if (ctx->pc == 0x40B134u) {
        ctx->pc = 0x40B134u;
            // 0x40b134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40B138u;
        goto label_40b138;
    }
    ctx->pc = 0x40B130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B130u;
            // 0x40b134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B138u;
label_40b138:
    // 0x40b138: 0x0  nop
    ctx->pc = 0x40b138u;
    // NOP
label_40b13c:
    // 0x40b13c: 0x0  nop
    ctx->pc = 0x40b13cu;
    // NOP
label_40b140:
    // 0x40b140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40b144:
    // 0x40b144: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40b144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40b148:
    // 0x40b148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40b14c:
    // 0x40b14c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40b150:
    // 0x40b150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40b154:
    // 0x40b154: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40b158:
    // 0x40b158: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x40b158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40b15c:
    // 0x40b15c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40b15cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40b160:
    // 0x40b160: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x40b160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40b164:
    // 0x40b164: 0xc461fc50  lwc1        $f1, -0x3B0($v1)
    ctx->pc = 0x40b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b168:
    // 0x40b168: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x40b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_40b16c:
    // 0x40b16c: 0x8cb100c8  lw          $s1, 0xC8($a1)
    ctx->pc = 0x40b16cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_40b170:
    // 0x40b170: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40b170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40b174:
    // 0x40b174: 0xc460fc58  lwc1        $f0, -0x3A8($v1)
    ctx->pc = 0x40b174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40b178:
    // 0x40b178: 0xc482fc54  lwc1        $f2, -0x3AC($a0)
    ctx->pc = 0x40b178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40b17c:
    // 0x40b17c: 0x8e320550  lw          $s2, 0x550($s1)
    ctx->pc = 0x40b17cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_40b180:
    // 0x40b180: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x40b180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_40b184:
    // 0x40b184: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40b184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40b188:
    // 0x40b188: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x40b188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_40b18c:
    // 0x40b18c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x40b18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_40b190:
    // 0x40b190: 0xc461fc5c  lwc1        $f1, -0x3A4($v1)
    ctx->pc = 0x40b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b194:
    // 0x40b194: 0xc6240dc4  lwc1        $f4, 0xDC4($s1)
    ctx->pc = 0x40b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40b198:
    // 0x40b198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40b198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b19c:
    // 0x40b19c: 0x0  nop
    ctx->pc = 0x40b19cu;
    // NOP
label_40b1a0:
    // 0x40b1a0: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x40b1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_40b1a4:
    // 0x40b1a4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x40b1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b1a8:
    // 0x40b1a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40b1ac:
    if (ctx->pc == 0x40B1ACu) {
        ctx->pc = 0x40B1ACu;
            // 0x40b1ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40B1B0u;
        goto label_40b1b0;
    }
    ctx->pc = 0x40B1A8u;
    {
        const bool branch_taken_0x40b1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B1A8u;
            // 0x40b1ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b1a8) {
            ctx->pc = 0x40B1B4u;
            goto label_40b1b4;
        }
    }
    ctx->pc = 0x40B1B0u;
label_40b1b0:
    // 0x40b1b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40b1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b1b4:
    // 0x40b1b4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_40b1b8:
    if (ctx->pc == 0x40B1B8u) {
        ctx->pc = 0x40B1B8u;
            // 0x40b1b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x40B1BCu;
        goto label_40b1bc;
    }
    ctx->pc = 0x40B1B4u;
    {
        const bool branch_taken_0x40b1b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x40b1b4) {
            ctx->pc = 0x40B1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B1B4u;
            // 0x40b1b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B1C8u;
            goto label_40b1c8;
        }
    }
    ctx->pc = 0x40B1BCu;
label_40b1bc:
    // 0x40b1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b1c0:
    // 0x40b1c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b1c4:
    if (ctx->pc == 0x40B1C4u) {
        ctx->pc = 0x40B1C4u;
            // 0x40b1c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B1C8u;
        goto label_40b1c8;
    }
    ctx->pc = 0x40B1C0u;
    {
        const bool branch_taken_0x40b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B1C0u;
            // 0x40b1c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b1c0) {
            ctx->pc = 0x40B1E0u;
            goto label_40b1e0;
        }
    }
    ctx->pc = 0x40B1C8u;
label_40b1c8:
    // 0x40b1c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x40b1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_40b1cc:
    // 0x40b1cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x40b1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_40b1d0:
    // 0x40b1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40b1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b1d4:
    // 0x40b1d4: 0x0  nop
    ctx->pc = 0x40b1d4u;
    // NOP
label_40b1d8:
    // 0x40b1d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x40b1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_40b1dc:
    // 0x40b1dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x40b1dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_40b1e0:
    // 0x40b1e0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x40b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_40b1e4:
    // 0x40b1e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40b1e8:
    // 0x40b1e8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x40b1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40b1ec:
    // 0x40b1ec: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x40b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_40b1f0:
    // 0x40b1f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40b1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40b1f4:
    // 0x40b1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40b1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b1f8:
    // 0x40b1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b1fc:
    // 0x40b1fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x40b1fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40b200:
    // 0x40b200: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x40b200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40b204:
    // 0x40b204: 0x4603155d  msub.s      $f21, $f2, $f3
    ctx->pc = 0x40b204u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_40b208:
    // 0x40b208: 0x4604ad02  mul.s       $f20, $f21, $f4
    ctx->pc = 0x40b208u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
label_40b20c:
    // 0x40b20c: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x40b20cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_40b210:
    // 0x40b210: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x40b210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_40b214:
    // 0x40b214: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x40b214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b218:
    // 0x40b218: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40b21c:
    if (ctx->pc == 0x40B21Cu) {
        ctx->pc = 0x40B21Cu;
            // 0x40b21c: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x40B220u;
        goto label_40b220;
    }
    ctx->pc = 0x40B218u;
    {
        const bool branch_taken_0x40b218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B218u;
            // 0x40b21c: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b218) {
            ctx->pc = 0x40B224u;
            goto label_40b224;
        }
    }
    ctx->pc = 0x40B220u;
label_40b220:
    // 0x40b220: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x40b220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b224:
    // 0x40b224: 0x8244010f  lb          $a0, 0x10F($s2)
    ctx->pc = 0x40b224u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_40b228:
    // 0x40b228: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_40b22c:
    // 0x40b22c: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_40b230:
    if (ctx->pc == 0x40B230u) {
        ctx->pc = 0x40B230u;
            // 0x40b230: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x40B234u;
        goto label_40b234;
    }
    ctx->pc = 0x40B22Cu;
    {
        const bool branch_taken_0x40b22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B22Cu;
            // 0x40b230: 0x658026  xor         $s0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b22c) {
            ctx->pc = 0x40B2BCu;
            goto label_40b2bc;
        }
    }
    ctx->pc = 0x40B234u;
label_40b234:
    // 0x40b234: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x40b234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_40b238:
    // 0x40b238: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x40b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_40b23c:
    // 0x40b23c: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x40b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b240:
    // 0x40b240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b244:
    // 0x40b244: 0x0  nop
    ctx->pc = 0x40b244u;
    // NOP
label_40b248:
    // 0x40b248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b24c:
    // 0x40b24c: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_40b250:
    if (ctx->pc == 0x40B250u) {
        ctx->pc = 0x40B250u;
            // 0x40b250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40B254u;
        goto label_40b254;
    }
    ctx->pc = 0x40B24Cu;
    {
        const bool branch_taken_0x40b24c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40b24c) {
            ctx->pc = 0x40B250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B24Cu;
            // 0x40b250: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B2C0u;
            goto label_40b2c0;
        }
    }
    ctx->pc = 0x40B254u;
label_40b254:
    // 0x40b254: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x40b254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_40b258:
    // 0x40b258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b25c:
    // 0x40b25c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x40b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_40b260:
    // 0x40b260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40b264:
    // 0x40b264: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40b264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40b268:
    // 0x40b268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40b26c:
    // 0x40b26c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x40b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_40b270:
    // 0x40b270: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x40b270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_40b274:
    // 0x40b274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40b278:
    // 0x40b278: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_40b27c:
    // 0x40b27c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x40b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_40b280:
    // 0x40b280: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x40b280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_40b284:
    // 0x40b284: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40b284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40b288:
    // 0x40b288: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x40b288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_40b28c:
    // 0x40b28c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x40b28cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_40b290:
    // 0x40b290: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40b290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40b294:
    // 0x40b294: 0x320f809  jalr        $t9
label_40b298:
    if (ctx->pc == 0x40B298u) {
        ctx->pc = 0x40B298u;
            // 0x40b298: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x40B29Cu;
        goto label_40b29c;
    }
    ctx->pc = 0x40B294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B29Cu);
        ctx->pc = 0x40B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B294u;
            // 0x40b298: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B29Cu; }
            if (ctx->pc != 0x40B29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40B29Cu;
label_40b29c:
    // 0x40b29c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x40b29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_40b2a0:
    // 0x40b2a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x40b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40b2a4:
    // 0x40b2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40b2a8:
    // 0x40b2a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x40b2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_40b2ac:
    // 0x40b2ac: 0x320f809  jalr        $t9
label_40b2b0:
    if (ctx->pc == 0x40B2B0u) {
        ctx->pc = 0x40B2B0u;
            // 0x40b2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B2B4u;
        goto label_40b2b4;
    }
    ctx->pc = 0x40B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B2B4u);
        ctx->pc = 0x40B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B2ACu;
            // 0x40b2b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B2B4u; }
            if (ctx->pc != 0x40B2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x40B2B4u;
label_40b2b4:
    // 0x40b2b4: 0x10000025  b           . + 4 + (0x25 << 2)
label_40b2b8:
    if (ctx->pc == 0x40B2B8u) {
        ctx->pc = 0x40B2B8u;
            // 0x40b2b8: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x40B2BCu;
        goto label_40b2bc;
    }
    ctx->pc = 0x40B2B4u;
    {
        const bool branch_taken_0x40b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B2B4u;
            // 0x40b2b8: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b2b4) {
            ctx->pc = 0x40B34Cu;
            goto label_40b34c;
        }
    }
    ctx->pc = 0x40B2BCu;
label_40b2bc:
    // 0x40b2bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b2c0:
    // 0x40b2c0: 0x14860021  bne         $a0, $a2, . + 4 + (0x21 << 2)
label_40b2c4:
    if (ctx->pc == 0x40B2C4u) {
        ctx->pc = 0x40B2C8u;
        goto label_40b2c8;
    }
    ctx->pc = 0x40B2C0u;
    {
        const bool branch_taken_0x40b2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x40b2c0) {
            ctx->pc = 0x40B348u;
            goto label_40b348;
        }
    }
    ctx->pc = 0x40B2C8u;
label_40b2c8:
    // 0x40b2c8: 0x3c033f0e  lui         $v1, 0x3F0E
    ctx->pc = 0x40b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16142 << 16));
label_40b2cc:
    // 0x40b2cc: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x40b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_40b2d0:
    // 0x40b2d0: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x40b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b2d4:
    // 0x40b2d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b2d8:
    // 0x40b2d8: 0x0  nop
    ctx->pc = 0x40b2d8u;
    // NOP
label_40b2dc:
    // 0x40b2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40b2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b2e0:
    // 0x40b2e0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_40b2e4:
    if (ctx->pc == 0x40B2E4u) {
        ctx->pc = 0x40B2E8u;
        goto label_40b2e8;
    }
    ctx->pc = 0x40B2E0u;
    {
        const bool branch_taken_0x40b2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40b2e0) {
            ctx->pc = 0x40B348u;
            goto label_40b348;
        }
    }
    ctx->pc = 0x40B2E8u;
label_40b2e8:
    // 0x40b2e8: 0x8243010c  lb          $v1, 0x10C($s2)
    ctx->pc = 0x40b2e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_40b2ec:
    // 0x40b2ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x40b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_40b2f0:
    // 0x40b2f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40b2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40b2f4:
    // 0x40b2f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40b2f8:
    // 0x40b2f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40b2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40b2fc:
    // 0x40b2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40b2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40b300:
    // 0x40b300: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x40b300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_40b304:
    // 0x40b304: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40b304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40b308:
    // 0x40b308: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x40b308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_40b30c:
    // 0x40b30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40b310:
    // 0x40b310: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_40b314:
    // 0x40b314: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x40b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_40b318:
    // 0x40b318: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x40b318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_40b31c:
    // 0x40b31c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x40b31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_40b320:
    // 0x40b320: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x40b320u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_40b324:
    // 0x40b324: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x40b324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_40b328:
    // 0x40b328: 0x320f809  jalr        $t9
label_40b32c:
    if (ctx->pc == 0x40B32Cu) {
        ctx->pc = 0x40B32Cu;
            // 0x40b32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B330u;
        goto label_40b330;
    }
    ctx->pc = 0x40B328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B330u);
        ctx->pc = 0x40B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B328u;
            // 0x40b32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B330u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B330u; }
            if (ctx->pc != 0x40B330u) { return; }
        }
        }
    }
    ctx->pc = 0x40B330u;
label_40b330:
    // 0x40b330: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x40b330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_40b334:
    // 0x40b334: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x40b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40b338:
    // 0x40b338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40b33c:
    // 0x40b33c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x40b33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_40b340:
    // 0x40b340: 0x320f809  jalr        $t9
label_40b344:
    if (ctx->pc == 0x40B344u) {
        ctx->pc = 0x40B344u;
            // 0x40b344: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B348u;
        goto label_40b348;
    }
    ctx->pc = 0x40B340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B348u);
        ctx->pc = 0x40B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B340u;
            // 0x40b344: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B348u; }
            if (ctx->pc != 0x40B348u) { return; }
        }
        }
    }
    ctx->pc = 0x40B348u;
label_40b348:
    // 0x40b348: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x40b348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_40b34c:
    // 0x40b34c: 0x8244010d  lb          $a0, 0x10D($s2)
    ctx->pc = 0x40b34cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_40b350:
    // 0x40b350: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x40b350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40b354:
    // 0x40b354: 0x0  nop
    ctx->pc = 0x40b354u;
    // NOP
label_40b358:
    // 0x40b358: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x40b358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b35c:
    // 0x40b35c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_40b360:
    if (ctx->pc == 0x40B360u) {
        ctx->pc = 0x40B360u;
            // 0x40b360: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x40B364u;
        goto label_40b364;
    }
    ctx->pc = 0x40B35Cu;
    {
        const bool branch_taken_0x40b35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B35Cu;
            // 0x40b360: 0xa2440114  sb          $a0, 0x114($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b35c) {
            ctx->pc = 0x40B3B0u;
            goto label_40b3b0;
        }
    }
    ctx->pc = 0x40B364u;
label_40b364:
    // 0x40b364: 0x0  nop
    ctx->pc = 0x40b364u;
    // NOP
label_40b368:
    // 0x40b368: 0x0  nop
    ctx->pc = 0x40b368u;
    // NOP
label_40b36c:
    // 0x40b36c: 0x4604a043  div.s       $f1, $f20, $f4
    ctx->pc = 0x40b36cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[4];
label_40b370:
    // 0x40b370: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x40b370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_40b374:
    // 0x40b374: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x40b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_40b378:
    // 0x40b378: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x40b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_40b37c:
    // 0x40b37c: 0xa2430111  sb          $v1, 0x111($s2)
    ctx->pc = 0x40b37cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 3));
label_40b380:
    // 0x40b380: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x40b380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_40b384:
    // 0x40b384: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x40b384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_40b388:
    // 0x40b388: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x40b388u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_40b38c:
    // 0x40b38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40b390:
    // 0x40b390: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b394:
    // 0x40b394: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x40b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_40b398:
    // 0x40b398: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x40b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_40b39c:
    // 0x40b39c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40b3a0:
    // 0x40b3a0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x40b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40b3a4:
    // 0x40b3a4: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x40b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_40b3a8:
    // 0x40b3a8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_40b3ac:
    if (ctx->pc == 0x40B3ACu) {
        ctx->pc = 0x40B3ACu;
            // 0x40b3ac: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->pc = 0x40B3B0u;
        goto label_40b3b0;
    }
    ctx->pc = 0x40B3A8u;
    {
        const bool branch_taken_0x40b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B3A8u;
            // 0x40b3ac: 0xae200dcc  sw          $zero, 0xDCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b3a8) {
            ctx->pc = 0x40B4A4u;
            goto label_40b4a4;
        }
    }
    ctx->pc = 0x40B3B0u;
label_40b3b0:
    // 0x40b3b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40b3b4:
    // 0x40b3b4: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x40b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40b3b8:
    // 0x40b3b8: 0xc6220dcc  lwc1        $f2, 0xDCC($s1)
    ctx->pc = 0x40b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40b3bc:
    // 0x40b3bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40b3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40b3c0:
    // 0x40b3c0: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x40b3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40b3c4:
    // 0x40b3c4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x40b3c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40b3c8:
    // 0x40b3c8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x40b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_40b3cc:
    // 0x40b3cc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x40b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b3d0:
    // 0x40b3d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b3d4:
    // 0x40b3d4: 0x0  nop
    ctx->pc = 0x40b3d4u;
    // NOP
label_40b3d8:
    // 0x40b3d8: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x40b3d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_40b3dc:
    // 0x40b3dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40b3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b3e0:
    // 0x40b3e0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_40b3e4:
    if (ctx->pc == 0x40B3E4u) {
        ctx->pc = 0x40B3E4u;
            // 0x40b3e4: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->pc = 0x40B3E8u;
        goto label_40b3e8;
    }
    ctx->pc = 0x40B3E0u;
    {
        const bool branch_taken_0x40b3e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B3E0u;
            // 0x40b3e4: 0xe6210dcc  swc1        $f1, 0xDCC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b3e0) {
            ctx->pc = 0x40B45Cu;
            goto label_40b45c;
        }
    }
    ctx->pc = 0x40B3E8u;
label_40b3e8:
    // 0x40b3e8: 0x4604a001  sub.s       $f0, $f20, $f4
    ctx->pc = 0x40b3e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_40b3ec:
    // 0x40b3ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x40b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_40b3f0:
    // 0x40b3f0: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x40b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_40b3f4:
    // 0x40b3f4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x40b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40b3f8:
    // 0x40b3f8: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x40b3f8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[4];
label_40b3fc:
    // 0x40b3fc: 0xa243010f  sb          $v1, 0x10F($s2)
    ctx->pc = 0x40b3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 271), (uint8_t)GPR_U32(ctx, 3));
label_40b400:
    // 0x40b400: 0x82460112  lb          $a2, 0x112($s2)
    ctx->pc = 0x40b400u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 274)));
label_40b404:
    // 0x40b404: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x40b404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_40b408:
    // 0x40b408: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x40b408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_40b40c:
    // 0x40b40c: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x40b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_40b410:
    // 0x40b410: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x40b410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40b414:
    // 0x40b414: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x40b414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_40b418:
    // 0x40b418: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x40b418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_40b41c:
    // 0x40b41c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x40b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_40b420:
    // 0x40b420: 0x8cc6005c  lw          $a2, 0x5C($a2)
    ctx->pc = 0x40b420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_40b424:
    // 0x40b424: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x40b424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_40b428:
    // 0x40b428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40b428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40b42c:
    // 0x40b42c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x40b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_40b430:
    // 0x40b430: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x40b430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40b434:
    // 0x40b434: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x40b434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
label_40b438:
    // 0x40b438: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x40b438u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_40b43c:
    // 0x40b43c: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x40b43cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_40b440:
    // 0x40b440: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b444:
    // 0x40b444: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x40b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_40b448:
    // 0x40b448: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x40b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_40b44c:
    // 0x40b44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40b450:
    // 0x40b450: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x40b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40b454:
    // 0x40b454: 0x10000013  b           . + 4 + (0x13 << 2)
label_40b458:
    if (ctx->pc == 0x40B458u) {
        ctx->pc = 0x40B458u;
            // 0x40b458: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x40B45Cu;
        goto label_40b45c;
    }
    ctx->pc = 0x40B454u;
    {
        const bool branch_taken_0x40b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B454u;
            // 0x40b458: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b454) {
            ctx->pc = 0x40B4A4u;
            goto label_40b4a4;
        }
    }
    ctx->pc = 0x40B45Cu;
label_40b45c:
    // 0x40b45c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x40b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_40b460:
    // 0x40b460: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x40b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_40b464:
    // 0x40b464: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x40b464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40b468:
    // 0x40b468: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40b468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40b46c:
    // 0x40b46c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40b46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40b470:
    // 0x40b470: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x40b470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_40b474:
    // 0x40b474: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x40b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_40b478:
    // 0x40b478: 0xa2440111  sb          $a0, 0x111($s2)
    ctx->pc = 0x40b478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 4));
label_40b47c:
    // 0x40b47c: 0x82440114  lb          $a0, 0x114($s2)
    ctx->pc = 0x40b47cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_40b480:
    // 0x40b480: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x40b480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_40b484:
    // 0x40b484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40b484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40b488:
    // 0x40b488: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40b488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40b48c:
    // 0x40b48c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x40b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_40b490:
    // 0x40b490: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x40b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_40b494:
    // 0x40b494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40b498:
    // 0x40b498: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x40b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_40b49c:
    // 0x40b49c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x40b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_40b4a0:
    // 0x40b4a0: 0xe6200dc4  swc1        $f0, 0xDC4($s1)
    ctx->pc = 0x40b4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3524), bits); }
label_40b4a4:
    // 0x40b4a4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x40b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_40b4a8:
    // 0x40b4a8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x40b4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_40b4ac:
    // 0x40b4ac: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x40b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_40b4b0:
    // 0x40b4b0: 0xe6410050  swc1        $f1, 0x50($s2)
    ctx->pc = 0x40b4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_40b4b4:
    // 0x40b4b4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x40b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_40b4b8:
    // 0x40b4b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40b4bc:
    // 0x40b4bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40b4c0:
    // 0x40b4c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40b4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40b4c4:
    // 0x40b4c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40b4c8:
    // 0x40b4c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40b4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40b4cc:
    // 0x40b4cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40b4d0:
    // 0x40b4d0: 0x3e00008  jr          $ra
label_40b4d4:
    if (ctx->pc == 0x40B4D4u) {
        ctx->pc = 0x40B4D4u;
            // 0x40b4d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40B4D8u;
        goto label_40b4d8;
    }
    ctx->pc = 0x40B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B4D0u;
            // 0x40b4d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B4D8u;
label_40b4d8:
    // 0x40b4d8: 0x0  nop
    ctx->pc = 0x40b4d8u;
    // NOP
label_40b4dc:
    // 0x40b4dc: 0x0  nop
    ctx->pc = 0x40b4dcu;
    // NOP
label_40b4e0:
    // 0x40b4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40b4e4:
    // 0x40b4e4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x40b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_40b4e8:
    // 0x40b4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40b4ec:
    // 0x40b4ec: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x40b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40b4f0:
    // 0x40b4f0: 0x8ca500c8  lw          $a1, 0xC8($a1)
    ctx->pc = 0x40b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_40b4f4:
    // 0x40b4f4: 0x8ca50550  lw          $a1, 0x550($a1)
    ctx->pc = 0x40b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_40b4f8:
    // 0x40b4f8: 0x80a5010f  lb          $a1, 0x10F($a1)
    ctx->pc = 0x40b4f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 271)));
label_40b4fc:
    // 0x40b4fc: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
label_40b500:
    if (ctx->pc == 0x40B500u) {
        ctx->pc = 0x40B504u;
        goto label_40b504;
    }
    ctx->pc = 0x40B4FCu;
    {
        const bool branch_taken_0x40b4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b4fc) {
            ctx->pc = 0x40B580u;
            goto label_40b580;
        }
    }
    ctx->pc = 0x40B504u;
label_40b504:
    // 0x40b504: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x40b504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_40b508:
    // 0x40b508: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
label_40b50c:
    if (ctx->pc == 0x40B50Cu) {
        ctx->pc = 0x40B510u;
        goto label_40b510;
    }
    ctx->pc = 0x40B508u;
    {
        const bool branch_taken_0x40b508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b508) {
            ctx->pc = 0x40B580u;
            goto label_40b580;
        }
    }
    ctx->pc = 0x40B510u;
label_40b510:
    // 0x40b510: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x40b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_40b514:
    // 0x40b514: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_40b518:
    if (ctx->pc == 0x40B518u) {
        ctx->pc = 0x40B51Cu;
        goto label_40b51c;
    }
    ctx->pc = 0x40B514u;
    {
        const bool branch_taken_0x40b514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b514) {
            ctx->pc = 0x40B580u;
            goto label_40b580;
        }
    }
    ctx->pc = 0x40B51Cu;
label_40b51c:
    // 0x40b51c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40b520:
    // 0x40b520: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_40b524:
    if (ctx->pc == 0x40B524u) {
        ctx->pc = 0x40B524u;
            // 0x40b524: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40B528u;
        goto label_40b528;
    }
    ctx->pc = 0x40B520u;
    {
        const bool branch_taken_0x40b520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b520) {
            ctx->pc = 0x40B524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B520u;
            // 0x40b524: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B56Cu;
            goto label_40b56c;
        }
    }
    ctx->pc = 0x40B528u;
label_40b528:
    // 0x40b528: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x40b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_40b52c:
    // 0x40b52c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_40b530:
    if (ctx->pc == 0x40B530u) {
        ctx->pc = 0x40B534u;
        goto label_40b534;
    }
    ctx->pc = 0x40B52Cu;
    {
        const bool branch_taken_0x40b52c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b52c) {
            ctx->pc = 0x40B568u;
            goto label_40b568;
        }
    }
    ctx->pc = 0x40B534u;
label_40b534:
    // 0x40b534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b538:
    // 0x40b538: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_40b53c:
    if (ctx->pc == 0x40B53Cu) {
        ctx->pc = 0x40B53Cu;
            // 0x40b53c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40B540u;
        goto label_40b540;
    }
    ctx->pc = 0x40B538u;
    {
        const bool branch_taken_0x40b538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40b538) {
            ctx->pc = 0x40B53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B538u;
            // 0x40b53c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B554u;
            goto label_40b554;
        }
    }
    ctx->pc = 0x40B540u;
label_40b540:
    // 0x40b540: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_40b544:
    if (ctx->pc == 0x40B544u) {
        ctx->pc = 0x40B548u;
        goto label_40b548;
    }
    ctx->pc = 0x40B540u;
    {
        const bool branch_taken_0x40b540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b540) {
            ctx->pc = 0x40B550u;
            goto label_40b550;
        }
    }
    ctx->pc = 0x40B548u;
label_40b548:
    // 0x40b548: 0x10000010  b           . + 4 + (0x10 << 2)
label_40b54c:
    if (ctx->pc == 0x40B54Cu) {
        ctx->pc = 0x40B54Cu;
            // 0x40b54c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x40B550u;
        goto label_40b550;
    }
    ctx->pc = 0x40B548u;
    {
        const bool branch_taken_0x40b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B548u;
            // 0x40b54c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b548) {
            ctx->pc = 0x40B58Cu;
            goto label_40b58c;
        }
    }
    ctx->pc = 0x40B550u;
label_40b550:
    // 0x40b550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40b550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40b554:
    // 0x40b554: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x40b554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_40b558:
    // 0x40b558: 0x320f809  jalr        $t9
label_40b55c:
    if (ctx->pc == 0x40B55Cu) {
        ctx->pc = 0x40B560u;
        goto label_40b560;
    }
    ctx->pc = 0x40B558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B560u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B560u; }
            if (ctx->pc != 0x40B560u) { return; }
        }
        }
    }
    ctx->pc = 0x40B560u;
label_40b560:
    // 0x40b560: 0x10000009  b           . + 4 + (0x9 << 2)
label_40b564:
    if (ctx->pc == 0x40B564u) {
        ctx->pc = 0x40B568u;
        goto label_40b568;
    }
    ctx->pc = 0x40B560u;
    {
        const bool branch_taken_0x40b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b560) {
            ctx->pc = 0x40B588u;
            goto label_40b588;
        }
    }
    ctx->pc = 0x40B568u;
label_40b568:
    // 0x40b568: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40b568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40b56c:
    // 0x40b56c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x40b56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_40b570:
    // 0x40b570: 0x320f809  jalr        $t9
label_40b574:
    if (ctx->pc == 0x40B574u) {
        ctx->pc = 0x40B578u;
        goto label_40b578;
    }
    ctx->pc = 0x40B570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40B578u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40B578u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40B578u; }
            if (ctx->pc != 0x40B578u) { return; }
        }
        }
    }
    ctx->pc = 0x40B578u;
label_40b578:
    // 0x40b578: 0x10000003  b           . + 4 + (0x3 << 2)
label_40b57c:
    if (ctx->pc == 0x40B57Cu) {
        ctx->pc = 0x40B580u;
        goto label_40b580;
    }
    ctx->pc = 0x40B578u;
    {
        const bool branch_taken_0x40b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b578) {
            ctx->pc = 0x40B588u;
            goto label_40b588;
        }
    }
    ctx->pc = 0x40B580u;
label_40b580:
    // 0x40b580: 0xc102abc  jal         func_40AAF0
label_40b584:
    if (ctx->pc == 0x40B584u) {
        ctx->pc = 0x40B588u;
        goto label_40b588;
    }
    ctx->pc = 0x40B580u;
    SET_GPR_U32(ctx, 31, 0x40B588u);
    ctx->pc = 0x40AAF0u;
    goto label_40aaf0;
    ctx->pc = 0x40B588u;
label_40b588:
    // 0x40b588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40b58c:
    // 0x40b58c: 0x3e00008  jr          $ra
label_40b590:
    if (ctx->pc == 0x40B590u) {
        ctx->pc = 0x40B590u;
            // 0x40b590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40B594u;
        goto label_40b594;
    }
    ctx->pc = 0x40B58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B58Cu;
            // 0x40b590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B594u;
label_40b594:
    // 0x40b594: 0x0  nop
    ctx->pc = 0x40b594u;
    // NOP
label_40b598:
    // 0x40b598: 0x0  nop
    ctx->pc = 0x40b598u;
    // NOP
label_40b59c:
    // 0x40b59c: 0x0  nop
    ctx->pc = 0x40b59cu;
    // NOP
label_40b5a0:
    // 0x40b5a0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b5a4:
    // 0x40b5a4: 0x24c7003c  addiu       $a3, $a2, 0x3C
    ctx->pc = 0x40b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_40b5a8:
    // 0x40b5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40b5ac:
    // 0x40b5ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_40b5b0:
    if (ctx->pc == 0x40B5B0u) {
        ctx->pc = 0x40B5B0u;
            // 0x40b5b0: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x40B5B4u;
        goto label_40b5b4;
    }
    ctx->pc = 0x40B5ACu;
    {
        const bool branch_taken_0x40b5ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x40B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B5ACu;
            // 0x40b5b0: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b5ac) {
            ctx->pc = 0x40B5C0u;
            goto label_40b5c0;
        }
    }
    ctx->pc = 0x40B5B4u;
label_40b5b4:
    // 0x40b5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b5b8:
    // 0x40b5b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_40b5bc:
    if (ctx->pc == 0x40B5BCu) {
        ctx->pc = 0x40B5BCu;
            // 0x40b5bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B5C0u;
        goto label_40b5c0;
    }
    ctx->pc = 0x40B5B8u;
    {
        const bool branch_taken_0x40b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B5B8u;
            // 0x40b5bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b5b8) {
            ctx->pc = 0x40B5DCu;
            goto label_40b5dc;
        }
    }
    ctx->pc = 0x40B5C0u;
label_40b5c0:
    // 0x40b5c0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x40b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_40b5c4:
    // 0x40b5c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b5c8:
    // 0x40b5c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b5cc:
    // 0x40b5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b5d0:
    // 0x40b5d0: 0x0  nop
    ctx->pc = 0x40b5d0u;
    // NOP
label_40b5d4:
    // 0x40b5d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b5d8:
    // 0x40b5d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b5d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b5dc:
    // 0x40b5dc: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x40b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_40b5e0:
    // 0x40b5e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40b5e4:
    // 0x40b5e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x40b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_40b5e8:
    // 0x40b5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b5ec:
    // 0x40b5ec: 0x0  nop
    ctx->pc = 0x40b5ecu;
    // NOP
label_40b5f0:
    // 0x40b5f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40b5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40b5f4:
    // 0x40b5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b5f8:
    // 0x40b5f8: 0x0  nop
    ctx->pc = 0x40b5f8u;
    // NOP
label_40b5fc:
    // 0x40b5fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40b5fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40b600:
    // 0x40b600: 0x0  nop
    ctx->pc = 0x40b600u;
    // NOP
label_40b604:
    // 0x40b604: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x40b604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_40b608:
    // 0x40b608: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b60c:
    // 0x40b60c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b610:
    if (ctx->pc == 0x40B610u) {
        ctx->pc = 0x40B610u;
            // 0x40b610: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B614u;
        goto label_40b614;
    }
    ctx->pc = 0x40B60Cu;
    {
        const bool branch_taken_0x40b60c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b60c) {
            ctx->pc = 0x40B610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B60Cu;
            // 0x40b610: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B620u;
            goto label_40b620;
        }
    }
    ctx->pc = 0x40B614u;
label_40b614:
    // 0x40b614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b618:
    // 0x40b618: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b61c:
    if (ctx->pc == 0x40B61Cu) {
        ctx->pc = 0x40B61Cu;
            // 0x40b61c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B620u;
        goto label_40b620;
    }
    ctx->pc = 0x40B618u;
    {
        const bool branch_taken_0x40b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B618u;
            // 0x40b61c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b618) {
            ctx->pc = 0x40B638u;
            goto label_40b638;
        }
    }
    ctx->pc = 0x40B620u;
label_40b620:
    // 0x40b620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b624:
    // 0x40b624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b628:
    // 0x40b628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b62c:
    // 0x40b62c: 0x0  nop
    ctx->pc = 0x40b62cu;
    // NOP
label_40b630:
    // 0x40b630: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b634:
    // 0x40b634: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b638:
    // 0x40b638: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x40b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_40b63c:
    // 0x40b63c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40b640:
    // 0x40b640: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x40b640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_40b644:
    // 0x40b644: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40b644u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b648:
    // 0x40b648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40b64c:
    // 0x40b64c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40b64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40b650:
    // 0x40b650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b654:
    // 0x40b654: 0x0  nop
    ctx->pc = 0x40b654u;
    // NOP
label_40b658:
    // 0x40b658: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40b658u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40b65c:
    // 0x40b65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b660:
    // 0x40b660: 0x0  nop
    ctx->pc = 0x40b660u;
    // NOP
label_40b664:
    // 0x40b664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40b664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40b668:
    // 0x40b668: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x40b668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_40b66c:
    // 0x40b66c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b670:
    // 0x40b670: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b674:
    if (ctx->pc == 0x40B674u) {
        ctx->pc = 0x40B674u;
            // 0x40b674: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B678u;
        goto label_40b678;
    }
    ctx->pc = 0x40B670u;
    {
        const bool branch_taken_0x40b670 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b670) {
            ctx->pc = 0x40B674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B670u;
            // 0x40b674: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B684u;
            goto label_40b684;
        }
    }
    ctx->pc = 0x40B678u;
label_40b678:
    // 0x40b678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b67c:
    // 0x40b67c: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b680:
    if (ctx->pc == 0x40B680u) {
        ctx->pc = 0x40B680u;
            // 0x40b680: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B684u;
        goto label_40b684;
    }
    ctx->pc = 0x40B67Cu;
    {
        const bool branch_taken_0x40b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B67Cu;
            // 0x40b680: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b67c) {
            ctx->pc = 0x40B69Cu;
            goto label_40b69c;
        }
    }
    ctx->pc = 0x40B684u;
label_40b684:
    // 0x40b684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b688:
    // 0x40b688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b68c:
    // 0x40b68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b690:
    // 0x40b690: 0x0  nop
    ctx->pc = 0x40b690u;
    // NOP
label_40b694:
    // 0x40b694: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b698:
    // 0x40b698: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b69c:
    // 0x40b69c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x40b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_40b6a0:
    // 0x40b6a0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40b6a4:
    // 0x40b6a4: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x40b6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_40b6a8:
    // 0x40b6a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40b6a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b6ac:
    // 0x40b6ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40b6b0:
    // 0x40b6b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40b6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40b6b4:
    // 0x40b6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b6b8:
    // 0x40b6b8: 0x0  nop
    ctx->pc = 0x40b6b8u;
    // NOP
label_40b6bc:
    // 0x40b6bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40b6bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40b6c0:
    // 0x40b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b6c4:
    // 0x40b6c4: 0x0  nop
    ctx->pc = 0x40b6c4u;
    // NOP
label_40b6c8:
    // 0x40b6c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x40b6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_40b6cc:
    // 0x40b6cc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x40b6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_40b6d0:
    // 0x40b6d0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b6d4:
    // 0x40b6d4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b6d8:
    if (ctx->pc == 0x40B6D8u) {
        ctx->pc = 0x40B6D8u;
            // 0x40b6d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B6DCu;
        goto label_40b6dc;
    }
    ctx->pc = 0x40B6D4u;
    {
        const bool branch_taken_0x40b6d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b6d4) {
            ctx->pc = 0x40B6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B6D4u;
            // 0x40b6d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B6E8u;
            goto label_40b6e8;
        }
    }
    ctx->pc = 0x40B6DCu;
label_40b6dc:
    // 0x40b6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b6e0:
    // 0x40b6e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b6e4:
    if (ctx->pc == 0x40B6E4u) {
        ctx->pc = 0x40B6E4u;
            // 0x40b6e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B6E8u;
        goto label_40b6e8;
    }
    ctx->pc = 0x40B6E0u;
    {
        const bool branch_taken_0x40b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B6E0u;
            // 0x40b6e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b6e0) {
            ctx->pc = 0x40B700u;
            goto label_40b700;
        }
    }
    ctx->pc = 0x40B6E8u;
label_40b6e8:
    // 0x40b6e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b6ec:
    // 0x40b6ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b6f0:
    // 0x40b6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b6f4:
    // 0x40b6f4: 0x0  nop
    ctx->pc = 0x40b6f4u;
    // NOP
label_40b6f8:
    // 0x40b6f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x40b6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_40b6fc:
    // 0x40b6fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40b6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_40b700:
    // 0x40b700: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40b700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_40b704:
    // 0x40b704: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40b708:
    // 0x40b708: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x40b708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40b70c:
    // 0x40b70c: 0x0  nop
    ctx->pc = 0x40b70cu;
    // NOP
label_40b710:
    // 0x40b710: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x40b710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_40b714:
    // 0x40b714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b718:
    // 0x40b718: 0x0  nop
    ctx->pc = 0x40b718u;
    // NOP
label_40b71c:
    // 0x40b71c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40b71cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40b720:
    // 0x40b720: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x40b720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_40b724:
    // 0x40b724: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x40b724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
label_40b728:
    // 0x40b728: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b72c:
    // 0x40b72c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b730:
    if (ctx->pc == 0x40B730u) {
        ctx->pc = 0x40B730u;
            // 0x40b730: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B734u;
        goto label_40b734;
    }
    ctx->pc = 0x40B72Cu;
    {
        const bool branch_taken_0x40b72c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b72c) {
            ctx->pc = 0x40B730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B72Cu;
            // 0x40b730: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B740u;
            goto label_40b740;
        }
    }
    ctx->pc = 0x40B734u;
label_40b734:
    // 0x40b734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b738:
    // 0x40b738: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b73c:
    if (ctx->pc == 0x40B73Cu) {
        ctx->pc = 0x40B73Cu;
            // 0x40b73c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B740u;
        goto label_40b740;
    }
    ctx->pc = 0x40B738u;
    {
        const bool branch_taken_0x40b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B738u;
            // 0x40b73c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b738) {
            ctx->pc = 0x40B758u;
            goto label_40b758;
        }
    }
    ctx->pc = 0x40B740u;
label_40b740:
    // 0x40b740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b744:
    // 0x40b744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b748:
    // 0x40b748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b74c:
    // 0x40b74c: 0x0  nop
    ctx->pc = 0x40b74cu;
    // NOP
label_40b750:
    // 0x40b750: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b754:
    // 0x40b754: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b758:
    // 0x40b758: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40b758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40b75c:
    // 0x40b75c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40b760:
    // 0x40b760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b764:
    // 0x40b764: 0x0  nop
    ctx->pc = 0x40b764u;
    // NOP
label_40b768:
    // 0x40b768: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40b768u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40b76c:
    // 0x40b76c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x40b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_40b770:
    // 0x40b770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b774:
    // 0x40b774: 0x0  nop
    ctx->pc = 0x40b774u;
    // NOP
label_40b778:
    // 0x40b778: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x40b778u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_40b77c:
    // 0x40b77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b780:
    // 0x40b780: 0x0  nop
    ctx->pc = 0x40b780u;
    // NOP
label_40b784:
    // 0x40b784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40b784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40b788:
    // 0x40b788: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x40b788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_40b78c:
    // 0x40b78c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b790:
    // 0x40b790: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b794:
    if (ctx->pc == 0x40B794u) {
        ctx->pc = 0x40B794u;
            // 0x40b794: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B798u;
        goto label_40b798;
    }
    ctx->pc = 0x40B790u;
    {
        const bool branch_taken_0x40b790 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b790) {
            ctx->pc = 0x40B794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B790u;
            // 0x40b794: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B7A4u;
            goto label_40b7a4;
        }
    }
    ctx->pc = 0x40B798u;
label_40b798:
    // 0x40b798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b79c:
    // 0x40b79c: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b7a0:
    if (ctx->pc == 0x40B7A0u) {
        ctx->pc = 0x40B7A0u;
            // 0x40b7a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B7A4u;
        goto label_40b7a4;
    }
    ctx->pc = 0x40B79Cu;
    {
        const bool branch_taken_0x40b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B79Cu;
            // 0x40b7a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b79c) {
            ctx->pc = 0x40B7BCu;
            goto label_40b7bc;
        }
    }
    ctx->pc = 0x40B7A4u;
label_40b7a4:
    // 0x40b7a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b7a8:
    // 0x40b7a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b7ac:
    // 0x40b7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b7b0:
    // 0x40b7b0: 0x0  nop
    ctx->pc = 0x40b7b0u;
    // NOP
label_40b7b4:
    // 0x40b7b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b7b8:
    // 0x40b7b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b7b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b7bc:
    // 0x40b7bc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40b7c0:
    // 0x40b7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b7c4:
    // 0x40b7c4: 0x0  nop
    ctx->pc = 0x40b7c4u;
    // NOP
label_40b7c8:
    // 0x40b7c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40b7c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40b7cc:
    // 0x40b7cc: 0x0  nop
    ctx->pc = 0x40b7ccu;
    // NOP
label_40b7d0:
    // 0x40b7d0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x40b7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_40b7d4:
    // 0x40b7d4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b7d8:
    // 0x40b7d8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40b7dc:
    if (ctx->pc == 0x40B7DCu) {
        ctx->pc = 0x40B7DCu;
            // 0x40b7dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40B7E0u;
        goto label_40b7e0;
    }
    ctx->pc = 0x40B7D8u;
    {
        const bool branch_taken_0x40b7d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40b7d8) {
            ctx->pc = 0x40B7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B7D8u;
            // 0x40b7dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B7ECu;
            goto label_40b7ec;
        }
    }
    ctx->pc = 0x40B7E0u;
label_40b7e0:
    // 0x40b7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b7e4:
    // 0x40b7e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_40b7e8:
    if (ctx->pc == 0x40B7E8u) {
        ctx->pc = 0x40B7E8u;
            // 0x40b7e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40B7ECu;
        goto label_40b7ec;
    }
    ctx->pc = 0x40B7E4u;
    {
        const bool branch_taken_0x40b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B7E4u;
            // 0x40b7e8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b7e4) {
            ctx->pc = 0x40B804u;
            goto label_40b804;
        }
    }
    ctx->pc = 0x40B7ECu;
label_40b7ec:
    // 0x40b7ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40b7f0:
    // 0x40b7f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40b7f4:
    // 0x40b7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b7f8:
    // 0x40b7f8: 0x0  nop
    ctx->pc = 0x40b7f8u;
    // NOP
label_40b7fc:
    // 0x40b7fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40b7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40b800:
    // 0x40b800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40b800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40b804:
    // 0x40b804: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_40b808:
    // 0x40b808: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40b80c:
    // 0x40b80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40b80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b810:
    // 0x40b810: 0x0  nop
    ctx->pc = 0x40b810u;
    // NOP
label_40b814:
    // 0x40b814: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40b814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40b818:
    // 0x40b818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b81c:
    // 0x40b81c: 0x0  nop
    ctx->pc = 0x40b81cu;
    // NOP
label_40b820:
    // 0x40b820: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40b820u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40b824:
    // 0x40b824: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x40b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_40b828:
    // 0x40b828: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40b82c:
    // 0x40b82c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x40b82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_40b830:
    // 0x40b830: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_40b834:
    if (ctx->pc == 0x40B834u) {
        ctx->pc = 0x40B834u;
            // 0x40b834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B838u;
        goto label_40b838;
    }
    ctx->pc = 0x40B830u;
    {
        const bool branch_taken_0x40b830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b830) {
            ctx->pc = 0x40B834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40B830u;
            // 0x40b834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40B83Cu;
            goto label_40b83c;
        }
    }
    ctx->pc = 0x40B838u;
label_40b838:
    // 0x40b838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b83c:
    // 0x40b83c: 0x3e00008  jr          $ra
label_40b840:
    if (ctx->pc == 0x40B840u) {
        ctx->pc = 0x40B844u;
        goto label_40b844;
    }
    ctx->pc = 0x40B83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B844u;
label_40b844:
    // 0x40b844: 0x0  nop
    ctx->pc = 0x40b844u;
    // NOP
label_40b848:
    // 0x40b848: 0x0  nop
    ctx->pc = 0x40b848u;
    // NOP
label_40b84c:
    // 0x40b84c: 0x0  nop
    ctx->pc = 0x40b84cu;
    // NOP
label_40b850:
    // 0x40b850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40b854:
    // 0x40b854: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_40b858:
    // 0x40b858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40b85c:
    // 0x40b85c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40b860:
    // 0x40b860: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40b860u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40b864:
    // 0x40b864: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40b864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40b868:
    // 0x40b868: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40b868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40b86c:
    // 0x40b86c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40b870:
    // 0x40b870: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x40b870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40b874:
    // 0x40b874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40b878:
    // 0x40b878: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x40b878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_40b87c:
    // 0x40b87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40b880:
    // 0x40b880: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x40b880u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_40b884:
    // 0x40b884: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x40b884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_40b888:
    // 0x40b888: 0xc04cbd8  jal         func_132F60
label_40b88c:
    if (ctx->pc == 0x40B88Cu) {
        ctx->pc = 0x40B88Cu;
            // 0x40b88c: 0x2672003c  addiu       $s2, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->pc = 0x40B890u;
        goto label_40b890;
    }
    ctx->pc = 0x40B888u;
    SET_GPR_U32(ctx, 31, 0x40B890u);
    ctx->pc = 0x40B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40B888u;
            // 0x40b88c: 0x2672003c  addiu       $s2, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40B890u; }
        if (ctx->pc != 0x40B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40B890u; }
        if (ctx->pc != 0x40B890u) { return; }
    }
    ctx->pc = 0x40B890u;
label_40b890:
    // 0x40b890: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x40b890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_40b894:
    // 0x40b894: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40b894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40b898:
    // 0x40b898: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x40b898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_40b89c:
    // 0x40b89c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40b8a0:
    // 0x40b8a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x40b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_40b8a4:
    // 0x40b8a4: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_40b8a8:
    // 0x40b8a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x40b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_40b8ac:
    // 0x40b8ac: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x40b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_40b8b0:
    // 0x40b8b0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x40b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_40b8b4:
    // 0x40b8b4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x40b8b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_40b8b8:
    // 0x40b8b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40b8bc:
    // 0x40b8bc: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x40b8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_40b8c0:
    // 0x40b8c0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x40b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_40b8c4:
    // 0x40b8c4: 0xae630048  sw          $v1, 0x48($s3)
    ctx->pc = 0x40b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 3));
label_40b8c8:
    // 0x40b8c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40b8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40b8cc:
    // 0x40b8cc: 0xc04cbd8  jal         func_132F60
label_40b8d0:
    if (ctx->pc == 0x40B8D0u) {
        ctx->pc = 0x40B8D0u;
            // 0x40b8d0: 0x2690003c  addiu       $s0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x40B8D4u;
        goto label_40b8d4;
    }
    ctx->pc = 0x40B8CCu;
    SET_GPR_U32(ctx, 31, 0x40B8D4u);
    ctx->pc = 0x40B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40B8CCu;
            // 0x40b8d0: 0x2690003c  addiu       $s0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40B8D4u; }
        if (ctx->pc != 0x40B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40B8D4u; }
        if (ctx->pc != 0x40B8D4u) { return; }
    }
    ctx->pc = 0x40B8D4u;
label_40b8d4:
    // 0x40b8d4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x40b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_40b8d8:
    // 0x40b8d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40b8dc:
    // 0x40b8dc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x40b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_40b8e0:
    // 0x40b8e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b8e4:
    // 0x40b8e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x40b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_40b8e8:
    // 0x40b8e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x40b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_40b8ec:
    // 0x40b8ec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x40b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_40b8f0:
    // 0x40b8f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x40b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_40b8f4:
    // 0x40b8f4: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x40b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_40b8f8:
    // 0x40b8f8: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x40b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_40b8fc:
    // 0x40b8fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40b900:
    // 0x40b900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40b900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40b904:
    // 0x40b904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40b904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40b908:
    // 0x40b908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40b908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40b90c:
    // 0x40b90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40b910:
    // 0x40b910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40b910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40b914:
    // 0x40b914: 0x3e00008  jr          $ra
label_40b918:
    if (ctx->pc == 0x40B918u) {
        ctx->pc = 0x40B918u;
            // 0x40b918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40B91Cu;
        goto label_40b91c;
    }
    ctx->pc = 0x40B914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B914u;
            // 0x40b918: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B91Cu;
label_40b91c:
    // 0x40b91c: 0x0  nop
    ctx->pc = 0x40b91cu;
    // NOP
label_40b920:
    // 0x40b920: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40b920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40b924:
    // 0x40b924: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_40b928:
    // 0x40b928: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x40b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b92c:
    // 0x40b92c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40b92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b930:
    // 0x40b930: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x40b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40b934:
    // 0x40b934: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x40b934u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_40b938:
    // 0x40b938: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40b938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b93c:
    // 0x40b93c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40b940:
    if (ctx->pc == 0x40B940u) {
        ctx->pc = 0x40B940u;
            // 0x40b940: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->pc = 0x40B944u;
        goto label_40b944;
    }
    ctx->pc = 0x40B93Cu;
    {
        const bool branch_taken_0x40b93c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B93Cu;
            // 0x40b940: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b93c) {
            ctx->pc = 0x40B94Cu;
            goto label_40b94c;
        }
    }
    ctx->pc = 0x40B944u;
label_40b944:
    // 0x40b944: 0x10000002  b           . + 4 + (0x2 << 2)
label_40b948:
    if (ctx->pc == 0x40B948u) {
        ctx->pc = 0x40B948u;
            // 0x40b948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40B94Cu;
        goto label_40b94c;
    }
    ctx->pc = 0x40B944u;
    {
        const bool branch_taken_0x40b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B944u;
            // 0x40b948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b944) {
            ctx->pc = 0x40B950u;
            goto label_40b950;
        }
    }
    ctx->pc = 0x40B94Cu;
label_40b94c:
    // 0x40b94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b950:
    // 0x40b950: 0x3e00008  jr          $ra
label_40b954:
    if (ctx->pc == 0x40B954u) {
        ctx->pc = 0x40B958u;
        goto label_40b958;
    }
    ctx->pc = 0x40B950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B958u;
label_40b958:
    // 0x40b958: 0x0  nop
    ctx->pc = 0x40b958u;
    // NOP
label_40b95c:
    // 0x40b95c: 0x0  nop
    ctx->pc = 0x40b95cu;
    // NOP
label_40b960:
    // 0x40b960: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x40b960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_40b964:
    // 0x40b964: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x40b964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_40b968:
    // 0x40b968: 0x3e00008  jr          $ra
label_40b96c:
    if (ctx->pc == 0x40B96Cu) {
        ctx->pc = 0x40B96Cu;
            // 0x40b96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B970u;
        goto label_40b970;
    }
    ctx->pc = 0x40B968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B968u;
            // 0x40b96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B970u;
label_40b970:
    // 0x40b970: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40b974:
    // 0x40b974: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_40b978:
    // 0x40b978: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x40b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40b97c:
    // 0x40b97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40b97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40b980:
    // 0x40b980: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x40b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40b984:
    // 0x40b984: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x40b984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_40b988:
    // 0x40b988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40b988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40b98c:
    // 0x40b98c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40b990:
    if (ctx->pc == 0x40B990u) {
        ctx->pc = 0x40B990u;
            // 0x40b990: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->pc = 0x40B994u;
        goto label_40b994;
    }
    ctx->pc = 0x40B98Cu;
    {
        const bool branch_taken_0x40b98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B98Cu;
            // 0x40b990: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b98c) {
            ctx->pc = 0x40B99Cu;
            goto label_40b99c;
        }
    }
    ctx->pc = 0x40B994u;
label_40b994:
    // 0x40b994: 0x10000002  b           . + 4 + (0x2 << 2)
label_40b998:
    if (ctx->pc == 0x40B998u) {
        ctx->pc = 0x40B998u;
            // 0x40b998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40B99Cu;
        goto label_40b99c;
    }
    ctx->pc = 0x40B994u;
    {
        const bool branch_taken_0x40b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B994u;
            // 0x40b998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b994) {
            ctx->pc = 0x40B9A0u;
            goto label_40b9a0;
        }
    }
    ctx->pc = 0x40B99Cu;
label_40b99c:
    // 0x40b99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b9a0:
    // 0x40b9a0: 0x3e00008  jr          $ra
label_40b9a4:
    if (ctx->pc == 0x40B9A4u) {
        ctx->pc = 0x40B9A8u;
        goto label_40b9a8;
    }
    ctx->pc = 0x40B9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B9A8u;
label_40b9a8:
    // 0x40b9a8: 0x0  nop
    ctx->pc = 0x40b9a8u;
    // NOP
label_40b9ac:
    // 0x40b9ac: 0x0  nop
    ctx->pc = 0x40b9acu;
    // NOP
label_40b9b0:
    // 0x40b9b0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x40b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_40b9b4:
    // 0x40b9b4: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x40b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_40b9b8:
    // 0x40b9b8: 0x3e00008  jr          $ra
label_40b9bc:
    if (ctx->pc == 0x40B9BCu) {
        ctx->pc = 0x40B9BCu;
            // 0x40b9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40B9C0u;
        goto label_fallthrough_0x40b9b8;
    }
    ctx->pc = 0x40B9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40B9B8u;
            // 0x40b9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x40b9b8:
    ctx->pc = 0x40B9C0u;
}
