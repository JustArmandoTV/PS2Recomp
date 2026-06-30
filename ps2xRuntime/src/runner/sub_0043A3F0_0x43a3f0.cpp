#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043A3F0
// Address: 0x43a3f0 - 0x43ac90
void sub_0043A3F0_0x43a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A3F0_0x43a3f0");
#endif

    switch (ctx->pc) {
        case 0x43a3f0u: goto label_43a3f0;
        case 0x43a3f4u: goto label_43a3f4;
        case 0x43a3f8u: goto label_43a3f8;
        case 0x43a3fcu: goto label_43a3fc;
        case 0x43a400u: goto label_43a400;
        case 0x43a404u: goto label_43a404;
        case 0x43a408u: goto label_43a408;
        case 0x43a40cu: goto label_43a40c;
        case 0x43a410u: goto label_43a410;
        case 0x43a414u: goto label_43a414;
        case 0x43a418u: goto label_43a418;
        case 0x43a41cu: goto label_43a41c;
        case 0x43a420u: goto label_43a420;
        case 0x43a424u: goto label_43a424;
        case 0x43a428u: goto label_43a428;
        case 0x43a42cu: goto label_43a42c;
        case 0x43a430u: goto label_43a430;
        case 0x43a434u: goto label_43a434;
        case 0x43a438u: goto label_43a438;
        case 0x43a43cu: goto label_43a43c;
        case 0x43a440u: goto label_43a440;
        case 0x43a444u: goto label_43a444;
        case 0x43a448u: goto label_43a448;
        case 0x43a44cu: goto label_43a44c;
        case 0x43a450u: goto label_43a450;
        case 0x43a454u: goto label_43a454;
        case 0x43a458u: goto label_43a458;
        case 0x43a45cu: goto label_43a45c;
        case 0x43a460u: goto label_43a460;
        case 0x43a464u: goto label_43a464;
        case 0x43a468u: goto label_43a468;
        case 0x43a46cu: goto label_43a46c;
        case 0x43a470u: goto label_43a470;
        case 0x43a474u: goto label_43a474;
        case 0x43a478u: goto label_43a478;
        case 0x43a47cu: goto label_43a47c;
        case 0x43a480u: goto label_43a480;
        case 0x43a484u: goto label_43a484;
        case 0x43a488u: goto label_43a488;
        case 0x43a48cu: goto label_43a48c;
        case 0x43a490u: goto label_43a490;
        case 0x43a494u: goto label_43a494;
        case 0x43a498u: goto label_43a498;
        case 0x43a49cu: goto label_43a49c;
        case 0x43a4a0u: goto label_43a4a0;
        case 0x43a4a4u: goto label_43a4a4;
        case 0x43a4a8u: goto label_43a4a8;
        case 0x43a4acu: goto label_43a4ac;
        case 0x43a4b0u: goto label_43a4b0;
        case 0x43a4b4u: goto label_43a4b4;
        case 0x43a4b8u: goto label_43a4b8;
        case 0x43a4bcu: goto label_43a4bc;
        case 0x43a4c0u: goto label_43a4c0;
        case 0x43a4c4u: goto label_43a4c4;
        case 0x43a4c8u: goto label_43a4c8;
        case 0x43a4ccu: goto label_43a4cc;
        case 0x43a4d0u: goto label_43a4d0;
        case 0x43a4d4u: goto label_43a4d4;
        case 0x43a4d8u: goto label_43a4d8;
        case 0x43a4dcu: goto label_43a4dc;
        case 0x43a4e0u: goto label_43a4e0;
        case 0x43a4e4u: goto label_43a4e4;
        case 0x43a4e8u: goto label_43a4e8;
        case 0x43a4ecu: goto label_43a4ec;
        case 0x43a4f0u: goto label_43a4f0;
        case 0x43a4f4u: goto label_43a4f4;
        case 0x43a4f8u: goto label_43a4f8;
        case 0x43a4fcu: goto label_43a4fc;
        case 0x43a500u: goto label_43a500;
        case 0x43a504u: goto label_43a504;
        case 0x43a508u: goto label_43a508;
        case 0x43a50cu: goto label_43a50c;
        case 0x43a510u: goto label_43a510;
        case 0x43a514u: goto label_43a514;
        case 0x43a518u: goto label_43a518;
        case 0x43a51cu: goto label_43a51c;
        case 0x43a520u: goto label_43a520;
        case 0x43a524u: goto label_43a524;
        case 0x43a528u: goto label_43a528;
        case 0x43a52cu: goto label_43a52c;
        case 0x43a530u: goto label_43a530;
        case 0x43a534u: goto label_43a534;
        case 0x43a538u: goto label_43a538;
        case 0x43a53cu: goto label_43a53c;
        case 0x43a540u: goto label_43a540;
        case 0x43a544u: goto label_43a544;
        case 0x43a548u: goto label_43a548;
        case 0x43a54cu: goto label_43a54c;
        case 0x43a550u: goto label_43a550;
        case 0x43a554u: goto label_43a554;
        case 0x43a558u: goto label_43a558;
        case 0x43a55cu: goto label_43a55c;
        case 0x43a560u: goto label_43a560;
        case 0x43a564u: goto label_43a564;
        case 0x43a568u: goto label_43a568;
        case 0x43a56cu: goto label_43a56c;
        case 0x43a570u: goto label_43a570;
        case 0x43a574u: goto label_43a574;
        case 0x43a578u: goto label_43a578;
        case 0x43a57cu: goto label_43a57c;
        case 0x43a580u: goto label_43a580;
        case 0x43a584u: goto label_43a584;
        case 0x43a588u: goto label_43a588;
        case 0x43a58cu: goto label_43a58c;
        case 0x43a590u: goto label_43a590;
        case 0x43a594u: goto label_43a594;
        case 0x43a598u: goto label_43a598;
        case 0x43a59cu: goto label_43a59c;
        case 0x43a5a0u: goto label_43a5a0;
        case 0x43a5a4u: goto label_43a5a4;
        case 0x43a5a8u: goto label_43a5a8;
        case 0x43a5acu: goto label_43a5ac;
        case 0x43a5b0u: goto label_43a5b0;
        case 0x43a5b4u: goto label_43a5b4;
        case 0x43a5b8u: goto label_43a5b8;
        case 0x43a5bcu: goto label_43a5bc;
        case 0x43a5c0u: goto label_43a5c0;
        case 0x43a5c4u: goto label_43a5c4;
        case 0x43a5c8u: goto label_43a5c8;
        case 0x43a5ccu: goto label_43a5cc;
        case 0x43a5d0u: goto label_43a5d0;
        case 0x43a5d4u: goto label_43a5d4;
        case 0x43a5d8u: goto label_43a5d8;
        case 0x43a5dcu: goto label_43a5dc;
        case 0x43a5e0u: goto label_43a5e0;
        case 0x43a5e4u: goto label_43a5e4;
        case 0x43a5e8u: goto label_43a5e8;
        case 0x43a5ecu: goto label_43a5ec;
        case 0x43a5f0u: goto label_43a5f0;
        case 0x43a5f4u: goto label_43a5f4;
        case 0x43a5f8u: goto label_43a5f8;
        case 0x43a5fcu: goto label_43a5fc;
        case 0x43a600u: goto label_43a600;
        case 0x43a604u: goto label_43a604;
        case 0x43a608u: goto label_43a608;
        case 0x43a60cu: goto label_43a60c;
        case 0x43a610u: goto label_43a610;
        case 0x43a614u: goto label_43a614;
        case 0x43a618u: goto label_43a618;
        case 0x43a61cu: goto label_43a61c;
        case 0x43a620u: goto label_43a620;
        case 0x43a624u: goto label_43a624;
        case 0x43a628u: goto label_43a628;
        case 0x43a62cu: goto label_43a62c;
        case 0x43a630u: goto label_43a630;
        case 0x43a634u: goto label_43a634;
        case 0x43a638u: goto label_43a638;
        case 0x43a63cu: goto label_43a63c;
        case 0x43a640u: goto label_43a640;
        case 0x43a644u: goto label_43a644;
        case 0x43a648u: goto label_43a648;
        case 0x43a64cu: goto label_43a64c;
        case 0x43a650u: goto label_43a650;
        case 0x43a654u: goto label_43a654;
        case 0x43a658u: goto label_43a658;
        case 0x43a65cu: goto label_43a65c;
        case 0x43a660u: goto label_43a660;
        case 0x43a664u: goto label_43a664;
        case 0x43a668u: goto label_43a668;
        case 0x43a66cu: goto label_43a66c;
        case 0x43a670u: goto label_43a670;
        case 0x43a674u: goto label_43a674;
        case 0x43a678u: goto label_43a678;
        case 0x43a67cu: goto label_43a67c;
        case 0x43a680u: goto label_43a680;
        case 0x43a684u: goto label_43a684;
        case 0x43a688u: goto label_43a688;
        case 0x43a68cu: goto label_43a68c;
        case 0x43a690u: goto label_43a690;
        case 0x43a694u: goto label_43a694;
        case 0x43a698u: goto label_43a698;
        case 0x43a69cu: goto label_43a69c;
        case 0x43a6a0u: goto label_43a6a0;
        case 0x43a6a4u: goto label_43a6a4;
        case 0x43a6a8u: goto label_43a6a8;
        case 0x43a6acu: goto label_43a6ac;
        case 0x43a6b0u: goto label_43a6b0;
        case 0x43a6b4u: goto label_43a6b4;
        case 0x43a6b8u: goto label_43a6b8;
        case 0x43a6bcu: goto label_43a6bc;
        case 0x43a6c0u: goto label_43a6c0;
        case 0x43a6c4u: goto label_43a6c4;
        case 0x43a6c8u: goto label_43a6c8;
        case 0x43a6ccu: goto label_43a6cc;
        case 0x43a6d0u: goto label_43a6d0;
        case 0x43a6d4u: goto label_43a6d4;
        case 0x43a6d8u: goto label_43a6d8;
        case 0x43a6dcu: goto label_43a6dc;
        case 0x43a6e0u: goto label_43a6e0;
        case 0x43a6e4u: goto label_43a6e4;
        case 0x43a6e8u: goto label_43a6e8;
        case 0x43a6ecu: goto label_43a6ec;
        case 0x43a6f0u: goto label_43a6f0;
        case 0x43a6f4u: goto label_43a6f4;
        case 0x43a6f8u: goto label_43a6f8;
        case 0x43a6fcu: goto label_43a6fc;
        case 0x43a700u: goto label_43a700;
        case 0x43a704u: goto label_43a704;
        case 0x43a708u: goto label_43a708;
        case 0x43a70cu: goto label_43a70c;
        case 0x43a710u: goto label_43a710;
        case 0x43a714u: goto label_43a714;
        case 0x43a718u: goto label_43a718;
        case 0x43a71cu: goto label_43a71c;
        case 0x43a720u: goto label_43a720;
        case 0x43a724u: goto label_43a724;
        case 0x43a728u: goto label_43a728;
        case 0x43a72cu: goto label_43a72c;
        case 0x43a730u: goto label_43a730;
        case 0x43a734u: goto label_43a734;
        case 0x43a738u: goto label_43a738;
        case 0x43a73cu: goto label_43a73c;
        case 0x43a740u: goto label_43a740;
        case 0x43a744u: goto label_43a744;
        case 0x43a748u: goto label_43a748;
        case 0x43a74cu: goto label_43a74c;
        case 0x43a750u: goto label_43a750;
        case 0x43a754u: goto label_43a754;
        case 0x43a758u: goto label_43a758;
        case 0x43a75cu: goto label_43a75c;
        case 0x43a760u: goto label_43a760;
        case 0x43a764u: goto label_43a764;
        case 0x43a768u: goto label_43a768;
        case 0x43a76cu: goto label_43a76c;
        case 0x43a770u: goto label_43a770;
        case 0x43a774u: goto label_43a774;
        case 0x43a778u: goto label_43a778;
        case 0x43a77cu: goto label_43a77c;
        case 0x43a780u: goto label_43a780;
        case 0x43a784u: goto label_43a784;
        case 0x43a788u: goto label_43a788;
        case 0x43a78cu: goto label_43a78c;
        case 0x43a790u: goto label_43a790;
        case 0x43a794u: goto label_43a794;
        case 0x43a798u: goto label_43a798;
        case 0x43a79cu: goto label_43a79c;
        case 0x43a7a0u: goto label_43a7a0;
        case 0x43a7a4u: goto label_43a7a4;
        case 0x43a7a8u: goto label_43a7a8;
        case 0x43a7acu: goto label_43a7ac;
        case 0x43a7b0u: goto label_43a7b0;
        case 0x43a7b4u: goto label_43a7b4;
        case 0x43a7b8u: goto label_43a7b8;
        case 0x43a7bcu: goto label_43a7bc;
        case 0x43a7c0u: goto label_43a7c0;
        case 0x43a7c4u: goto label_43a7c4;
        case 0x43a7c8u: goto label_43a7c8;
        case 0x43a7ccu: goto label_43a7cc;
        case 0x43a7d0u: goto label_43a7d0;
        case 0x43a7d4u: goto label_43a7d4;
        case 0x43a7d8u: goto label_43a7d8;
        case 0x43a7dcu: goto label_43a7dc;
        case 0x43a7e0u: goto label_43a7e0;
        case 0x43a7e4u: goto label_43a7e4;
        case 0x43a7e8u: goto label_43a7e8;
        case 0x43a7ecu: goto label_43a7ec;
        case 0x43a7f0u: goto label_43a7f0;
        case 0x43a7f4u: goto label_43a7f4;
        case 0x43a7f8u: goto label_43a7f8;
        case 0x43a7fcu: goto label_43a7fc;
        case 0x43a800u: goto label_43a800;
        case 0x43a804u: goto label_43a804;
        case 0x43a808u: goto label_43a808;
        case 0x43a80cu: goto label_43a80c;
        case 0x43a810u: goto label_43a810;
        case 0x43a814u: goto label_43a814;
        case 0x43a818u: goto label_43a818;
        case 0x43a81cu: goto label_43a81c;
        case 0x43a820u: goto label_43a820;
        case 0x43a824u: goto label_43a824;
        case 0x43a828u: goto label_43a828;
        case 0x43a82cu: goto label_43a82c;
        case 0x43a830u: goto label_43a830;
        case 0x43a834u: goto label_43a834;
        case 0x43a838u: goto label_43a838;
        case 0x43a83cu: goto label_43a83c;
        case 0x43a840u: goto label_43a840;
        case 0x43a844u: goto label_43a844;
        case 0x43a848u: goto label_43a848;
        case 0x43a84cu: goto label_43a84c;
        case 0x43a850u: goto label_43a850;
        case 0x43a854u: goto label_43a854;
        case 0x43a858u: goto label_43a858;
        case 0x43a85cu: goto label_43a85c;
        case 0x43a860u: goto label_43a860;
        case 0x43a864u: goto label_43a864;
        case 0x43a868u: goto label_43a868;
        case 0x43a86cu: goto label_43a86c;
        case 0x43a870u: goto label_43a870;
        case 0x43a874u: goto label_43a874;
        case 0x43a878u: goto label_43a878;
        case 0x43a87cu: goto label_43a87c;
        case 0x43a880u: goto label_43a880;
        case 0x43a884u: goto label_43a884;
        case 0x43a888u: goto label_43a888;
        case 0x43a88cu: goto label_43a88c;
        case 0x43a890u: goto label_43a890;
        case 0x43a894u: goto label_43a894;
        case 0x43a898u: goto label_43a898;
        case 0x43a89cu: goto label_43a89c;
        case 0x43a8a0u: goto label_43a8a0;
        case 0x43a8a4u: goto label_43a8a4;
        case 0x43a8a8u: goto label_43a8a8;
        case 0x43a8acu: goto label_43a8ac;
        case 0x43a8b0u: goto label_43a8b0;
        case 0x43a8b4u: goto label_43a8b4;
        case 0x43a8b8u: goto label_43a8b8;
        case 0x43a8bcu: goto label_43a8bc;
        case 0x43a8c0u: goto label_43a8c0;
        case 0x43a8c4u: goto label_43a8c4;
        case 0x43a8c8u: goto label_43a8c8;
        case 0x43a8ccu: goto label_43a8cc;
        case 0x43a8d0u: goto label_43a8d0;
        case 0x43a8d4u: goto label_43a8d4;
        case 0x43a8d8u: goto label_43a8d8;
        case 0x43a8dcu: goto label_43a8dc;
        case 0x43a8e0u: goto label_43a8e0;
        case 0x43a8e4u: goto label_43a8e4;
        case 0x43a8e8u: goto label_43a8e8;
        case 0x43a8ecu: goto label_43a8ec;
        case 0x43a8f0u: goto label_43a8f0;
        case 0x43a8f4u: goto label_43a8f4;
        case 0x43a8f8u: goto label_43a8f8;
        case 0x43a8fcu: goto label_43a8fc;
        case 0x43a900u: goto label_43a900;
        case 0x43a904u: goto label_43a904;
        case 0x43a908u: goto label_43a908;
        case 0x43a90cu: goto label_43a90c;
        case 0x43a910u: goto label_43a910;
        case 0x43a914u: goto label_43a914;
        case 0x43a918u: goto label_43a918;
        case 0x43a91cu: goto label_43a91c;
        case 0x43a920u: goto label_43a920;
        case 0x43a924u: goto label_43a924;
        case 0x43a928u: goto label_43a928;
        case 0x43a92cu: goto label_43a92c;
        case 0x43a930u: goto label_43a930;
        case 0x43a934u: goto label_43a934;
        case 0x43a938u: goto label_43a938;
        case 0x43a93cu: goto label_43a93c;
        case 0x43a940u: goto label_43a940;
        case 0x43a944u: goto label_43a944;
        case 0x43a948u: goto label_43a948;
        case 0x43a94cu: goto label_43a94c;
        case 0x43a950u: goto label_43a950;
        case 0x43a954u: goto label_43a954;
        case 0x43a958u: goto label_43a958;
        case 0x43a95cu: goto label_43a95c;
        case 0x43a960u: goto label_43a960;
        case 0x43a964u: goto label_43a964;
        case 0x43a968u: goto label_43a968;
        case 0x43a96cu: goto label_43a96c;
        case 0x43a970u: goto label_43a970;
        case 0x43a974u: goto label_43a974;
        case 0x43a978u: goto label_43a978;
        case 0x43a97cu: goto label_43a97c;
        case 0x43a980u: goto label_43a980;
        case 0x43a984u: goto label_43a984;
        case 0x43a988u: goto label_43a988;
        case 0x43a98cu: goto label_43a98c;
        case 0x43a990u: goto label_43a990;
        case 0x43a994u: goto label_43a994;
        case 0x43a998u: goto label_43a998;
        case 0x43a99cu: goto label_43a99c;
        case 0x43a9a0u: goto label_43a9a0;
        case 0x43a9a4u: goto label_43a9a4;
        case 0x43a9a8u: goto label_43a9a8;
        case 0x43a9acu: goto label_43a9ac;
        case 0x43a9b0u: goto label_43a9b0;
        case 0x43a9b4u: goto label_43a9b4;
        case 0x43a9b8u: goto label_43a9b8;
        case 0x43a9bcu: goto label_43a9bc;
        case 0x43a9c0u: goto label_43a9c0;
        case 0x43a9c4u: goto label_43a9c4;
        case 0x43a9c8u: goto label_43a9c8;
        case 0x43a9ccu: goto label_43a9cc;
        case 0x43a9d0u: goto label_43a9d0;
        case 0x43a9d4u: goto label_43a9d4;
        case 0x43a9d8u: goto label_43a9d8;
        case 0x43a9dcu: goto label_43a9dc;
        case 0x43a9e0u: goto label_43a9e0;
        case 0x43a9e4u: goto label_43a9e4;
        case 0x43a9e8u: goto label_43a9e8;
        case 0x43a9ecu: goto label_43a9ec;
        case 0x43a9f0u: goto label_43a9f0;
        case 0x43a9f4u: goto label_43a9f4;
        case 0x43a9f8u: goto label_43a9f8;
        case 0x43a9fcu: goto label_43a9fc;
        case 0x43aa00u: goto label_43aa00;
        case 0x43aa04u: goto label_43aa04;
        case 0x43aa08u: goto label_43aa08;
        case 0x43aa0cu: goto label_43aa0c;
        case 0x43aa10u: goto label_43aa10;
        case 0x43aa14u: goto label_43aa14;
        case 0x43aa18u: goto label_43aa18;
        case 0x43aa1cu: goto label_43aa1c;
        case 0x43aa20u: goto label_43aa20;
        case 0x43aa24u: goto label_43aa24;
        case 0x43aa28u: goto label_43aa28;
        case 0x43aa2cu: goto label_43aa2c;
        case 0x43aa30u: goto label_43aa30;
        case 0x43aa34u: goto label_43aa34;
        case 0x43aa38u: goto label_43aa38;
        case 0x43aa3cu: goto label_43aa3c;
        case 0x43aa40u: goto label_43aa40;
        case 0x43aa44u: goto label_43aa44;
        case 0x43aa48u: goto label_43aa48;
        case 0x43aa4cu: goto label_43aa4c;
        case 0x43aa50u: goto label_43aa50;
        case 0x43aa54u: goto label_43aa54;
        case 0x43aa58u: goto label_43aa58;
        case 0x43aa5cu: goto label_43aa5c;
        case 0x43aa60u: goto label_43aa60;
        case 0x43aa64u: goto label_43aa64;
        case 0x43aa68u: goto label_43aa68;
        case 0x43aa6cu: goto label_43aa6c;
        case 0x43aa70u: goto label_43aa70;
        case 0x43aa74u: goto label_43aa74;
        case 0x43aa78u: goto label_43aa78;
        case 0x43aa7cu: goto label_43aa7c;
        case 0x43aa80u: goto label_43aa80;
        case 0x43aa84u: goto label_43aa84;
        case 0x43aa88u: goto label_43aa88;
        case 0x43aa8cu: goto label_43aa8c;
        case 0x43aa90u: goto label_43aa90;
        case 0x43aa94u: goto label_43aa94;
        case 0x43aa98u: goto label_43aa98;
        case 0x43aa9cu: goto label_43aa9c;
        case 0x43aaa0u: goto label_43aaa0;
        case 0x43aaa4u: goto label_43aaa4;
        case 0x43aaa8u: goto label_43aaa8;
        case 0x43aaacu: goto label_43aaac;
        case 0x43aab0u: goto label_43aab0;
        case 0x43aab4u: goto label_43aab4;
        case 0x43aab8u: goto label_43aab8;
        case 0x43aabcu: goto label_43aabc;
        case 0x43aac0u: goto label_43aac0;
        case 0x43aac4u: goto label_43aac4;
        case 0x43aac8u: goto label_43aac8;
        case 0x43aaccu: goto label_43aacc;
        case 0x43aad0u: goto label_43aad0;
        case 0x43aad4u: goto label_43aad4;
        case 0x43aad8u: goto label_43aad8;
        case 0x43aadcu: goto label_43aadc;
        case 0x43aae0u: goto label_43aae0;
        case 0x43aae4u: goto label_43aae4;
        case 0x43aae8u: goto label_43aae8;
        case 0x43aaecu: goto label_43aaec;
        case 0x43aaf0u: goto label_43aaf0;
        case 0x43aaf4u: goto label_43aaf4;
        case 0x43aaf8u: goto label_43aaf8;
        case 0x43aafcu: goto label_43aafc;
        case 0x43ab00u: goto label_43ab00;
        case 0x43ab04u: goto label_43ab04;
        case 0x43ab08u: goto label_43ab08;
        case 0x43ab0cu: goto label_43ab0c;
        case 0x43ab10u: goto label_43ab10;
        case 0x43ab14u: goto label_43ab14;
        case 0x43ab18u: goto label_43ab18;
        case 0x43ab1cu: goto label_43ab1c;
        case 0x43ab20u: goto label_43ab20;
        case 0x43ab24u: goto label_43ab24;
        case 0x43ab28u: goto label_43ab28;
        case 0x43ab2cu: goto label_43ab2c;
        case 0x43ab30u: goto label_43ab30;
        case 0x43ab34u: goto label_43ab34;
        case 0x43ab38u: goto label_43ab38;
        case 0x43ab3cu: goto label_43ab3c;
        case 0x43ab40u: goto label_43ab40;
        case 0x43ab44u: goto label_43ab44;
        case 0x43ab48u: goto label_43ab48;
        case 0x43ab4cu: goto label_43ab4c;
        case 0x43ab50u: goto label_43ab50;
        case 0x43ab54u: goto label_43ab54;
        case 0x43ab58u: goto label_43ab58;
        case 0x43ab5cu: goto label_43ab5c;
        case 0x43ab60u: goto label_43ab60;
        case 0x43ab64u: goto label_43ab64;
        case 0x43ab68u: goto label_43ab68;
        case 0x43ab6cu: goto label_43ab6c;
        case 0x43ab70u: goto label_43ab70;
        case 0x43ab74u: goto label_43ab74;
        case 0x43ab78u: goto label_43ab78;
        case 0x43ab7cu: goto label_43ab7c;
        case 0x43ab80u: goto label_43ab80;
        case 0x43ab84u: goto label_43ab84;
        case 0x43ab88u: goto label_43ab88;
        case 0x43ab8cu: goto label_43ab8c;
        case 0x43ab90u: goto label_43ab90;
        case 0x43ab94u: goto label_43ab94;
        case 0x43ab98u: goto label_43ab98;
        case 0x43ab9cu: goto label_43ab9c;
        case 0x43aba0u: goto label_43aba0;
        case 0x43aba4u: goto label_43aba4;
        case 0x43aba8u: goto label_43aba8;
        case 0x43abacu: goto label_43abac;
        case 0x43abb0u: goto label_43abb0;
        case 0x43abb4u: goto label_43abb4;
        case 0x43abb8u: goto label_43abb8;
        case 0x43abbcu: goto label_43abbc;
        case 0x43abc0u: goto label_43abc0;
        case 0x43abc4u: goto label_43abc4;
        case 0x43abc8u: goto label_43abc8;
        case 0x43abccu: goto label_43abcc;
        case 0x43abd0u: goto label_43abd0;
        case 0x43abd4u: goto label_43abd4;
        case 0x43abd8u: goto label_43abd8;
        case 0x43abdcu: goto label_43abdc;
        case 0x43abe0u: goto label_43abe0;
        case 0x43abe4u: goto label_43abe4;
        case 0x43abe8u: goto label_43abe8;
        case 0x43abecu: goto label_43abec;
        case 0x43abf0u: goto label_43abf0;
        case 0x43abf4u: goto label_43abf4;
        case 0x43abf8u: goto label_43abf8;
        case 0x43abfcu: goto label_43abfc;
        case 0x43ac00u: goto label_43ac00;
        case 0x43ac04u: goto label_43ac04;
        case 0x43ac08u: goto label_43ac08;
        case 0x43ac0cu: goto label_43ac0c;
        case 0x43ac10u: goto label_43ac10;
        case 0x43ac14u: goto label_43ac14;
        case 0x43ac18u: goto label_43ac18;
        case 0x43ac1cu: goto label_43ac1c;
        case 0x43ac20u: goto label_43ac20;
        case 0x43ac24u: goto label_43ac24;
        case 0x43ac28u: goto label_43ac28;
        case 0x43ac2cu: goto label_43ac2c;
        case 0x43ac30u: goto label_43ac30;
        case 0x43ac34u: goto label_43ac34;
        case 0x43ac38u: goto label_43ac38;
        case 0x43ac3cu: goto label_43ac3c;
        case 0x43ac40u: goto label_43ac40;
        case 0x43ac44u: goto label_43ac44;
        case 0x43ac48u: goto label_43ac48;
        case 0x43ac4cu: goto label_43ac4c;
        case 0x43ac50u: goto label_43ac50;
        case 0x43ac54u: goto label_43ac54;
        case 0x43ac58u: goto label_43ac58;
        case 0x43ac5cu: goto label_43ac5c;
        case 0x43ac60u: goto label_43ac60;
        case 0x43ac64u: goto label_43ac64;
        case 0x43ac68u: goto label_43ac68;
        case 0x43ac6cu: goto label_43ac6c;
        case 0x43ac70u: goto label_43ac70;
        case 0x43ac74u: goto label_43ac74;
        case 0x43ac78u: goto label_43ac78;
        case 0x43ac7cu: goto label_43ac7c;
        case 0x43ac80u: goto label_43ac80;
        case 0x43ac84u: goto label_43ac84;
        case 0x43ac88u: goto label_43ac88;
        case 0x43ac8cu: goto label_43ac8c;
        default: break;
    }

    ctx->pc = 0x43a3f0u;

label_43a3f0:
    // 0x43a3f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43a3f4:
    // 0x43a3f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x43a3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43a3f8:
    // 0x43a3f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43a3fc:
    // 0x43a3fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43a400:
    // 0x43a400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43a404:
    // 0x43a404: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43a404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43a408:
    // 0x43a408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43a40c:
    // 0x43a40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43a410:
    // 0x43a410: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43a414:
    // 0x43a414: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43a414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43a418:
    // 0x43a418: 0xc10ca68  jal         func_4329A0
label_43a41c:
    if (ctx->pc == 0x43A41Cu) {
        ctx->pc = 0x43A41Cu;
            // 0x43a41c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x43A420u;
        goto label_43a420;
    }
    ctx->pc = 0x43A418u;
    SET_GPR_U32(ctx, 31, 0x43A420u);
    ctx->pc = 0x43A41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A418u;
            // 0x43a41c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A420u; }
        if (ctx->pc != 0x43A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A420u; }
        if (ctx->pc != 0x43A420u) { return; }
    }
    ctx->pc = 0x43A420u;
label_43a420:
    // 0x43a420: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43a420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43a424:
    // 0x43a424: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43a428:
    // 0x43a428: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x43a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_43a42c:
    // 0x43a42c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x43a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_43a430:
    // 0x43a430: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43a430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_43a434:
    // 0x43a434: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x43a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_43a438:
    // 0x43a438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x43a438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_43a43c:
    // 0x43a43c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43a440:
    // 0x43a440: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x43a440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_43a444:
    // 0x43a444: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43a448:
    // 0x43a448: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x43a448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_43a44c:
    // 0x43a44c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x43a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_43a450:
    // 0x43a450: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x43a450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_43a454:
    // 0x43a454: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x43a454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_43a458:
    // 0x43a458: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x43a458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_43a45c:
    // 0x43a45c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x43a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_43a460:
    // 0x43a460: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x43a460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_43a464:
    // 0x43a464: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x43a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_43a468:
    // 0x43a468: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x43a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_43a46c:
    // 0x43a46c: 0xc0582cc  jal         func_160B30
label_43a470:
    if (ctx->pc == 0x43A470u) {
        ctx->pc = 0x43A470u;
            // 0x43a470: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x43A474u;
        goto label_43a474;
    }
    ctx->pc = 0x43A46Cu;
    SET_GPR_U32(ctx, 31, 0x43A474u);
    ctx->pc = 0x43A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A46Cu;
            // 0x43a470: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A474u; }
        if (ctx->pc != 0x43A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A474u; }
        if (ctx->pc != 0x43A474u) { return; }
    }
    ctx->pc = 0x43A474u;
label_43a474:
    // 0x43a474: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43a478:
    // 0x43a478: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x43a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_43a47c:
    // 0x43a47c: 0x2463cf00  addiu       $v1, $v1, -0x3100
    ctx->pc = 0x43a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954752));
label_43a480:
    // 0x43a480: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x43a480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_43a484:
    // 0x43a484: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x43a484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_43a488:
    // 0x43a488: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43a48c:
    // 0x43a48c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43a490:
    // 0x43a490: 0xac446ec0  sw          $a0, 0x6EC0($v0)
    ctx->pc = 0x43a490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28352), GPR_U32(ctx, 4));
label_43a494:
    // 0x43a494: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x43a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_43a498:
    // 0x43a498: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43a49c:
    // 0x43a49c: 0x2442cf48  addiu       $v0, $v0, -0x30B8
    ctx->pc = 0x43a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954824));
label_43a4a0:
    // 0x43a4a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_43a4a4:
    // 0x43a4a4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x43a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_43a4a8:
    // 0x43a4a8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x43a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_43a4ac:
    // 0x43a4ac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x43a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_43a4b0:
    // 0x43a4b0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x43a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_43a4b4:
    // 0x43a4b4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x43a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_43a4b8:
    // 0x43a4b8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x43a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_43a4bc:
    // 0x43a4bc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x43a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_43a4c0:
    // 0x43a4c0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x43a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_43a4c4:
    // 0x43a4c4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x43a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_43a4c8:
    // 0x43a4c8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x43a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_43a4cc:
    // 0x43a4cc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x43a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_43a4d0:
    // 0x43a4d0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x43a4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_43a4d4:
    // 0x43a4d4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_43a4d8:
    if (ctx->pc == 0x43A4D8u) {
        ctx->pc = 0x43A4DCu;
        goto label_43a4dc;
    }
    ctx->pc = 0x43A4D4u;
    {
        const bool branch_taken_0x43a4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a4d4) {
            ctx->pc = 0x43A568u;
            goto label_43a568;
        }
    }
    ctx->pc = 0x43A4DCu;
label_43a4dc:
    // 0x43a4dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x43a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_43a4e0:
    // 0x43a4e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x43a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_43a4e4:
    // 0x43a4e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x43a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_43a4e8:
    // 0x43a4e8: 0xc040138  jal         func_1004E0
label_43a4ec:
    if (ctx->pc == 0x43A4ECu) {
        ctx->pc = 0x43A4ECu;
            // 0x43a4ec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x43A4F0u;
        goto label_43a4f0;
    }
    ctx->pc = 0x43A4E8u;
    SET_GPR_U32(ctx, 31, 0x43A4F0u);
    ctx->pc = 0x43A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A4E8u;
            // 0x43a4ec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A4F0u; }
        if (ctx->pc != 0x43A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A4F0u; }
        if (ctx->pc != 0x43A4F0u) { return; }
    }
    ctx->pc = 0x43A4F0u;
label_43a4f0:
    // 0x43a4f0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_43a4f4:
    // 0x43a4f4: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x43a4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_43a4f8:
    // 0x43a4f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a4fc:
    // 0x43a4fc: 0x24a5a590  addiu       $a1, $a1, -0x5A70
    ctx->pc = 0x43a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944144));
label_43a500:
    // 0x43a500: 0x24c69a10  addiu       $a2, $a2, -0x65F0
    ctx->pc = 0x43a500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
label_43a504:
    // 0x43a504: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x43a504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_43a508:
    // 0x43a508: 0xc040840  jal         func_102100
label_43a50c:
    if (ctx->pc == 0x43A50Cu) {
        ctx->pc = 0x43A50Cu;
            // 0x43a50c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A510u;
        goto label_43a510;
    }
    ctx->pc = 0x43A508u;
    SET_GPR_U32(ctx, 31, 0x43A510u);
    ctx->pc = 0x43A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A508u;
            // 0x43a50c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A510u; }
        if (ctx->pc != 0x43A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A510u; }
        if (ctx->pc != 0x43A510u) { return; }
    }
    ctx->pc = 0x43A510u;
label_43a510:
    // 0x43a510: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x43a510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_43a514:
    // 0x43a514: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43a514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a518:
    // 0x43a518: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x43a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_43a51c:
    // 0x43a51c: 0xc0788fc  jal         func_1E23F0
label_43a520:
    if (ctx->pc == 0x43A520u) {
        ctx->pc = 0x43A520u;
            // 0x43a520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A524u;
        goto label_43a524;
    }
    ctx->pc = 0x43A51Cu;
    SET_GPR_U32(ctx, 31, 0x43A524u);
    ctx->pc = 0x43A520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A51Cu;
            // 0x43a520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A524u; }
        if (ctx->pc != 0x43A524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A524u; }
        if (ctx->pc != 0x43A524u) { return; }
    }
    ctx->pc = 0x43A524u;
label_43a524:
    // 0x43a524: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_43a528:
    // 0x43a528: 0xc0788fc  jal         func_1E23F0
label_43a52c:
    if (ctx->pc == 0x43A52Cu) {
        ctx->pc = 0x43A52Cu;
            // 0x43a52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A530u;
        goto label_43a530;
    }
    ctx->pc = 0x43A528u;
    SET_GPR_U32(ctx, 31, 0x43A530u);
    ctx->pc = 0x43A52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A528u;
            // 0x43a52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A530u; }
        if (ctx->pc != 0x43A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A530u; }
        if (ctx->pc != 0x43A530u) { return; }
    }
    ctx->pc = 0x43A530u;
label_43a530:
    // 0x43a530: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43a530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43a534:
    // 0x43a534: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x43a534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_43a538:
    // 0x43a538: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43a538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_43a53c:
    // 0x43a53c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x43a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_43a540:
    // 0x43a540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43a540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43a544:
    // 0x43a544: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x43a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_43a548:
    // 0x43a548: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x43a548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_43a54c:
    // 0x43a54c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43a550:
    // 0x43a550: 0xc0a997c  jal         func_2A65F0
label_43a554:
    if (ctx->pc == 0x43A554u) {
        ctx->pc = 0x43A554u;
            // 0x43a554: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x43A558u;
        goto label_43a558;
    }
    ctx->pc = 0x43A550u;
    SET_GPR_U32(ctx, 31, 0x43A558u);
    ctx->pc = 0x43A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A550u;
            // 0x43a554: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A558u; }
        if (ctx->pc != 0x43A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A558u; }
        if (ctx->pc != 0x43A558u) { return; }
    }
    ctx->pc = 0x43A558u;
label_43a558:
    // 0x43a558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43a558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43a55c:
    // 0x43a55c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x43a55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43a560:
    // 0x43a560: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_43a564:
    if (ctx->pc == 0x43A564u) {
        ctx->pc = 0x43A564u;
            // 0x43a564: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x43A568u;
        goto label_43a568;
    }
    ctx->pc = 0x43A560u;
    {
        const bool branch_taken_0x43a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A560u;
            // 0x43a564: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a560) {
            ctx->pc = 0x43A534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43a534;
        }
    }
    ctx->pc = 0x43A568u;
label_43a568:
    // 0x43a568: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43a568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43a56c:
    // 0x43a56c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43a56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43a570:
    // 0x43a570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43a570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43a574:
    // 0x43a574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43a574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43a578:
    // 0x43a578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43a57c:
    // 0x43a57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43a580:
    // 0x43a580: 0x3e00008  jr          $ra
label_43a584:
    if (ctx->pc == 0x43A584u) {
        ctx->pc = 0x43A584u;
            // 0x43a584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43A588u;
        goto label_43a588;
    }
    ctx->pc = 0x43A580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A580u;
            // 0x43a584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A588u;
label_43a588:
    // 0x43a588: 0x0  nop
    ctx->pc = 0x43a588u;
    // NOP
label_43a58c:
    // 0x43a58c: 0x0  nop
    ctx->pc = 0x43a58cu;
    // NOP
label_43a590:
    // 0x43a590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43a594:
    // 0x43a594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43a598:
    // 0x43a598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43a59c:
    // 0x43a59c: 0xc0b1370  jal         func_2C4DC0
label_43a5a0:
    if (ctx->pc == 0x43A5A0u) {
        ctx->pc = 0x43A5A0u;
            // 0x43a5a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A5A4u;
        goto label_43a5a4;
    }
    ctx->pc = 0x43A59Cu;
    SET_GPR_U32(ctx, 31, 0x43A5A4u);
    ctx->pc = 0x43A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A59Cu;
            // 0x43a5a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A5A4u; }
        if (ctx->pc != 0x43A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A5A4u; }
        if (ctx->pc != 0x43A5A4u) { return; }
    }
    ctx->pc = 0x43A5A4u;
label_43a5a4:
    // 0x43a5a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43a5a8:
    // 0x43a5a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43a5ac:
    // 0x43a5ac: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x43a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_43a5b0:
    // 0x43a5b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x43a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_43a5b4:
    // 0x43a5b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43a5b8:
    // 0x43a5b8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x43a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_43a5bc:
    // 0x43a5bc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43a5c0:
    // 0x43a5c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43a5c4:
    // 0x43a5c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x43a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_43a5c8:
    // 0x43a5c8: 0x2484ce50  addiu       $a0, $a0, -0x31B0
    ctx->pc = 0x43a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954576));
label_43a5cc:
    // 0x43a5cc: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x43a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_43a5d0:
    // 0x43a5d0: 0x2463ce90  addiu       $v1, $v1, -0x3170
    ctx->pc = 0x43a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954640));
label_43a5d4:
    // 0x43a5d4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x43a5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_43a5d8:
    // 0x43a5d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43a5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a5dc:
    // 0x43a5dc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x43a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_43a5e0:
    // 0x43a5e0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x43a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_43a5e4:
    // 0x43a5e4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x43a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_43a5e8:
    // 0x43a5e8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x43a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_43a5ec:
    // 0x43a5ec: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x43a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_43a5f0:
    // 0x43a5f0: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x43a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_43a5f4:
    // 0x43a5f4: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x43a5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
label_43a5f8:
    // 0x43a5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43a5fc:
    // 0x43a5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43a600:
    // 0x43a600: 0x3e00008  jr          $ra
label_43a604:
    if (ctx->pc == 0x43A604u) {
        ctx->pc = 0x43A604u;
            // 0x43a604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43A608u;
        goto label_43a608;
    }
    ctx->pc = 0x43A600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A600u;
            // 0x43a604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A608u;
label_43a608:
    // 0x43a608: 0x0  nop
    ctx->pc = 0x43a608u;
    // NOP
label_43a60c:
    // 0x43a60c: 0x0  nop
    ctx->pc = 0x43a60cu;
    // NOP
label_43a610:
    // 0x43a610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43a614:
    // 0x43a614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43a618:
    // 0x43a618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43a61c:
    // 0x43a61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43a620:
    // 0x43a620: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x43a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_43a624:
    // 0x43a624: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43a628:
    if (ctx->pc == 0x43A628u) {
        ctx->pc = 0x43A628u;
            // 0x43a628: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x43A62Cu;
        goto label_43a62c;
    }
    ctx->pc = 0x43A624u;
    {
        const bool branch_taken_0x43a624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a624) {
            ctx->pc = 0x43A628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A624u;
            // 0x43a628: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A640u;
            goto label_43a640;
        }
    }
    ctx->pc = 0x43A62Cu;
label_43a62c:
    // 0x43a62c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43a62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43a630:
    // 0x43a630: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43a630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43a634:
    // 0x43a634: 0x320f809  jalr        $t9
label_43a638:
    if (ctx->pc == 0x43A638u) {
        ctx->pc = 0x43A638u;
            // 0x43a638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43A63Cu;
        goto label_43a63c;
    }
    ctx->pc = 0x43A634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43A63Cu);
        ctx->pc = 0x43A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A634u;
            // 0x43a638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43A63Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43A63Cu; }
            if (ctx->pc != 0x43A63Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43A63Cu;
label_43a63c:
    // 0x43a63c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x43a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_43a640:
    // 0x43a640: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x43a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43a644:
    // 0x43a644: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43a648:
    if (ctx->pc == 0x43A648u) {
        ctx->pc = 0x43A648u;
            // 0x43a648: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x43A64Cu;
        goto label_43a64c;
    }
    ctx->pc = 0x43A644u;
    {
        const bool branch_taken_0x43a644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a644) {
            ctx->pc = 0x43A648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A644u;
            // 0x43a648: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A660u;
            goto label_43a660;
        }
    }
    ctx->pc = 0x43A64Cu;
label_43a64c:
    // 0x43a64c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x43a64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_43a650:
    // 0x43a650: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43a650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43a654:
    // 0x43a654: 0x320f809  jalr        $t9
label_43a658:
    if (ctx->pc == 0x43A658u) {
        ctx->pc = 0x43A658u;
            // 0x43a658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43A65Cu;
        goto label_43a65c;
    }
    ctx->pc = 0x43A654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43A65Cu);
        ctx->pc = 0x43A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A654u;
            // 0x43a658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43A65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43A65Cu; }
            if (ctx->pc != 0x43A65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43A65Cu;
label_43a65c:
    // 0x43a65c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x43a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_43a660:
    // 0x43a660: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43a664:
    // 0x43a664: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_43a668:
    if (ctx->pc == 0x43A668u) {
        ctx->pc = 0x43A668u;
            // 0x43a668: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x43A66Cu;
        goto label_43a66c;
    }
    ctx->pc = 0x43A664u;
    {
        const bool branch_taken_0x43a664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a664) {
            ctx->pc = 0x43A668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A664u;
            // 0x43a668: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A680u;
            goto label_43a680;
        }
    }
    ctx->pc = 0x43A66Cu;
label_43a66c:
    // 0x43a66c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43a66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43a670:
    // 0x43a670: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x43a670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43a674:
    // 0x43a674: 0x320f809  jalr        $t9
label_43a678:
    if (ctx->pc == 0x43A678u) {
        ctx->pc = 0x43A678u;
            // 0x43a678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43A67Cu;
        goto label_43a67c;
    }
    ctx->pc = 0x43A674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43A67Cu);
        ctx->pc = 0x43A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A674u;
            // 0x43a678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43A67Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43A67Cu; }
            if (ctx->pc != 0x43A67Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43A67Cu;
label_43a67c:
    // 0x43a67c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x43a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_43a680:
    // 0x43a680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43a680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43a684:
    // 0x43a684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43a688:
    // 0x43a688: 0x3e00008  jr          $ra
label_43a68c:
    if (ctx->pc == 0x43A68Cu) {
        ctx->pc = 0x43A68Cu;
            // 0x43a68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43A690u;
        goto label_43a690;
    }
    ctx->pc = 0x43A688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A688u;
            // 0x43a68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A690u;
label_43a690:
    // 0x43a690: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x43a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_43a694:
    // 0x43a694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_43a698:
    // 0x43a698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43a69c:
    // 0x43a69c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43a69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43a6a0:
    // 0x43a6a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43a6a4:
    // 0x43a6a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43a6a8:
    // 0x43a6a8: 0xc0892d0  jal         func_224B40
label_43a6ac:
    if (ctx->pc == 0x43A6ACu) {
        ctx->pc = 0x43A6ACu;
            // 0x43a6ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x43A6B0u;
        goto label_43a6b0;
    }
    ctx->pc = 0x43A6A8u;
    SET_GPR_U32(ctx, 31, 0x43A6B0u);
    ctx->pc = 0x43A6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6A8u;
            // 0x43a6ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6B0u; }
        if (ctx->pc != 0x43A6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6B0u; }
        if (ctx->pc != 0x43A6B0u) { return; }
    }
    ctx->pc = 0x43A6B0u;
label_43a6b0:
    // 0x43a6b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43a6b4:
    // 0x43a6b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43a6b8:
    // 0x43a6b8: 0x8c426ec0  lw          $v0, 0x6EC0($v0)
    ctx->pc = 0x43a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
label_43a6bc:
    // 0x43a6bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x43a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43a6c0:
    // 0x43a6c0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x43a6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_43a6c4:
    // 0x43a6c4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x43a6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_43a6c8:
    // 0x43a6c8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x43a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_43a6cc:
    // 0x43a6cc: 0xc0b6e68  jal         func_2DB9A0
label_43a6d0:
    if (ctx->pc == 0x43A6D0u) {
        ctx->pc = 0x43A6D0u;
            // 0x43a6d0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x43A6D4u;
        goto label_43a6d4;
    }
    ctx->pc = 0x43A6CCu;
    SET_GPR_U32(ctx, 31, 0x43A6D4u);
    ctx->pc = 0x43A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6CCu;
            // 0x43a6d0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6D4u; }
        if (ctx->pc != 0x43A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6D4u; }
        if (ctx->pc != 0x43A6D4u) { return; }
    }
    ctx->pc = 0x43A6D4u;
label_43a6d4:
    // 0x43a6d4: 0xc0b6dac  jal         func_2DB6B0
label_43a6d8:
    if (ctx->pc == 0x43A6D8u) {
        ctx->pc = 0x43A6D8u;
            // 0x43a6d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43A6DCu;
        goto label_43a6dc;
    }
    ctx->pc = 0x43A6D4u;
    SET_GPR_U32(ctx, 31, 0x43A6DCu);
    ctx->pc = 0x43A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6D4u;
            // 0x43a6d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6DCu; }
        if (ctx->pc != 0x43A6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6DCu; }
        if (ctx->pc != 0x43A6DCu) { return; }
    }
    ctx->pc = 0x43A6DCu;
label_43a6dc:
    // 0x43a6dc: 0xc0cac94  jal         func_32B250
label_43a6e0:
    if (ctx->pc == 0x43A6E0u) {
        ctx->pc = 0x43A6E0u;
            // 0x43a6e0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x43A6E4u;
        goto label_43a6e4;
    }
    ctx->pc = 0x43A6DCu;
    SET_GPR_U32(ctx, 31, 0x43A6E4u);
    ctx->pc = 0x43A6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6DCu;
            // 0x43a6e0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6E4u; }
        if (ctx->pc != 0x43A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6E4u; }
        if (ctx->pc != 0x43A6E4u) { return; }
    }
    ctx->pc = 0x43A6E4u;
label_43a6e4:
    // 0x43a6e4: 0xc0cac84  jal         func_32B210
label_43a6e8:
    if (ctx->pc == 0x43A6E8u) {
        ctx->pc = 0x43A6E8u;
            // 0x43a6e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43A6ECu;
        goto label_43a6ec;
    }
    ctx->pc = 0x43A6E4u;
    SET_GPR_U32(ctx, 31, 0x43A6ECu);
    ctx->pc = 0x43A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6E4u;
            // 0x43a6e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6ECu; }
        if (ctx->pc != 0x43A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A6ECu; }
        if (ctx->pc != 0x43A6ECu) { return; }
    }
    ctx->pc = 0x43A6ECu;
label_43a6ec:
    // 0x43a6ec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x43a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_43a6f0:
    // 0x43a6f0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x43a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_43a6f4:
    // 0x43a6f4: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x43a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43a6f8:
    // 0x43a6f8: 0xc0a5a68  jal         func_2969A0
label_43a6fc:
    if (ctx->pc == 0x43A6FCu) {
        ctx->pc = 0x43A6FCu;
            // 0x43a6fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43A700u;
        goto label_43a700;
    }
    ctx->pc = 0x43A6F8u;
    SET_GPR_U32(ctx, 31, 0x43A700u);
    ctx->pc = 0x43A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A6F8u;
            // 0x43a6fc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A700u; }
        if (ctx->pc != 0x43A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A700u; }
        if (ctx->pc != 0x43A700u) { return; }
    }
    ctx->pc = 0x43A700u;
label_43a700:
    // 0x43a700: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43a704:
    // 0x43a704: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43a704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43a708:
    // 0x43a708: 0x8c446ec0  lw          $a0, 0x6EC0($v0)
    ctx->pc = 0x43a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
label_43a70c:
    // 0x43a70c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x43a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a710:
    // 0x43a710: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x43a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a714:
    // 0x43a714: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x43a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43a718:
    // 0x43a718: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x43a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a71c:
    // 0x43a71c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x43a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_43a720:
    // 0x43a720: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x43a720u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_43a724:
    // 0x43a724: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x43a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_43a728:
    // 0x43a728: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x43a728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_43a72c:
    // 0x43a72c: 0x3c020220  lui         $v0, 0x220
    ctx->pc = 0x43a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)544 << 16));
label_43a730:
    // 0x43a730: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x43a730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_43a734:
    // 0x43a734: 0x34430220  ori         $v1, $v0, 0x220
    ctx->pc = 0x43a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)544);
label_43a738:
    // 0x43a738: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x43a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_43a73c:
    // 0x43a73c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a740:
    // 0x43a740: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x43a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_43a744:
    // 0x43a744: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43a744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43a748:
    // 0x43a748: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x43a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_43a74c:
    // 0x43a74c: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x43a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_43a750:
    // 0x43a750: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x43a750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43a754:
    // 0x43a754: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x43a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_43a758:
    // 0x43a758: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x43a758u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_43a75c:
    // 0x43a75c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x43a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a760:
    // 0x43a760: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x43a760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_43a764:
    // 0x43a764: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x43a764u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_43a768:
    // 0x43a768: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x43a768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_43a76c:
    // 0x43a76c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x43a76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_43a770:
    // 0x43a770: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x43a770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_43a774:
    // 0x43a774: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x43a774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_43a778:
    // 0x43a778: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x43a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a77c:
    // 0x43a77c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x43a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a780:
    // 0x43a780: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x43a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a784:
    // 0x43a784: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x43a784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_43a788:
    // 0x43a788: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x43a788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_43a78c:
    // 0x43a78c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x43a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_43a790:
    // 0x43a790: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x43a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a794:
    // 0x43a794: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x43a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a798:
    // 0x43a798: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x43a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a79c:
    // 0x43a79c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x43a79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_43a7a0:
    // 0x43a7a0: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x43a7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_43a7a4:
    // 0x43a7a4: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x43a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_43a7a8:
    // 0x43a7a8: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x43a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43a7ac:
    // 0x43a7ac: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x43a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43a7b0:
    // 0x43a7b0: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x43a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a7b4:
    // 0x43a7b4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x43a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a7b8:
    // 0x43a7b8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x43a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a7bc:
    // 0x43a7bc: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x43a7bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_43a7c0:
    // 0x43a7c0: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x43a7c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_43a7c4:
    // 0x43a7c4: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x43a7c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_43a7c8:
    // 0x43a7c8: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x43a7c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_43a7cc:
    // 0x43a7cc: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x43a7ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_43a7d0:
    // 0x43a7d0: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x43a7d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_43a7d4:
    // 0x43a7d4: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x43a7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_43a7d8:
    // 0x43a7d8: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x43a7d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_43a7dc:
    // 0x43a7dc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x43a7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_43a7e0:
    // 0x43a7e0: 0xc0a7a88  jal         func_29EA20
label_43a7e4:
    if (ctx->pc == 0x43A7E4u) {
        ctx->pc = 0x43A7E4u;
            // 0x43a7e4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x43A7E8u;
        goto label_43a7e8;
    }
    ctx->pc = 0x43A7E0u;
    SET_GPR_U32(ctx, 31, 0x43A7E8u);
    ctx->pc = 0x43A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A7E0u;
            // 0x43a7e4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A7E8u; }
        if (ctx->pc != 0x43A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A7E8u; }
        if (ctx->pc != 0x43A7E8u) { return; }
    }
    ctx->pc = 0x43A7E8u;
label_43a7e8:
    // 0x43a7e8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x43a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43a7ec:
    // 0x43a7ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a7f0:
    // 0x43a7f0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_43a7f4:
    if (ctx->pc == 0x43A7F4u) {
        ctx->pc = 0x43A7F4u;
            // 0x43a7f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43A7F8u;
        goto label_43a7f8;
    }
    ctx->pc = 0x43A7F0u;
    {
        const bool branch_taken_0x43a7f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A7F0u;
            // 0x43a7f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a7f0) {
            ctx->pc = 0x43A840u;
            goto label_43a840;
        }
    }
    ctx->pc = 0x43A7F8u;
label_43a7f8:
    // 0x43a7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43a7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a7fc:
    // 0x43a7fc: 0xc088ef4  jal         func_223BD0
label_43a800:
    if (ctx->pc == 0x43A800u) {
        ctx->pc = 0x43A800u;
            // 0x43a800: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x43A804u;
        goto label_43a804;
    }
    ctx->pc = 0x43A7FCu;
    SET_GPR_U32(ctx, 31, 0x43A804u);
    ctx->pc = 0x43A800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A7FCu;
            // 0x43a800: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A804u; }
        if (ctx->pc != 0x43A804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A804u; }
        if (ctx->pc != 0x43A804u) { return; }
    }
    ctx->pc = 0x43A804u;
label_43a804:
    // 0x43a804: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43a808:
    // 0x43a808: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43a80c:
    // 0x43a80c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x43a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_43a810:
    // 0x43a810: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x43a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_43a814:
    // 0x43a814: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x43a814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43a818:
    // 0x43a818: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x43a818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_43a81c:
    // 0x43a81c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a820:
    // 0x43a820: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43a820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43a824:
    // 0x43a824: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x43a824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_43a828:
    // 0x43a828: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x43a828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_43a82c:
    // 0x43a82c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x43a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_43a830:
    // 0x43a830: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43a834:
    // 0x43a834: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x43a834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43a838:
    // 0x43a838: 0xc088b38  jal         func_222CE0
label_43a83c:
    if (ctx->pc == 0x43A83Cu) {
        ctx->pc = 0x43A83Cu;
            // 0x43a83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A840u;
        goto label_43a840;
    }
    ctx->pc = 0x43A838u;
    SET_GPR_U32(ctx, 31, 0x43A840u);
    ctx->pc = 0x43A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A838u;
            // 0x43a83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A840u; }
        if (ctx->pc != 0x43A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A840u; }
        if (ctx->pc != 0x43A840u) { return; }
    }
    ctx->pc = 0x43A840u;
label_43a840:
    // 0x43a840: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x43a840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43a844:
    // 0x43a844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43a844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a848:
    // 0x43a848: 0xc08c164  jal         func_230590
label_43a84c:
    if (ctx->pc == 0x43A84Cu) {
        ctx->pc = 0x43A84Cu;
            // 0x43a84c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43A850u;
        goto label_43a850;
    }
    ctx->pc = 0x43A848u;
    SET_GPR_U32(ctx, 31, 0x43A850u);
    ctx->pc = 0x43A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A848u;
            // 0x43a84c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A850u; }
        if (ctx->pc != 0x43A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A850u; }
        if (ctx->pc != 0x43A850u) { return; }
    }
    ctx->pc = 0x43A850u;
label_43a850:
    // 0x43a850: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x43a850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_43a854:
    // 0x43a854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a858:
    // 0x43a858: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x43a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_43a85c:
    // 0x43a85c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43a860:
    // 0x43a860: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x43a860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_43a864:
    // 0x43a864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43a864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43a868:
    // 0x43a868: 0xc08914c  jal         func_224530
label_43a86c:
    if (ctx->pc == 0x43A86Cu) {
        ctx->pc = 0x43A86Cu;
            // 0x43a86c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A870u;
        goto label_43a870;
    }
    ctx->pc = 0x43A868u;
    SET_GPR_U32(ctx, 31, 0x43A870u);
    ctx->pc = 0x43A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A868u;
            // 0x43a86c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A870u; }
        if (ctx->pc != 0x43A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A870u; }
        if (ctx->pc != 0x43A870u) { return; }
    }
    ctx->pc = 0x43A870u;
label_43a870:
    // 0x43a870: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x43a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_43a874:
    // 0x43a874: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x43a874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_43a878:
    // 0x43a878: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x43a878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_43a87c:
    // 0x43a87c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x43a87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_43a880:
    // 0x43a880: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x43a880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_43a884:
    // 0x43a884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a888:
    // 0x43a888: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x43a888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_43a88c:
    // 0x43a88c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x43a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_43a890:
    // 0x43a890: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x43a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a894:
    // 0x43a894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x43a894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_43a898:
    // 0x43a898: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x43a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a89c:
    // 0x43a89c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x43a89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a8a0:
    // 0x43a8a0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x43a8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43a8a4:
    // 0x43a8a4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x43a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_43a8a8:
    // 0x43a8a8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x43a8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_43a8ac:
    // 0x43a8ac: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x43a8acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_43a8b0:
    // 0x43a8b0: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x43a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43a8b4:
    // 0x43a8b4: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x43a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43a8b8:
    // 0x43a8b8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x43a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43a8bc:
    // 0x43a8bc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x43a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43a8c0:
    // 0x43a8c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x43a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_43a8c4:
    // 0x43a8c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x43a8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_43a8c8:
    // 0x43a8c8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x43a8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_43a8cc:
    // 0x43a8cc: 0xc0892b0  jal         func_224AC0
label_43a8d0:
    if (ctx->pc == 0x43A8D0u) {
        ctx->pc = 0x43A8D0u;
            // 0x43a8d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x43A8D4u;
        goto label_43a8d4;
    }
    ctx->pc = 0x43A8CCu;
    SET_GPR_U32(ctx, 31, 0x43A8D4u);
    ctx->pc = 0x43A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A8CCu;
            // 0x43a8d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A8D4u; }
        if (ctx->pc != 0x43A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A8D4u; }
        if (ctx->pc != 0x43A8D4u) { return; }
    }
    ctx->pc = 0x43A8D4u;
label_43a8d4:
    // 0x43a8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a8d8:
    // 0x43a8d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x43a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_43a8dc:
    // 0x43a8dc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x43a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_43a8e0:
    // 0x43a8e0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x43a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_43a8e4:
    // 0x43a8e4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x43a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_43a8e8:
    // 0x43a8e8: 0xc0891d8  jal         func_224760
label_43a8ec:
    if (ctx->pc == 0x43A8ECu) {
        ctx->pc = 0x43A8ECu;
            // 0x43a8ec: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x43A8F0u;
        goto label_43a8f0;
    }
    ctx->pc = 0x43A8E8u;
    SET_GPR_U32(ctx, 31, 0x43A8F0u);
    ctx->pc = 0x43A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A8E8u;
            // 0x43a8ec: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A8F0u; }
        if (ctx->pc != 0x43A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A8F0u; }
        if (ctx->pc != 0x43A8F0u) { return; }
    }
    ctx->pc = 0x43A8F0u;
label_43a8f0:
    // 0x43a8f0: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x43a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_43a8f4:
    // 0x43a8f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a8f8:
    // 0x43a8f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_43a8fc:
    // 0x43a8fc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x43a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43a900:
    // 0x43a900: 0xc0a7a88  jal         func_29EA20
label_43a904:
    if (ctx->pc == 0x43A904u) {
        ctx->pc = 0x43A904u;
            // 0x43a904: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x43A908u;
        goto label_43a908;
    }
    ctx->pc = 0x43A900u;
    SET_GPR_U32(ctx, 31, 0x43A908u);
    ctx->pc = 0x43A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A900u;
            // 0x43a904: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A908u; }
        if (ctx->pc != 0x43A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A908u; }
        if (ctx->pc != 0x43A908u) { return; }
    }
    ctx->pc = 0x43A908u;
label_43a908:
    // 0x43a908: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x43a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43a90c:
    // 0x43a90c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a910:
    // 0x43a910: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_43a914:
    if (ctx->pc == 0x43A914u) {
        ctx->pc = 0x43A914u;
            // 0x43a914: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43A918u;
        goto label_43a918;
    }
    ctx->pc = 0x43A910u;
    {
        const bool branch_taken_0x43a910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A910u;
            // 0x43a914: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a910) {
            ctx->pc = 0x43A934u;
            goto label_43a934;
        }
    }
    ctx->pc = 0x43A918u;
label_43a918:
    // 0x43a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a91c:
    // 0x43a91c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43a91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a920:
    // 0x43a920: 0xc0869d0  jal         func_21A740
label_43a924:
    if (ctx->pc == 0x43A924u) {
        ctx->pc = 0x43A924u;
            // 0x43a924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A928u;
        goto label_43a928;
    }
    ctx->pc = 0x43A920u;
    SET_GPR_U32(ctx, 31, 0x43A928u);
    ctx->pc = 0x43A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A920u;
            // 0x43a924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A928u; }
        if (ctx->pc != 0x43A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A928u; }
        if (ctx->pc != 0x43A928u) { return; }
    }
    ctx->pc = 0x43A928u;
label_43a928:
    // 0x43a928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43a92c:
    // 0x43a92c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x43a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_43a930:
    // 0x43a930: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43a930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_43a934:
    // 0x43a934: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x43a934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_43a938:
    // 0x43a938: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a93c:
    // 0x43a93c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43a940:
    // 0x43a940: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43a940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43a944:
    // 0x43a944: 0xc08c650  jal         func_231940
label_43a948:
    if (ctx->pc == 0x43A948u) {
        ctx->pc = 0x43A948u;
            // 0x43a948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A94Cu;
        goto label_43a94c;
    }
    ctx->pc = 0x43A944u;
    SET_GPR_U32(ctx, 31, 0x43A94Cu);
    ctx->pc = 0x43A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A944u;
            // 0x43a948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A94Cu; }
        if (ctx->pc != 0x43A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A94Cu; }
        if (ctx->pc != 0x43A94Cu) { return; }
    }
    ctx->pc = 0x43A94Cu;
label_43a94c:
    // 0x43a94c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43a950:
    // 0x43a950: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x43a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_43a954:
    // 0x43a954: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x43a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_43a958:
    // 0x43a958: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x43a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_43a95c:
    // 0x43a95c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_43a960:
    if (ctx->pc == 0x43A960u) {
        ctx->pc = 0x43A960u;
            // 0x43a960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A964u;
        goto label_43a964;
    }
    ctx->pc = 0x43A95Cu;
    {
        const bool branch_taken_0x43a95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43A960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A95Cu;
            // 0x43a960: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a95c) {
            ctx->pc = 0x43A980u;
            goto label_43a980;
        }
    }
    ctx->pc = 0x43A964u;
label_43a964:
    // 0x43a964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43a968:
    // 0x43a968: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x43a968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43a96c:
    // 0x43a96c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x43a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_43a970:
    // 0x43a970: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x43a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_43a974:
    // 0x43a974: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_43a978:
    if (ctx->pc == 0x43A978u) {
        ctx->pc = 0x43A97Cu;
        goto label_43a97c;
    }
    ctx->pc = 0x43A974u;
    {
        const bool branch_taken_0x43a974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43a974) {
            ctx->pc = 0x43A980u;
            goto label_43a980;
        }
    }
    ctx->pc = 0x43A97Cu;
label_43a97c:
    // 0x43a97c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x43a97cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_43a980:
    // 0x43a980: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_43a984:
    if (ctx->pc == 0x43A984u) {
        ctx->pc = 0x43A984u;
            // 0x43a984: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x43A988u;
        goto label_43a988;
    }
    ctx->pc = 0x43A980u;
    {
        const bool branch_taken_0x43a980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a980) {
            ctx->pc = 0x43A984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A980u;
            // 0x43a984: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A9D0u;
            goto label_43a9d0;
        }
    }
    ctx->pc = 0x43A988u;
label_43a988:
    // 0x43a988: 0xc040180  jal         func_100600
label_43a98c:
    if (ctx->pc == 0x43A98Cu) {
        ctx->pc = 0x43A98Cu;
            // 0x43a98c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x43A990u;
        goto label_43a990;
    }
    ctx->pc = 0x43A988u;
    SET_GPR_U32(ctx, 31, 0x43A990u);
    ctx->pc = 0x43A98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A988u;
            // 0x43a98c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A990u; }
        if (ctx->pc != 0x43A990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A990u; }
        if (ctx->pc != 0x43A990u) { return; }
    }
    ctx->pc = 0x43A990u;
label_43a990:
    // 0x43a990: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_43a994:
    if (ctx->pc == 0x43A994u) {
        ctx->pc = 0x43A994u;
            // 0x43a994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A998u;
        goto label_43a998;
    }
    ctx->pc = 0x43A990u;
    {
        const bool branch_taken_0x43a990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A990u;
            // 0x43a994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a990) {
            ctx->pc = 0x43A9C0u;
            goto label_43a9c0;
        }
    }
    ctx->pc = 0x43A998u;
label_43a998:
    // 0x43a998: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x43a998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43a99c:
    // 0x43a99c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_43a9a0:
    // 0x43a9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a9a4:
    // 0x43a9a4: 0xc10eb24  jal         func_43AC90
label_43a9a8:
    if (ctx->pc == 0x43A9A8u) {
        ctx->pc = 0x43A9A8u;
            // 0x43a9a8: 0x24c6d008  addiu       $a2, $a2, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955016));
        ctx->pc = 0x43A9ACu;
        goto label_43a9ac;
    }
    ctx->pc = 0x43A9A4u;
    SET_GPR_U32(ctx, 31, 0x43A9ACu);
    ctx->pc = 0x43A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A9A4u;
            // 0x43a9a8: 0x24c6d008  addiu       $a2, $a2, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43AC90u;
    if (runtime->hasFunction(0x43AC90u)) {
        auto targetFn = runtime->lookupFunction(0x43AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9ACu; }
        if (ctx->pc != 0x43A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043AC90_0x43ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9ACu; }
        if (ctx->pc != 0x43A9ACu) { return; }
    }
    ctx->pc = 0x43A9ACu;
label_43a9ac:
    // 0x43a9ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43a9b0:
    // 0x43a9b0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x43a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_43a9b4:
    // 0x43a9b4: 0x2442ce20  addiu       $v0, $v0, -0x31E0
    ctx->pc = 0x43a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954528));
label_43a9b8:
    // 0x43a9b8: 0xc0ada8c  jal         func_2B6A30
label_43a9bc:
    if (ctx->pc == 0x43A9BCu) {
        ctx->pc = 0x43A9BCu;
            // 0x43a9bc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x43A9C0u;
        goto label_43a9c0;
    }
    ctx->pc = 0x43A9B8u;
    SET_GPR_U32(ctx, 31, 0x43A9C0u);
    ctx->pc = 0x43A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A9B8u;
            // 0x43a9bc: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9C0u; }
        if (ctx->pc != 0x43A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9C0u; }
        if (ctx->pc != 0x43A9C0u) { return; }
    }
    ctx->pc = 0x43A9C0u;
label_43a9c0:
    // 0x43a9c0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x43a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_43a9c4:
    // 0x43a9c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x43a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_43a9c8:
    // 0x43a9c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_43a9cc:
    if (ctx->pc == 0x43A9CCu) {
        ctx->pc = 0x43A9CCu;
            // 0x43a9cc: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x43A9D0u;
        goto label_43a9d0;
    }
    ctx->pc = 0x43A9C8u;
    {
        const bool branch_taken_0x43a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A9C8u;
            // 0x43a9cc: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a9c8) {
            ctx->pc = 0x43AA08u;
            goto label_43aa08;
        }
    }
    ctx->pc = 0x43A9D0u;
label_43a9d0:
    // 0x43a9d0: 0xc040180  jal         func_100600
label_43a9d4:
    if (ctx->pc == 0x43A9D4u) {
        ctx->pc = 0x43A9D8u;
        goto label_43a9d8;
    }
    ctx->pc = 0x43A9D0u;
    SET_GPR_U32(ctx, 31, 0x43A9D8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9D8u; }
        if (ctx->pc != 0x43A9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9D8u; }
        if (ctx->pc != 0x43A9D8u) { return; }
    }
    ctx->pc = 0x43A9D8u;
label_43a9d8:
    // 0x43a9d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_43a9dc:
    if (ctx->pc == 0x43A9DCu) {
        ctx->pc = 0x43A9DCu;
            // 0x43a9dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A9E0u;
        goto label_43a9e0;
    }
    ctx->pc = 0x43A9D8u;
    {
        const bool branch_taken_0x43a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A9D8u;
            // 0x43a9dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a9d8) {
            ctx->pc = 0x43AA08u;
            goto label_43aa08;
        }
    }
    ctx->pc = 0x43A9E0u;
label_43a9e0:
    // 0x43a9e0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x43a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43a9e4:
    // 0x43a9e4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43a9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_43a9e8:
    // 0x43a9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a9ec:
    // 0x43a9ec: 0xc10eb24  jal         func_43AC90
label_43a9f0:
    if (ctx->pc == 0x43A9F0u) {
        ctx->pc = 0x43A9F0u;
            // 0x43a9f0: 0x24c6cf90  addiu       $a2, $a2, -0x3070 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954896));
        ctx->pc = 0x43A9F4u;
        goto label_43a9f4;
    }
    ctx->pc = 0x43A9ECu;
    SET_GPR_U32(ctx, 31, 0x43A9F4u);
    ctx->pc = 0x43A9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A9ECu;
            // 0x43a9f0: 0x24c6cf90  addiu       $a2, $a2, -0x3070 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43AC90u;
    if (runtime->hasFunction(0x43AC90u)) {
        auto targetFn = runtime->lookupFunction(0x43AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9F4u; }
        if (ctx->pc != 0x43A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043AC90_0x43ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A9F4u; }
        if (ctx->pc != 0x43A9F4u) { return; }
    }
    ctx->pc = 0x43A9F4u;
label_43a9f4:
    // 0x43a9f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43a9f8:
    // 0x43a9f8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x43a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_43a9fc:
    // 0x43a9fc: 0x2442ce20  addiu       $v0, $v0, -0x31E0
    ctx->pc = 0x43a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954528));
label_43aa00:
    // 0x43aa00: 0xc0ada8c  jal         func_2B6A30
label_43aa04:
    if (ctx->pc == 0x43AA04u) {
        ctx->pc = 0x43AA04u;
            // 0x43aa04: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x43AA08u;
        goto label_43aa08;
    }
    ctx->pc = 0x43AA00u;
    SET_GPR_U32(ctx, 31, 0x43AA08u);
    ctx->pc = 0x43AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AA00u;
            // 0x43aa04: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AA08u; }
        if (ctx->pc != 0x43AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AA08u; }
        if (ctx->pc != 0x43AA08u) { return; }
    }
    ctx->pc = 0x43AA08u;
label_43aa08:
    // 0x43aa08: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x43aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_43aa0c:
    // 0x43aa0c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x43aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_43aa10:
    // 0x43aa10: 0x8e4800b0  lw          $t0, 0xB0($s2)
    ctx->pc = 0x43aa10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_43aa14:
    // 0x43aa14: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x43aa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_43aa18:
    // 0x43aa18: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x43aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43aa1c:
    // 0x43aa1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43aa20:
    // 0x43aa20: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x43aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_43aa24:
    // 0x43aa24: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x43aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_43aa28:
    // 0x43aa28: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x43aa28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_43aa2c:
    // 0x43aa2c: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x43aa2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
label_43aa30:
    // 0x43aa30: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x43aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_43aa34:
    // 0x43aa34: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x43aa34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_43aa38:
    // 0x43aa38: 0xae4800b0  sw          $t0, 0xB0($s2)
    ctx->pc = 0x43aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 8));
label_43aa3c:
    // 0x43aa3c: 0xae4700b0  sw          $a3, 0xB0($s2)
    ctx->pc = 0x43aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 7));
label_43aa40:
    // 0x43aa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43aa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43aa44:
    // 0x43aa44: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x43aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_43aa48:
    // 0x43aa48: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x43aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_43aa4c:
    // 0x43aa4c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x43aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_43aa50:
    // 0x43aa50: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x43aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_43aa54:
    // 0x43aa54: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x43aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_43aa58:
    // 0x43aa58: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x43aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_43aa5c:
    // 0x43aa5c: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x43aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_43aa60:
    // 0x43aa60: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x43aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
label_43aa64:
    // 0x43aa64: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x43aa64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_43aa68:
    // 0x43aa68: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x43aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_43aa6c:
    // 0x43aa6c: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x43aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_43aa70:
    // 0x43aa70: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x43aa70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_43aa74:
    // 0x43aa74: 0xa240006b  sb          $zero, 0x6B($s2)
    ctx->pc = 0x43aa74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
label_43aa78:
    // 0x43aa78: 0xa2400066  sb          $zero, 0x66($s2)
    ctx->pc = 0x43aa78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 0));
label_43aa7c:
    // 0x43aa7c: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x43aa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_43aa80:
    // 0x43aa80: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x43aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43aa84:
    // 0x43aa84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x43aa84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43aa88:
    // 0x43aa88: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_43aa8c:
    if (ctx->pc == 0x43AA8Cu) {
        ctx->pc = 0x43AA8Cu;
            // 0x43aa8c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x43AA90u;
        goto label_43aa90;
    }
    ctx->pc = 0x43AA88u;
    {
        const bool branch_taken_0x43aa88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43aa88) {
            ctx->pc = 0x43AA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AA88u;
            // 0x43aa8c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AAA0u;
            goto label_43aaa0;
        }
    }
    ctx->pc = 0x43AA90u;
label_43aa90:
    // 0x43aa90: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43aa90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43aa94:
    // 0x43aa94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43aa94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43aa98:
    // 0x43aa98: 0x10000007  b           . + 4 + (0x7 << 2)
label_43aa9c:
    if (ctx->pc == 0x43AA9Cu) {
        ctx->pc = 0x43AA9Cu;
            // 0x43aa9c: 0xae4300ec  sw          $v1, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
        ctx->pc = 0x43AAA0u;
        goto label_43aaa0;
    }
    ctx->pc = 0x43AA98u;
    {
        const bool branch_taken_0x43aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AA98u;
            // 0x43aa9c: 0xae4300ec  sw          $v1, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aa98) {
            ctx->pc = 0x43AAB8u;
            goto label_43aab8;
        }
    }
    ctx->pc = 0x43AAA0u;
label_43aaa0:
    // 0x43aaa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x43aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_43aaa4:
    // 0x43aaa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43aaa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43aaa8:
    // 0x43aaa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x43aaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_43aaac:
    // 0x43aaac: 0x0  nop
    ctx->pc = 0x43aaacu;
    // NOP
label_43aab0:
    // 0x43aab0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43aab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_43aab4:
    // 0x43aab4: 0xae4300ec  sw          $v1, 0xEC($s2)
    ctx->pc = 0x43aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
label_43aab8:
    // 0x43aab8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x43aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_43aabc:
    // 0x43aabc: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x43aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43aac0:
    // 0x43aac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43aac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43aac4:
    // 0x43aac4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x43aac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_43aac8:
    // 0x43aac8: 0xc040180  jal         func_100600
label_43aacc:
    if (ctx->pc == 0x43AACCu) {
        ctx->pc = 0x43AACCu;
            // 0x43aacc: 0xae4200e8  sw          $v0, 0xE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x43AAD0u;
        goto label_43aad0;
    }
    ctx->pc = 0x43AAC8u;
    SET_GPR_U32(ctx, 31, 0x43AAD0u);
    ctx->pc = 0x43AACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AAC8u;
            // 0x43aacc: 0xae4200e8  sw          $v0, 0xE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AAD0u; }
        if (ctx->pc != 0x43AAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AAD0u; }
        if (ctx->pc != 0x43AAD0u) { return; }
    }
    ctx->pc = 0x43AAD0u;
label_43aad0:
    // 0x43aad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43aad4:
    // 0x43aad4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_43aad8:
    if (ctx->pc == 0x43AAD8u) {
        ctx->pc = 0x43AAD8u;
            // 0x43aad8: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x43AADCu;
        goto label_43aadc;
    }
    ctx->pc = 0x43AAD4u;
    {
        const bool branch_taken_0x43aad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43aad4) {
            ctx->pc = 0x43AAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AAD4u;
            // 0x43aad8: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AB14u;
            goto label_43ab14;
        }
    }
    ctx->pc = 0x43AADCu;
label_43aadc:
    // 0x43aadc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43aae0:
    // 0x43aae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43aae4:
    // 0x43aae4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x43aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_43aae8:
    // 0x43aae8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x43aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_43aaec:
    // 0x43aaec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43aaf0:
    // 0x43aaf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x43aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_43aaf4:
    // 0x43aaf4: 0xc040138  jal         func_1004E0
label_43aaf8:
    if (ctx->pc == 0x43AAF8u) {
        ctx->pc = 0x43AAF8u;
            // 0x43aaf8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x43AAFCu;
        goto label_43aafc;
    }
    ctx->pc = 0x43AAF4u;
    SET_GPR_U32(ctx, 31, 0x43AAFCu);
    ctx->pc = 0x43AAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AAF4u;
            // 0x43aaf8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AAFCu; }
        if (ctx->pc != 0x43AAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AAFCu; }
        if (ctx->pc != 0x43AAFCu) { return; }
    }
    ctx->pc = 0x43AAFCu;
label_43aafc:
    // 0x43aafc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x43aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_43ab00:
    // 0x43ab00: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x43ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_43ab04:
    // 0x43ab04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ab08:
    // 0x43ab08: 0xc04a576  jal         func_1295D8
label_43ab0c:
    if (ctx->pc == 0x43AB0Cu) {
        ctx->pc = 0x43AB0Cu;
            // 0x43ab0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x43AB10u;
        goto label_43ab10;
    }
    ctx->pc = 0x43AB08u;
    SET_GPR_U32(ctx, 31, 0x43AB10u);
    ctx->pc = 0x43AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AB08u;
            // 0x43ab0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AB10u; }
        if (ctx->pc != 0x43AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AB10u; }
        if (ctx->pc != 0x43AB10u) { return; }
    }
    ctx->pc = 0x43AB10u;
label_43ab10:
    // 0x43ab10: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x43ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_43ab14:
    // 0x43ab14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43ab18:
    // 0x43ab18: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x43ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_43ab1c:
    // 0x43ab1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43ab20:
    // 0x43ab20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43ab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ab24:
    // 0x43ab24: 0x240618ae  addiu       $a2, $zero, 0x18AE
    ctx->pc = 0x43ab24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6318));
label_43ab28:
    // 0x43ab28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x43ab28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43ab2c:
    // 0x43ab2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43ab2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ab30:
    // 0x43ab30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43ab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43ab34:
    // 0x43ab34: 0xc122cd8  jal         func_48B360
label_43ab38:
    if (ctx->pc == 0x43AB38u) {
        ctx->pc = 0x43AB38u;
            // 0x43ab38: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x43AB3Cu;
        goto label_43ab3c;
    }
    ctx->pc = 0x43AB34u;
    SET_GPR_U32(ctx, 31, 0x43AB3Cu);
    ctx->pc = 0x43AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AB34u;
            // 0x43ab38: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AB3Cu; }
        if (ctx->pc != 0x43AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AB3Cu; }
        if (ctx->pc != 0x43AB3Cu) { return; }
    }
    ctx->pc = 0x43AB3Cu;
label_43ab3c:
    // 0x43ab3c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x43ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_43ab40:
    // 0x43ab40: 0x5060004c  beql        $v1, $zero, . + 4 + (0x4C << 2)
label_43ab44:
    if (ctx->pc == 0x43AB44u) {
        ctx->pc = 0x43AB44u;
            // 0x43ab44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x43AB48u;
        goto label_43ab48;
    }
    ctx->pc = 0x43AB40u;
    {
        const bool branch_taken_0x43ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ab40) {
            ctx->pc = 0x43AB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43AB40u;
            // 0x43ab44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AC74u;
            goto label_43ac74;
        }
    }
    ctx->pc = 0x43AB48u;
label_43ab48:
    // 0x43ab48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ab4c:
    // 0x43ab4c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_43ab50:
    // 0x43ab50: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x43ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_43ab54:
    // 0x43ab54: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x43ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
label_43ab58:
    // 0x43ab58: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x43ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_43ab5c:
    // 0x43ab5c: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x43ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_43ab60:
    // 0x43ab60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ab64:
    // 0x43ab64: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x43ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
label_43ab68:
    // 0x43ab68: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x43ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_43ab6c:
    // 0x43ab6c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_43ab70:
    if (ctx->pc == 0x43AB70u) {
        ctx->pc = 0x43AB74u;
        goto label_43ab74;
    }
    ctx->pc = 0x43AB6Cu;
    {
        const bool branch_taken_0x43ab6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x43ab6c) {
            ctx->pc = 0x43ABBCu;
            goto label_43abbc;
        }
    }
    ctx->pc = 0x43AB74u;
label_43ab74:
    // 0x43ab74: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x43ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43ab78:
    // 0x43ab78: 0x3c02fddf  lui         $v0, 0xFDDF
    ctx->pc = 0x43ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64991 << 16));
label_43ab7c:
    // 0x43ab7c: 0x3444fddf  ori         $a0, $v0, 0xFDDF
    ctx->pc = 0x43ab7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64991);
label_43ab80:
    // 0x43ab80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43ab80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ab84:
    // 0x43ab84: 0x3c020220  lui         $v0, 0x220
    ctx->pc = 0x43ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)544 << 16));
label_43ab88:
    // 0x43ab88: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x43ab88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43ab8c:
    // 0x43ab8c: 0x34430220  ori         $v1, $v0, 0x220
    ctx->pc = 0x43ab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)544);
label_43ab90:
    // 0x43ab90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ab94:
    // 0x43ab94: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x43ab94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_43ab98:
    // 0x43ab98: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x43ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_43ab9c:
    // 0x43ab9c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43aba0:
    // 0x43aba0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43aba4:
    // 0x43aba4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43aba8:
    // 0x43aba8: 0xc08bff0  jal         func_22FFC0
label_43abac:
    if (ctx->pc == 0x43ABACu) {
        ctx->pc = 0x43ABACu;
            // 0x43abac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43ABB0u;
        goto label_43abb0;
    }
    ctx->pc = 0x43ABA8u;
    SET_GPR_U32(ctx, 31, 0x43ABB0u);
    ctx->pc = 0x43ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43ABA8u;
            // 0x43abac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ABB0u; }
        if (ctx->pc != 0x43ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43ABB0u; }
        if (ctx->pc != 0x43ABB0u) { return; }
    }
    ctx->pc = 0x43ABB0u;
label_43abb0:
    // 0x43abb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x43abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43abb4:
    // 0x43abb4: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x43abb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_43abb8:
    // 0x43abb8: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x43abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_43abbc:
    // 0x43abbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x43abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43abc0:
    // 0x43abc0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x43abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_43abc4:
    // 0x43abc4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x43abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_43abc8:
    // 0x43abc8: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x43abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_43abcc:
    // 0x43abcc: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
label_43abd0:
    if (ctx->pc == 0x43ABD0u) {
        ctx->pc = 0x43ABD4u;
        goto label_43abd4;
    }
    ctx->pc = 0x43ABCCu;
    {
        const bool branch_taken_0x43abcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x43abcc) {
            ctx->pc = 0x43AC70u;
            goto label_43ac70;
        }
    }
    ctx->pc = 0x43ABD4u;
label_43abd4:
    // 0x43abd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43abd8:
    // 0x43abd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43abd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43abdc:
    // 0x43abdc: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x43abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_43abe0:
    // 0x43abe0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x43abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43abe4:
    // 0x43abe4: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x43abe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43abe8:
    // 0x43abe8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x43abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43abec:
    // 0x43abec: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x43abecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_43abf0:
    // 0x43abf0: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x43abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_43abf4:
    // 0x43abf4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x43abf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_43abf8:
    // 0x43abf8: 0x54440013  bnel        $v0, $a0, . + 4 + (0x13 << 2)
label_43abfc:
    if (ctx->pc == 0x43ABFCu) {
        ctx->pc = 0x43ABFCu;
            // 0x43abfc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x43AC00u;
        goto label_43ac00;
    }
    ctx->pc = 0x43ABF8u;
    {
        const bool branch_taken_0x43abf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x43abf8) {
            ctx->pc = 0x43ABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43ABF8u;
            // 0x43abfc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43AC48u;
            goto label_43ac48;
        }
    }
    ctx->pc = 0x43AC00u;
label_43ac00:
    // 0x43ac00: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x43ac00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_43ac04:
    // 0x43ac04: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x43ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_43ac08:
    // 0x43ac08: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_43ac0c:
    if (ctx->pc == 0x43AC0Cu) {
        ctx->pc = 0x43AC10u;
        goto label_43ac10;
    }
    ctx->pc = 0x43AC08u;
    {
        const bool branch_taken_0x43ac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43ac08) {
            ctx->pc = 0x43AC44u;
            goto label_43ac44;
        }
    }
    ctx->pc = 0x43AC10u;
label_43ac10:
    // 0x43ac10: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x43ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43ac14:
    // 0x43ac14: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x43ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_43ac18:
    // 0x43ac18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43ac1c:
    // 0x43ac1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43ac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ac20:
    // 0x43ac20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x43ac20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_43ac24:
    // 0x43ac24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x43ac24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_43ac28:
    // 0x43ac28: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x43ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_43ac2c:
    // 0x43ac2c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x43ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43ac30:
    // 0x43ac30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43ac34:
    // 0x43ac34: 0xc08bff0  jal         func_22FFC0
label_43ac38:
    if (ctx->pc == 0x43AC38u) {
        ctx->pc = 0x43AC38u;
            // 0x43ac38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43AC3Cu;
        goto label_43ac3c;
    }
    ctx->pc = 0x43AC34u;
    SET_GPR_U32(ctx, 31, 0x43AC3Cu);
    ctx->pc = 0x43AC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AC34u;
            // 0x43ac38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AC3Cu; }
        if (ctx->pc != 0x43AC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AC3Cu; }
        if (ctx->pc != 0x43AC3Cu) { return; }
    }
    ctx->pc = 0x43AC3Cu;
label_43ac3c:
    // 0x43ac3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_43ac40:
    if (ctx->pc == 0x43AC40u) {
        ctx->pc = 0x43AC44u;
        goto label_43ac44;
    }
    ctx->pc = 0x43AC3Cu;
    {
        const bool branch_taken_0x43ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ac3c) {
            ctx->pc = 0x43AC58u;
            goto label_43ac58;
        }
    }
    ctx->pc = 0x43AC44u;
label_43ac44:
    // 0x43ac44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x43ac44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_43ac48:
    // 0x43ac48: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x43ac48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_43ac4c:
    // 0x43ac4c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_43ac50:
    if (ctx->pc == 0x43AC50u) {
        ctx->pc = 0x43AC50u;
            // 0x43ac50: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x43AC54u;
        goto label_43ac54;
    }
    ctx->pc = 0x43AC4Cu;
    {
        const bool branch_taken_0x43ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AC4Cu;
            // 0x43ac50: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ac4c) {
            ctx->pc = 0x43ABECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43abec;
        }
    }
    ctx->pc = 0x43AC54u;
label_43ac54:
    // 0x43ac54: 0x0  nop
    ctx->pc = 0x43ac54u;
    // NOP
label_43ac58:
    // 0x43ac58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43ac5c:
    // 0x43ac5c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43ac60:
    // 0x43ac60: 0x8e4600ec  lw          $a2, 0xEC($s2)
    ctx->pc = 0x43ac60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_43ac64:
    // 0x43ac64: 0xc0c2f44  jal         func_30BD10
label_43ac68:
    if (ctx->pc == 0x43AC68u) {
        ctx->pc = 0x43AC68u;
            // 0x43ac68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43AC6Cu;
        goto label_43ac6c;
    }
    ctx->pc = 0x43AC64u;
    SET_GPR_U32(ctx, 31, 0x43AC6Cu);
    ctx->pc = 0x43AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43AC64u;
            // 0x43ac68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BD10u;
    if (runtime->hasFunction(0x30BD10u)) {
        auto targetFn = runtime->lookupFunction(0x30BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AC6Cu; }
        if (ctx->pc != 0x43AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BD10_0x30bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43AC6Cu; }
        if (ctx->pc != 0x43AC6Cu) { return; }
    }
    ctx->pc = 0x43AC6Cu;
label_43ac6c:
    // 0x43ac6c: 0xa24000f0  sb          $zero, 0xF0($s2)
    ctx->pc = 0x43ac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 240), (uint8_t)GPR_U32(ctx, 0));
label_43ac70:
    // 0x43ac70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43ac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43ac74:
    // 0x43ac74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43ac74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ac78:
    // 0x43ac78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43ac78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ac7c:
    // 0x43ac7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43ac7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43ac80:
    // 0x43ac80: 0x3e00008  jr          $ra
label_43ac84:
    if (ctx->pc == 0x43AC84u) {
        ctx->pc = 0x43AC84u;
            // 0x43ac84: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x43AC88u;
        goto label_43ac88;
    }
    ctx->pc = 0x43AC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43AC80u;
            // 0x43ac84: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43AC88u;
label_43ac88:
    // 0x43ac88: 0x0  nop
    ctx->pc = 0x43ac88u;
    // NOP
label_43ac8c:
    // 0x43ac8c: 0x0  nop
    ctx->pc = 0x43ac8cu;
    // NOP
}
