#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033A480
// Address: 0x33a480 - 0x33ad90
void sub_0033A480_0x33a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A480_0x33a480");
#endif

    switch (ctx->pc) {
        case 0x33a480u: goto label_33a480;
        case 0x33a484u: goto label_33a484;
        case 0x33a488u: goto label_33a488;
        case 0x33a48cu: goto label_33a48c;
        case 0x33a490u: goto label_33a490;
        case 0x33a494u: goto label_33a494;
        case 0x33a498u: goto label_33a498;
        case 0x33a49cu: goto label_33a49c;
        case 0x33a4a0u: goto label_33a4a0;
        case 0x33a4a4u: goto label_33a4a4;
        case 0x33a4a8u: goto label_33a4a8;
        case 0x33a4acu: goto label_33a4ac;
        case 0x33a4b0u: goto label_33a4b0;
        case 0x33a4b4u: goto label_33a4b4;
        case 0x33a4b8u: goto label_33a4b8;
        case 0x33a4bcu: goto label_33a4bc;
        case 0x33a4c0u: goto label_33a4c0;
        case 0x33a4c4u: goto label_33a4c4;
        case 0x33a4c8u: goto label_33a4c8;
        case 0x33a4ccu: goto label_33a4cc;
        case 0x33a4d0u: goto label_33a4d0;
        case 0x33a4d4u: goto label_33a4d4;
        case 0x33a4d8u: goto label_33a4d8;
        case 0x33a4dcu: goto label_33a4dc;
        case 0x33a4e0u: goto label_33a4e0;
        case 0x33a4e4u: goto label_33a4e4;
        case 0x33a4e8u: goto label_33a4e8;
        case 0x33a4ecu: goto label_33a4ec;
        case 0x33a4f0u: goto label_33a4f0;
        case 0x33a4f4u: goto label_33a4f4;
        case 0x33a4f8u: goto label_33a4f8;
        case 0x33a4fcu: goto label_33a4fc;
        case 0x33a500u: goto label_33a500;
        case 0x33a504u: goto label_33a504;
        case 0x33a508u: goto label_33a508;
        case 0x33a50cu: goto label_33a50c;
        case 0x33a510u: goto label_33a510;
        case 0x33a514u: goto label_33a514;
        case 0x33a518u: goto label_33a518;
        case 0x33a51cu: goto label_33a51c;
        case 0x33a520u: goto label_33a520;
        case 0x33a524u: goto label_33a524;
        case 0x33a528u: goto label_33a528;
        case 0x33a52cu: goto label_33a52c;
        case 0x33a530u: goto label_33a530;
        case 0x33a534u: goto label_33a534;
        case 0x33a538u: goto label_33a538;
        case 0x33a53cu: goto label_33a53c;
        case 0x33a540u: goto label_33a540;
        case 0x33a544u: goto label_33a544;
        case 0x33a548u: goto label_33a548;
        case 0x33a54cu: goto label_33a54c;
        case 0x33a550u: goto label_33a550;
        case 0x33a554u: goto label_33a554;
        case 0x33a558u: goto label_33a558;
        case 0x33a55cu: goto label_33a55c;
        case 0x33a560u: goto label_33a560;
        case 0x33a564u: goto label_33a564;
        case 0x33a568u: goto label_33a568;
        case 0x33a56cu: goto label_33a56c;
        case 0x33a570u: goto label_33a570;
        case 0x33a574u: goto label_33a574;
        case 0x33a578u: goto label_33a578;
        case 0x33a57cu: goto label_33a57c;
        case 0x33a580u: goto label_33a580;
        case 0x33a584u: goto label_33a584;
        case 0x33a588u: goto label_33a588;
        case 0x33a58cu: goto label_33a58c;
        case 0x33a590u: goto label_33a590;
        case 0x33a594u: goto label_33a594;
        case 0x33a598u: goto label_33a598;
        case 0x33a59cu: goto label_33a59c;
        case 0x33a5a0u: goto label_33a5a0;
        case 0x33a5a4u: goto label_33a5a4;
        case 0x33a5a8u: goto label_33a5a8;
        case 0x33a5acu: goto label_33a5ac;
        case 0x33a5b0u: goto label_33a5b0;
        case 0x33a5b4u: goto label_33a5b4;
        case 0x33a5b8u: goto label_33a5b8;
        case 0x33a5bcu: goto label_33a5bc;
        case 0x33a5c0u: goto label_33a5c0;
        case 0x33a5c4u: goto label_33a5c4;
        case 0x33a5c8u: goto label_33a5c8;
        case 0x33a5ccu: goto label_33a5cc;
        case 0x33a5d0u: goto label_33a5d0;
        case 0x33a5d4u: goto label_33a5d4;
        case 0x33a5d8u: goto label_33a5d8;
        case 0x33a5dcu: goto label_33a5dc;
        case 0x33a5e0u: goto label_33a5e0;
        case 0x33a5e4u: goto label_33a5e4;
        case 0x33a5e8u: goto label_33a5e8;
        case 0x33a5ecu: goto label_33a5ec;
        case 0x33a5f0u: goto label_33a5f0;
        case 0x33a5f4u: goto label_33a5f4;
        case 0x33a5f8u: goto label_33a5f8;
        case 0x33a5fcu: goto label_33a5fc;
        case 0x33a600u: goto label_33a600;
        case 0x33a604u: goto label_33a604;
        case 0x33a608u: goto label_33a608;
        case 0x33a60cu: goto label_33a60c;
        case 0x33a610u: goto label_33a610;
        case 0x33a614u: goto label_33a614;
        case 0x33a618u: goto label_33a618;
        case 0x33a61cu: goto label_33a61c;
        case 0x33a620u: goto label_33a620;
        case 0x33a624u: goto label_33a624;
        case 0x33a628u: goto label_33a628;
        case 0x33a62cu: goto label_33a62c;
        case 0x33a630u: goto label_33a630;
        case 0x33a634u: goto label_33a634;
        case 0x33a638u: goto label_33a638;
        case 0x33a63cu: goto label_33a63c;
        case 0x33a640u: goto label_33a640;
        case 0x33a644u: goto label_33a644;
        case 0x33a648u: goto label_33a648;
        case 0x33a64cu: goto label_33a64c;
        case 0x33a650u: goto label_33a650;
        case 0x33a654u: goto label_33a654;
        case 0x33a658u: goto label_33a658;
        case 0x33a65cu: goto label_33a65c;
        case 0x33a660u: goto label_33a660;
        case 0x33a664u: goto label_33a664;
        case 0x33a668u: goto label_33a668;
        case 0x33a66cu: goto label_33a66c;
        case 0x33a670u: goto label_33a670;
        case 0x33a674u: goto label_33a674;
        case 0x33a678u: goto label_33a678;
        case 0x33a67cu: goto label_33a67c;
        case 0x33a680u: goto label_33a680;
        case 0x33a684u: goto label_33a684;
        case 0x33a688u: goto label_33a688;
        case 0x33a68cu: goto label_33a68c;
        case 0x33a690u: goto label_33a690;
        case 0x33a694u: goto label_33a694;
        case 0x33a698u: goto label_33a698;
        case 0x33a69cu: goto label_33a69c;
        case 0x33a6a0u: goto label_33a6a0;
        case 0x33a6a4u: goto label_33a6a4;
        case 0x33a6a8u: goto label_33a6a8;
        case 0x33a6acu: goto label_33a6ac;
        case 0x33a6b0u: goto label_33a6b0;
        case 0x33a6b4u: goto label_33a6b4;
        case 0x33a6b8u: goto label_33a6b8;
        case 0x33a6bcu: goto label_33a6bc;
        case 0x33a6c0u: goto label_33a6c0;
        case 0x33a6c4u: goto label_33a6c4;
        case 0x33a6c8u: goto label_33a6c8;
        case 0x33a6ccu: goto label_33a6cc;
        case 0x33a6d0u: goto label_33a6d0;
        case 0x33a6d4u: goto label_33a6d4;
        case 0x33a6d8u: goto label_33a6d8;
        case 0x33a6dcu: goto label_33a6dc;
        case 0x33a6e0u: goto label_33a6e0;
        case 0x33a6e4u: goto label_33a6e4;
        case 0x33a6e8u: goto label_33a6e8;
        case 0x33a6ecu: goto label_33a6ec;
        case 0x33a6f0u: goto label_33a6f0;
        case 0x33a6f4u: goto label_33a6f4;
        case 0x33a6f8u: goto label_33a6f8;
        case 0x33a6fcu: goto label_33a6fc;
        case 0x33a700u: goto label_33a700;
        case 0x33a704u: goto label_33a704;
        case 0x33a708u: goto label_33a708;
        case 0x33a70cu: goto label_33a70c;
        case 0x33a710u: goto label_33a710;
        case 0x33a714u: goto label_33a714;
        case 0x33a718u: goto label_33a718;
        case 0x33a71cu: goto label_33a71c;
        case 0x33a720u: goto label_33a720;
        case 0x33a724u: goto label_33a724;
        case 0x33a728u: goto label_33a728;
        case 0x33a72cu: goto label_33a72c;
        case 0x33a730u: goto label_33a730;
        case 0x33a734u: goto label_33a734;
        case 0x33a738u: goto label_33a738;
        case 0x33a73cu: goto label_33a73c;
        case 0x33a740u: goto label_33a740;
        case 0x33a744u: goto label_33a744;
        case 0x33a748u: goto label_33a748;
        case 0x33a74cu: goto label_33a74c;
        case 0x33a750u: goto label_33a750;
        case 0x33a754u: goto label_33a754;
        case 0x33a758u: goto label_33a758;
        case 0x33a75cu: goto label_33a75c;
        case 0x33a760u: goto label_33a760;
        case 0x33a764u: goto label_33a764;
        case 0x33a768u: goto label_33a768;
        case 0x33a76cu: goto label_33a76c;
        case 0x33a770u: goto label_33a770;
        case 0x33a774u: goto label_33a774;
        case 0x33a778u: goto label_33a778;
        case 0x33a77cu: goto label_33a77c;
        case 0x33a780u: goto label_33a780;
        case 0x33a784u: goto label_33a784;
        case 0x33a788u: goto label_33a788;
        case 0x33a78cu: goto label_33a78c;
        case 0x33a790u: goto label_33a790;
        case 0x33a794u: goto label_33a794;
        case 0x33a798u: goto label_33a798;
        case 0x33a79cu: goto label_33a79c;
        case 0x33a7a0u: goto label_33a7a0;
        case 0x33a7a4u: goto label_33a7a4;
        case 0x33a7a8u: goto label_33a7a8;
        case 0x33a7acu: goto label_33a7ac;
        case 0x33a7b0u: goto label_33a7b0;
        case 0x33a7b4u: goto label_33a7b4;
        case 0x33a7b8u: goto label_33a7b8;
        case 0x33a7bcu: goto label_33a7bc;
        case 0x33a7c0u: goto label_33a7c0;
        case 0x33a7c4u: goto label_33a7c4;
        case 0x33a7c8u: goto label_33a7c8;
        case 0x33a7ccu: goto label_33a7cc;
        case 0x33a7d0u: goto label_33a7d0;
        case 0x33a7d4u: goto label_33a7d4;
        case 0x33a7d8u: goto label_33a7d8;
        case 0x33a7dcu: goto label_33a7dc;
        case 0x33a7e0u: goto label_33a7e0;
        case 0x33a7e4u: goto label_33a7e4;
        case 0x33a7e8u: goto label_33a7e8;
        case 0x33a7ecu: goto label_33a7ec;
        case 0x33a7f0u: goto label_33a7f0;
        case 0x33a7f4u: goto label_33a7f4;
        case 0x33a7f8u: goto label_33a7f8;
        case 0x33a7fcu: goto label_33a7fc;
        case 0x33a800u: goto label_33a800;
        case 0x33a804u: goto label_33a804;
        case 0x33a808u: goto label_33a808;
        case 0x33a80cu: goto label_33a80c;
        case 0x33a810u: goto label_33a810;
        case 0x33a814u: goto label_33a814;
        case 0x33a818u: goto label_33a818;
        case 0x33a81cu: goto label_33a81c;
        case 0x33a820u: goto label_33a820;
        case 0x33a824u: goto label_33a824;
        case 0x33a828u: goto label_33a828;
        case 0x33a82cu: goto label_33a82c;
        case 0x33a830u: goto label_33a830;
        case 0x33a834u: goto label_33a834;
        case 0x33a838u: goto label_33a838;
        case 0x33a83cu: goto label_33a83c;
        case 0x33a840u: goto label_33a840;
        case 0x33a844u: goto label_33a844;
        case 0x33a848u: goto label_33a848;
        case 0x33a84cu: goto label_33a84c;
        case 0x33a850u: goto label_33a850;
        case 0x33a854u: goto label_33a854;
        case 0x33a858u: goto label_33a858;
        case 0x33a85cu: goto label_33a85c;
        case 0x33a860u: goto label_33a860;
        case 0x33a864u: goto label_33a864;
        case 0x33a868u: goto label_33a868;
        case 0x33a86cu: goto label_33a86c;
        case 0x33a870u: goto label_33a870;
        case 0x33a874u: goto label_33a874;
        case 0x33a878u: goto label_33a878;
        case 0x33a87cu: goto label_33a87c;
        case 0x33a880u: goto label_33a880;
        case 0x33a884u: goto label_33a884;
        case 0x33a888u: goto label_33a888;
        case 0x33a88cu: goto label_33a88c;
        case 0x33a890u: goto label_33a890;
        case 0x33a894u: goto label_33a894;
        case 0x33a898u: goto label_33a898;
        case 0x33a89cu: goto label_33a89c;
        case 0x33a8a0u: goto label_33a8a0;
        case 0x33a8a4u: goto label_33a8a4;
        case 0x33a8a8u: goto label_33a8a8;
        case 0x33a8acu: goto label_33a8ac;
        case 0x33a8b0u: goto label_33a8b0;
        case 0x33a8b4u: goto label_33a8b4;
        case 0x33a8b8u: goto label_33a8b8;
        case 0x33a8bcu: goto label_33a8bc;
        case 0x33a8c0u: goto label_33a8c0;
        case 0x33a8c4u: goto label_33a8c4;
        case 0x33a8c8u: goto label_33a8c8;
        case 0x33a8ccu: goto label_33a8cc;
        case 0x33a8d0u: goto label_33a8d0;
        case 0x33a8d4u: goto label_33a8d4;
        case 0x33a8d8u: goto label_33a8d8;
        case 0x33a8dcu: goto label_33a8dc;
        case 0x33a8e0u: goto label_33a8e0;
        case 0x33a8e4u: goto label_33a8e4;
        case 0x33a8e8u: goto label_33a8e8;
        case 0x33a8ecu: goto label_33a8ec;
        case 0x33a8f0u: goto label_33a8f0;
        case 0x33a8f4u: goto label_33a8f4;
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a8fcu: goto label_33a8fc;
        case 0x33a900u: goto label_33a900;
        case 0x33a904u: goto label_33a904;
        case 0x33a908u: goto label_33a908;
        case 0x33a90cu: goto label_33a90c;
        case 0x33a910u: goto label_33a910;
        case 0x33a914u: goto label_33a914;
        case 0x33a918u: goto label_33a918;
        case 0x33a91cu: goto label_33a91c;
        case 0x33a920u: goto label_33a920;
        case 0x33a924u: goto label_33a924;
        case 0x33a928u: goto label_33a928;
        case 0x33a92cu: goto label_33a92c;
        case 0x33a930u: goto label_33a930;
        case 0x33a934u: goto label_33a934;
        case 0x33a938u: goto label_33a938;
        case 0x33a93cu: goto label_33a93c;
        case 0x33a940u: goto label_33a940;
        case 0x33a944u: goto label_33a944;
        case 0x33a948u: goto label_33a948;
        case 0x33a94cu: goto label_33a94c;
        case 0x33a950u: goto label_33a950;
        case 0x33a954u: goto label_33a954;
        case 0x33a958u: goto label_33a958;
        case 0x33a95cu: goto label_33a95c;
        case 0x33a960u: goto label_33a960;
        case 0x33a964u: goto label_33a964;
        case 0x33a968u: goto label_33a968;
        case 0x33a96cu: goto label_33a96c;
        case 0x33a970u: goto label_33a970;
        case 0x33a974u: goto label_33a974;
        case 0x33a978u: goto label_33a978;
        case 0x33a97cu: goto label_33a97c;
        case 0x33a980u: goto label_33a980;
        case 0x33a984u: goto label_33a984;
        case 0x33a988u: goto label_33a988;
        case 0x33a98cu: goto label_33a98c;
        case 0x33a990u: goto label_33a990;
        case 0x33a994u: goto label_33a994;
        case 0x33a998u: goto label_33a998;
        case 0x33a99cu: goto label_33a99c;
        case 0x33a9a0u: goto label_33a9a0;
        case 0x33a9a4u: goto label_33a9a4;
        case 0x33a9a8u: goto label_33a9a8;
        case 0x33a9acu: goto label_33a9ac;
        case 0x33a9b0u: goto label_33a9b0;
        case 0x33a9b4u: goto label_33a9b4;
        case 0x33a9b8u: goto label_33a9b8;
        case 0x33a9bcu: goto label_33a9bc;
        case 0x33a9c0u: goto label_33a9c0;
        case 0x33a9c4u: goto label_33a9c4;
        case 0x33a9c8u: goto label_33a9c8;
        case 0x33a9ccu: goto label_33a9cc;
        case 0x33a9d0u: goto label_33a9d0;
        case 0x33a9d4u: goto label_33a9d4;
        case 0x33a9d8u: goto label_33a9d8;
        case 0x33a9dcu: goto label_33a9dc;
        case 0x33a9e0u: goto label_33a9e0;
        case 0x33a9e4u: goto label_33a9e4;
        case 0x33a9e8u: goto label_33a9e8;
        case 0x33a9ecu: goto label_33a9ec;
        case 0x33a9f0u: goto label_33a9f0;
        case 0x33a9f4u: goto label_33a9f4;
        case 0x33a9f8u: goto label_33a9f8;
        case 0x33a9fcu: goto label_33a9fc;
        case 0x33aa00u: goto label_33aa00;
        case 0x33aa04u: goto label_33aa04;
        case 0x33aa08u: goto label_33aa08;
        case 0x33aa0cu: goto label_33aa0c;
        case 0x33aa10u: goto label_33aa10;
        case 0x33aa14u: goto label_33aa14;
        case 0x33aa18u: goto label_33aa18;
        case 0x33aa1cu: goto label_33aa1c;
        case 0x33aa20u: goto label_33aa20;
        case 0x33aa24u: goto label_33aa24;
        case 0x33aa28u: goto label_33aa28;
        case 0x33aa2cu: goto label_33aa2c;
        case 0x33aa30u: goto label_33aa30;
        case 0x33aa34u: goto label_33aa34;
        case 0x33aa38u: goto label_33aa38;
        case 0x33aa3cu: goto label_33aa3c;
        case 0x33aa40u: goto label_33aa40;
        case 0x33aa44u: goto label_33aa44;
        case 0x33aa48u: goto label_33aa48;
        case 0x33aa4cu: goto label_33aa4c;
        case 0x33aa50u: goto label_33aa50;
        case 0x33aa54u: goto label_33aa54;
        case 0x33aa58u: goto label_33aa58;
        case 0x33aa5cu: goto label_33aa5c;
        case 0x33aa60u: goto label_33aa60;
        case 0x33aa64u: goto label_33aa64;
        case 0x33aa68u: goto label_33aa68;
        case 0x33aa6cu: goto label_33aa6c;
        case 0x33aa70u: goto label_33aa70;
        case 0x33aa74u: goto label_33aa74;
        case 0x33aa78u: goto label_33aa78;
        case 0x33aa7cu: goto label_33aa7c;
        case 0x33aa80u: goto label_33aa80;
        case 0x33aa84u: goto label_33aa84;
        case 0x33aa88u: goto label_33aa88;
        case 0x33aa8cu: goto label_33aa8c;
        case 0x33aa90u: goto label_33aa90;
        case 0x33aa94u: goto label_33aa94;
        case 0x33aa98u: goto label_33aa98;
        case 0x33aa9cu: goto label_33aa9c;
        case 0x33aaa0u: goto label_33aaa0;
        case 0x33aaa4u: goto label_33aaa4;
        case 0x33aaa8u: goto label_33aaa8;
        case 0x33aaacu: goto label_33aaac;
        case 0x33aab0u: goto label_33aab0;
        case 0x33aab4u: goto label_33aab4;
        case 0x33aab8u: goto label_33aab8;
        case 0x33aabcu: goto label_33aabc;
        case 0x33aac0u: goto label_33aac0;
        case 0x33aac4u: goto label_33aac4;
        case 0x33aac8u: goto label_33aac8;
        case 0x33aaccu: goto label_33aacc;
        case 0x33aad0u: goto label_33aad0;
        case 0x33aad4u: goto label_33aad4;
        case 0x33aad8u: goto label_33aad8;
        case 0x33aadcu: goto label_33aadc;
        case 0x33aae0u: goto label_33aae0;
        case 0x33aae4u: goto label_33aae4;
        case 0x33aae8u: goto label_33aae8;
        case 0x33aaecu: goto label_33aaec;
        case 0x33aaf0u: goto label_33aaf0;
        case 0x33aaf4u: goto label_33aaf4;
        case 0x33aaf8u: goto label_33aaf8;
        case 0x33aafcu: goto label_33aafc;
        case 0x33ab00u: goto label_33ab00;
        case 0x33ab04u: goto label_33ab04;
        case 0x33ab08u: goto label_33ab08;
        case 0x33ab0cu: goto label_33ab0c;
        case 0x33ab10u: goto label_33ab10;
        case 0x33ab14u: goto label_33ab14;
        case 0x33ab18u: goto label_33ab18;
        case 0x33ab1cu: goto label_33ab1c;
        case 0x33ab20u: goto label_33ab20;
        case 0x33ab24u: goto label_33ab24;
        case 0x33ab28u: goto label_33ab28;
        case 0x33ab2cu: goto label_33ab2c;
        case 0x33ab30u: goto label_33ab30;
        case 0x33ab34u: goto label_33ab34;
        case 0x33ab38u: goto label_33ab38;
        case 0x33ab3cu: goto label_33ab3c;
        case 0x33ab40u: goto label_33ab40;
        case 0x33ab44u: goto label_33ab44;
        case 0x33ab48u: goto label_33ab48;
        case 0x33ab4cu: goto label_33ab4c;
        case 0x33ab50u: goto label_33ab50;
        case 0x33ab54u: goto label_33ab54;
        case 0x33ab58u: goto label_33ab58;
        case 0x33ab5cu: goto label_33ab5c;
        case 0x33ab60u: goto label_33ab60;
        case 0x33ab64u: goto label_33ab64;
        case 0x33ab68u: goto label_33ab68;
        case 0x33ab6cu: goto label_33ab6c;
        case 0x33ab70u: goto label_33ab70;
        case 0x33ab74u: goto label_33ab74;
        case 0x33ab78u: goto label_33ab78;
        case 0x33ab7cu: goto label_33ab7c;
        case 0x33ab80u: goto label_33ab80;
        case 0x33ab84u: goto label_33ab84;
        case 0x33ab88u: goto label_33ab88;
        case 0x33ab8cu: goto label_33ab8c;
        case 0x33ab90u: goto label_33ab90;
        case 0x33ab94u: goto label_33ab94;
        case 0x33ab98u: goto label_33ab98;
        case 0x33ab9cu: goto label_33ab9c;
        case 0x33aba0u: goto label_33aba0;
        case 0x33aba4u: goto label_33aba4;
        case 0x33aba8u: goto label_33aba8;
        case 0x33abacu: goto label_33abac;
        case 0x33abb0u: goto label_33abb0;
        case 0x33abb4u: goto label_33abb4;
        case 0x33abb8u: goto label_33abb8;
        case 0x33abbcu: goto label_33abbc;
        case 0x33abc0u: goto label_33abc0;
        case 0x33abc4u: goto label_33abc4;
        case 0x33abc8u: goto label_33abc8;
        case 0x33abccu: goto label_33abcc;
        case 0x33abd0u: goto label_33abd0;
        case 0x33abd4u: goto label_33abd4;
        case 0x33abd8u: goto label_33abd8;
        case 0x33abdcu: goto label_33abdc;
        case 0x33abe0u: goto label_33abe0;
        case 0x33abe4u: goto label_33abe4;
        case 0x33abe8u: goto label_33abe8;
        case 0x33abecu: goto label_33abec;
        case 0x33abf0u: goto label_33abf0;
        case 0x33abf4u: goto label_33abf4;
        case 0x33abf8u: goto label_33abf8;
        case 0x33abfcu: goto label_33abfc;
        case 0x33ac00u: goto label_33ac00;
        case 0x33ac04u: goto label_33ac04;
        case 0x33ac08u: goto label_33ac08;
        case 0x33ac0cu: goto label_33ac0c;
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac14u: goto label_33ac14;
        case 0x33ac18u: goto label_33ac18;
        case 0x33ac1cu: goto label_33ac1c;
        case 0x33ac20u: goto label_33ac20;
        case 0x33ac24u: goto label_33ac24;
        case 0x33ac28u: goto label_33ac28;
        case 0x33ac2cu: goto label_33ac2c;
        case 0x33ac30u: goto label_33ac30;
        case 0x33ac34u: goto label_33ac34;
        case 0x33ac38u: goto label_33ac38;
        case 0x33ac3cu: goto label_33ac3c;
        case 0x33ac40u: goto label_33ac40;
        case 0x33ac44u: goto label_33ac44;
        case 0x33ac48u: goto label_33ac48;
        case 0x33ac4cu: goto label_33ac4c;
        case 0x33ac50u: goto label_33ac50;
        case 0x33ac54u: goto label_33ac54;
        case 0x33ac58u: goto label_33ac58;
        case 0x33ac5cu: goto label_33ac5c;
        case 0x33ac60u: goto label_33ac60;
        case 0x33ac64u: goto label_33ac64;
        case 0x33ac68u: goto label_33ac68;
        case 0x33ac6cu: goto label_33ac6c;
        case 0x33ac70u: goto label_33ac70;
        case 0x33ac74u: goto label_33ac74;
        case 0x33ac78u: goto label_33ac78;
        case 0x33ac7cu: goto label_33ac7c;
        case 0x33ac80u: goto label_33ac80;
        case 0x33ac84u: goto label_33ac84;
        case 0x33ac88u: goto label_33ac88;
        case 0x33ac8cu: goto label_33ac8c;
        case 0x33ac90u: goto label_33ac90;
        case 0x33ac94u: goto label_33ac94;
        case 0x33ac98u: goto label_33ac98;
        case 0x33ac9cu: goto label_33ac9c;
        case 0x33aca0u: goto label_33aca0;
        case 0x33aca4u: goto label_33aca4;
        case 0x33aca8u: goto label_33aca8;
        case 0x33acacu: goto label_33acac;
        case 0x33acb0u: goto label_33acb0;
        case 0x33acb4u: goto label_33acb4;
        case 0x33acb8u: goto label_33acb8;
        case 0x33acbcu: goto label_33acbc;
        case 0x33acc0u: goto label_33acc0;
        case 0x33acc4u: goto label_33acc4;
        case 0x33acc8u: goto label_33acc8;
        case 0x33acccu: goto label_33accc;
        case 0x33acd0u: goto label_33acd0;
        case 0x33acd4u: goto label_33acd4;
        case 0x33acd8u: goto label_33acd8;
        case 0x33acdcu: goto label_33acdc;
        case 0x33ace0u: goto label_33ace0;
        case 0x33ace4u: goto label_33ace4;
        case 0x33ace8u: goto label_33ace8;
        case 0x33acecu: goto label_33acec;
        case 0x33acf0u: goto label_33acf0;
        case 0x33acf4u: goto label_33acf4;
        case 0x33acf8u: goto label_33acf8;
        case 0x33acfcu: goto label_33acfc;
        case 0x33ad00u: goto label_33ad00;
        case 0x33ad04u: goto label_33ad04;
        case 0x33ad08u: goto label_33ad08;
        case 0x33ad0cu: goto label_33ad0c;
        case 0x33ad10u: goto label_33ad10;
        case 0x33ad14u: goto label_33ad14;
        case 0x33ad18u: goto label_33ad18;
        case 0x33ad1cu: goto label_33ad1c;
        case 0x33ad20u: goto label_33ad20;
        case 0x33ad24u: goto label_33ad24;
        case 0x33ad28u: goto label_33ad28;
        case 0x33ad2cu: goto label_33ad2c;
        case 0x33ad30u: goto label_33ad30;
        case 0x33ad34u: goto label_33ad34;
        case 0x33ad38u: goto label_33ad38;
        case 0x33ad3cu: goto label_33ad3c;
        case 0x33ad40u: goto label_33ad40;
        case 0x33ad44u: goto label_33ad44;
        case 0x33ad48u: goto label_33ad48;
        case 0x33ad4cu: goto label_33ad4c;
        case 0x33ad50u: goto label_33ad50;
        case 0x33ad54u: goto label_33ad54;
        case 0x33ad58u: goto label_33ad58;
        case 0x33ad5cu: goto label_33ad5c;
        case 0x33ad60u: goto label_33ad60;
        case 0x33ad64u: goto label_33ad64;
        case 0x33ad68u: goto label_33ad68;
        case 0x33ad6cu: goto label_33ad6c;
        case 0x33ad70u: goto label_33ad70;
        case 0x33ad74u: goto label_33ad74;
        case 0x33ad78u: goto label_33ad78;
        case 0x33ad7cu: goto label_33ad7c;
        case 0x33ad80u: goto label_33ad80;
        case 0x33ad84u: goto label_33ad84;
        case 0x33ad88u: goto label_33ad88;
        case 0x33ad8cu: goto label_33ad8c;
        default: break;
    }

    ctx->pc = 0x33a480u;

label_33a480:
    // 0x33a480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33a484:
    // 0x33a484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33a488:
    // 0x33a488: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x33a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_33a48c:
    // 0x33a48c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x33a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_33a490:
    // 0x33a490: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_33a494:
    // 0x33a494: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x33a494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a498:
    // 0x33a498: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x33a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_33a49c:
    // 0x33a49c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33a49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33a4a0:
    // 0x33a4a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33a4a4:
    // 0x33a4a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33a4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a4a8:
    // 0x33a4a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_33a4ac:
    // 0x33a4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33a4b0:
    // 0x33a4b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33a4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33a4b4:
    // 0x33a4b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33a4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a4b8:
    // 0x33a4b8: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x33a4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_33a4bc:
    // 0x33a4bc: 0x8c51e378  lw          $s1, -0x1C88($v0)
    ctx->pc = 0x33a4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_33a4c0:
    // 0x33a4c0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x33a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_33a4c4:
    // 0x33a4c4: 0xc04e738  jal         func_139CE0
label_33a4c8:
    if (ctx->pc == 0x33A4C8u) {
        ctx->pc = 0x33A4C8u;
            // 0x33a4c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x33A4CCu;
        goto label_33a4cc;
    }
    ctx->pc = 0x33A4C4u;
    SET_GPR_U32(ctx, 31, 0x33A4CCu);
    ctx->pc = 0x33A4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4C4u;
            // 0x33a4c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A4CCu; }
        if (ctx->pc != 0x33A4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A4CCu; }
        if (ctx->pc != 0x33A4CCu) { return; }
    }
    ctx->pc = 0x33A4CCu;
label_33a4cc:
    // 0x33a4cc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x33a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_33a4d0:
    // 0x33a4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a4d4:
    // 0x33a4d4: 0xc04e4a4  jal         func_139290
label_33a4d8:
    if (ctx->pc == 0x33A4D8u) {
        ctx->pc = 0x33A4D8u;
            // 0x33a4d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A4DCu;
        goto label_33a4dc;
    }
    ctx->pc = 0x33A4D4u;
    SET_GPR_U32(ctx, 31, 0x33A4DCu);
    ctx->pc = 0x33A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4D4u;
            // 0x33a4d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A4DCu; }
        if (ctx->pc != 0x33A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A4DCu; }
        if (ctx->pc != 0x33A4DCu) { return; }
    }
    ctx->pc = 0x33A4DCu;
label_33a4dc:
    // 0x33a4dc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x33a4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_33a4e0:
    // 0x33a4e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33a4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_33a4e4:
    // 0x33a4e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x33a4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_33a4e8:
    // 0x33a4e8: 0x320f809  jalr        $t9
label_33a4ec:
    if (ctx->pc == 0x33A4ECu) {
        ctx->pc = 0x33A4ECu;
            // 0x33a4ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A4F0u;
        goto label_33a4f0;
    }
    ctx->pc = 0x33A4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33A4F0u);
        ctx->pc = 0x33A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4E8u;
            // 0x33a4ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33A4F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33A4F0u; }
            if (ctx->pc != 0x33A4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x33A4F0u;
label_33a4f0:
    // 0x33a4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33a4f4:
    // 0x33a4f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33a4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33a4f8:
    // 0x33a4f8: 0x0  nop
    ctx->pc = 0x33a4f8u;
    // NOP
label_33a4fc:
    // 0x33a4fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33a4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33a500:
    // 0x33a500: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_33a504:
    if (ctx->pc == 0x33A504u) {
        ctx->pc = 0x33A504u;
            // 0x33a504: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x33A508u;
        goto label_33a508;
    }
    ctx->pc = 0x33A500u;
    {
        const bool branch_taken_0x33a500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33A504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A500u;
            // 0x33a504: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a500) {
            ctx->pc = 0x33A514u;
            goto label_33a514;
        }
    }
    ctx->pc = 0x33A508u;
label_33a508:
    // 0x33a508: 0xc0747dc  jal         func_1D1F70
label_33a50c:
    if (ctx->pc == 0x33A50Cu) {
        ctx->pc = 0x33A50Cu;
            // 0x33a50c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x33A510u;
        goto label_33a510;
    }
    ctx->pc = 0x33A508u;
    SET_GPR_U32(ctx, 31, 0x33A510u);
    ctx->pc = 0x33A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A508u;
            // 0x33a50c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A510u; }
        if (ctx->pc != 0x33A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A510u; }
        if (ctx->pc != 0x33A510u) { return; }
    }
    ctx->pc = 0x33A510u;
label_33a510:
    // 0x33a510: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x33a510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_33a514:
    // 0x33a514: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x33a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_33a518:
    // 0x33a518: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x33a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_33a51c:
    // 0x33a51c: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x33a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_33a520:
    // 0x33a520: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x33a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33a524:
    // 0x33a524: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x33a524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_33a528:
    // 0x33a528: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_33a52c:
    // 0x33a52c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33a52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33a530:
    // 0x33a530: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_33a534:
    if (ctx->pc == 0x33A534u) {
        ctx->pc = 0x33A534u;
            // 0x33a534: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x33A538u;
        goto label_33a538;
    }
    ctx->pc = 0x33A530u;
    {
        const bool branch_taken_0x33a530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a530) {
            ctx->pc = 0x33A534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A530u;
            // 0x33a534: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A54Cu;
            goto label_33a54c;
        }
    }
    ctx->pc = 0x33A538u;
label_33a538:
    // 0x33a538: 0xc0bd780  jal         func_2F5E00
label_33a53c:
    if (ctx->pc == 0x33A53Cu) {
        ctx->pc = 0x33A540u;
        goto label_33a540;
    }
    ctx->pc = 0x33A538u;
    SET_GPR_U32(ctx, 31, 0x33A540u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A540u; }
        if (ctx->pc != 0x33A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A540u; }
        if (ctx->pc != 0x33A540u) { return; }
    }
    ctx->pc = 0x33A540u;
label_33a540:
    // 0x33a540: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x33a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_33a544:
    // 0x33a544: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x33a544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_33a548:
    // 0x33a548: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33a54c:
    // 0x33a54c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x33a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_33a550:
    // 0x33a550: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_33a554:
    // 0x33a554: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x33a554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_33a558:
    // 0x33a558: 0x2634025  or          $t0, $s3, $v1
    ctx->pc = 0x33a558u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_33a55c:
    // 0x33a55c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x33a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_33a560:
    // 0x33a560: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33a564:
    if (ctx->pc == 0x33A564u) {
        ctx->pc = 0x33A564u;
            // 0x33a564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A568u;
        goto label_33a568;
    }
    ctx->pc = 0x33A560u;
    {
        const bool branch_taken_0x33a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a560) {
            ctx->pc = 0x33A564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A560u;
            // 0x33a564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A584u;
            goto label_33a584;
        }
    }
    ctx->pc = 0x33A568u;
label_33a568:
    // 0x33a568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a56c:
    // 0x33a56c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33a56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a570:
    // 0x33a570: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a574:
    // 0x33a574: 0xc055234  jal         func_1548D0
label_33a578:
    if (ctx->pc == 0x33A578u) {
        ctx->pc = 0x33A578u;
            // 0x33a578: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x33A57Cu;
        goto label_33a57c;
    }
    ctx->pc = 0x33A574u;
    SET_GPR_U32(ctx, 31, 0x33A57Cu);
    ctx->pc = 0x33A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A574u;
            // 0x33a578: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A57Cu; }
        if (ctx->pc != 0x33A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A57Cu; }
        if (ctx->pc != 0x33A57Cu) { return; }
    }
    ctx->pc = 0x33A57Cu;
label_33a57c:
    // 0x33a57c: 0x10000006  b           . + 4 + (0x6 << 2)
label_33a580:
    if (ctx->pc == 0x33A580u) {
        ctx->pc = 0x33A580u;
            // 0x33a580: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x33A584u;
        goto label_33a584;
    }
    ctx->pc = 0x33A57Cu;
    {
        const bool branch_taken_0x33a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A57Cu;
            // 0x33a580: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a57c) {
            ctx->pc = 0x33A598u;
            goto label_33a598;
        }
    }
    ctx->pc = 0x33A584u;
label_33a584:
    // 0x33a584: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33a584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a588:
    // 0x33a588: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33a588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a58c:
    // 0x33a58c: 0xc0550f8  jal         func_1543E0
label_33a590:
    if (ctx->pc == 0x33A590u) {
        ctx->pc = 0x33A590u;
            // 0x33a590: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x33A594u;
        goto label_33a594;
    }
    ctx->pc = 0x33A58Cu;
    SET_GPR_U32(ctx, 31, 0x33A594u);
    ctx->pc = 0x33A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A58Cu;
            // 0x33a590: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A594u; }
        if (ctx->pc != 0x33A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A594u; }
        if (ctx->pc != 0x33A594u) { return; }
    }
    ctx->pc = 0x33A594u;
label_33a594:
    // 0x33a594: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_33a598:
    // 0x33a598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33a598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33a59c:
    // 0x33a59c: 0x0  nop
    ctx->pc = 0x33a59cu;
    // NOP
label_33a5a0:
    // 0x33a5a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x33a5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33a5a4:
    // 0x33a5a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_33a5a8:
    if (ctx->pc == 0x33A5A8u) {
        ctx->pc = 0x33A5A8u;
            // 0x33a5a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x33A5ACu;
        goto label_33a5ac;
    }
    ctx->pc = 0x33A5A4u;
    {
        const bool branch_taken_0x33a5a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33a5a4) {
            ctx->pc = 0x33A5A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A5A4u;
            // 0x33a5a8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A5B8u;
            goto label_33a5b8;
        }
    }
    ctx->pc = 0x33A5ACu;
label_33a5ac:
    // 0x33a5ac: 0xc0747d0  jal         func_1D1F40
label_33a5b0:
    if (ctx->pc == 0x33A5B0u) {
        ctx->pc = 0x33A5B4u;
        goto label_33a5b4;
    }
    ctx->pc = 0x33A5ACu;
    SET_GPR_U32(ctx, 31, 0x33A5B4u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A5B4u; }
        if (ctx->pc != 0x33A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A5B4u; }
        if (ctx->pc != 0x33A5B4u) { return; }
    }
    ctx->pc = 0x33A5B4u;
label_33a5b4:
    // 0x33a5b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x33a5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33a5b8:
    // 0x33a5b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33a5bc:
    // 0x33a5bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x33a5bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33a5c0:
    // 0x33a5c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x33a5c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33a5c4:
    // 0x33a5c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x33a5c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33a5c8:
    // 0x33a5c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33a5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33a5cc:
    // 0x33a5cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33a5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33a5d0:
    // 0x33a5d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33a5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a5d4:
    // 0x33a5d4: 0x3e00008  jr          $ra
label_33a5d8:
    if (ctx->pc == 0x33A5D8u) {
        ctx->pc = 0x33A5D8u;
            // 0x33a5d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x33A5DCu;
        goto label_33a5dc;
    }
    ctx->pc = 0x33A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A5D4u;
            // 0x33a5d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A5DCu;
label_33a5dc:
    // 0x33a5dc: 0x0  nop
    ctx->pc = 0x33a5dcu;
    // NOP
label_33a5e0:
    // 0x33a5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a5e4:
    // 0x33a5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a5e8:
    // 0x33a5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a5ec:
    // 0x33a5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a5f0:
    // 0x33a5f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a5f4:
    // 0x33a5f4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a5f8:
    if (ctx->pc == 0x33A5F8u) {
        ctx->pc = 0x33A5F8u;
            // 0x33a5f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A5FCu;
        goto label_33a5fc;
    }
    ctx->pc = 0x33A5F4u;
    {
        const bool branch_taken_0x33a5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A5F4u;
            // 0x33a5f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a5f4) {
            ctx->pc = 0x33A660u;
            goto label_33a660;
        }
    }
    ctx->pc = 0x33A5FCu;
label_33a5fc:
    // 0x33a5fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a600:
    // 0x33a600: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x33a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_33a604:
    // 0x33a604: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a608:
    if (ctx->pc == 0x33A608u) {
        ctx->pc = 0x33A608u;
            // 0x33a608: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A60Cu;
        goto label_33a60c;
    }
    ctx->pc = 0x33A604u;
    {
        const bool branch_taken_0x33a604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A604u;
            // 0x33a608: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a604) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A60Cu;
label_33a60c:
    // 0x33a60c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a610:
    // 0x33a610: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a614:
    // 0x33a614: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a618:
    if (ctx->pc == 0x33A618u) {
        ctx->pc = 0x33A618u;
            // 0x33a618: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A61Cu;
        goto label_33a61c;
    }
    ctx->pc = 0x33A614u;
    {
        const bool branch_taken_0x33a614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A614u;
            // 0x33a618: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a614) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A61Cu;
label_33a61c:
    // 0x33a61c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a620:
    // 0x33a620: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a624:
    // 0x33a624: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a628:
    if (ctx->pc == 0x33A628u) {
        ctx->pc = 0x33A628u;
            // 0x33a628: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A62Cu;
        goto label_33a62c;
    }
    ctx->pc = 0x33A624u;
    {
        const bool branch_taken_0x33a624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A624u;
            // 0x33a628: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a624) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A62Cu;
label_33a62c:
    // 0x33a62c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a630:
    // 0x33a630: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a634:
    // 0x33a634: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a638:
    // 0x33a638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a63c:
    if (ctx->pc == 0x33A63Cu) {
        ctx->pc = 0x33A63Cu;
            // 0x33a63c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33A640u;
        goto label_33a640;
    }
    ctx->pc = 0x33A638u;
    {
        const bool branch_taken_0x33a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A638u;
            // 0x33a63c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a638) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A640u;
label_33a640:
    // 0x33a640: 0xc07507c  jal         func_1D41F0
label_33a644:
    if (ctx->pc == 0x33A644u) {
        ctx->pc = 0x33A644u;
            // 0x33a644: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33A648u;
        goto label_33a648;
    }
    ctx->pc = 0x33A640u;
    SET_GPR_U32(ctx, 31, 0x33A648u);
    ctx->pc = 0x33A644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A640u;
            // 0x33a644: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A648u; }
        if (ctx->pc != 0x33A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A648u; }
        if (ctx->pc != 0x33A648u) { return; }
    }
    ctx->pc = 0x33A648u;
label_33a648:
    // 0x33a648: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33a648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33a64c:
    // 0x33a64c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33a64cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33a650:
    // 0x33a650: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33a654:
    if (ctx->pc == 0x33A654u) {
        ctx->pc = 0x33A654u;
            // 0x33a654: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A658u;
        goto label_33a658;
    }
    ctx->pc = 0x33A650u;
    {
        const bool branch_taken_0x33a650 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a650) {
            ctx->pc = 0x33A654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A650u;
            // 0x33a654: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A664u;
            goto label_33a664;
        }
    }
    ctx->pc = 0x33A658u;
label_33a658:
    // 0x33a658: 0xc0400a8  jal         func_1002A0
label_33a65c:
    if (ctx->pc == 0x33A65Cu) {
        ctx->pc = 0x33A65Cu;
            // 0x33a65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A660u;
        goto label_33a660;
    }
    ctx->pc = 0x33A658u;
    SET_GPR_U32(ctx, 31, 0x33A660u);
    ctx->pc = 0x33A65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A658u;
            // 0x33a65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A660u; }
        if (ctx->pc != 0x33A660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A660u; }
        if (ctx->pc != 0x33A660u) { return; }
    }
    ctx->pc = 0x33A660u;
label_33a660:
    // 0x33a660: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a664:
    // 0x33a664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a668:
    // 0x33a668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a66c:
    // 0x33a66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a670:
    // 0x33a670: 0x3e00008  jr          $ra
label_33a674:
    if (ctx->pc == 0x33A674u) {
        ctx->pc = 0x33A674u;
            // 0x33a674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33A678u;
        goto label_33a678;
    }
    ctx->pc = 0x33A670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A670u;
            // 0x33a674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A678u;
label_33a678:
    // 0x33a678: 0x0  nop
    ctx->pc = 0x33a678u;
    // NOP
label_33a67c:
    // 0x33a67c: 0x0  nop
    ctx->pc = 0x33a67cu;
    // NOP
label_33a680:
    // 0x33a680: 0x3e00008  jr          $ra
label_33a684:
    if (ctx->pc == 0x33A684u) {
        ctx->pc = 0x33A688u;
        goto label_33a688;
    }
    ctx->pc = 0x33A680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A688u;
label_33a688:
    // 0x33a688: 0x0  nop
    ctx->pc = 0x33a688u;
    // NOP
label_33a68c:
    // 0x33a68c: 0x0  nop
    ctx->pc = 0x33a68cu;
    // NOP
label_33a690:
    // 0x33a690: 0x3e00008  jr          $ra
label_33a694:
    if (ctx->pc == 0x33A694u) {
        ctx->pc = 0x33A694u;
            // 0x33a694: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x33A698u;
        goto label_33a698;
    }
    ctx->pc = 0x33A690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A690u;
            // 0x33a694: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A698u;
label_33a698:
    // 0x33a698: 0x0  nop
    ctx->pc = 0x33a698u;
    // NOP
label_33a69c:
    // 0x33a69c: 0x0  nop
    ctx->pc = 0x33a69cu;
    // NOP
label_33a6a0:
    // 0x33a6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a6a4:
    // 0x33a6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a6a8:
    // 0x33a6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a6ac:
    // 0x33a6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a6b0:
    // 0x33a6b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a6b4:
    // 0x33a6b4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a6b8:
    if (ctx->pc == 0x33A6B8u) {
        ctx->pc = 0x33A6B8u;
            // 0x33a6b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A6BCu;
        goto label_33a6bc;
    }
    ctx->pc = 0x33A6B4u;
    {
        const bool branch_taken_0x33a6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A6B4u;
            // 0x33a6b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6b4) {
            ctx->pc = 0x33A720u;
            goto label_33a720;
        }
    }
    ctx->pc = 0x33A6BCu;
label_33a6bc:
    // 0x33a6bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a6c0:
    // 0x33a6c0: 0x24425030  addiu       $v0, $v0, 0x5030
    ctx->pc = 0x33a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20528));
label_33a6c4:
    // 0x33a6c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a6c8:
    if (ctx->pc == 0x33A6C8u) {
        ctx->pc = 0x33A6C8u;
            // 0x33a6c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A6CCu;
        goto label_33a6cc;
    }
    ctx->pc = 0x33A6C4u;
    {
        const bool branch_taken_0x33a6c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A6C4u;
            // 0x33a6c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6c4) {
            ctx->pc = 0x33A708u;
            goto label_33a708;
        }
    }
    ctx->pc = 0x33A6CCu;
label_33a6cc:
    // 0x33a6cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a6d0:
    // 0x33a6d0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a6d4:
    // 0x33a6d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a6d8:
    if (ctx->pc == 0x33A6D8u) {
        ctx->pc = 0x33A6D8u;
            // 0x33a6d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A6DCu;
        goto label_33a6dc;
    }
    ctx->pc = 0x33A6D4u;
    {
        const bool branch_taken_0x33a6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A6D4u;
            // 0x33a6d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6d4) {
            ctx->pc = 0x33A708u;
            goto label_33a708;
        }
    }
    ctx->pc = 0x33A6DCu;
label_33a6dc:
    // 0x33a6dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a6e0:
    // 0x33a6e0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a6e4:
    // 0x33a6e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a6e8:
    if (ctx->pc == 0x33A6E8u) {
        ctx->pc = 0x33A6E8u;
            // 0x33a6e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A6ECu;
        goto label_33a6ec;
    }
    ctx->pc = 0x33A6E4u;
    {
        const bool branch_taken_0x33a6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A6E4u;
            // 0x33a6e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6e4) {
            ctx->pc = 0x33A708u;
            goto label_33a708;
        }
    }
    ctx->pc = 0x33A6ECu;
label_33a6ec:
    // 0x33a6ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a6f0:
    // 0x33a6f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a6f4:
    // 0x33a6f4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a6f8:
    // 0x33a6f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a6fc:
    if (ctx->pc == 0x33A6FCu) {
        ctx->pc = 0x33A6FCu;
            // 0x33a6fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33A700u;
        goto label_33a700;
    }
    ctx->pc = 0x33A6F8u;
    {
        const bool branch_taken_0x33a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A6F8u;
            // 0x33a6fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6f8) {
            ctx->pc = 0x33A708u;
            goto label_33a708;
        }
    }
    ctx->pc = 0x33A700u;
label_33a700:
    // 0x33a700: 0xc07507c  jal         func_1D41F0
label_33a704:
    if (ctx->pc == 0x33A704u) {
        ctx->pc = 0x33A704u;
            // 0x33a704: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33A708u;
        goto label_33a708;
    }
    ctx->pc = 0x33A700u;
    SET_GPR_U32(ctx, 31, 0x33A708u);
    ctx->pc = 0x33A704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A700u;
            // 0x33a704: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A708u; }
        if (ctx->pc != 0x33A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A708u; }
        if (ctx->pc != 0x33A708u) { return; }
    }
    ctx->pc = 0x33A708u;
label_33a708:
    // 0x33a708: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33a70c:
    // 0x33a70c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33a70cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33a710:
    // 0x33a710: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33a714:
    if (ctx->pc == 0x33A714u) {
        ctx->pc = 0x33A714u;
            // 0x33a714: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A718u;
        goto label_33a718;
    }
    ctx->pc = 0x33A710u;
    {
        const bool branch_taken_0x33a710 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a710) {
            ctx->pc = 0x33A714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A710u;
            // 0x33a714: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A724u;
            goto label_33a724;
        }
    }
    ctx->pc = 0x33A718u;
label_33a718:
    // 0x33a718: 0xc0400a8  jal         func_1002A0
label_33a71c:
    if (ctx->pc == 0x33A71Cu) {
        ctx->pc = 0x33A71Cu;
            // 0x33a71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A720u;
        goto label_33a720;
    }
    ctx->pc = 0x33A718u;
    SET_GPR_U32(ctx, 31, 0x33A720u);
    ctx->pc = 0x33A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A718u;
            // 0x33a71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A720u; }
        if (ctx->pc != 0x33A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A720u; }
        if (ctx->pc != 0x33A720u) { return; }
    }
    ctx->pc = 0x33A720u;
label_33a720:
    // 0x33a720: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a724:
    // 0x33a724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a728:
    // 0x33a728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a72c:
    // 0x33a72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a730:
    // 0x33a730: 0x3e00008  jr          $ra
label_33a734:
    if (ctx->pc == 0x33A734u) {
        ctx->pc = 0x33A734u;
            // 0x33a734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33A738u;
        goto label_33a738;
    }
    ctx->pc = 0x33A730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A730u;
            // 0x33a734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A738u;
label_33a738:
    // 0x33a738: 0x0  nop
    ctx->pc = 0x33a738u;
    // NOP
label_33a73c:
    // 0x33a73c: 0x0  nop
    ctx->pc = 0x33a73cu;
    // NOP
label_33a740:
    // 0x33a740: 0x3e00008  jr          $ra
label_33a744:
    if (ctx->pc == 0x33A744u) {
        ctx->pc = 0x33A748u;
        goto label_33a748;
    }
    ctx->pc = 0x33A740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A748u;
label_33a748:
    // 0x33a748: 0x0  nop
    ctx->pc = 0x33a748u;
    // NOP
label_33a74c:
    // 0x33a74c: 0x0  nop
    ctx->pc = 0x33a74cu;
    // NOP
label_33a750:
    // 0x33a750: 0x3e00008  jr          $ra
label_33a754:
    if (ctx->pc == 0x33A754u) {
        ctx->pc = 0x33A754u;
            // 0x33a754: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x33A758u;
        goto label_33a758;
    }
    ctx->pc = 0x33A750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A750u;
            // 0x33a754: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A758u;
label_33a758:
    // 0x33a758: 0x0  nop
    ctx->pc = 0x33a758u;
    // NOP
label_33a75c:
    // 0x33a75c: 0x0  nop
    ctx->pc = 0x33a75cu;
    // NOP
label_33a760:
    // 0x33a760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a764:
    // 0x33a764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a768:
    // 0x33a768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a76c:
    // 0x33a76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a770:
    // 0x33a770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a774:
    // 0x33a774: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a778:
    if (ctx->pc == 0x33A778u) {
        ctx->pc = 0x33A778u;
            // 0x33a778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A77Cu;
        goto label_33a77c;
    }
    ctx->pc = 0x33A774u;
    {
        const bool branch_taken_0x33a774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A774u;
            // 0x33a778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a774) {
            ctx->pc = 0x33A7E0u;
            goto label_33a7e0;
        }
    }
    ctx->pc = 0x33A77Cu;
label_33a77c:
    // 0x33a77c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a780:
    // 0x33a780: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x33a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
label_33a784:
    // 0x33a784: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a788:
    if (ctx->pc == 0x33A788u) {
        ctx->pc = 0x33A788u;
            // 0x33a788: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A78Cu;
        goto label_33a78c;
    }
    ctx->pc = 0x33A784u;
    {
        const bool branch_taken_0x33a784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A784u;
            // 0x33a788: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a784) {
            ctx->pc = 0x33A7C8u;
            goto label_33a7c8;
        }
    }
    ctx->pc = 0x33A78Cu;
label_33a78c:
    // 0x33a78c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a790:
    // 0x33a790: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a794:
    // 0x33a794: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a798:
    if (ctx->pc == 0x33A798u) {
        ctx->pc = 0x33A798u;
            // 0x33a798: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A79Cu;
        goto label_33a79c;
    }
    ctx->pc = 0x33A794u;
    {
        const bool branch_taken_0x33a794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A794u;
            // 0x33a798: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a794) {
            ctx->pc = 0x33A7C8u;
            goto label_33a7c8;
        }
    }
    ctx->pc = 0x33A79Cu;
label_33a79c:
    // 0x33a79c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a7a0:
    // 0x33a7a0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a7a4:
    // 0x33a7a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a7a8:
    if (ctx->pc == 0x33A7A8u) {
        ctx->pc = 0x33A7A8u;
            // 0x33a7a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A7ACu;
        goto label_33a7ac;
    }
    ctx->pc = 0x33A7A4u;
    {
        const bool branch_taken_0x33a7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7A4u;
            // 0x33a7a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7a4) {
            ctx->pc = 0x33A7C8u;
            goto label_33a7c8;
        }
    }
    ctx->pc = 0x33A7ACu;
label_33a7ac:
    // 0x33a7ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a7b0:
    // 0x33a7b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a7b4:
    // 0x33a7b4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a7b8:
    // 0x33a7b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a7bc:
    if (ctx->pc == 0x33A7BCu) {
        ctx->pc = 0x33A7BCu;
            // 0x33a7bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33A7C0u;
        goto label_33a7c0;
    }
    ctx->pc = 0x33A7B8u;
    {
        const bool branch_taken_0x33a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7B8u;
            // 0x33a7bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7b8) {
            ctx->pc = 0x33A7C8u;
            goto label_33a7c8;
        }
    }
    ctx->pc = 0x33A7C0u;
label_33a7c0:
    // 0x33a7c0: 0xc07507c  jal         func_1D41F0
label_33a7c4:
    if (ctx->pc == 0x33A7C4u) {
        ctx->pc = 0x33A7C4u;
            // 0x33a7c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33A7C8u;
        goto label_33a7c8;
    }
    ctx->pc = 0x33A7C0u;
    SET_GPR_U32(ctx, 31, 0x33A7C8u);
    ctx->pc = 0x33A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7C0u;
            // 0x33a7c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A7C8u; }
        if (ctx->pc != 0x33A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A7C8u; }
        if (ctx->pc != 0x33A7C8u) { return; }
    }
    ctx->pc = 0x33A7C8u;
label_33a7c8:
    // 0x33a7c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33a7cc:
    // 0x33a7cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33a7ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33a7d0:
    // 0x33a7d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33a7d4:
    if (ctx->pc == 0x33A7D4u) {
        ctx->pc = 0x33A7D4u;
            // 0x33a7d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A7D8u;
        goto label_33a7d8;
    }
    ctx->pc = 0x33A7D0u;
    {
        const bool branch_taken_0x33a7d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a7d0) {
            ctx->pc = 0x33A7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7D0u;
            // 0x33a7d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A7E4u;
            goto label_33a7e4;
        }
    }
    ctx->pc = 0x33A7D8u;
label_33a7d8:
    // 0x33a7d8: 0xc0400a8  jal         func_1002A0
label_33a7dc:
    if (ctx->pc == 0x33A7DCu) {
        ctx->pc = 0x33A7DCu;
            // 0x33a7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A7E0u;
        goto label_33a7e0;
    }
    ctx->pc = 0x33A7D8u;
    SET_GPR_U32(ctx, 31, 0x33A7E0u);
    ctx->pc = 0x33A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7D8u;
            // 0x33a7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A7E0u; }
        if (ctx->pc != 0x33A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A7E0u; }
        if (ctx->pc != 0x33A7E0u) { return; }
    }
    ctx->pc = 0x33A7E0u;
label_33a7e0:
    // 0x33a7e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a7e4:
    // 0x33a7e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a7e8:
    // 0x33a7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a7ec:
    // 0x33a7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a7f0:
    // 0x33a7f0: 0x3e00008  jr          $ra
label_33a7f4:
    if (ctx->pc == 0x33A7F4u) {
        ctx->pc = 0x33A7F4u;
            // 0x33a7f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33A7F8u;
        goto label_33a7f8;
    }
    ctx->pc = 0x33A7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A7F0u;
            // 0x33a7f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A7F8u;
label_33a7f8:
    // 0x33a7f8: 0x0  nop
    ctx->pc = 0x33a7f8u;
    // NOP
label_33a7fc:
    // 0x33a7fc: 0x0  nop
    ctx->pc = 0x33a7fcu;
    // NOP
label_33a800:
    // 0x33a800: 0x3e00008  jr          $ra
label_33a804:
    if (ctx->pc == 0x33A804u) {
        ctx->pc = 0x33A808u;
        goto label_33a808;
    }
    ctx->pc = 0x33A800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A808u;
label_33a808:
    // 0x33a808: 0x0  nop
    ctx->pc = 0x33a808u;
    // NOP
label_33a80c:
    // 0x33a80c: 0x0  nop
    ctx->pc = 0x33a80cu;
    // NOP
label_33a810:
    // 0x33a810: 0x3e00008  jr          $ra
label_33a814:
    if (ctx->pc == 0x33A814u) {
        ctx->pc = 0x33A814u;
            // 0x33a814: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x33A818u;
        goto label_33a818;
    }
    ctx->pc = 0x33A810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A810u;
            // 0x33a814: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A818u;
label_33a818:
    // 0x33a818: 0x0  nop
    ctx->pc = 0x33a818u;
    // NOP
label_33a81c:
    // 0x33a81c: 0x0  nop
    ctx->pc = 0x33a81cu;
    // NOP
label_33a820:
    // 0x33a820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a824:
    // 0x33a824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a828:
    // 0x33a828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a82c:
    // 0x33a82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a830:
    // 0x33a830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a834:
    // 0x33a834: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a838:
    if (ctx->pc == 0x33A838u) {
        ctx->pc = 0x33A838u;
            // 0x33a838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A83Cu;
        goto label_33a83c;
    }
    ctx->pc = 0x33A834u;
    {
        const bool branch_taken_0x33a834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A834u;
            // 0x33a838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a834) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A83Cu;
label_33a83c:
    // 0x33a83c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a840:
    // 0x33a840: 0x244250d0  addiu       $v0, $v0, 0x50D0
    ctx->pc = 0x33a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20688));
label_33a844:
    // 0x33a844: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a848:
    if (ctx->pc == 0x33A848u) {
        ctx->pc = 0x33A848u;
            // 0x33a848: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A84Cu;
        goto label_33a84c;
    }
    ctx->pc = 0x33A844u;
    {
        const bool branch_taken_0x33a844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A844u;
            // 0x33a848: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a844) {
            ctx->pc = 0x33A888u;
            goto label_33a888;
        }
    }
    ctx->pc = 0x33A84Cu;
label_33a84c:
    // 0x33a84c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a850:
    // 0x33a850: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a854:
    // 0x33a854: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a858:
    if (ctx->pc == 0x33A858u) {
        ctx->pc = 0x33A858u;
            // 0x33a858: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A85Cu;
        goto label_33a85c;
    }
    ctx->pc = 0x33A854u;
    {
        const bool branch_taken_0x33a854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A854u;
            // 0x33a858: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a854) {
            ctx->pc = 0x33A888u;
            goto label_33a888;
        }
    }
    ctx->pc = 0x33A85Cu;
label_33a85c:
    // 0x33a85c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a860:
    // 0x33a860: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a864:
    // 0x33a864: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a868:
    if (ctx->pc == 0x33A868u) {
        ctx->pc = 0x33A868u;
            // 0x33a868: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A86Cu;
        goto label_33a86c;
    }
    ctx->pc = 0x33A864u;
    {
        const bool branch_taken_0x33a864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A864u;
            // 0x33a868: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a864) {
            ctx->pc = 0x33A888u;
            goto label_33a888;
        }
    }
    ctx->pc = 0x33A86Cu;
label_33a86c:
    // 0x33a86c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a870:
    // 0x33a870: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a874:
    // 0x33a874: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a878:
    // 0x33a878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a87c:
    if (ctx->pc == 0x33A87Cu) {
        ctx->pc = 0x33A87Cu;
            // 0x33a87c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33A880u;
        goto label_33a880;
    }
    ctx->pc = 0x33A878u;
    {
        const bool branch_taken_0x33a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A878u;
            // 0x33a87c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a878) {
            ctx->pc = 0x33A888u;
            goto label_33a888;
        }
    }
    ctx->pc = 0x33A880u;
label_33a880:
    // 0x33a880: 0xc07507c  jal         func_1D41F0
label_33a884:
    if (ctx->pc == 0x33A884u) {
        ctx->pc = 0x33A884u;
            // 0x33a884: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33A888u;
        goto label_33a888;
    }
    ctx->pc = 0x33A880u;
    SET_GPR_U32(ctx, 31, 0x33A888u);
    ctx->pc = 0x33A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A880u;
            // 0x33a884: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A888u; }
        if (ctx->pc != 0x33A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A888u; }
        if (ctx->pc != 0x33A888u) { return; }
    }
    ctx->pc = 0x33A888u;
label_33a888:
    // 0x33a888: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33a888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33a88c:
    // 0x33a88c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33a88cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33a890:
    // 0x33a890: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33a894:
    if (ctx->pc == 0x33A894u) {
        ctx->pc = 0x33A894u;
            // 0x33a894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A898u;
        goto label_33a898;
    }
    ctx->pc = 0x33A890u;
    {
        const bool branch_taken_0x33a890 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a890) {
            ctx->pc = 0x33A894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A890u;
            // 0x33a894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A8A4u;
            goto label_33a8a4;
        }
    }
    ctx->pc = 0x33A898u;
label_33a898:
    // 0x33a898: 0xc0400a8  jal         func_1002A0
label_33a89c:
    if (ctx->pc == 0x33A89Cu) {
        ctx->pc = 0x33A89Cu;
            // 0x33a89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A8A0u;
        goto label_33a8a0;
    }
    ctx->pc = 0x33A898u;
    SET_GPR_U32(ctx, 31, 0x33A8A0u);
    ctx->pc = 0x33A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A898u;
            // 0x33a89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A8A0u; }
        if (ctx->pc != 0x33A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A8A0u; }
        if (ctx->pc != 0x33A8A0u) { return; }
    }
    ctx->pc = 0x33A8A0u;
label_33a8a0:
    // 0x33a8a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a8a4:
    // 0x33a8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a8a8:
    // 0x33a8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a8ac:
    // 0x33a8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a8b0:
    // 0x33a8b0: 0x3e00008  jr          $ra
label_33a8b4:
    if (ctx->pc == 0x33A8B4u) {
        ctx->pc = 0x33A8B4u;
            // 0x33a8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33A8B8u;
        goto label_33a8b8;
    }
    ctx->pc = 0x33A8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A8B0u;
            // 0x33a8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A8B8u;
label_33a8b8:
    // 0x33a8b8: 0x0  nop
    ctx->pc = 0x33a8b8u;
    // NOP
label_33a8bc:
    // 0x33a8bc: 0x0  nop
    ctx->pc = 0x33a8bcu;
    // NOP
label_33a8c0:
    // 0x33a8c0: 0x3e00008  jr          $ra
label_33a8c4:
    if (ctx->pc == 0x33A8C4u) {
        ctx->pc = 0x33A8C8u;
        goto label_33a8c8;
    }
    ctx->pc = 0x33A8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A8C8u;
label_33a8c8:
    // 0x33a8c8: 0x0  nop
    ctx->pc = 0x33a8c8u;
    // NOP
label_33a8cc:
    // 0x33a8cc: 0x0  nop
    ctx->pc = 0x33a8ccu;
    // NOP
label_33a8d0:
    // 0x33a8d0: 0x3e00008  jr          $ra
label_33a8d4:
    if (ctx->pc == 0x33A8D4u) {
        ctx->pc = 0x33A8D4u;
            // 0x33a8d4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x33A8D8u;
        goto label_33a8d8;
    }
    ctx->pc = 0x33A8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A8D0u;
            // 0x33a8d4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A8D8u;
label_33a8d8:
    // 0x33a8d8: 0x0  nop
    ctx->pc = 0x33a8d8u;
    // NOP
label_33a8dc:
    // 0x33a8dc: 0x0  nop
    ctx->pc = 0x33a8dcu;
    // NOP
label_33a8e0:
    // 0x33a8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a8e4:
    // 0x33a8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a8e8:
    // 0x33a8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a8ec:
    // 0x33a8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a8f0:
    // 0x33a8f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a8f4:
    // 0x33a8f4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a8f8:
    if (ctx->pc == 0x33A8F8u) {
        ctx->pc = 0x33A8F8u;
            // 0x33a8f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A8FCu;
        goto label_33a8fc;
    }
    ctx->pc = 0x33A8F4u;
    {
        const bool branch_taken_0x33a8f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A8F4u;
            // 0x33a8f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8f4) {
            ctx->pc = 0x33A960u;
            goto label_33a960;
        }
    }
    ctx->pc = 0x33A8FCu;
label_33a8fc:
    // 0x33a8fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a900:
    // 0x33a900: 0x24425120  addiu       $v0, $v0, 0x5120
    ctx->pc = 0x33a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20768));
label_33a904:
    // 0x33a904: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a908:
    if (ctx->pc == 0x33A908u) {
        ctx->pc = 0x33A908u;
            // 0x33a908: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A90Cu;
        goto label_33a90c;
    }
    ctx->pc = 0x33A904u;
    {
        const bool branch_taken_0x33a904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A904u;
            // 0x33a908: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a904) {
            ctx->pc = 0x33A948u;
            goto label_33a948;
        }
    }
    ctx->pc = 0x33A90Cu;
label_33a90c:
    // 0x33a90c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a910:
    // 0x33a910: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a914:
    // 0x33a914: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a918:
    if (ctx->pc == 0x33A918u) {
        ctx->pc = 0x33A918u;
            // 0x33a918: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A91Cu;
        goto label_33a91c;
    }
    ctx->pc = 0x33A914u;
    {
        const bool branch_taken_0x33a914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A914u;
            // 0x33a918: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a914) {
            ctx->pc = 0x33A948u;
            goto label_33a948;
        }
    }
    ctx->pc = 0x33A91Cu;
label_33a91c:
    // 0x33a91c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a920:
    // 0x33a920: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a924:
    // 0x33a924: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a928:
    if (ctx->pc == 0x33A928u) {
        ctx->pc = 0x33A928u;
            // 0x33a928: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A92Cu;
        goto label_33a92c;
    }
    ctx->pc = 0x33A924u;
    {
        const bool branch_taken_0x33a924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A924u;
            // 0x33a928: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a924) {
            ctx->pc = 0x33A948u;
            goto label_33a948;
        }
    }
    ctx->pc = 0x33A92Cu;
label_33a92c:
    // 0x33a92c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a930:
    // 0x33a930: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a934:
    // 0x33a934: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a938:
    // 0x33a938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a93c:
    if (ctx->pc == 0x33A93Cu) {
        ctx->pc = 0x33A93Cu;
            // 0x33a93c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33A940u;
        goto label_33a940;
    }
    ctx->pc = 0x33A938u;
    {
        const bool branch_taken_0x33a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A938u;
            // 0x33a93c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a938) {
            ctx->pc = 0x33A948u;
            goto label_33a948;
        }
    }
    ctx->pc = 0x33A940u;
label_33a940:
    // 0x33a940: 0xc07507c  jal         func_1D41F0
label_33a944:
    if (ctx->pc == 0x33A944u) {
        ctx->pc = 0x33A944u;
            // 0x33a944: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33A948u;
        goto label_33a948;
    }
    ctx->pc = 0x33A940u;
    SET_GPR_U32(ctx, 31, 0x33A948u);
    ctx->pc = 0x33A944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A940u;
            // 0x33a944: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A948u; }
        if (ctx->pc != 0x33A948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A948u; }
        if (ctx->pc != 0x33A948u) { return; }
    }
    ctx->pc = 0x33A948u;
label_33a948:
    // 0x33a948: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33a94c:
    // 0x33a94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33a94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33a950:
    // 0x33a950: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33a954:
    if (ctx->pc == 0x33A954u) {
        ctx->pc = 0x33A954u;
            // 0x33a954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A958u;
        goto label_33a958;
    }
    ctx->pc = 0x33A950u;
    {
        const bool branch_taken_0x33a950 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a950) {
            ctx->pc = 0x33A954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A950u;
            // 0x33a954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A964u;
            goto label_33a964;
        }
    }
    ctx->pc = 0x33A958u;
label_33a958:
    // 0x33a958: 0xc0400a8  jal         func_1002A0
label_33a95c:
    if (ctx->pc == 0x33A95Cu) {
        ctx->pc = 0x33A95Cu;
            // 0x33a95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A960u;
        goto label_33a960;
    }
    ctx->pc = 0x33A958u;
    SET_GPR_U32(ctx, 31, 0x33A960u);
    ctx->pc = 0x33A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A958u;
            // 0x33a95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A960u; }
        if (ctx->pc != 0x33A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A960u; }
        if (ctx->pc != 0x33A960u) { return; }
    }
    ctx->pc = 0x33A960u;
label_33a960:
    // 0x33a960: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a964:
    // 0x33a964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a968:
    // 0x33a968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a96c:
    // 0x33a96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a970:
    // 0x33a970: 0x3e00008  jr          $ra
label_33a974:
    if (ctx->pc == 0x33A974u) {
        ctx->pc = 0x33A974u;
            // 0x33a974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33A978u;
        goto label_33a978;
    }
    ctx->pc = 0x33A970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A970u;
            // 0x33a974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A978u;
label_33a978:
    // 0x33a978: 0x0  nop
    ctx->pc = 0x33a978u;
    // NOP
label_33a97c:
    // 0x33a97c: 0x0  nop
    ctx->pc = 0x33a97cu;
    // NOP
label_33a980:
    // 0x33a980: 0x3e00008  jr          $ra
label_33a984:
    if (ctx->pc == 0x33A984u) {
        ctx->pc = 0x33A988u;
        goto label_33a988;
    }
    ctx->pc = 0x33A980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A988u;
label_33a988:
    // 0x33a988: 0x0  nop
    ctx->pc = 0x33a988u;
    // NOP
label_33a98c:
    // 0x33a98c: 0x0  nop
    ctx->pc = 0x33a98cu;
    // NOP
label_33a990:
    // 0x33a990: 0x3e00008  jr          $ra
label_33a994:
    if (ctx->pc == 0x33A994u) {
        ctx->pc = 0x33A994u;
            // 0x33a994: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x33A998u;
        goto label_33a998;
    }
    ctx->pc = 0x33A990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A990u;
            // 0x33a994: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A998u;
label_33a998:
    // 0x33a998: 0x0  nop
    ctx->pc = 0x33a998u;
    // NOP
label_33a99c:
    // 0x33a99c: 0x0  nop
    ctx->pc = 0x33a99cu;
    // NOP
label_33a9a0:
    // 0x33a9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33a9a4:
    // 0x33a9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33a9a8:
    // 0x33a9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a9ac:
    // 0x33a9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a9b0:
    // 0x33a9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a9b4:
    // 0x33a9b4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33a9b8:
    if (ctx->pc == 0x33A9B8u) {
        ctx->pc = 0x33A9B8u;
            // 0x33a9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33A9BCu;
        goto label_33a9bc;
    }
    ctx->pc = 0x33A9B4u;
    {
        const bool branch_taken_0x33a9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A9B4u;
            // 0x33a9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9b4) {
            ctx->pc = 0x33AA20u;
            goto label_33aa20;
        }
    }
    ctx->pc = 0x33A9BCu;
label_33a9bc:
    // 0x33a9bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33a9c0:
    // 0x33a9c0: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x33a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
label_33a9c4:
    // 0x33a9c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33a9c8:
    if (ctx->pc == 0x33A9C8u) {
        ctx->pc = 0x33A9C8u;
            // 0x33a9c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A9CCu;
        goto label_33a9cc;
    }
    ctx->pc = 0x33A9C4u;
    {
        const bool branch_taken_0x33a9c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A9C4u;
            // 0x33a9c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9c4) {
            ctx->pc = 0x33AA08u;
            goto label_33aa08;
        }
    }
    ctx->pc = 0x33A9CCu;
label_33a9cc:
    // 0x33a9cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a9d0:
    // 0x33a9d0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x33a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_33a9d4:
    // 0x33a9d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33a9d8:
    if (ctx->pc == 0x33A9D8u) {
        ctx->pc = 0x33A9D8u;
            // 0x33a9d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A9DCu;
        goto label_33a9dc;
    }
    ctx->pc = 0x33A9D4u;
    {
        const bool branch_taken_0x33a9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A9D4u;
            // 0x33a9d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9d4) {
            ctx->pc = 0x33AA08u;
            goto label_33aa08;
        }
    }
    ctx->pc = 0x33A9DCu;
label_33a9dc:
    // 0x33a9dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33a9e0:
    // 0x33a9e0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x33a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_33a9e4:
    // 0x33a9e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33a9e8:
    if (ctx->pc == 0x33A9E8u) {
        ctx->pc = 0x33A9E8u;
            // 0x33a9e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33A9ECu;
        goto label_33a9ec;
    }
    ctx->pc = 0x33A9E4u;
    {
        const bool branch_taken_0x33a9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A9E4u;
            // 0x33a9e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9e4) {
            ctx->pc = 0x33AA08u;
            goto label_33aa08;
        }
    }
    ctx->pc = 0x33A9ECu;
label_33a9ec:
    // 0x33a9ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33a9f0:
    // 0x33a9f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33a9f4:
    // 0x33a9f4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33a9f8:
    // 0x33a9f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33a9fc:
    if (ctx->pc == 0x33A9FCu) {
        ctx->pc = 0x33A9FCu;
            // 0x33a9fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33AA00u;
        goto label_33aa00;
    }
    ctx->pc = 0x33A9F8u;
    {
        const bool branch_taken_0x33a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A9F8u;
            // 0x33a9fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9f8) {
            ctx->pc = 0x33AA08u;
            goto label_33aa08;
        }
    }
    ctx->pc = 0x33AA00u;
label_33aa00:
    // 0x33aa00: 0xc07507c  jal         func_1D41F0
label_33aa04:
    if (ctx->pc == 0x33AA04u) {
        ctx->pc = 0x33AA04u;
            // 0x33aa04: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33AA08u;
        goto label_33aa08;
    }
    ctx->pc = 0x33AA00u;
    SET_GPR_U32(ctx, 31, 0x33AA08u);
    ctx->pc = 0x33AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA00u;
            // 0x33aa04: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AA08u; }
        if (ctx->pc != 0x33AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AA08u; }
        if (ctx->pc != 0x33AA08u) { return; }
    }
    ctx->pc = 0x33AA08u;
label_33aa08:
    // 0x33aa08: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33aa0c:
    // 0x33aa0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33aa0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33aa10:
    // 0x33aa10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33aa14:
    if (ctx->pc == 0x33AA14u) {
        ctx->pc = 0x33AA14u;
            // 0x33aa14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AA18u;
        goto label_33aa18;
    }
    ctx->pc = 0x33AA10u;
    {
        const bool branch_taken_0x33aa10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33aa10) {
            ctx->pc = 0x33AA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA10u;
            // 0x33aa14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AA24u;
            goto label_33aa24;
        }
    }
    ctx->pc = 0x33AA18u;
label_33aa18:
    // 0x33aa18: 0xc0400a8  jal         func_1002A0
label_33aa1c:
    if (ctx->pc == 0x33AA1Cu) {
        ctx->pc = 0x33AA1Cu;
            // 0x33aa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AA20u;
        goto label_33aa20;
    }
    ctx->pc = 0x33AA18u;
    SET_GPR_U32(ctx, 31, 0x33AA20u);
    ctx->pc = 0x33AA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA18u;
            // 0x33aa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AA20u; }
        if (ctx->pc != 0x33AA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AA20u; }
        if (ctx->pc != 0x33AA20u) { return; }
    }
    ctx->pc = 0x33AA20u;
label_33aa20:
    // 0x33aa20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33aa20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33aa24:
    // 0x33aa24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33aa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33aa28:
    // 0x33aa28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aa28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33aa2c:
    // 0x33aa2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aa2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33aa30:
    // 0x33aa30: 0x3e00008  jr          $ra
label_33aa34:
    if (ctx->pc == 0x33AA34u) {
        ctx->pc = 0x33AA34u;
            // 0x33aa34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33AA38u;
        goto label_33aa38;
    }
    ctx->pc = 0x33AA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA30u;
            // 0x33aa34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AA38u;
label_33aa38:
    // 0x33aa38: 0x0  nop
    ctx->pc = 0x33aa38u;
    // NOP
label_33aa3c:
    // 0x33aa3c: 0x0  nop
    ctx->pc = 0x33aa3cu;
    // NOP
label_33aa40:
    // 0x33aa40: 0x3e00008  jr          $ra
label_33aa44:
    if (ctx->pc == 0x33AA44u) {
        ctx->pc = 0x33AA48u;
        goto label_33aa48;
    }
    ctx->pc = 0x33AA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AA48u;
label_33aa48:
    // 0x33aa48: 0x0  nop
    ctx->pc = 0x33aa48u;
    // NOP
label_33aa4c:
    // 0x33aa4c: 0x0  nop
    ctx->pc = 0x33aa4cu;
    // NOP
label_33aa50:
    // 0x33aa50: 0x3e00008  jr          $ra
label_33aa54:
    if (ctx->pc == 0x33AA54u) {
        ctx->pc = 0x33AA54u;
            // 0x33aa54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x33AA58u;
        goto label_33aa58;
    }
    ctx->pc = 0x33AA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA50u;
            // 0x33aa54: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AA58u;
label_33aa58:
    // 0x33aa58: 0x0  nop
    ctx->pc = 0x33aa58u;
    // NOP
label_33aa5c:
    // 0x33aa5c: 0x0  nop
    ctx->pc = 0x33aa5cu;
    // NOP
label_33aa60:
    // 0x33aa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33aa64:
    // 0x33aa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33aa68:
    // 0x33aa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33aa6c:
    // 0x33aa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33aa70:
    // 0x33aa70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33aa70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33aa74:
    // 0x33aa74: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33aa78:
    if (ctx->pc == 0x33AA78u) {
        ctx->pc = 0x33AA78u;
            // 0x33aa78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AA7Cu;
        goto label_33aa7c;
    }
    ctx->pc = 0x33AA74u;
    {
        const bool branch_taken_0x33aa74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA74u;
            // 0x33aa78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa74) {
            ctx->pc = 0x33AAE0u;
            goto label_33aae0;
        }
    }
    ctx->pc = 0x33AA7Cu;
label_33aa7c:
    // 0x33aa7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33aa80:
    // 0x33aa80: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x33aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
label_33aa84:
    // 0x33aa84: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33aa88:
    if (ctx->pc == 0x33AA88u) {
        ctx->pc = 0x33AA88u;
            // 0x33aa88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AA8Cu;
        goto label_33aa8c;
    }
    ctx->pc = 0x33AA84u;
    {
        const bool branch_taken_0x33aa84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA84u;
            // 0x33aa88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa84) {
            ctx->pc = 0x33AAC8u;
            goto label_33aac8;
        }
    }
    ctx->pc = 0x33AA8Cu;
label_33aa8c:
    // 0x33aa8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33aa90:
    // 0x33aa90: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_33aa94:
    // 0x33aa94: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33aa98:
    if (ctx->pc == 0x33AA98u) {
        ctx->pc = 0x33AA98u;
            // 0x33aa98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AA9Cu;
        goto label_33aa9c;
    }
    ctx->pc = 0x33AA94u;
    {
        const bool branch_taken_0x33aa94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AA94u;
            // 0x33aa98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa94) {
            ctx->pc = 0x33AAC8u;
            goto label_33aac8;
        }
    }
    ctx->pc = 0x33AA9Cu;
label_33aa9c:
    // 0x33aa9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33aaa0:
    // 0x33aaa0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x33aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_33aaa4:
    // 0x33aaa4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33aaa8:
    if (ctx->pc == 0x33AAA8u) {
        ctx->pc = 0x33AAA8u;
            // 0x33aaa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AAACu;
        goto label_33aaac;
    }
    ctx->pc = 0x33AAA4u;
    {
        const bool branch_taken_0x33aaa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAA4u;
            // 0x33aaa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaa4) {
            ctx->pc = 0x33AAC8u;
            goto label_33aac8;
        }
    }
    ctx->pc = 0x33AAACu;
label_33aaac:
    // 0x33aaac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33aab0:
    // 0x33aab0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33aab4:
    // 0x33aab4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33aab8:
    // 0x33aab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33aabc:
    if (ctx->pc == 0x33AABCu) {
        ctx->pc = 0x33AABCu;
            // 0x33aabc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33AAC0u;
        goto label_33aac0;
    }
    ctx->pc = 0x33AAB8u;
    {
        const bool branch_taken_0x33aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAB8u;
            // 0x33aabc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aab8) {
            ctx->pc = 0x33AAC8u;
            goto label_33aac8;
        }
    }
    ctx->pc = 0x33AAC0u;
label_33aac0:
    // 0x33aac0: 0xc07507c  jal         func_1D41F0
label_33aac4:
    if (ctx->pc == 0x33AAC4u) {
        ctx->pc = 0x33AAC4u;
            // 0x33aac4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33AAC8u;
        goto label_33aac8;
    }
    ctx->pc = 0x33AAC0u;
    SET_GPR_U32(ctx, 31, 0x33AAC8u);
    ctx->pc = 0x33AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAC0u;
            // 0x33aac4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AAC8u; }
        if (ctx->pc != 0x33AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AAC8u; }
        if (ctx->pc != 0x33AAC8u) { return; }
    }
    ctx->pc = 0x33AAC8u;
label_33aac8:
    // 0x33aac8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33aacc:
    // 0x33aacc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33aaccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33aad0:
    // 0x33aad0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33aad4:
    if (ctx->pc == 0x33AAD4u) {
        ctx->pc = 0x33AAD4u;
            // 0x33aad4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AAD8u;
        goto label_33aad8;
    }
    ctx->pc = 0x33AAD0u;
    {
        const bool branch_taken_0x33aad0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33aad0) {
            ctx->pc = 0x33AAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAD0u;
            // 0x33aad4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AAE4u;
            goto label_33aae4;
        }
    }
    ctx->pc = 0x33AAD8u;
label_33aad8:
    // 0x33aad8: 0xc0400a8  jal         func_1002A0
label_33aadc:
    if (ctx->pc == 0x33AADCu) {
        ctx->pc = 0x33AADCu;
            // 0x33aadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AAE0u;
        goto label_33aae0;
    }
    ctx->pc = 0x33AAD8u;
    SET_GPR_U32(ctx, 31, 0x33AAE0u);
    ctx->pc = 0x33AADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAD8u;
            // 0x33aadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AAE0u; }
        if (ctx->pc != 0x33AAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AAE0u; }
        if (ctx->pc != 0x33AAE0u) { return; }
    }
    ctx->pc = 0x33AAE0u;
label_33aae0:
    // 0x33aae0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33aae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33aae4:
    // 0x33aae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33aae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33aae8:
    // 0x33aae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33aaec:
    // 0x33aaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33aaf0:
    // 0x33aaf0: 0x3e00008  jr          $ra
label_33aaf4:
    if (ctx->pc == 0x33AAF4u) {
        ctx->pc = 0x33AAF4u;
            // 0x33aaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33AAF8u;
        goto label_33aaf8;
    }
    ctx->pc = 0x33AAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAF0u;
            // 0x33aaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AAF8u;
label_33aaf8:
    // 0x33aaf8: 0x0  nop
    ctx->pc = 0x33aaf8u;
    // NOP
label_33aafc:
    // 0x33aafc: 0x0  nop
    ctx->pc = 0x33aafcu;
    // NOP
label_33ab00:
    // 0x33ab00: 0x3e00008  jr          $ra
label_33ab04:
    if (ctx->pc == 0x33AB04u) {
        ctx->pc = 0x33AB04u;
            // 0x33ab04: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x33AB08u;
        goto label_33ab08;
    }
    ctx->pc = 0x33AB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB00u;
            // 0x33ab04: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AB08u;
label_33ab08:
    // 0x33ab08: 0x0  nop
    ctx->pc = 0x33ab08u;
    // NOP
label_33ab0c:
    // 0x33ab0c: 0x0  nop
    ctx->pc = 0x33ab0cu;
    // NOP
label_33ab10:
    // 0x33ab10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33ab14:
    // 0x33ab14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33ab18:
    // 0x33ab18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33ab1c:
    // 0x33ab1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33ab20:
    // 0x33ab20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ab20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ab24:
    // 0x33ab24: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33ab28:
    if (ctx->pc == 0x33AB28u) {
        ctx->pc = 0x33AB28u;
            // 0x33ab28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AB2Cu;
        goto label_33ab2c;
    }
    ctx->pc = 0x33AB24u;
    {
        const bool branch_taken_0x33ab24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB24u;
            // 0x33ab28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab24) {
            ctx->pc = 0x33AB90u;
            goto label_33ab90;
        }
    }
    ctx->pc = 0x33AB2Cu;
label_33ab2c:
    // 0x33ab2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ab30:
    // 0x33ab30: 0x24425240  addiu       $v0, $v0, 0x5240
    ctx->pc = 0x33ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
label_33ab34:
    // 0x33ab34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33ab38:
    if (ctx->pc == 0x33AB38u) {
        ctx->pc = 0x33AB38u;
            // 0x33ab38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AB3Cu;
        goto label_33ab3c;
    }
    ctx->pc = 0x33AB34u;
    {
        const bool branch_taken_0x33ab34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB34u;
            // 0x33ab38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab34) {
            ctx->pc = 0x33AB78u;
            goto label_33ab78;
        }
    }
    ctx->pc = 0x33AB3Cu;
label_33ab3c:
    // 0x33ab3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ab40:
    // 0x33ab40: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_33ab44:
    // 0x33ab44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33ab48:
    if (ctx->pc == 0x33AB48u) {
        ctx->pc = 0x33AB48u;
            // 0x33ab48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AB4Cu;
        goto label_33ab4c;
    }
    ctx->pc = 0x33AB44u;
    {
        const bool branch_taken_0x33ab44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB44u;
            // 0x33ab48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab44) {
            ctx->pc = 0x33AB78u;
            goto label_33ab78;
        }
    }
    ctx->pc = 0x33AB4Cu;
label_33ab4c:
    // 0x33ab4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33ab50:
    // 0x33ab50: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x33ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_33ab54:
    // 0x33ab54: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33ab58:
    if (ctx->pc == 0x33AB58u) {
        ctx->pc = 0x33AB58u;
            // 0x33ab58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AB5Cu;
        goto label_33ab5c;
    }
    ctx->pc = 0x33AB54u;
    {
        const bool branch_taken_0x33ab54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB54u;
            // 0x33ab58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab54) {
            ctx->pc = 0x33AB78u;
            goto label_33ab78;
        }
    }
    ctx->pc = 0x33AB5Cu;
label_33ab5c:
    // 0x33ab5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33ab60:
    // 0x33ab60: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33ab64:
    // 0x33ab64: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33ab68:
    // 0x33ab68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33ab6c:
    if (ctx->pc == 0x33AB6Cu) {
        ctx->pc = 0x33AB6Cu;
            // 0x33ab6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33AB70u;
        goto label_33ab70;
    }
    ctx->pc = 0x33AB68u;
    {
        const bool branch_taken_0x33ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB68u;
            // 0x33ab6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab68) {
            ctx->pc = 0x33AB78u;
            goto label_33ab78;
        }
    }
    ctx->pc = 0x33AB70u;
label_33ab70:
    // 0x33ab70: 0xc07507c  jal         func_1D41F0
label_33ab74:
    if (ctx->pc == 0x33AB74u) {
        ctx->pc = 0x33AB74u;
            // 0x33ab74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33AB78u;
        goto label_33ab78;
    }
    ctx->pc = 0x33AB70u;
    SET_GPR_U32(ctx, 31, 0x33AB78u);
    ctx->pc = 0x33AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB70u;
            // 0x33ab74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AB78u; }
        if (ctx->pc != 0x33AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AB78u; }
        if (ctx->pc != 0x33AB78u) { return; }
    }
    ctx->pc = 0x33AB78u;
label_33ab78:
    // 0x33ab78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33ab7c:
    // 0x33ab7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33ab7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33ab80:
    // 0x33ab80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33ab84:
    if (ctx->pc == 0x33AB84u) {
        ctx->pc = 0x33AB84u;
            // 0x33ab84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AB88u;
        goto label_33ab88;
    }
    ctx->pc = 0x33AB80u;
    {
        const bool branch_taken_0x33ab80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33ab80) {
            ctx->pc = 0x33AB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB80u;
            // 0x33ab84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AB94u;
            goto label_33ab94;
        }
    }
    ctx->pc = 0x33AB88u;
label_33ab88:
    // 0x33ab88: 0xc0400a8  jal         func_1002A0
label_33ab8c:
    if (ctx->pc == 0x33AB8Cu) {
        ctx->pc = 0x33AB8Cu;
            // 0x33ab8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AB90u;
        goto label_33ab90;
    }
    ctx->pc = 0x33AB88u;
    SET_GPR_U32(ctx, 31, 0x33AB90u);
    ctx->pc = 0x33AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB88u;
            // 0x33ab8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AB90u; }
        if (ctx->pc != 0x33AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AB90u; }
        if (ctx->pc != 0x33AB90u) { return; }
    }
    ctx->pc = 0x33AB90u;
label_33ab90:
    // 0x33ab90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33ab90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ab94:
    // 0x33ab94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33ab98:
    // 0x33ab98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ab98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33ab9c:
    // 0x33ab9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ab9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33aba0:
    // 0x33aba0: 0x3e00008  jr          $ra
label_33aba4:
    if (ctx->pc == 0x33ABA4u) {
        ctx->pc = 0x33ABA4u;
            // 0x33aba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33ABA8u;
        goto label_33aba8;
    }
    ctx->pc = 0x33ABA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ABA0u;
            // 0x33aba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33ABA8u;
label_33aba8:
    // 0x33aba8: 0x0  nop
    ctx->pc = 0x33aba8u;
    // NOP
label_33abac:
    // 0x33abac: 0x0  nop
    ctx->pc = 0x33abacu;
    // NOP
label_33abb0:
    // 0x33abb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33abb4:
    // 0x33abb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33abb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33abb8:
    // 0x33abb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33abbc:
    // 0x33abbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33abc0:
    // 0x33abc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33abc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33abc4:
    // 0x33abc4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33abc8:
    if (ctx->pc == 0x33ABC8u) {
        ctx->pc = 0x33ABC8u;
            // 0x33abc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33ABCCu;
        goto label_33abcc;
    }
    ctx->pc = 0x33ABC4u;
    {
        const bool branch_taken_0x33abc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ABC4u;
            // 0x33abc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abc4) {
            ctx->pc = 0x33AC30u;
            goto label_33ac30;
        }
    }
    ctx->pc = 0x33ABCCu;
label_33abcc:
    // 0x33abcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33abd0:
    // 0x33abd0: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x33abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_33abd4:
    // 0x33abd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33abd8:
    if (ctx->pc == 0x33ABD8u) {
        ctx->pc = 0x33ABD8u;
            // 0x33abd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33ABDCu;
        goto label_33abdc;
    }
    ctx->pc = 0x33ABD4u;
    {
        const bool branch_taken_0x33abd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ABD4u;
            // 0x33abd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abd4) {
            ctx->pc = 0x33AC18u;
            goto label_33ac18;
        }
    }
    ctx->pc = 0x33ABDCu;
label_33abdc:
    // 0x33abdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33abe0:
    // 0x33abe0: 0x24423ef0  addiu       $v0, $v0, 0x3EF0
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16112));
label_33abe4:
    // 0x33abe4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33abe8:
    if (ctx->pc == 0x33ABE8u) {
        ctx->pc = 0x33ABE8u;
            // 0x33abe8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33ABECu;
        goto label_33abec;
    }
    ctx->pc = 0x33ABE4u;
    {
        const bool branch_taken_0x33abe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ABE4u;
            // 0x33abe8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abe4) {
            ctx->pc = 0x33AC18u;
            goto label_33ac18;
        }
    }
    ctx->pc = 0x33ABECu;
label_33abec:
    // 0x33abec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33abf0:
    // 0x33abf0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_33abf4:
    // 0x33abf4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33abf8:
    if (ctx->pc == 0x33ABF8u) {
        ctx->pc = 0x33ABF8u;
            // 0x33abf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33ABFCu;
        goto label_33abfc;
    }
    ctx->pc = 0x33ABF4u;
    {
        const bool branch_taken_0x33abf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ABF4u;
            // 0x33abf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33abf4) {
            ctx->pc = 0x33AC18u;
            goto label_33ac18;
        }
    }
    ctx->pc = 0x33ABFCu;
label_33abfc:
    // 0x33abfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33ac00:
    // 0x33ac00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33ac04:
    // 0x33ac04: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33ac08:
    // 0x33ac08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33ac0c:
    if (ctx->pc == 0x33AC0Cu) {
        ctx->pc = 0x33AC0Cu;
            // 0x33ac0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33AC10u;
        goto label_33ac10;
    }
    ctx->pc = 0x33AC08u;
    {
        const bool branch_taken_0x33ac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC08u;
            // 0x33ac0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac08) {
            ctx->pc = 0x33AC18u;
            goto label_33ac18;
        }
    }
    ctx->pc = 0x33AC10u;
label_33ac10:
    // 0x33ac10: 0xc07507c  jal         func_1D41F0
label_33ac14:
    if (ctx->pc == 0x33AC14u) {
        ctx->pc = 0x33AC14u;
            // 0x33ac14: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33AC18u;
        goto label_33ac18;
    }
    ctx->pc = 0x33AC10u;
    SET_GPR_U32(ctx, 31, 0x33AC18u);
    ctx->pc = 0x33AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC10u;
            // 0x33ac14: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AC18u; }
        if (ctx->pc != 0x33AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AC18u; }
        if (ctx->pc != 0x33AC18u) { return; }
    }
    ctx->pc = 0x33AC18u;
label_33ac18:
    // 0x33ac18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33ac1c:
    // 0x33ac1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33ac1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33ac20:
    // 0x33ac20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33ac24:
    if (ctx->pc == 0x33AC24u) {
        ctx->pc = 0x33AC24u;
            // 0x33ac24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AC28u;
        goto label_33ac28;
    }
    ctx->pc = 0x33AC20u;
    {
        const bool branch_taken_0x33ac20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33ac20) {
            ctx->pc = 0x33AC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC20u;
            // 0x33ac24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AC34u;
            goto label_33ac34;
        }
    }
    ctx->pc = 0x33AC28u;
label_33ac28:
    // 0x33ac28: 0xc0400a8  jal         func_1002A0
label_33ac2c:
    if (ctx->pc == 0x33AC2Cu) {
        ctx->pc = 0x33AC2Cu;
            // 0x33ac2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AC30u;
        goto label_33ac30;
    }
    ctx->pc = 0x33AC28u;
    SET_GPR_U32(ctx, 31, 0x33AC30u);
    ctx->pc = 0x33AC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC28u;
            // 0x33ac2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AC30u; }
        if (ctx->pc != 0x33AC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AC30u; }
        if (ctx->pc != 0x33AC30u) { return; }
    }
    ctx->pc = 0x33AC30u;
label_33ac30:
    // 0x33ac30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33ac30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ac34:
    // 0x33ac34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33ac38:
    // 0x33ac38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ac38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33ac3c:
    // 0x33ac3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ac3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33ac40:
    // 0x33ac40: 0x3e00008  jr          $ra
label_33ac44:
    if (ctx->pc == 0x33AC44u) {
        ctx->pc = 0x33AC44u;
            // 0x33ac44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33AC48u;
        goto label_33ac48;
    }
    ctx->pc = 0x33AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC40u;
            // 0x33ac44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AC48u;
label_33ac48:
    // 0x33ac48: 0x0  nop
    ctx->pc = 0x33ac48u;
    // NOP
label_33ac4c:
    // 0x33ac4c: 0x0  nop
    ctx->pc = 0x33ac4cu;
    // NOP
label_33ac50:
    // 0x33ac50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33ac54:
    // 0x33ac54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33ac58:
    // 0x33ac58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33ac5c:
    // 0x33ac5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33ac60:
    // 0x33ac60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ac60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ac64:
    // 0x33ac64: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33ac68:
    if (ctx->pc == 0x33AC68u) {
        ctx->pc = 0x33AC68u;
            // 0x33ac68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AC6Cu;
        goto label_33ac6c;
    }
    ctx->pc = 0x33AC64u;
    {
        const bool branch_taken_0x33ac64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC64u;
            // 0x33ac68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac64) {
            ctx->pc = 0x33ACD0u;
            goto label_33acd0;
        }
    }
    ctx->pc = 0x33AC6Cu;
label_33ac6c:
    // 0x33ac6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ac70:
    // 0x33ac70: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x33ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_33ac74:
    // 0x33ac74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33ac78:
    if (ctx->pc == 0x33AC78u) {
        ctx->pc = 0x33AC78u;
            // 0x33ac78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AC7Cu;
        goto label_33ac7c;
    }
    ctx->pc = 0x33AC74u;
    {
        const bool branch_taken_0x33ac74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC74u;
            // 0x33ac78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac74) {
            ctx->pc = 0x33ACB8u;
            goto label_33acb8;
        }
    }
    ctx->pc = 0x33AC7Cu;
label_33ac7c:
    // 0x33ac7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ac80:
    // 0x33ac80: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x33ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_33ac84:
    // 0x33ac84: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33ac88:
    if (ctx->pc == 0x33AC88u) {
        ctx->pc = 0x33AC88u;
            // 0x33ac88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AC8Cu;
        goto label_33ac8c;
    }
    ctx->pc = 0x33AC84u;
    {
        const bool branch_taken_0x33ac84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC84u;
            // 0x33ac88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac84) {
            ctx->pc = 0x33ACB8u;
            goto label_33acb8;
        }
    }
    ctx->pc = 0x33AC8Cu;
label_33ac8c:
    // 0x33ac8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33ac90:
    // 0x33ac90: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x33ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_33ac94:
    // 0x33ac94: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33ac98:
    if (ctx->pc == 0x33AC98u) {
        ctx->pc = 0x33AC98u;
            // 0x33ac98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AC9Cu;
        goto label_33ac9c;
    }
    ctx->pc = 0x33AC94u;
    {
        const bool branch_taken_0x33ac94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC94u;
            // 0x33ac98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac94) {
            ctx->pc = 0x33ACB8u;
            goto label_33acb8;
        }
    }
    ctx->pc = 0x33AC9Cu;
label_33ac9c:
    // 0x33ac9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33aca0:
    // 0x33aca0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33aca4:
    // 0x33aca4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33aca8:
    // 0x33aca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33acac:
    if (ctx->pc == 0x33ACACu) {
        ctx->pc = 0x33ACACu;
            // 0x33acac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33ACB0u;
        goto label_33acb0;
    }
    ctx->pc = 0x33ACA8u;
    {
        const bool branch_taken_0x33aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACA8u;
            // 0x33acac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aca8) {
            ctx->pc = 0x33ACB8u;
            goto label_33acb8;
        }
    }
    ctx->pc = 0x33ACB0u;
label_33acb0:
    // 0x33acb0: 0xc07507c  jal         func_1D41F0
label_33acb4:
    if (ctx->pc == 0x33ACB4u) {
        ctx->pc = 0x33ACB4u;
            // 0x33acb4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33ACB8u;
        goto label_33acb8;
    }
    ctx->pc = 0x33ACB0u;
    SET_GPR_U32(ctx, 31, 0x33ACB8u);
    ctx->pc = 0x33ACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACB0u;
            // 0x33acb4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ACB8u; }
        if (ctx->pc != 0x33ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ACB8u; }
        if (ctx->pc != 0x33ACB8u) { return; }
    }
    ctx->pc = 0x33ACB8u;
label_33acb8:
    // 0x33acb8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33acbc:
    // 0x33acbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33acbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33acc0:
    // 0x33acc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33acc4:
    if (ctx->pc == 0x33ACC4u) {
        ctx->pc = 0x33ACC4u;
            // 0x33acc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33ACC8u;
        goto label_33acc8;
    }
    ctx->pc = 0x33ACC0u;
    {
        const bool branch_taken_0x33acc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33acc0) {
            ctx->pc = 0x33ACC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACC0u;
            // 0x33acc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33ACD4u;
            goto label_33acd4;
        }
    }
    ctx->pc = 0x33ACC8u;
label_33acc8:
    // 0x33acc8: 0xc0400a8  jal         func_1002A0
label_33accc:
    if (ctx->pc == 0x33ACCCu) {
        ctx->pc = 0x33ACCCu;
            // 0x33accc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33ACD0u;
        goto label_33acd0;
    }
    ctx->pc = 0x33ACC8u;
    SET_GPR_U32(ctx, 31, 0x33ACD0u);
    ctx->pc = 0x33ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACC8u;
            // 0x33accc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ACD0u; }
        if (ctx->pc != 0x33ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33ACD0u; }
        if (ctx->pc != 0x33ACD0u) { return; }
    }
    ctx->pc = 0x33ACD0u;
label_33acd0:
    // 0x33acd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33acd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33acd4:
    // 0x33acd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33acd8:
    // 0x33acd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33acd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33acdc:
    // 0x33acdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33acdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33ace0:
    // 0x33ace0: 0x3e00008  jr          $ra
label_33ace4:
    if (ctx->pc == 0x33ACE4u) {
        ctx->pc = 0x33ACE4u;
            // 0x33ace4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33ACE8u;
        goto label_33ace8;
    }
    ctx->pc = 0x33ACE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACE0u;
            // 0x33ace4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33ACE8u;
label_33ace8:
    // 0x33ace8: 0x0  nop
    ctx->pc = 0x33ace8u;
    // NOP
label_33acec:
    // 0x33acec: 0x0  nop
    ctx->pc = 0x33acecu;
    // NOP
label_33acf0:
    // 0x33acf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33acf4:
    // 0x33acf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33acf8:
    // 0x33acf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33acfc:
    // 0x33acfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33ad00:
    // 0x33ad00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33ad00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ad04:
    // 0x33ad04: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_33ad08:
    if (ctx->pc == 0x33AD08u) {
        ctx->pc = 0x33AD08u;
            // 0x33ad08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AD0Cu;
        goto label_33ad0c;
    }
    ctx->pc = 0x33AD04u;
    {
        const bool branch_taken_0x33ad04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD04u;
            // 0x33ad08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad04) {
            ctx->pc = 0x33AD70u;
            goto label_33ad70;
        }
    }
    ctx->pc = 0x33AD0Cu;
label_33ad0c:
    // 0x33ad0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ad10:
    // 0x33ad10: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x33ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_33ad14:
    // 0x33ad14: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33ad18:
    if (ctx->pc == 0x33AD18u) {
        ctx->pc = 0x33AD18u;
            // 0x33ad18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AD1Cu;
        goto label_33ad1c;
    }
    ctx->pc = 0x33AD14u;
    {
        const bool branch_taken_0x33ad14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD14u;
            // 0x33ad18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad14) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD1Cu;
label_33ad1c:
    // 0x33ad1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33ad20:
    // 0x33ad20: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x33ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_33ad24:
    // 0x33ad24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_33ad28:
    if (ctx->pc == 0x33AD28u) {
        ctx->pc = 0x33AD28u;
            // 0x33ad28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AD2Cu;
        goto label_33ad2c;
    }
    ctx->pc = 0x33AD24u;
    {
        const bool branch_taken_0x33ad24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD24u;
            // 0x33ad28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad24) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD2Cu;
label_33ad2c:
    // 0x33ad2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x33ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_33ad30:
    // 0x33ad30: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x33ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_33ad34:
    // 0x33ad34: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_33ad38:
    if (ctx->pc == 0x33AD38u) {
        ctx->pc = 0x33AD38u;
            // 0x33ad38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33AD3Cu;
        goto label_33ad3c;
    }
    ctx->pc = 0x33AD34u;
    {
        const bool branch_taken_0x33ad34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD34u;
            // 0x33ad38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad34) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD3Cu;
label_33ad3c:
    // 0x33ad3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33ad40:
    // 0x33ad40: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x33ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_33ad44:
    // 0x33ad44: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x33ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_33ad48:
    // 0x33ad48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33ad4c:
    if (ctx->pc == 0x33AD4Cu) {
        ctx->pc = 0x33AD4Cu;
            // 0x33ad4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x33AD50u;
        goto label_33ad50;
    }
    ctx->pc = 0x33AD48u;
    {
        const bool branch_taken_0x33ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD48u;
            // 0x33ad4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad48) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD50u;
label_33ad50:
    // 0x33ad50: 0xc07507c  jal         func_1D41F0
label_33ad54:
    if (ctx->pc == 0x33AD54u) {
        ctx->pc = 0x33AD54u;
            // 0x33ad54: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x33AD58u;
        goto label_33ad58;
    }
    ctx->pc = 0x33AD50u;
    SET_GPR_U32(ctx, 31, 0x33AD58u);
    ctx->pc = 0x33AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD50u;
            // 0x33ad54: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD58u; }
        if (ctx->pc != 0x33AD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD58u; }
        if (ctx->pc != 0x33AD58u) { return; }
    }
    ctx->pc = 0x33AD58u;
label_33ad58:
    // 0x33ad58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33ad5c:
    // 0x33ad5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33ad5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33ad60:
    // 0x33ad60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33ad64:
    if (ctx->pc == 0x33AD64u) {
        ctx->pc = 0x33AD64u;
            // 0x33ad64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AD68u;
        goto label_33ad68;
    }
    ctx->pc = 0x33AD60u;
    {
        const bool branch_taken_0x33ad60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33ad60) {
            ctx->pc = 0x33AD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD60u;
            // 0x33ad64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AD74u;
            goto label_33ad74;
        }
    }
    ctx->pc = 0x33AD68u;
label_33ad68:
    // 0x33ad68: 0xc0400a8  jal         func_1002A0
label_33ad6c:
    if (ctx->pc == 0x33AD6Cu) {
        ctx->pc = 0x33AD6Cu;
            // 0x33ad6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33AD70u;
        goto label_33ad70;
    }
    ctx->pc = 0x33AD68u;
    SET_GPR_U32(ctx, 31, 0x33AD70u);
    ctx->pc = 0x33AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD68u;
            // 0x33ad6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD70u; }
        if (ctx->pc != 0x33AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD70u; }
        if (ctx->pc != 0x33AD70u) { return; }
    }
    ctx->pc = 0x33AD70u;
label_33ad70:
    // 0x33ad70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ad74:
    // 0x33ad74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33ad78:
    // 0x33ad78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ad78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33ad7c:
    // 0x33ad7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ad7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33ad80:
    // 0x33ad80: 0x3e00008  jr          $ra
label_33ad84:
    if (ctx->pc == 0x33AD84u) {
        ctx->pc = 0x33AD84u;
            // 0x33ad84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33AD88u;
        goto label_33ad88;
    }
    ctx->pc = 0x33AD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD80u;
            // 0x33ad84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AD88u;
label_33ad88:
    // 0x33ad88: 0x0  nop
    ctx->pc = 0x33ad88u;
    // NOP
label_33ad8c:
    // 0x33ad8c: 0x0  nop
    ctx->pc = 0x33ad8cu;
    // NOP
}
