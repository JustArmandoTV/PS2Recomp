#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A960
// Address: 0x49a960 - 0x49b7a0
void sub_0049A960_0x49a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A960_0x49a960");
#endif

    switch (ctx->pc) {
        case 0x49a960u: goto label_49a960;
        case 0x49a964u: goto label_49a964;
        case 0x49a968u: goto label_49a968;
        case 0x49a96cu: goto label_49a96c;
        case 0x49a970u: goto label_49a970;
        case 0x49a974u: goto label_49a974;
        case 0x49a978u: goto label_49a978;
        case 0x49a97cu: goto label_49a97c;
        case 0x49a980u: goto label_49a980;
        case 0x49a984u: goto label_49a984;
        case 0x49a988u: goto label_49a988;
        case 0x49a98cu: goto label_49a98c;
        case 0x49a990u: goto label_49a990;
        case 0x49a994u: goto label_49a994;
        case 0x49a998u: goto label_49a998;
        case 0x49a99cu: goto label_49a99c;
        case 0x49a9a0u: goto label_49a9a0;
        case 0x49a9a4u: goto label_49a9a4;
        case 0x49a9a8u: goto label_49a9a8;
        case 0x49a9acu: goto label_49a9ac;
        case 0x49a9b0u: goto label_49a9b0;
        case 0x49a9b4u: goto label_49a9b4;
        case 0x49a9b8u: goto label_49a9b8;
        case 0x49a9bcu: goto label_49a9bc;
        case 0x49a9c0u: goto label_49a9c0;
        case 0x49a9c4u: goto label_49a9c4;
        case 0x49a9c8u: goto label_49a9c8;
        case 0x49a9ccu: goto label_49a9cc;
        case 0x49a9d0u: goto label_49a9d0;
        case 0x49a9d4u: goto label_49a9d4;
        case 0x49a9d8u: goto label_49a9d8;
        case 0x49a9dcu: goto label_49a9dc;
        case 0x49a9e0u: goto label_49a9e0;
        case 0x49a9e4u: goto label_49a9e4;
        case 0x49a9e8u: goto label_49a9e8;
        case 0x49a9ecu: goto label_49a9ec;
        case 0x49a9f0u: goto label_49a9f0;
        case 0x49a9f4u: goto label_49a9f4;
        case 0x49a9f8u: goto label_49a9f8;
        case 0x49a9fcu: goto label_49a9fc;
        case 0x49aa00u: goto label_49aa00;
        case 0x49aa04u: goto label_49aa04;
        case 0x49aa08u: goto label_49aa08;
        case 0x49aa0cu: goto label_49aa0c;
        case 0x49aa10u: goto label_49aa10;
        case 0x49aa14u: goto label_49aa14;
        case 0x49aa18u: goto label_49aa18;
        case 0x49aa1cu: goto label_49aa1c;
        case 0x49aa20u: goto label_49aa20;
        case 0x49aa24u: goto label_49aa24;
        case 0x49aa28u: goto label_49aa28;
        case 0x49aa2cu: goto label_49aa2c;
        case 0x49aa30u: goto label_49aa30;
        case 0x49aa34u: goto label_49aa34;
        case 0x49aa38u: goto label_49aa38;
        case 0x49aa3cu: goto label_49aa3c;
        case 0x49aa40u: goto label_49aa40;
        case 0x49aa44u: goto label_49aa44;
        case 0x49aa48u: goto label_49aa48;
        case 0x49aa4cu: goto label_49aa4c;
        case 0x49aa50u: goto label_49aa50;
        case 0x49aa54u: goto label_49aa54;
        case 0x49aa58u: goto label_49aa58;
        case 0x49aa5cu: goto label_49aa5c;
        case 0x49aa60u: goto label_49aa60;
        case 0x49aa64u: goto label_49aa64;
        case 0x49aa68u: goto label_49aa68;
        case 0x49aa6cu: goto label_49aa6c;
        case 0x49aa70u: goto label_49aa70;
        case 0x49aa74u: goto label_49aa74;
        case 0x49aa78u: goto label_49aa78;
        case 0x49aa7cu: goto label_49aa7c;
        case 0x49aa80u: goto label_49aa80;
        case 0x49aa84u: goto label_49aa84;
        case 0x49aa88u: goto label_49aa88;
        case 0x49aa8cu: goto label_49aa8c;
        case 0x49aa90u: goto label_49aa90;
        case 0x49aa94u: goto label_49aa94;
        case 0x49aa98u: goto label_49aa98;
        case 0x49aa9cu: goto label_49aa9c;
        case 0x49aaa0u: goto label_49aaa0;
        case 0x49aaa4u: goto label_49aaa4;
        case 0x49aaa8u: goto label_49aaa8;
        case 0x49aaacu: goto label_49aaac;
        case 0x49aab0u: goto label_49aab0;
        case 0x49aab4u: goto label_49aab4;
        case 0x49aab8u: goto label_49aab8;
        case 0x49aabcu: goto label_49aabc;
        case 0x49aac0u: goto label_49aac0;
        case 0x49aac4u: goto label_49aac4;
        case 0x49aac8u: goto label_49aac8;
        case 0x49aaccu: goto label_49aacc;
        case 0x49aad0u: goto label_49aad0;
        case 0x49aad4u: goto label_49aad4;
        case 0x49aad8u: goto label_49aad8;
        case 0x49aadcu: goto label_49aadc;
        case 0x49aae0u: goto label_49aae0;
        case 0x49aae4u: goto label_49aae4;
        case 0x49aae8u: goto label_49aae8;
        case 0x49aaecu: goto label_49aaec;
        case 0x49aaf0u: goto label_49aaf0;
        case 0x49aaf4u: goto label_49aaf4;
        case 0x49aaf8u: goto label_49aaf8;
        case 0x49aafcu: goto label_49aafc;
        case 0x49ab00u: goto label_49ab00;
        case 0x49ab04u: goto label_49ab04;
        case 0x49ab08u: goto label_49ab08;
        case 0x49ab0cu: goto label_49ab0c;
        case 0x49ab10u: goto label_49ab10;
        case 0x49ab14u: goto label_49ab14;
        case 0x49ab18u: goto label_49ab18;
        case 0x49ab1cu: goto label_49ab1c;
        case 0x49ab20u: goto label_49ab20;
        case 0x49ab24u: goto label_49ab24;
        case 0x49ab28u: goto label_49ab28;
        case 0x49ab2cu: goto label_49ab2c;
        case 0x49ab30u: goto label_49ab30;
        case 0x49ab34u: goto label_49ab34;
        case 0x49ab38u: goto label_49ab38;
        case 0x49ab3cu: goto label_49ab3c;
        case 0x49ab40u: goto label_49ab40;
        case 0x49ab44u: goto label_49ab44;
        case 0x49ab48u: goto label_49ab48;
        case 0x49ab4cu: goto label_49ab4c;
        case 0x49ab50u: goto label_49ab50;
        case 0x49ab54u: goto label_49ab54;
        case 0x49ab58u: goto label_49ab58;
        case 0x49ab5cu: goto label_49ab5c;
        case 0x49ab60u: goto label_49ab60;
        case 0x49ab64u: goto label_49ab64;
        case 0x49ab68u: goto label_49ab68;
        case 0x49ab6cu: goto label_49ab6c;
        case 0x49ab70u: goto label_49ab70;
        case 0x49ab74u: goto label_49ab74;
        case 0x49ab78u: goto label_49ab78;
        case 0x49ab7cu: goto label_49ab7c;
        case 0x49ab80u: goto label_49ab80;
        case 0x49ab84u: goto label_49ab84;
        case 0x49ab88u: goto label_49ab88;
        case 0x49ab8cu: goto label_49ab8c;
        case 0x49ab90u: goto label_49ab90;
        case 0x49ab94u: goto label_49ab94;
        case 0x49ab98u: goto label_49ab98;
        case 0x49ab9cu: goto label_49ab9c;
        case 0x49aba0u: goto label_49aba0;
        case 0x49aba4u: goto label_49aba4;
        case 0x49aba8u: goto label_49aba8;
        case 0x49abacu: goto label_49abac;
        case 0x49abb0u: goto label_49abb0;
        case 0x49abb4u: goto label_49abb4;
        case 0x49abb8u: goto label_49abb8;
        case 0x49abbcu: goto label_49abbc;
        case 0x49abc0u: goto label_49abc0;
        case 0x49abc4u: goto label_49abc4;
        case 0x49abc8u: goto label_49abc8;
        case 0x49abccu: goto label_49abcc;
        case 0x49abd0u: goto label_49abd0;
        case 0x49abd4u: goto label_49abd4;
        case 0x49abd8u: goto label_49abd8;
        case 0x49abdcu: goto label_49abdc;
        case 0x49abe0u: goto label_49abe0;
        case 0x49abe4u: goto label_49abe4;
        case 0x49abe8u: goto label_49abe8;
        case 0x49abecu: goto label_49abec;
        case 0x49abf0u: goto label_49abf0;
        case 0x49abf4u: goto label_49abf4;
        case 0x49abf8u: goto label_49abf8;
        case 0x49abfcu: goto label_49abfc;
        case 0x49ac00u: goto label_49ac00;
        case 0x49ac04u: goto label_49ac04;
        case 0x49ac08u: goto label_49ac08;
        case 0x49ac0cu: goto label_49ac0c;
        case 0x49ac10u: goto label_49ac10;
        case 0x49ac14u: goto label_49ac14;
        case 0x49ac18u: goto label_49ac18;
        case 0x49ac1cu: goto label_49ac1c;
        case 0x49ac20u: goto label_49ac20;
        case 0x49ac24u: goto label_49ac24;
        case 0x49ac28u: goto label_49ac28;
        case 0x49ac2cu: goto label_49ac2c;
        case 0x49ac30u: goto label_49ac30;
        case 0x49ac34u: goto label_49ac34;
        case 0x49ac38u: goto label_49ac38;
        case 0x49ac3cu: goto label_49ac3c;
        case 0x49ac40u: goto label_49ac40;
        case 0x49ac44u: goto label_49ac44;
        case 0x49ac48u: goto label_49ac48;
        case 0x49ac4cu: goto label_49ac4c;
        case 0x49ac50u: goto label_49ac50;
        case 0x49ac54u: goto label_49ac54;
        case 0x49ac58u: goto label_49ac58;
        case 0x49ac5cu: goto label_49ac5c;
        case 0x49ac60u: goto label_49ac60;
        case 0x49ac64u: goto label_49ac64;
        case 0x49ac68u: goto label_49ac68;
        case 0x49ac6cu: goto label_49ac6c;
        case 0x49ac70u: goto label_49ac70;
        case 0x49ac74u: goto label_49ac74;
        case 0x49ac78u: goto label_49ac78;
        case 0x49ac7cu: goto label_49ac7c;
        case 0x49ac80u: goto label_49ac80;
        case 0x49ac84u: goto label_49ac84;
        case 0x49ac88u: goto label_49ac88;
        case 0x49ac8cu: goto label_49ac8c;
        case 0x49ac90u: goto label_49ac90;
        case 0x49ac94u: goto label_49ac94;
        case 0x49ac98u: goto label_49ac98;
        case 0x49ac9cu: goto label_49ac9c;
        case 0x49aca0u: goto label_49aca0;
        case 0x49aca4u: goto label_49aca4;
        case 0x49aca8u: goto label_49aca8;
        case 0x49acacu: goto label_49acac;
        case 0x49acb0u: goto label_49acb0;
        case 0x49acb4u: goto label_49acb4;
        case 0x49acb8u: goto label_49acb8;
        case 0x49acbcu: goto label_49acbc;
        case 0x49acc0u: goto label_49acc0;
        case 0x49acc4u: goto label_49acc4;
        case 0x49acc8u: goto label_49acc8;
        case 0x49acccu: goto label_49accc;
        case 0x49acd0u: goto label_49acd0;
        case 0x49acd4u: goto label_49acd4;
        case 0x49acd8u: goto label_49acd8;
        case 0x49acdcu: goto label_49acdc;
        case 0x49ace0u: goto label_49ace0;
        case 0x49ace4u: goto label_49ace4;
        case 0x49ace8u: goto label_49ace8;
        case 0x49acecu: goto label_49acec;
        case 0x49acf0u: goto label_49acf0;
        case 0x49acf4u: goto label_49acf4;
        case 0x49acf8u: goto label_49acf8;
        case 0x49acfcu: goto label_49acfc;
        case 0x49ad00u: goto label_49ad00;
        case 0x49ad04u: goto label_49ad04;
        case 0x49ad08u: goto label_49ad08;
        case 0x49ad0cu: goto label_49ad0c;
        case 0x49ad10u: goto label_49ad10;
        case 0x49ad14u: goto label_49ad14;
        case 0x49ad18u: goto label_49ad18;
        case 0x49ad1cu: goto label_49ad1c;
        case 0x49ad20u: goto label_49ad20;
        case 0x49ad24u: goto label_49ad24;
        case 0x49ad28u: goto label_49ad28;
        case 0x49ad2cu: goto label_49ad2c;
        case 0x49ad30u: goto label_49ad30;
        case 0x49ad34u: goto label_49ad34;
        case 0x49ad38u: goto label_49ad38;
        case 0x49ad3cu: goto label_49ad3c;
        case 0x49ad40u: goto label_49ad40;
        case 0x49ad44u: goto label_49ad44;
        case 0x49ad48u: goto label_49ad48;
        case 0x49ad4cu: goto label_49ad4c;
        case 0x49ad50u: goto label_49ad50;
        case 0x49ad54u: goto label_49ad54;
        case 0x49ad58u: goto label_49ad58;
        case 0x49ad5cu: goto label_49ad5c;
        case 0x49ad60u: goto label_49ad60;
        case 0x49ad64u: goto label_49ad64;
        case 0x49ad68u: goto label_49ad68;
        case 0x49ad6cu: goto label_49ad6c;
        case 0x49ad70u: goto label_49ad70;
        case 0x49ad74u: goto label_49ad74;
        case 0x49ad78u: goto label_49ad78;
        case 0x49ad7cu: goto label_49ad7c;
        case 0x49ad80u: goto label_49ad80;
        case 0x49ad84u: goto label_49ad84;
        case 0x49ad88u: goto label_49ad88;
        case 0x49ad8cu: goto label_49ad8c;
        case 0x49ad90u: goto label_49ad90;
        case 0x49ad94u: goto label_49ad94;
        case 0x49ad98u: goto label_49ad98;
        case 0x49ad9cu: goto label_49ad9c;
        case 0x49ada0u: goto label_49ada0;
        case 0x49ada4u: goto label_49ada4;
        case 0x49ada8u: goto label_49ada8;
        case 0x49adacu: goto label_49adac;
        case 0x49adb0u: goto label_49adb0;
        case 0x49adb4u: goto label_49adb4;
        case 0x49adb8u: goto label_49adb8;
        case 0x49adbcu: goto label_49adbc;
        case 0x49adc0u: goto label_49adc0;
        case 0x49adc4u: goto label_49adc4;
        case 0x49adc8u: goto label_49adc8;
        case 0x49adccu: goto label_49adcc;
        case 0x49add0u: goto label_49add0;
        case 0x49add4u: goto label_49add4;
        case 0x49add8u: goto label_49add8;
        case 0x49addcu: goto label_49addc;
        case 0x49ade0u: goto label_49ade0;
        case 0x49ade4u: goto label_49ade4;
        case 0x49ade8u: goto label_49ade8;
        case 0x49adecu: goto label_49adec;
        case 0x49adf0u: goto label_49adf0;
        case 0x49adf4u: goto label_49adf4;
        case 0x49adf8u: goto label_49adf8;
        case 0x49adfcu: goto label_49adfc;
        case 0x49ae00u: goto label_49ae00;
        case 0x49ae04u: goto label_49ae04;
        case 0x49ae08u: goto label_49ae08;
        case 0x49ae0cu: goto label_49ae0c;
        case 0x49ae10u: goto label_49ae10;
        case 0x49ae14u: goto label_49ae14;
        case 0x49ae18u: goto label_49ae18;
        case 0x49ae1cu: goto label_49ae1c;
        case 0x49ae20u: goto label_49ae20;
        case 0x49ae24u: goto label_49ae24;
        case 0x49ae28u: goto label_49ae28;
        case 0x49ae2cu: goto label_49ae2c;
        case 0x49ae30u: goto label_49ae30;
        case 0x49ae34u: goto label_49ae34;
        case 0x49ae38u: goto label_49ae38;
        case 0x49ae3cu: goto label_49ae3c;
        case 0x49ae40u: goto label_49ae40;
        case 0x49ae44u: goto label_49ae44;
        case 0x49ae48u: goto label_49ae48;
        case 0x49ae4cu: goto label_49ae4c;
        case 0x49ae50u: goto label_49ae50;
        case 0x49ae54u: goto label_49ae54;
        case 0x49ae58u: goto label_49ae58;
        case 0x49ae5cu: goto label_49ae5c;
        case 0x49ae60u: goto label_49ae60;
        case 0x49ae64u: goto label_49ae64;
        case 0x49ae68u: goto label_49ae68;
        case 0x49ae6cu: goto label_49ae6c;
        case 0x49ae70u: goto label_49ae70;
        case 0x49ae74u: goto label_49ae74;
        case 0x49ae78u: goto label_49ae78;
        case 0x49ae7cu: goto label_49ae7c;
        case 0x49ae80u: goto label_49ae80;
        case 0x49ae84u: goto label_49ae84;
        case 0x49ae88u: goto label_49ae88;
        case 0x49ae8cu: goto label_49ae8c;
        case 0x49ae90u: goto label_49ae90;
        case 0x49ae94u: goto label_49ae94;
        case 0x49ae98u: goto label_49ae98;
        case 0x49ae9cu: goto label_49ae9c;
        case 0x49aea0u: goto label_49aea0;
        case 0x49aea4u: goto label_49aea4;
        case 0x49aea8u: goto label_49aea8;
        case 0x49aeacu: goto label_49aeac;
        case 0x49aeb0u: goto label_49aeb0;
        case 0x49aeb4u: goto label_49aeb4;
        case 0x49aeb8u: goto label_49aeb8;
        case 0x49aebcu: goto label_49aebc;
        case 0x49aec0u: goto label_49aec0;
        case 0x49aec4u: goto label_49aec4;
        case 0x49aec8u: goto label_49aec8;
        case 0x49aeccu: goto label_49aecc;
        case 0x49aed0u: goto label_49aed0;
        case 0x49aed4u: goto label_49aed4;
        case 0x49aed8u: goto label_49aed8;
        case 0x49aedcu: goto label_49aedc;
        case 0x49aee0u: goto label_49aee0;
        case 0x49aee4u: goto label_49aee4;
        case 0x49aee8u: goto label_49aee8;
        case 0x49aeecu: goto label_49aeec;
        case 0x49aef0u: goto label_49aef0;
        case 0x49aef4u: goto label_49aef4;
        case 0x49aef8u: goto label_49aef8;
        case 0x49aefcu: goto label_49aefc;
        case 0x49af00u: goto label_49af00;
        case 0x49af04u: goto label_49af04;
        case 0x49af08u: goto label_49af08;
        case 0x49af0cu: goto label_49af0c;
        case 0x49af10u: goto label_49af10;
        case 0x49af14u: goto label_49af14;
        case 0x49af18u: goto label_49af18;
        case 0x49af1cu: goto label_49af1c;
        case 0x49af20u: goto label_49af20;
        case 0x49af24u: goto label_49af24;
        case 0x49af28u: goto label_49af28;
        case 0x49af2cu: goto label_49af2c;
        case 0x49af30u: goto label_49af30;
        case 0x49af34u: goto label_49af34;
        case 0x49af38u: goto label_49af38;
        case 0x49af3cu: goto label_49af3c;
        case 0x49af40u: goto label_49af40;
        case 0x49af44u: goto label_49af44;
        case 0x49af48u: goto label_49af48;
        case 0x49af4cu: goto label_49af4c;
        case 0x49af50u: goto label_49af50;
        case 0x49af54u: goto label_49af54;
        case 0x49af58u: goto label_49af58;
        case 0x49af5cu: goto label_49af5c;
        case 0x49af60u: goto label_49af60;
        case 0x49af64u: goto label_49af64;
        case 0x49af68u: goto label_49af68;
        case 0x49af6cu: goto label_49af6c;
        case 0x49af70u: goto label_49af70;
        case 0x49af74u: goto label_49af74;
        case 0x49af78u: goto label_49af78;
        case 0x49af7cu: goto label_49af7c;
        case 0x49af80u: goto label_49af80;
        case 0x49af84u: goto label_49af84;
        case 0x49af88u: goto label_49af88;
        case 0x49af8cu: goto label_49af8c;
        case 0x49af90u: goto label_49af90;
        case 0x49af94u: goto label_49af94;
        case 0x49af98u: goto label_49af98;
        case 0x49af9cu: goto label_49af9c;
        case 0x49afa0u: goto label_49afa0;
        case 0x49afa4u: goto label_49afa4;
        case 0x49afa8u: goto label_49afa8;
        case 0x49afacu: goto label_49afac;
        case 0x49afb0u: goto label_49afb0;
        case 0x49afb4u: goto label_49afb4;
        case 0x49afb8u: goto label_49afb8;
        case 0x49afbcu: goto label_49afbc;
        case 0x49afc0u: goto label_49afc0;
        case 0x49afc4u: goto label_49afc4;
        case 0x49afc8u: goto label_49afc8;
        case 0x49afccu: goto label_49afcc;
        case 0x49afd0u: goto label_49afd0;
        case 0x49afd4u: goto label_49afd4;
        case 0x49afd8u: goto label_49afd8;
        case 0x49afdcu: goto label_49afdc;
        case 0x49afe0u: goto label_49afe0;
        case 0x49afe4u: goto label_49afe4;
        case 0x49afe8u: goto label_49afe8;
        case 0x49afecu: goto label_49afec;
        case 0x49aff0u: goto label_49aff0;
        case 0x49aff4u: goto label_49aff4;
        case 0x49aff8u: goto label_49aff8;
        case 0x49affcu: goto label_49affc;
        case 0x49b000u: goto label_49b000;
        case 0x49b004u: goto label_49b004;
        case 0x49b008u: goto label_49b008;
        case 0x49b00cu: goto label_49b00c;
        case 0x49b010u: goto label_49b010;
        case 0x49b014u: goto label_49b014;
        case 0x49b018u: goto label_49b018;
        case 0x49b01cu: goto label_49b01c;
        case 0x49b020u: goto label_49b020;
        case 0x49b024u: goto label_49b024;
        case 0x49b028u: goto label_49b028;
        case 0x49b02cu: goto label_49b02c;
        case 0x49b030u: goto label_49b030;
        case 0x49b034u: goto label_49b034;
        case 0x49b038u: goto label_49b038;
        case 0x49b03cu: goto label_49b03c;
        case 0x49b040u: goto label_49b040;
        case 0x49b044u: goto label_49b044;
        case 0x49b048u: goto label_49b048;
        case 0x49b04cu: goto label_49b04c;
        case 0x49b050u: goto label_49b050;
        case 0x49b054u: goto label_49b054;
        case 0x49b058u: goto label_49b058;
        case 0x49b05cu: goto label_49b05c;
        case 0x49b060u: goto label_49b060;
        case 0x49b064u: goto label_49b064;
        case 0x49b068u: goto label_49b068;
        case 0x49b06cu: goto label_49b06c;
        case 0x49b070u: goto label_49b070;
        case 0x49b074u: goto label_49b074;
        case 0x49b078u: goto label_49b078;
        case 0x49b07cu: goto label_49b07c;
        case 0x49b080u: goto label_49b080;
        case 0x49b084u: goto label_49b084;
        case 0x49b088u: goto label_49b088;
        case 0x49b08cu: goto label_49b08c;
        case 0x49b090u: goto label_49b090;
        case 0x49b094u: goto label_49b094;
        case 0x49b098u: goto label_49b098;
        case 0x49b09cu: goto label_49b09c;
        case 0x49b0a0u: goto label_49b0a0;
        case 0x49b0a4u: goto label_49b0a4;
        case 0x49b0a8u: goto label_49b0a8;
        case 0x49b0acu: goto label_49b0ac;
        case 0x49b0b0u: goto label_49b0b0;
        case 0x49b0b4u: goto label_49b0b4;
        case 0x49b0b8u: goto label_49b0b8;
        case 0x49b0bcu: goto label_49b0bc;
        case 0x49b0c0u: goto label_49b0c0;
        case 0x49b0c4u: goto label_49b0c4;
        case 0x49b0c8u: goto label_49b0c8;
        case 0x49b0ccu: goto label_49b0cc;
        case 0x49b0d0u: goto label_49b0d0;
        case 0x49b0d4u: goto label_49b0d4;
        case 0x49b0d8u: goto label_49b0d8;
        case 0x49b0dcu: goto label_49b0dc;
        case 0x49b0e0u: goto label_49b0e0;
        case 0x49b0e4u: goto label_49b0e4;
        case 0x49b0e8u: goto label_49b0e8;
        case 0x49b0ecu: goto label_49b0ec;
        case 0x49b0f0u: goto label_49b0f0;
        case 0x49b0f4u: goto label_49b0f4;
        case 0x49b0f8u: goto label_49b0f8;
        case 0x49b0fcu: goto label_49b0fc;
        case 0x49b100u: goto label_49b100;
        case 0x49b104u: goto label_49b104;
        case 0x49b108u: goto label_49b108;
        case 0x49b10cu: goto label_49b10c;
        case 0x49b110u: goto label_49b110;
        case 0x49b114u: goto label_49b114;
        case 0x49b118u: goto label_49b118;
        case 0x49b11cu: goto label_49b11c;
        case 0x49b120u: goto label_49b120;
        case 0x49b124u: goto label_49b124;
        case 0x49b128u: goto label_49b128;
        case 0x49b12cu: goto label_49b12c;
        case 0x49b130u: goto label_49b130;
        case 0x49b134u: goto label_49b134;
        case 0x49b138u: goto label_49b138;
        case 0x49b13cu: goto label_49b13c;
        case 0x49b140u: goto label_49b140;
        case 0x49b144u: goto label_49b144;
        case 0x49b148u: goto label_49b148;
        case 0x49b14cu: goto label_49b14c;
        case 0x49b150u: goto label_49b150;
        case 0x49b154u: goto label_49b154;
        case 0x49b158u: goto label_49b158;
        case 0x49b15cu: goto label_49b15c;
        case 0x49b160u: goto label_49b160;
        case 0x49b164u: goto label_49b164;
        case 0x49b168u: goto label_49b168;
        case 0x49b16cu: goto label_49b16c;
        case 0x49b170u: goto label_49b170;
        case 0x49b174u: goto label_49b174;
        case 0x49b178u: goto label_49b178;
        case 0x49b17cu: goto label_49b17c;
        case 0x49b180u: goto label_49b180;
        case 0x49b184u: goto label_49b184;
        case 0x49b188u: goto label_49b188;
        case 0x49b18cu: goto label_49b18c;
        case 0x49b190u: goto label_49b190;
        case 0x49b194u: goto label_49b194;
        case 0x49b198u: goto label_49b198;
        case 0x49b19cu: goto label_49b19c;
        case 0x49b1a0u: goto label_49b1a0;
        case 0x49b1a4u: goto label_49b1a4;
        case 0x49b1a8u: goto label_49b1a8;
        case 0x49b1acu: goto label_49b1ac;
        case 0x49b1b0u: goto label_49b1b0;
        case 0x49b1b4u: goto label_49b1b4;
        case 0x49b1b8u: goto label_49b1b8;
        case 0x49b1bcu: goto label_49b1bc;
        case 0x49b1c0u: goto label_49b1c0;
        case 0x49b1c4u: goto label_49b1c4;
        case 0x49b1c8u: goto label_49b1c8;
        case 0x49b1ccu: goto label_49b1cc;
        case 0x49b1d0u: goto label_49b1d0;
        case 0x49b1d4u: goto label_49b1d4;
        case 0x49b1d8u: goto label_49b1d8;
        case 0x49b1dcu: goto label_49b1dc;
        case 0x49b1e0u: goto label_49b1e0;
        case 0x49b1e4u: goto label_49b1e4;
        case 0x49b1e8u: goto label_49b1e8;
        case 0x49b1ecu: goto label_49b1ec;
        case 0x49b1f0u: goto label_49b1f0;
        case 0x49b1f4u: goto label_49b1f4;
        case 0x49b1f8u: goto label_49b1f8;
        case 0x49b1fcu: goto label_49b1fc;
        case 0x49b200u: goto label_49b200;
        case 0x49b204u: goto label_49b204;
        case 0x49b208u: goto label_49b208;
        case 0x49b20cu: goto label_49b20c;
        case 0x49b210u: goto label_49b210;
        case 0x49b214u: goto label_49b214;
        case 0x49b218u: goto label_49b218;
        case 0x49b21cu: goto label_49b21c;
        case 0x49b220u: goto label_49b220;
        case 0x49b224u: goto label_49b224;
        case 0x49b228u: goto label_49b228;
        case 0x49b22cu: goto label_49b22c;
        case 0x49b230u: goto label_49b230;
        case 0x49b234u: goto label_49b234;
        case 0x49b238u: goto label_49b238;
        case 0x49b23cu: goto label_49b23c;
        case 0x49b240u: goto label_49b240;
        case 0x49b244u: goto label_49b244;
        case 0x49b248u: goto label_49b248;
        case 0x49b24cu: goto label_49b24c;
        case 0x49b250u: goto label_49b250;
        case 0x49b254u: goto label_49b254;
        case 0x49b258u: goto label_49b258;
        case 0x49b25cu: goto label_49b25c;
        case 0x49b260u: goto label_49b260;
        case 0x49b264u: goto label_49b264;
        case 0x49b268u: goto label_49b268;
        case 0x49b26cu: goto label_49b26c;
        case 0x49b270u: goto label_49b270;
        case 0x49b274u: goto label_49b274;
        case 0x49b278u: goto label_49b278;
        case 0x49b27cu: goto label_49b27c;
        case 0x49b280u: goto label_49b280;
        case 0x49b284u: goto label_49b284;
        case 0x49b288u: goto label_49b288;
        case 0x49b28cu: goto label_49b28c;
        case 0x49b290u: goto label_49b290;
        case 0x49b294u: goto label_49b294;
        case 0x49b298u: goto label_49b298;
        case 0x49b29cu: goto label_49b29c;
        case 0x49b2a0u: goto label_49b2a0;
        case 0x49b2a4u: goto label_49b2a4;
        case 0x49b2a8u: goto label_49b2a8;
        case 0x49b2acu: goto label_49b2ac;
        case 0x49b2b0u: goto label_49b2b0;
        case 0x49b2b4u: goto label_49b2b4;
        case 0x49b2b8u: goto label_49b2b8;
        case 0x49b2bcu: goto label_49b2bc;
        case 0x49b2c0u: goto label_49b2c0;
        case 0x49b2c4u: goto label_49b2c4;
        case 0x49b2c8u: goto label_49b2c8;
        case 0x49b2ccu: goto label_49b2cc;
        case 0x49b2d0u: goto label_49b2d0;
        case 0x49b2d4u: goto label_49b2d4;
        case 0x49b2d8u: goto label_49b2d8;
        case 0x49b2dcu: goto label_49b2dc;
        case 0x49b2e0u: goto label_49b2e0;
        case 0x49b2e4u: goto label_49b2e4;
        case 0x49b2e8u: goto label_49b2e8;
        case 0x49b2ecu: goto label_49b2ec;
        case 0x49b2f0u: goto label_49b2f0;
        case 0x49b2f4u: goto label_49b2f4;
        case 0x49b2f8u: goto label_49b2f8;
        case 0x49b2fcu: goto label_49b2fc;
        case 0x49b300u: goto label_49b300;
        case 0x49b304u: goto label_49b304;
        case 0x49b308u: goto label_49b308;
        case 0x49b30cu: goto label_49b30c;
        case 0x49b310u: goto label_49b310;
        case 0x49b314u: goto label_49b314;
        case 0x49b318u: goto label_49b318;
        case 0x49b31cu: goto label_49b31c;
        case 0x49b320u: goto label_49b320;
        case 0x49b324u: goto label_49b324;
        case 0x49b328u: goto label_49b328;
        case 0x49b32cu: goto label_49b32c;
        case 0x49b330u: goto label_49b330;
        case 0x49b334u: goto label_49b334;
        case 0x49b338u: goto label_49b338;
        case 0x49b33cu: goto label_49b33c;
        case 0x49b340u: goto label_49b340;
        case 0x49b344u: goto label_49b344;
        case 0x49b348u: goto label_49b348;
        case 0x49b34cu: goto label_49b34c;
        case 0x49b350u: goto label_49b350;
        case 0x49b354u: goto label_49b354;
        case 0x49b358u: goto label_49b358;
        case 0x49b35cu: goto label_49b35c;
        case 0x49b360u: goto label_49b360;
        case 0x49b364u: goto label_49b364;
        case 0x49b368u: goto label_49b368;
        case 0x49b36cu: goto label_49b36c;
        case 0x49b370u: goto label_49b370;
        case 0x49b374u: goto label_49b374;
        case 0x49b378u: goto label_49b378;
        case 0x49b37cu: goto label_49b37c;
        case 0x49b380u: goto label_49b380;
        case 0x49b384u: goto label_49b384;
        case 0x49b388u: goto label_49b388;
        case 0x49b38cu: goto label_49b38c;
        case 0x49b390u: goto label_49b390;
        case 0x49b394u: goto label_49b394;
        case 0x49b398u: goto label_49b398;
        case 0x49b39cu: goto label_49b39c;
        case 0x49b3a0u: goto label_49b3a0;
        case 0x49b3a4u: goto label_49b3a4;
        case 0x49b3a8u: goto label_49b3a8;
        case 0x49b3acu: goto label_49b3ac;
        case 0x49b3b0u: goto label_49b3b0;
        case 0x49b3b4u: goto label_49b3b4;
        case 0x49b3b8u: goto label_49b3b8;
        case 0x49b3bcu: goto label_49b3bc;
        case 0x49b3c0u: goto label_49b3c0;
        case 0x49b3c4u: goto label_49b3c4;
        case 0x49b3c8u: goto label_49b3c8;
        case 0x49b3ccu: goto label_49b3cc;
        case 0x49b3d0u: goto label_49b3d0;
        case 0x49b3d4u: goto label_49b3d4;
        case 0x49b3d8u: goto label_49b3d8;
        case 0x49b3dcu: goto label_49b3dc;
        case 0x49b3e0u: goto label_49b3e0;
        case 0x49b3e4u: goto label_49b3e4;
        case 0x49b3e8u: goto label_49b3e8;
        case 0x49b3ecu: goto label_49b3ec;
        case 0x49b3f0u: goto label_49b3f0;
        case 0x49b3f4u: goto label_49b3f4;
        case 0x49b3f8u: goto label_49b3f8;
        case 0x49b3fcu: goto label_49b3fc;
        case 0x49b400u: goto label_49b400;
        case 0x49b404u: goto label_49b404;
        case 0x49b408u: goto label_49b408;
        case 0x49b40cu: goto label_49b40c;
        case 0x49b410u: goto label_49b410;
        case 0x49b414u: goto label_49b414;
        case 0x49b418u: goto label_49b418;
        case 0x49b41cu: goto label_49b41c;
        case 0x49b420u: goto label_49b420;
        case 0x49b424u: goto label_49b424;
        case 0x49b428u: goto label_49b428;
        case 0x49b42cu: goto label_49b42c;
        case 0x49b430u: goto label_49b430;
        case 0x49b434u: goto label_49b434;
        case 0x49b438u: goto label_49b438;
        case 0x49b43cu: goto label_49b43c;
        case 0x49b440u: goto label_49b440;
        case 0x49b444u: goto label_49b444;
        case 0x49b448u: goto label_49b448;
        case 0x49b44cu: goto label_49b44c;
        case 0x49b450u: goto label_49b450;
        case 0x49b454u: goto label_49b454;
        case 0x49b458u: goto label_49b458;
        case 0x49b45cu: goto label_49b45c;
        case 0x49b460u: goto label_49b460;
        case 0x49b464u: goto label_49b464;
        case 0x49b468u: goto label_49b468;
        case 0x49b46cu: goto label_49b46c;
        case 0x49b470u: goto label_49b470;
        case 0x49b474u: goto label_49b474;
        case 0x49b478u: goto label_49b478;
        case 0x49b47cu: goto label_49b47c;
        case 0x49b480u: goto label_49b480;
        case 0x49b484u: goto label_49b484;
        case 0x49b488u: goto label_49b488;
        case 0x49b48cu: goto label_49b48c;
        case 0x49b490u: goto label_49b490;
        case 0x49b494u: goto label_49b494;
        case 0x49b498u: goto label_49b498;
        case 0x49b49cu: goto label_49b49c;
        case 0x49b4a0u: goto label_49b4a0;
        case 0x49b4a4u: goto label_49b4a4;
        case 0x49b4a8u: goto label_49b4a8;
        case 0x49b4acu: goto label_49b4ac;
        case 0x49b4b0u: goto label_49b4b0;
        case 0x49b4b4u: goto label_49b4b4;
        case 0x49b4b8u: goto label_49b4b8;
        case 0x49b4bcu: goto label_49b4bc;
        case 0x49b4c0u: goto label_49b4c0;
        case 0x49b4c4u: goto label_49b4c4;
        case 0x49b4c8u: goto label_49b4c8;
        case 0x49b4ccu: goto label_49b4cc;
        case 0x49b4d0u: goto label_49b4d0;
        case 0x49b4d4u: goto label_49b4d4;
        case 0x49b4d8u: goto label_49b4d8;
        case 0x49b4dcu: goto label_49b4dc;
        case 0x49b4e0u: goto label_49b4e0;
        case 0x49b4e4u: goto label_49b4e4;
        case 0x49b4e8u: goto label_49b4e8;
        case 0x49b4ecu: goto label_49b4ec;
        case 0x49b4f0u: goto label_49b4f0;
        case 0x49b4f4u: goto label_49b4f4;
        case 0x49b4f8u: goto label_49b4f8;
        case 0x49b4fcu: goto label_49b4fc;
        case 0x49b500u: goto label_49b500;
        case 0x49b504u: goto label_49b504;
        case 0x49b508u: goto label_49b508;
        case 0x49b50cu: goto label_49b50c;
        case 0x49b510u: goto label_49b510;
        case 0x49b514u: goto label_49b514;
        case 0x49b518u: goto label_49b518;
        case 0x49b51cu: goto label_49b51c;
        case 0x49b520u: goto label_49b520;
        case 0x49b524u: goto label_49b524;
        case 0x49b528u: goto label_49b528;
        case 0x49b52cu: goto label_49b52c;
        case 0x49b530u: goto label_49b530;
        case 0x49b534u: goto label_49b534;
        case 0x49b538u: goto label_49b538;
        case 0x49b53cu: goto label_49b53c;
        case 0x49b540u: goto label_49b540;
        case 0x49b544u: goto label_49b544;
        case 0x49b548u: goto label_49b548;
        case 0x49b54cu: goto label_49b54c;
        case 0x49b550u: goto label_49b550;
        case 0x49b554u: goto label_49b554;
        case 0x49b558u: goto label_49b558;
        case 0x49b55cu: goto label_49b55c;
        case 0x49b560u: goto label_49b560;
        case 0x49b564u: goto label_49b564;
        case 0x49b568u: goto label_49b568;
        case 0x49b56cu: goto label_49b56c;
        case 0x49b570u: goto label_49b570;
        case 0x49b574u: goto label_49b574;
        case 0x49b578u: goto label_49b578;
        case 0x49b57cu: goto label_49b57c;
        case 0x49b580u: goto label_49b580;
        case 0x49b584u: goto label_49b584;
        case 0x49b588u: goto label_49b588;
        case 0x49b58cu: goto label_49b58c;
        case 0x49b590u: goto label_49b590;
        case 0x49b594u: goto label_49b594;
        case 0x49b598u: goto label_49b598;
        case 0x49b59cu: goto label_49b59c;
        case 0x49b5a0u: goto label_49b5a0;
        case 0x49b5a4u: goto label_49b5a4;
        case 0x49b5a8u: goto label_49b5a8;
        case 0x49b5acu: goto label_49b5ac;
        case 0x49b5b0u: goto label_49b5b0;
        case 0x49b5b4u: goto label_49b5b4;
        case 0x49b5b8u: goto label_49b5b8;
        case 0x49b5bcu: goto label_49b5bc;
        case 0x49b5c0u: goto label_49b5c0;
        case 0x49b5c4u: goto label_49b5c4;
        case 0x49b5c8u: goto label_49b5c8;
        case 0x49b5ccu: goto label_49b5cc;
        case 0x49b5d0u: goto label_49b5d0;
        case 0x49b5d4u: goto label_49b5d4;
        case 0x49b5d8u: goto label_49b5d8;
        case 0x49b5dcu: goto label_49b5dc;
        case 0x49b5e0u: goto label_49b5e0;
        case 0x49b5e4u: goto label_49b5e4;
        case 0x49b5e8u: goto label_49b5e8;
        case 0x49b5ecu: goto label_49b5ec;
        case 0x49b5f0u: goto label_49b5f0;
        case 0x49b5f4u: goto label_49b5f4;
        case 0x49b5f8u: goto label_49b5f8;
        case 0x49b5fcu: goto label_49b5fc;
        case 0x49b600u: goto label_49b600;
        case 0x49b604u: goto label_49b604;
        case 0x49b608u: goto label_49b608;
        case 0x49b60cu: goto label_49b60c;
        case 0x49b610u: goto label_49b610;
        case 0x49b614u: goto label_49b614;
        case 0x49b618u: goto label_49b618;
        case 0x49b61cu: goto label_49b61c;
        case 0x49b620u: goto label_49b620;
        case 0x49b624u: goto label_49b624;
        case 0x49b628u: goto label_49b628;
        case 0x49b62cu: goto label_49b62c;
        case 0x49b630u: goto label_49b630;
        case 0x49b634u: goto label_49b634;
        case 0x49b638u: goto label_49b638;
        case 0x49b63cu: goto label_49b63c;
        case 0x49b640u: goto label_49b640;
        case 0x49b644u: goto label_49b644;
        case 0x49b648u: goto label_49b648;
        case 0x49b64cu: goto label_49b64c;
        case 0x49b650u: goto label_49b650;
        case 0x49b654u: goto label_49b654;
        case 0x49b658u: goto label_49b658;
        case 0x49b65cu: goto label_49b65c;
        case 0x49b660u: goto label_49b660;
        case 0x49b664u: goto label_49b664;
        case 0x49b668u: goto label_49b668;
        case 0x49b66cu: goto label_49b66c;
        case 0x49b670u: goto label_49b670;
        case 0x49b674u: goto label_49b674;
        case 0x49b678u: goto label_49b678;
        case 0x49b67cu: goto label_49b67c;
        case 0x49b680u: goto label_49b680;
        case 0x49b684u: goto label_49b684;
        case 0x49b688u: goto label_49b688;
        case 0x49b68cu: goto label_49b68c;
        case 0x49b690u: goto label_49b690;
        case 0x49b694u: goto label_49b694;
        case 0x49b698u: goto label_49b698;
        case 0x49b69cu: goto label_49b69c;
        case 0x49b6a0u: goto label_49b6a0;
        case 0x49b6a4u: goto label_49b6a4;
        case 0x49b6a8u: goto label_49b6a8;
        case 0x49b6acu: goto label_49b6ac;
        case 0x49b6b0u: goto label_49b6b0;
        case 0x49b6b4u: goto label_49b6b4;
        case 0x49b6b8u: goto label_49b6b8;
        case 0x49b6bcu: goto label_49b6bc;
        case 0x49b6c0u: goto label_49b6c0;
        case 0x49b6c4u: goto label_49b6c4;
        case 0x49b6c8u: goto label_49b6c8;
        case 0x49b6ccu: goto label_49b6cc;
        case 0x49b6d0u: goto label_49b6d0;
        case 0x49b6d4u: goto label_49b6d4;
        case 0x49b6d8u: goto label_49b6d8;
        case 0x49b6dcu: goto label_49b6dc;
        case 0x49b6e0u: goto label_49b6e0;
        case 0x49b6e4u: goto label_49b6e4;
        case 0x49b6e8u: goto label_49b6e8;
        case 0x49b6ecu: goto label_49b6ec;
        case 0x49b6f0u: goto label_49b6f0;
        case 0x49b6f4u: goto label_49b6f4;
        case 0x49b6f8u: goto label_49b6f8;
        case 0x49b6fcu: goto label_49b6fc;
        case 0x49b700u: goto label_49b700;
        case 0x49b704u: goto label_49b704;
        case 0x49b708u: goto label_49b708;
        case 0x49b70cu: goto label_49b70c;
        case 0x49b710u: goto label_49b710;
        case 0x49b714u: goto label_49b714;
        case 0x49b718u: goto label_49b718;
        case 0x49b71cu: goto label_49b71c;
        case 0x49b720u: goto label_49b720;
        case 0x49b724u: goto label_49b724;
        case 0x49b728u: goto label_49b728;
        case 0x49b72cu: goto label_49b72c;
        case 0x49b730u: goto label_49b730;
        case 0x49b734u: goto label_49b734;
        case 0x49b738u: goto label_49b738;
        case 0x49b73cu: goto label_49b73c;
        case 0x49b740u: goto label_49b740;
        case 0x49b744u: goto label_49b744;
        case 0x49b748u: goto label_49b748;
        case 0x49b74cu: goto label_49b74c;
        case 0x49b750u: goto label_49b750;
        case 0x49b754u: goto label_49b754;
        case 0x49b758u: goto label_49b758;
        case 0x49b75cu: goto label_49b75c;
        case 0x49b760u: goto label_49b760;
        case 0x49b764u: goto label_49b764;
        case 0x49b768u: goto label_49b768;
        case 0x49b76cu: goto label_49b76c;
        case 0x49b770u: goto label_49b770;
        case 0x49b774u: goto label_49b774;
        case 0x49b778u: goto label_49b778;
        case 0x49b77cu: goto label_49b77c;
        case 0x49b780u: goto label_49b780;
        case 0x49b784u: goto label_49b784;
        case 0x49b788u: goto label_49b788;
        case 0x49b78cu: goto label_49b78c;
        case 0x49b790u: goto label_49b790;
        case 0x49b794u: goto label_49b794;
        case 0x49b798u: goto label_49b798;
        case 0x49b79cu: goto label_49b79c;
        default: break;
    }

    ctx->pc = 0x49a960u;

label_49a960:
    // 0x49a960: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x49a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_49a964:
    // 0x49a964: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49a964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49a968:
    // 0x49a968: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x49a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_49a96c:
    // 0x49a96c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x49a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_49a970:
    // 0x49a970: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x49a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_49a974:
    // 0x49a974: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x49a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_49a978:
    // 0x49a978: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x49a978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49a97c:
    // 0x49a97c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x49a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49a980:
    // 0x49a980: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_49a984:
    // 0x49a984: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49a984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a988:
    // 0x49a988: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49a98c:
    // 0x49a98c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49a990:
    // 0x49a990: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49a990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a994:
    // 0x49a994: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49a998:
    // 0x49a998: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x49a998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_49a99c:
    // 0x49a99c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49a9a0:
    // 0x49a9a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x49a9a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_49a9a4:
    // 0x49a9a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49a9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49a9a8:
    // 0x49a9a8: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x49a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_49a9ac:
    // 0x49a9ac: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x49a9acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49a9b0:
    // 0x49a9b0: 0x148000b5  bnez        $a0, . + 4 + (0xB5 << 2)
label_49a9b4:
    if (ctx->pc == 0x49A9B4u) {
        ctx->pc = 0x49A9B4u;
            // 0x49a9b4: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49A9B8u;
        goto label_49a9b8;
    }
    ctx->pc = 0x49A9B0u;
    {
        const bool branch_taken_0x49a9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A9B0u;
            // 0x49a9b4: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9b0) {
            ctx->pc = 0x49AC88u;
            goto label_49ac88;
        }
    }
    ctx->pc = 0x49A9B8u;
label_49a9b8:
    // 0x49a9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49a9bc:
    // 0x49a9bc: 0xc04f278  jal         func_13C9E0
label_49a9c0:
    if (ctx->pc == 0x49A9C0u) {
        ctx->pc = 0x49A9C0u;
            // 0x49a9c0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x49A9C4u;
        goto label_49a9c4;
    }
    ctx->pc = 0x49A9BCu;
    SET_GPR_U32(ctx, 31, 0x49A9C4u);
    ctx->pc = 0x49A9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A9BCu;
            // 0x49a9c0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A9C4u; }
        if (ctx->pc != 0x49A9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A9C4u; }
        if (ctx->pc != 0x49A9C4u) { return; }
    }
    ctx->pc = 0x49A9C4u;
label_49a9c4:
    // 0x49a9c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49a9c8:
    // 0x49a9c8: 0xc04ce80  jal         func_133A00
label_49a9cc:
    if (ctx->pc == 0x49A9CCu) {
        ctx->pc = 0x49A9CCu;
            // 0x49a9cc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x49A9D0u;
        goto label_49a9d0;
    }
    ctx->pc = 0x49A9C8u;
    SET_GPR_U32(ctx, 31, 0x49A9D0u);
    ctx->pc = 0x49A9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A9C8u;
            // 0x49a9cc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A9D0u; }
        if (ctx->pc != 0x49A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A9D0u; }
        if (ctx->pc != 0x49A9D0u) { return; }
    }
    ctx->pc = 0x49A9D0u;
label_49a9d0:
    // 0x49a9d0: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x49a9d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_49a9d4:
    // 0x49a9d4: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
label_49a9d8:
    if (ctx->pc == 0x49A9D8u) {
        ctx->pc = 0x49A9DCu;
        goto label_49a9dc;
    }
    ctx->pc = 0x49A9D4u;
    {
        const bool branch_taken_0x49a9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a9d4) {
            ctx->pc = 0x49AC88u;
            goto label_49ac88;
        }
    }
    ctx->pc = 0x49A9DCu;
label_49a9dc:
    // 0x49a9dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49a9e0:
    // 0x49a9e0: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x49a9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_49a9e4:
    // 0x49a9e4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x49a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_49a9e8:
    // 0x49a9e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x49a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_49a9ec:
    // 0x49a9ec: 0x24630a40  addiu       $v1, $v1, 0xA40
    ctx->pc = 0x49a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2624));
label_49a9f0:
    // 0x49a9f0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x49a9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_49a9f4:
    // 0x49a9f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x49a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_49a9f8:
    // 0x49a9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x49a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49a9fc:
    // 0x49a9fc: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x49a9fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_49aa00:
    // 0x49aa00: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x49aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49aa04:
    // 0x49aa04: 0xc07698c  jal         func_1DA630
label_49aa08:
    if (ctx->pc == 0x49AA08u) {
        ctx->pc = 0x49AA08u;
            // 0x49aa08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AA0Cu;
        goto label_49aa0c;
    }
    ctx->pc = 0x49AA04u;
    SET_GPR_U32(ctx, 31, 0x49AA0Cu);
    ctx->pc = 0x49AA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA04u;
            // 0x49aa08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA0Cu; }
        if (ctx->pc != 0x49AA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA0Cu; }
        if (ctx->pc != 0x49AA0Cu) { return; }
    }
    ctx->pc = 0x49AA0Cu;
label_49aa0c:
    // 0x49aa0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49aa10:
    // 0x49aa10: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_49aa14:
    if (ctx->pc == 0x49AA14u) {
        ctx->pc = 0x49AA18u;
        goto label_49aa18;
    }
    ctx->pc = 0x49AA10u;
    {
        const bool branch_taken_0x49aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x49aa10) {
            ctx->pc = 0x49AA20u;
            goto label_49aa20;
        }
    }
    ctx->pc = 0x49AA18u;
label_49aa18:
    // 0x49aa18: 0x10000031  b           . + 4 + (0x31 << 2)
label_49aa1c:
    if (ctx->pc == 0x49AA1Cu) {
        ctx->pc = 0x49AA1Cu;
            // 0x49aa1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49AA20u;
        goto label_49aa20;
    }
    ctx->pc = 0x49AA18u;
    {
        const bool branch_taken_0x49aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA18u;
            // 0x49aa1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aa18) {
            ctx->pc = 0x49AAE0u;
            goto label_49aae0;
        }
    }
    ctx->pc = 0x49AA20u;
label_49aa20:
    // 0x49aa20: 0xc0576f4  jal         func_15DBD0
label_49aa24:
    if (ctx->pc == 0x49AA24u) {
        ctx->pc = 0x49AA28u;
        goto label_49aa28;
    }
    ctx->pc = 0x49AA20u;
    SET_GPR_U32(ctx, 31, 0x49AA28u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA28u; }
        if (ctx->pc != 0x49AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA28u; }
        if (ctx->pc != 0x49AA28u) { return; }
    }
    ctx->pc = 0x49AA28u;
label_49aa28:
    // 0x49aa28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49aa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49aa2c:
    // 0x49aa2c: 0xc076984  jal         func_1DA610
label_49aa30:
    if (ctx->pc == 0x49AA30u) {
        ctx->pc = 0x49AA30u;
            // 0x49aa30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AA34u;
        goto label_49aa34;
    }
    ctx->pc = 0x49AA2Cu;
    SET_GPR_U32(ctx, 31, 0x49AA34u);
    ctx->pc = 0x49AA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA2Cu;
            // 0x49aa30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA34u; }
        if (ctx->pc != 0x49AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA34u; }
        if (ctx->pc != 0x49AA34u) { return; }
    }
    ctx->pc = 0x49AA34u;
label_49aa34:
    // 0x49aa34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49aa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49aa38:
    // 0x49aa38: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x49aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49aa3c:
    // 0x49aa3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x49aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_49aa40:
    // 0x49aa40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49aa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49aa44:
    // 0x49aa44: 0xc4423f30  lwc1        $f2, 0x3F30($v0)
    ctx->pc = 0x49aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49aa48:
    // 0x49aa48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x49aa48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49aa4c:
    // 0x49aa4c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x49aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_49aa50:
    // 0x49aa50: 0xc4413f38  lwc1        $f1, 0x3F38($v0)
    ctx->pc = 0x49aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49aa54:
    // 0x49aa54: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x49aa54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_49aa58:
    // 0x49aa58: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x49aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_49aa5c:
    // 0x49aa5c: 0xc4403f3c  lwc1        $f0, 0x3F3C($v0)
    ctx->pc = 0x49aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49aa60:
    // 0x49aa60: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x49aa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_49aa64:
    // 0x49aa64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x49aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_49aa68:
    // 0x49aa68: 0x8c423f34  lw          $v0, 0x3F34($v0)
    ctx->pc = 0x49aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16180)));
label_49aa6c:
    // 0x49aa6c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x49aa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_49aa70:
    // 0x49aa70: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x49aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_49aa74:
    // 0x49aa74: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x49aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49aa78:
    // 0x49aa78: 0xc04cca0  jal         func_133280
label_49aa7c:
    if (ctx->pc == 0x49AA7Cu) {
        ctx->pc = 0x49AA7Cu;
            // 0x49aa7c: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x49AA80u;
        goto label_49aa80;
    }
    ctx->pc = 0x49AA78u;
    SET_GPR_U32(ctx, 31, 0x49AA80u);
    ctx->pc = 0x49AA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA78u;
            // 0x49aa7c: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA80u; }
        if (ctx->pc != 0x49AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA80u; }
        if (ctx->pc != 0x49AA80u) { return; }
    }
    ctx->pc = 0x49AA80u;
label_49aa80:
    // 0x49aa80: 0xc076980  jal         func_1DA600
label_49aa84:
    if (ctx->pc == 0x49AA84u) {
        ctx->pc = 0x49AA84u;
            // 0x49aa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AA88u;
        goto label_49aa88;
    }
    ctx->pc = 0x49AA80u;
    SET_GPR_U32(ctx, 31, 0x49AA88u);
    ctx->pc = 0x49AA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA80u;
            // 0x49aa84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA88u; }
        if (ctx->pc != 0x49AA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA88u; }
        if (ctx->pc != 0x49AA88u) { return; }
    }
    ctx->pc = 0x49AA88u;
label_49aa88:
    // 0x49aa88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x49aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_49aa8c:
    // 0x49aa8c: 0xc04cc34  jal         func_1330D0
label_49aa90:
    if (ctx->pc == 0x49AA90u) {
        ctx->pc = 0x49AA90u;
            // 0x49aa90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AA94u;
        goto label_49aa94;
    }
    ctx->pc = 0x49AA8Cu;
    SET_GPR_U32(ctx, 31, 0x49AA94u);
    ctx->pc = 0x49AA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA8Cu;
            // 0x49aa90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA94u; }
        if (ctx->pc != 0x49AA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AA94u; }
        if (ctx->pc != 0x49AA94u) { return; }
    }
    ctx->pc = 0x49AA94u;
label_49aa94:
    // 0x49aa94: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x49aa94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49aa98:
    // 0x49aa98: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_49aa9c:
    if (ctx->pc == 0x49AA9Cu) {
        ctx->pc = 0x49AA9Cu;
            // 0x49aa9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AAA0u;
        goto label_49aaa0;
    }
    ctx->pc = 0x49AA98u;
    {
        const bool branch_taken_0x49aa98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49aa98) {
            ctx->pc = 0x49AA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AA98u;
            // 0x49aa9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AAA8u;
            goto label_49aaa8;
        }
    }
    ctx->pc = 0x49AAA0u;
label_49aaa0:
    // 0x49aaa0: 0x1000000f  b           . + 4 + (0xF << 2)
label_49aaa4:
    if (ctx->pc == 0x49AAA4u) {
        ctx->pc = 0x49AAA4u;
            // 0x49aaa4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x49AAA8u;
        goto label_49aaa8;
    }
    ctx->pc = 0x49AAA0u;
    {
        const bool branch_taken_0x49aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AAA0u;
            // 0x49aaa4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aaa0) {
            ctx->pc = 0x49AAE0u;
            goto label_49aae0;
        }
    }
    ctx->pc = 0x49AAA8u;
label_49aaa8:
    // 0x49aaa8: 0xc07697c  jal         func_1DA5F0
label_49aaac:
    if (ctx->pc == 0x49AAACu) {
        ctx->pc = 0x49AAB0u;
        goto label_49aab0;
    }
    ctx->pc = 0x49AAA8u;
    SET_GPR_U32(ctx, 31, 0x49AAB0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AAB0u; }
        if (ctx->pc != 0x49AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AAB0u; }
        if (ctx->pc != 0x49AAB0u) { return; }
    }
    ctx->pc = 0x49AAB0u;
label_49aab0:
    // 0x49aab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49aab4:
    // 0x49aab4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x49aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_49aab8:
    // 0x49aab8: 0xc04cd60  jal         func_133580
label_49aabc:
    if (ctx->pc == 0x49AABCu) {
        ctx->pc = 0x49AABCu;
            // 0x49aabc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AAC0u;
        goto label_49aac0;
    }
    ctx->pc = 0x49AAB8u;
    SET_GPR_U32(ctx, 31, 0x49AAC0u);
    ctx->pc = 0x49AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AAB8u;
            // 0x49aabc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AAC0u; }
        if (ctx->pc != 0x49AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AAC0u; }
        if (ctx->pc != 0x49AAC0u) { return; }
    }
    ctx->pc = 0x49AAC0u;
label_49aac0:
    // 0x49aac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49aac4:
    // 0x49aac4: 0xc04c650  jal         func_131940
label_49aac8:
    if (ctx->pc == 0x49AAC8u) {
        ctx->pc = 0x49AAC8u;
            // 0x49aac8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49AACCu;
        goto label_49aacc;
    }
    ctx->pc = 0x49AAC4u;
    SET_GPR_U32(ctx, 31, 0x49AACCu);
    ctx->pc = 0x49AAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AAC4u;
            // 0x49aac8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AACCu; }
        if (ctx->pc != 0x49AACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AACCu; }
        if (ctx->pc != 0x49AACCu) { return; }
    }
    ctx->pc = 0x49AACCu;
label_49aacc:
    // 0x49aacc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x49aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_49aad0:
    // 0x49aad0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x49aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_49aad4:
    // 0x49aad4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x49aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_49aad8:
    // 0x49aad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x49aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_49aadc:
    // 0x49aadc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49aae0:
    // 0x49aae0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x49aae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_49aae4:
    // 0x49aae4: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_49aae8:
    if (ctx->pc == 0x49AAE8u) {
        ctx->pc = 0x49AAE8u;
            // 0x49aae8: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x49AAECu;
        goto label_49aaec;
    }
    ctx->pc = 0x49AAE4u;
    {
        const bool branch_taken_0x49aae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AAE4u;
            // 0x49aae8: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49aae4) {
            ctx->pc = 0x49AC88u;
            goto label_49ac88;
        }
    }
    ctx->pc = 0x49AAECu;
label_49aaec:
    // 0x49aaec: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x49aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49aaf0:
    // 0x49aaf0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x49aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_49aaf4:
    // 0x49aaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49aaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49aaf8:
    // 0x49aaf8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x49aaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_49aafc:
    // 0x49aafc: 0x8eb600e4  lw          $s6, 0xE4($s5)
    ctx->pc = 0x49aafcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_49ab00:
    // 0x49ab00: 0x26b000d0  addiu       $s0, $s5, 0xD0
    ctx->pc = 0x49ab00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_49ab04:
    // 0x49ab04: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x49ab04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_49ab08:
    // 0x49ab08: 0x26be0030  addiu       $fp, $s5, 0x30
    ctx->pc = 0x49ab08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_49ab0c:
    // 0x49ab0c: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x49ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_49ab10:
    // 0x49ab10: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x49ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_49ab14:
    // 0x49ab14: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x49ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_49ab18:
    // 0x49ab18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ab1c:
    // 0x49ab1c: 0x0  nop
    ctx->pc = 0x49ab1cu;
    // NOP
label_49ab20:
    // 0x49ab20: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x49ab20u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_49ab24:
    // 0x49ab24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ab28:
    // 0x49ab28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49ab2c:
    // 0x49ab2c: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x49ab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_49ab30:
    // 0x49ab30: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x49ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_49ab34:
    // 0x49ab34: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x49ab34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_49ab38:
    // 0x49ab38: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49ab38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49ab3c:
    // 0x49ab3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ab40:
    // 0x49ab40: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x49ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_49ab44:
    // 0x49ab44: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x49ab44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_49ab48:
    // 0x49ab48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49ab4c:
    // 0x49ab4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x49ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_49ab50:
    // 0x49ab50: 0x87a021  addu        $s4, $a0, $a3
    ctx->pc = 0x49ab50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_49ab54:
    // 0x49ab54: 0x8c66e3b0  lw          $a2, -0x1C50($v1)
    ctx->pc = 0x49ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_49ab58:
    // 0x49ab58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x49ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_49ab5c:
    // 0x49ab5c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x49ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_49ab60:
    // 0x49ab60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x49ab60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_49ab64:
    // 0x49ab64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49ab68:
    // 0x49ab68: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x49ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_49ab6c:
    // 0x49ab6c: 0x8caae3d8  lw          $t2, -0x1C28($a1)
    ctx->pc = 0x49ab6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_49ab70:
    // 0x49ab70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49ab70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ab74:
    // 0x49ab74: 0x8c69e378  lw          $t1, -0x1C88($v1)
    ctx->pc = 0x49ab74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_49ab78:
    // 0x49ab78: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x49ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_49ab7c:
    // 0x49ab7c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x49ab7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_49ab80:
    // 0x49ab80: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x49ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_49ab84:
    // 0x49ab84: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x49ab84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_49ab88:
    // 0x49ab88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49ab8c:
    // 0x49ab8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_49ab90:
    // 0x49ab90: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x49ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_49ab94:
    // 0x49ab94: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x49ab94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_49ab98:
    // 0x49ab98: 0x8ca5e3c0  lw          $a1, -0x1C40($a1)
    ctx->pc = 0x49ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_49ab9c:
    // 0x49ab9c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x49ab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_49aba0:
    // 0x49aba0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x49aba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49aba4:
    // 0x49aba4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x49aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_49aba8:
    // 0x49aba8: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x49aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_49abac:
    // 0x49abac: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x49abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_49abb0:
    // 0x49abb0: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x49abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
label_49abb4:
    // 0x49abb4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x49abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_49abb8:
    // 0x49abb8: 0xc04e4a4  jal         func_139290
label_49abbc:
    if (ctx->pc == 0x49ABBCu) {
        ctx->pc = 0x49ABBCu;
            // 0x49abbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49ABC0u;
        goto label_49abc0;
    }
    ctx->pc = 0x49ABB8u;
    SET_GPR_U32(ctx, 31, 0x49ABC0u);
    ctx->pc = 0x49ABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49ABB8u;
            // 0x49abbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ABC0u; }
        if (ctx->pc != 0x49ABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ABC0u; }
        if (ctx->pc != 0x49ABC0u) { return; }
    }
    ctx->pc = 0x49ABC0u;
label_49abc0:
    // 0x49abc0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x49abc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_49abc4:
    // 0x49abc4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x49abc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_49abc8:
    // 0x49abc8: 0x320f809  jalr        $t9
label_49abcc:
    if (ctx->pc == 0x49ABCCu) {
        ctx->pc = 0x49ABCCu;
            // 0x49abcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49ABD0u;
        goto label_49abd0;
    }
    ctx->pc = 0x49ABC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49ABD0u);
        ctx->pc = 0x49ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ABC8u;
            // 0x49abcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49ABD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49ABD0u; }
            if (ctx->pc != 0x49ABD0u) { return; }
        }
        }
    }
    ctx->pc = 0x49ABD0u;
label_49abd0:
    // 0x49abd0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49abd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49abd4:
    // 0x49abd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x49abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49abd8:
    // 0x49abd8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x49abd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49abdc:
    // 0x49abdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49abe0:
    // 0x49abe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49abe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49abe4:
    // 0x49abe4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x49abe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49abe8:
    // 0x49abe8: 0xc04cfcc  jal         func_133F30
label_49abec:
    if (ctx->pc == 0x49ABECu) {
        ctx->pc = 0x49ABECu;
            // 0x49abec: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x49ABF0u;
        goto label_49abf0;
    }
    ctx->pc = 0x49ABE8u;
    SET_GPR_U32(ctx, 31, 0x49ABF0u);
    ctx->pc = 0x49ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49ABE8u;
            // 0x49abec: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ABF0u; }
        if (ctx->pc != 0x49ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ABF0u; }
        if (ctx->pc != 0x49ABF0u) { return; }
    }
    ctx->pc = 0x49ABF0u;
label_49abf0:
    // 0x49abf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49abf4:
    // 0x49abf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49abf8:
    // 0x49abf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49abf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49abfc:
    // 0x49abfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x49abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49ac00:
    // 0x49ac00: 0xc7ce0000  lwc1        $f14, 0x0($fp)
    ctx->pc = 0x49ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49ac04:
    // 0x49ac04: 0xc04ce50  jal         func_133940
label_49ac08:
    if (ctx->pc == 0x49AC08u) {
        ctx->pc = 0x49AC08u;
            // 0x49ac08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x49AC0Cu;
        goto label_49ac0c;
    }
    ctx->pc = 0x49AC04u;
    SET_GPR_U32(ctx, 31, 0x49AC0Cu);
    ctx->pc = 0x49AC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AC04u;
            // 0x49ac08: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC0Cu; }
        if (ctx->pc != 0x49AC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC0Cu; }
        if (ctx->pc != 0x49AC0Cu) { return; }
    }
    ctx->pc = 0x49AC0Cu;
label_49ac0c:
    // 0x49ac0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49ac0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49ac10:
    // 0x49ac10: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x49ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_49ac14:
    // 0x49ac14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49ac14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ac18:
    // 0x49ac18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49ac18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_49ac1c:
    // 0x49ac1c: 0xc04ce64  jal         func_133990
label_49ac20:
    if (ctx->pc == 0x49AC20u) {
        ctx->pc = 0x49AC20u;
            // 0x49ac20: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x49AC24u;
        goto label_49ac24;
    }
    ctx->pc = 0x49AC1Cu;
    SET_GPR_U32(ctx, 31, 0x49AC24u);
    ctx->pc = 0x49AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AC1Cu;
            // 0x49ac20: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC24u; }
        if (ctx->pc != 0x49AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC24u; }
        if (ctx->pc != 0x49AC24u) { return; }
    }
    ctx->pc = 0x49AC24u;
label_49ac24:
    // 0x49ac24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49ac24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49ac28:
    // 0x49ac28: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x49ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_49ac2c:
    // 0x49ac2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ac30:
    // 0x49ac30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49ac30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_49ac34:
    // 0x49ac34: 0xc04ce64  jal         func_133990
label_49ac38:
    if (ctx->pc == 0x49AC38u) {
        ctx->pc = 0x49AC38u;
            // 0x49ac38: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x49AC3Cu;
        goto label_49ac3c;
    }
    ctx->pc = 0x49AC34u;
    SET_GPR_U32(ctx, 31, 0x49AC3Cu);
    ctx->pc = 0x49AC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AC34u;
            // 0x49ac38: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC3Cu; }
        if (ctx->pc != 0x49AC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC3Cu; }
        if (ctx->pc != 0x49AC3Cu) { return; }
    }
    ctx->pc = 0x49AC3Cu;
label_49ac3c:
    // 0x49ac3c: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x49ac3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_49ac40:
    // 0x49ac40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49ac44:
    // 0x49ac44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49ac48:
    // 0x49ac48: 0xc04e4cc  jal         func_139330
label_49ac4c:
    if (ctx->pc == 0x49AC4Cu) {
        ctx->pc = 0x49AC4Cu;
            // 0x49ac4c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AC50u;
        goto label_49ac50;
    }
    ctx->pc = 0x49AC48u;
    SET_GPR_U32(ctx, 31, 0x49AC50u);
    ctx->pc = 0x49AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AC48u;
            // 0x49ac4c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC50u; }
        if (ctx->pc != 0x49AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AC50u; }
        if (ctx->pc != 0x49AC50u) { return; }
    }
    ctx->pc = 0x49AC50u;
label_49ac50:
    // 0x49ac50: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x49ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ac54:
    // 0x49ac54: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x49ac54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_49ac58:
    // 0x49ac58: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x49ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ac5c:
    // 0x49ac5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x49ac5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_49ac60:
    // 0x49ac60: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x49ac60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_49ac64:
    // 0x49ac64: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x49ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ac68:
    // 0x49ac68: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x49ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ac6c:
    // 0x49ac6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x49ac6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49ac70:
    // 0x49ac70: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x49ac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_49ac74:
    // 0x49ac74: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x49ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ac78:
    // 0x49ac78: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x49ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49ac7c:
    // 0x49ac7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x49ac7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49ac80:
    // 0x49ac80: 0x16c0ffa8  bnez        $s6, . + 4 + (-0x58 << 2)
label_49ac84:
    if (ctx->pc == 0x49AC84u) {
        ctx->pc = 0x49AC84u;
            // 0x49ac84: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->pc = 0x49AC88u;
        goto label_49ac88;
    }
    ctx->pc = 0x49AC80u;
    {
        const bool branch_taken_0x49ac80 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AC80u;
            // 0x49ac84: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ac80) {
            ctx->pc = 0x49AB24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49ab24;
        }
    }
    ctx->pc = 0x49AC88u;
label_49ac88:
    // 0x49ac88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x49ac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_49ac8c:
    // 0x49ac8c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x49ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_49ac90:
    // 0x49ac90: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49ac90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49ac94:
    // 0x49ac94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x49ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49ac98:
    // 0x49ac98: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x49ac98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49ac9c:
    // 0x49ac9c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x49ac9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49aca0:
    // 0x49aca0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49aca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49aca4:
    // 0x49aca4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x49aca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49aca8:
    // 0x49aca8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49aca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49acac:
    // 0x49acac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49acacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49acb0:
    // 0x49acb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49acb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49acb4:
    // 0x49acb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49acb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49acb8:
    // 0x49acb8: 0x3e00008  jr          $ra
label_49acbc:
    if (ctx->pc == 0x49ACBCu) {
        ctx->pc = 0x49ACBCu;
            // 0x49acbc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x49ACC0u;
        goto label_49acc0;
    }
    ctx->pc = 0x49ACB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ACB8u;
            // 0x49acbc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49ACC0u;
label_49acc0:
    // 0x49acc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49acc4:
    // 0x49acc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49acc8:
    // 0x49acc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49accc:
    // 0x49accc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49acd0:
    // 0x49acd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49acd4:
    // 0x49acd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49acd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49acd8:
    // 0x49acd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49acdc:
    // 0x49acdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ace0:
    // 0x49ace0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ace4:
    // 0x49ace4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x49ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49ace8:
    // 0x49ace8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_49acec:
    if (ctx->pc == 0x49ACECu) {
        ctx->pc = 0x49ACF0u;
        goto label_49acf0;
    }
    ctx->pc = 0x49ACE8u;
    {
        const bool branch_taken_0x49ace8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x49ace8) {
            ctx->pc = 0x49AD70u;
            goto label_49ad70;
        }
    }
    ctx->pc = 0x49ACF0u;
label_49acf0:
    // 0x49acf0: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x49acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_49acf4:
    // 0x49acf4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_49acf8:
    if (ctx->pc == 0x49ACF8u) {
        ctx->pc = 0x49ACFCu;
        goto label_49acfc;
    }
    ctx->pc = 0x49ACF4u;
    {
        const bool branch_taken_0x49acf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49acf4) {
            ctx->pc = 0x49AD70u;
            goto label_49ad70;
        }
    }
    ctx->pc = 0x49ACFCu;
label_49acfc:
    // 0x49acfc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49ad00:
    // 0x49ad00: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x49ad00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_49ad04:
    // 0x49ad04: 0x8e930050  lw          $s3, 0x50($s4)
    ctx->pc = 0x49ad04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_49ad08:
    // 0x49ad08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49ad08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ad0c:
    // 0x49ad0c: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x49ad0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49ad10:
    // 0x49ad10: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x49ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_49ad14:
    // 0x49ad14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x49ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_49ad18:
    // 0x49ad18: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x49ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_49ad1c:
    // 0x49ad1c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x49ad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_49ad20:
    // 0x49ad20: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_49ad24:
    if (ctx->pc == 0x49AD24u) {
        ctx->pc = 0x49AD28u;
        goto label_49ad28;
    }
    ctx->pc = 0x49AD20u;
    {
        const bool branch_taken_0x49ad20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ad20) {
            ctx->pc = 0x49AD58u;
            goto label_49ad58;
        }
    }
    ctx->pc = 0x49AD28u;
label_49ad28:
    // 0x49ad28: 0x3c0300e1  lui         $v1, 0xE1
    ctx->pc = 0x49ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)225 << 16));
label_49ad2c:
    // 0x49ad2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ad30:
    // 0x49ad30: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x49ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_49ad34:
    // 0x49ad34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x49ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49ad38:
    // 0x49ad38: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x49ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_49ad3c:
    // 0x49ad3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49ad3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ad40:
    // 0x49ad40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49ad44:
    // 0x49ad44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49ad48:
    // 0x49ad48: 0xc08bff0  jal         func_22FFC0
label_49ad4c:
    if (ctx->pc == 0x49AD4Cu) {
        ctx->pc = 0x49AD4Cu;
            // 0x49ad4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AD50u;
        goto label_49ad50;
    }
    ctx->pc = 0x49AD48u;
    SET_GPR_U32(ctx, 31, 0x49AD50u);
    ctx->pc = 0x49AD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AD48u;
            // 0x49ad4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AD50u; }
        if (ctx->pc != 0x49AD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AD50u; }
        if (ctx->pc != 0x49AD50u) { return; }
    }
    ctx->pc = 0x49AD50u;
label_49ad50:
    // 0x49ad50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ad54:
    // 0x49ad54: 0xae830130  sw          $v1, 0x130($s4)
    ctx->pc = 0x49ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
label_49ad58:
    // 0x49ad58: 0x8e03077c  lw          $v1, 0x77C($s0)
    ctx->pc = 0x49ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
label_49ad5c:
    // 0x49ad5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49ad5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49ad60:
    // 0x49ad60: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x49ad60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_49ad64:
    // 0x49ad64: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_49ad68:
    if (ctx->pc == 0x49AD68u) {
        ctx->pc = 0x49AD68u;
            // 0x49ad68: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49AD6Cu;
        goto label_49ad6c;
    }
    ctx->pc = 0x49AD64u;
    {
        const bool branch_taken_0x49ad64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AD64u;
            // 0x49ad68: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad64) {
            ctx->pc = 0x49AD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49ad14;
        }
    }
    ctx->pc = 0x49AD6Cu;
label_49ad6c:
    // 0x49ad6c: 0x0  nop
    ctx->pc = 0x49ad6cu;
    // NOP
label_49ad70:
    // 0x49ad70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49ad74:
    // 0x49ad74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49ad74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49ad78:
    // 0x49ad78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49ad78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49ad7c:
    // 0x49ad7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49ad7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49ad80:
    // 0x49ad80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ad80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ad84:
    // 0x49ad84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ad84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ad88:
    // 0x49ad88: 0x3e00008  jr          $ra
label_49ad8c:
    if (ctx->pc == 0x49AD8Cu) {
        ctx->pc = 0x49AD8Cu;
            // 0x49ad8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49AD90u;
        goto label_49ad90;
    }
    ctx->pc = 0x49AD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AD88u;
            // 0x49ad8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49AD90u;
label_49ad90:
    // 0x49ad90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49ad94:
    // 0x49ad94: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x49ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_49ad98:
    // 0x49ad98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49ad9c:
    // 0x49ad9c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x49ad9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_49ada0:
    // 0x49ada0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ada4:
    // 0x49ada4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ada8:
    // 0x49ada8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x49ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_49adac:
    // 0x49adac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49adacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49adb0:
    // 0x49adb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49adb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49adb4:
    // 0x49adb4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x49adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_49adb8:
    // 0x49adb8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49adbc:
    // 0x49adbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49adc0:
    // 0x49adc0: 0xc08bff0  jal         func_22FFC0
label_49adc4:
    if (ctx->pc == 0x49ADC4u) {
        ctx->pc = 0x49ADC4u;
            // 0x49adc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49ADC8u;
        goto label_49adc8;
    }
    ctx->pc = 0x49ADC0u;
    SET_GPR_U32(ctx, 31, 0x49ADC8u);
    ctx->pc = 0x49ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49ADC0u;
            // 0x49adc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ADC8u; }
        if (ctx->pc != 0x49ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49ADC8u; }
        if (ctx->pc != 0x49ADC8u) { return; }
    }
    ctx->pc = 0x49ADC8u;
label_49adc8:
    // 0x49adc8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x49adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_49adcc:
    // 0x49adcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49adccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49add0:
    // 0x49add0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49add0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49add4:
    // 0x49add4: 0x3e00008  jr          $ra
label_49add8:
    if (ctx->pc == 0x49ADD8u) {
        ctx->pc = 0x49ADD8u;
            // 0x49add8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49ADDCu;
        goto label_49addc;
    }
    ctx->pc = 0x49ADD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49ADD4u;
            // 0x49add8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49ADDCu;
label_49addc:
    // 0x49addc: 0x0  nop
    ctx->pc = 0x49addcu;
    // NOP
label_49ade0:
    // 0x49ade0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49ade4:
    // 0x49ade4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49ade8:
    // 0x49ade8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49adec:
    // 0x49adec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49adecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49adf0:
    // 0x49adf0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x49adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_49adf4:
    // 0x49adf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49adf8:
    if (ctx->pc == 0x49ADF8u) {
        ctx->pc = 0x49ADF8u;
            // 0x49adf8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x49ADFCu;
        goto label_49adfc;
    }
    ctx->pc = 0x49ADF4u;
    {
        const bool branch_taken_0x49adf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49adf4) {
            ctx->pc = 0x49ADF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49ADF4u;
            // 0x49adf8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AE10u;
            goto label_49ae10;
        }
    }
    ctx->pc = 0x49ADFCu;
label_49adfc:
    // 0x49adfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49adfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ae00:
    // 0x49ae00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49ae00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49ae04:
    // 0x49ae04: 0x320f809  jalr        $t9
label_49ae08:
    if (ctx->pc == 0x49AE08u) {
        ctx->pc = 0x49AE08u;
            // 0x49ae08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49AE0Cu;
        goto label_49ae0c;
    }
    ctx->pc = 0x49AE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49AE0Cu);
        ctx->pc = 0x49AE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE04u;
            // 0x49ae08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49AE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49AE0Cu; }
            if (ctx->pc != 0x49AE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49AE0Cu;
label_49ae0c:
    // 0x49ae0c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x49ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_49ae10:
    // 0x49ae10: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x49ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_49ae14:
    // 0x49ae14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49ae18:
    if (ctx->pc == 0x49AE18u) {
        ctx->pc = 0x49AE18u;
            // 0x49ae18: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x49AE1Cu;
        goto label_49ae1c;
    }
    ctx->pc = 0x49AE14u;
    {
        const bool branch_taken_0x49ae14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ae14) {
            ctx->pc = 0x49AE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE14u;
            // 0x49ae18: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AE30u;
            goto label_49ae30;
        }
    }
    ctx->pc = 0x49AE1Cu;
label_49ae1c:
    // 0x49ae1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49ae1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ae20:
    // 0x49ae20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49ae20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49ae24:
    // 0x49ae24: 0x320f809  jalr        $t9
label_49ae28:
    if (ctx->pc == 0x49AE28u) {
        ctx->pc = 0x49AE28u;
            // 0x49ae28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49AE2Cu;
        goto label_49ae2c;
    }
    ctx->pc = 0x49AE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49AE2Cu);
        ctx->pc = 0x49AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE24u;
            // 0x49ae28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49AE2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49AE2Cu; }
            if (ctx->pc != 0x49AE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49AE2Cu;
label_49ae2c:
    // 0x49ae2c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x49ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_49ae30:
    // 0x49ae30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49ae34:
    // 0x49ae34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ae34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ae38:
    // 0x49ae38: 0x3e00008  jr          $ra
label_49ae3c:
    if (ctx->pc == 0x49AE3Cu) {
        ctx->pc = 0x49AE3Cu;
            // 0x49ae3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49AE40u;
        goto label_49ae40;
    }
    ctx->pc = 0x49AE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE38u;
            // 0x49ae3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49AE40u;
label_49ae40:
    // 0x49ae40: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x49ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_49ae44:
    // 0x49ae44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_49ae48:
    // 0x49ae48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49ae4c:
    // 0x49ae4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ae50:
    // 0x49ae50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49ae50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49ae54:
    // 0x49ae54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ae58:
    // 0x49ae58: 0xc0892d0  jal         func_224B40
label_49ae5c:
    if (ctx->pc == 0x49AE5Cu) {
        ctx->pc = 0x49AE5Cu;
            // 0x49ae5c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x49AE60u;
        goto label_49ae60;
    }
    ctx->pc = 0x49AE58u;
    SET_GPR_U32(ctx, 31, 0x49AE60u);
    ctx->pc = 0x49AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE58u;
            // 0x49ae5c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AE60u; }
        if (ctx->pc != 0x49AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AE60u; }
        if (ctx->pc != 0x49AE60u) { return; }
    }
    ctx->pc = 0x49AE60u;
label_49ae60:
    // 0x49ae60: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x49ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ae64:
    // 0x49ae64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49ae64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ae68:
    // 0x49ae68: 0x0  nop
    ctx->pc = 0x49ae68u;
    // NOP
label_49ae6c:
    // 0x49ae6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49ae6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ae70:
    // 0x49ae70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_49ae74:
    if (ctx->pc == 0x49AE74u) {
        ctx->pc = 0x49AE74u;
            // 0x49ae74: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49AE78u;
        goto label_49ae78;
    }
    ctx->pc = 0x49AE70u;
    {
        const bool branch_taken_0x49ae70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49ae70) {
            ctx->pc = 0x49AE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE70u;
            // 0x49ae74: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AE84u;
            goto label_49ae84;
        }
    }
    ctx->pc = 0x49AE78u;
label_49ae78:
    // 0x49ae78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49ae7c:
    // 0x49ae7c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x49ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_49ae80:
    // 0x49ae80: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x49ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ae84:
    // 0x49ae84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49ae84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ae88:
    // 0x49ae88: 0x0  nop
    ctx->pc = 0x49ae88u;
    // NOP
label_49ae8c:
    // 0x49ae8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49ae8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49ae90:
    // 0x49ae90: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_49ae94:
    if (ctx->pc == 0x49AE94u) {
        ctx->pc = 0x49AE94u;
            // 0x49ae94: 0xc6210038  lwc1        $f1, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49AE98u;
        goto label_49ae98;
    }
    ctx->pc = 0x49AE90u;
    {
        const bool branch_taken_0x49ae90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49ae90) {
            ctx->pc = 0x49AE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AE90u;
            // 0x49ae94: 0xc6210038  lwc1        $f1, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AEA4u;
            goto label_49aea4;
        }
    }
    ctx->pc = 0x49AE98u;
label_49ae98:
    // 0x49ae98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49ae9c:
    // 0x49ae9c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x49ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_49aea0:
    // 0x49aea0: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x49aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49aea4:
    // 0x49aea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49aea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49aea8:
    // 0x49aea8: 0x0  nop
    ctx->pc = 0x49aea8u;
    // NOP
label_49aeac:
    // 0x49aeac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x49aeacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49aeb0:
    // 0x49aeb0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_49aeb4:
    if (ctx->pc == 0x49AEB4u) {
        ctx->pc = 0x49AEB4u;
            // 0x49aeb4: 0xc6220030  lwc1        $f2, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x49AEB8u;
        goto label_49aeb8;
    }
    ctx->pc = 0x49AEB0u;
    {
        const bool branch_taken_0x49aeb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49aeb0) {
            ctx->pc = 0x49AEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AEB0u;
            // 0x49aeb4: 0xc6220030  lwc1        $f2, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AEC4u;
            goto label_49aec4;
        }
    }
    ctx->pc = 0x49AEB8u;
label_49aeb8:
    // 0x49aeb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49aebc:
    // 0x49aebc: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x49aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_49aec0:
    // 0x49aec0: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x49aec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49aec4:
    // 0x49aec4: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x49aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_49aec8:
    // 0x49aec8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x49aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49aecc:
    // 0x49aecc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x49aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_49aed0:
    // 0x49aed0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x49aed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49aed4:
    // 0x49aed4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x49aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_49aed8:
    // 0x49aed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x49aed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49aedc:
    // 0x49aedc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x49aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_49aee0:
    // 0x49aee0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49aee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49aee4:
    // 0x49aee4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49aee8:
    // 0x49aee8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49aeec:
    // 0x49aeec: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x49aeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_49aef0:
    // 0x49aef0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x49aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_49aef4:
    // 0x49aef4: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x49aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_49aef8:
    // 0x49aef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x49aef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_49aefc:
    // 0x49aefc: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x49aefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_49af00:
    // 0x49af00: 0xc0a7a88  jal         func_29EA20
label_49af04:
    if (ctx->pc == 0x49AF04u) {
        ctx->pc = 0x49AF04u;
            // 0x49af04: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x49AF08u;
        goto label_49af08;
    }
    ctx->pc = 0x49AF00u;
    SET_GPR_U32(ctx, 31, 0x49AF08u);
    ctx->pc = 0x49AF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF00u;
            // 0x49af04: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF08u; }
        if (ctx->pc != 0x49AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF08u; }
        if (ctx->pc != 0x49AF08u) { return; }
    }
    ctx->pc = 0x49AF08u;
label_49af08:
    // 0x49af08: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x49af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_49af0c:
    // 0x49af0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49af0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49af10:
    // 0x49af10: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_49af14:
    if (ctx->pc == 0x49AF14u) {
        ctx->pc = 0x49AF14u;
            // 0x49af14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49AF18u;
        goto label_49af18;
    }
    ctx->pc = 0x49AF10u;
    {
        const bool branch_taken_0x49af10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF10u;
            // 0x49af14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af10) {
            ctx->pc = 0x49AF2Cu;
            goto label_49af2c;
        }
    }
    ctx->pc = 0x49AF18u;
label_49af18:
    // 0x49af18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x49af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_49af1c:
    // 0x49af1c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x49af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49af20:
    // 0x49af20: 0xc0804bc  jal         func_2012F0
label_49af24:
    if (ctx->pc == 0x49AF24u) {
        ctx->pc = 0x49AF24u;
            // 0x49af24: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x49AF28u;
        goto label_49af28;
    }
    ctx->pc = 0x49AF20u;
    SET_GPR_U32(ctx, 31, 0x49AF28u);
    ctx->pc = 0x49AF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF20u;
            // 0x49af24: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF28u; }
        if (ctx->pc != 0x49AF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF28u; }
        if (ctx->pc != 0x49AF28u) { return; }
    }
    ctx->pc = 0x49AF28u;
label_49af28:
    // 0x49af28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49af2c:
    // 0x49af2c: 0xae2400e0  sw          $a0, 0xE0($s1)
    ctx->pc = 0x49af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 4));
label_49af30:
    // 0x49af30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49af34:
    // 0x49af34: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x49af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49af38:
    // 0x49af38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x49af38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49af3c:
    // 0x49af3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x49af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_49af40:
    // 0x49af40: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x49af40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_49af44:
    // 0x49af44: 0xe62100e8  swc1        $f1, 0xE8($s1)
    ctx->pc = 0x49af44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_49af48:
    // 0x49af48: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x49af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49af4c:
    // 0x49af4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49af4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49af50:
    // 0x49af50: 0x0  nop
    ctx->pc = 0x49af50u;
    // NOP
label_49af54:
    // 0x49af54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49af54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49af58:
    // 0x49af58: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49af5c:
    if (ctx->pc == 0x49AF5Cu) {
        ctx->pc = 0x49AF5Cu;
            // 0x49af5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49AF60u;
        goto label_49af60;
    }
    ctx->pc = 0x49AF58u;
    {
        const bool branch_taken_0x49af58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49af58) {
            ctx->pc = 0x49AF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF58u;
            // 0x49af5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AF70u;
            goto label_49af70;
        }
    }
    ctx->pc = 0x49AF60u;
label_49af60:
    // 0x49af60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49af60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49af64:
    // 0x49af64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x49af64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_49af68:
    // 0x49af68: 0x10000007  b           . + 4 + (0x7 << 2)
label_49af6c:
    if (ctx->pc == 0x49AF6Cu) {
        ctx->pc = 0x49AF6Cu;
            // 0x49af6c: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->pc = 0x49AF70u;
        goto label_49af70;
    }
    ctx->pc = 0x49AF68u;
    {
        const bool branch_taken_0x49af68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49AF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF68u;
            // 0x49af6c: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49af68) {
            ctx->pc = 0x49AF88u;
            goto label_49af88;
        }
    }
    ctx->pc = 0x49AF70u;
label_49af70:
    // 0x49af70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x49af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_49af74:
    // 0x49af74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49af74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49af78:
    // 0x49af78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x49af78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_49af7c:
    // 0x49af7c: 0x0  nop
    ctx->pc = 0x49af7cu;
    // NOP
label_49af80:
    // 0x49af80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_49af84:
    // 0x49af84: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x49af84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
label_49af88:
    // 0x49af88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x49af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49af8c:
    // 0x49af8c: 0xc04f278  jal         func_13C9E0
label_49af90:
    if (ctx->pc == 0x49AF90u) {
        ctx->pc = 0x49AF90u;
            // 0x49af90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x49AF94u;
        goto label_49af94;
    }
    ctx->pc = 0x49AF8Cu;
    SET_GPR_U32(ctx, 31, 0x49AF94u);
    ctx->pc = 0x49AF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AF8Cu;
            // 0x49af90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF94u; }
        if (ctx->pc != 0x49AF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AF94u; }
        if (ctx->pc != 0x49AF94u) { return; }
    }
    ctx->pc = 0x49AF94u;
label_49af94:
    // 0x49af94: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x49af94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_49af98:
    // 0x49af98: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x49af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_49af9c:
    // 0x49af9c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x49af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_49afa0:
    // 0x49afa0: 0xc04cca0  jal         func_133280
label_49afa4:
    if (ctx->pc == 0x49AFA4u) {
        ctx->pc = 0x49AFA4u;
            // 0x49afa4: 0x24c60ab0  addiu       $a2, $a2, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2736));
        ctx->pc = 0x49AFA8u;
        goto label_49afa8;
    }
    ctx->pc = 0x49AFA0u;
    SET_GPR_U32(ctx, 31, 0x49AFA8u);
    ctx->pc = 0x49AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AFA0u;
            // 0x49afa4: 0x24c60ab0  addiu       $a2, $a2, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFA8u; }
        if (ctx->pc != 0x49AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFA8u; }
        if (ctx->pc != 0x49AFA8u) { return; }
    }
    ctx->pc = 0x49AFA8u;
label_49afa8:
    // 0x49afa8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x49afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_49afac:
    // 0x49afac: 0xc04cc44  jal         func_133110
label_49afb0:
    if (ctx->pc == 0x49AFB0u) {
        ctx->pc = 0x49AFB0u;
            // 0x49afb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AFB4u;
        goto label_49afb4;
    }
    ctx->pc = 0x49AFACu;
    SET_GPR_U32(ctx, 31, 0x49AFB4u);
    ctx->pc = 0x49AFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AFACu;
            // 0x49afb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFB4u; }
        if (ctx->pc != 0x49AFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFB4u; }
        if (ctx->pc != 0x49AFB4u) { return; }
    }
    ctx->pc = 0x49AFB4u;
label_49afb4:
    // 0x49afb4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x49afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_49afb8:
    // 0x49afb8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x49afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_49afbc:
    // 0x49afbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49afc0:
    // 0x49afc0: 0xc04cc70  jal         func_1331C0
label_49afc4:
    if (ctx->pc == 0x49AFC4u) {
        ctx->pc = 0x49AFC4u;
            // 0x49afc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49AFC8u;
        goto label_49afc8;
    }
    ctx->pc = 0x49AFC0u;
    SET_GPR_U32(ctx, 31, 0x49AFC8u);
    ctx->pc = 0x49AFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AFC0u;
            // 0x49afc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFC8u; }
        if (ctx->pc != 0x49AFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFC8u; }
        if (ctx->pc != 0x49AFC8u) { return; }
    }
    ctx->pc = 0x49AFC8u;
label_49afc8:
    // 0x49afc8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x49afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_49afcc:
    // 0x49afcc: 0xc04cc04  jal         func_133010
label_49afd0:
    if (ctx->pc == 0x49AFD0u) {
        ctx->pc = 0x49AFD0u;
            // 0x49afd0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x49AFD4u;
        goto label_49afd4;
    }
    ctx->pc = 0x49AFCCu;
    SET_GPR_U32(ctx, 31, 0x49AFD4u);
    ctx->pc = 0x49AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AFCCu;
            // 0x49afd0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFD4u; }
        if (ctx->pc != 0x49AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFD4u; }
        if (ctx->pc != 0x49AFD4u) { return; }
    }
    ctx->pc = 0x49AFD4u;
label_49afd4:
    // 0x49afd4: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x49afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_49afd8:
    // 0x49afd8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x49afd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49afdc:
    // 0x49afdc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_49afe0:
    if (ctx->pc == 0x49AFE0u) {
        ctx->pc = 0x49AFE4u;
        goto label_49afe4;
    }
    ctx->pc = 0x49AFDCu;
    {
        const bool branch_taken_0x49afdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49afdc) {
            ctx->pc = 0x49B008u;
            goto label_49b008;
        }
    }
    ctx->pc = 0x49AFE4u;
label_49afe4:
    // 0x49afe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x49afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_49afe8:
    // 0x49afe8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x49afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_49afec:
    // 0x49afec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49afecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49aff0:
    // 0x49aff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49aff4:
    // 0x49aff4: 0xc04cc7c  jal         func_1331F0
label_49aff8:
    if (ctx->pc == 0x49AFF8u) {
        ctx->pc = 0x49AFF8u;
            // 0x49aff8: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x49AFFCu;
        goto label_49affc;
    }
    ctx->pc = 0x49AFF4u;
    SET_GPR_U32(ctx, 31, 0x49AFFCu);
    ctx->pc = 0x49AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49AFF4u;
            // 0x49aff8: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFFCu; }
        if (ctx->pc != 0x49AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49AFFCu; }
        if (ctx->pc != 0x49AFFCu) { return; }
    }
    ctx->pc = 0x49AFFCu;
label_49affc:
    // 0x49affc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x49affcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49b000:
    // 0x49b000: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_49b004:
    if (ctx->pc == 0x49B004u) {
        ctx->pc = 0x49B004u;
            // 0x49b004: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x49B008u;
        goto label_49b008;
    }
    ctx->pc = 0x49B000u;
    {
        const bool branch_taken_0x49b000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b000) {
            ctx->pc = 0x49B004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B000u;
            // 0x49b004: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49AFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49afe8;
        }
    }
    ctx->pc = 0x49B008u;
label_49b008:
    // 0x49b008: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x49b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_49b00c:
    // 0x49b00c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x49b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_49b010:
    // 0x49b010: 0xc0b6e68  jal         func_2DB9A0
label_49b014:
    if (ctx->pc == 0x49B014u) {
        ctx->pc = 0x49B014u;
            // 0x49b014: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x49B018u;
        goto label_49b018;
    }
    ctx->pc = 0x49B010u;
    SET_GPR_U32(ctx, 31, 0x49B018u);
    ctx->pc = 0x49B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B010u;
            // 0x49b014: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B018u; }
        if (ctx->pc != 0x49B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B018u; }
        if (ctx->pc != 0x49B018u) { return; }
    }
    ctx->pc = 0x49B018u;
label_49b018:
    // 0x49b018: 0xc0b6dac  jal         func_2DB6B0
label_49b01c:
    if (ctx->pc == 0x49B01Cu) {
        ctx->pc = 0x49B01Cu;
            // 0x49b01c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49B020u;
        goto label_49b020;
    }
    ctx->pc = 0x49B018u;
    SET_GPR_U32(ctx, 31, 0x49B020u);
    ctx->pc = 0x49B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B018u;
            // 0x49b01c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B020u; }
        if (ctx->pc != 0x49B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B020u; }
        if (ctx->pc != 0x49B020u) { return; }
    }
    ctx->pc = 0x49B020u;
label_49b020:
    // 0x49b020: 0xc0cac94  jal         func_32B250
label_49b024:
    if (ctx->pc == 0x49B024u) {
        ctx->pc = 0x49B024u;
            // 0x49b024: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x49B028u;
        goto label_49b028;
    }
    ctx->pc = 0x49B020u;
    SET_GPR_U32(ctx, 31, 0x49B028u);
    ctx->pc = 0x49B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B020u;
            // 0x49b024: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B028u; }
        if (ctx->pc != 0x49B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B028u; }
        if (ctx->pc != 0x49B028u) { return; }
    }
    ctx->pc = 0x49B028u;
label_49b028:
    // 0x49b028: 0xc0cac84  jal         func_32B210
label_49b02c:
    if (ctx->pc == 0x49B02Cu) {
        ctx->pc = 0x49B02Cu;
            // 0x49b02c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x49B030u;
        goto label_49b030;
    }
    ctx->pc = 0x49B028u;
    SET_GPR_U32(ctx, 31, 0x49B030u);
    ctx->pc = 0x49B02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B028u;
            // 0x49b02c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B030u; }
        if (ctx->pc != 0x49B030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B030u; }
        if (ctx->pc != 0x49B030u) { return; }
    }
    ctx->pc = 0x49B030u;
label_49b030:
    // 0x49b030: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x49b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_49b034:
    // 0x49b034: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x49b034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_49b038:
    // 0x49b038: 0xc44dc930  lwc1        $f13, -0x36D0($v0)
    ctx->pc = 0x49b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49b03c:
    // 0x49b03c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x49b03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49b040:
    // 0x49b040: 0xc0a562c  jal         func_2958B0
label_49b044:
    if (ctx->pc == 0x49B044u) {
        ctx->pc = 0x49B044u;
            // 0x49b044: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x49B048u;
        goto label_49b048;
    }
    ctx->pc = 0x49B040u;
    SET_GPR_U32(ctx, 31, 0x49B048u);
    ctx->pc = 0x49B044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B040u;
            // 0x49b044: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B048u; }
        if (ctx->pc != 0x49B048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B048u; }
        if (ctx->pc != 0x49B048u) { return; }
    }
    ctx->pc = 0x49B048u;
label_49b048:
    // 0x49b048: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x49b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_49b04c:
    // 0x49b04c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x49b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_49b050:
    // 0x49b050: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x49b050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_49b054:
    // 0x49b054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b058:
    // 0x49b058: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x49b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b05c:
    // 0x49b05c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x49b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_49b060:
    // 0x49b060: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x49b060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_49b064:
    // 0x49b064: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x49b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b068:
    // 0x49b068: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x49b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_49b06c:
    // 0x49b06c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x49b06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_49b070:
    // 0x49b070: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x49b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_49b074:
    // 0x49b074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b078:
    // 0x49b078: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x49b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_49b07c:
    // 0x49b07c: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x49b07cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_49b080:
    // 0x49b080: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x49b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b084:
    // 0x49b084: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x49b084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b088:
    // 0x49b088: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x49b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_49b08c:
    // 0x49b08c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x49b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_49b090:
    // 0x49b090: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x49b090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_49b094:
    // 0x49b094: 0xa3a401c2  sb          $a0, 0x1C2($sp)
    ctx->pc = 0x49b094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 450), (uint8_t)GPR_U32(ctx, 4));
label_49b098:
    // 0x49b098: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x49b098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_49b09c:
    // 0x49b09c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49b0a0:
    // 0x49b0a0: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x49b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b0a4:
    // 0x49b0a4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x49b0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_49b0a8:
    // 0x49b0a8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x49b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b0ac:
    // 0x49b0ac: 0xafa901b8  sw          $t1, 0x1B8($sp)
    ctx->pc = 0x49b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 9));
label_49b0b0:
    // 0x49b0b0: 0xe7a2016c  swc1        $f2, 0x16C($sp)
    ctx->pc = 0x49b0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_49b0b4:
    // 0x49b0b4: 0xa3a801c0  sb          $t0, 0x1C0($sp)
    ctx->pc = 0x49b0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 8));
label_49b0b8:
    // 0x49b0b8: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x49b0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_49b0bc:
    // 0x49b0bc: 0xafa701bc  sw          $a3, 0x1BC($sp)
    ctx->pc = 0x49b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 7));
label_49b0c0:
    // 0x49b0c0: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x49b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_49b0c4:
    // 0x49b0c4: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x49b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_49b0c8:
    // 0x49b0c8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x49b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b0cc:
    // 0x49b0cc: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x49b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_49b0d0:
    // 0x49b0d0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x49b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b0d4:
    // 0x49b0d4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x49b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b0d8:
    // 0x49b0d8: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x49b0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_49b0dc:
    // 0x49b0dc: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x49b0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_49b0e0:
    // 0x49b0e0: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x49b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_49b0e4:
    // 0x49b0e4: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x49b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b0e8:
    // 0x49b0e8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x49b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b0ec:
    // 0x49b0ec: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x49b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b0f0:
    // 0x49b0f0: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x49b0f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_49b0f4:
    // 0x49b0f4: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x49b0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_49b0f8:
    // 0x49b0f8: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x49b0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_49b0fc:
    // 0x49b0fc: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x49b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_49b100:
    // 0x49b100: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x49b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49b104:
    // 0x49b104: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x49b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b108:
    // 0x49b108: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x49b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b10c:
    // 0x49b10c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x49b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b110:
    // 0x49b110: 0xe7a60120  swc1        $f6, 0x120($sp)
    ctx->pc = 0x49b110u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_49b114:
    // 0x49b114: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x49b114u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_49b118:
    // 0x49b118: 0xe7a80128  swc1        $f8, 0x128($sp)
    ctx->pc = 0x49b118u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_49b11c:
    // 0x49b11c: 0xe7a50160  swc1        $f5, 0x160($sp)
    ctx->pc = 0x49b11cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_49b120:
    // 0x49b120: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x49b120u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_49b124:
    // 0x49b124: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x49b124u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_49b128:
    // 0x49b128: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x49b128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_49b12c:
    // 0x49b12c: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x49b12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_49b130:
    // 0x49b130: 0xc0a7a88  jal         func_29EA20
label_49b134:
    if (ctx->pc == 0x49B134u) {
        ctx->pc = 0x49B134u;
            // 0x49b134: 0xe7a001a0  swc1        $f0, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->pc = 0x49B138u;
        goto label_49b138;
    }
    ctx->pc = 0x49B130u;
    SET_GPR_U32(ctx, 31, 0x49B138u);
    ctx->pc = 0x49B134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B130u;
            // 0x49b134: 0xe7a001a0  swc1        $f0, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B138u; }
        if (ctx->pc != 0x49B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B138u; }
        if (ctx->pc != 0x49B138u) { return; }
    }
    ctx->pc = 0x49B138u;
label_49b138:
    // 0x49b138: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x49b138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_49b13c:
    // 0x49b13c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49b13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49b140:
    // 0x49b140: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_49b144:
    if (ctx->pc == 0x49B144u) {
        ctx->pc = 0x49B144u;
            // 0x49b144: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49B148u;
        goto label_49b148;
    }
    ctx->pc = 0x49B140u;
    {
        const bool branch_taken_0x49b140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B140u;
            // 0x49b144: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b140) {
            ctx->pc = 0x49B190u;
            goto label_49b190;
        }
    }
    ctx->pc = 0x49B148u;
label_49b148:
    // 0x49b148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b14c:
    // 0x49b14c: 0xc088ef4  jal         func_223BD0
label_49b150:
    if (ctx->pc == 0x49B150u) {
        ctx->pc = 0x49B150u;
            // 0x49b150: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x49B154u;
        goto label_49b154;
    }
    ctx->pc = 0x49B14Cu;
    SET_GPR_U32(ctx, 31, 0x49B154u);
    ctx->pc = 0x49B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B14Cu;
            // 0x49b150: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B154u; }
        if (ctx->pc != 0x49B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B154u; }
        if (ctx->pc != 0x49B154u) { return; }
    }
    ctx->pc = 0x49B154u;
label_49b154:
    // 0x49b154: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49b158:
    // 0x49b158: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49b158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_49b15c:
    // 0x49b15c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x49b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_49b160:
    // 0x49b160: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x49b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_49b164:
    // 0x49b164: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49b164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49b168:
    // 0x49b168: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x49b168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_49b16c:
    // 0x49b16c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b170:
    // 0x49b170: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49b170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49b174:
    // 0x49b174: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x49b174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_49b178:
    // 0x49b178: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x49b178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_49b17c:
    // 0x49b17c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x49b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_49b180:
    // 0x49b180: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49b184:
    // 0x49b184: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x49b184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_49b188:
    // 0x49b188: 0xc088b38  jal         func_222CE0
label_49b18c:
    if (ctx->pc == 0x49B18Cu) {
        ctx->pc = 0x49B18Cu;
            // 0x49b18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B190u;
        goto label_49b190;
    }
    ctx->pc = 0x49B188u;
    SET_GPR_U32(ctx, 31, 0x49B190u);
    ctx->pc = 0x49B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B188u;
            // 0x49b18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B190u; }
        if (ctx->pc != 0x49B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B190u; }
        if (ctx->pc != 0x49B190u) { return; }
    }
    ctx->pc = 0x49B190u;
label_49b190:
    // 0x49b190: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49b194:
    // 0x49b194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b198:
    // 0x49b198: 0x24425f30  addiu       $v0, $v0, 0x5F30
    ctx->pc = 0x49b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
label_49b19c:
    // 0x49b19c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x49b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49b1a0:
    // 0x49b1a0: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x49b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_49b1a4:
    // 0x49b1a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49b1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b1a8:
    // 0x49b1a8: 0xc08914c  jal         func_224530
label_49b1ac:
    if (ctx->pc == 0x49B1ACu) {
        ctx->pc = 0x49B1ACu;
            // 0x49b1ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B1B0u;
        goto label_49b1b0;
    }
    ctx->pc = 0x49B1A8u;
    SET_GPR_U32(ctx, 31, 0x49B1B0u);
    ctx->pc = 0x49B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B1A8u;
            // 0x49b1ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B1B0u; }
        if (ctx->pc != 0x49B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B1B0u; }
        if (ctx->pc != 0x49B1B0u) { return; }
    }
    ctx->pc = 0x49B1B0u;
label_49b1b0:
    // 0x49b1b0: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x49b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b1b4:
    // 0x49b1b4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x49b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_49b1b8:
    // 0x49b1b8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x49b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b1bc:
    // 0x49b1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b1c0:
    // 0x49b1c0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x49b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b1c4:
    // 0x49b1c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x49b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_49b1c8:
    // 0x49b1c8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x49b1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_49b1cc:
    // 0x49b1cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x49b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_49b1d0:
    // 0x49b1d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x49b1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_49b1d4:
    // 0x49b1d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x49b1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_49b1d8:
    // 0x49b1d8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x49b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49b1dc:
    // 0x49b1dc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x49b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b1e0:
    // 0x49b1e0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x49b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b1e4:
    // 0x49b1e4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x49b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b1e8:
    // 0x49b1e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x49b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_49b1ec:
    // 0x49b1ec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x49b1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_49b1f0:
    // 0x49b1f0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x49b1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_49b1f4:
    // 0x49b1f4: 0xc0892b0  jal         func_224AC0
label_49b1f8:
    if (ctx->pc == 0x49B1F8u) {
        ctx->pc = 0x49B1F8u;
            // 0x49b1f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x49B1FCu;
        goto label_49b1fc;
    }
    ctx->pc = 0x49B1F4u;
    SET_GPR_U32(ctx, 31, 0x49B1FCu);
    ctx->pc = 0x49B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B1F4u;
            // 0x49b1f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B1FCu; }
        if (ctx->pc != 0x49B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B1FCu; }
        if (ctx->pc != 0x49B1FCu) { return; }
    }
    ctx->pc = 0x49B1FCu;
label_49b1fc:
    // 0x49b1fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b200:
    // 0x49b200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b204:
    // 0x49b204: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49b208:
    // 0x49b208: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49b20c:
    // 0x49b20c: 0xc08c164  jal         func_230590
label_49b210:
    if (ctx->pc == 0x49B210u) {
        ctx->pc = 0x49B210u;
            // 0x49b210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49B214u;
        goto label_49b214;
    }
    ctx->pc = 0x49B20Cu;
    SET_GPR_U32(ctx, 31, 0x49B214u);
    ctx->pc = 0x49B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B20Cu;
            // 0x49b210: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B214u; }
        if (ctx->pc != 0x49B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B214u; }
        if (ctx->pc != 0x49B214u) { return; }
    }
    ctx->pc = 0x49B214u;
label_49b214:
    // 0x49b214: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x49b214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_49b218:
    // 0x49b218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b21c:
    // 0x49b21c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x49b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_49b220:
    // 0x49b220: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x49b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49b224:
    // 0x49b224: 0xc0a7a88  jal         func_29EA20
label_49b228:
    if (ctx->pc == 0x49B228u) {
        ctx->pc = 0x49B228u;
            // 0x49b228: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x49B22Cu;
        goto label_49b22c;
    }
    ctx->pc = 0x49B224u;
    SET_GPR_U32(ctx, 31, 0x49B22Cu);
    ctx->pc = 0x49B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B224u;
            // 0x49b228: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B22Cu; }
        if (ctx->pc != 0x49B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B22Cu; }
        if (ctx->pc != 0x49B22Cu) { return; }
    }
    ctx->pc = 0x49B22Cu;
label_49b22c:
    // 0x49b22c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x49b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_49b230:
    // 0x49b230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49b230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49b234:
    // 0x49b234: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_49b238:
    if (ctx->pc == 0x49B238u) {
        ctx->pc = 0x49B238u;
            // 0x49b238: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49B23Cu;
        goto label_49b23c;
    }
    ctx->pc = 0x49B234u;
    {
        const bool branch_taken_0x49b234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B234u;
            // 0x49b238: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b234) {
            ctx->pc = 0x49B258u;
            goto label_49b258;
        }
    }
    ctx->pc = 0x49B23Cu;
label_49b23c:
    // 0x49b23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49b240:
    // 0x49b240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49b240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b244:
    // 0x49b244: 0xc0869d0  jal         func_21A740
label_49b248:
    if (ctx->pc == 0x49B248u) {
        ctx->pc = 0x49B248u;
            // 0x49b248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B24Cu;
        goto label_49b24c;
    }
    ctx->pc = 0x49B244u;
    SET_GPR_U32(ctx, 31, 0x49B24Cu);
    ctx->pc = 0x49B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B244u;
            // 0x49b248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B24Cu; }
        if (ctx->pc != 0x49B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B24Cu; }
        if (ctx->pc != 0x49B24Cu) { return; }
    }
    ctx->pc = 0x49B24Cu;
label_49b24c:
    // 0x49b24c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49b250:
    // 0x49b250: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x49b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_49b254:
    // 0x49b254: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49b254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_49b258:
    // 0x49b258: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x49b258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_49b25c:
    // 0x49b25c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b260:
    // 0x49b260: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49b264:
    // 0x49b264: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49b268:
    // 0x49b268: 0xc08c650  jal         func_231940
label_49b26c:
    if (ctx->pc == 0x49B26Cu) {
        ctx->pc = 0x49B26Cu;
            // 0x49b26c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B270u;
        goto label_49b270;
    }
    ctx->pc = 0x49B268u;
    SET_GPR_U32(ctx, 31, 0x49B270u);
    ctx->pc = 0x49B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B268u;
            // 0x49b26c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B270u; }
        if (ctx->pc != 0x49B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B270u; }
        if (ctx->pc != 0x49B270u) { return; }
    }
    ctx->pc = 0x49B270u;
label_49b270:
    // 0x49b270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49b274:
    // 0x49b274: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x49b274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_49b278:
    // 0x49b278: 0xa2220064  sb          $v0, 0x64($s1)
    ctx->pc = 0x49b278u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 2));
label_49b27c:
    // 0x49b27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b280:
    // 0x49b280: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x49b280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_49b284:
    // 0x49b284: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x49b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_49b288:
    // 0x49b288: 0xa2220066  sb          $v0, 0x66($s1)
    ctx->pc = 0x49b288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 2));
label_49b28c:
    // 0x49b28c: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x49b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_49b290:
    // 0x49b290: 0xa2220068  sb          $v0, 0x68($s1)
    ctx->pc = 0x49b290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 2));
label_49b294:
    // 0x49b294: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x49b294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_49b298:
    // 0x49b298: 0xa222006a  sb          $v0, 0x6A($s1)
    ctx->pc = 0x49b298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 2));
label_49b29c:
    // 0x49b29c: 0xc04f278  jal         func_13C9E0
label_49b2a0:
    if (ctx->pc == 0x49B2A0u) {
        ctx->pc = 0x49B2A0u;
            // 0x49b2a0: 0xa220006b  sb          $zero, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x49B2A4u;
        goto label_49b2a4;
    }
    ctx->pc = 0x49B29Cu;
    SET_GPR_U32(ctx, 31, 0x49B2A4u);
    ctx->pc = 0x49B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B29Cu;
            // 0x49b2a0: 0xa220006b  sb          $zero, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2A4u; }
        if (ctx->pc != 0x49B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2A4u; }
        if (ctx->pc != 0x49B2A4u) { return; }
    }
    ctx->pc = 0x49B2A4u;
label_49b2a4:
    // 0x49b2a4: 0xc62d0034  lwc1        $f13, 0x34($s1)
    ctx->pc = 0x49b2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49b2a8:
    // 0x49b2a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x49b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_49b2ac:
    // 0x49b2ac: 0xc62e0030  lwc1        $f14, 0x30($s1)
    ctx->pc = 0x49b2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49b2b0:
    // 0x49b2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b2b4:
    // 0x49b2b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x49b2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_49b2b8:
    // 0x49b2b8: 0xc04ce50  jal         func_133940
label_49b2bc:
    if (ctx->pc == 0x49B2BCu) {
        ctx->pc = 0x49B2BCu;
            // 0x49b2bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B2C0u;
        goto label_49b2c0;
    }
    ctx->pc = 0x49B2B8u;
    SET_GPR_U32(ctx, 31, 0x49B2C0u);
    ctx->pc = 0x49B2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B2B8u;
            // 0x49b2bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2C0u; }
        if (ctx->pc != 0x49B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2C0u; }
        if (ctx->pc != 0x49B2C0u) { return; }
    }
    ctx->pc = 0x49B2C0u;
label_49b2c0:
    // 0x49b2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b2c4:
    // 0x49b2c4: 0xc04ce80  jal         func_133A00
label_49b2c8:
    if (ctx->pc == 0x49B2C8u) {
        ctx->pc = 0x49B2C8u;
            // 0x49b2c8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x49B2CCu;
        goto label_49b2cc;
    }
    ctx->pc = 0x49B2C4u;
    SET_GPR_U32(ctx, 31, 0x49B2CCu);
    ctx->pc = 0x49B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B2C4u;
            // 0x49b2c8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2CCu; }
        if (ctx->pc != 0x49B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B2CCu; }
        if (ctx->pc != 0x49B2CCu) { return; }
    }
    ctx->pc = 0x49B2CCu;
label_49b2cc:
    // 0x49b2cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49b2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_49b2d0:
    // 0x49b2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49b2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b2d4:
    // 0x49b2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49b2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49b2d8:
    // 0x49b2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b2dc:
    // 0x49b2dc: 0x3e00008  jr          $ra
label_49b2e0:
    if (ctx->pc == 0x49B2E0u) {
        ctx->pc = 0x49B2E0u;
            // 0x49b2e0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x49B2E4u;
        goto label_49b2e4;
    }
    ctx->pc = 0x49B2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B2DCu;
            // 0x49b2e0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B2E4u;
label_49b2e4:
    // 0x49b2e4: 0x0  nop
    ctx->pc = 0x49b2e4u;
    // NOP
label_49b2e8:
    // 0x49b2e8: 0x0  nop
    ctx->pc = 0x49b2e8u;
    // NOP
label_49b2ec:
    // 0x49b2ec: 0x0  nop
    ctx->pc = 0x49b2ecu;
    // NOP
label_49b2f0:
    // 0x49b2f0: 0x3e00008  jr          $ra
label_49b2f4:
    if (ctx->pc == 0x49B2F4u) {
        ctx->pc = 0x49B2F8u;
        goto label_49b2f8;
    }
    ctx->pc = 0x49B2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B2F8u;
label_49b2f8:
    // 0x49b2f8: 0x0  nop
    ctx->pc = 0x49b2f8u;
    // NOP
label_49b2fc:
    // 0x49b2fc: 0x0  nop
    ctx->pc = 0x49b2fcu;
    // NOP
label_49b300:
    // 0x49b300: 0x3e00008  jr          $ra
label_49b304:
    if (ctx->pc == 0x49B304u) {
        ctx->pc = 0x49B304u;
            // 0x49b304: 0x8c8200e4  lw          $v0, 0xE4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
        ctx->pc = 0x49B308u;
        goto label_49b308;
    }
    ctx->pc = 0x49B300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B300u;
            // 0x49b304: 0x8c8200e4  lw          $v0, 0xE4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B308u;
label_49b308:
    // 0x49b308: 0x0  nop
    ctx->pc = 0x49b308u;
    // NOP
label_49b30c:
    // 0x49b30c: 0x0  nop
    ctx->pc = 0x49b30cu;
    // NOP
label_49b310:
    // 0x49b310: 0x3e00008  jr          $ra
label_49b314:
    if (ctx->pc == 0x49B314u) {
        ctx->pc = 0x49B314u;
            // 0x49b314: 0x2402087a  addiu       $v0, $zero, 0x87A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2170));
        ctx->pc = 0x49B318u;
        goto label_49b318;
    }
    ctx->pc = 0x49B310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B310u;
            // 0x49b314: 0x2402087a  addiu       $v0, $zero, 0x87A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2170));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B318u;
label_49b318:
    // 0x49b318: 0x0  nop
    ctx->pc = 0x49b318u;
    // NOP
label_49b31c:
    // 0x49b31c: 0x0  nop
    ctx->pc = 0x49b31cu;
    // NOP
label_49b320:
    // 0x49b320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49b324:
    // 0x49b324: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49b328:
    // 0x49b328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49b32c:
    // 0x49b32c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49b330:
    // 0x49b330: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49b330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49b334:
    // 0x49b334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49b338:
    // 0x49b338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49b33c:
    // 0x49b33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b340:
    // 0x49b340: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x49b340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49b344:
    // 0x49b344: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_49b348:
    if (ctx->pc == 0x49B348u) {
        ctx->pc = 0x49B348u;
            // 0x49b348: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B34Cu;
        goto label_49b34c;
    }
    ctx->pc = 0x49B344u;
    {
        const bool branch_taken_0x49b344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B344u;
            // 0x49b348: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b344) {
            ctx->pc = 0x49B388u;
            goto label_49b388;
        }
    }
    ctx->pc = 0x49B34Cu;
label_49b34c:
    // 0x49b34c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49b34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b350:
    // 0x49b350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49b350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b354:
    // 0x49b354: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49b354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b358:
    // 0x49b358: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x49b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_49b35c:
    // 0x49b35c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49b360:
    // 0x49b360: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49b364:
    // 0x49b364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49b364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b368:
    // 0x49b368: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x49b368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_49b36c:
    // 0x49b36c: 0x320f809  jalr        $t9
label_49b370:
    if (ctx->pc == 0x49B370u) {
        ctx->pc = 0x49B374u;
        goto label_49b374;
    }
    ctx->pc = 0x49B36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B374u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B374u; }
            if (ctx->pc != 0x49B374u) { return; }
        }
        }
    }
    ctx->pc = 0x49B374u;
label_49b374:
    // 0x49b374: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49b374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49b378:
    // 0x49b378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49b378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49b37c:
    // 0x49b37c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x49b37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49b380:
    // 0x49b380: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_49b384:
    if (ctx->pc == 0x49B384u) {
        ctx->pc = 0x49B384u;
            // 0x49b384: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49B388u;
        goto label_49b388;
    }
    ctx->pc = 0x49B380u;
    {
        const bool branch_taken_0x49b380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B380u;
            // 0x49b384: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b380) {
            ctx->pc = 0x49B358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49b358;
        }
    }
    ctx->pc = 0x49B388u;
label_49b388:
    // 0x49b388: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49b388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49b38c:
    // 0x49b38c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49b38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49b390:
    // 0x49b390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49b390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49b394:
    // 0x49b394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49b394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49b398:
    // 0x49b398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49b398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49b39c:
    // 0x49b39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49b39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49b3a0:
    // 0x49b3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b3a4:
    // 0x49b3a4: 0x3e00008  jr          $ra
label_49b3a8:
    if (ctx->pc == 0x49B3A8u) {
        ctx->pc = 0x49B3A8u;
            // 0x49b3a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49B3ACu;
        goto label_49b3ac;
    }
    ctx->pc = 0x49B3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B3A4u;
            // 0x49b3a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B3ACu;
label_49b3ac:
    // 0x49b3ac: 0x0  nop
    ctx->pc = 0x49b3acu;
    // NOP
label_49b3b0:
    // 0x49b3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b3b4:
    // 0x49b3b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49b3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b3b8:
    // 0x49b3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b3bc:
    // 0x49b3bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x49b3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_49b3c0:
    // 0x49b3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b3c4:
    // 0x49b3c4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x49b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49b3c8:
    // 0x49b3c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49b3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49b3cc:
    // 0x49b3cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x49b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_49b3d0:
    // 0x49b3d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49b3d4:
    // 0x49b3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49b3d8:
    // 0x49b3d8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x49b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_49b3dc:
    // 0x49b3dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x49b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b3e0:
    // 0x49b3e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x49b3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_49b3e4:
    // 0x49b3e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_49b3e8:
    // 0x49b3e8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x49b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_49b3ec:
    // 0x49b3ec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x49b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_49b3f0:
    // 0x49b3f0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x49b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49b3f4:
    // 0x49b3f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49b3f8:
    // 0x49b3f8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x49b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_49b3fc:
    // 0x49b3fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x49b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49b400:
    // 0x49b400: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x49b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_49b404:
    // 0x49b404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49b404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49b408:
    // 0x49b408: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x49b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49b40c:
    // 0x49b40c: 0xc0a997c  jal         func_2A65F0
label_49b410:
    if (ctx->pc == 0x49B410u) {
        ctx->pc = 0x49B410u;
            // 0x49b410: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x49B414u;
        goto label_49b414;
    }
    ctx->pc = 0x49B40Cu;
    SET_GPR_U32(ctx, 31, 0x49B414u);
    ctx->pc = 0x49B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B40Cu;
            // 0x49b410: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B414u; }
        if (ctx->pc != 0x49B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B414u; }
        if (ctx->pc != 0x49B414u) { return; }
    }
    ctx->pc = 0x49B414u;
label_49b414:
    // 0x49b414: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x49b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_49b418:
    // 0x49b418: 0xc0d879c  jal         func_361E70
label_49b41c:
    if (ctx->pc == 0x49B41Cu) {
        ctx->pc = 0x49B41Cu;
            // 0x49b41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B420u;
        goto label_49b420;
    }
    ctx->pc = 0x49B418u;
    SET_GPR_U32(ctx, 31, 0x49B420u);
    ctx->pc = 0x49B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B418u;
            // 0x49b41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B420u; }
        if (ctx->pc != 0x49B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B420u; }
        if (ctx->pc != 0x49B420u) { return; }
    }
    ctx->pc = 0x49B420u;
label_49b420:
    // 0x49b420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b424:
    // 0x49b424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b428:
    // 0x49b428: 0x3e00008  jr          $ra
label_49b42c:
    if (ctx->pc == 0x49B42Cu) {
        ctx->pc = 0x49B42Cu;
            // 0x49b42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49B430u;
        goto label_49b430;
    }
    ctx->pc = 0x49B428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B428u;
            // 0x49b42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B430u;
label_49b430:
    // 0x49b430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49b434:
    // 0x49b434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b438:
    // 0x49b438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b43c:
    // 0x49b43c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x49b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_49b440:
    // 0x49b440: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_49b444:
    if (ctx->pc == 0x49B444u) {
        ctx->pc = 0x49B444u;
            // 0x49b444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B448u;
        goto label_49b448;
    }
    ctx->pc = 0x49B440u;
    {
        const bool branch_taken_0x49b440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B440u;
            // 0x49b444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b440) {
            ctx->pc = 0x49B560u;
            goto label_49b560;
        }
    }
    ctx->pc = 0x49B448u;
label_49b448:
    // 0x49b448: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49b44c:
    // 0x49b44c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_49b450:
    // 0x49b450: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49b450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49b454:
    // 0x49b454: 0xc075128  jal         func_1D44A0
label_49b458:
    if (ctx->pc == 0x49B458u) {
        ctx->pc = 0x49B458u;
            // 0x49b458: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x49B45Cu;
        goto label_49b45c;
    }
    ctx->pc = 0x49B454u;
    SET_GPR_U32(ctx, 31, 0x49B45Cu);
    ctx->pc = 0x49B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B454u;
            // 0x49b458: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B45Cu; }
        if (ctx->pc != 0x49B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B45Cu; }
        if (ctx->pc != 0x49B45Cu) { return; }
    }
    ctx->pc = 0x49B45Cu;
label_49b45c:
    // 0x49b45c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x49b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49b460:
    // 0x49b460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b464:
    // 0x49b464: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x49b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_49b468:
    // 0x49b468: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x49b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_49b46c:
    // 0x49b46c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49b46cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49b470:
    // 0x49b470: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49b474:
    if (ctx->pc == 0x49B474u) {
        ctx->pc = 0x49B474u;
            // 0x49b474: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x49B478u;
        goto label_49b478;
    }
    ctx->pc = 0x49B470u;
    {
        const bool branch_taken_0x49b470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B470u;
            // 0x49b474: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b470) {
            ctx->pc = 0x49B480u;
            goto label_49b480;
        }
    }
    ctx->pc = 0x49B478u;
label_49b478:
    // 0x49b478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b47c:
    // 0x49b47c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x49b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_49b480:
    // 0x49b480: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b484:
    // 0x49b484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b488:
    // 0x49b488: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x49b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_49b48c:
    // 0x49b48c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49b490:
    // 0x49b490: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49b490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49b494:
    // 0x49b494: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49b498:
    if (ctx->pc == 0x49B498u) {
        ctx->pc = 0x49B498u;
            // 0x49b498: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49B49Cu;
        goto label_49b49c;
    }
    ctx->pc = 0x49B494u;
    {
        const bool branch_taken_0x49b494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b494) {
            ctx->pc = 0x49B498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B494u;
            // 0x49b498: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B4A8u;
            goto label_49b4a8;
        }
    }
    ctx->pc = 0x49B49Cu;
label_49b49c:
    // 0x49b49c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b4a0:
    // 0x49b4a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x49b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_49b4a4:
    // 0x49b4a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49b4a8:
    // 0x49b4a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b4ac:
    // 0x49b4ac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x49b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_49b4b0:
    // 0x49b4b0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49b4b4:
    // 0x49b4b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49b4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49b4b8:
    // 0x49b4b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49b4bc:
    if (ctx->pc == 0x49B4BCu) {
        ctx->pc = 0x49B4BCu;
            // 0x49b4bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x49B4C0u;
        goto label_49b4c0;
    }
    ctx->pc = 0x49B4B8u;
    {
        const bool branch_taken_0x49b4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b4b8) {
            ctx->pc = 0x49B4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B4B8u;
            // 0x49b4bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B4CCu;
            goto label_49b4cc;
        }
    }
    ctx->pc = 0x49B4C0u;
label_49b4c0:
    // 0x49b4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49b4c4:
    // 0x49b4c4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x49b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_49b4c8:
    // 0x49b4c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49b4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b4cc:
    // 0x49b4cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x49b4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_49b4d0:
    // 0x49b4d0: 0x320f809  jalr        $t9
label_49b4d4:
    if (ctx->pc == 0x49B4D4u) {
        ctx->pc = 0x49B4D4u;
            // 0x49b4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B4D8u;
        goto label_49b4d8;
    }
    ctx->pc = 0x49B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B4D8u);
        ctx->pc = 0x49B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B4D0u;
            // 0x49b4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B4D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B4D8u; }
            if (ctx->pc != 0x49B4D8u) { return; }
        }
        }
    }
    ctx->pc = 0x49B4D8u;
label_49b4d8:
    // 0x49b4d8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49b4dc:
    // 0x49b4dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b4e0:
    // 0x49b4e0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x49b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_49b4e4:
    // 0x49b4e4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49b4e8:
    // 0x49b4e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49b4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49b4ec:
    // 0x49b4ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49b4ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49b4f0:
    // 0x49b4f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49b4f4:
    if (ctx->pc == 0x49B4F4u) {
        ctx->pc = 0x49B4F4u;
            // 0x49b4f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x49B4F8u;
        goto label_49b4f8;
    }
    ctx->pc = 0x49B4F0u;
    {
        const bool branch_taken_0x49b4f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b4f0) {
            ctx->pc = 0x49B4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B4F0u;
            // 0x49b4f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B504u;
            goto label_49b504;
        }
    }
    ctx->pc = 0x49B4F8u;
label_49b4f8:
    // 0x49b4f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b4fc:
    // 0x49b4fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x49b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_49b500:
    // 0x49b500: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49b504:
    // 0x49b504: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b508:
    // 0x49b508: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x49b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_49b50c:
    // 0x49b50c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49b510:
    // 0x49b510: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49b510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49b514:
    // 0x49b514: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49b514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49b518:
    // 0x49b518: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49b51c:
    if (ctx->pc == 0x49B51Cu) {
        ctx->pc = 0x49B520u;
        goto label_49b520;
    }
    ctx->pc = 0x49B518u;
    {
        const bool branch_taken_0x49b518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b518) {
            ctx->pc = 0x49B528u;
            goto label_49b528;
        }
    }
    ctx->pc = 0x49B520u;
label_49b520:
    // 0x49b520: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b524:
    // 0x49b524: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x49b524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_49b528:
    // 0x49b528: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b52c:
    // 0x49b52c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x49b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_49b530:
    // 0x49b530: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49b530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49b534:
    // 0x49b534: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49b538:
    if (ctx->pc == 0x49B538u) {
        ctx->pc = 0x49B53Cu;
        goto label_49b53c;
    }
    ctx->pc = 0x49B534u;
    {
        const bool branch_taken_0x49b534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b534) {
            ctx->pc = 0x49B544u;
            goto label_49b544;
        }
    }
    ctx->pc = 0x49B53Cu;
label_49b53c:
    // 0x49b53c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b540:
    // 0x49b540: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x49b540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_49b544:
    // 0x49b544: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b548:
    // 0x49b548: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x49b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_49b54c:
    // 0x49b54c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49b54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49b550:
    // 0x49b550: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49b554:
    if (ctx->pc == 0x49B554u) {
        ctx->pc = 0x49B554u;
            // 0x49b554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x49B558u;
        goto label_49b558;
    }
    ctx->pc = 0x49B550u;
    {
        const bool branch_taken_0x49b550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b550) {
            ctx->pc = 0x49B554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B550u;
            // 0x49b554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B564u;
            goto label_49b564;
        }
    }
    ctx->pc = 0x49B558u;
label_49b558:
    // 0x49b558: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49b558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49b55c:
    // 0x49b55c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x49b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_49b560:
    // 0x49b560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b564:
    // 0x49b564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b568:
    // 0x49b568: 0x3e00008  jr          $ra
label_49b56c:
    if (ctx->pc == 0x49B56Cu) {
        ctx->pc = 0x49B56Cu;
            // 0x49b56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49B570u;
        goto label_49b570;
    }
    ctx->pc = 0x49B568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B568u;
            // 0x49b56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B570u;
label_49b570:
    // 0x49b570: 0x812685c  j           func_49A170
label_49b574:
    if (ctx->pc == 0x49B574u) {
        ctx->pc = 0x49B574u;
            // 0x49b574: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x49B578u;
        goto label_49b578;
    }
    ctx->pc = 0x49B570u;
    ctx->pc = 0x49B574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B570u;
            // 0x49b574: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A170u;
    {
        auto targetFn = runtime->lookupFunction(0x49A170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49B578u;
label_49b578:
    // 0x49b578: 0x0  nop
    ctx->pc = 0x49b578u;
    // NOP
label_49b57c:
    // 0x49b57c: 0x0  nop
    ctx->pc = 0x49b57cu;
    // NOP
label_49b580:
    // 0x49b580: 0x8126948  j           func_49A520
label_49b584:
    if (ctx->pc == 0x49B584u) {
        ctx->pc = 0x49B584u;
            // 0x49b584: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49B588u;
        goto label_49b588;
    }
    ctx->pc = 0x49B580u;
    ctx->pc = 0x49B584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B580u;
            // 0x49b584: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A520u;
    {
        auto targetFn = runtime->lookupFunction(0x49A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49B588u;
label_49b588:
    // 0x49b588: 0x0  nop
    ctx->pc = 0x49b588u;
    // NOP
label_49b58c:
    // 0x49b58c: 0x0  nop
    ctx->pc = 0x49b58cu;
    // NOP
label_49b590:
    // 0x49b590: 0x8126804  j           func_49A010
label_49b594:
    if (ctx->pc == 0x49B594u) {
        ctx->pc = 0x49B594u;
            // 0x49b594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49B598u;
        goto label_49b598;
    }
    ctx->pc = 0x49B590u;
    ctx->pc = 0x49B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B590u;
            // 0x49b594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (runtime->hasFunction(0x49A010u)) {
        auto targetFn = runtime->lookupFunction(0x49A010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0049A010_0x49a010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x49B598u;
label_49b598:
    // 0x49b598: 0x0  nop
    ctx->pc = 0x49b598u;
    // NOP
label_49b59c:
    // 0x49b59c: 0x0  nop
    ctx->pc = 0x49b59cu;
    // NOP
label_49b5a0:
    // 0x49b5a0: 0x81267e0  j           func_499F80
label_49b5a4:
    if (ctx->pc == 0x49B5A4u) {
        ctx->pc = 0x49B5A4u;
            // 0x49b5a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49B5A8u;
        goto label_49b5a8;
    }
    ctx->pc = 0x49B5A0u;
    ctx->pc = 0x49B5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B5A0u;
            // 0x49b5a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499F80u;
    {
        auto targetFn = runtime->lookupFunction(0x499F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49B5A8u;
label_49b5a8:
    // 0x49b5a8: 0x0  nop
    ctx->pc = 0x49b5a8u;
    // NOP
label_49b5ac:
    // 0x49b5ac: 0x0  nop
    ctx->pc = 0x49b5acu;
    // NOP
label_49b5b0:
    // 0x49b5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b5b4:
    // 0x49b5b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49b5b8:
    // 0x49b5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b5bc:
    // 0x49b5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b5c0:
    // 0x49b5c0: 0x8c7089e0  lw          $s0, -0x7620($v1)
    ctx->pc = 0x49b5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_49b5c4:
    // 0x49b5c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x49b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_49b5c8:
    // 0x49b5c8: 0x78653f40  lq          $a1, 0x3F40($v1)
    ctx->pc = 0x49b5c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16192)));
label_49b5cc:
    // 0x49b5cc: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x49b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_49b5d0:
    // 0x49b5d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b5d4:
    // 0x49b5d4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x49b5d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49b5d8:
    // 0x49b5d8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_49b5dc:
    if (ctx->pc == 0x49B5DCu) {
        ctx->pc = 0x49B5E0u;
        goto label_49b5e0;
    }
    ctx->pc = 0x49B5D8u;
    {
        const bool branch_taken_0x49b5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49b5d8) {
            ctx->pc = 0x49B5E8u;
            goto label_49b5e8;
        }
    }
    ctx->pc = 0x49B5E0u;
label_49b5e0:
    // 0x49b5e0: 0x10000027  b           . + 4 + (0x27 << 2)
label_49b5e4:
    if (ctx->pc == 0x49B5E4u) {
        ctx->pc = 0x49B5E4u;
            // 0x49b5e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x49B5E8u;
        goto label_49b5e8;
    }
    ctx->pc = 0x49B5E0u;
    {
        const bool branch_taken_0x49b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B5E0u;
            // 0x49b5e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b5e0) {
            ctx->pc = 0x49B680u;
            goto label_49b680;
        }
    }
    ctx->pc = 0x49B5E8u;
label_49b5e8:
    // 0x49b5e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49b5ec:
    // 0x49b5ec: 0x8c441d0c  lw          $a0, 0x1D0C($v0)
    ctx->pc = 0x49b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
label_49b5f0:
    // 0x49b5f0: 0xc0506ac  jal         func_141AB0
label_49b5f4:
    if (ctx->pc == 0x49B5F4u) {
        ctx->pc = 0x49B5F4u;
            // 0x49b5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49B5F8u;
        goto label_49b5f8;
    }
    ctx->pc = 0x49B5F0u;
    SET_GPR_U32(ctx, 31, 0x49B5F8u);
    ctx->pc = 0x49B5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B5F0u;
            // 0x49b5f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B5F8u; }
        if (ctx->pc != 0x49B5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B5F8u; }
        if (ctx->pc != 0x49B5F8u) { return; }
    }
    ctx->pc = 0x49B5F8u;
label_49b5f8:
    // 0x49b5f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49b5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b5fc:
    // 0x49b5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b600:
    // 0x49b600: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49b600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49b604:
    // 0x49b604: 0x320f809  jalr        $t9
label_49b608:
    if (ctx->pc == 0x49B608u) {
        ctx->pc = 0x49B608u;
            // 0x49b608: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49B60Cu;
        goto label_49b60c;
    }
    ctx->pc = 0x49B604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B60Cu);
        ctx->pc = 0x49B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B604u;
            // 0x49b608: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B60Cu; }
            if (ctx->pc != 0x49B60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49B60Cu;
label_49b60c:
    // 0x49b60c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x49b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_49b610:
    // 0x49b610: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49b614:
    // 0x49b614: 0x8c680ac4  lw          $t0, 0xAC4($v1)
    ctx->pc = 0x49b614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
label_49b618:
    // 0x49b618: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b61c:
    // 0x49b61c: 0x8c470ac0  lw          $a3, 0xAC0($v0)
    ctx->pc = 0x49b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
label_49b620:
    // 0x49b620: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x49b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_49b624:
    // 0x49b624: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x49b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49b628:
    // 0x49b628: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x49b628u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b62c:
    // 0x49b62c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x49b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_49b630:
    // 0x49b630: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x49b630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_49b634:
    // 0x49b634: 0x8c630ac8  lw          $v1, 0xAC8($v1)
    ctx->pc = 0x49b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2760)));
label_49b638:
    // 0x49b638: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49b63c:
    // 0x49b63c: 0x8c420acc  lw          $v0, 0xACC($v0)
    ctx->pc = 0x49b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
label_49b640:
    // 0x49b640: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x49b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_49b644:
    // 0x49b644: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x49b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_49b648:
    // 0x49b648: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x49b648u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b64c:
    // 0x49b64c: 0x0  nop
    ctx->pc = 0x49b64cu;
    // NOP
label_49b650:
    // 0x49b650: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x49b650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_49b654:
    // 0x49b654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49b654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b658:
    // 0x49b658: 0x0  nop
    ctx->pc = 0x49b658u;
    // NOP
label_49b65c:
    // 0x49b65c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x49b65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_49b660:
    // 0x49b660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x49b660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b664:
    // 0x49b664: 0xc0bc21c  jal         func_2F0870
label_49b668:
    if (ctx->pc == 0x49B668u) {
        ctx->pc = 0x49B668u;
            // 0x49b668: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x49B66Cu;
        goto label_49b66c;
    }
    ctx->pc = 0x49B664u;
    SET_GPR_U32(ctx, 31, 0x49B66Cu);
    ctx->pc = 0x49B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B664u;
            // 0x49b668: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0870u;
    if (runtime->hasFunction(0x2F0870u)) {
        auto targetFn = runtime->lookupFunction(0x2F0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B66Cu; }
        if (ctx->pc != 0x49B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0870_0x2f0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B66Cu; }
        if (ctx->pc != 0x49B66Cu) { return; }
    }
    ctx->pc = 0x49B66Cu;
label_49b66c:
    // 0x49b66c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49b66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b670:
    // 0x49b670: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x49b670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_49b674:
    // 0x49b674: 0x320f809  jalr        $t9
label_49b678:
    if (ctx->pc == 0x49B678u) {
        ctx->pc = 0x49B678u;
            // 0x49b678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B67Cu;
        goto label_49b67c;
    }
    ctx->pc = 0x49B674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B67Cu);
        ctx->pc = 0x49B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B674u;
            // 0x49b678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B67Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B67Cu; }
            if (ctx->pc != 0x49B67Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49B67Cu;
label_49b67c:
    // 0x49b67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b680:
    // 0x49b680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b684:
    // 0x49b684: 0x3e00008  jr          $ra
label_49b688:
    if (ctx->pc == 0x49B688u) {
        ctx->pc = 0x49B688u;
            // 0x49b688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49B68Cu;
        goto label_49b68c;
    }
    ctx->pc = 0x49B684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B684u;
            // 0x49b688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B68Cu;
label_49b68c:
    // 0x49b68c: 0x0  nop
    ctx->pc = 0x49b68cu;
    // NOP
label_49b690:
    // 0x49b690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49b694:
    // 0x49b694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49b698:
    // 0x49b698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b69c:
    // 0x49b69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b6a0:
    // 0x49b6a0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49b6a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49b6a4:
    // 0x49b6a4: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_49b6a8:
    if (ctx->pc == 0x49B6A8u) {
        ctx->pc = 0x49B6A8u;
            // 0x49b6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B6ACu;
        goto label_49b6ac;
    }
    ctx->pc = 0x49B6A4u;
    {
        const bool branch_taken_0x49b6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6A4u;
            // 0x49b6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b6a4) {
            ctx->pc = 0x49B718u;
            goto label_49b718;
        }
    }
    ctx->pc = 0x49B6ACu;
label_49b6ac:
    // 0x49b6ac: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_49b6b0:
    if (ctx->pc == 0x49B6B0u) {
        ctx->pc = 0x49B6B0u;
            // 0x49b6b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49B6B4u;
        goto label_49b6b4;
    }
    ctx->pc = 0x49B6ACu;
    {
        const bool branch_taken_0x49b6ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b6ac) {
            ctx->pc = 0x49B6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6ACu;
            // 0x49b6b0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B704u;
            goto label_49b704;
        }
    }
    ctx->pc = 0x49B6B4u;
label_49b6b4:
    // 0x49b6b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b6b8:
    // 0x49b6b8: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_49b6bc:
    if (ctx->pc == 0x49B6BCu) {
        ctx->pc = 0x49B6BCu;
            // 0x49b6bc: 0x92030058  lbu         $v1, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x49B6C0u;
        goto label_49b6c0;
    }
    ctx->pc = 0x49B6B8u;
    {
        const bool branch_taken_0x49b6b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49b6b8) {
            ctx->pc = 0x49B6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6B8u;
            // 0x49b6bc: 0x92030058  lbu         $v1, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B6E4u;
            goto label_49b6e4;
        }
    }
    ctx->pc = 0x49B6C0u;
label_49b6c0:
    // 0x49b6c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49b6c4:
    // 0x49b6c4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_49b6c8:
    if (ctx->pc == 0x49B6C8u) {
        ctx->pc = 0x49B6C8u;
            // 0x49b6c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49B6CCu;
        goto label_49b6cc;
    }
    ctx->pc = 0x49B6C4u;
    {
        const bool branch_taken_0x49b6c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49b6c4) {
            ctx->pc = 0x49B6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6C4u;
            // 0x49b6c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B6D4u;
            goto label_49b6d4;
        }
    }
    ctx->pc = 0x49B6CCu;
label_49b6cc:
    // 0x49b6cc: 0x10000018  b           . + 4 + (0x18 << 2)
label_49b6d0:
    if (ctx->pc == 0x49B6D0u) {
        ctx->pc = 0x49B6D0u;
            // 0x49b6d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x49B6D4u;
        goto label_49b6d4;
    }
    ctx->pc = 0x49B6CCu;
    {
        const bool branch_taken_0x49b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6CCu;
            // 0x49b6d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b6cc) {
            ctx->pc = 0x49B730u;
            goto label_49b730;
        }
    }
    ctx->pc = 0x49B6D4u;
label_49b6d4:
    // 0x49b6d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49b6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49b6d8:
    // 0x49b6d8: 0x320f809  jalr        $t9
label_49b6dc:
    if (ctx->pc == 0x49B6DCu) {
        ctx->pc = 0x49B6E0u;
        goto label_49b6e0;
    }
    ctx->pc = 0x49B6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B6E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B6E0u; }
            if (ctx->pc != 0x49B6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x49B6E0u;
label_49b6e0:
    // 0x49b6e0: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x49b6e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_49b6e4:
    // 0x49b6e4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_49b6e8:
    if (ctx->pc == 0x49B6E8u) {
        ctx->pc = 0x49B6ECu;
        goto label_49b6ec;
    }
    ctx->pc = 0x49B6E4u;
    {
        const bool branch_taken_0x49b6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b6e4) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49B6ECu;
label_49b6ec:
    // 0x49b6ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49b6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49b6f0:
    // 0x49b6f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49b6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49b6f4:
    // 0x49b6f4: 0x320f809  jalr        $t9
label_49b6f8:
    if (ctx->pc == 0x49B6F8u) {
        ctx->pc = 0x49B6F8u;
            // 0x49b6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B6FCu;
        goto label_49b6fc;
    }
    ctx->pc = 0x49B6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B6FCu);
        ctx->pc = 0x49B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B6F4u;
            // 0x49b6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B6FCu; }
            if (ctx->pc != 0x49B6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x49B6FCu;
label_49b6fc:
    // 0x49b6fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_49b700:
    if (ctx->pc == 0x49B700u) {
        ctx->pc = 0x49B704u;
        goto label_49b704;
    }
    ctx->pc = 0x49B6FCu;
    {
        const bool branch_taken_0x49b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b6fc) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49B704u;
label_49b704:
    // 0x49b704: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49b704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49b708:
    // 0x49b708: 0x320f809  jalr        $t9
label_49b70c:
    if (ctx->pc == 0x49B70Cu) {
        ctx->pc = 0x49B710u;
        goto label_49b710;
    }
    ctx->pc = 0x49B708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B710u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B710u; }
            if (ctx->pc != 0x49B710u) { return; }
        }
        }
    }
    ctx->pc = 0x49B710u;
label_49b710:
    // 0x49b710: 0x10000006  b           . + 4 + (0x6 << 2)
label_49b714:
    if (ctx->pc == 0x49B714u) {
        ctx->pc = 0x49B718u;
        goto label_49b718;
    }
    ctx->pc = 0x49B710u;
    {
        const bool branch_taken_0x49b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b710) {
            ctx->pc = 0x49B72Cu;
            goto label_49b72c;
        }
    }
    ctx->pc = 0x49B718u;
label_49b718:
    // 0x49b718: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x49b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_49b71c:
    // 0x49b71c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49b71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b720:
    // 0x49b720: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x49b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_49b724:
    // 0x49b724: 0xc057b7c  jal         func_15EDF0
label_49b728:
    if (ctx->pc == 0x49B728u) {
        ctx->pc = 0x49B728u;
            // 0x49b728: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x49B72Cu;
        goto label_49b72c;
    }
    ctx->pc = 0x49B724u;
    SET_GPR_U32(ctx, 31, 0x49B72Cu);
    ctx->pc = 0x49B728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B724u;
            // 0x49b728: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B72Cu; }
        if (ctx->pc != 0x49B72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B72Cu; }
        if (ctx->pc != 0x49B72Cu) { return; }
    }
    ctx->pc = 0x49B72Cu;
label_49b72c:
    // 0x49b72c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b730:
    // 0x49b730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b734:
    // 0x49b734: 0x3e00008  jr          $ra
label_49b738:
    if (ctx->pc == 0x49B738u) {
        ctx->pc = 0x49B738u;
            // 0x49b738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49B73Cu;
        goto label_49b73c;
    }
    ctx->pc = 0x49B734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B734u;
            // 0x49b738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B73Cu;
label_49b73c:
    // 0x49b73c: 0x0  nop
    ctx->pc = 0x49b73cu;
    // NOP
label_49b740:
    // 0x49b740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49b744:
    // 0x49b744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49b748:
    // 0x49b748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49b74c:
    // 0x49b74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b750:
    // 0x49b750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49b750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49b754:
    // 0x49b754: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_49b758:
    if (ctx->pc == 0x49B758u) {
        ctx->pc = 0x49B758u;
            // 0x49b758: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B75Cu;
        goto label_49b75c;
    }
    ctx->pc = 0x49B754u;
    {
        const bool branch_taken_0x49b754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B754u;
            // 0x49b758: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b754) {
            ctx->pc = 0x49B788u;
            goto label_49b788;
        }
    }
    ctx->pc = 0x49B75Cu;
label_49b75c:
    // 0x49b75c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49b760:
    // 0x49b760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49b760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b764:
    // 0x49b764: 0x2442fc80  addiu       $v0, $v0, -0x380
    ctx->pc = 0x49b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
label_49b768:
    // 0x49b768: 0xc0ee744  jal         func_3B9D10
label_49b76c:
    if (ctx->pc == 0x49B76Cu) {
        ctx->pc = 0x49B76Cu;
            // 0x49b76c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49B770u;
        goto label_49b770;
    }
    ctx->pc = 0x49B768u;
    SET_GPR_U32(ctx, 31, 0x49B770u);
    ctx->pc = 0x49B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B768u;
            // 0x49b76c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B770u; }
        if (ctx->pc != 0x49B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B770u; }
        if (ctx->pc != 0x49B770u) { return; }
    }
    ctx->pc = 0x49B770u;
label_49b770:
    // 0x49b770: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49b774:
    // 0x49b774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49b774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49b778:
    // 0x49b778: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49b77c:
    if (ctx->pc == 0x49B77Cu) {
        ctx->pc = 0x49B77Cu;
            // 0x49b77c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B780u;
        goto label_49b780;
    }
    ctx->pc = 0x49B778u;
    {
        const bool branch_taken_0x49b778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49b778) {
            ctx->pc = 0x49B77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B778u;
            // 0x49b77c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B78Cu;
            goto label_49b78c;
        }
    }
    ctx->pc = 0x49B780u;
label_49b780:
    // 0x49b780: 0xc0400a8  jal         func_1002A0
label_49b784:
    if (ctx->pc == 0x49B784u) {
        ctx->pc = 0x49B784u;
            // 0x49b784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B788u;
        goto label_49b788;
    }
    ctx->pc = 0x49B780u;
    SET_GPR_U32(ctx, 31, 0x49B788u);
    ctx->pc = 0x49B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B780u;
            // 0x49b784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B788u; }
        if (ctx->pc != 0x49B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B788u; }
        if (ctx->pc != 0x49B788u) { return; }
    }
    ctx->pc = 0x49B788u;
label_49b788:
    // 0x49b788: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49b788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49b78c:
    // 0x49b78c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49b790:
    // 0x49b790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49b790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49b794:
    // 0x49b794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b798:
    // 0x49b798: 0x3e00008  jr          $ra
label_49b79c:
    if (ctx->pc == 0x49B79Cu) {
        ctx->pc = 0x49B79Cu;
            // 0x49b79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49B7A0u;
        goto label_fallthrough_0x49b798;
    }
    ctx->pc = 0x49B798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B798u;
            // 0x49b79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x49b798:
    ctx->pc = 0x49B7A0u;
}
