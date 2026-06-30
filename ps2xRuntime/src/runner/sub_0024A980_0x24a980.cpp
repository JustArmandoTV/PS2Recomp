#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A980
// Address: 0x24a980 - 0x24b080
void sub_0024A980_0x24a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A980_0x24a980");
#endif

    switch (ctx->pc) {
        case 0x24a980u: goto label_24a980;
        case 0x24a984u: goto label_24a984;
        case 0x24a988u: goto label_24a988;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a990u: goto label_24a990;
        case 0x24a994u: goto label_24a994;
        case 0x24a998u: goto label_24a998;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a0u: goto label_24a9a0;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9acu: goto label_24a9ac;
        case 0x24a9b0u: goto label_24a9b0;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24a9bcu: goto label_24a9bc;
        case 0x24a9c0u: goto label_24a9c0;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9ccu: goto label_24a9cc;
        case 0x24a9d0u: goto label_24a9d0;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9dcu: goto label_24a9dc;
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9e8u: goto label_24a9e8;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9f0u: goto label_24a9f0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa00u: goto label_24aa00;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa0cu: goto label_24aa0c;
        case 0x24aa10u: goto label_24aa10;
        case 0x24aa14u: goto label_24aa14;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa28u: goto label_24aa28;
        case 0x24aa2cu: goto label_24aa2c;
        case 0x24aa30u: goto label_24aa30;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa3cu: goto label_24aa3c;
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa44u: goto label_24aa44;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        case 0x24aac8u: goto label_24aac8;
        case 0x24aaccu: goto label_24aacc;
        case 0x24aad0u: goto label_24aad0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aad8u: goto label_24aad8;
        case 0x24aadcu: goto label_24aadc;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aae8u: goto label_24aae8;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf0u: goto label_24aaf0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24aafcu: goto label_24aafc;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab04u: goto label_24ab04;
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab18u: goto label_24ab18;
        case 0x24ab1cu: goto label_24ab1c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab2cu: goto label_24ab2c;
        case 0x24ab30u: goto label_24ab30;
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab3cu: goto label_24ab3c;
        case 0x24ab40u: goto label_24ab40;
        case 0x24ab44u: goto label_24ab44;
        case 0x24ab48u: goto label_24ab48;
        case 0x24ab4cu: goto label_24ab4c;
        case 0x24ab50u: goto label_24ab50;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab58u: goto label_24ab58;
        case 0x24ab5cu: goto label_24ab5c;
        case 0x24ab60u: goto label_24ab60;
        case 0x24ab64u: goto label_24ab64;
        case 0x24ab68u: goto label_24ab68;
        case 0x24ab6cu: goto label_24ab6c;
        case 0x24ab70u: goto label_24ab70;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab78u: goto label_24ab78;
        case 0x24ab7cu: goto label_24ab7c;
        case 0x24ab80u: goto label_24ab80;
        case 0x24ab84u: goto label_24ab84;
        case 0x24ab88u: goto label_24ab88;
        case 0x24ab8cu: goto label_24ab8c;
        case 0x24ab90u: goto label_24ab90;
        case 0x24ab94u: goto label_24ab94;
        case 0x24ab98u: goto label_24ab98;
        case 0x24ab9cu: goto label_24ab9c;
        case 0x24aba0u: goto label_24aba0;
        case 0x24aba4u: goto label_24aba4;
        case 0x24aba8u: goto label_24aba8;
        case 0x24abacu: goto label_24abac;
        case 0x24abb0u: goto label_24abb0;
        case 0x24abb4u: goto label_24abb4;
        case 0x24abb8u: goto label_24abb8;
        case 0x24abbcu: goto label_24abbc;
        case 0x24abc0u: goto label_24abc0;
        case 0x24abc4u: goto label_24abc4;
        case 0x24abc8u: goto label_24abc8;
        case 0x24abccu: goto label_24abcc;
        case 0x24abd0u: goto label_24abd0;
        case 0x24abd4u: goto label_24abd4;
        case 0x24abd8u: goto label_24abd8;
        case 0x24abdcu: goto label_24abdc;
        case 0x24abe0u: goto label_24abe0;
        case 0x24abe4u: goto label_24abe4;
        case 0x24abe8u: goto label_24abe8;
        case 0x24abecu: goto label_24abec;
        case 0x24abf0u: goto label_24abf0;
        case 0x24abf4u: goto label_24abf4;
        case 0x24abf8u: goto label_24abf8;
        case 0x24abfcu: goto label_24abfc;
        case 0x24ac00u: goto label_24ac00;
        case 0x24ac04u: goto label_24ac04;
        case 0x24ac08u: goto label_24ac08;
        case 0x24ac0cu: goto label_24ac0c;
        case 0x24ac10u: goto label_24ac10;
        case 0x24ac14u: goto label_24ac14;
        case 0x24ac18u: goto label_24ac18;
        case 0x24ac1cu: goto label_24ac1c;
        case 0x24ac20u: goto label_24ac20;
        case 0x24ac24u: goto label_24ac24;
        case 0x24ac28u: goto label_24ac28;
        case 0x24ac2cu: goto label_24ac2c;
        case 0x24ac30u: goto label_24ac30;
        case 0x24ac34u: goto label_24ac34;
        case 0x24ac38u: goto label_24ac38;
        case 0x24ac3cu: goto label_24ac3c;
        case 0x24ac40u: goto label_24ac40;
        case 0x24ac44u: goto label_24ac44;
        case 0x24ac48u: goto label_24ac48;
        case 0x24ac4cu: goto label_24ac4c;
        case 0x24ac50u: goto label_24ac50;
        case 0x24ac54u: goto label_24ac54;
        case 0x24ac58u: goto label_24ac58;
        case 0x24ac5cu: goto label_24ac5c;
        case 0x24ac60u: goto label_24ac60;
        case 0x24ac64u: goto label_24ac64;
        case 0x24ac68u: goto label_24ac68;
        case 0x24ac6cu: goto label_24ac6c;
        case 0x24ac70u: goto label_24ac70;
        case 0x24ac74u: goto label_24ac74;
        case 0x24ac78u: goto label_24ac78;
        case 0x24ac7cu: goto label_24ac7c;
        case 0x24ac80u: goto label_24ac80;
        case 0x24ac84u: goto label_24ac84;
        case 0x24ac88u: goto label_24ac88;
        case 0x24ac8cu: goto label_24ac8c;
        case 0x24ac90u: goto label_24ac90;
        case 0x24ac94u: goto label_24ac94;
        case 0x24ac98u: goto label_24ac98;
        case 0x24ac9cu: goto label_24ac9c;
        case 0x24aca0u: goto label_24aca0;
        case 0x24aca4u: goto label_24aca4;
        case 0x24aca8u: goto label_24aca8;
        case 0x24acacu: goto label_24acac;
        case 0x24acb0u: goto label_24acb0;
        case 0x24acb4u: goto label_24acb4;
        case 0x24acb8u: goto label_24acb8;
        case 0x24acbcu: goto label_24acbc;
        case 0x24acc0u: goto label_24acc0;
        case 0x24acc4u: goto label_24acc4;
        case 0x24acc8u: goto label_24acc8;
        case 0x24acccu: goto label_24accc;
        case 0x24acd0u: goto label_24acd0;
        case 0x24acd4u: goto label_24acd4;
        case 0x24acd8u: goto label_24acd8;
        case 0x24acdcu: goto label_24acdc;
        case 0x24ace0u: goto label_24ace0;
        case 0x24ace4u: goto label_24ace4;
        case 0x24ace8u: goto label_24ace8;
        case 0x24acecu: goto label_24acec;
        case 0x24acf0u: goto label_24acf0;
        case 0x24acf4u: goto label_24acf4;
        case 0x24acf8u: goto label_24acf8;
        case 0x24acfcu: goto label_24acfc;
        case 0x24ad00u: goto label_24ad00;
        case 0x24ad04u: goto label_24ad04;
        case 0x24ad08u: goto label_24ad08;
        case 0x24ad0cu: goto label_24ad0c;
        case 0x24ad10u: goto label_24ad10;
        case 0x24ad14u: goto label_24ad14;
        case 0x24ad18u: goto label_24ad18;
        case 0x24ad1cu: goto label_24ad1c;
        case 0x24ad20u: goto label_24ad20;
        case 0x24ad24u: goto label_24ad24;
        case 0x24ad28u: goto label_24ad28;
        case 0x24ad2cu: goto label_24ad2c;
        case 0x24ad30u: goto label_24ad30;
        case 0x24ad34u: goto label_24ad34;
        case 0x24ad38u: goto label_24ad38;
        case 0x24ad3cu: goto label_24ad3c;
        case 0x24ad40u: goto label_24ad40;
        case 0x24ad44u: goto label_24ad44;
        case 0x24ad48u: goto label_24ad48;
        case 0x24ad4cu: goto label_24ad4c;
        case 0x24ad50u: goto label_24ad50;
        case 0x24ad54u: goto label_24ad54;
        case 0x24ad58u: goto label_24ad58;
        case 0x24ad5cu: goto label_24ad5c;
        case 0x24ad60u: goto label_24ad60;
        case 0x24ad64u: goto label_24ad64;
        case 0x24ad68u: goto label_24ad68;
        case 0x24ad6cu: goto label_24ad6c;
        case 0x24ad70u: goto label_24ad70;
        case 0x24ad74u: goto label_24ad74;
        case 0x24ad78u: goto label_24ad78;
        case 0x24ad7cu: goto label_24ad7c;
        case 0x24ad80u: goto label_24ad80;
        case 0x24ad84u: goto label_24ad84;
        case 0x24ad88u: goto label_24ad88;
        case 0x24ad8cu: goto label_24ad8c;
        case 0x24ad90u: goto label_24ad90;
        case 0x24ad94u: goto label_24ad94;
        case 0x24ad98u: goto label_24ad98;
        case 0x24ad9cu: goto label_24ad9c;
        case 0x24ada0u: goto label_24ada0;
        case 0x24ada4u: goto label_24ada4;
        case 0x24ada8u: goto label_24ada8;
        case 0x24adacu: goto label_24adac;
        case 0x24adb0u: goto label_24adb0;
        case 0x24adb4u: goto label_24adb4;
        case 0x24adb8u: goto label_24adb8;
        case 0x24adbcu: goto label_24adbc;
        case 0x24adc0u: goto label_24adc0;
        case 0x24adc4u: goto label_24adc4;
        case 0x24adc8u: goto label_24adc8;
        case 0x24adccu: goto label_24adcc;
        case 0x24add0u: goto label_24add0;
        case 0x24add4u: goto label_24add4;
        case 0x24add8u: goto label_24add8;
        case 0x24addcu: goto label_24addc;
        case 0x24ade0u: goto label_24ade0;
        case 0x24ade4u: goto label_24ade4;
        case 0x24ade8u: goto label_24ade8;
        case 0x24adecu: goto label_24adec;
        case 0x24adf0u: goto label_24adf0;
        case 0x24adf4u: goto label_24adf4;
        case 0x24adf8u: goto label_24adf8;
        case 0x24adfcu: goto label_24adfc;
        case 0x24ae00u: goto label_24ae00;
        case 0x24ae04u: goto label_24ae04;
        case 0x24ae08u: goto label_24ae08;
        case 0x24ae0cu: goto label_24ae0c;
        case 0x24ae10u: goto label_24ae10;
        case 0x24ae14u: goto label_24ae14;
        case 0x24ae18u: goto label_24ae18;
        case 0x24ae1cu: goto label_24ae1c;
        case 0x24ae20u: goto label_24ae20;
        case 0x24ae24u: goto label_24ae24;
        case 0x24ae28u: goto label_24ae28;
        case 0x24ae2cu: goto label_24ae2c;
        case 0x24ae30u: goto label_24ae30;
        case 0x24ae34u: goto label_24ae34;
        case 0x24ae38u: goto label_24ae38;
        case 0x24ae3cu: goto label_24ae3c;
        case 0x24ae40u: goto label_24ae40;
        case 0x24ae44u: goto label_24ae44;
        case 0x24ae48u: goto label_24ae48;
        case 0x24ae4cu: goto label_24ae4c;
        case 0x24ae50u: goto label_24ae50;
        case 0x24ae54u: goto label_24ae54;
        case 0x24ae58u: goto label_24ae58;
        case 0x24ae5cu: goto label_24ae5c;
        case 0x24ae60u: goto label_24ae60;
        case 0x24ae64u: goto label_24ae64;
        case 0x24ae68u: goto label_24ae68;
        case 0x24ae6cu: goto label_24ae6c;
        case 0x24ae70u: goto label_24ae70;
        case 0x24ae74u: goto label_24ae74;
        case 0x24ae78u: goto label_24ae78;
        case 0x24ae7cu: goto label_24ae7c;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae84u: goto label_24ae84;
        case 0x24ae88u: goto label_24ae88;
        case 0x24ae8cu: goto label_24ae8c;
        case 0x24ae90u: goto label_24ae90;
        case 0x24ae94u: goto label_24ae94;
        case 0x24ae98u: goto label_24ae98;
        case 0x24ae9cu: goto label_24ae9c;
        case 0x24aea0u: goto label_24aea0;
        case 0x24aea4u: goto label_24aea4;
        case 0x24aea8u: goto label_24aea8;
        case 0x24aeacu: goto label_24aeac;
        case 0x24aeb0u: goto label_24aeb0;
        case 0x24aeb4u: goto label_24aeb4;
        case 0x24aeb8u: goto label_24aeb8;
        case 0x24aebcu: goto label_24aebc;
        case 0x24aec0u: goto label_24aec0;
        case 0x24aec4u: goto label_24aec4;
        case 0x24aec8u: goto label_24aec8;
        case 0x24aeccu: goto label_24aecc;
        case 0x24aed0u: goto label_24aed0;
        case 0x24aed4u: goto label_24aed4;
        case 0x24aed8u: goto label_24aed8;
        case 0x24aedcu: goto label_24aedc;
        case 0x24aee0u: goto label_24aee0;
        case 0x24aee4u: goto label_24aee4;
        case 0x24aee8u: goto label_24aee8;
        case 0x24aeecu: goto label_24aeec;
        case 0x24aef0u: goto label_24aef0;
        case 0x24aef4u: goto label_24aef4;
        case 0x24aef8u: goto label_24aef8;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af00u: goto label_24af00;
        case 0x24af04u: goto label_24af04;
        case 0x24af08u: goto label_24af08;
        case 0x24af0cu: goto label_24af0c;
        case 0x24af10u: goto label_24af10;
        case 0x24af14u: goto label_24af14;
        case 0x24af18u: goto label_24af18;
        case 0x24af1cu: goto label_24af1c;
        case 0x24af20u: goto label_24af20;
        case 0x24af24u: goto label_24af24;
        case 0x24af28u: goto label_24af28;
        case 0x24af2cu: goto label_24af2c;
        case 0x24af30u: goto label_24af30;
        case 0x24af34u: goto label_24af34;
        case 0x24af38u: goto label_24af38;
        case 0x24af3cu: goto label_24af3c;
        case 0x24af40u: goto label_24af40;
        case 0x24af44u: goto label_24af44;
        case 0x24af48u: goto label_24af48;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af50u: goto label_24af50;
        case 0x24af54u: goto label_24af54;
        case 0x24af58u: goto label_24af58;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af60u: goto label_24af60;
        case 0x24af64u: goto label_24af64;
        case 0x24af68u: goto label_24af68;
        case 0x24af6cu: goto label_24af6c;
        case 0x24af70u: goto label_24af70;
        case 0x24af74u: goto label_24af74;
        case 0x24af78u: goto label_24af78;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af80u: goto label_24af80;
        case 0x24af84u: goto label_24af84;
        case 0x24af88u: goto label_24af88;
        case 0x24af8cu: goto label_24af8c;
        case 0x24af90u: goto label_24af90;
        case 0x24af94u: goto label_24af94;
        case 0x24af98u: goto label_24af98;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afa4u: goto label_24afa4;
        case 0x24afa8u: goto label_24afa8;
        case 0x24afacu: goto label_24afac;
        case 0x24afb0u: goto label_24afb0;
        case 0x24afb4u: goto label_24afb4;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afbcu: goto label_24afbc;
        case 0x24afc0u: goto label_24afc0;
        case 0x24afc4u: goto label_24afc4;
        case 0x24afc8u: goto label_24afc8;
        case 0x24afccu: goto label_24afcc;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afd4u: goto label_24afd4;
        case 0x24afd8u: goto label_24afd8;
        case 0x24afdcu: goto label_24afdc;
        case 0x24afe0u: goto label_24afe0;
        case 0x24afe4u: goto label_24afe4;
        case 0x24afe8u: goto label_24afe8;
        case 0x24afecu: goto label_24afec;
        case 0x24aff0u: goto label_24aff0;
        case 0x24aff4u: goto label_24aff4;
        case 0x24aff8u: goto label_24aff8;
        case 0x24affcu: goto label_24affc;
        case 0x24b000u: goto label_24b000;
        case 0x24b004u: goto label_24b004;
        case 0x24b008u: goto label_24b008;
        case 0x24b00cu: goto label_24b00c;
        case 0x24b010u: goto label_24b010;
        case 0x24b014u: goto label_24b014;
        case 0x24b018u: goto label_24b018;
        case 0x24b01cu: goto label_24b01c;
        case 0x24b020u: goto label_24b020;
        case 0x24b024u: goto label_24b024;
        case 0x24b028u: goto label_24b028;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b030u: goto label_24b030;
        case 0x24b034u: goto label_24b034;
        case 0x24b038u: goto label_24b038;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b040u: goto label_24b040;
        case 0x24b044u: goto label_24b044;
        case 0x24b048u: goto label_24b048;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b050u: goto label_24b050;
        case 0x24b054u: goto label_24b054;
        case 0x24b058u: goto label_24b058;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b060u: goto label_24b060;
        case 0x24b064u: goto label_24b064;
        case 0x24b068u: goto label_24b068;
        case 0x24b06cu: goto label_24b06c;
        case 0x24b070u: goto label_24b070;
        case 0x24b074u: goto label_24b074;
        case 0x24b078u: goto label_24b078;
        case 0x24b07cu: goto label_24b07c;
        default: break;
    }

    ctx->pc = 0x24a980u;

label_24a980:
    // 0x24a980: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x24a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_24a984:
    // 0x24a984: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_24a988:
    // 0x24a988: 0x27a302c8  addiu       $v1, $sp, 0x2C8
    ctx->pc = 0x24a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_24a98c:
    // 0x24a98c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_24a990:
    // 0x24a990: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_24a994:
    // 0x24a994: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24a998:
    // 0x24a998: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24a99c:
    // 0x24a99c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24a9a0:
    // 0x24a9a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24a9a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24a9a4:
    // 0x24a9a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24a9a8:
    // 0x24a9a8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x24a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_24a9ac:
    // 0x24a9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24a9b0:
    // 0x24a9b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24a9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a9b4:
    // 0x24a9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a9b8:
    // 0x24a9b8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x24a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_24a9bc:
    // 0x24a9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24a9c0:
    // 0x24a9c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24a9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24a9c4:
    // 0x24a9c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x24a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_24a9c8:
    // 0x24a9c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x24a9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24a9cc:
    // 0x24a9cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24a9d0:
    // 0x24a9d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24a9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24a9d4:
    // 0x24a9d4: 0xa3a202c8  sb          $v0, 0x2C8($sp)
    ctx->pc = 0x24a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 712), (uint8_t)GPR_U32(ctx, 2));
label_24a9d8:
    // 0x24a9d8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24a9d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24a9dc:
    // 0x24a9dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24a9e0:
    if (ctx->pc == 0x24A9E0u) {
        ctx->pc = 0x24A9E0u;
            // 0x24a9e0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A9E4u;
        goto label_24a9e4;
    }
    ctx->pc = 0x24A9DCu;
    {
        const bool branch_taken_0x24a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A9DCu;
            // 0x24a9e0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9dc) {
            ctx->pc = 0x24AA10u;
            goto label_24aa10;
        }
    }
    ctx->pc = 0x24A9E4u;
label_24a9e4:
    // 0x24a9e4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x24a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24a9e8:
    // 0x24a9e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_24a9ec:
    // 0x24a9ec: 0x2442cf60  addiu       $v0, $v0, -0x30A0
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954848));
label_24a9f0:
    // 0x24a9f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24a9f4:
    // 0x24a9f4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_24a9f8:
    // 0x24a9f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_24a9fc:
    // 0x24a9fc: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_24aa00:
    // 0x24aa00: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x24aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_24aa04:
    // 0x24aa04: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x24aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_24aa08:
    // 0x24aa08: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24aa0c:
    // 0x24aa0c: 0x0  nop
    ctx->pc = 0x24aa0cu;
    // NOP
label_24aa10:
    // 0x24aa10: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24aa14:
    // 0x24aa14: 0xc6830050  lwc1        $f3, 0x50($s4)
    ctx->pc = 0x24aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24aa18:
    // 0x24aa18: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x24aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_24aa1c:
    // 0x24aa1c: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x24aa1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_24aa20:
    // 0x24aa20: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_24aa24:
    if (ctx->pc == 0x24AA24u) {
        ctx->pc = 0x24AA24u;
            // 0x24aa24: 0x2670000c  addiu       $s0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->pc = 0x24AA28u;
        goto label_24aa28;
    }
    ctx->pc = 0x24AA20u;
    {
        const bool branch_taken_0x24aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA20u;
            // 0x24aa24: 0x2670000c  addiu       $s0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa20) {
            ctx->pc = 0x24AB38u;
            goto label_24ab38;
        }
    }
    ctx->pc = 0x24AA28u;
label_24aa28:
    // 0x24aa28: 0x10000003  b           . + 4 + (0x3 << 2)
label_24aa2c:
    if (ctx->pc == 0x24AA2Cu) {
        ctx->pc = 0x24AA2Cu;
            // 0x24aa2c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x24AA30u;
        goto label_24aa30;
    }
    ctx->pc = 0x24AA28u;
    {
        const bool branch_taken_0x24aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA28u;
            // 0x24aa2c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa28) {
            ctx->pc = 0x24AA38u;
            goto label_24aa38;
        }
    }
    ctx->pc = 0x24AA30u;
label_24aa30:
    // 0x24aa30: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x24aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24aa34:
    // 0x24aa34: 0x0  nop
    ctx->pc = 0x24aa34u;
    // NOP
label_24aa38:
    // 0x24aa38: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24aa3c:
    // 0x24aa3c: 0x0  nop
    ctx->pc = 0x24aa3cu;
    // NOP
label_24aa40:
    // 0x24aa40: 0x0  nop
    ctx->pc = 0x24aa40u;
    // NOP
label_24aa44:
    // 0x24aa44: 0x0  nop
    ctx->pc = 0x24aa44u;
    // NOP
label_24aa48:
    // 0x24aa48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_24aa4c:
    if (ctx->pc == 0x24AA4Cu) {
        ctx->pc = 0x24AA50u;
        goto label_24aa50;
    }
    ctx->pc = 0x24AA48u;
    {
        const bool branch_taken_0x24aa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa48) {
            ctx->pc = 0x24AA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24aa30;
        }
    }
    ctx->pc = 0x24AA50u;
label_24aa50:
    // 0x24aa50: 0xc46c0020  lwc1        $f12, 0x20($v1)
    ctx->pc = 0x24aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24aa54:
    // 0x24aa54: 0x10000004  b           . + 4 + (0x4 << 2)
label_24aa58:
    if (ctx->pc == 0x24AA58u) {
        ctx->pc = 0x24AA58u;
            // 0x24aa58: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x24AA5Cu;
        goto label_24aa5c;
    }
    ctx->pc = 0x24AA54u;
    {
        const bool branch_taken_0x24aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AA54u;
            // 0x24aa58: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa54) {
            ctx->pc = 0x24AA68u;
            goto label_24aa68;
        }
    }
    ctx->pc = 0x24AA5Cu;
label_24aa5c:
    // 0x24aa5c: 0x0  nop
    ctx->pc = 0x24aa5cu;
    // NOP
label_24aa60:
    // 0x24aa60: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24aa64:
    // 0x24aa64: 0x0  nop
    ctx->pc = 0x24aa64u;
    // NOP
label_24aa68:
    // 0x24aa68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24aa6c:
    // 0x24aa6c: 0x0  nop
    ctx->pc = 0x24aa6cu;
    // NOP
label_24aa70:
    // 0x24aa70: 0x0  nop
    ctx->pc = 0x24aa70u;
    // NOP
label_24aa74:
    // 0x24aa74: 0x0  nop
    ctx->pc = 0x24aa74u;
    // NOP
label_24aa78:
    // 0x24aa78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_24aa7c:
    if (ctx->pc == 0x24AA7Cu) {
        ctx->pc = 0x24AA80u;
        goto label_24aa80;
    }
    ctx->pc = 0x24AA78u;
    {
        const bool branch_taken_0x24aa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa78) {
            ctx->pc = 0x24AA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24aa60;
        }
    }
    ctx->pc = 0x24AA80u;
label_24aa80:
    // 0x24aa80: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x24aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aa84:
    // 0x24aa84: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x24aa84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24aa88:
    // 0x24aa88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_24aa8c:
    if (ctx->pc == 0x24AA8Cu) {
        ctx->pc = 0x24AA90u;
        goto label_24aa90;
    }
    ctx->pc = 0x24AA88u;
    {
        const bool branch_taken_0x24aa88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aa88) {
            ctx->pc = 0x24AA98u;
            goto label_24aa98;
        }
    }
    ctx->pc = 0x24AA90u;
label_24aa90:
    // 0x24aa90: 0x10000003  b           . + 4 + (0x3 << 2)
label_24aa94:
    if (ctx->pc == 0x24AA94u) {
        ctx->pc = 0x24AA98u;
        goto label_24aa98;
    }
    ctx->pc = 0x24AA90u;
    {
        const bool branch_taken_0x24aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa90) {
            ctx->pc = 0x24AAA0u;
            goto label_24aaa0;
        }
    }
    ctx->pc = 0x24AA98u;
label_24aa98:
    // 0x24aa98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24aa98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_24aa9c:
    // 0x24aa9c: 0x0  nop
    ctx->pc = 0x24aa9cu;
    // NOP
label_24aaa0:
    // 0x24aaa0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x24aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aaa4:
    // 0x24aaa4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x24aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aaa8:
    // 0x24aaa8: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x24aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24aaac:
    // 0x24aaac: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x24aaacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_24aab0:
    // 0x24aab0: 0x460c0342  mul.s       $f13, $f0, $f12
    ctx->pc = 0x24aab0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_24aab4:
    // 0x24aab4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24aab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24aab8:
    // 0x24aab8: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x24aab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24aabc:
    // 0x24aabc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24aac0:
    if (ctx->pc == 0x24AAC0u) {
        ctx->pc = 0x24AAC4u;
        goto label_24aac4;
    }
    ctx->pc = 0x24AABCu;
    {
        const bool branch_taken_0x24aabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aabc) {
            ctx->pc = 0x24AAD0u;
            goto label_24aad0;
        }
    }
    ctx->pc = 0x24AAC4u;
label_24aac4:
    // 0x24aac4: 0x10000004  b           . + 4 + (0x4 << 2)
label_24aac8:
    if (ctx->pc == 0x24AAC8u) {
        ctx->pc = 0x24AACCu;
        goto label_24aacc;
    }
    ctx->pc = 0x24AAC4u;
    {
        const bool branch_taken_0x24aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aac4) {
            ctx->pc = 0x24AAD8u;
            goto label_24aad8;
        }
    }
    ctx->pc = 0x24AACCu;
label_24aacc:
    // 0x24aacc: 0x0  nop
    ctx->pc = 0x24aaccu;
    // NOP
label_24aad0:
    // 0x24aad0: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x24aad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_24aad4:
    // 0x24aad4: 0x0  nop
    ctx->pc = 0x24aad4u;
    // NOP
label_24aad8:
    // 0x24aad8: 0x460d1834  c.lt.s      $f3, $f13
    ctx->pc = 0x24aad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24aadc:
    // 0x24aadc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_24aae0:
    if (ctx->pc == 0x24AAE0u) {
        ctx->pc = 0x24AAE4u;
        goto label_24aae4;
    }
    ctx->pc = 0x24AADCu;
    {
        const bool branch_taken_0x24aadc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aadc) {
            ctx->pc = 0x24AB38u;
            goto label_24ab38;
        }
    }
    ctx->pc = 0x24AAE4u;
label_24aae4:
    // 0x24aae4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x24aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aae8:
    // 0x24aae8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x24aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aaec:
    // 0x24aaec: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x24aaecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_24aaf0:
    // 0x24aaf0: 0x460c0382  mul.s       $f14, $f0, $f12
    ctx->pc = 0x24aaf0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_24aaf4:
    // 0x24aaf4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24aaf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24aaf8:
    // 0x24aaf8: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x24aaf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24aafc:
    // 0x24aafc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24ab00:
    if (ctx->pc == 0x24AB00u) {
        ctx->pc = 0x24AB04u;
        goto label_24ab04;
    }
    ctx->pc = 0x24AAFCu;
    {
        const bool branch_taken_0x24aafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aafc) {
            ctx->pc = 0x24AB10u;
            goto label_24ab10;
        }
    }
    ctx->pc = 0x24AB04u;
label_24ab04:
    // 0x24ab04: 0x10000004  b           . + 4 + (0x4 << 2)
label_24ab08:
    if (ctx->pc == 0x24AB08u) {
        ctx->pc = 0x24AB0Cu;
        goto label_24ab0c;
    }
    ctx->pc = 0x24AB04u;
    {
        const bool branch_taken_0x24ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab04) {
            ctx->pc = 0x24AB18u;
            goto label_24ab18;
        }
    }
    ctx->pc = 0x24AB0Cu;
label_24ab0c:
    // 0x24ab0c: 0x0  nop
    ctx->pc = 0x24ab0cu;
    // NOP
label_24ab10:
    // 0x24ab10: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x24ab10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
label_24ab14:
    // 0x24ab14: 0x0  nop
    ctx->pc = 0x24ab14u;
    // NOP
label_24ab18:
    // 0x24ab18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24ab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ab1c:
    // 0x24ab1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24ab1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ab20:
    // 0x24ab20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24ab20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ab24:
    // 0x24ab24: 0xc09785c  jal         func_25E170
label_24ab28:
    if (ctx->pc == 0x24AB28u) {
        ctx->pc = 0x24AB28u;
            // 0x24ab28: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AB2Cu;
        goto label_24ab2c;
    }
    ctx->pc = 0x24AB24u;
    SET_GPR_U32(ctx, 31, 0x24AB2Cu);
    ctx->pc = 0x24AB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB24u;
            // 0x24ab28: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E170u;
    if (runtime->hasFunction(0x25E170u)) {
        auto targetFn = runtime->lookupFunction(0x25E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB2Cu; }
        if (ctx->pc != 0x24AB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E170_0x25e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB2Cu; }
        if (ctx->pc != 0x24AB2Cu) { return; }
    }
    ctx->pc = 0x24AB2Cu;
label_24ab2c:
    // 0x24ab2c: 0x1000011c  b           . + 4 + (0x11C << 2)
label_24ab30:
    if (ctx->pc == 0x24AB30u) {
        ctx->pc = 0x24AB34u;
        goto label_24ab34;
    }
    ctx->pc = 0x24AB2Cu;
    {
        const bool branch_taken_0x24ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab2c) {
            ctx->pc = 0x24AFA0u;
            goto label_24afa0;
        }
    }
    ctx->pc = 0x24AB34u;
label_24ab34:
    // 0x24ab34: 0x0  nop
    ctx->pc = 0x24ab34u;
    // NOP
label_24ab38:
    // 0x24ab38: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x24ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ab3c:
    // 0x24ab3c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x24ab3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ab40:
    // 0x24ab40: 0x45010117  bc1t        . + 4 + (0x117 << 2)
label_24ab44:
    if (ctx->pc == 0x24AB44u) {
        ctx->pc = 0x24AB48u;
        goto label_24ab48;
    }
    ctx->pc = 0x24AB40u;
    {
        const bool branch_taken_0x24ab40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ab40) {
            ctx->pc = 0x24AFA0u;
            goto label_24afa0;
        }
    }
    ctx->pc = 0x24AB48u;
label_24ab48:
    // 0x24ab48: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x24ab48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_24ab4c:
    // 0x24ab4c: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
label_24ab50:
    if (ctx->pc == 0x24AB50u) {
        ctx->pc = 0x24AB54u;
        goto label_24ab54;
    }
    ctx->pc = 0x24AB4Cu;
    {
        const bool branch_taken_0x24ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab4c) {
            ctx->pc = 0x24AFA0u;
            goto label_24afa0;
        }
    }
    ctx->pc = 0x24AB54u;
label_24ab54:
    // 0x24ab54: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x24ab54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_24ab58:
    // 0x24ab58: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x24ab58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_24ab5c:
    // 0x24ab5c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
label_24ab60:
    if (ctx->pc == 0x24AB60u) {
        ctx->pc = 0x24AB64u;
        goto label_24ab64;
    }
    ctx->pc = 0x24AB5Cu;
    {
        const bool branch_taken_0x24ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ab5c) {
            ctx->pc = 0x24AFC0u;
            goto label_24afc0;
        }
    }
    ctx->pc = 0x24AB64u;
label_24ab64:
    // 0x24ab64: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24ab68:
    // 0x24ab68: 0x8e9e0004  lw          $fp, 0x4($s4)
    ctx->pc = 0x24ab68u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_24ab6c:
    // 0x24ab6c: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x24ab6cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24ab70:
    // 0x24ab70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ab74:
    // 0x24ab74: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x24ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_24ab78:
    // 0x24ab78: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x24ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_24ab7c:
    // 0x24ab7c: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x24ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ab80:
    // 0x24ab80: 0x8fd60000  lw          $s6, 0x0($fp)
    ctx->pc = 0x24ab80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_24ab84:
    // 0x24ab84: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x24ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ab88:
    // 0x24ab88: 0xe7a102b0  swc1        $f1, 0x2B0($sp)
    ctx->pc = 0x24ab88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_24ab8c:
    // 0x24ab8c: 0xc7a102b0  lwc1        $f1, 0x2B0($sp)
    ctx->pc = 0x24ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ab90:
    // 0x24ab90: 0xc6c20010  lwc1        $f2, 0x10($s6)
    ctx->pc = 0x24ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ab94:
    // 0x24ab94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ab94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24ab98:
    // 0x24ab98: 0xe7a202b4  swc1        $f2, 0x2B4($sp)
    ctx->pc = 0x24ab98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_24ab9c:
    // 0x24ab9c: 0xc7a102b4  lwc1        $f1, 0x2B4($sp)
    ctx->pc = 0x24ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aba0:
    // 0x24aba0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24aba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24aba4:
    // 0x24aba4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24aba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_24aba8:
    // 0x24aba8: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x24aba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_24abac:
    // 0x24abac: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x24abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24abb0:
    // 0x24abb0: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x24abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_24abb4:
    // 0x24abb4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x24abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24abb8:
    // 0x24abb8: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x24abb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_24abbc:
    // 0x24abbc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x24abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24abc0:
    // 0x24abc0: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x24abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_24abc4:
    // 0x24abc4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x24abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24abc8:
    // 0x24abc8: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x24abc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_24abcc:
    // 0x24abcc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x24abccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_24abd0:
    // 0x24abd0: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
label_24abd4:
    if (ctx->pc == 0x24ABD4u) {
        ctx->pc = 0x24ABD8u;
        goto label_24abd8;
    }
    ctx->pc = 0x24ABD0u;
    {
        const bool branch_taken_0x24abd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24abd0) {
            ctx->pc = 0x24AF40u;
            goto label_24af40;
        }
    }
    ctx->pc = 0x24ABD8u;
label_24abd8:
    // 0x24abd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24abd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24abdc:
    // 0x24abdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24abe0:
    // 0x24abe0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_24abe4:
    // 0x24abe4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x24abe4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24abe8:
    // 0x24abe8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24abec:
    // 0x24abec: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x24abecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_24abf0:
    // 0x24abf0: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24abf4:
    // 0x24abf4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x24abf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_24abf8:
    // 0x24abf8: 0x320f809  jalr        $t9
label_24abfc:
    if (ctx->pc == 0x24ABFCu) {
        ctx->pc = 0x24ABFCu;
            // 0x24abfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AC00u;
        goto label_24ac00;
    }
    ctx->pc = 0x24ABF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24AC00u);
        ctx->pc = 0x24ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABF8u;
            // 0x24abfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24AC00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24AC00u; }
            if (ctx->pc != 0x24AC00u) { return; }
        }
        }
    }
    ctx->pc = 0x24AC00u;
label_24ac00:
    // 0x24ac00: 0x8ee80008  lw          $t0, 0x8($s7)
    ctx->pc = 0x24ac00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_24ac04:
    // 0x24ac04: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x24ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_24ac08:
    // 0x24ac08: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x24ac08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24ac0c:
    // 0x24ac0c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x24ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_24ac10:
    // 0x24ac10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_24ac14:
    // 0x24ac14: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24ac18:
    // 0x24ac18: 0x27ad0160  addiu       $t5, $sp, 0x160
    ctx->pc = 0x24ac18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_24ac1c:
    // 0x24ac1c: 0x27ac0170  addiu       $t4, $sp, 0x170
    ctx->pc = 0x24ac1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24ac20:
    // 0x24ac20: 0x27ab0180  addiu       $t3, $sp, 0x180
    ctx->pc = 0x24ac20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_24ac24:
    // 0x24ac24: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x24ac24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_24ac28:
    // 0x24ac28: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x24ac28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_24ac2c:
    // 0x24ac2c: 0x24eeffff  addiu       $t6, $a3, -0x1
    ctx->pc = 0x24ac2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_24ac30:
    // 0x24ac30: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x24ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_24ac34:
    // 0x24ac34: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x24ac34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_24ac38:
    // 0x24ac38: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x24ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_24ac3c:
    // 0x24ac3c: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x24ac3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_24ac40:
    // 0x24ac40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x24ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_24ac44:
    // 0x24ac44: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x24ac44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_24ac48:
    // 0x24ac48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x24ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_24ac4c:
    // 0x24ac4c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x24ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac50:
    // 0x24ac50: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x24ac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_24ac54:
    // 0x24ac54: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x24ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac58:
    // 0x24ac58: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x24ac58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_24ac5c:
    // 0x24ac5c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x24ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac60:
    // 0x24ac60: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x24ac60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_24ac64:
    // 0x24ac64: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x24ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac68:
    // 0x24ac68: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x24ac68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_24ac6c:
    // 0x24ac6c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x24ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac70:
    // 0x24ac70: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x24ac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_24ac74:
    // 0x24ac74: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x24ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac78:
    // 0x24ac78: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x24ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_24ac7c:
    // 0x24ac7c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x24ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac80:
    // 0x24ac80: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x24ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_24ac84:
    // 0x24ac84: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x24ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac88:
    // 0x24ac88: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x24ac88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_24ac8c:
    // 0x24ac8c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x24ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac90:
    // 0x24ac90: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x24ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_24ac94:
    // 0x24ac94: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x24ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ac98:
    // 0x24ac98: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x24ac98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_24ac9c:
    // 0x24ac9c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x24ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aca0:
    // 0x24aca0: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x24aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_24aca4:
    // 0x24aca4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x24aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aca8:
    // 0x24aca8: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x24aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_24acac:
    // 0x24acac: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x24acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24acb0:
    // 0x24acb0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x24acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_24acb4:
    // 0x24acb4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x24acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24acb8:
    // 0x24acb8: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x24acb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_24acbc:
    // 0x24acbc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x24acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24acc0:
    // 0x24acc0: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x24acc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_24acc4:
    // 0x24acc4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x24acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24acc8:
    // 0x24acc8: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x24acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_24accc:
    // 0x24accc: 0x27a90174  addiu       $t1, $sp, 0x174
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_24acd0:
    // 0x24acd0: 0x27a80164  addiu       $t0, $sp, 0x164
    ctx->pc = 0x24acd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_24acd4:
    // 0x24acd4: 0x27a70184  addiu       $a3, $sp, 0x184
    ctx->pc = 0x24acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_24acd8:
    // 0x24acd8: 0x27a60194  addiu       $a2, $sp, 0x194
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_24acdc:
    // 0x24acdc: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x24acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_24ace0:
    // 0x24ace0: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x24ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_24ace4:
    // 0x24ace4: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x24ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_24ace8:
    // 0x24ace8: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x24ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_24acec:
    // 0x24acec: 0x0  nop
    ctx->pc = 0x24acecu;
    // NOP
label_24acf0:
    // 0x24acf0: 0xe7900  sll         $t7, $t6, 4
    ctx->pc = 0x24acf0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_24acf4:
    // 0x24acf4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x24acf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_24acf8:
    // 0x24acf8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x24acf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_24acfc:
    // 0x24acfc: 0x25ef01a0  addiu       $t7, $t7, 0x1A0
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 416));
label_24ad00:
    // 0x24ad00: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x24ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ad04:
    // 0x24ad04: 0xc5e60000  lwc1        $f6, 0x0($t7)
    ctx->pc = 0x24ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24ad08:
    // 0x24ad08: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x24ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ad0c:
    // 0x24ad0c: 0xc5e50004  lwc1        $f5, 0x4($t7)
    ctx->pc = 0x24ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24ad10:
    // 0x24ad10: 0xc5e40008  lwc1        $f4, 0x8($t7)
    ctx->pc = 0x24ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24ad14:
    // 0x24ad14: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x24ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ad18:
    // 0x24ad18: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x24ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ad1c:
    // 0x24ad1c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24ad1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24ad20:
    // 0x24ad20: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24ad20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24ad24:
    // 0x24ad24: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24ad24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24ad28:
    // 0x24ad28: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24ad28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24ad2c:
    // 0x24ad2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ad2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24ad30:
    // 0x24ad30: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x24ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_24ad34:
    // 0x24ad34: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x24ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ad38:
    // 0x24ad38: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x24ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ad3c:
    // 0x24ad3c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x24ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ad40:
    // 0x24ad40: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ad44:
    // 0x24ad44: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24ad44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24ad48:
    // 0x24ad48: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24ad48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24ad4c:
    // 0x24ad4c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24ad4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24ad50:
    // 0x24ad50: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24ad50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24ad54:
    // 0x24ad54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ad54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24ad58:
    // 0x24ad58: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x24ad58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_24ad5c:
    // 0x24ad5c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x24ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ad60:
    // 0x24ad60: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x24ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ad64:
    // 0x24ad64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ad68:
    // 0x24ad68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ad6c:
    // 0x24ad6c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24ad6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24ad70:
    // 0x24ad70: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24ad70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24ad74:
    // 0x24ad74: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24ad74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24ad78:
    // 0x24ad78: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24ad78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24ad7c:
    // 0x24ad7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24ad80:
    // 0x24ad80: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x24ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_24ad84:
    // 0x24ad84: 0x5c1ffda  bgez        $t6, . + 4 + (-0x26 << 2)
label_24ad88:
    if (ctx->pc == 0x24AD88u) {
        ctx->pc = 0x24AD88u;
            // 0x24ad88: 0xade0000c  sw          $zero, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x24AD8Cu;
        goto label_24ad8c;
    }
    ctx->pc = 0x24AD84u;
    {
        const bool branch_taken_0x24ad84 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x24AD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AD84u;
            // 0x24ad88: 0xade0000c  sw          $zero, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad84) {
            ctx->pc = 0x24ACF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24acf0;
        }
    }
    ctx->pc = 0x24AD8Cu;
label_24ad8c:
    // 0x24ad8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x24ad8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24ad90:
    // 0x24ad90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24ad94:
    // 0x24ad94: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x24ad94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24ad98:
    // 0x24ad98: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x24ad98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_24ad9c:
    // 0x24ad9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x24ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24ada0:
    // 0x24ada0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_24ada4:
    // 0x24ada4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x24ada4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_24ada8:
    // 0x24ada8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_24adac:
    // 0x24adac: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x24adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_24adb0:
    // 0x24adb0: 0x245201a0  addiu       $s2, $v0, 0x1A0
    ctx->pc = 0x24adb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_24adb4:
    // 0x24adb4: 0x320f809  jalr        $t9
label_24adb8:
    if (ctx->pc == 0x24ADB8u) {
        ctx->pc = 0x24ADB8u;
            // 0x24adb8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24ADBCu;
        goto label_24adbc;
    }
    ctx->pc = 0x24ADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24ADBCu);
        ctx->pc = 0x24ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ADB4u;
            // 0x24adb8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24ADBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24ADBCu; }
            if (ctx->pc != 0x24ADBCu) { return; }
        }
        }
    }
    ctx->pc = 0x24ADBCu;
label_24adbc:
    // 0x24adbc: 0x8fcc0008  lw          $t4, 0x8($fp)
    ctx->pc = 0x24adbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_24adc0:
    // 0x24adc0: 0x27ab00d0  addiu       $t3, $sp, 0xD0
    ctx->pc = 0x24adc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_24adc4:
    // 0x24adc4: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x24adc4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_24adc8:
    // 0x24adc8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x24adc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_24adcc:
    // 0x24adcc: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x24adccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_24add0:
    // 0x24add0: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x24add0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24add4:
    // 0x24add4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x24add4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_24add8:
    // 0x24add8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x24add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24addc:
    // 0x24addc: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_24ade0:
    // 0x24ade0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x24ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_24ade4:
    // 0x24ade4: 0x79870000  lq          $a3, 0x0($t4)
    ctx->pc = 0x24ade4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 0)));
label_24ade8:
    // 0x24ade8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24ade8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_24adec:
    // 0x24adec: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x24adecu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_24adf0:
    // 0x24adf0: 0x79870010  lq          $a3, 0x10($t4)
    ctx->pc = 0x24adf0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_24adf4:
    // 0x24adf4: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x24adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_24adf8:
    // 0x24adf8: 0x79870020  lq          $a3, 0x20($t4)
    ctx->pc = 0x24adf8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 32)));
label_24adfc:
    // 0x24adfc: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x24adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
label_24ae00:
    // 0x24ae00: 0x79870030  lq          $a3, 0x30($t4)
    ctx->pc = 0x24ae00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 12), 48)));
label_24ae04:
    // 0x24ae04: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x24ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_24ae08:
    // 0x24ae08: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x24ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae0c:
    // 0x24ae0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24ae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_24ae10:
    // 0x24ae10: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x24ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae14:
    // 0x24ae14: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x24ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_24ae18:
    // 0x24ae18: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x24ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae1c:
    // 0x24ae1c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x24ae1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_24ae20:
    // 0x24ae20: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x24ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae24:
    // 0x24ae24: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x24ae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_24ae28:
    // 0x24ae28: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x24ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae2c:
    // 0x24ae2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24ae2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_24ae30:
    // 0x24ae30: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x24ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae34:
    // 0x24ae34: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24ae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_24ae38:
    // 0x24ae38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x24ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae3c:
    // 0x24ae3c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_24ae40:
    // 0x24ae40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x24ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae44:
    // 0x24ae44: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x24ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_24ae48:
    // 0x24ae48: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae4c:
    // 0x24ae4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24ae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_24ae50:
    // 0x24ae50: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae54:
    // 0x24ae54: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x24ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_24ae58:
    // 0x24ae58: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x24ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae5c:
    // 0x24ae5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24ae5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24ae60:
    // 0x24ae60: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x24ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae64:
    // 0x24ae64: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x24ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_24ae68:
    // 0x24ae68: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x24ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae6c:
    // 0x24ae6c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_24ae70:
    // 0x24ae70: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x24ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae74:
    // 0x24ae74: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_24ae78:
    // 0x24ae78: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x24ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae7c:
    // 0x24ae7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_24ae80:
    // 0x24ae80: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x24ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ae84:
    // 0x24ae84: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_24ae88:
    // 0x24ae88: 0x27af0134  addiu       $t7, $sp, 0x134
    ctx->pc = 0x24ae88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_24ae8c:
    // 0x24ae8c: 0x27ae0124  addiu       $t6, $sp, 0x124
    ctx->pc = 0x24ae8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_24ae90:
    // 0x24ae90: 0x27ad0144  addiu       $t5, $sp, 0x144
    ctx->pc = 0x24ae90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_24ae94:
    // 0x24ae94: 0x27ac0154  addiu       $t4, $sp, 0x154
    ctx->pc = 0x24ae94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_24ae98:
    // 0x24ae98: 0x27ab0138  addiu       $t3, $sp, 0x138
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_24ae9c:
    // 0x24ae9c: 0x27aa0128  addiu       $t2, $sp, 0x128
    ctx->pc = 0x24ae9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_24aea0:
    // 0x24aea0: 0x27a90148  addiu       $t1, $sp, 0x148
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_24aea4:
    // 0x24aea4: 0x27a80158  addiu       $t0, $sp, 0x158
    ctx->pc = 0x24aea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_24aea8:
    // 0x24aea8: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x24aea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_24aeac:
    // 0x24aeac: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x24aeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_24aeb0:
    // 0x24aeb0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_24aeb4:
    // 0x24aeb4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x24aeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24aeb8:
    // 0x24aeb8: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x24aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24aebc:
    // 0x24aebc: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x24aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24aec0:
    // 0x24aec0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24aec4:
    // 0x24aec4: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x24aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24aec8:
    // 0x24aec8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aecc:
    // 0x24aecc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aed0:
    // 0x24aed0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24aed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24aed4:
    // 0x24aed4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24aed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24aed8:
    // 0x24aed8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24aed8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24aedc:
    // 0x24aedc: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24aedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24aee0:
    // 0x24aee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24aee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24aee4:
    // 0x24aee4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x24aee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_24aee8:
    // 0x24aee8: 0xc5c30000  lwc1        $f3, 0x0($t6)
    ctx->pc = 0x24aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24aeec:
    // 0x24aeec: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x24aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24aef0:
    // 0x24aef0: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x24aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aef4:
    // 0x24aef4: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x24aef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aef8:
    // 0x24aef8: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24aef8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24aefc:
    // 0x24aefc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24aefcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24af00:
    // 0x24af00: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24af00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24af04:
    // 0x24af04: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24af04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24af08:
    // 0x24af08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24af08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24af0c:
    // 0x24af0c: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x24af0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_24af10:
    // 0x24af10: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x24af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24af14:
    // 0x24af14: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x24af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24af18:
    // 0x24af18: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x24af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24af1c:
    // 0x24af1c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x24af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24af20:
    // 0x24af20: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24af20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_24af24:
    // 0x24af24: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24af24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24af28:
    // 0x24af28: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24af28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_24af2c:
    // 0x24af2c: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x24af2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_24af30:
    // 0x24af30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24af30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24af34:
    // 0x24af34: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x24af34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_24af38:
    // 0x24af38: 0x4c1ffdb  bgez        $a2, . + 4 + (-0x25 << 2)
label_24af3c:
    if (ctx->pc == 0x24AF3Cu) {
        ctx->pc = 0x24AF3Cu;
            // 0x24af3c: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x24AF40u;
        goto label_24af40;
    }
    ctx->pc = 0x24AF38u;
    {
        const bool branch_taken_0x24af38 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x24AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF38u;
            // 0x24af3c: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af38) {
            ctx->pc = 0x24AEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24aea8;
        }
    }
    ctx->pc = 0x24AF40u;
label_24af40:
    // 0x24af40: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x24af40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_24af44:
    // 0x24af44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24af48:
    // 0x24af48: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x24af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_24af4c:
    // 0x24af4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24af4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24af50:
    // 0x24af50: 0xc097f58  jal         func_25FD60
label_24af54:
    if (ctx->pc == 0x24AF54u) {
        ctx->pc = 0x24AF54u;
            // 0x24af54: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AF58u;
        goto label_24af58;
    }
    ctx->pc = 0x24AF50u;
    SET_GPR_U32(ctx, 31, 0x24AF58u);
    ctx->pc = 0x24AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF50u;
            // 0x24af54: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FD60u;
    if (runtime->hasFunction(0x25FD60u)) {
        auto targetFn = runtime->lookupFunction(0x25FD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF58u; }
        if (ctx->pc != 0x24AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FD60_0x25fd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AF58u; }
        if (ctx->pc != 0x24AF58u) { return; }
    }
    ctx->pc = 0x24AF58u;
label_24af58:
    // 0x24af58: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x24af58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_24af5c:
    // 0x24af5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_24af60:
    if (ctx->pc == 0x24AF60u) {
        ctx->pc = 0x24AF64u;
        goto label_24af64;
    }
    ctx->pc = 0x24AF5Cu;
    {
        const bool branch_taken_0x24af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af5c) {
            ctx->pc = 0x24AFC0u;
            goto label_24afc0;
        }
    }
    ctx->pc = 0x24AF64u;
label_24af64:
    // 0x24af64: 0x8e253050  lw          $a1, 0x3050($s1)
    ctx->pc = 0x24af64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_24af68:
    // 0x24af68: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_24af6c:
    if (ctx->pc == 0x24AF6Cu) {
        ctx->pc = 0x24AF70u;
        goto label_24af70;
    }
    ctx->pc = 0x24AF68u;
    {
        const bool branch_taken_0x24af68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af68) {
            ctx->pc = 0x24AFC0u;
            goto label_24afc0;
        }
    }
    ctx->pc = 0x24AF70u;
label_24af70:
    // 0x24af70: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x24af70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24af74:
    // 0x24af74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x24af74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24af78:
    // 0x24af78: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x24af78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24af7c:
    // 0x24af7c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x24af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_24af80:
    // 0x24af80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24af84:
    // 0x24af84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24af88:
    // 0x24af88: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x24af88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24af8c:
    // 0x24af8c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x24af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_24af90:
    // 0x24af90: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24af90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_24af94:
    // 0x24af94: 0x1000000a  b           . + 4 + (0xA << 2)
label_24af98:
    if (ctx->pc == 0x24AF98u) {
        ctx->pc = 0x24AF98u;
            // 0x24af98: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x24AF9Cu;
        goto label_24af9c;
    }
    ctx->pc = 0x24AF94u;
    {
        const bool branch_taken_0x24af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AF94u;
            // 0x24af98: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af94) {
            ctx->pc = 0x24AFC0u;
            goto label_24afc0;
        }
    }
    ctx->pc = 0x24AF9Cu;
label_24af9c:
    // 0x24af9c: 0x0  nop
    ctx->pc = 0x24af9cu;
    // NOP
label_24afa0:
    // 0x24afa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24afa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24afa4:
    // 0x24afa4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x24afa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24afa8:
    // 0x24afa8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x24afa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24afac:
    // 0x24afac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24afacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24afb0:
    // 0x24afb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24afb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24afb4:
    // 0x24afb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24afb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24afb8:
    // 0x24afb8: 0xc097378  jal         func_25CDE0
label_24afbc:
    if (ctx->pc == 0x24AFBCu) {
        ctx->pc = 0x24AFBCu;
            // 0x24afbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24AFC0u;
        goto label_24afc0;
    }
    ctx->pc = 0x24AFB8u;
    SET_GPR_U32(ctx, 31, 0x24AFC0u);
    ctx->pc = 0x24AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AFB8u;
            // 0x24afbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CDE0u;
    if (runtime->hasFunction(0x25CDE0u)) {
        auto targetFn = runtime->lookupFunction(0x25CDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFC0u; }
        if (ctx->pc != 0x24AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CDE0_0x25cde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AFC0u; }
        if (ctx->pc != 0x24AFC0u) { return; }
    }
    ctx->pc = 0x24AFC0u;
label_24afc0:
    // 0x24afc0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x24afc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_24afc4:
    // 0x24afc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x24afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_24afc8:
    // 0x24afc8: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x24afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_24afcc:
    // 0x24afcc: 0x2463ea60  addiu       $v1, $v1, -0x15A0
    ctx->pc = 0x24afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_24afd0:
    // 0x24afd0: 0x27a702c4  addiu       $a3, $sp, 0x2C4
    ctx->pc = 0x24afd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_24afd4:
    // 0x24afd4: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x24afd4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_24afd8:
    // 0x24afd8: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x24afd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_24afdc:
    // 0x24afdc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x24afdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24afe0:
    // 0x24afe0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x24afe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_24afe4:
    // 0x24afe4: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x24afe4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24afe8:
    // 0x24afe8: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x24afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24afec:
    // 0x24afec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x24afecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_24aff0:
    // 0x24aff0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_24aff4:
    // 0x24aff4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x24aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24aff8:
    // 0x24aff8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_24affc:
    // 0x24affc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x24affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24b000:
    // 0x24b000: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x24b000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_24b004:
    // 0x24b004: 0xa3a202c4  sb          $v0, 0x2C4($sp)
    ctx->pc = 0x24b004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 708), (uint8_t)GPR_U32(ctx, 2));
label_24b008:
    // 0x24b008: 0x24a2001b  addiu       $v0, $a1, 0x1B
    ctx->pc = 0x24b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
label_24b00c:
    // 0x24b00c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24b00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_24b010:
    // 0x24b010: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x24b010u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_24b014:
    // 0x24b014: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_24b018:
    if (ctx->pc == 0x24B018u) {
        ctx->pc = 0x24B018u;
            // 0x24b018: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x24B01Cu;
        goto label_24b01c;
    }
    ctx->pc = 0x24B014u;
    {
        const bool branch_taken_0x24b014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B014u;
            // 0x24b018: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b014) {
            ctx->pc = 0x24B048u;
            goto label_24b048;
        }
    }
    ctx->pc = 0x24B01Cu;
label_24b01c:
    // 0x24b01c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x24b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24b020:
    // 0x24b020: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x24b020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_24b024:
    // 0x24b024: 0x2484d618  addiu       $a0, $a0, -0x29E8
    ctx->pc = 0x24b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956568));
label_24b028:
    // 0x24b028: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x24b028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_24b02c:
    // 0x24b02c: 0x4004c801  .word       0x4004C801                   # mfc0        $a0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_24b030:
    // 0x24b030: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x24b030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_24b034:
    // 0x24b034: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b034u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_24b038:
    // 0x24b038: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x24b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_24b03c:
    // 0x24b03c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x24b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_24b040:
    // 0x24b040: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24b040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_24b044:
    // 0x24b044: 0x0  nop
    ctx->pc = 0x24b044u;
    // NOP
label_24b048:
    // 0x24b048: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24b04c:
    // 0x24b04c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24b04cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24b050:
    // 0x24b050: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24b050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24b054:
    // 0x24b054: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24b054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24b058:
    // 0x24b058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24b058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24b05c:
    // 0x24b05c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24b05cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24b060:
    // 0x24b060: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24b060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24b064:
    // 0x24b064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24b068:
    // 0x24b068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24b06c:
    // 0x24b06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b070:
    // 0x24b070: 0x3e00008  jr          $ra
label_24b074:
    if (ctx->pc == 0x24B074u) {
        ctx->pc = 0x24B074u;
            // 0x24b074: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x24B078u;
        goto label_24b078;
    }
    ctx->pc = 0x24B070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B070u;
            // 0x24b074: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24B078u;
label_24b078:
    // 0x24b078: 0x0  nop
    ctx->pc = 0x24b078u;
    // NOP
label_24b07c:
    // 0x24b07c: 0x0  nop
    ctx->pc = 0x24b07cu;
    // NOP
}
