#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054A4B0
// Address: 0x54a4b0 - 0x54c190
void sub_0054A4B0_0x54a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054A4B0_0x54a4b0");
#endif

    switch (ctx->pc) {
        case 0x54a4b0u: goto label_54a4b0;
        case 0x54a4b4u: goto label_54a4b4;
        case 0x54a4b8u: goto label_54a4b8;
        case 0x54a4bcu: goto label_54a4bc;
        case 0x54a4c0u: goto label_54a4c0;
        case 0x54a4c4u: goto label_54a4c4;
        case 0x54a4c8u: goto label_54a4c8;
        case 0x54a4ccu: goto label_54a4cc;
        case 0x54a4d0u: goto label_54a4d0;
        case 0x54a4d4u: goto label_54a4d4;
        case 0x54a4d8u: goto label_54a4d8;
        case 0x54a4dcu: goto label_54a4dc;
        case 0x54a4e0u: goto label_54a4e0;
        case 0x54a4e4u: goto label_54a4e4;
        case 0x54a4e8u: goto label_54a4e8;
        case 0x54a4ecu: goto label_54a4ec;
        case 0x54a4f0u: goto label_54a4f0;
        case 0x54a4f4u: goto label_54a4f4;
        case 0x54a4f8u: goto label_54a4f8;
        case 0x54a4fcu: goto label_54a4fc;
        case 0x54a500u: goto label_54a500;
        case 0x54a504u: goto label_54a504;
        case 0x54a508u: goto label_54a508;
        case 0x54a50cu: goto label_54a50c;
        case 0x54a510u: goto label_54a510;
        case 0x54a514u: goto label_54a514;
        case 0x54a518u: goto label_54a518;
        case 0x54a51cu: goto label_54a51c;
        case 0x54a520u: goto label_54a520;
        case 0x54a524u: goto label_54a524;
        case 0x54a528u: goto label_54a528;
        case 0x54a52cu: goto label_54a52c;
        case 0x54a530u: goto label_54a530;
        case 0x54a534u: goto label_54a534;
        case 0x54a538u: goto label_54a538;
        case 0x54a53cu: goto label_54a53c;
        case 0x54a540u: goto label_54a540;
        case 0x54a544u: goto label_54a544;
        case 0x54a548u: goto label_54a548;
        case 0x54a54cu: goto label_54a54c;
        case 0x54a550u: goto label_54a550;
        case 0x54a554u: goto label_54a554;
        case 0x54a558u: goto label_54a558;
        case 0x54a55cu: goto label_54a55c;
        case 0x54a560u: goto label_54a560;
        case 0x54a564u: goto label_54a564;
        case 0x54a568u: goto label_54a568;
        case 0x54a56cu: goto label_54a56c;
        case 0x54a570u: goto label_54a570;
        case 0x54a574u: goto label_54a574;
        case 0x54a578u: goto label_54a578;
        case 0x54a57cu: goto label_54a57c;
        case 0x54a580u: goto label_54a580;
        case 0x54a584u: goto label_54a584;
        case 0x54a588u: goto label_54a588;
        case 0x54a58cu: goto label_54a58c;
        case 0x54a590u: goto label_54a590;
        case 0x54a594u: goto label_54a594;
        case 0x54a598u: goto label_54a598;
        case 0x54a59cu: goto label_54a59c;
        case 0x54a5a0u: goto label_54a5a0;
        case 0x54a5a4u: goto label_54a5a4;
        case 0x54a5a8u: goto label_54a5a8;
        case 0x54a5acu: goto label_54a5ac;
        case 0x54a5b0u: goto label_54a5b0;
        case 0x54a5b4u: goto label_54a5b4;
        case 0x54a5b8u: goto label_54a5b8;
        case 0x54a5bcu: goto label_54a5bc;
        case 0x54a5c0u: goto label_54a5c0;
        case 0x54a5c4u: goto label_54a5c4;
        case 0x54a5c8u: goto label_54a5c8;
        case 0x54a5ccu: goto label_54a5cc;
        case 0x54a5d0u: goto label_54a5d0;
        case 0x54a5d4u: goto label_54a5d4;
        case 0x54a5d8u: goto label_54a5d8;
        case 0x54a5dcu: goto label_54a5dc;
        case 0x54a5e0u: goto label_54a5e0;
        case 0x54a5e4u: goto label_54a5e4;
        case 0x54a5e8u: goto label_54a5e8;
        case 0x54a5ecu: goto label_54a5ec;
        case 0x54a5f0u: goto label_54a5f0;
        case 0x54a5f4u: goto label_54a5f4;
        case 0x54a5f8u: goto label_54a5f8;
        case 0x54a5fcu: goto label_54a5fc;
        case 0x54a600u: goto label_54a600;
        case 0x54a604u: goto label_54a604;
        case 0x54a608u: goto label_54a608;
        case 0x54a60cu: goto label_54a60c;
        case 0x54a610u: goto label_54a610;
        case 0x54a614u: goto label_54a614;
        case 0x54a618u: goto label_54a618;
        case 0x54a61cu: goto label_54a61c;
        case 0x54a620u: goto label_54a620;
        case 0x54a624u: goto label_54a624;
        case 0x54a628u: goto label_54a628;
        case 0x54a62cu: goto label_54a62c;
        case 0x54a630u: goto label_54a630;
        case 0x54a634u: goto label_54a634;
        case 0x54a638u: goto label_54a638;
        case 0x54a63cu: goto label_54a63c;
        case 0x54a640u: goto label_54a640;
        case 0x54a644u: goto label_54a644;
        case 0x54a648u: goto label_54a648;
        case 0x54a64cu: goto label_54a64c;
        case 0x54a650u: goto label_54a650;
        case 0x54a654u: goto label_54a654;
        case 0x54a658u: goto label_54a658;
        case 0x54a65cu: goto label_54a65c;
        case 0x54a660u: goto label_54a660;
        case 0x54a664u: goto label_54a664;
        case 0x54a668u: goto label_54a668;
        case 0x54a66cu: goto label_54a66c;
        case 0x54a670u: goto label_54a670;
        case 0x54a674u: goto label_54a674;
        case 0x54a678u: goto label_54a678;
        case 0x54a67cu: goto label_54a67c;
        case 0x54a680u: goto label_54a680;
        case 0x54a684u: goto label_54a684;
        case 0x54a688u: goto label_54a688;
        case 0x54a68cu: goto label_54a68c;
        case 0x54a690u: goto label_54a690;
        case 0x54a694u: goto label_54a694;
        case 0x54a698u: goto label_54a698;
        case 0x54a69cu: goto label_54a69c;
        case 0x54a6a0u: goto label_54a6a0;
        case 0x54a6a4u: goto label_54a6a4;
        case 0x54a6a8u: goto label_54a6a8;
        case 0x54a6acu: goto label_54a6ac;
        case 0x54a6b0u: goto label_54a6b0;
        case 0x54a6b4u: goto label_54a6b4;
        case 0x54a6b8u: goto label_54a6b8;
        case 0x54a6bcu: goto label_54a6bc;
        case 0x54a6c0u: goto label_54a6c0;
        case 0x54a6c4u: goto label_54a6c4;
        case 0x54a6c8u: goto label_54a6c8;
        case 0x54a6ccu: goto label_54a6cc;
        case 0x54a6d0u: goto label_54a6d0;
        case 0x54a6d4u: goto label_54a6d4;
        case 0x54a6d8u: goto label_54a6d8;
        case 0x54a6dcu: goto label_54a6dc;
        case 0x54a6e0u: goto label_54a6e0;
        case 0x54a6e4u: goto label_54a6e4;
        case 0x54a6e8u: goto label_54a6e8;
        case 0x54a6ecu: goto label_54a6ec;
        case 0x54a6f0u: goto label_54a6f0;
        case 0x54a6f4u: goto label_54a6f4;
        case 0x54a6f8u: goto label_54a6f8;
        case 0x54a6fcu: goto label_54a6fc;
        case 0x54a700u: goto label_54a700;
        case 0x54a704u: goto label_54a704;
        case 0x54a708u: goto label_54a708;
        case 0x54a70cu: goto label_54a70c;
        case 0x54a710u: goto label_54a710;
        case 0x54a714u: goto label_54a714;
        case 0x54a718u: goto label_54a718;
        case 0x54a71cu: goto label_54a71c;
        case 0x54a720u: goto label_54a720;
        case 0x54a724u: goto label_54a724;
        case 0x54a728u: goto label_54a728;
        case 0x54a72cu: goto label_54a72c;
        case 0x54a730u: goto label_54a730;
        case 0x54a734u: goto label_54a734;
        case 0x54a738u: goto label_54a738;
        case 0x54a73cu: goto label_54a73c;
        case 0x54a740u: goto label_54a740;
        case 0x54a744u: goto label_54a744;
        case 0x54a748u: goto label_54a748;
        case 0x54a74cu: goto label_54a74c;
        case 0x54a750u: goto label_54a750;
        case 0x54a754u: goto label_54a754;
        case 0x54a758u: goto label_54a758;
        case 0x54a75cu: goto label_54a75c;
        case 0x54a760u: goto label_54a760;
        case 0x54a764u: goto label_54a764;
        case 0x54a768u: goto label_54a768;
        case 0x54a76cu: goto label_54a76c;
        case 0x54a770u: goto label_54a770;
        case 0x54a774u: goto label_54a774;
        case 0x54a778u: goto label_54a778;
        case 0x54a77cu: goto label_54a77c;
        case 0x54a780u: goto label_54a780;
        case 0x54a784u: goto label_54a784;
        case 0x54a788u: goto label_54a788;
        case 0x54a78cu: goto label_54a78c;
        case 0x54a790u: goto label_54a790;
        case 0x54a794u: goto label_54a794;
        case 0x54a798u: goto label_54a798;
        case 0x54a79cu: goto label_54a79c;
        case 0x54a7a0u: goto label_54a7a0;
        case 0x54a7a4u: goto label_54a7a4;
        case 0x54a7a8u: goto label_54a7a8;
        case 0x54a7acu: goto label_54a7ac;
        case 0x54a7b0u: goto label_54a7b0;
        case 0x54a7b4u: goto label_54a7b4;
        case 0x54a7b8u: goto label_54a7b8;
        case 0x54a7bcu: goto label_54a7bc;
        case 0x54a7c0u: goto label_54a7c0;
        case 0x54a7c4u: goto label_54a7c4;
        case 0x54a7c8u: goto label_54a7c8;
        case 0x54a7ccu: goto label_54a7cc;
        case 0x54a7d0u: goto label_54a7d0;
        case 0x54a7d4u: goto label_54a7d4;
        case 0x54a7d8u: goto label_54a7d8;
        case 0x54a7dcu: goto label_54a7dc;
        case 0x54a7e0u: goto label_54a7e0;
        case 0x54a7e4u: goto label_54a7e4;
        case 0x54a7e8u: goto label_54a7e8;
        case 0x54a7ecu: goto label_54a7ec;
        case 0x54a7f0u: goto label_54a7f0;
        case 0x54a7f4u: goto label_54a7f4;
        case 0x54a7f8u: goto label_54a7f8;
        case 0x54a7fcu: goto label_54a7fc;
        case 0x54a800u: goto label_54a800;
        case 0x54a804u: goto label_54a804;
        case 0x54a808u: goto label_54a808;
        case 0x54a80cu: goto label_54a80c;
        case 0x54a810u: goto label_54a810;
        case 0x54a814u: goto label_54a814;
        case 0x54a818u: goto label_54a818;
        case 0x54a81cu: goto label_54a81c;
        case 0x54a820u: goto label_54a820;
        case 0x54a824u: goto label_54a824;
        case 0x54a828u: goto label_54a828;
        case 0x54a82cu: goto label_54a82c;
        case 0x54a830u: goto label_54a830;
        case 0x54a834u: goto label_54a834;
        case 0x54a838u: goto label_54a838;
        case 0x54a83cu: goto label_54a83c;
        case 0x54a840u: goto label_54a840;
        case 0x54a844u: goto label_54a844;
        case 0x54a848u: goto label_54a848;
        case 0x54a84cu: goto label_54a84c;
        case 0x54a850u: goto label_54a850;
        case 0x54a854u: goto label_54a854;
        case 0x54a858u: goto label_54a858;
        case 0x54a85cu: goto label_54a85c;
        case 0x54a860u: goto label_54a860;
        case 0x54a864u: goto label_54a864;
        case 0x54a868u: goto label_54a868;
        case 0x54a86cu: goto label_54a86c;
        case 0x54a870u: goto label_54a870;
        case 0x54a874u: goto label_54a874;
        case 0x54a878u: goto label_54a878;
        case 0x54a87cu: goto label_54a87c;
        case 0x54a880u: goto label_54a880;
        case 0x54a884u: goto label_54a884;
        case 0x54a888u: goto label_54a888;
        case 0x54a88cu: goto label_54a88c;
        case 0x54a890u: goto label_54a890;
        case 0x54a894u: goto label_54a894;
        case 0x54a898u: goto label_54a898;
        case 0x54a89cu: goto label_54a89c;
        case 0x54a8a0u: goto label_54a8a0;
        case 0x54a8a4u: goto label_54a8a4;
        case 0x54a8a8u: goto label_54a8a8;
        case 0x54a8acu: goto label_54a8ac;
        case 0x54a8b0u: goto label_54a8b0;
        case 0x54a8b4u: goto label_54a8b4;
        case 0x54a8b8u: goto label_54a8b8;
        case 0x54a8bcu: goto label_54a8bc;
        case 0x54a8c0u: goto label_54a8c0;
        case 0x54a8c4u: goto label_54a8c4;
        case 0x54a8c8u: goto label_54a8c8;
        case 0x54a8ccu: goto label_54a8cc;
        case 0x54a8d0u: goto label_54a8d0;
        case 0x54a8d4u: goto label_54a8d4;
        case 0x54a8d8u: goto label_54a8d8;
        case 0x54a8dcu: goto label_54a8dc;
        case 0x54a8e0u: goto label_54a8e0;
        case 0x54a8e4u: goto label_54a8e4;
        case 0x54a8e8u: goto label_54a8e8;
        case 0x54a8ecu: goto label_54a8ec;
        case 0x54a8f0u: goto label_54a8f0;
        case 0x54a8f4u: goto label_54a8f4;
        case 0x54a8f8u: goto label_54a8f8;
        case 0x54a8fcu: goto label_54a8fc;
        case 0x54a900u: goto label_54a900;
        case 0x54a904u: goto label_54a904;
        case 0x54a908u: goto label_54a908;
        case 0x54a90cu: goto label_54a90c;
        case 0x54a910u: goto label_54a910;
        case 0x54a914u: goto label_54a914;
        case 0x54a918u: goto label_54a918;
        case 0x54a91cu: goto label_54a91c;
        case 0x54a920u: goto label_54a920;
        case 0x54a924u: goto label_54a924;
        case 0x54a928u: goto label_54a928;
        case 0x54a92cu: goto label_54a92c;
        case 0x54a930u: goto label_54a930;
        case 0x54a934u: goto label_54a934;
        case 0x54a938u: goto label_54a938;
        case 0x54a93cu: goto label_54a93c;
        case 0x54a940u: goto label_54a940;
        case 0x54a944u: goto label_54a944;
        case 0x54a948u: goto label_54a948;
        case 0x54a94cu: goto label_54a94c;
        case 0x54a950u: goto label_54a950;
        case 0x54a954u: goto label_54a954;
        case 0x54a958u: goto label_54a958;
        case 0x54a95cu: goto label_54a95c;
        case 0x54a960u: goto label_54a960;
        case 0x54a964u: goto label_54a964;
        case 0x54a968u: goto label_54a968;
        case 0x54a96cu: goto label_54a96c;
        case 0x54a970u: goto label_54a970;
        case 0x54a974u: goto label_54a974;
        case 0x54a978u: goto label_54a978;
        case 0x54a97cu: goto label_54a97c;
        case 0x54a980u: goto label_54a980;
        case 0x54a984u: goto label_54a984;
        case 0x54a988u: goto label_54a988;
        case 0x54a98cu: goto label_54a98c;
        case 0x54a990u: goto label_54a990;
        case 0x54a994u: goto label_54a994;
        case 0x54a998u: goto label_54a998;
        case 0x54a99cu: goto label_54a99c;
        case 0x54a9a0u: goto label_54a9a0;
        case 0x54a9a4u: goto label_54a9a4;
        case 0x54a9a8u: goto label_54a9a8;
        case 0x54a9acu: goto label_54a9ac;
        case 0x54a9b0u: goto label_54a9b0;
        case 0x54a9b4u: goto label_54a9b4;
        case 0x54a9b8u: goto label_54a9b8;
        case 0x54a9bcu: goto label_54a9bc;
        case 0x54a9c0u: goto label_54a9c0;
        case 0x54a9c4u: goto label_54a9c4;
        case 0x54a9c8u: goto label_54a9c8;
        case 0x54a9ccu: goto label_54a9cc;
        case 0x54a9d0u: goto label_54a9d0;
        case 0x54a9d4u: goto label_54a9d4;
        case 0x54a9d8u: goto label_54a9d8;
        case 0x54a9dcu: goto label_54a9dc;
        case 0x54a9e0u: goto label_54a9e0;
        case 0x54a9e4u: goto label_54a9e4;
        case 0x54a9e8u: goto label_54a9e8;
        case 0x54a9ecu: goto label_54a9ec;
        case 0x54a9f0u: goto label_54a9f0;
        case 0x54a9f4u: goto label_54a9f4;
        case 0x54a9f8u: goto label_54a9f8;
        case 0x54a9fcu: goto label_54a9fc;
        case 0x54aa00u: goto label_54aa00;
        case 0x54aa04u: goto label_54aa04;
        case 0x54aa08u: goto label_54aa08;
        case 0x54aa0cu: goto label_54aa0c;
        case 0x54aa10u: goto label_54aa10;
        case 0x54aa14u: goto label_54aa14;
        case 0x54aa18u: goto label_54aa18;
        case 0x54aa1cu: goto label_54aa1c;
        case 0x54aa20u: goto label_54aa20;
        case 0x54aa24u: goto label_54aa24;
        case 0x54aa28u: goto label_54aa28;
        case 0x54aa2cu: goto label_54aa2c;
        case 0x54aa30u: goto label_54aa30;
        case 0x54aa34u: goto label_54aa34;
        case 0x54aa38u: goto label_54aa38;
        case 0x54aa3cu: goto label_54aa3c;
        case 0x54aa40u: goto label_54aa40;
        case 0x54aa44u: goto label_54aa44;
        case 0x54aa48u: goto label_54aa48;
        case 0x54aa4cu: goto label_54aa4c;
        case 0x54aa50u: goto label_54aa50;
        case 0x54aa54u: goto label_54aa54;
        case 0x54aa58u: goto label_54aa58;
        case 0x54aa5cu: goto label_54aa5c;
        case 0x54aa60u: goto label_54aa60;
        case 0x54aa64u: goto label_54aa64;
        case 0x54aa68u: goto label_54aa68;
        case 0x54aa6cu: goto label_54aa6c;
        case 0x54aa70u: goto label_54aa70;
        case 0x54aa74u: goto label_54aa74;
        case 0x54aa78u: goto label_54aa78;
        case 0x54aa7cu: goto label_54aa7c;
        case 0x54aa80u: goto label_54aa80;
        case 0x54aa84u: goto label_54aa84;
        case 0x54aa88u: goto label_54aa88;
        case 0x54aa8cu: goto label_54aa8c;
        case 0x54aa90u: goto label_54aa90;
        case 0x54aa94u: goto label_54aa94;
        case 0x54aa98u: goto label_54aa98;
        case 0x54aa9cu: goto label_54aa9c;
        case 0x54aaa0u: goto label_54aaa0;
        case 0x54aaa4u: goto label_54aaa4;
        case 0x54aaa8u: goto label_54aaa8;
        case 0x54aaacu: goto label_54aaac;
        case 0x54aab0u: goto label_54aab0;
        case 0x54aab4u: goto label_54aab4;
        case 0x54aab8u: goto label_54aab8;
        case 0x54aabcu: goto label_54aabc;
        case 0x54aac0u: goto label_54aac0;
        case 0x54aac4u: goto label_54aac4;
        case 0x54aac8u: goto label_54aac8;
        case 0x54aaccu: goto label_54aacc;
        case 0x54aad0u: goto label_54aad0;
        case 0x54aad4u: goto label_54aad4;
        case 0x54aad8u: goto label_54aad8;
        case 0x54aadcu: goto label_54aadc;
        case 0x54aae0u: goto label_54aae0;
        case 0x54aae4u: goto label_54aae4;
        case 0x54aae8u: goto label_54aae8;
        case 0x54aaecu: goto label_54aaec;
        case 0x54aaf0u: goto label_54aaf0;
        case 0x54aaf4u: goto label_54aaf4;
        case 0x54aaf8u: goto label_54aaf8;
        case 0x54aafcu: goto label_54aafc;
        case 0x54ab00u: goto label_54ab00;
        case 0x54ab04u: goto label_54ab04;
        case 0x54ab08u: goto label_54ab08;
        case 0x54ab0cu: goto label_54ab0c;
        case 0x54ab10u: goto label_54ab10;
        case 0x54ab14u: goto label_54ab14;
        case 0x54ab18u: goto label_54ab18;
        case 0x54ab1cu: goto label_54ab1c;
        case 0x54ab20u: goto label_54ab20;
        case 0x54ab24u: goto label_54ab24;
        case 0x54ab28u: goto label_54ab28;
        case 0x54ab2cu: goto label_54ab2c;
        case 0x54ab30u: goto label_54ab30;
        case 0x54ab34u: goto label_54ab34;
        case 0x54ab38u: goto label_54ab38;
        case 0x54ab3cu: goto label_54ab3c;
        case 0x54ab40u: goto label_54ab40;
        case 0x54ab44u: goto label_54ab44;
        case 0x54ab48u: goto label_54ab48;
        case 0x54ab4cu: goto label_54ab4c;
        case 0x54ab50u: goto label_54ab50;
        case 0x54ab54u: goto label_54ab54;
        case 0x54ab58u: goto label_54ab58;
        case 0x54ab5cu: goto label_54ab5c;
        case 0x54ab60u: goto label_54ab60;
        case 0x54ab64u: goto label_54ab64;
        case 0x54ab68u: goto label_54ab68;
        case 0x54ab6cu: goto label_54ab6c;
        case 0x54ab70u: goto label_54ab70;
        case 0x54ab74u: goto label_54ab74;
        case 0x54ab78u: goto label_54ab78;
        case 0x54ab7cu: goto label_54ab7c;
        case 0x54ab80u: goto label_54ab80;
        case 0x54ab84u: goto label_54ab84;
        case 0x54ab88u: goto label_54ab88;
        case 0x54ab8cu: goto label_54ab8c;
        case 0x54ab90u: goto label_54ab90;
        case 0x54ab94u: goto label_54ab94;
        case 0x54ab98u: goto label_54ab98;
        case 0x54ab9cu: goto label_54ab9c;
        case 0x54aba0u: goto label_54aba0;
        case 0x54aba4u: goto label_54aba4;
        case 0x54aba8u: goto label_54aba8;
        case 0x54abacu: goto label_54abac;
        case 0x54abb0u: goto label_54abb0;
        case 0x54abb4u: goto label_54abb4;
        case 0x54abb8u: goto label_54abb8;
        case 0x54abbcu: goto label_54abbc;
        case 0x54abc0u: goto label_54abc0;
        case 0x54abc4u: goto label_54abc4;
        case 0x54abc8u: goto label_54abc8;
        case 0x54abccu: goto label_54abcc;
        case 0x54abd0u: goto label_54abd0;
        case 0x54abd4u: goto label_54abd4;
        case 0x54abd8u: goto label_54abd8;
        case 0x54abdcu: goto label_54abdc;
        case 0x54abe0u: goto label_54abe0;
        case 0x54abe4u: goto label_54abe4;
        case 0x54abe8u: goto label_54abe8;
        case 0x54abecu: goto label_54abec;
        case 0x54abf0u: goto label_54abf0;
        case 0x54abf4u: goto label_54abf4;
        case 0x54abf8u: goto label_54abf8;
        case 0x54abfcu: goto label_54abfc;
        case 0x54ac00u: goto label_54ac00;
        case 0x54ac04u: goto label_54ac04;
        case 0x54ac08u: goto label_54ac08;
        case 0x54ac0cu: goto label_54ac0c;
        case 0x54ac10u: goto label_54ac10;
        case 0x54ac14u: goto label_54ac14;
        case 0x54ac18u: goto label_54ac18;
        case 0x54ac1cu: goto label_54ac1c;
        case 0x54ac20u: goto label_54ac20;
        case 0x54ac24u: goto label_54ac24;
        case 0x54ac28u: goto label_54ac28;
        case 0x54ac2cu: goto label_54ac2c;
        case 0x54ac30u: goto label_54ac30;
        case 0x54ac34u: goto label_54ac34;
        case 0x54ac38u: goto label_54ac38;
        case 0x54ac3cu: goto label_54ac3c;
        case 0x54ac40u: goto label_54ac40;
        case 0x54ac44u: goto label_54ac44;
        case 0x54ac48u: goto label_54ac48;
        case 0x54ac4cu: goto label_54ac4c;
        case 0x54ac50u: goto label_54ac50;
        case 0x54ac54u: goto label_54ac54;
        case 0x54ac58u: goto label_54ac58;
        case 0x54ac5cu: goto label_54ac5c;
        case 0x54ac60u: goto label_54ac60;
        case 0x54ac64u: goto label_54ac64;
        case 0x54ac68u: goto label_54ac68;
        case 0x54ac6cu: goto label_54ac6c;
        case 0x54ac70u: goto label_54ac70;
        case 0x54ac74u: goto label_54ac74;
        case 0x54ac78u: goto label_54ac78;
        case 0x54ac7cu: goto label_54ac7c;
        case 0x54ac80u: goto label_54ac80;
        case 0x54ac84u: goto label_54ac84;
        case 0x54ac88u: goto label_54ac88;
        case 0x54ac8cu: goto label_54ac8c;
        case 0x54ac90u: goto label_54ac90;
        case 0x54ac94u: goto label_54ac94;
        case 0x54ac98u: goto label_54ac98;
        case 0x54ac9cu: goto label_54ac9c;
        case 0x54aca0u: goto label_54aca0;
        case 0x54aca4u: goto label_54aca4;
        case 0x54aca8u: goto label_54aca8;
        case 0x54acacu: goto label_54acac;
        case 0x54acb0u: goto label_54acb0;
        case 0x54acb4u: goto label_54acb4;
        case 0x54acb8u: goto label_54acb8;
        case 0x54acbcu: goto label_54acbc;
        case 0x54acc0u: goto label_54acc0;
        case 0x54acc4u: goto label_54acc4;
        case 0x54acc8u: goto label_54acc8;
        case 0x54acccu: goto label_54accc;
        case 0x54acd0u: goto label_54acd0;
        case 0x54acd4u: goto label_54acd4;
        case 0x54acd8u: goto label_54acd8;
        case 0x54acdcu: goto label_54acdc;
        case 0x54ace0u: goto label_54ace0;
        case 0x54ace4u: goto label_54ace4;
        case 0x54ace8u: goto label_54ace8;
        case 0x54acecu: goto label_54acec;
        case 0x54acf0u: goto label_54acf0;
        case 0x54acf4u: goto label_54acf4;
        case 0x54acf8u: goto label_54acf8;
        case 0x54acfcu: goto label_54acfc;
        case 0x54ad00u: goto label_54ad00;
        case 0x54ad04u: goto label_54ad04;
        case 0x54ad08u: goto label_54ad08;
        case 0x54ad0cu: goto label_54ad0c;
        case 0x54ad10u: goto label_54ad10;
        case 0x54ad14u: goto label_54ad14;
        case 0x54ad18u: goto label_54ad18;
        case 0x54ad1cu: goto label_54ad1c;
        case 0x54ad20u: goto label_54ad20;
        case 0x54ad24u: goto label_54ad24;
        case 0x54ad28u: goto label_54ad28;
        case 0x54ad2cu: goto label_54ad2c;
        case 0x54ad30u: goto label_54ad30;
        case 0x54ad34u: goto label_54ad34;
        case 0x54ad38u: goto label_54ad38;
        case 0x54ad3cu: goto label_54ad3c;
        case 0x54ad40u: goto label_54ad40;
        case 0x54ad44u: goto label_54ad44;
        case 0x54ad48u: goto label_54ad48;
        case 0x54ad4cu: goto label_54ad4c;
        case 0x54ad50u: goto label_54ad50;
        case 0x54ad54u: goto label_54ad54;
        case 0x54ad58u: goto label_54ad58;
        case 0x54ad5cu: goto label_54ad5c;
        case 0x54ad60u: goto label_54ad60;
        case 0x54ad64u: goto label_54ad64;
        case 0x54ad68u: goto label_54ad68;
        case 0x54ad6cu: goto label_54ad6c;
        case 0x54ad70u: goto label_54ad70;
        case 0x54ad74u: goto label_54ad74;
        case 0x54ad78u: goto label_54ad78;
        case 0x54ad7cu: goto label_54ad7c;
        case 0x54ad80u: goto label_54ad80;
        case 0x54ad84u: goto label_54ad84;
        case 0x54ad88u: goto label_54ad88;
        case 0x54ad8cu: goto label_54ad8c;
        case 0x54ad90u: goto label_54ad90;
        case 0x54ad94u: goto label_54ad94;
        case 0x54ad98u: goto label_54ad98;
        case 0x54ad9cu: goto label_54ad9c;
        case 0x54ada0u: goto label_54ada0;
        case 0x54ada4u: goto label_54ada4;
        case 0x54ada8u: goto label_54ada8;
        case 0x54adacu: goto label_54adac;
        case 0x54adb0u: goto label_54adb0;
        case 0x54adb4u: goto label_54adb4;
        case 0x54adb8u: goto label_54adb8;
        case 0x54adbcu: goto label_54adbc;
        case 0x54adc0u: goto label_54adc0;
        case 0x54adc4u: goto label_54adc4;
        case 0x54adc8u: goto label_54adc8;
        case 0x54adccu: goto label_54adcc;
        case 0x54add0u: goto label_54add0;
        case 0x54add4u: goto label_54add4;
        case 0x54add8u: goto label_54add8;
        case 0x54addcu: goto label_54addc;
        case 0x54ade0u: goto label_54ade0;
        case 0x54ade4u: goto label_54ade4;
        case 0x54ade8u: goto label_54ade8;
        case 0x54adecu: goto label_54adec;
        case 0x54adf0u: goto label_54adf0;
        case 0x54adf4u: goto label_54adf4;
        case 0x54adf8u: goto label_54adf8;
        case 0x54adfcu: goto label_54adfc;
        case 0x54ae00u: goto label_54ae00;
        case 0x54ae04u: goto label_54ae04;
        case 0x54ae08u: goto label_54ae08;
        case 0x54ae0cu: goto label_54ae0c;
        case 0x54ae10u: goto label_54ae10;
        case 0x54ae14u: goto label_54ae14;
        case 0x54ae18u: goto label_54ae18;
        case 0x54ae1cu: goto label_54ae1c;
        case 0x54ae20u: goto label_54ae20;
        case 0x54ae24u: goto label_54ae24;
        case 0x54ae28u: goto label_54ae28;
        case 0x54ae2cu: goto label_54ae2c;
        case 0x54ae30u: goto label_54ae30;
        case 0x54ae34u: goto label_54ae34;
        case 0x54ae38u: goto label_54ae38;
        case 0x54ae3cu: goto label_54ae3c;
        case 0x54ae40u: goto label_54ae40;
        case 0x54ae44u: goto label_54ae44;
        case 0x54ae48u: goto label_54ae48;
        case 0x54ae4cu: goto label_54ae4c;
        case 0x54ae50u: goto label_54ae50;
        case 0x54ae54u: goto label_54ae54;
        case 0x54ae58u: goto label_54ae58;
        case 0x54ae5cu: goto label_54ae5c;
        case 0x54ae60u: goto label_54ae60;
        case 0x54ae64u: goto label_54ae64;
        case 0x54ae68u: goto label_54ae68;
        case 0x54ae6cu: goto label_54ae6c;
        case 0x54ae70u: goto label_54ae70;
        case 0x54ae74u: goto label_54ae74;
        case 0x54ae78u: goto label_54ae78;
        case 0x54ae7cu: goto label_54ae7c;
        case 0x54ae80u: goto label_54ae80;
        case 0x54ae84u: goto label_54ae84;
        case 0x54ae88u: goto label_54ae88;
        case 0x54ae8cu: goto label_54ae8c;
        case 0x54ae90u: goto label_54ae90;
        case 0x54ae94u: goto label_54ae94;
        case 0x54ae98u: goto label_54ae98;
        case 0x54ae9cu: goto label_54ae9c;
        case 0x54aea0u: goto label_54aea0;
        case 0x54aea4u: goto label_54aea4;
        case 0x54aea8u: goto label_54aea8;
        case 0x54aeacu: goto label_54aeac;
        case 0x54aeb0u: goto label_54aeb0;
        case 0x54aeb4u: goto label_54aeb4;
        case 0x54aeb8u: goto label_54aeb8;
        case 0x54aebcu: goto label_54aebc;
        case 0x54aec0u: goto label_54aec0;
        case 0x54aec4u: goto label_54aec4;
        case 0x54aec8u: goto label_54aec8;
        case 0x54aeccu: goto label_54aecc;
        case 0x54aed0u: goto label_54aed0;
        case 0x54aed4u: goto label_54aed4;
        case 0x54aed8u: goto label_54aed8;
        case 0x54aedcu: goto label_54aedc;
        case 0x54aee0u: goto label_54aee0;
        case 0x54aee4u: goto label_54aee4;
        case 0x54aee8u: goto label_54aee8;
        case 0x54aeecu: goto label_54aeec;
        case 0x54aef0u: goto label_54aef0;
        case 0x54aef4u: goto label_54aef4;
        case 0x54aef8u: goto label_54aef8;
        case 0x54aefcu: goto label_54aefc;
        case 0x54af00u: goto label_54af00;
        case 0x54af04u: goto label_54af04;
        case 0x54af08u: goto label_54af08;
        case 0x54af0cu: goto label_54af0c;
        case 0x54af10u: goto label_54af10;
        case 0x54af14u: goto label_54af14;
        case 0x54af18u: goto label_54af18;
        case 0x54af1cu: goto label_54af1c;
        case 0x54af20u: goto label_54af20;
        case 0x54af24u: goto label_54af24;
        case 0x54af28u: goto label_54af28;
        case 0x54af2cu: goto label_54af2c;
        case 0x54af30u: goto label_54af30;
        case 0x54af34u: goto label_54af34;
        case 0x54af38u: goto label_54af38;
        case 0x54af3cu: goto label_54af3c;
        case 0x54af40u: goto label_54af40;
        case 0x54af44u: goto label_54af44;
        case 0x54af48u: goto label_54af48;
        case 0x54af4cu: goto label_54af4c;
        case 0x54af50u: goto label_54af50;
        case 0x54af54u: goto label_54af54;
        case 0x54af58u: goto label_54af58;
        case 0x54af5cu: goto label_54af5c;
        case 0x54af60u: goto label_54af60;
        case 0x54af64u: goto label_54af64;
        case 0x54af68u: goto label_54af68;
        case 0x54af6cu: goto label_54af6c;
        case 0x54af70u: goto label_54af70;
        case 0x54af74u: goto label_54af74;
        case 0x54af78u: goto label_54af78;
        case 0x54af7cu: goto label_54af7c;
        case 0x54af80u: goto label_54af80;
        case 0x54af84u: goto label_54af84;
        case 0x54af88u: goto label_54af88;
        case 0x54af8cu: goto label_54af8c;
        case 0x54af90u: goto label_54af90;
        case 0x54af94u: goto label_54af94;
        case 0x54af98u: goto label_54af98;
        case 0x54af9cu: goto label_54af9c;
        case 0x54afa0u: goto label_54afa0;
        case 0x54afa4u: goto label_54afa4;
        case 0x54afa8u: goto label_54afa8;
        case 0x54afacu: goto label_54afac;
        case 0x54afb0u: goto label_54afb0;
        case 0x54afb4u: goto label_54afb4;
        case 0x54afb8u: goto label_54afb8;
        case 0x54afbcu: goto label_54afbc;
        case 0x54afc0u: goto label_54afc0;
        case 0x54afc4u: goto label_54afc4;
        case 0x54afc8u: goto label_54afc8;
        case 0x54afccu: goto label_54afcc;
        case 0x54afd0u: goto label_54afd0;
        case 0x54afd4u: goto label_54afd4;
        case 0x54afd8u: goto label_54afd8;
        case 0x54afdcu: goto label_54afdc;
        case 0x54afe0u: goto label_54afe0;
        case 0x54afe4u: goto label_54afe4;
        case 0x54afe8u: goto label_54afe8;
        case 0x54afecu: goto label_54afec;
        case 0x54aff0u: goto label_54aff0;
        case 0x54aff4u: goto label_54aff4;
        case 0x54aff8u: goto label_54aff8;
        case 0x54affcu: goto label_54affc;
        case 0x54b000u: goto label_54b000;
        case 0x54b004u: goto label_54b004;
        case 0x54b008u: goto label_54b008;
        case 0x54b00cu: goto label_54b00c;
        case 0x54b010u: goto label_54b010;
        case 0x54b014u: goto label_54b014;
        case 0x54b018u: goto label_54b018;
        case 0x54b01cu: goto label_54b01c;
        case 0x54b020u: goto label_54b020;
        case 0x54b024u: goto label_54b024;
        case 0x54b028u: goto label_54b028;
        case 0x54b02cu: goto label_54b02c;
        case 0x54b030u: goto label_54b030;
        case 0x54b034u: goto label_54b034;
        case 0x54b038u: goto label_54b038;
        case 0x54b03cu: goto label_54b03c;
        case 0x54b040u: goto label_54b040;
        case 0x54b044u: goto label_54b044;
        case 0x54b048u: goto label_54b048;
        case 0x54b04cu: goto label_54b04c;
        case 0x54b050u: goto label_54b050;
        case 0x54b054u: goto label_54b054;
        case 0x54b058u: goto label_54b058;
        case 0x54b05cu: goto label_54b05c;
        case 0x54b060u: goto label_54b060;
        case 0x54b064u: goto label_54b064;
        case 0x54b068u: goto label_54b068;
        case 0x54b06cu: goto label_54b06c;
        case 0x54b070u: goto label_54b070;
        case 0x54b074u: goto label_54b074;
        case 0x54b078u: goto label_54b078;
        case 0x54b07cu: goto label_54b07c;
        case 0x54b080u: goto label_54b080;
        case 0x54b084u: goto label_54b084;
        case 0x54b088u: goto label_54b088;
        case 0x54b08cu: goto label_54b08c;
        case 0x54b090u: goto label_54b090;
        case 0x54b094u: goto label_54b094;
        case 0x54b098u: goto label_54b098;
        case 0x54b09cu: goto label_54b09c;
        case 0x54b0a0u: goto label_54b0a0;
        case 0x54b0a4u: goto label_54b0a4;
        case 0x54b0a8u: goto label_54b0a8;
        case 0x54b0acu: goto label_54b0ac;
        case 0x54b0b0u: goto label_54b0b0;
        case 0x54b0b4u: goto label_54b0b4;
        case 0x54b0b8u: goto label_54b0b8;
        case 0x54b0bcu: goto label_54b0bc;
        case 0x54b0c0u: goto label_54b0c0;
        case 0x54b0c4u: goto label_54b0c4;
        case 0x54b0c8u: goto label_54b0c8;
        case 0x54b0ccu: goto label_54b0cc;
        case 0x54b0d0u: goto label_54b0d0;
        case 0x54b0d4u: goto label_54b0d4;
        case 0x54b0d8u: goto label_54b0d8;
        case 0x54b0dcu: goto label_54b0dc;
        case 0x54b0e0u: goto label_54b0e0;
        case 0x54b0e4u: goto label_54b0e4;
        case 0x54b0e8u: goto label_54b0e8;
        case 0x54b0ecu: goto label_54b0ec;
        case 0x54b0f0u: goto label_54b0f0;
        case 0x54b0f4u: goto label_54b0f4;
        case 0x54b0f8u: goto label_54b0f8;
        case 0x54b0fcu: goto label_54b0fc;
        case 0x54b100u: goto label_54b100;
        case 0x54b104u: goto label_54b104;
        case 0x54b108u: goto label_54b108;
        case 0x54b10cu: goto label_54b10c;
        case 0x54b110u: goto label_54b110;
        case 0x54b114u: goto label_54b114;
        case 0x54b118u: goto label_54b118;
        case 0x54b11cu: goto label_54b11c;
        case 0x54b120u: goto label_54b120;
        case 0x54b124u: goto label_54b124;
        case 0x54b128u: goto label_54b128;
        case 0x54b12cu: goto label_54b12c;
        case 0x54b130u: goto label_54b130;
        case 0x54b134u: goto label_54b134;
        case 0x54b138u: goto label_54b138;
        case 0x54b13cu: goto label_54b13c;
        case 0x54b140u: goto label_54b140;
        case 0x54b144u: goto label_54b144;
        case 0x54b148u: goto label_54b148;
        case 0x54b14cu: goto label_54b14c;
        case 0x54b150u: goto label_54b150;
        case 0x54b154u: goto label_54b154;
        case 0x54b158u: goto label_54b158;
        case 0x54b15cu: goto label_54b15c;
        case 0x54b160u: goto label_54b160;
        case 0x54b164u: goto label_54b164;
        case 0x54b168u: goto label_54b168;
        case 0x54b16cu: goto label_54b16c;
        case 0x54b170u: goto label_54b170;
        case 0x54b174u: goto label_54b174;
        case 0x54b178u: goto label_54b178;
        case 0x54b17cu: goto label_54b17c;
        case 0x54b180u: goto label_54b180;
        case 0x54b184u: goto label_54b184;
        case 0x54b188u: goto label_54b188;
        case 0x54b18cu: goto label_54b18c;
        case 0x54b190u: goto label_54b190;
        case 0x54b194u: goto label_54b194;
        case 0x54b198u: goto label_54b198;
        case 0x54b19cu: goto label_54b19c;
        case 0x54b1a0u: goto label_54b1a0;
        case 0x54b1a4u: goto label_54b1a4;
        case 0x54b1a8u: goto label_54b1a8;
        case 0x54b1acu: goto label_54b1ac;
        case 0x54b1b0u: goto label_54b1b0;
        case 0x54b1b4u: goto label_54b1b4;
        case 0x54b1b8u: goto label_54b1b8;
        case 0x54b1bcu: goto label_54b1bc;
        case 0x54b1c0u: goto label_54b1c0;
        case 0x54b1c4u: goto label_54b1c4;
        case 0x54b1c8u: goto label_54b1c8;
        case 0x54b1ccu: goto label_54b1cc;
        case 0x54b1d0u: goto label_54b1d0;
        case 0x54b1d4u: goto label_54b1d4;
        case 0x54b1d8u: goto label_54b1d8;
        case 0x54b1dcu: goto label_54b1dc;
        case 0x54b1e0u: goto label_54b1e0;
        case 0x54b1e4u: goto label_54b1e4;
        case 0x54b1e8u: goto label_54b1e8;
        case 0x54b1ecu: goto label_54b1ec;
        case 0x54b1f0u: goto label_54b1f0;
        case 0x54b1f4u: goto label_54b1f4;
        case 0x54b1f8u: goto label_54b1f8;
        case 0x54b1fcu: goto label_54b1fc;
        case 0x54b200u: goto label_54b200;
        case 0x54b204u: goto label_54b204;
        case 0x54b208u: goto label_54b208;
        case 0x54b20cu: goto label_54b20c;
        case 0x54b210u: goto label_54b210;
        case 0x54b214u: goto label_54b214;
        case 0x54b218u: goto label_54b218;
        case 0x54b21cu: goto label_54b21c;
        case 0x54b220u: goto label_54b220;
        case 0x54b224u: goto label_54b224;
        case 0x54b228u: goto label_54b228;
        case 0x54b22cu: goto label_54b22c;
        case 0x54b230u: goto label_54b230;
        case 0x54b234u: goto label_54b234;
        case 0x54b238u: goto label_54b238;
        case 0x54b23cu: goto label_54b23c;
        case 0x54b240u: goto label_54b240;
        case 0x54b244u: goto label_54b244;
        case 0x54b248u: goto label_54b248;
        case 0x54b24cu: goto label_54b24c;
        case 0x54b250u: goto label_54b250;
        case 0x54b254u: goto label_54b254;
        case 0x54b258u: goto label_54b258;
        case 0x54b25cu: goto label_54b25c;
        case 0x54b260u: goto label_54b260;
        case 0x54b264u: goto label_54b264;
        case 0x54b268u: goto label_54b268;
        case 0x54b26cu: goto label_54b26c;
        case 0x54b270u: goto label_54b270;
        case 0x54b274u: goto label_54b274;
        case 0x54b278u: goto label_54b278;
        case 0x54b27cu: goto label_54b27c;
        case 0x54b280u: goto label_54b280;
        case 0x54b284u: goto label_54b284;
        case 0x54b288u: goto label_54b288;
        case 0x54b28cu: goto label_54b28c;
        case 0x54b290u: goto label_54b290;
        case 0x54b294u: goto label_54b294;
        case 0x54b298u: goto label_54b298;
        case 0x54b29cu: goto label_54b29c;
        case 0x54b2a0u: goto label_54b2a0;
        case 0x54b2a4u: goto label_54b2a4;
        case 0x54b2a8u: goto label_54b2a8;
        case 0x54b2acu: goto label_54b2ac;
        case 0x54b2b0u: goto label_54b2b0;
        case 0x54b2b4u: goto label_54b2b4;
        case 0x54b2b8u: goto label_54b2b8;
        case 0x54b2bcu: goto label_54b2bc;
        case 0x54b2c0u: goto label_54b2c0;
        case 0x54b2c4u: goto label_54b2c4;
        case 0x54b2c8u: goto label_54b2c8;
        case 0x54b2ccu: goto label_54b2cc;
        case 0x54b2d0u: goto label_54b2d0;
        case 0x54b2d4u: goto label_54b2d4;
        case 0x54b2d8u: goto label_54b2d8;
        case 0x54b2dcu: goto label_54b2dc;
        case 0x54b2e0u: goto label_54b2e0;
        case 0x54b2e4u: goto label_54b2e4;
        case 0x54b2e8u: goto label_54b2e8;
        case 0x54b2ecu: goto label_54b2ec;
        case 0x54b2f0u: goto label_54b2f0;
        case 0x54b2f4u: goto label_54b2f4;
        case 0x54b2f8u: goto label_54b2f8;
        case 0x54b2fcu: goto label_54b2fc;
        case 0x54b300u: goto label_54b300;
        case 0x54b304u: goto label_54b304;
        case 0x54b308u: goto label_54b308;
        case 0x54b30cu: goto label_54b30c;
        case 0x54b310u: goto label_54b310;
        case 0x54b314u: goto label_54b314;
        case 0x54b318u: goto label_54b318;
        case 0x54b31cu: goto label_54b31c;
        case 0x54b320u: goto label_54b320;
        case 0x54b324u: goto label_54b324;
        case 0x54b328u: goto label_54b328;
        case 0x54b32cu: goto label_54b32c;
        case 0x54b330u: goto label_54b330;
        case 0x54b334u: goto label_54b334;
        case 0x54b338u: goto label_54b338;
        case 0x54b33cu: goto label_54b33c;
        case 0x54b340u: goto label_54b340;
        case 0x54b344u: goto label_54b344;
        case 0x54b348u: goto label_54b348;
        case 0x54b34cu: goto label_54b34c;
        case 0x54b350u: goto label_54b350;
        case 0x54b354u: goto label_54b354;
        case 0x54b358u: goto label_54b358;
        case 0x54b35cu: goto label_54b35c;
        case 0x54b360u: goto label_54b360;
        case 0x54b364u: goto label_54b364;
        case 0x54b368u: goto label_54b368;
        case 0x54b36cu: goto label_54b36c;
        case 0x54b370u: goto label_54b370;
        case 0x54b374u: goto label_54b374;
        case 0x54b378u: goto label_54b378;
        case 0x54b37cu: goto label_54b37c;
        case 0x54b380u: goto label_54b380;
        case 0x54b384u: goto label_54b384;
        case 0x54b388u: goto label_54b388;
        case 0x54b38cu: goto label_54b38c;
        case 0x54b390u: goto label_54b390;
        case 0x54b394u: goto label_54b394;
        case 0x54b398u: goto label_54b398;
        case 0x54b39cu: goto label_54b39c;
        case 0x54b3a0u: goto label_54b3a0;
        case 0x54b3a4u: goto label_54b3a4;
        case 0x54b3a8u: goto label_54b3a8;
        case 0x54b3acu: goto label_54b3ac;
        case 0x54b3b0u: goto label_54b3b0;
        case 0x54b3b4u: goto label_54b3b4;
        case 0x54b3b8u: goto label_54b3b8;
        case 0x54b3bcu: goto label_54b3bc;
        case 0x54b3c0u: goto label_54b3c0;
        case 0x54b3c4u: goto label_54b3c4;
        case 0x54b3c8u: goto label_54b3c8;
        case 0x54b3ccu: goto label_54b3cc;
        case 0x54b3d0u: goto label_54b3d0;
        case 0x54b3d4u: goto label_54b3d4;
        case 0x54b3d8u: goto label_54b3d8;
        case 0x54b3dcu: goto label_54b3dc;
        case 0x54b3e0u: goto label_54b3e0;
        case 0x54b3e4u: goto label_54b3e4;
        case 0x54b3e8u: goto label_54b3e8;
        case 0x54b3ecu: goto label_54b3ec;
        case 0x54b3f0u: goto label_54b3f0;
        case 0x54b3f4u: goto label_54b3f4;
        case 0x54b3f8u: goto label_54b3f8;
        case 0x54b3fcu: goto label_54b3fc;
        case 0x54b400u: goto label_54b400;
        case 0x54b404u: goto label_54b404;
        case 0x54b408u: goto label_54b408;
        case 0x54b40cu: goto label_54b40c;
        case 0x54b410u: goto label_54b410;
        case 0x54b414u: goto label_54b414;
        case 0x54b418u: goto label_54b418;
        case 0x54b41cu: goto label_54b41c;
        case 0x54b420u: goto label_54b420;
        case 0x54b424u: goto label_54b424;
        case 0x54b428u: goto label_54b428;
        case 0x54b42cu: goto label_54b42c;
        case 0x54b430u: goto label_54b430;
        case 0x54b434u: goto label_54b434;
        case 0x54b438u: goto label_54b438;
        case 0x54b43cu: goto label_54b43c;
        case 0x54b440u: goto label_54b440;
        case 0x54b444u: goto label_54b444;
        case 0x54b448u: goto label_54b448;
        case 0x54b44cu: goto label_54b44c;
        case 0x54b450u: goto label_54b450;
        case 0x54b454u: goto label_54b454;
        case 0x54b458u: goto label_54b458;
        case 0x54b45cu: goto label_54b45c;
        case 0x54b460u: goto label_54b460;
        case 0x54b464u: goto label_54b464;
        case 0x54b468u: goto label_54b468;
        case 0x54b46cu: goto label_54b46c;
        case 0x54b470u: goto label_54b470;
        case 0x54b474u: goto label_54b474;
        case 0x54b478u: goto label_54b478;
        case 0x54b47cu: goto label_54b47c;
        case 0x54b480u: goto label_54b480;
        case 0x54b484u: goto label_54b484;
        case 0x54b488u: goto label_54b488;
        case 0x54b48cu: goto label_54b48c;
        case 0x54b490u: goto label_54b490;
        case 0x54b494u: goto label_54b494;
        case 0x54b498u: goto label_54b498;
        case 0x54b49cu: goto label_54b49c;
        case 0x54b4a0u: goto label_54b4a0;
        case 0x54b4a4u: goto label_54b4a4;
        case 0x54b4a8u: goto label_54b4a8;
        case 0x54b4acu: goto label_54b4ac;
        case 0x54b4b0u: goto label_54b4b0;
        case 0x54b4b4u: goto label_54b4b4;
        case 0x54b4b8u: goto label_54b4b8;
        case 0x54b4bcu: goto label_54b4bc;
        case 0x54b4c0u: goto label_54b4c0;
        case 0x54b4c4u: goto label_54b4c4;
        case 0x54b4c8u: goto label_54b4c8;
        case 0x54b4ccu: goto label_54b4cc;
        case 0x54b4d0u: goto label_54b4d0;
        case 0x54b4d4u: goto label_54b4d4;
        case 0x54b4d8u: goto label_54b4d8;
        case 0x54b4dcu: goto label_54b4dc;
        case 0x54b4e0u: goto label_54b4e0;
        case 0x54b4e4u: goto label_54b4e4;
        case 0x54b4e8u: goto label_54b4e8;
        case 0x54b4ecu: goto label_54b4ec;
        case 0x54b4f0u: goto label_54b4f0;
        case 0x54b4f4u: goto label_54b4f4;
        case 0x54b4f8u: goto label_54b4f8;
        case 0x54b4fcu: goto label_54b4fc;
        case 0x54b500u: goto label_54b500;
        case 0x54b504u: goto label_54b504;
        case 0x54b508u: goto label_54b508;
        case 0x54b50cu: goto label_54b50c;
        case 0x54b510u: goto label_54b510;
        case 0x54b514u: goto label_54b514;
        case 0x54b518u: goto label_54b518;
        case 0x54b51cu: goto label_54b51c;
        case 0x54b520u: goto label_54b520;
        case 0x54b524u: goto label_54b524;
        case 0x54b528u: goto label_54b528;
        case 0x54b52cu: goto label_54b52c;
        case 0x54b530u: goto label_54b530;
        case 0x54b534u: goto label_54b534;
        case 0x54b538u: goto label_54b538;
        case 0x54b53cu: goto label_54b53c;
        case 0x54b540u: goto label_54b540;
        case 0x54b544u: goto label_54b544;
        case 0x54b548u: goto label_54b548;
        case 0x54b54cu: goto label_54b54c;
        case 0x54b550u: goto label_54b550;
        case 0x54b554u: goto label_54b554;
        case 0x54b558u: goto label_54b558;
        case 0x54b55cu: goto label_54b55c;
        case 0x54b560u: goto label_54b560;
        case 0x54b564u: goto label_54b564;
        case 0x54b568u: goto label_54b568;
        case 0x54b56cu: goto label_54b56c;
        case 0x54b570u: goto label_54b570;
        case 0x54b574u: goto label_54b574;
        case 0x54b578u: goto label_54b578;
        case 0x54b57cu: goto label_54b57c;
        case 0x54b580u: goto label_54b580;
        case 0x54b584u: goto label_54b584;
        case 0x54b588u: goto label_54b588;
        case 0x54b58cu: goto label_54b58c;
        case 0x54b590u: goto label_54b590;
        case 0x54b594u: goto label_54b594;
        case 0x54b598u: goto label_54b598;
        case 0x54b59cu: goto label_54b59c;
        case 0x54b5a0u: goto label_54b5a0;
        case 0x54b5a4u: goto label_54b5a4;
        case 0x54b5a8u: goto label_54b5a8;
        case 0x54b5acu: goto label_54b5ac;
        case 0x54b5b0u: goto label_54b5b0;
        case 0x54b5b4u: goto label_54b5b4;
        case 0x54b5b8u: goto label_54b5b8;
        case 0x54b5bcu: goto label_54b5bc;
        case 0x54b5c0u: goto label_54b5c0;
        case 0x54b5c4u: goto label_54b5c4;
        case 0x54b5c8u: goto label_54b5c8;
        case 0x54b5ccu: goto label_54b5cc;
        case 0x54b5d0u: goto label_54b5d0;
        case 0x54b5d4u: goto label_54b5d4;
        case 0x54b5d8u: goto label_54b5d8;
        case 0x54b5dcu: goto label_54b5dc;
        case 0x54b5e0u: goto label_54b5e0;
        case 0x54b5e4u: goto label_54b5e4;
        case 0x54b5e8u: goto label_54b5e8;
        case 0x54b5ecu: goto label_54b5ec;
        case 0x54b5f0u: goto label_54b5f0;
        case 0x54b5f4u: goto label_54b5f4;
        case 0x54b5f8u: goto label_54b5f8;
        case 0x54b5fcu: goto label_54b5fc;
        case 0x54b600u: goto label_54b600;
        case 0x54b604u: goto label_54b604;
        case 0x54b608u: goto label_54b608;
        case 0x54b60cu: goto label_54b60c;
        case 0x54b610u: goto label_54b610;
        case 0x54b614u: goto label_54b614;
        case 0x54b618u: goto label_54b618;
        case 0x54b61cu: goto label_54b61c;
        case 0x54b620u: goto label_54b620;
        case 0x54b624u: goto label_54b624;
        case 0x54b628u: goto label_54b628;
        case 0x54b62cu: goto label_54b62c;
        case 0x54b630u: goto label_54b630;
        case 0x54b634u: goto label_54b634;
        case 0x54b638u: goto label_54b638;
        case 0x54b63cu: goto label_54b63c;
        case 0x54b640u: goto label_54b640;
        case 0x54b644u: goto label_54b644;
        case 0x54b648u: goto label_54b648;
        case 0x54b64cu: goto label_54b64c;
        case 0x54b650u: goto label_54b650;
        case 0x54b654u: goto label_54b654;
        case 0x54b658u: goto label_54b658;
        case 0x54b65cu: goto label_54b65c;
        case 0x54b660u: goto label_54b660;
        case 0x54b664u: goto label_54b664;
        case 0x54b668u: goto label_54b668;
        case 0x54b66cu: goto label_54b66c;
        case 0x54b670u: goto label_54b670;
        case 0x54b674u: goto label_54b674;
        case 0x54b678u: goto label_54b678;
        case 0x54b67cu: goto label_54b67c;
        case 0x54b680u: goto label_54b680;
        case 0x54b684u: goto label_54b684;
        case 0x54b688u: goto label_54b688;
        case 0x54b68cu: goto label_54b68c;
        case 0x54b690u: goto label_54b690;
        case 0x54b694u: goto label_54b694;
        case 0x54b698u: goto label_54b698;
        case 0x54b69cu: goto label_54b69c;
        case 0x54b6a0u: goto label_54b6a0;
        case 0x54b6a4u: goto label_54b6a4;
        case 0x54b6a8u: goto label_54b6a8;
        case 0x54b6acu: goto label_54b6ac;
        case 0x54b6b0u: goto label_54b6b0;
        case 0x54b6b4u: goto label_54b6b4;
        case 0x54b6b8u: goto label_54b6b8;
        case 0x54b6bcu: goto label_54b6bc;
        case 0x54b6c0u: goto label_54b6c0;
        case 0x54b6c4u: goto label_54b6c4;
        case 0x54b6c8u: goto label_54b6c8;
        case 0x54b6ccu: goto label_54b6cc;
        case 0x54b6d0u: goto label_54b6d0;
        case 0x54b6d4u: goto label_54b6d4;
        case 0x54b6d8u: goto label_54b6d8;
        case 0x54b6dcu: goto label_54b6dc;
        case 0x54b6e0u: goto label_54b6e0;
        case 0x54b6e4u: goto label_54b6e4;
        case 0x54b6e8u: goto label_54b6e8;
        case 0x54b6ecu: goto label_54b6ec;
        case 0x54b6f0u: goto label_54b6f0;
        case 0x54b6f4u: goto label_54b6f4;
        case 0x54b6f8u: goto label_54b6f8;
        case 0x54b6fcu: goto label_54b6fc;
        case 0x54b700u: goto label_54b700;
        case 0x54b704u: goto label_54b704;
        case 0x54b708u: goto label_54b708;
        case 0x54b70cu: goto label_54b70c;
        case 0x54b710u: goto label_54b710;
        case 0x54b714u: goto label_54b714;
        case 0x54b718u: goto label_54b718;
        case 0x54b71cu: goto label_54b71c;
        case 0x54b720u: goto label_54b720;
        case 0x54b724u: goto label_54b724;
        case 0x54b728u: goto label_54b728;
        case 0x54b72cu: goto label_54b72c;
        case 0x54b730u: goto label_54b730;
        case 0x54b734u: goto label_54b734;
        case 0x54b738u: goto label_54b738;
        case 0x54b73cu: goto label_54b73c;
        case 0x54b740u: goto label_54b740;
        case 0x54b744u: goto label_54b744;
        case 0x54b748u: goto label_54b748;
        case 0x54b74cu: goto label_54b74c;
        case 0x54b750u: goto label_54b750;
        case 0x54b754u: goto label_54b754;
        case 0x54b758u: goto label_54b758;
        case 0x54b75cu: goto label_54b75c;
        case 0x54b760u: goto label_54b760;
        case 0x54b764u: goto label_54b764;
        case 0x54b768u: goto label_54b768;
        case 0x54b76cu: goto label_54b76c;
        case 0x54b770u: goto label_54b770;
        case 0x54b774u: goto label_54b774;
        case 0x54b778u: goto label_54b778;
        case 0x54b77cu: goto label_54b77c;
        case 0x54b780u: goto label_54b780;
        case 0x54b784u: goto label_54b784;
        case 0x54b788u: goto label_54b788;
        case 0x54b78cu: goto label_54b78c;
        case 0x54b790u: goto label_54b790;
        case 0x54b794u: goto label_54b794;
        case 0x54b798u: goto label_54b798;
        case 0x54b79cu: goto label_54b79c;
        case 0x54b7a0u: goto label_54b7a0;
        case 0x54b7a4u: goto label_54b7a4;
        case 0x54b7a8u: goto label_54b7a8;
        case 0x54b7acu: goto label_54b7ac;
        case 0x54b7b0u: goto label_54b7b0;
        case 0x54b7b4u: goto label_54b7b4;
        case 0x54b7b8u: goto label_54b7b8;
        case 0x54b7bcu: goto label_54b7bc;
        case 0x54b7c0u: goto label_54b7c0;
        case 0x54b7c4u: goto label_54b7c4;
        case 0x54b7c8u: goto label_54b7c8;
        case 0x54b7ccu: goto label_54b7cc;
        case 0x54b7d0u: goto label_54b7d0;
        case 0x54b7d4u: goto label_54b7d4;
        case 0x54b7d8u: goto label_54b7d8;
        case 0x54b7dcu: goto label_54b7dc;
        case 0x54b7e0u: goto label_54b7e0;
        case 0x54b7e4u: goto label_54b7e4;
        case 0x54b7e8u: goto label_54b7e8;
        case 0x54b7ecu: goto label_54b7ec;
        case 0x54b7f0u: goto label_54b7f0;
        case 0x54b7f4u: goto label_54b7f4;
        case 0x54b7f8u: goto label_54b7f8;
        case 0x54b7fcu: goto label_54b7fc;
        case 0x54b800u: goto label_54b800;
        case 0x54b804u: goto label_54b804;
        case 0x54b808u: goto label_54b808;
        case 0x54b80cu: goto label_54b80c;
        case 0x54b810u: goto label_54b810;
        case 0x54b814u: goto label_54b814;
        case 0x54b818u: goto label_54b818;
        case 0x54b81cu: goto label_54b81c;
        case 0x54b820u: goto label_54b820;
        case 0x54b824u: goto label_54b824;
        case 0x54b828u: goto label_54b828;
        case 0x54b82cu: goto label_54b82c;
        case 0x54b830u: goto label_54b830;
        case 0x54b834u: goto label_54b834;
        case 0x54b838u: goto label_54b838;
        case 0x54b83cu: goto label_54b83c;
        case 0x54b840u: goto label_54b840;
        case 0x54b844u: goto label_54b844;
        case 0x54b848u: goto label_54b848;
        case 0x54b84cu: goto label_54b84c;
        case 0x54b850u: goto label_54b850;
        case 0x54b854u: goto label_54b854;
        case 0x54b858u: goto label_54b858;
        case 0x54b85cu: goto label_54b85c;
        case 0x54b860u: goto label_54b860;
        case 0x54b864u: goto label_54b864;
        case 0x54b868u: goto label_54b868;
        case 0x54b86cu: goto label_54b86c;
        case 0x54b870u: goto label_54b870;
        case 0x54b874u: goto label_54b874;
        case 0x54b878u: goto label_54b878;
        case 0x54b87cu: goto label_54b87c;
        case 0x54b880u: goto label_54b880;
        case 0x54b884u: goto label_54b884;
        case 0x54b888u: goto label_54b888;
        case 0x54b88cu: goto label_54b88c;
        case 0x54b890u: goto label_54b890;
        case 0x54b894u: goto label_54b894;
        case 0x54b898u: goto label_54b898;
        case 0x54b89cu: goto label_54b89c;
        case 0x54b8a0u: goto label_54b8a0;
        case 0x54b8a4u: goto label_54b8a4;
        case 0x54b8a8u: goto label_54b8a8;
        case 0x54b8acu: goto label_54b8ac;
        case 0x54b8b0u: goto label_54b8b0;
        case 0x54b8b4u: goto label_54b8b4;
        case 0x54b8b8u: goto label_54b8b8;
        case 0x54b8bcu: goto label_54b8bc;
        case 0x54b8c0u: goto label_54b8c0;
        case 0x54b8c4u: goto label_54b8c4;
        case 0x54b8c8u: goto label_54b8c8;
        case 0x54b8ccu: goto label_54b8cc;
        case 0x54b8d0u: goto label_54b8d0;
        case 0x54b8d4u: goto label_54b8d4;
        case 0x54b8d8u: goto label_54b8d8;
        case 0x54b8dcu: goto label_54b8dc;
        case 0x54b8e0u: goto label_54b8e0;
        case 0x54b8e4u: goto label_54b8e4;
        case 0x54b8e8u: goto label_54b8e8;
        case 0x54b8ecu: goto label_54b8ec;
        case 0x54b8f0u: goto label_54b8f0;
        case 0x54b8f4u: goto label_54b8f4;
        case 0x54b8f8u: goto label_54b8f8;
        case 0x54b8fcu: goto label_54b8fc;
        case 0x54b900u: goto label_54b900;
        case 0x54b904u: goto label_54b904;
        case 0x54b908u: goto label_54b908;
        case 0x54b90cu: goto label_54b90c;
        case 0x54b910u: goto label_54b910;
        case 0x54b914u: goto label_54b914;
        case 0x54b918u: goto label_54b918;
        case 0x54b91cu: goto label_54b91c;
        case 0x54b920u: goto label_54b920;
        case 0x54b924u: goto label_54b924;
        case 0x54b928u: goto label_54b928;
        case 0x54b92cu: goto label_54b92c;
        case 0x54b930u: goto label_54b930;
        case 0x54b934u: goto label_54b934;
        case 0x54b938u: goto label_54b938;
        case 0x54b93cu: goto label_54b93c;
        case 0x54b940u: goto label_54b940;
        case 0x54b944u: goto label_54b944;
        case 0x54b948u: goto label_54b948;
        case 0x54b94cu: goto label_54b94c;
        case 0x54b950u: goto label_54b950;
        case 0x54b954u: goto label_54b954;
        case 0x54b958u: goto label_54b958;
        case 0x54b95cu: goto label_54b95c;
        case 0x54b960u: goto label_54b960;
        case 0x54b964u: goto label_54b964;
        case 0x54b968u: goto label_54b968;
        case 0x54b96cu: goto label_54b96c;
        case 0x54b970u: goto label_54b970;
        case 0x54b974u: goto label_54b974;
        case 0x54b978u: goto label_54b978;
        case 0x54b97cu: goto label_54b97c;
        case 0x54b980u: goto label_54b980;
        case 0x54b984u: goto label_54b984;
        case 0x54b988u: goto label_54b988;
        case 0x54b98cu: goto label_54b98c;
        case 0x54b990u: goto label_54b990;
        case 0x54b994u: goto label_54b994;
        case 0x54b998u: goto label_54b998;
        case 0x54b99cu: goto label_54b99c;
        case 0x54b9a0u: goto label_54b9a0;
        case 0x54b9a4u: goto label_54b9a4;
        case 0x54b9a8u: goto label_54b9a8;
        case 0x54b9acu: goto label_54b9ac;
        case 0x54b9b0u: goto label_54b9b0;
        case 0x54b9b4u: goto label_54b9b4;
        case 0x54b9b8u: goto label_54b9b8;
        case 0x54b9bcu: goto label_54b9bc;
        case 0x54b9c0u: goto label_54b9c0;
        case 0x54b9c4u: goto label_54b9c4;
        case 0x54b9c8u: goto label_54b9c8;
        case 0x54b9ccu: goto label_54b9cc;
        case 0x54b9d0u: goto label_54b9d0;
        case 0x54b9d4u: goto label_54b9d4;
        case 0x54b9d8u: goto label_54b9d8;
        case 0x54b9dcu: goto label_54b9dc;
        case 0x54b9e0u: goto label_54b9e0;
        case 0x54b9e4u: goto label_54b9e4;
        case 0x54b9e8u: goto label_54b9e8;
        case 0x54b9ecu: goto label_54b9ec;
        case 0x54b9f0u: goto label_54b9f0;
        case 0x54b9f4u: goto label_54b9f4;
        case 0x54b9f8u: goto label_54b9f8;
        case 0x54b9fcu: goto label_54b9fc;
        case 0x54ba00u: goto label_54ba00;
        case 0x54ba04u: goto label_54ba04;
        case 0x54ba08u: goto label_54ba08;
        case 0x54ba0cu: goto label_54ba0c;
        case 0x54ba10u: goto label_54ba10;
        case 0x54ba14u: goto label_54ba14;
        case 0x54ba18u: goto label_54ba18;
        case 0x54ba1cu: goto label_54ba1c;
        case 0x54ba20u: goto label_54ba20;
        case 0x54ba24u: goto label_54ba24;
        case 0x54ba28u: goto label_54ba28;
        case 0x54ba2cu: goto label_54ba2c;
        case 0x54ba30u: goto label_54ba30;
        case 0x54ba34u: goto label_54ba34;
        case 0x54ba38u: goto label_54ba38;
        case 0x54ba3cu: goto label_54ba3c;
        case 0x54ba40u: goto label_54ba40;
        case 0x54ba44u: goto label_54ba44;
        case 0x54ba48u: goto label_54ba48;
        case 0x54ba4cu: goto label_54ba4c;
        case 0x54ba50u: goto label_54ba50;
        case 0x54ba54u: goto label_54ba54;
        case 0x54ba58u: goto label_54ba58;
        case 0x54ba5cu: goto label_54ba5c;
        case 0x54ba60u: goto label_54ba60;
        case 0x54ba64u: goto label_54ba64;
        case 0x54ba68u: goto label_54ba68;
        case 0x54ba6cu: goto label_54ba6c;
        case 0x54ba70u: goto label_54ba70;
        case 0x54ba74u: goto label_54ba74;
        case 0x54ba78u: goto label_54ba78;
        case 0x54ba7cu: goto label_54ba7c;
        case 0x54ba80u: goto label_54ba80;
        case 0x54ba84u: goto label_54ba84;
        case 0x54ba88u: goto label_54ba88;
        case 0x54ba8cu: goto label_54ba8c;
        case 0x54ba90u: goto label_54ba90;
        case 0x54ba94u: goto label_54ba94;
        case 0x54ba98u: goto label_54ba98;
        case 0x54ba9cu: goto label_54ba9c;
        case 0x54baa0u: goto label_54baa0;
        case 0x54baa4u: goto label_54baa4;
        case 0x54baa8u: goto label_54baa8;
        case 0x54baacu: goto label_54baac;
        case 0x54bab0u: goto label_54bab0;
        case 0x54bab4u: goto label_54bab4;
        case 0x54bab8u: goto label_54bab8;
        case 0x54babcu: goto label_54babc;
        case 0x54bac0u: goto label_54bac0;
        case 0x54bac4u: goto label_54bac4;
        case 0x54bac8u: goto label_54bac8;
        case 0x54baccu: goto label_54bacc;
        case 0x54bad0u: goto label_54bad0;
        case 0x54bad4u: goto label_54bad4;
        case 0x54bad8u: goto label_54bad8;
        case 0x54badcu: goto label_54badc;
        case 0x54bae0u: goto label_54bae0;
        case 0x54bae4u: goto label_54bae4;
        case 0x54bae8u: goto label_54bae8;
        case 0x54baecu: goto label_54baec;
        case 0x54baf0u: goto label_54baf0;
        case 0x54baf4u: goto label_54baf4;
        case 0x54baf8u: goto label_54baf8;
        case 0x54bafcu: goto label_54bafc;
        case 0x54bb00u: goto label_54bb00;
        case 0x54bb04u: goto label_54bb04;
        case 0x54bb08u: goto label_54bb08;
        case 0x54bb0cu: goto label_54bb0c;
        case 0x54bb10u: goto label_54bb10;
        case 0x54bb14u: goto label_54bb14;
        case 0x54bb18u: goto label_54bb18;
        case 0x54bb1cu: goto label_54bb1c;
        case 0x54bb20u: goto label_54bb20;
        case 0x54bb24u: goto label_54bb24;
        case 0x54bb28u: goto label_54bb28;
        case 0x54bb2cu: goto label_54bb2c;
        case 0x54bb30u: goto label_54bb30;
        case 0x54bb34u: goto label_54bb34;
        case 0x54bb38u: goto label_54bb38;
        case 0x54bb3cu: goto label_54bb3c;
        case 0x54bb40u: goto label_54bb40;
        case 0x54bb44u: goto label_54bb44;
        case 0x54bb48u: goto label_54bb48;
        case 0x54bb4cu: goto label_54bb4c;
        case 0x54bb50u: goto label_54bb50;
        case 0x54bb54u: goto label_54bb54;
        case 0x54bb58u: goto label_54bb58;
        case 0x54bb5cu: goto label_54bb5c;
        case 0x54bb60u: goto label_54bb60;
        case 0x54bb64u: goto label_54bb64;
        case 0x54bb68u: goto label_54bb68;
        case 0x54bb6cu: goto label_54bb6c;
        case 0x54bb70u: goto label_54bb70;
        case 0x54bb74u: goto label_54bb74;
        case 0x54bb78u: goto label_54bb78;
        case 0x54bb7cu: goto label_54bb7c;
        case 0x54bb80u: goto label_54bb80;
        case 0x54bb84u: goto label_54bb84;
        case 0x54bb88u: goto label_54bb88;
        case 0x54bb8cu: goto label_54bb8c;
        case 0x54bb90u: goto label_54bb90;
        case 0x54bb94u: goto label_54bb94;
        case 0x54bb98u: goto label_54bb98;
        case 0x54bb9cu: goto label_54bb9c;
        case 0x54bba0u: goto label_54bba0;
        case 0x54bba4u: goto label_54bba4;
        case 0x54bba8u: goto label_54bba8;
        case 0x54bbacu: goto label_54bbac;
        case 0x54bbb0u: goto label_54bbb0;
        case 0x54bbb4u: goto label_54bbb4;
        case 0x54bbb8u: goto label_54bbb8;
        case 0x54bbbcu: goto label_54bbbc;
        case 0x54bbc0u: goto label_54bbc0;
        case 0x54bbc4u: goto label_54bbc4;
        case 0x54bbc8u: goto label_54bbc8;
        case 0x54bbccu: goto label_54bbcc;
        case 0x54bbd0u: goto label_54bbd0;
        case 0x54bbd4u: goto label_54bbd4;
        case 0x54bbd8u: goto label_54bbd8;
        case 0x54bbdcu: goto label_54bbdc;
        case 0x54bbe0u: goto label_54bbe0;
        case 0x54bbe4u: goto label_54bbe4;
        case 0x54bbe8u: goto label_54bbe8;
        case 0x54bbecu: goto label_54bbec;
        case 0x54bbf0u: goto label_54bbf0;
        case 0x54bbf4u: goto label_54bbf4;
        case 0x54bbf8u: goto label_54bbf8;
        case 0x54bbfcu: goto label_54bbfc;
        case 0x54bc00u: goto label_54bc00;
        case 0x54bc04u: goto label_54bc04;
        case 0x54bc08u: goto label_54bc08;
        case 0x54bc0cu: goto label_54bc0c;
        case 0x54bc10u: goto label_54bc10;
        case 0x54bc14u: goto label_54bc14;
        case 0x54bc18u: goto label_54bc18;
        case 0x54bc1cu: goto label_54bc1c;
        case 0x54bc20u: goto label_54bc20;
        case 0x54bc24u: goto label_54bc24;
        case 0x54bc28u: goto label_54bc28;
        case 0x54bc2cu: goto label_54bc2c;
        case 0x54bc30u: goto label_54bc30;
        case 0x54bc34u: goto label_54bc34;
        case 0x54bc38u: goto label_54bc38;
        case 0x54bc3cu: goto label_54bc3c;
        case 0x54bc40u: goto label_54bc40;
        case 0x54bc44u: goto label_54bc44;
        case 0x54bc48u: goto label_54bc48;
        case 0x54bc4cu: goto label_54bc4c;
        case 0x54bc50u: goto label_54bc50;
        case 0x54bc54u: goto label_54bc54;
        case 0x54bc58u: goto label_54bc58;
        case 0x54bc5cu: goto label_54bc5c;
        case 0x54bc60u: goto label_54bc60;
        case 0x54bc64u: goto label_54bc64;
        case 0x54bc68u: goto label_54bc68;
        case 0x54bc6cu: goto label_54bc6c;
        case 0x54bc70u: goto label_54bc70;
        case 0x54bc74u: goto label_54bc74;
        case 0x54bc78u: goto label_54bc78;
        case 0x54bc7cu: goto label_54bc7c;
        case 0x54bc80u: goto label_54bc80;
        case 0x54bc84u: goto label_54bc84;
        case 0x54bc88u: goto label_54bc88;
        case 0x54bc8cu: goto label_54bc8c;
        case 0x54bc90u: goto label_54bc90;
        case 0x54bc94u: goto label_54bc94;
        case 0x54bc98u: goto label_54bc98;
        case 0x54bc9cu: goto label_54bc9c;
        case 0x54bca0u: goto label_54bca0;
        case 0x54bca4u: goto label_54bca4;
        case 0x54bca8u: goto label_54bca8;
        case 0x54bcacu: goto label_54bcac;
        case 0x54bcb0u: goto label_54bcb0;
        case 0x54bcb4u: goto label_54bcb4;
        case 0x54bcb8u: goto label_54bcb8;
        case 0x54bcbcu: goto label_54bcbc;
        case 0x54bcc0u: goto label_54bcc0;
        case 0x54bcc4u: goto label_54bcc4;
        case 0x54bcc8u: goto label_54bcc8;
        case 0x54bcccu: goto label_54bccc;
        case 0x54bcd0u: goto label_54bcd0;
        case 0x54bcd4u: goto label_54bcd4;
        case 0x54bcd8u: goto label_54bcd8;
        case 0x54bcdcu: goto label_54bcdc;
        case 0x54bce0u: goto label_54bce0;
        case 0x54bce4u: goto label_54bce4;
        case 0x54bce8u: goto label_54bce8;
        case 0x54bcecu: goto label_54bcec;
        case 0x54bcf0u: goto label_54bcf0;
        case 0x54bcf4u: goto label_54bcf4;
        case 0x54bcf8u: goto label_54bcf8;
        case 0x54bcfcu: goto label_54bcfc;
        case 0x54bd00u: goto label_54bd00;
        case 0x54bd04u: goto label_54bd04;
        case 0x54bd08u: goto label_54bd08;
        case 0x54bd0cu: goto label_54bd0c;
        case 0x54bd10u: goto label_54bd10;
        case 0x54bd14u: goto label_54bd14;
        case 0x54bd18u: goto label_54bd18;
        case 0x54bd1cu: goto label_54bd1c;
        case 0x54bd20u: goto label_54bd20;
        case 0x54bd24u: goto label_54bd24;
        case 0x54bd28u: goto label_54bd28;
        case 0x54bd2cu: goto label_54bd2c;
        case 0x54bd30u: goto label_54bd30;
        case 0x54bd34u: goto label_54bd34;
        case 0x54bd38u: goto label_54bd38;
        case 0x54bd3cu: goto label_54bd3c;
        case 0x54bd40u: goto label_54bd40;
        case 0x54bd44u: goto label_54bd44;
        case 0x54bd48u: goto label_54bd48;
        case 0x54bd4cu: goto label_54bd4c;
        case 0x54bd50u: goto label_54bd50;
        case 0x54bd54u: goto label_54bd54;
        case 0x54bd58u: goto label_54bd58;
        case 0x54bd5cu: goto label_54bd5c;
        case 0x54bd60u: goto label_54bd60;
        case 0x54bd64u: goto label_54bd64;
        case 0x54bd68u: goto label_54bd68;
        case 0x54bd6cu: goto label_54bd6c;
        case 0x54bd70u: goto label_54bd70;
        case 0x54bd74u: goto label_54bd74;
        case 0x54bd78u: goto label_54bd78;
        case 0x54bd7cu: goto label_54bd7c;
        case 0x54bd80u: goto label_54bd80;
        case 0x54bd84u: goto label_54bd84;
        case 0x54bd88u: goto label_54bd88;
        case 0x54bd8cu: goto label_54bd8c;
        case 0x54bd90u: goto label_54bd90;
        case 0x54bd94u: goto label_54bd94;
        case 0x54bd98u: goto label_54bd98;
        case 0x54bd9cu: goto label_54bd9c;
        case 0x54bda0u: goto label_54bda0;
        case 0x54bda4u: goto label_54bda4;
        case 0x54bda8u: goto label_54bda8;
        case 0x54bdacu: goto label_54bdac;
        case 0x54bdb0u: goto label_54bdb0;
        case 0x54bdb4u: goto label_54bdb4;
        case 0x54bdb8u: goto label_54bdb8;
        case 0x54bdbcu: goto label_54bdbc;
        case 0x54bdc0u: goto label_54bdc0;
        case 0x54bdc4u: goto label_54bdc4;
        case 0x54bdc8u: goto label_54bdc8;
        case 0x54bdccu: goto label_54bdcc;
        case 0x54bdd0u: goto label_54bdd0;
        case 0x54bdd4u: goto label_54bdd4;
        case 0x54bdd8u: goto label_54bdd8;
        case 0x54bddcu: goto label_54bddc;
        case 0x54bde0u: goto label_54bde0;
        case 0x54bde4u: goto label_54bde4;
        case 0x54bde8u: goto label_54bde8;
        case 0x54bdecu: goto label_54bdec;
        case 0x54bdf0u: goto label_54bdf0;
        case 0x54bdf4u: goto label_54bdf4;
        case 0x54bdf8u: goto label_54bdf8;
        case 0x54bdfcu: goto label_54bdfc;
        case 0x54be00u: goto label_54be00;
        case 0x54be04u: goto label_54be04;
        case 0x54be08u: goto label_54be08;
        case 0x54be0cu: goto label_54be0c;
        case 0x54be10u: goto label_54be10;
        case 0x54be14u: goto label_54be14;
        case 0x54be18u: goto label_54be18;
        case 0x54be1cu: goto label_54be1c;
        case 0x54be20u: goto label_54be20;
        case 0x54be24u: goto label_54be24;
        case 0x54be28u: goto label_54be28;
        case 0x54be2cu: goto label_54be2c;
        case 0x54be30u: goto label_54be30;
        case 0x54be34u: goto label_54be34;
        case 0x54be38u: goto label_54be38;
        case 0x54be3cu: goto label_54be3c;
        case 0x54be40u: goto label_54be40;
        case 0x54be44u: goto label_54be44;
        case 0x54be48u: goto label_54be48;
        case 0x54be4cu: goto label_54be4c;
        case 0x54be50u: goto label_54be50;
        case 0x54be54u: goto label_54be54;
        case 0x54be58u: goto label_54be58;
        case 0x54be5cu: goto label_54be5c;
        case 0x54be60u: goto label_54be60;
        case 0x54be64u: goto label_54be64;
        case 0x54be68u: goto label_54be68;
        case 0x54be6cu: goto label_54be6c;
        case 0x54be70u: goto label_54be70;
        case 0x54be74u: goto label_54be74;
        case 0x54be78u: goto label_54be78;
        case 0x54be7cu: goto label_54be7c;
        case 0x54be80u: goto label_54be80;
        case 0x54be84u: goto label_54be84;
        case 0x54be88u: goto label_54be88;
        case 0x54be8cu: goto label_54be8c;
        case 0x54be90u: goto label_54be90;
        case 0x54be94u: goto label_54be94;
        case 0x54be98u: goto label_54be98;
        case 0x54be9cu: goto label_54be9c;
        case 0x54bea0u: goto label_54bea0;
        case 0x54bea4u: goto label_54bea4;
        case 0x54bea8u: goto label_54bea8;
        case 0x54beacu: goto label_54beac;
        case 0x54beb0u: goto label_54beb0;
        case 0x54beb4u: goto label_54beb4;
        case 0x54beb8u: goto label_54beb8;
        case 0x54bebcu: goto label_54bebc;
        case 0x54bec0u: goto label_54bec0;
        case 0x54bec4u: goto label_54bec4;
        case 0x54bec8u: goto label_54bec8;
        case 0x54beccu: goto label_54becc;
        case 0x54bed0u: goto label_54bed0;
        case 0x54bed4u: goto label_54bed4;
        case 0x54bed8u: goto label_54bed8;
        case 0x54bedcu: goto label_54bedc;
        case 0x54bee0u: goto label_54bee0;
        case 0x54bee4u: goto label_54bee4;
        case 0x54bee8u: goto label_54bee8;
        case 0x54beecu: goto label_54beec;
        case 0x54bef0u: goto label_54bef0;
        case 0x54bef4u: goto label_54bef4;
        case 0x54bef8u: goto label_54bef8;
        case 0x54befcu: goto label_54befc;
        case 0x54bf00u: goto label_54bf00;
        case 0x54bf04u: goto label_54bf04;
        case 0x54bf08u: goto label_54bf08;
        case 0x54bf0cu: goto label_54bf0c;
        case 0x54bf10u: goto label_54bf10;
        case 0x54bf14u: goto label_54bf14;
        case 0x54bf18u: goto label_54bf18;
        case 0x54bf1cu: goto label_54bf1c;
        case 0x54bf20u: goto label_54bf20;
        case 0x54bf24u: goto label_54bf24;
        case 0x54bf28u: goto label_54bf28;
        case 0x54bf2cu: goto label_54bf2c;
        case 0x54bf30u: goto label_54bf30;
        case 0x54bf34u: goto label_54bf34;
        case 0x54bf38u: goto label_54bf38;
        case 0x54bf3cu: goto label_54bf3c;
        case 0x54bf40u: goto label_54bf40;
        case 0x54bf44u: goto label_54bf44;
        case 0x54bf48u: goto label_54bf48;
        case 0x54bf4cu: goto label_54bf4c;
        case 0x54bf50u: goto label_54bf50;
        case 0x54bf54u: goto label_54bf54;
        case 0x54bf58u: goto label_54bf58;
        case 0x54bf5cu: goto label_54bf5c;
        case 0x54bf60u: goto label_54bf60;
        case 0x54bf64u: goto label_54bf64;
        case 0x54bf68u: goto label_54bf68;
        case 0x54bf6cu: goto label_54bf6c;
        case 0x54bf70u: goto label_54bf70;
        case 0x54bf74u: goto label_54bf74;
        case 0x54bf78u: goto label_54bf78;
        case 0x54bf7cu: goto label_54bf7c;
        case 0x54bf80u: goto label_54bf80;
        case 0x54bf84u: goto label_54bf84;
        case 0x54bf88u: goto label_54bf88;
        case 0x54bf8cu: goto label_54bf8c;
        case 0x54bf90u: goto label_54bf90;
        case 0x54bf94u: goto label_54bf94;
        case 0x54bf98u: goto label_54bf98;
        case 0x54bf9cu: goto label_54bf9c;
        case 0x54bfa0u: goto label_54bfa0;
        case 0x54bfa4u: goto label_54bfa4;
        case 0x54bfa8u: goto label_54bfa8;
        case 0x54bfacu: goto label_54bfac;
        case 0x54bfb0u: goto label_54bfb0;
        case 0x54bfb4u: goto label_54bfb4;
        case 0x54bfb8u: goto label_54bfb8;
        case 0x54bfbcu: goto label_54bfbc;
        case 0x54bfc0u: goto label_54bfc0;
        case 0x54bfc4u: goto label_54bfc4;
        case 0x54bfc8u: goto label_54bfc8;
        case 0x54bfccu: goto label_54bfcc;
        case 0x54bfd0u: goto label_54bfd0;
        case 0x54bfd4u: goto label_54bfd4;
        case 0x54bfd8u: goto label_54bfd8;
        case 0x54bfdcu: goto label_54bfdc;
        case 0x54bfe0u: goto label_54bfe0;
        case 0x54bfe4u: goto label_54bfe4;
        case 0x54bfe8u: goto label_54bfe8;
        case 0x54bfecu: goto label_54bfec;
        case 0x54bff0u: goto label_54bff0;
        case 0x54bff4u: goto label_54bff4;
        case 0x54bff8u: goto label_54bff8;
        case 0x54bffcu: goto label_54bffc;
        case 0x54c000u: goto label_54c000;
        case 0x54c004u: goto label_54c004;
        case 0x54c008u: goto label_54c008;
        case 0x54c00cu: goto label_54c00c;
        case 0x54c010u: goto label_54c010;
        case 0x54c014u: goto label_54c014;
        case 0x54c018u: goto label_54c018;
        case 0x54c01cu: goto label_54c01c;
        case 0x54c020u: goto label_54c020;
        case 0x54c024u: goto label_54c024;
        case 0x54c028u: goto label_54c028;
        case 0x54c02cu: goto label_54c02c;
        case 0x54c030u: goto label_54c030;
        case 0x54c034u: goto label_54c034;
        case 0x54c038u: goto label_54c038;
        case 0x54c03cu: goto label_54c03c;
        case 0x54c040u: goto label_54c040;
        case 0x54c044u: goto label_54c044;
        case 0x54c048u: goto label_54c048;
        case 0x54c04cu: goto label_54c04c;
        case 0x54c050u: goto label_54c050;
        case 0x54c054u: goto label_54c054;
        case 0x54c058u: goto label_54c058;
        case 0x54c05cu: goto label_54c05c;
        case 0x54c060u: goto label_54c060;
        case 0x54c064u: goto label_54c064;
        case 0x54c068u: goto label_54c068;
        case 0x54c06cu: goto label_54c06c;
        case 0x54c070u: goto label_54c070;
        case 0x54c074u: goto label_54c074;
        case 0x54c078u: goto label_54c078;
        case 0x54c07cu: goto label_54c07c;
        case 0x54c080u: goto label_54c080;
        case 0x54c084u: goto label_54c084;
        case 0x54c088u: goto label_54c088;
        case 0x54c08cu: goto label_54c08c;
        case 0x54c090u: goto label_54c090;
        case 0x54c094u: goto label_54c094;
        case 0x54c098u: goto label_54c098;
        case 0x54c09cu: goto label_54c09c;
        case 0x54c0a0u: goto label_54c0a0;
        case 0x54c0a4u: goto label_54c0a4;
        case 0x54c0a8u: goto label_54c0a8;
        case 0x54c0acu: goto label_54c0ac;
        case 0x54c0b0u: goto label_54c0b0;
        case 0x54c0b4u: goto label_54c0b4;
        case 0x54c0b8u: goto label_54c0b8;
        case 0x54c0bcu: goto label_54c0bc;
        case 0x54c0c0u: goto label_54c0c0;
        case 0x54c0c4u: goto label_54c0c4;
        case 0x54c0c8u: goto label_54c0c8;
        case 0x54c0ccu: goto label_54c0cc;
        case 0x54c0d0u: goto label_54c0d0;
        case 0x54c0d4u: goto label_54c0d4;
        case 0x54c0d8u: goto label_54c0d8;
        case 0x54c0dcu: goto label_54c0dc;
        case 0x54c0e0u: goto label_54c0e0;
        case 0x54c0e4u: goto label_54c0e4;
        case 0x54c0e8u: goto label_54c0e8;
        case 0x54c0ecu: goto label_54c0ec;
        case 0x54c0f0u: goto label_54c0f0;
        case 0x54c0f4u: goto label_54c0f4;
        case 0x54c0f8u: goto label_54c0f8;
        case 0x54c0fcu: goto label_54c0fc;
        case 0x54c100u: goto label_54c100;
        case 0x54c104u: goto label_54c104;
        case 0x54c108u: goto label_54c108;
        case 0x54c10cu: goto label_54c10c;
        case 0x54c110u: goto label_54c110;
        case 0x54c114u: goto label_54c114;
        case 0x54c118u: goto label_54c118;
        case 0x54c11cu: goto label_54c11c;
        case 0x54c120u: goto label_54c120;
        case 0x54c124u: goto label_54c124;
        case 0x54c128u: goto label_54c128;
        case 0x54c12cu: goto label_54c12c;
        case 0x54c130u: goto label_54c130;
        case 0x54c134u: goto label_54c134;
        case 0x54c138u: goto label_54c138;
        case 0x54c13cu: goto label_54c13c;
        case 0x54c140u: goto label_54c140;
        case 0x54c144u: goto label_54c144;
        case 0x54c148u: goto label_54c148;
        case 0x54c14cu: goto label_54c14c;
        case 0x54c150u: goto label_54c150;
        case 0x54c154u: goto label_54c154;
        case 0x54c158u: goto label_54c158;
        case 0x54c15cu: goto label_54c15c;
        case 0x54c160u: goto label_54c160;
        case 0x54c164u: goto label_54c164;
        case 0x54c168u: goto label_54c168;
        case 0x54c16cu: goto label_54c16c;
        case 0x54c170u: goto label_54c170;
        case 0x54c174u: goto label_54c174;
        case 0x54c178u: goto label_54c178;
        case 0x54c17cu: goto label_54c17c;
        case 0x54c180u: goto label_54c180;
        case 0x54c184u: goto label_54c184;
        case 0x54c188u: goto label_54c188;
        case 0x54c18cu: goto label_54c18c;
        default: break;
    }

    ctx->pc = 0x54a4b0u;

label_54a4b0:
    // 0x54a4b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x54a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_54a4b4:
    // 0x54a4b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54a4b8:
    // 0x54a4b8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x54a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_54a4bc:
    // 0x54a4bc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54a4c0:
    // 0x54a4c0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x54a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_54a4c4:
    // 0x54a4c4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x54a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_54a4c8:
    // 0x54a4c8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x54a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_54a4cc:
    // 0x54a4cc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x54a4ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_54a4d0:
    // 0x54a4d0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x54a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_54a4d4:
    // 0x54a4d4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x54a4d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_54a4d8:
    // 0x54a4d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x54a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_54a4dc:
    // 0x54a4dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x54a4dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54a4e0:
    // 0x54a4e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54a4e4:
    // 0x54a4e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x54a4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_54a4e8:
    // 0x54a4e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54a4ec:
    // 0x54a4ec: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x54a4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_54a4f0:
    // 0x54a4f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54a4f4:
    // 0x54a4f4: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x54a4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_54a4f8:
    // 0x54a4f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54a4fc:
    // 0x54a4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54a4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a500:
    // 0x54a500: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x54a500u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_54a504:
    // 0x54a504: 0xafaa00cc  sw          $t2, 0xCC($sp)
    ctx->pc = 0x54a504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 10));
label_54a508:
    // 0x54a508: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x54a508u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_54a50c:
    // 0x54a50c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54a50cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54a510:
    // 0x54a510: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54a510u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54a514:
    // 0x54a514: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54a514u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54a518:
    // 0x54a518: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54a518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54a51c:
    // 0x54a51c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54a51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54a520:
    // 0x54a520: 0x9450d9a2  lhu         $s0, -0x265E($v0)
    ctx->pc = 0x54a520u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957474)));
label_54a524:
    // 0x54a524: 0x9471d9a0  lhu         $s1, -0x2660($v1)
    ctx->pc = 0x54a524u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957472)));
label_54a528:
    // 0x54a528: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x54a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_54a52c:
    // 0x54a52c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x54a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_54a530:
    // 0x54a530: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x54a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_54a534:
    // 0x54a534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x54a534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_54a538:
    // 0x54a538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54a53c:
    // 0x54a53c: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x54a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_54a540:
    // 0x54a540: 0xc0506ac  jal         func_141AB0
label_54a544:
    if (ctx->pc == 0x54A544u) {
        ctx->pc = 0x54A544u;
            // 0x54a544: 0x2652e570  addiu       $s2, $s2, -0x1A90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960496));
        ctx->pc = 0x54A548u;
        goto label_54a548;
    }
    ctx->pc = 0x54A540u;
    SET_GPR_U32(ctx, 31, 0x54A548u);
    ctx->pc = 0x54A544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A540u;
            // 0x54a544: 0x2652e570  addiu       $s2, $s2, -0x1A90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A548u; }
        if (ctx->pc != 0x54A548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A548u; }
        if (ctx->pc != 0x54A548u) { return; }
    }
    ctx->pc = 0x54A548u;
label_54a548:
    // 0x54a548: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54a54c:
    // 0x54a54c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54a550:
    // 0x54a550: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54a550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54a554:
    // 0x54a554: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54a554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54a558:
    // 0x54a558: 0x320f809  jalr        $t9
label_54a55c:
    if (ctx->pc == 0x54A55Cu) {
        ctx->pc = 0x54A55Cu;
            // 0x54a55c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54A560u;
        goto label_54a560;
    }
    ctx->pc = 0x54A558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54A560u);
        ctx->pc = 0x54A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A558u;
            // 0x54a55c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54A560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54A560u; }
            if (ctx->pc != 0x54A560u) { return; }
        }
        }
    }
    ctx->pc = 0x54A560u;
label_54a560:
    // 0x54a560: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54a564:
    // 0x54a564: 0x296b021  addu        $s6, $s4, $s6
    ctx->pc = 0x54a564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_54a568:
    // 0x54a568: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x54a568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_54a56c:
    // 0x54a56c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54a570:
    // 0x54a570: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54a574:
    // 0x54a574: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54a574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54a578:
    // 0x54a578: 0xc441e57c  lwc1        $f1, -0x1A84($v0)
    ctx->pc = 0x54a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54a57c:
    // 0x54a57c: 0x2b7b821  addu        $s7, $s5, $s7
    ctx->pc = 0x54a57cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_54a580:
    // 0x54a580: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a580u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a584:
    // 0x54a584: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60
    ctx->pc = 0x54a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
label_54a588:
    // 0x54a588: 0xc462e578  lwc1        $f2, -0x1A88($v1)
    ctx->pc = 0x54a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54a58c:
    // 0x54a58c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x54a58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_54a590:
    // 0x54a590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a594:
    // 0x54a594: 0x46011d42  mul.s       $f21, $f3, $f1
    ctx->pc = 0x54a594u;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_54a598:
    // 0x54a598: 0x46150641  sub.s       $f25, $f0, $f21
    ctx->pc = 0x54a598u;
    ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_54a59c:
    // 0x54a59c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x54a59cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_54a5a0:
    // 0x54a5a0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a5a0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a5a4:
    // 0x54a5a4: 0x0  nop
    ctx->pc = 0x54a5a4u;
    // NOP
label_54a5a8:
    // 0x54a5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a5ac:
    // 0x54a5ac: 0x46021d02  mul.s       $f20, $f3, $f2
    ctx->pc = 0x54a5acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_54a5b0:
    // 0x54a5b0: 0x46140601  sub.s       $f24, $f0, $f20
    ctx->pc = 0x54a5b0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_54a5b4:
    // 0x54a5b4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a5b4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a5b8:
    // 0x54a5b8: 0x0  nop
    ctx->pc = 0x54a5b8u;
    // NOP
label_54a5bc:
    // 0x54a5bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a5c0:
    // 0x54a5c0: 0x461505c0  add.s       $f23, $f0, $f21
    ctx->pc = 0x54a5c0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_54a5c4:
    // 0x54a5c4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a5c4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a5c8:
    // 0x54a5c8: 0x0  nop
    ctx->pc = 0x54a5c8u;
    // NOP
label_54a5cc:
    // 0x54a5cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a5d0:
    // 0x54a5d0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a5d4:
    if (ctx->pc == 0x54A5D4u) {
        ctx->pc = 0x54A5D4u;
            // 0x54a5d4: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x54A5D8u;
        goto label_54a5d8;
    }
    ctx->pc = 0x54A5D0u;
    {
        const bool branch_taken_0x54a5d0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A5D0u;
            // 0x54a5d4: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a5d0) {
            ctx->pc = 0x54A5E4u;
            goto label_54a5e4;
        }
    }
    ctx->pc = 0x54A5D8u;
label_54a5d8:
    // 0x54a5d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a5d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a5dc:
    // 0x54a5dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a5e0:
    if (ctx->pc == 0x54A5E0u) {
        ctx->pc = 0x54A5E0u;
            // 0x54a5e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A5E4u;
        goto label_54a5e4;
    }
    ctx->pc = 0x54A5DCu;
    {
        const bool branch_taken_0x54a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A5DCu;
            // 0x54a5e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a5dc) {
            ctx->pc = 0x54A600u;
            goto label_54a600;
        }
    }
    ctx->pc = 0x54A5E4u;
label_54a5e4:
    // 0x54a5e4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a5e8:
    // 0x54a5e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a5ec:
    // 0x54a5ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a5f0:
    // 0x54a5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a5f4:
    // 0x54a5f4: 0x0  nop
    ctx->pc = 0x54a5f4u;
    // NOP
label_54a5f8:
    // 0x54a5f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a5fc:
    // 0x54a5fc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a5fcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a600:
    // 0x54a600: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a604:
    if (ctx->pc == 0x54A604u) {
        ctx->pc = 0x54A604u;
            // 0x54a604: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A608u;
        goto label_54a608;
    }
    ctx->pc = 0x54A600u;
    {
        const bool branch_taken_0x54a600 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a600) {
            ctx->pc = 0x54A604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A600u;
            // 0x54a604: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A614u;
            goto label_54a614;
        }
    }
    ctx->pc = 0x54A608u;
label_54a608:
    // 0x54a608: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a608u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a60c:
    // 0x54a60c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a610:
    if (ctx->pc == 0x54A610u) {
        ctx->pc = 0x54A610u;
            // 0x54a610: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A614u;
        goto label_54a614;
    }
    ctx->pc = 0x54A60Cu;
    {
        const bool branch_taken_0x54a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A60Cu;
            // 0x54a610: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a60c) {
            ctx->pc = 0x54A62Cu;
            goto label_54a62c;
        }
    }
    ctx->pc = 0x54A614u;
label_54a614:
    // 0x54a614: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a618:
    // 0x54a618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a61c:
    // 0x54a61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a620:
    // 0x54a620: 0x0  nop
    ctx->pc = 0x54a620u;
    // NOP
label_54a624:
    // 0x54a624: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a628:
    // 0x54a628: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a628u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a62c:
    // 0x54a62c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a630:
    // 0x54a630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a634:
    // 0x54a634: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a638:
    // 0x54a638: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a63c:
    // 0x54a63c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54a63cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54a640:
    // 0x54a640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a644:
    // 0x54a644: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54a644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54a648:
    // 0x54a648: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x54a648u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_54a64c:
    // 0x54a64c: 0xc0bc284  jal         func_2F0A10
label_54a650:
    if (ctx->pc == 0x54A650u) {
        ctx->pc = 0x54A650u;
            // 0x54a650: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->pc = 0x54A654u;
        goto label_54a654;
    }
    ctx->pc = 0x54A64Cu;
    SET_GPR_U32(ctx, 31, 0x54A654u);
    ctx->pc = 0x54A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A64Cu;
            // 0x54a650: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A654u; }
        if (ctx->pc != 0x54A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A654u; }
        if (ctx->pc != 0x54A654u) { return; }
    }
    ctx->pc = 0x54A654u;
label_54a654:
    // 0x54a654: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x54a654u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_54a658:
    // 0x54a658: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x54a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_54a65c:
    // 0x54a65c: 0x27dee780  addiu       $fp, $fp, -0x1880
    ctx->pc = 0x54a65cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961024));
label_54a660:
    // 0x54a660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54a664:
    // 0x54a664: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_54a668:
    if (ctx->pc == 0x54A668u) {
        ctx->pc = 0x54A668u;
            // 0x54a668: 0xc7da000c  lwc1        $f26, 0xC($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->pc = 0x54A66Cu;
        goto label_54a66c;
    }
    ctx->pc = 0x54A664u;
    {
        const bool branch_taken_0x54a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x54A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A664u;
            // 0x54a668: 0xc7da000c  lwc1        $f26, 0xC($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a664) {
            ctx->pc = 0x54A708u;
            goto label_54a708;
        }
    }
    ctx->pc = 0x54A66Cu;
label_54a66c:
    // 0x54a66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_54a670:
    if (ctx->pc == 0x54A670u) {
        ctx->pc = 0x54A674u;
        goto label_54a674;
    }
    ctx->pc = 0x54A66Cu;
    {
        const bool branch_taken_0x54a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54a66c) {
            ctx->pc = 0x54A67Cu;
            goto label_54a67c;
        }
    }
    ctx->pc = 0x54A674u;
label_54a674:
    // 0x54a674: 0x10000076  b           . + 4 + (0x76 << 2)
label_54a678:
    if (ctx->pc == 0x54A678u) {
        ctx->pc = 0x54A67Cu;
        goto label_54a67c;
    }
    ctx->pc = 0x54A674u;
    {
        const bool branch_taken_0x54a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54a674) {
            ctx->pc = 0x54A850u;
            goto label_54a850;
        }
    }
    ctx->pc = 0x54A67Cu;
label_54a67c:
    // 0x54a67c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54a680:
    if (ctx->pc == 0x54A680u) {
        ctx->pc = 0x54A680u;
            // 0x54a680: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54A684u;
        goto label_54a684;
    }
    ctx->pc = 0x54A67Cu;
    {
        const bool branch_taken_0x54a67c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54a67c) {
            ctx->pc = 0x54A680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A67Cu;
            // 0x54a680: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A690u;
            goto label_54a690;
        }
    }
    ctx->pc = 0x54A684u;
label_54a684:
    // 0x54a684: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a684u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a688:
    // 0x54a688: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a68c:
    if (ctx->pc == 0x54A68Cu) {
        ctx->pc = 0x54A68Cu;
            // 0x54a68c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A690u;
        goto label_54a690;
    }
    ctx->pc = 0x54A688u;
    {
        const bool branch_taken_0x54a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A688u;
            // 0x54a68c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a688) {
            ctx->pc = 0x54A6A8u;
            goto label_54a6a8;
        }
    }
    ctx->pc = 0x54A690u;
label_54a690:
    // 0x54a690: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a694:
    // 0x54a694: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a698:
    // 0x54a698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a69c:
    // 0x54a69c: 0x0  nop
    ctx->pc = 0x54a69cu;
    // NOP
label_54a6a0:
    // 0x54a6a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a6a4:
    // 0x54a6a4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a6a4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a6a8:
    // 0x54a6a8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a6ac:
    if (ctx->pc == 0x54A6ACu) {
        ctx->pc = 0x54A6ACu;
            // 0x54a6ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A6B0u;
        goto label_54a6b0;
    }
    ctx->pc = 0x54A6A8u;
    {
        const bool branch_taken_0x54a6a8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a6a8) {
            ctx->pc = 0x54A6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A6A8u;
            // 0x54a6ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A6BCu;
            goto label_54a6bc;
        }
    }
    ctx->pc = 0x54A6B0u;
label_54a6b0:
    // 0x54a6b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a6b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a6b4:
    // 0x54a6b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a6b8:
    if (ctx->pc == 0x54A6B8u) {
        ctx->pc = 0x54A6B8u;
            // 0x54a6b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A6BCu;
        goto label_54a6bc;
    }
    ctx->pc = 0x54A6B4u;
    {
        const bool branch_taken_0x54a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A6B4u;
            // 0x54a6b8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a6b4) {
            ctx->pc = 0x54A6D4u;
            goto label_54a6d4;
        }
    }
    ctx->pc = 0x54A6BCu;
label_54a6bc:
    // 0x54a6bc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a6c0:
    // 0x54a6c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a6c4:
    // 0x54a6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a6c8:
    // 0x54a6c8: 0x0  nop
    ctx->pc = 0x54a6c8u;
    // NOP
label_54a6cc:
    // 0x54a6cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a6d0:
    // 0x54a6d0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a6d0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a6d4:
    // 0x54a6d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a6d8:
    // 0x54a6d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x54a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_54a6dc:
    // 0x54a6dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54a6dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54a6e0:
    // 0x54a6e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a6e4:
    // 0x54a6e4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54a6e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54a6e8:
    // 0x54a6e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a6ec:
    // 0x54a6ec: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x54a6ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_54a6f0:
    // 0x54a6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a6f4:
    // 0x54a6f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a6f8:
    // 0x54a6f8: 0xc0bc284  jal         func_2F0A10
label_54a6fc:
    if (ctx->pc == 0x54A6FCu) {
        ctx->pc = 0x54A6FCu;
            // 0x54a6fc: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->pc = 0x54A700u;
        goto label_54a700;
    }
    ctx->pc = 0x54A6F8u;
    SET_GPR_U32(ctx, 31, 0x54A700u);
    ctx->pc = 0x54A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A6F8u;
            // 0x54a6fc: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A700u; }
        if (ctx->pc != 0x54A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A700u; }
        if (ctx->pc != 0x54A700u) { return; }
    }
    ctx->pc = 0x54A700u;
label_54a700:
    // 0x54a700: 0x10000053  b           . + 4 + (0x53 << 2)
label_54a704:
    if (ctx->pc == 0x54A704u) {
        ctx->pc = 0x54A708u;
        goto label_54a708;
    }
    ctx->pc = 0x54A700u;
    {
        const bool branch_taken_0x54a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54a700) {
            ctx->pc = 0x54A850u;
            goto label_54a850;
        }
    }
    ctx->pc = 0x54A708u;
label_54a708:
    // 0x54a708: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a708u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a70c:
    // 0x54a70c: 0x0  nop
    ctx->pc = 0x54a70cu;
    // NOP
label_54a710:
    // 0x54a710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a714:
    // 0x54a714: 0x46140581  sub.s       $f22, $f0, $f20
    ctx->pc = 0x54a714u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_54a718:
    // 0x54a718: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a718u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a71c:
    // 0x54a71c: 0x0  nop
    ctx->pc = 0x54a71cu;
    // NOP
label_54a720:
    // 0x54a720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a724:
    // 0x54a724: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x54a724u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_54a728:
    // 0x54a728: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a728u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a72c:
    // 0x54a72c: 0x0  nop
    ctx->pc = 0x54a72cu;
    // NOP
label_54a730:
    // 0x54a730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a734:
    // 0x54a734: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x54a734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_54a738:
    // 0x54a738: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a73c:
    if (ctx->pc == 0x54A73Cu) {
        ctx->pc = 0x54A73Cu;
            // 0x54a73c: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x54A740u;
        goto label_54a740;
    }
    ctx->pc = 0x54A738u;
    {
        const bool branch_taken_0x54a738 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A738u;
            // 0x54a73c: 0x4600abc0  add.s       $f15, $f21, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a738) {
            ctx->pc = 0x54A74Cu;
            goto label_54a74c;
        }
    }
    ctx->pc = 0x54A740u;
label_54a740:
    // 0x54a740: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a740u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a744:
    // 0x54a744: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a748:
    if (ctx->pc == 0x54A748u) {
        ctx->pc = 0x54A748u;
            // 0x54a748: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A74Cu;
        goto label_54a74c;
    }
    ctx->pc = 0x54A744u;
    {
        const bool branch_taken_0x54a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A744u;
            // 0x54a748: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a744) {
            ctx->pc = 0x54A768u;
            goto label_54a768;
        }
    }
    ctx->pc = 0x54A74Cu;
label_54a74c:
    // 0x54a74c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a750:
    // 0x54a750: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a754:
    // 0x54a754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a758:
    // 0x54a758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a75c:
    // 0x54a75c: 0x0  nop
    ctx->pc = 0x54a75cu;
    // NOP
label_54a760:
    // 0x54a760: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a764:
    // 0x54a764: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a764u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a768:
    // 0x54a768: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a76c:
    if (ctx->pc == 0x54A76Cu) {
        ctx->pc = 0x54A76Cu;
            // 0x54a76c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A770u;
        goto label_54a770;
    }
    ctx->pc = 0x54A768u;
    {
        const bool branch_taken_0x54a768 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a768) {
            ctx->pc = 0x54A76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A768u;
            // 0x54a76c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A77Cu;
            goto label_54a77c;
        }
    }
    ctx->pc = 0x54A770u;
label_54a770:
    // 0x54a770: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a770u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a774:
    // 0x54a774: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a778:
    if (ctx->pc == 0x54A778u) {
        ctx->pc = 0x54A778u;
            // 0x54a778: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A77Cu;
        goto label_54a77c;
    }
    ctx->pc = 0x54A774u;
    {
        const bool branch_taken_0x54a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A774u;
            // 0x54a778: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a774) {
            ctx->pc = 0x54A794u;
            goto label_54a794;
        }
    }
    ctx->pc = 0x54A77Cu;
label_54a77c:
    // 0x54a77c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a780:
    // 0x54a780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a784:
    // 0x54a784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a788:
    // 0x54a788: 0x0  nop
    ctx->pc = 0x54a788u;
    // NOP
label_54a78c:
    // 0x54a78c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a78cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a790:
    // 0x54a790: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a790u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a794:
    // 0x54a794: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a798:
    // 0x54a798: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a79c:
    // 0x54a79c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54a79cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54a7a0:
    // 0x54a7a0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x54a7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_54a7a4:
    // 0x54a7a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a7a8:
    // 0x54a7a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a7ac:
    // 0x54a7ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x54a7acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_54a7b0:
    // 0x54a7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54a7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54a7b4:
    // 0x54a7b4: 0xc0bc284  jal         func_2F0A10
label_54a7b8:
    if (ctx->pc == 0x54A7B8u) {
        ctx->pc = 0x54A7B8u;
            // 0x54a7b8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54A7BCu;
        goto label_54a7bc;
    }
    ctx->pc = 0x54A7B4u;
    SET_GPR_U32(ctx, 31, 0x54A7BCu);
    ctx->pc = 0x54A7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A7B4u;
            // 0x54a7b8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A7BCu; }
        if (ctx->pc != 0x54A7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A7BCu; }
        if (ctx->pc != 0x54A7BCu) { return; }
    }
    ctx->pc = 0x54A7BCu;
label_54a7bc:
    // 0x54a7bc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a7bcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a7c0:
    // 0x54a7c0: 0x0  nop
    ctx->pc = 0x54a7c0u;
    // NOP
label_54a7c4:
    // 0x54a7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54a7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54a7c8:
    // 0x54a7c8: 0x461a0001  sub.s       $f0, $f0, $f26
    ctx->pc = 0x54a7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
label_54a7cc:
    // 0x54a7cc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a7d0:
    if (ctx->pc == 0x54A7D0u) {
        ctx->pc = 0x54A7D0u;
            // 0x54a7d0: 0x461503c1  sub.s       $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x54A7D4u;
        goto label_54a7d4;
    }
    ctx->pc = 0x54A7CCu;
    {
        const bool branch_taken_0x54a7cc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A7CCu;
            // 0x54a7d0: 0x461503c1  sub.s       $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a7cc) {
            ctx->pc = 0x54A7E0u;
            goto label_54a7e0;
        }
    }
    ctx->pc = 0x54A7D4u;
label_54a7d4:
    // 0x54a7d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a7d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a7d8:
    // 0x54a7d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a7dc:
    if (ctx->pc == 0x54A7DCu) {
        ctx->pc = 0x54A7DCu;
            // 0x54a7dc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A7E0u;
        goto label_54a7e0;
    }
    ctx->pc = 0x54A7D8u;
    {
        const bool branch_taken_0x54a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A7D8u;
            // 0x54a7dc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a7d8) {
            ctx->pc = 0x54A7FCu;
            goto label_54a7fc;
        }
    }
    ctx->pc = 0x54A7E0u;
label_54a7e0:
    // 0x54a7e0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a7e4:
    // 0x54a7e4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a7e8:
    // 0x54a7e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a7ec:
    // 0x54a7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a7f0:
    // 0x54a7f0: 0x0  nop
    ctx->pc = 0x54a7f0u;
    // NOP
label_54a7f4:
    // 0x54a7f4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a7f8:
    // 0x54a7f8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a7f8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a7fc:
    // 0x54a7fc: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a800:
    if (ctx->pc == 0x54A800u) {
        ctx->pc = 0x54A800u;
            // 0x54a800: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A804u;
        goto label_54a804;
    }
    ctx->pc = 0x54A7FCu;
    {
        const bool branch_taken_0x54a7fc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a7fc) {
            ctx->pc = 0x54A800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A7FCu;
            // 0x54a800: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A810u;
            goto label_54a810;
        }
    }
    ctx->pc = 0x54A804u;
label_54a804:
    // 0x54a804: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a804u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a808:
    // 0x54a808: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a80c:
    if (ctx->pc == 0x54A80Cu) {
        ctx->pc = 0x54A80Cu;
            // 0x54a80c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A810u;
        goto label_54a810;
    }
    ctx->pc = 0x54A808u;
    {
        const bool branch_taken_0x54a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A808u;
            // 0x54a80c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a808) {
            ctx->pc = 0x54A828u;
            goto label_54a828;
        }
    }
    ctx->pc = 0x54A810u;
label_54a810:
    // 0x54a810: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a814:
    // 0x54a814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a818:
    // 0x54a818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a81c:
    // 0x54a81c: 0x0  nop
    ctx->pc = 0x54a81cu;
    // NOP
label_54a820:
    // 0x54a820: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a824:
    // 0x54a824: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a824u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a828:
    // 0x54a828: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a82c:
    // 0x54a82c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x54a82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_54a830:
    // 0x54a830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x54a830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_54a834:
    // 0x54a834: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a838:
    // 0x54a838: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x54a838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
label_54a83c:
    // 0x54a83c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a840:
    // 0x54a840: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54a840u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54a844:
    // 0x54a844: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a848:
    // 0x54a848: 0xc0bc284  jal         func_2F0A10
label_54a84c:
    if (ctx->pc == 0x54A84Cu) {
        ctx->pc = 0x54A84Cu;
            // 0x54a84c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A850u;
        goto label_54a850;
    }
    ctx->pc = 0x54A848u;
    SET_GPR_U32(ctx, 31, 0x54A850u);
    ctx->pc = 0x54A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A848u;
            // 0x54a84c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A850u; }
        if (ctx->pc != 0x54A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A850u; }
        if (ctx->pc != 0x54A850u) { return; }
    }
    ctx->pc = 0x54A850u;
label_54a850:
    // 0x54a850: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a850u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a854:
    // 0x54a854: 0x0  nop
    ctx->pc = 0x54a854u;
    // NOP
label_54a858:
    // 0x54a858: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a85c:
    // 0x54a85c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a85cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a860:
    // 0x54a860: 0x0  nop
    ctx->pc = 0x54a860u;
    // NOP
label_54a864:
    // 0x54a864: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a868:
    // 0x54a868: 0xc6550008  lwc1        $f21, 0x8($s2)
    ctx->pc = 0x54a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54a86c:
    // 0x54a86c: 0xc654000c  lwc1        $f20, 0xC($s2)
    ctx->pc = 0x54a86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54a870:
    // 0x54a870: 0x46156580  add.s       $f22, $f12, $f21
    ctx->pc = 0x54a870u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_54a874:
    // 0x54a874: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a878:
    if (ctx->pc == 0x54A878u) {
        ctx->pc = 0x54A878u;
            // 0x54a878: 0x46146dc0  add.s       $f23, $f13, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x54A87Cu;
        goto label_54a87c;
    }
    ctx->pc = 0x54A874u;
    {
        const bool branch_taken_0x54a874 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A874u;
            // 0x54a878: 0x46146dc0  add.s       $f23, $f13, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a874) {
            ctx->pc = 0x54A888u;
            goto label_54a888;
        }
    }
    ctx->pc = 0x54A87Cu;
label_54a87c:
    // 0x54a87c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a87cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a880:
    // 0x54a880: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a884:
    if (ctx->pc == 0x54A884u) {
        ctx->pc = 0x54A884u;
            // 0x54a884: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A888u;
        goto label_54a888;
    }
    ctx->pc = 0x54A880u;
    {
        const bool branch_taken_0x54a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A880u;
            // 0x54a884: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a880) {
            ctx->pc = 0x54A8A4u;
            goto label_54a8a4;
        }
    }
    ctx->pc = 0x54A888u;
label_54a888:
    // 0x54a888: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a88c:
    // 0x54a88c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a890:
    // 0x54a890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a894:
    // 0x54a894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a898:
    // 0x54a898: 0x0  nop
    ctx->pc = 0x54a898u;
    // NOP
label_54a89c:
    // 0x54a89c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a8a0:
    // 0x54a8a0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a8a0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a8a4:
    // 0x54a8a4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a8a8:
    if (ctx->pc == 0x54A8A8u) {
        ctx->pc = 0x54A8A8u;
            // 0x54a8a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A8ACu;
        goto label_54a8ac;
    }
    ctx->pc = 0x54A8A4u;
    {
        const bool branch_taken_0x54a8a4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a8a4) {
            ctx->pc = 0x54A8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A8A4u;
            // 0x54a8a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A8B8u;
            goto label_54a8b8;
        }
    }
    ctx->pc = 0x54A8ACu;
label_54a8ac:
    // 0x54a8ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a8acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a8b0:
    // 0x54a8b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a8b4:
    if (ctx->pc == 0x54A8B4u) {
        ctx->pc = 0x54A8B4u;
            // 0x54a8b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A8B8u;
        goto label_54a8b8;
    }
    ctx->pc = 0x54A8B0u;
    {
        const bool branch_taken_0x54a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A8B0u;
            // 0x54a8b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a8b0) {
            ctx->pc = 0x54A8D0u;
            goto label_54a8d0;
        }
    }
    ctx->pc = 0x54A8B8u;
label_54a8b8:
    // 0x54a8b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a8bc:
    // 0x54a8bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a8c0:
    // 0x54a8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a8c4:
    // 0x54a8c4: 0x0  nop
    ctx->pc = 0x54a8c4u;
    // NOP
label_54a8c8:
    // 0x54a8c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a8cc:
    // 0x54a8cc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a8ccu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a8d0:
    // 0x54a8d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a8d4:
    // 0x54a8d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a8d8:
    // 0x54a8d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a8dc:
    // 0x54a8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a8e0:
    // 0x54a8e0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54a8e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54a8e4:
    // 0x54a8e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a8e8:
    // 0x54a8e8: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54a8e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54a8ec:
    // 0x54a8ec: 0xc0bc284  jal         func_2F0A10
label_54a8f0:
    if (ctx->pc == 0x54A8F0u) {
        ctx->pc = 0x54A8F0u;
            // 0x54a8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A8F4u;
        goto label_54a8f4;
    }
    ctx->pc = 0x54A8ECu;
    SET_GPR_U32(ctx, 31, 0x54A8F4u);
    ctx->pc = 0x54A8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A8ECu;
            // 0x54a8f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A8F4u; }
        if (ctx->pc != 0x54A8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A8F4u; }
        if (ctx->pc != 0x54A8F4u) { return; }
    }
    ctx->pc = 0x54A8F4u;
label_54a8f4:
    // 0x54a8f4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54a8f4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a8f8:
    // 0x54a8f8: 0x0  nop
    ctx->pc = 0x54a8f8u;
    // NOP
label_54a8fc:
    // 0x54a8fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a900:
    // 0x54a900: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54a900u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a904:
    // 0x54a904: 0x0  nop
    ctx->pc = 0x54a904u;
    // NOP
label_54a908:
    // 0x54a908: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a90c:
    // 0x54a90c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a910:
    if (ctx->pc == 0x54A910u) {
        ctx->pc = 0x54A910u;
            // 0x54a910: 0x46156541  sub.s       $f21, $f12, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
        ctx->pc = 0x54A914u;
        goto label_54a914;
    }
    ctx->pc = 0x54A90Cu;
    {
        const bool branch_taken_0x54a90c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A90Cu;
            // 0x54a910: 0x46156541  sub.s       $f21, $f12, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a90c) {
            ctx->pc = 0x54A920u;
            goto label_54a920;
        }
    }
    ctx->pc = 0x54A914u;
label_54a914:
    // 0x54a914: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a914u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a918:
    // 0x54a918: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a91c:
    if (ctx->pc == 0x54A91Cu) {
        ctx->pc = 0x54A91Cu;
            // 0x54a91c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A920u;
        goto label_54a920;
    }
    ctx->pc = 0x54A918u;
    {
        const bool branch_taken_0x54a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A918u;
            // 0x54a91c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a918) {
            ctx->pc = 0x54A93Cu;
            goto label_54a93c;
        }
    }
    ctx->pc = 0x54A920u;
label_54a920:
    // 0x54a920: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a924:
    // 0x54a924: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a928:
    // 0x54a928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a92c:
    // 0x54a92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a930:
    // 0x54a930: 0x0  nop
    ctx->pc = 0x54a930u;
    // NOP
label_54a934:
    // 0x54a934: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a938:
    // 0x54a938: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a938u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a93c:
    // 0x54a93c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a940:
    if (ctx->pc == 0x54A940u) {
        ctx->pc = 0x54A940u;
            // 0x54a940: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A944u;
        goto label_54a944;
    }
    ctx->pc = 0x54A93Cu;
    {
        const bool branch_taken_0x54a93c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a93c) {
            ctx->pc = 0x54A940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A93Cu;
            // 0x54a940: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A950u;
            goto label_54a950;
        }
    }
    ctx->pc = 0x54A944u;
label_54a944:
    // 0x54a944: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a944u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a948:
    // 0x54a948: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a94c:
    if (ctx->pc == 0x54A94Cu) {
        ctx->pc = 0x54A94Cu;
            // 0x54a94c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A950u;
        goto label_54a950;
    }
    ctx->pc = 0x54A948u;
    {
        const bool branch_taken_0x54a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A948u;
            // 0x54a94c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a948) {
            ctx->pc = 0x54A968u;
            goto label_54a968;
        }
    }
    ctx->pc = 0x54A950u;
label_54a950:
    // 0x54a950: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a954:
    // 0x54a954: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a958:
    // 0x54a958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a95c:
    // 0x54a95c: 0x0  nop
    ctx->pc = 0x54a95cu;
    // NOP
label_54a960:
    // 0x54a960: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a964:
    // 0x54a964: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a964u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54a968:
    // 0x54a968: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54a96c:
    // 0x54a96c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54a970:
    // 0x54a970: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54a970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54a974:
    // 0x54a974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54a974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54a978:
    // 0x54a978: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x54a978u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_54a97c:
    // 0x54a97c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54a97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54a980:
    // 0x54a980: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54a980u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54a984:
    // 0x54a984: 0xc0bc284  jal         func_2F0A10
label_54a988:
    if (ctx->pc == 0x54A988u) {
        ctx->pc = 0x54A988u;
            // 0x54a988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54A98Cu;
        goto label_54a98c;
    }
    ctx->pc = 0x54A984u;
    SET_GPR_U32(ctx, 31, 0x54A98Cu);
    ctx->pc = 0x54A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54A984u;
            // 0x54a988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A98Cu; }
        if (ctx->pc != 0x54A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54A98Cu; }
        if (ctx->pc != 0x54A98Cu) { return; }
    }
    ctx->pc = 0x54A98Cu;
label_54a98c:
    // 0x54a98c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54a98cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a990:
    // 0x54a990: 0x0  nop
    ctx->pc = 0x54a990u;
    // NOP
label_54a994:
    // 0x54a994: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54a994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54a998:
    // 0x54a998: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54a998u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a99c:
    // 0x54a99c: 0x0  nop
    ctx->pc = 0x54a99cu;
    // NOP
label_54a9a0:
    // 0x54a9a0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54a9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54a9a4:
    // 0x54a9a4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54a9a8:
    if (ctx->pc == 0x54A9A8u) {
        ctx->pc = 0x54A9A8u;
            // 0x54a9a8: 0x46146d01  sub.s       $f20, $f13, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
        ctx->pc = 0x54A9ACu;
        goto label_54a9ac;
    }
    ctx->pc = 0x54A9A4u;
    {
        const bool branch_taken_0x54a9a4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A9A4u;
            // 0x54a9a8: 0x46146d01  sub.s       $f20, $f13, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a9a4) {
            ctx->pc = 0x54A9B8u;
            goto label_54a9b8;
        }
    }
    ctx->pc = 0x54A9ACu;
label_54a9ac:
    // 0x54a9ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54a9acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a9b0:
    // 0x54a9b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_54a9b4:
    if (ctx->pc == 0x54A9B4u) {
        ctx->pc = 0x54A9B4u;
            // 0x54a9b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A9B8u;
        goto label_54a9b8;
    }
    ctx->pc = 0x54A9B0u;
    {
        const bool branch_taken_0x54a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A9B0u;
            // 0x54a9b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a9b0) {
            ctx->pc = 0x54A9D4u;
            goto label_54a9d4;
        }
    }
    ctx->pc = 0x54A9B8u;
label_54a9b8:
    // 0x54a9b8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54a9bc:
    // 0x54a9bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54a9c0:
    // 0x54a9c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a9c4:
    // 0x54a9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a9c8:
    // 0x54a9c8: 0x0  nop
    ctx->pc = 0x54a9c8u;
    // NOP
label_54a9cc:
    // 0x54a9cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54a9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54a9d0:
    // 0x54a9d0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54a9d0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54a9d4:
    // 0x54a9d4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54a9d8:
    if (ctx->pc == 0x54A9D8u) {
        ctx->pc = 0x54A9D8u;
            // 0x54a9d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54A9DCu;
        goto label_54a9dc;
    }
    ctx->pc = 0x54A9D4u;
    {
        const bool branch_taken_0x54a9d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54a9d4) {
            ctx->pc = 0x54A9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54A9D4u;
            // 0x54a9d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54A9E8u;
            goto label_54a9e8;
        }
    }
    ctx->pc = 0x54A9DCu;
label_54a9dc:
    // 0x54a9dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54a9dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a9e0:
    // 0x54a9e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54a9e4:
    if (ctx->pc == 0x54A9E4u) {
        ctx->pc = 0x54A9E4u;
            // 0x54a9e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54A9E8u;
        goto label_54a9e8;
    }
    ctx->pc = 0x54A9E0u;
    {
        const bool branch_taken_0x54a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54A9E0u;
            // 0x54a9e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54a9e0) {
            ctx->pc = 0x54AA00u;
            goto label_54aa00;
        }
    }
    ctx->pc = 0x54A9E8u;
label_54a9e8:
    // 0x54a9e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54a9ec:
    // 0x54a9ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54a9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54a9f0:
    // 0x54a9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54a9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54a9f4:
    // 0x54a9f4: 0x0  nop
    ctx->pc = 0x54a9f4u;
    // NOP
label_54a9f8:
    // 0x54a9f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54a9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54a9fc:
    // 0x54a9fc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54a9fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54aa00:
    // 0x54aa00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54aa04:
    // 0x54aa04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54aa08:
    // 0x54aa08: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54aa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54aa0c:
    // 0x54aa0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54aa10:
    // 0x54aa10: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54aa10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54aa14:
    // 0x54aa14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54aa14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54aa18:
    // 0x54aa18: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54aa18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54aa1c:
    // 0x54aa1c: 0xc0bc284  jal         func_2F0A10
label_54aa20:
    if (ctx->pc == 0x54AA20u) {
        ctx->pc = 0x54AA20u;
            // 0x54aa20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AA24u;
        goto label_54aa24;
    }
    ctx->pc = 0x54AA1Cu;
    SET_GPR_U32(ctx, 31, 0x54AA24u);
    ctx->pc = 0x54AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AA1Cu;
            // 0x54aa20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AA24u; }
        if (ctx->pc != 0x54AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AA24u; }
        if (ctx->pc != 0x54AA24u) { return; }
    }
    ctx->pc = 0x54AA24u;
label_54aa24:
    // 0x54aa24: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54aa24u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa28:
    // 0x54aa28: 0x0  nop
    ctx->pc = 0x54aa28u;
    // NOP
label_54aa2c:
    // 0x54aa2c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54aa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54aa30:
    // 0x54aa30: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54aa30u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa34:
    // 0x54aa34: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54aa38:
    if (ctx->pc == 0x54AA38u) {
        ctx->pc = 0x54AA38u;
            // 0x54aa38: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AA3Cu;
        goto label_54aa3c;
    }
    ctx->pc = 0x54AA34u;
    {
        const bool branch_taken_0x54aa34 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AA34u;
            // 0x54aa38: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aa34) {
            ctx->pc = 0x54AA48u;
            goto label_54aa48;
        }
    }
    ctx->pc = 0x54AA3Cu;
label_54aa3c:
    // 0x54aa3c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54aa3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa40:
    // 0x54aa40: 0x10000008  b           . + 4 + (0x8 << 2)
label_54aa44:
    if (ctx->pc == 0x54AA44u) {
        ctx->pc = 0x54AA44u;
            // 0x54aa44: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AA48u;
        goto label_54aa48;
    }
    ctx->pc = 0x54AA40u;
    {
        const bool branch_taken_0x54aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AA40u;
            // 0x54aa44: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aa40) {
            ctx->pc = 0x54AA64u;
            goto label_54aa64;
        }
    }
    ctx->pc = 0x54AA48u;
label_54aa48:
    // 0x54aa48: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54aa4c:
    // 0x54aa4c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54aa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54aa50:
    // 0x54aa50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54aa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54aa54:
    // 0x54aa54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54aa54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa58:
    // 0x54aa58: 0x0  nop
    ctx->pc = 0x54aa58u;
    // NOP
label_54aa5c:
    // 0x54aa5c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54aa5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54aa60:
    // 0x54aa60: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54aa60u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54aa64:
    // 0x54aa64: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54aa68:
    if (ctx->pc == 0x54AA68u) {
        ctx->pc = 0x54AA68u;
            // 0x54aa68: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54AA6Cu;
        goto label_54aa6c;
    }
    ctx->pc = 0x54AA64u;
    {
        const bool branch_taken_0x54aa64 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54aa64) {
            ctx->pc = 0x54AA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AA64u;
            // 0x54aa68: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AA78u;
            goto label_54aa78;
        }
    }
    ctx->pc = 0x54AA6Cu;
label_54aa6c:
    // 0x54aa6c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54aa6cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa70:
    // 0x54aa70: 0x10000007  b           . + 4 + (0x7 << 2)
label_54aa74:
    if (ctx->pc == 0x54AA74u) {
        ctx->pc = 0x54AA74u;
            // 0x54aa74: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AA78u;
        goto label_54aa78;
    }
    ctx->pc = 0x54AA70u;
    {
        const bool branch_taken_0x54aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AA70u;
            // 0x54aa74: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aa70) {
            ctx->pc = 0x54AA90u;
            goto label_54aa90;
        }
    }
    ctx->pc = 0x54AA78u;
label_54aa78:
    // 0x54aa78: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54aa7c:
    // 0x54aa7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54aa80:
    // 0x54aa80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54aa80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aa84:
    // 0x54aa84: 0x0  nop
    ctx->pc = 0x54aa84u;
    // NOP
label_54aa88:
    // 0x54aa88: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54aa88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54aa8c:
    // 0x54aa8c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54aa8cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54aa90:
    // 0x54aa90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54aa94:
    // 0x54aa94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54aa98:
    // 0x54aa98: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54aa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54aa9c:
    // 0x54aa9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54aa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54aaa0:
    // 0x54aaa0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x54aaa0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_54aaa4:
    // 0x54aaa4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54aaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54aaa8:
    // 0x54aaa8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54aaa8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54aaac:
    // 0x54aaac: 0xc0bc284  jal         func_2F0A10
label_54aab0:
    if (ctx->pc == 0x54AAB0u) {
        ctx->pc = 0x54AAB0u;
            // 0x54aab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AAB4u;
        goto label_54aab4;
    }
    ctx->pc = 0x54AAACu;
    SET_GPR_U32(ctx, 31, 0x54AAB4u);
    ctx->pc = 0x54AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AAACu;
            // 0x54aab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AAB4u; }
        if (ctx->pc != 0x54AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AAB4u; }
        if (ctx->pc != 0x54AAB4u) { return; }
    }
    ctx->pc = 0x54AAB4u;
label_54aab4:
    // 0x54aab4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54aab4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aab8:
    // 0x54aab8: 0x0  nop
    ctx->pc = 0x54aab8u;
    // NOP
label_54aabc:
    // 0x54aabc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54aabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54aac0:
    // 0x54aac0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54aac4:
    if (ctx->pc == 0x54AAC4u) {
        ctx->pc = 0x54AAC4u;
            // 0x54aac4: 0x26550020  addiu       $s5, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x54AAC8u;
        goto label_54aac8;
    }
    ctx->pc = 0x54AAC0u;
    {
        const bool branch_taken_0x54aac0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54AAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AAC0u;
            // 0x54aac4: 0x26550020  addiu       $s5, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aac0) {
            ctx->pc = 0x54AAD4u;
            goto label_54aad4;
        }
    }
    ctx->pc = 0x54AAC8u;
label_54aac8:
    // 0x54aac8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54aac8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aacc:
    // 0x54aacc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54aad0:
    if (ctx->pc == 0x54AAD0u) {
        ctx->pc = 0x54AAD0u;
            // 0x54aad0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AAD4u;
        goto label_54aad4;
    }
    ctx->pc = 0x54AACCu;
    {
        const bool branch_taken_0x54aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AACCu;
            // 0x54aad0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aacc) {
            ctx->pc = 0x54AAF0u;
            goto label_54aaf0;
        }
    }
    ctx->pc = 0x54AAD4u;
label_54aad4:
    // 0x54aad4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54aad8:
    // 0x54aad8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54aad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54aadc:
    // 0x54aadc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54aadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54aae0:
    // 0x54aae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54aae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aae4:
    // 0x54aae4: 0x0  nop
    ctx->pc = 0x54aae4u;
    // NOP
label_54aae8:
    // 0x54aae8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54aae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54aaec:
    // 0x54aaec: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54aaecu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54aaf0:
    // 0x54aaf0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54aaf4:
    if (ctx->pc == 0x54AAF4u) {
        ctx->pc = 0x54AAF4u;
            // 0x54aaf4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54AAF8u;
        goto label_54aaf8;
    }
    ctx->pc = 0x54AAF0u;
    {
        const bool branch_taken_0x54aaf0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54aaf0) {
            ctx->pc = 0x54AAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AAF0u;
            // 0x54aaf4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AB04u;
            goto label_54ab04;
        }
    }
    ctx->pc = 0x54AAF8u;
label_54aaf8:
    // 0x54aaf8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54aaf8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54aafc:
    // 0x54aafc: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ab00:
    if (ctx->pc == 0x54AB00u) {
        ctx->pc = 0x54AB00u;
            // 0x54ab00: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AB04u;
        goto label_54ab04;
    }
    ctx->pc = 0x54AAFCu;
    {
        const bool branch_taken_0x54aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AAFCu;
            // 0x54ab00: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54aafc) {
            ctx->pc = 0x54AB1Cu;
            goto label_54ab1c;
        }
    }
    ctx->pc = 0x54AB04u;
label_54ab04:
    // 0x54ab04: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ab08:
    // 0x54ab08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ab0c:
    // 0x54ab0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ab0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab10:
    // 0x54ab10: 0x0  nop
    ctx->pc = 0x54ab10u;
    // NOP
label_54ab14:
    // 0x54ab14: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ab14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ab18:
    // 0x54ab18: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ab18u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ab1c:
    // 0x54ab1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ab20:
    // 0x54ab20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ab24:
    // 0x54ab24: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ab24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ab28:
    // 0x54ab28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x54ab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54ab2c:
    // 0x54ab2c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54ab2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54ab30:
    // 0x54ab30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54ab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54ab34:
    // 0x54ab34: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54ab34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54ab38:
    // 0x54ab38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ab38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ab3c:
    // 0x54ab3c: 0xc0bc284  jal         func_2F0A10
label_54ab40:
    if (ctx->pc == 0x54AB40u) {
        ctx->pc = 0x54AB40u;
            // 0x54ab40: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54AB44u;
        goto label_54ab44;
    }
    ctx->pc = 0x54AB3Cu;
    SET_GPR_U32(ctx, 31, 0x54AB44u);
    ctx->pc = 0x54AB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AB3Cu;
            // 0x54ab40: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AB44u; }
        if (ctx->pc != 0x54AB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AB44u; }
        if (ctx->pc != 0x54AB44u) { return; }
    }
    ctx->pc = 0x54AB44u;
label_54ab44:
    // 0x54ab44: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x54ab44u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab48:
    // 0x54ab48: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54ab4c:
    if (ctx->pc == 0x54AB4Cu) {
        ctx->pc = 0x54AB4Cu;
            // 0x54ab4c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AB50u;
        goto label_54ab50;
    }
    ctx->pc = 0x54AB48u;
    {
        const bool branch_taken_0x54ab48 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AB48u;
            // 0x54ab4c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ab48) {
            ctx->pc = 0x54AB5Cu;
            goto label_54ab5c;
        }
    }
    ctx->pc = 0x54AB50u;
label_54ab50:
    // 0x54ab50: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54ab50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab54:
    // 0x54ab54: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ab58:
    if (ctx->pc == 0x54AB58u) {
        ctx->pc = 0x54AB58u;
            // 0x54ab58: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AB5Cu;
        goto label_54ab5c;
    }
    ctx->pc = 0x54AB54u;
    {
        const bool branch_taken_0x54ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AB54u;
            // 0x54ab58: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ab54) {
            ctx->pc = 0x54AB78u;
            goto label_54ab78;
        }
    }
    ctx->pc = 0x54AB5Cu;
label_54ab5c:
    // 0x54ab5c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ab60:
    // 0x54ab60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ab64:
    // 0x54ab64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ab68:
    // 0x54ab68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ab68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab6c:
    // 0x54ab6c: 0x0  nop
    ctx->pc = 0x54ab6cu;
    // NOP
label_54ab70:
    // 0x54ab70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ab70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ab74:
    // 0x54ab74: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ab74u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ab78:
    // 0x54ab78: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ab7c:
    if (ctx->pc == 0x54AB7Cu) {
        ctx->pc = 0x54AB7Cu;
            // 0x54ab7c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54AB80u;
        goto label_54ab80;
    }
    ctx->pc = 0x54AB78u;
    {
        const bool branch_taken_0x54ab78 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ab78) {
            ctx->pc = 0x54AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AB78u;
            // 0x54ab7c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AB8Cu;
            goto label_54ab8c;
        }
    }
    ctx->pc = 0x54AB80u;
label_54ab80:
    // 0x54ab80: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ab80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab84:
    // 0x54ab84: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ab88:
    if (ctx->pc == 0x54AB88u) {
        ctx->pc = 0x54AB88u;
            // 0x54ab88: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AB8Cu;
        goto label_54ab8c;
    }
    ctx->pc = 0x54AB84u;
    {
        const bool branch_taken_0x54ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AB84u;
            // 0x54ab88: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ab84) {
            ctx->pc = 0x54ABA4u;
            goto label_54aba4;
        }
    }
    ctx->pc = 0x54AB8Cu;
label_54ab8c:
    // 0x54ab8c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ab90:
    // 0x54ab90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ab94:
    // 0x54ab94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ab94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ab98:
    // 0x54ab98: 0x0  nop
    ctx->pc = 0x54ab98u;
    // NOP
label_54ab9c:
    // 0x54ab9c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ab9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54aba0:
    // 0x54aba0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54aba0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54aba4:
    // 0x54aba4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54aba8:
    // 0x54aba8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x54aba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54abac:
    // 0x54abac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54abacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54abb0:
    // 0x54abb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54abb4:
    // 0x54abb4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54abb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54abb8:
    // 0x54abb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54abb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54abbc:
    // 0x54abbc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x54abbcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_54abc0:
    // 0x54abc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54abc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54abc4:
    // 0x54abc4: 0xc0bc284  jal         func_2F0A10
label_54abc8:
    if (ctx->pc == 0x54ABC8u) {
        ctx->pc = 0x54ABC8u;
            // 0x54abc8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54ABCCu;
        goto label_54abcc;
    }
    ctx->pc = 0x54ABC4u;
    SET_GPR_U32(ctx, 31, 0x54ABCCu);
    ctx->pc = 0x54ABC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ABC4u;
            // 0x54abc8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ABCCu; }
        if (ctx->pc != 0x54ABCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ABCCu; }
        if (ctx->pc != 0x54ABCCu) { return; }
    }
    ctx->pc = 0x54ABCCu;
label_54abcc:
    // 0x54abcc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54abccu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54abd0:
    // 0x54abd0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x54abd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_54abd4:
    // 0x54abd4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54abd8:
    if (ctx->pc == 0x54ABD8u) {
        ctx->pc = 0x54ABD8u;
            // 0x54abd8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54ABDCu;
        goto label_54abdc;
    }
    ctx->pc = 0x54ABD4u;
    {
        const bool branch_taken_0x54abd4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ABD4u;
            // 0x54abd8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54abd4) {
            ctx->pc = 0x54ABE8u;
            goto label_54abe8;
        }
    }
    ctx->pc = 0x54ABDCu;
label_54abdc:
    // 0x54abdc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54abdcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54abe0:
    // 0x54abe0: 0x10000008  b           . + 4 + (0x8 << 2)
label_54abe4:
    if (ctx->pc == 0x54ABE4u) {
        ctx->pc = 0x54ABE4u;
            // 0x54abe4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54ABE8u;
        goto label_54abe8;
    }
    ctx->pc = 0x54ABE0u;
    {
        const bool branch_taken_0x54abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54ABE0u;
            // 0x54abe4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54abe0) {
            ctx->pc = 0x54AC04u;
            goto label_54ac04;
        }
    }
    ctx->pc = 0x54ABE8u;
label_54abe8:
    // 0x54abe8: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54abec:
    // 0x54abec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54abf0:
    // 0x54abf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54abf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54abf4:
    // 0x54abf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54abf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54abf8:
    // 0x54abf8: 0x0  nop
    ctx->pc = 0x54abf8u;
    // NOP
label_54abfc:
    // 0x54abfc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54abfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ac00:
    // 0x54ac00: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ac00u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ac04:
    // 0x54ac04: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ac08:
    if (ctx->pc == 0x54AC08u) {
        ctx->pc = 0x54AC08u;
            // 0x54ac08: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54AC0Cu;
        goto label_54ac0c;
    }
    ctx->pc = 0x54AC04u;
    {
        const bool branch_taken_0x54ac04 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ac04) {
            ctx->pc = 0x54AC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC04u;
            // 0x54ac08: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AC18u;
            goto label_54ac18;
        }
    }
    ctx->pc = 0x54AC0Cu;
label_54ac0c:
    // 0x54ac0c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ac0cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac10:
    // 0x54ac10: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ac14:
    if (ctx->pc == 0x54AC14u) {
        ctx->pc = 0x54AC14u;
            // 0x54ac14: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AC18u;
        goto label_54ac18;
    }
    ctx->pc = 0x54AC10u;
    {
        const bool branch_taken_0x54ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC10u;
            // 0x54ac14: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ac10) {
            ctx->pc = 0x54AC30u;
            goto label_54ac30;
        }
    }
    ctx->pc = 0x54AC18u;
label_54ac18:
    // 0x54ac18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ac1c:
    // 0x54ac1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ac1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ac20:
    // 0x54ac20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ac20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac24:
    // 0x54ac24: 0x0  nop
    ctx->pc = 0x54ac24u;
    // NOP
label_54ac28:
    // 0x54ac28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ac28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ac2c:
    // 0x54ac2c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ac2cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ac30:
    // 0x54ac30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ac34:
    // 0x54ac34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ac38:
    // 0x54ac38: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54ac38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54ac3c:
    // 0x54ac3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54ac40:
    // 0x54ac40: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ac40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ac44:
    // 0x54ac44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54ac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54ac48:
    // 0x54ac48: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54ac48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54ac4c:
    // 0x54ac4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ac4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ac50:
    // 0x54ac50: 0xc0bc284  jal         func_2F0A10
label_54ac54:
    if (ctx->pc == 0x54AC54u) {
        ctx->pc = 0x54AC54u;
            // 0x54ac54: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54AC58u;
        goto label_54ac58;
    }
    ctx->pc = 0x54AC50u;
    SET_GPR_U32(ctx, 31, 0x54AC58u);
    ctx->pc = 0x54AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC50u;
            // 0x54ac54: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AC58u; }
        if (ctx->pc != 0x54AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AC58u; }
        if (ctx->pc != 0x54AC58u) { return; }
    }
    ctx->pc = 0x54AC58u;
label_54ac58:
    // 0x54ac58: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54ac58u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac5c:
    // 0x54ac5c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54ac60:
    if (ctx->pc == 0x54AC60u) {
        ctx->pc = 0x54AC60u;
            // 0x54ac60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AC64u;
        goto label_54ac64;
    }
    ctx->pc = 0x54AC5Cu;
    {
        const bool branch_taken_0x54ac5c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC5Cu;
            // 0x54ac60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ac5c) {
            ctx->pc = 0x54AC70u;
            goto label_54ac70;
        }
    }
    ctx->pc = 0x54AC64u;
label_54ac64:
    // 0x54ac64: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54ac64u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac68:
    // 0x54ac68: 0x10000008  b           . + 4 + (0x8 << 2)
label_54ac6c:
    if (ctx->pc == 0x54AC6Cu) {
        ctx->pc = 0x54AC6Cu;
            // 0x54ac6c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54AC70u;
        goto label_54ac70;
    }
    ctx->pc = 0x54AC68u;
    {
        const bool branch_taken_0x54ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC68u;
            // 0x54ac6c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ac68) {
            ctx->pc = 0x54AC8Cu;
            goto label_54ac8c;
        }
    }
    ctx->pc = 0x54AC70u;
label_54ac70:
    // 0x54ac70: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ac74:
    // 0x54ac74: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ac78:
    // 0x54ac78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ac78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ac7c:
    // 0x54ac7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ac7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac80:
    // 0x54ac80: 0x0  nop
    ctx->pc = 0x54ac80u;
    // NOP
label_54ac84:
    // 0x54ac84: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ac84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ac88:
    // 0x54ac88: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ac88u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ac8c:
    // 0x54ac8c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ac90:
    if (ctx->pc == 0x54AC90u) {
        ctx->pc = 0x54AC90u;
            // 0x54ac90: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54AC94u;
        goto label_54ac94;
    }
    ctx->pc = 0x54AC8Cu;
    {
        const bool branch_taken_0x54ac8c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ac8c) {
            ctx->pc = 0x54AC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC8Cu;
            // 0x54ac90: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54ACA0u;
            goto label_54aca0;
        }
    }
    ctx->pc = 0x54AC94u;
label_54ac94:
    // 0x54ac94: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ac94u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ac98:
    // 0x54ac98: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ac9c:
    if (ctx->pc == 0x54AC9Cu) {
        ctx->pc = 0x54AC9Cu;
            // 0x54ac9c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54ACA0u;
        goto label_54aca0;
    }
    ctx->pc = 0x54AC98u;
    {
        const bool branch_taken_0x54ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AC98u;
            // 0x54ac9c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ac98) {
            ctx->pc = 0x54ACB8u;
            goto label_54acb8;
        }
    }
    ctx->pc = 0x54ACA0u;
label_54aca0:
    // 0x54aca0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54aca4:
    // 0x54aca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54aca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54aca8:
    // 0x54aca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54aca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54acac:
    // 0x54acac: 0x0  nop
    ctx->pc = 0x54acacu;
    // NOP
label_54acb0:
    // 0x54acb0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54acb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54acb4:
    // 0x54acb4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54acb4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54acb8:
    // 0x54acb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54acbc:
    // 0x54acbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54acbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54acc0:
    // 0x54acc0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54acc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54acc4:
    // 0x54acc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54acc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54acc8:
    // 0x54acc8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x54acc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_54accc:
    // 0x54accc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54acd0:
    // 0x54acd0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54acd0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54acd4:
    // 0x54acd4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54acd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54acd8:
    // 0x54acd8: 0xc0bc284  jal         func_2F0A10
label_54acdc:
    if (ctx->pc == 0x54ACDCu) {
        ctx->pc = 0x54ACDCu;
            // 0x54acdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54ACE0u;
        goto label_54ace0;
    }
    ctx->pc = 0x54ACD8u;
    SET_GPR_U32(ctx, 31, 0x54ACE0u);
    ctx->pc = 0x54ACDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ACD8u;
            // 0x54acdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ACE0u; }
        if (ctx->pc != 0x54ACE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ACE0u; }
        if (ctx->pc != 0x54ACE0u) { return; }
    }
    ctx->pc = 0x54ACE0u;
label_54ace0:
    // 0x54ace0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ace4:
    // 0x54ace4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54ace8:
    // 0x54ace8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ace8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54acec:
    // 0x54acec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54acecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54acf0:
    // 0x54acf0: 0x320f809  jalr        $t9
label_54acf4:
    if (ctx->pc == 0x54ACF4u) {
        ctx->pc = 0x54ACF8u;
        goto label_54acf8;
    }
    ctx->pc = 0x54ACF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54ACF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54ACF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54ACF8u; }
            if (ctx->pc != 0x54ACF8u) { return; }
        }
        }
    }
    ctx->pc = 0x54ACF8u;
label_54acf8:
    // 0x54acf8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x54acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_54acfc:
    // 0x54acfc: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x54acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_54ad00:
    // 0x54ad00: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x54ad00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_54ad04:
    // 0x54ad04: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x54ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_54ad08:
    // 0x54ad08: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54ad08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_54ad0c:
    // 0x54ad0c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54ad10:
    // 0x54ad10: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x54ad10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54ad14:
    // 0x54ad14: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54ad18:
    // 0x54ad18: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54ad18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54ad1c:
    // 0x54ad1c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54ad20:
    // 0x54ad20: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x54ad20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54ad24:
    // 0x54ad24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54ad28:
    // 0x54ad28: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54ad28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54ad2c:
    // 0x54ad2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54ad30:
    // 0x54ad30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54ad30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54ad34:
    // 0x54ad34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54ad34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54ad38:
    // 0x54ad38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54ad38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54ad3c:
    // 0x54ad3c: 0x3e00008  jr          $ra
label_54ad40:
    if (ctx->pc == 0x54AD40u) {
        ctx->pc = 0x54AD40u;
            // 0x54ad40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x54AD44u;
        goto label_54ad44;
    }
    ctx->pc = 0x54AD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54AD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AD3Cu;
            // 0x54ad40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54AD44u;
label_54ad44:
    // 0x54ad44: 0x0  nop
    ctx->pc = 0x54ad44u;
    // NOP
label_54ad48:
    // 0x54ad48: 0x0  nop
    ctx->pc = 0x54ad48u;
    // NOP
label_54ad4c:
    // 0x54ad4c: 0x0  nop
    ctx->pc = 0x54ad4cu;
    // NOP
label_54ad50:
    // 0x54ad50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x54ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_54ad54:
    // 0x54ad54: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x54ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_54ad58:
    // 0x54ad58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x54ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_54ad5c:
    // 0x54ad5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54ad60:
    // 0x54ad60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x54ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_54ad64:
    // 0x54ad64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_54ad68:
    // 0x54ad68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_54ad6c:
    // 0x54ad6c: 0x8cb13e28  lw          $s1, 0x3E28($a1)
    ctx->pc = 0x54ad6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15912)));
label_54ad70:
    // 0x54ad70: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x54ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_54ad74:
    // 0x54ad74: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x54ad74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_54ad78:
    // 0x54ad78: 0x2ca10021  sltiu       $at, $a1, 0x21
    ctx->pc = 0x54ad78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_54ad7c:
    // 0x54ad7c: 0x102004fd  beqz        $at, . + 4 + (0x4FD << 2)
label_54ad80:
    if (ctx->pc == 0x54AD80u) {
        ctx->pc = 0x54AD80u;
            // 0x54ad80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AD84u;
        goto label_54ad84;
    }
    ctx->pc = 0x54AD7Cu;
    {
        const bool branch_taken_0x54ad7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x54AD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AD7Cu;
            // 0x54ad80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ad7c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AD84u;
label_54ad84:
    // 0x54ad84: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x54ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_54ad88:
    // 0x54ad88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x54ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_54ad8c:
    // 0x54ad8c: 0x24c6e4c0  addiu       $a2, $a2, -0x1B40
    ctx->pc = 0x54ad8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960320));
label_54ad90:
    // 0x54ad90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x54ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_54ad94:
    // 0x54ad94: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x54ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_54ad98:
    // 0x54ad98: 0xa00008  jr          $a1
label_54ad9c:
    if (ctx->pc == 0x54AD9Cu) {
        ctx->pc = 0x54ADA0u;
        goto label_54ada0;
    }
    ctx->pc = 0x54AD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x54ADA0u: goto label_54ada0;
            case 0x54ADC0u: goto label_54adc0;
            case 0x54AF0Cu: goto label_54af0c;
            case 0x54AF30u: goto label_54af30;
            case 0x54AF48u: goto label_54af48;
            case 0x54AF9Cu: goto label_54af9c;
            case 0x54B0F8u: goto label_54b0f8;
            case 0x54B1C4u: goto label_54b1c4;
            case 0x54B290u: goto label_54b290;
            case 0x54B324u: goto label_54b324;
            case 0x54B3F8u: goto label_54b3f8;
            case 0x54B524u: goto label_54b524;
            case 0x54B5BCu: goto label_54b5bc;
            case 0x54B6C4u: goto label_54b6c4;
            case 0x54B6DCu: goto label_54b6dc;
            case 0x54B728u: goto label_54b728;
            case 0x54B774u: goto label_54b774;
            case 0x54B80Cu: goto label_54b80c;
            case 0x54B8F4u: goto label_54b8f4;
            case 0x54B940u: goto label_54b940;
            case 0x54B9C4u: goto label_54b9c4;
            case 0x54B9E8u: goto label_54b9e8;
            case 0x54BAC8u: goto label_54bac8;
            case 0x54BBE0u: goto label_54bbe0;
            case 0x54BD10u: goto label_54bd10;
            case 0x54BEC8u: goto label_54bec8;
            case 0x54BF84u: goto label_54bf84;
            case 0x54C044u: goto label_54c044;
            case 0x54C068u: goto label_54c068;
            case 0x54C080u: goto label_54c080;
            case 0x54C0D0u: goto label_54c0d0;
            case 0x54C118u: goto label_54c118;
            case 0x54C13Cu: goto label_54c13c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x54ADA0u;
label_54ada0:
    // 0x54ada0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ada4:
    // 0x54ada4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x54ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_54ada8:
    // 0x54ada8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x54ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_54adac:
    // 0x54adac: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x54adacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_54adb0:
    // 0x54adb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54adb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54adb4:
    // 0x54adb4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54adb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54adb8:
    // 0x54adb8: 0x320f809  jalr        $t9
label_54adbc:
    if (ctx->pc == 0x54ADBCu) {
        ctx->pc = 0x54ADC0u;
        goto label_54adc0;
    }
    ctx->pc = 0x54ADB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54ADC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54ADC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54ADC0u; }
            if (ctx->pc != 0x54ADC0u) { return; }
        }
        }
    }
    ctx->pc = 0x54ADC0u;
label_54adc0:
    // 0x54adc0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54adc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54adc4:
    // 0x54adc4: 0x546004ec  bnel        $v1, $zero, . + 4 + (0x4EC << 2)
label_54adc8:
    if (ctx->pc == 0x54ADC8u) {
        ctx->pc = 0x54ADC8u;
            // 0x54adc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x54ADCCu;
        goto label_54adcc;
    }
    ctx->pc = 0x54ADC4u;
    {
        const bool branch_taken_0x54adc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54adc4) {
            ctx->pc = 0x54ADC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54ADC4u;
            // 0x54adc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C178u;
            goto label_54c178;
        }
    }
    ctx->pc = 0x54ADCCu;
label_54adcc:
    // 0x54adcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54add0:
    // 0x54add0: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x54add0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54add4:
    // 0x54add4: 0xc120460  jal         func_481180
label_54add8:
    if (ctx->pc == 0x54ADD8u) {
        ctx->pc = 0x54ADD8u;
            // 0x54add8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54ADDCu;
        goto label_54addc;
    }
    ctx->pc = 0x54ADD4u;
    SET_GPR_U32(ctx, 31, 0x54ADDCu);
    ctx->pc = 0x54ADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ADD4u;
            // 0x54add8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481180u;
    if (runtime->hasFunction(0x481180u)) {
        auto targetFn = runtime->lookupFunction(0x481180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ADDCu; }
        if (ctx->pc != 0x54ADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481180_0x481180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ADDCu; }
        if (ctx->pc != 0x54ADDCu) { return; }
    }
    ctx->pc = 0x54ADDCu;
label_54addc:
    // 0x54addc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54ade0:
    // 0x54ade0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x54ade0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ade4:
    // 0x54ade4: 0x8c510ec8  lw          $s1, 0xEC8($v0)
    ctx->pc = 0x54ade4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54ade8:
    // 0x54ade8: 0xc040180  jal         func_100600
label_54adec:
    if (ctx->pc == 0x54ADECu) {
        ctx->pc = 0x54ADECu;
            // 0x54adec: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x54ADF0u;
        goto label_54adf0;
    }
    ctx->pc = 0x54ADE8u;
    SET_GPR_U32(ctx, 31, 0x54ADF0u);
    ctx->pc = 0x54ADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ADE8u;
            // 0x54adec: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ADF0u; }
        if (ctx->pc != 0x54ADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54ADF0u; }
        if (ctx->pc != 0x54ADF0u) { return; }
    }
    ctx->pc = 0x54ADF0u;
label_54adf0:
    // 0x54adf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_54adf4:
    if (ctx->pc == 0x54ADF4u) {
        ctx->pc = 0x54ADF8u;
        goto label_54adf8;
    }
    ctx->pc = 0x54ADF0u;
    {
        const bool branch_taken_0x54adf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54adf0) {
            ctx->pc = 0x54AE00u;
            goto label_54ae00;
        }
    }
    ctx->pc = 0x54ADF8u;
label_54adf8:
    // 0x54adf8: 0xc120790  jal         func_481E40
label_54adfc:
    if (ctx->pc == 0x54ADFCu) {
        ctx->pc = 0x54ADFCu;
            // 0x54adfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AE00u;
        goto label_54ae00;
    }
    ctx->pc = 0x54ADF8u;
    SET_GPR_U32(ctx, 31, 0x54AE00u);
    ctx->pc = 0x54ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54ADF8u;
            // 0x54adfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481E40u;
    if (runtime->hasFunction(0x481E40u)) {
        auto targetFn = runtime->lookupFunction(0x481E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE00u; }
        if (ctx->pc != 0x54AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481E40_0x481e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE00u; }
        if (ctx->pc != 0x54AE00u) { return; }
    }
    ctx->pc = 0x54AE00u;
label_54ae00:
    // 0x54ae00: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x54ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_54ae04:
    // 0x54ae04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x54ae04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_54ae08:
    // 0x54ae08: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x54ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_54ae0c:
    // 0x54ae0c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x54ae0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_54ae10:
    // 0x54ae10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_54ae14:
    if (ctx->pc == 0x54AE14u) {
        ctx->pc = 0x54AE14u;
            // 0x54ae14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x54AE18u;
        goto label_54ae18;
    }
    ctx->pc = 0x54AE10u;
    {
        const bool branch_taken_0x54ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54AE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE10u;
            // 0x54ae14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ae10) {
            ctx->pc = 0x54ADE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54ade8;
        }
    }
    ctx->pc = 0x54AE18u;
label_54ae18:
    // 0x54ae18: 0xc040180  jal         func_100600
label_54ae1c:
    if (ctx->pc == 0x54AE1Cu) {
        ctx->pc = 0x54AE1Cu;
            // 0x54ae1c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54AE20u;
        goto label_54ae20;
    }
    ctx->pc = 0x54AE18u;
    SET_GPR_U32(ctx, 31, 0x54AE20u);
    ctx->pc = 0x54AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE18u;
            // 0x54ae1c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE20u; }
        if (ctx->pc != 0x54AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE20u; }
        if (ctx->pc != 0x54AE20u) { return; }
    }
    ctx->pc = 0x54AE20u;
label_54ae20:
    // 0x54ae20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x54ae20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54ae24:
    // 0x54ae24: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_54ae28:
    if (ctx->pc == 0x54AE28u) {
        ctx->pc = 0x54AE2Cu;
        goto label_54ae2c;
    }
    ctx->pc = 0x54AE24u;
    {
        const bool branch_taken_0x54ae24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ae24) {
            ctx->pc = 0x54AE48u;
            goto label_54ae48;
        }
    }
    ctx->pc = 0x54AE2Cu;
label_54ae2c:
    // 0x54ae2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54ae30:
    // 0x54ae30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54ae34:
    // 0x54ae34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54ae34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ae38:
    // 0x54ae38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ae38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ae3c:
    // 0x54ae3c: 0xc151190  jal         func_544640
label_54ae40:
    if (ctx->pc == 0x54AE40u) {
        ctx->pc = 0x54AE40u;
            // 0x54ae40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AE44u;
        goto label_54ae44;
    }
    ctx->pc = 0x54AE3Cu;
    SET_GPR_U32(ctx, 31, 0x54AE44u);
    ctx->pc = 0x54AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE3Cu;
            // 0x54ae40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE44u; }
        if (ctx->pc != 0x54AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE44u; }
        if (ctx->pc != 0x54AE44u) { return; }
    }
    ctx->pc = 0x54AE44u;
label_54ae44:
    // 0x54ae44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x54ae44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54ae48:
    // 0x54ae48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54ae4c:
    // 0x54ae4c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54ae50:
    // 0x54ae50: 0xc1206b0  jal         func_481AC0
label_54ae54:
    if (ctx->pc == 0x54AE54u) {
        ctx->pc = 0x54AE54u;
            // 0x54ae54: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x54AE58u;
        goto label_54ae58;
    }
    ctx->pc = 0x54AE50u;
    SET_GPR_U32(ctx, 31, 0x54AE58u);
    ctx->pc = 0x54AE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE50u;
            // 0x54ae54: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE58u; }
        if (ctx->pc != 0x54AE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AE58u; }
        if (ctx->pc != 0x54AE58u) { return; }
    }
    ctx->pc = 0x54AE58u;
label_54ae58:
    // 0x54ae58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54ae58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54ae5c:
    // 0x54ae5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x54ae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54ae60:
    // 0x54ae60: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54ae60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54ae64:
    // 0x54ae64: 0x320f809  jalr        $t9
label_54ae68:
    if (ctx->pc == 0x54AE68u) {
        ctx->pc = 0x54AE68u;
            // 0x54ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AE6Cu;
        goto label_54ae6c;
    }
    ctx->pc = 0x54AE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AE6Cu);
        ctx->pc = 0x54AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE64u;
            // 0x54ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AE6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AE6Cu; }
            if (ctx->pc != 0x54AE6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54AE6Cu;
label_54ae6c:
    // 0x54ae6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54ae70:
    // 0x54ae70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54ae70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54ae74:
    // 0x54ae74: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54ae78:
    // 0x54ae78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54ae7c:
    // 0x54ae7c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54ae7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54ae80:
    // 0x54ae80: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x54ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_54ae84:
    // 0x54ae84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x54ae84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54ae88:
    // 0x54ae88: 0x320f809  jalr        $t9
label_54ae8c:
    if (ctx->pc == 0x54AE8Cu) {
        ctx->pc = 0x54AE8Cu;
            // 0x54ae8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AE90u;
        goto label_54ae90;
    }
    ctx->pc = 0x54AE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AE90u);
        ctx->pc = 0x54AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AE88u;
            // 0x54ae8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AE90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AE90u; }
            if (ctx->pc != 0x54AE90u) { return; }
        }
        }
    }
    ctx->pc = 0x54AE90u;
label_54ae90:
    // 0x54ae90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54ae94:
    // 0x54ae94: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54ae94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54ae98:
    // 0x54ae98: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54ae9c:
    // 0x54ae9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54aea0:
    // 0x54aea0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54aea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54aea4:
    // 0x54aea4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x54aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_54aea8:
    // 0x54aea8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x54aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54aeac:
    // 0x54aeac: 0x320f809  jalr        $t9
label_54aeb0:
    if (ctx->pc == 0x54AEB0u) {
        ctx->pc = 0x54AEB0u;
            // 0x54aeb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54AEB4u;
        goto label_54aeb4;
    }
    ctx->pc = 0x54AEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AEB4u);
        ctx->pc = 0x54AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AEACu;
            // 0x54aeb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AEB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AEB4u; }
            if (ctx->pc != 0x54AEB4u) { return; }
        }
        }
    }
    ctx->pc = 0x54AEB4u;
label_54aeb4:
    // 0x54aeb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54aeb8:
    // 0x54aeb8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54aeb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54aebc:
    // 0x54aebc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54aec0:
    // 0x54aec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54aec4:
    // 0x54aec4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54aec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54aec8:
    // 0x54aec8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x54aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_54aecc:
    // 0x54aecc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x54aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54aed0:
    // 0x54aed0: 0x320f809  jalr        $t9
label_54aed4:
    if (ctx->pc == 0x54AED4u) {
        ctx->pc = 0x54AED4u;
            // 0x54aed4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x54AED8u;
        goto label_54aed8;
    }
    ctx->pc = 0x54AED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AED8u);
        ctx->pc = 0x54AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AED0u;
            // 0x54aed4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AED8u; }
            if (ctx->pc != 0x54AED8u) { return; }
        }
        }
    }
    ctx->pc = 0x54AED8u;
label_54aed8:
    // 0x54aed8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54aed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54aedc:
    // 0x54aedc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x54aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_54aee0:
    // 0x54aee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54aee4:
    // 0x54aee4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x54aee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_54aee8:
    // 0x54aee8: 0x320f809  jalr        $t9
label_54aeec:
    if (ctx->pc == 0x54AEECu) {
        ctx->pc = 0x54AEECu;
            // 0x54aeec: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x54AEF0u;
        goto label_54aef0;
    }
    ctx->pc = 0x54AEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AEF0u);
        ctx->pc = 0x54AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AEE8u;
            // 0x54aeec: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AEF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AEF0u; }
            if (ctx->pc != 0x54AEF0u) { return; }
        }
        }
    }
    ctx->pc = 0x54AEF0u;
label_54aef0:
    // 0x54aef0: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x54aef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
label_54aef4:
    // 0x54aef4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54aef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54aef8:
    // 0x54aef8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54aef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54aefc:
    // 0x54aefc: 0x320f809  jalr        $t9
label_54af00:
    if (ctx->pc == 0x54AF00u) {
        ctx->pc = 0x54AF00u;
            // 0x54af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AF04u;
        goto label_54af04;
    }
    ctx->pc = 0x54AEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AF04u);
        ctx->pc = 0x54AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AEFCu;
            // 0x54af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AF04u; }
            if (ctx->pc != 0x54AF04u) { return; }
        }
        }
    }
    ctx->pc = 0x54AF04u;
label_54af04:
    // 0x54af04: 0x1000049b  b           . + 4 + (0x49B << 2)
label_54af08:
    if (ctx->pc == 0x54AF08u) {
        ctx->pc = 0x54AF0Cu;
        goto label_54af0c;
    }
    ctx->pc = 0x54AF04u;
    {
        const bool branch_taken_0x54af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54af04) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF0Cu;
label_54af0c:
    // 0x54af0c: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54af0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54af10:
    // 0x54af10: 0x14600498  bnez        $v1, . + 4 + (0x498 << 2)
label_54af14:
    if (ctx->pc == 0x54AF14u) {
        ctx->pc = 0x54AF18u;
        goto label_54af18;
    }
    ctx->pc = 0x54AF10u;
    {
        const bool branch_taken_0x54af10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54af10) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF18u;
label_54af18:
    // 0x54af18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54af18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54af1c:
    // 0x54af1c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54af1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54af20:
    // 0x54af20: 0x320f809  jalr        $t9
label_54af24:
    if (ctx->pc == 0x54AF24u) {
        ctx->pc = 0x54AF24u;
            // 0x54af24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x54AF28u;
        goto label_54af28;
    }
    ctx->pc = 0x54AF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AF28u);
        ctx->pc = 0x54AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF20u;
            // 0x54af24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AF28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AF28u; }
            if (ctx->pc != 0x54AF28u) { return; }
        }
        }
    }
    ctx->pc = 0x54AF28u;
label_54af28:
    // 0x54af28: 0x10000492  b           . + 4 + (0x492 << 2)
label_54af2c:
    if (ctx->pc == 0x54AF2Cu) {
        ctx->pc = 0x54AF30u;
        goto label_54af30;
    }
    ctx->pc = 0x54AF28u;
    {
        const bool branch_taken_0x54af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54af28) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF30u;
label_54af30:
    // 0x54af30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54af30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54af34:
    // 0x54af34: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54af34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54af38:
    // 0x54af38: 0x320f809  jalr        $t9
label_54af3c:
    if (ctx->pc == 0x54AF3Cu) {
        ctx->pc = 0x54AF3Cu;
            // 0x54af3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x54AF40u;
        goto label_54af40;
    }
    ctx->pc = 0x54AF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AF40u);
        ctx->pc = 0x54AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF38u;
            // 0x54af3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AF40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AF40u; }
            if (ctx->pc != 0x54AF40u) { return; }
        }
        }
    }
    ctx->pc = 0x54AF40u;
label_54af40:
    // 0x54af40: 0x1000048c  b           . + 4 + (0x48C << 2)
label_54af44:
    if (ctx->pc == 0x54AF44u) {
        ctx->pc = 0x54AF48u;
        goto label_54af48;
    }
    ctx->pc = 0x54AF40u;
    {
        const bool branch_taken_0x54af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54af40) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF48u;
label_54af48:
    // 0x54af48: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54af48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54af4c:
    // 0x54af4c: 0x14600489  bnez        $v1, . + 4 + (0x489 << 2)
label_54af50:
    if (ctx->pc == 0x54AF50u) {
        ctx->pc = 0x54AF54u;
        goto label_54af54;
    }
    ctx->pc = 0x54AF4Cu;
    {
        const bool branch_taken_0x54af4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54af4c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF54u;
label_54af54:
    // 0x54af54: 0xc040180  jal         func_100600
label_54af58:
    if (ctx->pc == 0x54AF58u) {
        ctx->pc = 0x54AF58u;
            // 0x54af58: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54AF5Cu;
        goto label_54af5c;
    }
    ctx->pc = 0x54AF54u;
    SET_GPR_U32(ctx, 31, 0x54AF5Cu);
    ctx->pc = 0x54AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF54u;
            // 0x54af58: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AF5Cu; }
        if (ctx->pc != 0x54AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AF5Cu; }
        if (ctx->pc != 0x54AF5Cu) { return; }
    }
    ctx->pc = 0x54AF5Cu;
label_54af5c:
    // 0x54af5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_54af60:
    if (ctx->pc == 0x54AF60u) {
        ctx->pc = 0x54AF60u;
            // 0x54af60: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x54AF64u;
        goto label_54af64;
    }
    ctx->pc = 0x54AF5Cu;
    {
        const bool branch_taken_0x54af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54af5c) {
            ctx->pc = 0x54AF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF5Cu;
            // 0x54af60: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AF80u;
            goto label_54af80;
        }
    }
    ctx->pc = 0x54AF64u;
label_54af64:
    // 0x54af64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54af68:
    // 0x54af68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x54af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54af6c:
    // 0x54af6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54af6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54af70:
    // 0x54af70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54af70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54af74:
    // 0x54af74: 0xc151190  jal         func_544640
label_54af78:
    if (ctx->pc == 0x54AF78u) {
        ctx->pc = 0x54AF78u;
            // 0x54af78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54AF7Cu;
        goto label_54af7c;
    }
    ctx->pc = 0x54AF74u;
    SET_GPR_U32(ctx, 31, 0x54AF7Cu);
    ctx->pc = 0x54AF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF74u;
            // 0x54af78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AF7Cu; }
        if (ctx->pc != 0x54AF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AF7Cu; }
        if (ctx->pc != 0x54AF7Cu) { return; }
    }
    ctx->pc = 0x54AF7Cu;
label_54af7c:
    // 0x54af7c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x54af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_54af80:
    // 0x54af80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54af84:
    // 0x54af84: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54af84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54af88:
    // 0x54af88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54af88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54af8c:
    // 0x54af8c: 0x320f809  jalr        $t9
label_54af90:
    if (ctx->pc == 0x54AF90u) {
        ctx->pc = 0x54AF90u;
            // 0x54af90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x54AF94u;
        goto label_54af94;
    }
    ctx->pc = 0x54AF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AF94u);
        ctx->pc = 0x54AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AF8Cu;
            // 0x54af90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AF94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AF94u; }
            if (ctx->pc != 0x54AF94u) { return; }
        }
        }
    }
    ctx->pc = 0x54AF94u;
label_54af94:
    // 0x54af94: 0x10000477  b           . + 4 + (0x477 << 2)
label_54af98:
    if (ctx->pc == 0x54AF98u) {
        ctx->pc = 0x54AF9Cu;
        goto label_54af9c;
    }
    ctx->pc = 0x54AF94u;
    {
        const bool branch_taken_0x54af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54af94) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AF9Cu;
label_54af9c:
    // 0x54af9c: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54af9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54afa0:
    // 0x54afa0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_54afa4:
    if (ctx->pc == 0x54AFA4u) {
        ctx->pc = 0x54AFA8u;
        goto label_54afa8;
    }
    ctx->pc = 0x54AFA0u;
    {
        const bool branch_taken_0x54afa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54afa0) {
            ctx->pc = 0x54AFC0u;
            goto label_54afc0;
        }
    }
    ctx->pc = 0x54AFA8u;
label_54afa8:
    // 0x54afa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54afa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54afac:
    // 0x54afac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54afacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54afb0:
    // 0x54afb0: 0x320f809  jalr        $t9
label_54afb4:
    if (ctx->pc == 0x54AFB4u) {
        ctx->pc = 0x54AFB4u;
            // 0x54afb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54AFB8u;
        goto label_54afb8;
    }
    ctx->pc = 0x54AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54AFB8u);
        ctx->pc = 0x54AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54AFB0u;
            // 0x54afb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54AFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54AFB8u; }
            if (ctx->pc != 0x54AFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x54AFB8u;
label_54afb8:
    // 0x54afb8: 0x1000046e  b           . + 4 + (0x46E << 2)
label_54afbc:
    if (ctx->pc == 0x54AFBCu) {
        ctx->pc = 0x54AFC0u;
        goto label_54afc0;
    }
    ctx->pc = 0x54AFB8u;
    {
        const bool branch_taken_0x54afb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54afb8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54AFC0u;
label_54afc0:
    // 0x54afc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54afc4:
    // 0x54afc4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x54afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_54afc8:
    // 0x54afc8: 0x8c65976c  lw          $a1, -0x6894($v1)
    ctx->pc = 0x54afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940524)));
label_54afcc:
    // 0x54afcc: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x54afccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_54afd0:
    // 0x54afd0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x54afd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_54afd4:
    // 0x54afd4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_54afd8:
    if (ctx->pc == 0x54AFD8u) {
        ctx->pc = 0x54AFD8u;
            // 0x54afd8: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->pc = 0x54AFDCu;
        goto label_54afdc;
    }
    ctx->pc = 0x54AFD4u;
    {
        const bool branch_taken_0x54afd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54afd4) {
            ctx->pc = 0x54AFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54AFD4u;
            // 0x54afd8: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54AFF8u;
            goto label_54aff8;
        }
    }
    ctx->pc = 0x54AFDCu;
label_54afdc:
    // 0x54afdc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x54afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54afe0:
    // 0x54afe0: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x54afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_54afe4:
    // 0x54afe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x54afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_54afe8:
    // 0x54afe8: 0xc073234  jal         func_1CC8D0
label_54afec:
    if (ctx->pc == 0x54AFECu) {
        ctx->pc = 0x54AFECu;
            // 0x54afec: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x54AFF0u;
        goto label_54aff0;
    }
    ctx->pc = 0x54AFE8u;
    SET_GPR_U32(ctx, 31, 0x54AFF0u);
    ctx->pc = 0x54AFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54AFE8u;
            // 0x54afec: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AFF0u; }
        if (ctx->pc != 0x54AFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54AFF0u; }
        if (ctx->pc != 0x54AFF0u) { return; }
    }
    ctx->pc = 0x54AFF0u;
label_54aff0:
    // 0x54aff0: 0x1000000e  b           . + 4 + (0xE << 2)
label_54aff4:
    if (ctx->pc == 0x54AFF4u) {
        ctx->pc = 0x54AFF8u;
        goto label_54aff8;
    }
    ctx->pc = 0x54AFF0u;
    {
        const bool branch_taken_0x54aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54aff0) {
            ctx->pc = 0x54B02Cu;
            goto label_54b02c;
        }
    }
    ctx->pc = 0x54AFF8u;
label_54aff8:
    // 0x54aff8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x54aff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_54affc:
    // 0x54affc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x54affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_54b000:
    // 0x54b000: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_54b004:
    if (ctx->pc == 0x54B004u) {
        ctx->pc = 0x54B008u;
        goto label_54b008;
    }
    ctx->pc = 0x54B000u;
    {
        const bool branch_taken_0x54b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b000) {
            ctx->pc = 0x54B02Cu;
            goto label_54b02c;
        }
    }
    ctx->pc = 0x54B008u;
label_54b008:
    // 0x54b008: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x54b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b00c:
    // 0x54b00c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_54b010:
    if (ctx->pc == 0x54B010u) {
        ctx->pc = 0x54B010u;
            // 0x54b010: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x54B014u;
        goto label_54b014;
    }
    ctx->pc = 0x54B00Cu;
    {
        const bool branch_taken_0x54b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b00c) {
            ctx->pc = 0x54B010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B00Cu;
            // 0x54b010: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B020u;
            goto label_54b020;
        }
    }
    ctx->pc = 0x54B014u;
label_54b014:
    // 0x54b014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x54b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b018:
    // 0x54b018: 0x10000002  b           . + 4 + (0x2 << 2)
label_54b01c:
    if (ctx->pc == 0x54B01Cu) {
        ctx->pc = 0x54B01Cu;
            // 0x54b01c: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x54B020u;
        goto label_54b020;
    }
    ctx->pc = 0x54B018u;
    {
        const bool branch_taken_0x54b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B018u;
            // 0x54b01c: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54b018) {
            ctx->pc = 0x54B024u;
            goto label_54b024;
        }
    }
    ctx->pc = 0x54B020u;
label_54b020:
    // 0x54b020: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x54b020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_54b024:
    // 0x54b024: 0xc073234  jal         func_1CC8D0
label_54b028:
    if (ctx->pc == 0x54B028u) {
        ctx->pc = 0x54B028u;
            // 0x54b028: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x54B02Cu;
        goto label_54b02c;
    }
    ctx->pc = 0x54B024u;
    SET_GPR_U32(ctx, 31, 0x54B02Cu);
    ctx->pc = 0x54B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B024u;
            // 0x54b028: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B02Cu; }
        if (ctx->pc != 0x54B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B02Cu; }
        if (ctx->pc != 0x54B02Cu) { return; }
    }
    ctx->pc = 0x54B02Cu;
label_54b02c:
    // 0x54b02c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54b030:
    // 0x54b030: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x54b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b034:
    // 0x54b034: 0x8c63d998  lw          $v1, -0x2668($v1)
    ctx->pc = 0x54b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957464)));
label_54b038:
    // 0x54b038: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x54b038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_54b03c:
    // 0x54b03c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_54b040:
    if (ctx->pc == 0x54B040u) {
        ctx->pc = 0x54B044u;
        goto label_54b044;
    }
    ctx->pc = 0x54B03Cu;
    {
        const bool branch_taken_0x54b03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b03c) {
            ctx->pc = 0x54B048u;
            goto label_54b048;
        }
    }
    ctx->pc = 0x54B044u;
label_54b044:
    // 0x54b044: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x54b044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b048:
    // 0x54b048: 0x2c810003  sltiu       $at, $a0, 0x3
    ctx->pc = 0x54b048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_54b04c:
    // 0x54b04c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_54b050:
    if (ctx->pc == 0x54B050u) {
        ctx->pc = 0x54B050u;
            // 0x54b050: 0xae04005c  sw          $a0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
        ctx->pc = 0x54B054u;
        goto label_54b054;
    }
    ctx->pc = 0x54B04Cu;
    {
        const bool branch_taken_0x54b04c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x54B050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B04Cu;
            // 0x54b050: 0xae04005c  sw          $a0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54b04c) {
            ctx->pc = 0x54B05Cu;
            goto label_54b05c;
        }
    }
    ctx->pc = 0x54B054u;
label_54b054:
    // 0x54b054: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54b054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54b058:
    // 0x54b058: 0x8c64d998  lw          $a0, -0x2668($v1)
    ctx->pc = 0x54b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957464)));
label_54b05c:
    // 0x54b05c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x54b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_54b060:
    // 0x54b060: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54b060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54b064:
    // 0x54b064: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x54b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_54b068:
    // 0x54b068: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x54b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_54b06c:
    // 0x54b06c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_54b070:
    if (ctx->pc == 0x54B070u) {
        ctx->pc = 0x54B070u;
            // 0x54b070: 0x92030054  lbu         $v1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x54B074u;
        goto label_54b074;
    }
    ctx->pc = 0x54B06Cu;
    {
        const bool branch_taken_0x54b06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b06c) {
            ctx->pc = 0x54B070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B06Cu;
            // 0x54b070: 0x92030054  lbu         $v1, 0x54($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B0A0u;
            goto label_54b0a0;
        }
    }
    ctx->pc = 0x54B074u;
label_54b074:
    // 0x54b074: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b078:
    // 0x54b078: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x54b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_54b07c:
    // 0x54b07c: 0x92030055  lbu         $v1, 0x55($s0)
    ctx->pc = 0x54b07cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_54b080:
    // 0x54b080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b084:
    // 0x54b084: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b088:
    // 0x54b088: 0x320f809  jalr        $t9
label_54b08c:
    if (ctx->pc == 0x54B08Cu) {
        ctx->pc = 0x54B08Cu;
            // 0x54b08c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x54B090u;
        goto label_54b090;
    }
    ctx->pc = 0x54B088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B090u);
        ctx->pc = 0x54B08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B088u;
            // 0x54b08c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B090u; }
            if (ctx->pc != 0x54B090u) { return; }
        }
        }
    }
    ctx->pc = 0x54B090u;
label_54b090:
    // 0x54b090: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x54b090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_54b094:
    // 0x54b094: 0xc073234  jal         func_1CC8D0
label_54b098:
    if (ctx->pc == 0x54B098u) {
        ctx->pc = 0x54B098u;
            // 0x54b098: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x54B09Cu;
        goto label_54b09c;
    }
    ctx->pc = 0x54B094u;
    SET_GPR_U32(ctx, 31, 0x54B09Cu);
    ctx->pc = 0x54B098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B094u;
            // 0x54b098: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B09Cu; }
        if (ctx->pc != 0x54B09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B09Cu; }
        if (ctx->pc != 0x54B09Cu) { return; }
    }
    ctx->pc = 0x54B09Cu;
label_54b09c:
    // 0x54b09c: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x54b09cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_54b0a0:
    // 0x54b0a0: 0x10600434  beqz        $v1, . + 4 + (0x434 << 2)
label_54b0a4:
    if (ctx->pc == 0x54B0A4u) {
        ctx->pc = 0x54B0A8u;
        goto label_54b0a8;
    }
    ctx->pc = 0x54B0A0u;
    {
        const bool branch_taken_0x54b0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b0a0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B0A8u;
label_54b0a8:
    // 0x54b0a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54b0ac:
    // 0x54b0ac: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x54b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_54b0b0:
    // 0x54b0b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x54b0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_54b0b4:
    // 0x54b0b4: 0x1060042f  beqz        $v1, . + 4 + (0x42F << 2)
label_54b0b8:
    if (ctx->pc == 0x54B0B8u) {
        ctx->pc = 0x54B0BCu;
        goto label_54b0bc;
    }
    ctx->pc = 0x54B0B4u;
    {
        const bool branch_taken_0x54b0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b0b4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B0BCu;
label_54b0bc:
    // 0x54b0bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b0c0:
    // 0x54b0c0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b0c4:
    // 0x54b0c4: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b0c8:
    // 0x54b0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b0cc:
    // 0x54b0cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b0d0:
    // 0x54b0d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b0d4:
    // 0x54b0d4: 0x320f809  jalr        $t9
label_54b0d8:
    if (ctx->pc == 0x54B0D8u) {
        ctx->pc = 0x54B0D8u;
            // 0x54b0d8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x54B0DCu;
        goto label_54b0dc;
    }
    ctx->pc = 0x54B0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B0DCu);
        ctx->pc = 0x54B0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B0D4u;
            // 0x54b0d8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B0DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B0DCu; }
            if (ctx->pc != 0x54B0DCu) { return; }
        }
        }
    }
    ctx->pc = 0x54B0DCu;
label_54b0dc:
    // 0x54b0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b0e0:
    // 0x54b0e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x54b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_54b0e4:
    // 0x54b0e4: 0xa2030057  sb          $v1, 0x57($s0)
    ctx->pc = 0x54b0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 3));
label_54b0e8:
    // 0x54b0e8: 0xc073234  jal         func_1CC8D0
label_54b0ec:
    if (ctx->pc == 0x54B0ECu) {
        ctx->pc = 0x54B0ECu;
            // 0x54b0ec: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x54B0F0u;
        goto label_54b0f0;
    }
    ctx->pc = 0x54B0E8u;
    SET_GPR_U32(ctx, 31, 0x54B0F0u);
    ctx->pc = 0x54B0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B0E8u;
            // 0x54b0ec: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B0F0u; }
        if (ctx->pc != 0x54B0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B0F0u; }
        if (ctx->pc != 0x54B0F0u) { return; }
    }
    ctx->pc = 0x54B0F0u;
label_54b0f0:
    // 0x54b0f0: 0x10000420  b           . + 4 + (0x420 << 2)
label_54b0f4:
    if (ctx->pc == 0x54B0F4u) {
        ctx->pc = 0x54B0F8u;
        goto label_54b0f8;
    }
    ctx->pc = 0x54B0F0u;
    {
        const bool branch_taken_0x54b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b0f0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B0F8u;
label_54b0f8:
    // 0x54b0f8: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b0f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b0fc:
    // 0x54b0fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_54b100:
    if (ctx->pc == 0x54B100u) {
        ctx->pc = 0x54B100u;
            // 0x54b100: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x54B104u;
        goto label_54b104;
    }
    ctx->pc = 0x54B0FCu;
    {
        const bool branch_taken_0x54b0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b0fc) {
            ctx->pc = 0x54B100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B0FCu;
            // 0x54b100: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B11Cu;
            goto label_54b11c;
        }
    }
    ctx->pc = 0x54B104u;
label_54b104:
    // 0x54b104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b108:
    // 0x54b108: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b10c:
    // 0x54b10c: 0x320f809  jalr        $t9
label_54b110:
    if (ctx->pc == 0x54B110u) {
        ctx->pc = 0x54B110u;
            // 0x54b110: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B114u;
        goto label_54b114;
    }
    ctx->pc = 0x54B10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B114u);
        ctx->pc = 0x54B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B10Cu;
            // 0x54b110: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B114u; }
            if (ctx->pc != 0x54B114u) { return; }
        }
        }
    }
    ctx->pc = 0x54B114u;
label_54b114:
    // 0x54b114: 0x10000417  b           . + 4 + (0x417 << 2)
label_54b118:
    if (ctx->pc == 0x54B118u) {
        ctx->pc = 0x54B11Cu;
        goto label_54b11c;
    }
    ctx->pc = 0x54B114u;
    {
        const bool branch_taken_0x54b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b114) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B11Cu;
label_54b11c:
    // 0x54b11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x54b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_54b120:
    // 0x54b120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54b124:
    // 0x54b124: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x54b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_54b128:
    // 0x54b128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_54b12c:
    if (ctx->pc == 0x54B12Cu) {
        ctx->pc = 0x54B12Cu;
            // 0x54b12c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x54B130u;
        goto label_54b130;
    }
    ctx->pc = 0x54B128u;
    {
        const bool branch_taken_0x54b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b128) {
            ctx->pc = 0x54B12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B128u;
            // 0x54b12c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B138u;
            goto label_54b138;
        }
    }
    ctx->pc = 0x54B130u;
label_54b130:
    // 0x54b130: 0x10000010  b           . + 4 + (0x10 << 2)
label_54b134:
    if (ctx->pc == 0x54B134u) {
        ctx->pc = 0x54B134u;
            // 0x54b134: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x54B138u;
        goto label_54b138;
    }
    ctx->pc = 0x54B130u;
    {
        const bool branch_taken_0x54b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B130u;
            // 0x54b134: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54b130) {
            ctx->pc = 0x54B174u;
            goto label_54b174;
        }
    }
    ctx->pc = 0x54B138u;
label_54b138:
    // 0x54b138: 0xc040180  jal         func_100600
label_54b13c:
    if (ctx->pc == 0x54B13Cu) {
        ctx->pc = 0x54B140u;
        goto label_54b140;
    }
    ctx->pc = 0x54B138u;
    SET_GPR_U32(ctx, 31, 0x54B140u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B140u; }
        if (ctx->pc != 0x54B140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B140u; }
        if (ctx->pc != 0x54B140u) { return; }
    }
    ctx->pc = 0x54B140u;
label_54b140:
    // 0x54b140: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_54b144:
    if (ctx->pc == 0x54B144u) {
        ctx->pc = 0x54B144u;
            // 0x54b144: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54B148u;
        goto label_54b148;
    }
    ctx->pc = 0x54B140u;
    {
        const bool branch_taken_0x54b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b140) {
            ctx->pc = 0x54B144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B140u;
            // 0x54b144: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B1A8u;
            goto label_54b1a8;
        }
    }
    ctx->pc = 0x54B148u;
label_54b148:
    // 0x54b148: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54b148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54b14c:
    // 0x54b14c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b150:
    // 0x54b150: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x54b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_54b154:
    // 0x54b154: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54b158:
    // 0x54b158: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x54b158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b15c:
    // 0x54b15c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x54b15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b160:
    // 0x54b160: 0xc159754  jal         func_565D50
label_54b164:
    if (ctx->pc == 0x54B164u) {
        ctx->pc = 0x54B164u;
            // 0x54b164: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B168u;
        goto label_54b168;
    }
    ctx->pc = 0x54B160u;
    SET_GPR_U32(ctx, 31, 0x54B168u);
    ctx->pc = 0x54B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B160u;
            // 0x54b164: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B168u; }
        if (ctx->pc != 0x54B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B168u; }
        if (ctx->pc != 0x54B168u) { return; }
    }
    ctx->pc = 0x54B168u;
label_54b168:
    // 0x54b168: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54b168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54b16c:
    // 0x54b16c: 0x1000000e  b           . + 4 + (0xE << 2)
label_54b170:
    if (ctx->pc == 0x54B170u) {
        ctx->pc = 0x54B174u;
        goto label_54b174;
    }
    ctx->pc = 0x54B16Cu;
    {
        const bool branch_taken_0x54b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b16c) {
            ctx->pc = 0x54B1A8u;
            goto label_54b1a8;
        }
    }
    ctx->pc = 0x54B174u;
label_54b174:
    // 0x54b174: 0xc040180  jal         func_100600
label_54b178:
    if (ctx->pc == 0x54B178u) {
        ctx->pc = 0x54B17Cu;
        goto label_54b17c;
    }
    ctx->pc = 0x54B174u;
    SET_GPR_U32(ctx, 31, 0x54B17Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B17Cu; }
        if (ctx->pc != 0x54B17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B17Cu; }
        if (ctx->pc != 0x54B17Cu) { return; }
    }
    ctx->pc = 0x54B17Cu;
label_54b17c:
    // 0x54b17c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_54b180:
    if (ctx->pc == 0x54B180u) {
        ctx->pc = 0x54B180u;
            // 0x54b180: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54B184u;
        goto label_54b184;
    }
    ctx->pc = 0x54B17Cu;
    {
        const bool branch_taken_0x54b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b17c) {
            ctx->pc = 0x54B180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B17Cu;
            // 0x54b180: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B1A8u;
            goto label_54b1a8;
        }
    }
    ctx->pc = 0x54B184u;
label_54b184:
    // 0x54b184: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54b184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54b188:
    // 0x54b188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b18c:
    // 0x54b18c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x54b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_54b190:
    // 0x54b190: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54b190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54b194:
    // 0x54b194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x54b194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b198:
    // 0x54b198: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x54b198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b19c:
    // 0x54b19c: 0xc159754  jal         func_565D50
label_54b1a0:
    if (ctx->pc == 0x54B1A0u) {
        ctx->pc = 0x54B1A0u;
            // 0x54b1a0: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B1A4u;
        goto label_54b1a4;
    }
    ctx->pc = 0x54B19Cu;
    SET_GPR_U32(ctx, 31, 0x54B1A4u);
    ctx->pc = 0x54B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B19Cu;
            // 0x54b1a0: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B1A4u; }
        if (ctx->pc != 0x54B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B1A4u; }
        if (ctx->pc != 0x54B1A4u) { return; }
    }
    ctx->pc = 0x54B1A4u;
label_54b1a4:
    // 0x54b1a4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54b1a8:
    // 0x54b1a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b1ac:
    // 0x54b1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b1b0:
    // 0x54b1b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b1b4:
    // 0x54b1b4: 0x320f809  jalr        $t9
label_54b1b8:
    if (ctx->pc == 0x54B1B8u) {
        ctx->pc = 0x54B1B8u;
            // 0x54b1b8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x54B1BCu;
        goto label_54b1bc;
    }
    ctx->pc = 0x54B1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B1BCu);
        ctx->pc = 0x54B1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B1B4u;
            // 0x54b1b8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B1BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B1BCu; }
            if (ctx->pc != 0x54B1BCu) { return; }
        }
        }
    }
    ctx->pc = 0x54B1BCu;
label_54b1bc:
    // 0x54b1bc: 0x100003ed  b           . + 4 + (0x3ED << 2)
label_54b1c0:
    if (ctx->pc == 0x54B1C0u) {
        ctx->pc = 0x54B1C4u;
        goto label_54b1c4;
    }
    ctx->pc = 0x54B1BCu;
    {
        const bool branch_taken_0x54b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b1bc) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B1C4u;
label_54b1c4:
    // 0x54b1c4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b1c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b1c8:
    // 0x54b1c8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_54b1cc:
    if (ctx->pc == 0x54B1CCu) {
        ctx->pc = 0x54B1CCu;
            // 0x54b1cc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x54B1D0u;
        goto label_54b1d0;
    }
    ctx->pc = 0x54B1C8u;
    {
        const bool branch_taken_0x54b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b1c8) {
            ctx->pc = 0x54B1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B1C8u;
            // 0x54b1cc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B1FCu;
            goto label_54b1fc;
        }
    }
    ctx->pc = 0x54B1D0u;
label_54b1d0:
    // 0x54b1d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b1d4:
    // 0x54b1d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b1d8:
    // 0x54b1d8: 0x320f809  jalr        $t9
label_54b1dc:
    if (ctx->pc == 0x54B1DCu) {
        ctx->pc = 0x54B1DCu;
            // 0x54b1dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B1E0u;
        goto label_54b1e0;
    }
    ctx->pc = 0x54B1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B1E0u);
        ctx->pc = 0x54B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B1D8u;
            // 0x54b1dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B1E0u; }
            if (ctx->pc != 0x54B1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B1E0u;
label_54b1e0:
    // 0x54b1e0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b1e4:
    // 0x54b1e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b1e8:
    // 0x54b1e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b1ec:
    // 0x54b1ec: 0x320f809  jalr        $t9
label_54b1f0:
    if (ctx->pc == 0x54B1F0u) {
        ctx->pc = 0x54B1F4u;
        goto label_54b1f4;
    }
    ctx->pc = 0x54B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B1F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B1F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B1F4u; }
            if (ctx->pc != 0x54B1F4u) { return; }
        }
        }
    }
    ctx->pc = 0x54B1F4u;
label_54b1f4:
    // 0x54b1f4: 0x100003df  b           . + 4 + (0x3DF << 2)
label_54b1f8:
    if (ctx->pc == 0x54B1F8u) {
        ctx->pc = 0x54B1FCu;
        goto label_54b1fc;
    }
    ctx->pc = 0x54B1F4u;
    {
        const bool branch_taken_0x54b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b1f4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B1FCu;
label_54b1fc:
    // 0x54b1fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b200:
    // 0x54b200: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54b200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54b204:
    // 0x54b204: 0x320f809  jalr        $t9
label_54b208:
    if (ctx->pc == 0x54B208u) {
        ctx->pc = 0x54B20Cu;
        goto label_54b20c;
    }
    ctx->pc = 0x54B204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B20Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B20Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B20Cu; }
            if (ctx->pc != 0x54B20Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B20Cu;
label_54b20c:
    // 0x54b20c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b210:
    // 0x54b210: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_54b214:
    if (ctx->pc == 0x54B214u) {
        ctx->pc = 0x54B214u;
            // 0x54b214: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B218u;
        goto label_54b218;
    }
    ctx->pc = 0x54B210u;
    {
        const bool branch_taken_0x54b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b210) {
            ctx->pc = 0x54B214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B210u;
            // 0x54b214: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B258u;
            goto label_54b258;
        }
    }
    ctx->pc = 0x54B218u;
label_54b218:
    // 0x54b218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b21c:
    // 0x54b21c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_54b220:
    if (ctx->pc == 0x54B220u) {
        ctx->pc = 0x54B220u;
            // 0x54b220: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B224u;
        goto label_54b224;
    }
    ctx->pc = 0x54B21Cu;
    {
        const bool branch_taken_0x54b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b21c) {
            ctx->pc = 0x54B220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B21Cu;
            // 0x54b220: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B22Cu;
            goto label_54b22c;
        }
    }
    ctx->pc = 0x54B224u;
label_54b224:
    // 0x54b224: 0x100003d3  b           . + 4 + (0x3D3 << 2)
label_54b228:
    if (ctx->pc == 0x54B228u) {
        ctx->pc = 0x54B22Cu;
        goto label_54b22c;
    }
    ctx->pc = 0x54B224u;
    {
        const bool branch_taken_0x54b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b224) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B22Cu;
label_54b22c:
    // 0x54b22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b230:
    // 0x54b230: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b234:
    // 0x54b234: 0x320f809  jalr        $t9
label_54b238:
    if (ctx->pc == 0x54B238u) {
        ctx->pc = 0x54B238u;
            // 0x54b238: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x54B23Cu;
        goto label_54b23c;
    }
    ctx->pc = 0x54B234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B23Cu);
        ctx->pc = 0x54B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B234u;
            // 0x54b238: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B23Cu; }
            if (ctx->pc != 0x54B23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B23Cu;
label_54b23c:
    // 0x54b23c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b240:
    // 0x54b240: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b244:
    // 0x54b244: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b248:
    // 0x54b248: 0x320f809  jalr        $t9
label_54b24c:
    if (ctx->pc == 0x54B24Cu) {
        ctx->pc = 0x54B250u;
        goto label_54b250;
    }
    ctx->pc = 0x54B248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B250u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B250u; }
            if (ctx->pc != 0x54B250u) { return; }
        }
        }
    }
    ctx->pc = 0x54B250u;
label_54b250:
    // 0x54b250: 0x100003c8  b           . + 4 + (0x3C8 << 2)
label_54b254:
    if (ctx->pc == 0x54B254u) {
        ctx->pc = 0x54B258u;
        goto label_54b258;
    }
    ctx->pc = 0x54B250u;
    {
        const bool branch_taken_0x54b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b250) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B258u;
label_54b258:
    // 0x54b258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b25c:
    // 0x54b25c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b260:
    // 0x54b260: 0x320f809  jalr        $t9
label_54b264:
    if (ctx->pc == 0x54B264u) {
        ctx->pc = 0x54B264u;
            // 0x54b264: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B268u;
        goto label_54b268;
    }
    ctx->pc = 0x54B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B268u);
        ctx->pc = 0x54B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B260u;
            // 0x54b264: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B268u; }
            if (ctx->pc != 0x54B268u) { return; }
        }
        }
    }
    ctx->pc = 0x54B268u;
label_54b268:
    // 0x54b268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b26c:
    // 0x54b26c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b270:
    // 0x54b270: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b274:
    // 0x54b274: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b278:
    // 0x54b278: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b27c:
    // 0x54b27c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b280:
    // 0x54b280: 0x320f809  jalr        $t9
label_54b284:
    if (ctx->pc == 0x54B284u) {
        ctx->pc = 0x54B288u;
        goto label_54b288;
    }
    ctx->pc = 0x54B280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B288u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B288u; }
            if (ctx->pc != 0x54B288u) { return; }
        }
        }
    }
    ctx->pc = 0x54B288u;
label_54b288:
    // 0x54b288: 0x100003ba  b           . + 4 + (0x3BA << 2)
label_54b28c:
    if (ctx->pc == 0x54B28Cu) {
        ctx->pc = 0x54B290u;
        goto label_54b290;
    }
    ctx->pc = 0x54B288u;
    {
        const bool branch_taken_0x54b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b288) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B290u;
label_54b290:
    // 0x54b290: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x54b290u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b294:
    // 0x54b294: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_54b298:
    if (ctx->pc == 0x54B298u) {
        ctx->pc = 0x54B298u;
            // 0x54b298: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x54B29Cu;
        goto label_54b29c;
    }
    ctx->pc = 0x54B294u;
    {
        const bool branch_taken_0x54b294 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b294) {
            ctx->pc = 0x54B298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B294u;
            // 0x54b298: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B2B4u;
            goto label_54b2b4;
        }
    }
    ctx->pc = 0x54B29Cu;
label_54b29c:
    // 0x54b29c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b2a0:
    // 0x54b2a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b2a4:
    // 0x54b2a4: 0x320f809  jalr        $t9
label_54b2a8:
    if (ctx->pc == 0x54B2A8u) {
        ctx->pc = 0x54B2A8u;
            // 0x54b2a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B2ACu;
        goto label_54b2ac;
    }
    ctx->pc = 0x54B2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B2ACu);
        ctx->pc = 0x54B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B2A4u;
            // 0x54b2a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B2ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B2ACu; }
            if (ctx->pc != 0x54B2ACu) { return; }
        }
        }
    }
    ctx->pc = 0x54B2ACu;
label_54b2ac:
    // 0x54b2ac: 0x100003b1  b           . + 4 + (0x3B1 << 2)
label_54b2b0:
    if (ctx->pc == 0x54B2B0u) {
        ctx->pc = 0x54B2B4u;
        goto label_54b2b4;
    }
    ctx->pc = 0x54B2ACu;
    {
        const bool branch_taken_0x54b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b2ac) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B2B4u;
label_54b2b4:
    // 0x54b2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x54b2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b2b8:
    // 0x54b2b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x54b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_54b2bc:
    // 0x54b2bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x54b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_54b2c0:
    // 0x54b2c0: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x54b2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_54b2c4:
    // 0x54b2c4: 0x50c50012  beql        $a2, $a1, . + 4 + (0x12 << 2)
label_54b2c8:
    if (ctx->pc == 0x54B2C8u) {
        ctx->pc = 0x54B2C8u;
            // 0x54b2c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54B2CCu;
        goto label_54b2cc;
    }
    ctx->pc = 0x54B2C4u;
    {
        const bool branch_taken_0x54b2c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x54b2c4) {
            ctx->pc = 0x54B2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B2C4u;
            // 0x54b2c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B310u;
            goto label_54b310;
        }
    }
    ctx->pc = 0x54B2CCu;
label_54b2cc:
    // 0x54b2cc: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_54b2d0:
    if (ctx->pc == 0x54B2D0u) {
        ctx->pc = 0x54B2D0u;
            // 0x54b2d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54B2D4u;
        goto label_54b2d4;
    }
    ctx->pc = 0x54B2CCu;
    {
        const bool branch_taken_0x54b2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b2cc) {
            ctx->pc = 0x54B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B2CCu;
            // 0x54b2d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B2FCu;
            goto label_54b2fc;
        }
    }
    ctx->pc = 0x54B2D4u;
label_54b2d4:
    // 0x54b2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b2d8:
    // 0x54b2d8: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_54b2dc:
    if (ctx->pc == 0x54B2DCu) {
        ctx->pc = 0x54B2DCu;
            // 0x54b2dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54B2E0u;
        goto label_54b2e0;
    }
    ctx->pc = 0x54B2D8u;
    {
        const bool branch_taken_0x54b2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b2d8) {
            ctx->pc = 0x54B2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B2D8u;
            // 0x54b2dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B2E8u;
            goto label_54b2e8;
        }
    }
    ctx->pc = 0x54B2E0u;
label_54b2e0:
    // 0x54b2e0: 0x100003a4  b           . + 4 + (0x3A4 << 2)
label_54b2e4:
    if (ctx->pc == 0x54B2E4u) {
        ctx->pc = 0x54B2E8u;
        goto label_54b2e8;
    }
    ctx->pc = 0x54B2E0u;
    {
        const bool branch_taken_0x54b2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b2e0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B2E8u;
label_54b2e8:
    // 0x54b2e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b2ec:
    // 0x54b2ec: 0x320f809  jalr        $t9
label_54b2f0:
    if (ctx->pc == 0x54B2F0u) {
        ctx->pc = 0x54B2F0u;
            // 0x54b2f0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x54B2F4u;
        goto label_54b2f4;
    }
    ctx->pc = 0x54B2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B2F4u);
        ctx->pc = 0x54B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B2ECu;
            // 0x54b2f0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B2F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B2F4u; }
            if (ctx->pc != 0x54B2F4u) { return; }
        }
        }
    }
    ctx->pc = 0x54B2F4u;
label_54b2f4:
    // 0x54b2f4: 0x1000039f  b           . + 4 + (0x39F << 2)
label_54b2f8:
    if (ctx->pc == 0x54B2F8u) {
        ctx->pc = 0x54B2FCu;
        goto label_54b2fc;
    }
    ctx->pc = 0x54B2F4u;
    {
        const bool branch_taken_0x54b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b2f4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B2FCu;
label_54b2fc:
    // 0x54b2fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b300:
    // 0x54b300: 0x320f809  jalr        $t9
label_54b304:
    if (ctx->pc == 0x54B304u) {
        ctx->pc = 0x54B304u;
            // 0x54b304: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x54B308u;
        goto label_54b308;
    }
    ctx->pc = 0x54B300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B308u);
        ctx->pc = 0x54B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B300u;
            // 0x54b304: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B308u; }
            if (ctx->pc != 0x54B308u) { return; }
        }
        }
    }
    ctx->pc = 0x54B308u;
label_54b308:
    // 0x54b308: 0x1000039a  b           . + 4 + (0x39A << 2)
label_54b30c:
    if (ctx->pc == 0x54B30Cu) {
        ctx->pc = 0x54B310u;
        goto label_54b310;
    }
    ctx->pc = 0x54B308u;
    {
        const bool branch_taken_0x54b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b308) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B310u;
label_54b310:
    // 0x54b310: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b314:
    // 0x54b314: 0x320f809  jalr        $t9
label_54b318:
    if (ctx->pc == 0x54B318u) {
        ctx->pc = 0x54B318u;
            // 0x54b318: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x54B31Cu;
        goto label_54b31c;
    }
    ctx->pc = 0x54B314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B31Cu);
        ctx->pc = 0x54B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B314u;
            // 0x54b318: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B31Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B31Cu; }
            if (ctx->pc != 0x54B31Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B31Cu;
label_54b31c:
    // 0x54b31c: 0x10000395  b           . + 4 + (0x395 << 2)
label_54b320:
    if (ctx->pc == 0x54B320u) {
        ctx->pc = 0x54B324u;
        goto label_54b324;
    }
    ctx->pc = 0x54B31Cu;
    {
        const bool branch_taken_0x54b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b31c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B324u;
label_54b324:
    // 0x54b324: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b328:
    // 0x54b328: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_54b32c:
    if (ctx->pc == 0x54B32Cu) {
        ctx->pc = 0x54B330u;
        goto label_54b330;
    }
    ctx->pc = 0x54B328u;
    {
        const bool branch_taken_0x54b328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b328) {
            ctx->pc = 0x54B348u;
            goto label_54b348;
        }
    }
    ctx->pc = 0x54B330u;
label_54b330:
    // 0x54b330: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b334:
    // 0x54b334: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b338:
    // 0x54b338: 0x320f809  jalr        $t9
label_54b33c:
    if (ctx->pc == 0x54B33Cu) {
        ctx->pc = 0x54B33Cu;
            // 0x54b33c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B340u;
        goto label_54b340;
    }
    ctx->pc = 0x54B338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B340u);
        ctx->pc = 0x54B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B338u;
            // 0x54b33c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B340u; }
            if (ctx->pc != 0x54B340u) { return; }
        }
        }
    }
    ctx->pc = 0x54B340u;
label_54b340:
    // 0x54b340: 0x1000038c  b           . + 4 + (0x38C << 2)
label_54b344:
    if (ctx->pc == 0x54B344u) {
        ctx->pc = 0x54B348u;
        goto label_54b348;
    }
    ctx->pc = 0x54B340u;
    {
        const bool branch_taken_0x54b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b340) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B348u;
label_54b348:
    // 0x54b348: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54b348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54b34c:
    // 0x54b34c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b350:
    // 0x54b350: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x54b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_54b354:
    // 0x54b354: 0xac6003d4  sw          $zero, 0x3D4($v1)
    ctx->pc = 0x54b354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 980), GPR_U32(ctx, 0));
label_54b358:
    // 0x54b358: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x54b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54b35c:
    // 0x54b35c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x54b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b360:
    // 0x54b360: 0xac4303dc  sw          $v1, 0x3DC($v0)
    ctx->pc = 0x54b360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 988), GPR_U32(ctx, 3));
label_54b364:
    // 0x54b364: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x54b364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_54b368:
    // 0x54b368: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_54b36c:
    if (ctx->pc == 0x54B36Cu) {
        ctx->pc = 0x54B36Cu;
            // 0x54b36c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x54B370u;
        goto label_54b370;
    }
    ctx->pc = 0x54B368u;
    {
        const bool branch_taken_0x54b368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b368) {
            ctx->pc = 0x54B36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B368u;
            // 0x54b36c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B3ACu;
            goto label_54b3ac;
        }
    }
    ctx->pc = 0x54B370u;
label_54b370:
    // 0x54b370: 0xc040180  jal         func_100600
label_54b374:
    if (ctx->pc == 0x54B374u) {
        ctx->pc = 0x54B374u;
            // 0x54b374: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x54B378u;
        goto label_54b378;
    }
    ctx->pc = 0x54B370u;
    SET_GPR_U32(ctx, 31, 0x54B378u);
    ctx->pc = 0x54B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B370u;
            // 0x54b374: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B378u; }
        if (ctx->pc != 0x54B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B378u; }
        if (ctx->pc != 0x54B378u) { return; }
    }
    ctx->pc = 0x54B378u;
label_54b378:
    // 0x54b378: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_54b37c:
    if (ctx->pc == 0x54B37Cu) {
        ctx->pc = 0x54B37Cu;
            // 0x54b37c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54B380u;
        goto label_54b380;
    }
    ctx->pc = 0x54B378u;
    {
        const bool branch_taken_0x54b378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b378) {
            ctx->pc = 0x54B37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B378u;
            // 0x54b37c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B3E0u;
            goto label_54b3e0;
        }
    }
    ctx->pc = 0x54B380u;
label_54b380:
    // 0x54b380: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x54b380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b384:
    // 0x54b384: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54b384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54b388:
    // 0x54b388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b38c:
    // 0x54b38c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x54b38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_54b390:
    // 0x54b390: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54b394:
    // 0x54b394: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x54b394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_54b398:
    // 0x54b398: 0xc159754  jal         func_565D50
label_54b39c:
    if (ctx->pc == 0x54B39Cu) {
        ctx->pc = 0x54B39Cu;
            // 0x54b39c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B3A0u;
        goto label_54b3a0;
    }
    ctx->pc = 0x54B398u;
    SET_GPR_U32(ctx, 31, 0x54B3A0u);
    ctx->pc = 0x54B39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B398u;
            // 0x54b39c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3A0u; }
        if (ctx->pc != 0x54B3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3A0u; }
        if (ctx->pc != 0x54B3A0u) { return; }
    }
    ctx->pc = 0x54B3A0u;
label_54b3a0:
    // 0x54b3a0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54b3a4:
    // 0x54b3a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_54b3a8:
    if (ctx->pc == 0x54B3A8u) {
        ctx->pc = 0x54B3ACu;
        goto label_54b3ac;
    }
    ctx->pc = 0x54B3A4u;
    {
        const bool branch_taken_0x54b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b3a4) {
            ctx->pc = 0x54B3E0u;
            goto label_54b3e0;
        }
    }
    ctx->pc = 0x54B3ACu;
label_54b3ac:
    // 0x54b3ac: 0xc040180  jal         func_100600
label_54b3b0:
    if (ctx->pc == 0x54B3B0u) {
        ctx->pc = 0x54B3B4u;
        goto label_54b3b4;
    }
    ctx->pc = 0x54B3ACu;
    SET_GPR_U32(ctx, 31, 0x54B3B4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3B4u; }
        if (ctx->pc != 0x54B3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3B4u; }
        if (ctx->pc != 0x54B3B4u) { return; }
    }
    ctx->pc = 0x54B3B4u;
label_54b3b4:
    // 0x54b3b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_54b3b8:
    if (ctx->pc == 0x54B3B8u) {
        ctx->pc = 0x54B3B8u;
            // 0x54b3b8: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54B3BCu;
        goto label_54b3bc;
    }
    ctx->pc = 0x54B3B4u;
    {
        const bool branch_taken_0x54b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b3b4) {
            ctx->pc = 0x54B3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B3B4u;
            // 0x54b3b8: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B3E0u;
            goto label_54b3e0;
        }
    }
    ctx->pc = 0x54B3BCu;
label_54b3bc:
    // 0x54b3bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x54b3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b3c0:
    // 0x54b3c0: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54b3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54b3c4:
    // 0x54b3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b3c8:
    // 0x54b3c8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x54b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_54b3cc:
    // 0x54b3cc: 0x24060086  addiu       $a2, $zero, 0x86
    ctx->pc = 0x54b3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_54b3d0:
    // 0x54b3d0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x54b3d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_54b3d4:
    // 0x54b3d4: 0xc159754  jal         func_565D50
label_54b3d8:
    if (ctx->pc == 0x54B3D8u) {
        ctx->pc = 0x54B3D8u;
            // 0x54b3d8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B3DCu;
        goto label_54b3dc;
    }
    ctx->pc = 0x54B3D4u;
    SET_GPR_U32(ctx, 31, 0x54B3DCu);
    ctx->pc = 0x54B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B3D4u;
            // 0x54b3d8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3DCu; }
        if (ctx->pc != 0x54B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B3DCu; }
        if (ctx->pc != 0x54B3DCu) { return; }
    }
    ctx->pc = 0x54B3DCu;
label_54b3dc:
    // 0x54b3dc: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54b3e0:
    // 0x54b3e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b3e4:
    // 0x54b3e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b3e8:
    // 0x54b3e8: 0x320f809  jalr        $t9
label_54b3ec:
    if (ctx->pc == 0x54B3ECu) {
        ctx->pc = 0x54B3ECu;
            // 0x54b3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B3F0u;
        goto label_54b3f0;
    }
    ctx->pc = 0x54B3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B3F0u);
        ctx->pc = 0x54B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B3E8u;
            // 0x54b3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B3F0u; }
            if (ctx->pc != 0x54B3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B3F0u;
label_54b3f0:
    // 0x54b3f0: 0x10000360  b           . + 4 + (0x360 << 2)
label_54b3f4:
    if (ctx->pc == 0x54B3F4u) {
        ctx->pc = 0x54B3F8u;
        goto label_54b3f8;
    }
    ctx->pc = 0x54B3F0u;
    {
        const bool branch_taken_0x54b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b3f0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B3F8u;
label_54b3f8:
    // 0x54b3f8: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b3fc:
    // 0x54b3fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_54b400:
    if (ctx->pc == 0x54B400u) {
        ctx->pc = 0x54B400u;
            // 0x54b400: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x54B404u;
        goto label_54b404;
    }
    ctx->pc = 0x54B3FCu;
    {
        const bool branch_taken_0x54b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b3fc) {
            ctx->pc = 0x54B400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B3FCu;
            // 0x54b400: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B430u;
            goto label_54b430;
        }
    }
    ctx->pc = 0x54B404u;
label_54b404:
    // 0x54b404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b408:
    // 0x54b408: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b40c:
    // 0x54b40c: 0x320f809  jalr        $t9
label_54b410:
    if (ctx->pc == 0x54B410u) {
        ctx->pc = 0x54B410u;
            // 0x54b410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B414u;
        goto label_54b414;
    }
    ctx->pc = 0x54B40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B414u);
        ctx->pc = 0x54B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B40Cu;
            // 0x54b410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B414u; }
            if (ctx->pc != 0x54B414u) { return; }
        }
        }
    }
    ctx->pc = 0x54B414u;
label_54b414:
    // 0x54b414: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b418:
    // 0x54b418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b41c:
    // 0x54b41c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b420:
    // 0x54b420: 0x320f809  jalr        $t9
label_54b424:
    if (ctx->pc == 0x54B424u) {
        ctx->pc = 0x54B428u;
        goto label_54b428;
    }
    ctx->pc = 0x54B420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B428u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B428u; }
            if (ctx->pc != 0x54B428u) { return; }
        }
        }
    }
    ctx->pc = 0x54B428u;
label_54b428:
    // 0x54b428: 0x10000352  b           . + 4 + (0x352 << 2)
label_54b42c:
    if (ctx->pc == 0x54B42Cu) {
        ctx->pc = 0x54B430u;
        goto label_54b430;
    }
    ctx->pc = 0x54B428u;
    {
        const bool branch_taken_0x54b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b428) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B430u;
label_54b430:
    // 0x54b430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b434:
    // 0x54b434: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54b434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54b438:
    // 0x54b438: 0x320f809  jalr        $t9
label_54b43c:
    if (ctx->pc == 0x54B43Cu) {
        ctx->pc = 0x54B440u;
        goto label_54b440;
    }
    ctx->pc = 0x54B438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B440u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B440u; }
            if (ctx->pc != 0x54B440u) { return; }
        }
        }
    }
    ctx->pc = 0x54B440u;
label_54b440:
    // 0x54b440: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x54b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54b444:
    // 0x54b444: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
label_54b448:
    if (ctx->pc == 0x54B448u) {
        ctx->pc = 0x54B448u;
            // 0x54b448: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B44Cu;
        goto label_54b44c;
    }
    ctx->pc = 0x54B444u;
    {
        const bool branch_taken_0x54b444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b444) {
            ctx->pc = 0x54B448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B444u;
            // 0x54b448: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B4ECu;
            goto label_54b4ec;
        }
    }
    ctx->pc = 0x54B44Cu;
label_54b44c:
    // 0x54b44c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x54b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_54b450:
    // 0x54b450: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
label_54b454:
    if (ctx->pc == 0x54B454u) {
        ctx->pc = 0x54B458u;
        goto label_54b458;
    }
    ctx->pc = 0x54B450u;
    {
        const bool branch_taken_0x54b450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b450) {
            ctx->pc = 0x54B4E8u;
            goto label_54b4e8;
        }
    }
    ctx->pc = 0x54B458u;
label_54b458:
    // 0x54b458: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b45c:
    // 0x54b45c: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_54b460:
    if (ctx->pc == 0x54B460u) {
        ctx->pc = 0x54B460u;
            // 0x54b460: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B464u;
        goto label_54b464;
    }
    ctx->pc = 0x54B45Cu;
    {
        const bool branch_taken_0x54b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b45c) {
            ctx->pc = 0x54B460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B45Cu;
            // 0x54b460: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B4B0u;
            goto label_54b4b0;
        }
    }
    ctx->pc = 0x54B464u;
label_54b464:
    // 0x54b464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b468:
    // 0x54b468: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_54b46c:
    if (ctx->pc == 0x54B46Cu) {
        ctx->pc = 0x54B46Cu;
            // 0x54b46c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B470u;
        goto label_54b470;
    }
    ctx->pc = 0x54B468u;
    {
        const bool branch_taken_0x54b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b468) {
            ctx->pc = 0x54B46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B468u;
            // 0x54b46c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B478u;
            goto label_54b478;
        }
    }
    ctx->pc = 0x54B470u;
label_54b470:
    // 0x54b470: 0x10000340  b           . + 4 + (0x340 << 2)
label_54b474:
    if (ctx->pc == 0x54B474u) {
        ctx->pc = 0x54B478u;
        goto label_54b478;
    }
    ctx->pc = 0x54B470u;
    {
        const bool branch_taken_0x54b470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b470) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B478u;
label_54b478:
    // 0x54b478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b47c:
    // 0x54b47c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b480:
    // 0x54b480: 0x320f809  jalr        $t9
label_54b484:
    if (ctx->pc == 0x54B484u) {
        ctx->pc = 0x54B484u;
            // 0x54b484: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x54B488u;
        goto label_54b488;
    }
    ctx->pc = 0x54B480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B488u);
        ctx->pc = 0x54B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B480u;
            // 0x54b484: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B488u; }
            if (ctx->pc != 0x54B488u) { return; }
        }
        }
    }
    ctx->pc = 0x54B488u;
label_54b488:
    // 0x54b488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b48c:
    // 0x54b48c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b490:
    // 0x54b490: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b494:
    // 0x54b494: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b498:
    // 0x54b498: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b49c:
    // 0x54b49c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b4a0:
    // 0x54b4a0: 0x320f809  jalr        $t9
label_54b4a4:
    if (ctx->pc == 0x54B4A4u) {
        ctx->pc = 0x54B4A8u;
        goto label_54b4a8;
    }
    ctx->pc = 0x54B4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B4A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B4A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B4A8u; }
            if (ctx->pc != 0x54B4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x54B4A8u;
label_54b4a8:
    // 0x54b4a8: 0x10000332  b           . + 4 + (0x332 << 2)
label_54b4ac:
    if (ctx->pc == 0x54B4ACu) {
        ctx->pc = 0x54B4B0u;
        goto label_54b4b0;
    }
    ctx->pc = 0x54B4A8u;
    {
        const bool branch_taken_0x54b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b4a8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B4B0u;
label_54b4b0:
    // 0x54b4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b4b4:
    // 0x54b4b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b4b8:
    // 0x54b4b8: 0x320f809  jalr        $t9
label_54b4bc:
    if (ctx->pc == 0x54B4BCu) {
        ctx->pc = 0x54B4BCu;
            // 0x54b4bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B4C0u;
        goto label_54b4c0;
    }
    ctx->pc = 0x54B4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B4C0u);
        ctx->pc = 0x54B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B4B8u;
            // 0x54b4bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B4C0u; }
            if (ctx->pc != 0x54B4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B4C0u;
label_54b4c0:
    // 0x54b4c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b4c4:
    // 0x54b4c4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b4c8:
    // 0x54b4c8: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b4cc:
    // 0x54b4cc: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b4d0:
    // 0x54b4d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b4d4:
    // 0x54b4d4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b4d8:
    // 0x54b4d8: 0x320f809  jalr        $t9
label_54b4dc:
    if (ctx->pc == 0x54B4DCu) {
        ctx->pc = 0x54B4E0u;
        goto label_54b4e0;
    }
    ctx->pc = 0x54B4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B4E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B4E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B4E0u; }
            if (ctx->pc != 0x54B4E0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B4E0u;
label_54b4e0:
    // 0x54b4e0: 0x10000324  b           . + 4 + (0x324 << 2)
label_54b4e4:
    if (ctx->pc == 0x54B4E4u) {
        ctx->pc = 0x54B4E8u;
        goto label_54b4e8;
    }
    ctx->pc = 0x54B4E0u;
    {
        const bool branch_taken_0x54b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b4e0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B4E8u;
label_54b4e8:
    // 0x54b4e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b4ec:
    // 0x54b4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b4f0:
    // 0x54b4f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b4f4:
    // 0x54b4f4: 0x320f809  jalr        $t9
label_54b4f8:
    if (ctx->pc == 0x54B4F8u) {
        ctx->pc = 0x54B4F8u;
            // 0x54b4f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x54B4FCu;
        goto label_54b4fc;
    }
    ctx->pc = 0x54B4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B4FCu);
        ctx->pc = 0x54B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B4F4u;
            // 0x54b4f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B4FCu; }
            if (ctx->pc != 0x54B4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x54B4FCu;
label_54b4fc:
    // 0x54b4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b500:
    // 0x54b500: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b504:
    // 0x54b504: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b508:
    // 0x54b508: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b50c:
    // 0x54b50c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b510:
    // 0x54b510: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b514:
    // 0x54b514: 0x320f809  jalr        $t9
label_54b518:
    if (ctx->pc == 0x54B518u) {
        ctx->pc = 0x54B51Cu;
        goto label_54b51c;
    }
    ctx->pc = 0x54B514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B51Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B51Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B51Cu; }
            if (ctx->pc != 0x54B51Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B51Cu;
label_54b51c:
    // 0x54b51c: 0x10000315  b           . + 4 + (0x315 << 2)
label_54b520:
    if (ctx->pc == 0x54B520u) {
        ctx->pc = 0x54B524u;
        goto label_54b524;
    }
    ctx->pc = 0x54B51Cu;
    {
        const bool branch_taken_0x54b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b51c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B524u;
label_54b524:
    // 0x54b524: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b528:
    // 0x54b528: 0x14600312  bnez        $v1, . + 4 + (0x312 << 2)
label_54b52c:
    if (ctx->pc == 0x54B52Cu) {
        ctx->pc = 0x54B530u;
        goto label_54b530;
    }
    ctx->pc = 0x54B528u;
    {
        const bool branch_taken_0x54b528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b528) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B530u;
label_54b530:
    // 0x54b530: 0xc040180  jal         func_100600
label_54b534:
    if (ctx->pc == 0x54B534u) {
        ctx->pc = 0x54B534u;
            // 0x54b534: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54B538u;
        goto label_54b538;
    }
    ctx->pc = 0x54B530u;
    SET_GPR_U32(ctx, 31, 0x54B538u);
    ctx->pc = 0x54B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B530u;
            // 0x54b534: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B538u; }
        if (ctx->pc != 0x54B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B538u; }
        if (ctx->pc != 0x54B538u) { return; }
    }
    ctx->pc = 0x54B538u;
label_54b538:
    // 0x54b538: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_54b53c:
    if (ctx->pc == 0x54B53Cu) {
        ctx->pc = 0x54B53Cu;
            // 0x54b53c: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x54B540u;
        goto label_54b540;
    }
    ctx->pc = 0x54B538u;
    {
        const bool branch_taken_0x54b538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b538) {
            ctx->pc = 0x54B53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B538u;
            // 0x54b53c: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B55Cu;
            goto label_54b55c;
        }
    }
    ctx->pc = 0x54B540u;
label_54b540:
    // 0x54b540: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x54b540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b544:
    // 0x54b544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b548:
    // 0x54b548: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x54b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_54b54c:
    // 0x54b54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54b54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b550:
    // 0x54b550: 0xc151190  jal         func_544640
label_54b554:
    if (ctx->pc == 0x54B554u) {
        ctx->pc = 0x54B554u;
            // 0x54b554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B558u;
        goto label_54b558;
    }
    ctx->pc = 0x54B550u;
    SET_GPR_U32(ctx, 31, 0x54B558u);
    ctx->pc = 0x54B554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B550u;
            // 0x54b554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B558u; }
        if (ctx->pc != 0x54B558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B558u; }
        if (ctx->pc != 0x54B558u) { return; }
    }
    ctx->pc = 0x54B558u;
label_54b558:
    // 0x54b558: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x54b558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_54b55c:
    // 0x54b55c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54b560:
    // 0x54b560: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x54b560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54b564:
    // 0x54b564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b568:
    // 0x54b568: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x54b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_54b56c:
    // 0x54b56c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54b56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54b570:
    // 0x54b570: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x54b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_54b574:
    // 0x54b574: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x54b574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54b578:
    // 0x54b578: 0x320f809  jalr        $t9
label_54b57c:
    if (ctx->pc == 0x54B57Cu) {
        ctx->pc = 0x54B57Cu;
            // 0x54b57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B580u;
        goto label_54b580;
    }
    ctx->pc = 0x54B578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B580u);
        ctx->pc = 0x54B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B578u;
            // 0x54b57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B580u; }
            if (ctx->pc != 0x54B580u) { return; }
        }
        }
    }
    ctx->pc = 0x54B580u;
label_54b580:
    // 0x54b580: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x54b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54b584:
    // 0x54b584: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x54b584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_54b588:
    // 0x54b588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b58c:
    // 0x54b58c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x54b58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_54b590:
    // 0x54b590: 0x320f809  jalr        $t9
label_54b594:
    if (ctx->pc == 0x54B594u) {
        ctx->pc = 0x54B594u;
            // 0x54b594: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x54B598u;
        goto label_54b598;
    }
    ctx->pc = 0x54B590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B598u);
        ctx->pc = 0x54B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B590u;
            // 0x54b594: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B598u; }
            if (ctx->pc != 0x54B598u) { return; }
        }
        }
    }
    ctx->pc = 0x54B598u;
label_54b598:
    // 0x54b598: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x54b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54b59c:
    // 0x54b59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b5a0:
    // 0x54b5a0: 0xa04300d1  sb          $v1, 0xD1($v0)
    ctx->pc = 0x54b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 209), (uint8_t)GPR_U32(ctx, 3));
label_54b5a4:
    // 0x54b5a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b5a8:
    // 0x54b5a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b5ac:
    // 0x54b5ac: 0x320f809  jalr        $t9
label_54b5b0:
    if (ctx->pc == 0x54B5B0u) {
        ctx->pc = 0x54B5B0u;
            // 0x54b5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B5B4u;
        goto label_54b5b4;
    }
    ctx->pc = 0x54B5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B5B4u);
        ctx->pc = 0x54B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B5ACu;
            // 0x54b5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B5B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B5B4u; }
            if (ctx->pc != 0x54B5B4u) { return; }
        }
        }
    }
    ctx->pc = 0x54B5B4u;
label_54b5b4:
    // 0x54b5b4: 0x100002ef  b           . + 4 + (0x2EF << 2)
label_54b5b8:
    if (ctx->pc == 0x54B5B8u) {
        ctx->pc = 0x54B5BCu;
        goto label_54b5bc;
    }
    ctx->pc = 0x54B5B4u;
    {
        const bool branch_taken_0x54b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b5b4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B5BCu;
label_54b5bc:
    // 0x54b5bc: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x54b5bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b5c0:
    // 0x54b5c0: 0x14a002ec  bnez        $a1, . + 4 + (0x2EC << 2)
label_54b5c4:
    if (ctx->pc == 0x54B5C4u) {
        ctx->pc = 0x54B5C8u;
        goto label_54b5c8;
    }
    ctx->pc = 0x54B5C0u;
    {
        const bool branch_taken_0x54b5c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b5c0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B5C8u;
label_54b5c8:
    // 0x54b5c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b5cc:
    // 0x54b5cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54b5d0:
    // 0x54b5d0: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x54b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_54b5d4:
    // 0x54b5d4: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
label_54b5d8:
    if (ctx->pc == 0x54B5D8u) {
        ctx->pc = 0x54B5D8u;
            // 0x54b5d8: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x54B5DCu;
        goto label_54b5dc;
    }
    ctx->pc = 0x54B5D4u;
    {
        const bool branch_taken_0x54b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x54b5d4) {
            ctx->pc = 0x54B5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B5D4u;
            // 0x54b5d8: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B5F4u;
            goto label_54b5f4;
        }
    }
    ctx->pc = 0x54B5DCu;
label_54b5dc:
    // 0x54b5dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b5e0:
    // 0x54b5e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b5e4:
    // 0x54b5e4: 0x320f809  jalr        $t9
label_54b5e8:
    if (ctx->pc == 0x54B5E8u) {
        ctx->pc = 0x54B5ECu;
        goto label_54b5ec;
    }
    ctx->pc = 0x54B5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B5ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B5ECu; }
            if (ctx->pc != 0x54B5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x54B5ECu;
label_54b5ec:
    // 0x54b5ec: 0x100002e1  b           . + 4 + (0x2E1 << 2)
label_54b5f0:
    if (ctx->pc == 0x54B5F0u) {
        ctx->pc = 0x54B5F4u;
        goto label_54b5f4;
    }
    ctx->pc = 0x54B5ECu;
    {
        const bool branch_taken_0x54b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b5ec) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B5F4u;
label_54b5f4:
    // 0x54b5f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b5f8:
    // 0x54b5f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x54b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b5fc:
    // 0x54b5fc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x54b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_54b600:
    // 0x54b600: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x54b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_54b604:
    // 0x54b604: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_54b608:
    if (ctx->pc == 0x54B608u) {
        ctx->pc = 0x54B60Cu;
        goto label_54b60c;
    }
    ctx->pc = 0x54B604u;
    {
        const bool branch_taken_0x54b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x54b604) {
            ctx->pc = 0x54B62Cu;
            goto label_54b62c;
        }
    }
    ctx->pc = 0x54B60Cu;
label_54b60c:
    // 0x54b60c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b610:
    // 0x54b610: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54b614:
    // 0x54b614: 0xc1206dc  jal         func_481B70
label_54b618:
    if (ctx->pc == 0x54B618u) {
        ctx->pc = 0x54B618u;
            // 0x54b618: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x54B61Cu;
        goto label_54b61c;
    }
    ctx->pc = 0x54B614u;
    SET_GPR_U32(ctx, 31, 0x54B61Cu);
    ctx->pc = 0x54B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B614u;
            // 0x54b618: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481B70u;
    if (runtime->hasFunction(0x481B70u)) {
        auto targetFn = runtime->lookupFunction(0x481B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B61Cu; }
        if (ctx->pc != 0x54B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481B70_0x481b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B61Cu; }
        if (ctx->pc != 0x54B61Cu) { return; }
    }
    ctx->pc = 0x54B61Cu;
label_54b61c:
    // 0x54b61c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b620:
    // 0x54b620: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b624:
    // 0x54b624: 0x10000003  b           . + 4 + (0x3 << 2)
label_54b628:
    if (ctx->pc == 0x54B628u) {
        ctx->pc = 0x54B628u;
            // 0x54b628: 0xa043cff0  sb          $v1, -0x3010($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x54B62Cu;
        goto label_54b62c;
    }
    ctx->pc = 0x54B624u;
    {
        const bool branch_taken_0x54b624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54B628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B624u;
            // 0x54b628: 0xa043cff0  sb          $v1, -0x3010($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54b624) {
            ctx->pc = 0x54B634u;
            goto label_54b634;
        }
    }
    ctx->pc = 0x54B62Cu;
label_54b62c:
    // 0x54b62c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b630:
    // 0x54b630: 0xa040cff0  sb          $zero, -0x3010($v0)
    ctx->pc = 0x54b630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 0));
label_54b634:
    // 0x54b634: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b638:
    // 0x54b638: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54b63c:
    // 0x54b63c: 0xc151cc8  jal         func_547320
label_54b640:
    if (ctx->pc == 0x54B640u) {
        ctx->pc = 0x54B640u;
            // 0x54b640: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x54B644u;
        goto label_54b644;
    }
    ctx->pc = 0x54B63Cu;
    SET_GPR_U32(ctx, 31, 0x54B644u);
    ctx->pc = 0x54B640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B63Cu;
            // 0x54b640: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547320u;
    if (runtime->hasFunction(0x547320u)) {
        auto targetFn = runtime->lookupFunction(0x547320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B644u; }
        if (ctx->pc != 0x54B644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547320_0x547320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B644u; }
        if (ctx->pc != 0x54B644u) { return; }
    }
    ctx->pc = 0x54B644u;
label_54b644:
    // 0x54b644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x54b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b648:
    // 0x54b648: 0xa2020056  sb          $v0, 0x56($s0)
    ctx->pc = 0x54b648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 2));
label_54b64c:
    // 0x54b64c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b650:
    // 0x54b650: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b654:
    // 0x54b654: 0x320f809  jalr        $t9
label_54b658:
    if (ctx->pc == 0x54B658u) {
        ctx->pc = 0x54B658u;
            // 0x54b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B65Cu;
        goto label_54b65c;
    }
    ctx->pc = 0x54B654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B65Cu);
        ctx->pc = 0x54B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B654u;
            // 0x54b658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B65Cu; }
            if (ctx->pc != 0x54B65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B65Cu;
label_54b65c:
    // 0x54b65c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b660:
    // 0x54b660: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x54b660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_54b664:
    // 0x54b664: 0x24847490  addiu       $a0, $a0, 0x7490
    ctx->pc = 0x54b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29840));
label_54b668:
    // 0x54b668: 0xac407488  sw          $zero, 0x7488($v0)
    ctx->pc = 0x54b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29832), GPR_U32(ctx, 0));
label_54b66c:
    // 0x54b66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b670:
    // 0x54b670: 0xc04a576  jal         func_1295D8
label_54b674:
    if (ctx->pc == 0x54B674u) {
        ctx->pc = 0x54B674u;
            // 0x54b674: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x54B678u;
        goto label_54b678;
    }
    ctx->pc = 0x54B670u;
    SET_GPR_U32(ctx, 31, 0x54B678u);
    ctx->pc = 0x54B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B670u;
            // 0x54b674: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B678u; }
        if (ctx->pc != 0x54B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B678u; }
        if (ctx->pc != 0x54B678u) { return; }
    }
    ctx->pc = 0x54B678u;
label_54b678:
    // 0x54b678: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x54b678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_54b67c:
    // 0x54b67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54b67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b680:
    // 0x54b680: 0x2484a9b0  addiu       $a0, $a0, -0x5650
    ctx->pc = 0x54b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945200));
label_54b684:
    // 0x54b684: 0xc04a576  jal         func_1295D8
label_54b688:
    if (ctx->pc == 0x54B688u) {
        ctx->pc = 0x54B688u;
            // 0x54b688: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x54B68Cu;
        goto label_54b68c;
    }
    ctx->pc = 0x54B684u;
    SET_GPR_U32(ctx, 31, 0x54B68Cu);
    ctx->pc = 0x54B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B684u;
            // 0x54b688: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B68Cu; }
        if (ctx->pc != 0x54B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B68Cu; }
        if (ctx->pc != 0x54B68Cu) { return; }
    }
    ctx->pc = 0x54B68Cu;
label_54b68c:
    // 0x54b68c: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x54b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_54b690:
    // 0x54b690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b694:
    // 0x54b694: 0x2484a9c0  addiu       $a0, $a0, -0x5640
    ctx->pc = 0x54b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
label_54b698:
    // 0x54b698: 0xc04a576  jal         func_1295D8
label_54b69c:
    if (ctx->pc == 0x54B69Cu) {
        ctx->pc = 0x54B69Cu;
            // 0x54b69c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x54B6A0u;
        goto label_54b6a0;
    }
    ctx->pc = 0x54B698u;
    SET_GPR_U32(ctx, 31, 0x54B6A0u);
    ctx->pc = 0x54B69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B698u;
            // 0x54b69c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6A0u; }
        if (ctx->pc != 0x54B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6A0u; }
        if (ctx->pc != 0x54B6A0u) { return; }
    }
    ctx->pc = 0x54B6A0u;
label_54b6a0:
    // 0x54b6a0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b6a4:
    // 0x54b6a4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x54b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_54b6a8:
    // 0x54b6a8: 0x2484aac0  addiu       $a0, $a0, -0x5540
    ctx->pc = 0x54b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945472));
label_54b6ac:
    // 0x54b6ac: 0xac40aab0  sw          $zero, -0x5550($v0)
    ctx->pc = 0x54b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945456), GPR_U32(ctx, 0));
label_54b6b0:
    // 0x54b6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54b6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b6b4:
    // 0x54b6b4: 0xc04a576  jal         func_1295D8
label_54b6b8:
    if (ctx->pc == 0x54B6B8u) {
        ctx->pc = 0x54B6B8u;
            // 0x54b6b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x54B6BCu;
        goto label_54b6bc;
    }
    ctx->pc = 0x54B6B4u;
    SET_GPR_U32(ctx, 31, 0x54B6BCu);
    ctx->pc = 0x54B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B6B4u;
            // 0x54b6b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6BCu; }
        if (ctx->pc != 0x54B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6BCu; }
        if (ctx->pc != 0x54B6BCu) { return; }
    }
    ctx->pc = 0x54B6BCu;
label_54b6bc:
    // 0x54b6bc: 0x100002ad  b           . + 4 + (0x2AD << 2)
label_54b6c0:
    if (ctx->pc == 0x54B6C0u) {
        ctx->pc = 0x54B6C4u;
        goto label_54b6c4;
    }
    ctx->pc = 0x54B6BCu;
    {
        const bool branch_taken_0x54b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b6bc) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B6C4u;
label_54b6c4:
    // 0x54b6c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b6c8:
    // 0x54b6c8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b6cc:
    // 0x54b6cc: 0x320f809  jalr        $t9
label_54b6d0:
    if (ctx->pc == 0x54B6D0u) {
        ctx->pc = 0x54B6D0u;
            // 0x54b6d0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x54B6D4u;
        goto label_54b6d4;
    }
    ctx->pc = 0x54B6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B6D4u);
        ctx->pc = 0x54B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B6CCu;
            // 0x54b6d0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B6D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B6D4u; }
            if (ctx->pc != 0x54B6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x54B6D4u;
label_54b6d4:
    // 0x54b6d4: 0x100002a7  b           . + 4 + (0x2A7 << 2)
label_54b6d8:
    if (ctx->pc == 0x54B6D8u) {
        ctx->pc = 0x54B6DCu;
        goto label_54b6dc;
    }
    ctx->pc = 0x54B6D4u;
    {
        const bool branch_taken_0x54b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b6d4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B6DCu;
label_54b6dc:
    // 0x54b6dc: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b6dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b6e0:
    // 0x54b6e0: 0x146002a4  bnez        $v1, . + 4 + (0x2A4 << 2)
label_54b6e4:
    if (ctx->pc == 0x54B6E4u) {
        ctx->pc = 0x54B6E8u;
        goto label_54b6e8;
    }
    ctx->pc = 0x54B6E0u;
    {
        const bool branch_taken_0x54b6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b6e0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B6E8u;
label_54b6e8:
    // 0x54b6e8: 0xc040180  jal         func_100600
label_54b6ec:
    if (ctx->pc == 0x54B6ECu) {
        ctx->pc = 0x54B6ECu;
            // 0x54b6ec: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54B6F0u;
        goto label_54b6f0;
    }
    ctx->pc = 0x54B6E8u;
    SET_GPR_U32(ctx, 31, 0x54B6F0u);
    ctx->pc = 0x54B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B6E8u;
            // 0x54b6ec: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6F0u; }
        if (ctx->pc != 0x54B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B6F0u; }
        if (ctx->pc != 0x54B6F0u) { return; }
    }
    ctx->pc = 0x54B6F0u;
label_54b6f0:
    // 0x54b6f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_54b6f4:
    if (ctx->pc == 0x54B6F4u) {
        ctx->pc = 0x54B6F4u;
            // 0x54b6f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B6F8u;
        goto label_54b6f8;
    }
    ctx->pc = 0x54B6F0u;
    {
        const bool branch_taken_0x54b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b6f0) {
            ctx->pc = 0x54B6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B6F0u;
            // 0x54b6f4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B714u;
            goto label_54b714;
        }
    }
    ctx->pc = 0x54B6F8u;
label_54b6f8:
    // 0x54b6f8: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x54b6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b6fc:
    // 0x54b6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b700:
    // 0x54b700: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54b700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54b704:
    // 0x54b704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54b704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b708:
    // 0x54b708: 0xc151190  jal         func_544640
label_54b70c:
    if (ctx->pc == 0x54B70Cu) {
        ctx->pc = 0x54B70Cu;
            // 0x54b70c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B710u;
        goto label_54b710;
    }
    ctx->pc = 0x54B708u;
    SET_GPR_U32(ctx, 31, 0x54B710u);
    ctx->pc = 0x54B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B708u;
            // 0x54b70c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B710u; }
        if (ctx->pc != 0x54B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B710u; }
        if (ctx->pc != 0x54B710u) { return; }
    }
    ctx->pc = 0x54B710u;
label_54b710:
    // 0x54b710: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b714:
    // 0x54b714: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b718:
    // 0x54b718: 0x320f809  jalr        $t9
label_54b71c:
    if (ctx->pc == 0x54B71Cu) {
        ctx->pc = 0x54B71Cu;
            // 0x54b71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B720u;
        goto label_54b720;
    }
    ctx->pc = 0x54B718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B720u);
        ctx->pc = 0x54B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B718u;
            // 0x54b71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B720u; }
            if (ctx->pc != 0x54B720u) { return; }
        }
        }
    }
    ctx->pc = 0x54B720u;
label_54b720:
    // 0x54b720: 0x10000294  b           . + 4 + (0x294 << 2)
label_54b724:
    if (ctx->pc == 0x54B724u) {
        ctx->pc = 0x54B728u;
        goto label_54b728;
    }
    ctx->pc = 0x54B720u;
    {
        const bool branch_taken_0x54b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b720) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B728u;
label_54b728:
    // 0x54b728: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b728u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b72c:
    // 0x54b72c: 0x14600291  bnez        $v1, . + 4 + (0x291 << 2)
label_54b730:
    if (ctx->pc == 0x54B730u) {
        ctx->pc = 0x54B734u;
        goto label_54b734;
    }
    ctx->pc = 0x54B72Cu;
    {
        const bool branch_taken_0x54b72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b72c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B734u;
label_54b734:
    // 0x54b734: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b738:
    // 0x54b738: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54b73c:
    // 0x54b73c: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x54b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_54b740:
    // 0x54b740: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
label_54b744:
    if (ctx->pc == 0x54B744u) {
        ctx->pc = 0x54B744u;
            // 0x54b744: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54B748u;
        goto label_54b748;
    }
    ctx->pc = 0x54B740u;
    {
        const bool branch_taken_0x54b740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x54b740) {
            ctx->pc = 0x54B744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B740u;
            // 0x54b744: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B760u;
            goto label_54b760;
        }
    }
    ctx->pc = 0x54B748u;
label_54b748:
    // 0x54b748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b74c:
    // 0x54b74c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b750:
    // 0x54b750: 0x320f809  jalr        $t9
label_54b754:
    if (ctx->pc == 0x54B754u) {
        ctx->pc = 0x54B754u;
            // 0x54b754: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x54B758u;
        goto label_54b758;
    }
    ctx->pc = 0x54B750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B758u);
        ctx->pc = 0x54B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B750u;
            // 0x54b754: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B758u; }
            if (ctx->pc != 0x54B758u) { return; }
        }
        }
    }
    ctx->pc = 0x54B758u;
label_54b758:
    // 0x54b758: 0x10000286  b           . + 4 + (0x286 << 2)
label_54b75c:
    if (ctx->pc == 0x54B75Cu) {
        ctx->pc = 0x54B760u;
        goto label_54b760;
    }
    ctx->pc = 0x54B758u;
    {
        const bool branch_taken_0x54b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b758) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B760u;
label_54b760:
    // 0x54b760: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b764:
    // 0x54b764: 0x320f809  jalr        $t9
label_54b768:
    if (ctx->pc == 0x54B768u) {
        ctx->pc = 0x54B76Cu;
        goto label_54b76c;
    }
    ctx->pc = 0x54B764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B76Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B76Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B76Cu; }
            if (ctx->pc != 0x54B76Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B76Cu;
label_54b76c:
    // 0x54b76c: 0x10000281  b           . + 4 + (0x281 << 2)
label_54b770:
    if (ctx->pc == 0x54B770u) {
        ctx->pc = 0x54B774u;
        goto label_54b774;
    }
    ctx->pc = 0x54B76Cu;
    {
        const bool branch_taken_0x54b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b76c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B774u;
label_54b774:
    // 0x54b774: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b778:
    // 0x54b778: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_54b77c:
    if (ctx->pc == 0x54B77Cu) {
        ctx->pc = 0x54B780u;
        goto label_54b780;
    }
    ctx->pc = 0x54B778u;
    {
        const bool branch_taken_0x54b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b778) {
            ctx->pc = 0x54B798u;
            goto label_54b798;
        }
    }
    ctx->pc = 0x54B780u;
label_54b780:
    // 0x54b780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b784:
    // 0x54b784: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b788:
    // 0x54b788: 0x320f809  jalr        $t9
label_54b78c:
    if (ctx->pc == 0x54B78Cu) {
        ctx->pc = 0x54B78Cu;
            // 0x54b78c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B790u;
        goto label_54b790;
    }
    ctx->pc = 0x54B788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B790u);
        ctx->pc = 0x54B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B788u;
            // 0x54b78c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B790u; }
            if (ctx->pc != 0x54B790u) { return; }
        }
        }
    }
    ctx->pc = 0x54B790u;
label_54b790:
    // 0x54b790: 0x10000278  b           . + 4 + (0x278 << 2)
label_54b794:
    if (ctx->pc == 0x54B794u) {
        ctx->pc = 0x54B798u;
        goto label_54b798;
    }
    ctx->pc = 0x54B790u;
    {
        const bool branch_taken_0x54b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b790) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B798u;
label_54b798:
    // 0x54b798: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b79c:
    // 0x54b79c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54b7a0:
    // 0x54b7a0: 0x8c450e68  lw          $a1, 0xE68($v0)
    ctx->pc = 0x54b7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54b7a4:
    // 0x54b7a4: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x54b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_54b7a8:
    // 0x54b7a8: 0xaca003d4  sw          $zero, 0x3D4($a1)
    ctx->pc = 0x54b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 980), GPR_U32(ctx, 0));
label_54b7ac:
    // 0x54b7ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54b7b0:
    // 0x54b7b0: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x54b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_54b7b4:
    // 0x54b7b4: 0xac6003d8  sw          $zero, 0x3D8($v1)
    ctx->pc = 0x54b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 984), GPR_U32(ctx, 0));
label_54b7b8:
    // 0x54b7b8: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x54b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54b7bc:
    // 0x54b7bc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x54b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b7c0:
    // 0x54b7c0: 0xc040180  jal         func_100600
label_54b7c4:
    if (ctx->pc == 0x54B7C4u) {
        ctx->pc = 0x54B7C4u;
            // 0x54b7c4: 0xac4303dc  sw          $v1, 0x3DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 988), GPR_U32(ctx, 3));
        ctx->pc = 0x54B7C8u;
        goto label_54b7c8;
    }
    ctx->pc = 0x54B7C0u;
    SET_GPR_U32(ctx, 31, 0x54B7C8u);
    ctx->pc = 0x54B7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B7C0u;
            // 0x54b7c4: 0xac4303dc  sw          $v1, 0x3DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 988), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B7C8u; }
        if (ctx->pc != 0x54B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B7C8u; }
        if (ctx->pc != 0x54B7C8u) { return; }
    }
    ctx->pc = 0x54B7C8u;
label_54b7c8:
    // 0x54b7c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_54b7cc:
    if (ctx->pc == 0x54B7CCu) {
        ctx->pc = 0x54B7CCu;
            // 0x54b7cc: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54B7D0u;
        goto label_54b7d0;
    }
    ctx->pc = 0x54B7C8u;
    {
        const bool branch_taken_0x54b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b7c8) {
            ctx->pc = 0x54B7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B7C8u;
            // 0x54b7cc: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B7F4u;
            goto label_54b7f4;
        }
    }
    ctx->pc = 0x54B7D0u;
label_54b7d0:
    // 0x54b7d0: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54b7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54b7d4:
    // 0x54b7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b7d8:
    // 0x54b7d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x54b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_54b7dc:
    // 0x54b7dc: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x54b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_54b7e0:
    // 0x54b7e0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x54b7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54b7e4:
    // 0x54b7e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x54b7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b7e8:
    // 0x54b7e8: 0xc159754  jal         func_565D50
label_54b7ec:
    if (ctx->pc == 0x54B7ECu) {
        ctx->pc = 0x54B7ECu;
            // 0x54b7ec: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B7F0u;
        goto label_54b7f0;
    }
    ctx->pc = 0x54B7E8u;
    SET_GPR_U32(ctx, 31, 0x54B7F0u);
    ctx->pc = 0x54B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B7E8u;
            // 0x54b7ec: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B7F0u; }
        if (ctx->pc != 0x54B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B7F0u; }
        if (ctx->pc != 0x54B7F0u) { return; }
    }
    ctx->pc = 0x54B7F0u;
label_54b7f0:
    // 0x54b7f0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54b7f4:
    // 0x54b7f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b7f8:
    // 0x54b7f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b7fc:
    // 0x54b7fc: 0x320f809  jalr        $t9
label_54b800:
    if (ctx->pc == 0x54B800u) {
        ctx->pc = 0x54B800u;
            // 0x54b800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B804u;
        goto label_54b804;
    }
    ctx->pc = 0x54B7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B804u);
        ctx->pc = 0x54B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B7FCu;
            // 0x54b800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B804u; }
            if (ctx->pc != 0x54B804u) { return; }
        }
        }
    }
    ctx->pc = 0x54B804u;
label_54b804:
    // 0x54b804: 0x1000025b  b           . + 4 + (0x25B << 2)
label_54b808:
    if (ctx->pc == 0x54B808u) {
        ctx->pc = 0x54B80Cu;
        goto label_54b80c;
    }
    ctx->pc = 0x54B804u;
    {
        const bool branch_taken_0x54b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b804) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B80Cu;
label_54b80c:
    // 0x54b80c: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b80cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b810:
    // 0x54b810: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_54b814:
    if (ctx->pc == 0x54B814u) {
        ctx->pc = 0x54B814u;
            // 0x54b814: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x54B818u;
        goto label_54b818;
    }
    ctx->pc = 0x54B810u;
    {
        const bool branch_taken_0x54b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b810) {
            ctx->pc = 0x54B814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B810u;
            // 0x54b814: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B844u;
            goto label_54b844;
        }
    }
    ctx->pc = 0x54B818u;
label_54b818:
    // 0x54b818: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b81c:
    // 0x54b81c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b820:
    // 0x54b820: 0x320f809  jalr        $t9
label_54b824:
    if (ctx->pc == 0x54B824u) {
        ctx->pc = 0x54B824u;
            // 0x54b824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54B828u;
        goto label_54b828;
    }
    ctx->pc = 0x54B820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B828u);
        ctx->pc = 0x54B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B820u;
            // 0x54b824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B828u; }
            if (ctx->pc != 0x54B828u) { return; }
        }
        }
    }
    ctx->pc = 0x54B828u;
label_54b828:
    // 0x54b828: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b82c:
    // 0x54b82c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b830:
    // 0x54b830: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b834:
    // 0x54b834: 0x320f809  jalr        $t9
label_54b838:
    if (ctx->pc == 0x54B838u) {
        ctx->pc = 0x54B83Cu;
        goto label_54b83c;
    }
    ctx->pc = 0x54B834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B83Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B83Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B83Cu; }
            if (ctx->pc != 0x54B83Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54B83Cu;
label_54b83c:
    // 0x54b83c: 0x1000024d  b           . + 4 + (0x24D << 2)
label_54b840:
    if (ctx->pc == 0x54B840u) {
        ctx->pc = 0x54B844u;
        goto label_54b844;
    }
    ctx->pc = 0x54B83Cu;
    {
        const bool branch_taken_0x54b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b83c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B844u;
label_54b844:
    // 0x54b844: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b848:
    // 0x54b848: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54b848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54b84c:
    // 0x54b84c: 0x320f809  jalr        $t9
label_54b850:
    if (ctx->pc == 0x54B850u) {
        ctx->pc = 0x54B854u;
        goto label_54b854;
    }
    ctx->pc = 0x54B84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B854u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B854u; }
            if (ctx->pc != 0x54B854u) { return; }
        }
        }
    }
    ctx->pc = 0x54B854u;
label_54b854:
    // 0x54b854: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x54b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54b858:
    // 0x54b858: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
label_54b85c:
    if (ctx->pc == 0x54B85Cu) {
        ctx->pc = 0x54B85Cu;
            // 0x54b85c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B860u;
        goto label_54b860;
    }
    ctx->pc = 0x54B858u;
    {
        const bool branch_taken_0x54b858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b858) {
            ctx->pc = 0x54B85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B858u;
            // 0x54b85c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B8BCu;
            goto label_54b8bc;
        }
    }
    ctx->pc = 0x54B860u;
label_54b860:
    // 0x54b860: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x54b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_54b864:
    // 0x54b864: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_54b868:
    if (ctx->pc == 0x54B868u) {
        ctx->pc = 0x54B86Cu;
        goto label_54b86c;
    }
    ctx->pc = 0x54B864u;
    {
        const bool branch_taken_0x54b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b864) {
            ctx->pc = 0x54B8B8u;
            goto label_54b8b8;
        }
    }
    ctx->pc = 0x54B86Cu;
label_54b86c:
    // 0x54b86c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54b870:
    // 0x54b870: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_54b874:
    if (ctx->pc == 0x54B874u) {
        ctx->pc = 0x54B874u;
            // 0x54b874: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B878u;
        goto label_54b878;
    }
    ctx->pc = 0x54B870u;
    {
        const bool branch_taken_0x54b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54b870) {
            ctx->pc = 0x54B874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B870u;
            // 0x54b874: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B880u;
            goto label_54b880;
        }
    }
    ctx->pc = 0x54B878u;
label_54b878:
    // 0x54b878: 0x1000023e  b           . + 4 + (0x23E << 2)
label_54b87c:
    if (ctx->pc == 0x54B87Cu) {
        ctx->pc = 0x54B880u;
        goto label_54b880;
    }
    ctx->pc = 0x54B878u;
    {
        const bool branch_taken_0x54b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b878) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B880u;
label_54b880:
    // 0x54b880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b884:
    // 0x54b884: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b888:
    // 0x54b888: 0x320f809  jalr        $t9
label_54b88c:
    if (ctx->pc == 0x54B88Cu) {
        ctx->pc = 0x54B88Cu;
            // 0x54b88c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x54B890u;
        goto label_54b890;
    }
    ctx->pc = 0x54B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B890u);
        ctx->pc = 0x54B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B888u;
            // 0x54b88c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B890u; }
            if (ctx->pc != 0x54B890u) { return; }
        }
        }
    }
    ctx->pc = 0x54B890u;
label_54b890:
    // 0x54b890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b894:
    // 0x54b894: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b898:
    // 0x54b898: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b89c:
    // 0x54b89c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b8a0:
    // 0x54b8a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b8a4:
    // 0x54b8a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b8a8:
    // 0x54b8a8: 0x320f809  jalr        $t9
label_54b8ac:
    if (ctx->pc == 0x54B8ACu) {
        ctx->pc = 0x54B8B0u;
        goto label_54b8b0;
    }
    ctx->pc = 0x54B8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B8B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B8B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B8B0u; }
            if (ctx->pc != 0x54B8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B8B0u;
label_54b8b0:
    // 0x54b8b0: 0x10000230  b           . + 4 + (0x230 << 2)
label_54b8b4:
    if (ctx->pc == 0x54B8B4u) {
        ctx->pc = 0x54B8B8u;
        goto label_54b8b8;
    }
    ctx->pc = 0x54B8B0u;
    {
        const bool branch_taken_0x54b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b8b0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B8B8u;
label_54b8b8:
    // 0x54b8b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b8bc:
    // 0x54b8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54b8c0:
    // 0x54b8c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b8c4:
    // 0x54b8c4: 0x320f809  jalr        $t9
label_54b8c8:
    if (ctx->pc == 0x54B8C8u) {
        ctx->pc = 0x54B8C8u;
            // 0x54b8c8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x54B8CCu;
        goto label_54b8cc;
    }
    ctx->pc = 0x54B8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B8CCu);
        ctx->pc = 0x54B8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B8C4u;
            // 0x54b8c8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B8CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B8CCu; }
            if (ctx->pc != 0x54B8CCu) { return; }
        }
        }
    }
    ctx->pc = 0x54B8CCu;
label_54b8cc:
    // 0x54b8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b8d0:
    // 0x54b8d0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54b8d4:
    // 0x54b8d4: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54b8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54b8d8:
    // 0x54b8d8: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54b8dc:
    // 0x54b8dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b8e0:
    // 0x54b8e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54b8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54b8e4:
    // 0x54b8e4: 0x320f809  jalr        $t9
label_54b8e8:
    if (ctx->pc == 0x54B8E8u) {
        ctx->pc = 0x54B8ECu;
        goto label_54b8ec;
    }
    ctx->pc = 0x54B8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B8ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B8ECu; }
            if (ctx->pc != 0x54B8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x54B8ECu;
label_54b8ec:
    // 0x54b8ec: 0x10000221  b           . + 4 + (0x221 << 2)
label_54b8f0:
    if (ctx->pc == 0x54B8F0u) {
        ctx->pc = 0x54B8F4u;
        goto label_54b8f4;
    }
    ctx->pc = 0x54B8ECu;
    {
        const bool branch_taken_0x54b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b8ec) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B8F4u;
label_54b8f4:
    // 0x54b8f4: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b8f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b8f8:
    // 0x54b8f8: 0x1460021e  bnez        $v1, . + 4 + (0x21E << 2)
label_54b8fc:
    if (ctx->pc == 0x54B8FCu) {
        ctx->pc = 0x54B900u;
        goto label_54b900;
    }
    ctx->pc = 0x54B8F8u;
    {
        const bool branch_taken_0x54b8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b8f8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B900u;
label_54b900:
    // 0x54b900: 0xc040180  jal         func_100600
label_54b904:
    if (ctx->pc == 0x54B904u) {
        ctx->pc = 0x54B904u;
            // 0x54b904: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54B908u;
        goto label_54b908;
    }
    ctx->pc = 0x54B900u;
    SET_GPR_U32(ctx, 31, 0x54B908u);
    ctx->pc = 0x54B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B900u;
            // 0x54b904: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B908u; }
        if (ctx->pc != 0x54B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B908u; }
        if (ctx->pc != 0x54B908u) { return; }
    }
    ctx->pc = 0x54B908u;
label_54b908:
    // 0x54b908: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_54b90c:
    if (ctx->pc == 0x54B90Cu) {
        ctx->pc = 0x54B90Cu;
            // 0x54b90c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54B910u;
        goto label_54b910;
    }
    ctx->pc = 0x54B908u;
    {
        const bool branch_taken_0x54b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b908) {
            ctx->pc = 0x54B90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B908u;
            // 0x54b90c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B92Cu;
            goto label_54b92c;
        }
    }
    ctx->pc = 0x54B910u;
label_54b910:
    // 0x54b910: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x54b910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54b914:
    // 0x54b914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b918:
    // 0x54b918: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54b918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54b91c:
    // 0x54b91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54b91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b920:
    // 0x54b920: 0xc151190  jal         func_544640
label_54b924:
    if (ctx->pc == 0x54B924u) {
        ctx->pc = 0x54B924u;
            // 0x54b924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B928u;
        goto label_54b928;
    }
    ctx->pc = 0x54B920u;
    SET_GPR_U32(ctx, 31, 0x54B928u);
    ctx->pc = 0x54B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B920u;
            // 0x54b924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B928u; }
        if (ctx->pc != 0x54B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B928u; }
        if (ctx->pc != 0x54B928u) { return; }
    }
    ctx->pc = 0x54B928u;
label_54b928:
    // 0x54b928: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54b928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54b92c:
    // 0x54b92c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b930:
    // 0x54b930: 0x320f809  jalr        $t9
label_54b934:
    if (ctx->pc == 0x54B934u) {
        ctx->pc = 0x54B934u;
            // 0x54b934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B938u;
        goto label_54b938;
    }
    ctx->pc = 0x54B930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B938u);
        ctx->pc = 0x54B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B930u;
            // 0x54b934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B938u; }
            if (ctx->pc != 0x54B938u) { return; }
        }
        }
    }
    ctx->pc = 0x54B938u;
label_54b938:
    // 0x54b938: 0x1000020e  b           . + 4 + (0x20E << 2)
label_54b93c:
    if (ctx->pc == 0x54B93Cu) {
        ctx->pc = 0x54B940u;
        goto label_54b940;
    }
    ctx->pc = 0x54B938u;
    {
        const bool branch_taken_0x54b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b938) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B940u;
label_54b940:
    // 0x54b940: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b940u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b944:
    // 0x54b944: 0x1460020b  bnez        $v1, . + 4 + (0x20B << 2)
label_54b948:
    if (ctx->pc == 0x54B948u) {
        ctx->pc = 0x54B94Cu;
        goto label_54b94c;
    }
    ctx->pc = 0x54B944u;
    {
        const bool branch_taken_0x54b944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b944) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B94Cu;
label_54b94c:
    // 0x54b94c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54b950:
    // 0x54b950: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x54b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54b954:
    // 0x54b954: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x54b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_54b958:
    // 0x54b958: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_54b95c:
    if (ctx->pc == 0x54B95Cu) {
        ctx->pc = 0x54B95Cu;
            // 0x54b95c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54B960u;
        goto label_54b960;
    }
    ctx->pc = 0x54B958u;
    {
        const bool branch_taken_0x54b958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x54b958) {
            ctx->pc = 0x54B95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B958u;
            // 0x54b95c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54B978u;
            goto label_54b978;
        }
    }
    ctx->pc = 0x54B960u;
label_54b960:
    // 0x54b960: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b964:
    // 0x54b964: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b968:
    // 0x54b968: 0x320f809  jalr        $t9
label_54b96c:
    if (ctx->pc == 0x54B96Cu) {
        ctx->pc = 0x54B96Cu;
            // 0x54b96c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x54B970u;
        goto label_54b970;
    }
    ctx->pc = 0x54B968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B970u);
        ctx->pc = 0x54B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B968u;
            // 0x54b96c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B970u; }
            if (ctx->pc != 0x54B970u) { return; }
        }
        }
    }
    ctx->pc = 0x54B970u;
label_54b970:
    // 0x54b970: 0x10000200  b           . + 4 + (0x200 << 2)
label_54b974:
    if (ctx->pc == 0x54B974u) {
        ctx->pc = 0x54B978u;
        goto label_54b978;
    }
    ctx->pc = 0x54B970u;
    {
        const bool branch_taken_0x54b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b970) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B978u;
label_54b978:
    // 0x54b978: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b97c:
    // 0x54b97c: 0x320f809  jalr        $t9
label_54b980:
    if (ctx->pc == 0x54B980u) {
        ctx->pc = 0x54B980u;
            // 0x54b980: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x54B984u;
        goto label_54b984;
    }
    ctx->pc = 0x54B97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B984u);
        ctx->pc = 0x54B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B97Cu;
            // 0x54b980: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B984u; }
            if (ctx->pc != 0x54B984u) { return; }
        }
        }
    }
    ctx->pc = 0x54B984u;
label_54b984:
    // 0x54b984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x54b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54b988:
    // 0x54b988: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x54b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_54b98c:
    // 0x54b98c: 0xc040180  jal         func_100600
label_54b990:
    if (ctx->pc == 0x54B990u) {
        ctx->pc = 0x54B990u;
            // 0x54b990: 0xa2020058  sb          $v0, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x54B994u;
        goto label_54b994;
    }
    ctx->pc = 0x54B98Cu;
    SET_GPR_U32(ctx, 31, 0x54B994u);
    ctx->pc = 0x54B990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B98Cu;
            // 0x54b990: 0xa2020058  sb          $v0, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B994u; }
        if (ctx->pc != 0x54B994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B994u; }
        if (ctx->pc != 0x54B994u) { return; }
    }
    ctx->pc = 0x54B994u;
label_54b994:
    // 0x54b994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b998:
    // 0x54b998: 0x508001f6  beql        $a0, $zero, . + 4 + (0x1F6 << 2)
label_54b99c:
    if (ctx->pc == 0x54B99Cu) {
        ctx->pc = 0x54B99Cu;
            // 0x54b99c: 0xae04006c  sw          $a0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
        ctx->pc = 0x54B9A0u;
        goto label_54b9a0;
    }
    ctx->pc = 0x54B998u;
    {
        const bool branch_taken_0x54b998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b998) {
            ctx->pc = 0x54B99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B998u;
            // 0x54b99c: 0xae04006c  sw          $a0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B9A0u;
label_54b9a0:
    // 0x54b9a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x54b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54b9a4:
    // 0x54b9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54b9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b9a8:
    // 0x54b9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54b9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54b9ac:
    // 0x54b9ac: 0xc151190  jal         func_544640
label_54b9b0:
    if (ctx->pc == 0x54B9B0u) {
        ctx->pc = 0x54B9B0u;
            // 0x54b9b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54B9B4u;
        goto label_54b9b4;
    }
    ctx->pc = 0x54B9ACu;
    SET_GPR_U32(ctx, 31, 0x54B9B4u);
    ctx->pc = 0x54B9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54B9ACu;
            // 0x54b9b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B9B4u; }
        if (ctx->pc != 0x54B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54B9B4u; }
        if (ctx->pc != 0x54B9B4u) { return; }
    }
    ctx->pc = 0x54B9B4u;
label_54b9b4:
    // 0x54b9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54b9b8:
    // 0x54b9b8: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x54b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
label_54b9bc:
    // 0x54b9bc: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_54b9c0:
    if (ctx->pc == 0x54B9C0u) {
        ctx->pc = 0x54B9C4u;
        goto label_54b9c4;
    }
    ctx->pc = 0x54B9BCu;
    {
        const bool branch_taken_0x54b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b9bc) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B9C4u;
label_54b9c4:
    // 0x54b9c4: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54b9c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b9c8:
    // 0x54b9c8: 0x146001ea  bnez        $v1, . + 4 + (0x1EA << 2)
label_54b9cc:
    if (ctx->pc == 0x54B9CCu) {
        ctx->pc = 0x54B9D0u;
        goto label_54b9d0;
    }
    ctx->pc = 0x54B9C8u;
    {
        const bool branch_taken_0x54b9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b9c8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B9D0u;
label_54b9d0:
    // 0x54b9d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b9d4:
    // 0x54b9d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54b9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54b9d8:
    // 0x54b9d8: 0x320f809  jalr        $t9
label_54b9dc:
    if (ctx->pc == 0x54B9DCu) {
        ctx->pc = 0x54B9E0u;
        goto label_54b9e0;
    }
    ctx->pc = 0x54B9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54B9E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54B9E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54B9E0u; }
            if (ctx->pc != 0x54B9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x54B9E0u;
label_54b9e0:
    // 0x54b9e0: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_54b9e4:
    if (ctx->pc == 0x54B9E4u) {
        ctx->pc = 0x54B9E8u;
        goto label_54b9e8;
    }
    ctx->pc = 0x54B9E0u;
    {
        const bool branch_taken_0x54b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54b9e0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54B9E8u;
label_54b9e8:
    // 0x54b9e8: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54b9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54b9ec:
    // 0x54b9ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_54b9f0:
    if (ctx->pc == 0x54B9F0u) {
        ctx->pc = 0x54B9F0u;
            // 0x54b9f0: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x54B9F4u;
        goto label_54b9f4;
    }
    ctx->pc = 0x54B9ECu;
    {
        const bool branch_taken_0x54b9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54b9ec) {
            ctx->pc = 0x54B9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54B9ECu;
            // 0x54b9f0: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BA20u;
            goto label_54ba20;
        }
    }
    ctx->pc = 0x54B9F4u;
label_54b9f4:
    // 0x54b9f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54b9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54b9f8:
    // 0x54b9f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54b9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54b9fc:
    // 0x54b9fc: 0x320f809  jalr        $t9
label_54ba00:
    if (ctx->pc == 0x54BA00u) {
        ctx->pc = 0x54BA00u;
            // 0x54ba00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54BA04u;
        goto label_54ba04;
    }
    ctx->pc = 0x54B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA04u);
        ctx->pc = 0x54BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54B9FCu;
            // 0x54ba00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA04u; }
            if (ctx->pc != 0x54BA04u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA04u;
label_54ba04:
    // 0x54ba04: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54ba08:
    // 0x54ba08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ba08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ba0c:
    // 0x54ba0c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54ba0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54ba10:
    // 0x54ba10: 0x320f809  jalr        $t9
label_54ba14:
    if (ctx->pc == 0x54BA14u) {
        ctx->pc = 0x54BA18u;
        goto label_54ba18;
    }
    ctx->pc = 0x54BA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA18u; }
            if (ctx->pc != 0x54BA18u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA18u;
label_54ba18:
    // 0x54ba18: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_54ba1c:
    if (ctx->pc == 0x54BA1Cu) {
        ctx->pc = 0x54BA20u;
        goto label_54ba20;
    }
    ctx->pc = 0x54BA18u;
    {
        const bool branch_taken_0x54ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ba18) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BA20u;
label_54ba20:
    // 0x54ba20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ba20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ba24:
    // 0x54ba24: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54ba24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54ba28:
    // 0x54ba28: 0x320f809  jalr        $t9
label_54ba2c:
    if (ctx->pc == 0x54BA2Cu) {
        ctx->pc = 0x54BA30u;
        goto label_54ba30;
    }
    ctx->pc = 0x54BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA30u; }
            if (ctx->pc != 0x54BA30u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA30u;
label_54ba30:
    // 0x54ba30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54ba34:
    // 0x54ba34: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_54ba38:
    if (ctx->pc == 0x54BA38u) {
        ctx->pc = 0x54BA38u;
            // 0x54ba38: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54BA3Cu;
        goto label_54ba3c;
    }
    ctx->pc = 0x54BA34u;
    {
        const bool branch_taken_0x54ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54ba34) {
            ctx->pc = 0x54BA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BA34u;
            // 0x54ba38: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BA88u;
            goto label_54ba88;
        }
    }
    ctx->pc = 0x54BA3Cu;
label_54ba3c:
    // 0x54ba3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54ba40:
    // 0x54ba40: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_54ba44:
    if (ctx->pc == 0x54BA44u) {
        ctx->pc = 0x54BA44u;
            // 0x54ba44: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54BA48u;
        goto label_54ba48;
    }
    ctx->pc = 0x54BA40u;
    {
        const bool branch_taken_0x54ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54ba40) {
            ctx->pc = 0x54BA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BA40u;
            // 0x54ba44: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BA50u;
            goto label_54ba50;
        }
    }
    ctx->pc = 0x54BA48u;
label_54ba48:
    // 0x54ba48: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_54ba4c:
    if (ctx->pc == 0x54BA4Cu) {
        ctx->pc = 0x54BA50u;
        goto label_54ba50;
    }
    ctx->pc = 0x54BA48u;
    {
        const bool branch_taken_0x54ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ba48) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BA50u;
label_54ba50:
    // 0x54ba50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54ba54:
    // 0x54ba54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54ba54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54ba58:
    // 0x54ba58: 0x320f809  jalr        $t9
label_54ba5c:
    if (ctx->pc == 0x54BA5Cu) {
        ctx->pc = 0x54BA5Cu;
            // 0x54ba5c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x54BA60u;
        goto label_54ba60;
    }
    ctx->pc = 0x54BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA60u);
        ctx->pc = 0x54BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BA58u;
            // 0x54ba5c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA60u; }
            if (ctx->pc != 0x54BA60u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA60u;
label_54ba60:
    // 0x54ba60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54ba64:
    // 0x54ba64: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54ba68:
    // 0x54ba68: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54ba68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54ba6c:
    // 0x54ba6c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54ba70:
    // 0x54ba70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ba70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ba74:
    // 0x54ba74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54ba74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54ba78:
    // 0x54ba78: 0x320f809  jalr        $t9
label_54ba7c:
    if (ctx->pc == 0x54BA7Cu) {
        ctx->pc = 0x54BA80u;
        goto label_54ba80;
    }
    ctx->pc = 0x54BA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA80u; }
            if (ctx->pc != 0x54BA80u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA80u;
label_54ba80:
    // 0x54ba80: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_54ba84:
    if (ctx->pc == 0x54BA84u) {
        ctx->pc = 0x54BA88u;
        goto label_54ba88;
    }
    ctx->pc = 0x54BA80u;
    {
        const bool branch_taken_0x54ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54ba80) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BA88u;
label_54ba88:
    // 0x54ba88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54ba8c:
    // 0x54ba8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54ba8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54ba90:
    // 0x54ba90: 0x320f809  jalr        $t9
label_54ba94:
    if (ctx->pc == 0x54BA94u) {
        ctx->pc = 0x54BA94u;
            // 0x54ba94: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x54BA98u;
        goto label_54ba98;
    }
    ctx->pc = 0x54BA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BA98u);
        ctx->pc = 0x54BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BA90u;
            // 0x54ba94: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BA98u; }
            if (ctx->pc != 0x54BA98u) { return; }
        }
        }
    }
    ctx->pc = 0x54BA98u;
label_54ba98:
    // 0x54ba98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ba9c:
    // 0x54ba9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54baa0:
    // 0x54baa0: 0xa040cff0  sb          $zero, -0x3010($v0)
    ctx->pc = 0x54baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 0));
label_54baa4:
    // 0x54baa4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54baa8:
    // 0x54baa8: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54baac:
    // 0x54baac: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54bab0:
    // 0x54bab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bab4:
    // 0x54bab4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54bab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54bab8:
    // 0x54bab8: 0x320f809  jalr        $t9
label_54babc:
    if (ctx->pc == 0x54BABCu) {
        ctx->pc = 0x54BAC0u;
        goto label_54bac0;
    }
    ctx->pc = 0x54BAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BAC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BAC0u; }
            if (ctx->pc != 0x54BAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x54BAC0u;
label_54bac0:
    // 0x54bac0: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_54bac4:
    if (ctx->pc == 0x54BAC4u) {
        ctx->pc = 0x54BAC8u;
        goto label_54bac8;
    }
    ctx->pc = 0x54BAC0u;
    {
        const bool branch_taken_0x54bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bac0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BAC8u;
label_54bac8:
    // 0x54bac8: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54bac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54bacc:
    // 0x54bacc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_54bad0:
    if (ctx->pc == 0x54BAD0u) {
        ctx->pc = 0x54BAD0u;
            // 0x54bad0: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->pc = 0x54BAD4u;
        goto label_54bad4;
    }
    ctx->pc = 0x54BACCu;
    {
        const bool branch_taken_0x54bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bacc) {
            ctx->pc = 0x54BAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BACCu;
            // 0x54bad0: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BAECu;
            goto label_54baec;
        }
    }
    ctx->pc = 0x54BAD4u;
label_54bad4:
    // 0x54bad4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bad8:
    // 0x54bad8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54bad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54badc:
    // 0x54badc: 0x320f809  jalr        $t9
label_54bae0:
    if (ctx->pc == 0x54BAE0u) {
        ctx->pc = 0x54BAE0u;
            // 0x54bae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54BAE4u;
        goto label_54bae4;
    }
    ctx->pc = 0x54BADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BAE4u);
        ctx->pc = 0x54BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BADCu;
            // 0x54bae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BAE4u; }
            if (ctx->pc != 0x54BAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x54BAE4u;
label_54bae4:
    // 0x54bae4: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_54bae8:
    if (ctx->pc == 0x54BAE8u) {
        ctx->pc = 0x54BAECu;
        goto label_54baec;
    }
    ctx->pc = 0x54BAE4u;
    {
        const bool branch_taken_0x54bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bae4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BAECu;
label_54baec:
    // 0x54baec: 0xc040180  jal         func_100600
label_54baf0:
    if (ctx->pc == 0x54BAF0u) {
        ctx->pc = 0x54BAF4u;
        goto label_54baf4;
    }
    ctx->pc = 0x54BAECu;
    SET_GPR_U32(ctx, 31, 0x54BAF4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BAF4u; }
        if (ctx->pc != 0x54BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BAF4u; }
        if (ctx->pc != 0x54BAF4u) { return; }
    }
    ctx->pc = 0x54BAF4u;
label_54baf4:
    // 0x54baf4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_54baf8:
    if (ctx->pc == 0x54BAF8u) {
        ctx->pc = 0x54BAF8u;
            // 0x54baf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BAFCu;
        goto label_54bafc;
    }
    ctx->pc = 0x54BAF4u;
    {
        const bool branch_taken_0x54baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BAF4u;
            // 0x54baf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54baf4) {
            ctx->pc = 0x54BBC4u;
            goto label_54bbc4;
        }
    }
    ctx->pc = 0x54BAFCu;
label_54bafc:
    // 0x54bafc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bb00:
    // 0x54bb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54bb04:
    // 0x54bb04: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bb08:
    // 0x54bb08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x54bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54bb0c:
    // 0x54bb0c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54bb10:
    // 0x54bb10: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x54bb10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_54bb14:
    // 0x54bb14: 0xc10ca68  jal         func_4329A0
label_54bb18:
    if (ctx->pc == 0x54BB18u) {
        ctx->pc = 0x54BB18u;
            // 0x54bb18: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x54BB1Cu;
        goto label_54bb1c;
    }
    ctx->pc = 0x54BB14u;
    SET_GPR_U32(ctx, 31, 0x54BB1Cu);
    ctx->pc = 0x54BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BB14u;
            // 0x54bb18: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB1Cu; }
        if (ctx->pc != 0x54BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB1Cu; }
        if (ctx->pc != 0x54BB1Cu) { return; }
    }
    ctx->pc = 0x54BB1Cu;
label_54bb1c:
    // 0x54bb1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x54bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_54bb20:
    // 0x54bb20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_54bb24:
    // 0x54bb24: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x54bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_54bb28:
    // 0x54bb28: 0x246379d0  addiu       $v1, $v1, 0x79D0
    ctx->pc = 0x54bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31184));
label_54bb2c:
    // 0x54bb2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x54bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_54bb30:
    // 0x54bb30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x54bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_54bb34:
    // 0x54bb34: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x54bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_54bb38:
    // 0x54bb38: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x54bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_54bb3c:
    // 0x54bb3c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x54bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_54bb40:
    // 0x54bb40: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x54bb40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_54bb44:
    // 0x54bb44: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x54bb44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_54bb48:
    // 0x54bb48: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x54bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_54bb4c:
    // 0x54bb4c: 0xa2220194  sb          $v0, 0x194($s1)
    ctx->pc = 0x54bb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 2));
label_54bb50:
    // 0x54bb50: 0xae3201a4  sw          $s2, 0x1A4($s1)
    ctx->pc = 0x54bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 18));
label_54bb54:
    // 0x54bb54: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x54bb54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_54bb58:
    // 0x54bb58: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_54bb5c:
    if (ctx->pc == 0x54BB5Cu) {
        ctx->pc = 0x54BB5Cu;
            // 0x54bb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BB60u;
        goto label_54bb60;
    }
    ctx->pc = 0x54BB58u;
    {
        const bool branch_taken_0x54bb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bb58) {
            ctx->pc = 0x54BB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BB58u;
            // 0x54bb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BBBCu;
            goto label_54bbbc;
        }
    }
    ctx->pc = 0x54BB60u;
label_54bb60:
    // 0x54bb60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54bb64:
    // 0x54bb64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bb68:
    // 0x54bb68: 0x8c72a348  lw          $s2, -0x5CB8($v1)
    ctx->pc = 0x54bb68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_54bb6c:
    // 0x54bb6c: 0x3405cf08  ori         $a1, $zero, 0xCF08
    ctx->pc = 0x54bb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
label_54bb70:
    // 0x54bb70: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x54bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_54bb74:
    // 0x54bb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54bb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bb78:
    // 0x54bb78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54bb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bb7c:
    // 0x54bb7c: 0xc0b3a28  jal         func_2CE8A0
label_54bb80:
    if (ctx->pc == 0x54BB80u) {
        ctx->pc = 0x54BB80u;
            // 0x54bb80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BB84u;
        goto label_54bb84;
    }
    ctx->pc = 0x54BB7Cu;
    SET_GPR_U32(ctx, 31, 0x54BB84u);
    ctx->pc = 0x54BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BB7Cu;
            // 0x54bb80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB84u; }
        if (ctx->pc != 0x54BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB84u; }
        if (ctx->pc != 0x54BB84u) { return; }
    }
    ctx->pc = 0x54BB84u;
label_54bb84:
    // 0x54bb84: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x54bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_54bb88:
    // 0x54bb88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x54bb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54bb8c:
    // 0x54bb8c: 0x26260054  addiu       $a2, $s1, 0x54
    ctx->pc = 0x54bb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_54bb90:
    // 0x54bb90: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x54bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_54bb94:
    // 0x54bb94: 0xc0aa5d8  jal         func_2A9760
label_54bb98:
    if (ctx->pc == 0x54BB98u) {
        ctx->pc = 0x54BB98u;
            // 0x54bb98: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x54BB9Cu;
        goto label_54bb9c;
    }
    ctx->pc = 0x54BB94u;
    SET_GPR_U32(ctx, 31, 0x54BB9Cu);
    ctx->pc = 0x54BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BB94u;
            // 0x54bb98: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB9Cu; }
        if (ctx->pc != 0x54BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BB9Cu; }
        if (ctx->pc != 0x54BB9Cu) { return; }
    }
    ctx->pc = 0x54BB9Cu;
label_54bb9c:
    // 0x54bb9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bba0:
    // 0x54bba0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x54bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_54bba4:
    // 0x54bba4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54bba8:
    // 0x54bba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54bba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bbac:
    // 0x54bbac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54bbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bbb0:
    // 0x54bbb0: 0xc0fd020  jal         func_3F4080
label_54bbb4:
    if (ctx->pc == 0x54BBB4u) {
        ctx->pc = 0x54BBB4u;
            // 0x54bbb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BBB8u;
        goto label_54bbb8;
    }
    ctx->pc = 0x54BBB0u;
    SET_GPR_U32(ctx, 31, 0x54BBB8u);
    ctx->pc = 0x54BBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BBB0u;
            // 0x54bbb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BBB8u; }
        if (ctx->pc != 0x54BBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BBB8u; }
        if (ctx->pc != 0x54BBB8u) { return; }
    }
    ctx->pc = 0x54BBB8u;
label_54bbb8:
    // 0x54bbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54bbbc:
    // 0x54bbbc: 0xc13a97c  jal         func_4EA5F0
label_54bbc0:
    if (ctx->pc == 0x54BBC0u) {
        ctx->pc = 0x54BBC4u;
        goto label_54bbc4;
    }
    ctx->pc = 0x54BBBCu;
    SET_GPR_U32(ctx, 31, 0x54BBC4u);
    ctx->pc = 0x4EA5F0u;
    if (runtime->hasFunction(0x4EA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x4EA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BBC4u; }
        if (ctx->pc != 0x54BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EA5F0_0x4ea5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BBC4u; }
        if (ctx->pc != 0x54BBC4u) { return; }
    }
    ctx->pc = 0x54BBC4u;
label_54bbc4:
    // 0x54bbc4: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x54bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
label_54bbc8:
    // 0x54bbc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54bbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54bbcc:
    // 0x54bbcc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54bbccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54bbd0:
    // 0x54bbd0: 0x320f809  jalr        $t9
label_54bbd4:
    if (ctx->pc == 0x54BBD4u) {
        ctx->pc = 0x54BBD4u;
            // 0x54bbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BBD8u;
        goto label_54bbd8;
    }
    ctx->pc = 0x54BBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BBD8u);
        ctx->pc = 0x54BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BBD0u;
            // 0x54bbd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BBD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BBD8u; }
            if (ctx->pc != 0x54BBD8u) { return; }
        }
        }
    }
    ctx->pc = 0x54BBD8u;
label_54bbd8:
    // 0x54bbd8: 0x10000166  b           . + 4 + (0x166 << 2)
label_54bbdc:
    if (ctx->pc == 0x54BBDCu) {
        ctx->pc = 0x54BBE0u;
        goto label_54bbe0;
    }
    ctx->pc = 0x54BBD8u;
    {
        const bool branch_taken_0x54bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bbd8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BBE0u;
label_54bbe0:
    // 0x54bbe0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54bbe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54bbe4:
    // 0x54bbe4: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_54bbe8:
    if (ctx->pc == 0x54BBE8u) {
        ctx->pc = 0x54BBE8u;
            // 0x54bbe8: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x54BBECu;
        goto label_54bbec;
    }
    ctx->pc = 0x54BBE4u;
    {
        const bool branch_taken_0x54bbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bbe4) {
            ctx->pc = 0x54BBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BBE4u;
            // 0x54bbe8: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BC18u;
            goto label_54bc18;
        }
    }
    ctx->pc = 0x54BBECu;
label_54bbec:
    // 0x54bbec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bbecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bbf0:
    // 0x54bbf0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54bbf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54bbf4:
    // 0x54bbf4: 0x320f809  jalr        $t9
label_54bbf8:
    if (ctx->pc == 0x54BBF8u) {
        ctx->pc = 0x54BBF8u;
            // 0x54bbf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54BBFCu;
        goto label_54bbfc;
    }
    ctx->pc = 0x54BBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BBFCu);
        ctx->pc = 0x54BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BBF4u;
            // 0x54bbf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BBFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BBFCu; }
            if (ctx->pc != 0x54BBFCu) { return; }
        }
        }
    }
    ctx->pc = 0x54BBFCu;
label_54bbfc:
    // 0x54bbfc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x54bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_54bc00:
    // 0x54bc00: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x54bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_54bc04:
    // 0x54bc04: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x54bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_54bc08:
    // 0x54bc08: 0xc057b7c  jal         func_15EDF0
label_54bc0c:
    if (ctx->pc == 0x54BC0Cu) {
        ctx->pc = 0x54BC0Cu;
            // 0x54bc0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x54BC10u;
        goto label_54bc10;
    }
    ctx->pc = 0x54BC08u;
    SET_GPR_U32(ctx, 31, 0x54BC10u);
    ctx->pc = 0x54BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC08u;
            // 0x54bc0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC10u; }
        if (ctx->pc != 0x54BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC10u; }
        if (ctx->pc != 0x54BC10u) { return; }
    }
    ctx->pc = 0x54BC10u;
label_54bc10:
    // 0x54bc10: 0x10000158  b           . + 4 + (0x158 << 2)
label_54bc14:
    if (ctx->pc == 0x54BC14u) {
        ctx->pc = 0x54BC14u;
            // 0x54bc14: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x54BC18u;
        goto label_54bc18;
    }
    ctx->pc = 0x54BC10u;
    {
        const bool branch_taken_0x54bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC10u;
            // 0x54bc14: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bc10) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BC18u;
label_54bc18:
    // 0x54bc18: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x54bc18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_54bc1c:
    // 0x54bc1c: 0x14600155  bnez        $v1, . + 4 + (0x155 << 2)
label_54bc20:
    if (ctx->pc == 0x54BC20u) {
        ctx->pc = 0x54BC24u;
        goto label_54bc24;
    }
    ctx->pc = 0x54BC1Cu;
    {
        const bool branch_taken_0x54bc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bc1c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BC24u;
label_54bc24:
    // 0x54bc24: 0x90a2005d  lbu         $v0, 0x5D($a1)
    ctx->pc = 0x54bc24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
label_54bc28:
    // 0x54bc28: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_54bc2c:
    if (ctx->pc == 0x54BC2Cu) {
        ctx->pc = 0x54BC2Cu;
            // 0x54bc2c: 0x92020058  lbu         $v0, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x54BC30u;
        goto label_54bc30;
    }
    ctx->pc = 0x54BC28u;
    {
        const bool branch_taken_0x54bc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bc28) {
            ctx->pc = 0x54BC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC28u;
            // 0x54bc2c: 0x92020058  lbu         $v0, 0x58($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BC9Cu;
            goto label_54bc9c;
        }
    }
    ctx->pc = 0x54BC30u;
label_54bc30:
    // 0x54bc30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bc34:
    // 0x54bc34: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54bc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54bc38:
    // 0x54bc38: 0x320f809  jalr        $t9
label_54bc3c:
    if (ctx->pc == 0x54BC3Cu) {
        ctx->pc = 0x54BC40u;
        goto label_54bc40;
    }
    ctx->pc = 0x54BC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BC40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BC40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BC40u; }
            if (ctx->pc != 0x54BC40u) { return; }
        }
        }
    }
    ctx->pc = 0x54BC40u;
label_54bc40:
    // 0x54bc40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54bc44:
    // 0x54bc44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bc48:
    // 0x54bc48: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x54bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_54bc4c:
    // 0x54bc4c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x54bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_54bc50:
    // 0x54bc50: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x54bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54bc54:
    // 0x54bc54: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x54bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_54bc58:
    // 0x54bc58: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x54bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_54bc5c:
    // 0x54bc5c: 0x24630410  addiu       $v1, $v1, 0x410
    ctx->pc = 0x54bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1040));
label_54bc60:
    // 0x54bc60: 0xc040180  jal         func_100600
label_54bc64:
    if (ctx->pc == 0x54BC64u) {
        ctx->pc = 0x54BC64u;
            // 0x54bc64: 0xac4303ec  sw          $v1, 0x3EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1004), GPR_U32(ctx, 3));
        ctx->pc = 0x54BC68u;
        goto label_54bc68;
    }
    ctx->pc = 0x54BC60u;
    SET_GPR_U32(ctx, 31, 0x54BC68u);
    ctx->pc = 0x54BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC60u;
            // 0x54bc64: 0xac4303ec  sw          $v1, 0x3EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC68u; }
        if (ctx->pc != 0x54BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC68u; }
        if (ctx->pc != 0x54BC68u) { return; }
    }
    ctx->pc = 0x54BC68u;
label_54bc68:
    // 0x54bc68: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_54bc6c:
    if (ctx->pc == 0x54BC6Cu) {
        ctx->pc = 0x54BC6Cu;
            // 0x54bc6c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x54BC70u;
        goto label_54bc70;
    }
    ctx->pc = 0x54BC68u;
    {
        const bool branch_taken_0x54bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bc68) {
            ctx->pc = 0x54BC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC68u;
            // 0x54bc6c: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BCF4u;
            goto label_54bcf4;
        }
    }
    ctx->pc = 0x54BC70u;
label_54bc70:
    // 0x54bc70: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x54bc70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_54bc74:
    // 0x54bc74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54bc78:
    // 0x54bc78: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x54bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_54bc7c:
    // 0x54bc7c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54bc80:
    // 0x54bc80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x54bc80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54bc84:
    // 0x54bc84: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x54bc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54bc88:
    // 0x54bc88: 0xc159754  jal         func_565D50
label_54bc8c:
    if (ctx->pc == 0x54BC8Cu) {
        ctx->pc = 0x54BC8Cu;
            // 0x54bc8c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BC90u;
        goto label_54bc90;
    }
    ctx->pc = 0x54BC88u;
    SET_GPR_U32(ctx, 31, 0x54BC90u);
    ctx->pc = 0x54BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC88u;
            // 0x54bc8c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565D50u;
    if (runtime->hasFunction(0x565D50u)) {
        auto targetFn = runtime->lookupFunction(0x565D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC90u; }
        if (ctx->pc != 0x54BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565D50_0x565d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BC90u; }
        if (ctx->pc != 0x54BC90u) { return; }
    }
    ctx->pc = 0x54BC90u;
label_54bc90:
    // 0x54bc90: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x54bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_54bc94:
    // 0x54bc94: 0x10000017  b           . + 4 + (0x17 << 2)
label_54bc98:
    if (ctx->pc == 0x54BC98u) {
        ctx->pc = 0x54BC9Cu;
        goto label_54bc9c;
    }
    ctx->pc = 0x54BC94u;
    {
        const bool branch_taken_0x54bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bc94) {
            ctx->pc = 0x54BCF4u;
            goto label_54bcf4;
        }
    }
    ctx->pc = 0x54BC9Cu;
label_54bc9c:
    // 0x54bc9c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_54bca0:
    if (ctx->pc == 0x54BCA0u) {
        ctx->pc = 0x54BCA0u;
            // 0x54bca0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x54BCA4u;
        goto label_54bca4;
    }
    ctx->pc = 0x54BC9Cu;
    {
        const bool branch_taken_0x54bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bc9c) {
            ctx->pc = 0x54BCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BC9Cu;
            // 0x54bca0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BCBCu;
            goto label_54bcbc;
        }
    }
    ctx->pc = 0x54BCA4u;
label_54bca4:
    // 0x54bca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bca8:
    // 0x54bca8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54bca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54bcac:
    // 0x54bcac: 0x320f809  jalr        $t9
label_54bcb0:
    if (ctx->pc == 0x54BCB0u) {
        ctx->pc = 0x54BCB0u;
            // 0x54bcb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54BCB4u;
        goto label_54bcb4;
    }
    ctx->pc = 0x54BCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BCB4u);
        ctx->pc = 0x54BCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BCACu;
            // 0x54bcb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BCB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BCB4u; }
            if (ctx->pc != 0x54BCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x54BCB4u;
label_54bcb4:
    // 0x54bcb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_54bcb8:
    if (ctx->pc == 0x54BCB8u) {
        ctx->pc = 0x54BCB8u;
            // 0x54bcb8: 0xa2000058  sb          $zero, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x54BCBCu;
        goto label_54bcbc;
    }
    ctx->pc = 0x54BCB4u;
    {
        const bool branch_taken_0x54bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BCB4u;
            // 0x54bcb8: 0xa2000058  sb          $zero, 0x58($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bcb4) {
            ctx->pc = 0x54BCC8u;
            goto label_54bcc8;
        }
    }
    ctx->pc = 0x54BCBCu;
label_54bcbc:
    // 0x54bcbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54bcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54bcc0:
    // 0x54bcc0: 0x320f809  jalr        $t9
label_54bcc4:
    if (ctx->pc == 0x54BCC4u) {
        ctx->pc = 0x54BCC4u;
            // 0x54bcc4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x54BCC8u;
        goto label_54bcc8;
    }
    ctx->pc = 0x54BCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BCC8u);
        ctx->pc = 0x54BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BCC0u;
            // 0x54bcc4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BCC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BCC8u; }
            if (ctx->pc != 0x54BCC8u) { return; }
        }
        }
    }
    ctx->pc = 0x54BCC8u;
label_54bcc8:
    // 0x54bcc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54bccc:
    // 0x54bccc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54bcd0:
    // 0x54bcd0: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54bcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54bcd4:
    // 0x54bcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54bcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bcd8:
    // 0x54bcd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bcdc:
    // 0x54bcdc: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x54bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_54bce0:
    // 0x54bce0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bce4:
    // 0x54bce4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x54bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_54bce8:
    // 0x54bce8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x54bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_54bcec:
    // 0x54bcec: 0xc04a576  jal         func_1295D8
label_54bcf0:
    if (ctx->pc == 0x54BCF0u) {
        ctx->pc = 0x54BCF0u;
            // 0x54bcf0: 0x24440410  addiu       $a0, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->pc = 0x54BCF4u;
        goto label_54bcf4;
    }
    ctx->pc = 0x54BCECu;
    SET_GPR_U32(ctx, 31, 0x54BCF4u);
    ctx->pc = 0x54BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BCECu;
            // 0x54bcf0: 0x24440410  addiu       $a0, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BCF4u; }
        if (ctx->pc != 0x54BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BCF4u; }
        if (ctx->pc != 0x54BCF4u) { return; }
    }
    ctx->pc = 0x54BCF4u;
label_54bcf4:
    // 0x54bcf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x54bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_54bcf8:
    // 0x54bcf8: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x54bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_54bcfc:
    // 0x54bcfc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x54bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_54bd00:
    // 0x54bd00: 0xc057b7c  jal         func_15EDF0
label_54bd04:
    if (ctx->pc == 0x54BD04u) {
        ctx->pc = 0x54BD04u;
            // 0x54bd04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x54BD08u;
        goto label_54bd08;
    }
    ctx->pc = 0x54BD00u;
    SET_GPR_U32(ctx, 31, 0x54BD08u);
    ctx->pc = 0x54BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD00u;
            // 0x54bd04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BD08u; }
        if (ctx->pc != 0x54BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BD08u; }
        if (ctx->pc != 0x54BD08u) { return; }
    }
    ctx->pc = 0x54BD08u;
label_54bd08:
    // 0x54bd08: 0x1000011a  b           . + 4 + (0x11A << 2)
label_54bd0c:
    if (ctx->pc == 0x54BD0Cu) {
        ctx->pc = 0x54BD0Cu;
            // 0x54bd0c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x54BD10u;
        goto label_54bd10;
    }
    ctx->pc = 0x54BD08u;
    {
        const bool branch_taken_0x54bd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD08u;
            // 0x54bd0c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bd08) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BD10u;
label_54bd10:
    // 0x54bd10: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x54bd10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54bd14:
    // 0x54bd14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_54bd18:
    if (ctx->pc == 0x54BD18u) {
        ctx->pc = 0x54BD18u;
            // 0x54bd18: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x54BD1Cu;
        goto label_54bd1c;
    }
    ctx->pc = 0x54BD14u;
    {
        const bool branch_taken_0x54bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bd14) {
            ctx->pc = 0x54BD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD14u;
            // 0x54bd18: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BD48u;
            goto label_54bd48;
        }
    }
    ctx->pc = 0x54BD1Cu;
label_54bd1c:
    // 0x54bd1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bd20:
    // 0x54bd20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54bd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54bd24:
    // 0x54bd24: 0x320f809  jalr        $t9
label_54bd28:
    if (ctx->pc == 0x54BD28u) {
        ctx->pc = 0x54BD28u;
            // 0x54bd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54BD2Cu;
        goto label_54bd2c;
    }
    ctx->pc = 0x54BD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BD2Cu);
        ctx->pc = 0x54BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD24u;
            // 0x54bd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BD2Cu; }
            if (ctx->pc != 0x54BD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54BD2Cu;
label_54bd2c:
    // 0x54bd2c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54bd30:
    // 0x54bd30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bd34:
    // 0x54bd34: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54bd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54bd38:
    // 0x54bd38: 0x320f809  jalr        $t9
label_54bd3c:
    if (ctx->pc == 0x54BD3Cu) {
        ctx->pc = 0x54BD40u;
        goto label_54bd40;
    }
    ctx->pc = 0x54BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BD40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BD40u; }
            if (ctx->pc != 0x54BD40u) { return; }
        }
        }
    }
    ctx->pc = 0x54BD40u;
label_54bd40:
    // 0x54bd40: 0x1000010c  b           . + 4 + (0x10C << 2)
label_54bd44:
    if (ctx->pc == 0x54BD44u) {
        ctx->pc = 0x54BD48u;
        goto label_54bd48;
    }
    ctx->pc = 0x54BD40u;
    {
        const bool branch_taken_0x54bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bd40) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BD48u;
label_54bd48:
    // 0x54bd48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bd4c:
    // 0x54bd4c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54bd4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54bd50:
    // 0x54bd50: 0x320f809  jalr        $t9
label_54bd54:
    if (ctx->pc == 0x54BD54u) {
        ctx->pc = 0x54BD58u;
        goto label_54bd58;
    }
    ctx->pc = 0x54BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BD58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BD58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BD58u; }
            if (ctx->pc != 0x54BD58u) { return; }
        }
        }
    }
    ctx->pc = 0x54BD58u;
label_54bd58:
    // 0x54bd58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54bd5c:
    // 0x54bd5c: 0x5043004b  beql        $v0, $v1, . + 4 + (0x4B << 2)
label_54bd60:
    if (ctx->pc == 0x54BD60u) {
        ctx->pc = 0x54BD60u;
            // 0x54bd60: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54BD64u;
        goto label_54bd64;
    }
    ctx->pc = 0x54BD5Cu;
    {
        const bool branch_taken_0x54bd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54bd5c) {
            ctx->pc = 0x54BD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD5Cu;
            // 0x54bd60: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BE8Cu;
            goto label_54be8c;
        }
    }
    ctx->pc = 0x54BD64u;
label_54bd64:
    // 0x54bd64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x54bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54bd68:
    // 0x54bd68: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_54bd6c:
    if (ctx->pc == 0x54BD6Cu) {
        ctx->pc = 0x54BD6Cu;
            // 0x54bd6c: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->pc = 0x54BD70u;
        goto label_54bd70;
    }
    ctx->pc = 0x54BD68u;
    {
        const bool branch_taken_0x54bd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x54bd68) {
            ctx->pc = 0x54BD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD68u;
            // 0x54bd6c: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BD78u;
            goto label_54bd78;
        }
    }
    ctx->pc = 0x54BD70u;
label_54bd70:
    // 0x54bd70: 0x10000100  b           . + 4 + (0x100 << 2)
label_54bd74:
    if (ctx->pc == 0x54BD74u) {
        ctx->pc = 0x54BD78u;
        goto label_54bd78;
    }
    ctx->pc = 0x54BD70u;
    {
        const bool branch_taken_0x54bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bd70) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BD78u;
label_54bd78:
    // 0x54bd78: 0xc040180  jal         func_100600
label_54bd7c:
    if (ctx->pc == 0x54BD7Cu) {
        ctx->pc = 0x54BD80u;
        goto label_54bd80;
    }
    ctx->pc = 0x54BD78u;
    SET_GPR_U32(ctx, 31, 0x54BD80u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BD80u; }
        if (ctx->pc != 0x54BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BD80u; }
        if (ctx->pc != 0x54BD80u) { return; }
    }
    ctx->pc = 0x54BD80u;
label_54bd80:
    // 0x54bd80: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_54bd84:
    if (ctx->pc == 0x54BD84u) {
        ctx->pc = 0x54BD84u;
            // 0x54bd84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BD88u;
        goto label_54bd88;
    }
    ctx->pc = 0x54BD80u;
    {
        const bool branch_taken_0x54bd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BD80u;
            // 0x54bd84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bd80) {
            ctx->pc = 0x54BE50u;
            goto label_54be50;
        }
    }
    ctx->pc = 0x54BD88u;
label_54bd88:
    // 0x54bd88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bd8c:
    // 0x54bd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54bd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54bd90:
    // 0x54bd90: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bd94:
    // 0x54bd94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x54bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54bd98:
    // 0x54bd98: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x54bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_54bd9c:
    // 0x54bd9c: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x54bd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_54bda0:
    // 0x54bda0: 0xc10ca68  jal         func_4329A0
label_54bda4:
    if (ctx->pc == 0x54BDA4u) {
        ctx->pc = 0x54BDA4u;
            // 0x54bda4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x54BDA8u;
        goto label_54bda8;
    }
    ctx->pc = 0x54BDA0u;
    SET_GPR_U32(ctx, 31, 0x54BDA8u);
    ctx->pc = 0x54BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BDA0u;
            // 0x54bda4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BDA8u; }
        if (ctx->pc != 0x54BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BDA8u; }
        if (ctx->pc != 0x54BDA8u) { return; }
    }
    ctx->pc = 0x54BDA8u;
label_54bda8:
    // 0x54bda8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x54bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_54bdac:
    // 0x54bdac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x54bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_54bdb0:
    // 0x54bdb0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x54bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_54bdb4:
    // 0x54bdb4: 0x246379d0  addiu       $v1, $v1, 0x79D0
    ctx->pc = 0x54bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31184));
label_54bdb8:
    // 0x54bdb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x54bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_54bdbc:
    // 0x54bdbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x54bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_54bdc0:
    // 0x54bdc0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x54bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_54bdc4:
    // 0x54bdc4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x54bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_54bdc8:
    // 0x54bdc8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x54bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_54bdcc:
    // 0x54bdcc: 0xa220005c  sb          $zero, 0x5C($s1)
    ctx->pc = 0x54bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 0));
label_54bdd0:
    // 0x54bdd0: 0xa220005d  sb          $zero, 0x5D($s1)
    ctx->pc = 0x54bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 93), (uint8_t)GPR_U32(ctx, 0));
label_54bdd4:
    // 0x54bdd4: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x54bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_54bdd8:
    // 0x54bdd8: 0xa2220194  sb          $v0, 0x194($s1)
    ctx->pc = 0x54bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 2));
label_54bddc:
    // 0x54bddc: 0xae3201a4  sw          $s2, 0x1A4($s1)
    ctx->pc = 0x54bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 18));
label_54bde0:
    // 0x54bde0: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x54bde0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_54bde4:
    // 0x54bde4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_54bde8:
    if (ctx->pc == 0x54BDE8u) {
        ctx->pc = 0x54BDE8u;
            // 0x54bde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BDECu;
        goto label_54bdec;
    }
    ctx->pc = 0x54BDE4u;
    {
        const bool branch_taken_0x54bde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bde4) {
            ctx->pc = 0x54BDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BDE4u;
            // 0x54bde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BE48u;
            goto label_54be48;
        }
    }
    ctx->pc = 0x54BDECu;
label_54bdec:
    // 0x54bdec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x54bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_54bdf0:
    // 0x54bdf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bdf4:
    // 0x54bdf4: 0x8c72a348  lw          $s2, -0x5CB8($v1)
    ctx->pc = 0x54bdf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_54bdf8:
    // 0x54bdf8: 0x3405cf08  ori         $a1, $zero, 0xCF08
    ctx->pc = 0x54bdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
label_54bdfc:
    // 0x54bdfc: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x54bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_54be00:
    // 0x54be00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54be00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54be04:
    // 0x54be04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54be04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54be08:
    // 0x54be08: 0xc0b3a28  jal         func_2CE8A0
label_54be0c:
    if (ctx->pc == 0x54BE0Cu) {
        ctx->pc = 0x54BE0Cu;
            // 0x54be0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BE10u;
        goto label_54be10;
    }
    ctx->pc = 0x54BE08u;
    SET_GPR_U32(ctx, 31, 0x54BE10u);
    ctx->pc = 0x54BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE08u;
            // 0x54be0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE10u; }
        if (ctx->pc != 0x54BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE10u; }
        if (ctx->pc != 0x54BE10u) { return; }
    }
    ctx->pc = 0x54BE10u;
label_54be10:
    // 0x54be10: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x54be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_54be14:
    // 0x54be14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x54be14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54be18:
    // 0x54be18: 0x26260054  addiu       $a2, $s1, 0x54
    ctx->pc = 0x54be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_54be1c:
    // 0x54be1c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x54be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_54be20:
    // 0x54be20: 0xc0aa5d8  jal         func_2A9760
label_54be24:
    if (ctx->pc == 0x54BE24u) {
        ctx->pc = 0x54BE24u;
            // 0x54be24: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x54BE28u;
        goto label_54be28;
    }
    ctx->pc = 0x54BE20u;
    SET_GPR_U32(ctx, 31, 0x54BE28u);
    ctx->pc = 0x54BE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE20u;
            // 0x54be24: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE28u; }
        if (ctx->pc != 0x54BE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE28u; }
        if (ctx->pc != 0x54BE28u) { return; }
    }
    ctx->pc = 0x54BE28u;
label_54be28:
    // 0x54be28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54be28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54be2c:
    // 0x54be2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x54be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_54be30:
    // 0x54be30: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54be34:
    // 0x54be34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54be34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54be38:
    // 0x54be38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54be38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54be3c:
    // 0x54be3c: 0xc0fd020  jal         func_3F4080
label_54be40:
    if (ctx->pc == 0x54BE40u) {
        ctx->pc = 0x54BE40u;
            // 0x54be40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BE44u;
        goto label_54be44;
    }
    ctx->pc = 0x54BE3Cu;
    SET_GPR_U32(ctx, 31, 0x54BE44u);
    ctx->pc = 0x54BE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE3Cu;
            // 0x54be40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE44u; }
        if (ctx->pc != 0x54BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE44u; }
        if (ctx->pc != 0x54BE44u) { return; }
    }
    ctx->pc = 0x54BE44u;
label_54be44:
    // 0x54be44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54be44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54be48:
    // 0x54be48: 0xc13a97c  jal         func_4EA5F0
label_54be4c:
    if (ctx->pc == 0x54BE4Cu) {
        ctx->pc = 0x54BE50u;
        goto label_54be50;
    }
    ctx->pc = 0x54BE48u;
    SET_GPR_U32(ctx, 31, 0x54BE50u);
    ctx->pc = 0x4EA5F0u;
    if (runtime->hasFunction(0x4EA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x4EA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE50u; }
        if (ctx->pc != 0x54BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EA5F0_0x4ea5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BE50u; }
        if (ctx->pc != 0x54BE50u) { return; }
    }
    ctx->pc = 0x54BE50u;
label_54be50:
    // 0x54be50: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x54be50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
label_54be54:
    // 0x54be54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54be58:
    // 0x54be58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54be58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54be5c:
    // 0x54be5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54be5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54be60:
    // 0x54be60: 0x320f809  jalr        $t9
label_54be64:
    if (ctx->pc == 0x54BE64u) {
        ctx->pc = 0x54BE64u;
            // 0x54be64: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x54BE68u;
        goto label_54be68;
    }
    ctx->pc = 0x54BE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BE68u);
        ctx->pc = 0x54BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE60u;
            // 0x54be64: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BE68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BE68u; }
            if (ctx->pc != 0x54BE68u) { return; }
        }
        }
    }
    ctx->pc = 0x54BE68u;
label_54be68:
    // 0x54be68: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54be6c:
    // 0x54be6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54be6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54be70:
    // 0x54be70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54be70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54be74:
    // 0x54be74: 0x320f809  jalr        $t9
label_54be78:
    if (ctx->pc == 0x54BE78u) {
        ctx->pc = 0x54BE7Cu;
        goto label_54be7c;
    }
    ctx->pc = 0x54BE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BE7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BE7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BE7Cu; }
            if (ctx->pc != 0x54BE7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54BE7Cu;
label_54be7c:
    // 0x54be7c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54be80:
    // 0x54be80: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x54be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_54be84:
    // 0x54be84: 0x100000bb  b           . + 4 + (0xBB << 2)
label_54be88:
    if (ctx->pc == 0x54BE88u) {
        ctx->pc = 0x54BE88u;
            // 0x54be88: 0xac6003ec  sw          $zero, 0x3EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 0));
        ctx->pc = 0x54BE8Cu;
        goto label_54be8c;
    }
    ctx->pc = 0x54BE84u;
    {
        const bool branch_taken_0x54be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE84u;
            // 0x54be88: 0xac6003ec  sw          $zero, 0x3EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54be84) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BE8Cu;
label_54be8c:
    // 0x54be8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54be8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54be90:
    // 0x54be90: 0x320f809  jalr        $t9
label_54be94:
    if (ctx->pc == 0x54BE94u) {
        ctx->pc = 0x54BE94u;
            // 0x54be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BE98u;
        goto label_54be98;
    }
    ctx->pc = 0x54BE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BE98u);
        ctx->pc = 0x54BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BE90u;
            // 0x54be94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BE98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BE98u; }
            if (ctx->pc != 0x54BE98u) { return; }
        }
        }
    }
    ctx->pc = 0x54BE98u;
label_54be98:
    // 0x54be98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54be9c:
    // 0x54be9c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x54be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54bea0:
    // 0x54bea0: 0xa043b6d8  sb          $v1, -0x4928($v0)
    ctx->pc = 0x54bea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 3));
label_54bea4:
    // 0x54bea4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x54bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_54bea8:
    // 0x54bea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54beac:
    // 0x54beac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54beacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54beb0:
    // 0x54beb0: 0x320f809  jalr        $t9
label_54beb4:
    if (ctx->pc == 0x54BEB4u) {
        ctx->pc = 0x54BEB8u;
        goto label_54beb8;
    }
    ctx->pc = 0x54BEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BEB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BEB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BEB8u; }
            if (ctx->pc != 0x54BEB8u) { return; }
        }
        }
    }
    ctx->pc = 0x54BEB8u;
label_54beb8:
    // 0x54beb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x54beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_54bebc:
    // 0x54bebc: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x54bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_54bec0:
    // 0x54bec0: 0x100000ac  b           . + 4 + (0xAC << 2)
label_54bec4:
    if (ctx->pc == 0x54BEC4u) {
        ctx->pc = 0x54BEC4u;
            // 0x54bec4: 0xac6003ec  sw          $zero, 0x3EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 0));
        ctx->pc = 0x54BEC8u;
        goto label_54bec8;
    }
    ctx->pc = 0x54BEC0u;
    {
        const bool branch_taken_0x54bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BEC0u;
            // 0x54bec4: 0xac6003ec  sw          $zero, 0x3EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bec0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BEC8u;
label_54bec8:
    // 0x54bec8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54bec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54becc:
    // 0x54becc: 0x146000a9  bnez        $v1, . + 4 + (0xA9 << 2)
label_54bed0:
    if (ctx->pc == 0x54BED0u) {
        ctx->pc = 0x54BED4u;
        goto label_54bed4;
    }
    ctx->pc = 0x54BECCu;
    {
        const bool branch_taken_0x54becc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54becc) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BED4u;
label_54bed4:
    // 0x54bed4: 0xc040180  jal         func_100600
label_54bed8:
    if (ctx->pc == 0x54BED8u) {
        ctx->pc = 0x54BED8u;
            // 0x54bed8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x54BEDCu;
        goto label_54bedc;
    }
    ctx->pc = 0x54BED4u;
    SET_GPR_U32(ctx, 31, 0x54BEDCu);
    ctx->pc = 0x54BED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BED4u;
            // 0x54bed8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BEDCu; }
        if (ctx->pc != 0x54BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BEDCu; }
        if (ctx->pc != 0x54BEDCu) { return; }
    }
    ctx->pc = 0x54BEDCu;
label_54bedc:
    // 0x54bedc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_54bee0:
    if (ctx->pc == 0x54BEE0u) {
        ctx->pc = 0x54BEE0u;
            // 0x54bee0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x54BEE4u;
        goto label_54bee4;
    }
    ctx->pc = 0x54BEDCu;
    {
        const bool branch_taken_0x54bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bedc) {
            ctx->pc = 0x54BEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BEDCu;
            // 0x54bee0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BF00u;
            goto label_54bf00;
        }
    }
    ctx->pc = 0x54BEE4u;
label_54bee4:
    // 0x54bee4: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x54bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54bee8:
    // 0x54bee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54beec:
    // 0x54beec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x54beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54bef0:
    // 0x54bef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x54bef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54bef4:
    // 0x54bef4: 0xc151190  jal         func_544640
label_54bef8:
    if (ctx->pc == 0x54BEF8u) {
        ctx->pc = 0x54BEF8u;
            // 0x54bef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BEFCu;
        goto label_54befc;
    }
    ctx->pc = 0x54BEF4u;
    SET_GPR_U32(ctx, 31, 0x54BEFCu);
    ctx->pc = 0x54BEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BEF4u;
            // 0x54bef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BEFCu; }
        if (ctx->pc != 0x54BEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BEFCu; }
        if (ctx->pc != 0x54BEFCu) { return; }
    }
    ctx->pc = 0x54BEFCu;
label_54befc:
    // 0x54befc: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x54befcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_54bf00:
    // 0x54bf00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bf04:
    // 0x54bf04: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bf08:
    // 0x54bf08: 0xc1206b0  jal         func_481AC0
label_54bf0c:
    if (ctx->pc == 0x54BF0Cu) {
        ctx->pc = 0x54BF0Cu;
            // 0x54bf0c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x54BF10u;
        goto label_54bf10;
    }
    ctx->pc = 0x54BF08u;
    SET_GPR_U32(ctx, 31, 0x54BF10u);
    ctx->pc = 0x54BF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF08u;
            // 0x54bf0c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BF10u; }
        if (ctx->pc != 0x54BF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BF10u; }
        if (ctx->pc != 0x54BF10u) { return; }
    }
    ctx->pc = 0x54BF10u;
label_54bf10:
    // 0x54bf10: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x54bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54bf14:
    // 0x54bf14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bf18:
    // 0x54bf18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54bf18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54bf1c:
    // 0x54bf1c: 0x320f809  jalr        $t9
label_54bf20:
    if (ctx->pc == 0x54BF20u) {
        ctx->pc = 0x54BF20u;
            // 0x54bf20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BF24u;
        goto label_54bf24;
    }
    ctx->pc = 0x54BF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BF24u);
        ctx->pc = 0x54BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF1Cu;
            // 0x54bf20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BF24u; }
            if (ctx->pc != 0x54BF24u) { return; }
        }
        }
    }
    ctx->pc = 0x54BF24u;
label_54bf24:
    // 0x54bf24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bf28:
    // 0x54bf28: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x54bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54bf2c:
    // 0x54bf2c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bf30:
    // 0x54bf30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bf30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bf34:
    // 0x54bf34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x54bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54bf38:
    // 0x54bf38: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x54bf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_54bf3c:
    // 0x54bf3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x54bf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54bf40:
    // 0x54bf40: 0x320f809  jalr        $t9
label_54bf44:
    if (ctx->pc == 0x54BF44u) {
        ctx->pc = 0x54BF44u;
            // 0x54bf44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BF48u;
        goto label_54bf48;
    }
    ctx->pc = 0x54BF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BF48u);
        ctx->pc = 0x54BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF40u;
            // 0x54bf44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BF48u; }
            if (ctx->pc != 0x54BF48u) { return; }
        }
        }
    }
    ctx->pc = 0x54BF48u;
label_54bf48:
    // 0x54bf48: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x54bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54bf4c:
    // 0x54bf4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x54bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_54bf50:
    // 0x54bf50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54bf50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54bf54:
    // 0x54bf54: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x54bf54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_54bf58:
    // 0x54bf58: 0x320f809  jalr        $t9
label_54bf5c:
    if (ctx->pc == 0x54BF5Cu) {
        ctx->pc = 0x54BF5Cu;
            // 0x54bf5c: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x54BF60u;
        goto label_54bf60;
    }
    ctx->pc = 0x54BF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BF60u);
        ctx->pc = 0x54BF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF58u;
            // 0x54bf5c: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BF60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BF60u; }
            if (ctx->pc != 0x54BF60u) { return; }
        }
        }
    }
    ctx->pc = 0x54BF60u;
label_54bf60:
    // 0x54bf60: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x54bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_54bf64:
    // 0x54bf64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54bf68:
    // 0x54bf68: 0xa04300d1  sb          $v1, 0xD1($v0)
    ctx->pc = 0x54bf68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 209), (uint8_t)GPR_U32(ctx, 3));
label_54bf6c:
    // 0x54bf6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54bf6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54bf70:
    // 0x54bf70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54bf70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54bf74:
    // 0x54bf74: 0x320f809  jalr        $t9
label_54bf78:
    if (ctx->pc == 0x54BF78u) {
        ctx->pc = 0x54BF78u;
            // 0x54bf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54BF7Cu;
        goto label_54bf7c;
    }
    ctx->pc = 0x54BF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54BF7Cu);
        ctx->pc = 0x54BF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF74u;
            // 0x54bf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54BF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54BF7Cu; }
            if (ctx->pc != 0x54BF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54BF7Cu;
label_54bf7c:
    // 0x54bf7c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_54bf80:
    if (ctx->pc == 0x54BF80u) {
        ctx->pc = 0x54BF84u;
        goto label_54bf84;
    }
    ctx->pc = 0x54BF7Cu;
    {
        const bool branch_taken_0x54bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54bf7c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BF84u;
label_54bf84:
    // 0x54bf84: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x54bf84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54bf88:
    // 0x54bf88: 0x1480007a  bnez        $a0, . + 4 + (0x7A << 2)
label_54bf8c:
    if (ctx->pc == 0x54BF8Cu) {
        ctx->pc = 0x54BF90u;
        goto label_54bf90;
    }
    ctx->pc = 0x54BF88u;
    {
        const bool branch_taken_0x54bf88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x54bf88) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54BF90u;
label_54bf90:
    // 0x54bf90: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54bf94:
    // 0x54bf94: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x54bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_54bf98:
    // 0x54bf98: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x54bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955008)));
label_54bf9c:
    // 0x54bf9c: 0x5044000f  beql        $v0, $a0, . + 4 + (0xF << 2)
label_54bfa0:
    if (ctx->pc == 0x54BFA0u) {
        ctx->pc = 0x54BFA0u;
            // 0x54bfa0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x54BFA4u;
        goto label_54bfa4;
    }
    ctx->pc = 0x54BF9Cu;
    {
        const bool branch_taken_0x54bf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x54bf9c) {
            ctx->pc = 0x54BFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54BF9Cu;
            // 0x54bfa0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54BFDCu;
            goto label_54bfdc;
        }
    }
    ctx->pc = 0x54BFA4u;
label_54bfa4:
    // 0x54bfa4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x54bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_54bfa8:
    // 0x54bfa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bfac:
    // 0x54bfac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x54bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_54bfb0:
    // 0x54bfb0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bfb4:
    // 0x54bfb4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x54bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54bfb8:
    // 0x54bfb8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x54bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_54bfbc:
    // 0x54bfbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x54bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_54bfc0:
    // 0x54bfc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54bfc4:
    // 0x54bfc4: 0xc04a508  jal         func_129420
label_54bfc8:
    if (ctx->pc == 0x54BFC8u) {
        ctx->pc = 0x54BFC8u;
            // 0x54bfc8: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x54BFCCu;
        goto label_54bfcc;
    }
    ctx->pc = 0x54BFC4u;
    SET_GPR_U32(ctx, 31, 0x54BFCCu);
    ctx->pc = 0x54BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BFC4u;
            // 0x54bfc8: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BFCCu; }
        if (ctx->pc != 0x54BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54BFCCu; }
        if (ctx->pc != 0x54BFCCu) { return; }
    }
    ctx->pc = 0x54BFCCu;
label_54bfcc:
    // 0x54bfcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x54bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54bfd0:
    // 0x54bfd0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54bfd4:
    // 0x54bfd4: 0x1000000c  b           . + 4 + (0xC << 2)
label_54bfd8:
    if (ctx->pc == 0x54BFD8u) {
        ctx->pc = 0x54BFD8u;
            // 0x54bfd8: 0xa043cff0  sb          $v1, -0x3010($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x54BFDCu;
        goto label_54bfdc;
    }
    ctx->pc = 0x54BFD4u;
    {
        const bool branch_taken_0x54bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54BFD4u;
            // 0x54bfd8: 0xa043cff0  sb          $v1, -0x3010($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54bfd4) {
            ctx->pc = 0x54C008u;
            goto label_54c008;
        }
    }
    ctx->pc = 0x54BFDCu;
label_54bfdc:
    // 0x54bfdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54bfe0:
    // 0x54bfe0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x54bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_54bfe4:
    // 0x54bfe4: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54bfe8:
    // 0x54bfe8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x54bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54bfec:
    // 0x54bfec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x54bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_54bff0:
    // 0x54bff0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x54bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_54bff4:
    // 0x54bff4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x54bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54bff8:
    // 0x54bff8: 0xc04a508  jal         func_129420
label_54bffc:
    if (ctx->pc == 0x54BFFCu) {
        ctx->pc = 0x54BFFCu;
            // 0x54bffc: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x54C000u;
        goto label_54c000;
    }
    ctx->pc = 0x54BFF8u;
    SET_GPR_U32(ctx, 31, 0x54C000u);
    ctx->pc = 0x54BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54BFF8u;
            // 0x54bffc: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C000u; }
        if (ctx->pc != 0x54C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C000u; }
        if (ctx->pc != 0x54C000u) { return; }
    }
    ctx->pc = 0x54C000u;
label_54c000:
    // 0x54c000: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54c004:
    // 0x54c004: 0xa040cff0  sb          $zero, -0x3010($v0)
    ctx->pc = 0x54c004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954992), (uint8_t)GPR_U32(ctx, 0));
label_54c008:
    // 0x54c008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c00c:
    // 0x54c00c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54c010:
    // 0x54c010: 0xc151cc8  jal         func_547320
label_54c014:
    if (ctx->pc == 0x54C014u) {
        ctx->pc = 0x54C014u;
            // 0x54c014: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x54C018u;
        goto label_54c018;
    }
    ctx->pc = 0x54C010u;
    SET_GPR_U32(ctx, 31, 0x54C018u);
    ctx->pc = 0x54C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C010u;
            // 0x54c014: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547320u;
    if (runtime->hasFunction(0x547320u)) {
        auto targetFn = runtime->lookupFunction(0x547320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C018u; }
        if (ctx->pc != 0x54C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547320_0x547320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C018u; }
        if (ctx->pc != 0x54C018u) { return; }
    }
    ctx->pc = 0x54C018u;
label_54c018:
    // 0x54c018: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c01c:
    // 0x54c01c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_54c020:
    // 0x54c020: 0xc1206dc  jal         func_481B70
label_54c024:
    if (ctx->pc == 0x54C024u) {
        ctx->pc = 0x54C024u;
            // 0x54c024: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x54C028u;
        goto label_54c028;
    }
    ctx->pc = 0x54C020u;
    SET_GPR_U32(ctx, 31, 0x54C028u);
    ctx->pc = 0x54C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C020u;
            // 0x54c024: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481B70u;
    if (runtime->hasFunction(0x481B70u)) {
        auto targetFn = runtime->lookupFunction(0x481B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C028u; }
        if (ctx->pc != 0x54C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481B70_0x481b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C028u; }
        if (ctx->pc != 0x54C028u) { return; }
    }
    ctx->pc = 0x54C028u;
label_54c028:
    // 0x54c028: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c02c:
    // 0x54c02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c030:
    // 0x54c030: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54c030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54c034:
    // 0x54c034: 0x320f809  jalr        $t9
label_54c038:
    if (ctx->pc == 0x54C038u) {
        ctx->pc = 0x54C038u;
            // 0x54c038: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x54C03Cu;
        goto label_54c03c;
    }
    ctx->pc = 0x54C034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C03Cu);
        ctx->pc = 0x54C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C034u;
            // 0x54c038: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C03Cu; }
            if (ctx->pc != 0x54C03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54C03Cu;
label_54c03c:
    // 0x54c03c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_54c040:
    if (ctx->pc == 0x54C040u) {
        ctx->pc = 0x54C044u;
        goto label_54c044;
    }
    ctx->pc = 0x54C03Cu;
    {
        const bool branch_taken_0x54c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c03c) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C044u;
label_54c044:
    // 0x54c044: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x54c044u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_54c048:
    // 0x54c048: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_54c04c:
    if (ctx->pc == 0x54C04Cu) {
        ctx->pc = 0x54C050u;
        goto label_54c050;
    }
    ctx->pc = 0x54C048u;
    {
        const bool branch_taken_0x54c048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x54c048) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C050u;
label_54c050:
    // 0x54c050: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54c050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54c054:
    // 0x54c054: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54c054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54c058:
    // 0x54c058: 0x320f809  jalr        $t9
label_54c05c:
    if (ctx->pc == 0x54C05Cu) {
        ctx->pc = 0x54C060u;
        goto label_54c060;
    }
    ctx->pc = 0x54C058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C060u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C060u; }
            if (ctx->pc != 0x54C060u) { return; }
        }
        }
    }
    ctx->pc = 0x54C060u;
label_54c060:
    // 0x54c060: 0x10000044  b           . + 4 + (0x44 << 2)
label_54c064:
    if (ctx->pc == 0x54C064u) {
        ctx->pc = 0x54C068u;
        goto label_54c068;
    }
    ctx->pc = 0x54C060u;
    {
        const bool branch_taken_0x54c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c060) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C068u;
label_54c068:
    // 0x54c068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54c068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54c06c:
    // 0x54c06c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54c06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54c070:
    // 0x54c070: 0x320f809  jalr        $t9
label_54c074:
    if (ctx->pc == 0x54C074u) {
        ctx->pc = 0x54C078u;
        goto label_54c078;
    }
    ctx->pc = 0x54C070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C078u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C078u; }
            if (ctx->pc != 0x54C078u) { return; }
        }
        }
    }
    ctx->pc = 0x54C078u;
label_54c078:
    // 0x54c078: 0x1000003e  b           . + 4 + (0x3E << 2)
label_54c07c:
    if (ctx->pc == 0x54C07Cu) {
        ctx->pc = 0x54C080u;
        goto label_54c080;
    }
    ctx->pc = 0x54C078u;
    {
        const bool branch_taken_0x54c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c078) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C080u;
label_54c080:
    // 0x54c080: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54c080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54c084:
    // 0x54c084: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54c084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54c088:
    // 0x54c088: 0x320f809  jalr        $t9
label_54c08c:
    if (ctx->pc == 0x54C08Cu) {
        ctx->pc = 0x54C08Cu;
            // 0x54c08c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x54C090u;
        goto label_54c090;
    }
    ctx->pc = 0x54C088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C090u);
        ctx->pc = 0x54C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C088u;
            // 0x54c08c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C090u; }
            if (ctx->pc != 0x54C090u) { return; }
        }
        }
    }
    ctx->pc = 0x54C090u;
label_54c090:
    // 0x54c090: 0x92030056  lbu         $v1, 0x56($s0)
    ctx->pc = 0x54c090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
label_54c094:
    // 0x54c094: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_54c098:
    if (ctx->pc == 0x54C098u) {
        ctx->pc = 0x54C09Cu;
        goto label_54c09c;
    }
    ctx->pc = 0x54C094u;
    {
        const bool branch_taken_0x54c094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c094) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C09Cu;
label_54c09c:
    // 0x54c09c: 0x92030055  lbu         $v1, 0x55($s0)
    ctx->pc = 0x54c09cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_54c0a0:
    // 0x54c0a0: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_54c0a4:
    if (ctx->pc == 0x54C0A4u) {
        ctx->pc = 0x54C0A8u;
        goto label_54c0a8;
    }
    ctx->pc = 0x54C0A0u;
    {
        const bool branch_taken_0x54c0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c0a0) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C0A8u;
label_54c0a8:
    // 0x54c0a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c0ac:
    // 0x54c0ac: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54c0b0:
    // 0x54c0b0: 0xc0fcfec  jal         func_3F3FB0
label_54c0b4:
    if (ctx->pc == 0x54C0B4u) {
        ctx->pc = 0x54C0B4u;
            // 0x54c0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C0B8u;
        goto label_54c0b8;
    }
    ctx->pc = 0x54C0B0u;
    SET_GPR_U32(ctx, 31, 0x54C0B8u);
    ctx->pc = 0x54C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C0B0u;
            // 0x54c0b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3FB0u;
    if (runtime->hasFunction(0x3F3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0B8u; }
        if (ctx->pc != 0x54C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3FB0_0x3f3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0B8u; }
        if (ctx->pc != 0x54C0B8u) { return; }
    }
    ctx->pc = 0x54C0B8u;
label_54c0b8:
    // 0x54c0b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c0bc:
    // 0x54c0bc: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x54c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_54c0c0:
    // 0x54c0c0: 0xc0fcfec  jal         func_3F3FB0
label_54c0c4:
    if (ctx->pc == 0x54C0C4u) {
        ctx->pc = 0x54C0C4u;
            // 0x54c0c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x54C0C8u;
        goto label_54c0c8;
    }
    ctx->pc = 0x54C0C0u;
    SET_GPR_U32(ctx, 31, 0x54C0C8u);
    ctx->pc = 0x54C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C0C0u;
            // 0x54c0c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3FB0u;
    if (runtime->hasFunction(0x3F3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0C8u; }
        if (ctx->pc != 0x54C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3FB0_0x3f3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0C8u; }
        if (ctx->pc != 0x54C0C8u) { return; }
    }
    ctx->pc = 0x54C0C8u;
label_54c0c8:
    // 0x54c0c8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_54c0cc:
    if (ctx->pc == 0x54C0CCu) {
        ctx->pc = 0x54C0D0u;
        goto label_54c0d0;
    }
    ctx->pc = 0x54C0C8u;
    {
        const bool branch_taken_0x54c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c0c8) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C0D0u;
label_54c0d0:
    // 0x54c0d0: 0x92020056  lbu         $v0, 0x56($s0)
    ctx->pc = 0x54c0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
label_54c0d4:
    // 0x54c0d4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_54c0d8:
    if (ctx->pc == 0x54C0D8u) {
        ctx->pc = 0x54C0D8u;
            // 0x54c0d8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x54C0DCu;
        goto label_54c0dc;
    }
    ctx->pc = 0x54C0D4u;
    {
        const bool branch_taken_0x54c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c0d4) {
            ctx->pc = 0x54C0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C0D4u;
            // 0x54c0d8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C100u;
            goto label_54c100;
        }
    }
    ctx->pc = 0x54C0DCu;
label_54c0dc:
    // 0x54c0dc: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x54c0dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_54c0e0:
    // 0x54c0e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_54c0e4:
    if (ctx->pc == 0x54C0E4u) {
        ctx->pc = 0x54C0E8u;
        goto label_54c0e8;
    }
    ctx->pc = 0x54C0E0u;
    {
        const bool branch_taken_0x54c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c0e0) {
            ctx->pc = 0x54C0FCu;
            goto label_54c0fc;
        }
    }
    ctx->pc = 0x54C0E8u;
label_54c0e8:
    // 0x54c0e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54c0ec:
    // 0x54c0ec: 0xc0fcfe0  jal         func_3F3F80
label_54c0f0:
    if (ctx->pc == 0x54C0F0u) {
        ctx->pc = 0x54C0F0u;
            // 0x54c0f0: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x54C0F4u;
        goto label_54c0f4;
    }
    ctx->pc = 0x54C0ECu;
    SET_GPR_U32(ctx, 31, 0x54C0F4u);
    ctx->pc = 0x54C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C0ECu;
            // 0x54c0f0: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0F4u; }
        if (ctx->pc != 0x54C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C0F4u; }
        if (ctx->pc != 0x54C0F4u) { return; }
    }
    ctx->pc = 0x54C0F4u;
label_54c0f4:
    // 0x54c0f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_54c0f8:
    if (ctx->pc == 0x54C0F8u) {
        ctx->pc = 0x54C0FCu;
        goto label_54c0fc;
    }
    ctx->pc = 0x54C0F4u;
    {
        const bool branch_taken_0x54c0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c0f4) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C0FCu;
label_54c0fc:
    // 0x54c0fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c100:
    // 0x54c100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c104:
    // 0x54c104: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54c104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54c108:
    // 0x54c108: 0x320f809  jalr        $t9
label_54c10c:
    if (ctx->pc == 0x54C10Cu) {
        ctx->pc = 0x54C10Cu;
            // 0x54c10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C110u;
        goto label_54c110;
    }
    ctx->pc = 0x54C108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C110u);
        ctx->pc = 0x54C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C108u;
            // 0x54c10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C110u; }
            if (ctx->pc != 0x54C110u) { return; }
        }
        }
    }
    ctx->pc = 0x54C110u;
label_54c110:
    // 0x54c110: 0x10000018  b           . + 4 + (0x18 << 2)
label_54c114:
    if (ctx->pc == 0x54C114u) {
        ctx->pc = 0x54C118u;
        goto label_54c118;
    }
    ctx->pc = 0x54C110u;
    {
        const bool branch_taken_0x54c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c110) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C118u;
label_54c118:
    // 0x54c118: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x54c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_54c11c:
    // 0x54c11c: 0xc120460  jal         func_481180
label_54c120:
    if (ctx->pc == 0x54C120u) {
        ctx->pc = 0x54C120u;
            // 0x54c120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C124u;
        goto label_54c124;
    }
    ctx->pc = 0x54C11Cu;
    SET_GPR_U32(ctx, 31, 0x54C124u);
    ctx->pc = 0x54C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C11Cu;
            // 0x54c120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481180u;
    if (runtime->hasFunction(0x481180u)) {
        auto targetFn = runtime->lookupFunction(0x481180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C124u; }
        if (ctx->pc != 0x54C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481180_0x481180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C124u; }
        if (ctx->pc != 0x54C124u) { return; }
    }
    ctx->pc = 0x54C124u;
label_54c124:
    // 0x54c124: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x54c124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_54c128:
    // 0x54c128: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x54c128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_54c12c:
    // 0x54c12c: 0x320f809  jalr        $t9
label_54c130:
    if (ctx->pc == 0x54C130u) {
        ctx->pc = 0x54C130u;
            // 0x54c130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54C134u;
        goto label_54c134;
    }
    ctx->pc = 0x54C12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54C134u);
        ctx->pc = 0x54C130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C12Cu;
            // 0x54c130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54C134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54C134u; }
            if (ctx->pc != 0x54C134u) { return; }
        }
        }
    }
    ctx->pc = 0x54C134u;
label_54c134:
    // 0x54c134: 0x1000000f  b           . + 4 + (0xF << 2)
label_54c138:
    if (ctx->pc == 0x54C138u) {
        ctx->pc = 0x54C13Cu;
        goto label_54c13c;
    }
    ctx->pc = 0x54C134u;
    {
        const bool branch_taken_0x54c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c134) {
            ctx->pc = 0x54C174u;
            goto label_54c174;
        }
    }
    ctx->pc = 0x54C13Cu;
label_54c13c:
    // 0x54c13c: 0x92020057  lbu         $v0, 0x57($s0)
    ctx->pc = 0x54c13cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
label_54c140:
    // 0x54c140: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_54c144:
    if (ctx->pc == 0x54C144u) {
        ctx->pc = 0x54C144u;
            // 0x54c144: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x54C148u;
        goto label_54c148;
    }
    ctx->pc = 0x54C140u;
    {
        const bool branch_taken_0x54c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54c140) {
            ctx->pc = 0x54C144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54C140u;
            // 0x54c144: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54C158u;
            goto label_54c158;
        }
    }
    ctx->pc = 0x54C148u;
label_54c148:
    // 0x54c148: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x54c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_54c14c:
    // 0x54c14c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x54c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_54c150:
    // 0x54c150: 0x10000003  b           . + 4 + (0x3 << 2)
label_54c154:
    if (ctx->pc == 0x54C154u) {
        ctx->pc = 0x54C154u;
            // 0x54c154: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x54C158u;
        goto label_54c158;
    }
    ctx->pc = 0x54C150u;
    {
        const bool branch_taken_0x54c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C150u;
            // 0x54c154: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54c150) {
            ctx->pc = 0x54C160u;
            goto label_54c160;
        }
    }
    ctx->pc = 0x54C158u;
label_54c158:
    // 0x54c158: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x54c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_54c15c:
    // 0x54c15c: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x54c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_54c160:
    // 0x54c160: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x54c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_54c164:
    // 0x54c164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x54c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54c168:
    // 0x54c168: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x54c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_54c16c:
    // 0x54c16c: 0xc057b7c  jal         func_15EDF0
label_54c170:
    if (ctx->pc == 0x54C170u) {
        ctx->pc = 0x54C170u;
            // 0x54c170: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x54C174u;
        goto label_54c174;
    }
    ctx->pc = 0x54C16Cu;
    SET_GPR_U32(ctx, 31, 0x54C174u);
    ctx->pc = 0x54C170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54C16Cu;
            // 0x54c170: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C174u; }
        if (ctx->pc != 0x54C174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54C174u; }
        if (ctx->pc != 0x54C174u) { return; }
    }
    ctx->pc = 0x54C174u;
label_54c174:
    // 0x54c174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x54c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_54c178:
    // 0x54c178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x54c178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54c17c:
    // 0x54c17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x54c17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54c180:
    // 0x54c180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54c180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54c184:
    // 0x54c184: 0x3e00008  jr          $ra
label_54c188:
    if (ctx->pc == 0x54C188u) {
        ctx->pc = 0x54C188u;
            // 0x54c188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x54C18Cu;
        goto label_54c18c;
    }
    ctx->pc = 0x54C184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54C184u;
            // 0x54c188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54C18Cu;
label_54c18c:
    // 0x54c18c: 0x0  nop
    ctx->pc = 0x54c18cu;
    // NOP
}
