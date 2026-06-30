#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039A840
// Address: 0x39a840 - 0x39b550
void sub_0039A840_0x39a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A840_0x39a840");
#endif

    switch (ctx->pc) {
        case 0x39a840u: goto label_39a840;
        case 0x39a844u: goto label_39a844;
        case 0x39a848u: goto label_39a848;
        case 0x39a84cu: goto label_39a84c;
        case 0x39a850u: goto label_39a850;
        case 0x39a854u: goto label_39a854;
        case 0x39a858u: goto label_39a858;
        case 0x39a85cu: goto label_39a85c;
        case 0x39a860u: goto label_39a860;
        case 0x39a864u: goto label_39a864;
        case 0x39a868u: goto label_39a868;
        case 0x39a86cu: goto label_39a86c;
        case 0x39a870u: goto label_39a870;
        case 0x39a874u: goto label_39a874;
        case 0x39a878u: goto label_39a878;
        case 0x39a87cu: goto label_39a87c;
        case 0x39a880u: goto label_39a880;
        case 0x39a884u: goto label_39a884;
        case 0x39a888u: goto label_39a888;
        case 0x39a88cu: goto label_39a88c;
        case 0x39a890u: goto label_39a890;
        case 0x39a894u: goto label_39a894;
        case 0x39a898u: goto label_39a898;
        case 0x39a89cu: goto label_39a89c;
        case 0x39a8a0u: goto label_39a8a0;
        case 0x39a8a4u: goto label_39a8a4;
        case 0x39a8a8u: goto label_39a8a8;
        case 0x39a8acu: goto label_39a8ac;
        case 0x39a8b0u: goto label_39a8b0;
        case 0x39a8b4u: goto label_39a8b4;
        case 0x39a8b8u: goto label_39a8b8;
        case 0x39a8bcu: goto label_39a8bc;
        case 0x39a8c0u: goto label_39a8c0;
        case 0x39a8c4u: goto label_39a8c4;
        case 0x39a8c8u: goto label_39a8c8;
        case 0x39a8ccu: goto label_39a8cc;
        case 0x39a8d0u: goto label_39a8d0;
        case 0x39a8d4u: goto label_39a8d4;
        case 0x39a8d8u: goto label_39a8d8;
        case 0x39a8dcu: goto label_39a8dc;
        case 0x39a8e0u: goto label_39a8e0;
        case 0x39a8e4u: goto label_39a8e4;
        case 0x39a8e8u: goto label_39a8e8;
        case 0x39a8ecu: goto label_39a8ec;
        case 0x39a8f0u: goto label_39a8f0;
        case 0x39a8f4u: goto label_39a8f4;
        case 0x39a8f8u: goto label_39a8f8;
        case 0x39a8fcu: goto label_39a8fc;
        case 0x39a900u: goto label_39a900;
        case 0x39a904u: goto label_39a904;
        case 0x39a908u: goto label_39a908;
        case 0x39a90cu: goto label_39a90c;
        case 0x39a910u: goto label_39a910;
        case 0x39a914u: goto label_39a914;
        case 0x39a918u: goto label_39a918;
        case 0x39a91cu: goto label_39a91c;
        case 0x39a920u: goto label_39a920;
        case 0x39a924u: goto label_39a924;
        case 0x39a928u: goto label_39a928;
        case 0x39a92cu: goto label_39a92c;
        case 0x39a930u: goto label_39a930;
        case 0x39a934u: goto label_39a934;
        case 0x39a938u: goto label_39a938;
        case 0x39a93cu: goto label_39a93c;
        case 0x39a940u: goto label_39a940;
        case 0x39a944u: goto label_39a944;
        case 0x39a948u: goto label_39a948;
        case 0x39a94cu: goto label_39a94c;
        case 0x39a950u: goto label_39a950;
        case 0x39a954u: goto label_39a954;
        case 0x39a958u: goto label_39a958;
        case 0x39a95cu: goto label_39a95c;
        case 0x39a960u: goto label_39a960;
        case 0x39a964u: goto label_39a964;
        case 0x39a968u: goto label_39a968;
        case 0x39a96cu: goto label_39a96c;
        case 0x39a970u: goto label_39a970;
        case 0x39a974u: goto label_39a974;
        case 0x39a978u: goto label_39a978;
        case 0x39a97cu: goto label_39a97c;
        case 0x39a980u: goto label_39a980;
        case 0x39a984u: goto label_39a984;
        case 0x39a988u: goto label_39a988;
        case 0x39a98cu: goto label_39a98c;
        case 0x39a990u: goto label_39a990;
        case 0x39a994u: goto label_39a994;
        case 0x39a998u: goto label_39a998;
        case 0x39a99cu: goto label_39a99c;
        case 0x39a9a0u: goto label_39a9a0;
        case 0x39a9a4u: goto label_39a9a4;
        case 0x39a9a8u: goto label_39a9a8;
        case 0x39a9acu: goto label_39a9ac;
        case 0x39a9b0u: goto label_39a9b0;
        case 0x39a9b4u: goto label_39a9b4;
        case 0x39a9b8u: goto label_39a9b8;
        case 0x39a9bcu: goto label_39a9bc;
        case 0x39a9c0u: goto label_39a9c0;
        case 0x39a9c4u: goto label_39a9c4;
        case 0x39a9c8u: goto label_39a9c8;
        case 0x39a9ccu: goto label_39a9cc;
        case 0x39a9d0u: goto label_39a9d0;
        case 0x39a9d4u: goto label_39a9d4;
        case 0x39a9d8u: goto label_39a9d8;
        case 0x39a9dcu: goto label_39a9dc;
        case 0x39a9e0u: goto label_39a9e0;
        case 0x39a9e4u: goto label_39a9e4;
        case 0x39a9e8u: goto label_39a9e8;
        case 0x39a9ecu: goto label_39a9ec;
        case 0x39a9f0u: goto label_39a9f0;
        case 0x39a9f4u: goto label_39a9f4;
        case 0x39a9f8u: goto label_39a9f8;
        case 0x39a9fcu: goto label_39a9fc;
        case 0x39aa00u: goto label_39aa00;
        case 0x39aa04u: goto label_39aa04;
        case 0x39aa08u: goto label_39aa08;
        case 0x39aa0cu: goto label_39aa0c;
        case 0x39aa10u: goto label_39aa10;
        case 0x39aa14u: goto label_39aa14;
        case 0x39aa18u: goto label_39aa18;
        case 0x39aa1cu: goto label_39aa1c;
        case 0x39aa20u: goto label_39aa20;
        case 0x39aa24u: goto label_39aa24;
        case 0x39aa28u: goto label_39aa28;
        case 0x39aa2cu: goto label_39aa2c;
        case 0x39aa30u: goto label_39aa30;
        case 0x39aa34u: goto label_39aa34;
        case 0x39aa38u: goto label_39aa38;
        case 0x39aa3cu: goto label_39aa3c;
        case 0x39aa40u: goto label_39aa40;
        case 0x39aa44u: goto label_39aa44;
        case 0x39aa48u: goto label_39aa48;
        case 0x39aa4cu: goto label_39aa4c;
        case 0x39aa50u: goto label_39aa50;
        case 0x39aa54u: goto label_39aa54;
        case 0x39aa58u: goto label_39aa58;
        case 0x39aa5cu: goto label_39aa5c;
        case 0x39aa60u: goto label_39aa60;
        case 0x39aa64u: goto label_39aa64;
        case 0x39aa68u: goto label_39aa68;
        case 0x39aa6cu: goto label_39aa6c;
        case 0x39aa70u: goto label_39aa70;
        case 0x39aa74u: goto label_39aa74;
        case 0x39aa78u: goto label_39aa78;
        case 0x39aa7cu: goto label_39aa7c;
        case 0x39aa80u: goto label_39aa80;
        case 0x39aa84u: goto label_39aa84;
        case 0x39aa88u: goto label_39aa88;
        case 0x39aa8cu: goto label_39aa8c;
        case 0x39aa90u: goto label_39aa90;
        case 0x39aa94u: goto label_39aa94;
        case 0x39aa98u: goto label_39aa98;
        case 0x39aa9cu: goto label_39aa9c;
        case 0x39aaa0u: goto label_39aaa0;
        case 0x39aaa4u: goto label_39aaa4;
        case 0x39aaa8u: goto label_39aaa8;
        case 0x39aaacu: goto label_39aaac;
        case 0x39aab0u: goto label_39aab0;
        case 0x39aab4u: goto label_39aab4;
        case 0x39aab8u: goto label_39aab8;
        case 0x39aabcu: goto label_39aabc;
        case 0x39aac0u: goto label_39aac0;
        case 0x39aac4u: goto label_39aac4;
        case 0x39aac8u: goto label_39aac8;
        case 0x39aaccu: goto label_39aacc;
        case 0x39aad0u: goto label_39aad0;
        case 0x39aad4u: goto label_39aad4;
        case 0x39aad8u: goto label_39aad8;
        case 0x39aadcu: goto label_39aadc;
        case 0x39aae0u: goto label_39aae0;
        case 0x39aae4u: goto label_39aae4;
        case 0x39aae8u: goto label_39aae8;
        case 0x39aaecu: goto label_39aaec;
        case 0x39aaf0u: goto label_39aaf0;
        case 0x39aaf4u: goto label_39aaf4;
        case 0x39aaf8u: goto label_39aaf8;
        case 0x39aafcu: goto label_39aafc;
        case 0x39ab00u: goto label_39ab00;
        case 0x39ab04u: goto label_39ab04;
        case 0x39ab08u: goto label_39ab08;
        case 0x39ab0cu: goto label_39ab0c;
        case 0x39ab10u: goto label_39ab10;
        case 0x39ab14u: goto label_39ab14;
        case 0x39ab18u: goto label_39ab18;
        case 0x39ab1cu: goto label_39ab1c;
        case 0x39ab20u: goto label_39ab20;
        case 0x39ab24u: goto label_39ab24;
        case 0x39ab28u: goto label_39ab28;
        case 0x39ab2cu: goto label_39ab2c;
        case 0x39ab30u: goto label_39ab30;
        case 0x39ab34u: goto label_39ab34;
        case 0x39ab38u: goto label_39ab38;
        case 0x39ab3cu: goto label_39ab3c;
        case 0x39ab40u: goto label_39ab40;
        case 0x39ab44u: goto label_39ab44;
        case 0x39ab48u: goto label_39ab48;
        case 0x39ab4cu: goto label_39ab4c;
        case 0x39ab50u: goto label_39ab50;
        case 0x39ab54u: goto label_39ab54;
        case 0x39ab58u: goto label_39ab58;
        case 0x39ab5cu: goto label_39ab5c;
        case 0x39ab60u: goto label_39ab60;
        case 0x39ab64u: goto label_39ab64;
        case 0x39ab68u: goto label_39ab68;
        case 0x39ab6cu: goto label_39ab6c;
        case 0x39ab70u: goto label_39ab70;
        case 0x39ab74u: goto label_39ab74;
        case 0x39ab78u: goto label_39ab78;
        case 0x39ab7cu: goto label_39ab7c;
        case 0x39ab80u: goto label_39ab80;
        case 0x39ab84u: goto label_39ab84;
        case 0x39ab88u: goto label_39ab88;
        case 0x39ab8cu: goto label_39ab8c;
        case 0x39ab90u: goto label_39ab90;
        case 0x39ab94u: goto label_39ab94;
        case 0x39ab98u: goto label_39ab98;
        case 0x39ab9cu: goto label_39ab9c;
        case 0x39aba0u: goto label_39aba0;
        case 0x39aba4u: goto label_39aba4;
        case 0x39aba8u: goto label_39aba8;
        case 0x39abacu: goto label_39abac;
        case 0x39abb0u: goto label_39abb0;
        case 0x39abb4u: goto label_39abb4;
        case 0x39abb8u: goto label_39abb8;
        case 0x39abbcu: goto label_39abbc;
        case 0x39abc0u: goto label_39abc0;
        case 0x39abc4u: goto label_39abc4;
        case 0x39abc8u: goto label_39abc8;
        case 0x39abccu: goto label_39abcc;
        case 0x39abd0u: goto label_39abd0;
        case 0x39abd4u: goto label_39abd4;
        case 0x39abd8u: goto label_39abd8;
        case 0x39abdcu: goto label_39abdc;
        case 0x39abe0u: goto label_39abe0;
        case 0x39abe4u: goto label_39abe4;
        case 0x39abe8u: goto label_39abe8;
        case 0x39abecu: goto label_39abec;
        case 0x39abf0u: goto label_39abf0;
        case 0x39abf4u: goto label_39abf4;
        case 0x39abf8u: goto label_39abf8;
        case 0x39abfcu: goto label_39abfc;
        case 0x39ac00u: goto label_39ac00;
        case 0x39ac04u: goto label_39ac04;
        case 0x39ac08u: goto label_39ac08;
        case 0x39ac0cu: goto label_39ac0c;
        case 0x39ac10u: goto label_39ac10;
        case 0x39ac14u: goto label_39ac14;
        case 0x39ac18u: goto label_39ac18;
        case 0x39ac1cu: goto label_39ac1c;
        case 0x39ac20u: goto label_39ac20;
        case 0x39ac24u: goto label_39ac24;
        case 0x39ac28u: goto label_39ac28;
        case 0x39ac2cu: goto label_39ac2c;
        case 0x39ac30u: goto label_39ac30;
        case 0x39ac34u: goto label_39ac34;
        case 0x39ac38u: goto label_39ac38;
        case 0x39ac3cu: goto label_39ac3c;
        case 0x39ac40u: goto label_39ac40;
        case 0x39ac44u: goto label_39ac44;
        case 0x39ac48u: goto label_39ac48;
        case 0x39ac4cu: goto label_39ac4c;
        case 0x39ac50u: goto label_39ac50;
        case 0x39ac54u: goto label_39ac54;
        case 0x39ac58u: goto label_39ac58;
        case 0x39ac5cu: goto label_39ac5c;
        case 0x39ac60u: goto label_39ac60;
        case 0x39ac64u: goto label_39ac64;
        case 0x39ac68u: goto label_39ac68;
        case 0x39ac6cu: goto label_39ac6c;
        case 0x39ac70u: goto label_39ac70;
        case 0x39ac74u: goto label_39ac74;
        case 0x39ac78u: goto label_39ac78;
        case 0x39ac7cu: goto label_39ac7c;
        case 0x39ac80u: goto label_39ac80;
        case 0x39ac84u: goto label_39ac84;
        case 0x39ac88u: goto label_39ac88;
        case 0x39ac8cu: goto label_39ac8c;
        case 0x39ac90u: goto label_39ac90;
        case 0x39ac94u: goto label_39ac94;
        case 0x39ac98u: goto label_39ac98;
        case 0x39ac9cu: goto label_39ac9c;
        case 0x39aca0u: goto label_39aca0;
        case 0x39aca4u: goto label_39aca4;
        case 0x39aca8u: goto label_39aca8;
        case 0x39acacu: goto label_39acac;
        case 0x39acb0u: goto label_39acb0;
        case 0x39acb4u: goto label_39acb4;
        case 0x39acb8u: goto label_39acb8;
        case 0x39acbcu: goto label_39acbc;
        case 0x39acc0u: goto label_39acc0;
        case 0x39acc4u: goto label_39acc4;
        case 0x39acc8u: goto label_39acc8;
        case 0x39acccu: goto label_39accc;
        case 0x39acd0u: goto label_39acd0;
        case 0x39acd4u: goto label_39acd4;
        case 0x39acd8u: goto label_39acd8;
        case 0x39acdcu: goto label_39acdc;
        case 0x39ace0u: goto label_39ace0;
        case 0x39ace4u: goto label_39ace4;
        case 0x39ace8u: goto label_39ace8;
        case 0x39acecu: goto label_39acec;
        case 0x39acf0u: goto label_39acf0;
        case 0x39acf4u: goto label_39acf4;
        case 0x39acf8u: goto label_39acf8;
        case 0x39acfcu: goto label_39acfc;
        case 0x39ad00u: goto label_39ad00;
        case 0x39ad04u: goto label_39ad04;
        case 0x39ad08u: goto label_39ad08;
        case 0x39ad0cu: goto label_39ad0c;
        case 0x39ad10u: goto label_39ad10;
        case 0x39ad14u: goto label_39ad14;
        case 0x39ad18u: goto label_39ad18;
        case 0x39ad1cu: goto label_39ad1c;
        case 0x39ad20u: goto label_39ad20;
        case 0x39ad24u: goto label_39ad24;
        case 0x39ad28u: goto label_39ad28;
        case 0x39ad2cu: goto label_39ad2c;
        case 0x39ad30u: goto label_39ad30;
        case 0x39ad34u: goto label_39ad34;
        case 0x39ad38u: goto label_39ad38;
        case 0x39ad3cu: goto label_39ad3c;
        case 0x39ad40u: goto label_39ad40;
        case 0x39ad44u: goto label_39ad44;
        case 0x39ad48u: goto label_39ad48;
        case 0x39ad4cu: goto label_39ad4c;
        case 0x39ad50u: goto label_39ad50;
        case 0x39ad54u: goto label_39ad54;
        case 0x39ad58u: goto label_39ad58;
        case 0x39ad5cu: goto label_39ad5c;
        case 0x39ad60u: goto label_39ad60;
        case 0x39ad64u: goto label_39ad64;
        case 0x39ad68u: goto label_39ad68;
        case 0x39ad6cu: goto label_39ad6c;
        case 0x39ad70u: goto label_39ad70;
        case 0x39ad74u: goto label_39ad74;
        case 0x39ad78u: goto label_39ad78;
        case 0x39ad7cu: goto label_39ad7c;
        case 0x39ad80u: goto label_39ad80;
        case 0x39ad84u: goto label_39ad84;
        case 0x39ad88u: goto label_39ad88;
        case 0x39ad8cu: goto label_39ad8c;
        case 0x39ad90u: goto label_39ad90;
        case 0x39ad94u: goto label_39ad94;
        case 0x39ad98u: goto label_39ad98;
        case 0x39ad9cu: goto label_39ad9c;
        case 0x39ada0u: goto label_39ada0;
        case 0x39ada4u: goto label_39ada4;
        case 0x39ada8u: goto label_39ada8;
        case 0x39adacu: goto label_39adac;
        case 0x39adb0u: goto label_39adb0;
        case 0x39adb4u: goto label_39adb4;
        case 0x39adb8u: goto label_39adb8;
        case 0x39adbcu: goto label_39adbc;
        case 0x39adc0u: goto label_39adc0;
        case 0x39adc4u: goto label_39adc4;
        case 0x39adc8u: goto label_39adc8;
        case 0x39adccu: goto label_39adcc;
        case 0x39add0u: goto label_39add0;
        case 0x39add4u: goto label_39add4;
        case 0x39add8u: goto label_39add8;
        case 0x39addcu: goto label_39addc;
        case 0x39ade0u: goto label_39ade0;
        case 0x39ade4u: goto label_39ade4;
        case 0x39ade8u: goto label_39ade8;
        case 0x39adecu: goto label_39adec;
        case 0x39adf0u: goto label_39adf0;
        case 0x39adf4u: goto label_39adf4;
        case 0x39adf8u: goto label_39adf8;
        case 0x39adfcu: goto label_39adfc;
        case 0x39ae00u: goto label_39ae00;
        case 0x39ae04u: goto label_39ae04;
        case 0x39ae08u: goto label_39ae08;
        case 0x39ae0cu: goto label_39ae0c;
        case 0x39ae10u: goto label_39ae10;
        case 0x39ae14u: goto label_39ae14;
        case 0x39ae18u: goto label_39ae18;
        case 0x39ae1cu: goto label_39ae1c;
        case 0x39ae20u: goto label_39ae20;
        case 0x39ae24u: goto label_39ae24;
        case 0x39ae28u: goto label_39ae28;
        case 0x39ae2cu: goto label_39ae2c;
        case 0x39ae30u: goto label_39ae30;
        case 0x39ae34u: goto label_39ae34;
        case 0x39ae38u: goto label_39ae38;
        case 0x39ae3cu: goto label_39ae3c;
        case 0x39ae40u: goto label_39ae40;
        case 0x39ae44u: goto label_39ae44;
        case 0x39ae48u: goto label_39ae48;
        case 0x39ae4cu: goto label_39ae4c;
        case 0x39ae50u: goto label_39ae50;
        case 0x39ae54u: goto label_39ae54;
        case 0x39ae58u: goto label_39ae58;
        case 0x39ae5cu: goto label_39ae5c;
        case 0x39ae60u: goto label_39ae60;
        case 0x39ae64u: goto label_39ae64;
        case 0x39ae68u: goto label_39ae68;
        case 0x39ae6cu: goto label_39ae6c;
        case 0x39ae70u: goto label_39ae70;
        case 0x39ae74u: goto label_39ae74;
        case 0x39ae78u: goto label_39ae78;
        case 0x39ae7cu: goto label_39ae7c;
        case 0x39ae80u: goto label_39ae80;
        case 0x39ae84u: goto label_39ae84;
        case 0x39ae88u: goto label_39ae88;
        case 0x39ae8cu: goto label_39ae8c;
        case 0x39ae90u: goto label_39ae90;
        case 0x39ae94u: goto label_39ae94;
        case 0x39ae98u: goto label_39ae98;
        case 0x39ae9cu: goto label_39ae9c;
        case 0x39aea0u: goto label_39aea0;
        case 0x39aea4u: goto label_39aea4;
        case 0x39aea8u: goto label_39aea8;
        case 0x39aeacu: goto label_39aeac;
        case 0x39aeb0u: goto label_39aeb0;
        case 0x39aeb4u: goto label_39aeb4;
        case 0x39aeb8u: goto label_39aeb8;
        case 0x39aebcu: goto label_39aebc;
        case 0x39aec0u: goto label_39aec0;
        case 0x39aec4u: goto label_39aec4;
        case 0x39aec8u: goto label_39aec8;
        case 0x39aeccu: goto label_39aecc;
        case 0x39aed0u: goto label_39aed0;
        case 0x39aed4u: goto label_39aed4;
        case 0x39aed8u: goto label_39aed8;
        case 0x39aedcu: goto label_39aedc;
        case 0x39aee0u: goto label_39aee0;
        case 0x39aee4u: goto label_39aee4;
        case 0x39aee8u: goto label_39aee8;
        case 0x39aeecu: goto label_39aeec;
        case 0x39aef0u: goto label_39aef0;
        case 0x39aef4u: goto label_39aef4;
        case 0x39aef8u: goto label_39aef8;
        case 0x39aefcu: goto label_39aefc;
        case 0x39af00u: goto label_39af00;
        case 0x39af04u: goto label_39af04;
        case 0x39af08u: goto label_39af08;
        case 0x39af0cu: goto label_39af0c;
        case 0x39af10u: goto label_39af10;
        case 0x39af14u: goto label_39af14;
        case 0x39af18u: goto label_39af18;
        case 0x39af1cu: goto label_39af1c;
        case 0x39af20u: goto label_39af20;
        case 0x39af24u: goto label_39af24;
        case 0x39af28u: goto label_39af28;
        case 0x39af2cu: goto label_39af2c;
        case 0x39af30u: goto label_39af30;
        case 0x39af34u: goto label_39af34;
        case 0x39af38u: goto label_39af38;
        case 0x39af3cu: goto label_39af3c;
        case 0x39af40u: goto label_39af40;
        case 0x39af44u: goto label_39af44;
        case 0x39af48u: goto label_39af48;
        case 0x39af4cu: goto label_39af4c;
        case 0x39af50u: goto label_39af50;
        case 0x39af54u: goto label_39af54;
        case 0x39af58u: goto label_39af58;
        case 0x39af5cu: goto label_39af5c;
        case 0x39af60u: goto label_39af60;
        case 0x39af64u: goto label_39af64;
        case 0x39af68u: goto label_39af68;
        case 0x39af6cu: goto label_39af6c;
        case 0x39af70u: goto label_39af70;
        case 0x39af74u: goto label_39af74;
        case 0x39af78u: goto label_39af78;
        case 0x39af7cu: goto label_39af7c;
        case 0x39af80u: goto label_39af80;
        case 0x39af84u: goto label_39af84;
        case 0x39af88u: goto label_39af88;
        case 0x39af8cu: goto label_39af8c;
        case 0x39af90u: goto label_39af90;
        case 0x39af94u: goto label_39af94;
        case 0x39af98u: goto label_39af98;
        case 0x39af9cu: goto label_39af9c;
        case 0x39afa0u: goto label_39afa0;
        case 0x39afa4u: goto label_39afa4;
        case 0x39afa8u: goto label_39afa8;
        case 0x39afacu: goto label_39afac;
        case 0x39afb0u: goto label_39afb0;
        case 0x39afb4u: goto label_39afb4;
        case 0x39afb8u: goto label_39afb8;
        case 0x39afbcu: goto label_39afbc;
        case 0x39afc0u: goto label_39afc0;
        case 0x39afc4u: goto label_39afc4;
        case 0x39afc8u: goto label_39afc8;
        case 0x39afccu: goto label_39afcc;
        case 0x39afd0u: goto label_39afd0;
        case 0x39afd4u: goto label_39afd4;
        case 0x39afd8u: goto label_39afd8;
        case 0x39afdcu: goto label_39afdc;
        case 0x39afe0u: goto label_39afe0;
        case 0x39afe4u: goto label_39afe4;
        case 0x39afe8u: goto label_39afe8;
        case 0x39afecu: goto label_39afec;
        case 0x39aff0u: goto label_39aff0;
        case 0x39aff4u: goto label_39aff4;
        case 0x39aff8u: goto label_39aff8;
        case 0x39affcu: goto label_39affc;
        case 0x39b000u: goto label_39b000;
        case 0x39b004u: goto label_39b004;
        case 0x39b008u: goto label_39b008;
        case 0x39b00cu: goto label_39b00c;
        case 0x39b010u: goto label_39b010;
        case 0x39b014u: goto label_39b014;
        case 0x39b018u: goto label_39b018;
        case 0x39b01cu: goto label_39b01c;
        case 0x39b020u: goto label_39b020;
        case 0x39b024u: goto label_39b024;
        case 0x39b028u: goto label_39b028;
        case 0x39b02cu: goto label_39b02c;
        case 0x39b030u: goto label_39b030;
        case 0x39b034u: goto label_39b034;
        case 0x39b038u: goto label_39b038;
        case 0x39b03cu: goto label_39b03c;
        case 0x39b040u: goto label_39b040;
        case 0x39b044u: goto label_39b044;
        case 0x39b048u: goto label_39b048;
        case 0x39b04cu: goto label_39b04c;
        case 0x39b050u: goto label_39b050;
        case 0x39b054u: goto label_39b054;
        case 0x39b058u: goto label_39b058;
        case 0x39b05cu: goto label_39b05c;
        case 0x39b060u: goto label_39b060;
        case 0x39b064u: goto label_39b064;
        case 0x39b068u: goto label_39b068;
        case 0x39b06cu: goto label_39b06c;
        case 0x39b070u: goto label_39b070;
        case 0x39b074u: goto label_39b074;
        case 0x39b078u: goto label_39b078;
        case 0x39b07cu: goto label_39b07c;
        case 0x39b080u: goto label_39b080;
        case 0x39b084u: goto label_39b084;
        case 0x39b088u: goto label_39b088;
        case 0x39b08cu: goto label_39b08c;
        case 0x39b090u: goto label_39b090;
        case 0x39b094u: goto label_39b094;
        case 0x39b098u: goto label_39b098;
        case 0x39b09cu: goto label_39b09c;
        case 0x39b0a0u: goto label_39b0a0;
        case 0x39b0a4u: goto label_39b0a4;
        case 0x39b0a8u: goto label_39b0a8;
        case 0x39b0acu: goto label_39b0ac;
        case 0x39b0b0u: goto label_39b0b0;
        case 0x39b0b4u: goto label_39b0b4;
        case 0x39b0b8u: goto label_39b0b8;
        case 0x39b0bcu: goto label_39b0bc;
        case 0x39b0c0u: goto label_39b0c0;
        case 0x39b0c4u: goto label_39b0c4;
        case 0x39b0c8u: goto label_39b0c8;
        case 0x39b0ccu: goto label_39b0cc;
        case 0x39b0d0u: goto label_39b0d0;
        case 0x39b0d4u: goto label_39b0d4;
        case 0x39b0d8u: goto label_39b0d8;
        case 0x39b0dcu: goto label_39b0dc;
        case 0x39b0e0u: goto label_39b0e0;
        case 0x39b0e4u: goto label_39b0e4;
        case 0x39b0e8u: goto label_39b0e8;
        case 0x39b0ecu: goto label_39b0ec;
        case 0x39b0f0u: goto label_39b0f0;
        case 0x39b0f4u: goto label_39b0f4;
        case 0x39b0f8u: goto label_39b0f8;
        case 0x39b0fcu: goto label_39b0fc;
        case 0x39b100u: goto label_39b100;
        case 0x39b104u: goto label_39b104;
        case 0x39b108u: goto label_39b108;
        case 0x39b10cu: goto label_39b10c;
        case 0x39b110u: goto label_39b110;
        case 0x39b114u: goto label_39b114;
        case 0x39b118u: goto label_39b118;
        case 0x39b11cu: goto label_39b11c;
        case 0x39b120u: goto label_39b120;
        case 0x39b124u: goto label_39b124;
        case 0x39b128u: goto label_39b128;
        case 0x39b12cu: goto label_39b12c;
        case 0x39b130u: goto label_39b130;
        case 0x39b134u: goto label_39b134;
        case 0x39b138u: goto label_39b138;
        case 0x39b13cu: goto label_39b13c;
        case 0x39b140u: goto label_39b140;
        case 0x39b144u: goto label_39b144;
        case 0x39b148u: goto label_39b148;
        case 0x39b14cu: goto label_39b14c;
        case 0x39b150u: goto label_39b150;
        case 0x39b154u: goto label_39b154;
        case 0x39b158u: goto label_39b158;
        case 0x39b15cu: goto label_39b15c;
        case 0x39b160u: goto label_39b160;
        case 0x39b164u: goto label_39b164;
        case 0x39b168u: goto label_39b168;
        case 0x39b16cu: goto label_39b16c;
        case 0x39b170u: goto label_39b170;
        case 0x39b174u: goto label_39b174;
        case 0x39b178u: goto label_39b178;
        case 0x39b17cu: goto label_39b17c;
        case 0x39b180u: goto label_39b180;
        case 0x39b184u: goto label_39b184;
        case 0x39b188u: goto label_39b188;
        case 0x39b18cu: goto label_39b18c;
        case 0x39b190u: goto label_39b190;
        case 0x39b194u: goto label_39b194;
        case 0x39b198u: goto label_39b198;
        case 0x39b19cu: goto label_39b19c;
        case 0x39b1a0u: goto label_39b1a0;
        case 0x39b1a4u: goto label_39b1a4;
        case 0x39b1a8u: goto label_39b1a8;
        case 0x39b1acu: goto label_39b1ac;
        case 0x39b1b0u: goto label_39b1b0;
        case 0x39b1b4u: goto label_39b1b4;
        case 0x39b1b8u: goto label_39b1b8;
        case 0x39b1bcu: goto label_39b1bc;
        case 0x39b1c0u: goto label_39b1c0;
        case 0x39b1c4u: goto label_39b1c4;
        case 0x39b1c8u: goto label_39b1c8;
        case 0x39b1ccu: goto label_39b1cc;
        case 0x39b1d0u: goto label_39b1d0;
        case 0x39b1d4u: goto label_39b1d4;
        case 0x39b1d8u: goto label_39b1d8;
        case 0x39b1dcu: goto label_39b1dc;
        case 0x39b1e0u: goto label_39b1e0;
        case 0x39b1e4u: goto label_39b1e4;
        case 0x39b1e8u: goto label_39b1e8;
        case 0x39b1ecu: goto label_39b1ec;
        case 0x39b1f0u: goto label_39b1f0;
        case 0x39b1f4u: goto label_39b1f4;
        case 0x39b1f8u: goto label_39b1f8;
        case 0x39b1fcu: goto label_39b1fc;
        case 0x39b200u: goto label_39b200;
        case 0x39b204u: goto label_39b204;
        case 0x39b208u: goto label_39b208;
        case 0x39b20cu: goto label_39b20c;
        case 0x39b210u: goto label_39b210;
        case 0x39b214u: goto label_39b214;
        case 0x39b218u: goto label_39b218;
        case 0x39b21cu: goto label_39b21c;
        case 0x39b220u: goto label_39b220;
        case 0x39b224u: goto label_39b224;
        case 0x39b228u: goto label_39b228;
        case 0x39b22cu: goto label_39b22c;
        case 0x39b230u: goto label_39b230;
        case 0x39b234u: goto label_39b234;
        case 0x39b238u: goto label_39b238;
        case 0x39b23cu: goto label_39b23c;
        case 0x39b240u: goto label_39b240;
        case 0x39b244u: goto label_39b244;
        case 0x39b248u: goto label_39b248;
        case 0x39b24cu: goto label_39b24c;
        case 0x39b250u: goto label_39b250;
        case 0x39b254u: goto label_39b254;
        case 0x39b258u: goto label_39b258;
        case 0x39b25cu: goto label_39b25c;
        case 0x39b260u: goto label_39b260;
        case 0x39b264u: goto label_39b264;
        case 0x39b268u: goto label_39b268;
        case 0x39b26cu: goto label_39b26c;
        case 0x39b270u: goto label_39b270;
        case 0x39b274u: goto label_39b274;
        case 0x39b278u: goto label_39b278;
        case 0x39b27cu: goto label_39b27c;
        case 0x39b280u: goto label_39b280;
        case 0x39b284u: goto label_39b284;
        case 0x39b288u: goto label_39b288;
        case 0x39b28cu: goto label_39b28c;
        case 0x39b290u: goto label_39b290;
        case 0x39b294u: goto label_39b294;
        case 0x39b298u: goto label_39b298;
        case 0x39b29cu: goto label_39b29c;
        case 0x39b2a0u: goto label_39b2a0;
        case 0x39b2a4u: goto label_39b2a4;
        case 0x39b2a8u: goto label_39b2a8;
        case 0x39b2acu: goto label_39b2ac;
        case 0x39b2b0u: goto label_39b2b0;
        case 0x39b2b4u: goto label_39b2b4;
        case 0x39b2b8u: goto label_39b2b8;
        case 0x39b2bcu: goto label_39b2bc;
        case 0x39b2c0u: goto label_39b2c0;
        case 0x39b2c4u: goto label_39b2c4;
        case 0x39b2c8u: goto label_39b2c8;
        case 0x39b2ccu: goto label_39b2cc;
        case 0x39b2d0u: goto label_39b2d0;
        case 0x39b2d4u: goto label_39b2d4;
        case 0x39b2d8u: goto label_39b2d8;
        case 0x39b2dcu: goto label_39b2dc;
        case 0x39b2e0u: goto label_39b2e0;
        case 0x39b2e4u: goto label_39b2e4;
        case 0x39b2e8u: goto label_39b2e8;
        case 0x39b2ecu: goto label_39b2ec;
        case 0x39b2f0u: goto label_39b2f0;
        case 0x39b2f4u: goto label_39b2f4;
        case 0x39b2f8u: goto label_39b2f8;
        case 0x39b2fcu: goto label_39b2fc;
        case 0x39b300u: goto label_39b300;
        case 0x39b304u: goto label_39b304;
        case 0x39b308u: goto label_39b308;
        case 0x39b30cu: goto label_39b30c;
        case 0x39b310u: goto label_39b310;
        case 0x39b314u: goto label_39b314;
        case 0x39b318u: goto label_39b318;
        case 0x39b31cu: goto label_39b31c;
        case 0x39b320u: goto label_39b320;
        case 0x39b324u: goto label_39b324;
        case 0x39b328u: goto label_39b328;
        case 0x39b32cu: goto label_39b32c;
        case 0x39b330u: goto label_39b330;
        case 0x39b334u: goto label_39b334;
        case 0x39b338u: goto label_39b338;
        case 0x39b33cu: goto label_39b33c;
        case 0x39b340u: goto label_39b340;
        case 0x39b344u: goto label_39b344;
        case 0x39b348u: goto label_39b348;
        case 0x39b34cu: goto label_39b34c;
        case 0x39b350u: goto label_39b350;
        case 0x39b354u: goto label_39b354;
        case 0x39b358u: goto label_39b358;
        case 0x39b35cu: goto label_39b35c;
        case 0x39b360u: goto label_39b360;
        case 0x39b364u: goto label_39b364;
        case 0x39b368u: goto label_39b368;
        case 0x39b36cu: goto label_39b36c;
        case 0x39b370u: goto label_39b370;
        case 0x39b374u: goto label_39b374;
        case 0x39b378u: goto label_39b378;
        case 0x39b37cu: goto label_39b37c;
        case 0x39b380u: goto label_39b380;
        case 0x39b384u: goto label_39b384;
        case 0x39b388u: goto label_39b388;
        case 0x39b38cu: goto label_39b38c;
        case 0x39b390u: goto label_39b390;
        case 0x39b394u: goto label_39b394;
        case 0x39b398u: goto label_39b398;
        case 0x39b39cu: goto label_39b39c;
        case 0x39b3a0u: goto label_39b3a0;
        case 0x39b3a4u: goto label_39b3a4;
        case 0x39b3a8u: goto label_39b3a8;
        case 0x39b3acu: goto label_39b3ac;
        case 0x39b3b0u: goto label_39b3b0;
        case 0x39b3b4u: goto label_39b3b4;
        case 0x39b3b8u: goto label_39b3b8;
        case 0x39b3bcu: goto label_39b3bc;
        case 0x39b3c0u: goto label_39b3c0;
        case 0x39b3c4u: goto label_39b3c4;
        case 0x39b3c8u: goto label_39b3c8;
        case 0x39b3ccu: goto label_39b3cc;
        case 0x39b3d0u: goto label_39b3d0;
        case 0x39b3d4u: goto label_39b3d4;
        case 0x39b3d8u: goto label_39b3d8;
        case 0x39b3dcu: goto label_39b3dc;
        case 0x39b3e0u: goto label_39b3e0;
        case 0x39b3e4u: goto label_39b3e4;
        case 0x39b3e8u: goto label_39b3e8;
        case 0x39b3ecu: goto label_39b3ec;
        case 0x39b3f0u: goto label_39b3f0;
        case 0x39b3f4u: goto label_39b3f4;
        case 0x39b3f8u: goto label_39b3f8;
        case 0x39b3fcu: goto label_39b3fc;
        case 0x39b400u: goto label_39b400;
        case 0x39b404u: goto label_39b404;
        case 0x39b408u: goto label_39b408;
        case 0x39b40cu: goto label_39b40c;
        case 0x39b410u: goto label_39b410;
        case 0x39b414u: goto label_39b414;
        case 0x39b418u: goto label_39b418;
        case 0x39b41cu: goto label_39b41c;
        case 0x39b420u: goto label_39b420;
        case 0x39b424u: goto label_39b424;
        case 0x39b428u: goto label_39b428;
        case 0x39b42cu: goto label_39b42c;
        case 0x39b430u: goto label_39b430;
        case 0x39b434u: goto label_39b434;
        case 0x39b438u: goto label_39b438;
        case 0x39b43cu: goto label_39b43c;
        case 0x39b440u: goto label_39b440;
        case 0x39b444u: goto label_39b444;
        case 0x39b448u: goto label_39b448;
        case 0x39b44cu: goto label_39b44c;
        case 0x39b450u: goto label_39b450;
        case 0x39b454u: goto label_39b454;
        case 0x39b458u: goto label_39b458;
        case 0x39b45cu: goto label_39b45c;
        case 0x39b460u: goto label_39b460;
        case 0x39b464u: goto label_39b464;
        case 0x39b468u: goto label_39b468;
        case 0x39b46cu: goto label_39b46c;
        case 0x39b470u: goto label_39b470;
        case 0x39b474u: goto label_39b474;
        case 0x39b478u: goto label_39b478;
        case 0x39b47cu: goto label_39b47c;
        case 0x39b480u: goto label_39b480;
        case 0x39b484u: goto label_39b484;
        case 0x39b488u: goto label_39b488;
        case 0x39b48cu: goto label_39b48c;
        case 0x39b490u: goto label_39b490;
        case 0x39b494u: goto label_39b494;
        case 0x39b498u: goto label_39b498;
        case 0x39b49cu: goto label_39b49c;
        case 0x39b4a0u: goto label_39b4a0;
        case 0x39b4a4u: goto label_39b4a4;
        case 0x39b4a8u: goto label_39b4a8;
        case 0x39b4acu: goto label_39b4ac;
        case 0x39b4b0u: goto label_39b4b0;
        case 0x39b4b4u: goto label_39b4b4;
        case 0x39b4b8u: goto label_39b4b8;
        case 0x39b4bcu: goto label_39b4bc;
        case 0x39b4c0u: goto label_39b4c0;
        case 0x39b4c4u: goto label_39b4c4;
        case 0x39b4c8u: goto label_39b4c8;
        case 0x39b4ccu: goto label_39b4cc;
        case 0x39b4d0u: goto label_39b4d0;
        case 0x39b4d4u: goto label_39b4d4;
        case 0x39b4d8u: goto label_39b4d8;
        case 0x39b4dcu: goto label_39b4dc;
        case 0x39b4e0u: goto label_39b4e0;
        case 0x39b4e4u: goto label_39b4e4;
        case 0x39b4e8u: goto label_39b4e8;
        case 0x39b4ecu: goto label_39b4ec;
        case 0x39b4f0u: goto label_39b4f0;
        case 0x39b4f4u: goto label_39b4f4;
        case 0x39b4f8u: goto label_39b4f8;
        case 0x39b4fcu: goto label_39b4fc;
        case 0x39b500u: goto label_39b500;
        case 0x39b504u: goto label_39b504;
        case 0x39b508u: goto label_39b508;
        case 0x39b50cu: goto label_39b50c;
        case 0x39b510u: goto label_39b510;
        case 0x39b514u: goto label_39b514;
        case 0x39b518u: goto label_39b518;
        case 0x39b51cu: goto label_39b51c;
        case 0x39b520u: goto label_39b520;
        case 0x39b524u: goto label_39b524;
        case 0x39b528u: goto label_39b528;
        case 0x39b52cu: goto label_39b52c;
        case 0x39b530u: goto label_39b530;
        case 0x39b534u: goto label_39b534;
        case 0x39b538u: goto label_39b538;
        case 0x39b53cu: goto label_39b53c;
        case 0x39b540u: goto label_39b540;
        case 0x39b544u: goto label_39b544;
        case 0x39b548u: goto label_39b548;
        case 0x39b54cu: goto label_39b54c;
        default: break;
    }

    ctx->pc = 0x39a840u;

label_39a840:
    // 0x39a840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39a844:
    // 0x39a844: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x39a844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a848:
    // 0x39a848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39a84c:
    // 0x39a84c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39a850:
    // 0x39a850: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39a854:
    // 0x39a854: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39a854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a858:
    // 0x39a858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39a85c:
    // 0x39a85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39a860:
    // 0x39a860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39a860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a864:
    // 0x39a864: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a868:
    // 0x39a868: 0xc10ca68  jal         func_4329A0
label_39a86c:
    if (ctx->pc == 0x39A86Cu) {
        ctx->pc = 0x39A86Cu;
            // 0x39a86c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x39A870u;
        goto label_39a870;
    }
    ctx->pc = 0x39A868u;
    SET_GPR_U32(ctx, 31, 0x39A870u);
    ctx->pc = 0x39A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A868u;
            // 0x39a86c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A870u; }
        if (ctx->pc != 0x39A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A870u; }
        if (ctx->pc != 0x39A870u) { return; }
    }
    ctx->pc = 0x39A870u;
label_39a870:
    // 0x39a870: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39a874:
    // 0x39a874: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39a874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39a878:
    // 0x39a878: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x39a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_39a87c:
    // 0x39a87c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x39a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_39a880:
    // 0x39a880: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39a880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_39a884:
    // 0x39a884: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x39a884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_39a888:
    // 0x39a888: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39a888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_39a88c:
    // 0x39a88c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39a890:
    // 0x39a890: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x39a890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_39a894:
    // 0x39a894: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39a898:
    // 0x39a898: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x39a898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_39a89c:
    // 0x39a89c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x39a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39a8a0:
    // 0x39a8a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x39a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_39a8a4:
    // 0x39a8a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x39a8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_39a8a8:
    // 0x39a8a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x39a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_39a8ac:
    // 0x39a8ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x39a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_39a8b0:
    // 0x39a8b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x39a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_39a8b4:
    // 0x39a8b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x39a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_39a8b8:
    // 0x39a8b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x39a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39a8bc:
    // 0x39a8bc: 0xc0582cc  jal         func_160B30
label_39a8c0:
    if (ctx->pc == 0x39A8C0u) {
        ctx->pc = 0x39A8C0u;
            // 0x39a8c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x39A8C4u;
        goto label_39a8c4;
    }
    ctx->pc = 0x39A8BCu;
    SET_GPR_U32(ctx, 31, 0x39A8C4u);
    ctx->pc = 0x39A8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A8BCu;
            // 0x39a8c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A8C4u; }
        if (ctx->pc != 0x39A8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A8C4u; }
        if (ctx->pc != 0x39A8C4u) { return; }
    }
    ctx->pc = 0x39A8C4u;
label_39a8c4:
    // 0x39a8c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a8c8:
    // 0x39a8c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x39a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_39a8cc:
    // 0x39a8cc: 0x24638308  addiu       $v1, $v1, -0x7CF8
    ctx->pc = 0x39a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935304));
label_39a8d0:
    // 0x39a8d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x39a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_39a8d4:
    // 0x39a8d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x39a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_39a8d8:
    // 0x39a8d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39a8dc:
    // 0x39a8dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39a8e0:
    // 0x39a8e0: 0xac446490  sw          $a0, 0x6490($v0)
    ctx->pc = 0x39a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25744), GPR_U32(ctx, 4));
label_39a8e4:
    // 0x39a8e4: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x39a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_39a8e8:
    // 0x39a8e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39a8ec:
    // 0x39a8ec: 0x24428358  addiu       $v0, $v0, -0x7CA8
    ctx->pc = 0x39a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935384));
label_39a8f0:
    // 0x39a8f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_39a8f4:
    // 0x39a8f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x39a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_39a8f8:
    // 0x39a8f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x39a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_39a8fc:
    // 0x39a8fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x39a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_39a900:
    // 0x39a900: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x39a900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_39a904:
    // 0x39a904: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x39a904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_39a908:
    // 0x39a908: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x39a908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_39a90c:
    // 0x39a90c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x39a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_39a910:
    // 0x39a910: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x39a910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_39a914:
    // 0x39a914: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x39a914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_39a918:
    // 0x39a918: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x39a918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_39a91c:
    // 0x39a91c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x39a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_39a920:
    // 0x39a920: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x39a920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_39a924:
    // 0x39a924: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_39a928:
    if (ctx->pc == 0x39A928u) {
        ctx->pc = 0x39A92Cu;
        goto label_39a92c;
    }
    ctx->pc = 0x39A924u;
    {
        const bool branch_taken_0x39a924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a924) {
            ctx->pc = 0x39A9B8u;
            goto label_39a9b8;
        }
    }
    ctx->pc = 0x39A92Cu;
label_39a92c:
    // 0x39a92c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x39a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_39a930:
    // 0x39a930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39a934:
    // 0x39a934: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x39a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_39a938:
    // 0x39a938: 0xc040138  jal         func_1004E0
label_39a93c:
    if (ctx->pc == 0x39A93Cu) {
        ctx->pc = 0x39A93Cu;
            // 0x39a93c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x39A940u;
        goto label_39a940;
    }
    ctx->pc = 0x39A938u;
    SET_GPR_U32(ctx, 31, 0x39A940u);
    ctx->pc = 0x39A93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A938u;
            // 0x39a93c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A940u; }
        if (ctx->pc != 0x39A940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A940u; }
        if (ctx->pc != 0x39A940u) { return; }
    }
    ctx->pc = 0x39A940u;
label_39a940:
    // 0x39a940: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39a940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39a944:
    // 0x39a944: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39a944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39a948:
    // 0x39a948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a94c:
    // 0x39a94c: 0x24a5b230  addiu       $a1, $a1, -0x4DD0
    ctx->pc = 0x39a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947376));
label_39a950:
    // 0x39a950: 0x24c6a250  addiu       $a2, $a2, -0x5DB0
    ctx->pc = 0x39a950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943312));
label_39a954:
    // 0x39a954: 0x24070220  addiu       $a3, $zero, 0x220
    ctx->pc = 0x39a954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39a958:
    // 0x39a958: 0xc040840  jal         func_102100
label_39a95c:
    if (ctx->pc == 0x39A95Cu) {
        ctx->pc = 0x39A95Cu;
            // 0x39a95c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A960u;
        goto label_39a960;
    }
    ctx->pc = 0x39A958u;
    SET_GPR_U32(ctx, 31, 0x39A960u);
    ctx->pc = 0x39A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A958u;
            // 0x39a95c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A960u; }
        if (ctx->pc != 0x39A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A960u; }
        if (ctx->pc != 0x39A960u) { return; }
    }
    ctx->pc = 0x39A960u;
label_39a960:
    // 0x39a960: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x39a960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_39a964:
    // 0x39a964: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39a964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a968:
    // 0x39a968: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x39a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_39a96c:
    // 0x39a96c: 0xc0788fc  jal         func_1E23F0
label_39a970:
    if (ctx->pc == 0x39A970u) {
        ctx->pc = 0x39A970u;
            // 0x39a970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A974u;
        goto label_39a974;
    }
    ctx->pc = 0x39A96Cu;
    SET_GPR_U32(ctx, 31, 0x39A974u);
    ctx->pc = 0x39A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A96Cu;
            // 0x39a970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A974u; }
        if (ctx->pc != 0x39A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A974u; }
        if (ctx->pc != 0x39A974u) { return; }
    }
    ctx->pc = 0x39A974u;
label_39a974:
    // 0x39a974: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x39a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_39a978:
    // 0x39a978: 0xc0788fc  jal         func_1E23F0
label_39a97c:
    if (ctx->pc == 0x39A97Cu) {
        ctx->pc = 0x39A97Cu;
            // 0x39a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39A980u;
        goto label_39a980;
    }
    ctx->pc = 0x39A978u;
    SET_GPR_U32(ctx, 31, 0x39A980u);
    ctx->pc = 0x39A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A978u;
            // 0x39a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A980u; }
        if (ctx->pc != 0x39A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A980u; }
        if (ctx->pc != 0x39A980u) { return; }
    }
    ctx->pc = 0x39A980u;
label_39a980:
    // 0x39a980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a984:
    // 0x39a984: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x39a984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_39a988:
    // 0x39a988: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x39a988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_39a98c:
    // 0x39a98c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x39a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_39a990:
    // 0x39a990: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39a990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a994:
    // 0x39a994: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x39a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_39a998:
    // 0x39a998: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x39a998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_39a99c:
    // 0x39a99c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39a9a0:
    // 0x39a9a0: 0xc0a997c  jal         func_2A65F0
label_39a9a4:
    if (ctx->pc == 0x39A9A4u) {
        ctx->pc = 0x39A9A4u;
            // 0x39a9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x39A9A8u;
        goto label_39a9a8;
    }
    ctx->pc = 0x39A9A0u;
    SET_GPR_U32(ctx, 31, 0x39A9A8u);
    ctx->pc = 0x39A9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39A9A0u;
            // 0x39a9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A9A8u; }
        if (ctx->pc != 0x39A9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39A9A8u; }
        if (ctx->pc != 0x39A9A8u) { return; }
    }
    ctx->pc = 0x39A9A8u;
label_39a9a8:
    // 0x39a9a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39a9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39a9ac:
    // 0x39a9ac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x39a9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39a9b0:
    // 0x39a9b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_39a9b4:
    if (ctx->pc == 0x39A9B4u) {
        ctx->pc = 0x39A9B4u;
            // 0x39a9b4: 0x26520220  addiu       $s2, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->pc = 0x39A9B8u;
        goto label_39a9b8;
    }
    ctx->pc = 0x39A9B0u;
    {
        const bool branch_taken_0x39a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A9B0u;
            // 0x39a9b4: 0x26520220  addiu       $s2, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9b0) {
            ctx->pc = 0x39A984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39a984;
        }
    }
    ctx->pc = 0x39A9B8u;
label_39a9b8:
    // 0x39a9b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39a9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a9bc:
    // 0x39a9bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39a9c0:
    // 0x39a9c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39a9c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a9c4:
    // 0x39a9c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39a9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a9c8:
    // 0x39a9c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39a9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a9cc:
    // 0x39a9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39a9d0:
    // 0x39a9d0: 0x3e00008  jr          $ra
label_39a9d4:
    if (ctx->pc == 0x39A9D4u) {
        ctx->pc = 0x39A9D4u;
            // 0x39a9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39A9D8u;
        goto label_39a9d8;
    }
    ctx->pc = 0x39A9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39A9D0u;
            // 0x39a9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39A9D8u;
label_39a9d8:
    // 0x39a9d8: 0x0  nop
    ctx->pc = 0x39a9d8u;
    // NOP
label_39a9dc:
    // 0x39a9dc: 0x0  nop
    ctx->pc = 0x39a9dcu;
    // NOP
label_39a9e0:
    // 0x39a9e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39a9e4:
    // 0x39a9e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a9e8:
    // 0x39a9e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_39a9ec:
    // 0x39a9ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x39a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_39a9f0:
    // 0x39a9f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_39a9f4:
    // 0x39a9f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39a9f8:
    // 0x39a9f8: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x39a9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_39a9fc:
    // 0x39a9fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39aa00:
    // 0x39aa00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39aa00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39aa04:
    // 0x39aa04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39aa08:
    // 0x39aa08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39aa08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39aa0c:
    // 0x39aa0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39aa10:
    // 0x39aa10: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x39aa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39aa14:
    // 0x39aa14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39aa14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39aa18:
    // 0x39aa18: 0x8c8400ac  lw          $a0, 0xAC($a0)
    ctx->pc = 0x39aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_39aa1c:
    // 0x39aa1c: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
label_39aa20:
    if (ctx->pc == 0x39AA20u) {
        ctx->pc = 0x39AA20u;
            // 0x39aa20: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AA24u;
        goto label_39aa24;
    }
    ctx->pc = 0x39AA1Cu;
    {
        const bool branch_taken_0x39aa1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA1Cu;
            // 0x39aa20: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa1c) {
            ctx->pc = 0x39AC18u;
            goto label_39ac18;
        }
    }
    ctx->pc = 0x39AA24u;
label_39aa24:
    // 0x39aa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39aa28:
    // 0x39aa28: 0xc04f278  jal         func_13C9E0
label_39aa2c:
    if (ctx->pc == 0x39AA2Cu) {
        ctx->pc = 0x39AA2Cu;
            // 0x39aa2c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x39AA30u;
        goto label_39aa30;
    }
    ctx->pc = 0x39AA28u;
    SET_GPR_U32(ctx, 31, 0x39AA30u);
    ctx->pc = 0x39AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA28u;
            // 0x39aa2c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA30u; }
        if (ctx->pc != 0x39AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA30u; }
        if (ctx->pc != 0x39AA30u) { return; }
    }
    ctx->pc = 0x39AA30u;
label_39aa30:
    // 0x39aa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39aa34:
    // 0x39aa34: 0xc04ce80  jal         func_133A00
label_39aa38:
    if (ctx->pc == 0x39AA38u) {
        ctx->pc = 0x39AA38u;
            // 0x39aa38: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x39AA3Cu;
        goto label_39aa3c;
    }
    ctx->pc = 0x39AA34u;
    SET_GPR_U32(ctx, 31, 0x39AA3Cu);
    ctx->pc = 0x39AA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA34u;
            // 0x39aa38: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA3Cu; }
        if (ctx->pc != 0x39AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA3Cu; }
        if (ctx->pc != 0x39AA3Cu) { return; }
    }
    ctx->pc = 0x39AA3Cu;
label_39aa3c:
    // 0x39aa3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39aa40:
    // 0x39aa40: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x39aa40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_39aa44:
    // 0x39aa44: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x39aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_39aa48:
    // 0x39aa48: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x39aa48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39aa4c:
    // 0x39aa4c: 0xc07698c  jal         func_1DA630
label_39aa50:
    if (ctx->pc == 0x39AA50u) {
        ctx->pc = 0x39AA50u;
            // 0x39aa50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AA54u;
        goto label_39aa54;
    }
    ctx->pc = 0x39AA4Cu;
    SET_GPR_U32(ctx, 31, 0x39AA54u);
    ctx->pc = 0x39AA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA4Cu;
            // 0x39aa50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA54u; }
        if (ctx->pc != 0x39AA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA54u; }
        if (ctx->pc != 0x39AA54u) { return; }
    }
    ctx->pc = 0x39AA54u;
label_39aa54:
    // 0x39aa54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39aa58:
    // 0x39aa58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_39aa5c:
    if (ctx->pc == 0x39AA5Cu) {
        ctx->pc = 0x39AA60u;
        goto label_39aa60;
    }
    ctx->pc = 0x39AA58u;
    {
        const bool branch_taken_0x39aa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39aa58) {
            ctx->pc = 0x39AA68u;
            goto label_39aa68;
        }
    }
    ctx->pc = 0x39AA60u;
label_39aa60:
    // 0x39aa60: 0x10000036  b           . + 4 + (0x36 << 2)
label_39aa64:
    if (ctx->pc == 0x39AA64u) {
        ctx->pc = 0x39AA64u;
            // 0x39aa64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39AA68u;
        goto label_39aa68;
    }
    ctx->pc = 0x39AA60u;
    {
        const bool branch_taken_0x39aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA60u;
            // 0x39aa64: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa60) {
            ctx->pc = 0x39AB3Cu;
            goto label_39ab3c;
        }
    }
    ctx->pc = 0x39AA68u;
label_39aa68:
    // 0x39aa68: 0xc0576f4  jal         func_15DBD0
label_39aa6c:
    if (ctx->pc == 0x39AA6Cu) {
        ctx->pc = 0x39AA70u;
        goto label_39aa70;
    }
    ctx->pc = 0x39AA68u;
    SET_GPR_U32(ctx, 31, 0x39AA70u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA70u; }
        if (ctx->pc != 0x39AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA70u; }
        if (ctx->pc != 0x39AA70u) { return; }
    }
    ctx->pc = 0x39AA70u;
label_39aa70:
    // 0x39aa70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39aa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39aa74:
    // 0x39aa74: 0xc076984  jal         func_1DA610
label_39aa78:
    if (ctx->pc == 0x39AA78u) {
        ctx->pc = 0x39AA78u;
            // 0x39aa78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AA7Cu;
        goto label_39aa7c;
    }
    ctx->pc = 0x39AA74u;
    SET_GPR_U32(ctx, 31, 0x39AA7Cu);
    ctx->pc = 0x39AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AA74u;
            // 0x39aa78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA7Cu; }
        if (ctx->pc != 0x39AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AA7Cu; }
        if (ctx->pc != 0x39AA7Cu) { return; }
    }
    ctx->pc = 0x39AA7Cu;
label_39aa7c:
    // 0x39aa7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39aa7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39aa80:
    // 0x39aa80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39aa84:
    // 0x39aa84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39aa88:
    // 0x39aa88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39aa8c:
    // 0x39aa8c: 0xc442f250  lwc1        $f2, -0xDB0($v0)
    ctx->pc = 0x39aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39aa90:
    // 0x39aa90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39aa90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39aa94:
    // 0x39aa94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39aa98:
    // 0x39aa98: 0xc441f258  lwc1        $f1, -0xDA8($v0)
    ctx->pc = 0x39aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39aa9c:
    // 0x39aa9c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x39aa9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_39aaa0:
    // 0x39aaa0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39aaa4:
    // 0x39aaa4: 0xc440f25c  lwc1        $f0, -0xDA4($v0)
    ctx->pc = 0x39aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39aaa8:
    // 0x39aaa8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x39aaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_39aaac:
    // 0x39aaac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39aab0:
    // 0x39aab0: 0x8c42f254  lw          $v0, -0xDAC($v0)
    ctx->pc = 0x39aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963796)));
label_39aab4:
    // 0x39aab4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x39aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_39aab8:
    // 0x39aab8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x39aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_39aabc:
    // 0x39aabc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x39aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39aac0:
    // 0x39aac0: 0xc04cca0  jal         func_133280
label_39aac4:
    if (ctx->pc == 0x39AAC4u) {
        ctx->pc = 0x39AAC4u;
            // 0x39aac4: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x39AAC8u;
        goto label_39aac8;
    }
    ctx->pc = 0x39AAC0u;
    SET_GPR_U32(ctx, 31, 0x39AAC8u);
    ctx->pc = 0x39AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAC0u;
            // 0x39aac4: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAC8u; }
        if (ctx->pc != 0x39AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAC8u; }
        if (ctx->pc != 0x39AAC8u) { return; }
    }
    ctx->pc = 0x39AAC8u;
label_39aac8:
    // 0x39aac8: 0xc076980  jal         func_1DA600
label_39aacc:
    if (ctx->pc == 0x39AACCu) {
        ctx->pc = 0x39AACCu;
            // 0x39aacc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AAD0u;
        goto label_39aad0;
    }
    ctx->pc = 0x39AAC8u;
    SET_GPR_U32(ctx, 31, 0x39AAD0u);
    ctx->pc = 0x39AACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAC8u;
            // 0x39aacc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAD0u; }
        if (ctx->pc != 0x39AAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAD0u; }
        if (ctx->pc != 0x39AAD0u) { return; }
    }
    ctx->pc = 0x39AAD0u;
label_39aad0:
    // 0x39aad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39aad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39aad4:
    // 0x39aad4: 0xc04cc34  jal         func_1330D0
label_39aad8:
    if (ctx->pc == 0x39AAD8u) {
        ctx->pc = 0x39AAD8u;
            // 0x39aad8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39AADCu;
        goto label_39aadc;
    }
    ctx->pc = 0x39AAD4u;
    SET_GPR_U32(ctx, 31, 0x39AADCu);
    ctx->pc = 0x39AAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAD4u;
            // 0x39aad8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AADCu; }
        if (ctx->pc != 0x39AADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AADCu; }
        if (ctx->pc != 0x39AADCu) { return; }
    }
    ctx->pc = 0x39AADCu;
label_39aadc:
    // 0x39aadc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39aadcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39aae0:
    // 0x39aae0: 0xc04c710  jal         func_131C40
label_39aae4:
    if (ctx->pc == 0x39AAE4u) {
        ctx->pc = 0x39AAE4u;
            // 0x39aae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x39AAE8u;
        goto label_39aae8;
    }
    ctx->pc = 0x39AAE0u;
    SET_GPR_U32(ctx, 31, 0x39AAE8u);
    ctx->pc = 0x39AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAE0u;
            // 0x39aae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAE8u; }
        if (ctx->pc != 0x39AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AAE8u; }
        if (ctx->pc != 0x39AAE8u) { return; }
    }
    ctx->pc = 0x39AAE8u;
label_39aae8:
    // 0x39aae8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x39aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_39aaec:
    // 0x39aaec: 0xc4606f68  lwc1        $f0, 0x6F68($v1)
    ctx->pc = 0x39aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39aaf0:
    // 0x39aaf0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x39aaf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39aaf4:
    // 0x39aaf4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_39aaf8:
    if (ctx->pc == 0x39AAF8u) {
        ctx->pc = 0x39AAF8u;
            // 0x39aaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AAFCu;
        goto label_39aafc;
    }
    ctx->pc = 0x39AAF4u;
    {
        const bool branch_taken_0x39aaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39aaf4) {
            ctx->pc = 0x39AAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAF4u;
            // 0x39aaf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39AB04u;
            goto label_39ab04;
        }
    }
    ctx->pc = 0x39AAFCu;
label_39aafc:
    // 0x39aafc: 0x1000000f  b           . + 4 + (0xF << 2)
label_39ab00:
    if (ctx->pc == 0x39AB00u) {
        ctx->pc = 0x39AB00u;
            // 0x39ab00: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x39AB04u;
        goto label_39ab04;
    }
    ctx->pc = 0x39AAFCu;
    {
        const bool branch_taken_0x39aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AAFCu;
            // 0x39ab00: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aafc) {
            ctx->pc = 0x39AB3Cu;
            goto label_39ab3c;
        }
    }
    ctx->pc = 0x39AB04u;
label_39ab04:
    // 0x39ab04: 0xc07697c  jal         func_1DA5F0
label_39ab08:
    if (ctx->pc == 0x39AB08u) {
        ctx->pc = 0x39AB0Cu;
        goto label_39ab0c;
    }
    ctx->pc = 0x39AB04u;
    SET_GPR_U32(ctx, 31, 0x39AB0Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB0Cu; }
        if (ctx->pc != 0x39AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB0Cu; }
        if (ctx->pc != 0x39AB0Cu) { return; }
    }
    ctx->pc = 0x39AB0Cu;
label_39ab0c:
    // 0x39ab0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39ab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ab10:
    // 0x39ab10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39ab14:
    // 0x39ab14: 0xc04cd60  jal         func_133580
label_39ab18:
    if (ctx->pc == 0x39AB18u) {
        ctx->pc = 0x39AB18u;
            // 0x39ab18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AB1Cu;
        goto label_39ab1c;
    }
    ctx->pc = 0x39AB14u;
    SET_GPR_U32(ctx, 31, 0x39AB1Cu);
    ctx->pc = 0x39AB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AB14u;
            // 0x39ab18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB1Cu; }
        if (ctx->pc != 0x39AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB1Cu; }
        if (ctx->pc != 0x39AB1Cu) { return; }
    }
    ctx->pc = 0x39AB1Cu;
label_39ab1c:
    // 0x39ab1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39ab20:
    // 0x39ab20: 0xc04c650  jal         func_131940
label_39ab24:
    if (ctx->pc == 0x39AB24u) {
        ctx->pc = 0x39AB24u;
            // 0x39ab24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39AB28u;
        goto label_39ab28;
    }
    ctx->pc = 0x39AB20u;
    SET_GPR_U32(ctx, 31, 0x39AB28u);
    ctx->pc = 0x39AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AB20u;
            // 0x39ab24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB28u; }
        if (ctx->pc != 0x39AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AB28u; }
        if (ctx->pc != 0x39AB28u) { return; }
    }
    ctx->pc = 0x39AB28u;
label_39ab28:
    // 0x39ab28: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x39ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_39ab2c:
    // 0x39ab2c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x39ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39ab30:
    // 0x39ab30: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x39ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_39ab34:
    // 0x39ab34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39ab38:
    // 0x39ab38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39ab3c:
    // 0x39ab3c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x39ab3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_39ab40:
    // 0x39ab40: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_39ab44:
    if (ctx->pc == 0x39AB44u) {
        ctx->pc = 0x39AB44u;
            // 0x39ab44: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x39AB48u;
        goto label_39ab48;
    }
    ctx->pc = 0x39AB40u;
    {
        const bool branch_taken_0x39ab40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AB40u;
            // 0x39ab44: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ab40) {
            ctx->pc = 0x39AC18u;
            goto label_39ac18;
        }
    }
    ctx->pc = 0x39AB48u;
label_39ab48:
    // 0x39ab48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ab4c:
    // 0x39ab4c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x39ab4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39ab50:
    // 0x39ab50: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x39ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_39ab54:
    // 0x39ab54: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x39ab54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_39ab58:
    // 0x39ab58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ab5c:
    // 0x39ab5c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x39ab5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39ab60:
    // 0x39ab60: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x39ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_39ab64:
    // 0x39ab64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ab68:
    // 0x39ab68: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x39ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_39ab6c:
    // 0x39ab6c: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x39ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_39ab70:
    // 0x39ab70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x39ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_39ab74:
    // 0x39ab74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ab78:
    // 0x39ab78: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x39ab78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39ab7c:
    // 0x39ab7c: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x39ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_39ab80:
    // 0x39ab80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39ab84:
    // 0x39ab84: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x39ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_39ab88:
    // 0x39ab88: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x39ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_39ab8c:
    // 0x39ab8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ab90:
    // 0x39ab90: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x39ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_39ab94:
    // 0x39ab94: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x39ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_39ab98:
    // 0x39ab98: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x39ab98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_39ab9c:
    // 0x39ab9c: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x39ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_39aba0:
    // 0x39aba0: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x39aba0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_39aba4:
    // 0x39aba4: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x39aba4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_39aba8:
    // 0x39aba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39abac:
    // 0x39abac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39abacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39abb0:
    // 0x39abb0: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x39abb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_39abb4:
    // 0x39abb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39abb8:
    // 0x39abb8: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x39abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_39abbc:
    // 0x39abbc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x39abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39abc0:
    // 0x39abc0: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x39abc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_39abc4:
    // 0x39abc4: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x39abc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_39abc8:
    // 0x39abc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39abcc:
    // 0x39abcc: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x39abccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_39abd0:
    // 0x39abd0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x39abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_39abd4:
    // 0x39abd4: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x39abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_39abd8:
    // 0x39abd8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x39abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_39abdc:
    // 0x39abdc: 0xc04e4a4  jal         func_139290
label_39abe0:
    if (ctx->pc == 0x39ABE0u) {
        ctx->pc = 0x39ABE0u;
            // 0x39abe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39ABE4u;
        goto label_39abe4;
    }
    ctx->pc = 0x39ABDCu;
    SET_GPR_U32(ctx, 31, 0x39ABE4u);
    ctx->pc = 0x39ABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ABDCu;
            // 0x39abe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ABE4u; }
        if (ctx->pc != 0x39ABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ABE4u; }
        if (ctx->pc != 0x39ABE4u) { return; }
    }
    ctx->pc = 0x39ABE4u;
label_39abe4:
    // 0x39abe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39abe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39abe8:
    // 0x39abe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39abe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39abec:
    // 0x39abec: 0xc04cd60  jal         func_133580
label_39abf0:
    if (ctx->pc == 0x39ABF0u) {
        ctx->pc = 0x39ABF0u;
            // 0x39abf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39ABF4u;
        goto label_39abf4;
    }
    ctx->pc = 0x39ABECu;
    SET_GPR_U32(ctx, 31, 0x39ABF4u);
    ctx->pc = 0x39ABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ABECu;
            // 0x39abf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ABF4u; }
        if (ctx->pc != 0x39ABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ABF4u; }
        if (ctx->pc != 0x39ABF4u) { return; }
    }
    ctx->pc = 0x39ABF4u;
label_39abf4:
    // 0x39abf4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x39abf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39abf8:
    // 0x39abf8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x39abf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_39abfc:
    // 0x39abfc: 0x320f809  jalr        $t9
label_39ac00:
    if (ctx->pc == 0x39AC00u) {
        ctx->pc = 0x39AC00u;
            // 0x39ac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AC04u;
        goto label_39ac04;
    }
    ctx->pc = 0x39ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39AC04u);
        ctx->pc = 0x39AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39ABFCu;
            // 0x39ac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39AC04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39AC04u; }
            if (ctx->pc != 0x39AC04u) { return; }
        }
        }
    }
    ctx->pc = 0x39AC04u;
label_39ac04:
    // 0x39ac04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39ac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39ac08:
    // 0x39ac08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39ac08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39ac0c:
    // 0x39ac0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39ac0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39ac10:
    // 0x39ac10: 0xc054fd4  jal         func_153F50
label_39ac14:
    if (ctx->pc == 0x39AC14u) {
        ctx->pc = 0x39AC14u;
            // 0x39ac14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AC18u;
        goto label_39ac18;
    }
    ctx->pc = 0x39AC10u;
    SET_GPR_U32(ctx, 31, 0x39AC18u);
    ctx->pc = 0x39AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC10u;
            // 0x39ac14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AC18u; }
        if (ctx->pc != 0x39AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AC18u; }
        if (ctx->pc != 0x39AC18u) { return; }
    }
    ctx->pc = 0x39AC18u;
label_39ac18:
    // 0x39ac18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39ac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39ac1c:
    // 0x39ac1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39ac20:
    // 0x39ac20: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x39ac20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39ac24:
    // 0x39ac24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39ac24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39ac28:
    // 0x39ac28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39ac28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39ac2c:
    // 0x39ac2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39ac2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39ac30:
    // 0x39ac30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39ac30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39ac34:
    // 0x39ac34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ac34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39ac38:
    // 0x39ac38: 0x3e00008  jr          $ra
label_39ac3c:
    if (ctx->pc == 0x39AC3Cu) {
        ctx->pc = 0x39AC3Cu;
            // 0x39ac3c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x39AC40u;
        goto label_39ac40;
    }
    ctx->pc = 0x39AC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC38u;
            // 0x39ac3c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39AC40u;
label_39ac40:
    // 0x39ac40: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x39ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_39ac44:
    // 0x39ac44: 0x80baaa0  j           func_2EAA80
label_39ac48:
    if (ctx->pc == 0x39AC48u) {
        ctx->pc = 0x39AC48u;
            // 0x39ac48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AC4Cu;
        goto label_39ac4c;
    }
    ctx->pc = 0x39AC44u;
    ctx->pc = 0x39AC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC44u;
            // 0x39ac48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x39AC4Cu;
label_39ac4c:
    // 0x39ac4c: 0x0  nop
    ctx->pc = 0x39ac4cu;
    // NOP
label_39ac50:
    // 0x39ac50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39ac54:
    // 0x39ac54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39ac58:
    // 0x39ac58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39ac5c:
    // 0x39ac5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ac5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ac60:
    // 0x39ac60: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x39ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_39ac64:
    // 0x39ac64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39ac68:
    if (ctx->pc == 0x39AC68u) {
        ctx->pc = 0x39AC68u;
            // 0x39ac68: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x39AC6Cu;
        goto label_39ac6c;
    }
    ctx->pc = 0x39AC64u;
    {
        const bool branch_taken_0x39ac64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ac64) {
            ctx->pc = 0x39AC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC64u;
            // 0x39ac68: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39AC80u;
            goto label_39ac80;
        }
    }
    ctx->pc = 0x39AC6Cu;
label_39ac6c:
    // 0x39ac6c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x39ac6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_39ac70:
    // 0x39ac70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39ac70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39ac74:
    // 0x39ac74: 0x320f809  jalr        $t9
label_39ac78:
    if (ctx->pc == 0x39AC78u) {
        ctx->pc = 0x39AC78u;
            // 0x39ac78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39AC7Cu;
        goto label_39ac7c;
    }
    ctx->pc = 0x39AC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39AC7Cu);
        ctx->pc = 0x39AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC74u;
            // 0x39ac78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39AC7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39AC7Cu; }
            if (ctx->pc != 0x39AC7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39AC7Cu;
label_39ac7c:
    // 0x39ac7c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x39ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_39ac80:
    // 0x39ac80: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39ac84:
    // 0x39ac84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39ac88:
    if (ctx->pc == 0x39AC88u) {
        ctx->pc = 0x39AC88u;
            // 0x39ac88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x39AC8Cu;
        goto label_39ac8c;
    }
    ctx->pc = 0x39AC84u;
    {
        const bool branch_taken_0x39ac84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ac84) {
            ctx->pc = 0x39AC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC84u;
            // 0x39ac88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39ACA0u;
            goto label_39aca0;
        }
    }
    ctx->pc = 0x39AC8Cu;
label_39ac8c:
    // 0x39ac8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39ac8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39ac90:
    // 0x39ac90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39ac90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39ac94:
    // 0x39ac94: 0x320f809  jalr        $t9
label_39ac98:
    if (ctx->pc == 0x39AC98u) {
        ctx->pc = 0x39AC98u;
            // 0x39ac98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39AC9Cu;
        goto label_39ac9c;
    }
    ctx->pc = 0x39AC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39AC9Cu);
        ctx->pc = 0x39AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AC94u;
            // 0x39ac98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39AC9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39AC9Cu; }
            if (ctx->pc != 0x39AC9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39AC9Cu;
label_39ac9c:
    // 0x39ac9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x39ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_39aca0:
    // 0x39aca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39aca4:
    // 0x39aca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39aca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39aca8:
    // 0x39aca8: 0x3e00008  jr          $ra
label_39acac:
    if (ctx->pc == 0x39ACACu) {
        ctx->pc = 0x39ACACu;
            // 0x39acac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39ACB0u;
        goto label_39acb0;
    }
    ctx->pc = 0x39ACA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACA8u;
            // 0x39acac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39ACB0u;
label_39acb0:
    // 0x39acb0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x39acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_39acb4:
    // 0x39acb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39acb8:
    // 0x39acb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39acbc:
    // 0x39acbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39acc0:
    // 0x39acc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39acc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39acc4:
    // 0x39acc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39acc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39acc8:
    // 0x39acc8: 0xc0892d0  jal         func_224B40
label_39accc:
    if (ctx->pc == 0x39ACCCu) {
        ctx->pc = 0x39ACCCu;
            // 0x39accc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39ACD0u;
        goto label_39acd0;
    }
    ctx->pc = 0x39ACC8u;
    SET_GPR_U32(ctx, 31, 0x39ACD0u);
    ctx->pc = 0x39ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACC8u;
            // 0x39accc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACD0u; }
        if (ctx->pc != 0x39ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACD0u; }
        if (ctx->pc != 0x39ACD0u) { return; }
    }
    ctx->pc = 0x39ACD0u;
label_39acd0:
    // 0x39acd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39acd4:
    // 0x39acd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39acd8:
    // 0x39acd8: 0x8c426490  lw          $v0, 0x6490($v0)
    ctx->pc = 0x39acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25744)));
label_39acdc:
    // 0x39acdc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x39acdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_39ace0:
    // 0x39ace0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x39ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_39ace4:
    // 0x39ace4: 0xc0b6e68  jal         func_2DB9A0
label_39ace8:
    if (ctx->pc == 0x39ACE8u) {
        ctx->pc = 0x39ACE8u;
            // 0x39ace8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x39ACECu;
        goto label_39acec;
    }
    ctx->pc = 0x39ACE4u;
    SET_GPR_U32(ctx, 31, 0x39ACECu);
    ctx->pc = 0x39ACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACE4u;
            // 0x39ace8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACECu; }
        if (ctx->pc != 0x39ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACECu; }
        if (ctx->pc != 0x39ACECu) { return; }
    }
    ctx->pc = 0x39ACECu;
label_39acec:
    // 0x39acec: 0xc0b6dac  jal         func_2DB6B0
label_39acf0:
    if (ctx->pc == 0x39ACF0u) {
        ctx->pc = 0x39ACF0u;
            // 0x39acf0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39ACF4u;
        goto label_39acf4;
    }
    ctx->pc = 0x39ACECu;
    SET_GPR_U32(ctx, 31, 0x39ACF4u);
    ctx->pc = 0x39ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACECu;
            // 0x39acf0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACF4u; }
        if (ctx->pc != 0x39ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACF4u; }
        if (ctx->pc != 0x39ACF4u) { return; }
    }
    ctx->pc = 0x39ACF4u;
label_39acf4:
    // 0x39acf4: 0xc0cac94  jal         func_32B250
label_39acf8:
    if (ctx->pc == 0x39ACF8u) {
        ctx->pc = 0x39ACF8u;
            // 0x39acf8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39ACFCu;
        goto label_39acfc;
    }
    ctx->pc = 0x39ACF4u;
    SET_GPR_U32(ctx, 31, 0x39ACFCu);
    ctx->pc = 0x39ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACF4u;
            // 0x39acf8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACFCu; }
        if (ctx->pc != 0x39ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39ACFCu; }
        if (ctx->pc != 0x39ACFCu) { return; }
    }
    ctx->pc = 0x39ACFCu;
label_39acfc:
    // 0x39acfc: 0xc0cac84  jal         func_32B210
label_39ad00:
    if (ctx->pc == 0x39AD00u) {
        ctx->pc = 0x39AD00u;
            // 0x39ad00: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39AD04u;
        goto label_39ad04;
    }
    ctx->pc = 0x39ACFCu;
    SET_GPR_U32(ctx, 31, 0x39AD04u);
    ctx->pc = 0x39AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39ACFCu;
            // 0x39ad00: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AD04u; }
        if (ctx->pc != 0x39AD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AD04u; }
        if (ctx->pc != 0x39AD04u) { return; }
    }
    ctx->pc = 0x39AD04u;
label_39ad04:
    // 0x39ad04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x39ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_39ad08:
    // 0x39ad08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39ad0c:
    // 0x39ad0c: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x39ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ad10:
    // 0x39ad10: 0xc0a5a68  jal         func_2969A0
label_39ad14:
    if (ctx->pc == 0x39AD14u) {
        ctx->pc = 0x39AD14u;
            // 0x39ad14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39AD18u;
        goto label_39ad18;
    }
    ctx->pc = 0x39AD10u;
    SET_GPR_U32(ctx, 31, 0x39AD18u);
    ctx->pc = 0x39AD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AD10u;
            // 0x39ad14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AD18u; }
        if (ctx->pc != 0x39AD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AD18u; }
        if (ctx->pc != 0x39AD18u) { return; }
    }
    ctx->pc = 0x39AD18u;
label_39ad18:
    // 0x39ad18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39ad1c:
    // 0x39ad1c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x39ad1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_39ad20:
    // 0x39ad20: 0x8c436490  lw          $v1, 0x6490($v0)
    ctx->pc = 0x39ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25744)));
label_39ad24:
    // 0x39ad24: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x39ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ad28:
    // 0x39ad28: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x39ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ad2c:
    // 0x39ad2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39ad2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ad30:
    // 0x39ad30: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x39ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ad34:
    // 0x39ad34: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x39ad34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39ad38:
    // 0x39ad38: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x39ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_39ad3c:
    // 0x39ad3c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x39ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_39ad40:
    // 0x39ad40: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x39ad40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_39ad44:
    // 0x39ad44: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x39ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39ad48:
    // 0x39ad48: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x39ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_39ad4c:
    // 0x39ad4c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x39ad4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_39ad50:
    // 0x39ad50: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x39ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_39ad54:
    // 0x39ad54: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x39ad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_39ad58:
    // 0x39ad58: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x39ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_39ad5c:
    // 0x39ad5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ad60:
    // 0x39ad60: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x39ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_39ad64:
    // 0x39ad64: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39ad68:
    // 0x39ad68: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x39ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_39ad6c:
    // 0x39ad6c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x39ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39ad70:
    // 0x39ad70: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x39ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39ad74:
    // 0x39ad74: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x39ad74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_39ad78:
    // 0x39ad78: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x39ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_39ad7c:
    // 0x39ad7c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x39ad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_39ad80:
    // 0x39ad80: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x39ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_39ad84:
    // 0x39ad84: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x39ad84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_39ad88:
    // 0x39ad88: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x39ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_39ad8c:
    // 0x39ad8c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x39ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ad90:
    // 0x39ad90: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x39ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_39ad94:
    // 0x39ad94: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x39ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ad98:
    // 0x39ad98: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x39ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_39ad9c:
    // 0x39ad9c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x39ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ada0:
    // 0x39ada0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x39ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_39ada4:
    // 0x39ada4: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x39ada4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_39ada8:
    // 0x39ada8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x39ada8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_39adac:
    // 0x39adac: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x39adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_39adb0:
    // 0x39adb0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x39adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39adb4:
    // 0x39adb4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x39adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39adb8:
    // 0x39adb8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x39adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39adbc:
    // 0x39adbc: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x39adbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_39adc0:
    // 0x39adc0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x39adc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_39adc4:
    // 0x39adc4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x39adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_39adc8:
    // 0x39adc8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x39adc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39adcc:
    // 0x39adcc: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x39adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39add0:
    // 0x39add0: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x39add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39add4:
    // 0x39add4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x39add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39add8:
    // 0x39add8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x39add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39addc:
    // 0x39addc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x39addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ade0:
    // 0x39ade0: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x39ade0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_39ade4:
    // 0x39ade4: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x39ade4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_39ade8:
    // 0x39ade8: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x39ade8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_39adec:
    // 0x39adec: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x39adecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_39adf0:
    // 0x39adf0: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x39adf0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_39adf4:
    // 0x39adf4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x39adf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_39adf8:
    // 0x39adf8: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x39adf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_39adfc:
    // 0x39adfc: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x39adfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_39ae00:
    // 0x39ae00: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x39ae00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_39ae04:
    // 0x39ae04: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x39ae04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_39ae08:
    // 0x39ae08: 0xc0a7a88  jal         func_29EA20
label_39ae0c:
    if (ctx->pc == 0x39AE0Cu) {
        ctx->pc = 0x39AE0Cu;
            // 0x39ae0c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x39AE10u;
        goto label_39ae10;
    }
    ctx->pc = 0x39AE08u;
    SET_GPR_U32(ctx, 31, 0x39AE10u);
    ctx->pc = 0x39AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AE08u;
            // 0x39ae0c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE10u; }
        if (ctx->pc != 0x39AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE10u; }
        if (ctx->pc != 0x39AE10u) { return; }
    }
    ctx->pc = 0x39AE10u;
label_39ae10:
    // 0x39ae10: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x39ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39ae14:
    // 0x39ae14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39ae14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ae18:
    // 0x39ae18: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_39ae1c:
    if (ctx->pc == 0x39AE1Cu) {
        ctx->pc = 0x39AE1Cu;
            // 0x39ae1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39AE20u;
        goto label_39ae20;
    }
    ctx->pc = 0x39AE18u;
    {
        const bool branch_taken_0x39ae18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AE18u;
            // 0x39ae1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae18) {
            ctx->pc = 0x39AE68u;
            goto label_39ae68;
        }
    }
    ctx->pc = 0x39AE20u;
label_39ae20:
    // 0x39ae20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ae24:
    // 0x39ae24: 0xc088ef4  jal         func_223BD0
label_39ae28:
    if (ctx->pc == 0x39AE28u) {
        ctx->pc = 0x39AE28u;
            // 0x39ae28: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39AE2Cu;
        goto label_39ae2c;
    }
    ctx->pc = 0x39AE24u;
    SET_GPR_U32(ctx, 31, 0x39AE2Cu);
    ctx->pc = 0x39AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AE24u;
            // 0x39ae28: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE2Cu; }
        if (ctx->pc != 0x39AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE2Cu; }
        if (ctx->pc != 0x39AE2Cu) { return; }
    }
    ctx->pc = 0x39AE2Cu;
label_39ae2c:
    // 0x39ae2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39ae30:
    // 0x39ae30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39ae34:
    // 0x39ae34: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x39ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_39ae38:
    // 0x39ae38: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x39ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_39ae3c:
    // 0x39ae3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39ae40:
    // 0x39ae40: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x39ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_39ae44:
    // 0x39ae44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ae48:
    // 0x39ae48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39ae4c:
    // 0x39ae4c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x39ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_39ae50:
    // 0x39ae50: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x39ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_39ae54:
    // 0x39ae54: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x39ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_39ae58:
    // 0x39ae58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39ae5c:
    // 0x39ae5c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x39ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39ae60:
    // 0x39ae60: 0xc088b38  jal         func_222CE0
label_39ae64:
    if (ctx->pc == 0x39AE64u) {
        ctx->pc = 0x39AE64u;
            // 0x39ae64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AE68u;
        goto label_39ae68;
    }
    ctx->pc = 0x39AE60u;
    SET_GPR_U32(ctx, 31, 0x39AE68u);
    ctx->pc = 0x39AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AE60u;
            // 0x39ae64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE68u; }
        if (ctx->pc != 0x39AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE68u; }
        if (ctx->pc != 0x39AE68u) { return; }
    }
    ctx->pc = 0x39AE68u;
label_39ae68:
    // 0x39ae68: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x39ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_39ae6c:
    // 0x39ae6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ae70:
    // 0x39ae70: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x39ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_39ae74:
    // 0x39ae74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39ae78:
    // 0x39ae78: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x39ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_39ae7c:
    // 0x39ae7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ae80:
    // 0x39ae80: 0xc08914c  jal         func_224530
label_39ae84:
    if (ctx->pc == 0x39AE84u) {
        ctx->pc = 0x39AE84u;
            // 0x39ae84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AE88u;
        goto label_39ae88;
    }
    ctx->pc = 0x39AE80u;
    SET_GPR_U32(ctx, 31, 0x39AE88u);
    ctx->pc = 0x39AE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AE80u;
            // 0x39ae84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE88u; }
        if (ctx->pc != 0x39AE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AE88u; }
        if (ctx->pc != 0x39AE88u) { return; }
    }
    ctx->pc = 0x39AE88u;
label_39ae88:
    // 0x39ae88: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x39ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ae8c:
    // 0x39ae8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ae90:
    // 0x39ae90: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x39ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ae94:
    // 0x39ae94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x39ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39ae98:
    // 0x39ae98: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x39ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ae9c:
    // 0x39ae9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x39ae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39aea0:
    // 0x39aea0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x39aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39aea4:
    // 0x39aea4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x39aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_39aea8:
    // 0x39aea8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x39aea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_39aeac:
    // 0x39aeac: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x39aeacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_39aeb0:
    // 0x39aeb0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x39aeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39aeb4:
    // 0x39aeb4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x39aeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39aeb8:
    // 0x39aeb8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x39aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39aebc:
    // 0x39aebc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x39aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39aec0:
    // 0x39aec0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x39aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39aec4:
    // 0x39aec4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x39aec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_39aec8:
    // 0x39aec8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x39aec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_39aecc:
    // 0x39aecc: 0xc0892b0  jal         func_224AC0
label_39aed0:
    if (ctx->pc == 0x39AED0u) {
        ctx->pc = 0x39AED0u;
            // 0x39aed0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x39AED4u;
        goto label_39aed4;
    }
    ctx->pc = 0x39AECCu;
    SET_GPR_U32(ctx, 31, 0x39AED4u);
    ctx->pc = 0x39AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AECCu;
            // 0x39aed0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AED4u; }
        if (ctx->pc != 0x39AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AED4u; }
        if (ctx->pc != 0x39AED4u) { return; }
    }
    ctx->pc = 0x39AED4u;
label_39aed4:
    // 0x39aed4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x39aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_39aed8:
    // 0x39aed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39aedc:
    // 0x39aedc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x39aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_39aee0:
    // 0x39aee0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x39aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39aee4:
    // 0x39aee4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x39aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_39aee8:
    // 0x39aee8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x39aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_39aeec:
    // 0x39aeec: 0xc0891d8  jal         func_224760
label_39aef0:
    if (ctx->pc == 0x39AEF0u) {
        ctx->pc = 0x39AEF0u;
            // 0x39aef0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x39AEF4u;
        goto label_39aef4;
    }
    ctx->pc = 0x39AEECu;
    SET_GPR_U32(ctx, 31, 0x39AEF4u);
    ctx->pc = 0x39AEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AEECu;
            // 0x39aef0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AEF4u; }
        if (ctx->pc != 0x39AEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AEF4u; }
        if (ctx->pc != 0x39AEF4u) { return; }
    }
    ctx->pc = 0x39AEF4u;
label_39aef4:
    // 0x39aef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39aef8:
    // 0x39aef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39aefc:
    // 0x39aefc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39af00:
    // 0x39af00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39af04:
    // 0x39af04: 0xc08c164  jal         func_230590
label_39af08:
    if (ctx->pc == 0x39AF08u) {
        ctx->pc = 0x39AF08u;
            // 0x39af08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39AF0Cu;
        goto label_39af0c;
    }
    ctx->pc = 0x39AF04u;
    SET_GPR_U32(ctx, 31, 0x39AF0Cu);
    ctx->pc = 0x39AF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF04u;
            // 0x39af08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF0Cu; }
        if (ctx->pc != 0x39AF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF0Cu; }
        if (ctx->pc != 0x39AF0Cu) { return; }
    }
    ctx->pc = 0x39AF0Cu;
label_39af0c:
    // 0x39af0c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x39af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_39af10:
    // 0x39af10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39af14:
    // 0x39af14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39af18:
    // 0x39af18: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x39af18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39af1c:
    // 0x39af1c: 0xc0a7a88  jal         func_29EA20
label_39af20:
    if (ctx->pc == 0x39AF20u) {
        ctx->pc = 0x39AF20u;
            // 0x39af20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x39AF24u;
        goto label_39af24;
    }
    ctx->pc = 0x39AF1Cu;
    SET_GPR_U32(ctx, 31, 0x39AF24u);
    ctx->pc = 0x39AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF1Cu;
            // 0x39af20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF24u; }
        if (ctx->pc != 0x39AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF24u; }
        if (ctx->pc != 0x39AF24u) { return; }
    }
    ctx->pc = 0x39AF24u;
label_39af24:
    // 0x39af24: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x39af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39af28:
    // 0x39af28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39af28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39af2c:
    // 0x39af2c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_39af30:
    if (ctx->pc == 0x39AF30u) {
        ctx->pc = 0x39AF30u;
            // 0x39af30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39AF34u;
        goto label_39af34;
    }
    ctx->pc = 0x39AF2Cu;
    {
        const bool branch_taken_0x39af2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF2Cu;
            // 0x39af30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af2c) {
            ctx->pc = 0x39AF50u;
            goto label_39af50;
        }
    }
    ctx->pc = 0x39AF34u;
label_39af34:
    // 0x39af34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39af38:
    // 0x39af38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39af3c:
    // 0x39af3c: 0xc0869d0  jal         func_21A740
label_39af40:
    if (ctx->pc == 0x39AF40u) {
        ctx->pc = 0x39AF40u;
            // 0x39af40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AF44u;
        goto label_39af44;
    }
    ctx->pc = 0x39AF3Cu;
    SET_GPR_U32(ctx, 31, 0x39AF44u);
    ctx->pc = 0x39AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF3Cu;
            // 0x39af40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF44u; }
        if (ctx->pc != 0x39AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF44u; }
        if (ctx->pc != 0x39AF44u) { return; }
    }
    ctx->pc = 0x39AF44u;
label_39af44:
    // 0x39af44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39af48:
    // 0x39af48: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x39af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_39af4c:
    // 0x39af4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x39af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_39af50:
    // 0x39af50: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x39af50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_39af54:
    // 0x39af54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39af58:
    // 0x39af58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39af5c:
    // 0x39af5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39af60:
    // 0x39af60: 0xc08c650  jal         func_231940
label_39af64:
    if (ctx->pc == 0x39AF64u) {
        ctx->pc = 0x39AF64u;
            // 0x39af64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39AF68u;
        goto label_39af68;
    }
    ctx->pc = 0x39AF60u;
    SET_GPR_U32(ctx, 31, 0x39AF68u);
    ctx->pc = 0x39AF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF60u;
            // 0x39af64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF68u; }
        if (ctx->pc != 0x39AF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF68u; }
        if (ctx->pc != 0x39AF68u) { return; }
    }
    ctx->pc = 0x39AF68u;
label_39af68:
    // 0x39af68: 0xc040180  jal         func_100600
label_39af6c:
    if (ctx->pc == 0x39AF6Cu) {
        ctx->pc = 0x39AF6Cu;
            // 0x39af6c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x39AF70u;
        goto label_39af70;
    }
    ctx->pc = 0x39AF68u;
    SET_GPR_U32(ctx, 31, 0x39AF70u);
    ctx->pc = 0x39AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF68u;
            // 0x39af6c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF70u; }
        if (ctx->pc != 0x39AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39AF70u; }
        if (ctx->pc != 0x39AF70u) { return; }
    }
    ctx->pc = 0x39AF70u;
label_39af70:
    // 0x39af70: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_39af74:
    if (ctx->pc == 0x39AF74u) {
        ctx->pc = 0x39AF74u;
            // 0x39af74: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x39AF78u;
        goto label_39af78;
    }
    ctx->pc = 0x39AF70u;
    {
        const bool branch_taken_0x39af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39af70) {
            ctx->pc = 0x39AF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39AF70u;
            // 0x39af74: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39AFC0u;
            goto label_39afc0;
        }
    }
    ctx->pc = 0x39AF78u;
label_39af78:
    // 0x39af78: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x39af78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_39af7c:
    // 0x39af7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x39af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_39af80:
    // 0x39af80: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x39af80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_39af84:
    // 0x39af84: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x39af84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_39af88:
    // 0x39af88: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x39af88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_39af8c:
    // 0x39af8c: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x39af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_39af90:
    // 0x39af90: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x39af90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_39af94:
    // 0x39af94: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x39af94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_39af98:
    // 0x39af98: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x39af98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_39af9c:
    // 0x39af9c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x39af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_39afa0:
    // 0x39afa0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x39afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_39afa4:
    // 0x39afa4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x39afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_39afa8:
    // 0x39afa8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x39afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_39afac:
    // 0x39afac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x39afacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_39afb0:
    // 0x39afb0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x39afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_39afb4:
    // 0x39afb4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x39afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_39afb8:
    // 0x39afb8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x39afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_39afbc:
    // 0x39afbc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x39afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_39afc0:
    // 0x39afc0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x39afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_39afc4:
    // 0x39afc4: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x39afc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_39afc8:
    // 0x39afc8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x39afc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39afcc:
    // 0x39afcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39afccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39afd0:
    // 0x39afd0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x39afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39afd4:
    // 0x39afd4: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x39afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_39afd8:
    // 0x39afd8: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x39afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_39afdc:
    // 0x39afdc: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x39afdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_39afe0:
    // 0x39afe0: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x39afe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_39afe4:
    // 0x39afe4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x39afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_39afe8:
    // 0x39afe8: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x39afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_39afec:
    // 0x39afec: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x39afecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_39aff0:
    // 0x39aff0: 0xa2270065  sb          $a3, 0x65($s1)
    ctx->pc = 0x39aff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 7));
label_39aff4:
    // 0x39aff4: 0xa2260066  sb          $a2, 0x66($s1)
    ctx->pc = 0x39aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 6));
label_39aff8:
    // 0x39aff8: 0xa2270067  sb          $a3, 0x67($s1)
    ctx->pc = 0x39aff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 7));
label_39affc:
    // 0x39affc: 0xae27008c  sw          $a3, 0x8C($s1)
    ctx->pc = 0x39affcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 7));
label_39b000:
    // 0x39b000: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x39b000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_39b004:
    // 0x39b004: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x39b004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_39b008:
    // 0x39b008: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x39b008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_39b00c:
    // 0x39b00c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39b010:
    // 0x39b010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39b010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39b014:
    // 0x39b014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b018:
    // 0x39b018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b01c:
    // 0x39b01c: 0x3e00008  jr          $ra
label_39b020:
    if (ctx->pc == 0x39B020u) {
        ctx->pc = 0x39B020u;
            // 0x39b020: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x39B024u;
        goto label_39b024;
    }
    ctx->pc = 0x39B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B01Cu;
            // 0x39b020: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B024u;
label_39b024:
    // 0x39b024: 0x0  nop
    ctx->pc = 0x39b024u;
    // NOP
label_39b028:
    // 0x39b028: 0x0  nop
    ctx->pc = 0x39b028u;
    // NOP
label_39b02c:
    // 0x39b02c: 0x0  nop
    ctx->pc = 0x39b02cu;
    // NOP
label_39b030:
    // 0x39b030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39b034:
    // 0x39b034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39b038:
    // 0x39b038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39b03c:
    // 0x39b03c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39b040:
    // 0x39b040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b044:
    // 0x39b044: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x39b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_39b048:
    // 0x39b048: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x39b048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39b04c:
    // 0x39b04c: 0xc0e393c  jal         func_38E4F0
label_39b050:
    if (ctx->pc == 0x39B050u) {
        ctx->pc = 0x39B050u;
            // 0x39b050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B054u;
        goto label_39b054;
    }
    ctx->pc = 0x39B04Cu;
    SET_GPR_U32(ctx, 31, 0x39B054u);
    ctx->pc = 0x39B050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B04Cu;
            // 0x39b050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B054u; }
        if (ctx->pc != 0x39B054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B054u; }
        if (ctx->pc != 0x39B054u) { return; }
    }
    ctx->pc = 0x39B054u;
label_39b054:
    // 0x39b054: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x39b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b058:
    // 0x39b058: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39b058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_39b05c:
    // 0x39b05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39b05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b060:
    // 0x39b060: 0x0  nop
    ctx->pc = 0x39b060u;
    // NOP
label_39b064:
    // 0x39b064: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39b064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b068:
    // 0x39b068: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_39b06c:
    if (ctx->pc == 0x39B06Cu) {
        ctx->pc = 0x39B06Cu;
            // 0x39b06c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39B070u;
        goto label_39b070;
    }
    ctx->pc = 0x39B068u;
    {
        const bool branch_taken_0x39b068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39b068) {
            ctx->pc = 0x39B06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B068u;
            // 0x39b06c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B080u;
            goto label_39b080;
        }
    }
    ctx->pc = 0x39B070u;
label_39b070:
    // 0x39b070: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39b074:
    // 0x39b074: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x39b074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_39b078:
    // 0x39b078: 0x10000007  b           . + 4 + (0x7 << 2)
label_39b07c:
    if (ctx->pc == 0x39B07Cu) {
        ctx->pc = 0x39B07Cu;
            // 0x39b07c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B080u;
        goto label_39b080;
    }
    ctx->pc = 0x39B078u;
    {
        const bool branch_taken_0x39b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B078u;
            // 0x39b07c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b078) {
            ctx->pc = 0x39B098u;
            goto label_39b098;
        }
    }
    ctx->pc = 0x39B080u;
label_39b080:
    // 0x39b080: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_39b084:
    // 0x39b084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39b088:
    // 0x39b088: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x39b088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_39b08c:
    // 0x39b08c: 0x0  nop
    ctx->pc = 0x39b08cu;
    // NOP
label_39b090:
    // 0x39b090: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x39b090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_39b094:
    // 0x39b094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39b094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b098:
    // 0x39b098: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x39b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_39b09c:
    // 0x39b09c: 0xc0b89e4  jal         func_2E2790
label_39b0a0:
    if (ctx->pc == 0x39B0A0u) {
        ctx->pc = 0x39B0A0u;
            // 0x39b0a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39B0A4u;
        goto label_39b0a4;
    }
    ctx->pc = 0x39B09Cu;
    SET_GPR_U32(ctx, 31, 0x39B0A4u);
    ctx->pc = 0x39B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B09Cu;
            // 0x39b0a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0A4u; }
        if (ctx->pc != 0x39B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0A4u; }
        if (ctx->pc != 0x39B0A4u) { return; }
    }
    ctx->pc = 0x39B0A4u;
label_39b0a4:
    // 0x39b0a4: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x39b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b0a8:
    // 0x39b0a8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x39b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_39b0ac:
    // 0x39b0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39b0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b0b0:
    // 0x39b0b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x39b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39b0b4:
    // 0x39b0b4: 0xc60c01d0  lwc1        $f12, 0x1D0($s0)
    ctx->pc = 0x39b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39b0b8:
    // 0x39b0b8: 0xc60e01d8  lwc1        $f14, 0x1D8($s0)
    ctx->pc = 0x39b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_39b0bc:
    // 0x39b0bc: 0xc04cbd8  jal         func_132F60
label_39b0c0:
    if (ctx->pc == 0x39B0C0u) {
        ctx->pc = 0x39B0C0u;
            // 0x39b0c0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x39B0C4u;
        goto label_39b0c4;
    }
    ctx->pc = 0x39B0BCu;
    SET_GPR_U32(ctx, 31, 0x39B0C4u);
    ctx->pc = 0x39B0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B0BCu;
            // 0x39b0c0: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0C4u; }
        if (ctx->pc != 0x39B0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0C4u; }
        if (ctx->pc != 0x39B0C4u) { return; }
    }
    ctx->pc = 0x39B0C4u;
label_39b0c4:
    // 0x39b0c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x39b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_39b0c8:
    // 0x39b0c8: 0xc04c74c  jal         func_131D30
label_39b0cc:
    if (ctx->pc == 0x39B0CCu) {
        ctx->pc = 0x39B0CCu;
            // 0x39b0cc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x39B0D0u;
        goto label_39b0d0;
    }
    ctx->pc = 0x39B0C8u;
    SET_GPR_U32(ctx, 31, 0x39B0D0u);
    ctx->pc = 0x39B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B0C8u;
            // 0x39b0cc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0D0u; }
        if (ctx->pc != 0x39B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0D0u; }
        if (ctx->pc != 0x39B0D0u) { return; }
    }
    ctx->pc = 0x39B0D0u;
label_39b0d0:
    // 0x39b0d0: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x39b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_39b0d4:
    // 0x39b0d4: 0xc04c74c  jal         func_131D30
label_39b0d8:
    if (ctx->pc == 0x39B0D8u) {
        ctx->pc = 0x39B0D8u;
            // 0x39b0d8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x39B0DCu;
        goto label_39b0dc;
    }
    ctx->pc = 0x39B0D4u;
    SET_GPR_U32(ctx, 31, 0x39B0DCu);
    ctx->pc = 0x39B0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B0D4u;
            // 0x39b0d8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0DCu; }
        if (ctx->pc != 0x39B0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0DCu; }
        if (ctx->pc != 0x39B0DCu) { return; }
    }
    ctx->pc = 0x39B0DCu;
label_39b0dc:
    // 0x39b0dc: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x39b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_39b0e0:
    // 0x39b0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39b0e4:
    // 0x39b0e4: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x39b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_39b0e8:
    // 0x39b0e8: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x39b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_39b0ec:
    // 0x39b0ec: 0xc04c74c  jal         func_131D30
label_39b0f0:
    if (ctx->pc == 0x39B0F0u) {
        ctx->pc = 0x39B0F0u;
            // 0x39b0f0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x39B0F4u;
        goto label_39b0f4;
    }
    ctx->pc = 0x39B0ECu;
    SET_GPR_U32(ctx, 31, 0x39B0F4u);
    ctx->pc = 0x39B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B0ECu;
            // 0x39b0f0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0F4u; }
        if (ctx->pc != 0x39B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B0F4u; }
        if (ctx->pc != 0x39B0F4u) { return; }
    }
    ctx->pc = 0x39B0F4u;
label_39b0f4:
    // 0x39b0f4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39b0f8:
    // 0x39b0f8: 0xc04c720  jal         func_131C80
label_39b0fc:
    if (ctx->pc == 0x39B0FCu) {
        ctx->pc = 0x39B0FCu;
            // 0x39b0fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x39B100u;
        goto label_39b100;
    }
    ctx->pc = 0x39B0F8u;
    SET_GPR_U32(ctx, 31, 0x39B100u);
    ctx->pc = 0x39B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B0F8u;
            // 0x39b0fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B100u; }
        if (ctx->pc != 0x39B100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B100u; }
        if (ctx->pc != 0x39B100u) { return; }
    }
    ctx->pc = 0x39B100u;
label_39b100:
    // 0x39b100: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x39b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_39b104:
    // 0x39b104: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x39b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_39b108:
    // 0x39b108: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x39b108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_39b10c:
    // 0x39b10c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x39b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_39b110:
    // 0x39b110: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x39b110u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b114:
    // 0x39b114: 0xc088b74  jal         func_222DD0
label_39b118:
    if (ctx->pc == 0x39B118u) {
        ctx->pc = 0x39B118u;
            // 0x39b118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B11Cu;
        goto label_39b11c;
    }
    ctx->pc = 0x39B114u;
    SET_GPR_U32(ctx, 31, 0x39B11Cu);
    ctx->pc = 0x39B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B114u;
            // 0x39b118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B11Cu; }
        if (ctx->pc != 0x39B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B11Cu; }
        if (ctx->pc != 0x39B11Cu) { return; }
    }
    ctx->pc = 0x39B11Cu;
label_39b11c:
    // 0x39b11c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39b11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39b120:
    // 0x39b120: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39b124:
    // 0x39b124: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39b124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39b128:
    // 0x39b128: 0x320f809  jalr        $t9
label_39b12c:
    if (ctx->pc == 0x39B12Cu) {
        ctx->pc = 0x39B12Cu;
            // 0x39b12c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39B130u;
        goto label_39b130;
    }
    ctx->pc = 0x39B128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B130u);
        ctx->pc = 0x39B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B128u;
            // 0x39b12c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B130u; }
            if (ctx->pc != 0x39B130u) { return; }
        }
        }
    }
    ctx->pc = 0x39B130u;
label_39b130:
    // 0x39b130: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x39b130u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b134:
    // 0x39b134: 0xc088b74  jal         func_222DD0
label_39b138:
    if (ctx->pc == 0x39B138u) {
        ctx->pc = 0x39B138u;
            // 0x39b138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B13Cu;
        goto label_39b13c;
    }
    ctx->pc = 0x39B134u;
    SET_GPR_U32(ctx, 31, 0x39B13Cu);
    ctx->pc = 0x39B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B134u;
            // 0x39b138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B13Cu; }
        if (ctx->pc != 0x39B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B13Cu; }
        if (ctx->pc != 0x39B13Cu) { return; }
    }
    ctx->pc = 0x39B13Cu;
label_39b13c:
    // 0x39b13c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39b13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39b140:
    // 0x39b140: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39b144:
    // 0x39b144: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39b144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39b148:
    // 0x39b148: 0x320f809  jalr        $t9
label_39b14c:
    if (ctx->pc == 0x39B14Cu) {
        ctx->pc = 0x39B14Cu;
            // 0x39b14c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39B150u;
        goto label_39b150;
    }
    ctx->pc = 0x39B148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B150u);
        ctx->pc = 0x39B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B148u;
            // 0x39b14c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B150u; }
            if (ctx->pc != 0x39B150u) { return; }
        }
        }
    }
    ctx->pc = 0x39B150u;
label_39b150:
    // 0x39b150: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x39b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b154:
    // 0x39b154: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x39b154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_39b158:
    // 0x39b158: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x39b158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_39b15c:
    // 0x39b15c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39b160:
    // 0x39b160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39b160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b164:
    // 0x39b164: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x39b164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_39b168:
    // 0x39b168: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x39b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b16c:
    // 0x39b16c: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x39b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_39b170:
    // 0x39b170: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x39b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b174:
    // 0x39b174: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x39b174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_39b178:
    // 0x39b178: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x39b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b17c:
    // 0x39b17c: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x39b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_39b180:
    // 0x39b180: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39b180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b184:
    // 0x39b184: 0xc08914c  jal         func_224530
label_39b188:
    if (ctx->pc == 0x39B188u) {
        ctx->pc = 0x39B188u;
            // 0x39b188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B18Cu;
        goto label_39b18c;
    }
    ctx->pc = 0x39B184u;
    SET_GPR_U32(ctx, 31, 0x39B18Cu);
    ctx->pc = 0x39B188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B184u;
            // 0x39b188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B18Cu; }
        if (ctx->pc != 0x39B18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B18Cu; }
        if (ctx->pc != 0x39B18Cu) { return; }
    }
    ctx->pc = 0x39B18Cu;
label_39b18c:
    // 0x39b18c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x39b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b190:
    // 0x39b190: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x39b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_39b194:
    // 0x39b194: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x39b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_39b198:
    // 0x39b198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39b198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b19c:
    // 0x39b19c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b1a0:
    // 0x39b1a0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x39b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_39b1a4:
    // 0x39b1a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39b1a8:
    // 0x39b1a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39b1ac:
    // 0x39b1ac: 0xc08bff0  jal         func_22FFC0
label_39b1b0:
    if (ctx->pc == 0x39B1B0u) {
        ctx->pc = 0x39B1B0u;
            // 0x39b1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B1B4u;
        goto label_39b1b4;
    }
    ctx->pc = 0x39B1ACu;
    SET_GPR_U32(ctx, 31, 0x39B1B4u);
    ctx->pc = 0x39B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B1ACu;
            // 0x39b1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B1B4u; }
        if (ctx->pc != 0x39B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B1B4u; }
        if (ctx->pc != 0x39B1B4u) { return; }
    }
    ctx->pc = 0x39B1B4u;
label_39b1b4:
    // 0x39b1b4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39b1b8:
    // 0x39b1b8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x39b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b1bc:
    // 0x39b1bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x39b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b1c0:
    // 0x39b1c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39b1c4:
    // 0x39b1c4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x39b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b1c8:
    // 0x39b1c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39b1cc:
    // 0x39b1cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x39b1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39b1d0:
    // 0x39b1d0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x39b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_39b1d4:
    // 0x39b1d4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x39b1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_39b1d8:
    // 0x39b1d8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x39b1d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_39b1dc:
    // 0x39b1dc: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x39b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39b1e0:
    // 0x39b1e0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x39b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b1e4:
    // 0x39b1e4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x39b1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b1e8:
    // 0x39b1e8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x39b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b1ec:
    // 0x39b1ec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x39b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_39b1f0:
    // 0x39b1f0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x39b1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_39b1f4:
    // 0x39b1f4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x39b1f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_39b1f8:
    // 0x39b1f8: 0xc0892b0  jal         func_224AC0
label_39b1fc:
    if (ctx->pc == 0x39B1FCu) {
        ctx->pc = 0x39B1FCu;
            // 0x39b1fc: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x39B200u;
        goto label_39b200;
    }
    ctx->pc = 0x39B1F8u;
    SET_GPR_U32(ctx, 31, 0x39B200u);
    ctx->pc = 0x39B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B1F8u;
            // 0x39b1fc: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B200u; }
        if (ctx->pc != 0x39B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B200u; }
        if (ctx->pc != 0x39B200u) { return; }
    }
    ctx->pc = 0x39B200u;
label_39b200:
    // 0x39b200: 0xa2000214  sb          $zero, 0x214($s0)
    ctx->pc = 0x39b200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 532), (uint8_t)GPR_U32(ctx, 0));
label_39b204:
    // 0x39b204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b208:
    // 0x39b208: 0xa2030215  sb          $v1, 0x215($s0)
    ctx->pc = 0x39b208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 533), (uint8_t)GPR_U32(ctx, 3));
label_39b20c:
    // 0x39b20c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x39b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_39b210:
    // 0x39b210: 0xa2000216  sb          $zero, 0x216($s0)
    ctx->pc = 0x39b210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 534), (uint8_t)GPR_U32(ctx, 0));
label_39b214:
    // 0x39b214: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x39b214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_39b218:
    // 0x39b218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b21c:
    // 0x39b21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b220:
    // 0x39b220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b224:
    // 0x39b224: 0x3e00008  jr          $ra
label_39b228:
    if (ctx->pc == 0x39B228u) {
        ctx->pc = 0x39B228u;
            // 0x39b228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39B22Cu;
        goto label_39b22c;
    }
    ctx->pc = 0x39B224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B224u;
            // 0x39b228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B22Cu;
label_39b22c:
    // 0x39b22c: 0x0  nop
    ctx->pc = 0x39b22cu;
    // NOP
label_39b230:
    // 0x39b230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b234:
    // 0x39b234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39b238:
    // 0x39b238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b23c:
    // 0x39b23c: 0xc0b1370  jal         func_2C4DC0
label_39b240:
    if (ctx->pc == 0x39B240u) {
        ctx->pc = 0x39B240u;
            // 0x39b240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B244u;
        goto label_39b244;
    }
    ctx->pc = 0x39B23Cu;
    SET_GPR_U32(ctx, 31, 0x39B244u);
    ctx->pc = 0x39B240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B23Cu;
            // 0x39b240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B244u; }
        if (ctx->pc != 0x39B244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B244u; }
        if (ctx->pc != 0x39B244u) { return; }
    }
    ctx->pc = 0x39B244u;
label_39b244:
    // 0x39b244: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39b244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39b248:
    // 0x39b248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39b248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39b24c:
    // 0x39b24c: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x39b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_39b250:
    // 0x39b250: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x39b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_39b254:
    // 0x39b254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39b258:
    // 0x39b258: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x39b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_39b25c:
    // 0x39b25c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39b260:
    // 0x39b260: 0xc0adb98  jal         func_2B6E60
label_39b264:
    if (ctx->pc == 0x39B264u) {
        ctx->pc = 0x39B264u;
            // 0x39b264: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x39B268u;
        goto label_39b268;
    }
    ctx->pc = 0x39B260u;
    SET_GPR_U32(ctx, 31, 0x39B268u);
    ctx->pc = 0x39B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B260u;
            // 0x39b264: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B268u; }
        if (ctx->pc != 0x39B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B268u; }
        if (ctx->pc != 0x39B268u) { return; }
    }
    ctx->pc = 0x39B268u;
label_39b268:
    // 0x39b268: 0xc0ada8c  jal         func_2B6A30
label_39b26c:
    if (ctx->pc == 0x39B26Cu) {
        ctx->pc = 0x39B26Cu;
            // 0x39b26c: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->pc = 0x39B270u;
        goto label_39b270;
    }
    ctx->pc = 0x39B268u;
    SET_GPR_U32(ctx, 31, 0x39B270u);
    ctx->pc = 0x39B26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B268u;
            // 0x39b26c: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B270u; }
        if (ctx->pc != 0x39B270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B270u; }
        if (ctx->pc != 0x39B270u) { return; }
    }
    ctx->pc = 0x39B270u;
label_39b270:
    // 0x39b270: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39b274:
    // 0x39b274: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39b274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39b278:
    // 0x39b278: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x39b278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_39b27c:
    // 0x39b27c: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x39b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
label_39b280:
    // 0x39b280: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39b284:
    // 0x39b284: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39b284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39b288:
    // 0x39b288: 0x24638400  addiu       $v1, $v1, -0x7C00
    ctx->pc = 0x39b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935552));
label_39b28c:
    // 0x39b28c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39b28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b290:
    // 0x39b290: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x39b290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_39b294:
    // 0x39b294: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x39b294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_39b298:
    // 0x39b298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b29c:
    // 0x39b29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b2a0:
    // 0x39b2a0: 0x3e00008  jr          $ra
label_39b2a4:
    if (ctx->pc == 0x39B2A4u) {
        ctx->pc = 0x39B2A4u;
            // 0x39b2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39B2A8u;
        goto label_39b2a8;
    }
    ctx->pc = 0x39B2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B2A0u;
            // 0x39b2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B2A8u;
label_39b2a8:
    // 0x39b2a8: 0x0  nop
    ctx->pc = 0x39b2a8u;
    // NOP
label_39b2ac:
    // 0x39b2ac: 0x0  nop
    ctx->pc = 0x39b2acu;
    // NOP
label_39b2b0:
    // 0x39b2b0: 0x3e00008  jr          $ra
label_39b2b4:
    if (ctx->pc == 0x39B2B4u) {
        ctx->pc = 0x39B2B4u;
            // 0x39b2b4: 0x24023322  addiu       $v0, $zero, 0x3322 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13090));
        ctx->pc = 0x39B2B8u;
        goto label_39b2b8;
    }
    ctx->pc = 0x39B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B2B0u;
            // 0x39b2b4: 0x24023322  addiu       $v0, $zero, 0x3322 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13090));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B2B8u;
label_39b2b8:
    // 0x39b2b8: 0x0  nop
    ctx->pc = 0x39b2b8u;
    // NOP
label_39b2bc:
    // 0x39b2bc: 0x0  nop
    ctx->pc = 0x39b2bcu;
    // NOP
label_39b2c0:
    // 0x39b2c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39b2c4:
    // 0x39b2c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39b2c8:
    // 0x39b2c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39b2cc:
    // 0x39b2cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39b2d0:
    // 0x39b2d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39b2d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b2d4:
    // 0x39b2d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39b2d8:
    // 0x39b2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39b2dc:
    // 0x39b2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b2e0:
    // 0x39b2e0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x39b2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_39b2e4:
    // 0x39b2e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_39b2e8:
    if (ctx->pc == 0x39B2E8u) {
        ctx->pc = 0x39B2E8u;
            // 0x39b2e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B2ECu;
        goto label_39b2ec;
    }
    ctx->pc = 0x39B2E4u;
    {
        const bool branch_taken_0x39b2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B2E4u;
            // 0x39b2e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2e4) {
            ctx->pc = 0x39B328u;
            goto label_39b328;
        }
    }
    ctx->pc = 0x39B2ECu;
label_39b2ec:
    // 0x39b2ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39b2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b2f0:
    // 0x39b2f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39b2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b2f4:
    // 0x39b2f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39b2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b2f8:
    // 0x39b2f8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x39b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_39b2fc:
    // 0x39b2fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39b300:
    // 0x39b300: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39b304:
    // 0x39b304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39b304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b308:
    // 0x39b308: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x39b308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_39b30c:
    // 0x39b30c: 0x320f809  jalr        $t9
label_39b310:
    if (ctx->pc == 0x39B310u) {
        ctx->pc = 0x39B314u;
        goto label_39b314;
    }
    ctx->pc = 0x39B30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B314u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B314u; }
            if (ctx->pc != 0x39B314u) { return; }
        }
        }
    }
    ctx->pc = 0x39B314u;
label_39b314:
    // 0x39b314: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x39b314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39b318:
    // 0x39b318: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39b318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39b31c:
    // 0x39b31c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x39b31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39b320:
    // 0x39b320: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_39b324:
    if (ctx->pc == 0x39B324u) {
        ctx->pc = 0x39B324u;
            // 0x39b324: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39B328u;
        goto label_39b328;
    }
    ctx->pc = 0x39B320u;
    {
        const bool branch_taken_0x39b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B320u;
            // 0x39b324: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b320) {
            ctx->pc = 0x39B2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39b2f8;
        }
    }
    ctx->pc = 0x39B328u;
label_39b328:
    // 0x39b328: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39b328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39b32c:
    // 0x39b32c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39b330:
    // 0x39b330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39b330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39b334:
    // 0x39b334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39b334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39b338:
    // 0x39b338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39b338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39b33c:
    // 0x39b33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b340:
    // 0x39b340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b344:
    // 0x39b344: 0x3e00008  jr          $ra
label_39b348:
    if (ctx->pc == 0x39B348u) {
        ctx->pc = 0x39B348u;
            // 0x39b348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39B34Cu;
        goto label_39b34c;
    }
    ctx->pc = 0x39B344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B344u;
            // 0x39b348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B34Cu;
label_39b34c:
    // 0x39b34c: 0x0  nop
    ctx->pc = 0x39b34cu;
    // NOP
label_39b350:
    // 0x39b350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39b354:
    // 0x39b354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b358:
    // 0x39b358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39b35c:
    // 0x39b35c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x39b35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_39b360:
    // 0x39b360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b364:
    // 0x39b364: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x39b364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_39b368:
    // 0x39b368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39b368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b36c:
    // 0x39b36c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x39b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_39b370:
    // 0x39b370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39b370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39b374:
    // 0x39b374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b378:
    // 0x39b378: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x39b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_39b37c:
    // 0x39b37c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x39b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b380:
    // 0x39b380: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x39b380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_39b384:
    // 0x39b384: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39b388:
    // 0x39b388: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x39b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_39b38c:
    // 0x39b38c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x39b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_39b390:
    // 0x39b390: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x39b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_39b394:
    // 0x39b394: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39b398:
    // 0x39b398: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x39b398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_39b39c:
    // 0x39b39c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x39b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_39b3a0:
    // 0x39b3a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x39b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_39b3a4:
    // 0x39b3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39b3a8:
    // 0x39b3a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x39b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b3ac:
    // 0x39b3ac: 0xc0a997c  jal         func_2A65F0
label_39b3b0:
    if (ctx->pc == 0x39B3B0u) {
        ctx->pc = 0x39B3B0u;
            // 0x39b3b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x39B3B4u;
        goto label_39b3b4;
    }
    ctx->pc = 0x39B3ACu;
    SET_GPR_U32(ctx, 31, 0x39B3B4u);
    ctx->pc = 0x39B3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B3ACu;
            // 0x39b3b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3B4u; }
        if (ctx->pc != 0x39B3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3B4u; }
        if (ctx->pc != 0x39B3B4u) { return; }
    }
    ctx->pc = 0x39B3B4u;
label_39b3b4:
    // 0x39b3b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x39b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_39b3b8:
    // 0x39b3b8: 0xc0d879c  jal         func_361E70
label_39b3bc:
    if (ctx->pc == 0x39B3BCu) {
        ctx->pc = 0x39B3BCu;
            // 0x39b3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B3C0u;
        goto label_39b3c0;
    }
    ctx->pc = 0x39B3B8u;
    SET_GPR_U32(ctx, 31, 0x39B3C0u);
    ctx->pc = 0x39B3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B3B8u;
            // 0x39b3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3C0u; }
        if (ctx->pc != 0x39B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3C0u; }
        if (ctx->pc != 0x39B3C0u) { return; }
    }
    ctx->pc = 0x39B3C0u;
label_39b3c0:
    // 0x39b3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b3c4:
    // 0x39b3c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b3c8:
    // 0x39b3c8: 0x3e00008  jr          $ra
label_39b3cc:
    if (ctx->pc == 0x39B3CCu) {
        ctx->pc = 0x39B3CCu;
            // 0x39b3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39B3D0u;
        goto label_39b3d0;
    }
    ctx->pc = 0x39B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B3C8u;
            // 0x39b3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B3D0u;
label_39b3d0:
    // 0x39b3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b3d4:
    // 0x39b3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39b3d8:
    // 0x39b3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b3dc:
    // 0x39b3dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x39b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_39b3e0:
    // 0x39b3e0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_39b3e4:
    if (ctx->pc == 0x39B3E4u) {
        ctx->pc = 0x39B3E4u;
            // 0x39b3e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B3E8u;
        goto label_39b3e8;
    }
    ctx->pc = 0x39B3E0u;
    {
        const bool branch_taken_0x39b3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B3E0u;
            // 0x39b3e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3e0) {
            ctx->pc = 0x39B500u;
            goto label_39b500;
        }
    }
    ctx->pc = 0x39B3E8u;
label_39b3e8:
    // 0x39b3e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39b3ec:
    // 0x39b3ec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x39b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_39b3f0:
    // 0x39b3f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39b3f4:
    // 0x39b3f4: 0xc075128  jal         func_1D44A0
label_39b3f8:
    if (ctx->pc == 0x39B3F8u) {
        ctx->pc = 0x39B3F8u;
            // 0x39b3f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x39B3FCu;
        goto label_39b3fc;
    }
    ctx->pc = 0x39B3F4u;
    SET_GPR_U32(ctx, 31, 0x39B3FCu);
    ctx->pc = 0x39B3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B3F4u;
            // 0x39b3f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3FCu; }
        if (ctx->pc != 0x39B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B3FCu; }
        if (ctx->pc != 0x39B3FCu) { return; }
    }
    ctx->pc = 0x39B3FCu;
label_39b3fc:
    // 0x39b3fc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x39b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_39b400:
    // 0x39b400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b404:
    // 0x39b404: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x39b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_39b408:
    // 0x39b408: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x39b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39b40c:
    // 0x39b40c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x39b40cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39b410:
    // 0x39b410: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_39b414:
    if (ctx->pc == 0x39B414u) {
        ctx->pc = 0x39B414u;
            // 0x39b414: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x39B418u;
        goto label_39b418;
    }
    ctx->pc = 0x39B410u;
    {
        const bool branch_taken_0x39b410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B410u;
            // 0x39b414: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b410) {
            ctx->pc = 0x39B420u;
            goto label_39b420;
        }
    }
    ctx->pc = 0x39B418u;
label_39b418:
    // 0x39b418: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b41c:
    // 0x39b41c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x39b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_39b420:
    // 0x39b420: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b424:
    // 0x39b424: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b428:
    // 0x39b428: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x39b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_39b42c:
    // 0x39b42c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x39b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_39b430:
    // 0x39b430: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x39b430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39b434:
    // 0x39b434: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_39b438:
    if (ctx->pc == 0x39B438u) {
        ctx->pc = 0x39B438u;
            // 0x39b438: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x39B43Cu;
        goto label_39b43c;
    }
    ctx->pc = 0x39B434u;
    {
        const bool branch_taken_0x39b434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b434) {
            ctx->pc = 0x39B438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B434u;
            // 0x39b438: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B448u;
            goto label_39b448;
        }
    }
    ctx->pc = 0x39B43Cu;
label_39b43c:
    // 0x39b43c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b440:
    // 0x39b440: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x39b440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_39b444:
    // 0x39b444: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b448:
    // 0x39b448: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b44c:
    // 0x39b44c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x39b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_39b450:
    // 0x39b450: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x39b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_39b454:
    // 0x39b454: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x39b454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_39b458:
    // 0x39b458: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_39b45c:
    if (ctx->pc == 0x39B45Cu) {
        ctx->pc = 0x39B45Cu;
            // 0x39b45c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x39B460u;
        goto label_39b460;
    }
    ctx->pc = 0x39B458u;
    {
        const bool branch_taken_0x39b458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b458) {
            ctx->pc = 0x39B45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B458u;
            // 0x39b45c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B46Cu;
            goto label_39b46c;
        }
    }
    ctx->pc = 0x39B460u;
label_39b460:
    // 0x39b460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b464:
    // 0x39b464: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x39b464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_39b468:
    // 0x39b468: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39b468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39b46c:
    // 0x39b46c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39b46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39b470:
    // 0x39b470: 0x320f809  jalr        $t9
label_39b474:
    if (ctx->pc == 0x39B474u) {
        ctx->pc = 0x39B474u;
            // 0x39b474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B478u;
        goto label_39b478;
    }
    ctx->pc = 0x39B470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B478u);
        ctx->pc = 0x39B474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B470u;
            // 0x39b474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B478u; }
            if (ctx->pc != 0x39B478u) { return; }
        }
        }
    }
    ctx->pc = 0x39B478u;
label_39b478:
    // 0x39b478: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x39b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_39b47c:
    // 0x39b47c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b480:
    // 0x39b480: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x39b480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_39b484:
    // 0x39b484: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x39b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_39b488:
    // 0x39b488: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x39b488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39b48c:
    // 0x39b48c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x39b48cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39b490:
    // 0x39b490: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_39b494:
    if (ctx->pc == 0x39B494u) {
        ctx->pc = 0x39B494u;
            // 0x39b494: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x39B498u;
        goto label_39b498;
    }
    ctx->pc = 0x39B490u;
    {
        const bool branch_taken_0x39b490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b490) {
            ctx->pc = 0x39B494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B490u;
            // 0x39b494: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B4A4u;
            goto label_39b4a4;
        }
    }
    ctx->pc = 0x39B498u;
label_39b498:
    // 0x39b498: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b49c:
    // 0x39b49c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x39b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_39b4a0:
    // 0x39b4a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x39b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_39b4a4:
    // 0x39b4a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4a8:
    // 0x39b4a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x39b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_39b4ac:
    // 0x39b4ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x39b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_39b4b0:
    // 0x39b4b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x39b4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39b4b4:
    // 0x39b4b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x39b4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39b4b8:
    // 0x39b4b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_39b4bc:
    if (ctx->pc == 0x39B4BCu) {
        ctx->pc = 0x39B4C0u;
        goto label_39b4c0;
    }
    ctx->pc = 0x39B4B8u;
    {
        const bool branch_taken_0x39b4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b4b8) {
            ctx->pc = 0x39B4C8u;
            goto label_39b4c8;
        }
    }
    ctx->pc = 0x39B4C0u;
label_39b4c0:
    // 0x39b4c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4c4:
    // 0x39b4c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x39b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_39b4c8:
    // 0x39b4c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4cc:
    // 0x39b4cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x39b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_39b4d0:
    // 0x39b4d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x39b4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39b4d4:
    // 0x39b4d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_39b4d8:
    if (ctx->pc == 0x39B4D8u) {
        ctx->pc = 0x39B4DCu;
        goto label_39b4dc;
    }
    ctx->pc = 0x39B4D4u;
    {
        const bool branch_taken_0x39b4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b4d4) {
            ctx->pc = 0x39B4E4u;
            goto label_39b4e4;
        }
    }
    ctx->pc = 0x39B4DCu;
label_39b4dc:
    // 0x39b4dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4e0:
    // 0x39b4e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x39b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_39b4e4:
    // 0x39b4e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4e8:
    // 0x39b4e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x39b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_39b4ec:
    // 0x39b4ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x39b4ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39b4f0:
    // 0x39b4f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_39b4f4:
    if (ctx->pc == 0x39B4F4u) {
        ctx->pc = 0x39B4F4u;
            // 0x39b4f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x39B4F8u;
        goto label_39b4f8;
    }
    ctx->pc = 0x39B4F0u;
    {
        const bool branch_taken_0x39b4f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b4f0) {
            ctx->pc = 0x39B4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B4F0u;
            // 0x39b4f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B504u;
            goto label_39b504;
        }
    }
    ctx->pc = 0x39B4F8u;
label_39b4f8:
    // 0x39b4f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39b4fc:
    // 0x39b4fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x39b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_39b500:
    // 0x39b500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b504:
    // 0x39b504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b508:
    // 0x39b508: 0x3e00008  jr          $ra
label_39b50c:
    if (ctx->pc == 0x39B50Cu) {
        ctx->pc = 0x39B50Cu;
            // 0x39b50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39B510u;
        goto label_39b510;
    }
    ctx->pc = 0x39B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B508u;
            // 0x39b50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B510u;
label_39b510:
    // 0x39b510: 0x80e6894  j           func_39A250
label_39b514:
    if (ctx->pc == 0x39B514u) {
        ctx->pc = 0x39B514u;
            // 0x39b514: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x39B518u;
        goto label_39b518;
    }
    ctx->pc = 0x39B510u;
    ctx->pc = 0x39B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B510u;
            // 0x39b514: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A250u;
    {
        auto targetFn = runtime->lookupFunction(0x39A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x39B518u;
label_39b518:
    // 0x39b518: 0x0  nop
    ctx->pc = 0x39b518u;
    // NOP
label_39b51c:
    // 0x39b51c: 0x0  nop
    ctx->pc = 0x39b51cu;
    // NOP
label_39b520:
    // 0x39b520: 0x80e69a4  j           func_39A690
label_39b524:
    if (ctx->pc == 0x39B524u) {
        ctx->pc = 0x39B524u;
            // 0x39b524: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x39B528u;
        goto label_39b528;
    }
    ctx->pc = 0x39B520u;
    ctx->pc = 0x39B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B520u;
            // 0x39b524: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A690u;
    {
        auto targetFn = runtime->lookupFunction(0x39A690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x39B528u;
label_39b528:
    // 0x39b528: 0x0  nop
    ctx->pc = 0x39b528u;
    // NOP
label_39b52c:
    // 0x39b52c: 0x0  nop
    ctx->pc = 0x39b52cu;
    // NOP
label_39b530:
    // 0x39b530: 0x80e683c  j           func_39A0F0
label_39b534:
    if (ctx->pc == 0x39B534u) {
        ctx->pc = 0x39B534u;
            // 0x39b534: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x39B538u;
        goto label_39b538;
    }
    ctx->pc = 0x39B530u;
    ctx->pc = 0x39B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B530u;
            // 0x39b534: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A0F0u;
    if (runtime->hasFunction(0x39A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x39A0F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0039A0F0_0x39a0f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x39B538u;
label_39b538:
    // 0x39b538: 0x0  nop
    ctx->pc = 0x39b538u;
    // NOP
label_39b53c:
    // 0x39b53c: 0x0  nop
    ctx->pc = 0x39b53cu;
    // NOP
label_39b540:
    // 0x39b540: 0x80e6818  j           func_39A060
label_39b544:
    if (ctx->pc == 0x39B544u) {
        ctx->pc = 0x39B544u;
            // 0x39b544: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x39B548u;
        goto label_39b548;
    }
    ctx->pc = 0x39B540u;
    ctx->pc = 0x39B544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B540u;
            // 0x39b544: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39A060u;
    {
        auto targetFn = runtime->lookupFunction(0x39A060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x39B548u;
label_39b548:
    // 0x39b548: 0x0  nop
    ctx->pc = 0x39b548u;
    // NOP
label_39b54c:
    // 0x39b54c: 0x0  nop
    ctx->pc = 0x39b54cu;
    // NOP
}
