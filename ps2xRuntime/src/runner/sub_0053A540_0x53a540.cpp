#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053A540
// Address: 0x53a540 - 0x53afa0
void sub_0053A540_0x53a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053A540_0x53a540");
#endif

    switch (ctx->pc) {
        case 0x53a540u: goto label_53a540;
        case 0x53a544u: goto label_53a544;
        case 0x53a548u: goto label_53a548;
        case 0x53a54cu: goto label_53a54c;
        case 0x53a550u: goto label_53a550;
        case 0x53a554u: goto label_53a554;
        case 0x53a558u: goto label_53a558;
        case 0x53a55cu: goto label_53a55c;
        case 0x53a560u: goto label_53a560;
        case 0x53a564u: goto label_53a564;
        case 0x53a568u: goto label_53a568;
        case 0x53a56cu: goto label_53a56c;
        case 0x53a570u: goto label_53a570;
        case 0x53a574u: goto label_53a574;
        case 0x53a578u: goto label_53a578;
        case 0x53a57cu: goto label_53a57c;
        case 0x53a580u: goto label_53a580;
        case 0x53a584u: goto label_53a584;
        case 0x53a588u: goto label_53a588;
        case 0x53a58cu: goto label_53a58c;
        case 0x53a590u: goto label_53a590;
        case 0x53a594u: goto label_53a594;
        case 0x53a598u: goto label_53a598;
        case 0x53a59cu: goto label_53a59c;
        case 0x53a5a0u: goto label_53a5a0;
        case 0x53a5a4u: goto label_53a5a4;
        case 0x53a5a8u: goto label_53a5a8;
        case 0x53a5acu: goto label_53a5ac;
        case 0x53a5b0u: goto label_53a5b0;
        case 0x53a5b4u: goto label_53a5b4;
        case 0x53a5b8u: goto label_53a5b8;
        case 0x53a5bcu: goto label_53a5bc;
        case 0x53a5c0u: goto label_53a5c0;
        case 0x53a5c4u: goto label_53a5c4;
        case 0x53a5c8u: goto label_53a5c8;
        case 0x53a5ccu: goto label_53a5cc;
        case 0x53a5d0u: goto label_53a5d0;
        case 0x53a5d4u: goto label_53a5d4;
        case 0x53a5d8u: goto label_53a5d8;
        case 0x53a5dcu: goto label_53a5dc;
        case 0x53a5e0u: goto label_53a5e0;
        case 0x53a5e4u: goto label_53a5e4;
        case 0x53a5e8u: goto label_53a5e8;
        case 0x53a5ecu: goto label_53a5ec;
        case 0x53a5f0u: goto label_53a5f0;
        case 0x53a5f4u: goto label_53a5f4;
        case 0x53a5f8u: goto label_53a5f8;
        case 0x53a5fcu: goto label_53a5fc;
        case 0x53a600u: goto label_53a600;
        case 0x53a604u: goto label_53a604;
        case 0x53a608u: goto label_53a608;
        case 0x53a60cu: goto label_53a60c;
        case 0x53a610u: goto label_53a610;
        case 0x53a614u: goto label_53a614;
        case 0x53a618u: goto label_53a618;
        case 0x53a61cu: goto label_53a61c;
        case 0x53a620u: goto label_53a620;
        case 0x53a624u: goto label_53a624;
        case 0x53a628u: goto label_53a628;
        case 0x53a62cu: goto label_53a62c;
        case 0x53a630u: goto label_53a630;
        case 0x53a634u: goto label_53a634;
        case 0x53a638u: goto label_53a638;
        case 0x53a63cu: goto label_53a63c;
        case 0x53a640u: goto label_53a640;
        case 0x53a644u: goto label_53a644;
        case 0x53a648u: goto label_53a648;
        case 0x53a64cu: goto label_53a64c;
        case 0x53a650u: goto label_53a650;
        case 0x53a654u: goto label_53a654;
        case 0x53a658u: goto label_53a658;
        case 0x53a65cu: goto label_53a65c;
        case 0x53a660u: goto label_53a660;
        case 0x53a664u: goto label_53a664;
        case 0x53a668u: goto label_53a668;
        case 0x53a66cu: goto label_53a66c;
        case 0x53a670u: goto label_53a670;
        case 0x53a674u: goto label_53a674;
        case 0x53a678u: goto label_53a678;
        case 0x53a67cu: goto label_53a67c;
        case 0x53a680u: goto label_53a680;
        case 0x53a684u: goto label_53a684;
        case 0x53a688u: goto label_53a688;
        case 0x53a68cu: goto label_53a68c;
        case 0x53a690u: goto label_53a690;
        case 0x53a694u: goto label_53a694;
        case 0x53a698u: goto label_53a698;
        case 0x53a69cu: goto label_53a69c;
        case 0x53a6a0u: goto label_53a6a0;
        case 0x53a6a4u: goto label_53a6a4;
        case 0x53a6a8u: goto label_53a6a8;
        case 0x53a6acu: goto label_53a6ac;
        case 0x53a6b0u: goto label_53a6b0;
        case 0x53a6b4u: goto label_53a6b4;
        case 0x53a6b8u: goto label_53a6b8;
        case 0x53a6bcu: goto label_53a6bc;
        case 0x53a6c0u: goto label_53a6c0;
        case 0x53a6c4u: goto label_53a6c4;
        case 0x53a6c8u: goto label_53a6c8;
        case 0x53a6ccu: goto label_53a6cc;
        case 0x53a6d0u: goto label_53a6d0;
        case 0x53a6d4u: goto label_53a6d4;
        case 0x53a6d8u: goto label_53a6d8;
        case 0x53a6dcu: goto label_53a6dc;
        case 0x53a6e0u: goto label_53a6e0;
        case 0x53a6e4u: goto label_53a6e4;
        case 0x53a6e8u: goto label_53a6e8;
        case 0x53a6ecu: goto label_53a6ec;
        case 0x53a6f0u: goto label_53a6f0;
        case 0x53a6f4u: goto label_53a6f4;
        case 0x53a6f8u: goto label_53a6f8;
        case 0x53a6fcu: goto label_53a6fc;
        case 0x53a700u: goto label_53a700;
        case 0x53a704u: goto label_53a704;
        case 0x53a708u: goto label_53a708;
        case 0x53a70cu: goto label_53a70c;
        case 0x53a710u: goto label_53a710;
        case 0x53a714u: goto label_53a714;
        case 0x53a718u: goto label_53a718;
        case 0x53a71cu: goto label_53a71c;
        case 0x53a720u: goto label_53a720;
        case 0x53a724u: goto label_53a724;
        case 0x53a728u: goto label_53a728;
        case 0x53a72cu: goto label_53a72c;
        case 0x53a730u: goto label_53a730;
        case 0x53a734u: goto label_53a734;
        case 0x53a738u: goto label_53a738;
        case 0x53a73cu: goto label_53a73c;
        case 0x53a740u: goto label_53a740;
        case 0x53a744u: goto label_53a744;
        case 0x53a748u: goto label_53a748;
        case 0x53a74cu: goto label_53a74c;
        case 0x53a750u: goto label_53a750;
        case 0x53a754u: goto label_53a754;
        case 0x53a758u: goto label_53a758;
        case 0x53a75cu: goto label_53a75c;
        case 0x53a760u: goto label_53a760;
        case 0x53a764u: goto label_53a764;
        case 0x53a768u: goto label_53a768;
        case 0x53a76cu: goto label_53a76c;
        case 0x53a770u: goto label_53a770;
        case 0x53a774u: goto label_53a774;
        case 0x53a778u: goto label_53a778;
        case 0x53a77cu: goto label_53a77c;
        case 0x53a780u: goto label_53a780;
        case 0x53a784u: goto label_53a784;
        case 0x53a788u: goto label_53a788;
        case 0x53a78cu: goto label_53a78c;
        case 0x53a790u: goto label_53a790;
        case 0x53a794u: goto label_53a794;
        case 0x53a798u: goto label_53a798;
        case 0x53a79cu: goto label_53a79c;
        case 0x53a7a0u: goto label_53a7a0;
        case 0x53a7a4u: goto label_53a7a4;
        case 0x53a7a8u: goto label_53a7a8;
        case 0x53a7acu: goto label_53a7ac;
        case 0x53a7b0u: goto label_53a7b0;
        case 0x53a7b4u: goto label_53a7b4;
        case 0x53a7b8u: goto label_53a7b8;
        case 0x53a7bcu: goto label_53a7bc;
        case 0x53a7c0u: goto label_53a7c0;
        case 0x53a7c4u: goto label_53a7c4;
        case 0x53a7c8u: goto label_53a7c8;
        case 0x53a7ccu: goto label_53a7cc;
        case 0x53a7d0u: goto label_53a7d0;
        case 0x53a7d4u: goto label_53a7d4;
        case 0x53a7d8u: goto label_53a7d8;
        case 0x53a7dcu: goto label_53a7dc;
        case 0x53a7e0u: goto label_53a7e0;
        case 0x53a7e4u: goto label_53a7e4;
        case 0x53a7e8u: goto label_53a7e8;
        case 0x53a7ecu: goto label_53a7ec;
        case 0x53a7f0u: goto label_53a7f0;
        case 0x53a7f4u: goto label_53a7f4;
        case 0x53a7f8u: goto label_53a7f8;
        case 0x53a7fcu: goto label_53a7fc;
        case 0x53a800u: goto label_53a800;
        case 0x53a804u: goto label_53a804;
        case 0x53a808u: goto label_53a808;
        case 0x53a80cu: goto label_53a80c;
        case 0x53a810u: goto label_53a810;
        case 0x53a814u: goto label_53a814;
        case 0x53a818u: goto label_53a818;
        case 0x53a81cu: goto label_53a81c;
        case 0x53a820u: goto label_53a820;
        case 0x53a824u: goto label_53a824;
        case 0x53a828u: goto label_53a828;
        case 0x53a82cu: goto label_53a82c;
        case 0x53a830u: goto label_53a830;
        case 0x53a834u: goto label_53a834;
        case 0x53a838u: goto label_53a838;
        case 0x53a83cu: goto label_53a83c;
        case 0x53a840u: goto label_53a840;
        case 0x53a844u: goto label_53a844;
        case 0x53a848u: goto label_53a848;
        case 0x53a84cu: goto label_53a84c;
        case 0x53a850u: goto label_53a850;
        case 0x53a854u: goto label_53a854;
        case 0x53a858u: goto label_53a858;
        case 0x53a85cu: goto label_53a85c;
        case 0x53a860u: goto label_53a860;
        case 0x53a864u: goto label_53a864;
        case 0x53a868u: goto label_53a868;
        case 0x53a86cu: goto label_53a86c;
        case 0x53a870u: goto label_53a870;
        case 0x53a874u: goto label_53a874;
        case 0x53a878u: goto label_53a878;
        case 0x53a87cu: goto label_53a87c;
        case 0x53a880u: goto label_53a880;
        case 0x53a884u: goto label_53a884;
        case 0x53a888u: goto label_53a888;
        case 0x53a88cu: goto label_53a88c;
        case 0x53a890u: goto label_53a890;
        case 0x53a894u: goto label_53a894;
        case 0x53a898u: goto label_53a898;
        case 0x53a89cu: goto label_53a89c;
        case 0x53a8a0u: goto label_53a8a0;
        case 0x53a8a4u: goto label_53a8a4;
        case 0x53a8a8u: goto label_53a8a8;
        case 0x53a8acu: goto label_53a8ac;
        case 0x53a8b0u: goto label_53a8b0;
        case 0x53a8b4u: goto label_53a8b4;
        case 0x53a8b8u: goto label_53a8b8;
        case 0x53a8bcu: goto label_53a8bc;
        case 0x53a8c0u: goto label_53a8c0;
        case 0x53a8c4u: goto label_53a8c4;
        case 0x53a8c8u: goto label_53a8c8;
        case 0x53a8ccu: goto label_53a8cc;
        case 0x53a8d0u: goto label_53a8d0;
        case 0x53a8d4u: goto label_53a8d4;
        case 0x53a8d8u: goto label_53a8d8;
        case 0x53a8dcu: goto label_53a8dc;
        case 0x53a8e0u: goto label_53a8e0;
        case 0x53a8e4u: goto label_53a8e4;
        case 0x53a8e8u: goto label_53a8e8;
        case 0x53a8ecu: goto label_53a8ec;
        case 0x53a8f0u: goto label_53a8f0;
        case 0x53a8f4u: goto label_53a8f4;
        case 0x53a8f8u: goto label_53a8f8;
        case 0x53a8fcu: goto label_53a8fc;
        case 0x53a900u: goto label_53a900;
        case 0x53a904u: goto label_53a904;
        case 0x53a908u: goto label_53a908;
        case 0x53a90cu: goto label_53a90c;
        case 0x53a910u: goto label_53a910;
        case 0x53a914u: goto label_53a914;
        case 0x53a918u: goto label_53a918;
        case 0x53a91cu: goto label_53a91c;
        case 0x53a920u: goto label_53a920;
        case 0x53a924u: goto label_53a924;
        case 0x53a928u: goto label_53a928;
        case 0x53a92cu: goto label_53a92c;
        case 0x53a930u: goto label_53a930;
        case 0x53a934u: goto label_53a934;
        case 0x53a938u: goto label_53a938;
        case 0x53a93cu: goto label_53a93c;
        case 0x53a940u: goto label_53a940;
        case 0x53a944u: goto label_53a944;
        case 0x53a948u: goto label_53a948;
        case 0x53a94cu: goto label_53a94c;
        case 0x53a950u: goto label_53a950;
        case 0x53a954u: goto label_53a954;
        case 0x53a958u: goto label_53a958;
        case 0x53a95cu: goto label_53a95c;
        case 0x53a960u: goto label_53a960;
        case 0x53a964u: goto label_53a964;
        case 0x53a968u: goto label_53a968;
        case 0x53a96cu: goto label_53a96c;
        case 0x53a970u: goto label_53a970;
        case 0x53a974u: goto label_53a974;
        case 0x53a978u: goto label_53a978;
        case 0x53a97cu: goto label_53a97c;
        case 0x53a980u: goto label_53a980;
        case 0x53a984u: goto label_53a984;
        case 0x53a988u: goto label_53a988;
        case 0x53a98cu: goto label_53a98c;
        case 0x53a990u: goto label_53a990;
        case 0x53a994u: goto label_53a994;
        case 0x53a998u: goto label_53a998;
        case 0x53a99cu: goto label_53a99c;
        case 0x53a9a0u: goto label_53a9a0;
        case 0x53a9a4u: goto label_53a9a4;
        case 0x53a9a8u: goto label_53a9a8;
        case 0x53a9acu: goto label_53a9ac;
        case 0x53a9b0u: goto label_53a9b0;
        case 0x53a9b4u: goto label_53a9b4;
        case 0x53a9b8u: goto label_53a9b8;
        case 0x53a9bcu: goto label_53a9bc;
        case 0x53a9c0u: goto label_53a9c0;
        case 0x53a9c4u: goto label_53a9c4;
        case 0x53a9c8u: goto label_53a9c8;
        case 0x53a9ccu: goto label_53a9cc;
        case 0x53a9d0u: goto label_53a9d0;
        case 0x53a9d4u: goto label_53a9d4;
        case 0x53a9d8u: goto label_53a9d8;
        case 0x53a9dcu: goto label_53a9dc;
        case 0x53a9e0u: goto label_53a9e0;
        case 0x53a9e4u: goto label_53a9e4;
        case 0x53a9e8u: goto label_53a9e8;
        case 0x53a9ecu: goto label_53a9ec;
        case 0x53a9f0u: goto label_53a9f0;
        case 0x53a9f4u: goto label_53a9f4;
        case 0x53a9f8u: goto label_53a9f8;
        case 0x53a9fcu: goto label_53a9fc;
        case 0x53aa00u: goto label_53aa00;
        case 0x53aa04u: goto label_53aa04;
        case 0x53aa08u: goto label_53aa08;
        case 0x53aa0cu: goto label_53aa0c;
        case 0x53aa10u: goto label_53aa10;
        case 0x53aa14u: goto label_53aa14;
        case 0x53aa18u: goto label_53aa18;
        case 0x53aa1cu: goto label_53aa1c;
        case 0x53aa20u: goto label_53aa20;
        case 0x53aa24u: goto label_53aa24;
        case 0x53aa28u: goto label_53aa28;
        case 0x53aa2cu: goto label_53aa2c;
        case 0x53aa30u: goto label_53aa30;
        case 0x53aa34u: goto label_53aa34;
        case 0x53aa38u: goto label_53aa38;
        case 0x53aa3cu: goto label_53aa3c;
        case 0x53aa40u: goto label_53aa40;
        case 0x53aa44u: goto label_53aa44;
        case 0x53aa48u: goto label_53aa48;
        case 0x53aa4cu: goto label_53aa4c;
        case 0x53aa50u: goto label_53aa50;
        case 0x53aa54u: goto label_53aa54;
        case 0x53aa58u: goto label_53aa58;
        case 0x53aa5cu: goto label_53aa5c;
        case 0x53aa60u: goto label_53aa60;
        case 0x53aa64u: goto label_53aa64;
        case 0x53aa68u: goto label_53aa68;
        case 0x53aa6cu: goto label_53aa6c;
        case 0x53aa70u: goto label_53aa70;
        case 0x53aa74u: goto label_53aa74;
        case 0x53aa78u: goto label_53aa78;
        case 0x53aa7cu: goto label_53aa7c;
        case 0x53aa80u: goto label_53aa80;
        case 0x53aa84u: goto label_53aa84;
        case 0x53aa88u: goto label_53aa88;
        case 0x53aa8cu: goto label_53aa8c;
        case 0x53aa90u: goto label_53aa90;
        case 0x53aa94u: goto label_53aa94;
        case 0x53aa98u: goto label_53aa98;
        case 0x53aa9cu: goto label_53aa9c;
        case 0x53aaa0u: goto label_53aaa0;
        case 0x53aaa4u: goto label_53aaa4;
        case 0x53aaa8u: goto label_53aaa8;
        case 0x53aaacu: goto label_53aaac;
        case 0x53aab0u: goto label_53aab0;
        case 0x53aab4u: goto label_53aab4;
        case 0x53aab8u: goto label_53aab8;
        case 0x53aabcu: goto label_53aabc;
        case 0x53aac0u: goto label_53aac0;
        case 0x53aac4u: goto label_53aac4;
        case 0x53aac8u: goto label_53aac8;
        case 0x53aaccu: goto label_53aacc;
        case 0x53aad0u: goto label_53aad0;
        case 0x53aad4u: goto label_53aad4;
        case 0x53aad8u: goto label_53aad8;
        case 0x53aadcu: goto label_53aadc;
        case 0x53aae0u: goto label_53aae0;
        case 0x53aae4u: goto label_53aae4;
        case 0x53aae8u: goto label_53aae8;
        case 0x53aaecu: goto label_53aaec;
        case 0x53aaf0u: goto label_53aaf0;
        case 0x53aaf4u: goto label_53aaf4;
        case 0x53aaf8u: goto label_53aaf8;
        case 0x53aafcu: goto label_53aafc;
        case 0x53ab00u: goto label_53ab00;
        case 0x53ab04u: goto label_53ab04;
        case 0x53ab08u: goto label_53ab08;
        case 0x53ab0cu: goto label_53ab0c;
        case 0x53ab10u: goto label_53ab10;
        case 0x53ab14u: goto label_53ab14;
        case 0x53ab18u: goto label_53ab18;
        case 0x53ab1cu: goto label_53ab1c;
        case 0x53ab20u: goto label_53ab20;
        case 0x53ab24u: goto label_53ab24;
        case 0x53ab28u: goto label_53ab28;
        case 0x53ab2cu: goto label_53ab2c;
        case 0x53ab30u: goto label_53ab30;
        case 0x53ab34u: goto label_53ab34;
        case 0x53ab38u: goto label_53ab38;
        case 0x53ab3cu: goto label_53ab3c;
        case 0x53ab40u: goto label_53ab40;
        case 0x53ab44u: goto label_53ab44;
        case 0x53ab48u: goto label_53ab48;
        case 0x53ab4cu: goto label_53ab4c;
        case 0x53ab50u: goto label_53ab50;
        case 0x53ab54u: goto label_53ab54;
        case 0x53ab58u: goto label_53ab58;
        case 0x53ab5cu: goto label_53ab5c;
        case 0x53ab60u: goto label_53ab60;
        case 0x53ab64u: goto label_53ab64;
        case 0x53ab68u: goto label_53ab68;
        case 0x53ab6cu: goto label_53ab6c;
        case 0x53ab70u: goto label_53ab70;
        case 0x53ab74u: goto label_53ab74;
        case 0x53ab78u: goto label_53ab78;
        case 0x53ab7cu: goto label_53ab7c;
        case 0x53ab80u: goto label_53ab80;
        case 0x53ab84u: goto label_53ab84;
        case 0x53ab88u: goto label_53ab88;
        case 0x53ab8cu: goto label_53ab8c;
        case 0x53ab90u: goto label_53ab90;
        case 0x53ab94u: goto label_53ab94;
        case 0x53ab98u: goto label_53ab98;
        case 0x53ab9cu: goto label_53ab9c;
        case 0x53aba0u: goto label_53aba0;
        case 0x53aba4u: goto label_53aba4;
        case 0x53aba8u: goto label_53aba8;
        case 0x53abacu: goto label_53abac;
        case 0x53abb0u: goto label_53abb0;
        case 0x53abb4u: goto label_53abb4;
        case 0x53abb8u: goto label_53abb8;
        case 0x53abbcu: goto label_53abbc;
        case 0x53abc0u: goto label_53abc0;
        case 0x53abc4u: goto label_53abc4;
        case 0x53abc8u: goto label_53abc8;
        case 0x53abccu: goto label_53abcc;
        case 0x53abd0u: goto label_53abd0;
        case 0x53abd4u: goto label_53abd4;
        case 0x53abd8u: goto label_53abd8;
        case 0x53abdcu: goto label_53abdc;
        case 0x53abe0u: goto label_53abe0;
        case 0x53abe4u: goto label_53abe4;
        case 0x53abe8u: goto label_53abe8;
        case 0x53abecu: goto label_53abec;
        case 0x53abf0u: goto label_53abf0;
        case 0x53abf4u: goto label_53abf4;
        case 0x53abf8u: goto label_53abf8;
        case 0x53abfcu: goto label_53abfc;
        case 0x53ac00u: goto label_53ac00;
        case 0x53ac04u: goto label_53ac04;
        case 0x53ac08u: goto label_53ac08;
        case 0x53ac0cu: goto label_53ac0c;
        case 0x53ac10u: goto label_53ac10;
        case 0x53ac14u: goto label_53ac14;
        case 0x53ac18u: goto label_53ac18;
        case 0x53ac1cu: goto label_53ac1c;
        case 0x53ac20u: goto label_53ac20;
        case 0x53ac24u: goto label_53ac24;
        case 0x53ac28u: goto label_53ac28;
        case 0x53ac2cu: goto label_53ac2c;
        case 0x53ac30u: goto label_53ac30;
        case 0x53ac34u: goto label_53ac34;
        case 0x53ac38u: goto label_53ac38;
        case 0x53ac3cu: goto label_53ac3c;
        case 0x53ac40u: goto label_53ac40;
        case 0x53ac44u: goto label_53ac44;
        case 0x53ac48u: goto label_53ac48;
        case 0x53ac4cu: goto label_53ac4c;
        case 0x53ac50u: goto label_53ac50;
        case 0x53ac54u: goto label_53ac54;
        case 0x53ac58u: goto label_53ac58;
        case 0x53ac5cu: goto label_53ac5c;
        case 0x53ac60u: goto label_53ac60;
        case 0x53ac64u: goto label_53ac64;
        case 0x53ac68u: goto label_53ac68;
        case 0x53ac6cu: goto label_53ac6c;
        case 0x53ac70u: goto label_53ac70;
        case 0x53ac74u: goto label_53ac74;
        case 0x53ac78u: goto label_53ac78;
        case 0x53ac7cu: goto label_53ac7c;
        case 0x53ac80u: goto label_53ac80;
        case 0x53ac84u: goto label_53ac84;
        case 0x53ac88u: goto label_53ac88;
        case 0x53ac8cu: goto label_53ac8c;
        case 0x53ac90u: goto label_53ac90;
        case 0x53ac94u: goto label_53ac94;
        case 0x53ac98u: goto label_53ac98;
        case 0x53ac9cu: goto label_53ac9c;
        case 0x53aca0u: goto label_53aca0;
        case 0x53aca4u: goto label_53aca4;
        case 0x53aca8u: goto label_53aca8;
        case 0x53acacu: goto label_53acac;
        case 0x53acb0u: goto label_53acb0;
        case 0x53acb4u: goto label_53acb4;
        case 0x53acb8u: goto label_53acb8;
        case 0x53acbcu: goto label_53acbc;
        case 0x53acc0u: goto label_53acc0;
        case 0x53acc4u: goto label_53acc4;
        case 0x53acc8u: goto label_53acc8;
        case 0x53acccu: goto label_53accc;
        case 0x53acd0u: goto label_53acd0;
        case 0x53acd4u: goto label_53acd4;
        case 0x53acd8u: goto label_53acd8;
        case 0x53acdcu: goto label_53acdc;
        case 0x53ace0u: goto label_53ace0;
        case 0x53ace4u: goto label_53ace4;
        case 0x53ace8u: goto label_53ace8;
        case 0x53acecu: goto label_53acec;
        case 0x53acf0u: goto label_53acf0;
        case 0x53acf4u: goto label_53acf4;
        case 0x53acf8u: goto label_53acf8;
        case 0x53acfcu: goto label_53acfc;
        case 0x53ad00u: goto label_53ad00;
        case 0x53ad04u: goto label_53ad04;
        case 0x53ad08u: goto label_53ad08;
        case 0x53ad0cu: goto label_53ad0c;
        case 0x53ad10u: goto label_53ad10;
        case 0x53ad14u: goto label_53ad14;
        case 0x53ad18u: goto label_53ad18;
        case 0x53ad1cu: goto label_53ad1c;
        case 0x53ad20u: goto label_53ad20;
        case 0x53ad24u: goto label_53ad24;
        case 0x53ad28u: goto label_53ad28;
        case 0x53ad2cu: goto label_53ad2c;
        case 0x53ad30u: goto label_53ad30;
        case 0x53ad34u: goto label_53ad34;
        case 0x53ad38u: goto label_53ad38;
        case 0x53ad3cu: goto label_53ad3c;
        case 0x53ad40u: goto label_53ad40;
        case 0x53ad44u: goto label_53ad44;
        case 0x53ad48u: goto label_53ad48;
        case 0x53ad4cu: goto label_53ad4c;
        case 0x53ad50u: goto label_53ad50;
        case 0x53ad54u: goto label_53ad54;
        case 0x53ad58u: goto label_53ad58;
        case 0x53ad5cu: goto label_53ad5c;
        case 0x53ad60u: goto label_53ad60;
        case 0x53ad64u: goto label_53ad64;
        case 0x53ad68u: goto label_53ad68;
        case 0x53ad6cu: goto label_53ad6c;
        case 0x53ad70u: goto label_53ad70;
        case 0x53ad74u: goto label_53ad74;
        case 0x53ad78u: goto label_53ad78;
        case 0x53ad7cu: goto label_53ad7c;
        case 0x53ad80u: goto label_53ad80;
        case 0x53ad84u: goto label_53ad84;
        case 0x53ad88u: goto label_53ad88;
        case 0x53ad8cu: goto label_53ad8c;
        case 0x53ad90u: goto label_53ad90;
        case 0x53ad94u: goto label_53ad94;
        case 0x53ad98u: goto label_53ad98;
        case 0x53ad9cu: goto label_53ad9c;
        case 0x53ada0u: goto label_53ada0;
        case 0x53ada4u: goto label_53ada4;
        case 0x53ada8u: goto label_53ada8;
        case 0x53adacu: goto label_53adac;
        case 0x53adb0u: goto label_53adb0;
        case 0x53adb4u: goto label_53adb4;
        case 0x53adb8u: goto label_53adb8;
        case 0x53adbcu: goto label_53adbc;
        case 0x53adc0u: goto label_53adc0;
        case 0x53adc4u: goto label_53adc4;
        case 0x53adc8u: goto label_53adc8;
        case 0x53adccu: goto label_53adcc;
        case 0x53add0u: goto label_53add0;
        case 0x53add4u: goto label_53add4;
        case 0x53add8u: goto label_53add8;
        case 0x53addcu: goto label_53addc;
        case 0x53ade0u: goto label_53ade0;
        case 0x53ade4u: goto label_53ade4;
        case 0x53ade8u: goto label_53ade8;
        case 0x53adecu: goto label_53adec;
        case 0x53adf0u: goto label_53adf0;
        case 0x53adf4u: goto label_53adf4;
        case 0x53adf8u: goto label_53adf8;
        case 0x53adfcu: goto label_53adfc;
        case 0x53ae00u: goto label_53ae00;
        case 0x53ae04u: goto label_53ae04;
        case 0x53ae08u: goto label_53ae08;
        case 0x53ae0cu: goto label_53ae0c;
        case 0x53ae10u: goto label_53ae10;
        case 0x53ae14u: goto label_53ae14;
        case 0x53ae18u: goto label_53ae18;
        case 0x53ae1cu: goto label_53ae1c;
        case 0x53ae20u: goto label_53ae20;
        case 0x53ae24u: goto label_53ae24;
        case 0x53ae28u: goto label_53ae28;
        case 0x53ae2cu: goto label_53ae2c;
        case 0x53ae30u: goto label_53ae30;
        case 0x53ae34u: goto label_53ae34;
        case 0x53ae38u: goto label_53ae38;
        case 0x53ae3cu: goto label_53ae3c;
        case 0x53ae40u: goto label_53ae40;
        case 0x53ae44u: goto label_53ae44;
        case 0x53ae48u: goto label_53ae48;
        case 0x53ae4cu: goto label_53ae4c;
        case 0x53ae50u: goto label_53ae50;
        case 0x53ae54u: goto label_53ae54;
        case 0x53ae58u: goto label_53ae58;
        case 0x53ae5cu: goto label_53ae5c;
        case 0x53ae60u: goto label_53ae60;
        case 0x53ae64u: goto label_53ae64;
        case 0x53ae68u: goto label_53ae68;
        case 0x53ae6cu: goto label_53ae6c;
        case 0x53ae70u: goto label_53ae70;
        case 0x53ae74u: goto label_53ae74;
        case 0x53ae78u: goto label_53ae78;
        case 0x53ae7cu: goto label_53ae7c;
        case 0x53ae80u: goto label_53ae80;
        case 0x53ae84u: goto label_53ae84;
        case 0x53ae88u: goto label_53ae88;
        case 0x53ae8cu: goto label_53ae8c;
        case 0x53ae90u: goto label_53ae90;
        case 0x53ae94u: goto label_53ae94;
        case 0x53ae98u: goto label_53ae98;
        case 0x53ae9cu: goto label_53ae9c;
        case 0x53aea0u: goto label_53aea0;
        case 0x53aea4u: goto label_53aea4;
        case 0x53aea8u: goto label_53aea8;
        case 0x53aeacu: goto label_53aeac;
        case 0x53aeb0u: goto label_53aeb0;
        case 0x53aeb4u: goto label_53aeb4;
        case 0x53aeb8u: goto label_53aeb8;
        case 0x53aebcu: goto label_53aebc;
        case 0x53aec0u: goto label_53aec0;
        case 0x53aec4u: goto label_53aec4;
        case 0x53aec8u: goto label_53aec8;
        case 0x53aeccu: goto label_53aecc;
        case 0x53aed0u: goto label_53aed0;
        case 0x53aed4u: goto label_53aed4;
        case 0x53aed8u: goto label_53aed8;
        case 0x53aedcu: goto label_53aedc;
        case 0x53aee0u: goto label_53aee0;
        case 0x53aee4u: goto label_53aee4;
        case 0x53aee8u: goto label_53aee8;
        case 0x53aeecu: goto label_53aeec;
        case 0x53aef0u: goto label_53aef0;
        case 0x53aef4u: goto label_53aef4;
        case 0x53aef8u: goto label_53aef8;
        case 0x53aefcu: goto label_53aefc;
        case 0x53af00u: goto label_53af00;
        case 0x53af04u: goto label_53af04;
        case 0x53af08u: goto label_53af08;
        case 0x53af0cu: goto label_53af0c;
        case 0x53af10u: goto label_53af10;
        case 0x53af14u: goto label_53af14;
        case 0x53af18u: goto label_53af18;
        case 0x53af1cu: goto label_53af1c;
        case 0x53af20u: goto label_53af20;
        case 0x53af24u: goto label_53af24;
        case 0x53af28u: goto label_53af28;
        case 0x53af2cu: goto label_53af2c;
        case 0x53af30u: goto label_53af30;
        case 0x53af34u: goto label_53af34;
        case 0x53af38u: goto label_53af38;
        case 0x53af3cu: goto label_53af3c;
        case 0x53af40u: goto label_53af40;
        case 0x53af44u: goto label_53af44;
        case 0x53af48u: goto label_53af48;
        case 0x53af4cu: goto label_53af4c;
        case 0x53af50u: goto label_53af50;
        case 0x53af54u: goto label_53af54;
        case 0x53af58u: goto label_53af58;
        case 0x53af5cu: goto label_53af5c;
        case 0x53af60u: goto label_53af60;
        case 0x53af64u: goto label_53af64;
        case 0x53af68u: goto label_53af68;
        case 0x53af6cu: goto label_53af6c;
        case 0x53af70u: goto label_53af70;
        case 0x53af74u: goto label_53af74;
        case 0x53af78u: goto label_53af78;
        case 0x53af7cu: goto label_53af7c;
        case 0x53af80u: goto label_53af80;
        case 0x53af84u: goto label_53af84;
        case 0x53af88u: goto label_53af88;
        case 0x53af8cu: goto label_53af8c;
        case 0x53af90u: goto label_53af90;
        case 0x53af94u: goto label_53af94;
        case 0x53af98u: goto label_53af98;
        case 0x53af9cu: goto label_53af9c;
        default: break;
    }

    ctx->pc = 0x53a540u;

label_53a540:
    // 0x53a540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53a544:
    // 0x53a544: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x53a544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53a548:
    // 0x53a548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53a54c:
    // 0x53a54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53a550:
    // 0x53a550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53a554:
    // 0x53a554: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x53a554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a558:
    // 0x53a558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53a55c:
    // 0x53a55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a560:
    // 0x53a560: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53a560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53a564:
    // 0x53a564: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x53a564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53a568:
    // 0x53a568: 0xc10ca68  jal         func_4329A0
label_53a56c:
    if (ctx->pc == 0x53A56Cu) {
        ctx->pc = 0x53A56Cu;
            // 0x53a56c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x53A570u;
        goto label_53a570;
    }
    ctx->pc = 0x53A568u;
    SET_GPR_U32(ctx, 31, 0x53A570u);
    ctx->pc = 0x53A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A568u;
            // 0x53a56c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A570u; }
        if (ctx->pc != 0x53A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A570u; }
        if (ctx->pc != 0x53A570u) { return; }
    }
    ctx->pc = 0x53A570u;
label_53a570:
    // 0x53a570: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53a570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_53a574:
    // 0x53a574: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53a574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53a578:
    // 0x53a578: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x53a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_53a57c:
    // 0x53a57c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x53a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_53a580:
    // 0x53a580: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x53a580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_53a584:
    // 0x53a584: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x53a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_53a588:
    // 0x53a588: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x53a588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_53a58c:
    // 0x53a58c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x53a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53a590:
    // 0x53a590: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x53a590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_53a594:
    // 0x53a594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53a598:
    // 0x53a598: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x53a598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_53a59c:
    // 0x53a59c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x53a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_53a5a0:
    // 0x53a5a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x53a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_53a5a4:
    // 0x53a5a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x53a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_53a5a8:
    // 0x53a5a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x53a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_53a5ac:
    // 0x53a5ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x53a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_53a5b0:
    // 0x53a5b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x53a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_53a5b4:
    // 0x53a5b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x53a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_53a5b8:
    // 0x53a5b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x53a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_53a5bc:
    // 0x53a5bc: 0xc0582cc  jal         func_160B30
label_53a5c0:
    if (ctx->pc == 0x53A5C0u) {
        ctx->pc = 0x53A5C0u;
            // 0x53a5c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x53A5C4u;
        goto label_53a5c4;
    }
    ctx->pc = 0x53A5BCu;
    SET_GPR_U32(ctx, 31, 0x53A5C4u);
    ctx->pc = 0x53A5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A5BCu;
            // 0x53a5c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A5C4u; }
        if (ctx->pc != 0x53A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A5C4u; }
        if (ctx->pc != 0x53A5C4u) { return; }
    }
    ctx->pc = 0x53A5C4u;
label_53a5c4:
    // 0x53a5c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53a5c8:
    // 0x53a5c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x53a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_53a5cc:
    // 0x53a5cc: 0x246371a8  addiu       $v1, $v1, 0x71A8
    ctx->pc = 0x53a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29096));
label_53a5d0:
    // 0x53a5d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x53a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_53a5d4:
    // 0x53a5d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x53a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_53a5d8:
    // 0x53a5d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53a5dc:
    // 0x53a5dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53a5e0:
    // 0x53a5e0: 0xac44b6b0  sw          $a0, -0x4950($v0)
    ctx->pc = 0x53a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948528), GPR_U32(ctx, 4));
label_53a5e4:
    // 0x53a5e4: 0x246371c0  addiu       $v1, $v1, 0x71C0
    ctx->pc = 0x53a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29120));
label_53a5e8:
    // 0x53a5e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53a5ec:
    // 0x53a5ec: 0x244271f8  addiu       $v0, $v0, 0x71F8
    ctx->pc = 0x53a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29176));
label_53a5f0:
    // 0x53a5f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x53a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_53a5f4:
    // 0x53a5f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x53a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_53a5f8:
    // 0x53a5f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x53a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_53a5fc:
    // 0x53a5fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x53a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_53a600:
    // 0x53a600: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x53a600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_53a604:
    // 0x53a604: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x53a604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_53a608:
    // 0x53a608: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x53a608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_53a60c:
    // 0x53a60c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x53a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_53a610:
    // 0x53a610: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x53a610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_53a614:
    // 0x53a614: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x53a614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_53a618:
    // 0x53a618: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x53a618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_53a61c:
    // 0x53a61c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x53a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_53a620:
    // 0x53a620: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x53a620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_53a624:
    // 0x53a624: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x53a624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_53a628:
    // 0x53a628: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x53a628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_53a62c:
    // 0x53a62c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x53a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_53a630:
    // 0x53a630: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x53a630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_53a634:
    // 0x53a634: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x53a634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_53a638:
    // 0x53a638: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x53a638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_53a63c:
    // 0x53a63c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_53a640:
    if (ctx->pc == 0x53A640u) {
        ctx->pc = 0x53A644u;
        goto label_53a644;
    }
    ctx->pc = 0x53A63Cu;
    {
        const bool branch_taken_0x53a63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a63c) {
            ctx->pc = 0x53A6D0u;
            goto label_53a6d0;
        }
    }
    ctx->pc = 0x53A644u;
label_53a644:
    // 0x53a644: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x53a644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_53a648:
    // 0x53a648: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x53a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_53a64c:
    // 0x53a64c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x53a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_53a650:
    // 0x53a650: 0xc040138  jal         func_1004E0
label_53a654:
    if (ctx->pc == 0x53A654u) {
        ctx->pc = 0x53A654u;
            // 0x53a654: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x53A658u;
        goto label_53a658;
    }
    ctx->pc = 0x53A650u;
    SET_GPR_U32(ctx, 31, 0x53A658u);
    ctx->pc = 0x53A654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A650u;
            // 0x53a654: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A658u; }
        if (ctx->pc != 0x53A658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A658u; }
        if (ctx->pc != 0x53A658u) { return; }
    }
    ctx->pc = 0x53A658u;
label_53a658:
    // 0x53a658: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x53a658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_53a65c:
    // 0x53a65c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x53a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_53a660:
    // 0x53a660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a664:
    // 0x53a664: 0x24a5a6f0  addiu       $a1, $a1, -0x5910
    ctx->pc = 0x53a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944496));
label_53a668:
    // 0x53a668: 0x24c69de0  addiu       $a2, $a2, -0x6220
    ctx->pc = 0x53a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942176));
label_53a66c:
    // 0x53a66c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x53a66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_53a670:
    // 0x53a670: 0xc040840  jal         func_102100
label_53a674:
    if (ctx->pc == 0x53A674u) {
        ctx->pc = 0x53A674u;
            // 0x53a674: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A678u;
        goto label_53a678;
    }
    ctx->pc = 0x53A670u;
    SET_GPR_U32(ctx, 31, 0x53A678u);
    ctx->pc = 0x53A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A670u;
            // 0x53a674: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A678u; }
        if (ctx->pc != 0x53A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A678u; }
        if (ctx->pc != 0x53A678u) { return; }
    }
    ctx->pc = 0x53A678u;
label_53a678:
    // 0x53a678: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x53a678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_53a67c:
    // 0x53a67c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53a67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a680:
    // 0x53a680: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x53a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_53a684:
    // 0x53a684: 0xc0788fc  jal         func_1E23F0
label_53a688:
    if (ctx->pc == 0x53A688u) {
        ctx->pc = 0x53A688u;
            // 0x53a688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A68Cu;
        goto label_53a68c;
    }
    ctx->pc = 0x53A684u;
    SET_GPR_U32(ctx, 31, 0x53A68Cu);
    ctx->pc = 0x53A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A684u;
            // 0x53a688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A68Cu; }
        if (ctx->pc != 0x53A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A68Cu; }
        if (ctx->pc != 0x53A68Cu) { return; }
    }
    ctx->pc = 0x53A68Cu;
label_53a68c:
    // 0x53a68c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x53a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_53a690:
    // 0x53a690: 0xc0788fc  jal         func_1E23F0
label_53a694:
    if (ctx->pc == 0x53A694u) {
        ctx->pc = 0x53A694u;
            // 0x53a694: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A698u;
        goto label_53a698;
    }
    ctx->pc = 0x53A690u;
    SET_GPR_U32(ctx, 31, 0x53A698u);
    ctx->pc = 0x53A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A690u;
            // 0x53a694: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A698u; }
        if (ctx->pc != 0x53A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A698u; }
        if (ctx->pc != 0x53A698u) { return; }
    }
    ctx->pc = 0x53A698u;
label_53a698:
    // 0x53a698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53a698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a69c:
    // 0x53a69c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x53a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_53a6a0:
    // 0x53a6a0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x53a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_53a6a4:
    // 0x53a6a4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x53a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_53a6a8:
    // 0x53a6a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53a6ac:
    // 0x53a6ac: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x53a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_53a6b0:
    // 0x53a6b0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x53a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_53a6b4:
    // 0x53a6b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53a6b8:
    // 0x53a6b8: 0xc0a997c  jal         func_2A65F0
label_53a6bc:
    if (ctx->pc == 0x53A6BCu) {
        ctx->pc = 0x53A6BCu;
            // 0x53a6bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x53A6C0u;
        goto label_53a6c0;
    }
    ctx->pc = 0x53A6B8u;
    SET_GPR_U32(ctx, 31, 0x53A6C0u);
    ctx->pc = 0x53A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A6B8u;
            // 0x53a6bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A6C0u; }
        if (ctx->pc != 0x53A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A6C0u; }
        if (ctx->pc != 0x53A6C0u) { return; }
    }
    ctx->pc = 0x53A6C0u;
label_53a6c0:
    // 0x53a6c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x53a6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_53a6c4:
    // 0x53a6c4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x53a6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53a6c8:
    // 0x53a6c8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_53a6cc:
    if (ctx->pc == 0x53A6CCu) {
        ctx->pc = 0x53A6CCu;
            // 0x53a6cc: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x53A6D0u;
        goto label_53a6d0;
    }
    ctx->pc = 0x53A6C8u;
    {
        const bool branch_taken_0x53a6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A6C8u;
            // 0x53a6cc: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a6c8) {
            ctx->pc = 0x53A69Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53a69c;
        }
    }
    ctx->pc = 0x53A6D0u;
label_53a6d0:
    // 0x53a6d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x53a6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53a6d4:
    // 0x53a6d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_53a6d8:
    // 0x53a6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53a6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53a6dc:
    // 0x53a6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53a6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53a6e0:
    // 0x53a6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53a6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53a6e4:
    // 0x53a6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a6e8:
    // 0x53a6e8: 0x3e00008  jr          $ra
label_53a6ec:
    if (ctx->pc == 0x53A6ECu) {
        ctx->pc = 0x53A6ECu;
            // 0x53a6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53A6F0u;
        goto label_53a6f0;
    }
    ctx->pc = 0x53A6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A6E8u;
            // 0x53a6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A6F0u;
label_53a6f0:
    // 0x53a6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53a6f4:
    // 0x53a6f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53a6f8:
    // 0x53a6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53a6fc:
    // 0x53a6fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x53a6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53a700:
    // 0x53a700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a704:
    // 0x53a704: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x53a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_53a708:
    // 0x53a708: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53a708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_53a70c:
    // 0x53a70c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x53a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_53a710:
    // 0x53a710: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x53a710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_53a714:
    // 0x53a714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53a718:
    // 0x53a718: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53a718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_53a71c:
    // 0x53a71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53a71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a720:
    // 0x53a720: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x53a720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_53a724:
    // 0x53a724: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x53a724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_53a728:
    // 0x53a728: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x53a728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_53a72c:
    // 0x53a72c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x53a72cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_53a730:
    // 0x53a730: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x53a730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_53a734:
    // 0x53a734: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x53a734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_53a738:
    // 0x53a738: 0xc04cbd8  jal         func_132F60
label_53a73c:
    if (ctx->pc == 0x53A73Cu) {
        ctx->pc = 0x53A73Cu;
            // 0x53a73c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x53A740u;
        goto label_53a740;
    }
    ctx->pc = 0x53A738u;
    SET_GPR_U32(ctx, 31, 0x53A740u);
    ctx->pc = 0x53A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A738u;
            // 0x53a73c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A740u; }
        if (ctx->pc != 0x53A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A740u; }
        if (ctx->pc != 0x53A740u) { return; }
    }
    ctx->pc = 0x53A740u;
label_53a740:
    // 0x53a740: 0xc04c968  jal         func_1325A0
label_53a744:
    if (ctx->pc == 0x53A744u) {
        ctx->pc = 0x53A744u;
            // 0x53a744: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x53A748u;
        goto label_53a748;
    }
    ctx->pc = 0x53A740u;
    SET_GPR_U32(ctx, 31, 0x53A748u);
    ctx->pc = 0x53A744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A740u;
            // 0x53a744: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A748u; }
        if (ctx->pc != 0x53A748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A748u; }
        if (ctx->pc != 0x53A748u) { return; }
    }
    ctx->pc = 0x53A748u;
label_53a748:
    // 0x53a748: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53a748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53a74c:
    // 0x53a74c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x53a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_53a750:
    // 0x53a750: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x53a750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_53a754:
    // 0x53a754: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x53a754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_53a758:
    // 0x53a758: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x53a758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_53a75c:
    // 0x53a75c: 0x24847260  addiu       $a0, $a0, 0x7260
    ctx->pc = 0x53a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29280));
label_53a760:
    // 0x53a760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53a764:
    // 0x53a764: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x53a764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
label_53a768:
    // 0x53a768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53a768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53a76c:
    // 0x53a76c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x53a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_53a770:
    // 0x53a770: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x53a770u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_53a774:
    // 0x53a774: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x53a774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
label_53a778:
    // 0x53a778: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x53a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_53a77c:
    // 0x53a77c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x53a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_53a780:
    // 0x53a780: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x53a780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_53a784:
    // 0x53a784: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x53a784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_53a788:
    // 0x53a788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53a78c:
    // 0x53a78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a790:
    // 0x53a790: 0x3e00008  jr          $ra
label_53a794:
    if (ctx->pc == 0x53A794u) {
        ctx->pc = 0x53A794u;
            // 0x53a794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53A798u;
        goto label_53a798;
    }
    ctx->pc = 0x53A790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A790u;
            // 0x53a794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A798u;
label_53a798:
    // 0x53a798: 0x0  nop
    ctx->pc = 0x53a798u;
    // NOP
label_53a79c:
    // 0x53a79c: 0x0  nop
    ctx->pc = 0x53a79cu;
    // NOP
label_53a7a0:
    // 0x53a7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53a7a4:
    // 0x53a7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53a7a8:
    // 0x53a7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a7ac:
    // 0x53a7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53a7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a7b0:
    // 0x53a7b0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x53a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_53a7b4:
    // 0x53a7b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53a7b8:
    if (ctx->pc == 0x53A7B8u) {
        ctx->pc = 0x53A7B8u;
            // 0x53a7b8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x53A7BCu;
        goto label_53a7bc;
    }
    ctx->pc = 0x53A7B4u;
    {
        const bool branch_taken_0x53a7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a7b4) {
            ctx->pc = 0x53A7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A7B4u;
            // 0x53a7b8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A7D0u;
            goto label_53a7d0;
        }
    }
    ctx->pc = 0x53A7BCu;
label_53a7bc:
    // 0x53a7bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53a7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53a7c0:
    // 0x53a7c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53a7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53a7c4:
    // 0x53a7c4: 0x320f809  jalr        $t9
label_53a7c8:
    if (ctx->pc == 0x53A7C8u) {
        ctx->pc = 0x53A7C8u;
            // 0x53a7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53A7CCu;
        goto label_53a7cc;
    }
    ctx->pc = 0x53A7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53A7CCu);
        ctx->pc = 0x53A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A7C4u;
            // 0x53a7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53A7CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53A7CCu; }
            if (ctx->pc != 0x53A7CCu) { return; }
        }
        }
    }
    ctx->pc = 0x53A7CCu;
label_53a7cc:
    // 0x53a7cc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x53a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_53a7d0:
    // 0x53a7d0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x53a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_53a7d4:
    // 0x53a7d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53a7d8:
    if (ctx->pc == 0x53A7D8u) {
        ctx->pc = 0x53A7D8u;
            // 0x53a7d8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x53A7DCu;
        goto label_53a7dc;
    }
    ctx->pc = 0x53A7D4u;
    {
        const bool branch_taken_0x53a7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a7d4) {
            ctx->pc = 0x53A7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A7D4u;
            // 0x53a7d8: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A7F0u;
            goto label_53a7f0;
        }
    }
    ctx->pc = 0x53A7DCu;
label_53a7dc:
    // 0x53a7dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53a7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53a7e0:
    // 0x53a7e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53a7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53a7e4:
    // 0x53a7e4: 0x320f809  jalr        $t9
label_53a7e8:
    if (ctx->pc == 0x53A7E8u) {
        ctx->pc = 0x53A7E8u;
            // 0x53a7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53A7ECu;
        goto label_53a7ec;
    }
    ctx->pc = 0x53A7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53A7ECu);
        ctx->pc = 0x53A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A7E4u;
            // 0x53a7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53A7ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53A7ECu; }
            if (ctx->pc != 0x53A7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x53A7ECu;
label_53a7ec:
    // 0x53a7ec: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x53a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_53a7f0:
    // 0x53a7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53a7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53a7f4:
    // 0x53a7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a7f8:
    // 0x53a7f8: 0x3e00008  jr          $ra
label_53a7fc:
    if (ctx->pc == 0x53A7FCu) {
        ctx->pc = 0x53A7FCu;
            // 0x53a7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53A800u;
        goto label_53a800;
    }
    ctx->pc = 0x53A7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A7F8u;
            // 0x53a7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A800u;
label_53a800:
    // 0x53a800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53a804:
    // 0x53a804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53a808:
    // 0x53a808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53a80c:
    // 0x53a80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a810:
    // 0x53a810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53a810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a814:
    // 0x53a814: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_53a818:
    if (ctx->pc == 0x53A818u) {
        ctx->pc = 0x53A818u;
            // 0x53a818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A81Cu;
        goto label_53a81c;
    }
    ctx->pc = 0x53A814u;
    {
        const bool branch_taken_0x53a814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A814u;
            // 0x53a818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a814) {
            ctx->pc = 0x53A878u;
            goto label_53a878;
        }
    }
    ctx->pc = 0x53A81Cu;
label_53a81c:
    // 0x53a81c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53a820:
    // 0x53a820: 0x244272b0  addiu       $v0, $v0, 0x72B0
    ctx->pc = 0x53a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29360));
label_53a824:
    // 0x53a824: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_53a828:
    if (ctx->pc == 0x53A828u) {
        ctx->pc = 0x53A828u;
            // 0x53a828: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53A82Cu;
        goto label_53a82c;
    }
    ctx->pc = 0x53A824u;
    {
        const bool branch_taken_0x53a824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A824u;
            // 0x53a828: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a824) {
            ctx->pc = 0x53A860u;
            goto label_53a860;
        }
    }
    ctx->pc = 0x53A82Cu;
label_53a82c:
    // 0x53a82c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53a830:
    // 0x53a830: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x53a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_53a834:
    // 0x53a834: 0xc0d37dc  jal         func_34DF70
label_53a838:
    if (ctx->pc == 0x53A838u) {
        ctx->pc = 0x53A838u;
            // 0x53a838: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53A83Cu;
        goto label_53a83c;
    }
    ctx->pc = 0x53A834u;
    SET_GPR_U32(ctx, 31, 0x53A83Cu);
    ctx->pc = 0x53A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A834u;
            // 0x53a838: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A83Cu; }
        if (ctx->pc != 0x53A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A83Cu; }
        if (ctx->pc != 0x53A83Cu) { return; }
    }
    ctx->pc = 0x53A83Cu;
label_53a83c:
    // 0x53a83c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_53a840:
    if (ctx->pc == 0x53A840u) {
        ctx->pc = 0x53A840u;
            // 0x53a840: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x53A844u;
        goto label_53a844;
    }
    ctx->pc = 0x53A83Cu;
    {
        const bool branch_taken_0x53a83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a83c) {
            ctx->pc = 0x53A840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A83Cu;
            // 0x53a840: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A864u;
            goto label_53a864;
        }
    }
    ctx->pc = 0x53A844u;
label_53a844:
    // 0x53a844: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53a848:
    // 0x53a848: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x53a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_53a84c:
    // 0x53a84c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_53a850:
    if (ctx->pc == 0x53A850u) {
        ctx->pc = 0x53A850u;
            // 0x53a850: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53A854u;
        goto label_53a854;
    }
    ctx->pc = 0x53A84Cu;
    {
        const bool branch_taken_0x53a84c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A84Cu;
            // 0x53a850: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a84c) {
            ctx->pc = 0x53A860u;
            goto label_53a860;
        }
    }
    ctx->pc = 0x53A854u;
label_53a854:
    // 0x53a854: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53a854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53a858:
    // 0x53a858: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x53a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_53a85c:
    // 0x53a85c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x53a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_53a860:
    // 0x53a860: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53a860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_53a864:
    // 0x53a864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53a864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53a868:
    // 0x53a868: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53a86c:
    if (ctx->pc == 0x53A86Cu) {
        ctx->pc = 0x53A86Cu;
            // 0x53a86c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A870u;
        goto label_53a870;
    }
    ctx->pc = 0x53A868u;
    {
        const bool branch_taken_0x53a868 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53a868) {
            ctx->pc = 0x53A86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A868u;
            // 0x53a86c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A87Cu;
            goto label_53a87c;
        }
    }
    ctx->pc = 0x53A870u;
label_53a870:
    // 0x53a870: 0xc0400a8  jal         func_1002A0
label_53a874:
    if (ctx->pc == 0x53A874u) {
        ctx->pc = 0x53A874u;
            // 0x53a874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A878u;
        goto label_53a878;
    }
    ctx->pc = 0x53A870u;
    SET_GPR_U32(ctx, 31, 0x53A878u);
    ctx->pc = 0x53A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A870u;
            // 0x53a874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A878u; }
        if (ctx->pc != 0x53A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A878u; }
        if (ctx->pc != 0x53A878u) { return; }
    }
    ctx->pc = 0x53A878u;
label_53a878:
    // 0x53a878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53a878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53a87c:
    // 0x53a87c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53a87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53a880:
    // 0x53a880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53a880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53a884:
    // 0x53a884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a888:
    // 0x53a888: 0x3e00008  jr          $ra
label_53a88c:
    if (ctx->pc == 0x53A88Cu) {
        ctx->pc = 0x53A88Cu;
            // 0x53a88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53A890u;
        goto label_53a890;
    }
    ctx->pc = 0x53A888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A888u;
            // 0x53a88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A890u;
label_53a890:
    // 0x53a890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x53a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_53a894:
    // 0x53a894: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53a898:
    // 0x53a898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53a89c:
    // 0x53a89c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x53a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_53a8a0:
    // 0x53a8a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x53a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_53a8a4:
    // 0x53a8a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x53a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_53a8a8:
    // 0x53a8a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x53a8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53a8ac:
    // 0x53a8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53a8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a8b0:
    // 0x53a8b0: 0xc4940030  lwc1        $f20, 0x30($a0)
    ctx->pc = 0x53a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53a8b4:
    // 0x53a8b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x53a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_53a8b8:
    // 0x53a8b8: 0xc0a7a88  jal         func_29EA20
label_53a8bc:
    if (ctx->pc == 0x53A8BCu) {
        ctx->pc = 0x53A8BCu;
            // 0x53a8bc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x53A8C0u;
        goto label_53a8c0;
    }
    ctx->pc = 0x53A8B8u;
    SET_GPR_U32(ctx, 31, 0x53A8C0u);
    ctx->pc = 0x53A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A8B8u;
            // 0x53a8bc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8C0u; }
        if (ctx->pc != 0x53A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8C0u; }
        if (ctx->pc != 0x53A8C0u) { return; }
    }
    ctx->pc = 0x53A8C0u;
label_53a8c0:
    // 0x53a8c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x53a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_53a8c4:
    // 0x53a8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a8c8:
    // 0x53a8c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_53a8cc:
    if (ctx->pc == 0x53A8CCu) {
        ctx->pc = 0x53A8CCu;
            // 0x53a8cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53A8D0u;
        goto label_53a8d0;
    }
    ctx->pc = 0x53A8C8u;
    {
        const bool branch_taken_0x53a8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A8C8u;
            // 0x53a8cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a8c8) {
            ctx->pc = 0x53A8DCu;
            goto label_53a8dc;
        }
    }
    ctx->pc = 0x53A8D0u;
label_53a8d0:
    // 0x53a8d0: 0xc0827ac  jal         func_209EB0
label_53a8d4:
    if (ctx->pc == 0x53A8D4u) {
        ctx->pc = 0x53A8D4u;
            // 0x53a8d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x53A8D8u;
        goto label_53a8d8;
    }
    ctx->pc = 0x53A8D0u;
    SET_GPR_U32(ctx, 31, 0x53A8D8u);
    ctx->pc = 0x53A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A8D0u;
            // 0x53a8d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8D8u; }
        if (ctx->pc != 0x53A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8D8u; }
        if (ctx->pc != 0x53A8D8u) { return; }
    }
    ctx->pc = 0x53A8D8u;
label_53a8d8:
    // 0x53a8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a8dc:
    // 0x53a8dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53a8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a8e0:
    // 0x53a8e0: 0xc040180  jal         func_100600
label_53a8e4:
    if (ctx->pc == 0x53A8E4u) {
        ctx->pc = 0x53A8E4u;
            // 0x53a8e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x53A8E8u;
        goto label_53a8e8;
    }
    ctx->pc = 0x53A8E0u;
    SET_GPR_U32(ctx, 31, 0x53A8E8u);
    ctx->pc = 0x53A8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A8E0u;
            // 0x53a8e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8E8u; }
        if (ctx->pc != 0x53A8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A8E8u; }
        if (ctx->pc != 0x53A8E8u) { return; }
    }
    ctx->pc = 0x53A8E8u;
label_53a8e8:
    // 0x53a8e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_53a8ec:
    if (ctx->pc == 0x53A8ECu) {
        ctx->pc = 0x53A8ECu;
            // 0x53a8ec: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x53A8F0u;
        goto label_53a8f0;
    }
    ctx->pc = 0x53A8E8u;
    {
        const bool branch_taken_0x53a8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a8e8) {
            ctx->pc = 0x53A8ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A8E8u;
            // 0x53a8ec: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A92Cu;
            goto label_53a92c;
        }
    }
    ctx->pc = 0x53A8F0u;
label_53a8f0:
    // 0x53a8f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x53a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_53a8f4:
    // 0x53a8f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_53a8f8:
    // 0x53a8f8: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x53a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_53a8fc:
    // 0x53a8fc: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x53a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_53a900:
    // 0x53a900: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x53a900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_53a904:
    // 0x53a904: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x53a904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_53a908:
    // 0x53a908: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x53a908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_53a90c:
    // 0x53a90c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x53a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_53a910:
    // 0x53a910: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53a914:
    // 0x53a914: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x53a914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_53a918:
    // 0x53a918: 0x246372b0  addiu       $v1, $v1, 0x72B0
    ctx->pc = 0x53a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29360));
label_53a91c:
    // 0x53a91c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x53a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_53a920:
    // 0x53a920: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x53a920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_53a924:
    // 0x53a924: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x53a924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_53a928:
    // 0x53a928: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x53a928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_53a92c:
    // 0x53a92c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53a930:
    // 0x53a930: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x53a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53a934:
    // 0x53a934: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x53a934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_53a938:
    // 0x53a938: 0xc0d37ec  jal         func_34DFB0
label_53a93c:
    if (ctx->pc == 0x53A93Cu) {
        ctx->pc = 0x53A93Cu;
            // 0x53a93c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A940u;
        goto label_53a940;
    }
    ctx->pc = 0x53A938u;
    SET_GPR_U32(ctx, 31, 0x53A940u);
    ctx->pc = 0x53A93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53A938u;
            // 0x53a93c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A940u; }
        if (ctx->pc != 0x53A940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53A940u; }
        if (ctx->pc != 0x53A940u) { return; }
    }
    ctx->pc = 0x53A940u;
label_53a940:
    // 0x53a940: 0xae11005c  sw          $s1, 0x5C($s0)
    ctx->pc = 0x53a940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
label_53a944:
    // 0x53a944: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x53a944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_53a948:
    // 0x53a948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53a94c:
    // 0x53a94c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53a950:
    // 0x53a950: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x53a950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53a954:
    // 0x53a954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x53a954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53a958:
    // 0x53a958: 0x3e00008  jr          $ra
label_53a95c:
    if (ctx->pc == 0x53A95Cu) {
        ctx->pc = 0x53A95Cu;
            // 0x53a95c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53A960u;
        goto label_53a960;
    }
    ctx->pc = 0x53A958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A958u;
            // 0x53a95c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A960u;
label_53a960:
    // 0x53a960: 0x3e00008  jr          $ra
label_53a964:
    if (ctx->pc == 0x53A964u) {
        ctx->pc = 0x53A968u;
        goto label_53a968;
    }
    ctx->pc = 0x53A960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A968u;
label_53a968:
    // 0x53a968: 0x0  nop
    ctx->pc = 0x53a968u;
    // NOP
label_53a96c:
    // 0x53a96c: 0x0  nop
    ctx->pc = 0x53a96cu;
    // NOP
label_53a970:
    // 0x53a970: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x53a970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_53a974:
    // 0x53a974: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x53a974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_53a978:
    // 0x53a978: 0x3e00008  jr          $ra
label_53a97c:
    if (ctx->pc == 0x53A97Cu) {
        ctx->pc = 0x53A97Cu;
            // 0x53a97c: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x53A980u;
        goto label_53a980;
    }
    ctx->pc = 0x53A978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A978u;
            // 0x53a97c: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A980u;
label_53a980:
    // 0x53a980: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x53a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_53a984:
    // 0x53a984: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x53a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_53a988:
    // 0x53a988: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_53a98c:
    if (ctx->pc == 0x53A98Cu) {
        ctx->pc = 0x53A990u;
        goto label_53a990;
    }
    ctx->pc = 0x53A988u;
    {
        const bool branch_taken_0x53a988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53a988) {
            ctx->pc = 0x53A998u;
            goto label_53a998;
        }
    }
    ctx->pc = 0x53A990u;
label_53a990:
    // 0x53a990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53a994:
    // 0x53a994: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x53a994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_53a998:
    // 0x53a998: 0x3e00008  jr          $ra
label_53a99c:
    if (ctx->pc == 0x53A99Cu) {
        ctx->pc = 0x53A9A0u;
        goto label_53a9a0;
    }
    ctx->pc = 0x53A998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A9A0u;
label_53a9a0:
    // 0x53a9a0: 0x3e00008  jr          $ra
label_53a9a4:
    if (ctx->pc == 0x53A9A4u) {
        ctx->pc = 0x53A9A4u;
            // 0x53a9a4: 0x24025618  addiu       $v0, $zero, 0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22040));
        ctx->pc = 0x53A9A8u;
        goto label_53a9a8;
    }
    ctx->pc = 0x53A9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A9A0u;
            // 0x53a9a4: 0x24025618  addiu       $v0, $zero, 0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A9A8u;
label_53a9a8:
    // 0x53a9a8: 0x0  nop
    ctx->pc = 0x53a9a8u;
    // NOP
label_53a9ac:
    // 0x53a9ac: 0x0  nop
    ctx->pc = 0x53a9acu;
    // NOP
label_53a9b0:
    // 0x53a9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53a9b4:
    // 0x53a9b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x53a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_53a9b8:
    // 0x53a9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53a9bc:
    // 0x53a9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53a9c0:
    // 0x53a9c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x53a9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53a9c4:
    // 0x53a9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53a9c8:
    // 0x53a9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53a9cc:
    // 0x53a9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a9d0:
    // 0x53a9d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x53a9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53a9d4:
    // 0x53a9d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_53a9d8:
    if (ctx->pc == 0x53A9D8u) {
        ctx->pc = 0x53A9D8u;
            // 0x53a9d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A9DCu;
        goto label_53a9dc;
    }
    ctx->pc = 0x53A9D4u;
    {
        const bool branch_taken_0x53a9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A9D4u;
            // 0x53a9d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a9d4) {
            ctx->pc = 0x53AA18u;
            goto label_53aa18;
        }
    }
    ctx->pc = 0x53A9DCu;
label_53a9dc:
    // 0x53a9dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53a9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a9e0:
    // 0x53a9e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x53a9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a9e4:
    // 0x53a9e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53a9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a9e8:
    // 0x53a9e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x53a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_53a9ec:
    // 0x53a9ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_53a9f0:
    // 0x53a9f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53a9f4:
    // 0x53a9f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53a9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53a9f8:
    // 0x53a9f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x53a9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_53a9fc:
    // 0x53a9fc: 0x320f809  jalr        $t9
label_53aa00:
    if (ctx->pc == 0x53AA00u) {
        ctx->pc = 0x53AA04u;
        goto label_53aa04;
    }
    ctx->pc = 0x53A9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53AA04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53AA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53AA04u; }
            if (ctx->pc != 0x53AA04u) { return; }
        }
        }
    }
    ctx->pc = 0x53AA04u;
label_53aa04:
    // 0x53aa04: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x53aa04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_53aa08:
    // 0x53aa08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53aa08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53aa0c:
    // 0x53aa0c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x53aa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53aa10:
    // 0x53aa10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_53aa14:
    if (ctx->pc == 0x53AA14u) {
        ctx->pc = 0x53AA14u;
            // 0x53aa14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x53AA18u;
        goto label_53aa18;
    }
    ctx->pc = 0x53AA10u;
    {
        const bool branch_taken_0x53aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53AA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AA10u;
            // 0x53aa14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53aa10) {
            ctx->pc = 0x53A9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53a9e8;
        }
    }
    ctx->pc = 0x53AA18u;
label_53aa18:
    // 0x53aa18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x53aa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53aa1c:
    // 0x53aa1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x53aa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_53aa20:
    // 0x53aa20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53aa20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53aa24:
    // 0x53aa24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53aa24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53aa28:
    // 0x53aa28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53aa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53aa2c:
    // 0x53aa2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53aa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53aa30:
    // 0x53aa30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53aa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53aa34:
    // 0x53aa34: 0x3e00008  jr          $ra
label_53aa38:
    if (ctx->pc == 0x53AA38u) {
        ctx->pc = 0x53AA38u;
            // 0x53aa38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53AA3Cu;
        goto label_53aa3c;
    }
    ctx->pc = 0x53AA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AA34u;
            // 0x53aa38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53AA3Cu;
label_53aa3c:
    // 0x53aa3c: 0x0  nop
    ctx->pc = 0x53aa3cu;
    // NOP
label_53aa40:
    // 0x53aa40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53aa44:
    // 0x53aa44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53aa48:
    // 0x53aa48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53aa4c:
    // 0x53aa4c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x53aa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_53aa50:
    // 0x53aa50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53aa54:
    // 0x53aa54: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x53aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_53aa58:
    // 0x53aa58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53aa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53aa5c:
    // 0x53aa5c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x53aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_53aa60:
    // 0x53aa60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53aa64:
    // 0x53aa64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x53aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53aa68:
    // 0x53aa68: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x53aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_53aa6c:
    // 0x53aa6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x53aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53aa70:
    // 0x53aa70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x53aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_53aa74:
    // 0x53aa74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x53aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_53aa78:
    // 0x53aa78: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x53aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_53aa7c:
    // 0x53aa7c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x53aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_53aa80:
    // 0x53aa80: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x53aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_53aa84:
    // 0x53aa84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x53aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_53aa88:
    // 0x53aa88: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x53aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_53aa8c:
    // 0x53aa8c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x53aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53aa90:
    // 0x53aa90: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x53aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_53aa94:
    // 0x53aa94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_53aa98:
    // 0x53aa98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x53aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53aa9c:
    // 0x53aa9c: 0xc0a997c  jal         func_2A65F0
label_53aaa0:
    if (ctx->pc == 0x53AAA0u) {
        ctx->pc = 0x53AAA0u;
            // 0x53aaa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x53AAA4u;
        goto label_53aaa4;
    }
    ctx->pc = 0x53AA9Cu;
    SET_GPR_U32(ctx, 31, 0x53AAA4u);
    ctx->pc = 0x53AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AA9Cu;
            // 0x53aaa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAA4u; }
        if (ctx->pc != 0x53AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAA4u; }
        if (ctx->pc != 0x53AAA4u) { return; }
    }
    ctx->pc = 0x53AAA4u;
label_53aaa4:
    // 0x53aaa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x53aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_53aaa8:
    // 0x53aaa8: 0xc0d879c  jal         func_361E70
label_53aaac:
    if (ctx->pc == 0x53AAACu) {
        ctx->pc = 0x53AAACu;
            // 0x53aaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AAB0u;
        goto label_53aab0;
    }
    ctx->pc = 0x53AAA8u;
    SET_GPR_U32(ctx, 31, 0x53AAB0u);
    ctx->pc = 0x53AAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AAA8u;
            // 0x53aaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAB0u; }
        if (ctx->pc != 0x53AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAB0u; }
        if (ctx->pc != 0x53AAB0u) { return; }
    }
    ctx->pc = 0x53AAB0u;
label_53aab0:
    // 0x53aab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53aab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53aab4:
    // 0x53aab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53aab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53aab8:
    // 0x53aab8: 0x3e00008  jr          $ra
label_53aabc:
    if (ctx->pc == 0x53AABCu) {
        ctx->pc = 0x53AABCu;
            // 0x53aabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53AAC0u;
        goto label_53aac0;
    }
    ctx->pc = 0x53AAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AAB8u;
            // 0x53aabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53AAC0u;
label_53aac0:
    // 0x53aac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53aac4:
    // 0x53aac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53aac8:
    // 0x53aac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53aacc:
    // 0x53aacc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x53aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_53aad0:
    // 0x53aad0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_53aad4:
    if (ctx->pc == 0x53AAD4u) {
        ctx->pc = 0x53AAD4u;
            // 0x53aad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AAD8u;
        goto label_53aad8;
    }
    ctx->pc = 0x53AAD0u;
    {
        const bool branch_taken_0x53aad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x53AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AAD0u;
            // 0x53aad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53aad0) {
            ctx->pc = 0x53ABF0u;
            goto label_53abf0;
        }
    }
    ctx->pc = 0x53AAD8u;
label_53aad8:
    // 0x53aad8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x53aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53aadc:
    // 0x53aadc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x53aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_53aae0:
    // 0x53aae0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x53aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_53aae4:
    // 0x53aae4: 0xc075128  jal         func_1D44A0
label_53aae8:
    if (ctx->pc == 0x53AAE8u) {
        ctx->pc = 0x53AAE8u;
            // 0x53aae8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x53AAECu;
        goto label_53aaec;
    }
    ctx->pc = 0x53AAE4u;
    SET_GPR_U32(ctx, 31, 0x53AAECu);
    ctx->pc = 0x53AAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AAE4u;
            // 0x53aae8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAECu; }
        if (ctx->pc != 0x53AAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AAECu; }
        if (ctx->pc != 0x53AAECu) { return; }
    }
    ctx->pc = 0x53AAECu;
label_53aaec:
    // 0x53aaec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x53aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53aaf0:
    // 0x53aaf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53aaf4:
    // 0x53aaf4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x53aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_53aaf8:
    // 0x53aaf8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x53aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_53aafc:
    // 0x53aafc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53aafcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53ab00:
    // 0x53ab00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53ab04:
    if (ctx->pc == 0x53AB04u) {
        ctx->pc = 0x53AB04u;
            // 0x53ab04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x53AB08u;
        goto label_53ab08;
    }
    ctx->pc = 0x53AB00u;
    {
        const bool branch_taken_0x53ab00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x53AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AB00u;
            // 0x53ab04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ab00) {
            ctx->pc = 0x53AB10u;
            goto label_53ab10;
        }
    }
    ctx->pc = 0x53AB08u;
label_53ab08:
    // 0x53ab08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ab0c:
    // 0x53ab0c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x53ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_53ab10:
    // 0x53ab10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x53ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ab14:
    // 0x53ab14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ab18:
    // 0x53ab18: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x53ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_53ab1c:
    // 0x53ab1c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x53ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_53ab20:
    // 0x53ab20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53ab20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53ab24:
    // 0x53ab24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53ab28:
    if (ctx->pc == 0x53AB28u) {
        ctx->pc = 0x53AB28u;
            // 0x53ab28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53AB2Cu;
        goto label_53ab2c;
    }
    ctx->pc = 0x53AB24u;
    {
        const bool branch_taken_0x53ab24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ab24) {
            ctx->pc = 0x53AB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AB24u;
            // 0x53ab28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AB38u;
            goto label_53ab38;
        }
    }
    ctx->pc = 0x53AB2Cu;
label_53ab2c:
    // 0x53ab2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ab30:
    // 0x53ab30: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x53ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_53ab34:
    // 0x53ab34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x53ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ab38:
    // 0x53ab38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ab3c:
    // 0x53ab3c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x53ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_53ab40:
    // 0x53ab40: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x53ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_53ab44:
    // 0x53ab44: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x53ab44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_53ab48:
    // 0x53ab48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53ab4c:
    if (ctx->pc == 0x53AB4Cu) {
        ctx->pc = 0x53AB4Cu;
            // 0x53ab4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53AB50u;
        goto label_53ab50;
    }
    ctx->pc = 0x53AB48u;
    {
        const bool branch_taken_0x53ab48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ab48) {
            ctx->pc = 0x53AB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AB48u;
            // 0x53ab4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AB5Cu;
            goto label_53ab5c;
        }
    }
    ctx->pc = 0x53AB50u;
label_53ab50:
    // 0x53ab50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ab54:
    // 0x53ab54: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x53ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_53ab58:
    // 0x53ab58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53ab58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53ab5c:
    // 0x53ab5c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53ab5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53ab60:
    // 0x53ab60: 0x320f809  jalr        $t9
label_53ab64:
    if (ctx->pc == 0x53AB64u) {
        ctx->pc = 0x53AB64u;
            // 0x53ab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AB68u;
        goto label_53ab68;
    }
    ctx->pc = 0x53AB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53AB68u);
        ctx->pc = 0x53AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AB60u;
            // 0x53ab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53AB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53AB68u; }
            if (ctx->pc != 0x53AB68u) { return; }
        }
        }
    }
    ctx->pc = 0x53AB68u;
label_53ab68:
    // 0x53ab68: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x53ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53ab6c:
    // 0x53ab6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53ab70:
    // 0x53ab70: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x53ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_53ab74:
    // 0x53ab74: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x53ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_53ab78:
    // 0x53ab78: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x53ab78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_53ab7c:
    // 0x53ab7c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x53ab7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53ab80:
    // 0x53ab80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53ab84:
    if (ctx->pc == 0x53AB84u) {
        ctx->pc = 0x53AB84u;
            // 0x53ab84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x53AB88u;
        goto label_53ab88;
    }
    ctx->pc = 0x53AB80u;
    {
        const bool branch_taken_0x53ab80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ab80) {
            ctx->pc = 0x53AB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AB80u;
            // 0x53ab84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AB94u;
            goto label_53ab94;
        }
    }
    ctx->pc = 0x53AB88u;
label_53ab88:
    // 0x53ab88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53ab8c:
    // 0x53ab8c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x53ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_53ab90:
    // 0x53ab90: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x53ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_53ab94:
    // 0x53ab94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53ab98:
    // 0x53ab98: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x53ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_53ab9c:
    // 0x53ab9c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x53ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_53aba0:
    // 0x53aba0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x53aba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_53aba4:
    // 0x53aba4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x53aba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53aba8:
    // 0x53aba8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53abac:
    if (ctx->pc == 0x53ABACu) {
        ctx->pc = 0x53ABB0u;
        goto label_53abb0;
    }
    ctx->pc = 0x53ABA8u;
    {
        const bool branch_taken_0x53aba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53aba8) {
            ctx->pc = 0x53ABB8u;
            goto label_53abb8;
        }
    }
    ctx->pc = 0x53ABB0u;
label_53abb0:
    // 0x53abb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53abb4:
    // 0x53abb4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x53abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_53abb8:
    // 0x53abb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53abbc:
    // 0x53abbc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x53abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_53abc0:
    // 0x53abc0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x53abc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_53abc4:
    // 0x53abc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_53abc8:
    if (ctx->pc == 0x53ABC8u) {
        ctx->pc = 0x53ABCCu;
        goto label_53abcc;
    }
    ctx->pc = 0x53ABC4u;
    {
        const bool branch_taken_0x53abc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53abc4) {
            ctx->pc = 0x53ABD4u;
            goto label_53abd4;
        }
    }
    ctx->pc = 0x53ABCCu;
label_53abcc:
    // 0x53abcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53abccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53abd0:
    // 0x53abd0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x53abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_53abd4:
    // 0x53abd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53abd8:
    // 0x53abd8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x53abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_53abdc:
    // 0x53abdc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x53abdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_53abe0:
    // 0x53abe0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_53abe4:
    if (ctx->pc == 0x53ABE4u) {
        ctx->pc = 0x53ABE4u;
            // 0x53abe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53ABE8u;
        goto label_53abe8;
    }
    ctx->pc = 0x53ABE0u;
    {
        const bool branch_taken_0x53abe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53abe0) {
            ctx->pc = 0x53ABE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53ABE0u;
            // 0x53abe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53ABF4u;
            goto label_53abf4;
        }
    }
    ctx->pc = 0x53ABE8u;
label_53abe8:
    // 0x53abe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53abec:
    // 0x53abec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x53abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_53abf0:
    // 0x53abf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53abf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53abf4:
    // 0x53abf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53abf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53abf8:
    // 0x53abf8: 0x3e00008  jr          $ra
label_53abfc:
    if (ctx->pc == 0x53ABFCu) {
        ctx->pc = 0x53ABFCu;
            // 0x53abfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53AC00u;
        goto label_53ac00;
    }
    ctx->pc = 0x53ABF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ABF8u;
            // 0x53abfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53AC00u;
label_53ac00:
    // 0x53ac00: 0x814e8e4  j           func_53A390
label_53ac04:
    if (ctx->pc == 0x53AC04u) {
        ctx->pc = 0x53AC04u;
            // 0x53ac04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53AC08u;
        goto label_53ac08;
    }
    ctx->pc = 0x53AC00u;
    ctx->pc = 0x53AC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AC00u;
            // 0x53ac04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53A390u;
    {
        auto targetFn = runtime->lookupFunction(0x53A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x53AC08u;
label_53ac08:
    // 0x53ac08: 0x0  nop
    ctx->pc = 0x53ac08u;
    // NOP
label_53ac0c:
    // 0x53ac0c: 0x0  nop
    ctx->pc = 0x53ac0cu;
    // NOP
label_53ac10:
    // 0x53ac10: 0x814e720  j           func_539C80
label_53ac14:
    if (ctx->pc == 0x53AC14u) {
        ctx->pc = 0x53AC14u;
            // 0x53ac14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53AC18u;
        goto label_53ac18;
    }
    ctx->pc = 0x53AC10u;
    ctx->pc = 0x53AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AC10u;
            // 0x53ac14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x539C80u;
    if (runtime->hasFunction(0x539C80u)) {
        auto targetFn = runtime->lookupFunction(0x539C80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00539C80_0x539c80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x53AC18u;
label_53ac18:
    // 0x53ac18: 0x0  nop
    ctx->pc = 0x53ac18u;
    // NOP
label_53ac1c:
    // 0x53ac1c: 0x0  nop
    ctx->pc = 0x53ac1cu;
    // NOP
label_53ac20:
    // 0x53ac20: 0x814e6fc  j           func_539BF0
label_53ac24:
    if (ctx->pc == 0x53AC24u) {
        ctx->pc = 0x53AC24u;
            // 0x53ac24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x53AC28u;
        goto label_53ac28;
    }
    ctx->pc = 0x53AC20u;
    ctx->pc = 0x53AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AC20u;
            // 0x53ac24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x539BF0u;
    {
        auto targetFn = runtime->lookupFunction(0x539BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x53AC28u;
label_53ac28:
    // 0x53ac28: 0x0  nop
    ctx->pc = 0x53ac28u;
    // NOP
label_53ac2c:
    // 0x53ac2c: 0x0  nop
    ctx->pc = 0x53ac2cu;
    // NOP
label_53ac30:
    // 0x53ac30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x53ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_53ac34:
    // 0x53ac34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53ac38:
    // 0x53ac38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x53ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_53ac3c:
    // 0x53ac3c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x53ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_53ac40:
    // 0x53ac40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x53ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_53ac44:
    // 0x53ac44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x53ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_53ac48:
    // 0x53ac48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53ac4c:
    // 0x53ac4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53ac50:
    // 0x53ac50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53ac54:
    // 0x53ac54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53ac58:
    // 0x53ac58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53ac5c:
    // 0x53ac5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53ac60:
    // 0x53ac60: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53ac60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53ac64:
    // 0x53ac64: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_53ac68:
    if (ctx->pc == 0x53AC68u) {
        ctx->pc = 0x53AC68u;
            // 0x53ac68: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AC6Cu;
        goto label_53ac6c;
    }
    ctx->pc = 0x53AC64u;
    {
        const bool branch_taken_0x53ac64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AC64u;
            // 0x53ac68: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ac64) {
            ctx->pc = 0x53ACB4u;
            goto label_53acb4;
        }
    }
    ctx->pc = 0x53AC6Cu;
label_53ac6c:
    // 0x53ac6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53ac70:
    // 0x53ac70: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_53ac74:
    if (ctx->pc == 0x53AC74u) {
        ctx->pc = 0x53AC74u;
            // 0x53ac74: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x53AC78u;
        goto label_53ac78;
    }
    ctx->pc = 0x53AC70u;
    {
        const bool branch_taken_0x53ac70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ac70) {
            ctx->pc = 0x53AC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AC70u;
            // 0x53ac74: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AD90u;
            goto label_53ad90;
        }
    }
    ctx->pc = 0x53AC78u;
label_53ac78:
    // 0x53ac78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53ac7c:
    // 0x53ac7c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_53ac80:
    if (ctx->pc == 0x53AC80u) {
        ctx->pc = 0x53AC84u;
        goto label_53ac84;
    }
    ctx->pc = 0x53AC7Cu;
    {
        const bool branch_taken_0x53ac7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ac7c) {
            ctx->pc = 0x53AC8Cu;
            goto label_53ac8c;
        }
    }
    ctx->pc = 0x53AC84u;
label_53ac84:
    // 0x53ac84: 0x10000041  b           . + 4 + (0x41 << 2)
label_53ac88:
    if (ctx->pc == 0x53AC88u) {
        ctx->pc = 0x53AC8Cu;
        goto label_53ac8c;
    }
    ctx->pc = 0x53AC84u;
    {
        const bool branch_taken_0x53ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ac84) {
            ctx->pc = 0x53AD8Cu;
            goto label_53ad8c;
        }
    }
    ctx->pc = 0x53AC8Cu;
label_53ac8c:
    // 0x53ac8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53ac90:
    // 0x53ac90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53ac90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ac94:
    // 0x53ac94: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x53ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_53ac98:
    // 0x53ac98: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x53ac98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_53ac9c:
    // 0x53ac9c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x53ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_53aca0:
    // 0x53aca0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x53aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_53aca4:
    // 0x53aca4: 0x320f809  jalr        $t9
label_53aca8:
    if (ctx->pc == 0x53ACA8u) {
        ctx->pc = 0x53ACA8u;
            // 0x53aca8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x53ACACu;
        goto label_53acac;
    }
    ctx->pc = 0x53ACA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53ACACu);
        ctx->pc = 0x53ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ACA4u;
            // 0x53aca8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53ACACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53ACACu; }
            if (ctx->pc != 0x53ACACu) { return; }
        }
        }
    }
    ctx->pc = 0x53ACACu;
label_53acac:
    // 0x53acac: 0x10000037  b           . + 4 + (0x37 << 2)
label_53acb0:
    if (ctx->pc == 0x53ACB0u) {
        ctx->pc = 0x53ACB4u;
        goto label_53acb4;
    }
    ctx->pc = 0x53ACACu;
    {
        const bool branch_taken_0x53acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53acac) {
            ctx->pc = 0x53AD8Cu;
            goto label_53ad8c;
        }
    }
    ctx->pc = 0x53ACB4u;
label_53acb4:
    // 0x53acb4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x53acb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_53acb8:
    // 0x53acb8: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_53acbc:
    if (ctx->pc == 0x53ACBCu) {
        ctx->pc = 0x53ACC0u;
        goto label_53acc0;
    }
    ctx->pc = 0x53ACB8u;
    {
        const bool branch_taken_0x53acb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53acb8) {
            ctx->pc = 0x53AD8Cu;
            goto label_53ad8c;
        }
    }
    ctx->pc = 0x53ACC0u;
label_53acc0:
    // 0x53acc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53acc4:
    // 0x53acc4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53acc8:
    // 0x53acc8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x53acc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_53accc:
    // 0x53accc: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x53acccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_53acd0:
    // 0x53acd0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x53acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53acd4:
    // 0x53acd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53acd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53acd8:
    // 0x53acd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53acd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53acdc:
    // 0x53acdc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x53acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_53ace0:
    // 0x53ace0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x53ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_53ace4:
    // 0x53ace4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ace8:
    // 0x53ace8: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x53ace8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_53acec:
    // 0x53acec: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x53acecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_53acf0:
    // 0x53acf0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x53acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_53acf4:
    // 0x53acf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53acf8:
    // 0x53acf8: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x53acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_53acfc:
    // 0x53acfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ad00:
    // 0x53ad00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x53ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_53ad04:
    // 0x53ad04: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x53ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ad08:
    // 0x53ad08: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x53ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_53ad0c:
    // 0x53ad0c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x53ad0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_53ad10:
    // 0x53ad10: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x53ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_53ad14:
    // 0x53ad14: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x53ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_53ad18:
    // 0x53ad18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x53ad18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53ad1c:
    // 0x53ad1c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x53ad1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_53ad20:
    // 0x53ad20: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x53ad20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_53ad24:
    // 0x53ad24: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x53ad24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_53ad28:
    // 0x53ad28: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x53ad28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_53ad2c:
    // 0x53ad2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_53ad30:
    // 0x53ad30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53ad34:
    // 0x53ad34: 0xc14ebe8  jal         func_53AFA0
label_53ad38:
    if (ctx->pc == 0x53AD38u) {
        ctx->pc = 0x53AD38u;
            // 0x53ad38: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AD3Cu;
        goto label_53ad3c;
    }
    ctx->pc = 0x53AD34u;
    SET_GPR_U32(ctx, 31, 0x53AD3Cu);
    ctx->pc = 0x53AD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AD34u;
            // 0x53ad38: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53AFA0u;
    if (runtime->hasFunction(0x53AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x53AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD3Cu; }
        if (ctx->pc != 0x53AD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053AFA0_0x53afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD3Cu; }
        if (ctx->pc != 0x53AD3Cu) { return; }
    }
    ctx->pc = 0x53AD3Cu;
label_53ad3c:
    // 0x53ad3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53ad3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53ad40:
    // 0x53ad40: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x53ad40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53ad44:
    // 0x53ad44: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_53ad48:
    if (ctx->pc == 0x53AD48u) {
        ctx->pc = 0x53AD48u;
            // 0x53ad48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x53AD4Cu;
        goto label_53ad4c;
    }
    ctx->pc = 0x53AD44u;
    {
        const bool branch_taken_0x53ad44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AD44u;
            // 0x53ad48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ad44) {
            ctx->pc = 0x53AD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53ad14;
        }
    }
    ctx->pc = 0x53AD4Cu;
label_53ad4c:
    // 0x53ad4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53ad50:
    // 0x53ad50: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x53ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_53ad54:
    // 0x53ad54: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_53ad58:
    if (ctx->pc == 0x53AD58u) {
        ctx->pc = 0x53AD5Cu;
        goto label_53ad5c;
    }
    ctx->pc = 0x53AD54u;
    {
        const bool branch_taken_0x53ad54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x53ad54) {
            ctx->pc = 0x53AD8Cu;
            goto label_53ad8c;
        }
    }
    ctx->pc = 0x53AD5Cu;
label_53ad5c:
    // 0x53ad5c: 0xc04e738  jal         func_139CE0
label_53ad60:
    if (ctx->pc == 0x53AD60u) {
        ctx->pc = 0x53AD60u;
            // 0x53ad60: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x53AD64u;
        goto label_53ad64;
    }
    ctx->pc = 0x53AD5Cu;
    SET_GPR_U32(ctx, 31, 0x53AD64u);
    ctx->pc = 0x53AD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AD5Cu;
            // 0x53ad60: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD64u; }
        if (ctx->pc != 0x53AD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD64u; }
        if (ctx->pc != 0x53AD64u) { return; }
    }
    ctx->pc = 0x53AD64u;
label_53ad64:
    // 0x53ad64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ad68:
    // 0x53ad68: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x53ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_53ad6c:
    // 0x53ad6c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x53ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_53ad70:
    // 0x53ad70: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x53ad70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_53ad74:
    // 0x53ad74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ad78:
    // 0x53ad78: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x53ad78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_53ad7c:
    // 0x53ad7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ad80:
    // 0x53ad80: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x53ad80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_53ad84:
    // 0x53ad84: 0xc055754  jal         func_155D50
label_53ad88:
    if (ctx->pc == 0x53AD88u) {
        ctx->pc = 0x53AD88u;
            // 0x53ad88: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x53AD8Cu;
        goto label_53ad8c;
    }
    ctx->pc = 0x53AD84u;
    SET_GPR_U32(ctx, 31, 0x53AD8Cu);
    ctx->pc = 0x53AD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AD84u;
            // 0x53ad88: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD8Cu; }
        if (ctx->pc != 0x53AD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AD8Cu; }
        if (ctx->pc != 0x53AD8Cu) { return; }
    }
    ctx->pc = 0x53AD8Cu;
label_53ad8c:
    // 0x53ad8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x53ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_53ad90:
    // 0x53ad90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x53ad90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53ad94:
    // 0x53ad94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x53ad94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53ad98:
    // 0x53ad98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x53ad98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53ad9c:
    // 0x53ad9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53ad9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53ada0:
    // 0x53ada0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53ada0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53ada4:
    // 0x53ada4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53ada4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53ada8:
    // 0x53ada8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53ada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53adac:
    // 0x53adac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53adacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53adb0:
    // 0x53adb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53adb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53adb4:
    // 0x53adb4: 0x3e00008  jr          $ra
label_53adb8:
    if (ctx->pc == 0x53ADB8u) {
        ctx->pc = 0x53ADB8u;
            // 0x53adb8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x53ADBCu;
        goto label_53adbc;
    }
    ctx->pc = 0x53ADB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ADB4u;
            // 0x53adb8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53ADBCu;
label_53adbc:
    // 0x53adbc: 0x0  nop
    ctx->pc = 0x53adbcu;
    // NOP
label_53adc0:
    // 0x53adc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53adc4:
    // 0x53adc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53adc8:
    // 0x53adc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53adcc:
    // 0x53adcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53add0:
    // 0x53add0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53add4:
    // 0x53add4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53add8:
    // 0x53add8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53addc:
    // 0x53addc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53addcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53ade0:
    // 0x53ade0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_53ade4:
    if (ctx->pc == 0x53ADE4u) {
        ctx->pc = 0x53ADE4u;
            // 0x53ade4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53ADE8u;
        goto label_53ade8;
    }
    ctx->pc = 0x53ADE0u;
    {
        const bool branch_taken_0x53ade0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ADE0u;
            // 0x53ade4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ade0) {
            ctx->pc = 0x53AE30u;
            goto label_53ae30;
        }
    }
    ctx->pc = 0x53ADE8u;
label_53ade8:
    // 0x53ade8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53adec:
    // 0x53adec: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_53adf0:
    if (ctx->pc == 0x53ADF0u) {
        ctx->pc = 0x53ADF4u;
        goto label_53adf4;
    }
    ctx->pc = 0x53ADECu;
    {
        const bool branch_taken_0x53adec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53adec) {
            ctx->pc = 0x53AE08u;
            goto label_53ae08;
        }
    }
    ctx->pc = 0x53ADF4u;
label_53adf4:
    // 0x53adf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53adf8:
    // 0x53adf8: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
label_53adfc:
    if (ctx->pc == 0x53ADFCu) {
        ctx->pc = 0x53AE00u;
        goto label_53ae00;
    }
    ctx->pc = 0x53ADF8u;
    {
        const bool branch_taken_0x53adf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53adf8) {
            ctx->pc = 0x53AED8u;
            goto label_53aed8;
        }
    }
    ctx->pc = 0x53AE00u;
label_53ae00:
    // 0x53ae00: 0x10000035  b           . + 4 + (0x35 << 2)
label_53ae04:
    if (ctx->pc == 0x53AE04u) {
        ctx->pc = 0x53AE08u;
        goto label_53ae08;
    }
    ctx->pc = 0x53AE00u;
    {
        const bool branch_taken_0x53ae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ae00) {
            ctx->pc = 0x53AED8u;
            goto label_53aed8;
        }
    }
    ctx->pc = 0x53AE08u;
label_53ae08:
    // 0x53ae08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53ae0c:
    // 0x53ae0c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x53ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_53ae10:
    // 0x53ae10: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x53ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_53ae14:
    // 0x53ae14: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x53ae14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_53ae18:
    // 0x53ae18: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_53ae1c:
    if (ctx->pc == 0x53AE1Cu) {
        ctx->pc = 0x53AE20u;
        goto label_53ae20;
    }
    ctx->pc = 0x53AE18u;
    {
        const bool branch_taken_0x53ae18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53ae18) {
            ctx->pc = 0x53AED8u;
            goto label_53aed8;
        }
    }
    ctx->pc = 0x53AE20u;
label_53ae20:
    // 0x53ae20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53ae20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ae24:
    // 0x53ae24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53ae24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53ae28:
    // 0x53ae28: 0x320f809  jalr        $t9
label_53ae2c:
    if (ctx->pc == 0x53AE2Cu) {
        ctx->pc = 0x53AE30u;
        goto label_53ae30;
    }
    ctx->pc = 0x53AE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53AE30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53AE30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53AE30u; }
            if (ctx->pc != 0x53AE30u) { return; }
        }
        }
    }
    ctx->pc = 0x53AE30u;
label_53ae30:
    // 0x53ae30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53ae34:
    // 0x53ae34: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x53ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_53ae38:
    // 0x53ae38: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53ae3c:
    // 0x53ae3c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x53ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ae40:
    // 0x53ae40: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x53ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_53ae44:
    // 0x53ae44: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x53ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53ae48:
    // 0x53ae48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x53ae48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_53ae4c:
    // 0x53ae4c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x53ae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_53ae50:
    // 0x53ae50: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x53ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_53ae54:
    // 0x53ae54: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x53ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ae58:
    // 0x53ae58: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x53ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53ae5c:
    // 0x53ae5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x53ae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53ae60:
    // 0x53ae60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53ae64:
    if (ctx->pc == 0x53AE64u) {
        ctx->pc = 0x53AE64u;
            // 0x53ae64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53AE68u;
        goto label_53ae68;
    }
    ctx->pc = 0x53AE60u;
    {
        const bool branch_taken_0x53ae60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53AE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AE60u;
            // 0x53ae64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ae60) {
            ctx->pc = 0x53AE6Cu;
            goto label_53ae6c;
        }
    }
    ctx->pc = 0x53AE68u;
label_53ae68:
    // 0x53ae68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53ae68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53ae6c:
    // 0x53ae6c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_53ae70:
    if (ctx->pc == 0x53AE70u) {
        ctx->pc = 0x53AE70u;
            // 0x53ae70: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x53AE74u;
        goto label_53ae74;
    }
    ctx->pc = 0x53AE6Cu;
    {
        const bool branch_taken_0x53ae6c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x53ae6c) {
            ctx->pc = 0x53AE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AE6Cu;
            // 0x53ae70: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AE80u;
            goto label_53ae80;
        }
    }
    ctx->pc = 0x53AE74u;
label_53ae74:
    // 0x53ae74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53ae74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53ae78:
    // 0x53ae78: 0x10000007  b           . + 4 + (0x7 << 2)
label_53ae7c:
    if (ctx->pc == 0x53AE7Cu) {
        ctx->pc = 0x53AE7Cu;
            // 0x53ae7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x53AE80u;
        goto label_53ae80;
    }
    ctx->pc = 0x53AE78u;
    {
        const bool branch_taken_0x53ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AE78u;
            // 0x53ae7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ae78) {
            ctx->pc = 0x53AE98u;
            goto label_53ae98;
        }
    }
    ctx->pc = 0x53AE80u;
label_53ae80:
    // 0x53ae80: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x53ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_53ae84:
    // 0x53ae84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x53ae84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_53ae88:
    // 0x53ae88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x53ae88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53ae8c:
    // 0x53ae8c: 0x0  nop
    ctx->pc = 0x53ae8cu;
    // NOP
label_53ae90:
    // 0x53ae90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53ae90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53ae94:
    // 0x53ae94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x53ae94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_53ae98:
    // 0x53ae98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x53ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ae9c:
    // 0x53ae9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x53ae9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_53aea0:
    // 0x53aea0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x53aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_53aea4:
    // 0x53aea4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x53aea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_53aea8:
    // 0x53aea8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_53aeac:
    if (ctx->pc == 0x53AEACu) {
        ctx->pc = 0x53AEB0u;
        goto label_53aeb0;
    }
    ctx->pc = 0x53AEA8u;
    {
        const bool branch_taken_0x53aea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53aea8) {
            ctx->pc = 0x53AED8u;
            goto label_53aed8;
        }
    }
    ctx->pc = 0x53AEB0u;
label_53aeb0:
    // 0x53aeb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x53aeb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53aeb4:
    // 0x53aeb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53aeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53aeb8:
    // 0x53aeb8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x53aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_53aebc:
    // 0x53aebc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x53aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_53aec0:
    // 0x53aec0: 0xc0e3658  jal         func_38D960
label_53aec4:
    if (ctx->pc == 0x53AEC4u) {
        ctx->pc = 0x53AEC4u;
            // 0x53aec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x53AEC8u;
        goto label_53aec8;
    }
    ctx->pc = 0x53AEC0u;
    SET_GPR_U32(ctx, 31, 0x53AEC8u);
    ctx->pc = 0x53AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53AEC0u;
            // 0x53aec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AEC8u; }
        if (ctx->pc != 0x53AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53AEC8u; }
        if (ctx->pc != 0x53AEC8u) { return; }
    }
    ctx->pc = 0x53AEC8u;
label_53aec8:
    // 0x53aec8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x53aec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_53aecc:
    // 0x53aecc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x53aeccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_53aed0:
    // 0x53aed0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_53aed4:
    if (ctx->pc == 0x53AED4u) {
        ctx->pc = 0x53AED4u;
            // 0x53aed4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x53AED8u;
        goto label_53aed8;
    }
    ctx->pc = 0x53AED0u;
    {
        const bool branch_taken_0x53aed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AED0u;
            // 0x53aed4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53aed0) {
            ctx->pc = 0x53AEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53aeb8;
        }
    }
    ctx->pc = 0x53AED8u;
label_53aed8:
    // 0x53aed8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53aed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_53aedc:
    // 0x53aedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53aedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53aee0:
    // 0x53aee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53aee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53aee4:
    // 0x53aee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53aee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53aee8:
    // 0x53aee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53aee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53aeec:
    // 0x53aeec: 0x3e00008  jr          $ra
label_53aef0:
    if (ctx->pc == 0x53AEF0u) {
        ctx->pc = 0x53AEF0u;
            // 0x53aef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53AEF4u;
        goto label_53aef4;
    }
    ctx->pc = 0x53AEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AEECu;
            // 0x53aef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53AEF4u;
label_53aef4:
    // 0x53aef4: 0x0  nop
    ctx->pc = 0x53aef4u;
    // NOP
label_53aef8:
    // 0x53aef8: 0x0  nop
    ctx->pc = 0x53aef8u;
    // NOP
label_53aefc:
    // 0x53aefc: 0x0  nop
    ctx->pc = 0x53aefcu;
    // NOP
label_53af00:
    // 0x53af00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53af00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53af04:
    // 0x53af04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53af04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53af08:
    // 0x53af08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53af0c:
    // 0x53af0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53af10:
    // 0x53af10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53af10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53af14:
    // 0x53af14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53af18:
    // 0x53af18: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x53af18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53af1c:
    // 0x53af1c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_53af20:
    if (ctx->pc == 0x53AF20u) {
        ctx->pc = 0x53AF20u;
            // 0x53af20: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53AF24u;
        goto label_53af24;
    }
    ctx->pc = 0x53AF1Cu;
    {
        const bool branch_taken_0x53af1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AF1Cu;
            // 0x53af20: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53af1c) {
            ctx->pc = 0x53AF58u;
            goto label_53af58;
        }
    }
    ctx->pc = 0x53AF24u;
label_53af24:
    // 0x53af24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53af24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53af28:
    // 0x53af28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53af28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53af2c:
    // 0x53af2c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x53af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_53af30:
    // 0x53af30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_53af34:
    // 0x53af34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53af34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53af38:
    // 0x53af38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53af38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53af3c:
    // 0x53af3c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x53af3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_53af40:
    // 0x53af40: 0x320f809  jalr        $t9
label_53af44:
    if (ctx->pc == 0x53AF44u) {
        ctx->pc = 0x53AF48u;
        goto label_53af48;
    }
    ctx->pc = 0x53AF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53AF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53AF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53AF48u; }
            if (ctx->pc != 0x53AF48u) { return; }
        }
        }
    }
    ctx->pc = 0x53AF48u;
label_53af48:
    // 0x53af48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x53af48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53af4c:
    // 0x53af4c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x53af4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_53af50:
    // 0x53af50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_53af54:
    if (ctx->pc == 0x53AF54u) {
        ctx->pc = 0x53AF54u;
            // 0x53af54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x53AF58u;
        goto label_53af58;
    }
    ctx->pc = 0x53AF50u;
    {
        const bool branch_taken_0x53af50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AF50u;
            // 0x53af54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53af50) {
            ctx->pc = 0x53AF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53af2c;
        }
    }
    ctx->pc = 0x53AF58u;
label_53af58:
    // 0x53af58: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x53af58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_53af5c:
    // 0x53af5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53af60:
    // 0x53af60: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_53af64:
    if (ctx->pc == 0x53AF64u) {
        ctx->pc = 0x53AF64u;
            // 0x53af64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x53AF68u;
        goto label_53af68;
    }
    ctx->pc = 0x53AF60u;
    {
        const bool branch_taken_0x53af60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53af60) {
            ctx->pc = 0x53AF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53AF60u;
            // 0x53af64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53AF80u;
            goto label_53af80;
        }
    }
    ctx->pc = 0x53AF68u;
label_53af68:
    // 0x53af68: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x53af68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_53af6c:
    // 0x53af6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x53af6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53af70:
    // 0x53af70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53af70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53af74:
    // 0x53af74: 0x320f809  jalr        $t9
label_53af78:
    if (ctx->pc == 0x53AF78u) {
        ctx->pc = 0x53AF78u;
            // 0x53af78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53AF7Cu;
        goto label_53af7c;
    }
    ctx->pc = 0x53AF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53AF7Cu);
        ctx->pc = 0x53AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AF74u;
            // 0x53af78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53AF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53AF7Cu; }
            if (ctx->pc != 0x53AF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53AF7Cu;
label_53af7c:
    // 0x53af7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53af7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_53af80:
    // 0x53af80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53af80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53af84:
    // 0x53af84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53af84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53af88:
    // 0x53af88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53af88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53af8c:
    // 0x53af8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53af90:
    // 0x53af90: 0x3e00008  jr          $ra
label_53af94:
    if (ctx->pc == 0x53AF94u) {
        ctx->pc = 0x53AF94u;
            // 0x53af94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53AF98u;
        goto label_53af98;
    }
    ctx->pc = 0x53AF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53AF90u;
            // 0x53af94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53AF98u;
label_53af98:
    // 0x53af98: 0x0  nop
    ctx->pc = 0x53af98u;
    // NOP
label_53af9c:
    // 0x53af9c: 0x0  nop
    ctx->pc = 0x53af9cu;
    // NOP
}
