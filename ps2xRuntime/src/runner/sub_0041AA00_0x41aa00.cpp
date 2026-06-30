#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041AA00
// Address: 0x41aa00 - 0x41b7f0
void sub_0041AA00_0x41aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AA00_0x41aa00");
#endif

    switch (ctx->pc) {
        case 0x41aa00u: goto label_41aa00;
        case 0x41aa04u: goto label_41aa04;
        case 0x41aa08u: goto label_41aa08;
        case 0x41aa0cu: goto label_41aa0c;
        case 0x41aa10u: goto label_41aa10;
        case 0x41aa14u: goto label_41aa14;
        case 0x41aa18u: goto label_41aa18;
        case 0x41aa1cu: goto label_41aa1c;
        case 0x41aa20u: goto label_41aa20;
        case 0x41aa24u: goto label_41aa24;
        case 0x41aa28u: goto label_41aa28;
        case 0x41aa2cu: goto label_41aa2c;
        case 0x41aa30u: goto label_41aa30;
        case 0x41aa34u: goto label_41aa34;
        case 0x41aa38u: goto label_41aa38;
        case 0x41aa3cu: goto label_41aa3c;
        case 0x41aa40u: goto label_41aa40;
        case 0x41aa44u: goto label_41aa44;
        case 0x41aa48u: goto label_41aa48;
        case 0x41aa4cu: goto label_41aa4c;
        case 0x41aa50u: goto label_41aa50;
        case 0x41aa54u: goto label_41aa54;
        case 0x41aa58u: goto label_41aa58;
        case 0x41aa5cu: goto label_41aa5c;
        case 0x41aa60u: goto label_41aa60;
        case 0x41aa64u: goto label_41aa64;
        case 0x41aa68u: goto label_41aa68;
        case 0x41aa6cu: goto label_41aa6c;
        case 0x41aa70u: goto label_41aa70;
        case 0x41aa74u: goto label_41aa74;
        case 0x41aa78u: goto label_41aa78;
        case 0x41aa7cu: goto label_41aa7c;
        case 0x41aa80u: goto label_41aa80;
        case 0x41aa84u: goto label_41aa84;
        case 0x41aa88u: goto label_41aa88;
        case 0x41aa8cu: goto label_41aa8c;
        case 0x41aa90u: goto label_41aa90;
        case 0x41aa94u: goto label_41aa94;
        case 0x41aa98u: goto label_41aa98;
        case 0x41aa9cu: goto label_41aa9c;
        case 0x41aaa0u: goto label_41aaa0;
        case 0x41aaa4u: goto label_41aaa4;
        case 0x41aaa8u: goto label_41aaa8;
        case 0x41aaacu: goto label_41aaac;
        case 0x41aab0u: goto label_41aab0;
        case 0x41aab4u: goto label_41aab4;
        case 0x41aab8u: goto label_41aab8;
        case 0x41aabcu: goto label_41aabc;
        case 0x41aac0u: goto label_41aac0;
        case 0x41aac4u: goto label_41aac4;
        case 0x41aac8u: goto label_41aac8;
        case 0x41aaccu: goto label_41aacc;
        case 0x41aad0u: goto label_41aad0;
        case 0x41aad4u: goto label_41aad4;
        case 0x41aad8u: goto label_41aad8;
        case 0x41aadcu: goto label_41aadc;
        case 0x41aae0u: goto label_41aae0;
        case 0x41aae4u: goto label_41aae4;
        case 0x41aae8u: goto label_41aae8;
        case 0x41aaecu: goto label_41aaec;
        case 0x41aaf0u: goto label_41aaf0;
        case 0x41aaf4u: goto label_41aaf4;
        case 0x41aaf8u: goto label_41aaf8;
        case 0x41aafcu: goto label_41aafc;
        case 0x41ab00u: goto label_41ab00;
        case 0x41ab04u: goto label_41ab04;
        case 0x41ab08u: goto label_41ab08;
        case 0x41ab0cu: goto label_41ab0c;
        case 0x41ab10u: goto label_41ab10;
        case 0x41ab14u: goto label_41ab14;
        case 0x41ab18u: goto label_41ab18;
        case 0x41ab1cu: goto label_41ab1c;
        case 0x41ab20u: goto label_41ab20;
        case 0x41ab24u: goto label_41ab24;
        case 0x41ab28u: goto label_41ab28;
        case 0x41ab2cu: goto label_41ab2c;
        case 0x41ab30u: goto label_41ab30;
        case 0x41ab34u: goto label_41ab34;
        case 0x41ab38u: goto label_41ab38;
        case 0x41ab3cu: goto label_41ab3c;
        case 0x41ab40u: goto label_41ab40;
        case 0x41ab44u: goto label_41ab44;
        case 0x41ab48u: goto label_41ab48;
        case 0x41ab4cu: goto label_41ab4c;
        case 0x41ab50u: goto label_41ab50;
        case 0x41ab54u: goto label_41ab54;
        case 0x41ab58u: goto label_41ab58;
        case 0x41ab5cu: goto label_41ab5c;
        case 0x41ab60u: goto label_41ab60;
        case 0x41ab64u: goto label_41ab64;
        case 0x41ab68u: goto label_41ab68;
        case 0x41ab6cu: goto label_41ab6c;
        case 0x41ab70u: goto label_41ab70;
        case 0x41ab74u: goto label_41ab74;
        case 0x41ab78u: goto label_41ab78;
        case 0x41ab7cu: goto label_41ab7c;
        case 0x41ab80u: goto label_41ab80;
        case 0x41ab84u: goto label_41ab84;
        case 0x41ab88u: goto label_41ab88;
        case 0x41ab8cu: goto label_41ab8c;
        case 0x41ab90u: goto label_41ab90;
        case 0x41ab94u: goto label_41ab94;
        case 0x41ab98u: goto label_41ab98;
        case 0x41ab9cu: goto label_41ab9c;
        case 0x41aba0u: goto label_41aba0;
        case 0x41aba4u: goto label_41aba4;
        case 0x41aba8u: goto label_41aba8;
        case 0x41abacu: goto label_41abac;
        case 0x41abb0u: goto label_41abb0;
        case 0x41abb4u: goto label_41abb4;
        case 0x41abb8u: goto label_41abb8;
        case 0x41abbcu: goto label_41abbc;
        case 0x41abc0u: goto label_41abc0;
        case 0x41abc4u: goto label_41abc4;
        case 0x41abc8u: goto label_41abc8;
        case 0x41abccu: goto label_41abcc;
        case 0x41abd0u: goto label_41abd0;
        case 0x41abd4u: goto label_41abd4;
        case 0x41abd8u: goto label_41abd8;
        case 0x41abdcu: goto label_41abdc;
        case 0x41abe0u: goto label_41abe0;
        case 0x41abe4u: goto label_41abe4;
        case 0x41abe8u: goto label_41abe8;
        case 0x41abecu: goto label_41abec;
        case 0x41abf0u: goto label_41abf0;
        case 0x41abf4u: goto label_41abf4;
        case 0x41abf8u: goto label_41abf8;
        case 0x41abfcu: goto label_41abfc;
        case 0x41ac00u: goto label_41ac00;
        case 0x41ac04u: goto label_41ac04;
        case 0x41ac08u: goto label_41ac08;
        case 0x41ac0cu: goto label_41ac0c;
        case 0x41ac10u: goto label_41ac10;
        case 0x41ac14u: goto label_41ac14;
        case 0x41ac18u: goto label_41ac18;
        case 0x41ac1cu: goto label_41ac1c;
        case 0x41ac20u: goto label_41ac20;
        case 0x41ac24u: goto label_41ac24;
        case 0x41ac28u: goto label_41ac28;
        case 0x41ac2cu: goto label_41ac2c;
        case 0x41ac30u: goto label_41ac30;
        case 0x41ac34u: goto label_41ac34;
        case 0x41ac38u: goto label_41ac38;
        case 0x41ac3cu: goto label_41ac3c;
        case 0x41ac40u: goto label_41ac40;
        case 0x41ac44u: goto label_41ac44;
        case 0x41ac48u: goto label_41ac48;
        case 0x41ac4cu: goto label_41ac4c;
        case 0x41ac50u: goto label_41ac50;
        case 0x41ac54u: goto label_41ac54;
        case 0x41ac58u: goto label_41ac58;
        case 0x41ac5cu: goto label_41ac5c;
        case 0x41ac60u: goto label_41ac60;
        case 0x41ac64u: goto label_41ac64;
        case 0x41ac68u: goto label_41ac68;
        case 0x41ac6cu: goto label_41ac6c;
        case 0x41ac70u: goto label_41ac70;
        case 0x41ac74u: goto label_41ac74;
        case 0x41ac78u: goto label_41ac78;
        case 0x41ac7cu: goto label_41ac7c;
        case 0x41ac80u: goto label_41ac80;
        case 0x41ac84u: goto label_41ac84;
        case 0x41ac88u: goto label_41ac88;
        case 0x41ac8cu: goto label_41ac8c;
        case 0x41ac90u: goto label_41ac90;
        case 0x41ac94u: goto label_41ac94;
        case 0x41ac98u: goto label_41ac98;
        case 0x41ac9cu: goto label_41ac9c;
        case 0x41aca0u: goto label_41aca0;
        case 0x41aca4u: goto label_41aca4;
        case 0x41aca8u: goto label_41aca8;
        case 0x41acacu: goto label_41acac;
        case 0x41acb0u: goto label_41acb0;
        case 0x41acb4u: goto label_41acb4;
        case 0x41acb8u: goto label_41acb8;
        case 0x41acbcu: goto label_41acbc;
        case 0x41acc0u: goto label_41acc0;
        case 0x41acc4u: goto label_41acc4;
        case 0x41acc8u: goto label_41acc8;
        case 0x41acccu: goto label_41accc;
        case 0x41acd0u: goto label_41acd0;
        case 0x41acd4u: goto label_41acd4;
        case 0x41acd8u: goto label_41acd8;
        case 0x41acdcu: goto label_41acdc;
        case 0x41ace0u: goto label_41ace0;
        case 0x41ace4u: goto label_41ace4;
        case 0x41ace8u: goto label_41ace8;
        case 0x41acecu: goto label_41acec;
        case 0x41acf0u: goto label_41acf0;
        case 0x41acf4u: goto label_41acf4;
        case 0x41acf8u: goto label_41acf8;
        case 0x41acfcu: goto label_41acfc;
        case 0x41ad00u: goto label_41ad00;
        case 0x41ad04u: goto label_41ad04;
        case 0x41ad08u: goto label_41ad08;
        case 0x41ad0cu: goto label_41ad0c;
        case 0x41ad10u: goto label_41ad10;
        case 0x41ad14u: goto label_41ad14;
        case 0x41ad18u: goto label_41ad18;
        case 0x41ad1cu: goto label_41ad1c;
        case 0x41ad20u: goto label_41ad20;
        case 0x41ad24u: goto label_41ad24;
        case 0x41ad28u: goto label_41ad28;
        case 0x41ad2cu: goto label_41ad2c;
        case 0x41ad30u: goto label_41ad30;
        case 0x41ad34u: goto label_41ad34;
        case 0x41ad38u: goto label_41ad38;
        case 0x41ad3cu: goto label_41ad3c;
        case 0x41ad40u: goto label_41ad40;
        case 0x41ad44u: goto label_41ad44;
        case 0x41ad48u: goto label_41ad48;
        case 0x41ad4cu: goto label_41ad4c;
        case 0x41ad50u: goto label_41ad50;
        case 0x41ad54u: goto label_41ad54;
        case 0x41ad58u: goto label_41ad58;
        case 0x41ad5cu: goto label_41ad5c;
        case 0x41ad60u: goto label_41ad60;
        case 0x41ad64u: goto label_41ad64;
        case 0x41ad68u: goto label_41ad68;
        case 0x41ad6cu: goto label_41ad6c;
        case 0x41ad70u: goto label_41ad70;
        case 0x41ad74u: goto label_41ad74;
        case 0x41ad78u: goto label_41ad78;
        case 0x41ad7cu: goto label_41ad7c;
        case 0x41ad80u: goto label_41ad80;
        case 0x41ad84u: goto label_41ad84;
        case 0x41ad88u: goto label_41ad88;
        case 0x41ad8cu: goto label_41ad8c;
        case 0x41ad90u: goto label_41ad90;
        case 0x41ad94u: goto label_41ad94;
        case 0x41ad98u: goto label_41ad98;
        case 0x41ad9cu: goto label_41ad9c;
        case 0x41ada0u: goto label_41ada0;
        case 0x41ada4u: goto label_41ada4;
        case 0x41ada8u: goto label_41ada8;
        case 0x41adacu: goto label_41adac;
        case 0x41adb0u: goto label_41adb0;
        case 0x41adb4u: goto label_41adb4;
        case 0x41adb8u: goto label_41adb8;
        case 0x41adbcu: goto label_41adbc;
        case 0x41adc0u: goto label_41adc0;
        case 0x41adc4u: goto label_41adc4;
        case 0x41adc8u: goto label_41adc8;
        case 0x41adccu: goto label_41adcc;
        case 0x41add0u: goto label_41add0;
        case 0x41add4u: goto label_41add4;
        case 0x41add8u: goto label_41add8;
        case 0x41addcu: goto label_41addc;
        case 0x41ade0u: goto label_41ade0;
        case 0x41ade4u: goto label_41ade4;
        case 0x41ade8u: goto label_41ade8;
        case 0x41adecu: goto label_41adec;
        case 0x41adf0u: goto label_41adf0;
        case 0x41adf4u: goto label_41adf4;
        case 0x41adf8u: goto label_41adf8;
        case 0x41adfcu: goto label_41adfc;
        case 0x41ae00u: goto label_41ae00;
        case 0x41ae04u: goto label_41ae04;
        case 0x41ae08u: goto label_41ae08;
        case 0x41ae0cu: goto label_41ae0c;
        case 0x41ae10u: goto label_41ae10;
        case 0x41ae14u: goto label_41ae14;
        case 0x41ae18u: goto label_41ae18;
        case 0x41ae1cu: goto label_41ae1c;
        case 0x41ae20u: goto label_41ae20;
        case 0x41ae24u: goto label_41ae24;
        case 0x41ae28u: goto label_41ae28;
        case 0x41ae2cu: goto label_41ae2c;
        case 0x41ae30u: goto label_41ae30;
        case 0x41ae34u: goto label_41ae34;
        case 0x41ae38u: goto label_41ae38;
        case 0x41ae3cu: goto label_41ae3c;
        case 0x41ae40u: goto label_41ae40;
        case 0x41ae44u: goto label_41ae44;
        case 0x41ae48u: goto label_41ae48;
        case 0x41ae4cu: goto label_41ae4c;
        case 0x41ae50u: goto label_41ae50;
        case 0x41ae54u: goto label_41ae54;
        case 0x41ae58u: goto label_41ae58;
        case 0x41ae5cu: goto label_41ae5c;
        case 0x41ae60u: goto label_41ae60;
        case 0x41ae64u: goto label_41ae64;
        case 0x41ae68u: goto label_41ae68;
        case 0x41ae6cu: goto label_41ae6c;
        case 0x41ae70u: goto label_41ae70;
        case 0x41ae74u: goto label_41ae74;
        case 0x41ae78u: goto label_41ae78;
        case 0x41ae7cu: goto label_41ae7c;
        case 0x41ae80u: goto label_41ae80;
        case 0x41ae84u: goto label_41ae84;
        case 0x41ae88u: goto label_41ae88;
        case 0x41ae8cu: goto label_41ae8c;
        case 0x41ae90u: goto label_41ae90;
        case 0x41ae94u: goto label_41ae94;
        case 0x41ae98u: goto label_41ae98;
        case 0x41ae9cu: goto label_41ae9c;
        case 0x41aea0u: goto label_41aea0;
        case 0x41aea4u: goto label_41aea4;
        case 0x41aea8u: goto label_41aea8;
        case 0x41aeacu: goto label_41aeac;
        case 0x41aeb0u: goto label_41aeb0;
        case 0x41aeb4u: goto label_41aeb4;
        case 0x41aeb8u: goto label_41aeb8;
        case 0x41aebcu: goto label_41aebc;
        case 0x41aec0u: goto label_41aec0;
        case 0x41aec4u: goto label_41aec4;
        case 0x41aec8u: goto label_41aec8;
        case 0x41aeccu: goto label_41aecc;
        case 0x41aed0u: goto label_41aed0;
        case 0x41aed4u: goto label_41aed4;
        case 0x41aed8u: goto label_41aed8;
        case 0x41aedcu: goto label_41aedc;
        case 0x41aee0u: goto label_41aee0;
        case 0x41aee4u: goto label_41aee4;
        case 0x41aee8u: goto label_41aee8;
        case 0x41aeecu: goto label_41aeec;
        case 0x41aef0u: goto label_41aef0;
        case 0x41aef4u: goto label_41aef4;
        case 0x41aef8u: goto label_41aef8;
        case 0x41aefcu: goto label_41aefc;
        case 0x41af00u: goto label_41af00;
        case 0x41af04u: goto label_41af04;
        case 0x41af08u: goto label_41af08;
        case 0x41af0cu: goto label_41af0c;
        case 0x41af10u: goto label_41af10;
        case 0x41af14u: goto label_41af14;
        case 0x41af18u: goto label_41af18;
        case 0x41af1cu: goto label_41af1c;
        case 0x41af20u: goto label_41af20;
        case 0x41af24u: goto label_41af24;
        case 0x41af28u: goto label_41af28;
        case 0x41af2cu: goto label_41af2c;
        case 0x41af30u: goto label_41af30;
        case 0x41af34u: goto label_41af34;
        case 0x41af38u: goto label_41af38;
        case 0x41af3cu: goto label_41af3c;
        case 0x41af40u: goto label_41af40;
        case 0x41af44u: goto label_41af44;
        case 0x41af48u: goto label_41af48;
        case 0x41af4cu: goto label_41af4c;
        case 0x41af50u: goto label_41af50;
        case 0x41af54u: goto label_41af54;
        case 0x41af58u: goto label_41af58;
        case 0x41af5cu: goto label_41af5c;
        case 0x41af60u: goto label_41af60;
        case 0x41af64u: goto label_41af64;
        case 0x41af68u: goto label_41af68;
        case 0x41af6cu: goto label_41af6c;
        case 0x41af70u: goto label_41af70;
        case 0x41af74u: goto label_41af74;
        case 0x41af78u: goto label_41af78;
        case 0x41af7cu: goto label_41af7c;
        case 0x41af80u: goto label_41af80;
        case 0x41af84u: goto label_41af84;
        case 0x41af88u: goto label_41af88;
        case 0x41af8cu: goto label_41af8c;
        case 0x41af90u: goto label_41af90;
        case 0x41af94u: goto label_41af94;
        case 0x41af98u: goto label_41af98;
        case 0x41af9cu: goto label_41af9c;
        case 0x41afa0u: goto label_41afa0;
        case 0x41afa4u: goto label_41afa4;
        case 0x41afa8u: goto label_41afa8;
        case 0x41afacu: goto label_41afac;
        case 0x41afb0u: goto label_41afb0;
        case 0x41afb4u: goto label_41afb4;
        case 0x41afb8u: goto label_41afb8;
        case 0x41afbcu: goto label_41afbc;
        case 0x41afc0u: goto label_41afc0;
        case 0x41afc4u: goto label_41afc4;
        case 0x41afc8u: goto label_41afc8;
        case 0x41afccu: goto label_41afcc;
        case 0x41afd0u: goto label_41afd0;
        case 0x41afd4u: goto label_41afd4;
        case 0x41afd8u: goto label_41afd8;
        case 0x41afdcu: goto label_41afdc;
        case 0x41afe0u: goto label_41afe0;
        case 0x41afe4u: goto label_41afe4;
        case 0x41afe8u: goto label_41afe8;
        case 0x41afecu: goto label_41afec;
        case 0x41aff0u: goto label_41aff0;
        case 0x41aff4u: goto label_41aff4;
        case 0x41aff8u: goto label_41aff8;
        case 0x41affcu: goto label_41affc;
        case 0x41b000u: goto label_41b000;
        case 0x41b004u: goto label_41b004;
        case 0x41b008u: goto label_41b008;
        case 0x41b00cu: goto label_41b00c;
        case 0x41b010u: goto label_41b010;
        case 0x41b014u: goto label_41b014;
        case 0x41b018u: goto label_41b018;
        case 0x41b01cu: goto label_41b01c;
        case 0x41b020u: goto label_41b020;
        case 0x41b024u: goto label_41b024;
        case 0x41b028u: goto label_41b028;
        case 0x41b02cu: goto label_41b02c;
        case 0x41b030u: goto label_41b030;
        case 0x41b034u: goto label_41b034;
        case 0x41b038u: goto label_41b038;
        case 0x41b03cu: goto label_41b03c;
        case 0x41b040u: goto label_41b040;
        case 0x41b044u: goto label_41b044;
        case 0x41b048u: goto label_41b048;
        case 0x41b04cu: goto label_41b04c;
        case 0x41b050u: goto label_41b050;
        case 0x41b054u: goto label_41b054;
        case 0x41b058u: goto label_41b058;
        case 0x41b05cu: goto label_41b05c;
        case 0x41b060u: goto label_41b060;
        case 0x41b064u: goto label_41b064;
        case 0x41b068u: goto label_41b068;
        case 0x41b06cu: goto label_41b06c;
        case 0x41b070u: goto label_41b070;
        case 0x41b074u: goto label_41b074;
        case 0x41b078u: goto label_41b078;
        case 0x41b07cu: goto label_41b07c;
        case 0x41b080u: goto label_41b080;
        case 0x41b084u: goto label_41b084;
        case 0x41b088u: goto label_41b088;
        case 0x41b08cu: goto label_41b08c;
        case 0x41b090u: goto label_41b090;
        case 0x41b094u: goto label_41b094;
        case 0x41b098u: goto label_41b098;
        case 0x41b09cu: goto label_41b09c;
        case 0x41b0a0u: goto label_41b0a0;
        case 0x41b0a4u: goto label_41b0a4;
        case 0x41b0a8u: goto label_41b0a8;
        case 0x41b0acu: goto label_41b0ac;
        case 0x41b0b0u: goto label_41b0b0;
        case 0x41b0b4u: goto label_41b0b4;
        case 0x41b0b8u: goto label_41b0b8;
        case 0x41b0bcu: goto label_41b0bc;
        case 0x41b0c0u: goto label_41b0c0;
        case 0x41b0c4u: goto label_41b0c4;
        case 0x41b0c8u: goto label_41b0c8;
        case 0x41b0ccu: goto label_41b0cc;
        case 0x41b0d0u: goto label_41b0d0;
        case 0x41b0d4u: goto label_41b0d4;
        case 0x41b0d8u: goto label_41b0d8;
        case 0x41b0dcu: goto label_41b0dc;
        case 0x41b0e0u: goto label_41b0e0;
        case 0x41b0e4u: goto label_41b0e4;
        case 0x41b0e8u: goto label_41b0e8;
        case 0x41b0ecu: goto label_41b0ec;
        case 0x41b0f0u: goto label_41b0f0;
        case 0x41b0f4u: goto label_41b0f4;
        case 0x41b0f8u: goto label_41b0f8;
        case 0x41b0fcu: goto label_41b0fc;
        case 0x41b100u: goto label_41b100;
        case 0x41b104u: goto label_41b104;
        case 0x41b108u: goto label_41b108;
        case 0x41b10cu: goto label_41b10c;
        case 0x41b110u: goto label_41b110;
        case 0x41b114u: goto label_41b114;
        case 0x41b118u: goto label_41b118;
        case 0x41b11cu: goto label_41b11c;
        case 0x41b120u: goto label_41b120;
        case 0x41b124u: goto label_41b124;
        case 0x41b128u: goto label_41b128;
        case 0x41b12cu: goto label_41b12c;
        case 0x41b130u: goto label_41b130;
        case 0x41b134u: goto label_41b134;
        case 0x41b138u: goto label_41b138;
        case 0x41b13cu: goto label_41b13c;
        case 0x41b140u: goto label_41b140;
        case 0x41b144u: goto label_41b144;
        case 0x41b148u: goto label_41b148;
        case 0x41b14cu: goto label_41b14c;
        case 0x41b150u: goto label_41b150;
        case 0x41b154u: goto label_41b154;
        case 0x41b158u: goto label_41b158;
        case 0x41b15cu: goto label_41b15c;
        case 0x41b160u: goto label_41b160;
        case 0x41b164u: goto label_41b164;
        case 0x41b168u: goto label_41b168;
        case 0x41b16cu: goto label_41b16c;
        case 0x41b170u: goto label_41b170;
        case 0x41b174u: goto label_41b174;
        case 0x41b178u: goto label_41b178;
        case 0x41b17cu: goto label_41b17c;
        case 0x41b180u: goto label_41b180;
        case 0x41b184u: goto label_41b184;
        case 0x41b188u: goto label_41b188;
        case 0x41b18cu: goto label_41b18c;
        case 0x41b190u: goto label_41b190;
        case 0x41b194u: goto label_41b194;
        case 0x41b198u: goto label_41b198;
        case 0x41b19cu: goto label_41b19c;
        case 0x41b1a0u: goto label_41b1a0;
        case 0x41b1a4u: goto label_41b1a4;
        case 0x41b1a8u: goto label_41b1a8;
        case 0x41b1acu: goto label_41b1ac;
        case 0x41b1b0u: goto label_41b1b0;
        case 0x41b1b4u: goto label_41b1b4;
        case 0x41b1b8u: goto label_41b1b8;
        case 0x41b1bcu: goto label_41b1bc;
        case 0x41b1c0u: goto label_41b1c0;
        case 0x41b1c4u: goto label_41b1c4;
        case 0x41b1c8u: goto label_41b1c8;
        case 0x41b1ccu: goto label_41b1cc;
        case 0x41b1d0u: goto label_41b1d0;
        case 0x41b1d4u: goto label_41b1d4;
        case 0x41b1d8u: goto label_41b1d8;
        case 0x41b1dcu: goto label_41b1dc;
        case 0x41b1e0u: goto label_41b1e0;
        case 0x41b1e4u: goto label_41b1e4;
        case 0x41b1e8u: goto label_41b1e8;
        case 0x41b1ecu: goto label_41b1ec;
        case 0x41b1f0u: goto label_41b1f0;
        case 0x41b1f4u: goto label_41b1f4;
        case 0x41b1f8u: goto label_41b1f8;
        case 0x41b1fcu: goto label_41b1fc;
        case 0x41b200u: goto label_41b200;
        case 0x41b204u: goto label_41b204;
        case 0x41b208u: goto label_41b208;
        case 0x41b20cu: goto label_41b20c;
        case 0x41b210u: goto label_41b210;
        case 0x41b214u: goto label_41b214;
        case 0x41b218u: goto label_41b218;
        case 0x41b21cu: goto label_41b21c;
        case 0x41b220u: goto label_41b220;
        case 0x41b224u: goto label_41b224;
        case 0x41b228u: goto label_41b228;
        case 0x41b22cu: goto label_41b22c;
        case 0x41b230u: goto label_41b230;
        case 0x41b234u: goto label_41b234;
        case 0x41b238u: goto label_41b238;
        case 0x41b23cu: goto label_41b23c;
        case 0x41b240u: goto label_41b240;
        case 0x41b244u: goto label_41b244;
        case 0x41b248u: goto label_41b248;
        case 0x41b24cu: goto label_41b24c;
        case 0x41b250u: goto label_41b250;
        case 0x41b254u: goto label_41b254;
        case 0x41b258u: goto label_41b258;
        case 0x41b25cu: goto label_41b25c;
        case 0x41b260u: goto label_41b260;
        case 0x41b264u: goto label_41b264;
        case 0x41b268u: goto label_41b268;
        case 0x41b26cu: goto label_41b26c;
        case 0x41b270u: goto label_41b270;
        case 0x41b274u: goto label_41b274;
        case 0x41b278u: goto label_41b278;
        case 0x41b27cu: goto label_41b27c;
        case 0x41b280u: goto label_41b280;
        case 0x41b284u: goto label_41b284;
        case 0x41b288u: goto label_41b288;
        case 0x41b28cu: goto label_41b28c;
        case 0x41b290u: goto label_41b290;
        case 0x41b294u: goto label_41b294;
        case 0x41b298u: goto label_41b298;
        case 0x41b29cu: goto label_41b29c;
        case 0x41b2a0u: goto label_41b2a0;
        case 0x41b2a4u: goto label_41b2a4;
        case 0x41b2a8u: goto label_41b2a8;
        case 0x41b2acu: goto label_41b2ac;
        case 0x41b2b0u: goto label_41b2b0;
        case 0x41b2b4u: goto label_41b2b4;
        case 0x41b2b8u: goto label_41b2b8;
        case 0x41b2bcu: goto label_41b2bc;
        case 0x41b2c0u: goto label_41b2c0;
        case 0x41b2c4u: goto label_41b2c4;
        case 0x41b2c8u: goto label_41b2c8;
        case 0x41b2ccu: goto label_41b2cc;
        case 0x41b2d0u: goto label_41b2d0;
        case 0x41b2d4u: goto label_41b2d4;
        case 0x41b2d8u: goto label_41b2d8;
        case 0x41b2dcu: goto label_41b2dc;
        case 0x41b2e0u: goto label_41b2e0;
        case 0x41b2e4u: goto label_41b2e4;
        case 0x41b2e8u: goto label_41b2e8;
        case 0x41b2ecu: goto label_41b2ec;
        case 0x41b2f0u: goto label_41b2f0;
        case 0x41b2f4u: goto label_41b2f4;
        case 0x41b2f8u: goto label_41b2f8;
        case 0x41b2fcu: goto label_41b2fc;
        case 0x41b300u: goto label_41b300;
        case 0x41b304u: goto label_41b304;
        case 0x41b308u: goto label_41b308;
        case 0x41b30cu: goto label_41b30c;
        case 0x41b310u: goto label_41b310;
        case 0x41b314u: goto label_41b314;
        case 0x41b318u: goto label_41b318;
        case 0x41b31cu: goto label_41b31c;
        case 0x41b320u: goto label_41b320;
        case 0x41b324u: goto label_41b324;
        case 0x41b328u: goto label_41b328;
        case 0x41b32cu: goto label_41b32c;
        case 0x41b330u: goto label_41b330;
        case 0x41b334u: goto label_41b334;
        case 0x41b338u: goto label_41b338;
        case 0x41b33cu: goto label_41b33c;
        case 0x41b340u: goto label_41b340;
        case 0x41b344u: goto label_41b344;
        case 0x41b348u: goto label_41b348;
        case 0x41b34cu: goto label_41b34c;
        case 0x41b350u: goto label_41b350;
        case 0x41b354u: goto label_41b354;
        case 0x41b358u: goto label_41b358;
        case 0x41b35cu: goto label_41b35c;
        case 0x41b360u: goto label_41b360;
        case 0x41b364u: goto label_41b364;
        case 0x41b368u: goto label_41b368;
        case 0x41b36cu: goto label_41b36c;
        case 0x41b370u: goto label_41b370;
        case 0x41b374u: goto label_41b374;
        case 0x41b378u: goto label_41b378;
        case 0x41b37cu: goto label_41b37c;
        case 0x41b380u: goto label_41b380;
        case 0x41b384u: goto label_41b384;
        case 0x41b388u: goto label_41b388;
        case 0x41b38cu: goto label_41b38c;
        case 0x41b390u: goto label_41b390;
        case 0x41b394u: goto label_41b394;
        case 0x41b398u: goto label_41b398;
        case 0x41b39cu: goto label_41b39c;
        case 0x41b3a0u: goto label_41b3a0;
        case 0x41b3a4u: goto label_41b3a4;
        case 0x41b3a8u: goto label_41b3a8;
        case 0x41b3acu: goto label_41b3ac;
        case 0x41b3b0u: goto label_41b3b0;
        case 0x41b3b4u: goto label_41b3b4;
        case 0x41b3b8u: goto label_41b3b8;
        case 0x41b3bcu: goto label_41b3bc;
        case 0x41b3c0u: goto label_41b3c0;
        case 0x41b3c4u: goto label_41b3c4;
        case 0x41b3c8u: goto label_41b3c8;
        case 0x41b3ccu: goto label_41b3cc;
        case 0x41b3d0u: goto label_41b3d0;
        case 0x41b3d4u: goto label_41b3d4;
        case 0x41b3d8u: goto label_41b3d8;
        case 0x41b3dcu: goto label_41b3dc;
        case 0x41b3e0u: goto label_41b3e0;
        case 0x41b3e4u: goto label_41b3e4;
        case 0x41b3e8u: goto label_41b3e8;
        case 0x41b3ecu: goto label_41b3ec;
        case 0x41b3f0u: goto label_41b3f0;
        case 0x41b3f4u: goto label_41b3f4;
        case 0x41b3f8u: goto label_41b3f8;
        case 0x41b3fcu: goto label_41b3fc;
        case 0x41b400u: goto label_41b400;
        case 0x41b404u: goto label_41b404;
        case 0x41b408u: goto label_41b408;
        case 0x41b40cu: goto label_41b40c;
        case 0x41b410u: goto label_41b410;
        case 0x41b414u: goto label_41b414;
        case 0x41b418u: goto label_41b418;
        case 0x41b41cu: goto label_41b41c;
        case 0x41b420u: goto label_41b420;
        case 0x41b424u: goto label_41b424;
        case 0x41b428u: goto label_41b428;
        case 0x41b42cu: goto label_41b42c;
        case 0x41b430u: goto label_41b430;
        case 0x41b434u: goto label_41b434;
        case 0x41b438u: goto label_41b438;
        case 0x41b43cu: goto label_41b43c;
        case 0x41b440u: goto label_41b440;
        case 0x41b444u: goto label_41b444;
        case 0x41b448u: goto label_41b448;
        case 0x41b44cu: goto label_41b44c;
        case 0x41b450u: goto label_41b450;
        case 0x41b454u: goto label_41b454;
        case 0x41b458u: goto label_41b458;
        case 0x41b45cu: goto label_41b45c;
        case 0x41b460u: goto label_41b460;
        case 0x41b464u: goto label_41b464;
        case 0x41b468u: goto label_41b468;
        case 0x41b46cu: goto label_41b46c;
        case 0x41b470u: goto label_41b470;
        case 0x41b474u: goto label_41b474;
        case 0x41b478u: goto label_41b478;
        case 0x41b47cu: goto label_41b47c;
        case 0x41b480u: goto label_41b480;
        case 0x41b484u: goto label_41b484;
        case 0x41b488u: goto label_41b488;
        case 0x41b48cu: goto label_41b48c;
        case 0x41b490u: goto label_41b490;
        case 0x41b494u: goto label_41b494;
        case 0x41b498u: goto label_41b498;
        case 0x41b49cu: goto label_41b49c;
        case 0x41b4a0u: goto label_41b4a0;
        case 0x41b4a4u: goto label_41b4a4;
        case 0x41b4a8u: goto label_41b4a8;
        case 0x41b4acu: goto label_41b4ac;
        case 0x41b4b0u: goto label_41b4b0;
        case 0x41b4b4u: goto label_41b4b4;
        case 0x41b4b8u: goto label_41b4b8;
        case 0x41b4bcu: goto label_41b4bc;
        case 0x41b4c0u: goto label_41b4c0;
        case 0x41b4c4u: goto label_41b4c4;
        case 0x41b4c8u: goto label_41b4c8;
        case 0x41b4ccu: goto label_41b4cc;
        case 0x41b4d0u: goto label_41b4d0;
        case 0x41b4d4u: goto label_41b4d4;
        case 0x41b4d8u: goto label_41b4d8;
        case 0x41b4dcu: goto label_41b4dc;
        case 0x41b4e0u: goto label_41b4e0;
        case 0x41b4e4u: goto label_41b4e4;
        case 0x41b4e8u: goto label_41b4e8;
        case 0x41b4ecu: goto label_41b4ec;
        case 0x41b4f0u: goto label_41b4f0;
        case 0x41b4f4u: goto label_41b4f4;
        case 0x41b4f8u: goto label_41b4f8;
        case 0x41b4fcu: goto label_41b4fc;
        case 0x41b500u: goto label_41b500;
        case 0x41b504u: goto label_41b504;
        case 0x41b508u: goto label_41b508;
        case 0x41b50cu: goto label_41b50c;
        case 0x41b510u: goto label_41b510;
        case 0x41b514u: goto label_41b514;
        case 0x41b518u: goto label_41b518;
        case 0x41b51cu: goto label_41b51c;
        case 0x41b520u: goto label_41b520;
        case 0x41b524u: goto label_41b524;
        case 0x41b528u: goto label_41b528;
        case 0x41b52cu: goto label_41b52c;
        case 0x41b530u: goto label_41b530;
        case 0x41b534u: goto label_41b534;
        case 0x41b538u: goto label_41b538;
        case 0x41b53cu: goto label_41b53c;
        case 0x41b540u: goto label_41b540;
        case 0x41b544u: goto label_41b544;
        case 0x41b548u: goto label_41b548;
        case 0x41b54cu: goto label_41b54c;
        case 0x41b550u: goto label_41b550;
        case 0x41b554u: goto label_41b554;
        case 0x41b558u: goto label_41b558;
        case 0x41b55cu: goto label_41b55c;
        case 0x41b560u: goto label_41b560;
        case 0x41b564u: goto label_41b564;
        case 0x41b568u: goto label_41b568;
        case 0x41b56cu: goto label_41b56c;
        case 0x41b570u: goto label_41b570;
        case 0x41b574u: goto label_41b574;
        case 0x41b578u: goto label_41b578;
        case 0x41b57cu: goto label_41b57c;
        case 0x41b580u: goto label_41b580;
        case 0x41b584u: goto label_41b584;
        case 0x41b588u: goto label_41b588;
        case 0x41b58cu: goto label_41b58c;
        case 0x41b590u: goto label_41b590;
        case 0x41b594u: goto label_41b594;
        case 0x41b598u: goto label_41b598;
        case 0x41b59cu: goto label_41b59c;
        case 0x41b5a0u: goto label_41b5a0;
        case 0x41b5a4u: goto label_41b5a4;
        case 0x41b5a8u: goto label_41b5a8;
        case 0x41b5acu: goto label_41b5ac;
        case 0x41b5b0u: goto label_41b5b0;
        case 0x41b5b4u: goto label_41b5b4;
        case 0x41b5b8u: goto label_41b5b8;
        case 0x41b5bcu: goto label_41b5bc;
        case 0x41b5c0u: goto label_41b5c0;
        case 0x41b5c4u: goto label_41b5c4;
        case 0x41b5c8u: goto label_41b5c8;
        case 0x41b5ccu: goto label_41b5cc;
        case 0x41b5d0u: goto label_41b5d0;
        case 0x41b5d4u: goto label_41b5d4;
        case 0x41b5d8u: goto label_41b5d8;
        case 0x41b5dcu: goto label_41b5dc;
        case 0x41b5e0u: goto label_41b5e0;
        case 0x41b5e4u: goto label_41b5e4;
        case 0x41b5e8u: goto label_41b5e8;
        case 0x41b5ecu: goto label_41b5ec;
        case 0x41b5f0u: goto label_41b5f0;
        case 0x41b5f4u: goto label_41b5f4;
        case 0x41b5f8u: goto label_41b5f8;
        case 0x41b5fcu: goto label_41b5fc;
        case 0x41b600u: goto label_41b600;
        case 0x41b604u: goto label_41b604;
        case 0x41b608u: goto label_41b608;
        case 0x41b60cu: goto label_41b60c;
        case 0x41b610u: goto label_41b610;
        case 0x41b614u: goto label_41b614;
        case 0x41b618u: goto label_41b618;
        case 0x41b61cu: goto label_41b61c;
        case 0x41b620u: goto label_41b620;
        case 0x41b624u: goto label_41b624;
        case 0x41b628u: goto label_41b628;
        case 0x41b62cu: goto label_41b62c;
        case 0x41b630u: goto label_41b630;
        case 0x41b634u: goto label_41b634;
        case 0x41b638u: goto label_41b638;
        case 0x41b63cu: goto label_41b63c;
        case 0x41b640u: goto label_41b640;
        case 0x41b644u: goto label_41b644;
        case 0x41b648u: goto label_41b648;
        case 0x41b64cu: goto label_41b64c;
        case 0x41b650u: goto label_41b650;
        case 0x41b654u: goto label_41b654;
        case 0x41b658u: goto label_41b658;
        case 0x41b65cu: goto label_41b65c;
        case 0x41b660u: goto label_41b660;
        case 0x41b664u: goto label_41b664;
        case 0x41b668u: goto label_41b668;
        case 0x41b66cu: goto label_41b66c;
        case 0x41b670u: goto label_41b670;
        case 0x41b674u: goto label_41b674;
        case 0x41b678u: goto label_41b678;
        case 0x41b67cu: goto label_41b67c;
        case 0x41b680u: goto label_41b680;
        case 0x41b684u: goto label_41b684;
        case 0x41b688u: goto label_41b688;
        case 0x41b68cu: goto label_41b68c;
        case 0x41b690u: goto label_41b690;
        case 0x41b694u: goto label_41b694;
        case 0x41b698u: goto label_41b698;
        case 0x41b69cu: goto label_41b69c;
        case 0x41b6a0u: goto label_41b6a0;
        case 0x41b6a4u: goto label_41b6a4;
        case 0x41b6a8u: goto label_41b6a8;
        case 0x41b6acu: goto label_41b6ac;
        case 0x41b6b0u: goto label_41b6b0;
        case 0x41b6b4u: goto label_41b6b4;
        case 0x41b6b8u: goto label_41b6b8;
        case 0x41b6bcu: goto label_41b6bc;
        case 0x41b6c0u: goto label_41b6c0;
        case 0x41b6c4u: goto label_41b6c4;
        case 0x41b6c8u: goto label_41b6c8;
        case 0x41b6ccu: goto label_41b6cc;
        case 0x41b6d0u: goto label_41b6d0;
        case 0x41b6d4u: goto label_41b6d4;
        case 0x41b6d8u: goto label_41b6d8;
        case 0x41b6dcu: goto label_41b6dc;
        case 0x41b6e0u: goto label_41b6e0;
        case 0x41b6e4u: goto label_41b6e4;
        case 0x41b6e8u: goto label_41b6e8;
        case 0x41b6ecu: goto label_41b6ec;
        case 0x41b6f0u: goto label_41b6f0;
        case 0x41b6f4u: goto label_41b6f4;
        case 0x41b6f8u: goto label_41b6f8;
        case 0x41b6fcu: goto label_41b6fc;
        case 0x41b700u: goto label_41b700;
        case 0x41b704u: goto label_41b704;
        case 0x41b708u: goto label_41b708;
        case 0x41b70cu: goto label_41b70c;
        case 0x41b710u: goto label_41b710;
        case 0x41b714u: goto label_41b714;
        case 0x41b718u: goto label_41b718;
        case 0x41b71cu: goto label_41b71c;
        case 0x41b720u: goto label_41b720;
        case 0x41b724u: goto label_41b724;
        case 0x41b728u: goto label_41b728;
        case 0x41b72cu: goto label_41b72c;
        case 0x41b730u: goto label_41b730;
        case 0x41b734u: goto label_41b734;
        case 0x41b738u: goto label_41b738;
        case 0x41b73cu: goto label_41b73c;
        case 0x41b740u: goto label_41b740;
        case 0x41b744u: goto label_41b744;
        case 0x41b748u: goto label_41b748;
        case 0x41b74cu: goto label_41b74c;
        case 0x41b750u: goto label_41b750;
        case 0x41b754u: goto label_41b754;
        case 0x41b758u: goto label_41b758;
        case 0x41b75cu: goto label_41b75c;
        case 0x41b760u: goto label_41b760;
        case 0x41b764u: goto label_41b764;
        case 0x41b768u: goto label_41b768;
        case 0x41b76cu: goto label_41b76c;
        case 0x41b770u: goto label_41b770;
        case 0x41b774u: goto label_41b774;
        case 0x41b778u: goto label_41b778;
        case 0x41b77cu: goto label_41b77c;
        case 0x41b780u: goto label_41b780;
        case 0x41b784u: goto label_41b784;
        case 0x41b788u: goto label_41b788;
        case 0x41b78cu: goto label_41b78c;
        case 0x41b790u: goto label_41b790;
        case 0x41b794u: goto label_41b794;
        case 0x41b798u: goto label_41b798;
        case 0x41b79cu: goto label_41b79c;
        case 0x41b7a0u: goto label_41b7a0;
        case 0x41b7a4u: goto label_41b7a4;
        case 0x41b7a8u: goto label_41b7a8;
        case 0x41b7acu: goto label_41b7ac;
        case 0x41b7b0u: goto label_41b7b0;
        case 0x41b7b4u: goto label_41b7b4;
        case 0x41b7b8u: goto label_41b7b8;
        case 0x41b7bcu: goto label_41b7bc;
        case 0x41b7c0u: goto label_41b7c0;
        case 0x41b7c4u: goto label_41b7c4;
        case 0x41b7c8u: goto label_41b7c8;
        case 0x41b7ccu: goto label_41b7cc;
        case 0x41b7d0u: goto label_41b7d0;
        case 0x41b7d4u: goto label_41b7d4;
        case 0x41b7d8u: goto label_41b7d8;
        case 0x41b7dcu: goto label_41b7dc;
        case 0x41b7e0u: goto label_41b7e0;
        case 0x41b7e4u: goto label_41b7e4;
        case 0x41b7e8u: goto label_41b7e8;
        case 0x41b7ecu: goto label_41b7ec;
        default: break;
    }

    ctx->pc = 0x41aa00u;

label_41aa00:
    // 0x41aa00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x41aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_41aa04:
    // 0x41aa04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41aa08:
    // 0x41aa08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41aa0c:
    // 0x41aa0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41aa10:
    // 0x41aa10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41aa14:
    // 0x41aa14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41aa14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41aa18:
    // 0x41aa18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41aa1c:
    // 0x41aa1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41aa1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_41aa20:
    // 0x41aa20: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x41aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_41aa24:
    // 0x41aa24: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_41aa28:
    if (ctx->pc == 0x41AA28u) {
        ctx->pc = 0x41AA28u;
            // 0x41aa28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41AA2Cu;
        goto label_41aa2c;
    }
    ctx->pc = 0x41AA24u;
    {
        const bool branch_taken_0x41aa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AA24u;
            // 0x41aa28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aa24) {
            ctx->pc = 0x41AB78u;
            goto label_41ab78;
        }
    }
    ctx->pc = 0x41AA2Cu;
label_41aa2c:
    // 0x41aa2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41aa30:
    // 0x41aa30: 0x90637320  lbu         $v1, 0x7320($v1)
    ctx->pc = 0x41aa30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29472)));
label_41aa34:
    // 0x41aa34: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x41aa34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41aa38:
    // 0x41aa38: 0x50200050  beql        $at, $zero, . + 4 + (0x50 << 2)
label_41aa3c:
    if (ctx->pc == 0x41AA3Cu) {
        ctx->pc = 0x41AA3Cu;
            // 0x41aa3c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x41AA40u;
        goto label_41aa40;
    }
    ctx->pc = 0x41AA38u;
    {
        const bool branch_taken_0x41aa38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41aa38) {
            ctx->pc = 0x41AA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41AA38u;
            // 0x41aa3c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41AB7Cu;
            goto label_41ab7c;
        }
    }
    ctx->pc = 0x41AA40u;
label_41aa40:
    // 0x41aa40: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x41aa40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_41aa44:
    // 0x41aa44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41aa48:
    // 0x41aa48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41aa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41aa4c:
    // 0x41aa4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41aa4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41aa50:
    // 0x41aa50: 0xc08914c  jal         func_224530
label_41aa54:
    if (ctx->pc == 0x41AA54u) {
        ctx->pc = 0x41AA54u;
            // 0x41aa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41AA58u;
        goto label_41aa58;
    }
    ctx->pc = 0x41AA50u;
    SET_GPR_U32(ctx, 31, 0x41AA58u);
    ctx->pc = 0x41AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AA50u;
            // 0x41aa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA58u; }
        if (ctx->pc != 0x41AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA58u; }
        if (ctx->pc != 0x41AA58u) { return; }
    }
    ctx->pc = 0x41AA58u;
label_41aa58:
    // 0x41aa58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x41aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41aa5c:
    // 0x41aa5c: 0xc04f26c  jal         func_13C9B0
label_41aa60:
    if (ctx->pc == 0x41AA60u) {
        ctx->pc = 0x41AA60u;
            // 0x41aa60: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x41AA64u;
        goto label_41aa64;
    }
    ctx->pc = 0x41AA5Cu;
    SET_GPR_U32(ctx, 31, 0x41AA64u);
    ctx->pc = 0x41AA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AA5Cu;
            // 0x41aa60: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA64u; }
        if (ctx->pc != 0x41AA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA64u; }
        if (ctx->pc != 0x41AA64u) { return; }
    }
    ctx->pc = 0x41AA64u;
label_41aa64:
    // 0x41aa64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41aa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41aa68:
    // 0x41aa68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x41aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_41aa6c:
    // 0x41aa6c: 0xc04cca0  jal         func_133280
label_41aa70:
    if (ctx->pc == 0x41AA70u) {
        ctx->pc = 0x41AA70u;
            // 0x41aa70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41AA74u;
        goto label_41aa74;
    }
    ctx->pc = 0x41AA6Cu;
    SET_GPR_U32(ctx, 31, 0x41AA74u);
    ctx->pc = 0x41AA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AA6Cu;
            // 0x41aa70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA74u; }
        if (ctx->pc != 0x41AA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AA74u; }
        if (ctx->pc != 0x41AA74u) { return; }
    }
    ctx->pc = 0x41AA74u;
label_41aa74:
    // 0x41aa74: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x41aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_41aa78:
    // 0x41aa78: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x41aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_41aa7c:
    // 0x41aa7c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x41aa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_41aa80:
    // 0x41aa80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41aa84:
    // 0x41aa84: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x41aa84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_41aa88:
    // 0x41aa88: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x41aa88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41aa8c:
    // 0x41aa8c: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x41aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_41aa90:
    // 0x41aa90: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x41aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41aa94:
    // 0x41aa94: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x41aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41aa98:
    // 0x41aa98: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x41aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41aa9c:
    // 0x41aa9c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x41aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41aaa0:
    // 0x41aaa0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x41aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_41aaa4:
    // 0x41aaa4: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x41aaa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_41aaa8:
    // 0x41aaa8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x41aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_41aaac:
    // 0x41aaac: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x41aaacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_41aab0:
    // 0x41aab0: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x41aab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_41aab4:
    // 0x41aab4: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x41aab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_41aab8:
    // 0x41aab8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x41aab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_41aabc:
    // 0x41aabc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x41aabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_41aac0:
    // 0x41aac0: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x41aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41aac4:
    // 0x41aac4: 0xc089638  jal         func_2258E0
label_41aac8:
    if (ctx->pc == 0x41AAC8u) {
        ctx->pc = 0x41AAC8u;
            // 0x41aac8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x41AACCu;
        goto label_41aacc;
    }
    ctx->pc = 0x41AAC4u;
    SET_GPR_U32(ctx, 31, 0x41AACCu);
    ctx->pc = 0x41AAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AAC4u;
            // 0x41aac8: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AACCu; }
        if (ctx->pc != 0x41AACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AACCu; }
        if (ctx->pc != 0x41AACCu) { return; }
    }
    ctx->pc = 0x41AACCu;
label_41aacc:
    // 0x41aacc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41aad0:
    // 0x41aad0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_41aad4:
    // 0x41aad4: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x41aad4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_41aad8:
    // 0x41aad8: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x41aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_41aadc:
    // 0x41aadc: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x41aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41aae0:
    // 0x41aae0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x41aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41aae4:
    // 0x41aae4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x41aae4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_41aae8:
    // 0x41aae8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x41aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41aaec:
    // 0x41aaec: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x41aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41aaf0:
    // 0x41aaf0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x41aaf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_41aaf4:
    // 0x41aaf4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x41aaf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_41aaf8:
    // 0x41aaf8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x41aaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_41aafc:
    // 0x41aafc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x41aafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_41ab00:
    // 0x41ab00: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x41ab00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_41ab04:
    // 0x41ab04: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x41ab04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_41ab08:
    // 0x41ab08: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x41ab08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_41ab0c:
    // 0x41ab0c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x41ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_41ab10:
    // 0x41ab10: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x41ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41ab14:
    // 0x41ab14: 0xc088b74  jal         func_222DD0
label_41ab18:
    if (ctx->pc == 0x41AB18u) {
        ctx->pc = 0x41AB18u;
            // 0x41ab18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41AB1Cu;
        goto label_41ab1c;
    }
    ctx->pc = 0x41AB14u;
    SET_GPR_U32(ctx, 31, 0x41AB1Cu);
    ctx->pc = 0x41AB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AB14u;
            // 0x41ab18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AB1Cu; }
        if (ctx->pc != 0x41AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AB1Cu; }
        if (ctx->pc != 0x41AB1Cu) { return; }
    }
    ctx->pc = 0x41AB1Cu;
label_41ab1c:
    // 0x41ab1c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41ab1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41ab20:
    // 0x41ab20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41ab20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_41ab24:
    // 0x41ab24: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41ab28:
    // 0x41ab28: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x41ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41ab2c:
    // 0x41ab2c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x41ab2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_41ab30:
    // 0x41ab30: 0x320f809  jalr        $t9
label_41ab34:
    if (ctx->pc == 0x41AB34u) {
        ctx->pc = 0x41AB34u;
            // 0x41ab34: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41AB38u;
        goto label_41ab38;
    }
    ctx->pc = 0x41AB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41AB38u);
        ctx->pc = 0x41AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AB30u;
            // 0x41ab34: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41AB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41AB38u; }
            if (ctx->pc != 0x41AB38u) { return; }
        }
        }
    }
    ctx->pc = 0x41AB38u;
label_41ab38:
    // 0x41ab38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ab3c:
    // 0x41ab3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ab40:
    // 0x41ab40: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x41ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_41ab44:
    // 0x41ab44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41ab48:
    // 0x41ab48: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x41ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ab4c:
    // 0x41ab4c: 0xc0e32a4  jal         func_38CA90
label_41ab50:
    if (ctx->pc == 0x41AB50u) {
        ctx->pc = 0x41AB50u;
            // 0x41ab50: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->pc = 0x41AB54u;
        goto label_41ab54;
    }
    ctx->pc = 0x41AB4Cu;
    SET_GPR_U32(ctx, 31, 0x41AB54u);
    ctx->pc = 0x41AB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AB4Cu;
            // 0x41ab50: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AB54u; }
        if (ctx->pc != 0x41AB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AB54u; }
        if (ctx->pc != 0x41AB54u) { return; }
    }
    ctx->pc = 0x41AB54u;
label_41ab54:
    // 0x41ab54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ab58:
    // 0x41ab58: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x41ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_41ab5c:
    // 0x41ab5c: 0xae4400b4  sw          $a0, 0xB4($s2)
    ctx->pc = 0x41ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 4));
label_41ab60:
    // 0x41ab60: 0xa243004c  sb          $v1, 0x4C($s2)
    ctx->pc = 0x41ab60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
label_41ab64:
    // 0x41ab64: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41ab68:
    // 0x41ab68: 0x90847320  lbu         $a0, 0x7320($a0)
    ctx->pc = 0x41ab68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29472)));
label_41ab6c:
    // 0x41ab6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41ab70:
    // 0x41ab70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_41ab74:
    // 0x41ab74: 0xa0647320  sb          $a0, 0x7320($v1)
    ctx->pc = 0x41ab74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29472), (uint8_t)GPR_U32(ctx, 4));
label_41ab78:
    // 0x41ab78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_41ab7c:
    // 0x41ab7c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41ab80:
    // 0x41ab80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41ab80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41ab84:
    // 0x41ab84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41ab84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41ab88:
    // 0x41ab88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41ab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41ab8c:
    // 0x41ab8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41ab8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41ab90:
    // 0x41ab90: 0x3e00008  jr          $ra
label_41ab94:
    if (ctx->pc == 0x41AB94u) {
        ctx->pc = 0x41AB94u;
            // 0x41ab94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41AB98u;
        goto label_41ab98;
    }
    ctx->pc = 0x41AB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AB90u;
            // 0x41ab94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41AB98u;
label_41ab98:
    // 0x41ab98: 0x0  nop
    ctx->pc = 0x41ab98u;
    // NOP
label_41ab9c:
    // 0x41ab9c: 0x0  nop
    ctx->pc = 0x41ab9cu;
    // NOP
label_41aba0:
    // 0x41aba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41aba4:
    // 0x41aba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41aba8:
    // 0x41aba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41abac:
    // 0x41abac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41abb0:
    // 0x41abb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41abb4:
    // 0x41abb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41abb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41abb8:
    // 0x41abb8: 0x8c8400ac  lw          $a0, 0xAC($a0)
    ctx->pc = 0x41abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_41abbc:
    // 0x41abbc: 0x54830043  bnel        $a0, $v1, . + 4 + (0x43 << 2)
label_41abc0:
    if (ctx->pc == 0x41ABC0u) {
        ctx->pc = 0x41ABC0u;
            // 0x41abc0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x41ABC4u;
        goto label_41abc4;
    }
    ctx->pc = 0x41ABBCu;
    {
        const bool branch_taken_0x41abbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x41abbc) {
            ctx->pc = 0x41ABC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41ABBCu;
            // 0x41abc0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41ACCCu;
            goto label_41accc;
        }
    }
    ctx->pc = 0x41ABC4u;
label_41abc4:
    // 0x41abc4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x41abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_41abc8:
    // 0x41abc8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x41abc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41abcc:
    // 0x41abcc: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
label_41abd0:
    if (ctx->pc == 0x41ABD0u) {
        ctx->pc = 0x41ABD4u;
        goto label_41abd4;
    }
    ctx->pc = 0x41ABCCu;
    {
        const bool branch_taken_0x41abcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x41abcc) {
            ctx->pc = 0x41ACC8u;
            goto label_41acc8;
        }
    }
    ctx->pc = 0x41ABD4u;
label_41abd4:
    // 0x41abd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41abd8:
    // 0x41abd8: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x41abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_41abdc:
    // 0x41abdc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x41abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_41abe0:
    // 0x41abe0: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x41abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_41abe4:
    // 0x41abe4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x41abe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_41abe8:
    // 0x41abe8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41abec:
    // 0x41abec: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_41abf0:
    if (ctx->pc == 0x41ABF0u) {
        ctx->pc = 0x41ABF0u;
            // 0x41abf0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x41ABF4u;
        goto label_41abf4;
    }
    ctx->pc = 0x41ABECu;
    {
        const bool branch_taken_0x41abec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ABF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41ABECu;
            // 0x41abf0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41abec) {
            ctx->pc = 0x41ACB8u;
            goto label_41acb8;
        }
    }
    ctx->pc = 0x41ABF4u;
label_41abf4:
    // 0x41abf4: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x41abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41abf8:
    // 0x41abf8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x41abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41abfc:
    // 0x41abfc: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x41abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41ac00:
    // 0x41ac00: 0xc04cbd8  jal         func_132F60
label_41ac04:
    if (ctx->pc == 0x41AC04u) {
        ctx->pc = 0x41AC04u;
            // 0x41ac04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41AC08u;
        goto label_41ac08;
    }
    ctx->pc = 0x41AC00u;
    SET_GPR_U32(ctx, 31, 0x41AC08u);
    ctx->pc = 0x41AC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC00u;
            // 0x41ac04: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC08u; }
        if (ctx->pc != 0x41AC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC08u; }
        if (ctx->pc != 0x41AC08u) { return; }
    }
    ctx->pc = 0x41AC08u;
label_41ac08:
    // 0x41ac08: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
label_41ac0c:
    if (ctx->pc == 0x41AC0Cu) {
        ctx->pc = 0x41AC0Cu;
            // 0x41ac0c: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x41AC10u;
        goto label_41ac10;
    }
    ctx->pc = 0x41AC08u;
    {
        const bool branch_taken_0x41ac08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ac08) {
            ctx->pc = 0x41AC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC08u;
            // 0x41ac0c: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41AC3Cu;
            goto label_41ac3c;
        }
    }
    ctx->pc = 0x41AC10u;
label_41ac10:
    // 0x41ac10: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x41ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ac14:
    // 0x41ac14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ac18:
    // 0x41ac18: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x41ac18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_41ac1c:
    // 0x41ac1c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x41ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_41ac20:
    // 0x41ac20: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x41ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41ac24:
    // 0x41ac24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41ac28:
    // 0x41ac28: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x41ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41ac2c:
    // 0x41ac2c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x41ac2cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_41ac30:
    // 0x41ac30: 0xc0bafb8  jal         func_2EBEE0
label_41ac34:
    if (ctx->pc == 0x41AC34u) {
        ctx->pc = 0x41AC34u;
            // 0x41ac34: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x41AC38u;
        goto label_41ac38;
    }
    ctx->pc = 0x41AC30u;
    SET_GPR_U32(ctx, 31, 0x41AC38u);
    ctx->pc = 0x41AC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC30u;
            // 0x41ac34: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC38u; }
        if (ctx->pc != 0x41AC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC38u; }
        if (ctx->pc != 0x41AC38u) { return; }
    }
    ctx->pc = 0x41AC38u;
label_41ac38:
    // 0x41ac38: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x41ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ac3c:
    // 0x41ac3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ac40:
    // 0x41ac40: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x41ac40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_41ac44:
    // 0x41ac44: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x41ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_41ac48:
    // 0x41ac48: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x41ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41ac4c:
    // 0x41ac4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41ac50:
    // 0x41ac50: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x41ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41ac54:
    // 0x41ac54: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x41ac54u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_41ac58:
    // 0x41ac58: 0xc0bafb8  jal         func_2EBEE0
label_41ac5c:
    if (ctx->pc == 0x41AC5Cu) {
        ctx->pc = 0x41AC5Cu;
            // 0x41ac5c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x41AC60u;
        goto label_41ac60;
    }
    ctx->pc = 0x41AC58u;
    SET_GPR_U32(ctx, 31, 0x41AC60u);
    ctx->pc = 0x41AC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC58u;
            // 0x41ac5c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC60u; }
        if (ctx->pc != 0x41AC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC60u; }
        if (ctx->pc != 0x41AC60u) { return; }
    }
    ctx->pc = 0x41AC60u;
label_41ac60:
    // 0x41ac60: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x41ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ac64:
    // 0x41ac64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ac68:
    // 0x41ac68: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x41ac68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_41ac6c:
    // 0x41ac6c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x41ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_41ac70:
    // 0x41ac70: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x41ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41ac74:
    // 0x41ac74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41ac78:
    // 0x41ac78: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x41ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41ac7c:
    // 0x41ac7c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x41ac7cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_41ac80:
    // 0x41ac80: 0xc0bafb8  jal         func_2EBEE0
label_41ac84:
    if (ctx->pc == 0x41AC84u) {
        ctx->pc = 0x41AC84u;
            // 0x41ac84: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x41AC88u;
        goto label_41ac88;
    }
    ctx->pc = 0x41AC80u;
    SET_GPR_U32(ctx, 31, 0x41AC88u);
    ctx->pc = 0x41AC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC80u;
            // 0x41ac84: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC88u; }
        if (ctx->pc != 0x41AC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AC88u; }
        if (ctx->pc != 0x41AC88u) { return; }
    }
    ctx->pc = 0x41AC88u;
label_41ac88:
    // 0x41ac88: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
label_41ac8c:
    if (ctx->pc == 0x41AC8Cu) {
        ctx->pc = 0x41AC8Cu;
            // 0x41ac8c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x41AC90u;
        goto label_41ac90;
    }
    ctx->pc = 0x41AC88u;
    {
        const bool branch_taken_0x41ac88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ac88) {
            ctx->pc = 0x41AC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41AC88u;
            // 0x41ac8c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41ACBCu;
            goto label_41acbc;
        }
    }
    ctx->pc = 0x41AC90u;
label_41ac90:
    // 0x41ac90: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x41ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ac94:
    // 0x41ac94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ac98:
    // 0x41ac98: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x41ac98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_41ac9c:
    // 0x41ac9c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x41ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_41aca0:
    // 0x41aca0: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x41aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41aca4:
    // 0x41aca4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41aca8:
    // 0x41aca8: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x41aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41acac:
    // 0x41acac: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x41acacu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_41acb0:
    // 0x41acb0: 0xc0bafb8  jal         func_2EBEE0
label_41acb4:
    if (ctx->pc == 0x41ACB4u) {
        ctx->pc = 0x41ACB4u;
            // 0x41acb4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x41ACB8u;
        goto label_41acb8;
    }
    ctx->pc = 0x41ACB0u;
    SET_GPR_U32(ctx, 31, 0x41ACB8u);
    ctx->pc = 0x41ACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ACB0u;
            // 0x41acb4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACB8u; }
        if (ctx->pc != 0x41ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACB8u; }
        if (ctx->pc != 0x41ACB8u) { return; }
    }
    ctx->pc = 0x41ACB8u;
label_41acb8:
    // 0x41acb8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x41acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_41acbc:
    // 0x41acbc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x41acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_41acc0:
    // 0x41acc0: 0xc122d2c  jal         func_48B4B0
label_41acc4:
    if (ctx->pc == 0x41ACC4u) {
        ctx->pc = 0x41ACC4u;
            // 0x41acc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41ACC8u;
        goto label_41acc8;
    }
    ctx->pc = 0x41ACC0u;
    SET_GPR_U32(ctx, 31, 0x41ACC8u);
    ctx->pc = 0x41ACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ACC0u;
            // 0x41acc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACC8u; }
        if (ctx->pc != 0x41ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACC8u; }
        if (ctx->pc != 0x41ACC8u) { return; }
    }
    ctx->pc = 0x41ACC8u;
label_41acc8:
    // 0x41acc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41acc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41accc:
    // 0x41accc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41acccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41acd0:
    // 0x41acd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41acd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41acd4:
    // 0x41acd4: 0x3e00008  jr          $ra
label_41acd8:
    if (ctx->pc == 0x41ACD8u) {
        ctx->pc = 0x41ACD8u;
            // 0x41acd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x41ACDCu;
        goto label_41acdc;
    }
    ctx->pc = 0x41ACD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41ACD4u;
            // 0x41acd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41ACDCu;
label_41acdc:
    // 0x41acdc: 0x0  nop
    ctx->pc = 0x41acdcu;
    // NOP
label_41ace0:
    // 0x41ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41ace4:
    // 0x41ace4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ace8:
    // 0x41ace8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41ace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41acec:
    // 0x41acec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41acf0:
    // 0x41acf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41acf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41acf4:
    // 0x41acf4: 0xc0ba938  jal         func_2EA4E0
label_41acf8:
    if (ctx->pc == 0x41ACF8u) {
        ctx->pc = 0x41ACF8u;
            // 0x41acf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x41ACFCu;
        goto label_41acfc;
    }
    ctx->pc = 0x41ACF4u;
    SET_GPR_U32(ctx, 31, 0x41ACFCu);
    ctx->pc = 0x41ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ACF4u;
            // 0x41acf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACFCu; }
        if (ctx->pc != 0x41ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ACFCu; }
        if (ctx->pc != 0x41ACFCu) { return; }
    }
    ctx->pc = 0x41ACFCu;
label_41acfc:
    // 0x41acfc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x41acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_41ad00:
    // 0x41ad00: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x41ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_41ad04:
    // 0x41ad04: 0xc122d2c  jal         func_48B4B0
label_41ad08:
    if (ctx->pc == 0x41AD08u) {
        ctx->pc = 0x41AD08u;
            // 0x41ad08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41AD0Cu;
        goto label_41ad0c;
    }
    ctx->pc = 0x41AD04u;
    SET_GPR_U32(ctx, 31, 0x41AD0Cu);
    ctx->pc = 0x41AD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD04u;
            // 0x41ad08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AD0Cu; }
        if (ctx->pc != 0x41AD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AD0Cu; }
        if (ctx->pc != 0x41AD0Cu) { return; }
    }
    ctx->pc = 0x41AD0Cu;
label_41ad0c:
    // 0x41ad0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41ad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41ad10:
    // 0x41ad10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ad10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41ad14:
    // 0x41ad14: 0x3e00008  jr          $ra
label_41ad18:
    if (ctx->pc == 0x41AD18u) {
        ctx->pc = 0x41AD18u;
            // 0x41ad18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41AD1Cu;
        goto label_41ad1c;
    }
    ctx->pc = 0x41AD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD14u;
            // 0x41ad18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41AD1Cu;
label_41ad1c:
    // 0x41ad1c: 0x0  nop
    ctx->pc = 0x41ad1cu;
    // NOP
label_41ad20:
    // 0x41ad20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41ad24:
    // 0x41ad24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41ad28:
    // 0x41ad28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41ad2c:
    // 0x41ad2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41ad2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ad30:
    // 0x41ad30: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x41ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_41ad34:
    // 0x41ad34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41ad38:
    if (ctx->pc == 0x41AD38u) {
        ctx->pc = 0x41AD38u;
            // 0x41ad38: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x41AD3Cu;
        goto label_41ad3c;
    }
    ctx->pc = 0x41AD34u;
    {
        const bool branch_taken_0x41ad34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ad34) {
            ctx->pc = 0x41AD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD34u;
            // 0x41ad38: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41AD50u;
            goto label_41ad50;
        }
    }
    ctx->pc = 0x41AD3Cu;
label_41ad3c:
    // 0x41ad3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41ad3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41ad40:
    // 0x41ad40: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41ad40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41ad44:
    // 0x41ad44: 0x320f809  jalr        $t9
label_41ad48:
    if (ctx->pc == 0x41AD48u) {
        ctx->pc = 0x41AD48u;
            // 0x41ad48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41AD4Cu;
        goto label_41ad4c;
    }
    ctx->pc = 0x41AD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41AD4Cu);
        ctx->pc = 0x41AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD44u;
            // 0x41ad48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41AD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41AD4Cu; }
            if (ctx->pc != 0x41AD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41AD4Cu;
label_41ad4c:
    // 0x41ad4c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x41ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_41ad50:
    // 0x41ad50: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x41ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41ad54:
    // 0x41ad54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41ad58:
    if (ctx->pc == 0x41AD58u) {
        ctx->pc = 0x41AD58u;
            // 0x41ad58: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x41AD5Cu;
        goto label_41ad5c;
    }
    ctx->pc = 0x41AD54u;
    {
        const bool branch_taken_0x41ad54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ad54) {
            ctx->pc = 0x41AD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD54u;
            // 0x41ad58: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41AD70u;
            goto label_41ad70;
        }
    }
    ctx->pc = 0x41AD5Cu;
label_41ad5c:
    // 0x41ad5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41ad5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41ad60:
    // 0x41ad60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41ad60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41ad64:
    // 0x41ad64: 0x320f809  jalr        $t9
label_41ad68:
    if (ctx->pc == 0x41AD68u) {
        ctx->pc = 0x41AD68u;
            // 0x41ad68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41AD6Cu;
        goto label_41ad6c;
    }
    ctx->pc = 0x41AD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41AD6Cu);
        ctx->pc = 0x41AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD64u;
            // 0x41ad68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41AD6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41AD6Cu; }
            if (ctx->pc != 0x41AD6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41AD6Cu;
label_41ad6c:
    // 0x41ad6c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x41ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_41ad70:
    // 0x41ad70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41ad74:
    // 0x41ad74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41ad78:
    // 0x41ad78: 0x3e00008  jr          $ra
label_41ad7c:
    if (ctx->pc == 0x41AD7Cu) {
        ctx->pc = 0x41AD7Cu;
            // 0x41ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41AD80u;
        goto label_41ad80;
    }
    ctx->pc = 0x41AD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD78u;
            // 0x41ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41AD80u;
label_41ad80:
    // 0x41ad80: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x41ad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_41ad84:
    // 0x41ad84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41ad88:
    // 0x41ad88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41ad8c:
    // 0x41ad8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41ad90:
    // 0x41ad90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41ad90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ad94:
    // 0x41ad94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41ad98:
    // 0x41ad98: 0xc0892d0  jal         func_224B40
label_41ad9c:
    if (ctx->pc == 0x41AD9Cu) {
        ctx->pc = 0x41AD9Cu;
            // 0x41ad9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x41ADA0u;
        goto label_41ada0;
    }
    ctx->pc = 0x41AD98u;
    SET_GPR_U32(ctx, 31, 0x41ADA0u);
    ctx->pc = 0x41AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AD98u;
            // 0x41ad9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADA0u; }
        if (ctx->pc != 0x41ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADA0u; }
        if (ctx->pc != 0x41ADA0u) { return; }
    }
    ctx->pc = 0x41ADA0u;
label_41ada0:
    // 0x41ada0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41ada4:
    // 0x41ada4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x41ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_41ada8:
    // 0x41ada8: 0x8c427328  lw          $v0, 0x7328($v0)
    ctx->pc = 0x41ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29480)));
label_41adac:
    // 0x41adac: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x41adacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_41adb0:
    // 0x41adb0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x41adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_41adb4:
    // 0x41adb4: 0xc0b6e68  jal         func_2DB9A0
label_41adb8:
    if (ctx->pc == 0x41ADB8u) {
        ctx->pc = 0x41ADB8u;
            // 0x41adb8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x41ADBCu;
        goto label_41adbc;
    }
    ctx->pc = 0x41ADB4u;
    SET_GPR_U32(ctx, 31, 0x41ADBCu);
    ctx->pc = 0x41ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ADB4u;
            // 0x41adb8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADBCu; }
        if (ctx->pc != 0x41ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADBCu; }
        if (ctx->pc != 0x41ADBCu) { return; }
    }
    ctx->pc = 0x41ADBCu;
label_41adbc:
    // 0x41adbc: 0xc0b6dac  jal         func_2DB6B0
label_41adc0:
    if (ctx->pc == 0x41ADC0u) {
        ctx->pc = 0x41ADC0u;
            // 0x41adc0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41ADC4u;
        goto label_41adc4;
    }
    ctx->pc = 0x41ADBCu;
    SET_GPR_U32(ctx, 31, 0x41ADC4u);
    ctx->pc = 0x41ADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ADBCu;
            // 0x41adc0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADC4u; }
        if (ctx->pc != 0x41ADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADC4u; }
        if (ctx->pc != 0x41ADC4u) { return; }
    }
    ctx->pc = 0x41ADC4u;
label_41adc4:
    // 0x41adc4: 0xc0cac94  jal         func_32B250
label_41adc8:
    if (ctx->pc == 0x41ADC8u) {
        ctx->pc = 0x41ADC8u;
            // 0x41adc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41ADCCu;
        goto label_41adcc;
    }
    ctx->pc = 0x41ADC4u;
    SET_GPR_U32(ctx, 31, 0x41ADCCu);
    ctx->pc = 0x41ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ADC4u;
            // 0x41adc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADCCu; }
        if (ctx->pc != 0x41ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADCCu; }
        if (ctx->pc != 0x41ADCCu) { return; }
    }
    ctx->pc = 0x41ADCCu;
label_41adcc:
    // 0x41adcc: 0xc0cac84  jal         func_32B210
label_41add0:
    if (ctx->pc == 0x41ADD0u) {
        ctx->pc = 0x41ADD0u;
            // 0x41add0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41ADD4u;
        goto label_41add4;
    }
    ctx->pc = 0x41ADCCu;
    SET_GPR_U32(ctx, 31, 0x41ADD4u);
    ctx->pc = 0x41ADD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ADCCu;
            // 0x41add0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADD4u; }
        if (ctx->pc != 0x41ADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADD4u; }
        if (ctx->pc != 0x41ADD4u) { return; }
    }
    ctx->pc = 0x41ADD4u;
label_41add4:
    // 0x41add4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x41add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_41add8:
    // 0x41add8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x41add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_41addc:
    // 0x41addc: 0xc44cc928  lwc1        $f12, -0x36D8($v0)
    ctx->pc = 0x41addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ade0:
    // 0x41ade0: 0xc0a5a68  jal         func_2969A0
label_41ade4:
    if (ctx->pc == 0x41ADE4u) {
        ctx->pc = 0x41ADE4u;
            // 0x41ade4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41ADE8u;
        goto label_41ade8;
    }
    ctx->pc = 0x41ADE0u;
    SET_GPR_U32(ctx, 31, 0x41ADE8u);
    ctx->pc = 0x41ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ADE0u;
            // 0x41ade4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADE8u; }
        if (ctx->pc != 0x41ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ADE8u; }
        if (ctx->pc != 0x41ADE8u) { return; }
    }
    ctx->pc = 0x41ADE8u;
label_41ade8:
    // 0x41ade8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41adec:
    // 0x41adec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x41adecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41adf0:
    // 0x41adf0: 0x8c437328  lw          $v1, 0x7328($v0)
    ctx->pc = 0x41adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29480)));
label_41adf4:
    // 0x41adf4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x41adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41adf8:
    // 0x41adf8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x41adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41adfc:
    // 0x41adfc: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x41adfcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
label_41ae00:
    // 0x41ae00: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x41ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ae04:
    // 0x41ae04: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x41ae04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41ae08:
    // 0x41ae08: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x41ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_41ae0c:
    // 0x41ae0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x41ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_41ae10:
    // 0x41ae10: 0x34480020  ori         $t0, $v0, 0x20
    ctx->pc = 0x41ae10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_41ae14:
    // 0x41ae14: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x41ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41ae18:
    // 0x41ae18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x41ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_41ae1c:
    // 0x41ae1c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x41ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_41ae20:
    // 0x41ae20: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x41ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_41ae24:
    // 0x41ae24: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x41ae24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_41ae28:
    // 0x41ae28: 0xc62b0018  lwc1        $f11, 0x18($s1)
    ctx->pc = 0x41ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_41ae2c:
    // 0x41ae2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x41ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_41ae30:
    // 0x41ae30: 0xc62a0014  lwc1        $f10, 0x14($s1)
    ctx->pc = 0x41ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_41ae34:
    // 0x41ae34: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x41ae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_41ae38:
    // 0x41ae38: 0xc6290010  lwc1        $f9, 0x10($s1)
    ctx->pc = 0x41ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_41ae3c:
    // 0x41ae3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41ae40:
    // 0x41ae40: 0xc7a80090  lwc1        $f8, 0x90($sp)
    ctx->pc = 0x41ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_41ae44:
    // 0x41ae44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41ae48:
    // 0x41ae48: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x41ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_41ae4c:
    // 0x41ae4c: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x41ae4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_41ae50:
    // 0x41ae50: 0xa3ab0170  sb          $t3, 0x170($sp)
    ctx->pc = 0x41ae50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 11));
label_41ae54:
    // 0x41ae54: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x41ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_41ae58:
    // 0x41ae58: 0xafaa016c  sw          $t2, 0x16C($sp)
    ctx->pc = 0x41ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 10));
label_41ae5c:
    // 0x41ae5c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x41ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ae60:
    // 0x41ae60: 0xa3a90172  sb          $t1, 0x172($sp)
    ctx->pc = 0x41ae60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 9));
label_41ae64:
    // 0x41ae64: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x41ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ae68:
    // 0x41ae68: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x41ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
label_41ae6c:
    // 0x41ae6c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x41ae6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_41ae70:
    // 0x41ae70: 0xafa7015c  sw          $a3, 0x15C($sp)
    ctx->pc = 0x41ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 7));
label_41ae74:
    // 0x41ae74: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x41ae74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_41ae78:
    // 0x41ae78: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x41ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_41ae7c:
    // 0x41ae7c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x41ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_41ae80:
    // 0x41ae80: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x41ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_41ae84:
    // 0x41ae84: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x41ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ae88:
    // 0x41ae88: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x41ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_41ae8c:
    // 0x41ae8c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x41ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ae90:
    // 0x41ae90: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x41ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ae94:
    // 0x41ae94: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x41ae94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_41ae98:
    // 0x41ae98: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x41ae98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_41ae9c:
    // 0x41ae9c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x41ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_41aea0:
    // 0x41aea0: 0xc7a60098  lwc1        $f6, 0x98($sp)
    ctx->pc = 0x41aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_41aea4:
    // 0x41aea4: 0xc7a5009c  lwc1        $f5, 0x9C($sp)
    ctx->pc = 0x41aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_41aea8:
    // 0x41aea8: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x41aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41aeac:
    // 0x41aeac: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x41aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41aeb0:
    // 0x41aeb0: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x41aeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41aeb4:
    // 0x41aeb4: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x41aeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41aeb8:
    // 0x41aeb8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x41aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41aebc:
    // 0x41aebc: 0xe7a900d0  swc1        $f9, 0xD0($sp)
    ctx->pc = 0x41aebcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_41aec0:
    // 0x41aec0: 0xe7aa00d4  swc1        $f10, 0xD4($sp)
    ctx->pc = 0x41aec0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_41aec4:
    // 0x41aec4: 0xe7ab00d8  swc1        $f11, 0xD8($sp)
    ctx->pc = 0x41aec4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_41aec8:
    // 0x41aec8: 0xe7a80110  swc1        $f8, 0x110($sp)
    ctx->pc = 0x41aec8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_41aecc:
    // 0x41aecc: 0xe7a70114  swc1        $f7, 0x114($sp)
    ctx->pc = 0x41aeccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_41aed0:
    // 0x41aed0: 0xe7a60118  swc1        $f6, 0x118($sp)
    ctx->pc = 0x41aed0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_41aed4:
    // 0x41aed4: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x41aed4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_41aed8:
    // 0x41aed8: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x41aed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41aedc:
    // 0x41aedc: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x41aedcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_41aee0:
    // 0x41aee0: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x41aee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_41aee4:
    // 0x41aee4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x41aee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_41aee8:
    // 0x41aee8: 0xc0a7a88  jal         func_29EA20
label_41aeec:
    if (ctx->pc == 0x41AEECu) {
        ctx->pc = 0x41AEECu;
            // 0x41aeec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x41AEF0u;
        goto label_41aef0;
    }
    ctx->pc = 0x41AEE8u;
    SET_GPR_U32(ctx, 31, 0x41AEF0u);
    ctx->pc = 0x41AEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AEE8u;
            // 0x41aeec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AEF0u; }
        if (ctx->pc != 0x41AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AEF0u; }
        if (ctx->pc != 0x41AEF0u) { return; }
    }
    ctx->pc = 0x41AEF0u;
label_41aef0:
    // 0x41aef0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x41aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41aef4:
    // 0x41aef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41aef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41aef8:
    // 0x41aef8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_41aefc:
    if (ctx->pc == 0x41AEFCu) {
        ctx->pc = 0x41AEFCu;
            // 0x41aefc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41AF00u;
        goto label_41af00;
    }
    ctx->pc = 0x41AEF8u;
    {
        const bool branch_taken_0x41aef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41AEF8u;
            // 0x41aefc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aef8) {
            ctx->pc = 0x41AF48u;
            goto label_41af48;
        }
    }
    ctx->pc = 0x41AF00u;
label_41af00:
    // 0x41af00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41af04:
    // 0x41af04: 0xc088ef4  jal         func_223BD0
label_41af08:
    if (ctx->pc == 0x41AF08u) {
        ctx->pc = 0x41AF08u;
            // 0x41af08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x41AF0Cu;
        goto label_41af0c;
    }
    ctx->pc = 0x41AF04u;
    SET_GPR_U32(ctx, 31, 0x41AF0Cu);
    ctx->pc = 0x41AF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AF04u;
            // 0x41af08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF0Cu; }
        if (ctx->pc != 0x41AF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF0Cu; }
        if (ctx->pc != 0x41AF0Cu) { return; }
    }
    ctx->pc = 0x41AF0Cu;
label_41af0c:
    // 0x41af0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41af10:
    // 0x41af10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41af10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41af14:
    // 0x41af14: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x41af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_41af18:
    // 0x41af18: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x41af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_41af1c:
    // 0x41af1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41af20:
    // 0x41af20: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x41af20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_41af24:
    // 0x41af24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41af28:
    // 0x41af28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41af28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41af2c:
    // 0x41af2c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x41af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_41af30:
    // 0x41af30: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x41af30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_41af34:
    // 0x41af34: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x41af34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_41af38:
    // 0x41af38: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41af3c:
    // 0x41af3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x41af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_41af40:
    // 0x41af40: 0xc088b38  jal         func_222CE0
label_41af44:
    if (ctx->pc == 0x41AF44u) {
        ctx->pc = 0x41AF44u;
            // 0x41af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41AF48u;
        goto label_41af48;
    }
    ctx->pc = 0x41AF40u;
    SET_GPR_U32(ctx, 31, 0x41AF48u);
    ctx->pc = 0x41AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AF40u;
            // 0x41af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF48u; }
        if (ctx->pc != 0x41AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF48u; }
        if (ctx->pc != 0x41AF48u) { return; }
    }
    ctx->pc = 0x41AF48u;
label_41af48:
    // 0x41af48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41af48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41af4c:
    // 0x41af4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41af50:
    // 0x41af50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41af50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41af54:
    // 0x41af54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41af54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41af58:
    // 0x41af58: 0xc08914c  jal         func_224530
label_41af5c:
    if (ctx->pc == 0x41AF5Cu) {
        ctx->pc = 0x41AF5Cu;
            // 0x41af5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x41AF60u;
        goto label_41af60;
    }
    ctx->pc = 0x41AF58u;
    SET_GPR_U32(ctx, 31, 0x41AF60u);
    ctx->pc = 0x41AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AF58u;
            // 0x41af5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF60u; }
        if (ctx->pc != 0x41AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AF60u; }
        if (ctx->pc != 0x41AF60u) { return; }
    }
    ctx->pc = 0x41AF60u;
label_41af60:
    // 0x41af60: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x41af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41af64:
    // 0x41af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41af68:
    // 0x41af68: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x41af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41af6c:
    // 0x41af6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x41af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41af70:
    // 0x41af70: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x41af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41af74:
    // 0x41af74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x41af74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41af78:
    // 0x41af78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x41af78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_41af7c:
    // 0x41af7c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x41af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_41af80:
    // 0x41af80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x41af80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_41af84:
    // 0x41af84: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x41af84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_41af88:
    // 0x41af88: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x41af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41af8c:
    // 0x41af8c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x41af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41af90:
    // 0x41af90: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x41af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41af94:
    // 0x41af94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x41af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41af98:
    // 0x41af98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x41af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_41af9c:
    // 0x41af9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x41af9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_41afa0:
    // 0x41afa0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x41afa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_41afa4:
    // 0x41afa4: 0xc0892b0  jal         func_224AC0
label_41afa8:
    if (ctx->pc == 0x41AFA8u) {
        ctx->pc = 0x41AFA8u;
            // 0x41afa8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x41AFACu;
        goto label_41afac;
    }
    ctx->pc = 0x41AFA4u;
    SET_GPR_U32(ctx, 31, 0x41AFACu);
    ctx->pc = 0x41AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AFA4u;
            // 0x41afa8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFACu; }
        if (ctx->pc != 0x41AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFACu; }
        if (ctx->pc != 0x41AFACu) { return; }
    }
    ctx->pc = 0x41AFACu;
label_41afac:
    // 0x41afac: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x41afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_41afb0:
    // 0x41afb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41afb4:
    // 0x41afb4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x41afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_41afb8:
    // 0x41afb8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x41afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41afbc:
    // 0x41afbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x41afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_41afc0:
    // 0x41afc0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x41afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_41afc4:
    // 0x41afc4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x41afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_41afc8:
    // 0x41afc8: 0xc0891d8  jal         func_224760
label_41afcc:
    if (ctx->pc == 0x41AFCCu) {
        ctx->pc = 0x41AFCCu;
            // 0x41afcc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x41AFD0u;
        goto label_41afd0;
    }
    ctx->pc = 0x41AFC8u;
    SET_GPR_U32(ctx, 31, 0x41AFD0u);
    ctx->pc = 0x41AFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AFC8u;
            // 0x41afcc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFD0u; }
        if (ctx->pc != 0x41AFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFD0u; }
        if (ctx->pc != 0x41AFD0u) { return; }
    }
    ctx->pc = 0x41AFD0u;
label_41afd0:
    // 0x41afd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41afd4:
    // 0x41afd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41afd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41afd8:
    // 0x41afd8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41afdc:
    // 0x41afdc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41afe0:
    // 0x41afe0: 0xc08c164  jal         func_230590
label_41afe4:
    if (ctx->pc == 0x41AFE4u) {
        ctx->pc = 0x41AFE4u;
            // 0x41afe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41AFE8u;
        goto label_41afe8;
    }
    ctx->pc = 0x41AFE0u;
    SET_GPR_U32(ctx, 31, 0x41AFE8u);
    ctx->pc = 0x41AFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AFE0u;
            // 0x41afe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFE8u; }
        if (ctx->pc != 0x41AFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41AFE8u; }
        if (ctx->pc != 0x41AFE8u) { return; }
    }
    ctx->pc = 0x41AFE8u;
label_41afe8:
    // 0x41afe8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x41afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_41afec:
    // 0x41afec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41aff0:
    // 0x41aff0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41aff4:
    // 0x41aff4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x41aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41aff8:
    // 0x41aff8: 0xc0a7a88  jal         func_29EA20
label_41affc:
    if (ctx->pc == 0x41AFFCu) {
        ctx->pc = 0x41AFFCu;
            // 0x41affc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x41B000u;
        goto label_41b000;
    }
    ctx->pc = 0x41AFF8u;
    SET_GPR_U32(ctx, 31, 0x41B000u);
    ctx->pc = 0x41AFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41AFF8u;
            // 0x41affc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B000u; }
        if (ctx->pc != 0x41B000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B000u; }
        if (ctx->pc != 0x41B000u) { return; }
    }
    ctx->pc = 0x41B000u;
label_41b000:
    // 0x41b000: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x41b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41b004:
    // 0x41b004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41b004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b008:
    // 0x41b008: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_41b00c:
    if (ctx->pc == 0x41B00Cu) {
        ctx->pc = 0x41B00Cu;
            // 0x41b00c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41B010u;
        goto label_41b010;
    }
    ctx->pc = 0x41B008u;
    {
        const bool branch_taken_0x41b008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B008u;
            // 0x41b00c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b008) {
            ctx->pc = 0x41B02Cu;
            goto label_41b02c;
        }
    }
    ctx->pc = 0x41B010u;
label_41b010:
    // 0x41b010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41b014:
    // 0x41b014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b018:
    // 0x41b018: 0xc0869d0  jal         func_21A740
label_41b01c:
    if (ctx->pc == 0x41B01Cu) {
        ctx->pc = 0x41B01Cu;
            // 0x41b01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B020u;
        goto label_41b020;
    }
    ctx->pc = 0x41B018u;
    SET_GPR_U32(ctx, 31, 0x41B020u);
    ctx->pc = 0x41B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B018u;
            // 0x41b01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B020u; }
        if (ctx->pc != 0x41B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B020u; }
        if (ctx->pc != 0x41B020u) { return; }
    }
    ctx->pc = 0x41B020u;
label_41b020:
    // 0x41b020: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b024:
    // 0x41b024: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x41b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_41b028:
    // 0x41b028: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x41b028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_41b02c:
    // 0x41b02c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x41b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_41b030:
    // 0x41b030: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b034:
    // 0x41b034: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41b038:
    // 0x41b038: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41b03c:
    // 0x41b03c: 0xc08c650  jal         func_231940
label_41b040:
    if (ctx->pc == 0x41B040u) {
        ctx->pc = 0x41B040u;
            // 0x41b040: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B044u;
        goto label_41b044;
    }
    ctx->pc = 0x41B03Cu;
    SET_GPR_U32(ctx, 31, 0x41B044u);
    ctx->pc = 0x41B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B03Cu;
            // 0x41b040: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B044u; }
        if (ctx->pc != 0x41B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B044u; }
        if (ctx->pc != 0x41B044u) { return; }
    }
    ctx->pc = 0x41B044u;
label_41b044:
    // 0x41b044: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x41b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_41b048:
    // 0x41b048: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x41b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_41b04c:
    // 0x41b04c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x41b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41b050:
    // 0x41b050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x41b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_41b054:
    // 0x41b054: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x41b054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
label_41b058:
    // 0x41b058: 0xc040180  jal         func_100600
label_41b05c:
    if (ctx->pc == 0x41B05Cu) {
        ctx->pc = 0x41B05Cu;
            // 0x41b05c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x41B060u;
        goto label_41b060;
    }
    ctx->pc = 0x41B058u;
    SET_GPR_U32(ctx, 31, 0x41B060u);
    ctx->pc = 0x41B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B058u;
            // 0x41b05c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B060u; }
        if (ctx->pc != 0x41B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B060u; }
        if (ctx->pc != 0x41B060u) { return; }
    }
    ctx->pc = 0x41B060u;
label_41b060:
    // 0x41b060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41b060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b064:
    // 0x41b064: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_41b068:
    if (ctx->pc == 0x41B068u) {
        ctx->pc = 0x41B068u;
            // 0x41b068: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x41B06Cu;
        goto label_41b06c;
    }
    ctx->pc = 0x41B064u;
    {
        const bool branch_taken_0x41b064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b064) {
            ctx->pc = 0x41B068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B064u;
            // 0x41b068: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B0A4u;
            goto label_41b0a4;
        }
    }
    ctx->pc = 0x41B06Cu;
label_41b06c:
    // 0x41b06c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41b070:
    // 0x41b070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b074:
    // 0x41b074: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x41b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_41b078:
    // 0x41b078: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x41b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_41b07c:
    // 0x41b07c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41b080:
    // 0x41b080: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x41b080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_41b084:
    // 0x41b084: 0xc040138  jal         func_1004E0
label_41b088:
    if (ctx->pc == 0x41B088u) {
        ctx->pc = 0x41B088u;
            // 0x41b088: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x41B08Cu;
        goto label_41b08c;
    }
    ctx->pc = 0x41B084u;
    SET_GPR_U32(ctx, 31, 0x41B08Cu);
    ctx->pc = 0x41B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B084u;
            // 0x41b088: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B08Cu; }
        if (ctx->pc != 0x41B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B08Cu; }
        if (ctx->pc != 0x41B08Cu) { return; }
    }
    ctx->pc = 0x41B08Cu;
label_41b08c:
    // 0x41b08c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x41b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_41b090:
    // 0x41b090: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x41b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_41b094:
    // 0x41b094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41b094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b098:
    // 0x41b098: 0xc04a576  jal         func_1295D8
label_41b09c:
    if (ctx->pc == 0x41B09Cu) {
        ctx->pc = 0x41B09Cu;
            // 0x41b09c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x41B0A0u;
        goto label_41b0a0;
    }
    ctx->pc = 0x41B098u;
    SET_GPR_U32(ctx, 31, 0x41B0A0u);
    ctx->pc = 0x41B09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B098u;
            // 0x41b09c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0A0u; }
        if (ctx->pc != 0x41B0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0A0u; }
        if (ctx->pc != 0x41B0A0u) { return; }
    }
    ctx->pc = 0x41B0A0u;
label_41b0a0:
    // 0x41b0a0: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x41b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_41b0a4:
    // 0x41b0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b0a8:
    // 0x41b0a8: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x41b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_41b0ac:
    // 0x41b0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41b0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b0b0:
    // 0x41b0b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41b0b4:
    // 0x41b0b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41b0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b0b8:
    // 0x41b0b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41b0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41b0bc:
    // 0x41b0bc: 0xae3000d4  sw          $s0, 0xD4($s1)
    ctx->pc = 0x41b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
label_41b0c0:
    // 0x41b0c0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x41b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_41b0c4:
    // 0x41b0c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x41b0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41b0c8:
    // 0x41b0c8: 0xc122cd8  jal         func_48B360
label_41b0cc:
    if (ctx->pc == 0x41B0CCu) {
        ctx->pc = 0x41B0CCu;
            // 0x41b0cc: 0x34460eae  ori         $a2, $v0, 0xEAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3758);
        ctx->pc = 0x41B0D0u;
        goto label_41b0d0;
    }
    ctx->pc = 0x41B0C8u;
    SET_GPR_U32(ctx, 31, 0x41B0D0u);
    ctx->pc = 0x41B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B0C8u;
            // 0x41b0cc: 0x34460eae  ori         $a2, $v0, 0xEAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3758);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0D0u; }
        if (ctx->pc != 0x41B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0D0u; }
        if (ctx->pc != 0x41B0D0u) { return; }
    }
    ctx->pc = 0x41B0D0u;
label_41b0d0:
    // 0x41b0d0: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x41b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_41b0d4:
    // 0x41b0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b0d8:
    // 0x41b0d8: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x41b0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_41b0dc:
    // 0x41b0dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b0e0:
    // 0x41b0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41b0e4:
    // 0x41b0e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41b0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b0e8:
    // 0x41b0e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x41b0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_41b0ec:
    // 0x41b0ec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x41b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_41b0f0:
    // 0x41b0f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x41b0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41b0f4:
    // 0x41b0f4: 0xc122cd8  jal         func_48B360
label_41b0f8:
    if (ctx->pc == 0x41B0F8u) {
        ctx->pc = 0x41B0F8u;
            // 0x41b0f8: 0x34460eae  ori         $a2, $v0, 0xEAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3758);
        ctx->pc = 0x41B0FCu;
        goto label_41b0fc;
    }
    ctx->pc = 0x41B0F4u;
    SET_GPR_U32(ctx, 31, 0x41B0FCu);
    ctx->pc = 0x41B0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B0F4u;
            // 0x41b0f8: 0x34460eae  ori         $a2, $v0, 0xEAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3758);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0FCu; }
        if (ctx->pc != 0x41B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B0FCu; }
        if (ctx->pc != 0x41B0FCu) { return; }
    }
    ctx->pc = 0x41B0FCu;
label_41b0fc:
    // 0x41b0fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41b100:
    // 0x41b100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b104:
    // 0x41b104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b108:
    // 0x41b108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b10c:
    // 0x41b10c: 0x3e00008  jr          $ra
label_41b110:
    if (ctx->pc == 0x41B110u) {
        ctx->pc = 0x41B110u;
            // 0x41b110: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x41B114u;
        goto label_41b114;
    }
    ctx->pc = 0x41B10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B10Cu;
            // 0x41b110: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B114u;
label_41b114:
    // 0x41b114: 0x0  nop
    ctx->pc = 0x41b114u;
    // NOP
label_41b118:
    // 0x41b118: 0x0  nop
    ctx->pc = 0x41b118u;
    // NOP
label_41b11c:
    // 0x41b11c: 0x0  nop
    ctx->pc = 0x41b11cu;
    // NOP
label_41b120:
    // 0x41b120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41b124:
    // 0x41b124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b128:
    // 0x41b128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b12c:
    // 0x41b12c: 0xc0e3580  jal         func_38D600
label_41b130:
    if (ctx->pc == 0x41B130u) {
        ctx->pc = 0x41B130u;
            // 0x41b130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B134u;
        goto label_41b134;
    }
    ctx->pc = 0x41B12Cu;
    SET_GPR_U32(ctx, 31, 0x41B134u);
    ctx->pc = 0x41B130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B12Cu;
            // 0x41b130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B134u; }
        if (ctx->pc != 0x41B134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B134u; }
        if (ctx->pc != 0x41B134u) { return; }
    }
    ctx->pc = 0x41B134u;
label_41b134:
    // 0x41b134: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x41b134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_41b138:
    // 0x41b138: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x41b138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_41b13c:
    // 0x41b13c: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x41b13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_41b140:
    // 0x41b140: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x41b140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_41b144:
    // 0x41b144: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x41b144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_41b148:
    // 0x41b148: 0x3c094370  lui         $t1, 0x4370
    ctx->pc = 0x41b148u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17264 << 16));
label_41b14c:
    // 0x41b14c: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x41b14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_41b150:
    // 0x41b150: 0x3c084334  lui         $t0, 0x4334
    ctx->pc = 0x41b150u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17204 << 16));
label_41b154:
    // 0x41b154: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x41b154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_41b158:
    // 0x41b158: 0x2407d556  addiu       $a3, $zero, -0x2AAA
    ctx->pc = 0x41b158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294956374));
label_41b15c:
    // 0x41b15c: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x41b15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_41b160:
    // 0x41b160: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41b160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41b164:
    // 0x41b164: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x41b164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_41b168:
    // 0x41b168: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x41b168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_41b16c:
    // 0x41b16c: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x41b16cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_41b170:
    // 0x41b170: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41b170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41b174:
    // 0x41b174: 0xae0a008c  sw          $t2, 0x8C($s0)
    ctx->pc = 0x41b174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 10));
label_41b178:
    // 0x41b178: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x41b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_41b17c:
    // 0x41b17c: 0xae090070  sw          $t1, 0x70($s0)
    ctx->pc = 0x41b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 9));
label_41b180:
    // 0x41b180: 0xae090078  sw          $t1, 0x78($s0)
    ctx->pc = 0x41b180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 9));
label_41b184:
    // 0x41b184: 0xae080080  sw          $t0, 0x80($s0)
    ctx->pc = 0x41b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 8));
label_41b188:
    // 0x41b188: 0x8e080040  lw          $t0, 0x40($s0)
    ctx->pc = 0x41b188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_41b18c:
    // 0x41b18c: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x41b18cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_41b190:
    // 0x41b190: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x41b190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_41b194:
    // 0x41b194: 0xae0700d8  sw          $a3, 0xD8($s0)
    ctx->pc = 0x41b194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 7));
label_41b198:
    // 0x41b198: 0xa20600cc  sb          $a2, 0xCC($s0)
    ctx->pc = 0x41b198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 6));
label_41b19c:
    // 0x41b19c: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x41b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
label_41b1a0:
    // 0x41b1a0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41b1a4:
    // 0x41b1a4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x41b1a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_41b1a8:
    // 0x41b1a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x41b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_41b1ac:
    // 0x41b1ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x41b1acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_41b1b0:
    // 0x41b1b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x41b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_41b1b4:
    // 0x41b1b4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x41b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_41b1b8:
    // 0x41b1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b1bc:
    // 0x41b1bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b1c0:
    // 0x41b1c0: 0x3e00008  jr          $ra
label_41b1c4:
    if (ctx->pc == 0x41B1C4u) {
        ctx->pc = 0x41B1C4u;
            // 0x41b1c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41B1C8u;
        goto label_41b1c8;
    }
    ctx->pc = 0x41B1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B1C0u;
            // 0x41b1c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B1C8u;
label_41b1c8:
    // 0x41b1c8: 0x0  nop
    ctx->pc = 0x41b1c8u;
    // NOP
label_41b1cc:
    // 0x41b1cc: 0x0  nop
    ctx->pc = 0x41b1ccu;
    // NOP
label_41b1d0:
    // 0x41b1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41b1d4:
    // 0x41b1d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41b1d8:
    // 0x41b1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b1dc:
    // 0x41b1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b1e0:
    // 0x41b1e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b1e4:
    // 0x41b1e4: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x41b1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_41b1e8:
    // 0x41b1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b1ec:
    // 0x41b1ec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x41b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_41b1f0:
    // 0x41b1f0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x41b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_41b1f4:
    // 0x41b1f4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x41b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_41b1f8:
    // 0x41b1f8: 0xc088b74  jal         func_222DD0
label_41b1fc:
    if (ctx->pc == 0x41B1FCu) {
        ctx->pc = 0x41B1FCu;
            // 0x41b1fc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->pc = 0x41B200u;
        goto label_41b200;
    }
    ctx->pc = 0x41B1F8u;
    SET_GPR_U32(ctx, 31, 0x41B200u);
    ctx->pc = 0x41B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B1F8u;
            // 0x41b1fc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B200u; }
        if (ctx->pc != 0x41B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B200u; }
        if (ctx->pc != 0x41B200u) { return; }
    }
    ctx->pc = 0x41B200u;
label_41b200:
    // 0x41b200: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41b200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41b204:
    // 0x41b204: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41b208:
    // 0x41b208: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41b208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41b20c:
    // 0x41b20c: 0x320f809  jalr        $t9
label_41b210:
    if (ctx->pc == 0x41B210u) {
        ctx->pc = 0x41B210u;
            // 0x41b210: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41B214u;
        goto label_41b214;
    }
    ctx->pc = 0x41B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B214u);
        ctx->pc = 0x41B210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B20Cu;
            // 0x41b210: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B214u; }
            if (ctx->pc != 0x41B214u) { return; }
        }
        }
    }
    ctx->pc = 0x41B214u;
label_41b214:
    // 0x41b214: 0xc088b74  jal         func_222DD0
label_41b218:
    if (ctx->pc == 0x41B218u) {
        ctx->pc = 0x41B218u;
            // 0x41b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B21Cu;
        goto label_41b21c;
    }
    ctx->pc = 0x41B214u;
    SET_GPR_U32(ctx, 31, 0x41B21Cu);
    ctx->pc = 0x41B218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B214u;
            // 0x41b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B21Cu; }
        if (ctx->pc != 0x41B21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B21Cu; }
        if (ctx->pc != 0x41B21Cu) { return; }
    }
    ctx->pc = 0x41B21Cu;
label_41b21c:
    // 0x41b21c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41b21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41b220:
    // 0x41b220: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41b224:
    // 0x41b224: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x41b224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_41b228:
    // 0x41b228: 0x320f809  jalr        $t9
label_41b22c:
    if (ctx->pc == 0x41B22Cu) {
        ctx->pc = 0x41B22Cu;
            // 0x41b22c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41B230u;
        goto label_41b230;
    }
    ctx->pc = 0x41B228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B230u);
        ctx->pc = 0x41B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B228u;
            // 0x41b22c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B230u; }
            if (ctx->pc != 0x41B230u) { return; }
        }
        }
    }
    ctx->pc = 0x41B230u;
label_41b230:
    // 0x41b230: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x41b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_41b234:
    // 0x41b234: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b238:
    // 0x41b238: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x41b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_41b23c:
    // 0x41b23c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b240:
    // 0x41b240: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x41b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_41b244:
    // 0x41b244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b248:
    // 0x41b248: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41b24c:
    // 0x41b24c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41b250:
    // 0x41b250: 0xc08bff0  jal         func_22FFC0
label_41b254:
    if (ctx->pc == 0x41B254u) {
        ctx->pc = 0x41B254u;
            // 0x41b254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B258u;
        goto label_41b258;
    }
    ctx->pc = 0x41B250u;
    SET_GPR_U32(ctx, 31, 0x41B258u);
    ctx->pc = 0x41B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B250u;
            // 0x41b254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B258u; }
        if (ctx->pc != 0x41B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B258u; }
        if (ctx->pc != 0x41B258u) { return; }
    }
    ctx->pc = 0x41B258u;
label_41b258:
    // 0x41b258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b25c:
    // 0x41b25c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41b260:
    // 0x41b260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b264:
    // 0x41b264: 0xc08914c  jal         func_224530
label_41b268:
    if (ctx->pc == 0x41B268u) {
        ctx->pc = 0x41B268u;
            // 0x41b268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B26Cu;
        goto label_41b26c;
    }
    ctx->pc = 0x41B264u;
    SET_GPR_U32(ctx, 31, 0x41B26Cu);
    ctx->pc = 0x41B268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B264u;
            // 0x41b268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B26Cu; }
        if (ctx->pc != 0x41B26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B26Cu; }
        if (ctx->pc != 0x41B26Cu) { return; }
    }
    ctx->pc = 0x41B26Cu;
label_41b26c:
    // 0x41b26c: 0xc0e393c  jal         func_38E4F0
label_41b270:
    if (ctx->pc == 0x41B270u) {
        ctx->pc = 0x41B270u;
            // 0x41b270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B274u;
        goto label_41b274;
    }
    ctx->pc = 0x41B26Cu;
    SET_GPR_U32(ctx, 31, 0x41B274u);
    ctx->pc = 0x41B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B26Cu;
            // 0x41b270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B274u; }
        if (ctx->pc != 0x41B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B274u; }
        if (ctx->pc != 0x41B274u) { return; }
    }
    ctx->pc = 0x41B274u;
label_41b274:
    // 0x41b274: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x41b274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_41b278:
    // 0x41b278: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41b278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_41b27c:
    // 0x41b27c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x41b27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_41b280:
    // 0x41b280: 0xae050160  sw          $a1, 0x160($s0)
    ctx->pc = 0x41b280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 5));
label_41b284:
    // 0x41b284: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41b284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41b288:
    // 0x41b288: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x41b288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_41b28c:
    // 0x41b28c: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x41b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_41b290:
    // 0x41b290: 0x90857320  lbu         $a1, 0x7320($a0)
    ctx->pc = 0x41b290u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29472)));
label_41b294:
    // 0x41b294: 0x5202a  slt         $a0, $zero, $a1
    ctx->pc = 0x41b294u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_41b298:
    // 0x41b298: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x41b298u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_41b29c:
    // 0x41b29c: 0xa0647320  sb          $a0, 0x7320($v1)
    ctx->pc = 0x41b29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29472), (uint8_t)GPR_U32(ctx, 4));
label_41b2a0:
    // 0x41b2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41b2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41b2a4:
    // 0x41b2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b2a8:
    // 0x41b2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b2ac:
    // 0x41b2ac: 0x3e00008  jr          $ra
label_41b2b0:
    if (ctx->pc == 0x41B2B0u) {
        ctx->pc = 0x41B2B0u;
            // 0x41b2b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x41B2B4u;
        goto label_41b2b4;
    }
    ctx->pc = 0x41B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B2ACu;
            // 0x41b2b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B2B4u;
label_41b2b4:
    // 0x41b2b4: 0x0  nop
    ctx->pc = 0x41b2b4u;
    // NOP
label_41b2b8:
    // 0x41b2b8: 0x0  nop
    ctx->pc = 0x41b2b8u;
    // NOP
label_41b2bc:
    // 0x41b2bc: 0x0  nop
    ctx->pc = 0x41b2bcu;
    // NOP
label_41b2c0:
    // 0x41b2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b2c4:
    // 0x41b2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b2c8:
    // 0x41b2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41b2cc:
    // 0x41b2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b2d0:
    // 0x41b2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b2d4:
    // 0x41b2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41b2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b2d8:
    // 0x41b2d8: 0x8ca40a68  lw          $a0, 0xA68($a1)
    ctx->pc = 0x41b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2664)));
label_41b2dc:
    // 0x41b2dc: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_41b2e0:
    if (ctx->pc == 0x41B2E0u) {
        ctx->pc = 0x41B2E0u;
            // 0x41b2e0: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->pc = 0x41B2E4u;
        goto label_41b2e4;
    }
    ctx->pc = 0x41B2DCu;
    {
        const bool branch_taken_0x41b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x41B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B2DCu;
            // 0x41b2e0: 0x24a60a50  addiu       $a2, $a1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2dc) {
            ctx->pc = 0x41B358u;
            goto label_41b358;
        }
    }
    ctx->pc = 0x41B2E4u;
label_41b2e4:
    // 0x41b2e4: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x41b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_41b2e8:
    // 0x41b2e8: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x41b2e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_41b2ec:
    // 0x41b2ec: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_41b2f0:
    if (ctx->pc == 0x41B2F0u) {
        ctx->pc = 0x41B2F4u;
        goto label_41b2f4;
    }
    ctx->pc = 0x41B2ECu;
    {
        const bool branch_taken_0x41b2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b2ec) {
            ctx->pc = 0x41B358u;
            goto label_41b358;
        }
    }
    ctx->pc = 0x41B2F4u;
label_41b2f4:
    // 0x41b2f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x41b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41b2f8:
    // 0x41b2f8: 0xc04cc04  jal         func_133010
label_41b2fc:
    if (ctx->pc == 0x41B2FCu) {
        ctx->pc = 0x41B2FCu;
            // 0x41b2fc: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->pc = 0x41B300u;
        goto label_41b300;
    }
    ctx->pc = 0x41B2F8u;
    SET_GPR_U32(ctx, 31, 0x41B300u);
    ctx->pc = 0x41B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B2F8u;
            // 0x41b2fc: 0x24a50820  addiu       $a1, $a1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B300u; }
        if (ctx->pc != 0x41B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B300u; }
        if (ctx->pc != 0x41B300u) { return; }
    }
    ctx->pc = 0x41B300u;
label_41b300:
    // 0x41b300: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x41b300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41b304:
    // 0x41b304: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x41b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_41b308:
    // 0x41b308: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41b308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b30c:
    // 0x41b30c: 0xc04cc44  jal         func_133110
label_41b310:
    if (ctx->pc == 0x41B310u) {
        ctx->pc = 0x41B310u;
            // 0x41b310: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x41B314u;
        goto label_41b314;
    }
    ctx->pc = 0x41B30Cu;
    SET_GPR_U32(ctx, 31, 0x41B314u);
    ctx->pc = 0x41B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B30Cu;
            // 0x41b310: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B314u; }
        if (ctx->pc != 0x41B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B314u; }
        if (ctx->pc != 0x41B314u) { return; }
    }
    ctx->pc = 0x41B314u;
label_41b314:
    // 0x41b314: 0x3c023ded  lui         $v0, 0x3DED
    ctx->pc = 0x41b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15853 << 16));
label_41b318:
    // 0x41b318: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x41b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41b31c:
    // 0x41b31c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x41b31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_41b320:
    // 0x41b320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41b320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41b324:
    // 0x41b324: 0xc04cc70  jal         func_1331C0
label_41b328:
    if (ctx->pc == 0x41B328u) {
        ctx->pc = 0x41B328u;
            // 0x41b328: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41B32Cu;
        goto label_41b32c;
    }
    ctx->pc = 0x41B324u;
    SET_GPR_U32(ctx, 31, 0x41B32Cu);
    ctx->pc = 0x41B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B324u;
            // 0x41b328: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B32Cu; }
        if (ctx->pc != 0x41B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B32Cu; }
        if (ctx->pc != 0x41B32Cu) { return; }
    }
    ctx->pc = 0x41B32Cu;
label_41b32c:
    // 0x41b32c: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x41b32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_41b330:
    // 0x41b330: 0x92100010  lbu         $s0, 0x10($s0)
    ctx->pc = 0x41b330u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_41b334:
    // 0x41b334: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_41b338:
    if (ctx->pc == 0x41B338u) {
        ctx->pc = 0x41B33Cu;
        goto label_41b33c;
    }
    ctx->pc = 0x41B334u;
    {
        const bool branch_taken_0x41b334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b334) {
            ctx->pc = 0x41B358u;
            goto label_41b358;
        }
    }
    ctx->pc = 0x41B33Cu;
label_41b33c:
    // 0x41b33c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41b340:
    // 0x41b340: 0xc106a80  jal         func_41AA00
label_41b344:
    if (ctx->pc == 0x41B344u) {
        ctx->pc = 0x41B344u;
            // 0x41b344: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x41B348u;
        goto label_41b348;
    }
    ctx->pc = 0x41B340u;
    SET_GPR_U32(ctx, 31, 0x41B348u);
    ctx->pc = 0x41B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B340u;
            // 0x41b344: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41AA00u;
    goto label_41aa00;
    ctx->pc = 0x41B348u;
label_41b348:
    // 0x41b348: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x41b348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_41b34c:
    // 0x41b34c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x41b34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_41b350:
    // 0x41b350: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_41b354:
    if (ctx->pc == 0x41B354u) {
        ctx->pc = 0x41B358u;
        goto label_41b358;
    }
    ctx->pc = 0x41B350u;
    {
        const bool branch_taken_0x41b350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b350) {
            ctx->pc = 0x41B33Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41b33c;
        }
    }
    ctx->pc = 0x41B358u;
label_41b358:
    // 0x41b358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41b35c:
    // 0x41b35c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b360:
    // 0x41b360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b364:
    // 0x41b364: 0x3e00008  jr          $ra
label_41b368:
    if (ctx->pc == 0x41B368u) {
        ctx->pc = 0x41B368u;
            // 0x41b368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41B36Cu;
        goto label_41b36c;
    }
    ctx->pc = 0x41B364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B364u;
            // 0x41b368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B36Cu;
label_41b36c:
    // 0x41b36c: 0x0  nop
    ctx->pc = 0x41b36cu;
    // NOP
label_41b370:
    // 0x41b370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b374:
    // 0x41b374: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41b378:
    // 0x41b378: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41b37c:
    // 0x41b37c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b380:
    // 0x41b380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b384:
    // 0x41b384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b388:
    // 0x41b388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b38c:
    // 0x41b38c: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_41b390:
    if (ctx->pc == 0x41B390u) {
        ctx->pc = 0x41B390u;
            // 0x41b390: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B394u;
        goto label_41b394;
    }
    ctx->pc = 0x41B38Cu;
    {
        const bool branch_taken_0x41b38c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B38Cu;
            // 0x41b390: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b38c) {
            ctx->pc = 0x41B448u;
            goto label_41b448;
        }
    }
    ctx->pc = 0x41B394u;
label_41b394:
    // 0x41b394: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b398:
    // 0x41b398: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b39c:
    // 0x41b39c: 0x2463b6d0  addiu       $v1, $v1, -0x4930
    ctx->pc = 0x41b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948560));
label_41b3a0:
    // 0x41b3a0: 0x2442b708  addiu       $v0, $v0, -0x48F8
    ctx->pc = 0x41b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
label_41b3a4:
    // 0x41b3a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b3a8:
    // 0x41b3a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41b3a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b3ac:
    // 0x41b3ac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41b3b0:
    // 0x41b3b0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x41b3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b3b4:
    // 0x41b3b4: 0xc0d37dc  jal         func_34DF70
label_41b3b8:
    if (ctx->pc == 0x41B3B8u) {
        ctx->pc = 0x41B3B8u;
            // 0x41b3b8: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x41B3BCu;
        goto label_41b3bc;
    }
    ctx->pc = 0x41B3B4u;
    SET_GPR_U32(ctx, 31, 0x41B3BCu);
    ctx->pc = 0x41B3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B3B4u;
            // 0x41b3b8: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B3BCu; }
        if (ctx->pc != 0x41B3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B3BCu; }
        if (ctx->pc != 0x41B3BCu) { return; }
    }
    ctx->pc = 0x41B3BCu;
label_41b3bc:
    // 0x41b3bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41b3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41b3c0:
    // 0x41b3c0: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x41b3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_41b3c4:
    // 0x41b3c4: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x41b3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_41b3c8:
    // 0x41b3c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_41b3cc:
    if (ctx->pc == 0x41B3CCu) {
        ctx->pc = 0x41B3D0u;
        goto label_41b3d0;
    }
    ctx->pc = 0x41B3C8u;
    {
        const bool branch_taken_0x41b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b3c8) {
            ctx->pc = 0x41B3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41b3b4;
        }
    }
    ctx->pc = 0x41B3D0u;
label_41b3d0:
    // 0x41b3d0: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x41b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_41b3d4:
    // 0x41b3d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41b3d8:
    if (ctx->pc == 0x41B3D8u) {
        ctx->pc = 0x41B3DCu;
        goto label_41b3dc;
    }
    ctx->pc = 0x41B3D4u;
    {
        const bool branch_taken_0x41b3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b3d4) {
            ctx->pc = 0x41B3ECu;
            goto label_41b3ec;
        }
    }
    ctx->pc = 0x41B3DCu;
label_41b3dc:
    // 0x41b3dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b3e0:
    // 0x41b3e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41b3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41b3e4:
    // 0x41b3e4: 0x320f809  jalr        $t9
label_41b3e8:
    if (ctx->pc == 0x41B3E8u) {
        ctx->pc = 0x41B3E8u;
            // 0x41b3e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41B3ECu;
        goto label_41b3ec;
    }
    ctx->pc = 0x41B3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B3ECu);
        ctx->pc = 0x41B3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B3E4u;
            // 0x41b3e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B3ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B3ECu; }
            if (ctx->pc != 0x41B3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x41B3ECu;
label_41b3ec:
    // 0x41b3ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41b3f0:
    // 0x41b3f0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x41b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_41b3f4:
    // 0x41b3f4: 0x24a5a4e0  addiu       $a1, $a1, -0x5B20
    ctx->pc = 0x41b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943968));
label_41b3f8:
    // 0x41b3f8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x41b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_41b3fc:
    // 0x41b3fc: 0xc0407e8  jal         func_101FA0
label_41b400:
    if (ctx->pc == 0x41B400u) {
        ctx->pc = 0x41B400u;
            // 0x41b400: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41B404u;
        goto label_41b404;
    }
    ctx->pc = 0x41B3FCu;
    SET_GPR_U32(ctx, 31, 0x41B404u);
    ctx->pc = 0x41B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B3FCu;
            // 0x41b400: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B404u; }
        if (ctx->pc != 0x41B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B404u; }
        if (ctx->pc != 0x41B404u) { return; }
    }
    ctx->pc = 0x41B404u;
label_41b404:
    // 0x41b404: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_41b408:
    if (ctx->pc == 0x41B408u) {
        ctx->pc = 0x41B408u;
            // 0x41b408: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41B40Cu;
        goto label_41b40c;
    }
    ctx->pc = 0x41B404u;
    {
        const bool branch_taken_0x41b404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b404) {
            ctx->pc = 0x41B408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B404u;
            // 0x41b408: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B434u;
            goto label_41b434;
        }
    }
    ctx->pc = 0x41B40Cu;
label_41b40c:
    // 0x41b40c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b410:
    // 0x41b410: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b414:
    // 0x41b414: 0x2463b720  addiu       $v1, $v1, -0x48E0
    ctx->pc = 0x41b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948640));
label_41b418:
    // 0x41b418: 0x2442b758  addiu       $v0, $v0, -0x48A8
    ctx->pc = 0x41b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948696));
label_41b41c:
    // 0x41b41c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b420:
    // 0x41b420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b424:
    // 0x41b424: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41b424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41b428:
    // 0x41b428: 0xc1068e0  jal         func_41A380
label_41b42c:
    if (ctx->pc == 0x41B42Cu) {
        ctx->pc = 0x41B42Cu;
            // 0x41b42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B430u;
        goto label_41b430;
    }
    ctx->pc = 0x41B428u;
    SET_GPR_U32(ctx, 31, 0x41B430u);
    ctx->pc = 0x41B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B428u;
            // 0x41b42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (runtime->hasFunction(0x41A380u)) {
        auto targetFn = runtime->lookupFunction(0x41A380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B430u; }
        if (ctx->pc != 0x41B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A380_0x41a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B430u; }
        if (ctx->pc != 0x41B430u) { return; }
    }
    ctx->pc = 0x41B430u;
label_41b430:
    // 0x41b430: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41b434:
    // 0x41b434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41b434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41b438:
    // 0x41b438: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41b43c:
    if (ctx->pc == 0x41B43Cu) {
        ctx->pc = 0x41B43Cu;
            // 0x41b43c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B440u;
        goto label_41b440;
    }
    ctx->pc = 0x41B438u;
    {
        const bool branch_taken_0x41b438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41b438) {
            ctx->pc = 0x41B43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B438u;
            // 0x41b43c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B44Cu;
            goto label_41b44c;
        }
    }
    ctx->pc = 0x41B440u;
label_41b440:
    // 0x41b440: 0xc0400a8  jal         func_1002A0
label_41b444:
    if (ctx->pc == 0x41B444u) {
        ctx->pc = 0x41B444u;
            // 0x41b444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B448u;
        goto label_41b448;
    }
    ctx->pc = 0x41B440u;
    SET_GPR_U32(ctx, 31, 0x41B448u);
    ctx->pc = 0x41B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B440u;
            // 0x41b444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B448u; }
        if (ctx->pc != 0x41B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B448u; }
        if (ctx->pc != 0x41B448u) { return; }
    }
    ctx->pc = 0x41B448u;
label_41b448:
    // 0x41b448: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41b448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b44c:
    // 0x41b44c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41b450:
    // 0x41b450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41b450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b454:
    // 0x41b454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b458:
    // 0x41b458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b45c:
    // 0x41b45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b460:
    // 0x41b460: 0x3e00008  jr          $ra
label_41b464:
    if (ctx->pc == 0x41B464u) {
        ctx->pc = 0x41B464u;
            // 0x41b464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41B468u;
        goto label_41b468;
    }
    ctx->pc = 0x41B460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B460u;
            // 0x41b464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B468u;
label_41b468:
    // 0x41b468: 0x0  nop
    ctx->pc = 0x41b468u;
    // NOP
label_41b46c:
    // 0x41b46c: 0x0  nop
    ctx->pc = 0x41b46cu;
    // NOP
label_41b470:
    // 0x41b470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41b474:
    // 0x41b474: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41b478:
    // 0x41b478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41b47c:
    // 0x41b47c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41b480:
    // 0x41b480: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41b480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b484:
    // 0x41b484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b488:
    // 0x41b488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b48c:
    // 0x41b48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b490:
    // 0x41b490: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x41b490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41b494:
    // 0x41b494: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_41b498:
    if (ctx->pc == 0x41B498u) {
        ctx->pc = 0x41B498u;
            // 0x41b498: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B49Cu;
        goto label_41b49c;
    }
    ctx->pc = 0x41B494u;
    {
        const bool branch_taken_0x41b494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B494u;
            // 0x41b498: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b494) {
            ctx->pc = 0x41B4D8u;
            goto label_41b4d8;
        }
    }
    ctx->pc = 0x41B49Cu;
label_41b49c:
    // 0x41b49c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41b49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b4a0:
    // 0x41b4a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41b4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b4a4:
    // 0x41b4a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41b4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b4a8:
    // 0x41b4a8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x41b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_41b4ac:
    // 0x41b4ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41b4b0:
    // 0x41b4b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41b4b4:
    // 0x41b4b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b4b8:
    // 0x41b4b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x41b4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_41b4bc:
    // 0x41b4bc: 0x320f809  jalr        $t9
label_41b4c0:
    if (ctx->pc == 0x41B4C0u) {
        ctx->pc = 0x41B4C4u;
        goto label_41b4c4;
    }
    ctx->pc = 0x41B4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B4C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B4C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B4C4u; }
            if (ctx->pc != 0x41B4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x41B4C4u;
label_41b4c4:
    // 0x41b4c4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x41b4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_41b4c8:
    // 0x41b4c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x41b4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41b4cc:
    // 0x41b4cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x41b4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41b4d0:
    // 0x41b4d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_41b4d4:
    if (ctx->pc == 0x41B4D4u) {
        ctx->pc = 0x41B4D4u;
            // 0x41b4d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x41B4D8u;
        goto label_41b4d8;
    }
    ctx->pc = 0x41B4D0u;
    {
        const bool branch_taken_0x41b4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B4D0u;
            // 0x41b4d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4d0) {
            ctx->pc = 0x41B4A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41b4a8;
        }
    }
    ctx->pc = 0x41B4D8u;
label_41b4d8:
    // 0x41b4d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41b4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b4dc:
    // 0x41b4dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41b4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_41b4e0:
    // 0x41b4e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41b4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b4e4:
    // 0x41b4e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41b4e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b4e8:
    // 0x41b4e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b4ec:
    // 0x41b4ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b4f0:
    // 0x41b4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b4f4:
    // 0x41b4f4: 0x3e00008  jr          $ra
label_41b4f8:
    if (ctx->pc == 0x41B4F8u) {
        ctx->pc = 0x41B4F8u;
            // 0x41b4f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41B4FCu;
        goto label_41b4fc;
    }
    ctx->pc = 0x41B4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B4F4u;
            // 0x41b4f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B4FCu;
label_41b4fc:
    // 0x41b4fc: 0x0  nop
    ctx->pc = 0x41b4fcu;
    // NOP
label_41b500:
    // 0x41b500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41b504:
    // 0x41b504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41b504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b508:
    // 0x41b508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b50c:
    // 0x41b50c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x41b50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_41b510:
    // 0x41b510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b514:
    // 0x41b514: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x41b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41b518:
    // 0x41b518: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41b518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41b51c:
    // 0x41b51c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x41b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_41b520:
    // 0x41b520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41b520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41b524:
    // 0x41b524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41b528:
    // 0x41b528: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x41b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_41b52c:
    // 0x41b52c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x41b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41b530:
    // 0x41b530: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x41b530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_41b534:
    // 0x41b534: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x41b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41b538:
    // 0x41b538: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x41b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_41b53c:
    // 0x41b53c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x41b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_41b540:
    // 0x41b540: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x41b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41b544:
    // 0x41b544: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41b548:
    // 0x41b548: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x41b548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_41b54c:
    // 0x41b54c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x41b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41b550:
    // 0x41b550: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x41b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_41b554:
    // 0x41b554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41b554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41b558:
    // 0x41b558: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x41b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41b55c:
    // 0x41b55c: 0xc0a997c  jal         func_2A65F0
label_41b560:
    if (ctx->pc == 0x41B560u) {
        ctx->pc = 0x41B560u;
            // 0x41b560: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x41B564u;
        goto label_41b564;
    }
    ctx->pc = 0x41B55Cu;
    SET_GPR_U32(ctx, 31, 0x41B564u);
    ctx->pc = 0x41B560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B55Cu;
            // 0x41b560: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B564u; }
        if (ctx->pc != 0x41B564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B564u; }
        if (ctx->pc != 0x41B564u) { return; }
    }
    ctx->pc = 0x41B564u;
label_41b564:
    // 0x41b564: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x41b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_41b568:
    // 0x41b568: 0xc0d879c  jal         func_361E70
label_41b56c:
    if (ctx->pc == 0x41B56Cu) {
        ctx->pc = 0x41B56Cu;
            // 0x41b56c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B570u;
        goto label_41b570;
    }
    ctx->pc = 0x41B568u;
    SET_GPR_U32(ctx, 31, 0x41B570u);
    ctx->pc = 0x41B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B568u;
            // 0x41b56c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B570u; }
        if (ctx->pc != 0x41B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B570u; }
        if (ctx->pc != 0x41B570u) { return; }
    }
    ctx->pc = 0x41B570u;
label_41b570:
    // 0x41b570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b574:
    // 0x41b574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b578:
    // 0x41b578: 0x3e00008  jr          $ra
label_41b57c:
    if (ctx->pc == 0x41B57Cu) {
        ctx->pc = 0x41B57Cu;
            // 0x41b57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41B580u;
        goto label_41b580;
    }
    ctx->pc = 0x41B578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B578u;
            // 0x41b57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B580u;
label_41b580:
    // 0x41b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41b584:
    // 0x41b584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b588:
    // 0x41b588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b58c:
    // 0x41b58c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x41b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_41b590:
    // 0x41b590: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_41b594:
    if (ctx->pc == 0x41B594u) {
        ctx->pc = 0x41B594u;
            // 0x41b594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B598u;
        goto label_41b598;
    }
    ctx->pc = 0x41B590u;
    {
        const bool branch_taken_0x41b590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B590u;
            // 0x41b594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b590) {
            ctx->pc = 0x41B6B0u;
            goto label_41b6b0;
        }
    }
    ctx->pc = 0x41B598u;
label_41b598:
    // 0x41b598: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x41b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41b59c:
    // 0x41b59c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x41b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_41b5a0:
    // 0x41b5a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x41b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_41b5a4:
    // 0x41b5a4: 0xc075128  jal         func_1D44A0
label_41b5a8:
    if (ctx->pc == 0x41B5A8u) {
        ctx->pc = 0x41B5A8u;
            // 0x41b5a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x41B5ACu;
        goto label_41b5ac;
    }
    ctx->pc = 0x41B5A4u;
    SET_GPR_U32(ctx, 31, 0x41B5ACu);
    ctx->pc = 0x41B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B5A4u;
            // 0x41b5a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B5ACu; }
        if (ctx->pc != 0x41B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B5ACu; }
        if (ctx->pc != 0x41B5ACu) { return; }
    }
    ctx->pc = 0x41B5ACu;
label_41b5ac:
    // 0x41b5ac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x41b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41b5b0:
    // 0x41b5b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b5b4:
    // 0x41b5b4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x41b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_41b5b8:
    // 0x41b5b8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x41b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_41b5bc:
    // 0x41b5bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41b5bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41b5c0:
    // 0x41b5c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41b5c4:
    if (ctx->pc == 0x41B5C4u) {
        ctx->pc = 0x41B5C4u;
            // 0x41b5c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x41B5C8u;
        goto label_41b5c8;
    }
    ctx->pc = 0x41B5C0u;
    {
        const bool branch_taken_0x41b5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B5C0u;
            // 0x41b5c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b5c0) {
            ctx->pc = 0x41B5D0u;
            goto label_41b5d0;
        }
    }
    ctx->pc = 0x41B5C8u;
label_41b5c8:
    // 0x41b5c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b5cc:
    // 0x41b5cc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x41b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_41b5d0:
    // 0x41b5d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x41b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b5d4:
    // 0x41b5d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b5d8:
    // 0x41b5d8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x41b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_41b5dc:
    // 0x41b5dc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x41b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41b5e0:
    // 0x41b5e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41b5e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41b5e4:
    // 0x41b5e4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41b5e8:
    if (ctx->pc == 0x41B5E8u) {
        ctx->pc = 0x41B5E8u;
            // 0x41b5e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41B5ECu;
        goto label_41b5ec;
    }
    ctx->pc = 0x41B5E4u;
    {
        const bool branch_taken_0x41b5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b5e4) {
            ctx->pc = 0x41B5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B5E4u;
            // 0x41b5e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B5F8u;
            goto label_41b5f8;
        }
    }
    ctx->pc = 0x41B5ECu;
label_41b5ec:
    // 0x41b5ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b5f0:
    // 0x41b5f0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x41b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_41b5f4:
    // 0x41b5f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x41b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b5f8:
    // 0x41b5f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b5fc:
    // 0x41b5fc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x41b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_41b600:
    // 0x41b600: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x41b600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41b604:
    // 0x41b604: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41b604u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41b608:
    // 0x41b608: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41b60c:
    if (ctx->pc == 0x41B60Cu) {
        ctx->pc = 0x41B60Cu;
            // 0x41b60c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x41B610u;
        goto label_41b610;
    }
    ctx->pc = 0x41B608u;
    {
        const bool branch_taken_0x41b608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b608) {
            ctx->pc = 0x41B60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B608u;
            // 0x41b60c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B61Cu;
            goto label_41b61c;
        }
    }
    ctx->pc = 0x41B610u;
label_41b610:
    // 0x41b610: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41b614:
    // 0x41b614: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x41b614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_41b618:
    // 0x41b618: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x41b618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41b61c:
    // 0x41b61c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41b61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41b620:
    // 0x41b620: 0x320f809  jalr        $t9
label_41b624:
    if (ctx->pc == 0x41B624u) {
        ctx->pc = 0x41B624u;
            // 0x41b624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B628u;
        goto label_41b628;
    }
    ctx->pc = 0x41B620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B628u);
        ctx->pc = 0x41B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B620u;
            // 0x41b624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B628u; }
            if (ctx->pc != 0x41B628u) { return; }
        }
        }
    }
    ctx->pc = 0x41B628u;
label_41b628:
    // 0x41b628: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x41b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41b62c:
    // 0x41b62c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b630:
    // 0x41b630: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x41b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_41b634:
    // 0x41b634: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x41b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_41b638:
    // 0x41b638: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x41b638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41b63c:
    // 0x41b63c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41b63cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41b640:
    // 0x41b640: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41b644:
    if (ctx->pc == 0x41B644u) {
        ctx->pc = 0x41B644u;
            // 0x41b644: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x41B648u;
        goto label_41b648;
    }
    ctx->pc = 0x41B640u;
    {
        const bool branch_taken_0x41b640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b640) {
            ctx->pc = 0x41B644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B640u;
            // 0x41b644: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B654u;
            goto label_41b654;
        }
    }
    ctx->pc = 0x41B648u;
label_41b648:
    // 0x41b648: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b64c:
    // 0x41b64c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x41b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_41b650:
    // 0x41b650: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x41b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41b654:
    // 0x41b654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b658:
    // 0x41b658: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x41b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_41b65c:
    // 0x41b65c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x41b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_41b660:
    // 0x41b660: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x41b660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41b664:
    // 0x41b664: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41b664u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41b668:
    // 0x41b668: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41b66c:
    if (ctx->pc == 0x41B66Cu) {
        ctx->pc = 0x41B670u;
        goto label_41b670;
    }
    ctx->pc = 0x41B668u;
    {
        const bool branch_taken_0x41b668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b668) {
            ctx->pc = 0x41B678u;
            goto label_41b678;
        }
    }
    ctx->pc = 0x41B670u;
label_41b670:
    // 0x41b670: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b674:
    // 0x41b674: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x41b674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_41b678:
    // 0x41b678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b67c:
    // 0x41b67c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x41b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_41b680:
    // 0x41b680: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x41b680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41b684:
    // 0x41b684: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41b688:
    if (ctx->pc == 0x41B688u) {
        ctx->pc = 0x41B68Cu;
        goto label_41b68c;
    }
    ctx->pc = 0x41B684u;
    {
        const bool branch_taken_0x41b684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b684) {
            ctx->pc = 0x41B694u;
            goto label_41b694;
        }
    }
    ctx->pc = 0x41B68Cu;
label_41b68c:
    // 0x41b68c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b690:
    // 0x41b690: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x41b690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_41b694:
    // 0x41b694: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b698:
    // 0x41b698: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x41b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_41b69c:
    // 0x41b69c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x41b69cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41b6a0:
    // 0x41b6a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41b6a4:
    if (ctx->pc == 0x41B6A4u) {
        ctx->pc = 0x41B6A4u;
            // 0x41b6a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x41B6A8u;
        goto label_41b6a8;
    }
    ctx->pc = 0x41B6A0u;
    {
        const bool branch_taken_0x41b6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b6a0) {
            ctx->pc = 0x41B6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6A0u;
            // 0x41b6a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B6B4u;
            goto label_41b6b4;
        }
    }
    ctx->pc = 0x41B6A8u;
label_41b6a8:
    // 0x41b6a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41b6ac:
    // 0x41b6ac: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x41b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_41b6b0:
    // 0x41b6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b6b4:
    // 0x41b6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b6b8:
    // 0x41b6b8: 0x3e00008  jr          $ra
label_41b6bc:
    if (ctx->pc == 0x41B6BCu) {
        ctx->pc = 0x41B6BCu;
            // 0x41b6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41B6C0u;
        goto label_41b6c0;
    }
    ctx->pc = 0x41B6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6B8u;
            // 0x41b6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B6C0u;
label_41b6c0:
    // 0x41b6c0: 0x8106878  j           func_41A1E0
label_41b6c4:
    if (ctx->pc == 0x41B6C4u) {
        ctx->pc = 0x41B6C4u;
            // 0x41b6c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41B6C8u;
        goto label_41b6c8;
    }
    ctx->pc = 0x41B6C0u;
    ctx->pc = 0x41B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6C0u;
            // 0x41b6c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x41A1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x41B6C8u;
label_41b6c8:
    // 0x41b6c8: 0x0  nop
    ctx->pc = 0x41b6c8u;
    // NOP
label_41b6cc:
    // 0x41b6cc: 0x0  nop
    ctx->pc = 0x41b6ccu;
    // NOP
label_41b6d0:
    // 0x41b6d0: 0x8106cdc  j           func_41B370
label_41b6d4:
    if (ctx->pc == 0x41B6D4u) {
        ctx->pc = 0x41B6D4u;
            // 0x41b6d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41B6D8u;
        goto label_41b6d8;
    }
    ctx->pc = 0x41B6D0u;
    ctx->pc = 0x41B6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6D0u;
            // 0x41b6d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41B370u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_41b370;
    ctx->pc = 0x41B6D8u;
label_41b6d8:
    // 0x41b6d8: 0x0  nop
    ctx->pc = 0x41b6d8u;
    // NOP
label_41b6dc:
    // 0x41b6dc: 0x0  nop
    ctx->pc = 0x41b6dcu;
    // NOP
label_41b6e0:
    // 0x41b6e0: 0x81068e0  j           func_41A380
label_41b6e4:
    if (ctx->pc == 0x41B6E4u) {
        ctx->pc = 0x41B6E4u;
            // 0x41b6e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41B6E8u;
        goto label_41b6e8;
    }
    ctx->pc = 0x41B6E0u;
    ctx->pc = 0x41B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6E0u;
            // 0x41b6e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (runtime->hasFunction(0x41A380u)) {
        auto targetFn = runtime->lookupFunction(0x41A380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0041A380_0x41a380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x41B6E8u;
label_41b6e8:
    // 0x41b6e8: 0x0  nop
    ctx->pc = 0x41b6e8u;
    // NOP
label_41b6ec:
    // 0x41b6ec: 0x0  nop
    ctx->pc = 0x41b6ecu;
    // NOP
label_41b6f0:
    // 0x41b6f0: 0x810663c  j           func_4198F0
label_41b6f4:
    if (ctx->pc == 0x41B6F4u) {
        ctx->pc = 0x41B6F4u;
            // 0x41b6f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x41B6F8u;
        goto label_41b6f8;
    }
    ctx->pc = 0x41B6F0u;
    ctx->pc = 0x41B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B6F0u;
            // 0x41b6f4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4198F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4198F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x41B6F8u;
label_41b6f8:
    // 0x41b6f8: 0x0  nop
    ctx->pc = 0x41b6f8u;
    // NOP
label_41b6fc:
    // 0x41b6fc: 0x0  nop
    ctx->pc = 0x41b6fcu;
    // NOP
label_41b700:
    // 0x41b700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b704:
    // 0x41b704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41b708:
    // 0x41b708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41b70c:
    // 0x41b70c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b710:
    // 0x41b710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b714:
    // 0x41b714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b718:
    // 0x41b718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b71c:
    // 0x41b71c: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_41b720:
    if (ctx->pc == 0x41B720u) {
        ctx->pc = 0x41B720u;
            // 0x41b720: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B724u;
        goto label_41b724;
    }
    ctx->pc = 0x41B71Cu;
    {
        const bool branch_taken_0x41b71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B71Cu;
            // 0x41b720: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b71c) {
            ctx->pc = 0x41B7D0u;
            goto label_41b7d0;
        }
    }
    ctx->pc = 0x41B724u;
label_41b724:
    // 0x41b724: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b728:
    // 0x41b728: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b72c:
    // 0x41b72c: 0x2463b7b0  addiu       $v1, $v1, -0x4850
    ctx->pc = 0x41b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948784));
label_41b730:
    // 0x41b730: 0x2442b7e8  addiu       $v0, $v0, -0x4818
    ctx->pc = 0x41b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948840));
label_41b734:
    // 0x41b734: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b738:
    // 0x41b738: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x41b738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b73c:
    // 0x41b73c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41b740:
    // 0x41b740: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x41b740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_41b744:
    // 0x41b744: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x41b744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_41b748:
    // 0x41b748: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41b74c:
    if (ctx->pc == 0x41B74Cu) {
        ctx->pc = 0x41B750u;
        goto label_41b750;
    }
    ctx->pc = 0x41B748u;
    {
        const bool branch_taken_0x41b748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b748) {
            ctx->pc = 0x41B760u;
            goto label_41b760;
        }
    }
    ctx->pc = 0x41B750u;
label_41b750:
    // 0x41b750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b754:
    // 0x41b754: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41b754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41b758:
    // 0x41b758: 0x320f809  jalr        $t9
label_41b75c:
    if (ctx->pc == 0x41B75Cu) {
        ctx->pc = 0x41B75Cu;
            // 0x41b75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41B760u;
        goto label_41b760;
    }
    ctx->pc = 0x41B758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B760u);
        ctx->pc = 0x41B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B758u;
            // 0x41b75c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B760u; }
            if (ctx->pc != 0x41B760u) { return; }
        }
        }
    }
    ctx->pc = 0x41B760u;
label_41b760:
    // 0x41b760: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x41b760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_41b764:
    // 0x41b764: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41b768:
    if (ctx->pc == 0x41B768u) {
        ctx->pc = 0x41B76Cu;
        goto label_41b76c;
    }
    ctx->pc = 0x41B764u;
    {
        const bool branch_taken_0x41b764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b764) {
            ctx->pc = 0x41B780u;
            goto label_41b780;
        }
    }
    ctx->pc = 0x41B76Cu;
label_41b76c:
    // 0x41b76c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b770:
    // 0x41b770: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41b770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41b774:
    // 0x41b774: 0x320f809  jalr        $t9
label_41b778:
    if (ctx->pc == 0x41B778u) {
        ctx->pc = 0x41B778u;
            // 0x41b778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41B77Cu;
        goto label_41b77c;
    }
    ctx->pc = 0x41B774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B77Cu);
        ctx->pc = 0x41B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B774u;
            // 0x41b778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B77Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B77Cu; }
            if (ctx->pc != 0x41B77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41B77Cu;
label_41b77c:
    // 0x41b77c: 0x0  nop
    ctx->pc = 0x41b77cu;
    // NOP
label_41b780:
    // 0x41b780: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x41b780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_41b784:
    // 0x41b784: 0x661ffef  bgez        $s3, . + 4 + (-0x11 << 2)
label_41b788:
    if (ctx->pc == 0x41B788u) {
        ctx->pc = 0x41B788u;
            // 0x41b788: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x41B78Cu;
        goto label_41b78c;
    }
    ctx->pc = 0x41B784u;
    {
        const bool branch_taken_0x41b784 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x41B788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B784u;
            // 0x41b788: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b784) {
            ctx->pc = 0x41B744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41b744;
        }
    }
    ctx->pc = 0x41B78Cu;
label_41b78c:
    // 0x41b78c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_41b790:
    if (ctx->pc == 0x41B790u) {
        ctx->pc = 0x41B790u;
            // 0x41b790: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41B794u;
        goto label_41b794;
    }
    ctx->pc = 0x41B78Cu;
    {
        const bool branch_taken_0x41b78c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b78c) {
            ctx->pc = 0x41B790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B78Cu;
            // 0x41b790: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B7BCu;
            goto label_41b7bc;
        }
    }
    ctx->pc = 0x41B794u;
label_41b794:
    // 0x41b794: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b798:
    // 0x41b798: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b79c:
    // 0x41b79c: 0x2463b8a0  addiu       $v1, $v1, -0x4760
    ctx->pc = 0x41b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949024));
label_41b7a0:
    // 0x41b7a0: 0x2442b8d8  addiu       $v0, $v0, -0x4728
    ctx->pc = 0x41b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949080));
label_41b7a4:
    // 0x41b7a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b7a8:
    // 0x41b7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b7ac:
    // 0x41b7ac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41b7b0:
    // 0x41b7b0: 0xc106dfc  jal         func_41B7F0
label_41b7b4:
    if (ctx->pc == 0x41B7B4u) {
        ctx->pc = 0x41B7B4u;
            // 0x41b7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B7B8u;
        goto label_41b7b8;
    }
    ctx->pc = 0x41B7B0u;
    SET_GPR_U32(ctx, 31, 0x41B7B8u);
    ctx->pc = 0x41B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B7B0u;
            // 0x41b7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41B7F0u;
    if (runtime->hasFunction(0x41B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x41B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B7B8u; }
        if (ctx->pc != 0x41B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041B7F0_0x41b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B7B8u; }
        if (ctx->pc != 0x41B7B8u) { return; }
    }
    ctx->pc = 0x41B7B8u;
label_41b7b8:
    // 0x41b7b8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41b7bc:
    // 0x41b7bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41b7bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41b7c0:
    // 0x41b7c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41b7c4:
    if (ctx->pc == 0x41B7C4u) {
        ctx->pc = 0x41B7C4u;
            // 0x41b7c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B7C8u;
        goto label_41b7c8;
    }
    ctx->pc = 0x41B7C0u;
    {
        const bool branch_taken_0x41b7c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41b7c0) {
            ctx->pc = 0x41B7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B7C0u;
            // 0x41b7c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B7D4u;
            goto label_41b7d4;
        }
    }
    ctx->pc = 0x41B7C8u;
label_41b7c8:
    // 0x41b7c8: 0xc0400a8  jal         func_1002A0
label_41b7cc:
    if (ctx->pc == 0x41B7CCu) {
        ctx->pc = 0x41B7CCu;
            // 0x41b7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B7D0u;
        goto label_41b7d0;
    }
    ctx->pc = 0x41B7C8u;
    SET_GPR_U32(ctx, 31, 0x41B7D0u);
    ctx->pc = 0x41B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B7C8u;
            // 0x41b7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B7D0u; }
        if (ctx->pc != 0x41B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B7D0u; }
        if (ctx->pc != 0x41B7D0u) { return; }
    }
    ctx->pc = 0x41B7D0u;
label_41b7d0:
    // 0x41b7d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41b7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b7d4:
    // 0x41b7d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41b7d8:
    // 0x41b7d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41b7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b7dc:
    // 0x41b7dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b7e0:
    // 0x41b7e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b7e4:
    // 0x41b7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b7e8:
    // 0x41b7e8: 0x3e00008  jr          $ra
label_41b7ec:
    if (ctx->pc == 0x41B7ECu) {
        ctx->pc = 0x41B7ECu;
            // 0x41b7ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41B7F0u;
        goto label_fallthrough_0x41b7e8;
    }
    ctx->pc = 0x41B7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B7E8u;
            // 0x41b7ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x41b7e8:
    ctx->pc = 0x41B7F0u;
}
