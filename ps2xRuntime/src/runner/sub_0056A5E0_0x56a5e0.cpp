#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056A5E0
// Address: 0x56a5e0 - 0x56ae40
void sub_0056A5E0_0x56a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056A5E0_0x56a5e0");
#endif

    switch (ctx->pc) {
        case 0x56a5e0u: goto label_56a5e0;
        case 0x56a5e4u: goto label_56a5e4;
        case 0x56a5e8u: goto label_56a5e8;
        case 0x56a5ecu: goto label_56a5ec;
        case 0x56a5f0u: goto label_56a5f0;
        case 0x56a5f4u: goto label_56a5f4;
        case 0x56a5f8u: goto label_56a5f8;
        case 0x56a5fcu: goto label_56a5fc;
        case 0x56a600u: goto label_56a600;
        case 0x56a604u: goto label_56a604;
        case 0x56a608u: goto label_56a608;
        case 0x56a60cu: goto label_56a60c;
        case 0x56a610u: goto label_56a610;
        case 0x56a614u: goto label_56a614;
        case 0x56a618u: goto label_56a618;
        case 0x56a61cu: goto label_56a61c;
        case 0x56a620u: goto label_56a620;
        case 0x56a624u: goto label_56a624;
        case 0x56a628u: goto label_56a628;
        case 0x56a62cu: goto label_56a62c;
        case 0x56a630u: goto label_56a630;
        case 0x56a634u: goto label_56a634;
        case 0x56a638u: goto label_56a638;
        case 0x56a63cu: goto label_56a63c;
        case 0x56a640u: goto label_56a640;
        case 0x56a644u: goto label_56a644;
        case 0x56a648u: goto label_56a648;
        case 0x56a64cu: goto label_56a64c;
        case 0x56a650u: goto label_56a650;
        case 0x56a654u: goto label_56a654;
        case 0x56a658u: goto label_56a658;
        case 0x56a65cu: goto label_56a65c;
        case 0x56a660u: goto label_56a660;
        case 0x56a664u: goto label_56a664;
        case 0x56a668u: goto label_56a668;
        case 0x56a66cu: goto label_56a66c;
        case 0x56a670u: goto label_56a670;
        case 0x56a674u: goto label_56a674;
        case 0x56a678u: goto label_56a678;
        case 0x56a67cu: goto label_56a67c;
        case 0x56a680u: goto label_56a680;
        case 0x56a684u: goto label_56a684;
        case 0x56a688u: goto label_56a688;
        case 0x56a68cu: goto label_56a68c;
        case 0x56a690u: goto label_56a690;
        case 0x56a694u: goto label_56a694;
        case 0x56a698u: goto label_56a698;
        case 0x56a69cu: goto label_56a69c;
        case 0x56a6a0u: goto label_56a6a0;
        case 0x56a6a4u: goto label_56a6a4;
        case 0x56a6a8u: goto label_56a6a8;
        case 0x56a6acu: goto label_56a6ac;
        case 0x56a6b0u: goto label_56a6b0;
        case 0x56a6b4u: goto label_56a6b4;
        case 0x56a6b8u: goto label_56a6b8;
        case 0x56a6bcu: goto label_56a6bc;
        case 0x56a6c0u: goto label_56a6c0;
        case 0x56a6c4u: goto label_56a6c4;
        case 0x56a6c8u: goto label_56a6c8;
        case 0x56a6ccu: goto label_56a6cc;
        case 0x56a6d0u: goto label_56a6d0;
        case 0x56a6d4u: goto label_56a6d4;
        case 0x56a6d8u: goto label_56a6d8;
        case 0x56a6dcu: goto label_56a6dc;
        case 0x56a6e0u: goto label_56a6e0;
        case 0x56a6e4u: goto label_56a6e4;
        case 0x56a6e8u: goto label_56a6e8;
        case 0x56a6ecu: goto label_56a6ec;
        case 0x56a6f0u: goto label_56a6f0;
        case 0x56a6f4u: goto label_56a6f4;
        case 0x56a6f8u: goto label_56a6f8;
        case 0x56a6fcu: goto label_56a6fc;
        case 0x56a700u: goto label_56a700;
        case 0x56a704u: goto label_56a704;
        case 0x56a708u: goto label_56a708;
        case 0x56a70cu: goto label_56a70c;
        case 0x56a710u: goto label_56a710;
        case 0x56a714u: goto label_56a714;
        case 0x56a718u: goto label_56a718;
        case 0x56a71cu: goto label_56a71c;
        case 0x56a720u: goto label_56a720;
        case 0x56a724u: goto label_56a724;
        case 0x56a728u: goto label_56a728;
        case 0x56a72cu: goto label_56a72c;
        case 0x56a730u: goto label_56a730;
        case 0x56a734u: goto label_56a734;
        case 0x56a738u: goto label_56a738;
        case 0x56a73cu: goto label_56a73c;
        case 0x56a740u: goto label_56a740;
        case 0x56a744u: goto label_56a744;
        case 0x56a748u: goto label_56a748;
        case 0x56a74cu: goto label_56a74c;
        case 0x56a750u: goto label_56a750;
        case 0x56a754u: goto label_56a754;
        case 0x56a758u: goto label_56a758;
        case 0x56a75cu: goto label_56a75c;
        case 0x56a760u: goto label_56a760;
        case 0x56a764u: goto label_56a764;
        case 0x56a768u: goto label_56a768;
        case 0x56a76cu: goto label_56a76c;
        case 0x56a770u: goto label_56a770;
        case 0x56a774u: goto label_56a774;
        case 0x56a778u: goto label_56a778;
        case 0x56a77cu: goto label_56a77c;
        case 0x56a780u: goto label_56a780;
        case 0x56a784u: goto label_56a784;
        case 0x56a788u: goto label_56a788;
        case 0x56a78cu: goto label_56a78c;
        case 0x56a790u: goto label_56a790;
        case 0x56a794u: goto label_56a794;
        case 0x56a798u: goto label_56a798;
        case 0x56a79cu: goto label_56a79c;
        case 0x56a7a0u: goto label_56a7a0;
        case 0x56a7a4u: goto label_56a7a4;
        case 0x56a7a8u: goto label_56a7a8;
        case 0x56a7acu: goto label_56a7ac;
        case 0x56a7b0u: goto label_56a7b0;
        case 0x56a7b4u: goto label_56a7b4;
        case 0x56a7b8u: goto label_56a7b8;
        case 0x56a7bcu: goto label_56a7bc;
        case 0x56a7c0u: goto label_56a7c0;
        case 0x56a7c4u: goto label_56a7c4;
        case 0x56a7c8u: goto label_56a7c8;
        case 0x56a7ccu: goto label_56a7cc;
        case 0x56a7d0u: goto label_56a7d0;
        case 0x56a7d4u: goto label_56a7d4;
        case 0x56a7d8u: goto label_56a7d8;
        case 0x56a7dcu: goto label_56a7dc;
        case 0x56a7e0u: goto label_56a7e0;
        case 0x56a7e4u: goto label_56a7e4;
        case 0x56a7e8u: goto label_56a7e8;
        case 0x56a7ecu: goto label_56a7ec;
        case 0x56a7f0u: goto label_56a7f0;
        case 0x56a7f4u: goto label_56a7f4;
        case 0x56a7f8u: goto label_56a7f8;
        case 0x56a7fcu: goto label_56a7fc;
        case 0x56a800u: goto label_56a800;
        case 0x56a804u: goto label_56a804;
        case 0x56a808u: goto label_56a808;
        case 0x56a80cu: goto label_56a80c;
        case 0x56a810u: goto label_56a810;
        case 0x56a814u: goto label_56a814;
        case 0x56a818u: goto label_56a818;
        case 0x56a81cu: goto label_56a81c;
        case 0x56a820u: goto label_56a820;
        case 0x56a824u: goto label_56a824;
        case 0x56a828u: goto label_56a828;
        case 0x56a82cu: goto label_56a82c;
        case 0x56a830u: goto label_56a830;
        case 0x56a834u: goto label_56a834;
        case 0x56a838u: goto label_56a838;
        case 0x56a83cu: goto label_56a83c;
        case 0x56a840u: goto label_56a840;
        case 0x56a844u: goto label_56a844;
        case 0x56a848u: goto label_56a848;
        case 0x56a84cu: goto label_56a84c;
        case 0x56a850u: goto label_56a850;
        case 0x56a854u: goto label_56a854;
        case 0x56a858u: goto label_56a858;
        case 0x56a85cu: goto label_56a85c;
        case 0x56a860u: goto label_56a860;
        case 0x56a864u: goto label_56a864;
        case 0x56a868u: goto label_56a868;
        case 0x56a86cu: goto label_56a86c;
        case 0x56a870u: goto label_56a870;
        case 0x56a874u: goto label_56a874;
        case 0x56a878u: goto label_56a878;
        case 0x56a87cu: goto label_56a87c;
        case 0x56a880u: goto label_56a880;
        case 0x56a884u: goto label_56a884;
        case 0x56a888u: goto label_56a888;
        case 0x56a88cu: goto label_56a88c;
        case 0x56a890u: goto label_56a890;
        case 0x56a894u: goto label_56a894;
        case 0x56a898u: goto label_56a898;
        case 0x56a89cu: goto label_56a89c;
        case 0x56a8a0u: goto label_56a8a0;
        case 0x56a8a4u: goto label_56a8a4;
        case 0x56a8a8u: goto label_56a8a8;
        case 0x56a8acu: goto label_56a8ac;
        case 0x56a8b0u: goto label_56a8b0;
        case 0x56a8b4u: goto label_56a8b4;
        case 0x56a8b8u: goto label_56a8b8;
        case 0x56a8bcu: goto label_56a8bc;
        case 0x56a8c0u: goto label_56a8c0;
        case 0x56a8c4u: goto label_56a8c4;
        case 0x56a8c8u: goto label_56a8c8;
        case 0x56a8ccu: goto label_56a8cc;
        case 0x56a8d0u: goto label_56a8d0;
        case 0x56a8d4u: goto label_56a8d4;
        case 0x56a8d8u: goto label_56a8d8;
        case 0x56a8dcu: goto label_56a8dc;
        case 0x56a8e0u: goto label_56a8e0;
        case 0x56a8e4u: goto label_56a8e4;
        case 0x56a8e8u: goto label_56a8e8;
        case 0x56a8ecu: goto label_56a8ec;
        case 0x56a8f0u: goto label_56a8f0;
        case 0x56a8f4u: goto label_56a8f4;
        case 0x56a8f8u: goto label_56a8f8;
        case 0x56a8fcu: goto label_56a8fc;
        case 0x56a900u: goto label_56a900;
        case 0x56a904u: goto label_56a904;
        case 0x56a908u: goto label_56a908;
        case 0x56a90cu: goto label_56a90c;
        case 0x56a910u: goto label_56a910;
        case 0x56a914u: goto label_56a914;
        case 0x56a918u: goto label_56a918;
        case 0x56a91cu: goto label_56a91c;
        case 0x56a920u: goto label_56a920;
        case 0x56a924u: goto label_56a924;
        case 0x56a928u: goto label_56a928;
        case 0x56a92cu: goto label_56a92c;
        case 0x56a930u: goto label_56a930;
        case 0x56a934u: goto label_56a934;
        case 0x56a938u: goto label_56a938;
        case 0x56a93cu: goto label_56a93c;
        case 0x56a940u: goto label_56a940;
        case 0x56a944u: goto label_56a944;
        case 0x56a948u: goto label_56a948;
        case 0x56a94cu: goto label_56a94c;
        case 0x56a950u: goto label_56a950;
        case 0x56a954u: goto label_56a954;
        case 0x56a958u: goto label_56a958;
        case 0x56a95cu: goto label_56a95c;
        case 0x56a960u: goto label_56a960;
        case 0x56a964u: goto label_56a964;
        case 0x56a968u: goto label_56a968;
        case 0x56a96cu: goto label_56a96c;
        case 0x56a970u: goto label_56a970;
        case 0x56a974u: goto label_56a974;
        case 0x56a978u: goto label_56a978;
        case 0x56a97cu: goto label_56a97c;
        case 0x56a980u: goto label_56a980;
        case 0x56a984u: goto label_56a984;
        case 0x56a988u: goto label_56a988;
        case 0x56a98cu: goto label_56a98c;
        case 0x56a990u: goto label_56a990;
        case 0x56a994u: goto label_56a994;
        case 0x56a998u: goto label_56a998;
        case 0x56a99cu: goto label_56a99c;
        case 0x56a9a0u: goto label_56a9a0;
        case 0x56a9a4u: goto label_56a9a4;
        case 0x56a9a8u: goto label_56a9a8;
        case 0x56a9acu: goto label_56a9ac;
        case 0x56a9b0u: goto label_56a9b0;
        case 0x56a9b4u: goto label_56a9b4;
        case 0x56a9b8u: goto label_56a9b8;
        case 0x56a9bcu: goto label_56a9bc;
        case 0x56a9c0u: goto label_56a9c0;
        case 0x56a9c4u: goto label_56a9c4;
        case 0x56a9c8u: goto label_56a9c8;
        case 0x56a9ccu: goto label_56a9cc;
        case 0x56a9d0u: goto label_56a9d0;
        case 0x56a9d4u: goto label_56a9d4;
        case 0x56a9d8u: goto label_56a9d8;
        case 0x56a9dcu: goto label_56a9dc;
        case 0x56a9e0u: goto label_56a9e0;
        case 0x56a9e4u: goto label_56a9e4;
        case 0x56a9e8u: goto label_56a9e8;
        case 0x56a9ecu: goto label_56a9ec;
        case 0x56a9f0u: goto label_56a9f0;
        case 0x56a9f4u: goto label_56a9f4;
        case 0x56a9f8u: goto label_56a9f8;
        case 0x56a9fcu: goto label_56a9fc;
        case 0x56aa00u: goto label_56aa00;
        case 0x56aa04u: goto label_56aa04;
        case 0x56aa08u: goto label_56aa08;
        case 0x56aa0cu: goto label_56aa0c;
        case 0x56aa10u: goto label_56aa10;
        case 0x56aa14u: goto label_56aa14;
        case 0x56aa18u: goto label_56aa18;
        case 0x56aa1cu: goto label_56aa1c;
        case 0x56aa20u: goto label_56aa20;
        case 0x56aa24u: goto label_56aa24;
        case 0x56aa28u: goto label_56aa28;
        case 0x56aa2cu: goto label_56aa2c;
        case 0x56aa30u: goto label_56aa30;
        case 0x56aa34u: goto label_56aa34;
        case 0x56aa38u: goto label_56aa38;
        case 0x56aa3cu: goto label_56aa3c;
        case 0x56aa40u: goto label_56aa40;
        case 0x56aa44u: goto label_56aa44;
        case 0x56aa48u: goto label_56aa48;
        case 0x56aa4cu: goto label_56aa4c;
        case 0x56aa50u: goto label_56aa50;
        case 0x56aa54u: goto label_56aa54;
        case 0x56aa58u: goto label_56aa58;
        case 0x56aa5cu: goto label_56aa5c;
        case 0x56aa60u: goto label_56aa60;
        case 0x56aa64u: goto label_56aa64;
        case 0x56aa68u: goto label_56aa68;
        case 0x56aa6cu: goto label_56aa6c;
        case 0x56aa70u: goto label_56aa70;
        case 0x56aa74u: goto label_56aa74;
        case 0x56aa78u: goto label_56aa78;
        case 0x56aa7cu: goto label_56aa7c;
        case 0x56aa80u: goto label_56aa80;
        case 0x56aa84u: goto label_56aa84;
        case 0x56aa88u: goto label_56aa88;
        case 0x56aa8cu: goto label_56aa8c;
        case 0x56aa90u: goto label_56aa90;
        case 0x56aa94u: goto label_56aa94;
        case 0x56aa98u: goto label_56aa98;
        case 0x56aa9cu: goto label_56aa9c;
        case 0x56aaa0u: goto label_56aaa0;
        case 0x56aaa4u: goto label_56aaa4;
        case 0x56aaa8u: goto label_56aaa8;
        case 0x56aaacu: goto label_56aaac;
        case 0x56aab0u: goto label_56aab0;
        case 0x56aab4u: goto label_56aab4;
        case 0x56aab8u: goto label_56aab8;
        case 0x56aabcu: goto label_56aabc;
        case 0x56aac0u: goto label_56aac0;
        case 0x56aac4u: goto label_56aac4;
        case 0x56aac8u: goto label_56aac8;
        case 0x56aaccu: goto label_56aacc;
        case 0x56aad0u: goto label_56aad0;
        case 0x56aad4u: goto label_56aad4;
        case 0x56aad8u: goto label_56aad8;
        case 0x56aadcu: goto label_56aadc;
        case 0x56aae0u: goto label_56aae0;
        case 0x56aae4u: goto label_56aae4;
        case 0x56aae8u: goto label_56aae8;
        case 0x56aaecu: goto label_56aaec;
        case 0x56aaf0u: goto label_56aaf0;
        case 0x56aaf4u: goto label_56aaf4;
        case 0x56aaf8u: goto label_56aaf8;
        case 0x56aafcu: goto label_56aafc;
        case 0x56ab00u: goto label_56ab00;
        case 0x56ab04u: goto label_56ab04;
        case 0x56ab08u: goto label_56ab08;
        case 0x56ab0cu: goto label_56ab0c;
        case 0x56ab10u: goto label_56ab10;
        case 0x56ab14u: goto label_56ab14;
        case 0x56ab18u: goto label_56ab18;
        case 0x56ab1cu: goto label_56ab1c;
        case 0x56ab20u: goto label_56ab20;
        case 0x56ab24u: goto label_56ab24;
        case 0x56ab28u: goto label_56ab28;
        case 0x56ab2cu: goto label_56ab2c;
        case 0x56ab30u: goto label_56ab30;
        case 0x56ab34u: goto label_56ab34;
        case 0x56ab38u: goto label_56ab38;
        case 0x56ab3cu: goto label_56ab3c;
        case 0x56ab40u: goto label_56ab40;
        case 0x56ab44u: goto label_56ab44;
        case 0x56ab48u: goto label_56ab48;
        case 0x56ab4cu: goto label_56ab4c;
        case 0x56ab50u: goto label_56ab50;
        case 0x56ab54u: goto label_56ab54;
        case 0x56ab58u: goto label_56ab58;
        case 0x56ab5cu: goto label_56ab5c;
        case 0x56ab60u: goto label_56ab60;
        case 0x56ab64u: goto label_56ab64;
        case 0x56ab68u: goto label_56ab68;
        case 0x56ab6cu: goto label_56ab6c;
        case 0x56ab70u: goto label_56ab70;
        case 0x56ab74u: goto label_56ab74;
        case 0x56ab78u: goto label_56ab78;
        case 0x56ab7cu: goto label_56ab7c;
        case 0x56ab80u: goto label_56ab80;
        case 0x56ab84u: goto label_56ab84;
        case 0x56ab88u: goto label_56ab88;
        case 0x56ab8cu: goto label_56ab8c;
        case 0x56ab90u: goto label_56ab90;
        case 0x56ab94u: goto label_56ab94;
        case 0x56ab98u: goto label_56ab98;
        case 0x56ab9cu: goto label_56ab9c;
        case 0x56aba0u: goto label_56aba0;
        case 0x56aba4u: goto label_56aba4;
        case 0x56aba8u: goto label_56aba8;
        case 0x56abacu: goto label_56abac;
        case 0x56abb0u: goto label_56abb0;
        case 0x56abb4u: goto label_56abb4;
        case 0x56abb8u: goto label_56abb8;
        case 0x56abbcu: goto label_56abbc;
        case 0x56abc0u: goto label_56abc0;
        case 0x56abc4u: goto label_56abc4;
        case 0x56abc8u: goto label_56abc8;
        case 0x56abccu: goto label_56abcc;
        case 0x56abd0u: goto label_56abd0;
        case 0x56abd4u: goto label_56abd4;
        case 0x56abd8u: goto label_56abd8;
        case 0x56abdcu: goto label_56abdc;
        case 0x56abe0u: goto label_56abe0;
        case 0x56abe4u: goto label_56abe4;
        case 0x56abe8u: goto label_56abe8;
        case 0x56abecu: goto label_56abec;
        case 0x56abf0u: goto label_56abf0;
        case 0x56abf4u: goto label_56abf4;
        case 0x56abf8u: goto label_56abf8;
        case 0x56abfcu: goto label_56abfc;
        case 0x56ac00u: goto label_56ac00;
        case 0x56ac04u: goto label_56ac04;
        case 0x56ac08u: goto label_56ac08;
        case 0x56ac0cu: goto label_56ac0c;
        case 0x56ac10u: goto label_56ac10;
        case 0x56ac14u: goto label_56ac14;
        case 0x56ac18u: goto label_56ac18;
        case 0x56ac1cu: goto label_56ac1c;
        case 0x56ac20u: goto label_56ac20;
        case 0x56ac24u: goto label_56ac24;
        case 0x56ac28u: goto label_56ac28;
        case 0x56ac2cu: goto label_56ac2c;
        case 0x56ac30u: goto label_56ac30;
        case 0x56ac34u: goto label_56ac34;
        case 0x56ac38u: goto label_56ac38;
        case 0x56ac3cu: goto label_56ac3c;
        case 0x56ac40u: goto label_56ac40;
        case 0x56ac44u: goto label_56ac44;
        case 0x56ac48u: goto label_56ac48;
        case 0x56ac4cu: goto label_56ac4c;
        case 0x56ac50u: goto label_56ac50;
        case 0x56ac54u: goto label_56ac54;
        case 0x56ac58u: goto label_56ac58;
        case 0x56ac5cu: goto label_56ac5c;
        case 0x56ac60u: goto label_56ac60;
        case 0x56ac64u: goto label_56ac64;
        case 0x56ac68u: goto label_56ac68;
        case 0x56ac6cu: goto label_56ac6c;
        case 0x56ac70u: goto label_56ac70;
        case 0x56ac74u: goto label_56ac74;
        case 0x56ac78u: goto label_56ac78;
        case 0x56ac7cu: goto label_56ac7c;
        case 0x56ac80u: goto label_56ac80;
        case 0x56ac84u: goto label_56ac84;
        case 0x56ac88u: goto label_56ac88;
        case 0x56ac8cu: goto label_56ac8c;
        case 0x56ac90u: goto label_56ac90;
        case 0x56ac94u: goto label_56ac94;
        case 0x56ac98u: goto label_56ac98;
        case 0x56ac9cu: goto label_56ac9c;
        case 0x56aca0u: goto label_56aca0;
        case 0x56aca4u: goto label_56aca4;
        case 0x56aca8u: goto label_56aca8;
        case 0x56acacu: goto label_56acac;
        case 0x56acb0u: goto label_56acb0;
        case 0x56acb4u: goto label_56acb4;
        case 0x56acb8u: goto label_56acb8;
        case 0x56acbcu: goto label_56acbc;
        case 0x56acc0u: goto label_56acc0;
        case 0x56acc4u: goto label_56acc4;
        case 0x56acc8u: goto label_56acc8;
        case 0x56acccu: goto label_56accc;
        case 0x56acd0u: goto label_56acd0;
        case 0x56acd4u: goto label_56acd4;
        case 0x56acd8u: goto label_56acd8;
        case 0x56acdcu: goto label_56acdc;
        case 0x56ace0u: goto label_56ace0;
        case 0x56ace4u: goto label_56ace4;
        case 0x56ace8u: goto label_56ace8;
        case 0x56acecu: goto label_56acec;
        case 0x56acf0u: goto label_56acf0;
        case 0x56acf4u: goto label_56acf4;
        case 0x56acf8u: goto label_56acf8;
        case 0x56acfcu: goto label_56acfc;
        case 0x56ad00u: goto label_56ad00;
        case 0x56ad04u: goto label_56ad04;
        case 0x56ad08u: goto label_56ad08;
        case 0x56ad0cu: goto label_56ad0c;
        case 0x56ad10u: goto label_56ad10;
        case 0x56ad14u: goto label_56ad14;
        case 0x56ad18u: goto label_56ad18;
        case 0x56ad1cu: goto label_56ad1c;
        case 0x56ad20u: goto label_56ad20;
        case 0x56ad24u: goto label_56ad24;
        case 0x56ad28u: goto label_56ad28;
        case 0x56ad2cu: goto label_56ad2c;
        case 0x56ad30u: goto label_56ad30;
        case 0x56ad34u: goto label_56ad34;
        case 0x56ad38u: goto label_56ad38;
        case 0x56ad3cu: goto label_56ad3c;
        case 0x56ad40u: goto label_56ad40;
        case 0x56ad44u: goto label_56ad44;
        case 0x56ad48u: goto label_56ad48;
        case 0x56ad4cu: goto label_56ad4c;
        case 0x56ad50u: goto label_56ad50;
        case 0x56ad54u: goto label_56ad54;
        case 0x56ad58u: goto label_56ad58;
        case 0x56ad5cu: goto label_56ad5c;
        case 0x56ad60u: goto label_56ad60;
        case 0x56ad64u: goto label_56ad64;
        case 0x56ad68u: goto label_56ad68;
        case 0x56ad6cu: goto label_56ad6c;
        case 0x56ad70u: goto label_56ad70;
        case 0x56ad74u: goto label_56ad74;
        case 0x56ad78u: goto label_56ad78;
        case 0x56ad7cu: goto label_56ad7c;
        case 0x56ad80u: goto label_56ad80;
        case 0x56ad84u: goto label_56ad84;
        case 0x56ad88u: goto label_56ad88;
        case 0x56ad8cu: goto label_56ad8c;
        case 0x56ad90u: goto label_56ad90;
        case 0x56ad94u: goto label_56ad94;
        case 0x56ad98u: goto label_56ad98;
        case 0x56ad9cu: goto label_56ad9c;
        case 0x56ada0u: goto label_56ada0;
        case 0x56ada4u: goto label_56ada4;
        case 0x56ada8u: goto label_56ada8;
        case 0x56adacu: goto label_56adac;
        case 0x56adb0u: goto label_56adb0;
        case 0x56adb4u: goto label_56adb4;
        case 0x56adb8u: goto label_56adb8;
        case 0x56adbcu: goto label_56adbc;
        case 0x56adc0u: goto label_56adc0;
        case 0x56adc4u: goto label_56adc4;
        case 0x56adc8u: goto label_56adc8;
        case 0x56adccu: goto label_56adcc;
        case 0x56add0u: goto label_56add0;
        case 0x56add4u: goto label_56add4;
        case 0x56add8u: goto label_56add8;
        case 0x56addcu: goto label_56addc;
        case 0x56ade0u: goto label_56ade0;
        case 0x56ade4u: goto label_56ade4;
        case 0x56ade8u: goto label_56ade8;
        case 0x56adecu: goto label_56adec;
        case 0x56adf0u: goto label_56adf0;
        case 0x56adf4u: goto label_56adf4;
        case 0x56adf8u: goto label_56adf8;
        case 0x56adfcu: goto label_56adfc;
        case 0x56ae00u: goto label_56ae00;
        case 0x56ae04u: goto label_56ae04;
        case 0x56ae08u: goto label_56ae08;
        case 0x56ae0cu: goto label_56ae0c;
        case 0x56ae10u: goto label_56ae10;
        case 0x56ae14u: goto label_56ae14;
        case 0x56ae18u: goto label_56ae18;
        case 0x56ae1cu: goto label_56ae1c;
        case 0x56ae20u: goto label_56ae20;
        case 0x56ae24u: goto label_56ae24;
        case 0x56ae28u: goto label_56ae28;
        case 0x56ae2cu: goto label_56ae2c;
        case 0x56ae30u: goto label_56ae30;
        case 0x56ae34u: goto label_56ae34;
        case 0x56ae38u: goto label_56ae38;
        case 0x56ae3cu: goto label_56ae3c;
        default: break;
    }

    ctx->pc = 0x56a5e0u;

label_56a5e0:
    // 0x56a5e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x56a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_56a5e4:
    // 0x56a5e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x56a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a5e8:
    // 0x56a5e8: 0x8c42fe98  lw          $v0, -0x168($v0)
    ctx->pc = 0x56a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966936)));
label_56a5ec:
    // 0x56a5ec: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x56a5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_56a5f0:
    // 0x56a5f0: 0x3e00008  jr          $ra
label_56a5f4:
    if (ctx->pc == 0x56A5F4u) {
        ctx->pc = 0x56A5F4u;
            // 0x56a5f4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x56A5F8u;
        goto label_56a5f8;
    }
    ctx->pc = 0x56A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A5F0u;
            // 0x56a5f4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A5F8u;
label_56a5f8:
    // 0x56a5f8: 0x0  nop
    ctx->pc = 0x56a5f8u;
    // NOP
label_56a5fc:
    // 0x56a5fc: 0x0  nop
    ctx->pc = 0x56a5fcu;
    // NOP
label_56a600:
    // 0x56a600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x56a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_56a604:
    // 0x56a604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x56a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_56a608:
    // 0x56a608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x56a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_56a60c:
    // 0x56a60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56a610:
    // 0x56a610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56a614:
    // 0x56a614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x56a614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56a618:
    // 0x56a618: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_56a61c:
    if (ctx->pc == 0x56A61Cu) {
        ctx->pc = 0x56A61Cu;
            // 0x56a61c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A620u;
        goto label_56a620;
    }
    ctx->pc = 0x56A618u;
    {
        const bool branch_taken_0x56a618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A618u;
            // 0x56a61c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a618) {
            ctx->pc = 0x56A69Cu;
            goto label_56a69c;
        }
    }
    ctx->pc = 0x56A620u;
label_56a620:
    // 0x56a620: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56a624:
    // 0x56a624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56a628:
    // 0x56a628: 0x24638350  addiu       $v1, $v1, -0x7CB0
    ctx->pc = 0x56a628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
label_56a62c:
    // 0x56a62c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x56a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_56a630:
    // 0x56a630: 0x8c5289e8  lw          $s2, -0x7618($v0)
    ctx->pc = 0x56a630u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_56a634:
    // 0x56a634: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x56a634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_56a638:
    // 0x56a638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_56a63c:
    if (ctx->pc == 0x56A63Cu) {
        ctx->pc = 0x56A640u;
        goto label_56a640;
    }
    ctx->pc = 0x56A638u;
    {
        const bool branch_taken_0x56a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a638) {
            ctx->pc = 0x56A664u;
            goto label_56a664;
        }
    }
    ctx->pc = 0x56A640u;
label_56a640:
    // 0x56a640: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56a644:
    // 0x56a644: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x56a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_56a648:
    // 0x56a648: 0xa0400082  sb          $zero, 0x82($v0)
    ctx->pc = 0x56a648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 0));
label_56a64c:
    // 0x56a64c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56a64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56a650:
    // 0x56a650: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x56a650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_56a654:
    // 0x56a654: 0x320f809  jalr        $t9
label_56a658:
    if (ctx->pc == 0x56A658u) {
        ctx->pc = 0x56A658u;
            // 0x56a658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A65Cu;
        goto label_56a65c;
    }
    ctx->pc = 0x56A654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A65Cu);
        ctx->pc = 0x56A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A654u;
            // 0x56a658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A65Cu; }
            if (ctx->pc != 0x56A65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56A65Cu;
label_56a65c:
    // 0x56a65c: 0xc074708  jal         func_1D1C20
label_56a660:
    if (ctx->pc == 0x56A660u) {
        ctx->pc = 0x56A660u;
            // 0x56a660: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x56A664u;
        goto label_56a664;
    }
    ctx->pc = 0x56A65Cu;
    SET_GPR_U32(ctx, 31, 0x56A664u);
    ctx->pc = 0x56A660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A65Cu;
            // 0x56a660: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A664u; }
        if (ctx->pc != 0x56A664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A664u; }
        if (ctx->pc != 0x56A664u) { return; }
    }
    ctx->pc = 0x56A664u;
label_56a664:
    // 0x56a664: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_56a668:
    if (ctx->pc == 0x56A668u) {
        ctx->pc = 0x56A668u;
            // 0x56a668: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x56A66Cu;
        goto label_56a66c;
    }
    ctx->pc = 0x56A664u;
    {
        const bool branch_taken_0x56a664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a664) {
            ctx->pc = 0x56A668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A664u;
            // 0x56a668: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A688u;
            goto label_56a688;
        }
    }
    ctx->pc = 0x56A66Cu;
label_56a66c:
    // 0x56a66c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56a670:
    // 0x56a670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x56a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56a674:
    // 0x56a674: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x56a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_56a678:
    // 0x56a678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56a67c:
    // 0x56a67c: 0xc057a68  jal         func_15E9A0
label_56a680:
    if (ctx->pc == 0x56A680u) {
        ctx->pc = 0x56A680u;
            // 0x56a680: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x56A684u;
        goto label_56a684;
    }
    ctx->pc = 0x56A67Cu;
    SET_GPR_U32(ctx, 31, 0x56A684u);
    ctx->pc = 0x56A680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A67Cu;
            // 0x56a680: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A684u; }
        if (ctx->pc != 0x56A684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A684u; }
        if (ctx->pc != 0x56A684u) { return; }
    }
    ctx->pc = 0x56A684u;
label_56a684:
    // 0x56a684: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x56a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_56a688:
    // 0x56a688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x56a688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_56a68c:
    // 0x56a68c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_56a690:
    if (ctx->pc == 0x56A690u) {
        ctx->pc = 0x56A690u;
            // 0x56a690: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A694u;
        goto label_56a694;
    }
    ctx->pc = 0x56A68Cu;
    {
        const bool branch_taken_0x56a68c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x56a68c) {
            ctx->pc = 0x56A690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A68Cu;
            // 0x56a690: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A6A0u;
            goto label_56a6a0;
        }
    }
    ctx->pc = 0x56A694u;
label_56a694:
    // 0x56a694: 0xc0400a8  jal         func_1002A0
label_56a698:
    if (ctx->pc == 0x56A698u) {
        ctx->pc = 0x56A698u;
            // 0x56a698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A69Cu;
        goto label_56a69c;
    }
    ctx->pc = 0x56A694u;
    SET_GPR_U32(ctx, 31, 0x56A69Cu);
    ctx->pc = 0x56A698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A694u;
            // 0x56a698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A69Cu; }
        if (ctx->pc != 0x56A69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A69Cu; }
        if (ctx->pc != 0x56A69Cu) { return; }
    }
    ctx->pc = 0x56A69Cu;
label_56a69c:
    // 0x56a69c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x56a69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56a6a0:
    // 0x56a6a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x56a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_56a6a4:
    // 0x56a6a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x56a6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56a6a8:
    // 0x56a6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56a6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56a6ac:
    // 0x56a6ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56a6b0:
    // 0x56a6b0: 0x3e00008  jr          $ra
label_56a6b4:
    if (ctx->pc == 0x56A6B4u) {
        ctx->pc = 0x56A6B4u;
            // 0x56a6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x56A6B8u;
        goto label_56a6b8;
    }
    ctx->pc = 0x56A6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A6B0u;
            // 0x56a6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A6B8u;
label_56a6b8:
    // 0x56a6b8: 0x0  nop
    ctx->pc = 0x56a6b8u;
    // NOP
label_56a6bc:
    // 0x56a6bc: 0x0  nop
    ctx->pc = 0x56a6bcu;
    // NOP
label_56a6c0:
    // 0x56a6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x56a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_56a6c4:
    // 0x56a6c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56a6c8:
    // 0x56a6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x56a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_56a6cc:
    // 0x56a6cc: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x56a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_56a6d0:
    // 0x56a6d0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x56a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_56a6d4:
    // 0x56a6d4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x56a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_56a6d8:
    // 0x56a6d8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_56a6dc:
    if (ctx->pc == 0x56A6DCu) {
        ctx->pc = 0x56A6DCu;
            // 0x56a6dc: 0x8084005d  lb          $a0, 0x5D($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
        ctx->pc = 0x56A6E0u;
        goto label_56a6e0;
    }
    ctx->pc = 0x56A6D8u;
    {
        const bool branch_taken_0x56a6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56a6d8) {
            ctx->pc = 0x56A6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A6D8u;
            // 0x56a6dc: 0x8084005d  lb          $a0, 0x5D($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A704u;
            goto label_56a704;
        }
    }
    ctx->pc = 0x56A6E0u;
label_56a6e0:
    // 0x56a6e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x56a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_56a6e4:
    // 0x56a6e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_56a6e8:
    if (ctx->pc == 0x56A6E8u) {
        ctx->pc = 0x56A6ECu;
        goto label_56a6ec;
    }
    ctx->pc = 0x56A6E4u;
    {
        const bool branch_taken_0x56a6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56a6e4) {
            ctx->pc = 0x56A700u;
            goto label_56a700;
        }
    }
    ctx->pc = 0x56A6ECu;
label_56a6ec:
    // 0x56a6ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x56a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_56a6f0:
    // 0x56a6f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_56a6f4:
    if (ctx->pc == 0x56A6F4u) {
        ctx->pc = 0x56A6F8u;
        goto label_56a6f8;
    }
    ctx->pc = 0x56A6F0u;
    {
        const bool branch_taken_0x56a6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56a6f0) {
            ctx->pc = 0x56A700u;
            goto label_56a700;
        }
    }
    ctx->pc = 0x56A6F8u;
label_56a6f8:
    // 0x56a6f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_56a6fc:
    if (ctx->pc == 0x56A6FCu) {
        ctx->pc = 0x56A6FCu;
            // 0x56a6fc: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->pc = 0x56A700u;
        goto label_56a700;
    }
    ctx->pc = 0x56A6F8u;
    {
        const bool branch_taken_0x56a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A6F8u;
            // 0x56a6fc: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a6f8) {
            ctx->pc = 0x56A71Cu;
            goto label_56a71c;
        }
    }
    ctx->pc = 0x56A700u;
label_56a700:
    // 0x56a700: 0x8084005d  lb          $a0, 0x5D($a0)
    ctx->pc = 0x56a700u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
label_56a704:
    // 0x56a704: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x56a704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_56a708:
    // 0x56a708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x56a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56a70c:
    // 0x56a70c: 0xc0bc8b4  jal         func_2F22D0
label_56a710:
    if (ctx->pc == 0x56A710u) {
        ctx->pc = 0x56A710u;
            // 0x56a710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A714u;
        goto label_56a714;
    }
    ctx->pc = 0x56A70Cu;
    SET_GPR_U32(ctx, 31, 0x56A714u);
    ctx->pc = 0x56A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A70Cu;
            // 0x56a710: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A714u; }
        if (ctx->pc != 0x56A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A714u; }
        if (ctx->pc != 0x56A714u) { return; }
    }
    ctx->pc = 0x56A714u;
label_56a714:
    // 0x56a714: 0x10000007  b           . + 4 + (0x7 << 2)
label_56a718:
    if (ctx->pc == 0x56A718u) {
        ctx->pc = 0x56A718u;
            // 0x56a718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x56A71Cu;
        goto label_56a71c;
    }
    ctx->pc = 0x56A714u;
    {
        const bool branch_taken_0x56a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A714u;
            // 0x56a718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a714) {
            ctx->pc = 0x56A734u;
            goto label_56a734;
        }
    }
    ctx->pc = 0x56A71Cu;
label_56a71c:
    // 0x56a71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x56a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56a720:
    // 0x56a720: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x56a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_56a724:
    // 0x56a724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x56a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_56a728:
    // 0x56a728: 0xc0bc8b4  jal         func_2F22D0
label_56a72c:
    if (ctx->pc == 0x56A72Cu) {
        ctx->pc = 0x56A72Cu;
            // 0x56a72c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A730u;
        goto label_56a730;
    }
    ctx->pc = 0x56A728u;
    SET_GPR_U32(ctx, 31, 0x56A730u);
    ctx->pc = 0x56A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A728u;
            // 0x56a72c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A730u; }
        if (ctx->pc != 0x56A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A730u; }
        if (ctx->pc != 0x56A730u) { return; }
    }
    ctx->pc = 0x56A730u;
label_56a730:
    // 0x56a730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x56a730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_56a734:
    // 0x56a734: 0x3e00008  jr          $ra
label_56a738:
    if (ctx->pc == 0x56A738u) {
        ctx->pc = 0x56A738u;
            // 0x56a738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x56A73Cu;
        goto label_56a73c;
    }
    ctx->pc = 0x56A734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A734u;
            // 0x56a738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A73Cu;
label_56a73c:
    // 0x56a73c: 0x0  nop
    ctx->pc = 0x56a73cu;
    // NOP
label_56a740:
    // 0x56a740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x56a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_56a744:
    // 0x56a744: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56a748:
    // 0x56a748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x56a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_56a74c:
    // 0x56a74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56a750:
    // 0x56a750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56a754:
    // 0x56a754: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x56a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_56a758:
    // 0x56a758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56a758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56a75c:
    // 0x56a75c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x56a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_56a760:
    // 0x56a760: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x56a760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_56a764:
    // 0x56a764: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
label_56a768:
    if (ctx->pc == 0x56A768u) {
        ctx->pc = 0x56A768u;
            // 0x56a768: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x56A76Cu;
        goto label_56a76c;
    }
    ctx->pc = 0x56A764u;
    {
        const bool branch_taken_0x56a764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x56a764) {
            ctx->pc = 0x56A768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A764u;
            // 0x56a768: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A790u;
            goto label_56a790;
        }
    }
    ctx->pc = 0x56A76Cu;
label_56a76c:
    // 0x56a76c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x56a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_56a770:
    // 0x56a770: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_56a774:
    if (ctx->pc == 0x56A774u) {
        ctx->pc = 0x56A778u;
        goto label_56a778;
    }
    ctx->pc = 0x56A770u;
    {
        const bool branch_taken_0x56a770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x56a770) {
            ctx->pc = 0x56A78Cu;
            goto label_56a78c;
        }
    }
    ctx->pc = 0x56A778u;
label_56a778:
    // 0x56a778: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x56a778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_56a77c:
    // 0x56a77c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_56a780:
    if (ctx->pc == 0x56A780u) {
        ctx->pc = 0x56A784u;
        goto label_56a784;
    }
    ctx->pc = 0x56A77Cu;
    {
        const bool branch_taken_0x56a77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x56a77c) {
            ctx->pc = 0x56A78Cu;
            goto label_56a78c;
        }
    }
    ctx->pc = 0x56A784u;
label_56a784:
    // 0x56a784: 0x1000003d  b           . + 4 + (0x3D << 2)
label_56a788:
    if (ctx->pc == 0x56A788u) {
        ctx->pc = 0x56A788u;
            // 0x56a788: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x56A78Cu;
        goto label_56a78c;
    }
    ctx->pc = 0x56A784u;
    {
        const bool branch_taken_0x56a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A784u;
            // 0x56a788: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a784) {
            ctx->pc = 0x56A87Cu;
            goto label_56a87c;
        }
    }
    ctx->pc = 0x56A78Cu;
label_56a78c:
    // 0x56a78c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x56a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_56a790:
    // 0x56a790: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x56a790u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_56a794:
    // 0x56a794: 0x34660010  ori         $a2, $v1, 0x10
    ctx->pc = 0x56a794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_56a798:
    // 0x56a798: 0x92070054  lbu         $a3, 0x54($s0)
    ctx->pc = 0x56a798u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a79c:
    // 0x56a79c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x56a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_56a7a0:
    // 0x56a7a0: 0x2508976c  addiu       $t0, $t0, -0x6894
    ctx->pc = 0x56a7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940524));
label_56a7a4:
    // 0x56a7a4: 0x34650020  ori         $a1, $v1, 0x20
    ctx->pc = 0x56a7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_56a7a8:
    // 0x56a7a8: 0x8204005d  lb          $a0, 0x5D($s0)
    ctx->pc = 0x56a7a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_56a7ac:
    // 0x56a7ac: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x56a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_56a7b0:
    // 0x56a7b0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x56a7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_56a7b4:
    // 0x56a7b4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x56a7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_56a7b8:
    // 0x56a7b8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a7bc:
    // 0x56a7bc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x56a7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_56a7c0:
    // 0x56a7c0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x56a7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_56a7c4:
    // 0x56a7c4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x56a7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_56a7c8:
    // 0x56a7c8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x56a7c8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_56a7cc:
    // 0x56a7cc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x56a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_56a7d0:
    // 0x56a7d0: 0xa204005d  sb          $a0, 0x5D($s0)
    ctx->pc = 0x56a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
label_56a7d4:
    // 0x56a7d4: 0x92070054  lbu         $a3, 0x54($s0)
    ctx->pc = 0x56a7d4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a7d8:
    // 0x56a7d8: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x56a7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_56a7dc:
    // 0x56a7dc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x56a7dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_56a7e0:
    // 0x56a7e0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x56a7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_56a7e4:
    // 0x56a7e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x56a7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_56a7e8:
    // 0x56a7e8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x56a7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_56a7ec:
    // 0x56a7ec: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x56a7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_56a7f0:
    // 0x56a7f0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x56a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_56a7f4:
    // 0x56a7f4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x56a7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_56a7f8:
    // 0x56a7f8: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x56a7f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_56a7fc:
    // 0x56a7fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x56a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_56a800:
    // 0x56a800: 0xa204005d  sb          $a0, 0x5D($s0)
    ctx->pc = 0x56a800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
label_56a804:
    // 0x56a804: 0x8c63e228  lw          $v1, -0x1DD8($v1)
    ctx->pc = 0x56a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959656)));
label_56a808:
    // 0x56a808: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x56a808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_56a80c:
    // 0x56a80c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x56a80cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_56a810:
    // 0x56a810: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x56a810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_56a814:
    // 0x56a814: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_56a818:
    if (ctx->pc == 0x56A818u) {
        ctx->pc = 0x56A81Cu;
        goto label_56a81c;
    }
    ctx->pc = 0x56A814u;
    {
        const bool branch_taken_0x56a814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a814) {
            ctx->pc = 0x56A824u;
            goto label_56a824;
        }
    }
    ctx->pc = 0x56A81Cu;
label_56a81c:
    // 0x56a81c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a820:
    // 0x56a820: 0x8c64e230  lw          $a0, -0x1DD0($v1)
    ctx->pc = 0x56a820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959664)));
label_56a824:
    // 0x56a824: 0xa204005d  sb          $a0, 0x5D($s0)
    ctx->pc = 0x56a824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
label_56a828:
    // 0x56a828: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a82c:
    // 0x56a82c: 0x8c63e230  lw          $v1, -0x1DD0($v1)
    ctx->pc = 0x56a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959664)));
label_56a830:
    // 0x56a830: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x56a830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_56a834:
    // 0x56a834: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x56a834u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_56a838:
    // 0x56a838: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x56a838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_56a83c:
    // 0x56a83c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_56a840:
    if (ctx->pc == 0x56A840u) {
        ctx->pc = 0x56A844u;
        goto label_56a844;
    }
    ctx->pc = 0x56A83Cu;
    {
        const bool branch_taken_0x56a83c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a83c) {
            ctx->pc = 0x56A84Cu;
            goto label_56a84c;
        }
    }
    ctx->pc = 0x56A844u;
label_56a844:
    // 0x56a844: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a848:
    // 0x56a848: 0x8c64e228  lw          $a0, -0x1DD8($v1)
    ctx->pc = 0x56a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959656)));
label_56a84c:
    // 0x56a84c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x56a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_56a850:
    // 0x56a850: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x56a850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_56a854:
    // 0x56a854: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_56a858:
    if (ctx->pc == 0x56A858u) {
        ctx->pc = 0x56A858u;
            // 0x56a858: 0xa204005d  sb          $a0, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x56A85Cu;
        goto label_56a85c;
    }
    ctx->pc = 0x56A854u;
    {
        const bool branch_taken_0x56a854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A854u;
            // 0x56a858: 0xa204005d  sb          $a0, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a854) {
            ctx->pc = 0x56A86Cu;
            goto label_56a86c;
        }
    }
    ctx->pc = 0x56A85Cu;
label_56a85c:
    // 0x56a85c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x56a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56a860:
    // 0x56a860: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x56a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_56a864:
    // 0x56a864: 0x10000034  b           . + 4 + (0x34 << 2)
label_56a868:
    if (ctx->pc == 0x56A868u) {
        ctx->pc = 0x56A868u;
            // 0x56a868: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x56A86Cu;
        goto label_56a86c;
    }
    ctx->pc = 0x56A864u;
    {
        const bool branch_taken_0x56a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A864u;
            // 0x56a868: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a864) {
            ctx->pc = 0x56A938u;
            goto label_56a938;
        }
    }
    ctx->pc = 0x56A86Cu;
label_56a86c:
    // 0x56a86c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x56a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56a870:
    // 0x56a870: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x56a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_56a874:
    // 0x56a874: 0x10000030  b           . + 4 + (0x30 << 2)
label_56a878:
    if (ctx->pc == 0x56A878u) {
        ctx->pc = 0x56A878u;
            // 0x56a878: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x56A87Cu;
        goto label_56a87c;
    }
    ctx->pc = 0x56A874u;
    {
        const bool branch_taken_0x56a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A874u;
            // 0x56a878: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a874) {
            ctx->pc = 0x56A938u;
            goto label_56a938;
        }
    }
    ctx->pc = 0x56A87Cu;
label_56a87c:
    // 0x56a87c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x56a87cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_56a880:
    // 0x56a880: 0x34670010  ori         $a3, $v1, 0x10
    ctx->pc = 0x56a880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_56a884:
    // 0x56a884: 0x92040054  lbu         $a0, 0x54($s0)
    ctx->pc = 0x56a884u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a888:
    // 0x56a888: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x56a888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_56a88c:
    // 0x56a88c: 0x2529976c  addiu       $t1, $t1, -0x6894
    ctx->pc = 0x56a88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940524));
label_56a890:
    // 0x56a890: 0x34660020  ori         $a2, $v1, 0x20
    ctx->pc = 0x56a890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_56a894:
    // 0x56a894: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x56a894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56a898:
    // 0x56a898: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x56a898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_56a89c:
    // 0x56a89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x56a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_56a8a0:
    // 0x56a8a0: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x56a8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_56a8a4:
    // 0x56a8a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x56a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_56a8a8:
    // 0x56a8a8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x56a8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_56a8ac:
    // 0x56a8ac: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a8b0:
    // 0x56a8b0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x56a8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_56a8b4:
    // 0x56a8b4: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x56a8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_56a8b8:
    // 0x56a8b8: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x56a8b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_56a8bc:
    // 0x56a8bc: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x56a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_56a8c0:
    // 0x56a8c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x56a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_56a8c4:
    // 0x56a8c4: 0x92070054  lbu         $a3, 0x54($s0)
    ctx->pc = 0x56a8c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a8c8:
    // 0x56a8c8: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x56a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56a8cc:
    // 0x56a8cc: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x56a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_56a8d0:
    // 0x56a8d0: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x56a8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_56a8d4:
    // 0x56a8d4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x56a8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_56a8d8:
    // 0x56a8d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x56a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_56a8dc:
    // 0x56a8dc: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x56a8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_56a8e0:
    // 0x56a8e0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x56a8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_56a8e4:
    // 0x56a8e4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x56a8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_56a8e8:
    // 0x56a8e8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x56a8e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_56a8ec:
    // 0x56a8ec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x56a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_56a8f0:
    // 0x56a8f0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x56a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_56a8f4:
    // 0x56a8f4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x56a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56a8f8:
    // 0x56a8f8: 0x8c63e238  lw          $v1, -0x1DC8($v1)
    ctx->pc = 0x56a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959672)));
label_56a8fc:
    // 0x56a8fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x56a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_56a900:
    // 0x56a900: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x56a900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_56a904:
    // 0x56a904: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_56a908:
    if (ctx->pc == 0x56A908u) {
        ctx->pc = 0x56A90Cu;
        goto label_56a90c;
    }
    ctx->pc = 0x56A904u;
    {
        const bool branch_taken_0x56a904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a904) {
            ctx->pc = 0x56A914u;
            goto label_56a914;
        }
    }
    ctx->pc = 0x56A90Cu;
label_56a90c:
    // 0x56a90c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a910:
    // 0x56a910: 0x8c64e240  lw          $a0, -0x1DC0($v1)
    ctx->pc = 0x56a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959680)));
label_56a914:
    // 0x56a914: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x56a914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_56a918:
    // 0x56a918: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a91c:
    // 0x56a91c: 0x8c63e240  lw          $v1, -0x1DC0($v1)
    ctx->pc = 0x56a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959680)));
label_56a920:
    // 0x56a920: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x56a920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_56a924:
    // 0x56a924: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_56a928:
    if (ctx->pc == 0x56A928u) {
        ctx->pc = 0x56A92Cu;
        goto label_56a92c;
    }
    ctx->pc = 0x56A924u;
    {
        const bool branch_taken_0x56a924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a924) {
            ctx->pc = 0x56A934u;
            goto label_56a934;
        }
    }
    ctx->pc = 0x56A92Cu;
label_56a92c:
    // 0x56a92c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x56a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_56a930:
    // 0x56a930: 0x8c64e238  lw          $a0, -0x1DC8($v1)
    ctx->pc = 0x56a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959672)));
label_56a934:
    // 0x56a934: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x56a934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_56a938:
    // 0x56a938: 0x92060054  lbu         $a2, 0x54($s0)
    ctx->pc = 0x56a938u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a93c:
    // 0x56a93c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x56a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_56a940:
    // 0x56a940: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x56a940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_56a944:
    // 0x56a944: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x56a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_56a948:
    // 0x56a948: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x56a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_56a94c:
    // 0x56a94c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x56a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_56a950:
    // 0x56a950: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x56a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_56a954:
    // 0x56a954: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x56a954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_56a958:
    // 0x56a958: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x56a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_56a95c:
    // 0x56a95c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x56a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a960:
    // 0x56a960: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x56a960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_56a964:
    // 0x56a964: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_56a968:
    if (ctx->pc == 0x56A968u) {
        ctx->pc = 0x56A968u;
            // 0x56a968: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x56A96Cu;
        goto label_56a96c;
    }
    ctx->pc = 0x56A964u;
    {
        const bool branch_taken_0x56a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a964) {
            ctx->pc = 0x56A968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A964u;
            // 0x56a968: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A978u;
            goto label_56a978;
        }
    }
    ctx->pc = 0x56A96Cu;
label_56a96c:
    // 0x56a96c: 0xc073234  jal         func_1CC8D0
label_56a970:
    if (ctx->pc == 0x56A970u) {
        ctx->pc = 0x56A970u;
            // 0x56a970: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x56A974u;
        goto label_56a974;
    }
    ctx->pc = 0x56A96Cu;
    SET_GPR_U32(ctx, 31, 0x56A974u);
    ctx->pc = 0x56A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A96Cu;
            // 0x56a970: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A974u; }
        if (ctx->pc != 0x56A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A974u; }
        if (ctx->pc != 0x56A974u) { return; }
    }
    ctx->pc = 0x56A974u;
label_56a974:
    // 0x56a974: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x56a974u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_56a978:
    // 0x56a978: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x56a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56a97c:
    // 0x56a97c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_56a980:
    if (ctx->pc == 0x56A980u) {
        ctx->pc = 0x56A984u;
        goto label_56a984;
    }
    ctx->pc = 0x56A97Cu;
    {
        const bool branch_taken_0x56a97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x56a97c) {
            ctx->pc = 0x56A98Cu;
            goto label_56a98c;
        }
    }
    ctx->pc = 0x56A984u;
label_56a984:
    // 0x56a984: 0x10000017  b           . + 4 + (0x17 << 2)
label_56a988:
    if (ctx->pc == 0x56A988u) {
        ctx->pc = 0x56A988u;
            // 0x56a988: 0x92050054  lbu         $a1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x56A98Cu;
        goto label_56a98c;
    }
    ctx->pc = 0x56A984u;
    {
        const bool branch_taken_0x56a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A984u;
            // 0x56a988: 0x92050054  lbu         $a1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a984) {
            ctx->pc = 0x56A9E4u;
            goto label_56a9e4;
        }
    }
    ctx->pc = 0x56A98Cu;
label_56a98c:
    // 0x56a98c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56a990:
    // 0x56a990: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x56a990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_56a994:
    // 0x56a994: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_56a998:
    if (ctx->pc == 0x56A998u) {
        ctx->pc = 0x56A998u;
            // 0x56a998: 0x8c5189e8  lw          $s1, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->pc = 0x56A99Cu;
        goto label_56a99c;
    }
    ctx->pc = 0x56A994u;
    {
        const bool branch_taken_0x56a994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A994u;
            // 0x56a998: 0x8c5189e8  lw          $s1, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a994) {
            ctx->pc = 0x56A9D0u;
            goto label_56a9d0;
        }
    }
    ctx->pc = 0x56A99Cu;
label_56a99c:
    // 0x56a99c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x56a99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_56a9a0:
    // 0x56a9a0: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x56a9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_56a9a4:
    // 0x56a9a4: 0x320f809  jalr        $t9
label_56a9a8:
    if (ctx->pc == 0x56A9A8u) {
        ctx->pc = 0x56A9A8u;
            // 0x56a9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A9ACu;
        goto label_56a9ac;
    }
    ctx->pc = 0x56A9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A9ACu);
        ctx->pc = 0x56A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A9A4u;
            // 0x56a9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A9ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A9ACu; }
            if (ctx->pc != 0x56A9ACu) { return; }
        }
        }
    }
    ctx->pc = 0x56A9ACu;
label_56a9ac:
    // 0x56a9ac: 0xc0746e4  jal         func_1D1B90
label_56a9b0:
    if (ctx->pc == 0x56A9B0u) {
        ctx->pc = 0x56A9B0u;
            // 0x56a9b0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x56A9B4u;
        goto label_56a9b4;
    }
    ctx->pc = 0x56A9ACu;
    SET_GPR_U32(ctx, 31, 0x56A9B4u);
    ctx->pc = 0x56A9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A9ACu;
            // 0x56a9b0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A9B4u; }
        if (ctx->pc != 0x56A9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A9B4u; }
        if (ctx->pc != 0x56A9B4u) { return; }
    }
    ctx->pc = 0x56A9B4u;
label_56a9b4:
    // 0x56a9b4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x56a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_56a9b8:
    // 0x56a9b8: 0xc073234  jal         func_1CC8D0
label_56a9bc:
    if (ctx->pc == 0x56A9BCu) {
        ctx->pc = 0x56A9BCu;
            // 0x56a9bc: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x56A9C0u;
        goto label_56a9c0;
    }
    ctx->pc = 0x56A9B8u;
    SET_GPR_U32(ctx, 31, 0x56A9C0u);
    ctx->pc = 0x56A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A9B8u;
            // 0x56a9bc: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A9C0u; }
        if (ctx->pc != 0x56A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A9C0u; }
        if (ctx->pc != 0x56A9C0u) { return; }
    }
    ctx->pc = 0x56A9C0u;
label_56a9c0:
    // 0x56a9c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56a9c4:
    // 0x56a9c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x56a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56a9c8:
    // 0x56a9c8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x56a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_56a9cc:
    // 0x56a9cc: 0xa0430082  sb          $v1, 0x82($v0)
    ctx->pc = 0x56a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 3));
label_56a9d0:
    // 0x56a9d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56a9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_56a9d4:
    // 0x56a9d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x56a9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_56a9d8:
    // 0x56a9d8: 0x320f809  jalr        $t9
label_56a9dc:
    if (ctx->pc == 0x56A9DCu) {
        ctx->pc = 0x56A9DCu;
            // 0x56a9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A9E0u;
        goto label_56a9e0;
    }
    ctx->pc = 0x56A9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A9E0u);
        ctx->pc = 0x56A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A9D8u;
            // 0x56a9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A9E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A9E0u; }
            if (ctx->pc != 0x56A9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x56A9E0u;
label_56a9e0:
    // 0x56a9e0: 0x92050054  lbu         $a1, 0x54($s0)
    ctx->pc = 0x56a9e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_56a9e4:
    // 0x56a9e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x56a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56a9e8:
    // 0x56a9e8: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x56a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_56a9ec:
    // 0x56a9ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x56a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_56a9f0:
    // 0x56a9f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x56a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_56a9f4:
    // 0x56a9f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x56a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_56a9f8:
    // 0x56a9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x56a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_56a9fc:
    // 0x56a9fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x56a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_56aa00:
    // 0x56aa00: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x56aa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_56aa04:
    // 0x56aa04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_56aa08:
    if (ctx->pc == 0x56AA08u) {
        ctx->pc = 0x56AA08u;
            // 0x56aa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56AA0Cu;
        goto label_56aa0c;
    }
    ctx->pc = 0x56AA04u;
    {
        const bool branch_taken_0x56aa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x56AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA04u;
            // 0x56aa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56aa04) {
            ctx->pc = 0x56AA10u;
            goto label_56aa10;
        }
    }
    ctx->pc = 0x56AA0Cu;
label_56aa0c:
    // 0x56aa0c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x56aa0cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_56aa10:
    // 0x56aa10: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_56aa14:
    if (ctx->pc == 0x56AA14u) {
        ctx->pc = 0x56AA14u;
            // 0x56aa14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x56AA18u;
        goto label_56aa18;
    }
    ctx->pc = 0x56AA10u;
    {
        const bool branch_taken_0x56aa10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x56aa10) {
            ctx->pc = 0x56AA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA10u;
            // 0x56aa14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56AA4Cu;
            goto label_56aa4c;
        }
    }
    ctx->pc = 0x56AA18u;
label_56aa18:
    // 0x56aa18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x56aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_56aa1c:
    // 0x56aa1c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x56aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_56aa20:
    // 0x56aa20: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x56aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_56aa24:
    // 0x56aa24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x56aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_56aa28:
    // 0x56aa28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x56aa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56aa2c:
    // 0x56aa2c: 0xac640cb4  sw          $a0, 0xCB4($v1)
    ctx->pc = 0x56aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3252), GPR_U32(ctx, 4));
label_56aa30:
    // 0x56aa30: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x56aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_56aa34:
    // 0x56aa34: 0xc057b7c  jal         func_15EDF0
label_56aa38:
    if (ctx->pc == 0x56AA38u) {
        ctx->pc = 0x56AA38u;
            // 0x56aa38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x56AA3Cu;
        goto label_56aa3c;
    }
    ctx->pc = 0x56AA34u;
    SET_GPR_U32(ctx, 31, 0x56AA3Cu);
    ctx->pc = 0x56AA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA34u;
            // 0x56aa38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AA3Cu; }
        if (ctx->pc != 0x56AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AA3Cu; }
        if (ctx->pc != 0x56AA3Cu) { return; }
    }
    ctx->pc = 0x56AA3Cu;
label_56aa3c:
    // 0x56aa3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x56aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_56aa40:
    // 0x56aa40: 0xc073234  jal         func_1CC8D0
label_56aa44:
    if (ctx->pc == 0x56AA44u) {
        ctx->pc = 0x56AA44u;
            // 0x56aa44: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x56AA48u;
        goto label_56aa48;
    }
    ctx->pc = 0x56AA40u;
    SET_GPR_U32(ctx, 31, 0x56AA48u);
    ctx->pc = 0x56AA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA40u;
            // 0x56aa44: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AA48u; }
        if (ctx->pc != 0x56AA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AA48u; }
        if (ctx->pc != 0x56AA48u) { return; }
    }
    ctx->pc = 0x56AA48u;
label_56aa48:
    // 0x56aa48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_56aa4c:
    // 0x56aa4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56aa4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56aa50:
    // 0x56aa50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56aa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56aa54:
    // 0x56aa54: 0x3e00008  jr          $ra
label_56aa58:
    if (ctx->pc == 0x56AA58u) {
        ctx->pc = 0x56AA58u;
            // 0x56aa58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x56AA5Cu;
        goto label_56aa5c;
    }
    ctx->pc = 0x56AA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA54u;
            // 0x56aa58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56AA5Cu;
label_56aa5c:
    // 0x56aa5c: 0x0  nop
    ctx->pc = 0x56aa5cu;
    // NOP
label_56aa60:
    // 0x56aa60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x56aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_56aa64:
    // 0x56aa64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x56aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_56aa68:
    // 0x56aa68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x56aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_56aa6c:
    // 0x56aa6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x56aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_56aa70:
    // 0x56aa70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x56aa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_56aa74:
    // 0x56aa74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x56aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_56aa78:
    // 0x56aa78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x56aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_56aa7c:
    // 0x56aa7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x56aa7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_56aa80:
    // 0x56aa80: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x56aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_56aa84:
    // 0x56aa84: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x56aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_56aa88:
    // 0x56aa88: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x56aa88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_56aa8c:
    // 0x56aa8c: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
label_56aa90:
    if (ctx->pc == 0x56AA90u) {
        ctx->pc = 0x56AA90u;
            // 0x56aa90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56AA94u;
        goto label_56aa94;
    }
    ctx->pc = 0x56AA8Cu;
    {
        const bool branch_taken_0x56aa8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x56AA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AA8Cu;
            // 0x56aa90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56aa8c) {
            ctx->pc = 0x56ACA4u;
            goto label_56aca4;
        }
    }
    ctx->pc = 0x56AA94u;
label_56aa94:
    // 0x56aa94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56aa98:
    // 0x56aa98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x56aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56aa9c:
    // 0x56aa9c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x56aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_56aaa0:
    // 0x56aaa0: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x56aaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_56aaa4:
    // 0x56aaa4: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x56aaa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_56aaa8:
    // 0x56aaa8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_56aaac:
    if (ctx->pc == 0x56AAACu) {
        ctx->pc = 0x56AAB0u;
        goto label_56aab0;
    }
    ctx->pc = 0x56AAA8u;
    {
        const bool branch_taken_0x56aaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x56aaa8) {
            ctx->pc = 0x56AAB8u;
            goto label_56aab8;
        }
    }
    ctx->pc = 0x56AAB0u;
label_56aab0:
    // 0x56aab0: 0x10000078  b           . + 4 + (0x78 << 2)
label_56aab4:
    if (ctx->pc == 0x56AAB4u) {
        ctx->pc = 0x56AAB8u;
        goto label_56aab8;
    }
    ctx->pc = 0x56AAB0u;
    {
        const bool branch_taken_0x56aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56aab0) {
            ctx->pc = 0x56AC94u;
            goto label_56ac94;
        }
    }
    ctx->pc = 0x56AAB8u;
label_56aab8:
    // 0x56aab8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56aabc:
    // 0x56aabc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x56aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_56aac0:
    // 0x56aac0: 0x8c7289f0  lw          $s2, -0x7610($v1)
    ctx->pc = 0x56aac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_56aac4:
    // 0x56aac4: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x56aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_56aac8:
    // 0x56aac8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x56aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_56aacc:
    // 0x56aacc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56aaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56aad0:
    // 0x56aad0: 0x8c66d120  lw          $a2, -0x2EE0($v1)
    ctx->pc = 0x56aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_56aad4:
    // 0x56aad4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56aad8:
    // 0x56aad8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x56aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_56aadc:
    // 0x56aadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56aae0:
    // 0x56aae0: 0x8ca80130  lw          $t0, 0x130($a1)
    ctx->pc = 0x56aae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_56aae4:
    // 0x56aae4: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x56aae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_56aae8:
    // 0x56aae8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x56aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_56aaec:
    // 0x56aaec: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x56aaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_56aaf0:
    // 0x56aaf0: 0x2463fedc  addiu       $v1, $v1, -0x124
    ctx->pc = 0x56aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967004));
label_56aaf4:
    // 0x56aaf4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x56aaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_56aaf8:
    // 0x56aaf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x56aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56aafc:
    // 0x56aafc: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x56aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_56ab00:
    // 0x56ab00: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x56ab00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_56ab04:
    // 0x56ab04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x56ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56ab08:
    // 0x56ab08: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x56ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_56ab0c:
    // 0x56ab0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x56ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_56ab10:
    // 0x56ab10: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x56ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_56ab14:
    // 0x56ab14: 0x24d10150  addiu       $s1, $a2, 0x150
    ctx->pc = 0x56ab14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_56ab18:
    // 0x56ab18: 0x320f809  jalr        $t9
label_56ab1c:
    if (ctx->pc == 0x56AB1Cu) {
        ctx->pc = 0x56AB1Cu;
            // 0x56ab1c: 0x24d00200  addiu       $s0, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->pc = 0x56AB20u;
        goto label_56ab20;
    }
    ctx->pc = 0x56AB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AB20u);
        ctx->pc = 0x56AB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB18u;
            // 0x56ab1c: 0x24d00200  addiu       $s0, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AB20u; }
            if (ctx->pc != 0x56AB20u) { return; }
        }
        }
    }
    ctx->pc = 0x56AB20u;
label_56ab20:
    // 0x56ab20: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56ab20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56ab24:
    // 0x56ab24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56ab28:
    // 0x56ab28: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x56ab28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_56ab2c:
    // 0x56ab2c: 0x320f809  jalr        $t9
label_56ab30:
    if (ctx->pc == 0x56AB30u) {
        ctx->pc = 0x56AB30u;
            // 0x56ab30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56AB34u;
        goto label_56ab34;
    }
    ctx->pc = 0x56AB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AB34u);
        ctx->pc = 0x56AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB2Cu;
            // 0x56ab30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AB34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AB34u; }
            if (ctx->pc != 0x56AB34u) { return; }
        }
        }
    }
    ctx->pc = 0x56AB34u;
label_56ab34:
    // 0x56ab34: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x56ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_56ab38:
    // 0x56ab38: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x56ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_56ab3c:
    // 0x56ab3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56ab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ab40:
    // 0x56ab40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x56ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_56ab44:
    // 0x56ab44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x56ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56ab48:
    // 0x56ab48: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x56ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_56ab4c:
    // 0x56ab4c: 0xc46e0008  lwc1        $f14, 0x8($v1)
    ctx->pc = 0x56ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_56ab50:
    // 0x56ab50: 0xc04cbd8  jal         func_132F60
label_56ab54:
    if (ctx->pc == 0x56AB54u) {
        ctx->pc = 0x56AB54u;
            // 0x56ab54: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x56AB58u;
        goto label_56ab58;
    }
    ctx->pc = 0x56AB50u;
    SET_GPR_U32(ctx, 31, 0x56AB58u);
    ctx->pc = 0x56AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB50u;
            // 0x56ab54: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AB58u; }
        if (ctx->pc != 0x56AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AB58u; }
        if (ctx->pc != 0x56AB58u) { return; }
    }
    ctx->pc = 0x56AB58u;
label_56ab58:
    // 0x56ab58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x56ab58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56ab5c:
    // 0x56ab5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x56ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_56ab60:
    // 0x56ab60: 0xc075094  jal         func_1D4250
label_56ab64:
    if (ctx->pc == 0x56AB64u) {
        ctx->pc = 0x56AB64u;
            // 0x56ab64: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x56AB68u;
        goto label_56ab68;
    }
    ctx->pc = 0x56AB60u;
    SET_GPR_U32(ctx, 31, 0x56AB68u);
    ctx->pc = 0x56AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB60u;
            // 0x56ab64: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AB68u; }
        if (ctx->pc != 0x56AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AB68u; }
        if (ctx->pc != 0x56AB68u) { return; }
    }
    ctx->pc = 0x56AB68u;
label_56ab68:
    // 0x56ab68: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x56ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_56ab6c:
    // 0x56ab6c: 0xc440c058  lwc1        $f0, -0x3FA8($v0)
    ctx->pc = 0x56ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56ab70:
    // 0x56ab70: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x56ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56ab74:
    // 0x56ab74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x56ab74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56ab78:
    // 0x56ab78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_56ab7c:
    if (ctx->pc == 0x56AB7Cu) {
        ctx->pc = 0x56AB7Cu;
            // 0x56ab7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56AB80u;
        goto label_56ab80;
    }
    ctx->pc = 0x56AB78u;
    {
        const bool branch_taken_0x56ab78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x56AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB78u;
            // 0x56ab7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ab78) {
            ctx->pc = 0x56AB84u;
            goto label_56ab84;
        }
    }
    ctx->pc = 0x56AB80u;
label_56ab80:
    // 0x56ab80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56ab80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56ab84:
    // 0x56ab84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x56ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_56ab88:
    // 0x56ab88: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x56ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_56ab8c:
    // 0x56ab8c: 0xc440c060  lwc1        $f0, -0x3FA0($v0)
    ctx->pc = 0x56ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56ab90:
    // 0x56ab90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x56ab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56ab94:
    // 0x56ab94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_56ab98:
    if (ctx->pc == 0x56AB98u) {
        ctx->pc = 0x56AB98u;
            // 0x56ab98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56AB9Cu;
        goto label_56ab9c;
    }
    ctx->pc = 0x56AB94u;
    {
        const bool branch_taken_0x56ab94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x56AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AB94u;
            // 0x56ab98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ab94) {
            ctx->pc = 0x56ABA0u;
            goto label_56aba0;
        }
    }
    ctx->pc = 0x56AB9Cu;
label_56ab9c:
    // 0x56ab9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56ab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56aba0:
    // 0x56aba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x56aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_56aba4:
    // 0x56aba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x56aba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_56aba8:
    // 0x56aba8: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_56abac:
    if (ctx->pc == 0x56ABACu) {
        ctx->pc = 0x56ABACu;
            // 0x56abac: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x56ABB0u;
        goto label_56abb0;
    }
    ctx->pc = 0x56ABA8u;
    {
        const bool branch_taken_0x56aba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56aba8) {
            ctx->pc = 0x56ABACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56ABA8u;
            // 0x56abac: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56AC70u;
            goto label_56ac70;
        }
    }
    ctx->pc = 0x56ABB0u;
label_56abb0:
    // 0x56abb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x56abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_56abb4:
    // 0x56abb4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56abb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56abb8:
    // 0x56abb8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x56abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_56abbc:
    // 0x56abbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56abc0:
    // 0x56abc0: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x56abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_56abc4:
    // 0x56abc4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x56abc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_56abc8:
    // 0x56abc8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x56abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_56abcc:
    // 0x56abcc: 0x320f809  jalr        $t9
label_56abd0:
    if (ctx->pc == 0x56ABD0u) {
        ctx->pc = 0x56ABD0u;
            // 0x56abd0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x56ABD4u;
        goto label_56abd4;
    }
    ctx->pc = 0x56ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56ABD4u);
        ctx->pc = 0x56ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ABCCu;
            // 0x56abd0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56ABD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56ABD4u; }
            if (ctx->pc != 0x56ABD4u) { return; }
        }
        }
    }
    ctx->pc = 0x56ABD4u;
label_56abd4:
    // 0x56abd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x56abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56abd8:
    // 0x56abd8: 0x87b1008c  lh          $s1, 0x8C($sp)
    ctx->pc = 0x56abd8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
label_56abdc:
    // 0x56abdc: 0x87b0008e  lh          $s0, 0x8E($sp)
    ctx->pc = 0x56abdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_56abe0:
    // 0x56abe0: 0xc04cc1c  jal         func_133070
label_56abe4:
    if (ctx->pc == 0x56ABE4u) {
        ctx->pc = 0x56ABE4u;
            // 0x56abe4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x56ABE8u;
        goto label_56abe8;
    }
    ctx->pc = 0x56ABE0u;
    SET_GPR_U32(ctx, 31, 0x56ABE8u);
    ctx->pc = 0x56ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56ABE0u;
            // 0x56abe4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56ABE8u; }
        if (ctx->pc != 0x56ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56ABE8u; }
        if (ctx->pc != 0x56ABE8u) { return; }
    }
    ctx->pc = 0x56ABE8u;
label_56abe8:
    // 0x56abe8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56abec:
    // 0x56abec: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x56abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_56abf0:
    // 0x56abf0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x56abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_56abf4:
    // 0x56abf4: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
label_56abf8:
    if (ctx->pc == 0x56ABF8u) {
        ctx->pc = 0x56ABF8u;
            // 0x56abf8: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x56ABFCu;
        goto label_56abfc;
    }
    ctx->pc = 0x56ABF4u;
    {
        const bool branch_taken_0x56abf4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x56ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ABF4u;
            // 0x56abf8: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56abf4) {
            ctx->pc = 0x56AC6Cu;
            goto label_56ac6c;
        }
    }
    ctx->pc = 0x56ABFCu;
label_56abfc:
    // 0x56abfc: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x56abfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_56ac00:
    // 0x56ac00: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_56ac04:
    if (ctx->pc == 0x56AC04u) {
        ctx->pc = 0x56AC08u;
        goto label_56ac08;
    }
    ctx->pc = 0x56AC00u;
    {
        const bool branch_taken_0x56ac00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56ac00) {
            ctx->pc = 0x56AC6Cu;
            goto label_56ac6c;
        }
    }
    ctx->pc = 0x56AC08u;
label_56ac08:
    // 0x56ac08: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
label_56ac0c:
    if (ctx->pc == 0x56AC0Cu) {
        ctx->pc = 0x56AC10u;
        goto label_56ac10;
    }
    ctx->pc = 0x56AC08u;
    {
        const bool branch_taken_0x56ac08 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x56ac08) {
            ctx->pc = 0x56AC6Cu;
            goto label_56ac6c;
        }
    }
    ctx->pc = 0x56AC10u;
label_56ac10:
    // 0x56ac10: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x56ac10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_56ac14:
    // 0x56ac14: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_56ac18:
    if (ctx->pc == 0x56AC18u) {
        ctx->pc = 0x56AC1Cu;
        goto label_56ac1c;
    }
    ctx->pc = 0x56AC14u;
    {
        const bool branch_taken_0x56ac14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56ac14) {
            ctx->pc = 0x56AC6Cu;
            goto label_56ac6c;
        }
    }
    ctx->pc = 0x56AC1Cu;
label_56ac1c:
    // 0x56ac1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x56ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_56ac20:
    // 0x56ac20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56ac20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ac24:
    // 0x56ac24: 0x0  nop
    ctx->pc = 0x56ac24u;
    // NOP
label_56ac28:
    // 0x56ac28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x56ac28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56ac2c:
    // 0x56ac2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_56ac30:
    if (ctx->pc == 0x56AC30u) {
        ctx->pc = 0x56AC34u;
        goto label_56ac34;
    }
    ctx->pc = 0x56AC2Cu;
    {
        const bool branch_taken_0x56ac2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x56ac2c) {
            ctx->pc = 0x56AC38u;
            goto label_56ac38;
        }
    }
    ctx->pc = 0x56AC34u;
label_56ac34:
    // 0x56ac34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x56ac34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_56ac38:
    // 0x56ac38: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x56ac38u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ac3c:
    // 0x56ac3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x56ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_56ac40:
    // 0x56ac40: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x56ac40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_56ac44:
    // 0x56ac44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x56ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56ac48:
    // 0x56ac48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x56ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_56ac4c:
    // 0x56ac4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x56ac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56ac50:
    // 0x56ac50: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x56ac50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56ac54:
    // 0x56ac54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x56ac54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ac58:
    // 0x56ac58: 0x0  nop
    ctx->pc = 0x56ac58u;
    // NOP
label_56ac5c:
    // 0x56ac5c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x56ac5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_56ac60:
    // 0x56ac60: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x56ac60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_56ac64:
    // 0x56ac64: 0xc15706c  jal         func_55C1B0
label_56ac68:
    if (ctx->pc == 0x56AC68u) {
        ctx->pc = 0x56AC68u;
            // 0x56ac68: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x56AC6Cu;
        goto label_56ac6c;
    }
    ctx->pc = 0x56AC64u;
    SET_GPR_U32(ctx, 31, 0x56AC6Cu);
    ctx->pc = 0x56AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AC64u;
            // 0x56ac68: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AC6Cu; }
        if (ctx->pc != 0x56AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AC6Cu; }
        if (ctx->pc != 0x56AC6Cu) { return; }
    }
    ctx->pc = 0x56AC6Cu;
label_56ac6c:
    // 0x56ac6c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56ac6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56ac70:
    // 0x56ac70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56ac74:
    // 0x56ac74: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x56ac74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_56ac78:
    // 0x56ac78: 0x320f809  jalr        $t9
label_56ac7c:
    if (ctx->pc == 0x56AC7Cu) {
        ctx->pc = 0x56AC7Cu;
            // 0x56ac7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56AC80u;
        goto label_56ac80;
    }
    ctx->pc = 0x56AC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AC80u);
        ctx->pc = 0x56AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AC78u;
            // 0x56ac7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AC80u; }
            if (ctx->pc != 0x56AC80u) { return; }
        }
        }
    }
    ctx->pc = 0x56AC80u;
label_56ac80:
    // 0x56ac80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x56ac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_56ac84:
    // 0x56ac84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56ac88:
    // 0x56ac88: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x56ac88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_56ac8c:
    // 0x56ac8c: 0x320f809  jalr        $t9
label_56ac90:
    if (ctx->pc == 0x56AC90u) {
        ctx->pc = 0x56AC90u;
            // 0x56ac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56AC94u;
        goto label_56ac94;
    }
    ctx->pc = 0x56AC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AC94u);
        ctx->pc = 0x56AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AC8Cu;
            // 0x56ac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AC94u; }
            if (ctx->pc != 0x56AC94u) { return; }
        }
        }
    }
    ctx->pc = 0x56AC94u;
label_56ac94:
    // 0x56ac94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56ac98:
    // 0x56ac98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x56ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56ac9c:
    // 0x56ac9c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x56ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_56aca0:
    // 0x56aca0: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x56aca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_56aca4:
    // 0x56aca4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x56aca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_56aca8:
    // 0x56aca8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x56aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_56acac:
    // 0x56acac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x56acacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56acb0:
    // 0x56acb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x56acb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_56acb4:
    // 0x56acb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x56acb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56acb8:
    // 0x56acb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x56acb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56acbc:
    // 0x56acbc: 0x3e00008  jr          $ra
label_56acc0:
    if (ctx->pc == 0x56ACC0u) {
        ctx->pc = 0x56ACC0u;
            // 0x56acc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x56ACC4u;
        goto label_56acc4;
    }
    ctx->pc = 0x56ACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56ACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ACBCu;
            // 0x56acc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56ACC4u;
label_56acc4:
    // 0x56acc4: 0x0  nop
    ctx->pc = 0x56acc4u;
    // NOP
label_56acc8:
    // 0x56acc8: 0x0  nop
    ctx->pc = 0x56acc8u;
    // NOP
label_56accc:
    // 0x56accc: 0x0  nop
    ctx->pc = 0x56acccu;
    // NOP
label_56acd0:
    // 0x56acd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x56acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_56acd4:
    // 0x56acd4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x56acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_56acd8:
    // 0x56acd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x56acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_56acdc:
    // 0x56acdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x56acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56ace0:
    // 0x56ace0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56ace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56ace4:
    // 0x56ace4: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x56ace4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_56ace8:
    // 0x56ace8: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x56ace8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_56acec:
    // 0x56acec: 0x10c50048  beq         $a2, $a1, . + 4 + (0x48 << 2)
label_56acf0:
    if (ctx->pc == 0x56ACF0u) {
        ctx->pc = 0x56ACF0u;
            // 0x56acf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56ACF4u;
        goto label_56acf4;
    }
    ctx->pc = 0x56ACECu;
    {
        const bool branch_taken_0x56acec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x56ACF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ACECu;
            // 0x56acf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56acec) {
            ctx->pc = 0x56AE10u;
            goto label_56ae10;
        }
    }
    ctx->pc = 0x56ACF4u;
label_56acf4:
    // 0x56acf4: 0x50c00041  beql        $a2, $zero, . + 4 + (0x41 << 2)
label_56acf8:
    if (ctx->pc == 0x56ACF8u) {
        ctx->pc = 0x56ACF8u;
            // 0x56acf8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x56ACFCu;
        goto label_56acfc;
    }
    ctx->pc = 0x56ACF4u;
    {
        const bool branch_taken_0x56acf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x56acf4) {
            ctx->pc = 0x56ACF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56ACF4u;
            // 0x56acf8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56ADFCu;
            goto label_56adfc;
        }
    }
    ctx->pc = 0x56ACFCu;
label_56acfc:
    // 0x56acfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x56acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56ad00:
    // 0x56ad00: 0x50c3000e  beql        $a2, $v1, . + 4 + (0xE << 2)
label_56ad04:
    if (ctx->pc == 0x56AD04u) {
        ctx->pc = 0x56AD04u;
            // 0x56ad04: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x56AD08u;
        goto label_56ad08;
    }
    ctx->pc = 0x56AD00u;
    {
        const bool branch_taken_0x56ad00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x56ad00) {
            ctx->pc = 0x56AD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD00u;
            // 0x56ad04: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56AD3Cu;
            goto label_56ad3c;
        }
    }
    ctx->pc = 0x56AD08u;
label_56ad08:
    // 0x56ad08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x56ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56ad0c:
    // 0x56ad0c: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_56ad10:
    if (ctx->pc == 0x56AD10u) {
        ctx->pc = 0x56AD10u;
            // 0x56ad10: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x56AD14u;
        goto label_56ad14;
    }
    ctx->pc = 0x56AD0Cu;
    {
        const bool branch_taken_0x56ad0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x56ad0c) {
            ctx->pc = 0x56AD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD0Cu;
            // 0x56ad10: 0x8ce30cb4  lw          $v1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56AD1Cu;
            goto label_56ad1c;
        }
    }
    ctx->pc = 0x56AD14u;
label_56ad14:
    // 0x56ad14: 0x10000044  b           . + 4 + (0x44 << 2)
label_56ad18:
    if (ctx->pc == 0x56AD18u) {
        ctx->pc = 0x56AD18u;
            // 0x56ad18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x56AD1Cu;
        goto label_56ad1c;
    }
    ctx->pc = 0x56AD14u;
    {
        const bool branch_taken_0x56ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD14u;
            // 0x56ad18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ad14) {
            ctx->pc = 0x56AE28u;
            goto label_56ae28;
        }
    }
    ctx->pc = 0x56AD1Cu;
label_56ad1c:
    // 0x56ad1c: 0x10650041  beq         $v1, $a1, . + 4 + (0x41 << 2)
label_56ad20:
    if (ctx->pc == 0x56AD20u) {
        ctx->pc = 0x56AD24u;
        goto label_56ad24;
    }
    ctx->pc = 0x56AD1Cu;
    {
        const bool branch_taken_0x56ad1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x56ad1c) {
            ctx->pc = 0x56AE24u;
            goto label_56ae24;
        }
    }
    ctx->pc = 0x56AD24u;
label_56ad24:
    // 0x56ad24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56ad24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56ad28:
    // 0x56ad28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x56ad28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_56ad2c:
    // 0x56ad2c: 0x320f809  jalr        $t9
label_56ad30:
    if (ctx->pc == 0x56AD30u) {
        ctx->pc = 0x56AD34u;
        goto label_56ad34;
    }
    ctx->pc = 0x56AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AD34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AD34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AD34u; }
            if (ctx->pc != 0x56AD34u) { return; }
        }
        }
    }
    ctx->pc = 0x56AD34u;
label_56ad34:
    // 0x56ad34: 0x1000003b  b           . + 4 + (0x3B << 2)
label_56ad38:
    if (ctx->pc == 0x56AD38u) {
        ctx->pc = 0x56AD3Cu;
        goto label_56ad3c;
    }
    ctx->pc = 0x56AD34u;
    {
        const bool branch_taken_0x56ad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56ad34) {
            ctx->pc = 0x56AE24u;
            goto label_56ae24;
        }
    }
    ctx->pc = 0x56AD3Cu;
label_56ad3c:
    // 0x56ad3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x56ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_56ad40:
    // 0x56ad40: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_56ad44:
    if (ctx->pc == 0x56AD44u) {
        ctx->pc = 0x56AD48u;
        goto label_56ad48;
    }
    ctx->pc = 0x56AD40u;
    {
        const bool branch_taken_0x56ad40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x56ad40) {
            ctx->pc = 0x56AD58u;
            goto label_56ad58;
        }
    }
    ctx->pc = 0x56AD48u;
label_56ad48:
    // 0x56ad48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56ad48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56ad4c:
    // 0x56ad4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56ad4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56ad50:
    // 0x56ad50: 0x320f809  jalr        $t9
label_56ad54:
    if (ctx->pc == 0x56AD54u) {
        ctx->pc = 0x56AD54u;
            // 0x56ad54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56AD58u;
        goto label_56ad58;
    }
    ctx->pc = 0x56AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AD58u);
        ctx->pc = 0x56AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD50u;
            // 0x56ad54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AD58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AD58u; }
            if (ctx->pc != 0x56AD58u) { return; }
        }
        }
    }
    ctx->pc = 0x56AD58u;
label_56ad58:
    // 0x56ad58: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56ad5c:
    // 0x56ad5c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x56ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_56ad60:
    // 0x56ad60: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x56ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_56ad64:
    // 0x56ad64: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_56ad68:
    if (ctx->pc == 0x56AD68u) {
        ctx->pc = 0x56AD68u;
            // 0x56ad68: 0xc4610018  lwc1        $f1, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x56AD6Cu;
        goto label_56ad6c;
    }
    ctx->pc = 0x56AD64u;
    {
        const bool branch_taken_0x56ad64 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x56AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD64u;
            // 0x56ad68: 0xc4610018  lwc1        $f1, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ad64) {
            ctx->pc = 0x56AD78u;
            goto label_56ad78;
        }
    }
    ctx->pc = 0x56AD6Cu;
label_56ad6c:
    // 0x56ad6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x56ad6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ad70:
    // 0x56ad70: 0x10000008  b           . + 4 + (0x8 << 2)
label_56ad74:
    if (ctx->pc == 0x56AD74u) {
        ctx->pc = 0x56AD74u;
            // 0x56ad74: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x56AD78u;
        goto label_56ad78;
    }
    ctx->pc = 0x56AD70u;
    {
        const bool branch_taken_0x56ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56AD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AD70u;
            // 0x56ad74: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56ad70) {
            ctx->pc = 0x56AD94u;
            goto label_56ad94;
        }
    }
    ctx->pc = 0x56AD78u;
label_56ad78:
    // 0x56ad78: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x56ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_56ad7c:
    // 0x56ad7c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x56ad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_56ad80:
    // 0x56ad80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x56ad80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_56ad84:
    // 0x56ad84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x56ad84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ad88:
    // 0x56ad88: 0x0  nop
    ctx->pc = 0x56ad88u;
    // NOP
label_56ad8c:
    // 0x56ad8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x56ad8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_56ad90:
    // 0x56ad90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x56ad90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_56ad94:
    // 0x56ad94: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x56ad94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_56ad98:
    // 0x56ad98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x56ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_56ad9c:
    // 0x56ad9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x56ad9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56ada0:
    // 0x56ada0: 0x0  nop
    ctx->pc = 0x56ada0u;
    // NOP
label_56ada4:
    // 0x56ada4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x56ada4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_56ada8:
    // 0x56ada8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_56adac:
    if (ctx->pc == 0x56ADACu) {
        ctx->pc = 0x56ADACu;
            // 0x56adac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x56ADB0u;
        goto label_56adb0;
    }
    ctx->pc = 0x56ADA8u;
    {
        const bool branch_taken_0x56ada8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56ada8) {
            ctx->pc = 0x56ADACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56ADA8u;
            // 0x56adac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x56ADC0u;
            goto label_56adc0;
        }
    }
    ctx->pc = 0x56ADB0u;
label_56adb0:
    // 0x56adb0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56adb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_56adb4:
    // 0x56adb4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x56adb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_56adb8:
    // 0x56adb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_56adbc:
    if (ctx->pc == 0x56ADBCu) {
        ctx->pc = 0x56ADBCu;
            // 0x56adbc: 0x2c83012c  sltiu       $v1, $a0, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)300) ? 1 : 0);
        ctx->pc = 0x56ADC0u;
        goto label_56adc0;
    }
    ctx->pc = 0x56ADB8u;
    {
        const bool branch_taken_0x56adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ADB8u;
            // 0x56adbc: 0x2c83012c  sltiu       $v1, $a0, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x56adb8) {
            ctx->pc = 0x56ADD8u;
            goto label_56add8;
        }
    }
    ctx->pc = 0x56ADC0u;
label_56adc0:
    // 0x56adc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x56adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_56adc4:
    // 0x56adc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56adc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_56adc8:
    // 0x56adc8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x56adc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_56adcc:
    // 0x56adcc: 0x0  nop
    ctx->pc = 0x56adccu;
    // NOP
label_56add0:
    // 0x56add0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x56add0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_56add4:
    // 0x56add4: 0x2c83012c  sltiu       $v1, $a0, 0x12C
    ctx->pc = 0x56add4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)300) ? 1 : 0);
label_56add8:
    // 0x56add8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_56addc:
    if (ctx->pc == 0x56ADDCu) {
        ctx->pc = 0x56ADDCu;
            // 0x56addc: 0xae040058  sw          $a0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
        ctx->pc = 0x56ADE0u;
        goto label_56ade0;
    }
    ctx->pc = 0x56ADD8u;
    {
        const bool branch_taken_0x56add8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x56ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ADD8u;
            // 0x56addc: 0xae040058  sw          $a0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56add8) {
            ctx->pc = 0x56AE24u;
            goto label_56ae24;
        }
    }
    ctx->pc = 0x56ADE0u;
label_56ade0:
    // 0x56ade0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56ade0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_56ade4:
    // 0x56ade4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x56ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56ade8:
    // 0x56ade8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56ade8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56adec:
    // 0x56adec: 0x320f809  jalr        $t9
label_56adf0:
    if (ctx->pc == 0x56ADF0u) {
        ctx->pc = 0x56ADF0u;
            // 0x56adf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56ADF4u;
        goto label_56adf4;
    }
    ctx->pc = 0x56ADECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56ADF4u);
        ctx->pc = 0x56ADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56ADECu;
            // 0x56adf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56ADF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56ADF4u; }
            if (ctx->pc != 0x56ADF4u) { return; }
        }
        }
    }
    ctx->pc = 0x56ADF4u;
label_56adf4:
    // 0x56adf4: 0x1000000b  b           . + 4 + (0xB << 2)
label_56adf8:
    if (ctx->pc == 0x56ADF8u) {
        ctx->pc = 0x56ADFCu;
        goto label_56adfc;
    }
    ctx->pc = 0x56ADF4u;
    {
        const bool branch_taken_0x56adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56adf4) {
            ctx->pc = 0x56AE24u;
            goto label_56ae24;
        }
    }
    ctx->pc = 0x56ADFCu;
label_56adfc:
    // 0x56adfc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x56adfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_56ae00:
    // 0x56ae00: 0x320f809  jalr        $t9
label_56ae04:
    if (ctx->pc == 0x56AE04u) {
        ctx->pc = 0x56AE08u;
        goto label_56ae08;
    }
    ctx->pc = 0x56AE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56AE08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56AE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56AE08u; }
            if (ctx->pc != 0x56AE08u) { return; }
        }
        }
    }
    ctx->pc = 0x56AE08u;
label_56ae08:
    // 0x56ae08: 0x10000006  b           . + 4 + (0x6 << 2)
label_56ae0c:
    if (ctx->pc == 0x56AE0Cu) {
        ctx->pc = 0x56AE10u;
        goto label_56ae10;
    }
    ctx->pc = 0x56AE08u;
    {
        const bool branch_taken_0x56ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x56ae08) {
            ctx->pc = 0x56AE24u;
            goto label_56ae24;
        }
    }
    ctx->pc = 0x56AE10u;
label_56ae10:
    // 0x56ae10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x56ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_56ae14:
    // 0x56ae14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x56ae14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56ae18:
    // 0x56ae18: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x56ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_56ae1c:
    // 0x56ae1c: 0xc057b7c  jal         func_15EDF0
label_56ae20:
    if (ctx->pc == 0x56AE20u) {
        ctx->pc = 0x56AE20u;
            // 0x56ae20: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x56AE24u;
        goto label_56ae24;
    }
    ctx->pc = 0x56AE1Cu;
    SET_GPR_U32(ctx, 31, 0x56AE24u);
    ctx->pc = 0x56AE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56AE1Cu;
            // 0x56ae20: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AE24u; }
        if (ctx->pc != 0x56AE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56AE24u; }
        if (ctx->pc != 0x56AE24u) { return; }
    }
    ctx->pc = 0x56AE24u;
label_56ae24:
    // 0x56ae24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56ae24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_56ae28:
    // 0x56ae28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56ae28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56ae2c:
    // 0x56ae2c: 0x3e00008  jr          $ra
label_56ae30:
    if (ctx->pc == 0x56AE30u) {
        ctx->pc = 0x56AE30u;
            // 0x56ae30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x56AE34u;
        goto label_56ae34;
    }
    ctx->pc = 0x56AE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56AE2Cu;
            // 0x56ae30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56AE34u;
label_56ae34:
    // 0x56ae34: 0x0  nop
    ctx->pc = 0x56ae34u;
    // NOP
label_56ae38:
    // 0x56ae38: 0x0  nop
    ctx->pc = 0x56ae38u;
    // NOP
label_56ae3c:
    // 0x56ae3c: 0x0  nop
    ctx->pc = 0x56ae3cu;
    // NOP
}
