#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035A5C0
// Address: 0x35a5c0 - 0x35af40
void sub_0035A5C0_0x35a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A5C0_0x35a5c0");
#endif

    switch (ctx->pc) {
        case 0x35a5c0u: goto label_35a5c0;
        case 0x35a5c4u: goto label_35a5c4;
        case 0x35a5c8u: goto label_35a5c8;
        case 0x35a5ccu: goto label_35a5cc;
        case 0x35a5d0u: goto label_35a5d0;
        case 0x35a5d4u: goto label_35a5d4;
        case 0x35a5d8u: goto label_35a5d8;
        case 0x35a5dcu: goto label_35a5dc;
        case 0x35a5e0u: goto label_35a5e0;
        case 0x35a5e4u: goto label_35a5e4;
        case 0x35a5e8u: goto label_35a5e8;
        case 0x35a5ecu: goto label_35a5ec;
        case 0x35a5f0u: goto label_35a5f0;
        case 0x35a5f4u: goto label_35a5f4;
        case 0x35a5f8u: goto label_35a5f8;
        case 0x35a5fcu: goto label_35a5fc;
        case 0x35a600u: goto label_35a600;
        case 0x35a604u: goto label_35a604;
        case 0x35a608u: goto label_35a608;
        case 0x35a60cu: goto label_35a60c;
        case 0x35a610u: goto label_35a610;
        case 0x35a614u: goto label_35a614;
        case 0x35a618u: goto label_35a618;
        case 0x35a61cu: goto label_35a61c;
        case 0x35a620u: goto label_35a620;
        case 0x35a624u: goto label_35a624;
        case 0x35a628u: goto label_35a628;
        case 0x35a62cu: goto label_35a62c;
        case 0x35a630u: goto label_35a630;
        case 0x35a634u: goto label_35a634;
        case 0x35a638u: goto label_35a638;
        case 0x35a63cu: goto label_35a63c;
        case 0x35a640u: goto label_35a640;
        case 0x35a644u: goto label_35a644;
        case 0x35a648u: goto label_35a648;
        case 0x35a64cu: goto label_35a64c;
        case 0x35a650u: goto label_35a650;
        case 0x35a654u: goto label_35a654;
        case 0x35a658u: goto label_35a658;
        case 0x35a65cu: goto label_35a65c;
        case 0x35a660u: goto label_35a660;
        case 0x35a664u: goto label_35a664;
        case 0x35a668u: goto label_35a668;
        case 0x35a66cu: goto label_35a66c;
        case 0x35a670u: goto label_35a670;
        case 0x35a674u: goto label_35a674;
        case 0x35a678u: goto label_35a678;
        case 0x35a67cu: goto label_35a67c;
        case 0x35a680u: goto label_35a680;
        case 0x35a684u: goto label_35a684;
        case 0x35a688u: goto label_35a688;
        case 0x35a68cu: goto label_35a68c;
        case 0x35a690u: goto label_35a690;
        case 0x35a694u: goto label_35a694;
        case 0x35a698u: goto label_35a698;
        case 0x35a69cu: goto label_35a69c;
        case 0x35a6a0u: goto label_35a6a0;
        case 0x35a6a4u: goto label_35a6a4;
        case 0x35a6a8u: goto label_35a6a8;
        case 0x35a6acu: goto label_35a6ac;
        case 0x35a6b0u: goto label_35a6b0;
        case 0x35a6b4u: goto label_35a6b4;
        case 0x35a6b8u: goto label_35a6b8;
        case 0x35a6bcu: goto label_35a6bc;
        case 0x35a6c0u: goto label_35a6c0;
        case 0x35a6c4u: goto label_35a6c4;
        case 0x35a6c8u: goto label_35a6c8;
        case 0x35a6ccu: goto label_35a6cc;
        case 0x35a6d0u: goto label_35a6d0;
        case 0x35a6d4u: goto label_35a6d4;
        case 0x35a6d8u: goto label_35a6d8;
        case 0x35a6dcu: goto label_35a6dc;
        case 0x35a6e0u: goto label_35a6e0;
        case 0x35a6e4u: goto label_35a6e4;
        case 0x35a6e8u: goto label_35a6e8;
        case 0x35a6ecu: goto label_35a6ec;
        case 0x35a6f0u: goto label_35a6f0;
        case 0x35a6f4u: goto label_35a6f4;
        case 0x35a6f8u: goto label_35a6f8;
        case 0x35a6fcu: goto label_35a6fc;
        case 0x35a700u: goto label_35a700;
        case 0x35a704u: goto label_35a704;
        case 0x35a708u: goto label_35a708;
        case 0x35a70cu: goto label_35a70c;
        case 0x35a710u: goto label_35a710;
        case 0x35a714u: goto label_35a714;
        case 0x35a718u: goto label_35a718;
        case 0x35a71cu: goto label_35a71c;
        case 0x35a720u: goto label_35a720;
        case 0x35a724u: goto label_35a724;
        case 0x35a728u: goto label_35a728;
        case 0x35a72cu: goto label_35a72c;
        case 0x35a730u: goto label_35a730;
        case 0x35a734u: goto label_35a734;
        case 0x35a738u: goto label_35a738;
        case 0x35a73cu: goto label_35a73c;
        case 0x35a740u: goto label_35a740;
        case 0x35a744u: goto label_35a744;
        case 0x35a748u: goto label_35a748;
        case 0x35a74cu: goto label_35a74c;
        case 0x35a750u: goto label_35a750;
        case 0x35a754u: goto label_35a754;
        case 0x35a758u: goto label_35a758;
        case 0x35a75cu: goto label_35a75c;
        case 0x35a760u: goto label_35a760;
        case 0x35a764u: goto label_35a764;
        case 0x35a768u: goto label_35a768;
        case 0x35a76cu: goto label_35a76c;
        case 0x35a770u: goto label_35a770;
        case 0x35a774u: goto label_35a774;
        case 0x35a778u: goto label_35a778;
        case 0x35a77cu: goto label_35a77c;
        case 0x35a780u: goto label_35a780;
        case 0x35a784u: goto label_35a784;
        case 0x35a788u: goto label_35a788;
        case 0x35a78cu: goto label_35a78c;
        case 0x35a790u: goto label_35a790;
        case 0x35a794u: goto label_35a794;
        case 0x35a798u: goto label_35a798;
        case 0x35a79cu: goto label_35a79c;
        case 0x35a7a0u: goto label_35a7a0;
        case 0x35a7a4u: goto label_35a7a4;
        case 0x35a7a8u: goto label_35a7a8;
        case 0x35a7acu: goto label_35a7ac;
        case 0x35a7b0u: goto label_35a7b0;
        case 0x35a7b4u: goto label_35a7b4;
        case 0x35a7b8u: goto label_35a7b8;
        case 0x35a7bcu: goto label_35a7bc;
        case 0x35a7c0u: goto label_35a7c0;
        case 0x35a7c4u: goto label_35a7c4;
        case 0x35a7c8u: goto label_35a7c8;
        case 0x35a7ccu: goto label_35a7cc;
        case 0x35a7d0u: goto label_35a7d0;
        case 0x35a7d4u: goto label_35a7d4;
        case 0x35a7d8u: goto label_35a7d8;
        case 0x35a7dcu: goto label_35a7dc;
        case 0x35a7e0u: goto label_35a7e0;
        case 0x35a7e4u: goto label_35a7e4;
        case 0x35a7e8u: goto label_35a7e8;
        case 0x35a7ecu: goto label_35a7ec;
        case 0x35a7f0u: goto label_35a7f0;
        case 0x35a7f4u: goto label_35a7f4;
        case 0x35a7f8u: goto label_35a7f8;
        case 0x35a7fcu: goto label_35a7fc;
        case 0x35a800u: goto label_35a800;
        case 0x35a804u: goto label_35a804;
        case 0x35a808u: goto label_35a808;
        case 0x35a80cu: goto label_35a80c;
        case 0x35a810u: goto label_35a810;
        case 0x35a814u: goto label_35a814;
        case 0x35a818u: goto label_35a818;
        case 0x35a81cu: goto label_35a81c;
        case 0x35a820u: goto label_35a820;
        case 0x35a824u: goto label_35a824;
        case 0x35a828u: goto label_35a828;
        case 0x35a82cu: goto label_35a82c;
        case 0x35a830u: goto label_35a830;
        case 0x35a834u: goto label_35a834;
        case 0x35a838u: goto label_35a838;
        case 0x35a83cu: goto label_35a83c;
        case 0x35a840u: goto label_35a840;
        case 0x35a844u: goto label_35a844;
        case 0x35a848u: goto label_35a848;
        case 0x35a84cu: goto label_35a84c;
        case 0x35a850u: goto label_35a850;
        case 0x35a854u: goto label_35a854;
        case 0x35a858u: goto label_35a858;
        case 0x35a85cu: goto label_35a85c;
        case 0x35a860u: goto label_35a860;
        case 0x35a864u: goto label_35a864;
        case 0x35a868u: goto label_35a868;
        case 0x35a86cu: goto label_35a86c;
        case 0x35a870u: goto label_35a870;
        case 0x35a874u: goto label_35a874;
        case 0x35a878u: goto label_35a878;
        case 0x35a87cu: goto label_35a87c;
        case 0x35a880u: goto label_35a880;
        case 0x35a884u: goto label_35a884;
        case 0x35a888u: goto label_35a888;
        case 0x35a88cu: goto label_35a88c;
        case 0x35a890u: goto label_35a890;
        case 0x35a894u: goto label_35a894;
        case 0x35a898u: goto label_35a898;
        case 0x35a89cu: goto label_35a89c;
        case 0x35a8a0u: goto label_35a8a0;
        case 0x35a8a4u: goto label_35a8a4;
        case 0x35a8a8u: goto label_35a8a8;
        case 0x35a8acu: goto label_35a8ac;
        case 0x35a8b0u: goto label_35a8b0;
        case 0x35a8b4u: goto label_35a8b4;
        case 0x35a8b8u: goto label_35a8b8;
        case 0x35a8bcu: goto label_35a8bc;
        case 0x35a8c0u: goto label_35a8c0;
        case 0x35a8c4u: goto label_35a8c4;
        case 0x35a8c8u: goto label_35a8c8;
        case 0x35a8ccu: goto label_35a8cc;
        case 0x35a8d0u: goto label_35a8d0;
        case 0x35a8d4u: goto label_35a8d4;
        case 0x35a8d8u: goto label_35a8d8;
        case 0x35a8dcu: goto label_35a8dc;
        case 0x35a8e0u: goto label_35a8e0;
        case 0x35a8e4u: goto label_35a8e4;
        case 0x35a8e8u: goto label_35a8e8;
        case 0x35a8ecu: goto label_35a8ec;
        case 0x35a8f0u: goto label_35a8f0;
        case 0x35a8f4u: goto label_35a8f4;
        case 0x35a8f8u: goto label_35a8f8;
        case 0x35a8fcu: goto label_35a8fc;
        case 0x35a900u: goto label_35a900;
        case 0x35a904u: goto label_35a904;
        case 0x35a908u: goto label_35a908;
        case 0x35a90cu: goto label_35a90c;
        case 0x35a910u: goto label_35a910;
        case 0x35a914u: goto label_35a914;
        case 0x35a918u: goto label_35a918;
        case 0x35a91cu: goto label_35a91c;
        case 0x35a920u: goto label_35a920;
        case 0x35a924u: goto label_35a924;
        case 0x35a928u: goto label_35a928;
        case 0x35a92cu: goto label_35a92c;
        case 0x35a930u: goto label_35a930;
        case 0x35a934u: goto label_35a934;
        case 0x35a938u: goto label_35a938;
        case 0x35a93cu: goto label_35a93c;
        case 0x35a940u: goto label_35a940;
        case 0x35a944u: goto label_35a944;
        case 0x35a948u: goto label_35a948;
        case 0x35a94cu: goto label_35a94c;
        case 0x35a950u: goto label_35a950;
        case 0x35a954u: goto label_35a954;
        case 0x35a958u: goto label_35a958;
        case 0x35a95cu: goto label_35a95c;
        case 0x35a960u: goto label_35a960;
        case 0x35a964u: goto label_35a964;
        case 0x35a968u: goto label_35a968;
        case 0x35a96cu: goto label_35a96c;
        case 0x35a970u: goto label_35a970;
        case 0x35a974u: goto label_35a974;
        case 0x35a978u: goto label_35a978;
        case 0x35a97cu: goto label_35a97c;
        case 0x35a980u: goto label_35a980;
        case 0x35a984u: goto label_35a984;
        case 0x35a988u: goto label_35a988;
        case 0x35a98cu: goto label_35a98c;
        case 0x35a990u: goto label_35a990;
        case 0x35a994u: goto label_35a994;
        case 0x35a998u: goto label_35a998;
        case 0x35a99cu: goto label_35a99c;
        case 0x35a9a0u: goto label_35a9a0;
        case 0x35a9a4u: goto label_35a9a4;
        case 0x35a9a8u: goto label_35a9a8;
        case 0x35a9acu: goto label_35a9ac;
        case 0x35a9b0u: goto label_35a9b0;
        case 0x35a9b4u: goto label_35a9b4;
        case 0x35a9b8u: goto label_35a9b8;
        case 0x35a9bcu: goto label_35a9bc;
        case 0x35a9c0u: goto label_35a9c0;
        case 0x35a9c4u: goto label_35a9c4;
        case 0x35a9c8u: goto label_35a9c8;
        case 0x35a9ccu: goto label_35a9cc;
        case 0x35a9d0u: goto label_35a9d0;
        case 0x35a9d4u: goto label_35a9d4;
        case 0x35a9d8u: goto label_35a9d8;
        case 0x35a9dcu: goto label_35a9dc;
        case 0x35a9e0u: goto label_35a9e0;
        case 0x35a9e4u: goto label_35a9e4;
        case 0x35a9e8u: goto label_35a9e8;
        case 0x35a9ecu: goto label_35a9ec;
        case 0x35a9f0u: goto label_35a9f0;
        case 0x35a9f4u: goto label_35a9f4;
        case 0x35a9f8u: goto label_35a9f8;
        case 0x35a9fcu: goto label_35a9fc;
        case 0x35aa00u: goto label_35aa00;
        case 0x35aa04u: goto label_35aa04;
        case 0x35aa08u: goto label_35aa08;
        case 0x35aa0cu: goto label_35aa0c;
        case 0x35aa10u: goto label_35aa10;
        case 0x35aa14u: goto label_35aa14;
        case 0x35aa18u: goto label_35aa18;
        case 0x35aa1cu: goto label_35aa1c;
        case 0x35aa20u: goto label_35aa20;
        case 0x35aa24u: goto label_35aa24;
        case 0x35aa28u: goto label_35aa28;
        case 0x35aa2cu: goto label_35aa2c;
        case 0x35aa30u: goto label_35aa30;
        case 0x35aa34u: goto label_35aa34;
        case 0x35aa38u: goto label_35aa38;
        case 0x35aa3cu: goto label_35aa3c;
        case 0x35aa40u: goto label_35aa40;
        case 0x35aa44u: goto label_35aa44;
        case 0x35aa48u: goto label_35aa48;
        case 0x35aa4cu: goto label_35aa4c;
        case 0x35aa50u: goto label_35aa50;
        case 0x35aa54u: goto label_35aa54;
        case 0x35aa58u: goto label_35aa58;
        case 0x35aa5cu: goto label_35aa5c;
        case 0x35aa60u: goto label_35aa60;
        case 0x35aa64u: goto label_35aa64;
        case 0x35aa68u: goto label_35aa68;
        case 0x35aa6cu: goto label_35aa6c;
        case 0x35aa70u: goto label_35aa70;
        case 0x35aa74u: goto label_35aa74;
        case 0x35aa78u: goto label_35aa78;
        case 0x35aa7cu: goto label_35aa7c;
        case 0x35aa80u: goto label_35aa80;
        case 0x35aa84u: goto label_35aa84;
        case 0x35aa88u: goto label_35aa88;
        case 0x35aa8cu: goto label_35aa8c;
        case 0x35aa90u: goto label_35aa90;
        case 0x35aa94u: goto label_35aa94;
        case 0x35aa98u: goto label_35aa98;
        case 0x35aa9cu: goto label_35aa9c;
        case 0x35aaa0u: goto label_35aaa0;
        case 0x35aaa4u: goto label_35aaa4;
        case 0x35aaa8u: goto label_35aaa8;
        case 0x35aaacu: goto label_35aaac;
        case 0x35aab0u: goto label_35aab0;
        case 0x35aab4u: goto label_35aab4;
        case 0x35aab8u: goto label_35aab8;
        case 0x35aabcu: goto label_35aabc;
        case 0x35aac0u: goto label_35aac0;
        case 0x35aac4u: goto label_35aac4;
        case 0x35aac8u: goto label_35aac8;
        case 0x35aaccu: goto label_35aacc;
        case 0x35aad0u: goto label_35aad0;
        case 0x35aad4u: goto label_35aad4;
        case 0x35aad8u: goto label_35aad8;
        case 0x35aadcu: goto label_35aadc;
        case 0x35aae0u: goto label_35aae0;
        case 0x35aae4u: goto label_35aae4;
        case 0x35aae8u: goto label_35aae8;
        case 0x35aaecu: goto label_35aaec;
        case 0x35aaf0u: goto label_35aaf0;
        case 0x35aaf4u: goto label_35aaf4;
        case 0x35aaf8u: goto label_35aaf8;
        case 0x35aafcu: goto label_35aafc;
        case 0x35ab00u: goto label_35ab00;
        case 0x35ab04u: goto label_35ab04;
        case 0x35ab08u: goto label_35ab08;
        case 0x35ab0cu: goto label_35ab0c;
        case 0x35ab10u: goto label_35ab10;
        case 0x35ab14u: goto label_35ab14;
        case 0x35ab18u: goto label_35ab18;
        case 0x35ab1cu: goto label_35ab1c;
        case 0x35ab20u: goto label_35ab20;
        case 0x35ab24u: goto label_35ab24;
        case 0x35ab28u: goto label_35ab28;
        case 0x35ab2cu: goto label_35ab2c;
        case 0x35ab30u: goto label_35ab30;
        case 0x35ab34u: goto label_35ab34;
        case 0x35ab38u: goto label_35ab38;
        case 0x35ab3cu: goto label_35ab3c;
        case 0x35ab40u: goto label_35ab40;
        case 0x35ab44u: goto label_35ab44;
        case 0x35ab48u: goto label_35ab48;
        case 0x35ab4cu: goto label_35ab4c;
        case 0x35ab50u: goto label_35ab50;
        case 0x35ab54u: goto label_35ab54;
        case 0x35ab58u: goto label_35ab58;
        case 0x35ab5cu: goto label_35ab5c;
        case 0x35ab60u: goto label_35ab60;
        case 0x35ab64u: goto label_35ab64;
        case 0x35ab68u: goto label_35ab68;
        case 0x35ab6cu: goto label_35ab6c;
        case 0x35ab70u: goto label_35ab70;
        case 0x35ab74u: goto label_35ab74;
        case 0x35ab78u: goto label_35ab78;
        case 0x35ab7cu: goto label_35ab7c;
        case 0x35ab80u: goto label_35ab80;
        case 0x35ab84u: goto label_35ab84;
        case 0x35ab88u: goto label_35ab88;
        case 0x35ab8cu: goto label_35ab8c;
        case 0x35ab90u: goto label_35ab90;
        case 0x35ab94u: goto label_35ab94;
        case 0x35ab98u: goto label_35ab98;
        case 0x35ab9cu: goto label_35ab9c;
        case 0x35aba0u: goto label_35aba0;
        case 0x35aba4u: goto label_35aba4;
        case 0x35aba8u: goto label_35aba8;
        case 0x35abacu: goto label_35abac;
        case 0x35abb0u: goto label_35abb0;
        case 0x35abb4u: goto label_35abb4;
        case 0x35abb8u: goto label_35abb8;
        case 0x35abbcu: goto label_35abbc;
        case 0x35abc0u: goto label_35abc0;
        case 0x35abc4u: goto label_35abc4;
        case 0x35abc8u: goto label_35abc8;
        case 0x35abccu: goto label_35abcc;
        case 0x35abd0u: goto label_35abd0;
        case 0x35abd4u: goto label_35abd4;
        case 0x35abd8u: goto label_35abd8;
        case 0x35abdcu: goto label_35abdc;
        case 0x35abe0u: goto label_35abe0;
        case 0x35abe4u: goto label_35abe4;
        case 0x35abe8u: goto label_35abe8;
        case 0x35abecu: goto label_35abec;
        case 0x35abf0u: goto label_35abf0;
        case 0x35abf4u: goto label_35abf4;
        case 0x35abf8u: goto label_35abf8;
        case 0x35abfcu: goto label_35abfc;
        case 0x35ac00u: goto label_35ac00;
        case 0x35ac04u: goto label_35ac04;
        case 0x35ac08u: goto label_35ac08;
        case 0x35ac0cu: goto label_35ac0c;
        case 0x35ac10u: goto label_35ac10;
        case 0x35ac14u: goto label_35ac14;
        case 0x35ac18u: goto label_35ac18;
        case 0x35ac1cu: goto label_35ac1c;
        case 0x35ac20u: goto label_35ac20;
        case 0x35ac24u: goto label_35ac24;
        case 0x35ac28u: goto label_35ac28;
        case 0x35ac2cu: goto label_35ac2c;
        case 0x35ac30u: goto label_35ac30;
        case 0x35ac34u: goto label_35ac34;
        case 0x35ac38u: goto label_35ac38;
        case 0x35ac3cu: goto label_35ac3c;
        case 0x35ac40u: goto label_35ac40;
        case 0x35ac44u: goto label_35ac44;
        case 0x35ac48u: goto label_35ac48;
        case 0x35ac4cu: goto label_35ac4c;
        case 0x35ac50u: goto label_35ac50;
        case 0x35ac54u: goto label_35ac54;
        case 0x35ac58u: goto label_35ac58;
        case 0x35ac5cu: goto label_35ac5c;
        case 0x35ac60u: goto label_35ac60;
        case 0x35ac64u: goto label_35ac64;
        case 0x35ac68u: goto label_35ac68;
        case 0x35ac6cu: goto label_35ac6c;
        case 0x35ac70u: goto label_35ac70;
        case 0x35ac74u: goto label_35ac74;
        case 0x35ac78u: goto label_35ac78;
        case 0x35ac7cu: goto label_35ac7c;
        case 0x35ac80u: goto label_35ac80;
        case 0x35ac84u: goto label_35ac84;
        case 0x35ac88u: goto label_35ac88;
        case 0x35ac8cu: goto label_35ac8c;
        case 0x35ac90u: goto label_35ac90;
        case 0x35ac94u: goto label_35ac94;
        case 0x35ac98u: goto label_35ac98;
        case 0x35ac9cu: goto label_35ac9c;
        case 0x35aca0u: goto label_35aca0;
        case 0x35aca4u: goto label_35aca4;
        case 0x35aca8u: goto label_35aca8;
        case 0x35acacu: goto label_35acac;
        case 0x35acb0u: goto label_35acb0;
        case 0x35acb4u: goto label_35acb4;
        case 0x35acb8u: goto label_35acb8;
        case 0x35acbcu: goto label_35acbc;
        case 0x35acc0u: goto label_35acc0;
        case 0x35acc4u: goto label_35acc4;
        case 0x35acc8u: goto label_35acc8;
        case 0x35acccu: goto label_35accc;
        case 0x35acd0u: goto label_35acd0;
        case 0x35acd4u: goto label_35acd4;
        case 0x35acd8u: goto label_35acd8;
        case 0x35acdcu: goto label_35acdc;
        case 0x35ace0u: goto label_35ace0;
        case 0x35ace4u: goto label_35ace4;
        case 0x35ace8u: goto label_35ace8;
        case 0x35acecu: goto label_35acec;
        case 0x35acf0u: goto label_35acf0;
        case 0x35acf4u: goto label_35acf4;
        case 0x35acf8u: goto label_35acf8;
        case 0x35acfcu: goto label_35acfc;
        case 0x35ad00u: goto label_35ad00;
        case 0x35ad04u: goto label_35ad04;
        case 0x35ad08u: goto label_35ad08;
        case 0x35ad0cu: goto label_35ad0c;
        case 0x35ad10u: goto label_35ad10;
        case 0x35ad14u: goto label_35ad14;
        case 0x35ad18u: goto label_35ad18;
        case 0x35ad1cu: goto label_35ad1c;
        case 0x35ad20u: goto label_35ad20;
        case 0x35ad24u: goto label_35ad24;
        case 0x35ad28u: goto label_35ad28;
        case 0x35ad2cu: goto label_35ad2c;
        case 0x35ad30u: goto label_35ad30;
        case 0x35ad34u: goto label_35ad34;
        case 0x35ad38u: goto label_35ad38;
        case 0x35ad3cu: goto label_35ad3c;
        case 0x35ad40u: goto label_35ad40;
        case 0x35ad44u: goto label_35ad44;
        case 0x35ad48u: goto label_35ad48;
        case 0x35ad4cu: goto label_35ad4c;
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad54u: goto label_35ad54;
        case 0x35ad58u: goto label_35ad58;
        case 0x35ad5cu: goto label_35ad5c;
        case 0x35ad60u: goto label_35ad60;
        case 0x35ad64u: goto label_35ad64;
        case 0x35ad68u: goto label_35ad68;
        case 0x35ad6cu: goto label_35ad6c;
        case 0x35ad70u: goto label_35ad70;
        case 0x35ad74u: goto label_35ad74;
        case 0x35ad78u: goto label_35ad78;
        case 0x35ad7cu: goto label_35ad7c;
        case 0x35ad80u: goto label_35ad80;
        case 0x35ad84u: goto label_35ad84;
        case 0x35ad88u: goto label_35ad88;
        case 0x35ad8cu: goto label_35ad8c;
        case 0x35ad90u: goto label_35ad90;
        case 0x35ad94u: goto label_35ad94;
        case 0x35ad98u: goto label_35ad98;
        case 0x35ad9cu: goto label_35ad9c;
        case 0x35ada0u: goto label_35ada0;
        case 0x35ada4u: goto label_35ada4;
        case 0x35ada8u: goto label_35ada8;
        case 0x35adacu: goto label_35adac;
        case 0x35adb0u: goto label_35adb0;
        case 0x35adb4u: goto label_35adb4;
        case 0x35adb8u: goto label_35adb8;
        case 0x35adbcu: goto label_35adbc;
        case 0x35adc0u: goto label_35adc0;
        case 0x35adc4u: goto label_35adc4;
        case 0x35adc8u: goto label_35adc8;
        case 0x35adccu: goto label_35adcc;
        case 0x35add0u: goto label_35add0;
        case 0x35add4u: goto label_35add4;
        case 0x35add8u: goto label_35add8;
        case 0x35addcu: goto label_35addc;
        case 0x35ade0u: goto label_35ade0;
        case 0x35ade4u: goto label_35ade4;
        case 0x35ade8u: goto label_35ade8;
        case 0x35adecu: goto label_35adec;
        case 0x35adf0u: goto label_35adf0;
        case 0x35adf4u: goto label_35adf4;
        case 0x35adf8u: goto label_35adf8;
        case 0x35adfcu: goto label_35adfc;
        case 0x35ae00u: goto label_35ae00;
        case 0x35ae04u: goto label_35ae04;
        case 0x35ae08u: goto label_35ae08;
        case 0x35ae0cu: goto label_35ae0c;
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae14u: goto label_35ae14;
        case 0x35ae18u: goto label_35ae18;
        case 0x35ae1cu: goto label_35ae1c;
        case 0x35ae20u: goto label_35ae20;
        case 0x35ae24u: goto label_35ae24;
        case 0x35ae28u: goto label_35ae28;
        case 0x35ae2cu: goto label_35ae2c;
        case 0x35ae30u: goto label_35ae30;
        case 0x35ae34u: goto label_35ae34;
        case 0x35ae38u: goto label_35ae38;
        case 0x35ae3cu: goto label_35ae3c;
        case 0x35ae40u: goto label_35ae40;
        case 0x35ae44u: goto label_35ae44;
        case 0x35ae48u: goto label_35ae48;
        case 0x35ae4cu: goto label_35ae4c;
        case 0x35ae50u: goto label_35ae50;
        case 0x35ae54u: goto label_35ae54;
        case 0x35ae58u: goto label_35ae58;
        case 0x35ae5cu: goto label_35ae5c;
        case 0x35ae60u: goto label_35ae60;
        case 0x35ae64u: goto label_35ae64;
        case 0x35ae68u: goto label_35ae68;
        case 0x35ae6cu: goto label_35ae6c;
        case 0x35ae70u: goto label_35ae70;
        case 0x35ae74u: goto label_35ae74;
        case 0x35ae78u: goto label_35ae78;
        case 0x35ae7cu: goto label_35ae7c;
        case 0x35ae80u: goto label_35ae80;
        case 0x35ae84u: goto label_35ae84;
        case 0x35ae88u: goto label_35ae88;
        case 0x35ae8cu: goto label_35ae8c;
        case 0x35ae90u: goto label_35ae90;
        case 0x35ae94u: goto label_35ae94;
        case 0x35ae98u: goto label_35ae98;
        case 0x35ae9cu: goto label_35ae9c;
        case 0x35aea0u: goto label_35aea0;
        case 0x35aea4u: goto label_35aea4;
        case 0x35aea8u: goto label_35aea8;
        case 0x35aeacu: goto label_35aeac;
        case 0x35aeb0u: goto label_35aeb0;
        case 0x35aeb4u: goto label_35aeb4;
        case 0x35aeb8u: goto label_35aeb8;
        case 0x35aebcu: goto label_35aebc;
        case 0x35aec0u: goto label_35aec0;
        case 0x35aec4u: goto label_35aec4;
        case 0x35aec8u: goto label_35aec8;
        case 0x35aeccu: goto label_35aecc;
        case 0x35aed0u: goto label_35aed0;
        case 0x35aed4u: goto label_35aed4;
        case 0x35aed8u: goto label_35aed8;
        case 0x35aedcu: goto label_35aedc;
        case 0x35aee0u: goto label_35aee0;
        case 0x35aee4u: goto label_35aee4;
        case 0x35aee8u: goto label_35aee8;
        case 0x35aeecu: goto label_35aeec;
        case 0x35aef0u: goto label_35aef0;
        case 0x35aef4u: goto label_35aef4;
        case 0x35aef8u: goto label_35aef8;
        case 0x35aefcu: goto label_35aefc;
        case 0x35af00u: goto label_35af00;
        case 0x35af04u: goto label_35af04;
        case 0x35af08u: goto label_35af08;
        case 0x35af0cu: goto label_35af0c;
        case 0x35af10u: goto label_35af10;
        case 0x35af14u: goto label_35af14;
        case 0x35af18u: goto label_35af18;
        case 0x35af1cu: goto label_35af1c;
        case 0x35af20u: goto label_35af20;
        case 0x35af24u: goto label_35af24;
        case 0x35af28u: goto label_35af28;
        case 0x35af2cu: goto label_35af2c;
        case 0x35af30u: goto label_35af30;
        case 0x35af34u: goto label_35af34;
        case 0x35af38u: goto label_35af38;
        case 0x35af3cu: goto label_35af3c;
        default: break;
    }

    ctx->pc = 0x35a5c0u;

label_35a5c0:
    // 0x35a5c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_35a5c4:
    // 0x35a5c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_35a5c8:
    // 0x35a5c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35a5cc:
    // 0x35a5cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35a5d0:
    // 0x35a5d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35a5d4:
    // 0x35a5d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35a5d8:
    // 0x35a5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35a5dc:
    // 0x35a5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35a5e0:
    // 0x35a5e0: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x35a5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35a5e4:
    // 0x35a5e4: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_35a5e8:
    if (ctx->pc == 0x35A5E8u) {
        ctx->pc = 0x35A5E8u;
            // 0x35a5e8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A5ECu;
        goto label_35a5ec;
    }
    ctx->pc = 0x35A5E4u;
    {
        const bool branch_taken_0x35a5e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A5E4u;
            // 0x35a5e8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a5e4) {
            ctx->pc = 0x35A6C0u;
            goto label_35a6c0;
        }
    }
    ctx->pc = 0x35A5ECu;
label_35a5ec:
    // 0x35a5ec: 0x26b36ac8  addiu       $s3, $s5, 0x6AC8
    ctx->pc = 0x35a5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 27336));
label_35a5f0:
    // 0x35a5f0: 0xc0b645c  jal         func_2D9170
label_35a5f4:
    if (ctx->pc == 0x35A5F4u) {
        ctx->pc = 0x35A5F4u;
            // 0x35a5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A5F8u;
        goto label_35a5f8;
    }
    ctx->pc = 0x35A5F0u;
    SET_GPR_U32(ctx, 31, 0x35A5F8u);
    ctx->pc = 0x35A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A5F0u;
            // 0x35a5f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9170u;
    if (runtime->hasFunction(0x2D9170u)) {
        auto targetFn = runtime->lookupFunction(0x2D9170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A5F8u; }
        if (ctx->pc != 0x35A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9170_0x2d9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A5F8u; }
        if (ctx->pc != 0x35A5F8u) { return; }
    }
    ctx->pc = 0x35A5F8u;
label_35a5f8:
    // 0x35a5f8: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x35a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_35a5fc:
    // 0x35a5fc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_35a600:
    // 0x35a600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a604:
    // 0x35a604: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35a604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a608:
    // 0x35a608: 0xc04a576  jal         func_1295D8
label_35a60c:
    if (ctx->pc == 0x35A60Cu) {
        ctx->pc = 0x35A60Cu;
            // 0x35a60c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x35A610u;
        goto label_35a610;
    }
    ctx->pc = 0x35A608u;
    SET_GPR_U32(ctx, 31, 0x35A610u);
    ctx->pc = 0x35A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A608u;
            // 0x35a60c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A610u; }
        if (ctx->pc != 0x35A610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A610u; }
        if (ctx->pc != 0x35A610u) { return; }
    }
    ctx->pc = 0x35A610u;
label_35a610:
    // 0x35a610: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x35a610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a614:
    // 0x35a614: 0xa7a0007c  sh          $zero, 0x7C($sp)
    ctx->pc = 0x35a614u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 0));
label_35a618:
    // 0x35a618: 0xa3b4007e  sb          $s4, 0x7E($sp)
    ctx->pc = 0x35a618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 20));
label_35a61c:
    // 0x35a61c: 0x64120004  daddiu      $s2, $zero, 0x4
    ctx->pc = 0x35a61cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_35a620:
    // 0x35a620: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x35a620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_35a624:
    // 0x35a624: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x35a624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_35a628:
    // 0x35a628: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x35a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_35a62c:
    // 0x35a62c: 0x93a3007f  lbu         $v1, 0x7F($sp)
    ctx->pc = 0x35a62cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_35a630:
    // 0x35a630: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_35a634:
    // 0x35a634: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x35a634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a638:
    // 0x35a638: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x35a638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_35a63c:
    // 0x35a63c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_35a640:
    if (ctx->pc == 0x35A640u) {
        ctx->pc = 0x35A644u;
        goto label_35a644;
    }
    ctx->pc = 0x35A63Cu;
    {
        const bool branch_taken_0x35a63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a63c) {
            ctx->pc = 0x35A658u;
            goto label_35a658;
        }
    }
    ctx->pc = 0x35A644u;
label_35a644:
    // 0x35a644: 0x93a2007e  lbu         $v0, 0x7E($sp)
    ctx->pc = 0x35a644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 126)));
label_35a648:
    // 0x35a648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35a64c:
    // 0x35a64c: 0x10000010  b           . + 4 + (0x10 << 2)
label_35a650:
    if (ctx->pc == 0x35A650u) {
        ctx->pc = 0x35A650u;
            // 0x35a650: 0xa3a2007e  sb          $v0, 0x7E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x35A654u;
        goto label_35a654;
    }
    ctx->pc = 0x35A64Cu;
    {
        const bool branch_taken_0x35a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A64Cu;
            // 0x35a650: 0xa3a2007e  sb          $v0, 0x7E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a64c) {
            ctx->pc = 0x35A690u;
            goto label_35a690;
        }
    }
    ctx->pc = 0x35A654u;
label_35a654:
    // 0x35a654: 0x0  nop
    ctx->pc = 0x35a654u;
    // NOP
label_35a658:
    // 0x35a658: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_35a65c:
    // 0x35a65c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x35a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_35a660:
    // 0x35a660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35a664:
    // 0x35a664: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a668:
    // 0x35a668: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x35a668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_35a66c:
    // 0x35a66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35a670:
    // 0x35a670: 0xc0d72d0  jal         func_35CB40
label_35a674:
    if (ctx->pc == 0x35A674u) {
        ctx->pc = 0x35A674u;
            // 0x35a674: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35A678u;
        goto label_35a678;
    }
    ctx->pc = 0x35A670u;
    SET_GPR_U32(ctx, 31, 0x35A678u);
    ctx->pc = 0x35A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A670u;
            // 0x35a674: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35CB40u;
    if (runtime->hasFunction(0x35CB40u)) {
        auto targetFn = runtime->lookupFunction(0x35CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A678u; }
        if (ctx->pc != 0x35A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035CB40_0x35cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A678u; }
        if (ctx->pc != 0x35A678u) { return; }
    }
    ctx->pc = 0x35A678u;
label_35a678:
    // 0x35a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a67c:
    // 0x35a67c: 0xa7b4007c  sh          $s4, 0x7C($sp)
    ctx->pc = 0x35a67cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 20));
label_35a680:
    // 0x35a680: 0xa3a2007e  sb          $v0, 0x7E($sp)
    ctx->pc = 0x35a680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
label_35a684:
    // 0x35a684: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x35a684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_35a688:
    // 0x35a688: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x35a688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_35a68c:
    // 0x35a68c: 0x0  nop
    ctx->pc = 0x35a68cu;
    // NOP
label_35a690:
    // 0x35a690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35a690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_35a694:
    // 0x35a694: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x35a694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_35a698:
    // 0x35a698: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_35a69c:
    if (ctx->pc == 0x35A69Cu) {
        ctx->pc = 0x35A69Cu;
            // 0x35a69c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x35A6A0u;
        goto label_35a6a0;
    }
    ctx->pc = 0x35A698u;
    {
        const bool branch_taken_0x35a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A698u;
            // 0x35a69c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a698) {
            ctx->pc = 0x35A628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a628;
        }
    }
    ctx->pc = 0x35A6A0u;
label_35a6a0:
    // 0x35a6a0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x35a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_35a6a4:
    // 0x35a6a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35a6a8:
    // 0x35a6a8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x35a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_35a6ac:
    // 0x35a6ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a6b0:
    // 0x35a6b0: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x35a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_35a6b4:
    // 0x35a6b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35a6b8:
    // 0x35a6b8: 0xc0d72d0  jal         func_35CB40
label_35a6bc:
    if (ctx->pc == 0x35A6BCu) {
        ctx->pc = 0x35A6BCu;
            // 0x35a6bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35A6C0u;
        goto label_35a6c0;
    }
    ctx->pc = 0x35A6B8u;
    SET_GPR_U32(ctx, 31, 0x35A6C0u);
    ctx->pc = 0x35A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A6B8u;
            // 0x35a6bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35CB40u;
    if (runtime->hasFunction(0x35CB40u)) {
        auto targetFn = runtime->lookupFunction(0x35CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A6C0u; }
        if (ctx->pc != 0x35A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035CB40_0x35cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A6C0u; }
        if (ctx->pc != 0x35A6C0u) { return; }
    }
    ctx->pc = 0x35A6C0u;
label_35a6c0:
    // 0x35a6c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_35a6c4:
    // 0x35a6c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35a6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35a6c8:
    // 0x35a6c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35a6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35a6cc:
    // 0x35a6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35a6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35a6d0:
    // 0x35a6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35a6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35a6d4:
    // 0x35a6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35a6d8:
    // 0x35a6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a6dc:
    // 0x35a6dc: 0x3e00008  jr          $ra
label_35a6e0:
    if (ctx->pc == 0x35A6E0u) {
        ctx->pc = 0x35A6E0u;
            // 0x35a6e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x35A6E4u;
        goto label_35a6e4;
    }
    ctx->pc = 0x35A6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A6DCu;
            // 0x35a6e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A6E4u;
label_35a6e4:
    // 0x35a6e4: 0x0  nop
    ctx->pc = 0x35a6e4u;
    // NOP
label_35a6e8:
    // 0x35a6e8: 0x0  nop
    ctx->pc = 0x35a6e8u;
    // NOP
label_35a6ec:
    // 0x35a6ec: 0x0  nop
    ctx->pc = 0x35a6ecu;
    // NOP
label_35a6f0:
    // 0x35a6f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x35a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_35a6f4:
    // 0x35a6f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35a6f8:
    // 0x35a6f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x35a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35a6fc:
    // 0x35a6fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_35a700:
    // 0x35a700: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_35a704:
    // 0x35a704: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35a708:
    // 0x35a708: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35a70c:
    // 0x35a70c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35a70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35a710:
    // 0x35a710: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35a714:
    // 0x35a714: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35a718:
    // 0x35a718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35a71c:
    // 0x35a71c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35a720:
    // 0x35a720: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35a720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35a724:
    // 0x35a724: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35a724u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35a728:
    // 0x35a728: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35a72c:
    if (ctx->pc == 0x35A72Cu) {
        ctx->pc = 0x35A72Cu;
            // 0x35a72c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A730u;
        goto label_35a730;
    }
    ctx->pc = 0x35A728u;
    {
        const bool branch_taken_0x35a728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A728u;
            // 0x35a72c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a728) {
            ctx->pc = 0x35A778u;
            goto label_35a778;
        }
    }
    ctx->pc = 0x35A730u;
label_35a730:
    // 0x35a730: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35a734:
    // 0x35a734: 0x50a300df  beql        $a1, $v1, . + 4 + (0xDF << 2)
label_35a738:
    if (ctx->pc == 0x35A738u) {
        ctx->pc = 0x35A738u;
            // 0x35a738: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x35A73Cu;
        goto label_35a73c;
    }
    ctx->pc = 0x35A734u;
    {
        const bool branch_taken_0x35a734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a734) {
            ctx->pc = 0x35A738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A734u;
            // 0x35a738: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35AAB4u;
            goto label_35aab4;
        }
    }
    ctx->pc = 0x35A73Cu;
label_35a73c:
    // 0x35a73c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35a740:
    // 0x35a740: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35a744:
    if (ctx->pc == 0x35A744u) {
        ctx->pc = 0x35A748u;
        goto label_35a748;
    }
    ctx->pc = 0x35A740u;
    {
        const bool branch_taken_0x35a740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a740) {
            ctx->pc = 0x35A750u;
            goto label_35a750;
        }
    }
    ctx->pc = 0x35A748u;
label_35a748:
    // 0x35a748: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_35a74c:
    if (ctx->pc == 0x35A74Cu) {
        ctx->pc = 0x35A750u;
        goto label_35a750;
    }
    ctx->pc = 0x35A748u;
    {
        const bool branch_taken_0x35a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a748) {
            ctx->pc = 0x35AAB0u;
            goto label_35aab0;
        }
    }
    ctx->pc = 0x35A750u;
label_35a750:
    // 0x35a750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35a754:
    // 0x35a754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35a754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35a758:
    // 0x35a758: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35a75c:
    // 0x35a75c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x35a75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_35a760:
    // 0x35a760: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x35a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_35a764:
    // 0x35a764: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35a768:
    // 0x35a768: 0x320f809  jalr        $t9
label_35a76c:
    if (ctx->pc == 0x35A76Cu) {
        ctx->pc = 0x35A76Cu;
            // 0x35a76c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x35A770u;
        goto label_35a770;
    }
    ctx->pc = 0x35A768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35A770u);
        ctx->pc = 0x35A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A768u;
            // 0x35a76c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35A770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35A770u; }
            if (ctx->pc != 0x35A770u) { return; }
        }
        }
    }
    ctx->pc = 0x35A770u;
label_35a770:
    // 0x35a770: 0x100000cf  b           . + 4 + (0xCF << 2)
label_35a774:
    if (ctx->pc == 0x35A774u) {
        ctx->pc = 0x35A778u;
        goto label_35a778;
    }
    ctx->pc = 0x35A770u;
    {
        const bool branch_taken_0x35a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a770) {
            ctx->pc = 0x35AAB0u;
            goto label_35aab0;
        }
    }
    ctx->pc = 0x35A778u;
label_35a778:
    // 0x35a778: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x35a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_35a77c:
    // 0x35a77c: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
label_35a780:
    if (ctx->pc == 0x35A780u) {
        ctx->pc = 0x35A784u;
        goto label_35a784;
    }
    ctx->pc = 0x35A77Cu;
    {
        const bool branch_taken_0x35a77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a77c) {
            ctx->pc = 0x35AAB0u;
            goto label_35aab0;
        }
    }
    ctx->pc = 0x35A784u;
label_35a784:
    // 0x35a784: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35a788:
    // 0x35a788: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x35a788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_35a78c:
    // 0x35a78c: 0x8c7ee378  lw          $fp, -0x1C88($v1)
    ctx->pc = 0x35a78cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_35a790:
    // 0x35a790: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x35a790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_35a794:
    // 0x35a794: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x35a794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_35a798:
    // 0x35a798: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35a798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35a79c:
    // 0x35a79c: 0x8c63e370  lw          $v1, -0x1C90($v1)
    ctx->pc = 0x35a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_35a7a0:
    // 0x35a7a0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x35a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_35a7a4:
    // 0x35a7a4: 0x8c84d120  lw          $a0, -0x2EE0($a0)
    ctx->pc = 0x35a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_35a7a8:
    // 0x35a7a8: 0x8cb50130  lw          $s5, 0x130($a1)
    ctx->pc = 0x35a7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_35a7ac:
    // 0x35a7ac: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x35a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_35a7b0:
    // 0x35a7b0: 0x8cc38a08  lw          $v1, -0x75F8($a2)
    ctx->pc = 0x35a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937096)));
label_35a7b4:
    // 0x35a7b4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x35a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_35a7b8:
    // 0x35a7b8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35a7bc:
    // 0x35a7bc: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x35a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35a7c0:
    // 0x35a7c0: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x35a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_35a7c4:
    // 0x35a7c4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x35a7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_35a7c8:
    // 0x35a7c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35a7cc:
    // 0x35a7cc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x35a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_35a7d0:
    // 0x35a7d0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x35a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_35a7d4:
    // 0x35a7d4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x35a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_35a7d8:
    // 0x35a7d8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x35a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_35a7dc:
    // 0x35a7dc: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x35a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_35a7e0:
    // 0x35a7e0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x35a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_35a7e4:
    // 0x35a7e4: 0xac80e3c0  sw          $zero, -0x1C40($a0)
    ctx->pc = 0x35a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960064), GPR_U32(ctx, 0));
label_35a7e8:
    // 0x35a7e8: 0x92c30090  lbu         $v1, 0x90($s6)
    ctx->pc = 0x35a7e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 144)));
label_35a7ec:
    // 0x35a7ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_35a7f0:
    if (ctx->pc == 0x35A7F0u) {
        ctx->pc = 0x35A7F0u;
            // 0x35a7f0: 0x26d70084  addiu       $s7, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x35A7F4u;
        goto label_35a7f4;
    }
    ctx->pc = 0x35A7ECu;
    {
        const bool branch_taken_0x35a7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A7ECu;
            // 0x35a7f0: 0x26d70084  addiu       $s7, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a7ec) {
            ctx->pc = 0x35A80Cu;
            goto label_35a80c;
        }
    }
    ctx->pc = 0x35A7F4u;
label_35a7f4:
    // 0x35a7f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35a7f8:
    // 0x35a7f8: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x35a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_35a7fc:
    // 0x35a7fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35a7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35a800:
    // 0x35a800: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35a800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35a804:
    // 0x35a804: 0x320f809  jalr        $t9
label_35a808:
    if (ctx->pc == 0x35A808u) {
        ctx->pc = 0x35A80Cu;
        goto label_35a80c;
    }
    ctx->pc = 0x35A804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35A80Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35A80Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35A80Cu; }
            if (ctx->pc != 0x35A80Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35A80Cu;
label_35a80c:
    // 0x35a80c: 0x8ec36ad0  lw          $v1, 0x6AD0($s6)
    ctx->pc = 0x35a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27344)));
label_35a810:
    // 0x35a810: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_35a814:
    if (ctx->pc == 0x35A814u) {
        ctx->pc = 0x35A814u;
            // 0x35a814: 0x26c46ac8  addiu       $a0, $s6, 0x6AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27336));
        ctx->pc = 0x35A818u;
        goto label_35a818;
    }
    ctx->pc = 0x35A810u;
    {
        const bool branch_taken_0x35a810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A810u;
            // 0x35a814: 0x26c46ac8  addiu       $a0, $s6, 0x6AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 27336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a810) {
            ctx->pc = 0x35A958u;
            goto label_35a958;
        }
    }
    ctx->pc = 0x35A818u;
label_35a818:
    // 0x35a818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35a818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35a81c:
    // 0x35a81c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_35a820:
    // 0x35a820: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x35a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_35a824:
    // 0x35a824: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x35a824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_35a828:
    // 0x35a828: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x35a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_35a82c:
    // 0x35a82c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35a830:
    // 0x35a830: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x35a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_35a834:
    // 0x35a834: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x35a834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_35a838:
    // 0x35a838: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x35a838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_35a83c:
    // 0x35a83c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x35a83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_35a840:
    // 0x35a840: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35a840u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35a844:
    // 0x35a844: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35a844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35a848:
    // 0x35a848: 0x90660003  lbu         $a2, 0x3($v1)
    ctx->pc = 0x35a848u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_35a84c:
    // 0x35a84c: 0xc0bd22c  jal         func_2F48B0
label_35a850:
    if (ctx->pc == 0x35A850u) {
        ctx->pc = 0x35A850u;
            // 0x35a850: 0x24440074  addiu       $a0, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->pc = 0x35A854u;
        goto label_35a854;
    }
    ctx->pc = 0x35A84Cu;
    SET_GPR_U32(ctx, 31, 0x35A854u);
    ctx->pc = 0x35A850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A84Cu;
            // 0x35a850: 0x24440074  addiu       $a0, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F48B0u;
    if (runtime->hasFunction(0x2F48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A854u; }
        if (ctx->pc != 0x35A854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F48B0_0x2f48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35A854u; }
        if (ctx->pc != 0x35A854u) { return; }
    }
    ctx->pc = 0x35A854u;
label_35a854:
    // 0x35a854: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35a858:
    // 0x35a858: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
label_35a85c:
    if (ctx->pc == 0x35A85Cu) {
        ctx->pc = 0x35A860u;
        goto label_35a860;
    }
    ctx->pc = 0x35A858u;
    {
        const bool branch_taken_0x35a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a858) {
            ctx->pc = 0x35A930u;
            goto label_35a930;
        }
    }
    ctx->pc = 0x35A860u;
label_35a860:
    // 0x35a860: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x35a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_35a864:
    // 0x35a864: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35a864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35a868:
    // 0x35a868: 0x90540002  lbu         $s4, 0x2($v0)
    ctx->pc = 0x35a868u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_35a86c:
    // 0x35a86c: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x35a86cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_35a870:
    // 0x35a870: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x35a870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_35a874:
    // 0x35a874: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x35a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_35a878:
    // 0x35a878: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x35a878u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_35a87c:
    // 0x35a87c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x35a87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a880:
    // 0x35a880: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_35a884:
    if (ctx->pc == 0x35A884u) {
        ctx->pc = 0x35A884u;
            // 0x35a884: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x35A888u;
        goto label_35a888;
    }
    ctx->pc = 0x35A880u;
    {
        const bool branch_taken_0x35a880 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x35a880) {
            ctx->pc = 0x35A884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A880u;
            // 0x35a884: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A894u;
            goto label_35a894;
        }
    }
    ctx->pc = 0x35A888u;
label_35a888:
    // 0x35a888: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x35a888u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a88c:
    // 0x35a88c: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a890:
    if (ctx->pc == 0x35A890u) {
        ctx->pc = 0x35A890u;
            // 0x35a890: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35A894u;
        goto label_35a894;
    }
    ctx->pc = 0x35A88Cu;
    {
        const bool branch_taken_0x35a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A88Cu;
            // 0x35a890: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a88c) {
            ctx->pc = 0x35A8ACu;
            goto label_35a8ac;
        }
    }
    ctx->pc = 0x35A894u;
label_35a894:
    // 0x35a894: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x35a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_35a898:
    // 0x35a898: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35a89c:
    // 0x35a89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a8a0:
    // 0x35a8a0: 0x0  nop
    ctx->pc = 0x35a8a0u;
    // NOP
label_35a8a4:
    // 0x35a8a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35a8a8:
    // 0x35a8a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35a8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35a8ac:
    // 0x35a8ac: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x35a8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_35a8b0:
    // 0x35a8b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x35a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_35a8b4:
    // 0x35a8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a8b8:
    // 0x35a8b8: 0x0  nop
    ctx->pc = 0x35a8b8u;
    // NOP
label_35a8bc:
    // 0x35a8bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35a8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35a8c0:
    // 0x35a8c0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_35a8c4:
    if (ctx->pc == 0x35A8C4u) {
        ctx->pc = 0x35A8C4u;
            // 0x35a8c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35A8C8u;
        goto label_35a8c8;
    }
    ctx->pc = 0x35A8C0u;
    {
        const bool branch_taken_0x35a8c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35a8c0) {
            ctx->pc = 0x35A8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A8C0u;
            // 0x35a8c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A8D8u;
            goto label_35a8d8;
        }
    }
    ctx->pc = 0x35A8C8u;
label_35a8c8:
    // 0x35a8c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a8c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35a8cc:
    // 0x35a8cc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x35a8ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_35a8d0:
    // 0x35a8d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a8d4:
    if (ctx->pc == 0x35A8D4u) {
        ctx->pc = 0x35A8D4u;
            // 0x35a8d4: 0x8ec20074  lw          $v0, 0x74($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
        ctx->pc = 0x35A8D8u;
        goto label_35a8d8;
    }
    ctx->pc = 0x35A8D0u;
    {
        const bool branch_taken_0x35a8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A8D0u;
            // 0x35a8d4: 0x8ec20074  lw          $v0, 0x74($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a8d0) {
            ctx->pc = 0x35A8F0u;
            goto label_35a8f0;
        }
    }
    ctx->pc = 0x35A8D8u;
label_35a8d8:
    // 0x35a8d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35a8dc:
    // 0x35a8dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a8dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35a8e0:
    // 0x35a8e0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x35a8e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_35a8e4:
    // 0x35a8e4: 0x0  nop
    ctx->pc = 0x35a8e4u;
    // NOP
label_35a8e8:
    // 0x35a8e8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x35a8e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_35a8ec:
    // 0x35a8ec: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x35a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_35a8f0:
    // 0x35a8f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35a8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35a8f4:
    // 0x35a8f4: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x35a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_35a8f8:
    // 0x35a8f8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x35a8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35a8fc:
    // 0x35a8fc: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x35a8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_35a900:
    // 0x35a900: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x35a900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_35a904:
    // 0x35a904: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_35a908:
    // 0x35a908: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35a908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a90c:
    // 0x35a90c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35a90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35a910:
    // 0x35a910: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x35a910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_35a914:
    // 0x35a914: 0x320f809  jalr        $t9
label_35a918:
    if (ctx->pc == 0x35A918u) {
        ctx->pc = 0x35A918u;
            // 0x35a918: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35A91Cu;
        goto label_35a91c;
    }
    ctx->pc = 0x35A914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35A91Cu);
        ctx->pc = 0x35A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A914u;
            // 0x35a918: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35A91Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35A91Cu; }
            if (ctx->pc != 0x35A91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35A91Cu;
label_35a91c:
    // 0x35a91c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x35a91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_35a920:
    // 0x35a920: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x35a920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_35a924:
    // 0x35a924: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35a924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_35a928:
    // 0x35a928: 0x1680ffd5  bnez        $s4, . + 4 + (-0x2B << 2)
label_35a92c:
    if (ctx->pc == 0x35A92Cu) {
        ctx->pc = 0x35A92Cu;
            // 0x35a92c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x35A930u;
        goto label_35a930;
    }
    ctx->pc = 0x35A928u;
    {
        const bool branch_taken_0x35a928 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A928u;
            // 0x35a92c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a928) {
            ctx->pc = 0x35A880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a880;
        }
    }
    ctx->pc = 0x35A930u;
label_35a930:
    // 0x35a930: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x35a930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_35a934:
    // 0x35a934: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35a934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35a938:
    // 0x35a938: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x35a938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35a93c:
    // 0x35a93c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x35a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_35a940:
    // 0x35a940: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x35a940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35a944:
    // 0x35a944: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x35a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_35a948:
    // 0x35a948: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x35a948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35a94c:
    // 0x35a94c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x35a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_35a950:
    // 0x35a950: 0x5460ffba  bnel        $v1, $zero, . + 4 + (-0x46 << 2)
label_35a954:
    if (ctx->pc == 0x35A954u) {
        ctx->pc = 0x35A954u;
            // 0x35a954: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x35A958u;
        goto label_35a958;
    }
    ctx->pc = 0x35A950u;
    {
        const bool branch_taken_0x35a950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a950) {
            ctx->pc = 0x35A954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A950u;
            // 0x35a954: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A83Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a83c;
        }
    }
    ctx->pc = 0x35A958u;
label_35a958:
    // 0x35a958: 0x8ec36ac0  lw          $v1, 0x6AC0($s6)
    ctx->pc = 0x35a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27328)));
label_35a95c:
    // 0x35a95c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_35a960:
    if (ctx->pc == 0x35A960u) {
        ctx->pc = 0x35A964u;
        goto label_35a964;
    }
    ctx->pc = 0x35A95Cu;
    {
        const bool branch_taken_0x35a95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a95c) {
            ctx->pc = 0x35AA48u;
            goto label_35aa48;
        }
    }
    ctx->pc = 0x35A964u;
label_35a964:
    // 0x35a964: 0x8ec26ac0  lw          $v0, 0x6AC0($s6)
    ctx->pc = 0x35a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27328)));
label_35a968:
    // 0x35a968: 0x8ed16ac4  lw          $s1, 0x6AC4($s6)
    ctx->pc = 0x35a968u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27332)));
label_35a96c:
    // 0x35a96c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a970:
    // 0x35a970: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_35a974:
    // 0x35a974: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x35a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_35a978:
    // 0x35a978: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35a97c:
    if (ctx->pc == 0x35A97Cu) {
        ctx->pc = 0x35A97Cu;
            // 0x35a97c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35A980u;
        goto label_35a980;
    }
    ctx->pc = 0x35A978u;
    {
        const bool branch_taken_0x35a978 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35a978) {
            ctx->pc = 0x35A97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A978u;
            // 0x35a97c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A98Cu;
            goto label_35a98c;
        }
    }
    ctx->pc = 0x35A980u;
label_35a980:
    // 0x35a980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a984:
    // 0x35a984: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a988:
    if (ctx->pc == 0x35A988u) {
        ctx->pc = 0x35A988u;
            // 0x35a988: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35A98Cu;
        goto label_35a98c;
    }
    ctx->pc = 0x35A984u;
    {
        const bool branch_taken_0x35a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A984u;
            // 0x35a988: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a984) {
            ctx->pc = 0x35A9A4u;
            goto label_35a9a4;
        }
    }
    ctx->pc = 0x35A98Cu;
label_35a98c:
    // 0x35a98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35a990:
    // 0x35a990: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35a994:
    // 0x35a994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35a994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a998:
    // 0x35a998: 0x0  nop
    ctx->pc = 0x35a998u;
    // NOP
label_35a99c:
    // 0x35a99c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35a99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35a9a0:
    // 0x35a9a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35a9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35a9a4:
    // 0x35a9a4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x35a9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_35a9a8:
    // 0x35a9a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x35a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_35a9ac:
    // 0x35a9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35a9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35a9b0:
    // 0x35a9b0: 0x0  nop
    ctx->pc = 0x35a9b0u;
    // NOP
label_35a9b4:
    // 0x35a9b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35a9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35a9b8:
    // 0x35a9b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_35a9bc:
    if (ctx->pc == 0x35A9BCu) {
        ctx->pc = 0x35A9BCu;
            // 0x35a9bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35A9C0u;
        goto label_35a9c0;
    }
    ctx->pc = 0x35A9B8u;
    {
        const bool branch_taken_0x35a9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35a9b8) {
            ctx->pc = 0x35A9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35A9B8u;
            // 0x35a9bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A9D0u;
            goto label_35a9d0;
        }
    }
    ctx->pc = 0x35A9C0u;
label_35a9c0:
    // 0x35a9c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a9c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35a9c4:
    // 0x35a9c4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x35a9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_35a9c8:
    // 0x35a9c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_35a9cc:
    if (ctx->pc == 0x35A9CCu) {
        ctx->pc = 0x35A9CCu;
            // 0x35a9cc: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x35A9D0u;
        goto label_35a9d0;
    }
    ctx->pc = 0x35A9C8u;
    {
        const bool branch_taken_0x35a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A9C8u;
            // 0x35a9cc: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9c8) {
            ctx->pc = 0x35A9E8u;
            goto label_35a9e8;
        }
    }
    ctx->pc = 0x35A9D0u;
label_35a9d0:
    // 0x35a9d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35a9d4:
    // 0x35a9d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35a9d8:
    // 0x35a9d8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x35a9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_35a9dc:
    // 0x35a9dc: 0x0  nop
    ctx->pc = 0x35a9dcu;
    // NOP
label_35a9e0:
    // 0x35a9e0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x35a9e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_35a9e4:
    // 0x35a9e4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x35a9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_35a9e8:
    // 0x35a9e8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x35a9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_35a9ec:
    // 0x35a9ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35a9ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35a9f0:
    // 0x35a9f0: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x35a9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_35a9f4:
    // 0x35a9f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a9f8:
    // 0x35a9f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35a9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_35a9fc:
    // 0x35a9fc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x35a9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35aa00:
    // 0x35aa00: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x35aa00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_35aa04:
    // 0x35aa04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35aa04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35aa08:
    // 0x35aa08: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x35aa08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_35aa0c:
    // 0x35aa0c: 0x320f809  jalr        $t9
label_35aa10:
    if (ctx->pc == 0x35AA10u) {
        ctx->pc = 0x35AA10u;
            // 0x35aa10: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AA14u;
        goto label_35aa14;
    }
    ctx->pc = 0x35AA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35AA14u);
        ctx->pc = 0x35AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AA0Cu;
            // 0x35aa10: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35AA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35AA14u; }
            if (ctx->pc != 0x35AA14u) { return; }
        }
        }
    }
    ctx->pc = 0x35AA14u;
label_35aa14:
    // 0x35aa14: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x35aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_35aa18:
    // 0x35aa18: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x35aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35aa1c:
    // 0x35aa1c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x35aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_35aa20:
    // 0x35aa20: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x35aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_35aa24:
    // 0x35aa24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35aa24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35aa28:
    // 0x35aa28: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x35aa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35aa2c:
    // 0x35aa2c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x35aa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_35aa30:
    // 0x35aa30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35aa30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35aa34:
    // 0x35aa34: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x35aa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_35aa38:
    // 0x35aa38: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x35aa38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35aa3c:
    // 0x35aa3c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x35aa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_35aa40:
    // 0x35aa40: 0x5460ffcd  bnel        $v1, $zero, . + 4 + (-0x33 << 2)
label_35aa44:
    if (ctx->pc == 0x35AA44u) {
        ctx->pc = 0x35AA44u;
            // 0x35aa44: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x35AA48u;
        goto label_35aa48;
    }
    ctx->pc = 0x35AA40u;
    {
        const bool branch_taken_0x35aa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aa40) {
            ctx->pc = 0x35AA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35AA40u;
            // 0x35aa44: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35A978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35a978;
        }
    }
    ctx->pc = 0x35AA48u;
label_35aa48:
    // 0x35aa48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35aa4c:
    // 0x35aa4c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x35aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_35aa50:
    // 0x35aa50: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
label_35aa54:
    if (ctx->pc == 0x35AA54u) {
        ctx->pc = 0x35AA54u;
            // 0x35aa54: 0x92c30090  lbu         $v1, 0x90($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->pc = 0x35AA58u;
        goto label_35aa58;
    }
    ctx->pc = 0x35AA50u;
    {
        const bool branch_taken_0x35aa50 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x35aa50) {
            ctx->pc = 0x35AA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35AA50u;
            // 0x35aa54: 0x92c30090  lbu         $v1, 0x90($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35AA90u;
            goto label_35aa90;
        }
    }
    ctx->pc = 0x35AA58u;
label_35aa58:
    // 0x35aa58: 0xc04e738  jal         func_139CE0
label_35aa5c:
    if (ctx->pc == 0x35AA5Cu) {
        ctx->pc = 0x35AA5Cu;
            // 0x35aa5c: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x35AA60u;
        goto label_35aa60;
    }
    ctx->pc = 0x35AA58u;
    SET_GPR_U32(ctx, 31, 0x35AA60u);
    ctx->pc = 0x35AA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AA58u;
            // 0x35aa5c: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AA60u; }
        if (ctx->pc != 0x35AA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AA60u; }
        if (ctx->pc != 0x35AA60u) { return; }
    }
    ctx->pc = 0x35AA60u;
label_35aa60:
    // 0x35aa60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35aa64:
    // 0x35aa64: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x35aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_35aa68:
    // 0x35aa68: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x35aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_35aa6c:
    // 0x35aa6c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35aa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35aa70:
    // 0x35aa70: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x35aa70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_35aa74:
    // 0x35aa74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35aa78:
    // 0x35aa78: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x35aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_35aa7c:
    // 0x35aa7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35aa80:
    // 0x35aa80: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x35aa80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_35aa84:
    // 0x35aa84: 0xc055ea8  jal         func_157AA0
label_35aa88:
    if (ctx->pc == 0x35AA88u) {
        ctx->pc = 0x35AA88u;
            // 0x35aa88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AA8Cu;
        goto label_35aa8c;
    }
    ctx->pc = 0x35AA84u;
    SET_GPR_U32(ctx, 31, 0x35AA8Cu);
    ctx->pc = 0x35AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AA84u;
            // 0x35aa88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AA8Cu; }
        if (ctx->pc != 0x35AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AA8Cu; }
        if (ctx->pc != 0x35AA8Cu) { return; }
    }
    ctx->pc = 0x35AA8Cu;
label_35aa8c:
    // 0x35aa8c: 0x92c30090  lbu         $v1, 0x90($s6)
    ctx->pc = 0x35aa8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 144)));
label_35aa90:
    // 0x35aa90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_35aa94:
    if (ctx->pc == 0x35AA94u) {
        ctx->pc = 0x35AA98u;
        goto label_35aa98;
    }
    ctx->pc = 0x35AA90u;
    {
        const bool branch_taken_0x35aa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35aa90) {
            ctx->pc = 0x35AAB0u;
            goto label_35aab0;
        }
    }
    ctx->pc = 0x35AA98u;
label_35aa98:
    // 0x35aa98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35aa9c:
    // 0x35aa9c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x35aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_35aaa0:
    // 0x35aaa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35aaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35aaa4:
    // 0x35aaa4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x35aaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_35aaa8:
    // 0x35aaa8: 0x320f809  jalr        $t9
label_35aaac:
    if (ctx->pc == 0x35AAACu) {
        ctx->pc = 0x35AAB0u;
        goto label_35aab0;
    }
    ctx->pc = 0x35AAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35AAB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35AAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35AAB0u; }
            if (ctx->pc != 0x35AAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x35AAB0u;
label_35aab0:
    // 0x35aab0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x35aab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_35aab4:
    // 0x35aab4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35aab8:
    // 0x35aab8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x35aab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_35aabc:
    // 0x35aabc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35aabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35aac0:
    // 0x35aac0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35aac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35aac4:
    // 0x35aac4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35aac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35aac8:
    // 0x35aac8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35aac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35aacc:
    // 0x35aacc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35aaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35aad0:
    // 0x35aad0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35aad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35aad4:
    // 0x35aad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35aad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35aad8:
    // 0x35aad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35aad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35aadc:
    // 0x35aadc: 0x3e00008  jr          $ra
label_35aae0:
    if (ctx->pc == 0x35AAE0u) {
        ctx->pc = 0x35AAE0u;
            // 0x35aae0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x35AAE4u;
        goto label_35aae4;
    }
    ctx->pc = 0x35AADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AADCu;
            // 0x35aae0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35AAE4u;
label_35aae4:
    // 0x35aae4: 0x0  nop
    ctx->pc = 0x35aae4u;
    // NOP
label_35aae8:
    // 0x35aae8: 0x0  nop
    ctx->pc = 0x35aae8u;
    // NOP
label_35aaec:
    // 0x35aaec: 0x0  nop
    ctx->pc = 0x35aaecu;
    // NOP
label_35aaf0:
    // 0x35aaf0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x35aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_35aaf4:
    // 0x35aaf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35aaf8:
    // 0x35aaf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_35aafc:
    // 0x35aafc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35ab00:
    // 0x35ab00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35ab04:
    // 0x35ab04: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x35ab04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_35ab08:
    // 0x35ab08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35ab0c:
    // 0x35ab0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35ab10:
    // 0x35ab10: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x35ab10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_35ab14:
    // 0x35ab14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35ab18:
    // 0x35ab18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35ab18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ab1c:
    // 0x35ab1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35ab20:
    // 0x35ab20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ab20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35ab24:
    // 0x35ab24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35ab28:
    // 0x35ab28: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35ab28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_35ab2c:
    // 0x35ab2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35ab2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35ab30:
    // 0x35ab30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35ab30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35ab34:
    // 0x35ab34: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35ab38:
    // 0x35ab38: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
label_35ab3c:
    if (ctx->pc == 0x35AB3Cu) {
        ctx->pc = 0x35AB3Cu;
            // 0x35ab3c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AB40u;
        goto label_35ab40;
    }
    ctx->pc = 0x35AB38u;
    {
        const bool branch_taken_0x35ab38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35AB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AB38u;
            // 0x35ab3c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab38) {
            ctx->pc = 0x35AD84u;
            goto label_35ad84;
        }
    }
    ctx->pc = 0x35AB40u;
label_35ab40:
    // 0x35ab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ab44:
    // 0x35ab44: 0xc04f278  jal         func_13C9E0
label_35ab48:
    if (ctx->pc == 0x35AB48u) {
        ctx->pc = 0x35AB48u;
            // 0x35ab48: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x35AB4Cu;
        goto label_35ab4c;
    }
    ctx->pc = 0x35AB44u;
    SET_GPR_U32(ctx, 31, 0x35AB4Cu);
    ctx->pc = 0x35AB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AB44u;
            // 0x35ab48: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB4Cu; }
        if (ctx->pc != 0x35AB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB4Cu; }
        if (ctx->pc != 0x35AB4Cu) { return; }
    }
    ctx->pc = 0x35AB4Cu;
label_35ab4c:
    // 0x35ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ab50:
    // 0x35ab50: 0xc04ce80  jal         func_133A00
label_35ab54:
    if (ctx->pc == 0x35AB54u) {
        ctx->pc = 0x35AB54u;
            // 0x35ab54: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x35AB58u;
        goto label_35ab58;
    }
    ctx->pc = 0x35AB50u;
    SET_GPR_U32(ctx, 31, 0x35AB58u);
    ctx->pc = 0x35AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AB50u;
            // 0x35ab54: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB58u; }
        if (ctx->pc != 0x35AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB58u; }
        if (ctx->pc != 0x35AB58u) { return; }
    }
    ctx->pc = 0x35AB58u;
label_35ab58:
    // 0x35ab58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35ab5c:
    // 0x35ab5c: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x35ab5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_35ab60:
    // 0x35ab60: 0xc4554008  lwc1        $f21, 0x4008($v0)
    ctx->pc = 0x35ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35ab64:
    // 0x35ab64: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x35ab64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ab68:
    // 0x35ab68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35ab6c:
    // 0x35ab6c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x35ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_35ab70:
    // 0x35ab70: 0xc07698c  jal         func_1DA630
label_35ab74:
    if (ctx->pc == 0x35AB74u) {
        ctx->pc = 0x35AB74u;
            // 0x35ab74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AB78u;
        goto label_35ab78;
    }
    ctx->pc = 0x35AB70u;
    SET_GPR_U32(ctx, 31, 0x35AB78u);
    ctx->pc = 0x35AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AB70u;
            // 0x35ab74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB78u; }
        if (ctx->pc != 0x35AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AB78u; }
        if (ctx->pc != 0x35AB78u) { return; }
    }
    ctx->pc = 0x35AB78u;
label_35ab78:
    // 0x35ab78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ab7c:
    // 0x35ab7c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_35ab80:
    if (ctx->pc == 0x35AB80u) {
        ctx->pc = 0x35AB84u;
        goto label_35ab84;
    }
    ctx->pc = 0x35AB7Cu;
    {
        const bool branch_taken_0x35ab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35ab7c) {
            ctx->pc = 0x35AB98u;
            goto label_35ab98;
        }
    }
    ctx->pc = 0x35AB84u;
label_35ab84:
    // 0x35ab84: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x35ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
label_35ab88:
    // 0x35ab88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35ab8c:
    // 0x35ab8c: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x35ab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_35ab90:
    // 0x35ab90: 0x10000034  b           . + 4 + (0x34 << 2)
label_35ab94:
    if (ctx->pc == 0x35AB94u) {
        ctx->pc = 0x35AB94u;
            // 0x35ab94: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->pc = 0x35AB98u;
        goto label_35ab98;
    }
    ctx->pc = 0x35AB90u;
    {
        const bool branch_taken_0x35ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AB90u;
            // 0x35ab94: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab90) {
            ctx->pc = 0x35AC64u;
            goto label_35ac64;
        }
    }
    ctx->pc = 0x35AB98u;
label_35ab98:
    // 0x35ab98: 0xc0576f4  jal         func_15DBD0
label_35ab9c:
    if (ctx->pc == 0x35AB9Cu) {
        ctx->pc = 0x35ABA0u;
        goto label_35aba0;
    }
    ctx->pc = 0x35AB98u;
    SET_GPR_U32(ctx, 31, 0x35ABA0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABA0u; }
        if (ctx->pc != 0x35ABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABA0u; }
        if (ctx->pc != 0x35ABA0u) { return; }
    }
    ctx->pc = 0x35ABA0u;
label_35aba0:
    // 0x35aba0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35aba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35aba4:
    // 0x35aba4: 0xc076984  jal         func_1DA610
label_35aba8:
    if (ctx->pc == 0x35ABA8u) {
        ctx->pc = 0x35ABA8u;
            // 0x35aba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ABACu;
        goto label_35abac;
    }
    ctx->pc = 0x35ABA4u;
    SET_GPR_U32(ctx, 31, 0x35ABACu);
    ctx->pc = 0x35ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ABA4u;
            // 0x35aba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABACu; }
        if (ctx->pc != 0x35ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABACu; }
        if (ctx->pc != 0x35ABACu) { return; }
    }
    ctx->pc = 0x35ABACu;
label_35abac:
    // 0x35abac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35abacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35abb0:
    // 0x35abb0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35abb4:
    // 0x35abb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35abb8:
    // 0x35abb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35abb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35abbc:
    // 0x35abbc: 0xc4421800  lwc1        $f2, 0x1800($v0)
    ctx->pc = 0x35abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35abc0:
    // 0x35abc0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35abc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35abc4:
    // 0x35abc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35abc8:
    // 0x35abc8: 0xc4411808  lwc1        $f1, 0x1808($v0)
    ctx->pc = 0x35abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35abcc:
    // 0x35abcc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x35abccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_35abd0:
    // 0x35abd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35abd4:
    // 0x35abd4: 0xc440180c  lwc1        $f0, 0x180C($v0)
    ctx->pc = 0x35abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35abd8:
    // 0x35abd8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x35abd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_35abdc:
    // 0x35abdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35abe0:
    // 0x35abe0: 0x8c421804  lw          $v0, 0x1804($v0)
    ctx->pc = 0x35abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
label_35abe4:
    // 0x35abe4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x35abe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_35abe8:
    // 0x35abe8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x35abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_35abec:
    // 0x35abec: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x35abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35abf0:
    // 0x35abf0: 0xc04cca0  jal         func_133280
label_35abf4:
    if (ctx->pc == 0x35ABF4u) {
        ctx->pc = 0x35ABF4u;
            // 0x35abf4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x35ABF8u;
        goto label_35abf8;
    }
    ctx->pc = 0x35ABF0u;
    SET_GPR_U32(ctx, 31, 0x35ABF8u);
    ctx->pc = 0x35ABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ABF0u;
            // 0x35abf4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABF8u; }
        if (ctx->pc != 0x35ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ABF8u; }
        if (ctx->pc != 0x35ABF8u) { return; }
    }
    ctx->pc = 0x35ABF8u;
label_35abf8:
    // 0x35abf8: 0xc076980  jal         func_1DA600
label_35abfc:
    if (ctx->pc == 0x35ABFCu) {
        ctx->pc = 0x35ABFCu;
            // 0x35abfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AC00u;
        goto label_35ac00;
    }
    ctx->pc = 0x35ABF8u;
    SET_GPR_U32(ctx, 31, 0x35AC00u);
    ctx->pc = 0x35ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ABF8u;
            // 0x35abfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC00u; }
        if (ctx->pc != 0x35AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC00u; }
        if (ctx->pc != 0x35AC00u) { return; }
    }
    ctx->pc = 0x35AC00u;
label_35ac00:
    // 0x35ac00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ac04:
    // 0x35ac04: 0xc04cc34  jal         func_1330D0
label_35ac08:
    if (ctx->pc == 0x35AC08u) {
        ctx->pc = 0x35AC08u;
            // 0x35ac08: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35AC0Cu;
        goto label_35ac0c;
    }
    ctx->pc = 0x35AC04u;
    SET_GPR_U32(ctx, 31, 0x35AC0Cu);
    ctx->pc = 0x35AC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC04u;
            // 0x35ac08: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC0Cu; }
        if (ctx->pc != 0x35AC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC0Cu; }
        if (ctx->pc != 0x35AC0Cu) { return; }
    }
    ctx->pc = 0x35AC0Cu;
label_35ac0c:
    // 0x35ac0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35ac0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_35ac10:
    // 0x35ac10: 0xc04c710  jal         func_131C40
label_35ac14:
    if (ctx->pc == 0x35AC14u) {
        ctx->pc = 0x35AC14u;
            // 0x35ac14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x35AC18u;
        goto label_35ac18;
    }
    ctx->pc = 0x35AC10u;
    SET_GPR_U32(ctx, 31, 0x35AC18u);
    ctx->pc = 0x35AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC10u;
            // 0x35ac14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC18u; }
        if (ctx->pc != 0x35AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC18u; }
        if (ctx->pc != 0x35AC18u) { return; }
    }
    ctx->pc = 0x35AC18u;
label_35ac18:
    // 0x35ac18: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x35ac18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35ac1c:
    // 0x35ac1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_35ac20:
    if (ctx->pc == 0x35AC20u) {
        ctx->pc = 0x35AC20u;
            // 0x35ac20: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->pc = 0x35AC24u;
        goto label_35ac24;
    }
    ctx->pc = 0x35AC1Cu;
    {
        const bool branch_taken_0x35ac1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC1Cu;
            // 0x35ac20: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac1c) {
            ctx->pc = 0x35AC2Cu;
            goto label_35ac2c;
        }
    }
    ctx->pc = 0x35AC24u;
label_35ac24:
    // 0x35ac24: 0x1000000f  b           . + 4 + (0xF << 2)
label_35ac28:
    if (ctx->pc == 0x35AC28u) {
        ctx->pc = 0x35AC28u;
            // 0x35ac28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x35AC2Cu;
        goto label_35ac2c;
    }
    ctx->pc = 0x35AC24u;
    {
        const bool branch_taken_0x35ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC24u;
            // 0x35ac28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac24) {
            ctx->pc = 0x35AC64u;
            goto label_35ac64;
        }
    }
    ctx->pc = 0x35AC2Cu;
label_35ac2c:
    // 0x35ac2c: 0xc07697c  jal         func_1DA5F0
label_35ac30:
    if (ctx->pc == 0x35AC30u) {
        ctx->pc = 0x35AC30u;
            // 0x35ac30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AC34u;
        goto label_35ac34;
    }
    ctx->pc = 0x35AC2Cu;
    SET_GPR_U32(ctx, 31, 0x35AC34u);
    ctx->pc = 0x35AC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC2Cu;
            // 0x35ac30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC34u; }
        if (ctx->pc != 0x35AC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC34u; }
        if (ctx->pc != 0x35AC34u) { return; }
    }
    ctx->pc = 0x35AC34u;
label_35ac34:
    // 0x35ac34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ac34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ac38:
    // 0x35ac38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35ac3c:
    // 0x35ac3c: 0xc04cd60  jal         func_133580
label_35ac40:
    if (ctx->pc == 0x35AC40u) {
        ctx->pc = 0x35AC40u;
            // 0x35ac40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AC44u;
        goto label_35ac44;
    }
    ctx->pc = 0x35AC3Cu;
    SET_GPR_U32(ctx, 31, 0x35AC44u);
    ctx->pc = 0x35AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC3Cu;
            // 0x35ac40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC44u; }
        if (ctx->pc != 0x35AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC44u; }
        if (ctx->pc != 0x35AC44u) { return; }
    }
    ctx->pc = 0x35AC44u;
label_35ac44:
    // 0x35ac44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35ac48:
    // 0x35ac48: 0xc04c650  jal         func_131940
label_35ac4c:
    if (ctx->pc == 0x35AC4Cu) {
        ctx->pc = 0x35AC4Cu;
            // 0x35ac4c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35AC50u;
        goto label_35ac50;
    }
    ctx->pc = 0x35AC48u;
    SET_GPR_U32(ctx, 31, 0x35AC50u);
    ctx->pc = 0x35AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC48u;
            // 0x35ac4c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC50u; }
        if (ctx->pc != 0x35AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AC50u; }
        if (ctx->pc != 0x35AC50u) { return; }
    }
    ctx->pc = 0x35AC50u;
label_35ac50:
    // 0x35ac50: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x35ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_35ac54:
    // 0x35ac54: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x35ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35ac58:
    // 0x35ac58: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x35ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_35ac5c:
    // 0x35ac5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35ac60:
    // 0x35ac60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35ac64:
    // 0x35ac64: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x35ac64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_35ac68:
    // 0x35ac68: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_35ac6c:
    if (ctx->pc == 0x35AC6Cu) {
        ctx->pc = 0x35AC6Cu;
            // 0x35ac6c: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->pc = 0x35AC70u;
        goto label_35ac70;
    }
    ctx->pc = 0x35AC68u;
    {
        const bool branch_taken_0x35ac68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AC68u;
            // 0x35ac6c: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac68) {
            ctx->pc = 0x35AD84u;
            goto label_35ad84;
        }
    }
    ctx->pc = 0x35AC70u;
label_35ac70:
    // 0x35ac70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ac74:
    // 0x35ac74: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35ac78:
    // 0x35ac78: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x35ac78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_35ac7c:
    // 0x35ac7c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x35ac7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35ac80:
    // 0x35ac80: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x35ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_35ac84:
    // 0x35ac84: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35ac84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35ac88:
    // 0x35ac88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ac8c:
    // 0x35ac8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ac90:
    // 0x35ac90: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x35ac90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_35ac94:
    // 0x35ac94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ac98:
    // 0x35ac98: 0x8c45e360  lw          $a1, -0x1CA0($v0)
    ctx->pc = 0x35ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_35ac9c:
    // 0x35ac9c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_35aca0:
    // 0x35aca0: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x35aca0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_35aca4:
    // 0x35aca4: 0xa7a821  addu        $s5, $a1, $a3
    ctx->pc = 0x35aca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_35aca8:
    // 0x35aca8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x35aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_35acac:
    // 0x35acac: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x35acacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35acb0:
    // 0x35acb0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35acb4:
    // 0x35acb4: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x35acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
label_35acb8:
    // 0x35acb8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35acbc:
    // 0x35acbc: 0x8cc6e3d8  lw          $a2, -0x1C28($a2)
    ctx->pc = 0x35acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960088)));
label_35acc0:
    // 0x35acc0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x35acc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_35acc4:
    // 0x35acc4: 0x8caae378  lw          $t2, -0x1C88($a1)
    ctx->pc = 0x35acc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
label_35acc8:
    // 0x35acc8: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x35acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_35accc:
    // 0x35accc: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x35acccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35acd0:
    // 0x35acd0: 0x14ba021  addu        $s4, $t2, $t3
    ctx->pc = 0x35acd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_35acd4:
    // 0x35acd4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35acd8:
    // 0x35acd8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35acdc:
    // 0x35acdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35acdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ace0:
    // 0x35ace0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x35ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_35ace4:
    // 0x35ace4: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x35ace4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35ace8:
    // 0x35ace8: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x35ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_35acec:
    // 0x35acec: 0x8d23e3d8  lw          $v1, -0x1C28($t1)
    ctx->pc = 0x35acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_35acf0:
    // 0x35acf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35acf4:
    // 0x35acf4: 0xaca2e3c0  sw          $v0, -0x1C40($a1)
    ctx->pc = 0x35acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960064), GPR_U32(ctx, 2));
label_35acf8:
    // 0x35acf8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_35acfc:
    // 0x35acfc: 0xad03e3d8  sw          $v1, -0x1C28($t0)
    ctx->pc = 0x35acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 3));
label_35ad00:
    // 0x35ad00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ad04:
    // 0x35ad04: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35ad08:
    // 0x35ad08: 0xc04e4a4  jal         func_139290
label_35ad0c:
    if (ctx->pc == 0x35AD0Cu) {
        ctx->pc = 0x35AD0Cu;
            // 0x35ad0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AD10u;
        goto label_35ad10;
    }
    ctx->pc = 0x35AD08u;
    SET_GPR_U32(ctx, 31, 0x35AD10u);
    ctx->pc = 0x35AD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD08u;
            // 0x35ad0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD10u; }
        if (ctx->pc != 0x35AD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD10u; }
        if (ctx->pc != 0x35AD10u) { return; }
    }
    ctx->pc = 0x35AD10u;
label_35ad10:
    // 0x35ad10: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35ad14:
    // 0x35ad14: 0xc44144d8  lwc1        $f1, 0x44D8($v0)
    ctx->pc = 0x35ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35ad18:
    // 0x35ad18: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x35ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ad1c:
    // 0x35ad1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35ad1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35ad20:
    // 0x35ad20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_35ad24:
    if (ctx->pc == 0x35AD24u) {
        ctx->pc = 0x35AD24u;
            // 0x35ad24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35AD28u;
        goto label_35ad28;
    }
    ctx->pc = 0x35AD20u;
    {
        const bool branch_taken_0x35ad20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD20u;
            // 0x35ad24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad20) {
            ctx->pc = 0x35AD2Cu;
            goto label_35ad2c;
        }
    }
    ctx->pc = 0x35AD28u;
label_35ad28:
    // 0x35ad28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ad28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ad2c:
    // 0x35ad2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35ad2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35ad30:
    // 0x35ad30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ad30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ad34:
    // 0x35ad34: 0x161280  sll         $v0, $s6, 10
    ctx->pc = 0x35ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 10));
label_35ad38:
    // 0x35ad38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35ad3c:
    // 0x35ad3c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x35ad3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35ad40:
    // 0x35ad40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35ad44:
    // 0x35ad44: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x35ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_35ad48:
    // 0x35ad48: 0xc04cdd0  jal         func_133740
label_35ad4c:
    if (ctx->pc == 0x35AD4Cu) {
        ctx->pc = 0x35AD4Cu;
            // 0x35ad4c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x35AD50u;
        goto label_35ad50;
    }
    ctx->pc = 0x35AD48u;
    SET_GPR_U32(ctx, 31, 0x35AD50u);
    ctx->pc = 0x35AD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD48u;
            // 0x35ad4c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD50u; }
        if (ctx->pc != 0x35AD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD50u; }
        if (ctx->pc != 0x35AD50u) { return; }
    }
    ctx->pc = 0x35AD50u;
label_35ad50:
    // 0x35ad50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ad54:
    // 0x35ad54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35ad58:
    // 0x35ad58: 0xc04cd60  jal         func_133580
label_35ad5c:
    if (ctx->pc == 0x35AD5Cu) {
        ctx->pc = 0x35AD5Cu;
            // 0x35ad5c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x35AD60u;
        goto label_35ad60;
    }
    ctx->pc = 0x35AD58u;
    SET_GPR_U32(ctx, 31, 0x35AD60u);
    ctx->pc = 0x35AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD58u;
            // 0x35ad5c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD60u; }
        if (ctx->pc != 0x35AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD60u; }
        if (ctx->pc != 0x35AD60u) { return; }
    }
    ctx->pc = 0x35AD60u;
label_35ad60:
    // 0x35ad60: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x35ad60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ad64:
    // 0x35ad64: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x35ad64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_35ad68:
    // 0x35ad68: 0x320f809  jalr        $t9
label_35ad6c:
    if (ctx->pc == 0x35AD6Cu) {
        ctx->pc = 0x35AD6Cu;
            // 0x35ad6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AD70u;
        goto label_35ad70;
    }
    ctx->pc = 0x35AD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35AD70u);
        ctx->pc = 0x35AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD68u;
            // 0x35ad6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35AD70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35AD70u; }
            if (ctx->pc != 0x35AD70u) { return; }
        }
        }
    }
    ctx->pc = 0x35AD70u;
label_35ad70:
    // 0x35ad70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x35ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ad74:
    // 0x35ad74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35ad78:
    // 0x35ad78: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35ad78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35ad7c:
    // 0x35ad7c: 0xc054fd4  jal         func_153F50
label_35ad80:
    if (ctx->pc == 0x35AD80u) {
        ctx->pc = 0x35AD80u;
            // 0x35ad80: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AD84u;
        goto label_35ad84;
    }
    ctx->pc = 0x35AD7Cu;
    SET_GPR_U32(ctx, 31, 0x35AD84u);
    ctx->pc = 0x35AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AD7Cu;
            // 0x35ad80: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD84u; }
        if (ctx->pc != 0x35AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AD84u; }
        if (ctx->pc != 0x35AD84u) { return; }
    }
    ctx->pc = 0x35AD84u;
label_35ad84:
    // 0x35ad84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x35ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_35ad88:
    // 0x35ad88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35ad8c:
    // 0x35ad8c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35ad8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35ad90:
    // 0x35ad90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35ad94:
    // 0x35ad94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35ad94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35ad98:
    // 0x35ad98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35ad98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35ad9c:
    // 0x35ad9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35ad9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35ada0:
    // 0x35ada0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35ada0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35ada4:
    // 0x35ada4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ada4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35ada8:
    // 0x35ada8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35ada8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35adac:
    // 0x35adac: 0x3e00008  jr          $ra
label_35adb0:
    if (ctx->pc == 0x35ADB0u) {
        ctx->pc = 0x35ADB0u;
            // 0x35adb0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x35ADB4u;
        goto label_35adb4;
    }
    ctx->pc = 0x35ADACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35ADACu;
            // 0x35adb0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35ADB4u;
label_35adb4:
    // 0x35adb4: 0x0  nop
    ctx->pc = 0x35adb4u;
    // NOP
label_35adb8:
    // 0x35adb8: 0x0  nop
    ctx->pc = 0x35adb8u;
    // NOP
label_35adbc:
    // 0x35adbc: 0x0  nop
    ctx->pc = 0x35adbcu;
    // NOP
label_35adc0:
    // 0x35adc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35adc4:
    // 0x35adc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35adc8:
    // 0x35adc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35adcc:
    // 0x35adcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35add0:
    // 0x35add0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35add4:
    // 0x35add4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35add8:
    // 0x35add8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35add8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35addc:
    // 0x35addc: 0x10a30030  beq         $a1, $v1, . + 4 + (0x30 << 2)
label_35ade0:
    if (ctx->pc == 0x35ADE0u) {
        ctx->pc = 0x35ADE0u;
            // 0x35ade0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ADE4u;
        goto label_35ade4;
    }
    ctx->pc = 0x35ADDCu;
    {
        const bool branch_taken_0x35addc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35ADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35ADDCu;
            // 0x35ade0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35addc) {
            ctx->pc = 0x35AEA0u;
            goto label_35aea0;
        }
    }
    ctx->pc = 0x35ADE4u;
label_35ade4:
    // 0x35ade4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35ade8:
    // 0x35ade8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_35adec:
    if (ctx->pc == 0x35ADECu) {
        ctx->pc = 0x35ADF0u;
        goto label_35adf0;
    }
    ctx->pc = 0x35ADE8u;
    {
        const bool branch_taken_0x35ade8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ade8) {
            ctx->pc = 0x35AE04u;
            goto label_35ae04;
        }
    }
    ctx->pc = 0x35ADF0u;
label_35adf0:
    // 0x35adf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35adf4:
    // 0x35adf4: 0x10a3004c  beq         $a1, $v1, . + 4 + (0x4C << 2)
label_35adf8:
    if (ctx->pc == 0x35ADF8u) {
        ctx->pc = 0x35ADFCu;
        goto label_35adfc;
    }
    ctx->pc = 0x35ADF4u;
    {
        const bool branch_taken_0x35adf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35adf4) {
            ctx->pc = 0x35AF28u;
            goto label_35af28;
        }
    }
    ctx->pc = 0x35ADFCu;
label_35adfc:
    // 0x35adfc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_35ae00:
    if (ctx->pc == 0x35AE00u) {
        ctx->pc = 0x35AE04u;
        goto label_35ae04;
    }
    ctx->pc = 0x35ADFCu;
    {
        const bool branch_taken_0x35adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35adfc) {
            ctx->pc = 0x35AF28u;
            goto label_35af28;
        }
    }
    ctx->pc = 0x35AE04u;
label_35ae04:
    // 0x35ae04: 0xc0d6bd8  jal         func_35AF60
label_35ae08:
    if (ctx->pc == 0x35AE08u) {
        ctx->pc = 0x35AE0Cu;
        goto label_35ae0c;
    }
    ctx->pc = 0x35AE04u;
    SET_GPR_U32(ctx, 31, 0x35AE0Cu);
    ctx->pc = 0x35AF60u;
    if (runtime->hasFunction(0x35AF60u)) {
        auto targetFn = runtime->lookupFunction(0x35AF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE0Cu; }
        if (ctx->pc != 0x35AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035AF60_0x35af60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE0Cu; }
        if (ctx->pc != 0x35AE0Cu) { return; }
    }
    ctx->pc = 0x35AE0Cu;
label_35ae0c:
    // 0x35ae0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ae0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ae10:
    // 0x35ae10: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_35ae14:
    if (ctx->pc == 0x35AE14u) {
        ctx->pc = 0x35AE14u;
            // 0x35ae14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AE18u;
        goto label_35ae18;
    }
    ctx->pc = 0x35AE10u;
    {
        const bool branch_taken_0x35ae10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE10u;
            // 0x35ae14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae10) {
            ctx->pc = 0x35AE40u;
            goto label_35ae40;
        }
    }
    ctx->pc = 0x35AE18u;
label_35ae18:
    // 0x35ae18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ae1c:
    // 0x35ae1c: 0xc0d6bd0  jal         func_35AF40
label_35ae20:
    if (ctx->pc == 0x35AE20u) {
        ctx->pc = 0x35AE20u;
            // 0x35ae20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AE24u;
        goto label_35ae24;
    }
    ctx->pc = 0x35AE1Cu;
    SET_GPR_U32(ctx, 31, 0x35AE24u);
    ctx->pc = 0x35AE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE1Cu;
            // 0x35ae20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35AF40u;
    if (runtime->hasFunction(0x35AF40u)) {
        auto targetFn = runtime->lookupFunction(0x35AF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE24u; }
        if (ctx->pc != 0x35AE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035AF40_0x35af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE24u; }
        if (ctx->pc != 0x35AE24u) { return; }
    }
    ctx->pc = 0x35AE24u;
label_35ae24:
    // 0x35ae24: 0xc0d7234  jal         func_35C8D0
label_35ae28:
    if (ctx->pc == 0x35AE28u) {
        ctx->pc = 0x35AE28u;
            // 0x35ae28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AE2Cu;
        goto label_35ae2c;
    }
    ctx->pc = 0x35AE24u;
    SET_GPR_U32(ctx, 31, 0x35AE2Cu);
    ctx->pc = 0x35AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE24u;
            // 0x35ae28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C8D0u;
    if (runtime->hasFunction(0x35C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x35C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE2Cu; }
        if (ctx->pc != 0x35AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C8D0_0x35c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE2Cu; }
        if (ctx->pc != 0x35AE2Cu) { return; }
    }
    ctx->pc = 0x35AE2Cu;
label_35ae2c:
    // 0x35ae2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35ae2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35ae30:
    // 0x35ae30: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x35ae30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_35ae34:
    // 0x35ae34: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_35ae38:
    if (ctx->pc == 0x35AE38u) {
        ctx->pc = 0x35AE38u;
            // 0x35ae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AE3Cu;
        goto label_35ae3c;
    }
    ctx->pc = 0x35AE34u;
    {
        const bool branch_taken_0x35ae34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ae34) {
            ctx->pc = 0x35AE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE34u;
            // 0x35ae38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35AE1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ae1c;
        }
    }
    ctx->pc = 0x35AE3Cu;
label_35ae3c:
    // 0x35ae3c: 0x0  nop
    ctx->pc = 0x35ae3cu;
    // NOP
label_35ae40:
    // 0x35ae40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ae40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ae44:
    // 0x35ae44: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x35ae44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ae48:
    // 0x35ae48: 0xc0d70bc  jal         func_35C2F0
label_35ae4c:
    if (ctx->pc == 0x35AE4Cu) {
        ctx->pc = 0x35AE4Cu;
            // 0x35ae4c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x35AE50u;
        goto label_35ae50;
    }
    ctx->pc = 0x35AE48u;
    SET_GPR_U32(ctx, 31, 0x35AE50u);
    ctx->pc = 0x35AE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE48u;
            // 0x35ae4c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C2F0u;
    if (runtime->hasFunction(0x35C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x35C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE50u; }
        if (ctx->pc != 0x35AE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C2F0_0x35c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE50u; }
        if (ctx->pc != 0x35AE50u) { return; }
    }
    ctx->pc = 0x35AE50u;
label_35ae50:
    // 0x35ae50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35ae50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35ae54:
    // 0x35ae54: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x35ae54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_35ae58:
    // 0x35ae58: 0x2e220080  sltiu       $v0, $s1, 0x80
    ctx->pc = 0x35ae58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_35ae5c:
    // 0x35ae5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_35ae60:
    if (ctx->pc == 0x35AE60u) {
        ctx->pc = 0x35AE64u;
        goto label_35ae64;
    }
    ctx->pc = 0x35AE5Cu;
    {
        const bool branch_taken_0x35ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ae5c) {
            ctx->pc = 0x35AE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ae48;
        }
    }
    ctx->pc = 0x35AE64u;
label_35ae64:
    // 0x35ae64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ae64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ae68:
    // 0x35ae68: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x35ae68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ae6c:
    // 0x35ae6c: 0xc0d6ddc  jal         func_35B770
label_35ae70:
    if (ctx->pc == 0x35AE70u) {
        ctx->pc = 0x35AE70u;
            // 0x35ae70: 0x264438a0  addiu       $a0, $s2, 0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14496));
        ctx->pc = 0x35AE74u;
        goto label_35ae74;
    }
    ctx->pc = 0x35AE6Cu;
    SET_GPR_U32(ctx, 31, 0x35AE74u);
    ctx->pc = 0x35AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE6Cu;
            // 0x35ae70: 0x264438a0  addiu       $a0, $s2, 0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35B770u;
    if (runtime->hasFunction(0x35B770u)) {
        auto targetFn = runtime->lookupFunction(0x35B770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE74u; }
        if (ctx->pc != 0x35AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035B770_0x35b770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AE74u; }
        if (ctx->pc != 0x35AE74u) { return; }
    }
    ctx->pc = 0x35AE74u;
label_35ae74:
    // 0x35ae74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35ae74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35ae78:
    // 0x35ae78: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x35ae78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_35ae7c:
    // 0x35ae7c: 0x2e220064  sltiu       $v0, $s1, 0x64
    ctx->pc = 0x35ae7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_35ae80:
    // 0x35ae80: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_35ae84:
    if (ctx->pc == 0x35AE84u) {
        ctx->pc = 0x35AE88u;
        goto label_35ae88;
    }
    ctx->pc = 0x35AE80u;
    {
        const bool branch_taken_0x35ae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ae80) {
            ctx->pc = 0x35AE6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35ae6c;
        }
    }
    ctx->pc = 0x35AE88u;
label_35ae88:
    // 0x35ae88: 0xc0d6970  jal         func_35A5C0
label_35ae8c:
    if (ctx->pc == 0x35AE8Cu) {
        ctx->pc = 0x35AE8Cu;
            // 0x35ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AE90u;
        goto label_35ae90;
    }
    ctx->pc = 0x35AE88u;
    SET_GPR_U32(ctx, 31, 0x35AE90u);
    ctx->pc = 0x35AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE88u;
            // 0x35ae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A5C0u;
    goto label_35a5c0;
    ctx->pc = 0x35AE90u;
label_35ae90:
    // 0x35ae90: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x35ae90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35ae94:
    // 0x35ae94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x35ae94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_35ae98:
    // 0x35ae98: 0x320f809  jalr        $t9
label_35ae9c:
    if (ctx->pc == 0x35AE9Cu) {
        ctx->pc = 0x35AE9Cu;
            // 0x35ae9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35AEA0u;
        goto label_35aea0;
    }
    ctx->pc = 0x35AE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35AEA0u);
        ctx->pc = 0x35AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AE98u;
            // 0x35ae9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35AEA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35AEA0u; }
            if (ctx->pc != 0x35AEA0u) { return; }
        }
        }
    }
    ctx->pc = 0x35AEA0u;
label_35aea0:
    // 0x35aea0: 0xae006ac0  sw          $zero, 0x6AC0($s0)
    ctx->pc = 0x35aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27328), GPR_U32(ctx, 0));
label_35aea4:
    // 0x35aea4: 0x8e036aa8  lw          $v1, 0x6AA8($s0)
    ctx->pc = 0x35aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27304)));
label_35aea8:
    // 0x35aea8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_35aeac:
    if (ctx->pc == 0x35AEACu) {
        ctx->pc = 0x35AEACu;
            // 0x35aeac: 0x26116aa4  addiu       $s1, $s0, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 27300));
        ctx->pc = 0x35AEB0u;
        goto label_35aeb0;
    }
    ctx->pc = 0x35AEA8u;
    {
        const bool branch_taken_0x35aea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AEA8u;
            // 0x35aeac: 0x26116aa4  addiu       $s1, $s0, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 27300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aea8) {
            ctx->pc = 0x35AF28u;
            goto label_35af28;
        }
    }
    ctx->pc = 0x35AEB0u;
label_35aeb0:
    // 0x35aeb0: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x35aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_35aeb4:
    // 0x35aeb4: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x35aeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_35aeb8:
    // 0x35aeb8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x35aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_35aebc:
    // 0x35aebc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35aebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35aec0:
    // 0x35aec0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x35aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35aec4:
    // 0x35aec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35aec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35aec8:
    // 0x35aec8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x35aec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_35aecc:
    // 0x35aecc: 0x320f809  jalr        $t9
label_35aed0:
    if (ctx->pc == 0x35AED0u) {
        ctx->pc = 0x35AED4u;
        goto label_35aed4;
    }
    ctx->pc = 0x35AECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35AED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35AED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35AED4u; }
            if (ctx->pc != 0x35AED4u) { return; }
        }
        }
    }
    ctx->pc = 0x35AED4u;
label_35aed4:
    // 0x35aed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35aed8:
    // 0x35aed8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_35aedc:
    if (ctx->pc == 0x35AEDCu) {
        ctx->pc = 0x35AEE0u;
        goto label_35aee0;
    }
    ctx->pc = 0x35AED8u;
    {
        const bool branch_taken_0x35aed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35aed8) {
            ctx->pc = 0x35AF08u;
            goto label_35af08;
        }
    }
    ctx->pc = 0x35AEE0u;
label_35aee0:
    // 0x35aee0: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x35aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_35aee4:
    // 0x35aee4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x35aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_35aee8:
    // 0x35aee8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35aee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35aeec:
    // 0x35aeec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35aef0:
    // 0x35aef0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x35aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_35aef4:
    // 0x35aef4: 0xc0582ac  jal         func_160AB0
label_35aef8:
    if (ctx->pc == 0x35AEF8u) {
        ctx->pc = 0x35AEF8u;
            // 0x35aef8: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->pc = 0x35AEFCu;
        goto label_35aefc;
    }
    ctx->pc = 0x35AEF4u;
    SET_GPR_U32(ctx, 31, 0x35AEFCu);
    ctx->pc = 0x35AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35AEF4u;
            // 0x35aef8: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AEFCu; }
        if (ctx->pc != 0x35AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35AEFCu; }
        if (ctx->pc != 0x35AEFCu) { return; }
    }
    ctx->pc = 0x35AEFCu;
label_35aefc:
    // 0x35aefc: 0x10000006  b           . + 4 + (0x6 << 2)
label_35af00:
    if (ctx->pc == 0x35AF00u) {
        ctx->pc = 0x35AF00u;
            // 0x35af00: 0x8fb20048  lw          $s2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x35AF04u;
        goto label_35af04;
    }
    ctx->pc = 0x35AEFCu;
    {
        const bool branch_taken_0x35aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AEFCu;
            // 0x35af00: 0x8fb20048  lw          $s2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aefc) {
            ctx->pc = 0x35AF18u;
            goto label_35af18;
        }
    }
    ctx->pc = 0x35AF04u;
label_35af04:
    // 0x35af04: 0x0  nop
    ctx->pc = 0x35af04u;
    // NOP
label_35af08:
    // 0x35af08: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x35af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_35af0c:
    // 0x35af0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35af0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35af10:
    // 0x35af10: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x35af10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35af14:
    // 0x35af14: 0x0  nop
    ctx->pc = 0x35af14u;
    // NOP
label_35af18:
    // 0x35af18: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x35af18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_35af1c:
    // 0x35af1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35af1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_35af20:
    // 0x35af20: 0x5470ffe6  bnel        $v1, $s0, . + 4 + (-0x1A << 2)
label_35af24:
    if (ctx->pc == 0x35AF24u) {
        ctx->pc = 0x35AF24u;
            // 0x35af24: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->pc = 0x35AF28u;
        goto label_35af28;
    }
    ctx->pc = 0x35AF20u;
    {
        const bool branch_taken_0x35af20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x35af20) {
            ctx->pc = 0x35AF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35AF20u;
            // 0x35af24: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35AEBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35aebc;
        }
    }
    ctx->pc = 0x35AF28u;
label_35af28:
    // 0x35af28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35af2c:
    // 0x35af2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35af2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35af30:
    // 0x35af30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35af34:
    // 0x35af34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35af34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35af38:
    // 0x35af38: 0x3e00008  jr          $ra
label_35af3c:
    if (ctx->pc == 0x35AF3Cu) {
        ctx->pc = 0x35AF3Cu;
            // 0x35af3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x35AF40u;
        goto label_fallthrough_0x35af38;
    }
    ctx->pc = 0x35AF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35AF38u;
            // 0x35af3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x35af38:
    ctx->pc = 0x35AF40u;
}
