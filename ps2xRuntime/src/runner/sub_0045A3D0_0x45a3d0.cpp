#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045A3D0
// Address: 0x45a3d0 - 0x45abe0
void sub_0045A3D0_0x45a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A3D0_0x45a3d0");
#endif

    switch (ctx->pc) {
        case 0x45a3d0u: goto label_45a3d0;
        case 0x45a3d4u: goto label_45a3d4;
        case 0x45a3d8u: goto label_45a3d8;
        case 0x45a3dcu: goto label_45a3dc;
        case 0x45a3e0u: goto label_45a3e0;
        case 0x45a3e4u: goto label_45a3e4;
        case 0x45a3e8u: goto label_45a3e8;
        case 0x45a3ecu: goto label_45a3ec;
        case 0x45a3f0u: goto label_45a3f0;
        case 0x45a3f4u: goto label_45a3f4;
        case 0x45a3f8u: goto label_45a3f8;
        case 0x45a3fcu: goto label_45a3fc;
        case 0x45a400u: goto label_45a400;
        case 0x45a404u: goto label_45a404;
        case 0x45a408u: goto label_45a408;
        case 0x45a40cu: goto label_45a40c;
        case 0x45a410u: goto label_45a410;
        case 0x45a414u: goto label_45a414;
        case 0x45a418u: goto label_45a418;
        case 0x45a41cu: goto label_45a41c;
        case 0x45a420u: goto label_45a420;
        case 0x45a424u: goto label_45a424;
        case 0x45a428u: goto label_45a428;
        case 0x45a42cu: goto label_45a42c;
        case 0x45a430u: goto label_45a430;
        case 0x45a434u: goto label_45a434;
        case 0x45a438u: goto label_45a438;
        case 0x45a43cu: goto label_45a43c;
        case 0x45a440u: goto label_45a440;
        case 0x45a444u: goto label_45a444;
        case 0x45a448u: goto label_45a448;
        case 0x45a44cu: goto label_45a44c;
        case 0x45a450u: goto label_45a450;
        case 0x45a454u: goto label_45a454;
        case 0x45a458u: goto label_45a458;
        case 0x45a45cu: goto label_45a45c;
        case 0x45a460u: goto label_45a460;
        case 0x45a464u: goto label_45a464;
        case 0x45a468u: goto label_45a468;
        case 0x45a46cu: goto label_45a46c;
        case 0x45a470u: goto label_45a470;
        case 0x45a474u: goto label_45a474;
        case 0x45a478u: goto label_45a478;
        case 0x45a47cu: goto label_45a47c;
        case 0x45a480u: goto label_45a480;
        case 0x45a484u: goto label_45a484;
        case 0x45a488u: goto label_45a488;
        case 0x45a48cu: goto label_45a48c;
        case 0x45a490u: goto label_45a490;
        case 0x45a494u: goto label_45a494;
        case 0x45a498u: goto label_45a498;
        case 0x45a49cu: goto label_45a49c;
        case 0x45a4a0u: goto label_45a4a0;
        case 0x45a4a4u: goto label_45a4a4;
        case 0x45a4a8u: goto label_45a4a8;
        case 0x45a4acu: goto label_45a4ac;
        case 0x45a4b0u: goto label_45a4b0;
        case 0x45a4b4u: goto label_45a4b4;
        case 0x45a4b8u: goto label_45a4b8;
        case 0x45a4bcu: goto label_45a4bc;
        case 0x45a4c0u: goto label_45a4c0;
        case 0x45a4c4u: goto label_45a4c4;
        case 0x45a4c8u: goto label_45a4c8;
        case 0x45a4ccu: goto label_45a4cc;
        case 0x45a4d0u: goto label_45a4d0;
        case 0x45a4d4u: goto label_45a4d4;
        case 0x45a4d8u: goto label_45a4d8;
        case 0x45a4dcu: goto label_45a4dc;
        case 0x45a4e0u: goto label_45a4e0;
        case 0x45a4e4u: goto label_45a4e4;
        case 0x45a4e8u: goto label_45a4e8;
        case 0x45a4ecu: goto label_45a4ec;
        case 0x45a4f0u: goto label_45a4f0;
        case 0x45a4f4u: goto label_45a4f4;
        case 0x45a4f8u: goto label_45a4f8;
        case 0x45a4fcu: goto label_45a4fc;
        case 0x45a500u: goto label_45a500;
        case 0x45a504u: goto label_45a504;
        case 0x45a508u: goto label_45a508;
        case 0x45a50cu: goto label_45a50c;
        case 0x45a510u: goto label_45a510;
        case 0x45a514u: goto label_45a514;
        case 0x45a518u: goto label_45a518;
        case 0x45a51cu: goto label_45a51c;
        case 0x45a520u: goto label_45a520;
        case 0x45a524u: goto label_45a524;
        case 0x45a528u: goto label_45a528;
        case 0x45a52cu: goto label_45a52c;
        case 0x45a530u: goto label_45a530;
        case 0x45a534u: goto label_45a534;
        case 0x45a538u: goto label_45a538;
        case 0x45a53cu: goto label_45a53c;
        case 0x45a540u: goto label_45a540;
        case 0x45a544u: goto label_45a544;
        case 0x45a548u: goto label_45a548;
        case 0x45a54cu: goto label_45a54c;
        case 0x45a550u: goto label_45a550;
        case 0x45a554u: goto label_45a554;
        case 0x45a558u: goto label_45a558;
        case 0x45a55cu: goto label_45a55c;
        case 0x45a560u: goto label_45a560;
        case 0x45a564u: goto label_45a564;
        case 0x45a568u: goto label_45a568;
        case 0x45a56cu: goto label_45a56c;
        case 0x45a570u: goto label_45a570;
        case 0x45a574u: goto label_45a574;
        case 0x45a578u: goto label_45a578;
        case 0x45a57cu: goto label_45a57c;
        case 0x45a580u: goto label_45a580;
        case 0x45a584u: goto label_45a584;
        case 0x45a588u: goto label_45a588;
        case 0x45a58cu: goto label_45a58c;
        case 0x45a590u: goto label_45a590;
        case 0x45a594u: goto label_45a594;
        case 0x45a598u: goto label_45a598;
        case 0x45a59cu: goto label_45a59c;
        case 0x45a5a0u: goto label_45a5a0;
        case 0x45a5a4u: goto label_45a5a4;
        case 0x45a5a8u: goto label_45a5a8;
        case 0x45a5acu: goto label_45a5ac;
        case 0x45a5b0u: goto label_45a5b0;
        case 0x45a5b4u: goto label_45a5b4;
        case 0x45a5b8u: goto label_45a5b8;
        case 0x45a5bcu: goto label_45a5bc;
        case 0x45a5c0u: goto label_45a5c0;
        case 0x45a5c4u: goto label_45a5c4;
        case 0x45a5c8u: goto label_45a5c8;
        case 0x45a5ccu: goto label_45a5cc;
        case 0x45a5d0u: goto label_45a5d0;
        case 0x45a5d4u: goto label_45a5d4;
        case 0x45a5d8u: goto label_45a5d8;
        case 0x45a5dcu: goto label_45a5dc;
        case 0x45a5e0u: goto label_45a5e0;
        case 0x45a5e4u: goto label_45a5e4;
        case 0x45a5e8u: goto label_45a5e8;
        case 0x45a5ecu: goto label_45a5ec;
        case 0x45a5f0u: goto label_45a5f0;
        case 0x45a5f4u: goto label_45a5f4;
        case 0x45a5f8u: goto label_45a5f8;
        case 0x45a5fcu: goto label_45a5fc;
        case 0x45a600u: goto label_45a600;
        case 0x45a604u: goto label_45a604;
        case 0x45a608u: goto label_45a608;
        case 0x45a60cu: goto label_45a60c;
        case 0x45a610u: goto label_45a610;
        case 0x45a614u: goto label_45a614;
        case 0x45a618u: goto label_45a618;
        case 0x45a61cu: goto label_45a61c;
        case 0x45a620u: goto label_45a620;
        case 0x45a624u: goto label_45a624;
        case 0x45a628u: goto label_45a628;
        case 0x45a62cu: goto label_45a62c;
        case 0x45a630u: goto label_45a630;
        case 0x45a634u: goto label_45a634;
        case 0x45a638u: goto label_45a638;
        case 0x45a63cu: goto label_45a63c;
        case 0x45a640u: goto label_45a640;
        case 0x45a644u: goto label_45a644;
        case 0x45a648u: goto label_45a648;
        case 0x45a64cu: goto label_45a64c;
        case 0x45a650u: goto label_45a650;
        case 0x45a654u: goto label_45a654;
        case 0x45a658u: goto label_45a658;
        case 0x45a65cu: goto label_45a65c;
        case 0x45a660u: goto label_45a660;
        case 0x45a664u: goto label_45a664;
        case 0x45a668u: goto label_45a668;
        case 0x45a66cu: goto label_45a66c;
        case 0x45a670u: goto label_45a670;
        case 0x45a674u: goto label_45a674;
        case 0x45a678u: goto label_45a678;
        case 0x45a67cu: goto label_45a67c;
        case 0x45a680u: goto label_45a680;
        case 0x45a684u: goto label_45a684;
        case 0x45a688u: goto label_45a688;
        case 0x45a68cu: goto label_45a68c;
        case 0x45a690u: goto label_45a690;
        case 0x45a694u: goto label_45a694;
        case 0x45a698u: goto label_45a698;
        case 0x45a69cu: goto label_45a69c;
        case 0x45a6a0u: goto label_45a6a0;
        case 0x45a6a4u: goto label_45a6a4;
        case 0x45a6a8u: goto label_45a6a8;
        case 0x45a6acu: goto label_45a6ac;
        case 0x45a6b0u: goto label_45a6b0;
        case 0x45a6b4u: goto label_45a6b4;
        case 0x45a6b8u: goto label_45a6b8;
        case 0x45a6bcu: goto label_45a6bc;
        case 0x45a6c0u: goto label_45a6c0;
        case 0x45a6c4u: goto label_45a6c4;
        case 0x45a6c8u: goto label_45a6c8;
        case 0x45a6ccu: goto label_45a6cc;
        case 0x45a6d0u: goto label_45a6d0;
        case 0x45a6d4u: goto label_45a6d4;
        case 0x45a6d8u: goto label_45a6d8;
        case 0x45a6dcu: goto label_45a6dc;
        case 0x45a6e0u: goto label_45a6e0;
        case 0x45a6e4u: goto label_45a6e4;
        case 0x45a6e8u: goto label_45a6e8;
        case 0x45a6ecu: goto label_45a6ec;
        case 0x45a6f0u: goto label_45a6f0;
        case 0x45a6f4u: goto label_45a6f4;
        case 0x45a6f8u: goto label_45a6f8;
        case 0x45a6fcu: goto label_45a6fc;
        case 0x45a700u: goto label_45a700;
        case 0x45a704u: goto label_45a704;
        case 0x45a708u: goto label_45a708;
        case 0x45a70cu: goto label_45a70c;
        case 0x45a710u: goto label_45a710;
        case 0x45a714u: goto label_45a714;
        case 0x45a718u: goto label_45a718;
        case 0x45a71cu: goto label_45a71c;
        case 0x45a720u: goto label_45a720;
        case 0x45a724u: goto label_45a724;
        case 0x45a728u: goto label_45a728;
        case 0x45a72cu: goto label_45a72c;
        case 0x45a730u: goto label_45a730;
        case 0x45a734u: goto label_45a734;
        case 0x45a738u: goto label_45a738;
        case 0x45a73cu: goto label_45a73c;
        case 0x45a740u: goto label_45a740;
        case 0x45a744u: goto label_45a744;
        case 0x45a748u: goto label_45a748;
        case 0x45a74cu: goto label_45a74c;
        case 0x45a750u: goto label_45a750;
        case 0x45a754u: goto label_45a754;
        case 0x45a758u: goto label_45a758;
        case 0x45a75cu: goto label_45a75c;
        case 0x45a760u: goto label_45a760;
        case 0x45a764u: goto label_45a764;
        case 0x45a768u: goto label_45a768;
        case 0x45a76cu: goto label_45a76c;
        case 0x45a770u: goto label_45a770;
        case 0x45a774u: goto label_45a774;
        case 0x45a778u: goto label_45a778;
        case 0x45a77cu: goto label_45a77c;
        case 0x45a780u: goto label_45a780;
        case 0x45a784u: goto label_45a784;
        case 0x45a788u: goto label_45a788;
        case 0x45a78cu: goto label_45a78c;
        case 0x45a790u: goto label_45a790;
        case 0x45a794u: goto label_45a794;
        case 0x45a798u: goto label_45a798;
        case 0x45a79cu: goto label_45a79c;
        case 0x45a7a0u: goto label_45a7a0;
        case 0x45a7a4u: goto label_45a7a4;
        case 0x45a7a8u: goto label_45a7a8;
        case 0x45a7acu: goto label_45a7ac;
        case 0x45a7b0u: goto label_45a7b0;
        case 0x45a7b4u: goto label_45a7b4;
        case 0x45a7b8u: goto label_45a7b8;
        case 0x45a7bcu: goto label_45a7bc;
        case 0x45a7c0u: goto label_45a7c0;
        case 0x45a7c4u: goto label_45a7c4;
        case 0x45a7c8u: goto label_45a7c8;
        case 0x45a7ccu: goto label_45a7cc;
        case 0x45a7d0u: goto label_45a7d0;
        case 0x45a7d4u: goto label_45a7d4;
        case 0x45a7d8u: goto label_45a7d8;
        case 0x45a7dcu: goto label_45a7dc;
        case 0x45a7e0u: goto label_45a7e0;
        case 0x45a7e4u: goto label_45a7e4;
        case 0x45a7e8u: goto label_45a7e8;
        case 0x45a7ecu: goto label_45a7ec;
        case 0x45a7f0u: goto label_45a7f0;
        case 0x45a7f4u: goto label_45a7f4;
        case 0x45a7f8u: goto label_45a7f8;
        case 0x45a7fcu: goto label_45a7fc;
        case 0x45a800u: goto label_45a800;
        case 0x45a804u: goto label_45a804;
        case 0x45a808u: goto label_45a808;
        case 0x45a80cu: goto label_45a80c;
        case 0x45a810u: goto label_45a810;
        case 0x45a814u: goto label_45a814;
        case 0x45a818u: goto label_45a818;
        case 0x45a81cu: goto label_45a81c;
        case 0x45a820u: goto label_45a820;
        case 0x45a824u: goto label_45a824;
        case 0x45a828u: goto label_45a828;
        case 0x45a82cu: goto label_45a82c;
        case 0x45a830u: goto label_45a830;
        case 0x45a834u: goto label_45a834;
        case 0x45a838u: goto label_45a838;
        case 0x45a83cu: goto label_45a83c;
        case 0x45a840u: goto label_45a840;
        case 0x45a844u: goto label_45a844;
        case 0x45a848u: goto label_45a848;
        case 0x45a84cu: goto label_45a84c;
        case 0x45a850u: goto label_45a850;
        case 0x45a854u: goto label_45a854;
        case 0x45a858u: goto label_45a858;
        case 0x45a85cu: goto label_45a85c;
        case 0x45a860u: goto label_45a860;
        case 0x45a864u: goto label_45a864;
        case 0x45a868u: goto label_45a868;
        case 0x45a86cu: goto label_45a86c;
        case 0x45a870u: goto label_45a870;
        case 0x45a874u: goto label_45a874;
        case 0x45a878u: goto label_45a878;
        case 0x45a87cu: goto label_45a87c;
        case 0x45a880u: goto label_45a880;
        case 0x45a884u: goto label_45a884;
        case 0x45a888u: goto label_45a888;
        case 0x45a88cu: goto label_45a88c;
        case 0x45a890u: goto label_45a890;
        case 0x45a894u: goto label_45a894;
        case 0x45a898u: goto label_45a898;
        case 0x45a89cu: goto label_45a89c;
        case 0x45a8a0u: goto label_45a8a0;
        case 0x45a8a4u: goto label_45a8a4;
        case 0x45a8a8u: goto label_45a8a8;
        case 0x45a8acu: goto label_45a8ac;
        case 0x45a8b0u: goto label_45a8b0;
        case 0x45a8b4u: goto label_45a8b4;
        case 0x45a8b8u: goto label_45a8b8;
        case 0x45a8bcu: goto label_45a8bc;
        case 0x45a8c0u: goto label_45a8c0;
        case 0x45a8c4u: goto label_45a8c4;
        case 0x45a8c8u: goto label_45a8c8;
        case 0x45a8ccu: goto label_45a8cc;
        case 0x45a8d0u: goto label_45a8d0;
        case 0x45a8d4u: goto label_45a8d4;
        case 0x45a8d8u: goto label_45a8d8;
        case 0x45a8dcu: goto label_45a8dc;
        case 0x45a8e0u: goto label_45a8e0;
        case 0x45a8e4u: goto label_45a8e4;
        case 0x45a8e8u: goto label_45a8e8;
        case 0x45a8ecu: goto label_45a8ec;
        case 0x45a8f0u: goto label_45a8f0;
        case 0x45a8f4u: goto label_45a8f4;
        case 0x45a8f8u: goto label_45a8f8;
        case 0x45a8fcu: goto label_45a8fc;
        case 0x45a900u: goto label_45a900;
        case 0x45a904u: goto label_45a904;
        case 0x45a908u: goto label_45a908;
        case 0x45a90cu: goto label_45a90c;
        case 0x45a910u: goto label_45a910;
        case 0x45a914u: goto label_45a914;
        case 0x45a918u: goto label_45a918;
        case 0x45a91cu: goto label_45a91c;
        case 0x45a920u: goto label_45a920;
        case 0x45a924u: goto label_45a924;
        case 0x45a928u: goto label_45a928;
        case 0x45a92cu: goto label_45a92c;
        case 0x45a930u: goto label_45a930;
        case 0x45a934u: goto label_45a934;
        case 0x45a938u: goto label_45a938;
        case 0x45a93cu: goto label_45a93c;
        case 0x45a940u: goto label_45a940;
        case 0x45a944u: goto label_45a944;
        case 0x45a948u: goto label_45a948;
        case 0x45a94cu: goto label_45a94c;
        case 0x45a950u: goto label_45a950;
        case 0x45a954u: goto label_45a954;
        case 0x45a958u: goto label_45a958;
        case 0x45a95cu: goto label_45a95c;
        case 0x45a960u: goto label_45a960;
        case 0x45a964u: goto label_45a964;
        case 0x45a968u: goto label_45a968;
        case 0x45a96cu: goto label_45a96c;
        case 0x45a970u: goto label_45a970;
        case 0x45a974u: goto label_45a974;
        case 0x45a978u: goto label_45a978;
        case 0x45a97cu: goto label_45a97c;
        case 0x45a980u: goto label_45a980;
        case 0x45a984u: goto label_45a984;
        case 0x45a988u: goto label_45a988;
        case 0x45a98cu: goto label_45a98c;
        case 0x45a990u: goto label_45a990;
        case 0x45a994u: goto label_45a994;
        case 0x45a998u: goto label_45a998;
        case 0x45a99cu: goto label_45a99c;
        case 0x45a9a0u: goto label_45a9a0;
        case 0x45a9a4u: goto label_45a9a4;
        case 0x45a9a8u: goto label_45a9a8;
        case 0x45a9acu: goto label_45a9ac;
        case 0x45a9b0u: goto label_45a9b0;
        case 0x45a9b4u: goto label_45a9b4;
        case 0x45a9b8u: goto label_45a9b8;
        case 0x45a9bcu: goto label_45a9bc;
        case 0x45a9c0u: goto label_45a9c0;
        case 0x45a9c4u: goto label_45a9c4;
        case 0x45a9c8u: goto label_45a9c8;
        case 0x45a9ccu: goto label_45a9cc;
        case 0x45a9d0u: goto label_45a9d0;
        case 0x45a9d4u: goto label_45a9d4;
        case 0x45a9d8u: goto label_45a9d8;
        case 0x45a9dcu: goto label_45a9dc;
        case 0x45a9e0u: goto label_45a9e0;
        case 0x45a9e4u: goto label_45a9e4;
        case 0x45a9e8u: goto label_45a9e8;
        case 0x45a9ecu: goto label_45a9ec;
        case 0x45a9f0u: goto label_45a9f0;
        case 0x45a9f4u: goto label_45a9f4;
        case 0x45a9f8u: goto label_45a9f8;
        case 0x45a9fcu: goto label_45a9fc;
        case 0x45aa00u: goto label_45aa00;
        case 0x45aa04u: goto label_45aa04;
        case 0x45aa08u: goto label_45aa08;
        case 0x45aa0cu: goto label_45aa0c;
        case 0x45aa10u: goto label_45aa10;
        case 0x45aa14u: goto label_45aa14;
        case 0x45aa18u: goto label_45aa18;
        case 0x45aa1cu: goto label_45aa1c;
        case 0x45aa20u: goto label_45aa20;
        case 0x45aa24u: goto label_45aa24;
        case 0x45aa28u: goto label_45aa28;
        case 0x45aa2cu: goto label_45aa2c;
        case 0x45aa30u: goto label_45aa30;
        case 0x45aa34u: goto label_45aa34;
        case 0x45aa38u: goto label_45aa38;
        case 0x45aa3cu: goto label_45aa3c;
        case 0x45aa40u: goto label_45aa40;
        case 0x45aa44u: goto label_45aa44;
        case 0x45aa48u: goto label_45aa48;
        case 0x45aa4cu: goto label_45aa4c;
        case 0x45aa50u: goto label_45aa50;
        case 0x45aa54u: goto label_45aa54;
        case 0x45aa58u: goto label_45aa58;
        case 0x45aa5cu: goto label_45aa5c;
        case 0x45aa60u: goto label_45aa60;
        case 0x45aa64u: goto label_45aa64;
        case 0x45aa68u: goto label_45aa68;
        case 0x45aa6cu: goto label_45aa6c;
        case 0x45aa70u: goto label_45aa70;
        case 0x45aa74u: goto label_45aa74;
        case 0x45aa78u: goto label_45aa78;
        case 0x45aa7cu: goto label_45aa7c;
        case 0x45aa80u: goto label_45aa80;
        case 0x45aa84u: goto label_45aa84;
        case 0x45aa88u: goto label_45aa88;
        case 0x45aa8cu: goto label_45aa8c;
        case 0x45aa90u: goto label_45aa90;
        case 0x45aa94u: goto label_45aa94;
        case 0x45aa98u: goto label_45aa98;
        case 0x45aa9cu: goto label_45aa9c;
        case 0x45aaa0u: goto label_45aaa0;
        case 0x45aaa4u: goto label_45aaa4;
        case 0x45aaa8u: goto label_45aaa8;
        case 0x45aaacu: goto label_45aaac;
        case 0x45aab0u: goto label_45aab0;
        case 0x45aab4u: goto label_45aab4;
        case 0x45aab8u: goto label_45aab8;
        case 0x45aabcu: goto label_45aabc;
        case 0x45aac0u: goto label_45aac0;
        case 0x45aac4u: goto label_45aac4;
        case 0x45aac8u: goto label_45aac8;
        case 0x45aaccu: goto label_45aacc;
        case 0x45aad0u: goto label_45aad0;
        case 0x45aad4u: goto label_45aad4;
        case 0x45aad8u: goto label_45aad8;
        case 0x45aadcu: goto label_45aadc;
        case 0x45aae0u: goto label_45aae0;
        case 0x45aae4u: goto label_45aae4;
        case 0x45aae8u: goto label_45aae8;
        case 0x45aaecu: goto label_45aaec;
        case 0x45aaf0u: goto label_45aaf0;
        case 0x45aaf4u: goto label_45aaf4;
        case 0x45aaf8u: goto label_45aaf8;
        case 0x45aafcu: goto label_45aafc;
        case 0x45ab00u: goto label_45ab00;
        case 0x45ab04u: goto label_45ab04;
        case 0x45ab08u: goto label_45ab08;
        case 0x45ab0cu: goto label_45ab0c;
        case 0x45ab10u: goto label_45ab10;
        case 0x45ab14u: goto label_45ab14;
        case 0x45ab18u: goto label_45ab18;
        case 0x45ab1cu: goto label_45ab1c;
        case 0x45ab20u: goto label_45ab20;
        case 0x45ab24u: goto label_45ab24;
        case 0x45ab28u: goto label_45ab28;
        case 0x45ab2cu: goto label_45ab2c;
        case 0x45ab30u: goto label_45ab30;
        case 0x45ab34u: goto label_45ab34;
        case 0x45ab38u: goto label_45ab38;
        case 0x45ab3cu: goto label_45ab3c;
        case 0x45ab40u: goto label_45ab40;
        case 0x45ab44u: goto label_45ab44;
        case 0x45ab48u: goto label_45ab48;
        case 0x45ab4cu: goto label_45ab4c;
        case 0x45ab50u: goto label_45ab50;
        case 0x45ab54u: goto label_45ab54;
        case 0x45ab58u: goto label_45ab58;
        case 0x45ab5cu: goto label_45ab5c;
        case 0x45ab60u: goto label_45ab60;
        case 0x45ab64u: goto label_45ab64;
        case 0x45ab68u: goto label_45ab68;
        case 0x45ab6cu: goto label_45ab6c;
        case 0x45ab70u: goto label_45ab70;
        case 0x45ab74u: goto label_45ab74;
        case 0x45ab78u: goto label_45ab78;
        case 0x45ab7cu: goto label_45ab7c;
        case 0x45ab80u: goto label_45ab80;
        case 0x45ab84u: goto label_45ab84;
        case 0x45ab88u: goto label_45ab88;
        case 0x45ab8cu: goto label_45ab8c;
        case 0x45ab90u: goto label_45ab90;
        case 0x45ab94u: goto label_45ab94;
        case 0x45ab98u: goto label_45ab98;
        case 0x45ab9cu: goto label_45ab9c;
        case 0x45aba0u: goto label_45aba0;
        case 0x45aba4u: goto label_45aba4;
        case 0x45aba8u: goto label_45aba8;
        case 0x45abacu: goto label_45abac;
        case 0x45abb0u: goto label_45abb0;
        case 0x45abb4u: goto label_45abb4;
        case 0x45abb8u: goto label_45abb8;
        case 0x45abbcu: goto label_45abbc;
        case 0x45abc0u: goto label_45abc0;
        case 0x45abc4u: goto label_45abc4;
        case 0x45abc8u: goto label_45abc8;
        case 0x45abccu: goto label_45abcc;
        case 0x45abd0u: goto label_45abd0;
        case 0x45abd4u: goto label_45abd4;
        case 0x45abd8u: goto label_45abd8;
        case 0x45abdcu: goto label_45abdc;
        default: break;
    }

    ctx->pc = 0x45a3d0u;

label_45a3d0:
    // 0x45a3d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x45a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_45a3d4:
    // 0x45a3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45a3d8:
    // 0x45a3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45a3dc:
    // 0x45a3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45a3e0:
    // 0x45a3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45a3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45a3e4:
    // 0x45a3e4: 0x8ca40d74  lw          $a0, 0xD74($a1)
    ctx->pc = 0x45a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3444)));
label_45a3e8:
    // 0x45a3e8: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x45a3e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_45a3ec:
    // 0x45a3ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x45a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_45a3f0:
    // 0x45a3f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x45a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_45a3f4:
    // 0x45a3f4: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x45a3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_45a3f8:
    // 0x45a3f8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_45a3fc:
    if (ctx->pc == 0x45A3FCu) {
        ctx->pc = 0x45A3FCu;
            // 0x45a3fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A400u;
        goto label_45a400;
    }
    ctx->pc = 0x45A3F8u;
    {
        const bool branch_taken_0x45a3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A3F8u;
            // 0x45a3fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a3f8) {
            ctx->pc = 0x45A4E8u;
            goto label_45a4e8;
        }
    }
    ctx->pc = 0x45A400u;
label_45a400:
    // 0x45a400: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x45a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_45a404:
    // 0x45a404: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x45a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_45a408:
    // 0x45a408: 0xc04cc90  jal         func_133240
label_45a40c:
    if (ctx->pc == 0x45A40Cu) {
        ctx->pc = 0x45A40Cu;
            // 0x45a40c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x45A410u;
        goto label_45a410;
    }
    ctx->pc = 0x45A408u;
    SET_GPR_U32(ctx, 31, 0x45A410u);
    ctx->pc = 0x45A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A408u;
            // 0x45a40c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A410u; }
        if (ctx->pc != 0x45A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A410u; }
        if (ctx->pc != 0x45A410u) { return; }
    }
    ctx->pc = 0x45A410u;
label_45a410:
    // 0x45a410: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45a414:
    // 0x45a414: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x45a414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_45a418:
    // 0x45a418: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x45a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_45a41c:
    // 0x45a41c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x45a41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45a420:
    // 0x45a420: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x45a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a424:
    // 0x45a424: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45a428:
    // 0x45a428: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x45a428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_45a42c:
    // 0x45a42c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x45a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a430:
    // 0x45a430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45a430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_45a434:
    // 0x45a434: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45a434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45a438:
    // 0x45a438: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x45a438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_45a43c:
    // 0x45a43c: 0xc04f3bc  jal         func_13CEF0
label_45a440:
    if (ctx->pc == 0x45A440u) {
        ctx->pc = 0x45A440u;
            // 0x45a440: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x45A444u;
        goto label_45a444;
    }
    ctx->pc = 0x45A43Cu;
    SET_GPR_U32(ctx, 31, 0x45A444u);
    ctx->pc = 0x45A440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A43Cu;
            // 0x45a440: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A444u; }
        if (ctx->pc != 0x45A444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A444u; }
        if (ctx->pc != 0x45A444u) { return; }
    }
    ctx->pc = 0x45A444u;
label_45a444:
    // 0x45a444: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45a448:
    // 0x45a448: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x45a448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45a44c:
    // 0x45a44c: 0xc04cca0  jal         func_133280
label_45a450:
    if (ctx->pc == 0x45A450u) {
        ctx->pc = 0x45A450u;
            // 0x45a450: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x45A454u;
        goto label_45a454;
    }
    ctx->pc = 0x45A44Cu;
    SET_GPR_U32(ctx, 31, 0x45A454u);
    ctx->pc = 0x45A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A44Cu;
            // 0x45a450: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A454u; }
        if (ctx->pc != 0x45A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A454u; }
        if (ctx->pc != 0x45A454u) { return; }
    }
    ctx->pc = 0x45A454u;
label_45a454:
    // 0x45a454: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x45a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45a458:
    // 0x45a458: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x45a458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_45a45c:
    // 0x45a45c: 0xc04cc90  jal         func_133240
label_45a460:
    if (ctx->pc == 0x45A460u) {
        ctx->pc = 0x45A460u;
            // 0x45a460: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A464u;
        goto label_45a464;
    }
    ctx->pc = 0x45A45Cu;
    SET_GPR_U32(ctx, 31, 0x45A464u);
    ctx->pc = 0x45A460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A45Cu;
            // 0x45a460: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A464u; }
        if (ctx->pc != 0x45A464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A464u; }
        if (ctx->pc != 0x45A464u) { return; }
    }
    ctx->pc = 0x45A464u;
label_45a464:
    // 0x45a464: 0xc04cc14  jal         func_133050
label_45a468:
    if (ctx->pc == 0x45A468u) {
        ctx->pc = 0x45A468u;
            // 0x45a468: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x45A46Cu;
        goto label_45a46c;
    }
    ctx->pc = 0x45A464u;
    SET_GPR_U32(ctx, 31, 0x45A46Cu);
    ctx->pc = 0x45A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A464u;
            // 0x45a468: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A46Cu; }
        if (ctx->pc != 0x45A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A46Cu; }
        if (ctx->pc != 0x45A46Cu) { return; }
    }
    ctx->pc = 0x45A46Cu;
label_45a46c:
    // 0x45a46c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45a470:
    // 0x45a470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a474:
    // 0x45a474: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x45a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_45a478:
    // 0x45a478: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x45a478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_45a47c:
    // 0x45a47c: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x45a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_45a480:
    // 0x45a480: 0xc0767f0  jal         func_1D9FC0
label_45a484:
    if (ctx->pc == 0x45A484u) {
        ctx->pc = 0x45A484u;
            // 0x45a484: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x45A488u;
        goto label_45a488;
    }
    ctx->pc = 0x45A480u;
    SET_GPR_U32(ctx, 31, 0x45A488u);
    ctx->pc = 0x45A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A480u;
            // 0x45a484: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A488u; }
        if (ctx->pc != 0x45A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A488u; }
        if (ctx->pc != 0x45A488u) { return; }
    }
    ctx->pc = 0x45A488u;
label_45a488:
    // 0x45a488: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x45a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a48c:
    // 0x45a48c: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x45a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_45a490:
    // 0x45a490: 0xc62200f0  lwc1        $f2, 0xF0($s1)
    ctx->pc = 0x45a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a494:
    // 0x45a494: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x45a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_45a498:
    // 0x45a498: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x45a498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_45a49c:
    // 0x45a49c: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x45a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_45a4a0:
    // 0x45a4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45a4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a4a4:
    // 0x45a4a4: 0x0  nop
    ctx->pc = 0x45a4a4u;
    // NOP
label_45a4a8:
    // 0x45a4a8: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x45a4a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_45a4ac:
    // 0x45a4ac: 0x46020b1c  madd.s      $f12, $f1, $f2
    ctx->pc = 0x45a4acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_45a4b0:
    // 0x45a4b0: 0xc0c753c  jal         func_31D4F0
label_45a4b4:
    if (ctx->pc == 0x45A4B4u) {
        ctx->pc = 0x45A4B4u;
            // 0x45a4b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x45A4B8u;
        goto label_45a4b8;
    }
    ctx->pc = 0x45A4B0u;
    SET_GPR_U32(ctx, 31, 0x45A4B8u);
    ctx->pc = 0x45A4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A4B0u;
            // 0x45a4b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A4B8u; }
        if (ctx->pc != 0x45A4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A4B8u; }
        if (ctx->pc != 0x45A4B8u) { return; }
    }
    ctx->pc = 0x45A4B8u;
label_45a4b8:
    // 0x45a4b8: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x45a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a4bc:
    // 0x45a4bc: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x45a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_45a4c0:
    // 0x45a4c0: 0xc62200f0  lwc1        $f2, 0xF0($s1)
    ctx->pc = 0x45a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a4c4:
    // 0x45a4c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x45a4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_45a4c8:
    // 0x45a4c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x45a4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_45a4cc:
    // 0x45a4cc: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x45a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
label_45a4d0:
    // 0x45a4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45a4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a4d4:
    // 0x45a4d4: 0x0  nop
    ctx->pc = 0x45a4d4u;
    // NOP
label_45a4d8:
    // 0x45a4d8: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x45a4d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_45a4dc:
    // 0x45a4dc: 0x46020b1c  madd.s      $f12, $f1, $f2
    ctx->pc = 0x45a4dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_45a4e0:
    // 0x45a4e0: 0xc0c753c  jal         func_31D4F0
label_45a4e4:
    if (ctx->pc == 0x45A4E4u) {
        ctx->pc = 0x45A4E4u;
            // 0x45a4e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x45A4E8u;
        goto label_45a4e8;
    }
    ctx->pc = 0x45A4E0u;
    SET_GPR_U32(ctx, 31, 0x45A4E8u);
    ctx->pc = 0x45A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A4E0u;
            // 0x45a4e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A4E8u; }
        if (ctx->pc != 0x45A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A4E8u; }
        if (ctx->pc != 0x45A4E8u) { return; }
    }
    ctx->pc = 0x45A4E8u;
label_45a4e8:
    // 0x45a4e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45a4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45a4ec:
    // 0x45a4ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45a4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45a4f0:
    // 0x45a4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45a4f4:
    // 0x45a4f4: 0x3e00008  jr          $ra
label_45a4f8:
    if (ctx->pc == 0x45A4F8u) {
        ctx->pc = 0x45A4F8u;
            // 0x45a4f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A4FCu;
        goto label_45a4fc;
    }
    ctx->pc = 0x45A4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A4F4u;
            // 0x45a4f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45A4FCu;
label_45a4fc:
    // 0x45a4fc: 0x0  nop
    ctx->pc = 0x45a4fcu;
    // NOP
label_45a500:
    // 0x45a500: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x45a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_45a504:
    // 0x45a504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a508:
    // 0x45a508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45a50c:
    // 0x45a50c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45a50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45a510:
    // 0x45a510: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45a514:
    // 0x45a514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45a518:
    // 0x45a518: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45a518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45a51c:
    // 0x45a51c: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x45a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_45a520:
    // 0x45a520: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_45a524:
    if (ctx->pc == 0x45A524u) {
        ctx->pc = 0x45A524u;
            // 0x45a524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A528u;
        goto label_45a528;
    }
    ctx->pc = 0x45A520u;
    {
        const bool branch_taken_0x45a520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x45A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A520u;
            // 0x45a524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a520) {
            ctx->pc = 0x45A560u;
            goto label_45a560;
        }
    }
    ctx->pc = 0x45A528u;
label_45a528:
    // 0x45a528: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_45a52c:
    if (ctx->pc == 0x45A52Cu) {
        ctx->pc = 0x45A52Cu;
            // 0x45a52c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x45A530u;
        goto label_45a530;
    }
    ctx->pc = 0x45A528u;
    {
        const bool branch_taken_0x45a528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a528) {
            ctx->pc = 0x45A52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A528u;
            // 0x45a52c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A538u;
            goto label_45a538;
        }
    }
    ctx->pc = 0x45A530u;
label_45a530:
    // 0x45a530: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_45a534:
    if (ctx->pc == 0x45A534u) {
        ctx->pc = 0x45A534u;
            // 0x45a534: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x45A538u;
        goto label_45a538;
    }
    ctx->pc = 0x45A530u;
    {
        const bool branch_taken_0x45a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A530u;
            // 0x45a534: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a530) {
            ctx->pc = 0x45ABBCu;
            goto label_45abbc;
        }
    }
    ctx->pc = 0x45A538u;
label_45a538:
    // 0x45a538: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x45a538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_45a53c:
    // 0x45a53c: 0x320f809  jalr        $t9
label_45a540:
    if (ctx->pc == 0x45A540u) {
        ctx->pc = 0x45A544u;
        goto label_45a544;
    }
    ctx->pc = 0x45A53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45A544u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x45A544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45A544u; }
            if (ctx->pc != 0x45A544u) { return; }
        }
        }
    }
    ctx->pc = 0x45A544u;
label_45a544:
    // 0x45a544: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45a544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45a548:
    // 0x45a548: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x45a548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_45a54c:
    // 0x45a54c: 0x320f809  jalr        $t9
label_45a550:
    if (ctx->pc == 0x45A550u) {
        ctx->pc = 0x45A550u;
            // 0x45a550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A554u;
        goto label_45a554;
    }
    ctx->pc = 0x45A54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45A554u);
        ctx->pc = 0x45A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A54Cu;
            // 0x45a550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45A554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45A554u; }
            if (ctx->pc != 0x45A554u) { return; }
        }
        }
    }
    ctx->pc = 0x45A554u;
label_45a554:
    // 0x45a554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a558:
    // 0x45a558: 0x10000197  b           . + 4 + (0x197 << 2)
label_45a55c:
    if (ctx->pc == 0x45A55Cu) {
        ctx->pc = 0x45A55Cu;
            // 0x45a55c: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x45A560u;
        goto label_45a560;
    }
    ctx->pc = 0x45A558u;
    {
        const bool branch_taken_0x45a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A558u;
            // 0x45a55c: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a558) {
            ctx->pc = 0x45ABB8u;
            goto label_45abb8;
        }
    }
    ctx->pc = 0x45A560u;
label_45a560:
    // 0x45a560: 0xc0b6e68  jal         func_2DB9A0
label_45a564:
    if (ctx->pc == 0x45A564u) {
        ctx->pc = 0x45A564u;
            // 0x45a564: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A568u;
        goto label_45a568;
    }
    ctx->pc = 0x45A560u;
    SET_GPR_U32(ctx, 31, 0x45A568u);
    ctx->pc = 0x45A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A560u;
            // 0x45a564: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A568u; }
        if (ctx->pc != 0x45A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A568u; }
        if (ctx->pc != 0x45A568u) { return; }
    }
    ctx->pc = 0x45A568u;
label_45a568:
    // 0x45a568: 0xc116b00  jal         func_45AC00
label_45a56c:
    if (ctx->pc == 0x45A56Cu) {
        ctx->pc = 0x45A56Cu;
            // 0x45a56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A570u;
        goto label_45a570;
    }
    ctx->pc = 0x45A568u;
    SET_GPR_U32(ctx, 31, 0x45A570u);
    ctx->pc = 0x45A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A568u;
            // 0x45a56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45AC00u;
    if (runtime->hasFunction(0x45AC00u)) {
        auto targetFn = runtime->lookupFunction(0x45AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A570u; }
        if (ctx->pc != 0x45A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045AC00_0x45ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A570u; }
        if (ctx->pc != 0x45A570u) { return; }
    }
    ctx->pc = 0x45A570u;
label_45a570:
    // 0x45a570: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45a574:
    // 0x45a574: 0x504300eb  beql        $v0, $v1, . + 4 + (0xEB << 2)
label_45a578:
    if (ctx->pc == 0x45A578u) {
        ctx->pc = 0x45A578u;
            // 0x45a578: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x45A57Cu;
        goto label_45a57c;
    }
    ctx->pc = 0x45A574u;
    {
        const bool branch_taken_0x45a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45a574) {
            ctx->pc = 0x45A578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A574u;
            // 0x45a578: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A924u;
            goto label_45a924;
        }
    }
    ctx->pc = 0x45A57Cu;
label_45a57c:
    // 0x45a57c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a580:
    // 0x45a580: 0x504300ba  beql        $v0, $v1, . + 4 + (0xBA << 2)
label_45a584:
    if (ctx->pc == 0x45A584u) {
        ctx->pc = 0x45A584u;
            // 0x45a584: 0xc60100fc  lwc1        $f1, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x45A588u;
        goto label_45a588;
    }
    ctx->pc = 0x45A580u;
    {
        const bool branch_taken_0x45a580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45a580) {
            ctx->pc = 0x45A584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A580u;
            // 0x45a584: 0xc60100fc  lwc1        $f1, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A86Cu;
            goto label_45a86c;
        }
    }
    ctx->pc = 0x45A588u;
label_45a588:
    // 0x45a588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a58c:
    // 0x45a58c: 0x50430034  beql        $v0, $v1, . + 4 + (0x34 << 2)
label_45a590:
    if (ctx->pc == 0x45A590u) {
        ctx->pc = 0x45A590u;
            // 0x45a590: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x45A594u;
        goto label_45a594;
    }
    ctx->pc = 0x45A58Cu;
    {
        const bool branch_taken_0x45a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45a58c) {
            ctx->pc = 0x45A590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A58Cu;
            // 0x45a590: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A660u;
            goto label_45a660;
        }
    }
    ctx->pc = 0x45A594u;
label_45a594:
    // 0x45a594: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_45a598:
    if (ctx->pc == 0x45A598u) {
        ctx->pc = 0x45A598u;
            // 0x45a598: 0xc60000f4  lwc1        $f0, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x45A59Cu;
        goto label_45a59c;
    }
    ctx->pc = 0x45A594u;
    {
        const bool branch_taken_0x45a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a594) {
            ctx->pc = 0x45A598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A594u;
            // 0x45a598: 0xc60000f4  lwc1        $f0, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A5A4u;
            goto label_45a5a4;
        }
    }
    ctx->pc = 0x45A59Cu;
label_45a59c:
    // 0x45a59c: 0x10000175  b           . + 4 + (0x175 << 2)
label_45a5a0:
    if (ctx->pc == 0x45A5A0u) {
        ctx->pc = 0x45A5A4u;
        goto label_45a5a4;
    }
    ctx->pc = 0x45A59Cu;
    {
        const bool branch_taken_0x45a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a59c) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A5A4u;
label_45a5a4:
    // 0x45a5a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a5a8:
    // 0x45a5a8: 0x0  nop
    ctx->pc = 0x45a5a8u;
    // NOP
label_45a5ac:
    // 0x45a5ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x45a5acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a5b0:
    // 0x45a5b0: 0x45010170  bc1t        . + 4 + (0x170 << 2)
label_45a5b4:
    if (ctx->pc == 0x45A5B4u) {
        ctx->pc = 0x45A5B8u;
        goto label_45a5b8;
    }
    ctx->pc = 0x45A5B0u;
    {
        const bool branch_taken_0x45a5b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45a5b0) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A5B8u;
label_45a5b8:
    // 0x45a5b8: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x45a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a5bc:
    // 0x45a5bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45a5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a5c0:
    // 0x45a5c0: 0x4501016c  bc1t        . + 4 + (0x16C << 2)
label_45a5c4:
    if (ctx->pc == 0x45A5C4u) {
        ctx->pc = 0x45A5C8u;
        goto label_45a5c8;
    }
    ctx->pc = 0x45A5C0u;
    {
        const bool branch_taken_0x45a5c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45a5c0) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A5C8u;
label_45a5c8:
    // 0x45a5c8: 0xc0775b8  jal         func_1DD6E0
label_45a5cc:
    if (ctx->pc == 0x45A5CCu) {
        ctx->pc = 0x45A5D0u;
        goto label_45a5d0;
    }
    ctx->pc = 0x45A5C8u;
    SET_GPR_U32(ctx, 31, 0x45A5D0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A5D0u; }
        if (ctx->pc != 0x45A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A5D0u; }
        if (ctx->pc != 0x45A5D0u) { return; }
    }
    ctx->pc = 0x45A5D0u;
label_45a5d0:
    // 0x45a5d0: 0xc0775b4  jal         func_1DD6D0
label_45a5d4:
    if (ctx->pc == 0x45A5D4u) {
        ctx->pc = 0x45A5D4u;
            // 0x45a5d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A5D8u;
        goto label_45a5d8;
    }
    ctx->pc = 0x45A5D0u;
    SET_GPR_U32(ctx, 31, 0x45A5D8u);
    ctx->pc = 0x45A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A5D0u;
            // 0x45a5d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A5D8u; }
        if (ctx->pc != 0x45A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A5D8u; }
        if (ctx->pc != 0x45A5D8u) { return; }
    }
    ctx->pc = 0x45A5D8u;
label_45a5d8:
    // 0x45a5d8: 0xc60200fc  lwc1        $f2, 0xFC($s0)
    ctx->pc = 0x45a5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a5dc:
    // 0x45a5dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a5e0:
    // 0x45a5e0: 0x0  nop
    ctx->pc = 0x45a5e0u;
    // NOP
label_45a5e4:
    // 0x45a5e4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x45a5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_45a5e8:
    // 0x45a5e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45a5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a5ec:
    // 0x45a5ec: 0x45000161  bc1f        . + 4 + (0x161 << 2)
label_45a5f0:
    if (ctx->pc == 0x45A5F0u) {
        ctx->pc = 0x45A5F0u;
            // 0x45a5f0: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x45A5F4u;
        goto label_45a5f4;
    }
    ctx->pc = 0x45A5ECu;
    {
        const bool branch_taken_0x45a5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x45A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A5ECu;
            // 0x45a5f0: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a5ec) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A5F4u;
label_45a5f4:
    // 0x45a5f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45a5f8:
    // 0x45a5f8: 0xc0b6de4  jal         func_2DB790
label_45a5fc:
    if (ctx->pc == 0x45A5FCu) {
        ctx->pc = 0x45A5FCu;
            // 0x45a5fc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x45A600u;
        goto label_45a600;
    }
    ctx->pc = 0x45A5F8u;
    SET_GPR_U32(ctx, 31, 0x45A600u);
    ctx->pc = 0x45A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A5F8u;
            // 0x45a5fc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A600u; }
        if (ctx->pc != 0x45A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A600u; }
        if (ctx->pc != 0x45A600u) { return; }
    }
    ctx->pc = 0x45A600u;
label_45a600:
    // 0x45a600: 0xc0b6e84  jal         func_2DBA10
label_45a604:
    if (ctx->pc == 0x45A604u) {
        ctx->pc = 0x45A608u;
        goto label_45a608;
    }
    ctx->pc = 0x45A600u;
    SET_GPR_U32(ctx, 31, 0x45A608u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A608u; }
        if (ctx->pc != 0x45A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A608u; }
        if (ctx->pc != 0x45A608u) { return; }
    }
    ctx->pc = 0x45A608u;
label_45a608:
    // 0x45a608: 0xc0b6e60  jal         func_2DB980
label_45a60c:
    if (ctx->pc == 0x45A60Cu) {
        ctx->pc = 0x45A60Cu;
            // 0x45a60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A610u;
        goto label_45a610;
    }
    ctx->pc = 0x45A608u;
    SET_GPR_U32(ctx, 31, 0x45A610u);
    ctx->pc = 0x45A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A608u;
            // 0x45a60c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A610u; }
        if (ctx->pc != 0x45A610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A610u; }
        if (ctx->pc != 0x45A610u) { return; }
    }
    ctx->pc = 0x45A610u;
label_45a610:
    // 0x45a610: 0xc0b6e38  jal         func_2DB8E0
label_45a614:
    if (ctx->pc == 0x45A614u) {
        ctx->pc = 0x45A614u;
            // 0x45a614: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x45A618u;
        goto label_45a618;
    }
    ctx->pc = 0x45A610u;
    SET_GPR_U32(ctx, 31, 0x45A618u);
    ctx->pc = 0x45A614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A610u;
            // 0x45a614: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A618u; }
        if (ctx->pc != 0x45A618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A618u; }
        if (ctx->pc != 0x45A618u) { return; }
    }
    ctx->pc = 0x45A618u;
label_45a618:
    // 0x45a618: 0xc0775b8  jal         func_1DD6E0
label_45a61c:
    if (ctx->pc == 0x45A61Cu) {
        ctx->pc = 0x45A61Cu;
            // 0x45a61c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x45A620u;
        goto label_45a620;
    }
    ctx->pc = 0x45A618u;
    SET_GPR_U32(ctx, 31, 0x45A620u);
    ctx->pc = 0x45A61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A618u;
            // 0x45a61c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A620u; }
        if (ctx->pc != 0x45A620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A620u; }
        if (ctx->pc != 0x45A620u) { return; }
    }
    ctx->pc = 0x45A620u;
label_45a620:
    // 0x45a620: 0xc0775b4  jal         func_1DD6D0
label_45a624:
    if (ctx->pc == 0x45A624u) {
        ctx->pc = 0x45A624u;
            // 0x45a624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A628u;
        goto label_45a628;
    }
    ctx->pc = 0x45A620u;
    SET_GPR_U32(ctx, 31, 0x45A628u);
    ctx->pc = 0x45A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A620u;
            // 0x45a624: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A628u; }
        if (ctx->pc != 0x45A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A628u; }
        if (ctx->pc != 0x45A628u) { return; }
    }
    ctx->pc = 0x45A628u;
label_45a628:
    // 0x45a628: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x45a628u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_45a62c:
    // 0x45a62c: 0xc0b6e28  jal         func_2DB8A0
label_45a630:
    if (ctx->pc == 0x45A630u) {
        ctx->pc = 0x45A630u;
            // 0x45a630: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A634u;
        goto label_45a634;
    }
    ctx->pc = 0x45A62Cu;
    SET_GPR_U32(ctx, 31, 0x45A634u);
    ctx->pc = 0x45A630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A62Cu;
            // 0x45a630: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A634u; }
        if (ctx->pc != 0x45A634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A634u; }
        if (ctx->pc != 0x45A634u) { return; }
    }
    ctx->pc = 0x45A634u;
label_45a634:
    // 0x45a634: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45a634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45a638:
    // 0x45a638: 0xc0dc3f4  jal         func_370FD0
label_45a63c:
    if (ctx->pc == 0x45A63Cu) {
        ctx->pc = 0x45A63Cu;
            // 0x45a63c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A640u;
        goto label_45a640;
    }
    ctx->pc = 0x45A638u;
    SET_GPR_U32(ctx, 31, 0x45A640u);
    ctx->pc = 0x45A63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A638u;
            // 0x45a63c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A640u; }
        if (ctx->pc != 0x45A640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A640u; }
        if (ctx->pc != 0x45A640u) { return; }
    }
    ctx->pc = 0x45A640u;
label_45a640:
    // 0x45a640: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x45a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a644:
    // 0x45a644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a648:
    // 0x45a648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a64c:
    // 0x45a64c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x45a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_45a650:
    // 0x45a650: 0xc116afc  jal         func_45ABF0
label_45a654:
    if (ctx->pc == 0x45A654u) {
        ctx->pc = 0x45A654u;
            // 0x45a654: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->pc = 0x45A658u;
        goto label_45a658;
    }
    ctx->pc = 0x45A650u;
    SET_GPR_U32(ctx, 31, 0x45A658u);
    ctx->pc = 0x45A654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A650u;
            // 0x45a654: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABF0u;
    if (runtime->hasFunction(0x45ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A658u; }
        if (ctx->pc != 0x45A658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABF0_0x45abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A658u; }
        if (ctx->pc != 0x45A658u) { return; }
    }
    ctx->pc = 0x45A658u;
label_45a658:
    // 0x45a658: 0x10000146  b           . + 4 + (0x146 << 2)
label_45a65c:
    if (ctx->pc == 0x45A65Cu) {
        ctx->pc = 0x45A660u;
        goto label_45a660;
    }
    ctx->pc = 0x45A658u;
    {
        const bool branch_taken_0x45a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a658) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A660u;
label_45a660:
    // 0x45a660: 0xc088b74  jal         func_222DD0
label_45a664:
    if (ctx->pc == 0x45A664u) {
        ctx->pc = 0x45A668u;
        goto label_45a668;
    }
    ctx->pc = 0x45A660u;
    SET_GPR_U32(ctx, 31, 0x45A668u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A668u; }
        if (ctx->pc != 0x45A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A668u; }
        if (ctx->pc != 0x45A668u) { return; }
    }
    ctx->pc = 0x45A668u;
label_45a668:
    // 0x45a668: 0xc0775b8  jal         func_1DD6E0
label_45a66c:
    if (ctx->pc == 0x45A66Cu) {
        ctx->pc = 0x45A670u;
        goto label_45a670;
    }
    ctx->pc = 0x45A668u;
    SET_GPR_U32(ctx, 31, 0x45A670u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A670u; }
        if (ctx->pc != 0x45A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A670u; }
        if (ctx->pc != 0x45A670u) { return; }
    }
    ctx->pc = 0x45A670u;
label_45a670:
    // 0x45a670: 0xc0775b4  jal         func_1DD6D0
label_45a674:
    if (ctx->pc == 0x45A674u) {
        ctx->pc = 0x45A674u;
            // 0x45a674: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A678u;
        goto label_45a678;
    }
    ctx->pc = 0x45A670u;
    SET_GPR_U32(ctx, 31, 0x45A678u);
    ctx->pc = 0x45A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A670u;
            // 0x45a674: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A678u; }
        if (ctx->pc != 0x45A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A678u; }
        if (ctx->pc != 0x45A678u) { return; }
    }
    ctx->pc = 0x45A678u;
label_45a678:
    // 0x45a678: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x45a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a67c:
    // 0x45a67c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45a67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_45a680:
    // 0x45a680: 0xc0775b8  jal         func_1DD6E0
label_45a684:
    if (ctx->pc == 0x45A684u) {
        ctx->pc = 0x45A684u;
            // 0x45a684: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x45A688u;
        goto label_45a688;
    }
    ctx->pc = 0x45A680u;
    SET_GPR_U32(ctx, 31, 0x45A688u);
    ctx->pc = 0x45A684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A680u;
            // 0x45a684: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A688u; }
        if (ctx->pc != 0x45A688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A688u; }
        if (ctx->pc != 0x45A688u) { return; }
    }
    ctx->pc = 0x45A688u;
label_45a688:
    // 0x45a688: 0xc0775b4  jal         func_1DD6D0
label_45a68c:
    if (ctx->pc == 0x45A68Cu) {
        ctx->pc = 0x45A68Cu;
            // 0x45a68c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A690u;
        goto label_45a690;
    }
    ctx->pc = 0x45A688u;
    SET_GPR_U32(ctx, 31, 0x45A690u);
    ctx->pc = 0x45A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A688u;
            // 0x45a68c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A690u; }
        if (ctx->pc != 0x45A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A690u; }
        if (ctx->pc != 0x45A690u) { return; }
    }
    ctx->pc = 0x45A690u;
label_45a690:
    // 0x45a690: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x45a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a694:
    // 0x45a694: 0xc60300f0  lwc1        $f3, 0xF0($s0)
    ctx->pc = 0x45a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a698:
    // 0x45a698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a69c:
    // 0x45a69c: 0x0  nop
    ctx->pc = 0x45a69cu;
    // NOP
label_45a6a0:
    // 0x45a6a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a6a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a6a4:
    // 0x45a6a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x45a6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a6a8:
    // 0x45a6a8: 0xc0775b8  jal         func_1DD6E0
label_45a6ac:
    if (ctx->pc == 0x45A6ACu) {
        ctx->pc = 0x45A6ACu;
            // 0x45a6ac: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x45A6B0u;
        goto label_45a6b0;
    }
    ctx->pc = 0x45A6A8u;
    SET_GPR_U32(ctx, 31, 0x45A6B0u);
    ctx->pc = 0x45A6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A6A8u;
            // 0x45a6ac: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6B0u; }
        if (ctx->pc != 0x45A6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6B0u; }
        if (ctx->pc != 0x45A6B0u) { return; }
    }
    ctx->pc = 0x45A6B0u;
label_45a6b0:
    // 0x45a6b0: 0xc0775b4  jal         func_1DD6D0
label_45a6b4:
    if (ctx->pc == 0x45A6B4u) {
        ctx->pc = 0x45A6B4u;
            // 0x45a6b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A6B8u;
        goto label_45a6b8;
    }
    ctx->pc = 0x45A6B0u;
    SET_GPR_U32(ctx, 31, 0x45A6B8u);
    ctx->pc = 0x45A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A6B0u;
            // 0x45a6b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6B8u; }
        if (ctx->pc != 0x45A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6B8u; }
        if (ctx->pc != 0x45A6B8u) { return; }
    }
    ctx->pc = 0x45A6B8u;
label_45a6b8:
    // 0x45a6b8: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x45a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a6bc:
    // 0x45a6bc: 0xc603015c  lwc1        $f3, 0x15C($s0)
    ctx->pc = 0x45a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a6c0:
    // 0x45a6c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a6c4:
    // 0x45a6c4: 0x0  nop
    ctx->pc = 0x45a6c4u;
    // NOP
label_45a6c8:
    // 0x45a6c8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a6c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a6cc:
    // 0x45a6cc: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x45a6ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a6d0:
    // 0x45a6d0: 0xc0775b8  jal         func_1DD6E0
label_45a6d4:
    if (ctx->pc == 0x45A6D4u) {
        ctx->pc = 0x45A6D4u;
            // 0x45a6d4: 0xe6000154  swc1        $f0, 0x154($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
        ctx->pc = 0x45A6D8u;
        goto label_45a6d8;
    }
    ctx->pc = 0x45A6D0u;
    SET_GPR_U32(ctx, 31, 0x45A6D8u);
    ctx->pc = 0x45A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A6D0u;
            // 0x45a6d4: 0xe6000154  swc1        $f0, 0x154($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6D8u; }
        if (ctx->pc != 0x45A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6D8u; }
        if (ctx->pc != 0x45A6D8u) { return; }
    }
    ctx->pc = 0x45A6D8u;
label_45a6d8:
    // 0x45a6d8: 0xc0775b4  jal         func_1DD6D0
label_45a6dc:
    if (ctx->pc == 0x45A6DCu) {
        ctx->pc = 0x45A6DCu;
            // 0x45a6dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A6E0u;
        goto label_45a6e0;
    }
    ctx->pc = 0x45A6D8u;
    SET_GPR_U32(ctx, 31, 0x45A6E0u);
    ctx->pc = 0x45A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A6D8u;
            // 0x45a6dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6E0u; }
        if (ctx->pc != 0x45A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A6E0u; }
        if (ctx->pc != 0x45A6E0u) { return; }
    }
    ctx->pc = 0x45A6E0u;
label_45a6e0:
    // 0x45a6e0: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x45a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a6e4:
    // 0x45a6e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45a6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a6e8:
    // 0x45a6e8: 0xc6030160  lwc1        $f3, 0x160($s0)
    ctx->pc = 0x45a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a6ec:
    // 0x45a6ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x45a6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a6f0:
    // 0x45a6f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a6f4:
    // 0x45a6f4: 0x0  nop
    ctx->pc = 0x45a6f4u;
    // NOP
label_45a6f8:
    // 0x45a6f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a6f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a6fc:
    // 0x45a6fc: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x45a6fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a700:
    // 0x45a700: 0xe6000158  swc1        $f0, 0x158($s0)
    ctx->pc = 0x45a700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_45a704:
    // 0x45a704: 0x8e250134  lw          $a1, 0x134($s1)
    ctx->pc = 0x45a704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_45a708:
    // 0x45a708: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_45a70c:
    if (ctx->pc == 0x45A70Cu) {
        ctx->pc = 0x45A710u;
        goto label_45a710;
    }
    ctx->pc = 0x45A708u;
    {
        const bool branch_taken_0x45a708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a708) {
            ctx->pc = 0x45A718u;
            goto label_45a718;
        }
    }
    ctx->pc = 0x45A710u;
label_45a710:
    // 0x45a710: 0xc1168f4  jal         func_45A3D0
label_45a714:
    if (ctx->pc == 0x45A714u) {
        ctx->pc = 0x45A714u;
            // 0x45a714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A718u;
        goto label_45a718;
    }
    ctx->pc = 0x45A710u;
    SET_GPR_U32(ctx, 31, 0x45A718u);
    ctx->pc = 0x45A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A710u;
            // 0x45a714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45A3D0u;
    goto label_45a3d0;
    ctx->pc = 0x45A718u;
label_45a718:
    // 0x45a718: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x45a718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_45a71c:
    // 0x45a71c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x45a71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_45a720:
    // 0x45a720: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_45a724:
    if (ctx->pc == 0x45A724u) {
        ctx->pc = 0x45A724u;
            // 0x45a724: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x45A728u;
        goto label_45a728;
    }
    ctx->pc = 0x45A720u;
    {
        const bool branch_taken_0x45a720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A720u;
            // 0x45a724: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a720) {
            ctx->pc = 0x45A704u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45a704;
        }
    }
    ctx->pc = 0x45A728u;
label_45a728:
    // 0x45a728: 0xc0d1c10  jal         func_347040
label_45a72c:
    if (ctx->pc == 0x45A72Cu) {
        ctx->pc = 0x45A72Cu;
            // 0x45a72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A730u;
        goto label_45a730;
    }
    ctx->pc = 0x45A728u;
    SET_GPR_U32(ctx, 31, 0x45A730u);
    ctx->pc = 0x45A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A728u;
            // 0x45a72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A730u; }
        if (ctx->pc != 0x45A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A730u; }
        if (ctx->pc != 0x45A730u) { return; }
    }
    ctx->pc = 0x45A730u;
label_45a730:
    // 0x45a730: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x45a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_45a734:
    // 0x45a734: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45a734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a738:
    // 0x45a738: 0xc122d2c  jal         func_48B4B0
label_45a73c:
    if (ctx->pc == 0x45A73Cu) {
        ctx->pc = 0x45A73Cu;
            // 0x45a73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A740u;
        goto label_45a740;
    }
    ctx->pc = 0x45A738u;
    SET_GPR_U32(ctx, 31, 0x45A740u);
    ctx->pc = 0x45A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A738u;
            // 0x45a73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A740u; }
        if (ctx->pc != 0x45A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A740u; }
        if (ctx->pc != 0x45A740u) { return; }
    }
    ctx->pc = 0x45A740u;
label_45a740:
    // 0x45a740: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x45a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a744:
    // 0x45a744: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x45a744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45a748:
    // 0x45a748: 0x0  nop
    ctx->pc = 0x45a748u;
    // NOP
label_45a74c:
    // 0x45a74c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x45a74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a750:
    // 0x45a750: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_45a754:
    if (ctx->pc == 0x45A754u) {
        ctx->pc = 0x45A758u;
        goto label_45a758;
    }
    ctx->pc = 0x45A750u;
    {
        const bool branch_taken_0x45a750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45a750) {
            ctx->pc = 0x45A798u;
            goto label_45a798;
        }
    }
    ctx->pc = 0x45A758u;
label_45a758:
    // 0x45a758: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x45a758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_45a75c:
    // 0x45a75c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x45a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_45a760:
    // 0x45a760: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x45a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_45a764:
    // 0x45a764: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x45a764u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_45a768:
    // 0x45a768: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x45a768u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_45a76c:
    // 0x45a76c: 0xc0b6df0  jal         func_2DB7C0
label_45a770:
    if (ctx->pc == 0x45A770u) {
        ctx->pc = 0x45A770u;
            // 0x45a770: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x45A774u;
        goto label_45a774;
    }
    ctx->pc = 0x45A76Cu;
    SET_GPR_U32(ctx, 31, 0x45A774u);
    ctx->pc = 0x45A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A76Cu;
            // 0x45a770: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A774u; }
        if (ctx->pc != 0x45A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A774u; }
        if (ctx->pc != 0x45A774u) { return; }
    }
    ctx->pc = 0x45A774u;
label_45a774:
    // 0x45a774: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45a778:
    // 0x45a778: 0xc0dc3f4  jal         func_370FD0
label_45a77c:
    if (ctx->pc == 0x45A77Cu) {
        ctx->pc = 0x45A77Cu;
            // 0x45a77c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x45A780u;
        goto label_45a780;
    }
    ctx->pc = 0x45A778u;
    SET_GPR_U32(ctx, 31, 0x45A780u);
    ctx->pc = 0x45A77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A778u;
            // 0x45a77c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A780u; }
        if (ctx->pc != 0x45A780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A780u; }
        if (ctx->pc != 0x45A780u) { return; }
    }
    ctx->pc = 0x45A780u;
label_45a780:
    // 0x45a780: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x45a780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_45a784:
    // 0x45a784: 0xc122c5c  jal         func_48B170
label_45a788:
    if (ctx->pc == 0x45A788u) {
        ctx->pc = 0x45A788u;
            // 0x45a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A78Cu;
        goto label_45a78c;
    }
    ctx->pc = 0x45A784u;
    SET_GPR_U32(ctx, 31, 0x45A78Cu);
    ctx->pc = 0x45A788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A784u;
            // 0x45a788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A78Cu; }
        if (ctx->pc != 0x45A78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A78Cu; }
        if (ctx->pc != 0x45A78Cu) { return; }
    }
    ctx->pc = 0x45A78Cu;
label_45a78c:
    // 0x45a78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a790:
    // 0x45a790: 0xc116afc  jal         func_45ABF0
label_45a794:
    if (ctx->pc == 0x45A794u) {
        ctx->pc = 0x45A794u;
            // 0x45a794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45A798u;
        goto label_45a798;
    }
    ctx->pc = 0x45A790u;
    SET_GPR_U32(ctx, 31, 0x45A798u);
    ctx->pc = 0x45A794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A790u;
            // 0x45a794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABF0u;
    if (runtime->hasFunction(0x45ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A798u; }
        if (ctx->pc != 0x45A798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABF0_0x45abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A798u; }
        if (ctx->pc != 0x45A798u) { return; }
    }
    ctx->pc = 0x45A798u;
label_45a798:
    // 0x45a798: 0xc0775b8  jal         func_1DD6E0
label_45a79c:
    if (ctx->pc == 0x45A79Cu) {
        ctx->pc = 0x45A7A0u;
        goto label_45a7a0;
    }
    ctx->pc = 0x45A798u;
    SET_GPR_U32(ctx, 31, 0x45A7A0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7A0u; }
        if (ctx->pc != 0x45A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7A0u; }
        if (ctx->pc != 0x45A7A0u) { return; }
    }
    ctx->pc = 0x45A7A0u;
label_45a7a0:
    // 0x45a7a0: 0xc0775b4  jal         func_1DD6D0
label_45a7a4:
    if (ctx->pc == 0x45A7A4u) {
        ctx->pc = 0x45A7A4u;
            // 0x45a7a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A7A8u;
        goto label_45a7a8;
    }
    ctx->pc = 0x45A7A0u;
    SET_GPR_U32(ctx, 31, 0x45A7A8u);
    ctx->pc = 0x45A7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A7A0u;
            // 0x45a7a4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7A8u; }
        if (ctx->pc != 0x45A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7A8u; }
        if (ctx->pc != 0x45A7A8u) { return; }
    }
    ctx->pc = 0x45A7A8u;
label_45a7a8:
    // 0x45a7a8: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x45a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a7ac:
    // 0x45a7ac: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x45a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_45a7b0:
    // 0x45a7b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45a7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a7b4:
    // 0x45a7b4: 0x0  nop
    ctx->pc = 0x45a7b4u;
    // NOP
label_45a7b8:
    // 0x45a7b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x45a7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_45a7bc:
    // 0x45a7bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x45a7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a7c0:
    // 0x45a7c0: 0x450100ec  bc1t        . + 4 + (0xEC << 2)
label_45a7c4:
    if (ctx->pc == 0x45A7C4u) {
        ctx->pc = 0x45A7C4u;
            // 0x45a7c4: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->pc = 0x45A7C8u;
        goto label_45a7c8;
    }
    ctx->pc = 0x45A7C0u;
    {
        const bool branch_taken_0x45a7c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x45A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A7C0u;
            // 0x45a7c4: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a7c0) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A7C8u;
label_45a7c8:
    // 0x45a7c8: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x45a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_45a7cc:
    // 0x45a7cc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x45a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_45a7d0:
    // 0x45a7d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x45a7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_45a7d4:
    // 0x45a7d4: 0x102000e7  beqz        $at, . + 4 + (0xE7 << 2)
label_45a7d8:
    if (ctx->pc == 0x45A7D8u) {
        ctx->pc = 0x45A7DCu;
        goto label_45a7dc;
    }
    ctx->pc = 0x45A7D4u;
    {
        const bool branch_taken_0x45a7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a7d4) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A7DCu;
label_45a7dc:
    // 0x45a7dc: 0xc0d1c10  jal         func_347040
label_45a7e0:
    if (ctx->pc == 0x45A7E0u) {
        ctx->pc = 0x45A7E0u;
            // 0x45a7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A7E4u;
        goto label_45a7e4;
    }
    ctx->pc = 0x45A7DCu;
    SET_GPR_U32(ctx, 31, 0x45A7E4u);
    ctx->pc = 0x45A7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A7DCu;
            // 0x45a7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7E4u; }
        if (ctx->pc != 0x45A7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A7E4u; }
        if (ctx->pc != 0x45A7E4u) { return; }
    }
    ctx->pc = 0x45A7E4u;
label_45a7e4:
    // 0x45a7e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a7e8:
    // 0x45a7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a7ec:
    // 0x45a7ec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x45a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a7f0:
    // 0x45a7f0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x45a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a7f4:
    // 0x45a7f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x45a7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_45a7f8:
    // 0x45a7f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x45a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a7fc:
    // 0x45a7fc: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x45a7fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_45a800:
    // 0x45a800: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x45a800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_45a804:
    // 0x45a804: 0xc0adc64  jal         func_2B7190
label_45a808:
    if (ctx->pc == 0x45A808u) {
        ctx->pc = 0x45A808u;
            // 0x45a808: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x45A80Cu;
        goto label_45a80c;
    }
    ctx->pc = 0x45A804u;
    SET_GPR_U32(ctx, 31, 0x45A80Cu);
    ctx->pc = 0x45A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A804u;
            // 0x45a808: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A80Cu; }
        if (ctx->pc != 0x45A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A80Cu; }
        if (ctx->pc != 0x45A80Cu) { return; }
    }
    ctx->pc = 0x45A80Cu;
label_45a80c:
    // 0x45a80c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x45a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a810:
    // 0x45a810: 0x3c033bb4  lui         $v1, 0x3BB4
    ctx->pc = 0x45a810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15284 << 16));
label_45a814:
    // 0x45a814: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x45a814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_45a818:
    // 0x45a818: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x45a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45a81c:
    // 0x45a81c: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x45a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a820:
    // 0x45a820: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x45a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_45a824:
    // 0x45a824: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x45a824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_45a828:
    // 0x45a828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a82c:
    // 0x45a82c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x45a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a830:
    // 0x45a830: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x45a830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_45a834:
    // 0x45a834: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x45a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a838:
    // 0x45a838: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x45a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_45a83c:
    // 0x45a83c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x45a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a840:
    // 0x45a840: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x45a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45a844:
    // 0x45a844: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x45a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_45a848:
    // 0x45a848: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x45a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_45a84c:
    // 0x45a84c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45a84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a850:
    // 0x45a850: 0x0  nop
    ctx->pc = 0x45a850u;
    // NOP
label_45a854:
    // 0x45a854: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x45a854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_45a858:
    // 0x45a858: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x45a858u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
label_45a85c:
    // 0x45a85c: 0xc0bafb8  jal         func_2EBEE0
label_45a860:
    if (ctx->pc == 0x45A860u) {
        ctx->pc = 0x45A860u;
            // 0x45a860: 0x46020c1c  madd.s      $f16, $f1, $f2 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x45A864u;
        goto label_45a864;
    }
    ctx->pc = 0x45A85Cu;
    SET_GPR_U32(ctx, 31, 0x45A864u);
    ctx->pc = 0x45A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A85Cu;
            // 0x45a860: 0x46020c1c  madd.s      $f16, $f1, $f2 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A864u; }
        if (ctx->pc != 0x45A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A864u; }
        if (ctx->pc != 0x45A864u) { return; }
    }
    ctx->pc = 0x45A864u;
label_45a864:
    // 0x45a864: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_45a868:
    if (ctx->pc == 0x45A868u) {
        ctx->pc = 0x45A86Cu;
        goto label_45a86c;
    }
    ctx->pc = 0x45A864u;
    {
        const bool branch_taken_0x45a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a864) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A86Cu;
label_45a86c:
    // 0x45a86c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45a86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45a870:
    // 0x45a870: 0x0  nop
    ctx->pc = 0x45a870u;
    // NOP
label_45a874:
    // 0x45a874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x45a874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45a878:
    // 0x45a878: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_45a87c:
    if (ctx->pc == 0x45A87Cu) {
        ctx->pc = 0x45A87Cu;
            // 0x45a87c: 0x8e020130  lw          $v0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x45A880u;
        goto label_45a880;
    }
    ctx->pc = 0x45A878u;
    {
        const bool branch_taken_0x45a878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45a878) {
            ctx->pc = 0x45A87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A878u;
            // 0x45a87c: 0x8e020130  lw          $v0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A8A0u;
            goto label_45a8a0;
        }
    }
    ctx->pc = 0x45A880u;
label_45a880:
    // 0x45a880: 0xc0775b8  jal         func_1DD6E0
label_45a884:
    if (ctx->pc == 0x45A884u) {
        ctx->pc = 0x45A888u;
        goto label_45a888;
    }
    ctx->pc = 0x45A880u;
    SET_GPR_U32(ctx, 31, 0x45A888u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A888u; }
        if (ctx->pc != 0x45A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A888u; }
        if (ctx->pc != 0x45A888u) { return; }
    }
    ctx->pc = 0x45A888u;
label_45a888:
    // 0x45a888: 0xc0775b4  jal         func_1DD6D0
label_45a88c:
    if (ctx->pc == 0x45A88Cu) {
        ctx->pc = 0x45A88Cu;
            // 0x45a88c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A890u;
        goto label_45a890;
    }
    ctx->pc = 0x45A888u;
    SET_GPR_U32(ctx, 31, 0x45A890u);
    ctx->pc = 0x45A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A888u;
            // 0x45a88c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A890u; }
        if (ctx->pc != 0x45A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A890u; }
        if (ctx->pc != 0x45A890u) { return; }
    }
    ctx->pc = 0x45A890u;
label_45a890:
    // 0x45a890: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x45a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a894:
    // 0x45a894: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45a894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_45a898:
    // 0x45a898: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_45a89c:
    if (ctx->pc == 0x45A89Cu) {
        ctx->pc = 0x45A89Cu;
            // 0x45a89c: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x45A8A0u;
        goto label_45a8a0;
    }
    ctx->pc = 0x45A898u;
    {
        const bool branch_taken_0x45a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A898u;
            // 0x45a89c: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a898) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A8A0u;
label_45a8a0:
    // 0x45a8a0: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_45a8a4:
    if (ctx->pc == 0x45A8A4u) {
        ctx->pc = 0x45A8A8u;
        goto label_45a8a8;
    }
    ctx->pc = 0x45A8A0u;
    {
        const bool branch_taken_0x45a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a8a0) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A8A8u;
label_45a8a8:
    // 0x45a8a8: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x45a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a8ac:
    // 0x45a8ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45a8b0:
    // 0x45a8b0: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x45a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_45a8b4:
    // 0x45a8b4: 0xc0b6de4  jal         func_2DB790
label_45a8b8:
    if (ctx->pc == 0x45A8B8u) {
        ctx->pc = 0x45A8B8u;
            // 0x45a8b8: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x45A8BCu;
        goto label_45a8bc;
    }
    ctx->pc = 0x45A8B4u;
    SET_GPR_U32(ctx, 31, 0x45A8BCu);
    ctx->pc = 0x45A8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8B4u;
            // 0x45a8b8: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8BCu; }
        if (ctx->pc != 0x45A8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8BCu; }
        if (ctx->pc != 0x45A8BCu) { return; }
    }
    ctx->pc = 0x45A8BCu;
label_45a8bc:
    // 0x45a8bc: 0xc0b6e84  jal         func_2DBA10
label_45a8c0:
    if (ctx->pc == 0x45A8C0u) {
        ctx->pc = 0x45A8C4u;
        goto label_45a8c4;
    }
    ctx->pc = 0x45A8BCu;
    SET_GPR_U32(ctx, 31, 0x45A8C4u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8C4u; }
        if (ctx->pc != 0x45A8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8C4u; }
        if (ctx->pc != 0x45A8C4u) { return; }
    }
    ctx->pc = 0x45A8C4u;
label_45a8c4:
    // 0x45a8c4: 0xc0b6e60  jal         func_2DB980
label_45a8c8:
    if (ctx->pc == 0x45A8C8u) {
        ctx->pc = 0x45A8C8u;
            // 0x45a8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A8CCu;
        goto label_45a8cc;
    }
    ctx->pc = 0x45A8C4u;
    SET_GPR_U32(ctx, 31, 0x45A8CCu);
    ctx->pc = 0x45A8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8C4u;
            // 0x45a8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8CCu; }
        if (ctx->pc != 0x45A8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8CCu; }
        if (ctx->pc != 0x45A8CCu) { return; }
    }
    ctx->pc = 0x45A8CCu;
label_45a8cc:
    // 0x45a8cc: 0xc0b6e38  jal         func_2DB8E0
label_45a8d0:
    if (ctx->pc == 0x45A8D0u) {
        ctx->pc = 0x45A8D0u;
            // 0x45a8d0: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x45A8D4u;
        goto label_45a8d4;
    }
    ctx->pc = 0x45A8CCu;
    SET_GPR_U32(ctx, 31, 0x45A8D4u);
    ctx->pc = 0x45A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8CCu;
            // 0x45a8d0: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8D4u; }
        if (ctx->pc != 0x45A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8D4u; }
        if (ctx->pc != 0x45A8D4u) { return; }
    }
    ctx->pc = 0x45A8D4u;
label_45a8d4:
    // 0x45a8d4: 0xc0775b8  jal         func_1DD6E0
label_45a8d8:
    if (ctx->pc == 0x45A8D8u) {
        ctx->pc = 0x45A8D8u;
            // 0x45a8d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x45A8DCu;
        goto label_45a8dc;
    }
    ctx->pc = 0x45A8D4u;
    SET_GPR_U32(ctx, 31, 0x45A8DCu);
    ctx->pc = 0x45A8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8D4u;
            // 0x45a8d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8DCu; }
        if (ctx->pc != 0x45A8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8DCu; }
        if (ctx->pc != 0x45A8DCu) { return; }
    }
    ctx->pc = 0x45A8DCu;
label_45a8dc:
    // 0x45a8dc: 0xc0775b4  jal         func_1DD6D0
label_45a8e0:
    if (ctx->pc == 0x45A8E0u) {
        ctx->pc = 0x45A8E0u;
            // 0x45a8e0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A8E4u;
        goto label_45a8e4;
    }
    ctx->pc = 0x45A8DCu;
    SET_GPR_U32(ctx, 31, 0x45A8E4u);
    ctx->pc = 0x45A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8DCu;
            // 0x45a8e0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8E4u; }
        if (ctx->pc != 0x45A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8E4u; }
        if (ctx->pc != 0x45A8E4u) { return; }
    }
    ctx->pc = 0x45A8E4u;
label_45a8e4:
    // 0x45a8e4: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x45a8e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_45a8e8:
    // 0x45a8e8: 0xc0b6e28  jal         func_2DB8A0
label_45a8ec:
    if (ctx->pc == 0x45A8ECu) {
        ctx->pc = 0x45A8ECu;
            // 0x45a8ec: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A8F0u;
        goto label_45a8f0;
    }
    ctx->pc = 0x45A8E8u;
    SET_GPR_U32(ctx, 31, 0x45A8F0u);
    ctx->pc = 0x45A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8E8u;
            // 0x45a8ec: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8F0u; }
        if (ctx->pc != 0x45A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A8F0u; }
        if (ctx->pc != 0x45A8F0u) { return; }
    }
    ctx->pc = 0x45A8F0u;
label_45a8f0:
    // 0x45a8f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45a8f4:
    // 0x45a8f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45a8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45a8f8:
    // 0x45a8f8: 0xc0b6e28  jal         func_2DB8A0
label_45a8fc:
    if (ctx->pc == 0x45A8FCu) {
        ctx->pc = 0x45A8FCu;
            // 0x45a8fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A900u;
        goto label_45a900;
    }
    ctx->pc = 0x45A8F8u;
    SET_GPR_U32(ctx, 31, 0x45A900u);
    ctx->pc = 0x45A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A8F8u;
            // 0x45a8fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A900u; }
        if (ctx->pc != 0x45A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A900u; }
        if (ctx->pc != 0x45A900u) { return; }
    }
    ctx->pc = 0x45A900u;
label_45a900:
    // 0x45a900: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45a904:
    // 0x45a904: 0xc0dc3f4  jal         func_370FD0
label_45a908:
    if (ctx->pc == 0x45A908u) {
        ctx->pc = 0x45A908u;
            // 0x45a908: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45A90Cu;
        goto label_45a90c;
    }
    ctx->pc = 0x45A904u;
    SET_GPR_U32(ctx, 31, 0x45A90Cu);
    ctx->pc = 0x45A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A904u;
            // 0x45a908: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A90Cu; }
        if (ctx->pc != 0x45A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A90Cu; }
        if (ctx->pc != 0x45A90Cu) { return; }
    }
    ctx->pc = 0x45A90Cu;
label_45a90c:
    // 0x45a90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a910:
    // 0x45a910: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45a910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45a914:
    // 0x45a914: 0xc116afc  jal         func_45ABF0
label_45a918:
    if (ctx->pc == 0x45A918u) {
        ctx->pc = 0x45A918u;
            // 0x45a918: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->pc = 0x45A91Cu;
        goto label_45a91c;
    }
    ctx->pc = 0x45A914u;
    SET_GPR_U32(ctx, 31, 0x45A91Cu);
    ctx->pc = 0x45A918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A914u;
            // 0x45a918: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABF0u;
    if (runtime->hasFunction(0x45ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A91Cu; }
        if (ctx->pc != 0x45A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABF0_0x45abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A91Cu; }
        if (ctx->pc != 0x45A91Cu) { return; }
    }
    ctx->pc = 0x45A91Cu;
label_45a91c:
    // 0x45a91c: 0x10000095  b           . + 4 + (0x95 << 2)
label_45a920:
    if (ctx->pc == 0x45A920u) {
        ctx->pc = 0x45A924u;
        goto label_45a924;
    }
    ctx->pc = 0x45A91Cu;
    {
        const bool branch_taken_0x45a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a91c) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45A924u;
label_45a924:
    // 0x45a924: 0xc088b74  jal         func_222DD0
label_45a928:
    if (ctx->pc == 0x45A928u) {
        ctx->pc = 0x45A92Cu;
        goto label_45a92c;
    }
    ctx->pc = 0x45A924u;
    SET_GPR_U32(ctx, 31, 0x45A92Cu);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A92Cu; }
        if (ctx->pc != 0x45A92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A92Cu; }
        if (ctx->pc != 0x45A92Cu) { return; }
    }
    ctx->pc = 0x45A92Cu;
label_45a92c:
    // 0x45a92c: 0xc0775b8  jal         func_1DD6E0
label_45a930:
    if (ctx->pc == 0x45A930u) {
        ctx->pc = 0x45A934u;
        goto label_45a934;
    }
    ctx->pc = 0x45A92Cu;
    SET_GPR_U32(ctx, 31, 0x45A934u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A934u; }
        if (ctx->pc != 0x45A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A934u; }
        if (ctx->pc != 0x45A934u) { return; }
    }
    ctx->pc = 0x45A934u;
label_45a934:
    // 0x45a934: 0xc0775b4  jal         func_1DD6D0
label_45a938:
    if (ctx->pc == 0x45A938u) {
        ctx->pc = 0x45A938u;
            // 0x45a938: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A93Cu;
        goto label_45a93c;
    }
    ctx->pc = 0x45A934u;
    SET_GPR_U32(ctx, 31, 0x45A93Cu);
    ctx->pc = 0x45A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A934u;
            // 0x45a938: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A93Cu; }
        if (ctx->pc != 0x45A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A93Cu; }
        if (ctx->pc != 0x45A93Cu) { return; }
    }
    ctx->pc = 0x45A93Cu;
label_45a93c:
    // 0x45a93c: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x45a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a940:
    // 0x45a940: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45a940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_45a944:
    // 0x45a944: 0xc0775b8  jal         func_1DD6E0
label_45a948:
    if (ctx->pc == 0x45A948u) {
        ctx->pc = 0x45A948u;
            // 0x45a948: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x45A94Cu;
        goto label_45a94c;
    }
    ctx->pc = 0x45A944u;
    SET_GPR_U32(ctx, 31, 0x45A94Cu);
    ctx->pc = 0x45A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A944u;
            // 0x45a948: 0xe60000fc  swc1        $f0, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A94Cu; }
        if (ctx->pc != 0x45A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A94Cu; }
        if (ctx->pc != 0x45A94Cu) { return; }
    }
    ctx->pc = 0x45A94Cu;
label_45a94c:
    // 0x45a94c: 0xc0775b4  jal         func_1DD6D0
label_45a950:
    if (ctx->pc == 0x45A950u) {
        ctx->pc = 0x45A950u;
            // 0x45a950: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A954u;
        goto label_45a954;
    }
    ctx->pc = 0x45A94Cu;
    SET_GPR_U32(ctx, 31, 0x45A954u);
    ctx->pc = 0x45A950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A94Cu;
            // 0x45a950: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A954u; }
        if (ctx->pc != 0x45A954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A954u; }
        if (ctx->pc != 0x45A954u) { return; }
    }
    ctx->pc = 0x45A954u;
label_45a954:
    // 0x45a954: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x45a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a958:
    // 0x45a958: 0xc60300f0  lwc1        $f3, 0xF0($s0)
    ctx->pc = 0x45a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a95c:
    // 0x45a95c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a960:
    // 0x45a960: 0x0  nop
    ctx->pc = 0x45a960u;
    // NOP
label_45a964:
    // 0x45a964: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a964u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a968:
    // 0x45a968: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x45a968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a96c:
    // 0x45a96c: 0xc0775b8  jal         func_1DD6E0
label_45a970:
    if (ctx->pc == 0x45A970u) {
        ctx->pc = 0x45A970u;
            // 0x45a970: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x45A974u;
        goto label_45a974;
    }
    ctx->pc = 0x45A96Cu;
    SET_GPR_U32(ctx, 31, 0x45A974u);
    ctx->pc = 0x45A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A96Cu;
            // 0x45a970: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A974u; }
        if (ctx->pc != 0x45A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A974u; }
        if (ctx->pc != 0x45A974u) { return; }
    }
    ctx->pc = 0x45A974u;
label_45a974:
    // 0x45a974: 0xc0775b4  jal         func_1DD6D0
label_45a978:
    if (ctx->pc == 0x45A978u) {
        ctx->pc = 0x45A978u;
            // 0x45a978: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A97Cu;
        goto label_45a97c;
    }
    ctx->pc = 0x45A974u;
    SET_GPR_U32(ctx, 31, 0x45A97Cu);
    ctx->pc = 0x45A978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A974u;
            // 0x45a978: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A97Cu; }
        if (ctx->pc != 0x45A97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A97Cu; }
        if (ctx->pc != 0x45A97Cu) { return; }
    }
    ctx->pc = 0x45A97Cu;
label_45a97c:
    // 0x45a97c: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x45a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a980:
    // 0x45a980: 0xc603015c  lwc1        $f3, 0x15C($s0)
    ctx->pc = 0x45a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a984:
    // 0x45a984: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a988:
    // 0x45a988: 0x0  nop
    ctx->pc = 0x45a988u;
    // NOP
label_45a98c:
    // 0x45a98c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a98cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a990:
    // 0x45a990: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x45a990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a994:
    // 0x45a994: 0xc0775b8  jal         func_1DD6E0
label_45a998:
    if (ctx->pc == 0x45A998u) {
        ctx->pc = 0x45A998u;
            // 0x45a998: 0xe6000154  swc1        $f0, 0x154($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
        ctx->pc = 0x45A99Cu;
        goto label_45a99c;
    }
    ctx->pc = 0x45A994u;
    SET_GPR_U32(ctx, 31, 0x45A99Cu);
    ctx->pc = 0x45A998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A994u;
            // 0x45a998: 0xe6000154  swc1        $f0, 0x154($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A99Cu; }
        if (ctx->pc != 0x45A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A99Cu; }
        if (ctx->pc != 0x45A99Cu) { return; }
    }
    ctx->pc = 0x45A99Cu;
label_45a99c:
    // 0x45a99c: 0xc0775b4  jal         func_1DD6D0
label_45a9a0:
    if (ctx->pc == 0x45A9A0u) {
        ctx->pc = 0x45A9A0u;
            // 0x45a9a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45A9A4u;
        goto label_45a9a4;
    }
    ctx->pc = 0x45A99Cu;
    SET_GPR_U32(ctx, 31, 0x45A9A4u);
    ctx->pc = 0x45A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A99Cu;
            // 0x45a9a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9A4u; }
        if (ctx->pc != 0x45A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9A4u; }
        if (ctx->pc != 0x45A9A4u) { return; }
    }
    ctx->pc = 0x45A9A4u;
label_45a9a4:
    // 0x45a9a4: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x45a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a9a8:
    // 0x45a9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a9ac:
    // 0x45a9ac: 0xc6030160  lwc1        $f3, 0x160($s0)
    ctx->pc = 0x45a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a9b0:
    // 0x45a9b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45a9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45a9b4:
    // 0x45a9b4: 0x0  nop
    ctx->pc = 0x45a9b4u;
    // NOP
label_45a9b8:
    // 0x45a9b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45a9b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_45a9bc:
    // 0x45a9bc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x45a9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45a9c0:
    // 0x45a9c0: 0xc0d1c10  jal         func_347040
label_45a9c4:
    if (ctx->pc == 0x45A9C4u) {
        ctx->pc = 0x45A9C4u;
            // 0x45a9c4: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->pc = 0x45A9C8u;
        goto label_45a9c8;
    }
    ctx->pc = 0x45A9C0u;
    SET_GPR_U32(ctx, 31, 0x45A9C8u);
    ctx->pc = 0x45A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A9C0u;
            // 0x45a9c4: 0xe6000158  swc1        $f0, 0x158($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9C8u; }
        if (ctx->pc != 0x45A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9C8u; }
        if (ctx->pc != 0x45A9C8u) { return; }
    }
    ctx->pc = 0x45A9C8u;
label_45a9c8:
    // 0x45a9c8: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x45a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_45a9cc:
    // 0x45a9cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45a9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a9d0:
    // 0x45a9d0: 0xc122d2c  jal         func_48B4B0
label_45a9d4:
    if (ctx->pc == 0x45A9D4u) {
        ctx->pc = 0x45A9D4u;
            // 0x45a9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A9D8u;
        goto label_45a9d8;
    }
    ctx->pc = 0x45A9D0u;
    SET_GPR_U32(ctx, 31, 0x45A9D8u);
    ctx->pc = 0x45A9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A9D0u;
            // 0x45a9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9D8u; }
        if (ctx->pc != 0x45A9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9D8u; }
        if (ctx->pc != 0x45A9D8u) { return; }
    }
    ctx->pc = 0x45A9D8u;
label_45a9d8:
    // 0x45a9d8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x45a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_45a9dc:
    // 0x45a9dc: 0x5840001e  blezl       $v0, . + 4 + (0x1E << 2)
label_45a9e0:
    if (ctx->pc == 0x45A9E0u) {
        ctx->pc = 0x45A9E0u;
            // 0x45a9e0: 0xc60000fc  lwc1        $f0, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x45A9E4u;
        goto label_45a9e4;
    }
    ctx->pc = 0x45A9DCu;
    {
        const bool branch_taken_0x45a9dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45a9dc) {
            ctx->pc = 0x45A9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A9DCu;
            // 0x45a9e0: 0xc60000fc  lwc1        $f0, 0xFC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45AA58u;
            goto label_45aa58;
        }
    }
    ctx->pc = 0x45A9E4u;
label_45a9e4:
    // 0x45a9e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x45a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45a9e8:
    // 0x45a9e8: 0xc0b6de4  jal         func_2DB790
label_45a9ec:
    if (ctx->pc == 0x45A9ECu) {
        ctx->pc = 0x45A9ECu;
            // 0x45a9ec: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x45A9F0u;
        goto label_45a9f0;
    }
    ctx->pc = 0x45A9E8u;
    SET_GPR_U32(ctx, 31, 0x45A9F0u);
    ctx->pc = 0x45A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A9E8u;
            // 0x45a9ec: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9F0u; }
        if (ctx->pc != 0x45A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9F0u; }
        if (ctx->pc != 0x45A9F0u) { return; }
    }
    ctx->pc = 0x45A9F0u;
label_45a9f0:
    // 0x45a9f0: 0xc0b6e84  jal         func_2DBA10
label_45a9f4:
    if (ctx->pc == 0x45A9F4u) {
        ctx->pc = 0x45A9F8u;
        goto label_45a9f8;
    }
    ctx->pc = 0x45A9F0u;
    SET_GPR_U32(ctx, 31, 0x45A9F8u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9F8u; }
        if (ctx->pc != 0x45A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A9F8u; }
        if (ctx->pc != 0x45A9F8u) { return; }
    }
    ctx->pc = 0x45A9F8u;
label_45a9f8:
    // 0x45a9f8: 0xc0b6e60  jal         func_2DB980
label_45a9fc:
    if (ctx->pc == 0x45A9FCu) {
        ctx->pc = 0x45A9FCu;
            // 0x45a9fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AA00u;
        goto label_45aa00;
    }
    ctx->pc = 0x45A9F8u;
    SET_GPR_U32(ctx, 31, 0x45AA00u);
    ctx->pc = 0x45A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A9F8u;
            // 0x45a9fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA00u; }
        if (ctx->pc != 0x45AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA00u; }
        if (ctx->pc != 0x45AA00u) { return; }
    }
    ctx->pc = 0x45AA00u;
label_45aa00:
    // 0x45aa00: 0xc0b6e38  jal         func_2DB8E0
label_45aa04:
    if (ctx->pc == 0x45AA04u) {
        ctx->pc = 0x45AA04u;
            // 0x45aa04: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x45AA08u;
        goto label_45aa08;
    }
    ctx->pc = 0x45AA00u;
    SET_GPR_U32(ctx, 31, 0x45AA08u);
    ctx->pc = 0x45AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA00u;
            // 0x45aa04: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA08u; }
        if (ctx->pc != 0x45AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA08u; }
        if (ctx->pc != 0x45AA08u) { return; }
    }
    ctx->pc = 0x45AA08u;
label_45aa08:
    // 0x45aa08: 0xc0775b8  jal         func_1DD6E0
label_45aa0c:
    if (ctx->pc == 0x45AA0Cu) {
        ctx->pc = 0x45AA0Cu;
            // 0x45aa0c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x45AA10u;
        goto label_45aa10;
    }
    ctx->pc = 0x45AA08u;
    SET_GPR_U32(ctx, 31, 0x45AA10u);
    ctx->pc = 0x45AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA08u;
            // 0x45aa0c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA10u; }
        if (ctx->pc != 0x45AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA10u; }
        if (ctx->pc != 0x45AA10u) { return; }
    }
    ctx->pc = 0x45AA10u;
label_45aa10:
    // 0x45aa10: 0xc0775b4  jal         func_1DD6D0
label_45aa14:
    if (ctx->pc == 0x45AA14u) {
        ctx->pc = 0x45AA14u;
            // 0x45aa14: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45AA18u;
        goto label_45aa18;
    }
    ctx->pc = 0x45AA10u;
    SET_GPR_U32(ctx, 31, 0x45AA18u);
    ctx->pc = 0x45AA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA10u;
            // 0x45aa14: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA18u; }
        if (ctx->pc != 0x45AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA18u; }
        if (ctx->pc != 0x45AA18u) { return; }
    }
    ctx->pc = 0x45AA18u;
label_45aa18:
    // 0x45aa18: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x45aa18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_45aa1c:
    // 0x45aa1c: 0xc0b6e28  jal         func_2DB8A0
label_45aa20:
    if (ctx->pc == 0x45AA20u) {
        ctx->pc = 0x45AA20u;
            // 0x45aa20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45AA24u;
        goto label_45aa24;
    }
    ctx->pc = 0x45AA1Cu;
    SET_GPR_U32(ctx, 31, 0x45AA24u);
    ctx->pc = 0x45AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA1Cu;
            // 0x45aa20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA24u; }
        if (ctx->pc != 0x45AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA24u; }
        if (ctx->pc != 0x45AA24u) { return; }
    }
    ctx->pc = 0x45AA24u;
label_45aa24:
    // 0x45aa24: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45aa28:
    // 0x45aa28: 0xc0dc3f4  jal         func_370FD0
label_45aa2c:
    if (ctx->pc == 0x45AA2Cu) {
        ctx->pc = 0x45AA2Cu;
            // 0x45aa2c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45AA30u;
        goto label_45aa30;
    }
    ctx->pc = 0x45AA28u;
    SET_GPR_U32(ctx, 31, 0x45AA30u);
    ctx->pc = 0x45AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA28u;
            // 0x45aa2c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA30u; }
        if (ctx->pc != 0x45AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA30u; }
        if (ctx->pc != 0x45AA30u) { return; }
    }
    ctx->pc = 0x45AA30u;
label_45aa30:
    // 0x45aa30: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x45aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45aa34:
    // 0x45aa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45aa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45aa38:
    // 0x45aa38: 0xc60000fc  lwc1        $f0, 0xFC($s0)
    ctx->pc = 0x45aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45aa3c:
    // 0x45aa3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45aa40:
    // 0x45aa40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45aa40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_45aa44:
    // 0x45aa44: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x45aa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_45aa48:
    // 0x45aa48: 0xc116afc  jal         func_45ABF0
label_45aa4c:
    if (ctx->pc == 0x45AA4Cu) {
        ctx->pc = 0x45AA4Cu;
            // 0x45aa4c: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->pc = 0x45AA50u;
        goto label_45aa50;
    }
    ctx->pc = 0x45AA48u;
    SET_GPR_U32(ctx, 31, 0x45AA50u);
    ctx->pc = 0x45AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA48u;
            // 0x45aa4c: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABF0u;
    if (runtime->hasFunction(0x45ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA50u; }
        if (ctx->pc != 0x45AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABF0_0x45abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA50u; }
        if (ctx->pc != 0x45AA50u) { return; }
    }
    ctx->pc = 0x45AA50u;
label_45aa50:
    // 0x45aa50: 0x10000048  b           . + 4 + (0x48 << 2)
label_45aa54:
    if (ctx->pc == 0x45AA54u) {
        ctx->pc = 0x45AA58u;
        goto label_45aa58;
    }
    ctx->pc = 0x45AA50u;
    {
        const bool branch_taken_0x45aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aa50) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45AA58u;
label_45aa58:
    // 0x45aa58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x45aa58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45aa5c:
    // 0x45aa5c: 0x0  nop
    ctx->pc = 0x45aa5cu;
    // NOP
label_45aa60:
    // 0x45aa60: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x45aa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45aa64:
    // 0x45aa64: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_45aa68:
    if (ctx->pc == 0x45AA68u) {
        ctx->pc = 0x45AA6Cu;
        goto label_45aa6c;
    }
    ctx->pc = 0x45AA64u;
    {
        const bool branch_taken_0x45aa64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45aa64) {
            ctx->pc = 0x45AAA8u;
            goto label_45aaa8;
        }
    }
    ctx->pc = 0x45AA6Cu;
label_45aa6c:
    // 0x45aa6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x45aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45aa70:
    // 0x45aa70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x45aa70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_45aa74:
    // 0x45aa74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x45aa74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_45aa78:
    // 0x45aa78: 0xc0b6df0  jal         func_2DB7C0
label_45aa7c:
    if (ctx->pc == 0x45AA7Cu) {
        ctx->pc = 0x45AA7Cu;
            // 0x45aa7c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x45AA80u;
        goto label_45aa80;
    }
    ctx->pc = 0x45AA78u;
    SET_GPR_U32(ctx, 31, 0x45AA80u);
    ctx->pc = 0x45AA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA78u;
            // 0x45aa7c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA80u; }
        if (ctx->pc != 0x45AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA80u; }
        if (ctx->pc != 0x45AA80u) { return; }
    }
    ctx->pc = 0x45AA80u;
label_45aa80:
    // 0x45aa80: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45aa84:
    // 0x45aa84: 0xc0dc3f4  jal         func_370FD0
label_45aa88:
    if (ctx->pc == 0x45AA88u) {
        ctx->pc = 0x45AA88u;
            // 0x45aa88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45AA8Cu;
        goto label_45aa8c;
    }
    ctx->pc = 0x45AA84u;
    SET_GPR_U32(ctx, 31, 0x45AA8Cu);
    ctx->pc = 0x45AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA84u;
            // 0x45aa88: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA8Cu; }
        if (ctx->pc != 0x45AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA8Cu; }
        if (ctx->pc != 0x45AA8Cu) { return; }
    }
    ctx->pc = 0x45AA8Cu;
label_45aa8c:
    // 0x45aa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45aa90:
    // 0x45aa90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45aa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45aa94:
    // 0x45aa94: 0xc116afc  jal         func_45ABF0
label_45aa98:
    if (ctx->pc == 0x45AA98u) {
        ctx->pc = 0x45AA98u;
            // 0x45aa98: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x45AA9Cu;
        goto label_45aa9c;
    }
    ctx->pc = 0x45AA94u;
    SET_GPR_U32(ctx, 31, 0x45AA9Cu);
    ctx->pc = 0x45AA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AA94u;
            // 0x45aa98: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABF0u;
    if (runtime->hasFunction(0x45ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA9Cu; }
        if (ctx->pc != 0x45AA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABF0_0x45abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AA9Cu; }
        if (ctx->pc != 0x45AA9Cu) { return; }
    }
    ctx->pc = 0x45AA9Cu;
label_45aa9c:
    // 0x45aa9c: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x45aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_45aaa0:
    // 0x45aaa0: 0xc122c5c  jal         func_48B170
label_45aaa4:
    if (ctx->pc == 0x45AAA4u) {
        ctx->pc = 0x45AAA4u;
            // 0x45aaa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AAA8u;
        goto label_45aaa8;
    }
    ctx->pc = 0x45AAA0u;
    SET_GPR_U32(ctx, 31, 0x45AAA8u);
    ctx->pc = 0x45AAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AAA0u;
            // 0x45aaa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAA8u; }
        if (ctx->pc != 0x45AAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAA8u; }
        if (ctx->pc != 0x45AAA8u) { return; }
    }
    ctx->pc = 0x45AAA8u;
label_45aaa8:
    // 0x45aaa8: 0xc0775b8  jal         func_1DD6E0
label_45aaac:
    if (ctx->pc == 0x45AAACu) {
        ctx->pc = 0x45AAB0u;
        goto label_45aab0;
    }
    ctx->pc = 0x45AAA8u;
    SET_GPR_U32(ctx, 31, 0x45AAB0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAB0u; }
        if (ctx->pc != 0x45AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAB0u; }
        if (ctx->pc != 0x45AAB0u) { return; }
    }
    ctx->pc = 0x45AAB0u;
label_45aab0:
    // 0x45aab0: 0xc0775b4  jal         func_1DD6D0
label_45aab4:
    if (ctx->pc == 0x45AAB4u) {
        ctx->pc = 0x45AAB4u;
            // 0x45aab4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45AAB8u;
        goto label_45aab8;
    }
    ctx->pc = 0x45AAB0u;
    SET_GPR_U32(ctx, 31, 0x45AAB8u);
    ctx->pc = 0x45AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AAB0u;
            // 0x45aab4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAB8u; }
        if (ctx->pc != 0x45AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAB8u; }
        if (ctx->pc != 0x45AAB8u) { return; }
    }
    ctx->pc = 0x45AAB8u;
label_45aab8:
    // 0x45aab8: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x45aab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45aabc:
    // 0x45aabc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x45aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_45aac0:
    // 0x45aac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45aac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45aac4:
    // 0x45aac4: 0x0  nop
    ctx->pc = 0x45aac4u;
    // NOP
label_45aac8:
    // 0x45aac8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x45aac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_45aacc:
    // 0x45aacc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x45aaccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45aad0:
    // 0x45aad0: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_45aad4:
    if (ctx->pc == 0x45AAD4u) {
        ctx->pc = 0x45AAD4u;
            // 0x45aad4: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->pc = 0x45AAD8u;
        goto label_45aad8;
    }
    ctx->pc = 0x45AAD0u;
    {
        const bool branch_taken_0x45aad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x45AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45AAD0u;
            // 0x45aad4: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45aad0) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45AAD8u;
label_45aad8:
    // 0x45aad8: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x45aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_45aadc:
    // 0x45aadc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x45aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_45aae0:
    // 0x45aae0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x45aae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_45aae4:
    // 0x45aae4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_45aae8:
    if (ctx->pc == 0x45AAE8u) {
        ctx->pc = 0x45AAECu;
        goto label_45aaec;
    }
    ctx->pc = 0x45AAE4u;
    {
        const bool branch_taken_0x45aae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45aae4) {
            ctx->pc = 0x45AB74u;
            goto label_45ab74;
        }
    }
    ctx->pc = 0x45AAECu;
label_45aaec:
    // 0x45aaec: 0xc0d1c10  jal         func_347040
label_45aaf0:
    if (ctx->pc == 0x45AAF0u) {
        ctx->pc = 0x45AAF0u;
            // 0x45aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AAF4u;
        goto label_45aaf4;
    }
    ctx->pc = 0x45AAECu;
    SET_GPR_U32(ctx, 31, 0x45AAF4u);
    ctx->pc = 0x45AAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AAECu;
            // 0x45aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAF4u; }
        if (ctx->pc != 0x45AAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AAF4u; }
        if (ctx->pc != 0x45AAF4u) { return; }
    }
    ctx->pc = 0x45AAF4u;
label_45aaf4:
    // 0x45aaf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45aaf8:
    // 0x45aaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45aafc:
    // 0x45aafc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x45aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ab00:
    // 0x45ab00: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x45ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ab04:
    // 0x45ab04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x45ab04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_45ab08:
    // 0x45ab08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x45ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ab0c:
    // 0x45ab0c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x45ab0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_45ab10:
    // 0x45ab10: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x45ab10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_45ab14:
    // 0x45ab14: 0xc0adc64  jal         func_2B7190
label_45ab18:
    if (ctx->pc == 0x45AB18u) {
        ctx->pc = 0x45AB18u;
            // 0x45ab18: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x45AB1Cu;
        goto label_45ab1c;
    }
    ctx->pc = 0x45AB14u;
    SET_GPR_U32(ctx, 31, 0x45AB1Cu);
    ctx->pc = 0x45AB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AB14u;
            // 0x45ab18: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB1Cu; }
        if (ctx->pc != 0x45AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB1Cu; }
        if (ctx->pc != 0x45AB1Cu) { return; }
    }
    ctx->pc = 0x45AB1Cu;
label_45ab1c:
    // 0x45ab1c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x45ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ab20:
    // 0x45ab20: 0x3c033bb4  lui         $v1, 0x3BB4
    ctx->pc = 0x45ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15284 << 16));
label_45ab24:
    // 0x45ab24: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x45ab24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_45ab28:
    // 0x45ab28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x45ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45ab2c:
    // 0x45ab2c: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x45ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ab30:
    // 0x45ab30: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x45ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_45ab34:
    // 0x45ab34: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x45ab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_45ab38:
    // 0x45ab38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45ab3c:
    // 0x45ab3c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x45ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ab40:
    // 0x45ab40: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x45ab40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_45ab44:
    // 0x45ab44: 0xc60200dc  lwc1        $f2, 0xDC($s0)
    ctx->pc = 0x45ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45ab48:
    // 0x45ab48: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x45ab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_45ab4c:
    // 0x45ab4c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x45ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45ab50:
    // 0x45ab50: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x45ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45ab54:
    // 0x45ab54: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x45ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_45ab58:
    // 0x45ab58: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x45ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_45ab5c:
    // 0x45ab5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45ab5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45ab60:
    // 0x45ab60: 0x0  nop
    ctx->pc = 0x45ab60u;
    // NOP
label_45ab64:
    // 0x45ab64: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x45ab64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_45ab68:
    // 0x45ab68: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x45ab68u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
label_45ab6c:
    // 0x45ab6c: 0xc0bafb8  jal         func_2EBEE0
label_45ab70:
    if (ctx->pc == 0x45AB70u) {
        ctx->pc = 0x45AB70u;
            // 0x45ab70: 0x46020c1c  madd.s      $f16, $f1, $f2 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x45AB74u;
        goto label_45ab74;
    }
    ctx->pc = 0x45AB6Cu;
    SET_GPR_U32(ctx, 31, 0x45AB74u);
    ctx->pc = 0x45AB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AB6Cu;
            // 0x45ab70: 0x46020c1c  madd.s      $f16, $f1, $f2 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB74u; }
        if (ctx->pc != 0x45AB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB74u; }
        if (ctx->pc != 0x45AB74u) { return; }
    }
    ctx->pc = 0x45AB74u;
label_45ab74:
    // 0x45ab74: 0xc0775b8  jal         func_1DD6E0
label_45ab78:
    if (ctx->pc == 0x45AB78u) {
        ctx->pc = 0x45AB7Cu;
        goto label_45ab7c;
    }
    ctx->pc = 0x45AB74u;
    SET_GPR_U32(ctx, 31, 0x45AB7Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB7Cu; }
        if (ctx->pc != 0x45AB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB7Cu; }
        if (ctx->pc != 0x45AB7Cu) { return; }
    }
    ctx->pc = 0x45AB7Cu;
label_45ab7c:
    // 0x45ab7c: 0xc0775b4  jal         func_1DD6D0
label_45ab80:
    if (ctx->pc == 0x45AB80u) {
        ctx->pc = 0x45AB80u;
            // 0x45ab80: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45AB84u;
        goto label_45ab84;
    }
    ctx->pc = 0x45AB7Cu;
    SET_GPR_U32(ctx, 31, 0x45AB84u);
    ctx->pc = 0x45AB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AB7Cu;
            // 0x45ab80: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB84u; }
        if (ctx->pc != 0x45AB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB84u; }
        if (ctx->pc != 0x45AB84u) { return; }
    }
    ctx->pc = 0x45AB84u;
label_45ab84:
    // 0x45ab84: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x45ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ab88:
    // 0x45ab88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x45ab88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_45ab8c:
    // 0x45ab8c: 0xc116af8  jal         func_45ABE0
label_45ab90:
    if (ctx->pc == 0x45AB90u) {
        ctx->pc = 0x45AB90u;
            // 0x45ab90: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
        ctx->pc = 0x45AB94u;
        goto label_45ab94;
    }
    ctx->pc = 0x45AB8Cu;
    SET_GPR_U32(ctx, 31, 0x45AB94u);
    ctx->pc = 0x45AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AB8Cu;
            // 0x45ab90: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x45ABE0u;
    if (runtime->hasFunction(0x45ABE0u)) {
        auto targetFn = runtime->lookupFunction(0x45ABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB94u; }
        if (ctx->pc != 0x45AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045ABE0_0x45abe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB94u; }
        if (ctx->pc != 0x45AB94u) { return; }
    }
    ctx->pc = 0x45AB94u;
label_45ab94:
    // 0x45ab94: 0xc1166e8  jal         func_459BA0
label_45ab98:
    if (ctx->pc == 0x45AB98u) {
        ctx->pc = 0x45AB98u;
            // 0x45ab98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45AB9Cu;
        goto label_45ab9c;
    }
    ctx->pc = 0x45AB94u;
    SET_GPR_U32(ctx, 31, 0x45AB9Cu);
    ctx->pc = 0x45AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45AB94u;
            // 0x45ab98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x459BA0u;
    if (runtime->hasFunction(0x459BA0u)) {
        auto targetFn = runtime->lookupFunction(0x459BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB9Cu; }
        if (ctx->pc != 0x45AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00459BA0_0x459ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45AB9Cu; }
        if (ctx->pc != 0x45AB9Cu) { return; }
    }
    ctx->pc = 0x45AB9Cu;
label_45ab9c:
    // 0x45ab9c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x45ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_45aba0:
    // 0x45aba0: 0xc600016c  lwc1        $f0, 0x16C($s0)
    ctx->pc = 0x45aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45aba4:
    // 0x45aba4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x45aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45aba8:
    // 0x45aba8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x45aba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45abac:
    // 0x45abac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_45abb0:
    if (ctx->pc == 0x45ABB0u) {
        ctx->pc = 0x45ABB4u;
        goto label_45abb4;
    }
    ctx->pc = 0x45ABACu;
    {
        const bool branch_taken_0x45abac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45abac) {
            ctx->pc = 0x45ABB8u;
            goto label_45abb8;
        }
    }
    ctx->pc = 0x45ABB4u;
label_45abb4:
    // 0x45abb4: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x45abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_45abb8:
    // 0x45abb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45abbc:
    // 0x45abbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45abc0:
    // 0x45abc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45abc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45abc4:
    // 0x45abc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45abc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45abc8:
    // 0x45abc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45abcc:
    // 0x45abcc: 0x3e00008  jr          $ra
label_45abd0:
    if (ctx->pc == 0x45ABD0u) {
        ctx->pc = 0x45ABD0u;
            // 0x45abd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x45ABD4u;
        goto label_45abd4;
    }
    ctx->pc = 0x45ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45ABCCu;
            // 0x45abd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45ABD4u;
label_45abd4:
    // 0x45abd4: 0x0  nop
    ctx->pc = 0x45abd4u;
    // NOP
label_45abd8:
    // 0x45abd8: 0x0  nop
    ctx->pc = 0x45abd8u;
    // NOP
label_45abdc:
    // 0x45abdc: 0x0  nop
    ctx->pc = 0x45abdcu;
    // NOP
}
