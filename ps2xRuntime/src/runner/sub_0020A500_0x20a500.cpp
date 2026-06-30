#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A500
// Address: 0x20a500 - 0x20c2f0
void sub_0020A500_0x20a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A500_0x20a500");
#endif

    switch (ctx->pc) {
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a5ecu: goto label_20a5ec;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a5f4u: goto label_20a5f4;
        case 0x20a5f8u: goto label_20a5f8;
        case 0x20a5fcu: goto label_20a5fc;
        case 0x20a600u: goto label_20a600;
        case 0x20a604u: goto label_20a604;
        case 0x20a608u: goto label_20a608;
        case 0x20a60cu: goto label_20a60c;
        case 0x20a610u: goto label_20a610;
        case 0x20a614u: goto label_20a614;
        case 0x20a618u: goto label_20a618;
        case 0x20a61cu: goto label_20a61c;
        case 0x20a620u: goto label_20a620;
        case 0x20a624u: goto label_20a624;
        case 0x20a628u: goto label_20a628;
        case 0x20a62cu: goto label_20a62c;
        case 0x20a630u: goto label_20a630;
        case 0x20a634u: goto label_20a634;
        case 0x20a638u: goto label_20a638;
        case 0x20a63cu: goto label_20a63c;
        case 0x20a640u: goto label_20a640;
        case 0x20a644u: goto label_20a644;
        case 0x20a648u: goto label_20a648;
        case 0x20a64cu: goto label_20a64c;
        case 0x20a650u: goto label_20a650;
        case 0x20a654u: goto label_20a654;
        case 0x20a658u: goto label_20a658;
        case 0x20a65cu: goto label_20a65c;
        case 0x20a660u: goto label_20a660;
        case 0x20a664u: goto label_20a664;
        case 0x20a668u: goto label_20a668;
        case 0x20a66cu: goto label_20a66c;
        case 0x20a670u: goto label_20a670;
        case 0x20a674u: goto label_20a674;
        case 0x20a678u: goto label_20a678;
        case 0x20a67cu: goto label_20a67c;
        case 0x20a680u: goto label_20a680;
        case 0x20a684u: goto label_20a684;
        case 0x20a688u: goto label_20a688;
        case 0x20a68cu: goto label_20a68c;
        case 0x20a690u: goto label_20a690;
        case 0x20a694u: goto label_20a694;
        case 0x20a698u: goto label_20a698;
        case 0x20a69cu: goto label_20a69c;
        case 0x20a6a0u: goto label_20a6a0;
        case 0x20a6a4u: goto label_20a6a4;
        case 0x20a6a8u: goto label_20a6a8;
        case 0x20a6acu: goto label_20a6ac;
        case 0x20a6b0u: goto label_20a6b0;
        case 0x20a6b4u: goto label_20a6b4;
        case 0x20a6b8u: goto label_20a6b8;
        case 0x20a6bcu: goto label_20a6bc;
        case 0x20a6c0u: goto label_20a6c0;
        case 0x20a6c4u: goto label_20a6c4;
        case 0x20a6c8u: goto label_20a6c8;
        case 0x20a6ccu: goto label_20a6cc;
        case 0x20a6d0u: goto label_20a6d0;
        case 0x20a6d4u: goto label_20a6d4;
        case 0x20a6d8u: goto label_20a6d8;
        case 0x20a6dcu: goto label_20a6dc;
        case 0x20a6e0u: goto label_20a6e0;
        case 0x20a6e4u: goto label_20a6e4;
        case 0x20a6e8u: goto label_20a6e8;
        case 0x20a6ecu: goto label_20a6ec;
        case 0x20a6f0u: goto label_20a6f0;
        case 0x20a6f4u: goto label_20a6f4;
        case 0x20a6f8u: goto label_20a6f8;
        case 0x20a6fcu: goto label_20a6fc;
        case 0x20a700u: goto label_20a700;
        case 0x20a704u: goto label_20a704;
        case 0x20a708u: goto label_20a708;
        case 0x20a70cu: goto label_20a70c;
        case 0x20a710u: goto label_20a710;
        case 0x20a714u: goto label_20a714;
        case 0x20a718u: goto label_20a718;
        case 0x20a71cu: goto label_20a71c;
        case 0x20a720u: goto label_20a720;
        case 0x20a724u: goto label_20a724;
        case 0x20a728u: goto label_20a728;
        case 0x20a72cu: goto label_20a72c;
        case 0x20a730u: goto label_20a730;
        case 0x20a734u: goto label_20a734;
        case 0x20a738u: goto label_20a738;
        case 0x20a73cu: goto label_20a73c;
        case 0x20a740u: goto label_20a740;
        case 0x20a744u: goto label_20a744;
        case 0x20a748u: goto label_20a748;
        case 0x20a74cu: goto label_20a74c;
        case 0x20a750u: goto label_20a750;
        case 0x20a754u: goto label_20a754;
        case 0x20a758u: goto label_20a758;
        case 0x20a75cu: goto label_20a75c;
        case 0x20a760u: goto label_20a760;
        case 0x20a764u: goto label_20a764;
        case 0x20a768u: goto label_20a768;
        case 0x20a76cu: goto label_20a76c;
        case 0x20a770u: goto label_20a770;
        case 0x20a774u: goto label_20a774;
        case 0x20a778u: goto label_20a778;
        case 0x20a77cu: goto label_20a77c;
        case 0x20a780u: goto label_20a780;
        case 0x20a784u: goto label_20a784;
        case 0x20a788u: goto label_20a788;
        case 0x20a78cu: goto label_20a78c;
        case 0x20a790u: goto label_20a790;
        case 0x20a794u: goto label_20a794;
        case 0x20a798u: goto label_20a798;
        case 0x20a79cu: goto label_20a79c;
        case 0x20a7a0u: goto label_20a7a0;
        case 0x20a7a4u: goto label_20a7a4;
        case 0x20a7a8u: goto label_20a7a8;
        case 0x20a7acu: goto label_20a7ac;
        case 0x20a7b0u: goto label_20a7b0;
        case 0x20a7b4u: goto label_20a7b4;
        case 0x20a7b8u: goto label_20a7b8;
        case 0x20a7bcu: goto label_20a7bc;
        case 0x20a7c0u: goto label_20a7c0;
        case 0x20a7c4u: goto label_20a7c4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7ccu: goto label_20a7cc;
        case 0x20a7d0u: goto label_20a7d0;
        case 0x20a7d4u: goto label_20a7d4;
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7dcu: goto label_20a7dc;
        case 0x20a7e0u: goto label_20a7e0;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7e8u: goto label_20a7e8;
        case 0x20a7ecu: goto label_20a7ec;
        case 0x20a7f0u: goto label_20a7f0;
        case 0x20a7f4u: goto label_20a7f4;
        case 0x20a7f8u: goto label_20a7f8;
        case 0x20a7fcu: goto label_20a7fc;
        case 0x20a800u: goto label_20a800;
        case 0x20a804u: goto label_20a804;
        case 0x20a808u: goto label_20a808;
        case 0x20a80cu: goto label_20a80c;
        case 0x20a810u: goto label_20a810;
        case 0x20a814u: goto label_20a814;
        case 0x20a818u: goto label_20a818;
        case 0x20a81cu: goto label_20a81c;
        case 0x20a820u: goto label_20a820;
        case 0x20a824u: goto label_20a824;
        case 0x20a828u: goto label_20a828;
        case 0x20a82cu: goto label_20a82c;
        case 0x20a830u: goto label_20a830;
        case 0x20a834u: goto label_20a834;
        case 0x20a838u: goto label_20a838;
        case 0x20a83cu: goto label_20a83c;
        case 0x20a840u: goto label_20a840;
        case 0x20a844u: goto label_20a844;
        case 0x20a848u: goto label_20a848;
        case 0x20a84cu: goto label_20a84c;
        case 0x20a850u: goto label_20a850;
        case 0x20a854u: goto label_20a854;
        case 0x20a858u: goto label_20a858;
        case 0x20a85cu: goto label_20a85c;
        case 0x20a860u: goto label_20a860;
        case 0x20a864u: goto label_20a864;
        case 0x20a868u: goto label_20a868;
        case 0x20a86cu: goto label_20a86c;
        case 0x20a870u: goto label_20a870;
        case 0x20a874u: goto label_20a874;
        case 0x20a878u: goto label_20a878;
        case 0x20a87cu: goto label_20a87c;
        case 0x20a880u: goto label_20a880;
        case 0x20a884u: goto label_20a884;
        case 0x20a888u: goto label_20a888;
        case 0x20a88cu: goto label_20a88c;
        case 0x20a890u: goto label_20a890;
        case 0x20a894u: goto label_20a894;
        case 0x20a898u: goto label_20a898;
        case 0x20a89cu: goto label_20a89c;
        case 0x20a8a0u: goto label_20a8a0;
        case 0x20a8a4u: goto label_20a8a4;
        case 0x20a8a8u: goto label_20a8a8;
        case 0x20a8acu: goto label_20a8ac;
        case 0x20a8b0u: goto label_20a8b0;
        case 0x20a8b4u: goto label_20a8b4;
        case 0x20a8b8u: goto label_20a8b8;
        case 0x20a8bcu: goto label_20a8bc;
        case 0x20a8c0u: goto label_20a8c0;
        case 0x20a8c4u: goto label_20a8c4;
        case 0x20a8c8u: goto label_20a8c8;
        case 0x20a8ccu: goto label_20a8cc;
        case 0x20a8d0u: goto label_20a8d0;
        case 0x20a8d4u: goto label_20a8d4;
        case 0x20a8d8u: goto label_20a8d8;
        case 0x20a8dcu: goto label_20a8dc;
        case 0x20a8e0u: goto label_20a8e0;
        case 0x20a8e4u: goto label_20a8e4;
        case 0x20a8e8u: goto label_20a8e8;
        case 0x20a8ecu: goto label_20a8ec;
        case 0x20a8f0u: goto label_20a8f0;
        case 0x20a8f4u: goto label_20a8f4;
        case 0x20a8f8u: goto label_20a8f8;
        case 0x20a8fcu: goto label_20a8fc;
        case 0x20a900u: goto label_20a900;
        case 0x20a904u: goto label_20a904;
        case 0x20a908u: goto label_20a908;
        case 0x20a90cu: goto label_20a90c;
        case 0x20a910u: goto label_20a910;
        case 0x20a914u: goto label_20a914;
        case 0x20a918u: goto label_20a918;
        case 0x20a91cu: goto label_20a91c;
        case 0x20a920u: goto label_20a920;
        case 0x20a924u: goto label_20a924;
        case 0x20a928u: goto label_20a928;
        case 0x20a92cu: goto label_20a92c;
        case 0x20a930u: goto label_20a930;
        case 0x20a934u: goto label_20a934;
        case 0x20a938u: goto label_20a938;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a940u: goto label_20a940;
        case 0x20a944u: goto label_20a944;
        case 0x20a948u: goto label_20a948;
        case 0x20a94cu: goto label_20a94c;
        case 0x20a950u: goto label_20a950;
        case 0x20a954u: goto label_20a954;
        case 0x20a958u: goto label_20a958;
        case 0x20a95cu: goto label_20a95c;
        case 0x20a960u: goto label_20a960;
        case 0x20a964u: goto label_20a964;
        case 0x20a968u: goto label_20a968;
        case 0x20a96cu: goto label_20a96c;
        case 0x20a970u: goto label_20a970;
        case 0x20a974u: goto label_20a974;
        case 0x20a978u: goto label_20a978;
        case 0x20a97cu: goto label_20a97c;
        case 0x20a980u: goto label_20a980;
        case 0x20a984u: goto label_20a984;
        case 0x20a988u: goto label_20a988;
        case 0x20a98cu: goto label_20a98c;
        case 0x20a990u: goto label_20a990;
        case 0x20a994u: goto label_20a994;
        case 0x20a998u: goto label_20a998;
        case 0x20a99cu: goto label_20a99c;
        case 0x20a9a0u: goto label_20a9a0;
        case 0x20a9a4u: goto label_20a9a4;
        case 0x20a9a8u: goto label_20a9a8;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20a9b0u: goto label_20a9b0;
        case 0x20a9b4u: goto label_20a9b4;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9bcu: goto label_20a9bc;
        case 0x20a9c0u: goto label_20a9c0;
        case 0x20a9c4u: goto label_20a9c4;
        case 0x20a9c8u: goto label_20a9c8;
        case 0x20a9ccu: goto label_20a9cc;
        case 0x20a9d0u: goto label_20a9d0;
        case 0x20a9d4u: goto label_20a9d4;
        case 0x20a9d8u: goto label_20a9d8;
        case 0x20a9dcu: goto label_20a9dc;
        case 0x20a9e0u: goto label_20a9e0;
        case 0x20a9e4u: goto label_20a9e4;
        case 0x20a9e8u: goto label_20a9e8;
        case 0x20a9ecu: goto label_20a9ec;
        case 0x20a9f0u: goto label_20a9f0;
        case 0x20a9f4u: goto label_20a9f4;
        case 0x20a9f8u: goto label_20a9f8;
        case 0x20a9fcu: goto label_20a9fc;
        case 0x20aa00u: goto label_20aa00;
        case 0x20aa04u: goto label_20aa04;
        case 0x20aa08u: goto label_20aa08;
        case 0x20aa0cu: goto label_20aa0c;
        case 0x20aa10u: goto label_20aa10;
        case 0x20aa14u: goto label_20aa14;
        case 0x20aa18u: goto label_20aa18;
        case 0x20aa1cu: goto label_20aa1c;
        case 0x20aa20u: goto label_20aa20;
        case 0x20aa24u: goto label_20aa24;
        case 0x20aa28u: goto label_20aa28;
        case 0x20aa2cu: goto label_20aa2c;
        case 0x20aa30u: goto label_20aa30;
        case 0x20aa34u: goto label_20aa34;
        case 0x20aa38u: goto label_20aa38;
        case 0x20aa3cu: goto label_20aa3c;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa48u: goto label_20aa48;
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa50u: goto label_20aa50;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa58u: goto label_20aa58;
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa60u: goto label_20aa60;
        case 0x20aa64u: goto label_20aa64;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa6cu: goto label_20aa6c;
        case 0x20aa70u: goto label_20aa70;
        case 0x20aa74u: goto label_20aa74;
        case 0x20aa78u: goto label_20aa78;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa84u: goto label_20aa84;
        case 0x20aa88u: goto label_20aa88;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aa90u: goto label_20aa90;
        case 0x20aa94u: goto label_20aa94;
        case 0x20aa98u: goto label_20aa98;
        case 0x20aa9cu: goto label_20aa9c;
        case 0x20aaa0u: goto label_20aaa0;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aaacu: goto label_20aaac;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aab4u: goto label_20aab4;
        case 0x20aab8u: goto label_20aab8;
        case 0x20aabcu: goto label_20aabc;
        case 0x20aac0u: goto label_20aac0;
        case 0x20aac4u: goto label_20aac4;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aaccu: goto label_20aacc;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aad8u: goto label_20aad8;
        case 0x20aadcu: goto label_20aadc;
        case 0x20aae0u: goto label_20aae0;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaecu: goto label_20aaec;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20aaf4u: goto label_20aaf4;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20aafcu: goto label_20aafc;
        case 0x20ab00u: goto label_20ab00;
        case 0x20ab04u: goto label_20ab04;
        case 0x20ab08u: goto label_20ab08;
        case 0x20ab0cu: goto label_20ab0c;
        case 0x20ab10u: goto label_20ab10;
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab18u: goto label_20ab18;
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab20u: goto label_20ab20;
        case 0x20ab24u: goto label_20ab24;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab30u: goto label_20ab30;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab38u: goto label_20ab38;
        case 0x20ab3cu: goto label_20ab3c;
        case 0x20ab40u: goto label_20ab40;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab48u: goto label_20ab48;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab50u: goto label_20ab50;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        case 0x20adc8u: goto label_20adc8;
        case 0x20adccu: goto label_20adcc;
        case 0x20add0u: goto label_20add0;
        case 0x20add4u: goto label_20add4;
        case 0x20add8u: goto label_20add8;
        case 0x20addcu: goto label_20addc;
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        case 0x20ae34u: goto label_20ae34;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        case 0x20b114u: goto label_20b114;
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        case 0x20b174u: goto label_20b174;
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        case 0x20b234u: goto label_20b234;
        case 0x20b238u: goto label_20b238;
        case 0x20b23cu: goto label_20b23c;
        case 0x20b240u: goto label_20b240;
        case 0x20b244u: goto label_20b244;
        case 0x20b248u: goto label_20b248;
        case 0x20b24cu: goto label_20b24c;
        case 0x20b250u: goto label_20b250;
        case 0x20b254u: goto label_20b254;
        case 0x20b258u: goto label_20b258;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b260u: goto label_20b260;
        case 0x20b264u: goto label_20b264;
        case 0x20b268u: goto label_20b268;
        case 0x20b26cu: goto label_20b26c;
        case 0x20b270u: goto label_20b270;
        case 0x20b274u: goto label_20b274;
        case 0x20b278u: goto label_20b278;
        case 0x20b27cu: goto label_20b27c;
        case 0x20b280u: goto label_20b280;
        case 0x20b284u: goto label_20b284;
        case 0x20b288u: goto label_20b288;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b290u: goto label_20b290;
        case 0x20b294u: goto label_20b294;
        case 0x20b298u: goto label_20b298;
        case 0x20b29cu: goto label_20b29c;
        case 0x20b2a0u: goto label_20b2a0;
        case 0x20b2a4u: goto label_20b2a4;
        case 0x20b2a8u: goto label_20b2a8;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2b0u: goto label_20b2b0;
        case 0x20b2b4u: goto label_20b2b4;
        case 0x20b2b8u: goto label_20b2b8;
        case 0x20b2bcu: goto label_20b2bc;
        case 0x20b2c0u: goto label_20b2c0;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2ccu: goto label_20b2cc;
        case 0x20b2d0u: goto label_20b2d0;
        case 0x20b2d4u: goto label_20b2d4;
        case 0x20b2d8u: goto label_20b2d8;
        case 0x20b2dcu: goto label_20b2dc;
        case 0x20b2e0u: goto label_20b2e0;
        case 0x20b2e4u: goto label_20b2e4;
        case 0x20b2e8u: goto label_20b2e8;
        case 0x20b2ecu: goto label_20b2ec;
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b2f4u: goto label_20b2f4;
        case 0x20b2f8u: goto label_20b2f8;
        case 0x20b2fcu: goto label_20b2fc;
        case 0x20b300u: goto label_20b300;
        case 0x20b304u: goto label_20b304;
        case 0x20b308u: goto label_20b308;
        case 0x20b30cu: goto label_20b30c;
        case 0x20b310u: goto label_20b310;
        case 0x20b314u: goto label_20b314;
        case 0x20b318u: goto label_20b318;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b320u: goto label_20b320;
        case 0x20b324u: goto label_20b324;
        case 0x20b328u: goto label_20b328;
        case 0x20b32cu: goto label_20b32c;
        case 0x20b330u: goto label_20b330;
        case 0x20b334u: goto label_20b334;
        case 0x20b338u: goto label_20b338;
        case 0x20b33cu: goto label_20b33c;
        case 0x20b340u: goto label_20b340;
        case 0x20b344u: goto label_20b344;
        case 0x20b348u: goto label_20b348;
        case 0x20b34cu: goto label_20b34c;
        case 0x20b350u: goto label_20b350;
        case 0x20b354u: goto label_20b354;
        case 0x20b358u: goto label_20b358;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b360u: goto label_20b360;
        case 0x20b364u: goto label_20b364;
        case 0x20b368u: goto label_20b368;
        case 0x20b36cu: goto label_20b36c;
        case 0x20b370u: goto label_20b370;
        case 0x20b374u: goto label_20b374;
        case 0x20b378u: goto label_20b378;
        case 0x20b37cu: goto label_20b37c;
        case 0x20b380u: goto label_20b380;
        case 0x20b384u: goto label_20b384;
        case 0x20b388u: goto label_20b388;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b390u: goto label_20b390;
        case 0x20b394u: goto label_20b394;
        case 0x20b398u: goto label_20b398;
        case 0x20b39cu: goto label_20b39c;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3a4u: goto label_20b3a4;
        case 0x20b3a8u: goto label_20b3a8;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3b4u: goto label_20b3b4;
        case 0x20b3b8u: goto label_20b3b8;
        case 0x20b3bcu: goto label_20b3bc;
        case 0x20b3c0u: goto label_20b3c0;
        case 0x20b3c4u: goto label_20b3c4;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3d0u: goto label_20b3d0;
        case 0x20b3d4u: goto label_20b3d4;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3e8u: goto label_20b3e8;
        case 0x20b3ecu: goto label_20b3ec;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b400u: goto label_20b400;
        case 0x20b404u: goto label_20b404;
        case 0x20b408u: goto label_20b408;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b410u: goto label_20b410;
        case 0x20b414u: goto label_20b414;
        case 0x20b418u: goto label_20b418;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b420u: goto label_20b420;
        case 0x20b424u: goto label_20b424;
        case 0x20b428u: goto label_20b428;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b430u: goto label_20b430;
        case 0x20b434u: goto label_20b434;
        case 0x20b438u: goto label_20b438;
        case 0x20b43cu: goto label_20b43c;
        case 0x20b440u: goto label_20b440;
        case 0x20b444u: goto label_20b444;
        case 0x20b448u: goto label_20b448;
        case 0x20b44cu: goto label_20b44c;
        case 0x20b450u: goto label_20b450;
        case 0x20b454u: goto label_20b454;
        case 0x20b458u: goto label_20b458;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b460u: goto label_20b460;
        case 0x20b464u: goto label_20b464;
        case 0x20b468u: goto label_20b468;
        case 0x20b46cu: goto label_20b46c;
        case 0x20b470u: goto label_20b470;
        case 0x20b474u: goto label_20b474;
        case 0x20b478u: goto label_20b478;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b480u: goto label_20b480;
        case 0x20b484u: goto label_20b484;
        case 0x20b488u: goto label_20b488;
        case 0x20b48cu: goto label_20b48c;
        case 0x20b490u: goto label_20b490;
        case 0x20b494u: goto label_20b494;
        case 0x20b498u: goto label_20b498;
        case 0x20b49cu: goto label_20b49c;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4a4u: goto label_20b4a4;
        case 0x20b4a8u: goto label_20b4a8;
        case 0x20b4acu: goto label_20b4ac;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4b4u: goto label_20b4b4;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c0u: goto label_20b4c0;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4c8u: goto label_20b4c8;
        case 0x20b4ccu: goto label_20b4cc;
        case 0x20b4d0u: goto label_20b4d0;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b4e0u: goto label_20b4e0;
        case 0x20b4e4u: goto label_20b4e4;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b4ecu: goto label_20b4ec;
        case 0x20b4f0u: goto label_20b4f0;
        case 0x20b4f4u: goto label_20b4f4;
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b4fcu: goto label_20b4fc;
        case 0x20b500u: goto label_20b500;
        case 0x20b504u: goto label_20b504;
        case 0x20b508u: goto label_20b508;
        case 0x20b50cu: goto label_20b50c;
        case 0x20b510u: goto label_20b510;
        case 0x20b514u: goto label_20b514;
        case 0x20b518u: goto label_20b518;
        case 0x20b51cu: goto label_20b51c;
        case 0x20b520u: goto label_20b520;
        case 0x20b524u: goto label_20b524;
        case 0x20b528u: goto label_20b528;
        case 0x20b52cu: goto label_20b52c;
        case 0x20b530u: goto label_20b530;
        case 0x20b534u: goto label_20b534;
        case 0x20b538u: goto label_20b538;
        case 0x20b53cu: goto label_20b53c;
        case 0x20b540u: goto label_20b540;
        case 0x20b544u: goto label_20b544;
        case 0x20b548u: goto label_20b548;
        case 0x20b54cu: goto label_20b54c;
        case 0x20b550u: goto label_20b550;
        case 0x20b554u: goto label_20b554;
        case 0x20b558u: goto label_20b558;
        case 0x20b55cu: goto label_20b55c;
        case 0x20b560u: goto label_20b560;
        case 0x20b564u: goto label_20b564;
        case 0x20b568u: goto label_20b568;
        case 0x20b56cu: goto label_20b56c;
        case 0x20b570u: goto label_20b570;
        case 0x20b574u: goto label_20b574;
        case 0x20b578u: goto label_20b578;
        case 0x20b57cu: goto label_20b57c;
        case 0x20b580u: goto label_20b580;
        case 0x20b584u: goto label_20b584;
        case 0x20b588u: goto label_20b588;
        case 0x20b58cu: goto label_20b58c;
        case 0x20b590u: goto label_20b590;
        case 0x20b594u: goto label_20b594;
        case 0x20b598u: goto label_20b598;
        case 0x20b59cu: goto label_20b59c;
        case 0x20b5a0u: goto label_20b5a0;
        case 0x20b5a4u: goto label_20b5a4;
        case 0x20b5a8u: goto label_20b5a8;
        case 0x20b5acu: goto label_20b5ac;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5b4u: goto label_20b5b4;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5bcu: goto label_20b5bc;
        case 0x20b5c0u: goto label_20b5c0;
        case 0x20b5c4u: goto label_20b5c4;
        case 0x20b5c8u: goto label_20b5c8;
        case 0x20b5ccu: goto label_20b5cc;
        case 0x20b5d0u: goto label_20b5d0;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b5d8u: goto label_20b5d8;
        case 0x20b5dcu: goto label_20b5dc;
        case 0x20b5e0u: goto label_20b5e0;
        case 0x20b5e4u: goto label_20b5e4;
        case 0x20b5e8u: goto label_20b5e8;
        case 0x20b5ecu: goto label_20b5ec;
        case 0x20b5f0u: goto label_20b5f0;
        case 0x20b5f4u: goto label_20b5f4;
        case 0x20b5f8u: goto label_20b5f8;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b600u: goto label_20b600;
        case 0x20b604u: goto label_20b604;
        case 0x20b608u: goto label_20b608;
        case 0x20b60cu: goto label_20b60c;
        case 0x20b610u: goto label_20b610;
        case 0x20b614u: goto label_20b614;
        case 0x20b618u: goto label_20b618;
        case 0x20b61cu: goto label_20b61c;
        case 0x20b620u: goto label_20b620;
        case 0x20b624u: goto label_20b624;
        case 0x20b628u: goto label_20b628;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b630u: goto label_20b630;
        case 0x20b634u: goto label_20b634;
        case 0x20b638u: goto label_20b638;
        case 0x20b63cu: goto label_20b63c;
        case 0x20b640u: goto label_20b640;
        case 0x20b644u: goto label_20b644;
        case 0x20b648u: goto label_20b648;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b650u: goto label_20b650;
        case 0x20b654u: goto label_20b654;
        case 0x20b658u: goto label_20b658;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b660u: goto label_20b660;
        case 0x20b664u: goto label_20b664;
        case 0x20b668u: goto label_20b668;
        case 0x20b66cu: goto label_20b66c;
        case 0x20b670u: goto label_20b670;
        case 0x20b674u: goto label_20b674;
        case 0x20b678u: goto label_20b678;
        case 0x20b67cu: goto label_20b67c;
        case 0x20b680u: goto label_20b680;
        case 0x20b684u: goto label_20b684;
        case 0x20b688u: goto label_20b688;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b690u: goto label_20b690;
        case 0x20b694u: goto label_20b694;
        case 0x20b698u: goto label_20b698;
        case 0x20b69cu: goto label_20b69c;
        case 0x20b6a0u: goto label_20b6a0;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6b8u: goto label_20b6b8;
        case 0x20b6bcu: goto label_20b6bc;
        case 0x20b6c0u: goto label_20b6c0;
        case 0x20b6c4u: goto label_20b6c4;
        case 0x20b6c8u: goto label_20b6c8;
        case 0x20b6ccu: goto label_20b6cc;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6d4u: goto label_20b6d4;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6dcu: goto label_20b6dc;
        case 0x20b6e0u: goto label_20b6e0;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6e8u: goto label_20b6e8;
        case 0x20b6ecu: goto label_20b6ec;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b6f4u: goto label_20b6f4;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b6fcu: goto label_20b6fc;
        case 0x20b700u: goto label_20b700;
        case 0x20b704u: goto label_20b704;
        case 0x20b708u: goto label_20b708;
        case 0x20b70cu: goto label_20b70c;
        case 0x20b710u: goto label_20b710;
        case 0x20b714u: goto label_20b714;
        case 0x20b718u: goto label_20b718;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7e8u: goto label_20b7e8;
        case 0x20b7ecu: goto label_20b7ec;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7f4u: goto label_20b7f4;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        default: break;
    }

    ctx->pc = 0x20a500u;

label_20a500:
    // 0x20a500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a504:
    // 0x20a504: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20a508:
    // 0x20a508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20a50c:
    // 0x20a50c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20a510:
    // 0x20a510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a514:
    // 0x20a514: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20a518:
    // 0x20a518: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20a518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20a51c:
    // 0x20a51c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_20a520:
    // 0x20a520: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20a520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20a524:
    // 0x20a524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a528:
    // 0x20a528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20a52c:
    // 0x20a52c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20a52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_20a530:
    // 0x20a530: 0x2463e370  addiu       $v1, $v1, -0x1C90
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959984));
label_20a534:
    // 0x20a534: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x20a534u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_20a538:
    // 0x20a538: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20a538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20a53c:
    // 0x20a53c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_20a540:
    // 0x20a540: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20a540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_20a544:
    // 0x20a544: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20a548:
    // 0x20a548: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20a548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_20a54c:
    // 0x20a54c: 0x24e7e5d0  addiu       $a3, $a3, -0x1A30
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960592));
label_20a550:
    // 0x20a550: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20a554:
    // 0x20a554: 0x2463e3d0  addiu       $v1, $v1, -0x1C30
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960080));
label_20a558:
    // 0x20a558: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x20a558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_20a55c:
    // 0x20a55c: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
label_20a560:
    // 0x20a560: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x20a560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_20a564:
    // 0x20a564: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x20a564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_20a568:
    // 0x20a568: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x20a568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_20a56c:
    // 0x20a56c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x20a56cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_20a570:
    // 0x20a570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20a574:
    if (ctx->pc == 0x20A574u) {
        ctx->pc = 0x20A574u;
            // 0x20a574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A578u;
        goto label_20a578;
    }
    ctx->pc = 0x20A570u;
    {
        const bool branch_taken_0x20a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A570u;
            // 0x20a574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a570) {
            ctx->pc = 0x20A584u;
            goto label_20a584;
        }
    }
    ctx->pc = 0x20A578u;
label_20a578:
    // 0x20a578: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_20a57c:
    // 0x20a57c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20a580:
    // 0x20a580: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x20a580u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_20a584:
    // 0x20a584: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20a584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20a588:
    // 0x20a588: 0xc082918  jal         func_20A460
label_20a58c:
    if (ctx->pc == 0x20A58Cu) {
        ctx->pc = 0x20A58Cu;
            // 0x20a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A590u;
        goto label_20a590;
    }
    ctx->pc = 0x20A588u;
    SET_GPR_U32(ctx, 31, 0x20A590u);
    ctx->pc = 0x20A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A588u;
            // 0x20a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (runtime->hasFunction(0x20A460u)) {
        auto targetFn = runtime->lookupFunction(0x20A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A590u; }
        if (ctx->pc != 0x20A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A460_0x20a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A590u; }
        if (ctx->pc != 0x20A590u) { return; }
    }
    ctx->pc = 0x20A590u;
label_20a590:
    // 0x20a590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a594:
    // 0x20a594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a598:
    // 0x20a598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a59c:
    // 0x20a59c: 0x3e00008  jr          $ra
label_20a5a0:
    if (ctx->pc == 0x20A5A0u) {
        ctx->pc = 0x20A5A0u;
            // 0x20a5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20A5A4u;
        goto label_20a5a4;
    }
    ctx->pc = 0x20A59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A59Cu;
            // 0x20a5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A5A4u;
label_20a5a4:
    // 0x20a5a4: 0x0  nop
    ctx->pc = 0x20a5a4u;
    // NOP
label_20a5a8:
    // 0x20a5a8: 0x0  nop
    ctx->pc = 0x20a5a8u;
    // NOP
label_20a5ac:
    // 0x20a5ac: 0x0  nop
    ctx->pc = 0x20a5acu;
    // NOP
label_20a5b0:
    // 0x20a5b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20a5b4:
    // 0x20a5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20a5b8:
    // 0x20a5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20a5bc:
    // 0x20a5bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a5c0:
    // 0x20a5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a5c4:
    // 0x20a5c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20a5c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20a5c8:
    // 0x20a5c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20a5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20a5cc:
    // 0x20a5cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20a5ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_20a5d0:
    // 0x20a5d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20a5d4:
    // 0x20a5d4: 0xc0a456c  jal         func_2915B0
label_20a5d8:
    if (ctx->pc == 0x20A5D8u) {
        ctx->pc = 0x20A5D8u;
            // 0x20a5d8: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x20A5DCu;
        goto label_20a5dc;
    }
    ctx->pc = 0x20A5D4u;
    SET_GPR_U32(ctx, 31, 0x20A5DCu);
    ctx->pc = 0x20A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5D4u;
            // 0x20a5d8: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5DCu; }
        if (ctx->pc != 0x20A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5DCu; }
        if (ctx->pc != 0x20A5DCu) { return; }
    }
    ctx->pc = 0x20A5DCu;
label_20a5dc:
    // 0x20a5dc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20a5e0:
    // 0x20a5e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20a5e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20a5e4:
    // 0x20a5e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20a5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a5e8:
    // 0x20a5e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20a5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a5ec:
    // 0x20a5ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20a5f0:
    // 0x20a5f0: 0x320f809  jalr        $t9
label_20a5f4:
    if (ctx->pc == 0x20A5F4u) {
        ctx->pc = 0x20A5F4u;
            // 0x20a5f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20A5F8u;
        goto label_20a5f8;
    }
    ctx->pc = 0x20A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A5F8u);
        ctx->pc = 0x20A5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5F0u;
            // 0x20a5f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A5F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A5F8u; }
            if (ctx->pc != 0x20A5F8u) { return; }
        }
        }
    }
    ctx->pc = 0x20A5F8u;
label_20a5f8:
    // 0x20a5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20a5fc:
    // 0x20a5fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20a600:
    // 0x20a600: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20a600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a604:
    // 0x20a604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a608:
    // 0x20a608: 0x3e00008  jr          $ra
label_20a60c:
    if (ctx->pc == 0x20A60Cu) {
        ctx->pc = 0x20A60Cu;
            // 0x20a60c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20A610u;
        goto label_20a610;
    }
    ctx->pc = 0x20A608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A608u;
            // 0x20a60c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A610u;
label_20a610:
    // 0x20a610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20a614:
    // 0x20a614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20a618:
    // 0x20a618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a61c:
    // 0x20a61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a620:
    // 0x20a620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a624:
    // 0x20a624: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x20a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20a628:
    // 0x20a628: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20a62c:
    // 0x20a62c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x20a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a630:
    // 0x20a630: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x20a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20a634:
    // 0x20a634: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x20a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20a638:
    // 0x20a638: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x20a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a63c:
    // 0x20a63c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20a63cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20a640:
    // 0x20a640: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x20a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a644:
    // 0x20a644: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20a644u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20a648:
    // 0x20a648: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a64c:
    // 0x20a64c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x20a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_20a650:
    // 0x20a650: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x20a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a654:
    // 0x20a654: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x20a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a658:
    // 0x20a658: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x20a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a65c:
    // 0x20a65c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20a65cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20a660:
    // 0x20a660: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20a660u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20a664:
    // 0x20a664: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a668:
    // 0x20a668: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x20a668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20a66c:
    // 0x20a66c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x20a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a670:
    // 0x20a670: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x20a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a674:
    // 0x20a674: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x20a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a678:
    // 0x20a678: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20a678u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20a67c:
    // 0x20a67c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20a67cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20a680:
    // 0x20a680: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a684:
    // 0x20a684: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x20a684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_20a688:
    // 0x20a688: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20a688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20a68c:
    // 0x20a68c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x20a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_20a690:
    // 0x20a690: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a694:
    // 0x20a694: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x20a694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20a698:
    // 0x20a698: 0x320f809  jalr        $t9
label_20a69c:
    if (ctx->pc == 0x20A69Cu) {
        ctx->pc = 0x20A69Cu;
            // 0x20a69c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20A6A0u;
        goto label_20a6a0;
    }
    ctx->pc = 0x20A698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A6A0u);
        ctx->pc = 0x20A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A698u;
            // 0x20a69c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A6A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A6A0u; }
            if (ctx->pc != 0x20A6A0u) { return; }
        }
        }
    }
    ctx->pc = 0x20A6A0u;
label_20a6a0:
    // 0x20a6a0: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x20a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20a6a4:
    // 0x20a6a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20a6a8:
    // 0x20a6a8: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x20a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20a6ac:
    // 0x20a6ac: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x20a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_20a6b0:
    // 0x20a6b0: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x20a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20a6b4:
    // 0x20a6b4: 0x46070242  mul.s       $f9, $f0, $f7
    ctx->pc = 0x20a6b4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20a6b8:
    // 0x20a6b8: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x20a6b8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_20a6bc:
    // 0x20a6bc: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x20a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a6c0:
    // 0x20a6c0: 0x460501c2  mul.s       $f7, $f0, $f5
    ctx->pc = 0x20a6c0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_20a6c4:
    // 0x20a6c4: 0x4602401a  mula.s      $f8, $f2
    ctx->pc = 0x20a6c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_20a6c8:
    // 0x20a6c8: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x20a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20a6cc:
    // 0x20a6cc: 0xc6240050  lwc1        $f4, 0x50($s1)
    ctx->pc = 0x20a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20a6d0:
    // 0x20a6d0: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x20a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a6d4:
    // 0x20a6d4: 0x4603481e  madda.s     $f9, $f3
    ctx->pc = 0x20a6d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
label_20a6d8:
    // 0x20a6d8: 0x4604381c  madd.s      $f0, $f7, $f4
    ctx->pc = 0x20a6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_20a6dc:
    // 0x20a6dc: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x20a6dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20a6e0:
    // 0x20a6e0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x20a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a6e4:
    // 0x20a6e4: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x20a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a6e8:
    // 0x20a6e8: 0xc6230054  lwc1        $f3, 0x54($s1)
    ctx->pc = 0x20a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20a6ec:
    // 0x20a6ec: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x20a6ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_20a6f0:
    // 0x20a6f0: 0x4602481e  madda.s     $f9, $f2
    ctx->pc = 0x20a6f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_20a6f4:
    // 0x20a6f4: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x20a6f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_20a6f8:
    // 0x20a6f8: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x20a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a6fc:
    // 0x20a6fc: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x20a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20a700:
    // 0x20a700: 0xc6240058  lwc1        $f4, 0x58($s1)
    ctx->pc = 0x20a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20a704:
    // 0x20a704: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x20a704u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20a708:
    // 0x20a708: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x20a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a70c:
    // 0x20a70c: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x20a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a710:
    // 0x20a710: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x20a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a714:
    // 0x20a714: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x20a714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_20a718:
    // 0x20a718: 0x4603481e  madda.s     $f9, $f3
    ctx->pc = 0x20a718u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
label_20a71c:
    // 0x20a71c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a720:
    // 0x20a720: 0x4604385c  madd.s      $f1, $f7, $f4
    ctx->pc = 0x20a720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_20a724:
    // 0x20a724: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x20a724u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20a728:
    // 0x20a728: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a72c:
    // 0x20a72c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x20a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a730:
    // 0x20a730: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x20a730u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20a734:
    // 0x20a734: 0x4600281a  mula.s      $f5, $f0
    ctx->pc = 0x20a734u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_20a738:
    // 0x20a738: 0x4601301e  madda.s     $f6, $f1
    ctx->pc = 0x20a738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_20a73c:
    // 0x20a73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a740:
    // 0x20a740: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x20a740u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20a744:
    // 0x20a744: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x20a744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20a748:
    // 0x20a748: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a74c:
    // 0x20a74c: 0x3e00008  jr          $ra
label_20a750:
    if (ctx->pc == 0x20A750u) {
        ctx->pc = 0x20A750u;
            // 0x20a750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20A754u;
        goto label_20a754;
    }
    ctx->pc = 0x20A74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A74Cu;
            // 0x20a750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A754u;
label_20a754:
    // 0x20a754: 0x0  nop
    ctx->pc = 0x20a754u;
    // NOP
label_20a758:
    // 0x20a758: 0x0  nop
    ctx->pc = 0x20a758u;
    // NOP
label_20a75c:
    // 0x20a75c: 0x0  nop
    ctx->pc = 0x20a75cu;
    // NOP
label_20a760:
    // 0x20a760: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_20a764:
    // 0x20a764: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20a764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20a768:
    // 0x20a768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20a76c:
    // 0x20a76c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20a770:
    // 0x20a770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a774:
    // 0x20a774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a778:
    // 0x20a778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a77c:
    // 0x20a77c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x20a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_20a780:
    // 0x20a780: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_20a784:
    // 0x20a784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20a784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20a788:
    // 0x20a788: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20a788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20a78c:
    // 0x20a78c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20a790:
    // 0x20a790: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x20a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_20a794:
    // 0x20a794: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20a794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a798:
    // 0x20a798: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20a79c:
    if (ctx->pc == 0x20A79Cu) {
        ctx->pc = 0x20A79Cu;
            // 0x20a79c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x20A7A0u;
        goto label_20a7a0;
    }
    ctx->pc = 0x20A798u;
    {
        const bool branch_taken_0x20a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A798u;
            // 0x20a79c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a798) {
            ctx->pc = 0x20A7C8u;
            goto label_20a7c8;
        }
    }
    ctx->pc = 0x20A7A0u;
label_20a7a0:
    // 0x20a7a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20a7a4:
    // 0x20a7a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20a7a8:
    // 0x20a7a8: 0x2442bf90  addiu       $v0, $v0, -0x4070
    ctx->pc = 0x20a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950800));
label_20a7ac:
    // 0x20a7ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20a7b0:
    // 0x20a7b0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_20a7b4:
    // 0x20a7b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_20a7b8:
    // 0x20a7b8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_20a7bc:
    // 0x20a7bc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_20a7c0:
    // 0x20a7c0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x20a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_20a7c4:
    // 0x20a7c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20a7c8:
    // 0x20a7c8: 0xc4c80000  lwc1        $f8, 0x0($a2)
    ctx->pc = 0x20a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20a7cc:
    // 0x20a7cc: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x20a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_20a7d0:
    // 0x20a7d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20a7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a7d4:
    // 0x20a7d4: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x20a7d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20a7d8:
    // 0x20a7d8: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x20a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20a7dc:
    // 0x20a7dc: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x20a7dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20a7e0:
    // 0x20a7e0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x20a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20a7e4:
    // 0x20a7e4: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x20a7e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20a7e8:
    // 0x20a7e8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x20a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a7ec:
    // 0x20a7ec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x20a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_20a7f0:
    // 0x20a7f0: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x20a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20a7f4:
    // 0x20a7f4: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x20a7f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_20a7f8:
    // 0x20a7f8: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x20a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20a7fc:
    // 0x20a7fc: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x20a7fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_20a800:
    // 0x20a800: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x20a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20a804:
    // 0x20a804: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x20a804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_20a808:
    // 0x20a808: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x20a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a80c:
    // 0x20a80c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x20a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_20a810:
    // 0x20a810: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_20a814:
    // 0x20a814: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x20a814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_20a818:
    // 0x20a818: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x20a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_20a81c:
    // 0x20a81c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x20a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_20a820:
    // 0x20a820: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x20a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a824:
    // 0x20a824: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x20a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a828:
    // 0x20a828: 0xc6220060  lwc1        $f2, 0x60($s1)
    ctx->pc = 0x20a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a82c:
    // 0x20a82c: 0x46003241  sub.s       $f9, $f6, $f0
    ctx->pc = 0x20a82cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_20a830:
    // 0x20a830: 0x46013a81  sub.s       $f10, $f7, $f1
    ctx->pc = 0x20a830u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_20a834:
    // 0x20a834: 0x460242c1  sub.s       $f11, $f8, $f2
    ctx->pc = 0x20a834u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_20a838:
    // 0x20a838: 0xc6260034  lwc1        $f6, 0x34($s1)
    ctx->pc = 0x20a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20a83c:
    // 0x20a83c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x20a83cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_20a840:
    // 0x20a840: 0xc6270030  lwc1        $f7, 0x30($s1)
    ctx->pc = 0x20a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20a844:
    // 0x20a844: 0x4606501a  mula.s      $f10, $f6
    ctx->pc = 0x20a844u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_20a848:
    // 0x20a848: 0xc6280038  lwc1        $f8, 0x38($s1)
    ctx->pc = 0x20a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20a84c:
    // 0x20a84c: 0x4607581e  madda.s     $f11, $f7
    ctx->pc = 0x20a84cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[7]));
label_20a850:
    // 0x20a850: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x20a850u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_20a854:
    // 0x20a854: 0x4608481c  madd.s      $f0, $f9, $f8
    ctx->pc = 0x20a854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_20a858:
    // 0x20a858: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x20a858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20a85c:
    // 0x20a85c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x20a85cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_20a860:
    // 0x20a860: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x20a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a864:
    // 0x20a864: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x20a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a868:
    // 0x20a868: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x20a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a86c:
    // 0x20a86c: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x20a86cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_20a870:
    // 0x20a870: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x20a870u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_20a874:
    // 0x20a874: 0x4602481c  madd.s      $f0, $f9, $f2
    ctx->pc = 0x20a874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_20a878:
    // 0x20a878: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x20a878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_20a87c:
    // 0x20a87c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x20a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a880:
    // 0x20a880: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x20a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a884:
    // 0x20a884: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x20a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a888:
    // 0x20a888: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x20a888u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_20a88c:
    // 0x20a88c: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x20a88cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_20a890:
    // 0x20a890: 0x4602481c  madd.s      $f0, $f9, $f2
    ctx->pc = 0x20a890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_20a894:
    // 0x20a894: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x20a894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_20a898:
    // 0x20a898: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x20a898u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_20a89c:
    // 0x20a89c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20a89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_20a8a0:
    // 0x20a8a0: 0x4607281e  madda.s     $f5, $f7
    ctx->pc = 0x20a8a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
label_20a8a4:
    // 0x20a8a4: 0x4608181c  madd.s      $f0, $f3, $f8
    ctx->pc = 0x20a8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_20a8a8:
    // 0x20a8a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x20a8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_20a8ac:
    // 0x20a8ac: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x20a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a8b0:
    // 0x20a8b0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x20a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a8b4:
    // 0x20a8b4: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x20a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a8b8:
    // 0x20a8b8: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20a8b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20a8bc:
    // 0x20a8bc: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20a8bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20a8c0:
    // 0x20a8c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a8c4:
    // 0x20a8c4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x20a8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_20a8c8:
    // 0x20a8c8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x20a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a8cc:
    // 0x20a8cc: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x20a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20a8d0:
    // 0x20a8d0: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x20a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20a8d4:
    // 0x20a8d4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20a8d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20a8d8:
    // 0x20a8d8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20a8d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20a8dc:
    // 0x20a8dc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20a8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20a8e0:
    // 0x20a8e0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x20a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_20a8e4:
    // 0x20a8e4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x20a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_20a8e8:
    // 0x20a8e8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x20a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20a8ec:
    // 0x20a8ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20a8f0:
    // 0x20a8f0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x20a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_20a8f4:
    // 0x20a8f4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20a8f8:
    // 0x20a8f8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a8fc:
    // 0x20a8fc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20a8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20a900:
    // 0x20a900: 0x320f809  jalr        $t9
label_20a904:
    if (ctx->pc == 0x20A904u) {
        ctx->pc = 0x20A904u;
            // 0x20a904: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20A908u;
        goto label_20a908;
    }
    ctx->pc = 0x20A900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A908u);
        ctx->pc = 0x20A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A900u;
            // 0x20a904: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A908u; }
            if (ctx->pc != 0x20A908u) { return; }
        }
        }
    }
    ctx->pc = 0x20A908u;
label_20a908:
    // 0x20a908: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20a90c:
    // 0x20a90c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20a910:
    // 0x20a910: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x20a910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_20a914:
    // 0x20a914: 0x83a3008c  lb          $v1, 0x8C($sp)
    ctx->pc = 0x20a914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
label_20a918:
    // 0x20a918: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_20a91c:
    if (ctx->pc == 0x20A91Cu) {
        ctx->pc = 0x20A920u;
        goto label_20a920;
    }
    ctx->pc = 0x20A918u;
    {
        const bool branch_taken_0x20a918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a918) {
            ctx->pc = 0x20A960u;
            goto label_20a960;
        }
    }
    ctx->pc = 0x20A920u;
label_20a920:
    // 0x20a920: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a924:
    // 0x20a924: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x20a924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_20a928:
    // 0x20a928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a92c:
    // 0x20a92c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20a930:
    // 0x20a930: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x20a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_20a934:
    // 0x20a934: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a938:
    // 0x20a938: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x20a938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_20a93c:
    // 0x20a93c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a940:
    // 0x20a940: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20a940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_20a944:
    // 0x20a944: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20a948:
    // 0x20a948: 0xc0a4628  jal         func_2918A0
label_20a94c:
    if (ctx->pc == 0x20A94Cu) {
        ctx->pc = 0x20A94Cu;
            // 0x20a94c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x20A950u;
        goto label_20a950;
    }
    ctx->pc = 0x20A948u;
    SET_GPR_U32(ctx, 31, 0x20A950u);
    ctx->pc = 0x20A94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A948u;
            // 0x20a94c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A950u; }
        if (ctx->pc != 0x20A950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A950u; }
        if (ctx->pc != 0x20A950u) { return; }
    }
    ctx->pc = 0x20A950u;
label_20a950:
    // 0x20a950: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_20a954:
    // 0x20a954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a958:
    // 0x20a958: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20a95c:
    // 0x20a95c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x20a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_20a960:
    // 0x20a960: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20a964:
    // 0x20a964: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20a968:
    // 0x20a968: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_20a96c:
    // 0x20a96c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20a970:
    // 0x20a970: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20a974:
    // 0x20a974: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x20a974u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20a978:
    // 0x20a978: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20a97c:
    if (ctx->pc == 0x20A97Cu) {
        ctx->pc = 0x20A97Cu;
            // 0x20a97c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x20A980u;
        goto label_20a980;
    }
    ctx->pc = 0x20A978u;
    {
        const bool branch_taken_0x20a978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A978u;
            // 0x20a97c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a978) {
            ctx->pc = 0x20A9A8u;
            goto label_20a9a8;
        }
    }
    ctx->pc = 0x20A980u;
label_20a980:
    // 0x20a980: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20a984:
    // 0x20a984: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20a988:
    // 0x20a988: 0x2463bfa0  addiu       $v1, $v1, -0x4060
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950816));
label_20a98c:
    // 0x20a98c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20a990:
    // 0x20a990: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20a994:
    // 0x20a994: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20a994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_20a998:
    // 0x20a998: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_20a99c:
    // 0x20a99c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_20a9a0:
    // 0x20a9a0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x20a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_20a9a4:
    // 0x20a9a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20a9a8:
    // 0x20a9a8: 0x83a3008c  lb          $v1, 0x8C($sp)
    ctx->pc = 0x20a9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
label_20a9ac:
    // 0x20a9ac: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x20a9acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_20a9b0:
    // 0x20a9b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20a9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20a9b4:
    // 0x20a9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20a9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a9b8:
    // 0x20a9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a9bc:
    // 0x20a9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a9c0:
    // 0x20a9c0: 0x3e00008  jr          $ra
label_20a9c4:
    if (ctx->pc == 0x20A9C4u) {
        ctx->pc = 0x20A9C4u;
            // 0x20a9c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20A9C8u;
        goto label_20a9c8;
    }
    ctx->pc = 0x20A9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9C0u;
            // 0x20a9c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A9C8u;
label_20a9c8:
    // 0x20a9c8: 0x0  nop
    ctx->pc = 0x20a9c8u;
    // NOP
label_20a9cc:
    // 0x20a9cc: 0x0  nop
    ctx->pc = 0x20a9ccu;
    // NOP
label_20a9d0:
    // 0x20a9d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20a9d4:
    // 0x20a9d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20a9d8:
    // 0x20a9d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20a9dc:
    // 0x20a9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20a9e0:
    // 0x20a9e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a9e4:
    // 0x20a9e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a9e8:
    // 0x20a9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a9ec:
    // 0x20a9ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_20a9f0:
    // 0x20a9f0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x20a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_20a9f4:
    // 0x20a9f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20a9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20a9f8:
    // 0x20a9f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20a9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20a9fc:
    // 0x20a9fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20aa00:
    // 0x20aa00: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x20aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_20aa04:
    // 0x20aa04: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20aa04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20aa08:
    // 0x20aa08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20aa0c:
    if (ctx->pc == 0x20AA0Cu) {
        ctx->pc = 0x20AA0Cu;
            // 0x20aa0c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x20AA10u;
        goto label_20aa10;
    }
    ctx->pc = 0x20AA08u;
    {
        const bool branch_taken_0x20aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA08u;
            // 0x20aa0c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa08) {
            ctx->pc = 0x20AA38u;
            goto label_20aa38;
        }
    }
    ctx->pc = 0x20AA10u;
label_20aa10:
    // 0x20aa10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20aa14:
    // 0x20aa14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20aa18:
    // 0x20aa18: 0x2442bf90  addiu       $v0, $v0, -0x4070
    ctx->pc = 0x20aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950800));
label_20aa1c:
    // 0x20aa1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20aa20:
    // 0x20aa20: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_20aa24:
    // 0x20aa24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_20aa28:
    // 0x20aa28: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_20aa2c:
    // 0x20aa2c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x20aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_20aa30:
    // 0x20aa30: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x20aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_20aa34:
    // 0x20aa34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_20aa38:
    // 0x20aa38: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x20aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20aa3c:
    // 0x20aa3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20aa40:
    // 0x20aa40: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x20aa40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_20aa44:
    // 0x20aa44: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x20aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20aa48:
    // 0x20aa48: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x20aa48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_20aa4c:
    // 0x20aa4c: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x20aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20aa50:
    // 0x20aa50: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x20aa50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_20aa54:
    // 0x20aa54: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x20aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aa58:
    // 0x20aa58: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x20aa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_20aa5c:
    // 0x20aa5c: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x20aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20aa60:
    // 0x20aa60: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x20aa60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_20aa64:
    // 0x20aa64: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x20aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20aa68:
    // 0x20aa68: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x20aa68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_20aa6c:
    // 0x20aa6c: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x20aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20aa70:
    // 0x20aa70: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x20aa70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_20aa74:
    // 0x20aa74: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x20aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aa78:
    // 0x20aa78: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x20aa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_20aa7c:
    // 0x20aa7c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_20aa80:
    // 0x20aa80: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x20aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_20aa84:
    // 0x20aa84: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_20aa88:
    // 0x20aa88: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x20aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_20aa8c:
    // 0x20aa8c: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x20aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aa90:
    // 0x20aa90: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x20aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20aa94:
    // 0x20aa94: 0xc6420060  lwc1        $f2, 0x60($s2)
    ctx->pc = 0x20aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20aa98:
    // 0x20aa98: 0x46003241  sub.s       $f9, $f6, $f0
    ctx->pc = 0x20aa98u;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_20aa9c:
    // 0x20aa9c: 0x46013a81  sub.s       $f10, $f7, $f1
    ctx->pc = 0x20aa9cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_20aaa0:
    // 0x20aaa0: 0x460242c1  sub.s       $f11, $f8, $f2
    ctx->pc = 0x20aaa0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_20aaa4:
    // 0x20aaa4: 0xc6460034  lwc1        $f6, 0x34($s2)
    ctx->pc = 0x20aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20aaa8:
    // 0x20aaa8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x20aaa8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_20aaac:
    // 0x20aaac: 0xc6470030  lwc1        $f7, 0x30($s2)
    ctx->pc = 0x20aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20aab0:
    // 0x20aab0: 0x4606501a  mula.s      $f10, $f6
    ctx->pc = 0x20aab0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_20aab4:
    // 0x20aab4: 0xc6480038  lwc1        $f8, 0x38($s2)
    ctx->pc = 0x20aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20aab8:
    // 0x20aab8: 0x4607581e  madda.s     $f11, $f7
    ctx->pc = 0x20aab8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[7]));
label_20aabc:
    // 0x20aabc: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x20aabcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_20aac0:
    // 0x20aac0: 0x4608481c  madd.s      $f0, $f9, $f8
    ctx->pc = 0x20aac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_20aac4:
    // 0x20aac4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x20aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_20aac8:
    // 0x20aac8: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x20aac8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_20aacc:
    // 0x20aacc: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x20aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aad0:
    // 0x20aad0: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x20aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20aad4:
    // 0x20aad4: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x20aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20aad8:
    // 0x20aad8: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x20aad8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_20aadc:
    // 0x20aadc: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x20aadcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_20aae0:
    // 0x20aae0: 0x4602481c  madd.s      $f0, $f9, $f2
    ctx->pc = 0x20aae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_20aae4:
    // 0x20aae4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x20aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_20aae8:
    // 0x20aae8: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x20aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aaec:
    // 0x20aaec: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x20aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20aaf0:
    // 0x20aaf0: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x20aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20aaf4:
    // 0x20aaf4: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x20aaf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_20aaf8:
    // 0x20aaf8: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x20aaf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_20aafc:
    // 0x20aafc: 0x4602481c  madd.s      $f0, $f9, $f2
    ctx->pc = 0x20aafcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_20ab00:
    // 0x20ab00: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x20ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_20ab04:
    // 0x20ab04: 0x4606201a  mula.s      $f4, $f6
    ctx->pc = 0x20ab04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_20ab08:
    // 0x20ab08: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x20ab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_20ab0c:
    // 0x20ab0c: 0x4607281e  madda.s     $f5, $f7
    ctx->pc = 0x20ab0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
label_20ab10:
    // 0x20ab10: 0x4608181c  madd.s      $f0, $f3, $f8
    ctx->pc = 0x20ab10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_20ab14:
    // 0x20ab14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x20ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_20ab18:
    // 0x20ab18: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x20ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ab1c:
    // 0x20ab1c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x20ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ab20:
    // 0x20ab20: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x20ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ab24:
    // 0x20ab24: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20ab24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20ab28:
    // 0x20ab28: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20ab28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20ab2c:
    // 0x20ab2c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ab2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20ab30:
    // 0x20ab30: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x20ab30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_20ab34:
    // 0x20ab34: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x20ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ab38:
    // 0x20ab38: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x20ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ab3c:
    // 0x20ab3c: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x20ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ab40:
    // 0x20ab40: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20ab40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20ab44:
    // 0x20ab44: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x20ab44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_20ab48:
    // 0x20ab48: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ab48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20ab4c:
    // 0x20ab4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x20ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_20ab50:
    // 0x20ab50: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x20ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_20ab54:
    // 0x20ab54: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_20ab58:
    // 0x20ab58: 0xc0a456c  jal         func_2915B0
label_20ab5c:
    if (ctx->pc == 0x20AB5Cu) {
        ctx->pc = 0x20AB5Cu;
            // 0x20ab5c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x20AB60u;
        goto label_20ab60;
    }
    ctx->pc = 0x20AB58u;
    SET_GPR_U32(ctx, 31, 0x20AB60u);
    ctx->pc = 0x20AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB58u;
            // 0x20ab5c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB60u; }
        if (ctx->pc != 0x20AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB60u; }
        if (ctx->pc != 0x20AB60u) { return; }
    }
    ctx->pc = 0x20AB60u;
label_20ab60:
    // 0x20ab60: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x20ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20ab64:
    // 0x20ab64: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x20ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
label_20ab68:
    // 0x20ab68: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x20ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_20ab6c:
    // 0x20ab6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20ab6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ab70:
    // 0x20ab70: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_20ab74:
    // 0x20ab74: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20ab78:
    // 0x20ab78: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x20ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_20ab7c:
    // 0x20ab7c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x20ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_20ab80:
    // 0x20ab80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ab84:
    // 0x20ab84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_20ab88:
    // 0x20ab88: 0x320f809  jalr        $t9
label_20ab8c:
    if (ctx->pc == 0x20AB8Cu) {
        ctx->pc = 0x20AB8Cu;
            // 0x20ab8c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20AB90u;
        goto label_20ab90;
    }
    ctx->pc = 0x20AB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AB90u);
        ctx->pc = 0x20AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB88u;
            // 0x20ab8c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AB90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AB90u; }
            if (ctx->pc != 0x20AB90u) { return; }
        }
        }
    }
    ctx->pc = 0x20AB90u;
label_20ab90:
    // 0x20ab90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20ab94:
    // 0x20ab94: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20ab98:
    // 0x20ab98: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_20ab9c:
    // 0x20ab9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20aba0:
    // 0x20aba0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20aba4:
    // 0x20aba4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20aba8:
    // 0x20aba8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20abac:
    if (ctx->pc == 0x20ABACu) {
        ctx->pc = 0x20ABACu;
            // 0x20abac: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x20ABB0u;
        goto label_20abb0;
    }
    ctx->pc = 0x20ABA8u;
    {
        const bool branch_taken_0x20aba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABA8u;
            // 0x20abac: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aba8) {
            ctx->pc = 0x20ABD8u;
            goto label_20abd8;
        }
    }
    ctx->pc = 0x20ABB0u;
label_20abb0:
    // 0x20abb0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20abb4:
    // 0x20abb4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20abb8:
    // 0x20abb8: 0x2463bfa0  addiu       $v1, $v1, -0x4060
    ctx->pc = 0x20abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950816));
label_20abbc:
    // 0x20abbc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20abc0:
    // 0x20abc0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20abc4:
    // 0x20abc4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_20abc8:
    // 0x20abc8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_20abcc:
    // 0x20abcc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_20abd0:
    // 0x20abd0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x20abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_20abd4:
    // 0x20abd4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20abd8:
    // 0x20abd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20abdc:
    // 0x20abdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20abdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20abe0:
    // 0x20abe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20abe4:
    // 0x20abe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20abe8:
    // 0x20abe8: 0x3e00008  jr          $ra
label_20abec:
    if (ctx->pc == 0x20ABECu) {
        ctx->pc = 0x20ABECu;
            // 0x20abec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x20ABF0u;
        goto label_20abf0;
    }
    ctx->pc = 0x20ABE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABE8u;
            // 0x20abec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20ABF0u;
label_20abf0:
    // 0x20abf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20abf4:
    // 0x20abf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20abf8:
    // 0x20abf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20abfc:
    // 0x20abfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ac00:
    // 0x20ac00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ac04:
    // 0x20ac04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ac08:
    // 0x20ac08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20ac08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ac0c:
    // 0x20ac0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20ac0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ac10:
    // 0x20ac10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ac14:
    // 0x20ac14: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20ac18:
    // 0x20ac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ac1c:
    // 0x20ac1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_20ac20:
    // 0x20ac20: 0x320f809  jalr        $t9
label_20ac24:
    if (ctx->pc == 0x20AC24u) {
        ctx->pc = 0x20AC24u;
            // 0x20ac24: 0x24a5bfa8  addiu       $a1, $a1, -0x4058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
        ctx->pc = 0x20AC28u;
        goto label_20ac28;
    }
    ctx->pc = 0x20AC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AC28u);
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC20u;
            // 0x20ac24: 0x24a5bfa8  addiu       $a1, $a1, -0x4058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AC28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AC28u; }
            if (ctx->pc != 0x20AC28u) { return; }
        }
        }
    }
    ctx->pc = 0x20AC28u;
label_20ac28:
    // 0x20ac28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ac2c:
    // 0x20ac2c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20ac30:
    // 0x20ac30: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x20ac30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20ac34:
    // 0x20ac34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ac38:
    // 0x20ac38: 0x24a5bfb8  addiu       $a1, $a1, -0x4048
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950840));
label_20ac3c:
    // 0x20ac3c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_20ac40:
    // 0x20ac40: 0x320f809  jalr        $t9
label_20ac44:
    if (ctx->pc == 0x20AC44u) {
        ctx->pc = 0x20AC44u;
            // 0x20ac44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AC48u;
        goto label_20ac48;
    }
    ctx->pc = 0x20AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AC48u);
        ctx->pc = 0x20AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC40u;
            // 0x20ac44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AC48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AC48u; }
            if (ctx->pc != 0x20AC48u) { return; }
        }
        }
    }
    ctx->pc = 0x20AC48u;
label_20ac48:
    // 0x20ac48: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ac4c:
    // 0x20ac4c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20ac4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20ac50:
    // 0x20ac50: 0x320f809  jalr        $t9
label_20ac54:
    if (ctx->pc == 0x20AC54u) {
        ctx->pc = 0x20AC54u;
            // 0x20ac54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AC58u;
        goto label_20ac58;
    }
    ctx->pc = 0x20AC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AC58u);
        ctx->pc = 0x20AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC50u;
            // 0x20ac54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AC58u; }
            if (ctx->pc != 0x20AC58u) { return; }
        }
        }
    }
    ctx->pc = 0x20AC58u;
label_20ac58:
    // 0x20ac58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ac5c:
    // 0x20ac5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ac5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ac60:
    // 0x20ac60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ac60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ac64:
    // 0x20ac64: 0x3e00008  jr          $ra
label_20ac68:
    if (ctx->pc == 0x20AC68u) {
        ctx->pc = 0x20AC68u;
            // 0x20ac68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20AC6Cu;
        goto label_20ac6c;
    }
    ctx->pc = 0x20AC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC64u;
            // 0x20ac68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AC6Cu;
label_20ac6c:
    // 0x20ac6c: 0x0  nop
    ctx->pc = 0x20ac6cu;
    // NOP
label_20ac70:
    // 0x20ac70: 0x3e00008  jr          $ra
label_20ac74:
    if (ctx->pc == 0x20AC74u) {
        ctx->pc = 0x20AC74u;
            // 0x20ac74: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x20AC78u;
        goto label_20ac78;
    }
    ctx->pc = 0x20AC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC70u;
            // 0x20ac74: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AC78u;
label_20ac78:
    // 0x20ac78: 0x0  nop
    ctx->pc = 0x20ac78u;
    // NOP
label_20ac7c:
    // 0x20ac7c: 0x0  nop
    ctx->pc = 0x20ac7cu;
    // NOP
label_20ac80:
    // 0x20ac80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20ac84:
    // 0x20ac84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20ac88:
    // 0x20ac88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ac8c:
    // 0x20ac8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ac90:
    // 0x20ac90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ac90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ac94:
    // 0x20ac94: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_20ac98:
    if (ctx->pc == 0x20AC98u) {
        ctx->pc = 0x20AC98u;
            // 0x20ac98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AC9Cu;
        goto label_20ac9c;
    }
    ctx->pc = 0x20AC94u;
    {
        const bool branch_taken_0x20ac94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC94u;
            // 0x20ac98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac94) {
            ctx->pc = 0x20AD74u;
            goto label_20ad74;
        }
    }
    ctx->pc = 0x20AC9Cu;
label_20ac9c:
    // 0x20ac9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20aca0:
    // 0x20aca0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20aca4:
    // 0x20aca4: 0x2463e5d0  addiu       $v1, $v1, -0x1A30
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960592));
label_20aca8:
    // 0x20aca8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_20acac:
    if (ctx->pc == 0x20ACACu) {
        ctx->pc = 0x20ACACu;
            // 0x20acac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x20ACB0u;
        goto label_20acb0;
    }
    ctx->pc = 0x20ACA8u;
    {
        const bool branch_taken_0x20aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACA8u;
            // 0x20acac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca8) {
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20ACB0u;
label_20acb0:
    // 0x20acb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20acb4:
    // 0x20acb4: 0x2442e3a0  addiu       $v0, $v0, -0x1C60
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960032));
label_20acb8:
    // 0x20acb8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x20acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_20acbc:
    // 0x20acbc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_20acc0:
    // 0x20acc0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x20acc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_20acc4:
    // 0x20acc4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_20acc8:
    if (ctx->pc == 0x20ACC8u) {
        ctx->pc = 0x20ACC8u;
            // 0x20acc8: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x20ACCCu;
        goto label_20accc;
    }
    ctx->pc = 0x20ACC4u;
    {
        const bool branch_taken_0x20acc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20acc4) {
            ctx->pc = 0x20ACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACC4u;
            // 0x20acc8: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AD04u;
            goto label_20ad04;
        }
    }
    ctx->pc = 0x20ACCCu;
label_20accc:
    // 0x20accc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_20acd0:
    // 0x20acd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20acd4:
    // 0x20acd4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20acd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_20acd8:
    // 0x20acd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_20acdc:
    // 0x20acdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20acdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20ace0:
    // 0x20ace0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20ace4:
    if (ctx->pc == 0x20ACE4u) {
        ctx->pc = 0x20ACE8u;
        goto label_20ace8;
    }
    ctx->pc = 0x20ACE0u;
    {
        const bool branch_taken_0x20ace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ace0) {
            ctx->pc = 0x20AD00u;
            goto label_20ad00;
        }
    }
    ctx->pc = 0x20ACE8u;
label_20ace8:
    // 0x20ace8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_20acec:
    if (ctx->pc == 0x20ACECu) {
        ctx->pc = 0x20ACF0u;
        goto label_20acf0;
    }
    ctx->pc = 0x20ACE8u;
    {
        const bool branch_taken_0x20ace8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ace8) {
            ctx->pc = 0x20AD00u;
            goto label_20ad00;
        }
    }
    ctx->pc = 0x20ACF0u;
label_20acf0:
    // 0x20acf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20acf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20acf4:
    // 0x20acf4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x20acf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_20acf8:
    // 0x20acf8: 0x320f809  jalr        $t9
label_20acfc:
    if (ctx->pc == 0x20ACFCu) {
        ctx->pc = 0x20ACFCu;
            // 0x20acfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AD00u;
        goto label_20ad00;
    }
    ctx->pc = 0x20ACF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AD00u);
        ctx->pc = 0x20ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACF8u;
            // 0x20acfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AD00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AD00u; }
            if (ctx->pc != 0x20AD00u) { return; }
        }
        }
    }
    ctx->pc = 0x20AD00u;
label_20ad00:
    // 0x20ad00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20ad04:
    // 0x20ad04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20ad08:
    if (ctx->pc == 0x20AD08u) {
        ctx->pc = 0x20AD0Cu;
        goto label_20ad0c;
    }
    ctx->pc = 0x20AD04u;
    {
        const bool branch_taken_0x20ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad04) {
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20AD0Cu;
label_20ad0c:
    // 0x20ad0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20ad10:
    // 0x20ad10: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_20ad14:
    // 0x20ad14: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x20ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_20ad18:
    // 0x20ad18: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_20ad1c:
    if (ctx->pc == 0x20AD1Cu) {
        ctx->pc = 0x20AD1Cu;
            // 0x20ad1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x20AD20u;
        goto label_20ad20;
    }
    ctx->pc = 0x20AD18u;
    {
        const bool branch_taken_0x20ad18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad18) {
            ctx->pc = 0x20AD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD18u;
            // 0x20ad1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AD50u;
            goto label_20ad50;
        }
    }
    ctx->pc = 0x20AD20u;
label_20ad20:
    // 0x20ad20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20ad24:
    // 0x20ad24: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_20ad28:
    // 0x20ad28: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_20ad2c:
    if (ctx->pc == 0x20AD2Cu) {
        ctx->pc = 0x20AD2Cu;
            // 0x20ad2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20AD30u;
        goto label_20ad30;
    }
    ctx->pc = 0x20AD28u;
    {
        const bool branch_taken_0x20ad28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD28u;
            // 0x20ad2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad28) {
            ctx->pc = 0x20AD4Cu;
            goto label_20ad4c;
        }
    }
    ctx->pc = 0x20AD30u;
label_20ad30:
    // 0x20ad30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20ad34:
    // 0x20ad34: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_20ad38:
    // 0x20ad38: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_20ad3c:
    if (ctx->pc == 0x20AD3Cu) {
        ctx->pc = 0x20AD3Cu;
            // 0x20ad3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20AD40u;
        goto label_20ad40;
    }
    ctx->pc = 0x20AD38u;
    {
        const bool branch_taken_0x20ad38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD38u;
            // 0x20ad3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad38) {
            ctx->pc = 0x20AD4Cu;
            goto label_20ad4c;
        }
    }
    ctx->pc = 0x20AD40u;
label_20ad40:
    // 0x20ad40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20ad44:
    // 0x20ad44: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20ad48:
    // 0x20ad48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20ad4c:
    // 0x20ad4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x20ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_20ad50:
    // 0x20ad50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20ad50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20ad54:
    // 0x20ad54: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_20ad58:
    if (ctx->pc == 0x20AD58u) {
        ctx->pc = 0x20AD58u;
            // 0x20ad58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AD5Cu;
        goto label_20ad5c;
    }
    ctx->pc = 0x20AD54u;
    {
        const bool branch_taken_0x20ad54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20ad54) {
            ctx->pc = 0x20AD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD54u;
            // 0x20ad58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AD78u;
            goto label_20ad78;
        }
    }
    ctx->pc = 0x20AD5Cu;
label_20ad5c:
    // 0x20ad5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20ad60:
    // 0x20ad60: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x20ad60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_20ad64:
    // 0x20ad64: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20ad68:
    // 0x20ad68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ad68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ad6c:
    // 0x20ad6c: 0xc0a7ab4  jal         func_29EAD0
label_20ad70:
    if (ctx->pc == 0x20AD70u) {
        ctx->pc = 0x20AD70u;
            // 0x20ad70: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x20AD74u;
        goto label_20ad74;
    }
    ctx->pc = 0x20AD6Cu;
    SET_GPR_U32(ctx, 31, 0x20AD74u);
    ctx->pc = 0x20AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD6Cu;
            // 0x20ad70: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD74u; }
        if (ctx->pc != 0x20AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD74u; }
        if (ctx->pc != 0x20AD74u) { return; }
    }
    ctx->pc = 0x20AD74u;
label_20ad74:
    // 0x20ad74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20ad74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ad78:
    // 0x20ad78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ad78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ad7c:
    // 0x20ad7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ad7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ad80:
    // 0x20ad80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ad80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ad84:
    // 0x20ad84: 0x3e00008  jr          $ra
label_20ad88:
    if (ctx->pc == 0x20AD88u) {
        ctx->pc = 0x20AD88u;
            // 0x20ad88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20AD8Cu;
        goto label_20ad8c;
    }
    ctx->pc = 0x20AD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD84u;
            // 0x20ad88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AD8Cu;
label_20ad8c:
    // 0x20ad8c: 0x0  nop
    ctx->pc = 0x20ad8cu;
    // NOP
label_20ad90:
    // 0x20ad90: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x20ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ad94:
    // 0x20ad94: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20ad98:
    // 0x20ad98: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x20ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ad9c:
    // 0x20ad9c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20ad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20ada0:
    // 0x20ada0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x20ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ada4:
    // 0x20ada4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20ada8:
    // 0x20ada8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x20ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20adac:
    // 0x20adac: 0x3e00008  jr          $ra
label_20adb0:
    if (ctx->pc == 0x20ADB0u) {
        ctx->pc = 0x20ADB0u;
            // 0x20adb0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->pc = 0x20ADB4u;
        goto label_20adb4;
    }
    ctx->pc = 0x20ADACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADACu;
            // 0x20adb0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20ADB4u;
label_20adb4:
    // 0x20adb4: 0x0  nop
    ctx->pc = 0x20adb4u;
    // NOP
label_20adb8:
    // 0x20adb8: 0x0  nop
    ctx->pc = 0x20adb8u;
    // NOP
label_20adbc:
    // 0x20adbc: 0x0  nop
    ctx->pc = 0x20adbcu;
    // NOP
label_20adc0:
    // 0x20adc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20adc4:
    // 0x20adc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20adc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20adc8:
    // 0x20adc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20adcc:
    // 0x20adcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20add0:
    // 0x20add0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20add4:
    // 0x20add4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20add4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20add8:
    // 0x20add8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20addc:
    // 0x20addc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x20addcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20ade0:
    // 0x20ade0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ade4:
    // 0x20ade4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_20ade8:
    // 0x20ade8: 0x320f809  jalr        $t9
label_20adec:
    if (ctx->pc == 0x20ADECu) {
        ctx->pc = 0x20ADECu;
            // 0x20adec: 0x24a5bfe8  addiu       $a1, $a1, -0x4018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950888));
        ctx->pc = 0x20ADF0u;
        goto label_20adf0;
    }
    ctx->pc = 0x20ADE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20ADF0u);
        ctx->pc = 0x20ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADE8u;
            // 0x20adec: 0x24a5bfe8  addiu       $a1, $a1, -0x4018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950888));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20ADF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20ADF0u; }
            if (ctx->pc != 0x20ADF0u) { return; }
        }
        }
    }
    ctx->pc = 0x20ADF0u;
label_20adf0:
    // 0x20adf0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20adf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20adf4:
    // 0x20adf4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_20adf8:
    // 0x20adf8: 0x320f809  jalr        $t9
label_20adfc:
    if (ctx->pc == 0x20ADFCu) {
        ctx->pc = 0x20ADFCu;
            // 0x20adfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE00u;
        goto label_20ae00;
    }
    ctx->pc = 0x20ADF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20AE00u);
        ctx->pc = 0x20ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADF8u;
            // 0x20adfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20AE00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20AE00u; }
            if (ctx->pc != 0x20AE00u) { return; }
        }
        }
    }
    ctx->pc = 0x20AE00u;
label_20ae00:
    // 0x20ae00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ae04:
    // 0x20ae04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ae04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ae08:
    // 0x20ae08: 0x3e00008  jr          $ra
label_20ae0c:
    if (ctx->pc == 0x20AE0Cu) {
        ctx->pc = 0x20AE0Cu;
            // 0x20ae0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20AE10u;
        goto label_20ae10;
    }
    ctx->pc = 0x20AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE08u;
            // 0x20ae0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AE10u;
label_20ae10:
    // 0x20ae10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20ae14:
    // 0x20ae14: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x20ae14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20ae18:
    // 0x20ae18: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x20ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_20ae1c:
    // 0x20ae1c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x20ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ae20:
    // 0x20ae20: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x20ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20ae24:
    // 0x20ae24: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x20ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ae28:
    // 0x20ae28: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x20ae28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_20ae2c:
    // 0x20ae2c: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x20ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20ae30:
    // 0x20ae30: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x20ae30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_20ae34:
    // 0x20ae34: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x20ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ae38:
    // 0x20ae38: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x20ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20ae3c:
    // 0x20ae3c: 0xc4840038  lwc1        $f4, 0x38($a0)
    ctx->pc = 0x20ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20ae40:
    // 0x20ae40: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x20ae40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_20ae44:
    // 0x20ae44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20ae48:
    // 0x20ae48: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x20ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ae4c:
    // 0x20ae4c: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x20ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ae50:
    // 0x20ae50: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x20ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ae54:
    // 0x20ae54: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x20ae54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_20ae58:
    // 0x20ae58: 0x4603381e  madda.s     $f7, $f3
    ctx->pc = 0x20ae58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_20ae5c:
    // 0x20ae5c: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x20ae5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_20ae60:
    // 0x20ae60: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x20ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ae64:
    // 0x20ae64: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x20ae64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20ae68:
    // 0x20ae68: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x20ae68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_20ae6c:
    // 0x20ae6c: 0x4601381e  madda.s     $f7, $f1
    ctx->pc = 0x20ae6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_20ae70:
    // 0x20ae70: 0x4602285c  madd.s      $f1, $f5, $f2
    ctx->pc = 0x20ae70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_20ae74:
    // 0x20ae74: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x20ae74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ae78:
    // 0x20ae78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20ae7c:
    if (ctx->pc == 0x20AE7Cu) {
        ctx->pc = 0x20AE7Cu;
            // 0x20ae7c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x20AE80u;
        goto label_20ae80;
    }
    ctx->pc = 0x20AE78u;
    {
        const bool branch_taken_0x20ae78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE78u;
            // 0x20ae7c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae78) {
            ctx->pc = 0x20AE88u;
            goto label_20ae88;
        }
    }
    ctx->pc = 0x20AE80u;
label_20ae80:
    // 0x20ae80: 0x10000003  b           . + 4 + (0x3 << 2)
label_20ae84:
    if (ctx->pc == 0x20AE84u) {
        ctx->pc = 0x20AE84u;
            // 0x20ae84: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20AE88u;
        goto label_20ae88;
    }
    ctx->pc = 0x20AE80u;
    {
        const bool branch_taken_0x20ae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE80u;
            // 0x20ae84: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae80) {
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AE88u;
label_20ae88:
    // 0x20ae88: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x20ae88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_20ae8c:
    // 0x20ae8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ae8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ae90:
    // 0x20ae90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ae94:
    // 0x20ae94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20ae94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ae98:
    // 0x20ae98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_20ae9c:
    if (ctx->pc == 0x20AE9Cu) {
        ctx->pc = 0x20AEA0u;
        goto label_20aea0;
    }
    ctx->pc = 0x20AE98u;
    {
        const bool branch_taken_0x20ae98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ae98) {
            ctx->pc = 0x20AEA4u;
            goto label_20aea4;
        }
    }
    ctx->pc = 0x20AEA0u;
label_20aea0:
    // 0x20aea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20aea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aea4:
    // 0x20aea4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_20aea8:
    // 0x20aea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20aeac:
    // 0x20aeac: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x20aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aeb0:
    // 0x20aeb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20aeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20aeb4:
    // 0x20aeb4: 0x0  nop
    ctx->pc = 0x20aeb4u;
    // NOP
label_20aeb8:
    // 0x20aeb8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x20aeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_20aebc:
    // 0x20aebc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x20aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aec0:
    // 0x20aec0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_20aec4:
    // 0x20aec4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aec8:
    // 0x20aec8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x20aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_20aecc:
    // 0x20aecc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x20aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aed0:
    // 0x20aed0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x20aed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_20aed4:
    // 0x20aed4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x20aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20aed8:
    // 0x20aed8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x20aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aedc:
    // 0x20aedc: 0xc4860050  lwc1        $f6, 0x50($a0)
    ctx->pc = 0x20aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20aee0:
    // 0x20aee0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x20aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20aee4:
    // 0x20aee4: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x20aee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20aee8:
    // 0x20aee8: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x20aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20aeec:
    // 0x20aeec: 0xc4840058  lwc1        $f4, 0x58($a0)
    ctx->pc = 0x20aeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20aef0:
    // 0x20aef0: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x20aef0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_20aef4:
    // 0x20aef4: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x20aef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_20aef8:
    // 0x20aef8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20aef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20aefc:
    // 0x20aefc: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_20af00:
    if (ctx->pc == 0x20AF00u) {
        ctx->pc = 0x20AF00u;
            // 0x20af00: 0xacc7000c  sw          $a3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
        ctx->pc = 0x20AF04u;
        goto label_20af04;
    }
    ctx->pc = 0x20AEFCu;
    {
        const bool branch_taken_0x20aefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aefc) {
            ctx->pc = 0x20AF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20AEFCu;
            // 0x20af00: 0xacc7000c  sw          $a3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20AF48u;
            goto label_20af48;
        }
    }
    ctx->pc = 0x20AF04u;
label_20af04:
    // 0x20af04: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20af08:
    // 0x20af08: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x20af08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_20af0c:
    // 0x20af0c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x20af0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_20af10:
    // 0x20af10: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x20af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_20af14:
    // 0x20af14: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x20af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20af18:
    // 0x20af18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x20af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20af1c:
    // 0x20af1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20af1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20af20:
    // 0x20af20: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_20af24:
    // 0x20af24: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x20af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20af28:
    // 0x20af28: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20af2c:
    // 0x20af2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20af2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20af30:
    // 0x20af30: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x20af30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_20af34:
    // 0x20af34: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x20af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20af38:
    // 0x20af38: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x20af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20af3c:
    // 0x20af3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20af3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20af40:
    // 0x20af40: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x20af40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_20af44:
    // 0x20af44: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x20af44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_20af48:
    // 0x20af48: 0x3e00008  jr          $ra
label_20af4c:
    if (ctx->pc == 0x20AF4Cu) {
        ctx->pc = 0x20AF4Cu;
            // 0x20af4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x20AF50u;
        goto label_20af50;
    }
    ctx->pc = 0x20AF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF48u;
            // 0x20af4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AF50u;
label_20af50:
    // 0x20af50: 0x24caffff  addiu       $t2, $a2, -0x1
    ctx->pc = 0x20af50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_20af54:
    // 0x20af54: 0x5400034  bltz        $t2, . + 4 + (0x34 << 2)
label_20af58:
    if (ctx->pc == 0x20AF58u) {
        ctx->pc = 0x20AF5Cu;
        goto label_20af5c;
    }
    ctx->pc = 0x20AF54u;
    {
        const bool branch_taken_0x20af54 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x20af54) {
            ctx->pc = 0x20B028u;
            goto label_20b028;
        }
    }
    ctx->pc = 0x20AF5Cu;
label_20af5c:
    // 0x20af5c: 0x5400032  bltz        $t2, . + 4 + (0x32 << 2)
label_20af60:
    if (ctx->pc == 0x20AF60u) {
        ctx->pc = 0x20AF60u;
            // 0x20af60: 0x24890020  addiu       $t1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x20AF64u;
        goto label_20af64;
    }
    ctx->pc = 0x20AF5Cu;
    {
        const bool branch_taken_0x20af5c = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF5Cu;
            // 0x20af60: 0x24890020  addiu       $t1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af5c) {
            ctx->pc = 0x20B028u;
            goto label_20b028;
        }
    }
    ctx->pc = 0x20AF64u;
label_20af64:
    // 0x20af64: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_20af68:
    // 0x20af68: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_20af6c:
    // 0x20af6c: 0x2508c000  addiu       $t0, $t0, -0x4000
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950912));
label_20af70:
    // 0x20af70: 0x24c6c020  addiu       $a2, $a2, -0x3FE0
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950944));
label_20af74:
    // 0x20af74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20af74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20af78:
    // 0x20af78: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20af78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20af7c:
    // 0x20af7c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x20af7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_20af80:
    // 0x20af80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20af84:
    // 0x20af84: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_20af88:
    // 0x20af88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20af88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20af8c:
    // 0x20af8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20af90:
    // 0x20af90: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x20af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_20af94:
    // 0x20af94: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x20af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20af98:
    // 0x20af98: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20af9c:
    // 0x20af9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x20af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20afa0:
    // 0x20afa0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20afa4:
    // 0x20afa4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20afa8:
    // 0x20afa8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20afa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20afac:
    // 0x20afac: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x20afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20afb0:
    // 0x20afb0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20afb4:
    // 0x20afb4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20afb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20afb8:
    // 0x20afb8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x20afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20afbc:
    // 0x20afbc: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x20afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20afc0:
    // 0x20afc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20afc4:
    // 0x20afc4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20afc8:
    // 0x20afc8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x20afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20afcc:
    // 0x20afcc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x20afccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20afd0:
    // 0x20afd0: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x20afd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_20afd4:
    // 0x20afd4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20afd8:
    // 0x20afd8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x20afd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20afdc:
    // 0x20afdc: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x20afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20afe0:
    // 0x20afe0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x20afe0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20afe4:
    // 0x20afe4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x20afe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_20afe8:
    // 0x20afe8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20afe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20afec:
    // 0x20afec: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20aff0:
    // 0x20aff0: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x20aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20aff4:
    // 0x20aff4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x20aff4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20aff8:
    // 0x20aff8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x20aff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_20affc:
    // 0x20affc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20b000:
    // 0x20b000: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x20b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b004:
    // 0x20b004: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x20b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b008:
    // 0x20b008: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x20b008u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20b00c:
    // 0x20b00c: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x20b00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_20b010:
    // 0x20b010: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20b014:
    // 0x20b014: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x20b014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20b018:
    // 0x20b018: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x20b018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_20b01c:
    // 0x20b01c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x20b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_20b020:
    // 0x20b020: 0x541ffd5  bgez        $t2, . + 4 + (-0x2B << 2)
label_20b024:
    if (ctx->pc == 0x20B024u) {
        ctx->pc = 0x20B024u;
            // 0x20b024: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x20B028u;
        goto label_20b028;
    }
    ctx->pc = 0x20B020u;
    {
        const bool branch_taken_0x20b020 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x20B024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B020u;
            // 0x20b024: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b020) {
            ctx->pc = 0x20AF78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20af78;
        }
    }
    ctx->pc = 0x20B028u;
label_20b028:
    // 0x20b028: 0x3e00008  jr          $ra
label_20b02c:
    if (ctx->pc == 0x20B02Cu) {
        ctx->pc = 0x20B030u;
        goto label_20b030;
    }
    ctx->pc = 0x20B028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B030u;
label_20b030:
    // 0x20b030: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x20b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b034:
    // 0x20b034: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
label_20b038:
    // 0x20b038: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x20b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b03c:
    // 0x20b03c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x20b03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_20b040:
    // 0x20b040: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20b040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20b044:
    // 0x20b044: 0x0  nop
    ctx->pc = 0x20b044u;
    // NOP
label_20b048:
    // 0x20b048: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20b048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20b04c:
    // 0x20b04c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20b050:
    // 0x20b050: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x20b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b054:
    // 0x20b054: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x20b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b058:
    // 0x20b058: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20b058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20b05c:
    // 0x20b05c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20b060:
    // 0x20b060: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x20b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b064:
    // 0x20b064: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x20b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b068:
    // 0x20b068: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20b068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20b06c:
    // 0x20b06c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20b06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20b070:
    // 0x20b070: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x20b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b074:
    // 0x20b074: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x20b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b078:
    // 0x20b078: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20b078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20b07c:
    // 0x20b07c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x20b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_20b080:
    // 0x20b080: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x20b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b084:
    // 0x20b084: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20b084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b088:
    // 0x20b088: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20b08c:
    // 0x20b08c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20b090:
    // 0x20b090: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x20b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b094:
    // 0x20b094: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b098:
    // 0x20b098: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20b09c:
    // 0x20b09c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20b09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20b0a0:
    // 0x20b0a0: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x20b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b0a4:
    // 0x20b0a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0a8:
    // 0x20b0a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20b0ac:
    // 0x20b0ac: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20b0b0:
    // 0x20b0b0: 0xc482003c  lwc1        $f2, 0x3C($a0)
    ctx->pc = 0x20b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b0b4:
    // 0x20b0b4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x20b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0b8:
    // 0x20b0b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20b0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_20b0bc:
    // 0x20b0bc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x20b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_20b0c0:
    // 0x20b0c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0c4:
    // 0x20b0c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20b0c8:
    // 0x20b0c8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20b0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20b0cc:
    // 0x20b0cc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20b0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0d0:
    // 0x20b0d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20b0d4:
    // 0x20b0d4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20b0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20b0d8:
    // 0x20b0d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0dc:
    // 0x20b0dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20b0e0:
    // 0x20b0e0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20b0e4:
    // 0x20b0e4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x20b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0e8:
    // 0x20b0e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20b0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20b0ec:
    // 0x20b0ec: 0x3e00008  jr          $ra
label_20b0f0:
    if (ctx->pc == 0x20B0F0u) {
        ctx->pc = 0x20B0F0u;
            // 0x20b0f0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->pc = 0x20B0F4u;
        goto label_20b0f4;
    }
    ctx->pc = 0x20B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0ECu;
            // 0x20b0f0: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x0  nop
    ctx->pc = 0x20b0f4u;
    // NOP
label_20b0f8:
    // 0x20b0f8: 0x0  nop
    ctx->pc = 0x20b0f8u;
    // NOP
label_20b0fc:
    // 0x20b0fc: 0x0  nop
    ctx->pc = 0x20b0fcu;
    // NOP
label_20b100:
    // 0x20b100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_20b104:
    // 0x20b104: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x20b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_20b108:
    // 0x20b108: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20b10c:
    // 0x20b10c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20b110:
    // 0x20b110: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20b114:
    // 0x20b114: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x20b114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_20b118:
    // 0x20b118: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20b11c:
    // 0x20b11c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20b11cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b120:
    // 0x20b120: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20b124:
    // 0x20b124: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x20b124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20b128:
    // 0x20b128: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20b12c:
    // 0x20b12c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x20b12cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20b130:
    // 0x20b130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b134:
    // 0x20b134: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x20b134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20b138:
    // 0x20b138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b13c:
    // 0x20b13c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x20b13cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_20b140:
    // 0x20b140: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x20b140u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20b144:
    // 0x20b144: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20b144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20b148:
    // 0x20b148: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20b148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20b14c:
    // 0x20b14c: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x20b14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
label_20b150:
    // 0x20b150: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x20b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_20b154:
    // 0x20b154: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20b154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20b158:
    // 0x20b158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20b15c:
    if (ctx->pc == 0x20B15Cu) {
        ctx->pc = 0x20B15Cu;
            // 0x20b15c: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B160u;
        goto label_20b160;
    }
    ctx->pc = 0x20B158u;
    {
        const bool branch_taken_0x20b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B158u;
            // 0x20b15c: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b158) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B160u;
label_20b160:
    // 0x20b160: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_20b164:
    if (ctx->pc == 0x20B164u) {
        ctx->pc = 0x20B164u;
            // 0x20b164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B168u;
        goto label_20b168;
    }
    ctx->pc = 0x20B160u;
    {
        const bool branch_taken_0x20b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B160u;
            // 0x20b164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b160) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B168u;
label_20b168:
    // 0x20b168: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x20b168u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20b16c:
    // 0x20b16c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x20b16cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_20b170:
    // 0x20b170: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x20b170u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_20b174:
    // 0x20b174: 0x2508c000  addiu       $t0, $t0, -0x4000
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950912));
label_20b178:
    // 0x20b178: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_20b17c:
    // 0x20b17c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_20b180:
    // 0x20b180: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x20b180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_20b184:
    // 0x20b184: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
label_20b188:
    if (ctx->pc == 0x20B188u) {
        ctx->pc = 0x20B188u;
            // 0x20b188: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20B18Cu;
        goto label_20b18c;
    }
    ctx->pc = 0x20B184u;
    {
        const bool branch_taken_0x20b184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B184u;
            // 0x20b188: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b184) {
            ctx->pc = 0x20B204u;
            goto label_20b204;
        }
    }
    ctx->pc = 0x20B18Cu;
label_20b18c:
    // 0x20b18c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x20b18cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_20b190:
    // 0x20b190: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b194:
    // 0x20b194: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b198:
    // 0x20b198: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_20b19c:
    // 0x20b19c: 0x14e40011  bne         $a3, $a0, . + 4 + (0x11 << 2)
label_20b1a0:
    if (ctx->pc == 0x20B1A0u) {
        ctx->pc = 0x20B1A0u;
            // 0x20b1a0: 0x8c4a0000  lw          $t2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20B1A4u;
        goto label_20b1a4;
    }
    ctx->pc = 0x20B19Cu;
    {
        const bool branch_taken_0x20b19c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B19Cu;
            // 0x20b1a0: 0x8c4a0000  lw          $t2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b19c) {
            ctx->pc = 0x20B1E4u;
            goto label_20b1e4;
        }
    }
    ctx->pc = 0x20B1A4u;
label_20b1a4:
    // 0x20b1a4: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_20b1a8:
    // 0x20b1a8: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x20b1a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_20b1ac:
    // 0x20b1ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20b1b0:
    // 0x20b1b0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_20b1b4:
    if (ctx->pc == 0x20B1B4u) {
        ctx->pc = 0x20B1B8u;
        goto label_20b1b8;
    }
    ctx->pc = 0x20B1B0u;
    {
        const bool branch_taken_0x20b1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20b1b0) {
            ctx->pc = 0x20B1C0u;
            goto label_20b1c0;
        }
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_20b1bc:
    if (ctx->pc == 0x20B1BCu) {
        ctx->pc = 0x20B1BCu;
            // 0x20b1bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B1C0u;
        goto label_20b1c0;
    }
    ctx->pc = 0x20B1B8u;
    {
        const bool branch_taken_0x20b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1B8u;
            // 0x20b1bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1b8) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B1C0u;
label_20b1c0:
    // 0x20b1c0: 0x55500005  bnel        $t2, $s0, . + 4 + (0x5 << 2)
label_20b1c4:
    if (ctx->pc == 0x20B1C4u) {
        ctx->pc = 0x20B1C4u;
            // 0x20b1c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B1C8u;
        goto label_20b1c8;
    }
    ctx->pc = 0x20B1C0u;
    {
        const bool branch_taken_0x20b1c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 16));
        if (branch_taken_0x20b1c0) {
            ctx->pc = 0x20B1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1C0u;
            // 0x20b1c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B1D8u;
            goto label_20b1d8;
        }
    }
    ctx->pc = 0x20B1C8u;
label_20b1c8:
    // 0x20b1c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b1cc:
    // 0x20b1cc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_20b1d0:
    // 0x20b1d0: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b1d4:
    // 0x20b1d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b1d8:
    // 0x20b1d8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x20b1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_20b1dc:
    // 0x20b1dc: 0xa4b00000  sh          $s0, 0x0($a1)
    ctx->pc = 0x20b1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 16));
label_20b1e0:
    // 0x20b1e0: 0xa4aa0002  sh          $t2, 0x2($a1)
    ctx->pc = 0x20b1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 10));
label_20b1e4:
    // 0x20b1e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20b1e8:
    // 0x20b1e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20b1ec:
    // 0x20b1ec: 0x2442c004  addiu       $v0, $v0, -0x3FFC
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950916));
label_20b1f0:
    // 0x20b1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b1f4:
    // 0x20b1f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b1f8:
    // 0x20b1f8: 0x11420002  beq         $t2, $v0, . + 4 + (0x2 << 2)
label_20b1fc:
    if (ctx->pc == 0x20B1FCu) {
        ctx->pc = 0x20B200u;
        goto label_20b200;
    }
    ctx->pc = 0x20B1F8u;
    {
        const bool branch_taken_0x20b1f8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b1f8) {
            ctx->pc = 0x20B204u;
            goto label_20b204;
        }
    }
    ctx->pc = 0x20B200u;
label_20b200:
    // 0x20b200: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x20b200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_20b204:
    // 0x20b204: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20b208:
    // 0x20b208: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20b20c:
    // 0x20b20c: 0x2442c004  addiu       $v0, $v0, -0x3FFC
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950916));
label_20b210:
    // 0x20b210: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_20b214:
    // 0x20b214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b218:
    // 0x20b218: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20b218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b21c:
    // 0x20b21c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b220:
    // 0x20b220: 0xc637000c  lwc1        $f23, 0xC($s1)
    ctx->pc = 0x20b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_20b224:
    // 0x20b224: 0xc0a4644  jal         func_291910
label_20b228:
    if (ctx->pc == 0x20B228u) {
        ctx->pc = 0x20B228u;
            // 0x20b228: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B22Cu;
        goto label_20b22c;
    }
    ctx->pc = 0x20B224u;
    SET_GPR_U32(ctx, 31, 0x20B22Cu);
    ctx->pc = 0x20B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B224u;
            // 0x20b228: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B22Cu; }
        if (ctx->pc != 0x20B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B22Cu; }
        if (ctx->pc != 0x20B22Cu) { return; }
    }
    ctx->pc = 0x20B22Cu;
label_20b22c:
    // 0x20b22c: 0xc6a80030  lwc1        $f8, 0x30($s5)
    ctx->pc = 0x20b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20b230:
    // 0x20b230: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x20b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b234:
    // 0x20b234: 0xc6a50038  lwc1        $f5, 0x38($s5)
    ctx->pc = 0x20b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b238:
    // 0x20b238: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x20b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b23c:
    // 0x20b23c: 0x460141c1  sub.s       $f7, $f8, $f1
    ctx->pc = 0x20b23cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
label_20b240:
    // 0x20b240: 0xc6a40034  lwc1        $f4, 0x34($s5)
    ctx->pc = 0x20b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20b244:
    // 0x20b244: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x20b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b248:
    // 0x20b248: 0x460228c1  sub.s       $f3, $f5, $f2
    ctx->pc = 0x20b248u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_20b24c:
    // 0x20b24c: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x20b24cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_20b250:
    // 0x20b250: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x20b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b254:
    // 0x20b254: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x20b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b258:
    // 0x20b258: 0x46080881  sub.s       $f2, $f1, $f8
    ctx->pc = 0x20b258u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
label_20b25c:
    // 0x20b25c: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x20b25cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_20b260:
    // 0x20b260: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x20b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b264:
    // 0x20b264: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20b264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20b268:
    // 0x20b268: 0x0  nop
    ctx->pc = 0x20b268u;
    // NOP
label_20b26c:
    // 0x20b26c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x20b26cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_20b270:
    // 0x20b270: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x20b270u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_20b274:
    // 0x20b274: 0x46011d1d  msub.s      $f20, $f3, $f1
    ctx->pc = 0x20b274u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_20b278:
    // 0x20b278: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x20b278u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_20b27c:
    // 0x20b27c: 0x46003d5d  msub.s      $f21, $f7, $f0
    ctx->pc = 0x20b27cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
label_20b280:
    // 0x20b280: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x20b280u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_20b284:
    // 0x20b284: 0x4602359d  msub.s      $f22, $f6, $f2
    ctx->pc = 0x20b284u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_20b288:
    // 0x20b288: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x20b288u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_20b28c:
    // 0x20b28c: 0x4614a01e  madda.s     $f20, $f20
    ctx->pc = 0x20b28cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
label_20b290:
    // 0x20b290: 0x4616b05c  madd.s      $f1, $f22, $f22
    ctx->pc = 0x20b290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
label_20b294:
    // 0x20b294: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x20b294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b298:
    // 0x20b298: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_20b29c:
    if (ctx->pc == 0x20B29Cu) {
        ctx->pc = 0x20B29Cu;
            // 0x20b29c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x20B2A0u;
        goto label_20b2a0;
    }
    ctx->pc = 0x20B298u;
    {
        const bool branch_taken_0x20b298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b298) {
            ctx->pc = 0x20B29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B298u;
            // 0x20b29c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B2C4u;
            goto label_20b2c4;
        }
    }
    ctx->pc = 0x20B2A0u;
label_20b2a0:
    // 0x20b2a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b2a4:
    // 0x20b2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b2a8:
    // 0x20b2a8: 0x0  nop
    ctx->pc = 0x20b2a8u;
    // NOP
label_20b2ac:
    // 0x20b2ac: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x20b2acu;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
label_20b2b0:
    // 0x20b2b0: 0x0  nop
    ctx->pc = 0x20b2b0u;
    // NOP
label_20b2b4:
    // 0x20b2b4: 0x0  nop
    ctx->pc = 0x20b2b4u;
    // NOP
label_20b2b8:
    // 0x20b2b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b2bc:
    if (ctx->pc == 0x20B2BCu) {
        ctx->pc = 0x20B2C0u;
        goto label_20b2c0;
    }
    ctx->pc = 0x20B2B8u;
    {
        const bool branch_taken_0x20b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2b8) {
            ctx->pc = 0x20B2C4u;
            goto label_20b2c4;
        }
    }
    ctx->pc = 0x20B2C0u;
label_20b2c0:
    // 0x20b2c0: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x20b2c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_20b2c4:
    // 0x20b2c4: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x20b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_20b2c8:
    // 0x20b2c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_20b2cc:
    // 0x20b2cc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20b2d0:
    // 0x20b2d0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x20b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_20b2d4:
    // 0x20b2d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x20b2d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20b2d8:
    // 0x20b2d8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x20b2d8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_20b2dc:
    // 0x20b2dc: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x20b2dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_20b2e0:
    // 0x20b2e0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x20b2e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20b2e4:
    // 0x20b2e4: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x20b2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b2e8:
    // 0x20b2e8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x20b2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b2ec:
    // 0x20b2ec: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x20b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b2f0:
    // 0x20b2f0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x20b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b2f4:
    // 0x20b2f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x20b2f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20b2f8:
    // 0x20b2f8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x20b2f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_20b2fc:
    // 0x20b2fc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x20b2fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_20b300:
    // 0x20b300: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x20b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20b304:
    // 0x20b304: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x20b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b308:
    // 0x20b308: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x20b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b30c:
    // 0x20b30c: 0xc463002c  lwc1        $f3, 0x2C($v1)
    ctx->pc = 0x20b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b310:
    // 0x20b310: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x20b310u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_20b314:
    // 0x20b314: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x20b314u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_20b318:
    // 0x20b318: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x20b318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_20b31c:
    // 0x20b31c: 0x4602119c  madd.s      $f6, $f2, $f2
    ctx->pc = 0x20b31cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_20b320:
    // 0x20b320: 0x46073032  c.eq.s      $f6, $f7
    ctx->pc = 0x20b320u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b324:
    // 0x20b324: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20b328:
    if (ctx->pc == 0x20B328u) {
        ctx->pc = 0x20B328u;
            // 0x20b328: 0x460328c1  sub.s       $f3, $f5, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->pc = 0x20B32Cu;
        goto label_20b32c;
    }
    ctx->pc = 0x20B324u;
    {
        const bool branch_taken_0x20b324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B324u;
            // 0x20b328: 0x460328c1  sub.s       $f3, $f5, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b324) {
            ctx->pc = 0x20B348u;
            goto label_20b348;
        }
    }
    ctx->pc = 0x20B32Cu;
label_20b32c:
    // 0x20b32c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b330:
    // 0x20b330: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x20b330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_20b334:
    // 0x20b334: 0x0  nop
    ctx->pc = 0x20b334u;
    // NOP
label_20b338:
    // 0x20b338: 0x460629d6  rsqrt.s     $f7, $f5, $f6
    ctx->pc = 0x20b338u;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[5]);
label_20b33c:
    // 0x20b33c: 0x0  nop
    ctx->pc = 0x20b33cu;
    // NOP
label_20b340:
    // 0x20b340: 0x0  nop
    ctx->pc = 0x20b340u;
    // NOP
label_20b344:
    // 0x20b344: 0x0  nop
    ctx->pc = 0x20b344u;
    // NOP
label_20b348:
    // 0x20b348: 0x96a40014  lhu         $a0, 0x14($s5)
    ctx->pc = 0x20b348u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
label_20b34c:
    // 0x20b34c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20b350:
    // 0x20b350: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20b354:
    // 0x20b354: 0x92a20016  lbu         $v0, 0x16($s5)
    ctx->pc = 0x20b354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_20b358:
    // 0x20b358: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20b358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20b35c:
    // 0x20b35c: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_20b360:
    // 0x20b360: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x20b360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_20b364:
    // 0x20b364: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x20b364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_20b368:
    // 0x20b368: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x20b368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20b36c:
    // 0x20b36c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x20b36cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_20b370:
    // 0x20b370: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x20b370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_20b374:
    // 0x20b374: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
label_20b378:
    if (ctx->pc == 0x20B378u) {
        ctx->pc = 0x20B378u;
            // 0x20b378: 0x460718c2  mul.s       $f3, $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
        ctx->pc = 0x20B37Cu;
        goto label_20b37c;
    }
    ctx->pc = 0x20B374u;
    {
        const bool branch_taken_0x20b374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B374u;
            // 0x20b378: 0x460718c2  mul.s       $f3, $f3, $f7 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b374) {
            ctx->pc = 0x20B5FCu;
            goto label_20b5fc;
        }
    }
    ctx->pc = 0x20B37Cu;
label_20b37c:
    // 0x20b37c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20b380:
    // 0x20b380: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x20b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b384:
    // 0x20b384: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b388:
    // 0x20b388: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20b38c:
    // 0x20b38c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20b390:
    // 0x20b390: 0x2463e4b0  addiu       $v1, $v1, -0x1B50
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960304));
label_20b394:
    // 0x20b394: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x20b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b398:
    // 0x20b398: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b39c:
    // 0x20b39c: 0x4603a81a  mula.s      $f21, $f3
    ctx->pc = 0x20b39cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_20b3a0:
    // 0x20b3a0: 0xc7a600c8  lwc1        $f6, 0xC8($sp)
    ctx->pc = 0x20b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20b3a4:
    // 0x20b3a4: 0x4605a01e  madda.s     $f20, $f5
    ctx->pc = 0x20b3a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[5]));
label_20b3a8:
    // 0x20b3a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20b3ac:
    if (ctx->pc == 0x20B3ACu) {
        ctx->pc = 0x20B3ACu;
            // 0x20b3ac: 0x4606b15c  madd.s      $f5, $f22, $f6 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[6]));
        ctx->pc = 0x20B3B0u;
        goto label_20b3b0;
    }
    ctx->pc = 0x20B3A8u;
    {
        const bool branch_taken_0x20b3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3A8u;
            // 0x20b3ac: 0x4606b15c  madd.s      $f5, $f22, $f6 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3a8) {
            ctx->pc = 0x20B3D4u;
            goto label_20b3d4;
        }
    }
    ctx->pc = 0x20B3B0u;
label_20b3b0:
    // 0x20b3b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20b3b4:
    // 0x20b3b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20b3b8:
    // 0x20b3b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x20b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b3bc:
    // 0x20b3bc: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x20b3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b3c0:
    // 0x20b3c0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_20b3c4:
    if (ctx->pc == 0x20B3C4u) {
        ctx->pc = 0x20B3C4u;
            // 0x20b3c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B3C8u;
        goto label_20b3c8;
    }
    ctx->pc = 0x20B3C0u;
    {
        const bool branch_taken_0x20b3c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3C0u;
            // 0x20b3c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3c0) {
            ctx->pc = 0x20B3F0u;
            goto label_20b3f0;
        }
    }
    ctx->pc = 0x20B3C8u;
label_20b3c8:
    // 0x20b3c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3cc:
    // 0x20b3cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_20b3d0:
    if (ctx->pc == 0x20B3D0u) {
        ctx->pc = 0x20B3D0u;
            // 0x20b3d0: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->pc = 0x20B3D4u;
        goto label_20b3d4;
    }
    ctx->pc = 0x20B3CCu;
    {
        const bool branch_taken_0x20b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3CCu;
            // 0x20b3d0: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3cc) {
            ctx->pc = 0x20B3F4u;
            goto label_20b3f4;
        }
    }
    ctx->pc = 0x20B3D4u;
label_20b3d4:
    // 0x20b3d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20b3d8:
    // 0x20b3d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20b3dc:
    // 0x20b3dc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x20b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b3e0:
    // 0x20b3e0: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x20b3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b3e4:
    // 0x20b3e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20b3e8:
    if (ctx->pc == 0x20B3E8u) {
        ctx->pc = 0x20B3E8u;
            // 0x20b3e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B3ECu;
        goto label_20b3ec;
    }
    ctx->pc = 0x20B3E4u;
    {
        const bool branch_taken_0x20b3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3E4u;
            // 0x20b3e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3e4) {
            ctx->pc = 0x20B3F0u;
            goto label_20b3f0;
        }
    }
    ctx->pc = 0x20B3ECu;
label_20b3ec:
    // 0x20b3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b3f0:
    // 0x20b3f0: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x20b3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_20b3f4:
    // 0x20b3f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x20b3f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_20b3f8:
    // 0x20b3f8: 0x50600113  beql        $v1, $zero, . + 4 + (0x113 << 2)
label_20b3fc:
    if (ctx->pc == 0x20B3FCu) {
        ctx->pc = 0x20B3FCu;
            // 0x20b3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B400u;
        goto label_20b400;
    }
    ctx->pc = 0x20B3F8u;
    {
        const bool branch_taken_0x20b3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3f8) {
            ctx->pc = 0x20B3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3F8u;
            // 0x20b3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B400u;
label_20b400:
    // 0x20b400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20b400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20b404:
    // 0x20b404: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_20b408:
    // 0x20b408: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x20b408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b40c:
    // 0x20b40c: 0x4616081a  mula.s      $f1, $f22
    ctx->pc = 0x20b40cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_20b410:
    // 0x20b410: 0x461510dd  msub.s      $f3, $f2, $f21
    ctx->pc = 0x20b410u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
label_20b414:
    // 0x20b414: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x20b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20b418:
    // 0x20b418: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x20b418u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_20b41c:
    // 0x20b41c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x20b41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_20b420:
    // 0x20b420: 0x0  nop
    ctx->pc = 0x20b420u;
    // NOP
label_20b424:
    // 0x20b424: 0x461430dc  madd.s      $f3, $f6, $f20
    ctx->pc = 0x20b424u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[20]));
label_20b428:
    // 0x20b428: 0x4614101a  mula.s      $f2, $f20
    ctx->pc = 0x20b428u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_20b42c:
    // 0x20b42c: 0x4616009d  msub.s      $f2, $f0, $f22
    ctx->pc = 0x20b42cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_20b430:
    // 0x20b430: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x20b430u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_20b434:
    // 0x20b434: 0x4615309c  madd.s      $f2, $f6, $f21
    ctx->pc = 0x20b434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[21]));
label_20b438:
    // 0x20b438: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x20b438u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_20b43c:
    // 0x20b43c: 0x4614081d  msub.s      $f0, $f1, $f20
    ctx->pc = 0x20b43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_20b440:
    // 0x20b440: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x20b440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b444:
    // 0x20b444: 0x4600281a  mula.s      $f5, $f0
    ctx->pc = 0x20b444u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_20b448:
    // 0x20b448: 0x4616301c  madd.s      $f0, $f6, $f22
    ctx->pc = 0x20b448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[22]));
label_20b44c:
    // 0x20b44c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x20b44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20b450:
    // 0x20b450: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_20b454:
    // 0x20b454: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x20b454u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_20b458:
    // 0x20b458: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x20b458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_20b45c:
    // 0x20b45c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x20b45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_20b460:
    // 0x20b460: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x20b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b464:
    // 0x20b464: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x20b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b468:
    // 0x20b468: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b46c:
    // 0x20b46c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20b46cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_20b470:
    // 0x20b470: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x20b470u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_20b474:
    // 0x20b474: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x20b474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_20b478:
    // 0x20b478: 0x46070832  c.eq.s      $f1, $f7
    ctx->pc = 0x20b478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b47c:
    // 0x20b47c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20b480:
    if (ctx->pc == 0x20B480u) {
        ctx->pc = 0x20B484u;
        goto label_20b484;
    }
    ctx->pc = 0x20B47Cu;
    {
        const bool branch_taken_0x20b47c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b47c) {
            ctx->pc = 0x20B4A0u;
            goto label_20b4a0;
        }
    }
    ctx->pc = 0x20B484u;
label_20b484:
    // 0x20b484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b488:
    // 0x20b488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b48c:
    // 0x20b48c: 0x0  nop
    ctx->pc = 0x20b48cu;
    // NOP
label_20b490:
    // 0x20b490: 0x460101d6  rsqrt.s     $f7, $f0, $f1
    ctx->pc = 0x20b490u;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[0]);
label_20b494:
    // 0x20b494: 0x0  nop
    ctx->pc = 0x20b494u;
    // NOP
label_20b498:
    // 0x20b498: 0x0  nop
    ctx->pc = 0x20b498u;
    // NOP
label_20b49c:
    // 0x20b49c: 0x0  nop
    ctx->pc = 0x20b49cu;
    // NOP
label_20b4a0:
    // 0x20b4a0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b4a4:
    // 0x20b4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b4a8:
    // 0x20b4a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20b4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b4ac:
    // 0x20b4ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20b4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b4b0:
    // 0x20b4b0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20b4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20b4b4:
    // 0x20b4b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20b4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b4b8:
    // 0x20b4b8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b4bc:
    // 0x20b4bc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20b4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20b4c0:
    // 0x20b4c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20b4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20b4c4:
    // 0x20b4c4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b4c8:
    // 0x20b4c8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20b4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20b4cc:
    // 0x20b4cc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_20b4d0:
    // 0x20b4d0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b4d4:
    // 0x20b4d4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x20b4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_20b4d8:
    // 0x20b4d8: 0xc0a4628  jal         func_2918A0
label_20b4dc:
    if (ctx->pc == 0x20B4DCu) {
        ctx->pc = 0x20B4DCu;
            // 0x20b4dc: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x20B4E0u;
        goto label_20b4e0;
    }
    ctx->pc = 0x20B4D8u;
    SET_GPR_U32(ctx, 31, 0x20B4E0u);
    ctx->pc = 0x20B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4D8u;
            // 0x20b4dc: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4E0u; }
        if (ctx->pc != 0x20B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4E0u; }
        if (ctx->pc != 0x20B4E0u) { return; }
    }
    ctx->pc = 0x20B4E0u;
label_20b4e0:
    // 0x20b4e0: 0x92a20017  lbu         $v0, 0x17($s5)
    ctx->pc = 0x20b4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 23)));
label_20b4e4:
    // 0x20b4e4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_20b4e8:
    if (ctx->pc == 0x20B4E8u) {
        ctx->pc = 0x20B4E8u;
            // 0x20b4e8: 0xe637000c  swc1        $f23, 0xC($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x20B4ECu;
        goto label_20b4ec;
    }
    ctx->pc = 0x20B4E4u;
    {
        const bool branch_taken_0x20b4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b4e4) {
            ctx->pc = 0x20B4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4E4u;
            // 0x20b4e8: 0xe637000c  swc1        $f23, 0xC($s1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B57Cu;
            goto label_20b57c;
        }
    }
    ctx->pc = 0x20B4ECu;
label_20b4ec:
    // 0x20b4ec: 0x92a30016  lbu         $v1, 0x16($s5)
    ctx->pc = 0x20b4ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_20b4f0:
    // 0x20b4f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_20b4f4:
    // 0x20b4f4: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x20b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
label_20b4f8:
    // 0x20b4f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20b4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b4fc:
    // 0x20b4fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20b4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20b500:
    // 0x20b500: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20b500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20b504:
    // 0x20b504: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b508:
    // 0x20b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b50c:
    // 0x20b50c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b510:
    // 0x20b510: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x20b510u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20b514:
    // 0x20b514: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x20b514u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_20b518:
    // 0x20b518: 0xc0a4608  jal         func_291820
label_20b51c:
    if (ctx->pc == 0x20B51Cu) {
        ctx->pc = 0x20B51Cu;
            // 0x20b51c: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x20B520u;
        goto label_20b520;
    }
    ctx->pc = 0x20B518u;
    SET_GPR_U32(ctx, 31, 0x20B520u);
    ctx->pc = 0x20B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B518u;
            // 0x20b51c: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x291820u;
    if (runtime->hasFunction(0x291820u)) {
        auto targetFn = runtime->lookupFunction(0x291820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B520u; }
        if (ctx->pc != 0x20B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291820_0x291820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B520u; }
        if (ctx->pc != 0x20B520u) { return; }
    }
    ctx->pc = 0x20B520u;
label_20b520:
    // 0x20b520: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x20b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b524:
    // 0x20b524: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x20b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b528:
    // 0x20b528: 0xc6a30020  lwc1        $f3, 0x20($s5)
    ctx->pc = 0x20b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b52c:
    // 0x20b52c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x20b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b530:
    // 0x20b530: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20b534:
    // 0x20b534: 0xc6a50028  lwc1        $f5, 0x28($s5)
    ctx->pc = 0x20b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b538:
    // 0x20b538: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x20b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20b53c:
    // 0x20b53c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20b53cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_20b540:
    // 0x20b540: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x20b540u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_20b544:
    // 0x20b544: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x20b544u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_20b548:
    // 0x20b548: 0x4614101e  madda.s     $f2, $f20
    ctx->pc = 0x20b548u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_20b54c:
    // 0x20b54c: 0x4616201c  madd.s      $f0, $f4, $f22
    ctx->pc = 0x20b54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[22]));
label_20b550:
    // 0x20b550: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20b550u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_20b554:
    // 0x20b554: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x20b554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b558:
    // 0x20b558: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_20b55c:
    if (ctx->pc == 0x20B55Cu) {
        ctx->pc = 0x20B55Cu;
            // 0x20b55c: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x20B560u;
        goto label_20b560;
    }
    ctx->pc = 0x20B558u;
    {
        const bool branch_taken_0x20b558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b558) {
            ctx->pc = 0x20B55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B558u;
            // 0x20b55c: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B56Cu;
            goto label_20b56c;
        }
    }
    ctx->pc = 0x20B560u;
label_20b560:
    // 0x20b560: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b564:
    if (ctx->pc == 0x20B564u) {
        ctx->pc = 0x20B564u;
            // 0x20b564: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x20B568u;
        goto label_20b568;
    }
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B560u;
            // 0x20b564: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B570u;
            goto label_20b570;
        }
    }
    ctx->pc = 0x20B568u;
label_20b568:
    // 0x20b568: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x20b568u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_20b56c:
    // 0x20b56c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x20b56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_20b570:
    // 0x20b570: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_20b574:
    if (ctx->pc == 0x20B574u) {
        ctx->pc = 0x20B574u;
            // 0x20b574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B578u;
        goto label_20b578;
    }
    ctx->pc = 0x20B570u;
    {
        const bool branch_taken_0x20b570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B570u;
            // 0x20b574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b570) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B578u;
label_20b578:
    // 0x20b578: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x20b578u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_20b57c:
    // 0x20b57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b580:
    // 0x20b580: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20b584:
    // 0x20b584: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x20b584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_20b588:
    // 0x20b588: 0x320f809  jalr        $t9
label_20b58c:
    if (ctx->pc == 0x20B58Cu) {
        ctx->pc = 0x20B58Cu;
            // 0x20b58c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20B590u;
        goto label_20b590;
    }
    ctx->pc = 0x20B588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20B590u);
        ctx->pc = 0x20B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B588u;
            // 0x20b58c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20B590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20B590u; }
            if (ctx->pc != 0x20B590u) { return; }
        }
        }
    }
    ctx->pc = 0x20B590u;
label_20b590:
    // 0x20b590: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20b594:
    // 0x20b594: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20b594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b598:
    // 0x20b598: 0xc0a45e8  jal         func_2917A0
label_20b59c:
    if (ctx->pc == 0x20B59Cu) {
        ctx->pc = 0x20B59Cu;
            // 0x20b59c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B5A0u;
        goto label_20b5a0;
    }
    ctx->pc = 0x20B598u;
    SET_GPR_U32(ctx, 31, 0x20B5A0u);
    ctx->pc = 0x20B59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B598u;
            // 0x20b59c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5A0u; }
        if (ctx->pc != 0x20B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5A0u; }
        if (ctx->pc != 0x20B5A0u) { return; }
    }
    ctx->pc = 0x20B5A0u;
label_20b5a0:
    // 0x20b5a0: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x20b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20b5a4:
    // 0x20b5a4: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x20b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b5a8:
    // 0x20b5a8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x20b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b5ac:
    // 0x20b5ac: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x20b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b5b0:
    // 0x20b5b0: 0x46032181  sub.s       $f6, $f4, $f3
    ctx->pc = 0x20b5b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_20b5b4:
    // 0x20b5b4: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x20b5b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_20b5b8:
    // 0x20b5b8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x20b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b5bc:
    // 0x20b5bc: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x20b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b5c0:
    // 0x20b5c0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b5c4:
    // 0x20b5c4: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x20b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20b5c8:
    // 0x20b5c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x20b5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20b5cc:
    // 0x20b5cc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x20b5ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20b5d0:
    // 0x20b5d0: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x20b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b5d4:
    // 0x20b5d4: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x20b5d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_20b5d8:
    // 0x20b5d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20b5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20b5dc:
    // 0x20b5dc: 0x4605301c  madd.s      $f0, $f6, $f5
    ctx->pc = 0x20b5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_20b5e0:
    // 0x20b5e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b5e4:
    // 0x20b5e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20b5e8:
    if (ctx->pc == 0x20B5E8u) {
        ctx->pc = 0x20B5E8u;
            // 0x20b5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B5ECu;
        goto label_20b5ec;
    }
    ctx->pc = 0x20B5E4u;
    {
        const bool branch_taken_0x20b5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5E4u;
            // 0x20b5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5e4) {
            ctx->pc = 0x20B5F0u;
            goto label_20b5f0;
        }
    }
    ctx->pc = 0x20B5ECu;
label_20b5ec:
    // 0x20b5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b5f0:
    // 0x20b5f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20b5f4:
    // 0x20b5f4: 0x10000094  b           . + 4 + (0x94 << 2)
label_20b5f8:
    if (ctx->pc == 0x20B5F8u) {
        ctx->pc = 0x20B5F8u;
            // 0x20b5f8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x20B5FCu;
        goto label_20b5fc;
    }
    ctx->pc = 0x20B5F4u;
    {
        const bool branch_taken_0x20b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5F4u;
            // 0x20b5f8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5f4) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B5FCu;
label_20b5fc:
    // 0x20b5fc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x20b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20b600:
    // 0x20b600: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x20b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b604:
    // 0x20b604: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x20b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20b608:
    // 0x20b608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20b60c:
    // 0x20b60c: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x20b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
label_20b610:
    // 0x20b610: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20b614:
    // 0x20b614: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b618:
    // 0x20b618: 0xc62b0000  lwc1        $f11, 0x0($s1)
    ctx->pc = 0x20b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20b61c:
    // 0x20b61c: 0x460ca81a  mula.s      $f21, $f12
    ctx->pc = 0x20b61cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
label_20b620:
    // 0x20b620: 0xc62a0008  lwc1        $f10, 0x8($s1)
    ctx->pc = 0x20b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_20b624:
    // 0x20b624: 0x460ba01e  madda.s     $f20, $f11
    ctx->pc = 0x20b624u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[11]));
label_20b628:
    // 0x20b628: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x20b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b62c:
    // 0x20b62c: 0x460ab19c  madd.s      $f6, $f22, $f10
    ctx->pc = 0x20b62cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[10]));
label_20b630:
    // 0x20b630: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x20b630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b634:
    // 0x20b634: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20b638:
    if (ctx->pc == 0x20B638u) {
        ctx->pc = 0x20B63Cu;
        goto label_20b63c;
    }
    ctx->pc = 0x20B634u;
    {
        const bool branch_taken_0x20b634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b634) {
            ctx->pc = 0x20B644u;
            goto label_20b644;
        }
    }
    ctx->pc = 0x20B63Cu;
label_20b63c:
    // 0x20b63c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_20b640:
    if (ctx->pc == 0x20B640u) {
        ctx->pc = 0x20B640u;
            // 0x20b640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B644u;
        goto label_20b644;
    }
    ctx->pc = 0x20B63Cu;
    {
        const bool branch_taken_0x20b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B63Cu;
            // 0x20b640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b63c) {
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B644u;
label_20b644:
    // 0x20b644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20b648:
    // 0x20b648: 0x2442e4b8  addiu       $v0, $v0, -0x1B48
    ctx->pc = 0x20b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960312));
label_20b64c:
    // 0x20b64c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b650:
    // 0x20b650: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x20b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b654:
    // 0x20b654: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x20b654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b658:
    // 0x20b658: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20b65c:
    if (ctx->pc == 0x20B65Cu) {
        ctx->pc = 0x20B660u;
        goto label_20b660;
    }
    ctx->pc = 0x20B658u;
    {
        const bool branch_taken_0x20b658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b658) {
            ctx->pc = 0x20B668u;
            goto label_20b668;
        }
    }
    ctx->pc = 0x20B660u;
label_20b660:
    // 0x20b660: 0x10000014  b           . + 4 + (0x14 << 2)
label_20b664:
    if (ctx->pc == 0x20B664u) {
        ctx->pc = 0x20B664u;
            // 0x20b664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B668u;
        goto label_20b668;
    }
    ctx->pc = 0x20B660u;
    {
        const bool branch_taken_0x20b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B660u;
            // 0x20b664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b660) {
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B668u;
label_20b668:
    // 0x20b668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20b66c:
    // 0x20b66c: 0x2442e4bc  addiu       $v0, $v0, -0x1B44
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960316));
label_20b670:
    // 0x20b670: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b674:
    // 0x20b674: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x20b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b678:
    // 0x20b678: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x20b678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b67c:
    // 0x20b67c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20b680:
    if (ctx->pc == 0x20B680u) {
        ctx->pc = 0x20B684u;
        goto label_20b684;
    }
    ctx->pc = 0x20B67Cu;
    {
        const bool branch_taken_0x20b67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b67c) {
            ctx->pc = 0x20B68Cu;
            goto label_20b68c;
        }
    }
    ctx->pc = 0x20B684u;
label_20b684:
    // 0x20b684: 0x1000000b  b           . + 4 + (0xB << 2)
label_20b688:
    if (ctx->pc == 0x20B688u) {
        ctx->pc = 0x20B688u;
            // 0x20b688: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B68Cu;
        goto label_20b68c;
    }
    ctx->pc = 0x20B684u;
    {
        const bool branch_taken_0x20b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B684u;
            // 0x20b688: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b684) {
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B68Cu;
label_20b68c:
    // 0x20b68c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20b690:
    // 0x20b690: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
label_20b694:
    // 0x20b694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b698:
    // 0x20b698: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x20b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20b69c:
    // 0x20b69c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x20b69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b6a0:
    // 0x20b6a0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_20b6a4:
    if (ctx->pc == 0x20B6A4u) {
        ctx->pc = 0x20B6A4u;
            // 0x20b6a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20B6A8u;
        goto label_20b6a8;
    }
    ctx->pc = 0x20B6A0u;
    {
        const bool branch_taken_0x20b6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b6a0) {
            ctx->pc = 0x20B6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6A0u;
            // 0x20b6a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B6A8u;
label_20b6a8:
    // 0x20b6a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b6ac:
    if (ctx->pc == 0x20B6ACu) {
        ctx->pc = 0x20B6ACu;
            // 0x20b6ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x20B6B0u;
        goto label_20b6b0;
    }
    ctx->pc = 0x20B6A8u;
    {
        const bool branch_taken_0x20b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6A8u;
            // 0x20b6ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6a8) {
            ctx->pc = 0x20B6B4u;
            goto label_20b6b4;
        }
    }
    ctx->pc = 0x20B6B0u;
label_20b6b0:
    // 0x20b6b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b6b4:
    // 0x20b6b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b6b8:
    // 0x20b6b8: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
label_20b6bc:
    if (ctx->pc == 0x20B6BCu) {
        ctx->pc = 0x20B6BCu;
            // 0x20b6bc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x20B6C0u;
        goto label_20b6c0;
    }
    ctx->pc = 0x20B6B8u;
    {
        const bool branch_taken_0x20b6b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b6b8) {
            ctx->pc = 0x20B6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6B8u;
            // 0x20b6bc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B6ECu;
            goto label_20b6ec;
        }
    }
    ctx->pc = 0x20B6C0u;
label_20b6c0:
    // 0x20b6c0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_20b6c4:
    if (ctx->pc == 0x20B6C4u) {
        ctx->pc = 0x20B6C8u;
        goto label_20b6c8;
    }
    ctx->pc = 0x20B6C0u;
    {
        const bool branch_taken_0x20b6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6c0) {
            ctx->pc = 0x20B6E8u;
            goto label_20b6e8;
        }
    }
    ctx->pc = 0x20B6C8u;
label_20b6c8:
    // 0x20b6c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b6cc:
    // 0x20b6cc: 0x5082005e  beql        $a0, $v0, . + 4 + (0x5E << 2)
label_20b6d0:
    if (ctx->pc == 0x20B6D0u) {
        ctx->pc = 0x20B6D0u;
            // 0x20b6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B6D4u;
        goto label_20b6d4;
    }
    ctx->pc = 0x20B6CCu;
    {
        const bool branch_taken_0x20b6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b6cc) {
            ctx->pc = 0x20B6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6CCu;
            // 0x20b6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B6D4u;
label_20b6d4:
    // 0x20b6d4: 0x1000005b  b           . + 4 + (0x5B << 2)
label_20b6d8:
    if (ctx->pc == 0x20B6D8u) {
        ctx->pc = 0x20B6DCu;
        goto label_20b6dc;
    }
    ctx->pc = 0x20B6D4u;
    {
        const bool branch_taken_0x20b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6d4) {
            ctx->pc = 0x20B844u;
            goto label_20b844;
        }
    }
    ctx->pc = 0x20B6DCu;
label_20b6dc:
    // 0x20b6dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b6e0:
    // 0x20b6e0: 0x10000059  b           . + 4 + (0x59 << 2)
label_20b6e4:
    if (ctx->pc == 0x20B6E4u) {
        ctx->pc = 0x20B6E8u;
        goto label_20b6e8;
    }
    ctx->pc = 0x20B6E0u;
    {
        const bool branch_taken_0x20b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6e0) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B6E8u;
label_20b6e8:
    // 0x20b6e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b6ec:
    // 0x20b6ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20b6f0:
    // 0x20b6f0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x20b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20b6f4:
    // 0x20b6f4: 0x4616081a  mula.s      $f1, $f22
    ctx->pc = 0x20b6f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_20b6f8:
    // 0x20b6f8: 0x4615115d  msub.s      $f5, $f2, $f21
    ctx->pc = 0x20b6f8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
label_20b6fc:
    // 0x20b6fc: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x20b6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20b700:
    // 0x20b700: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x20b700u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_20b704:
    // 0x20b704: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x20b704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_20b708:
    // 0x20b708: 0x46143a1c  madd.s      $f8, $f7, $f20
    ctx->pc = 0x20b708u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[20]));
label_20b70c:
    // 0x20b70c: 0x4614101a  mula.s      $f2, $f20
    ctx->pc = 0x20b70cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_20b710:
    // 0x20b710: 0x4616015d  msub.s      $f5, $f0, $f22
    ctx->pc = 0x20b710u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_20b714:
    // 0x20b714: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x20b714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_20b718:
    // 0x20b718: 0x46153b5c  madd.s      $f13, $f7, $f21
    ctx->pc = 0x20b718u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[21]));
label_20b71c:
    // 0x20b71c: 0x4615001a  mula.s      $f0, $f21
    ctx->pc = 0x20b71cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_20b720:
    // 0x20b720: 0x4614095d  msub.s      $f5, $f1, $f20
    ctx->pc = 0x20b720u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_20b724:
    // 0x20b724: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x20b724u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_20b728:
    // 0x20b728: 0x46163b9c  madd.s      $f14, $f7, $f22
    ctx->pc = 0x20b728u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[22]));
label_20b72c:
    // 0x20b72c: 0x460f301a  mula.s      $f6, $f15
    ctx->pc = 0x20b72cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
label_20b730:
    // 0x20b730: 0x4604399c  madd.s      $f6, $f7, $f4
    ctx->pc = 0x20b730u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_20b734:
    // 0x20b734: 0x460d681a  mula.s      $f13, $f13
    ctx->pc = 0x20b734u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_20b738:
    // 0x20b738: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x20b738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_20b73c:
    // 0x20b73c: 0x460e715c  madd.s      $f5, $f14, $f14
    ctx->pc = 0x20b73cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
label_20b740:
    // 0x20b740: 0x460f2832  c.eq.s      $f5, $f15
    ctx->pc = 0x20b740u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b744:
    // 0x20b744: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20b748:
    if (ctx->pc == 0x20B748u) {
        ctx->pc = 0x20B74Cu;
        goto label_20b74c;
    }
    ctx->pc = 0x20B744u;
    {
        const bool branch_taken_0x20b744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b744) {
            ctx->pc = 0x20B768u;
            goto label_20b768;
        }
    }
    ctx->pc = 0x20B74Cu;
label_20b74c:
    // 0x20b74c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b750:
    // 0x20b750: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x20b750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20b754:
    // 0x20b754: 0x0  nop
    ctx->pc = 0x20b754u;
    // NOP
label_20b758:
    // 0x20b758: 0x460523d6  rsqrt.s     $f15, $f4, $f5
    ctx->pc = 0x20b758u;
    ctx->f[15] = 1.0f / sqrtf(ctx->f[4]);
label_20b75c:
    // 0x20b75c: 0x0  nop
    ctx->pc = 0x20b75cu;
    // NOP
label_20b760:
    // 0x20b760: 0x0  nop
    ctx->pc = 0x20b760u;
    // NOP
label_20b764:
    // 0x20b764: 0x0  nop
    ctx->pc = 0x20b764u;
    // NOP
label_20b768:
    // 0x20b768: 0x460f4242  mul.s       $f9, $f8, $f15
    ctx->pc = 0x20b768u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
label_20b76c:
    // 0x20b76c: 0x460f6a02  mul.s       $f8, $f13, $f15
    ctx->pc = 0x20b76cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
label_20b770:
    // 0x20b770: 0x460c401a  mula.s      $f8, $f12
    ctx->pc = 0x20b770u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_20b774:
    // 0x20b774: 0x460f71c2  mul.s       $f7, $f14, $f15
    ctx->pc = 0x20b774u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
label_20b778:
    // 0x20b778: 0x460b481e  madda.s     $f9, $f11
    ctx->pc = 0x20b778u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[11]));
label_20b77c:
    // 0x20b77c: 0x460a395c  madd.s      $f5, $f7, $f10
    ctx->pc = 0x20b77cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[10]));
label_20b780:
    // 0x20b780: 0x460c081a  mula.s      $f1, $f12
    ctx->pc = 0x20b780u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_20b784:
    // 0x20b784: 0x460b001e  madda.s     $f0, $f11
    ctx->pc = 0x20b784u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[11]));
label_20b788:
    // 0x20b788: 0x460a111c  madd.s      $f4, $f2, $f10
    ctx->pc = 0x20b788u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[10]));
label_20b78c:
    // 0x20b78c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x20b78cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_20b790:
    // 0x20b790: 0x4609281c  madd.s      $f0, $f5, $f9
    ctx->pc = 0x20b790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[9]));
label_20b794:
    // 0x20b794: 0x460f3182  mul.s       $f6, $f6, $f15
    ctx->pc = 0x20b794u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
label_20b798:
    // 0x20b798: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20b798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b79c:
    // 0x20b79c: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x20b79cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_20b7a0:
    // 0x20b7a0: 0x4608281c  madd.s      $f0, $f5, $f8
    ctx->pc = 0x20b7a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_20b7a4:
    // 0x20b7a4: 0x4602201a  mula.s      $f4, $f2
    ctx->pc = 0x20b7a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_20b7a8:
    // 0x20b7a8: 0x4607285c  madd.s      $f1, $f5, $f7
    ctx->pc = 0x20b7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
label_20b7ac:
    // 0x20b7ac: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20b7b0:
    // 0x20b7b0: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x20b7b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_20b7b4:
    // 0x20b7b4: 0x4606281c  madd.s      $f0, $f5, $f6
    ctx->pc = 0x20b7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_20b7b8:
    // 0x20b7b8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x20b7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_20b7bc:
    // 0x20b7bc: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x20b7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_20b7c0:
    // 0x20b7c0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x20b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b7c4:
    // 0x20b7c4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x20b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b7c8:
    // 0x20b7c8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b7cc:
    // 0x20b7cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20b7ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_20b7d0:
    // 0x20b7d0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x20b7d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_20b7d4:
    // 0x20b7d4: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x20b7d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_20b7d8:
    // 0x20b7d8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b7dc:
    // 0x20b7dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20b7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20b7e0:
    // 0x20b7e0: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x20b7e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_20b7e4:
    // 0x20b7e4: 0x460d0832  c.eq.s      $f1, $f13
    ctx->pc = 0x20b7e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b7e8:
    // 0x20b7e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20b7ec:
    if (ctx->pc == 0x20B7ECu) {
        ctx->pc = 0x20B7F0u;
        goto label_20b7f0;
    }
    ctx->pc = 0x20B7E8u;
    {
        const bool branch_taken_0x20b7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b7e8) {
            ctx->pc = 0x20B80Cu;
            goto label_20b80c;
        }
    }
    ctx->pc = 0x20B7F0u;
label_20b7f0:
    // 0x20b7f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b7f4:
    // 0x20b7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20b7f8:
    // 0x20b7f8: 0x0  nop
    ctx->pc = 0x20b7f8u;
    // NOP
label_20b7fc:
    // 0x20b7fc: 0x46010356  rsqrt.s     $f13, $f0, $f1
    ctx->pc = 0x20b7fcu;
    ctx->f[13] = 1.0f / sqrtf(ctx->f[0]);
label_20b800:
    // 0x20b800: 0x0  nop
    ctx->pc = 0x20b800u;
    // NOP
label_20b804:
    // 0x20b804: 0x0  nop
    ctx->pc = 0x20b804u;
    // NOP
label_20b808:
    // 0x20b808: 0x0  nop
    ctx->pc = 0x20b808u;
    // NOP
label_20b80c:
    // 0x20b80c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b810:
    // 0x20b810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b814:
    // 0x20b814: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20b814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_20b818:
    // 0x20b818: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20b818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b81c:
    // 0x20b81c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b820:
    // 0x20b820: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20b820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_20b824:
    // 0x20b824: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x20b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_20b828:
    // 0x20b828: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x20b828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b82c:
    // 0x20b82c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20b82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_20b830:
    // 0x20b830: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x20b830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_20b834:
    // 0x20b834: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b838:
    // 0x20b838: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20b838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_20b83c:
    // 0x20b83c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b840:
    if (ctx->pc == 0x20B840u) {
        ctx->pc = 0x20B840u;
            // 0x20b840: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x20B844u;
        goto label_20b844;
    }
    ctx->pc = 0x20B83Cu;
    {
        const bool branch_taken_0x20b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B83Cu;
            // 0x20b840: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b83c) {
            ctx->pc = 0x20B848u;
            goto label_20b848;
        }
    }
    ctx->pc = 0x20B844u;
label_20b844:
    // 0x20b844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b848:
    // 0x20b848: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20b84c:
    // 0x20b84c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x20b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_20b850:
    // 0x20b850: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20b850u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20b854:
    // 0x20b854: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x20b854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20b858:
    // 0x20b858: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20b858u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20b85c:
    // 0x20b85c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20b860:
    // 0x20b860: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20b860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20b864:
    // 0x20b864: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20b868:
    // 0x20b868: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20b868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20b86c:
    // 0x20b86c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20b86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20b870:
    // 0x20b870: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b874:
    // 0x20b874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b878:
    // 0x20b878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b87c:
    // 0x20b87c: 0x3e00008  jr          $ra
label_20b880:
    if (ctx->pc == 0x20B880u) {
        ctx->pc = 0x20B880u;
            // 0x20b880: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x20B884u;
        goto label_20b884;
    }
    ctx->pc = 0x20B87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B87Cu;
            // 0x20b880: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B884u;
label_20b884:
    // 0x20b884: 0x0  nop
    ctx->pc = 0x20b884u;
    // NOP
label_20b888:
    // 0x20b888: 0x0  nop
    ctx->pc = 0x20b888u;
    // NOP
label_20b88c:
    // 0x20b88c: 0x0  nop
    ctx->pc = 0x20b88cu;
    // NOP
label_20b890:
    // 0x20b890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20b894:
    // 0x20b894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20b898:
    // 0x20b898: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20b89c:
    // 0x20b89c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b8a0:
    // 0x20b8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20b8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b8a4:
    // 0x20b8a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20b8a8:
    // 0x20b8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20b8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b8ac:
    // 0x20b8ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20b8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20b8b0:
    // 0x20b8b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20b8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20b8b4:
    // 0x20b8b4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b8b8:
    // 0x20b8b8: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_20b8bc:
    // 0x20b8bc: 0x46006500  add.s       $f20, $f12, $f0
    ctx->pc = 0x20b8bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_20b8c0:
    // 0x20b8c0: 0xc0a45e8  jal         func_2917A0
label_20b8c4:
    if (ctx->pc == 0x20B8C4u) {
        ctx->pc = 0x20B8C4u;
            // 0x20b8c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20B8C8u;
        goto label_20b8c8;
    }
    ctx->pc = 0x20B8C0u;
    SET_GPR_U32(ctx, 31, 0x20B8C8u);
    ctx->pc = 0x20B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8C0u;
            // 0x20b8c4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8C8u; }
        if (ctx->pc != 0x20B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8C8u; }
        if (ctx->pc != 0x20B8C8u) { return; }
    }
    ctx->pc = 0x20B8C8u;
label_20b8c8:
    // 0x20b8c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20b8cc:
    // 0x20b8cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b8d0:
    // 0x20b8d0: 0xc0a45e8  jal         func_2917A0
label_20b8d4:
    if (ctx->pc == 0x20B8D4u) {
        ctx->pc = 0x20B8D4u;
            // 0x20b8d4: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x20B8D8u;
        goto label_20b8d8;
    }
    ctx->pc = 0x20B8D0u;
    SET_GPR_U32(ctx, 31, 0x20B8D8u);
    ctx->pc = 0x20B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8D0u;
            // 0x20b8d4: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8D8u; }
        if (ctx->pc != 0x20B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8D8u; }
        if (ctx->pc != 0x20B8D8u) { return; }
    }
    ctx->pc = 0x20B8D8u;
label_20b8d8:
    // 0x20b8d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b8dc:
    // 0x20b8dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20b8e0:
    // 0x20b8e0: 0xc0a45e8  jal         func_2917A0
label_20b8e4:
    if (ctx->pc == 0x20B8E4u) {
        ctx->pc = 0x20B8E4u;
            // 0x20b8e4: 0x26460040  addiu       $a2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x20B8E8u;
        goto label_20b8e8;
    }
    ctx->pc = 0x20B8E0u;
    SET_GPR_U32(ctx, 31, 0x20B8E8u);
    ctx->pc = 0x20B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8E0u;
            // 0x20b8e4: 0x26460040  addiu       $a2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8E8u; }
        if (ctx->pc != 0x20B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8E8u; }
        if (ctx->pc != 0x20B8E8u) { return; }
    }
    ctx->pc = 0x20B8E8u;
label_20b8e8:
    // 0x20b8e8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x20b8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b8ec:
    // 0x20b8ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x20b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b8f0:
    // 0x20b8f0: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x20b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b8f4:
    // 0x20b8f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b8f8:
    // 0x20b8f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20b8fc:
    if (ctx->pc == 0x20B8FCu) {
        ctx->pc = 0x20B8FCu;
            // 0x20b8fc: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x20B900u;
        goto label_20b900;
    }
    ctx->pc = 0x20B8F8u;
    {
        const bool branch_taken_0x20b8f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8F8u;
            // 0x20b8fc: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8f8) {
            ctx->pc = 0x20B908u;
            goto label_20b908;
        }
    }
    ctx->pc = 0x20B900u;
label_20b900:
    // 0x20b900: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b904:
    if (ctx->pc == 0x20B904u) {
        ctx->pc = 0x20B904u;
            // 0x20b904: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x20B908u;
        goto label_20b908;
    }
    ctx->pc = 0x20B900u;
    {
        const bool branch_taken_0x20b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B900u;
            // 0x20b904: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b900) {
            ctx->pc = 0x20B910u;
            goto label_20b910;
        }
    }
    ctx->pc = 0x20B908u;
label_20b908:
    // 0x20b908: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x20b908u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_20b90c:
    // 0x20b90c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x20b90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20b910:
    // 0x20b910: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x20b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b914:
    // 0x20b914: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x20b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b918:
    // 0x20b918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20b918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b91c:
    // 0x20b91c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20b920:
    if (ctx->pc == 0x20B920u) {
        ctx->pc = 0x20B920u;
            // 0x20b920: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B924u;
        goto label_20b924;
    }
    ctx->pc = 0x20B91Cu;
    {
        const bool branch_taken_0x20b91c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b91c) {
            ctx->pc = 0x20B920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B91Cu;
            // 0x20b920: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B924u;
            goto label_20b924;
        }
    }
    ctx->pc = 0x20B924u;
label_20b924:
    // 0x20b924: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_20b928:
    // 0x20b928: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x20b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b92c:
    // 0x20b92c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x20b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b930:
    // 0x20b930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20b930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b934:
    // 0x20b934: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20b938:
    if (ctx->pc == 0x20B938u) {
        ctx->pc = 0x20B938u;
            // 0x20b938: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B93Cu;
        goto label_20b93c;
    }
    ctx->pc = 0x20B934u;
    {
        const bool branch_taken_0x20b934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b934) {
            ctx->pc = 0x20B938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B934u;
            // 0x20b938: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B93Cu;
            goto label_20b93c;
        }
    }
    ctx->pc = 0x20B93Cu;
label_20b93c:
    // 0x20b93c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20b93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20b940:
    // 0x20b940: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x20b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b944:
    // 0x20b944: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x20b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b948:
    // 0x20b948: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20b948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b94c:
    // 0x20b94c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20b950:
    if (ctx->pc == 0x20B950u) {
        ctx->pc = 0x20B950u;
            // 0x20b950: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B954u;
        goto label_20b954;
    }
    ctx->pc = 0x20B94Cu;
    {
        const bool branch_taken_0x20b94c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b94c) {
            ctx->pc = 0x20B950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B94Cu;
            // 0x20b950: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B954u;
            goto label_20b954;
        }
    }
    ctx->pc = 0x20B954u;
label_20b954:
    // 0x20b954: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20b954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20b958:
    // 0x20b958: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x20b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b95c:
    // 0x20b95c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x20b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b960:
    // 0x20b960: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x20b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b964:
    // 0x20b964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20b964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b968:
    // 0x20b968: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20b96c:
    if (ctx->pc == 0x20B96Cu) {
        ctx->pc = 0x20B96Cu;
            // 0x20b96c: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x20B970u;
        goto label_20b970;
    }
    ctx->pc = 0x20B968u;
    {
        const bool branch_taken_0x20b968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B968u;
            // 0x20b96c: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b968) {
            ctx->pc = 0x20B978u;
            goto label_20b978;
        }
    }
    ctx->pc = 0x20B970u;
label_20b970:
    // 0x20b970: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b974:
    if (ctx->pc == 0x20B974u) {
        ctx->pc = 0x20B974u;
            // 0x20b974: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x20B978u;
        goto label_20b978;
    }
    ctx->pc = 0x20B970u;
    {
        const bool branch_taken_0x20b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B970u;
            // 0x20b974: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b970) {
            ctx->pc = 0x20B980u;
            goto label_20b980;
        }
    }
    ctx->pc = 0x20B978u;
label_20b978:
    // 0x20b978: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x20b978u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_20b97c:
    // 0x20b97c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x20b97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_20b980:
    // 0x20b980: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x20b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b984:
    // 0x20b984: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x20b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b988:
    // 0x20b988: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b98c:
    // 0x20b98c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20b990:
    if (ctx->pc == 0x20B990u) {
        ctx->pc = 0x20B990u;
            // 0x20b990: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B994u;
        goto label_20b994;
    }
    ctx->pc = 0x20B98Cu;
    {
        const bool branch_taken_0x20b98c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b98c) {
            ctx->pc = 0x20B990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B98Cu;
            // 0x20b990: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B994u;
            goto label_20b994;
        }
    }
    ctx->pc = 0x20B994u;
label_20b994:
    // 0x20b994: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x20b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_20b998:
    // 0x20b998: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x20b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b99c:
    // 0x20b99c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x20b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b9a0:
    // 0x20b9a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b9a4:
    // 0x20b9a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20b9a8:
    if (ctx->pc == 0x20B9A8u) {
        ctx->pc = 0x20B9A8u;
            // 0x20b9a8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B9ACu;
        goto label_20b9ac;
    }
    ctx->pc = 0x20B9A4u;
    {
        const bool branch_taken_0x20b9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b9a4) {
            ctx->pc = 0x20B9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9A4u;
            // 0x20b9a8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B9ACu;
            goto label_20b9ac;
        }
    }
    ctx->pc = 0x20B9ACu;
label_20b9ac:
    // 0x20b9ac: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_20b9b0:
    // 0x20b9b0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x20b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b9b4:
    // 0x20b9b4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x20b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b9b8:
    // 0x20b9b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b9bc:
    // 0x20b9bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20b9c0:
    if (ctx->pc == 0x20B9C0u) {
        ctx->pc = 0x20B9C0u;
            // 0x20b9c0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20B9C4u;
        goto label_20b9c4;
    }
    ctx->pc = 0x20B9BCu;
    {
        const bool branch_taken_0x20b9bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b9bc) {
            ctx->pc = 0x20B9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9BCu;
            // 0x20b9c0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B9C4u;
            goto label_20b9c4;
        }
    }
    ctx->pc = 0x20B9C4u;
label_20b9c4:
    // 0x20b9c4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20b9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20b9c8:
    // 0x20b9c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x20b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b9cc:
    // 0x20b9cc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x20b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b9d0:
    // 0x20b9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b9d4:
    // 0x20b9d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20b9d8:
    if (ctx->pc == 0x20B9D8u) {
        ctx->pc = 0x20B9D8u;
            // 0x20b9d8: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x20B9DCu;
        goto label_20b9dc;
    }
    ctx->pc = 0x20B9D4u;
    {
        const bool branch_taken_0x20b9d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9D4u;
            // 0x20b9d8: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9d4) {
            ctx->pc = 0x20B9E4u;
            goto label_20b9e4;
        }
    }
    ctx->pc = 0x20B9DCu;
label_20b9dc:
    // 0x20b9dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b9e0:
    if (ctx->pc == 0x20B9E0u) {
        ctx->pc = 0x20B9E0u;
            // 0x20b9e0: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x20B9E4u;
        goto label_20b9e4;
    }
    ctx->pc = 0x20B9DCu;
    {
        const bool branch_taken_0x20b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9DCu;
            // 0x20b9e0: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9dc) {
            ctx->pc = 0x20B9ECu;
            goto label_20b9ec;
        }
    }
    ctx->pc = 0x20B9E4u;
label_20b9e4:
    // 0x20b9e4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20b9e4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_20b9e8:
    // 0x20b9e8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x20b9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20b9ec:
    // 0x20b9ec: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x20b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b9f0:
    // 0x20b9f0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b9f4:
    // 0x20b9f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20b9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20b9f8:
    // 0x20b9f8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20b9fc:
    if (ctx->pc == 0x20B9FCu) {
        ctx->pc = 0x20B9FCu;
            // 0x20b9fc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA00u;
        goto label_20ba00;
    }
    ctx->pc = 0x20B9F8u;
    {
        const bool branch_taken_0x20b9f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b9f8) {
            ctx->pc = 0x20B9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9F8u;
            // 0x20b9fc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA00u;
            goto label_20ba00;
        }
    }
    ctx->pc = 0x20BA00u;
label_20ba00:
    // 0x20ba00: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20ba00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_20ba04:
    // 0x20ba04: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x20ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba08:
    // 0x20ba08: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba0c:
    // 0x20ba0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20ba0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba10:
    // 0x20ba10: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20ba14:
    if (ctx->pc == 0x20BA14u) {
        ctx->pc = 0x20BA14u;
            // 0x20ba14: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA18u;
        goto label_20ba18;
    }
    ctx->pc = 0x20BA10u;
    {
        const bool branch_taken_0x20ba10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba10) {
            ctx->pc = 0x20BA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA10u;
            // 0x20ba14: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA18u;
            goto label_20ba18;
        }
    }
    ctx->pc = 0x20BA18u;
label_20ba18:
    // 0x20ba18: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20ba18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20ba1c:
    // 0x20ba1c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x20ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba20:
    // 0x20ba20: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba24:
    // 0x20ba24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20ba24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba28:
    // 0x20ba28: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20ba2c:
    if (ctx->pc == 0x20BA2Cu) {
        ctx->pc = 0x20BA2Cu;
            // 0x20ba2c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA30u;
        goto label_20ba30;
    }
    ctx->pc = 0x20BA28u;
    {
        const bool branch_taken_0x20ba28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba28) {
            ctx->pc = 0x20BA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA28u;
            // 0x20ba2c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA30u;
            goto label_20ba30;
        }
    }
    ctx->pc = 0x20BA30u;
label_20ba30:
    // 0x20ba30: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20ba30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20ba34:
    // 0x20ba34: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x20ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba38:
    // 0x20ba38: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x20ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba3c:
    // 0x20ba3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20ba3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba40:
    // 0x20ba40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20ba44:
    if (ctx->pc == 0x20BA44u) {
        ctx->pc = 0x20BA44u;
            // 0x20ba44: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x20BA48u;
        goto label_20ba48;
    }
    ctx->pc = 0x20BA40u;
    {
        const bool branch_taken_0x20ba40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA40u;
            // 0x20ba44: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba40) {
            ctx->pc = 0x20BA50u;
            goto label_20ba50;
        }
    }
    ctx->pc = 0x20BA48u;
label_20ba48:
    // 0x20ba48: 0x10000003  b           . + 4 + (0x3 << 2)
label_20ba4c:
    if (ctx->pc == 0x20BA4Cu) {
        ctx->pc = 0x20BA4Cu;
            // 0x20ba4c: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x20BA50u;
        goto label_20ba50;
    }
    ctx->pc = 0x20BA48u;
    {
        const bool branch_taken_0x20ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA48u;
            // 0x20ba4c: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba48) {
            ctx->pc = 0x20BA58u;
            goto label_20ba58;
        }
    }
    ctx->pc = 0x20BA50u;
label_20ba50:
    // 0x20ba50: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20ba50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_20ba54:
    // 0x20ba54: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x20ba54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_20ba58:
    // 0x20ba58: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x20ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba5c:
    // 0x20ba5c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x20ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba60:
    // 0x20ba60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20ba60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba64:
    // 0x20ba64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20ba68:
    if (ctx->pc == 0x20BA68u) {
        ctx->pc = 0x20BA68u;
            // 0x20ba68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA6Cu;
        goto label_20ba6c;
    }
    ctx->pc = 0x20BA64u;
    {
        const bool branch_taken_0x20ba64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba64) {
            ctx->pc = 0x20BA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA64u;
            // 0x20ba68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA6Cu;
            goto label_20ba6c;
        }
    }
    ctx->pc = 0x20BA6Cu;
label_20ba6c:
    // 0x20ba6c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x20ba6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_20ba70:
    // 0x20ba70: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x20ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba74:
    // 0x20ba74: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x20ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba78:
    // 0x20ba78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20ba78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba7c:
    // 0x20ba7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20ba80:
    if (ctx->pc == 0x20BA80u) {
        ctx->pc = 0x20BA80u;
            // 0x20ba80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA84u;
        goto label_20ba84;
    }
    ctx->pc = 0x20BA7Cu;
    {
        const bool branch_taken_0x20ba7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba7c) {
            ctx->pc = 0x20BA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA7Cu;
            // 0x20ba80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA84u;
            goto label_20ba84;
        }
    }
    ctx->pc = 0x20BA84u;
label_20ba84:
    // 0x20ba84: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20ba84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_20ba88:
    // 0x20ba88: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x20ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ba8c:
    // 0x20ba8c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x20ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba90:
    // 0x20ba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20ba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20ba94:
    // 0x20ba94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20ba98:
    if (ctx->pc == 0x20BA98u) {
        ctx->pc = 0x20BA98u;
            // 0x20ba98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BA9Cu;
        goto label_20ba9c;
    }
    ctx->pc = 0x20BA94u;
    {
        const bool branch_taken_0x20ba94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba94) {
            ctx->pc = 0x20BA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA94u;
            // 0x20ba98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BA9Cu;
            goto label_20ba9c;
        }
    }
    ctx->pc = 0x20BA9Cu;
label_20ba9c:
    // 0x20ba9c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20ba9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20baa0:
    // 0x20baa0: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x20baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20baa4:
    // 0x20baa4: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x20baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20baa8:
    // 0x20baa8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x20baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20baac:
    // 0x20baac: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x20baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bab0:
    // 0x20bab0: 0x46022900  add.s       $f4, $f5, $f2
    ctx->pc = 0x20bab0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_20bab4:
    // 0x20bab4: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x20bab4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bab8:
    // 0x20bab8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x20bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20babc:
    // 0x20babc: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x20babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bac0:
    // 0x20bac0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x20bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bac4:
    // 0x20bac4: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x20bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bac8:
    // 0x20bac8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x20bac8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_20bacc:
    // 0x20bacc: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x20baccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bad0:
    // 0x20bad0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_20bad4:
    if (ctx->pc == 0x20BAD4u) {
        ctx->pc = 0x20BAD4u;
            // 0x20bad4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20BAD8u;
        goto label_20bad8;
    }
    ctx->pc = 0x20BAD0u;
    {
        const bool branch_taken_0x20bad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAD0u;
            // 0x20bad4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bad0) {
            ctx->pc = 0x20BAE0u;
            goto label_20bae0;
        }
    }
    ctx->pc = 0x20BAD8u;
label_20bad8:
    // 0x20bad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20badc:
    if (ctx->pc == 0x20BADCu) {
        ctx->pc = 0x20BADCu;
            // 0x20badc: 0xe6050000  swc1        $f5, 0x0($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x20BAE0u;
        goto label_20bae0;
    }
    ctx->pc = 0x20BAD8u;
    {
        const bool branch_taken_0x20bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAD8u;
            // 0x20badc: 0xe6050000  swc1        $f5, 0x0($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bad8) {
            ctx->pc = 0x20BAE8u;
            goto label_20bae8;
        }
    }
    ctx->pc = 0x20BAE0u;
label_20bae0:
    // 0x20bae0: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x20bae0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_20bae4:
    // 0x20bae4: 0xe6050000  swc1        $f5, 0x0($s0)
    ctx->pc = 0x20bae4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20bae8:
    // 0x20bae8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20baec:
    // 0x20baec: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20baecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20baf0:
    // 0x20baf0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20baf4:
    if (ctx->pc == 0x20BAF4u) {
        ctx->pc = 0x20BAF4u;
            // 0x20baf4: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x20BAF8u;
        goto label_20baf8;
    }
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20BAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAF0u;
            // 0x20baf4: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BAF8u;
            goto label_20baf8;
        }
    }
    ctx->pc = 0x20BAF8u;
label_20baf8:
    // 0x20baf8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_20bafc:
    // 0x20bafc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb00:
    // 0x20bb00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20bb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb04:
    // 0x20bb04: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20bb08:
    if (ctx->pc == 0x20BB08u) {
        ctx->pc = 0x20BB08u;
            // 0x20bb08: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x20BB0Cu;
        goto label_20bb0c;
    }
    ctx->pc = 0x20BB04u;
    {
        const bool branch_taken_0x20bb04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb04) {
            ctx->pc = 0x20BB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB04u;
            // 0x20bb08: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB0Cu;
            goto label_20bb0c;
        }
    }
    ctx->pc = 0x20BB0Cu;
label_20bb0c:
    // 0x20bb0c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20bb10:
    // 0x20bb10: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb14:
    // 0x20bb14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20bb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb18:
    // 0x20bb18: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20bb1c:
    if (ctx->pc == 0x20BB1Cu) {
        ctx->pc = 0x20BB1Cu;
            // 0x20bb1c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BB20u;
        goto label_20bb20;
    }
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB18u;
            // 0x20bb1c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB20u;
            goto label_20bb20;
        }
    }
    ctx->pc = 0x20BB20u;
label_20bb20:
    // 0x20bb20: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20bb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20bb24:
    // 0x20bb24: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x20bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20bb28:
    // 0x20bb28: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x20bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bb2c:
    // 0x20bb2c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x20bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bb30:
    // 0x20bb30: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x20bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb34:
    // 0x20bb34: 0x46022900  add.s       $f4, $f5, $f2
    ctx->pc = 0x20bb34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_20bb38:
    // 0x20bb38: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x20bb38u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bb3c:
    // 0x20bb3c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x20bb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20bb40:
    // 0x20bb40: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x20bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20bb44:
    // 0x20bb44: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x20bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb48:
    // 0x20bb48: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x20bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bb4c:
    // 0x20bb4c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x20bb4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_20bb50:
    // 0x20bb50: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x20bb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb54:
    // 0x20bb54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20bb58:
    if (ctx->pc == 0x20BB58u) {
        ctx->pc = 0x20BB58u;
            // 0x20bb58: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20BB5Cu;
        goto label_20bb5c;
    }
    ctx->pc = 0x20BB54u;
    {
        const bool branch_taken_0x20bb54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB54u;
            // 0x20bb58: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb54) {
            ctx->pc = 0x20BB64u;
            goto label_20bb64;
        }
    }
    ctx->pc = 0x20BB5Cu;
label_20bb5c:
    // 0x20bb5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_20bb60:
    if (ctx->pc == 0x20BB60u) {
        ctx->pc = 0x20BB60u;
            // 0x20bb60: 0xe6050010  swc1        $f5, 0x10($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x20BB64u;
        goto label_20bb64;
    }
    ctx->pc = 0x20BB5Cu;
    {
        const bool branch_taken_0x20bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB5Cu;
            // 0x20bb60: 0xe6050010  swc1        $f5, 0x10($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb5c) {
            ctx->pc = 0x20BB6Cu;
            goto label_20bb6c;
        }
    }
    ctx->pc = 0x20BB64u;
label_20bb64:
    // 0x20bb64: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x20bb64u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_20bb68:
    // 0x20bb68: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x20bb68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_20bb6c:
    // 0x20bb6c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x20bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb70:
    // 0x20bb70: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x20bb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb74:
    // 0x20bb74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20bb78:
    if (ctx->pc == 0x20BB78u) {
        ctx->pc = 0x20BB78u;
            // 0x20bb78: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x20BB7Cu;
        goto label_20bb7c;
    }
    ctx->pc = 0x20BB74u;
    {
        const bool branch_taken_0x20bb74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb74) {
            ctx->pc = 0x20BB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB74u;
            // 0x20bb78: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB7Cu;
            goto label_20bb7c;
        }
    }
    ctx->pc = 0x20BB7Cu;
label_20bb7c:
    // 0x20bb7c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x20bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_20bb80:
    // 0x20bb80: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x20bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb84:
    // 0x20bb84: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x20bb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb88:
    // 0x20bb88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20bb8c:
    if (ctx->pc == 0x20BB8Cu) {
        ctx->pc = 0x20BB8Cu;
            // 0x20bb8c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x20BB90u;
        goto label_20bb90;
    }
    ctx->pc = 0x20BB88u;
    {
        const bool branch_taken_0x20bb88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb88) {
            ctx->pc = 0x20BB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB88u;
            // 0x20bb8c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BB90u;
            goto label_20bb90;
        }
    }
    ctx->pc = 0x20BB90u;
label_20bb90:
    // 0x20bb90: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_20bb94:
    // 0x20bb94: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x20bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bb98:
    // 0x20bb98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20bb98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bb9c:
    // 0x20bb9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20bba0:
    if (ctx->pc == 0x20BBA0u) {
        ctx->pc = 0x20BBA0u;
            // 0x20bba0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20BBA4u;
        goto label_20bba4;
    }
    ctx->pc = 0x20BB9Cu;
    {
        const bool branch_taken_0x20bb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb9c) {
            ctx->pc = 0x20BBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB9Cu;
            // 0x20bba0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BBA4u;
            goto label_20bba4;
        }
    }
    ctx->pc = 0x20BBA4u;
label_20bba4:
    // 0x20bba4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20bba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20bba8:
    // 0x20bba8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbac:
    // 0x20bbac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20bbacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20bbb0:
    // 0x20bbb0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20bbb4:
    // 0x20bbb4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbb8:
    // 0x20bbb8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20bbb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20bbbc:
    // 0x20bbbc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20bbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_20bbc0:
    // 0x20bbc0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbc4:
    // 0x20bbc4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20bbc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20bbc8:
    // 0x20bbc8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20bbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_20bbcc:
    // 0x20bbcc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbd0:
    // 0x20bbd0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x20bbd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_20bbd4:
    // 0x20bbd4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20bbd8:
    // 0x20bbd8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x20bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbdc:
    // 0x20bbdc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20bbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20bbe0:
    // 0x20bbe0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x20bbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_20bbe4:
    // 0x20bbe4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x20bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbe8:
    // 0x20bbe8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20bbe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20bbec:
    // 0x20bbec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x20bbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_20bbf0:
    // 0x20bbf0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x20bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bbf4:
    // 0x20bbf4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20bbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20bbf8:
    // 0x20bbf8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20bbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_20bbfc:
    // 0x20bbfc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x20bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc00:
    // 0x20bc00: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20bc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20bc04:
    // 0x20bc04: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x20bc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_20bc08:
    // 0x20bc08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20bc0c:
    // 0x20bc0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20bc10:
    // 0x20bc10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20bc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bc14:
    // 0x20bc14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20bc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bc18:
    // 0x20bc18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20bc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20bc1c:
    // 0x20bc1c: 0x3e00008  jr          $ra
label_20bc20:
    if (ctx->pc == 0x20BC20u) {
        ctx->pc = 0x20BC20u;
            // 0x20bc20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20BC24u;
        goto label_20bc24;
    }
    ctx->pc = 0x20BC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC1Cu;
            // 0x20bc20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20BC24u;
label_20bc24:
    // 0x20bc24: 0x0  nop
    ctx->pc = 0x20bc24u;
    // NOP
label_20bc28:
    // 0x20bc28: 0x0  nop
    ctx->pc = 0x20bc28u;
    // NOP
label_20bc2c:
    // 0x20bc2c: 0x0  nop
    ctx->pc = 0x20bc2cu;
    // NOP
label_20bc30:
    // 0x20bc30: 0x90820017  lbu         $v0, 0x17($a0)
    ctx->pc = 0x20bc30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_20bc34:
    // 0x20bc34: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20bc38:
    // 0x20bc38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20bc3c:
    // 0x20bc3c: 0x3e00008  jr          $ra
label_20bc40:
    if (ctx->pc == 0x20BC40u) {
        ctx->pc = 0x20BC40u;
            // 0x20bc40: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20BC44u;
        goto label_20bc44;
    }
    ctx->pc = 0x20BC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC3Cu;
            // 0x20bc40: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0x0  nop
    ctx->pc = 0x20bc44u;
    // NOP
label_20bc48:
    // 0x20bc48: 0x0  nop
    ctx->pc = 0x20bc48u;
    // NOP
label_20bc4c:
    // 0x20bc4c: 0x0  nop
    ctx->pc = 0x20bc4cu;
    // NOP
label_20bc50:
    // 0x20bc50: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x20bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc54:
    // 0x20bc54: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x20bc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_20bc58:
    // 0x20bc58: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x20bc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_20bc5c:
    // 0x20bc5c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x20bc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20bc60:
    // 0x20bc60: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x20bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc64:
    // 0x20bc64: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20bc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20bc68:
    // 0x20bc68: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x20bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc6c:
    // 0x20bc6c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20bc70:
    // 0x20bc70: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x20bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc74:
    // 0x20bc74: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x20bc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_20bc78:
    // 0x20bc78: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc7c:
    // 0x20bc7c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x20bc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_20bc80:
    // 0x20bc80: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x20bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc84:
    // 0x20bc84: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x20bc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_20bc88:
    // 0x20bc88: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x20bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc8c:
    // 0x20bc8c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x20bc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_20bc90:
    // 0x20bc90: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x20bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc94:
    // 0x20bc94: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x20bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_20bc98:
    // 0x20bc98: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x20bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bc9c:
    // 0x20bc9c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x20bc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_20bca0:
    // 0x20bca0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bca4:
    // 0x20bca4: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x20bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_20bca8:
    // 0x20bca8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x20bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bcac:
    // 0x20bcac: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x20bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_20bcb0:
    // 0x20bcb0: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x20bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bcb4:
    // 0x20bcb4: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x20bcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_20bcb8:
    // 0x20bcb8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x20bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bcbc:
    // 0x20bcbc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x20bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_20bcc0:
    // 0x20bcc0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x20bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bcc4:
    // 0x20bcc4: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x20bcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_20bcc8:
    // 0x20bcc8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bccc:
    // 0x20bccc: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x20bcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_20bcd0:
    // 0x20bcd0: 0x90820017  lbu         $v0, 0x17($a0)
    ctx->pc = 0x20bcd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_20bcd4:
    // 0x20bcd4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_20bcd8:
    if (ctx->pc == 0x20BCD8u) {
        ctx->pc = 0x20BCD8u;
            // 0x20bcd8: 0x24830040  addiu       $v1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x20BCDCu;
        goto label_20bcdc;
    }
    ctx->pc = 0x20BCD4u;
    {
        const bool branch_taken_0x20bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCD4u;
            // 0x20bcd8: 0x24830040  addiu       $v1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcd4) {
            ctx->pc = 0x20BDB4u;
            goto label_20bdb4;
        }
    }
    ctx->pc = 0x20BCDCu;
label_20bcdc:
    // 0x20bcdc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x20bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bce0:
    // 0x20bce0: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x20bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bce4:
    // 0x20bce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bce8:
    // 0x20bce8: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x20bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_20bcec:
    // 0x20bcec: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x20bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bcf0:
    // 0x20bcf0: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x20bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bcf4:
    // 0x20bcf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bcf8:
    // 0x20bcf8: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x20bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_20bcfc:
    // 0x20bcfc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x20bcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd00:
    // 0x20bd00: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x20bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd04:
    // 0x20bd04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd08:
    // 0x20bd08: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x20bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_20bd0c:
    // 0x20bd0c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x20bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd10:
    // 0x20bd10: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x20bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd14:
    // 0x20bd14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd18:
    // 0x20bd18: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x20bd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_20bd1c:
    // 0x20bd1c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd20:
    // 0x20bd20: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x20bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_20bd24:
    // 0x20bd24: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x20bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd28:
    // 0x20bd28: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x20bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd2c:
    // 0x20bd2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd30:
    // 0x20bd30: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x20bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_20bd34:
    // 0x20bd34: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x20bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd38:
    // 0x20bd38: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x20bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd3c:
    // 0x20bd3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd40:
    // 0x20bd40: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x20bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_20bd44:
    // 0x20bd44: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x20bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd48:
    // 0x20bd48: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x20bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd4c:
    // 0x20bd4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd50:
    // 0x20bd50: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x20bd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_20bd54:
    // 0x20bd54: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x20bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd58:
    // 0x20bd58: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x20bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd5c:
    // 0x20bd5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd60:
    // 0x20bd60: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x20bd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_20bd64:
    // 0x20bd64: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd68:
    // 0x20bd68: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x20bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_20bd6c:
    // 0x20bd6c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd70:
    // 0x20bd70: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x20bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd74:
    // 0x20bd74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd78:
    // 0x20bd78: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x20bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_20bd7c:
    // 0x20bd7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd80:
    // 0x20bd80: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x20bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd84:
    // 0x20bd84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd88:
    // 0x20bd88: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x20bd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_20bd8c:
    // 0x20bd8c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x20bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bd90:
    // 0x20bd90: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x20bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd94:
    // 0x20bd94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bd94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bd98:
    // 0x20bd98: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x20bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_20bd9c:
    // 0x20bd9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x20bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bda0:
    // 0x20bda0: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x20bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bda4:
    // 0x20bda4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20bda8:
    // 0x20bda8: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x20bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
label_20bdac:
    // 0x20bdac: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bdb0:
    // 0x20bdb0: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x20bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
label_20bdb4:
    // 0x20bdb4: 0x3e00008  jr          $ra
label_20bdb8:
    if (ctx->pc == 0x20BDB8u) {
        ctx->pc = 0x20BDB8u;
            // 0x20bdb8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BDBCu;
        goto label_20bdbc;
    }
    ctx->pc = 0x20BDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDB4u;
            // 0x20bdb8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20BDBCu;
label_20bdbc:
    // 0x20bdbc: 0x0  nop
    ctx->pc = 0x20bdbcu;
    // NOP
label_20bdc0:
    // 0x20bdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20bdc4:
    // 0x20bdc4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x20bdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_20bdc8:
    // 0x20bdc8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x20bdc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20bdcc:
    // 0x20bdcc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_20bdd0:
    // 0x20bdd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20bdd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20bdd4:
    // 0x20bdd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20bdd8:
    // 0x20bdd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20bdd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20bddc:
    // 0x20bddc: 0x8d08ea64  lw          $t0, -0x159C($t0)
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961764)));
label_20bde0:
    // 0x20bde0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20bde4:
    // 0x20bde4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x20bde4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20bde8:
    // 0x20bde8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20bdec:
    if (ctx->pc == 0x20BDECu) {
        ctx->pc = 0x20BDECu;
            // 0x20bdec: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x20BDF0u;
        goto label_20bdf0;
    }
    ctx->pc = 0x20BDE8u;
    {
        const bool branch_taken_0x20bde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDE8u;
            // 0x20bdec: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bde8) {
            ctx->pc = 0x20BE18u;
            goto label_20be18;
        }
    }
    ctx->pc = 0x20BDF0u;
label_20bdf0:
    // 0x20bdf0: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x20bdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_20bdf4:
    // 0x20bdf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20bdf8:
    // 0x20bdf8: 0x2463c058  addiu       $v1, $v1, -0x3FA8
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951000));
label_20bdfc:
    // 0x20bdfc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x20bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_20be00:
    // 0x20be00: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20be04:
    // 0x20be04: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x20be04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_20be08:
    // 0x20be08: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20be08u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_20be0c:
    // 0x20be0c: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_20be10:
    // 0x20be10: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x20be10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
label_20be14:
    // 0x20be14: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x20be14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_20be18:
    // 0x20be18: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x20be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20be1c:
    // 0x20be1c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x20be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20be20:
    // 0x20be20: 0xc4aa0044  lwc1        $f10, 0x44($a1)
    ctx->pc = 0x20be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_20be24:
    // 0x20be24: 0xc4ad0028  lwc1        $f13, 0x28($a1)
    ctx->pc = 0x20be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20be28:
    // 0x20be28: 0xc4a90048  lwc1        $f9, 0x48($a1)
    ctx->pc = 0x20be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_20be2c:
    // 0x20be2c: 0xc4ac0038  lwc1        $f12, 0x38($a1)
    ctx->pc = 0x20be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20be30:
    // 0x20be30: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x20be30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20be34:
    // 0x20be34: 0xc4ab0040  lwc1        $f11, 0x40($a1)
    ctx->pc = 0x20be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20be38:
    // 0x20be38: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x20be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20be3c:
    // 0x20be3c: 0x46020a01  sub.s       $f8, $f1, $f2
    ctx->pc = 0x20be3cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_20be40:
    // 0x20be40: 0x460d4901  sub.s       $f4, $f9, $f13
    ctx->pc = 0x20be40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
label_20be44:
    // 0x20be44: 0x460d61c1  sub.s       $f7, $f12, $f13
    ctx->pc = 0x20be44u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
label_20be48:
    // 0x20be48: 0x46025141  sub.s       $f5, $f10, $f2
    ctx->pc = 0x20be48u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
label_20be4c:
    // 0x20be4c: 0x4604401a  mula.s      $f8, $f4
    ctx->pc = 0x20be4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_20be50:
    // 0x20be50: 0x46035981  sub.s       $f6, $f11, $f3
    ctx->pc = 0x20be50u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
label_20be54:
    // 0x20be54: 0x46053b9d  msub.s      $f14, $f7, $f5
    ctx->pc = 0x20be54u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
label_20be58:
    // 0x20be58: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x20be58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_20be5c:
    // 0x20be5c: 0x46030401  sub.s       $f16, $f0, $f3
    ctx->pc = 0x20be5cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20be60:
    // 0x20be60: 0x460483dd  msub.s      $f15, $f16, $f4
    ctx->pc = 0x20be60u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[4]));
label_20be64:
    // 0x20be64: 0x4605801a  mula.s      $f16, $f5
    ctx->pc = 0x20be64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[5]);
label_20be68:
    // 0x20be68: 0x4606441d  msub.s      $f16, $f8, $f6
    ctx->pc = 0x20be68u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
label_20be6c:
    // 0x20be6c: 0x460f101a  mula.s      $f2, $f15
    ctx->pc = 0x20be6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
label_20be70:
    // 0x20be70: 0x460e181e  madda.s     $f3, $f14
    ctx->pc = 0x20be70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[14]));
label_20be74:
    // 0x20be74: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x20be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20be78:
    // 0x20be78: 0x46106c9c  madd.s      $f18, $f13, $f16
    ctx->pc = 0x20be78u;
    ctx->f[18] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[16]));
label_20be7c:
    // 0x20be7c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x20be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_20be80:
    // 0x20be80: 0x4605781a  mula.s      $f15, $f5
    ctx->pc = 0x20be80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
label_20be84:
    // 0x20be84: 0xc4c80008  lwc1        $f8, 0x8($a2)
    ctx->pc = 0x20be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20be88:
    // 0x20be88: 0x4607701e  madda.s     $f14, $f7
    ctx->pc = 0x20be88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[7]));
label_20be8c:
    // 0x20be8c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x20be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20be90:
    // 0x20be90: 0x4608815c  madd.s      $f5, $f16, $f8
    ctx->pc = 0x20be90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[8]));
label_20be94:
    // 0x20be94: 0x46122c41  sub.s       $f17, $f5, $f18
    ctx->pc = 0x20be94u;
    ctx->f[17] = FPU_SUB_S(ctx->f[5], ctx->f[18]);
label_20be98:
    // 0x20be98: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x20be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20be9c:
    // 0x20be9c: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x20be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20bea0:
    // 0x20bea0: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x20bea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_20bea4:
    // 0x20bea4: 0x4605781a  mula.s      $f15, $f5
    ctx->pc = 0x20bea4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[5]);
label_20bea8:
    // 0x20bea8: 0x4604701e  madda.s     $f14, $f4
    ctx->pc = 0x20bea8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[4]));
label_20beac:
    // 0x20beac: 0x4606815c  madd.s      $f5, $f16, $f6
    ctx->pc = 0x20beacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[6]));
label_20beb0:
    // 0x20beb0: 0x46122981  sub.s       $f6, $f5, $f18
    ctx->pc = 0x20beb0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[18]);
label_20beb4:
    // 0x20beb4: 0x46068942  mul.s       $f5, $f17, $f6
    ctx->pc = 0x20beb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[17], ctx->f[6]);
label_20beb8:
    // 0x20beb8: 0x46132834  c.lt.s      $f5, $f19
    ctx->pc = 0x20beb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bebc:
    // 0x20bebc: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_20bec0:
    if (ctx->pc == 0x20BEC0u) {
        ctx->pc = 0x20BEC0u;
            // 0x20bec0: 0x46068941  sub.s       $f5, $f17, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[17], ctx->f[6]);
        ctx->pc = 0x20BEC4u;
        goto label_20bec4;
    }
    ctx->pc = 0x20BEBCu;
    {
        const bool branch_taken_0x20bebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bebc) {
            ctx->pc = 0x20BEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEBCu;
            // 0x20bec0: 0x46068941  sub.s       $f5, $f17, $f6 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[17], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BF30u;
            goto label_20bf30;
        }
    }
    ctx->pc = 0x20BEC4u;
label_20bec4:
    // 0x20bec4: 0x46119832  c.eq.s      $f19, $f17
    ctx->pc = 0x20bec4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[19], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bec8:
    // 0x20bec8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_20becc:
    if (ctx->pc == 0x20BECCu) {
        ctx->pc = 0x20BED0u;
        goto label_20bed0;
    }
    ctx->pc = 0x20BEC8u;
    {
        const bool branch_taken_0x20bec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bec8) {
            ctx->pc = 0x20BEDCu;
            goto label_20bedc;
        }
    }
    ctx->pc = 0x20BED0u;
label_20bed0:
    // 0x20bed0: 0x46069832  c.eq.s      $f19, $f6
    ctx->pc = 0x20bed0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[19], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bed4:
    // 0x20bed4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_20bed8:
    if (ctx->pc == 0x20BED8u) {
        ctx->pc = 0x20BEDCu;
        goto label_20bedc;
    }
    ctx->pc = 0x20BED4u;
    {
        const bool branch_taken_0x20bed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bed4) {
            ctx->pc = 0x20BF2Cu;
            goto label_20bf2c;
        }
    }
    ctx->pc = 0x20BEDCu;
label_20bedc:
    // 0x20bedc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20bee0:
    // 0x20bee0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_20bee4:
    // 0x20bee4: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x20bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_20bee8:
    // 0x20bee8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20beec:
    // 0x20beec: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20bef0:
    // 0x20bef0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20bef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20bef4:
    // 0x20bef4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20bef8:
    if (ctx->pc == 0x20BEF8u) {
        ctx->pc = 0x20BEF8u;
            // 0x20bef8: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x20BEFCu;
        goto label_20befc;
    }
    ctx->pc = 0x20BEF4u;
    {
        const bool branch_taken_0x20bef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEF4u;
            // 0x20bef8: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bef4) {
            ctx->pc = 0x20BF24u;
            goto label_20bf24;
        }
    }
    ctx->pc = 0x20BEFCu;
label_20befc:
    // 0x20befc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x20befcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20bf00:
    // 0x20bf00: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20bf04:
    // 0x20bf04: 0x2463c068  addiu       $v1, $v1, -0x3F98
    ctx->pc = 0x20bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951016));
label_20bf08:
    // 0x20bf08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20bf0c:
    // 0x20bf0c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20bf10:
    // 0x20bf10: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20bf14:
    // 0x20bf14: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20bf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_20bf18:
    // 0x20bf18: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_20bf1c:
    // 0x20bf1c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x20bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_20bf20:
    // 0x20bf20: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20bf24:
    // 0x20bf24: 0x100000ba  b           . + 4 + (0xBA << 2)
label_20bf28:
    if (ctx->pc == 0x20BF28u) {
        ctx->pc = 0x20BF28u;
            // 0x20bf28: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x20BF2Cu;
        goto label_20bf2c;
    }
    ctx->pc = 0x20BF24u;
    {
        const bool branch_taken_0x20bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF24u;
            // 0x20bf28: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf24) {
            ctx->pc = 0x20C210u;
            goto label_20c210;
        }
    }
    ctx->pc = 0x20BF2Cu;
label_20bf2c:
    // 0x20bf2c: 0x46068941  sub.s       $f5, $f17, $f6
    ctx->pc = 0x20bf2cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[17], ctx->f[6]);
label_20bf30:
    // 0x20bf30: 0x0  nop
    ctx->pc = 0x20bf30u;
    // NOP
label_20bf34:
    // 0x20bf34: 0x46058a03  div.s       $f8, $f17, $f5
    ctx->pc = 0x20bf34u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[17] * 0.0f); } else ctx->f[8] = ctx->f[17] / ctx->f[5];
label_20bf38:
    // 0x20bf38: 0x0  nop
    ctx->pc = 0x20bf38u;
    // NOP
label_20bf3c:
    // 0x20bf3c: 0xc4e50010  lwc1        $f5, 0x10($a3)
    ctx->pc = 0x20bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20bf40:
    // 0x20bf40: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x20bf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bf44:
    // 0x20bf44: 0x4500009f  bc1f        . + 4 + (0x9F << 2)
label_20bf48:
    if (ctx->pc == 0x20BF48u) {
        ctx->pc = 0x20BF4Cu;
        goto label_20bf4c;
    }
    ctx->pc = 0x20BF44u;
    {
        const bool branch_taken_0x20bf44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf44) {
            ctx->pc = 0x20C1C4u;
            goto label_20c1c4;
        }
    }
    ctx->pc = 0x20BF4Cu;
label_20bf4c:
    // 0x20bf4c: 0x3c03b8d1  lui         $v1, 0xB8D1
    ctx->pc = 0x20bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47313 << 16));
label_20bf50:
    // 0x20bf50: 0x3465b717  ori         $a1, $v1, 0xB717
    ctx->pc = 0x20bf50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_20bf54:
    // 0x20bf54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20bf58:
    // 0x20bf58: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x20bf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_20bf5c:
    // 0x20bf5c: 0x0  nop
    ctx->pc = 0x20bf5cu;
    // NOP
label_20bf60:
    // 0x20bf60: 0x46082d81  sub.s       $f22, $f5, $f8
    ctx->pc = 0x20bf60u;
    ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_20bf64:
    // 0x20bf64: 0x460f781a  mula.s      $f15, $f15
    ctx->pc = 0x20bf64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
label_20bf68:
    // 0x20bf68: 0x460e701e  madda.s     $f14, $f14
    ctx->pc = 0x20bf68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
label_20bf6c:
    // 0x20bf6c: 0x4610815c  madd.s      $f5, $f16, $f16
    ctx->pc = 0x20bf6cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[16]));
label_20bf70:
    // 0x20bf70: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x20bf70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_20bf74:
    // 0x20bf74: 0x0  nop
    ctx->pc = 0x20bf74u;
    // NOP
label_20bf78:
    // 0x20bf78: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x20bf78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_20bf7c:
    // 0x20bf7c: 0x4604401a  mula.s      $f8, $f4
    ctx->pc = 0x20bf7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_20bf80:
    // 0x20bf80: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x20bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20bf84:
    // 0x20bf84: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x20bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20bf88:
    // 0x20bf88: 0xc4d20004  lwc1        $f18, 0x4($a2)
    ctx->pc = 0x20bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_20bf8c:
    // 0x20bf8c: 0x4605b15c  madd.s      $f5, $f22, $f5
    ctx->pc = 0x20bf8cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[5]));
label_20bf90:
    // 0x20bf90: 0x4604401a  mula.s      $f8, $f4
    ctx->pc = 0x20bf90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_20bf94:
    // 0x20bf94: 0x4612b11c  madd.s      $f4, $f22, $f18
    ctx->pc = 0x20bf94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[18]));
label_20bf98:
    // 0x20bf98: 0x46040d01  sub.s       $f20, $f1, $f4
    ctx->pc = 0x20bf98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_20bf9c:
    // 0x20bf9c: 0xc4d30018  lwc1        $f19, 0x18($a2)
    ctx->pc = 0x20bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_20bfa0:
    // 0x20bfa0: 0xc4d50008  lwc1        $f21, 0x8($a2)
    ctx->pc = 0x20bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20bfa4:
    // 0x20bfa4: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x20bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20bfa8:
    // 0x20bfa8: 0x4613401a  mula.s      $f8, $f19
    ctx->pc = 0x20bfa8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[19]);
label_20bfac:
    // 0x20bfac: 0x4615b55c  madd.s      $f21, $f22, $f21
    ctx->pc = 0x20bfacu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[21]));
label_20bfb0:
    // 0x20bfb0: 0xc4d2000c  lwc1        $f18, 0xC($a2)
    ctx->pc = 0x20bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_20bfb4:
    // 0x20bfb4: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x20bfb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_20bfb8:
    // 0x20bfb8: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x20bfb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_20bfbc:
    // 0x20bfbc: 0x4612b05c  madd.s      $f1, $f22, $f18
    ctx->pc = 0x20bfbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[18]));
label_20bfc0:
    // 0x20bfc0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x20bfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_20bfc4:
    // 0x20bfc4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x20bfc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_20bfc8:
    // 0x20bfc8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x20bfc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_20bfcc:
    // 0x20bfcc: 0x4614181a  mula.s      $f3, $f20
    ctx->pc = 0x20bfccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_20bfd0:
    // 0x20bfd0: 0x461564c1  sub.s       $f19, $f12, $f21
    ctx->pc = 0x20bfd0u;
    ctx->f[19] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
label_20bfd4:
    // 0x20bfd4: 0x4600149d  msub.s      $f18, $f2, $f0
    ctx->pc = 0x20bfd4u;
    ctx->f[18] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_20bfd8:
    // 0x20bfd8: 0x46156841  sub.s       $f1, $f13, $f21
    ctx->pc = 0x20bfd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
label_20bfdc:
    // 0x20bfdc: 0x4613101a  mula.s      $f2, $f19
    ctx->pc = 0x20bfdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
label_20bfe0:
    // 0x20bfe0: 0x46140b5d  msub.s      $f13, $f1, $f20
    ctx->pc = 0x20bfe0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_20bfe4:
    // 0x20bfe4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x20bfe4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20bfe8:
    // 0x20bfe8: 0x46131b1d  msub.s      $f12, $f3, $f19
    ctx->pc = 0x20bfe8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[19]));
label_20bfec:
    // 0x20bfec: 0x460f601a  mula.s      $f12, $f15
    ctx->pc = 0x20bfecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
label_20bff0:
    // 0x20bff0: 0x460e681e  madda.s     $f13, $f14
    ctx->pc = 0x20bff0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[14]));
label_20bff4:
    // 0x20bff4: 0x4610931c  madd.s      $f12, $f18, $f16
    ctx->pc = 0x20bff4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[16]));
label_20bff8:
    // 0x20bff8: 0x46066034  c.lt.s      $f12, $f6
    ctx->pc = 0x20bff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20bffc:
    // 0x20bffc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x20bffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_20c000:
    // 0x20c000: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x20c000u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20c004:
    // 0x20c004: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x20c004u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_20c008:
    // 0x20c008: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
label_20c00c:
    if (ctx->pc == 0x20C00Cu) {
        ctx->pc = 0x20C00Cu;
            // 0x20c00c: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x20C010u;
        goto label_20c010;
    }
    ctx->pc = 0x20C008u;
    {
        const bool branch_taken_0x20c008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C008u;
            // 0x20c00c: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c008) {
            ctx->pc = 0x20C1C4u;
            goto label_20c1c4;
        }
    }
    ctx->pc = 0x20C010u;
label_20c010:
    // 0x20c010: 0x46055b01  sub.s       $f12, $f11, $f5
    ctx->pc = 0x20c010u;
    ctx->f[12] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
label_20c014:
    // 0x20c014: 0x460452c1  sub.s       $f11, $f10, $f4
    ctx->pc = 0x20c014u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
label_20c018:
    // 0x20c018: 0x460b0102  mul.s       $f4, $f0, $f11
    ctx->pc = 0x20c018u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_20c01c:
    // 0x20c01c: 0x46154a81  sub.s       $f10, $f9, $f21
    ctx->pc = 0x20c01cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[21]);
label_20c020:
    // 0x20c020: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x20c020u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_20c024:
    // 0x20c024: 0x460aa102  mul.s       $f4, $f20, $f10
    ctx->pc = 0x20c024u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
label_20c028:
    // 0x20c028: 0x460ca25d  msub.s      $f9, $f20, $f12
    ctx->pc = 0x20c028u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[12]));
label_20c02c:
    // 0x20c02c: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x20c02cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_20c030:
    // 0x20c030: 0x460c9902  mul.s       $f4, $f19, $f12
    ctx->pc = 0x20c030u;
    ctx->f[4] = FPU_MUL_S(ctx->f[19], ctx->f[12]);
label_20c034:
    // 0x20c034: 0x460b995d  msub.s      $f5, $f19, $f11
    ctx->pc = 0x20c034u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[11]));
label_20c038:
    // 0x20c038: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x20c038u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_20c03c:
    // 0x20c03c: 0x460a001d  msub.s      $f0, $f0, $f10
    ctx->pc = 0x20c03cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[10]));
label_20c040:
    // 0x20c040: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x20c040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
label_20c044:
    // 0x20c044: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c044u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c048:
    // 0x20c048: 0x460e281c  madd.s      $f0, $f5, $f14
    ctx->pc = 0x20c048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[14]));
label_20c04c:
    // 0x20c04c: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c04cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c050:
    // 0x20c050: 0x4610481c  madd.s      $f0, $f9, $f16
    ctx->pc = 0x20c050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[16]));
label_20c054:
    // 0x20c054: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20c054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c058:
    // 0x20c058: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
label_20c05c:
    if (ctx->pc == 0x20C05Cu) {
        ctx->pc = 0x20C060u;
        goto label_20c060;
    }
    ctx->pc = 0x20C058u;
    {
        const bool branch_taken_0x20c058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c058) {
            ctx->pc = 0x20C1C4u;
            goto label_20c1c4;
        }
    }
    ctx->pc = 0x20C060u;
label_20c060:
    // 0x20c060: 0x46026002  mul.s       $f0, $f12, $f2
    ctx->pc = 0x20c060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_20c064:
    // 0x20c064: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c064u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c068:
    // 0x20c068: 0x46015802  mul.s       $f0, $f11, $f1
    ctx->pc = 0x20c068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
label_20c06c:
    // 0x20c06c: 0x4603591d  msub.s      $f4, $f11, $f3
    ctx->pc = 0x20c06cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[3]));
label_20c070:
    // 0x20c070: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c070u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c074:
    // 0x20c074: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x20c074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_20c078:
    // 0x20c078: 0x4602509d  msub.s      $f2, $f10, $f2
    ctx->pc = 0x20c078u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
label_20c07c:
    // 0x20c07c: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c07cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c080:
    // 0x20c080: 0x4601601d  msub.s      $f0, $f12, $f1
    ctx->pc = 0x20c080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_20c084:
    // 0x20c084: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x20c084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
label_20c088:
    // 0x20c088: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c088u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c08c:
    // 0x20c08c: 0x460e101c  madd.s      $f0, $f2, $f14
    ctx->pc = 0x20c08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[14]));
label_20c090:
    // 0x20c090: 0x46003818  adda.s      $f7, $f0
    ctx->pc = 0x20c090u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_20c094:
    // 0x20c094: 0x4610201c  madd.s      $f0, $f4, $f16
    ctx->pc = 0x20c094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[16]));
label_20c098:
    // 0x20c098: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20c098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c09c:
    // 0x20c09c: 0x45010049  bc1t        . + 4 + (0x49 << 2)
label_20c0a0:
    if (ctx->pc == 0x20C0A0u) {
        ctx->pc = 0x20C0A4u;
        goto label_20c0a4;
    }
    ctx->pc = 0x20C09Cu;
    {
        const bool branch_taken_0x20c09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c09c) {
            ctx->pc = 0x20C1C4u;
            goto label_20c1c4;
        }
    }
    ctx->pc = 0x20C0A4u;
label_20c0a4:
    // 0x20c0a4: 0x46078836  c.le.s      $f17, $f7
    ctx->pc = 0x20c0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c0a8:
    // 0x20c0a8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_20c0ac:
    if (ctx->pc == 0x20C0ACu) {
        ctx->pc = 0x20C0ACu;
            // 0x20c0ac: 0xe4e80010  swc1        $f8, 0x10($a3) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->pc = 0x20C0B0u;
        goto label_20c0b0;
    }
    ctx->pc = 0x20C0A8u;
    {
        const bool branch_taken_0x20c0a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C0A8u;
            // 0x20c0ac: 0xe4e80010  swc1        $f8, 0x10($a3) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0a8) {
            ctx->pc = 0x20C0C4u;
            goto label_20c0c4;
        }
    }
    ctx->pc = 0x20C0B0u;
label_20c0b0:
    // 0x20c0b0: 0xe4ee0000  swc1        $f14, 0x0($a3)
    ctx->pc = 0x20c0b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20c0b4:
    // 0x20c0b4: 0xe4ef0004  swc1        $f15, 0x4($a3)
    ctx->pc = 0x20c0b4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20c0b8:
    // 0x20c0b8: 0xe4f00008  swc1        $f16, 0x8($a3)
    ctx->pc = 0x20c0b8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20c0bc:
    // 0x20c0bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_20c0c0:
    if (ctx->pc == 0x20C0C0u) {
        ctx->pc = 0x20C0C0u;
            // 0x20c0c0: 0xe4e7000c  swc1        $f7, 0xC($a3) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->pc = 0x20C0C4u;
        goto label_20c0c4;
    }
    ctx->pc = 0x20C0BCu;
    {
        const bool branch_taken_0x20c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C0BCu;
            // 0x20c0c0: 0xe4e7000c  swc1        $f7, 0xC($a3) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0bc) {
            ctx->pc = 0x20C0E4u;
            goto label_20c0e4;
        }
    }
    ctx->pc = 0x20C0C4u;
label_20c0c4:
    // 0x20c0c4: 0x46007007  neg.s       $f0, $f14
    ctx->pc = 0x20c0c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[14]);
label_20c0c8:
    // 0x20c0c8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20c0cc:
    // 0x20c0cc: 0x46007807  neg.s       $f0, $f15
    ctx->pc = 0x20c0ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[15]);
label_20c0d0:
    // 0x20c0d0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20c0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20c0d4:
    // 0x20c0d4: 0x46008007  neg.s       $f0, $f16
    ctx->pc = 0x20c0d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[16]);
label_20c0d8:
    // 0x20c0d8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20c0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20c0dc:
    // 0x20c0dc: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x20c0dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
label_20c0e0:
    // 0x20c0e0: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20c0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20c0e4:
    // 0x20c0e4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x20c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20c0e8:
    // 0x20c0e8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x20c0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c0ec:
    // 0x20c0ec: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c0f0:
    // 0x20c0f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x20c0f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_20c0f4:
    // 0x20c0f4: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x20c0f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_20c0f8:
    // 0x20c0f8: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x20c0f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_20c0fc:
    // 0x20c0fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20c0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20c100:
    // 0x20c100: 0x0  nop
    ctx->pc = 0x20c100u;
    // NOP
label_20c104:
    // 0x20c104: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x20c104u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20c108:
    // 0x20c108: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20c10c:
    if (ctx->pc == 0x20C10Cu) {
        ctx->pc = 0x20C110u;
        goto label_20c110;
    }
    ctx->pc = 0x20C108u;
    {
        const bool branch_taken_0x20c108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c108) {
            ctx->pc = 0x20C12Cu;
            goto label_20c12c;
        }
    }
    ctx->pc = 0x20C110u;
label_20c110:
    // 0x20c110: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20c114:
    // 0x20c114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c118:
    // 0x20c118: 0x0  nop
    ctx->pc = 0x20c118u;
    // NOP
label_20c11c:
    // 0x20c11c: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x20c11cu;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
label_20c120:
    // 0x20c120: 0x0  nop
    ctx->pc = 0x20c120u;
    // NOP
label_20c124:
    // 0x20c124: 0x0  nop
    ctx->pc = 0x20c124u;
    // NOP
label_20c128:
    // 0x20c128: 0x0  nop
    ctx->pc = 0x20c128u;
    // NOP
label_20c12c:
    // 0x20c12c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x20c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c130:
    // 0x20c130: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_20c134:
    // 0x20c134: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20c134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20c138:
    // 0x20c138: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20c13c:
    // 0x20c13c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20c140:
    // 0x20c140: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20c140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20c144:
    // 0x20c144: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_20c148:
    // 0x20c148: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x20c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c14c:
    // 0x20c14c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20c14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20c150:
    // 0x20c150: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20c154:
    // 0x20c154: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c158:
    // 0x20c158: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20c158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20c15c:
    // 0x20c15c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20c15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_20c160:
    // 0x20c160: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x20c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c164:
    // 0x20c164: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20c164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20c168:
    // 0x20c168: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20c16c:
    // 0x20c16c: 0x8ce80040  lw          $t0, 0x40($a3)
    ctx->pc = 0x20c16cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_20c170:
    // 0x20c170: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x20c170u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_20c174:
    // 0x20c174: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_20c178:
    // 0x20c178: 0xace90020  sw          $t1, 0x20($a3)
    ctx->pc = 0x20c178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 9));
label_20c17c:
    // 0x20c17c: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_20c180:
    // 0x20c180: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20c180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20c184:
    // 0x20c184: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20c184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20c188:
    // 0x20c188: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20c18c:
    if (ctx->pc == 0x20C18Cu) {
        ctx->pc = 0x20C18Cu;
            // 0x20c18c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x20C190u;
        goto label_20c190;
    }
    ctx->pc = 0x20C188u;
    {
        const bool branch_taken_0x20c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C188u;
            // 0x20c18c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c188) {
            ctx->pc = 0x20C1B8u;
            goto label_20c1b8;
        }
    }
    ctx->pc = 0x20C190u;
label_20c190:
    // 0x20c190: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x20c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20c194:
    // 0x20c194: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20c194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20c198:
    // 0x20c198: 0x2463c068  addiu       $v1, $v1, -0x3F98
    ctx->pc = 0x20c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951016));
label_20c19c:
    // 0x20c19c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20c1a0:
    // 0x20c1a0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20c1a4:
    // 0x20c1a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20c1a8:
    // 0x20c1a8: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20c1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_20c1ac:
    // 0x20c1ac: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x20c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_20c1b0:
    // 0x20c1b0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x20c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_20c1b4:
    // 0x20c1b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20c1b8:
    // 0x20c1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c1bc:
    // 0x20c1bc: 0x10000014  b           . + 4 + (0x14 << 2)
label_20c1c0:
    if (ctx->pc == 0x20C1C0u) {
        ctx->pc = 0x20C1C0u;
            // 0x20c1c0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20C1C4u;
        goto label_20c1c4;
    }
    ctx->pc = 0x20C1BCu;
    {
        const bool branch_taken_0x20c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1BCu;
            // 0x20c1c0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1bc) {
            ctx->pc = 0x20C210u;
            goto label_20c210;
        }
    }
    ctx->pc = 0x20C1C4u;
label_20c1c4:
    // 0x20c1c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20c1c8:
    // 0x20c1c8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_20c1cc:
    // 0x20c1cc: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x20c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_20c1d0:
    // 0x20c1d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20c1d4:
    // 0x20c1d4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20c1d8:
    // 0x20c1d8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20c1d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20c1dc:
    // 0x20c1dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20c1e0:
    if (ctx->pc == 0x20C1E0u) {
        ctx->pc = 0x20C1E0u;
            // 0x20c1e0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x20C1E4u;
        goto label_20c1e4;
    }
    ctx->pc = 0x20C1DCu;
    {
        const bool branch_taken_0x20c1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1DCu;
            // 0x20c1e0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1dc) {
            ctx->pc = 0x20C20Cu;
            goto label_20c20c;
        }
    }
    ctx->pc = 0x20C1E4u;
label_20c1e4:
    // 0x20c1e4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20c1e8:
    // 0x20c1e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20c1ec:
    // 0x20c1ec: 0x2463c068  addiu       $v1, $v1, -0x3F98
    ctx->pc = 0x20c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951016));
label_20c1f0:
    // 0x20c1f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20c1f4:
    // 0x20c1f4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20c1f8:
    // 0x20c1f8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20c1fc:
    // 0x20c1fc: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20c1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_20c200:
    // 0x20c200: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x20c200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_20c204:
    // 0x20c204: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x20c204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_20c208:
    // 0x20c208: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20c208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20c20c:
    // 0x20c20c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x20c20cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_20c210:
    // 0x20c210: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x20c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20c214:
    // 0x20c214: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20c214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20c218:
    // 0x20c218: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c21c:
    // 0x20c21c: 0x3e00008  jr          $ra
label_20c220:
    if (ctx->pc == 0x20C220u) {
        ctx->pc = 0x20C220u;
            // 0x20c220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20C224u;
        goto label_20c224;
    }
    ctx->pc = 0x20C21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C21Cu;
            // 0x20c220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C224u;
label_20c224:
    // 0x20c224: 0x0  nop
    ctx->pc = 0x20c224u;
    // NOP
label_20c228:
    // 0x20c228: 0x0  nop
    ctx->pc = 0x20c228u;
    // NOP
label_20c22c:
    // 0x20c22c: 0x0  nop
    ctx->pc = 0x20c22cu;
    // NOP
label_20c230:
    // 0x20c230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c234:
    // 0x20c234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20c238:
    // 0x20c238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20c23c:
    // 0x20c23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c240:
    // 0x20c240: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_20c244:
    if (ctx->pc == 0x20C244u) {
        ctx->pc = 0x20C244u;
            // 0x20c244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C248u;
        goto label_20c248;
    }
    ctx->pc = 0x20C240u;
    {
        const bool branch_taken_0x20c240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c240) {
            ctx->pc = 0x20C244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C240u;
            // 0x20c244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C2D0u;
            goto label_20c2d0;
        }
    }
    ctx->pc = 0x20C248u;
label_20c248:
    // 0x20c248: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c24c:
    // 0x20c24c: 0x2442e600  addiu       $v0, $v0, -0x1A00
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960640));
label_20c250:
    // 0x20c250: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_20c254:
    if (ctx->pc == 0x20C254u) {
        ctx->pc = 0x20C254u;
            // 0x20c254: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C258u;
        goto label_20c258;
    }
    ctx->pc = 0x20C250u;
    {
        const bool branch_taken_0x20c250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C250u;
            // 0x20c254: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c250) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C258u;
label_20c258:
    // 0x20c258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c25c:
    // 0x20c25c: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x20c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_20c260:
    // 0x20c260: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_20c264:
    if (ctx->pc == 0x20C264u) {
        ctx->pc = 0x20C264u;
            // 0x20c264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C268u;
        goto label_20c268;
    }
    ctx->pc = 0x20C260u;
    {
        const bool branch_taken_0x20c260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C260u;
            // 0x20c264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c260) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C268u;
label_20c268:
    // 0x20c268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c26c:
    // 0x20c26c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_20c270:
    // 0x20c270: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_20c274:
    if (ctx->pc == 0x20C274u) {
        ctx->pc = 0x20C274u;
            // 0x20c274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C278u;
        goto label_20c278;
    }
    ctx->pc = 0x20C270u;
    {
        const bool branch_taken_0x20c270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C270u;
            // 0x20c274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c270) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C278u;
label_20c278:
    // 0x20c278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c27c:
    // 0x20c27c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x20c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_20c280:
    // 0x20c280: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_20c284:
    if (ctx->pc == 0x20C284u) {
        ctx->pc = 0x20C284u;
            // 0x20c284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C288u;
        goto label_20c288;
    }
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C280u;
            // 0x20c284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C288u;
label_20c288:
    // 0x20c288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c28c:
    // 0x20c28c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_20c290:
    // 0x20c290: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_20c294:
    if (ctx->pc == 0x20C294u) {
        ctx->pc = 0x20C294u;
            // 0x20c294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C298u;
        goto label_20c298;
    }
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C290u;
            // 0x20c294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C298u;
label_20c298:
    // 0x20c298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20c29c:
    // 0x20c29c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20c2a0:
    // 0x20c2a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20c2a4:
    // 0x20c2a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x20c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_20c2a8:
    // 0x20c2a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20c2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_20c2ac:
    // 0x20c2ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_20c2b0:
    if (ctx->pc == 0x20C2B0u) {
        ctx->pc = 0x20C2B4u;
        goto label_20c2b4;
    }
    ctx->pc = 0x20C2ACu;
    {
        const bool branch_taken_0x20c2ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20c2ac) {
            ctx->pc = 0x20C2CCu;
            goto label_20c2cc;
        }
    }
    ctx->pc = 0x20C2B4u;
label_20c2b4:
    // 0x20c2b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c2b8:
    // 0x20c2b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x20c2b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_20c2bc:
    // 0x20c2bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20c2c0:
    // 0x20c2c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c2c4:
    // 0x20c2c4: 0xc0a7ab4  jal         func_29EAD0
label_20c2c8:
    if (ctx->pc == 0x20C2C8u) {
        ctx->pc = 0x20C2C8u;
            // 0x20c2c8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x20C2CCu;
        goto label_20c2cc;
    }
    ctx->pc = 0x20C2C4u;
    SET_GPR_U32(ctx, 31, 0x20C2CCu);
    ctx->pc = 0x20C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2C4u;
            // 0x20c2c8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2CCu; }
        if (ctx->pc != 0x20C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2CCu; }
        if (ctx->pc != 0x20C2CCu) { return; }
    }
    ctx->pc = 0x20C2CCu;
label_20c2cc:
    // 0x20c2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20c2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c2d0:
    // 0x20c2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20c2d4:
    // 0x20c2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20c2d8:
    // 0x20c2d8: 0x3e00008  jr          $ra
label_20c2dc:
    if (ctx->pc == 0x20C2DCu) {
        ctx->pc = 0x20C2DCu;
            // 0x20c2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x20C2E0u;
        goto label_20c2e0;
    }
    ctx->pc = 0x20C2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2D8u;
            // 0x20c2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C2E0u;
label_20c2e0:
    // 0x20c2e0: 0x3e00008  jr          $ra
label_20c2e4:
    if (ctx->pc == 0x20C2E4u) {
        ctx->pc = 0x20C2E4u;
            // 0x20c2e4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x20C2E8u;
        goto label_20c2e8;
    }
    ctx->pc = 0x20C2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2E0u;
            // 0x20c2e4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C2E8u;
label_20c2e8:
    // 0x20c2e8: 0x0  nop
    ctx->pc = 0x20c2e8u;
    // NOP
label_20c2ec:
    // 0x20c2ec: 0x0  nop
    ctx->pc = 0x20c2ecu;
    // NOP
}
