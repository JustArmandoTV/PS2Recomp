#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047A2E0
// Address: 0x47a2e0 - 0x47af10
void sub_0047A2E0_0x47a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A2E0_0x47a2e0");
#endif

    switch (ctx->pc) {
        case 0x47a2e0u: goto label_47a2e0;
        case 0x47a2e4u: goto label_47a2e4;
        case 0x47a2e8u: goto label_47a2e8;
        case 0x47a2ecu: goto label_47a2ec;
        case 0x47a2f0u: goto label_47a2f0;
        case 0x47a2f4u: goto label_47a2f4;
        case 0x47a2f8u: goto label_47a2f8;
        case 0x47a2fcu: goto label_47a2fc;
        case 0x47a300u: goto label_47a300;
        case 0x47a304u: goto label_47a304;
        case 0x47a308u: goto label_47a308;
        case 0x47a30cu: goto label_47a30c;
        case 0x47a310u: goto label_47a310;
        case 0x47a314u: goto label_47a314;
        case 0x47a318u: goto label_47a318;
        case 0x47a31cu: goto label_47a31c;
        case 0x47a320u: goto label_47a320;
        case 0x47a324u: goto label_47a324;
        case 0x47a328u: goto label_47a328;
        case 0x47a32cu: goto label_47a32c;
        case 0x47a330u: goto label_47a330;
        case 0x47a334u: goto label_47a334;
        case 0x47a338u: goto label_47a338;
        case 0x47a33cu: goto label_47a33c;
        case 0x47a340u: goto label_47a340;
        case 0x47a344u: goto label_47a344;
        case 0x47a348u: goto label_47a348;
        case 0x47a34cu: goto label_47a34c;
        case 0x47a350u: goto label_47a350;
        case 0x47a354u: goto label_47a354;
        case 0x47a358u: goto label_47a358;
        case 0x47a35cu: goto label_47a35c;
        case 0x47a360u: goto label_47a360;
        case 0x47a364u: goto label_47a364;
        case 0x47a368u: goto label_47a368;
        case 0x47a36cu: goto label_47a36c;
        case 0x47a370u: goto label_47a370;
        case 0x47a374u: goto label_47a374;
        case 0x47a378u: goto label_47a378;
        case 0x47a37cu: goto label_47a37c;
        case 0x47a380u: goto label_47a380;
        case 0x47a384u: goto label_47a384;
        case 0x47a388u: goto label_47a388;
        case 0x47a38cu: goto label_47a38c;
        case 0x47a390u: goto label_47a390;
        case 0x47a394u: goto label_47a394;
        case 0x47a398u: goto label_47a398;
        case 0x47a39cu: goto label_47a39c;
        case 0x47a3a0u: goto label_47a3a0;
        case 0x47a3a4u: goto label_47a3a4;
        case 0x47a3a8u: goto label_47a3a8;
        case 0x47a3acu: goto label_47a3ac;
        case 0x47a3b0u: goto label_47a3b0;
        case 0x47a3b4u: goto label_47a3b4;
        case 0x47a3b8u: goto label_47a3b8;
        case 0x47a3bcu: goto label_47a3bc;
        case 0x47a3c0u: goto label_47a3c0;
        case 0x47a3c4u: goto label_47a3c4;
        case 0x47a3c8u: goto label_47a3c8;
        case 0x47a3ccu: goto label_47a3cc;
        case 0x47a3d0u: goto label_47a3d0;
        case 0x47a3d4u: goto label_47a3d4;
        case 0x47a3d8u: goto label_47a3d8;
        case 0x47a3dcu: goto label_47a3dc;
        case 0x47a3e0u: goto label_47a3e0;
        case 0x47a3e4u: goto label_47a3e4;
        case 0x47a3e8u: goto label_47a3e8;
        case 0x47a3ecu: goto label_47a3ec;
        case 0x47a3f0u: goto label_47a3f0;
        case 0x47a3f4u: goto label_47a3f4;
        case 0x47a3f8u: goto label_47a3f8;
        case 0x47a3fcu: goto label_47a3fc;
        case 0x47a400u: goto label_47a400;
        case 0x47a404u: goto label_47a404;
        case 0x47a408u: goto label_47a408;
        case 0x47a40cu: goto label_47a40c;
        case 0x47a410u: goto label_47a410;
        case 0x47a414u: goto label_47a414;
        case 0x47a418u: goto label_47a418;
        case 0x47a41cu: goto label_47a41c;
        case 0x47a420u: goto label_47a420;
        case 0x47a424u: goto label_47a424;
        case 0x47a428u: goto label_47a428;
        case 0x47a42cu: goto label_47a42c;
        case 0x47a430u: goto label_47a430;
        case 0x47a434u: goto label_47a434;
        case 0x47a438u: goto label_47a438;
        case 0x47a43cu: goto label_47a43c;
        case 0x47a440u: goto label_47a440;
        case 0x47a444u: goto label_47a444;
        case 0x47a448u: goto label_47a448;
        case 0x47a44cu: goto label_47a44c;
        case 0x47a450u: goto label_47a450;
        case 0x47a454u: goto label_47a454;
        case 0x47a458u: goto label_47a458;
        case 0x47a45cu: goto label_47a45c;
        case 0x47a460u: goto label_47a460;
        case 0x47a464u: goto label_47a464;
        case 0x47a468u: goto label_47a468;
        case 0x47a46cu: goto label_47a46c;
        case 0x47a470u: goto label_47a470;
        case 0x47a474u: goto label_47a474;
        case 0x47a478u: goto label_47a478;
        case 0x47a47cu: goto label_47a47c;
        case 0x47a480u: goto label_47a480;
        case 0x47a484u: goto label_47a484;
        case 0x47a488u: goto label_47a488;
        case 0x47a48cu: goto label_47a48c;
        case 0x47a490u: goto label_47a490;
        case 0x47a494u: goto label_47a494;
        case 0x47a498u: goto label_47a498;
        case 0x47a49cu: goto label_47a49c;
        case 0x47a4a0u: goto label_47a4a0;
        case 0x47a4a4u: goto label_47a4a4;
        case 0x47a4a8u: goto label_47a4a8;
        case 0x47a4acu: goto label_47a4ac;
        case 0x47a4b0u: goto label_47a4b0;
        case 0x47a4b4u: goto label_47a4b4;
        case 0x47a4b8u: goto label_47a4b8;
        case 0x47a4bcu: goto label_47a4bc;
        case 0x47a4c0u: goto label_47a4c0;
        case 0x47a4c4u: goto label_47a4c4;
        case 0x47a4c8u: goto label_47a4c8;
        case 0x47a4ccu: goto label_47a4cc;
        case 0x47a4d0u: goto label_47a4d0;
        case 0x47a4d4u: goto label_47a4d4;
        case 0x47a4d8u: goto label_47a4d8;
        case 0x47a4dcu: goto label_47a4dc;
        case 0x47a4e0u: goto label_47a4e0;
        case 0x47a4e4u: goto label_47a4e4;
        case 0x47a4e8u: goto label_47a4e8;
        case 0x47a4ecu: goto label_47a4ec;
        case 0x47a4f0u: goto label_47a4f0;
        case 0x47a4f4u: goto label_47a4f4;
        case 0x47a4f8u: goto label_47a4f8;
        case 0x47a4fcu: goto label_47a4fc;
        case 0x47a500u: goto label_47a500;
        case 0x47a504u: goto label_47a504;
        case 0x47a508u: goto label_47a508;
        case 0x47a50cu: goto label_47a50c;
        case 0x47a510u: goto label_47a510;
        case 0x47a514u: goto label_47a514;
        case 0x47a518u: goto label_47a518;
        case 0x47a51cu: goto label_47a51c;
        case 0x47a520u: goto label_47a520;
        case 0x47a524u: goto label_47a524;
        case 0x47a528u: goto label_47a528;
        case 0x47a52cu: goto label_47a52c;
        case 0x47a530u: goto label_47a530;
        case 0x47a534u: goto label_47a534;
        case 0x47a538u: goto label_47a538;
        case 0x47a53cu: goto label_47a53c;
        case 0x47a540u: goto label_47a540;
        case 0x47a544u: goto label_47a544;
        case 0x47a548u: goto label_47a548;
        case 0x47a54cu: goto label_47a54c;
        case 0x47a550u: goto label_47a550;
        case 0x47a554u: goto label_47a554;
        case 0x47a558u: goto label_47a558;
        case 0x47a55cu: goto label_47a55c;
        case 0x47a560u: goto label_47a560;
        case 0x47a564u: goto label_47a564;
        case 0x47a568u: goto label_47a568;
        case 0x47a56cu: goto label_47a56c;
        case 0x47a570u: goto label_47a570;
        case 0x47a574u: goto label_47a574;
        case 0x47a578u: goto label_47a578;
        case 0x47a57cu: goto label_47a57c;
        case 0x47a580u: goto label_47a580;
        case 0x47a584u: goto label_47a584;
        case 0x47a588u: goto label_47a588;
        case 0x47a58cu: goto label_47a58c;
        case 0x47a590u: goto label_47a590;
        case 0x47a594u: goto label_47a594;
        case 0x47a598u: goto label_47a598;
        case 0x47a59cu: goto label_47a59c;
        case 0x47a5a0u: goto label_47a5a0;
        case 0x47a5a4u: goto label_47a5a4;
        case 0x47a5a8u: goto label_47a5a8;
        case 0x47a5acu: goto label_47a5ac;
        case 0x47a5b0u: goto label_47a5b0;
        case 0x47a5b4u: goto label_47a5b4;
        case 0x47a5b8u: goto label_47a5b8;
        case 0x47a5bcu: goto label_47a5bc;
        case 0x47a5c0u: goto label_47a5c0;
        case 0x47a5c4u: goto label_47a5c4;
        case 0x47a5c8u: goto label_47a5c8;
        case 0x47a5ccu: goto label_47a5cc;
        case 0x47a5d0u: goto label_47a5d0;
        case 0x47a5d4u: goto label_47a5d4;
        case 0x47a5d8u: goto label_47a5d8;
        case 0x47a5dcu: goto label_47a5dc;
        case 0x47a5e0u: goto label_47a5e0;
        case 0x47a5e4u: goto label_47a5e4;
        case 0x47a5e8u: goto label_47a5e8;
        case 0x47a5ecu: goto label_47a5ec;
        case 0x47a5f0u: goto label_47a5f0;
        case 0x47a5f4u: goto label_47a5f4;
        case 0x47a5f8u: goto label_47a5f8;
        case 0x47a5fcu: goto label_47a5fc;
        case 0x47a600u: goto label_47a600;
        case 0x47a604u: goto label_47a604;
        case 0x47a608u: goto label_47a608;
        case 0x47a60cu: goto label_47a60c;
        case 0x47a610u: goto label_47a610;
        case 0x47a614u: goto label_47a614;
        case 0x47a618u: goto label_47a618;
        case 0x47a61cu: goto label_47a61c;
        case 0x47a620u: goto label_47a620;
        case 0x47a624u: goto label_47a624;
        case 0x47a628u: goto label_47a628;
        case 0x47a62cu: goto label_47a62c;
        case 0x47a630u: goto label_47a630;
        case 0x47a634u: goto label_47a634;
        case 0x47a638u: goto label_47a638;
        case 0x47a63cu: goto label_47a63c;
        case 0x47a640u: goto label_47a640;
        case 0x47a644u: goto label_47a644;
        case 0x47a648u: goto label_47a648;
        case 0x47a64cu: goto label_47a64c;
        case 0x47a650u: goto label_47a650;
        case 0x47a654u: goto label_47a654;
        case 0x47a658u: goto label_47a658;
        case 0x47a65cu: goto label_47a65c;
        case 0x47a660u: goto label_47a660;
        case 0x47a664u: goto label_47a664;
        case 0x47a668u: goto label_47a668;
        case 0x47a66cu: goto label_47a66c;
        case 0x47a670u: goto label_47a670;
        case 0x47a674u: goto label_47a674;
        case 0x47a678u: goto label_47a678;
        case 0x47a67cu: goto label_47a67c;
        case 0x47a680u: goto label_47a680;
        case 0x47a684u: goto label_47a684;
        case 0x47a688u: goto label_47a688;
        case 0x47a68cu: goto label_47a68c;
        case 0x47a690u: goto label_47a690;
        case 0x47a694u: goto label_47a694;
        case 0x47a698u: goto label_47a698;
        case 0x47a69cu: goto label_47a69c;
        case 0x47a6a0u: goto label_47a6a0;
        case 0x47a6a4u: goto label_47a6a4;
        case 0x47a6a8u: goto label_47a6a8;
        case 0x47a6acu: goto label_47a6ac;
        case 0x47a6b0u: goto label_47a6b0;
        case 0x47a6b4u: goto label_47a6b4;
        case 0x47a6b8u: goto label_47a6b8;
        case 0x47a6bcu: goto label_47a6bc;
        case 0x47a6c0u: goto label_47a6c0;
        case 0x47a6c4u: goto label_47a6c4;
        case 0x47a6c8u: goto label_47a6c8;
        case 0x47a6ccu: goto label_47a6cc;
        case 0x47a6d0u: goto label_47a6d0;
        case 0x47a6d4u: goto label_47a6d4;
        case 0x47a6d8u: goto label_47a6d8;
        case 0x47a6dcu: goto label_47a6dc;
        case 0x47a6e0u: goto label_47a6e0;
        case 0x47a6e4u: goto label_47a6e4;
        case 0x47a6e8u: goto label_47a6e8;
        case 0x47a6ecu: goto label_47a6ec;
        case 0x47a6f0u: goto label_47a6f0;
        case 0x47a6f4u: goto label_47a6f4;
        case 0x47a6f8u: goto label_47a6f8;
        case 0x47a6fcu: goto label_47a6fc;
        case 0x47a700u: goto label_47a700;
        case 0x47a704u: goto label_47a704;
        case 0x47a708u: goto label_47a708;
        case 0x47a70cu: goto label_47a70c;
        case 0x47a710u: goto label_47a710;
        case 0x47a714u: goto label_47a714;
        case 0x47a718u: goto label_47a718;
        case 0x47a71cu: goto label_47a71c;
        case 0x47a720u: goto label_47a720;
        case 0x47a724u: goto label_47a724;
        case 0x47a728u: goto label_47a728;
        case 0x47a72cu: goto label_47a72c;
        case 0x47a730u: goto label_47a730;
        case 0x47a734u: goto label_47a734;
        case 0x47a738u: goto label_47a738;
        case 0x47a73cu: goto label_47a73c;
        case 0x47a740u: goto label_47a740;
        case 0x47a744u: goto label_47a744;
        case 0x47a748u: goto label_47a748;
        case 0x47a74cu: goto label_47a74c;
        case 0x47a750u: goto label_47a750;
        case 0x47a754u: goto label_47a754;
        case 0x47a758u: goto label_47a758;
        case 0x47a75cu: goto label_47a75c;
        case 0x47a760u: goto label_47a760;
        case 0x47a764u: goto label_47a764;
        case 0x47a768u: goto label_47a768;
        case 0x47a76cu: goto label_47a76c;
        case 0x47a770u: goto label_47a770;
        case 0x47a774u: goto label_47a774;
        case 0x47a778u: goto label_47a778;
        case 0x47a77cu: goto label_47a77c;
        case 0x47a780u: goto label_47a780;
        case 0x47a784u: goto label_47a784;
        case 0x47a788u: goto label_47a788;
        case 0x47a78cu: goto label_47a78c;
        case 0x47a790u: goto label_47a790;
        case 0x47a794u: goto label_47a794;
        case 0x47a798u: goto label_47a798;
        case 0x47a79cu: goto label_47a79c;
        case 0x47a7a0u: goto label_47a7a0;
        case 0x47a7a4u: goto label_47a7a4;
        case 0x47a7a8u: goto label_47a7a8;
        case 0x47a7acu: goto label_47a7ac;
        case 0x47a7b0u: goto label_47a7b0;
        case 0x47a7b4u: goto label_47a7b4;
        case 0x47a7b8u: goto label_47a7b8;
        case 0x47a7bcu: goto label_47a7bc;
        case 0x47a7c0u: goto label_47a7c0;
        case 0x47a7c4u: goto label_47a7c4;
        case 0x47a7c8u: goto label_47a7c8;
        case 0x47a7ccu: goto label_47a7cc;
        case 0x47a7d0u: goto label_47a7d0;
        case 0x47a7d4u: goto label_47a7d4;
        case 0x47a7d8u: goto label_47a7d8;
        case 0x47a7dcu: goto label_47a7dc;
        case 0x47a7e0u: goto label_47a7e0;
        case 0x47a7e4u: goto label_47a7e4;
        case 0x47a7e8u: goto label_47a7e8;
        case 0x47a7ecu: goto label_47a7ec;
        case 0x47a7f0u: goto label_47a7f0;
        case 0x47a7f4u: goto label_47a7f4;
        case 0x47a7f8u: goto label_47a7f8;
        case 0x47a7fcu: goto label_47a7fc;
        case 0x47a800u: goto label_47a800;
        case 0x47a804u: goto label_47a804;
        case 0x47a808u: goto label_47a808;
        case 0x47a80cu: goto label_47a80c;
        case 0x47a810u: goto label_47a810;
        case 0x47a814u: goto label_47a814;
        case 0x47a818u: goto label_47a818;
        case 0x47a81cu: goto label_47a81c;
        case 0x47a820u: goto label_47a820;
        case 0x47a824u: goto label_47a824;
        case 0x47a828u: goto label_47a828;
        case 0x47a82cu: goto label_47a82c;
        case 0x47a830u: goto label_47a830;
        case 0x47a834u: goto label_47a834;
        case 0x47a838u: goto label_47a838;
        case 0x47a83cu: goto label_47a83c;
        case 0x47a840u: goto label_47a840;
        case 0x47a844u: goto label_47a844;
        case 0x47a848u: goto label_47a848;
        case 0x47a84cu: goto label_47a84c;
        case 0x47a850u: goto label_47a850;
        case 0x47a854u: goto label_47a854;
        case 0x47a858u: goto label_47a858;
        case 0x47a85cu: goto label_47a85c;
        case 0x47a860u: goto label_47a860;
        case 0x47a864u: goto label_47a864;
        case 0x47a868u: goto label_47a868;
        case 0x47a86cu: goto label_47a86c;
        case 0x47a870u: goto label_47a870;
        case 0x47a874u: goto label_47a874;
        case 0x47a878u: goto label_47a878;
        case 0x47a87cu: goto label_47a87c;
        case 0x47a880u: goto label_47a880;
        case 0x47a884u: goto label_47a884;
        case 0x47a888u: goto label_47a888;
        case 0x47a88cu: goto label_47a88c;
        case 0x47a890u: goto label_47a890;
        case 0x47a894u: goto label_47a894;
        case 0x47a898u: goto label_47a898;
        case 0x47a89cu: goto label_47a89c;
        case 0x47a8a0u: goto label_47a8a0;
        case 0x47a8a4u: goto label_47a8a4;
        case 0x47a8a8u: goto label_47a8a8;
        case 0x47a8acu: goto label_47a8ac;
        case 0x47a8b0u: goto label_47a8b0;
        case 0x47a8b4u: goto label_47a8b4;
        case 0x47a8b8u: goto label_47a8b8;
        case 0x47a8bcu: goto label_47a8bc;
        case 0x47a8c0u: goto label_47a8c0;
        case 0x47a8c4u: goto label_47a8c4;
        case 0x47a8c8u: goto label_47a8c8;
        case 0x47a8ccu: goto label_47a8cc;
        case 0x47a8d0u: goto label_47a8d0;
        case 0x47a8d4u: goto label_47a8d4;
        case 0x47a8d8u: goto label_47a8d8;
        case 0x47a8dcu: goto label_47a8dc;
        case 0x47a8e0u: goto label_47a8e0;
        case 0x47a8e4u: goto label_47a8e4;
        case 0x47a8e8u: goto label_47a8e8;
        case 0x47a8ecu: goto label_47a8ec;
        case 0x47a8f0u: goto label_47a8f0;
        case 0x47a8f4u: goto label_47a8f4;
        case 0x47a8f8u: goto label_47a8f8;
        case 0x47a8fcu: goto label_47a8fc;
        case 0x47a900u: goto label_47a900;
        case 0x47a904u: goto label_47a904;
        case 0x47a908u: goto label_47a908;
        case 0x47a90cu: goto label_47a90c;
        case 0x47a910u: goto label_47a910;
        case 0x47a914u: goto label_47a914;
        case 0x47a918u: goto label_47a918;
        case 0x47a91cu: goto label_47a91c;
        case 0x47a920u: goto label_47a920;
        case 0x47a924u: goto label_47a924;
        case 0x47a928u: goto label_47a928;
        case 0x47a92cu: goto label_47a92c;
        case 0x47a930u: goto label_47a930;
        case 0x47a934u: goto label_47a934;
        case 0x47a938u: goto label_47a938;
        case 0x47a93cu: goto label_47a93c;
        case 0x47a940u: goto label_47a940;
        case 0x47a944u: goto label_47a944;
        case 0x47a948u: goto label_47a948;
        case 0x47a94cu: goto label_47a94c;
        case 0x47a950u: goto label_47a950;
        case 0x47a954u: goto label_47a954;
        case 0x47a958u: goto label_47a958;
        case 0x47a95cu: goto label_47a95c;
        case 0x47a960u: goto label_47a960;
        case 0x47a964u: goto label_47a964;
        case 0x47a968u: goto label_47a968;
        case 0x47a96cu: goto label_47a96c;
        case 0x47a970u: goto label_47a970;
        case 0x47a974u: goto label_47a974;
        case 0x47a978u: goto label_47a978;
        case 0x47a97cu: goto label_47a97c;
        case 0x47a980u: goto label_47a980;
        case 0x47a984u: goto label_47a984;
        case 0x47a988u: goto label_47a988;
        case 0x47a98cu: goto label_47a98c;
        case 0x47a990u: goto label_47a990;
        case 0x47a994u: goto label_47a994;
        case 0x47a998u: goto label_47a998;
        case 0x47a99cu: goto label_47a99c;
        case 0x47a9a0u: goto label_47a9a0;
        case 0x47a9a4u: goto label_47a9a4;
        case 0x47a9a8u: goto label_47a9a8;
        case 0x47a9acu: goto label_47a9ac;
        case 0x47a9b0u: goto label_47a9b0;
        case 0x47a9b4u: goto label_47a9b4;
        case 0x47a9b8u: goto label_47a9b8;
        case 0x47a9bcu: goto label_47a9bc;
        case 0x47a9c0u: goto label_47a9c0;
        case 0x47a9c4u: goto label_47a9c4;
        case 0x47a9c8u: goto label_47a9c8;
        case 0x47a9ccu: goto label_47a9cc;
        case 0x47a9d0u: goto label_47a9d0;
        case 0x47a9d4u: goto label_47a9d4;
        case 0x47a9d8u: goto label_47a9d8;
        case 0x47a9dcu: goto label_47a9dc;
        case 0x47a9e0u: goto label_47a9e0;
        case 0x47a9e4u: goto label_47a9e4;
        case 0x47a9e8u: goto label_47a9e8;
        case 0x47a9ecu: goto label_47a9ec;
        case 0x47a9f0u: goto label_47a9f0;
        case 0x47a9f4u: goto label_47a9f4;
        case 0x47a9f8u: goto label_47a9f8;
        case 0x47a9fcu: goto label_47a9fc;
        case 0x47aa00u: goto label_47aa00;
        case 0x47aa04u: goto label_47aa04;
        case 0x47aa08u: goto label_47aa08;
        case 0x47aa0cu: goto label_47aa0c;
        case 0x47aa10u: goto label_47aa10;
        case 0x47aa14u: goto label_47aa14;
        case 0x47aa18u: goto label_47aa18;
        case 0x47aa1cu: goto label_47aa1c;
        case 0x47aa20u: goto label_47aa20;
        case 0x47aa24u: goto label_47aa24;
        case 0x47aa28u: goto label_47aa28;
        case 0x47aa2cu: goto label_47aa2c;
        case 0x47aa30u: goto label_47aa30;
        case 0x47aa34u: goto label_47aa34;
        case 0x47aa38u: goto label_47aa38;
        case 0x47aa3cu: goto label_47aa3c;
        case 0x47aa40u: goto label_47aa40;
        case 0x47aa44u: goto label_47aa44;
        case 0x47aa48u: goto label_47aa48;
        case 0x47aa4cu: goto label_47aa4c;
        case 0x47aa50u: goto label_47aa50;
        case 0x47aa54u: goto label_47aa54;
        case 0x47aa58u: goto label_47aa58;
        case 0x47aa5cu: goto label_47aa5c;
        case 0x47aa60u: goto label_47aa60;
        case 0x47aa64u: goto label_47aa64;
        case 0x47aa68u: goto label_47aa68;
        case 0x47aa6cu: goto label_47aa6c;
        case 0x47aa70u: goto label_47aa70;
        case 0x47aa74u: goto label_47aa74;
        case 0x47aa78u: goto label_47aa78;
        case 0x47aa7cu: goto label_47aa7c;
        case 0x47aa80u: goto label_47aa80;
        case 0x47aa84u: goto label_47aa84;
        case 0x47aa88u: goto label_47aa88;
        case 0x47aa8cu: goto label_47aa8c;
        case 0x47aa90u: goto label_47aa90;
        case 0x47aa94u: goto label_47aa94;
        case 0x47aa98u: goto label_47aa98;
        case 0x47aa9cu: goto label_47aa9c;
        case 0x47aaa0u: goto label_47aaa0;
        case 0x47aaa4u: goto label_47aaa4;
        case 0x47aaa8u: goto label_47aaa8;
        case 0x47aaacu: goto label_47aaac;
        case 0x47aab0u: goto label_47aab0;
        case 0x47aab4u: goto label_47aab4;
        case 0x47aab8u: goto label_47aab8;
        case 0x47aabcu: goto label_47aabc;
        case 0x47aac0u: goto label_47aac0;
        case 0x47aac4u: goto label_47aac4;
        case 0x47aac8u: goto label_47aac8;
        case 0x47aaccu: goto label_47aacc;
        case 0x47aad0u: goto label_47aad0;
        case 0x47aad4u: goto label_47aad4;
        case 0x47aad8u: goto label_47aad8;
        case 0x47aadcu: goto label_47aadc;
        case 0x47aae0u: goto label_47aae0;
        case 0x47aae4u: goto label_47aae4;
        case 0x47aae8u: goto label_47aae8;
        case 0x47aaecu: goto label_47aaec;
        case 0x47aaf0u: goto label_47aaf0;
        case 0x47aaf4u: goto label_47aaf4;
        case 0x47aaf8u: goto label_47aaf8;
        case 0x47aafcu: goto label_47aafc;
        case 0x47ab00u: goto label_47ab00;
        case 0x47ab04u: goto label_47ab04;
        case 0x47ab08u: goto label_47ab08;
        case 0x47ab0cu: goto label_47ab0c;
        case 0x47ab10u: goto label_47ab10;
        case 0x47ab14u: goto label_47ab14;
        case 0x47ab18u: goto label_47ab18;
        case 0x47ab1cu: goto label_47ab1c;
        case 0x47ab20u: goto label_47ab20;
        case 0x47ab24u: goto label_47ab24;
        case 0x47ab28u: goto label_47ab28;
        case 0x47ab2cu: goto label_47ab2c;
        case 0x47ab30u: goto label_47ab30;
        case 0x47ab34u: goto label_47ab34;
        case 0x47ab38u: goto label_47ab38;
        case 0x47ab3cu: goto label_47ab3c;
        case 0x47ab40u: goto label_47ab40;
        case 0x47ab44u: goto label_47ab44;
        case 0x47ab48u: goto label_47ab48;
        case 0x47ab4cu: goto label_47ab4c;
        case 0x47ab50u: goto label_47ab50;
        case 0x47ab54u: goto label_47ab54;
        case 0x47ab58u: goto label_47ab58;
        case 0x47ab5cu: goto label_47ab5c;
        case 0x47ab60u: goto label_47ab60;
        case 0x47ab64u: goto label_47ab64;
        case 0x47ab68u: goto label_47ab68;
        case 0x47ab6cu: goto label_47ab6c;
        case 0x47ab70u: goto label_47ab70;
        case 0x47ab74u: goto label_47ab74;
        case 0x47ab78u: goto label_47ab78;
        case 0x47ab7cu: goto label_47ab7c;
        case 0x47ab80u: goto label_47ab80;
        case 0x47ab84u: goto label_47ab84;
        case 0x47ab88u: goto label_47ab88;
        case 0x47ab8cu: goto label_47ab8c;
        case 0x47ab90u: goto label_47ab90;
        case 0x47ab94u: goto label_47ab94;
        case 0x47ab98u: goto label_47ab98;
        case 0x47ab9cu: goto label_47ab9c;
        case 0x47aba0u: goto label_47aba0;
        case 0x47aba4u: goto label_47aba4;
        case 0x47aba8u: goto label_47aba8;
        case 0x47abacu: goto label_47abac;
        case 0x47abb0u: goto label_47abb0;
        case 0x47abb4u: goto label_47abb4;
        case 0x47abb8u: goto label_47abb8;
        case 0x47abbcu: goto label_47abbc;
        case 0x47abc0u: goto label_47abc0;
        case 0x47abc4u: goto label_47abc4;
        case 0x47abc8u: goto label_47abc8;
        case 0x47abccu: goto label_47abcc;
        case 0x47abd0u: goto label_47abd0;
        case 0x47abd4u: goto label_47abd4;
        case 0x47abd8u: goto label_47abd8;
        case 0x47abdcu: goto label_47abdc;
        case 0x47abe0u: goto label_47abe0;
        case 0x47abe4u: goto label_47abe4;
        case 0x47abe8u: goto label_47abe8;
        case 0x47abecu: goto label_47abec;
        case 0x47abf0u: goto label_47abf0;
        case 0x47abf4u: goto label_47abf4;
        case 0x47abf8u: goto label_47abf8;
        case 0x47abfcu: goto label_47abfc;
        case 0x47ac00u: goto label_47ac00;
        case 0x47ac04u: goto label_47ac04;
        case 0x47ac08u: goto label_47ac08;
        case 0x47ac0cu: goto label_47ac0c;
        case 0x47ac10u: goto label_47ac10;
        case 0x47ac14u: goto label_47ac14;
        case 0x47ac18u: goto label_47ac18;
        case 0x47ac1cu: goto label_47ac1c;
        case 0x47ac20u: goto label_47ac20;
        case 0x47ac24u: goto label_47ac24;
        case 0x47ac28u: goto label_47ac28;
        case 0x47ac2cu: goto label_47ac2c;
        case 0x47ac30u: goto label_47ac30;
        case 0x47ac34u: goto label_47ac34;
        case 0x47ac38u: goto label_47ac38;
        case 0x47ac3cu: goto label_47ac3c;
        case 0x47ac40u: goto label_47ac40;
        case 0x47ac44u: goto label_47ac44;
        case 0x47ac48u: goto label_47ac48;
        case 0x47ac4cu: goto label_47ac4c;
        case 0x47ac50u: goto label_47ac50;
        case 0x47ac54u: goto label_47ac54;
        case 0x47ac58u: goto label_47ac58;
        case 0x47ac5cu: goto label_47ac5c;
        case 0x47ac60u: goto label_47ac60;
        case 0x47ac64u: goto label_47ac64;
        case 0x47ac68u: goto label_47ac68;
        case 0x47ac6cu: goto label_47ac6c;
        case 0x47ac70u: goto label_47ac70;
        case 0x47ac74u: goto label_47ac74;
        case 0x47ac78u: goto label_47ac78;
        case 0x47ac7cu: goto label_47ac7c;
        case 0x47ac80u: goto label_47ac80;
        case 0x47ac84u: goto label_47ac84;
        case 0x47ac88u: goto label_47ac88;
        case 0x47ac8cu: goto label_47ac8c;
        case 0x47ac90u: goto label_47ac90;
        case 0x47ac94u: goto label_47ac94;
        case 0x47ac98u: goto label_47ac98;
        case 0x47ac9cu: goto label_47ac9c;
        case 0x47aca0u: goto label_47aca0;
        case 0x47aca4u: goto label_47aca4;
        case 0x47aca8u: goto label_47aca8;
        case 0x47acacu: goto label_47acac;
        case 0x47acb0u: goto label_47acb0;
        case 0x47acb4u: goto label_47acb4;
        case 0x47acb8u: goto label_47acb8;
        case 0x47acbcu: goto label_47acbc;
        case 0x47acc0u: goto label_47acc0;
        case 0x47acc4u: goto label_47acc4;
        case 0x47acc8u: goto label_47acc8;
        case 0x47acccu: goto label_47accc;
        case 0x47acd0u: goto label_47acd0;
        case 0x47acd4u: goto label_47acd4;
        case 0x47acd8u: goto label_47acd8;
        case 0x47acdcu: goto label_47acdc;
        case 0x47ace0u: goto label_47ace0;
        case 0x47ace4u: goto label_47ace4;
        case 0x47ace8u: goto label_47ace8;
        case 0x47acecu: goto label_47acec;
        case 0x47acf0u: goto label_47acf0;
        case 0x47acf4u: goto label_47acf4;
        case 0x47acf8u: goto label_47acf8;
        case 0x47acfcu: goto label_47acfc;
        case 0x47ad00u: goto label_47ad00;
        case 0x47ad04u: goto label_47ad04;
        case 0x47ad08u: goto label_47ad08;
        case 0x47ad0cu: goto label_47ad0c;
        case 0x47ad10u: goto label_47ad10;
        case 0x47ad14u: goto label_47ad14;
        case 0x47ad18u: goto label_47ad18;
        case 0x47ad1cu: goto label_47ad1c;
        case 0x47ad20u: goto label_47ad20;
        case 0x47ad24u: goto label_47ad24;
        case 0x47ad28u: goto label_47ad28;
        case 0x47ad2cu: goto label_47ad2c;
        case 0x47ad30u: goto label_47ad30;
        case 0x47ad34u: goto label_47ad34;
        case 0x47ad38u: goto label_47ad38;
        case 0x47ad3cu: goto label_47ad3c;
        case 0x47ad40u: goto label_47ad40;
        case 0x47ad44u: goto label_47ad44;
        case 0x47ad48u: goto label_47ad48;
        case 0x47ad4cu: goto label_47ad4c;
        case 0x47ad50u: goto label_47ad50;
        case 0x47ad54u: goto label_47ad54;
        case 0x47ad58u: goto label_47ad58;
        case 0x47ad5cu: goto label_47ad5c;
        case 0x47ad60u: goto label_47ad60;
        case 0x47ad64u: goto label_47ad64;
        case 0x47ad68u: goto label_47ad68;
        case 0x47ad6cu: goto label_47ad6c;
        case 0x47ad70u: goto label_47ad70;
        case 0x47ad74u: goto label_47ad74;
        case 0x47ad78u: goto label_47ad78;
        case 0x47ad7cu: goto label_47ad7c;
        case 0x47ad80u: goto label_47ad80;
        case 0x47ad84u: goto label_47ad84;
        case 0x47ad88u: goto label_47ad88;
        case 0x47ad8cu: goto label_47ad8c;
        case 0x47ad90u: goto label_47ad90;
        case 0x47ad94u: goto label_47ad94;
        case 0x47ad98u: goto label_47ad98;
        case 0x47ad9cu: goto label_47ad9c;
        case 0x47ada0u: goto label_47ada0;
        case 0x47ada4u: goto label_47ada4;
        case 0x47ada8u: goto label_47ada8;
        case 0x47adacu: goto label_47adac;
        case 0x47adb0u: goto label_47adb0;
        case 0x47adb4u: goto label_47adb4;
        case 0x47adb8u: goto label_47adb8;
        case 0x47adbcu: goto label_47adbc;
        case 0x47adc0u: goto label_47adc0;
        case 0x47adc4u: goto label_47adc4;
        case 0x47adc8u: goto label_47adc8;
        case 0x47adccu: goto label_47adcc;
        case 0x47add0u: goto label_47add0;
        case 0x47add4u: goto label_47add4;
        case 0x47add8u: goto label_47add8;
        case 0x47addcu: goto label_47addc;
        case 0x47ade0u: goto label_47ade0;
        case 0x47ade4u: goto label_47ade4;
        case 0x47ade8u: goto label_47ade8;
        case 0x47adecu: goto label_47adec;
        case 0x47adf0u: goto label_47adf0;
        case 0x47adf4u: goto label_47adf4;
        case 0x47adf8u: goto label_47adf8;
        case 0x47adfcu: goto label_47adfc;
        case 0x47ae00u: goto label_47ae00;
        case 0x47ae04u: goto label_47ae04;
        case 0x47ae08u: goto label_47ae08;
        case 0x47ae0cu: goto label_47ae0c;
        case 0x47ae10u: goto label_47ae10;
        case 0x47ae14u: goto label_47ae14;
        case 0x47ae18u: goto label_47ae18;
        case 0x47ae1cu: goto label_47ae1c;
        case 0x47ae20u: goto label_47ae20;
        case 0x47ae24u: goto label_47ae24;
        case 0x47ae28u: goto label_47ae28;
        case 0x47ae2cu: goto label_47ae2c;
        case 0x47ae30u: goto label_47ae30;
        case 0x47ae34u: goto label_47ae34;
        case 0x47ae38u: goto label_47ae38;
        case 0x47ae3cu: goto label_47ae3c;
        case 0x47ae40u: goto label_47ae40;
        case 0x47ae44u: goto label_47ae44;
        case 0x47ae48u: goto label_47ae48;
        case 0x47ae4cu: goto label_47ae4c;
        case 0x47ae50u: goto label_47ae50;
        case 0x47ae54u: goto label_47ae54;
        case 0x47ae58u: goto label_47ae58;
        case 0x47ae5cu: goto label_47ae5c;
        case 0x47ae60u: goto label_47ae60;
        case 0x47ae64u: goto label_47ae64;
        case 0x47ae68u: goto label_47ae68;
        case 0x47ae6cu: goto label_47ae6c;
        case 0x47ae70u: goto label_47ae70;
        case 0x47ae74u: goto label_47ae74;
        case 0x47ae78u: goto label_47ae78;
        case 0x47ae7cu: goto label_47ae7c;
        case 0x47ae80u: goto label_47ae80;
        case 0x47ae84u: goto label_47ae84;
        case 0x47ae88u: goto label_47ae88;
        case 0x47ae8cu: goto label_47ae8c;
        case 0x47ae90u: goto label_47ae90;
        case 0x47ae94u: goto label_47ae94;
        case 0x47ae98u: goto label_47ae98;
        case 0x47ae9cu: goto label_47ae9c;
        case 0x47aea0u: goto label_47aea0;
        case 0x47aea4u: goto label_47aea4;
        case 0x47aea8u: goto label_47aea8;
        case 0x47aeacu: goto label_47aeac;
        case 0x47aeb0u: goto label_47aeb0;
        case 0x47aeb4u: goto label_47aeb4;
        case 0x47aeb8u: goto label_47aeb8;
        case 0x47aebcu: goto label_47aebc;
        case 0x47aec0u: goto label_47aec0;
        case 0x47aec4u: goto label_47aec4;
        case 0x47aec8u: goto label_47aec8;
        case 0x47aeccu: goto label_47aecc;
        case 0x47aed0u: goto label_47aed0;
        case 0x47aed4u: goto label_47aed4;
        case 0x47aed8u: goto label_47aed8;
        case 0x47aedcu: goto label_47aedc;
        case 0x47aee0u: goto label_47aee0;
        case 0x47aee4u: goto label_47aee4;
        case 0x47aee8u: goto label_47aee8;
        case 0x47aeecu: goto label_47aeec;
        case 0x47aef0u: goto label_47aef0;
        case 0x47aef4u: goto label_47aef4;
        case 0x47aef8u: goto label_47aef8;
        case 0x47aefcu: goto label_47aefc;
        case 0x47af00u: goto label_47af00;
        case 0x47af04u: goto label_47af04;
        case 0x47af08u: goto label_47af08;
        case 0x47af0cu: goto label_47af0c;
        default: break;
    }

    ctx->pc = 0x47a2e0u;

label_47a2e0:
    // 0x47a2e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47a2e4:
    // 0x47a2e4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x47a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_47a2e8:
    // 0x47a2e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x47a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_47a2ec:
    // 0x47a2ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a2f0:
    // 0x47a2f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47a2f4:
    // 0x47a2f4: 0x24a57620  addiu       $a1, $a1, 0x7620
    ctx->pc = 0x47a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30240));
label_47a2f8:
    // 0x47a2f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47a2fc:
    // 0x47a2fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47a300:
    // 0x47a300: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x47a300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47a304:
    // 0x47a304: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47a308:
    // 0x47a308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47a30c:
    // 0x47a30c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47a310:
    // 0x47a310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47a314:
    // 0x47a314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47a318:
    // 0x47a318: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x47a318u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_47a31c:
    // 0x47a31c: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x47a31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_47a320:
    // 0x47a320: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x47a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a324:
    // 0x47a324: 0x8c527610  lw          $s2, 0x7610($v0)
    ctx->pc = 0x47a324u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30224)));
label_47a328:
    // 0x47a328: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x47a328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_47a32c:
    // 0x47a32c: 0x90870070  lbu         $a3, 0x70($a0)
    ctx->pc = 0x47a32cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_47a330:
    // 0x47a330: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x47a330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_47a334:
    // 0x47a334: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x47a334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_47a338:
    // 0x47a338: 0x90930071  lbu         $s3, 0x71($a0)
    ctx->pc = 0x47a338u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_47a33c:
    // 0x47a33c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a340:
    // 0x47a340: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x47a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_47a344:
    // 0x47a344: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47a344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a348:
    // 0x47a348: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x47a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_47a34c:
    // 0x47a34c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x47a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_47a350:
    // 0x47a350: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x47a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_47a354:
    // 0x47a354: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x47a354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a358:
    // 0x47a358: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a35c:
    // 0x47a35c: 0x90430116  lbu         $v1, 0x116($v0)
    ctx->pc = 0x47a35cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_47a360:
    // 0x47a360: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x47a360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_47a364:
    // 0x47a364: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x47a364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_47a368:
    // 0x47a368: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_47a36c:
    if (ctx->pc == 0x47A36Cu) {
        ctx->pc = 0x47A36Cu;
            // 0x47a36c: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x47A370u;
        goto label_47a370;
    }
    ctx->pc = 0x47A368u;
    {
        const bool branch_taken_0x47a368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A368u;
            // 0x47a36c: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a368) {
            ctx->pc = 0x47A374u;
            goto label_47a374;
        }
    }
    ctx->pc = 0x47A370u;
label_47a370:
    // 0x47a370: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x47a370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_47a374:
    // 0x47a374: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x47a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_47a378:
    // 0x47a378: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x47a378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_47a37c:
    // 0x47a37c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_47a380:
    if (ctx->pc == 0x47A380u) {
        ctx->pc = 0x47A380u;
            // 0x47a380: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x47A384u;
        goto label_47a384;
    }
    ctx->pc = 0x47A37Cu;
    {
        const bool branch_taken_0x47a37c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a37c) {
            ctx->pc = 0x47A380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A37Cu;
            // 0x47a380: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A38Cu;
            goto label_47a38c;
        }
    }
    ctx->pc = 0x47A384u;
label_47a384:
    // 0x47a384: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x47a384u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47a388:
    // 0x47a388: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x47a388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_47a38c:
    // 0x47a38c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x47a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_47a390:
    // 0x47a390: 0x86c70072  lh          $a3, 0x72($s6)
    ctx->pc = 0x47a390u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 114)));
label_47a394:
    // 0x47a394: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x47a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a398:
    // 0x47a398: 0x82460027  lb          $a2, 0x27($s2)
    ctx->pc = 0x47a398u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
label_47a39c:
    // 0x47a39c: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x47a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a3a0:
    // 0x47a3a0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x47a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_47a3a4:
    // 0x47a3a4: 0x262503c0  addiu       $a1, $s1, 0x3C0
    ctx->pc = 0x47a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
label_47a3a8:
    // 0x47a3a8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x47a3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_47a3ac:
    // 0x47a3ac: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x47a3acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47a3b0:
    // 0x47a3b0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x47a3b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a3b4:
    // 0x47a3b4: 0x92420029  lbu         $v0, 0x29($s2)
    ctx->pc = 0x47a3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_47a3b8:
    // 0x47a3b8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x47a3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47a3bc:
    // 0x47a3bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x47a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_47a3c0:
    // 0x47a3c0: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x47a3c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_47a3c4:
    // 0x47a3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a3c8:
    // 0x47a3c8: 0x825023  subu        $t2, $a0, $v0
    ctx->pc = 0x47a3c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47a3cc:
    // 0x47a3cc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x47a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_47a3d0:
    // 0x47a3d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a3d4:
    // 0x47a3d4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x47a3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47a3d8:
    // 0x47a3d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a3dc:
    // 0x47a3dc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x47a3dcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a3e0:
    // 0x47a3e0: 0x0  nop
    ctx->pc = 0x47a3e0u;
    // NOP
label_47a3e4:
    // 0x47a3e4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x47a3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_47a3e8:
    // 0x47a3e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x47a3e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a3ec:
    // 0x47a3ec: 0x0  nop
    ctx->pc = 0x47a3ecu;
    // NOP
label_47a3f0:
    // 0x47a3f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a3f4:
    // 0x47a3f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47a3f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a3f8:
    // 0x47a3f8: 0x0  nop
    ctx->pc = 0x47a3f8u;
    // NOP
label_47a3fc:
    // 0x47a3fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a400:
    // 0x47a400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47a400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a404:
    // 0x47a404: 0x0  nop
    ctx->pc = 0x47a404u;
    // NOP
label_47a408:
    // 0x47a408: 0x460f0018  adda.s      $f0, $f15
    ctx->pc = 0x47a408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
label_47a40c:
    // 0x47a40c: 0x46020b5d  msub.s      $f13, $f1, $f2
    ctx->pc = 0x47a40cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_47a410:
    // 0x47a410: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x47a410u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_47a414:
    // 0x47a414: 0xc62003c8  lwc1        $f0, 0x3C8($s1)
    ctx->pc = 0x47a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a418:
    // 0x47a418: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a41c:
    // 0x47a41c: 0xc0bc284  jal         func_2F0A10
label_47a420:
    if (ctx->pc == 0x47A420u) {
        ctx->pc = 0x47A420u;
            // 0x47a420: 0x4602039c  madd.s      $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
        ctx->pc = 0x47A424u;
        goto label_47a424;
    }
    ctx->pc = 0x47A41Cu;
    SET_GPR_U32(ctx, 31, 0x47A424u);
    ctx->pc = 0x47A420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A41Cu;
            // 0x47a420: 0x4602039c  madd.s      $f14, $f0, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A424u; }
        if (ctx->pc != 0x47A424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A424u; }
        if (ctx->pc != 0x47A424u) { return; }
    }
    ctx->pc = 0x47A424u;
label_47a424:
    // 0x47a424: 0x92470024  lbu         $a3, 0x24($s2)
    ctx->pc = 0x47a424u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_47a428:
    // 0x47a428: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x47a428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47a42c:
    // 0x47a42c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x47a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_47a430:
    // 0x47a430: 0xc62002fc  lwc1        $f0, 0x2FC($s1)
    ctx->pc = 0x47a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a434:
    // 0x47a434: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x47a434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_47a438:
    // 0x47a438: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x47a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_47a43c:
    // 0x47a43c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x47a43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_47a440:
    // 0x47a440: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x47a440u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47a444:
    // 0x47a444: 0x82420028  lb          $v0, 0x28($s2)
    ctx->pc = 0x47a444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_47a448:
    // 0x47a448: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x47a448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_47a44c:
    // 0x47a44c: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x47a44cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_47a450:
    // 0x47a450: 0x92440029  lbu         $a0, 0x29($s2)
    ctx->pc = 0x47a450u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_47a454:
    // 0x47a454: 0x86c60074  lh          $a2, 0x74($s6)
    ctx->pc = 0x47a454u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 116)));
label_47a458:
    // 0x47a458: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x47a458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_47a45c:
    // 0x47a45c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x47a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_47a460:
    // 0x47a460: 0x26370390  addiu       $s7, $s1, 0x390
    ctx->pc = 0x47a460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_47a464:
    // 0x47a464: 0xa44823  subu        $t1, $a1, $a0
    ctx->pc = 0x47a464u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47a468:
    // 0x47a468: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x47a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_47a46c:
    // 0x47a46c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x47a46cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47a470:
    // 0x47a470: 0xc7a021  addu        $s4, $a2, $a3
    ctx->pc = 0x47a470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_47a474:
    // 0x47a474: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x47a474u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a478:
    // 0x47a478: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a47c:
    // 0x47a47c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47a47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47a480:
    // 0x47a480: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x47a480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_47a484:
    // 0x47a484: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a488:
    // 0x47a488: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x47a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_47a48c:
    // 0x47a48c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x47a48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47a490:
    // 0x47a490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a494:
    // 0x47a494: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47a494u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a498:
    // 0x47a498: 0x0  nop
    ctx->pc = 0x47a498u;
    // NOP
label_47a49c:
    // 0x47a49c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a4a0:
    // 0x47a4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a4a4:
    // 0x47a4a4: 0x0  nop
    ctx->pc = 0x47a4a4u;
    // NOP
label_47a4a8:
    // 0x47a4a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a4ac:
    // 0x47a4ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47a4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a4b0:
    // 0x47a4b0: 0x0  nop
    ctx->pc = 0x47a4b0u;
    // NOP
label_47a4b4:
    // 0x47a4b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47a4b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47a4b8:
    // 0x47a4b8: 0x4602201d  msub.s      $f0, $f4, $f2
    ctx->pc = 0x47a4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_47a4bc:
    // 0x47a4bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a4bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a4c0:
    // 0x47a4c0: 0xc623039c  lwc1        $f3, 0x39C($s1)
    ctx->pc = 0x47a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47a4c4:
    // 0x47a4c4: 0xc6220398  lwc1        $f2, 0x398($s1)
    ctx->pc = 0x47a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a4c8:
    // 0x47a4c8: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x47a4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_47a4cc:
    // 0x47a4cc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x47a4ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_47a4d0:
    // 0x47a4d0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x47a4d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_47a4d4:
    // 0x47a4d4: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x47a4d4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a4d8:
    // 0x47a4d8: 0x0  nop
    ctx->pc = 0x47a4d8u;
    // NOP
label_47a4dc:
    // 0x47a4dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a4e0:
    // 0x47a4e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x47a4e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_47a4e4:
    // 0x47a4e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x47a4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47a4e8:
    // 0x47a4e8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x47a4e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_47a4ec:
    // 0x47a4ec: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x47a4ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_47a4f0:
    // 0x47a4f0: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x47a4f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_47a4f4:
    // 0x47a4f4: 0x46030341  sub.s       $f13, $f0, $f3
    ctx->pc = 0x47a4f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_47a4f8:
    // 0x47a4f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a4fc:
    // 0x47a4fc: 0xc0bc284  jal         func_2F0A10
label_47a500:
    if (ctx->pc == 0x47A500u) {
        ctx->pc = 0x47A500u;
            // 0x47a500: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x47A504u;
        goto label_47a504;
    }
    ctx->pc = 0x47A4FCu;
    SET_GPR_U32(ctx, 31, 0x47A504u);
    ctx->pc = 0x47A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A4FCu;
            // 0x47a500: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A504u; }
        if (ctx->pc != 0x47A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A504u; }
        if (ctx->pc != 0x47A504u) { return; }
    }
    ctx->pc = 0x47A504u;
label_47a504:
    // 0x47a504: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x47a504u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a508:
    // 0x47a508: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x47a508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_47a50c:
    // 0x47a50c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x47a50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_47a510:
    // 0x47a510: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x47a510u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47a514:
    // 0x47a514: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x47a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_47a518:
    // 0x47a518: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x47a518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_47a51c:
    // 0x47a51c: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x47a51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_47a520:
    // 0x47a520: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x47a520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_47a524:
    // 0x47a524: 0x1557c2  srl         $t2, $s5, 31
    ctx->pc = 0x47a524u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_47a528:
    // 0x47a528: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a52c:
    // 0x47a52c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x47a52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47a530:
    // 0x47a530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a534:
    // 0x47a534: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47a534u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a538:
    // 0x47a538: 0x0  nop
    ctx->pc = 0x47a538u;
    // NOP
label_47a53c:
    // 0x47a53c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a540:
    // 0x47a540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a544:
    // 0x47a544: 0x4810  mfhi        $t1
    ctx->pc = 0x47a544u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_47a548:
    // 0x47a548: 0x94943  sra         $t1, $t1, 5
    ctx->pc = 0x47a548u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 5));
label_47a54c:
    // 0x47a54c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x47a54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_47a550:
    // 0x47a550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a554:
    // 0x47a554: 0x0  nop
    ctx->pc = 0x47a554u;
    // NOP
label_47a558:
    // 0x47a558: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a55c:
    // 0x47a55c: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x47a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47a560:
    // 0x47a560: 0xc646000c  lwc1        $f6, 0xC($s2)
    ctx->pc = 0x47a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_47a564:
    // 0x47a564: 0xc6450010  lwc1        $f5, 0x10($s2)
    ctx->pc = 0x47a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47a568:
    // 0x47a568: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x47a568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_47a56c:
    // 0x47a56c: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x47a56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_47a570:
    // 0x47a570: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x47a570u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_47a574:
    // 0x47a574: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x47a574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_47a578:
    // 0x47a578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a57c:
    // 0x47a57c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x47a57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47a580:
    // 0x47a580: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x47a580u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a584:
    // 0x47a584: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x47a584u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_47a588:
    // 0x47a588: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x47a588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_47a58c:
    // 0x47a58c: 0x2525002f  addiu       $a1, $t1, 0x2F
    ctx->pc = 0x47a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 47));
label_47a590:
    // 0x47a590: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x47a590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_47a594:
    // 0x47a594: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x47a594u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_47a598:
    // 0x47a598: 0x225a021  addu        $s4, $s1, $a1
    ctx->pc = 0x47a598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_47a59c:
    // 0x47a59c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x47a59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_47a5a0:
    // 0x47a5a0: 0x460c1018  adda.s      $f2, $f12
    ctx->pc = 0x47a5a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_47a5a4:
    // 0x47a5a4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x47a5a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_47a5a8:
    // 0x47a5a8: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x47a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a5ac:
    // 0x47a5ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47a5b0:
    // 0x47a5b0: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x47a5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_47a5b4:
    // 0x47a5b4: 0x2a9a823  subu        $s5, $s5, $t1
    ctx->pc = 0x47a5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_47a5b8:
    // 0x47a5b8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x47a5b8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a5bc:
    // 0x47a5bc: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x47a5bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_47a5c0:
    // 0x47a5c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a5c4:
    // 0x47a5c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x47a5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_47a5c8:
    // 0x47a5c8: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x47a5c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_47a5cc:
    // 0x47a5cc: 0x460103c0  add.s       $f15, $f0, $f1
    ctx->pc = 0x47a5ccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47a5d0:
    // 0x47a5d0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x47a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a5d4:
    // 0x47a5d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a5d8:
    // 0x47a5d8: 0xc0bc284  jal         func_2F0A10
label_47a5dc:
    if (ctx->pc == 0x47A5DCu) {
        ctx->pc = 0x47A5DCu;
            // 0x47a5dc: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->pc = 0x47A5E0u;
        goto label_47a5e0;
    }
    ctx->pc = 0x47A5D8u;
    SET_GPR_U32(ctx, 31, 0x47A5E0u);
    ctx->pc = 0x47A5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A5D8u;
            // 0x47a5dc: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A5E0u; }
        if (ctx->pc != 0x47A5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A5E0u; }
        if (ctx->pc != 0x47A5E0u) { return; }
    }
    ctx->pc = 0x47A5E0u;
label_47a5e0:
    // 0x47a5e0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x47a5e0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a5e4:
    // 0x47a5e4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x47a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_47a5e8:
    // 0x47a5e8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x47a5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_47a5ec:
    // 0x47a5ec: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x47a5ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47a5f0:
    // 0x47a5f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x47a5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_47a5f4:
    // 0x47a5f4: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x47a5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_47a5f8:
    // 0x47a5f8: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x47a5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_47a5fc:
    // 0x47a5fc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x47a5fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_47a600:
    // 0x47a600: 0x1557c2  srl         $t2, $s5, 31
    ctx->pc = 0x47a600u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_47a604:
    // 0x47a604: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a608:
    // 0x47a608: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x47a608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47a60c:
    // 0x47a60c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a610:
    // 0x47a610: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x47a610u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a614:
    // 0x47a614: 0x0  nop
    ctx->pc = 0x47a614u;
    // NOP
label_47a618:
    // 0x47a618: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a61c:
    // 0x47a61c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a620:
    // 0x47a620: 0x4810  mfhi        $t1
    ctx->pc = 0x47a620u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_47a624:
    // 0x47a624: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x47a624u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
label_47a628:
    // 0x47a628: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x47a628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_47a62c:
    // 0x47a62c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a630:
    // 0x47a630: 0x0  nop
    ctx->pc = 0x47a630u;
    // NOP
label_47a634:
    // 0x47a634: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a638:
    // 0x47a638: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x47a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47a63c:
    // 0x47a63c: 0xc646000c  lwc1        $f6, 0xC($s2)
    ctx->pc = 0x47a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_47a640:
    // 0x47a640: 0xc6450010  lwc1        $f5, 0x10($s2)
    ctx->pc = 0x47a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47a644:
    // 0x47a644: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x47a644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_47a648:
    // 0x47a648: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x47a648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_47a64c:
    // 0x47a64c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x47a64cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_47a650:
    // 0x47a650: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x47a650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_47a654:
    // 0x47a654: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a658:
    // 0x47a658: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x47a658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47a65c:
    // 0x47a65c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x47a65cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a660:
    // 0x47a660: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x47a660u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_47a664:
    // 0x47a664: 0x10a4821  addu        $t1, $t0, $t2
    ctx->pc = 0x47a664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_47a668:
    // 0x47a668: 0x2548002f  addiu       $t0, $t2, 0x2F
    ctx->pc = 0x47a668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 47));
label_47a66c:
    // 0x47a66c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x47a66cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_47a670:
    // 0x47a670: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x47a670u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_47a674:
    // 0x47a674: 0x2a9b823  subu        $s7, $s5, $t1
    ctx->pc = 0x47a674u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_47a678:
    // 0x47a678: 0x228a021  addu        $s4, $s1, $t0
    ctx->pc = 0x47a678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_47a67c:
    // 0x47a67c: 0x460c1018  adda.s      $f2, $f12
    ctx->pc = 0x47a67cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_47a680:
    // 0x47a680: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x47a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47a684:
    // 0x47a684: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x47a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a688:
    // 0x47a688: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x47a688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_47a68c:
    // 0x47a68c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x47a68cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a690:
    // 0x47a690: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x47a690u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_47a694:
    // 0x47a694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47a694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47a698:
    // 0x47a698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x47a698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_47a69c:
    // 0x47a69c: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x47a69cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_47a6a0:
    // 0x47a6a0: 0x460103c0  add.s       $f15, $f0, $f1
    ctx->pc = 0x47a6a0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47a6a4:
    // 0x47a6a4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x47a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a6a8:
    // 0x47a6a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a6ac:
    // 0x47a6ac: 0xc0bc284  jal         func_2F0A10
label_47a6b0:
    if (ctx->pc == 0x47A6B0u) {
        ctx->pc = 0x47A6B0u;
            // 0x47a6b0: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->pc = 0x47A6B4u;
        goto label_47a6b4;
    }
    ctx->pc = 0x47A6ACu;
    SET_GPR_U32(ctx, 31, 0x47A6B4u);
    ctx->pc = 0x47A6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A6ACu;
            // 0x47a6b0: 0x4606039c  madd.s      $f14, $f0, $f6 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A6B4u; }
        if (ctx->pc != 0x47A6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A6B4u; }
        if (ctx->pc != 0x47A6B4u) { return; }
    }
    ctx->pc = 0x47A6B4u;
label_47a6b4:
    // 0x47a6b4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x47a6b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a6b8:
    // 0x47a6b8: 0x26e2002f  addiu       $v0, $s7, 0x2F
    ctx->pc = 0x47a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 47));
label_47a6bc:
    // 0x47a6bc: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x47a6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_47a6c0:
    // 0x47a6c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_47a6c4:
    // 0x47a6c4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x47a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a6c8:
    // 0x47a6c8: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x47a6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_47a6cc:
    // 0x47a6cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_47a6d0:
    // 0x47a6d0: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x47a6d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_47a6d4:
    // 0x47a6d4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x47a6d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_47a6d8:
    // 0x47a6d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x47a6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47a6dc:
    // 0x47a6dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a6e0:
    // 0x47a6e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47a6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a6e4:
    // 0x47a6e4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x47a6e4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a6e8:
    // 0x47a6e8: 0x0  nop
    ctx->pc = 0x47a6e8u;
    // NOP
label_47a6ec:
    // 0x47a6ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47a6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47a6f0:
    // 0x47a6f0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47a6f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a6f4:
    // 0x47a6f4: 0x0  nop
    ctx->pc = 0x47a6f4u;
    // NOP
label_47a6f8:
    // 0x47a6f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47a6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_47a6fc:
    // 0x47a6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a700:
    // 0x47a700: 0x0  nop
    ctx->pc = 0x47a700u;
    // NOP
label_47a704:
    // 0x47a704: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x47a704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47a708:
    // 0x47a708: 0xc6850008  lwc1        $f5, 0x8($s4)
    ctx->pc = 0x47a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_47a70c:
    // 0x47a70c: 0xc647000c  lwc1        $f7, 0xC($s2)
    ctx->pc = 0x47a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_47a710:
    // 0x47a710: 0xc6460010  lwc1        $f6, 0x10($s2)
    ctx->pc = 0x47a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_47a714:
    // 0x47a714: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x47a714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_47a718:
    // 0x47a718: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x47a718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_47a71c:
    // 0x47a71c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x47a71cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_47a720:
    // 0x47a720: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x47a720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_47a724:
    // 0x47a724: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a728:
    // 0x47a728: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x47a728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47a72c:
    // 0x47a72c: 0x460c1818  adda.s      $f3, $f12
    ctx->pc = 0x47a72cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
label_47a730:
    // 0x47a730: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x47a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47a734:
    // 0x47a734: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a738:
    // 0x47a738: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x47a738u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_47a73c:
    // 0x47a73c: 0x0  nop
    ctx->pc = 0x47a73cu;
    // NOP
label_47a740:
    // 0x47a740: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x47a740u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_47a744:
    // 0x47a744: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x47a744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_47a748:
    // 0x47a748: 0x46020b41  sub.s       $f13, $f1, $f2
    ctx->pc = 0x47a748u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_47a74c:
    // 0x47a74c: 0x46020bc0  add.s       $f15, $f1, $f2
    ctx->pc = 0x47a74cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_47a750:
    // 0x47a750: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47a750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47a754:
    // 0x47a754: 0xc0bc284  jal         func_2F0A10
label_47a758:
    if (ctx->pc == 0x47A758u) {
        ctx->pc = 0x47A758u;
            // 0x47a758: 0x4607039c  madd.s      $f14, $f0, $f7 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[7]));
        ctx->pc = 0x47A75Cu;
        goto label_47a75c;
    }
    ctx->pc = 0x47A754u;
    SET_GPR_U32(ctx, 31, 0x47A75Cu);
    ctx->pc = 0x47A758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A754u;
            // 0x47a758: 0x4607039c  madd.s      $f14, $f0, $f7 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[7]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A75Cu; }
        if (ctx->pc != 0x47A75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A75Cu; }
        if (ctx->pc != 0x47A75Cu) { return; }
    }
    ctx->pc = 0x47A75Cu;
label_47a75c:
    // 0x47a75c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x47a75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_47a760:
    // 0x47a760: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47a760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47a764:
    // 0x47a764: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47a764u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47a768:
    // 0x47a768: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47a768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47a76c:
    // 0x47a76c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47a76cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47a770:
    // 0x47a770: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47a770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47a774:
    // 0x47a774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47a774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47a778:
    // 0x47a778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47a778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47a77c:
    // 0x47a77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47a77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47a780:
    // 0x47a780: 0x3e00008  jr          $ra
label_47a784:
    if (ctx->pc == 0x47A784u) {
        ctx->pc = 0x47A784u;
            // 0x47a784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47A788u;
        goto label_47a788;
    }
    ctx->pc = 0x47A780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A780u;
            // 0x47a784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47A788u;
label_47a788:
    // 0x47a788: 0x0  nop
    ctx->pc = 0x47a788u;
    // NOP
label_47a78c:
    // 0x47a78c: 0x0  nop
    ctx->pc = 0x47a78cu;
    // NOP
label_47a790:
    // 0x47a790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47a794:
    // 0x47a794: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47a794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47a798:
    // 0x47a798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47a79c:
    // 0x47a79c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x47a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_47a7a0:
    // 0x47a7a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47a7a4:
    // 0x47a7a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47a7a8:
    // 0x47a7a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47a7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47a7ac:
    // 0x47a7ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47a7b0:
    // 0x47a7b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x47a7b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_47a7b4:
    // 0x47a7b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47a7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47a7b8:
    // 0x47a7b8: 0xc4757750  lwc1        $f21, 0x7750($v1)
    ctx->pc = 0x47a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_47a7bc:
    // 0x47a7bc: 0x8cb08a08  lw          $s0, -0x75F8($a1)
    ctx->pc = 0x47a7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_47a7c0:
    // 0x47a7c0: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x47a7c0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47a7c4:
    // 0x47a7c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47a7c8:
    // 0x47a7c8: 0x8c667610  lw          $a2, 0x7610($v1)
    ctx->pc = 0x47a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30224)));
label_47a7cc:
    // 0x47a7cc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x47a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a7d0:
    // 0x47a7d0: 0x2ce10009  sltiu       $at, $a3, 0x9
    ctx->pc = 0x47a7d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_47a7d4:
    // 0x47a7d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x47a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_47a7d8:
    // 0x47a7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47a7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a7dc:
    // 0x47a7dc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x47a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_47a7e0:
    // 0x47a7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a7e4:
    // 0x47a7e4: 0x0  nop
    ctx->pc = 0x47a7e4u;
    // NOP
label_47a7e8:
    // 0x47a7e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x47a7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_47a7ec:
    // 0x47a7ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x47a7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_47a7f0:
    // 0x47a7f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a7f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_47a7f4:
    // 0x47a7f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47a7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47a7f8:
    // 0x47a7f8: 0xc4d40034  lwc1        $f20, 0x34($a2)
    ctx->pc = 0x47a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47a7fc:
    // 0x47a7fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x47a7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_47a800:
    // 0x47a800: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x47a800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_47a804:
    // 0x47a804: 0x10200198  beqz        $at, . + 4 + (0x198 << 2)
label_47a808:
    if (ctx->pc == 0x47A808u) {
        ctx->pc = 0x47A808u;
            // 0x47a808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A80Cu;
        goto label_47a80c;
    }
    ctx->pc = 0x47A804u;
    {
        const bool branch_taken_0x47a804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A804u;
            // 0x47a808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a804) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A80Cu;
label_47a80c:
    // 0x47a80c: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x47a80cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_47a810:
    // 0x47a810: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x47a810u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_47a814:
    // 0x47a814: 0x2508f460  addiu       $t0, $t0, -0xBA0
    ctx->pc = 0x47a814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964320));
label_47a818:
    // 0x47a818: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x47a818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_47a81c:
    // 0x47a81c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x47a81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_47a820:
    // 0x47a820: 0xe00008  jr          $a3
label_47a824:
    if (ctx->pc == 0x47A824u) {
        ctx->pc = 0x47A828u;
        goto label_47a828;
    }
    ctx->pc = 0x47A820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x47A828u: goto label_47a828;
            case 0x47A860u: goto label_47a860;
            case 0x47A938u: goto label_47a938;
            case 0x47AAA4u: goto label_47aaa4;
            case 0x47AC84u: goto label_47ac84;
            case 0x47ADBCu: goto label_47adbc;
            case 0x47ADD4u: goto label_47add4;
            case 0x47AE3Cu: goto label_47ae3c;
            case 0x47AE54u: goto label_47ae54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x47A828u;
label_47a828:
    // 0x47a828: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x47a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_47a82c:
    // 0x47a82c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47a830:
    // 0x47a830: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_47a834:
    if (ctx->pc == 0x47A834u) {
        ctx->pc = 0x47A834u;
            // 0x47a834: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x47A838u;
        goto label_47a838;
    }
    ctx->pc = 0x47A830u;
    {
        const bool branch_taken_0x47a830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47a830) {
            ctx->pc = 0x47A834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A830u;
            // 0x47a834: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A854u;
            goto label_47a854;
        }
    }
    ctx->pc = 0x47A838u;
label_47a838:
    // 0x47a838: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x47a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47a83c:
    // 0x47a83c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a840:
    // 0x47a840: 0x24427760  addiu       $v0, $v0, 0x7760
    ctx->pc = 0x47a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
label_47a844:
    // 0x47a844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47a844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a848:
    // 0x47a848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a84c:
    // 0x47a84c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x47a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_47a850:
    // 0x47a850: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47a850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47a854:
    // 0x47a854: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47a854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47a858:
    // 0x47a858: 0x320f809  jalr        $t9
label_47a85c:
    if (ctx->pc == 0x47A85Cu) {
        ctx->pc = 0x47A85Cu;
            // 0x47a85c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A860u;
        goto label_47a860;
    }
    ctx->pc = 0x47A858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A860u);
        ctx->pc = 0x47A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A858u;
            // 0x47a85c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A860u; }
            if (ctx->pc != 0x47A860u) { return; }
        }
        }
    }
    ctx->pc = 0x47A860u;
label_47a860:
    // 0x47a860: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47a860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47a864:
    // 0x47a864: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47a868:
    // 0x47a868: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x47a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_47a86c:
    // 0x47a86c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x47a86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_47a870:
    // 0x47a870: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_47a874:
    if (ctx->pc == 0x47A874u) {
        ctx->pc = 0x47A874u;
            // 0x47a874: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x47A878u;
        goto label_47a878;
    }
    ctx->pc = 0x47A870u;
    {
        const bool branch_taken_0x47a870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a870) {
            ctx->pc = 0x47A874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A870u;
            // 0x47a874: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A894u;
            goto label_47a894;
        }
    }
    ctx->pc = 0x47A878u;
label_47a878:
    // 0x47a878: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47a878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47a87c:
    // 0x47a87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47a880:
    // 0x47a880: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47a880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47a884:
    // 0x47a884: 0x320f809  jalr        $t9
label_47a888:
    if (ctx->pc == 0x47A888u) {
        ctx->pc = 0x47A888u;
            // 0x47a888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A88Cu;
        goto label_47a88c;
    }
    ctx->pc = 0x47A884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A88Cu);
        ctx->pc = 0x47A888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A884u;
            // 0x47a888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A88Cu; }
            if (ctx->pc != 0x47A88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47A88Cu;
label_47a88c:
    // 0x47a88c: 0x10000177  b           . + 4 + (0x177 << 2)
label_47a890:
    if (ctx->pc == 0x47A890u) {
        ctx->pc = 0x47A890u;
            // 0x47a890: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x47A894u;
        goto label_47a894;
    }
    ctx->pc = 0x47A88Cu;
    {
        const bool branch_taken_0x47a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A88Cu;
            // 0x47a890: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a88c) {
            ctx->pc = 0x47AE6Cu;
            goto label_47ae6c;
        }
    }
    ctx->pc = 0x47A894u;
label_47a894:
    // 0x47a894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47a898:
    // 0x47a898: 0x54830019  bnel        $a0, $v1, . + 4 + (0x19 << 2)
label_47a89c:
    if (ctx->pc == 0x47A89Cu) {
        ctx->pc = 0x47A89Cu;
            // 0x47a89c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47A8A0u;
        goto label_47a8a0;
    }
    ctx->pc = 0x47A898u;
    {
        const bool branch_taken_0x47a898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x47a898) {
            ctx->pc = 0x47A89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A898u;
            // 0x47a89c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A900u;
            goto label_47a900;
        }
    }
    ctx->pc = 0x47A8A0u;
label_47a8a0:
    // 0x47a8a0: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x47a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47a8a4:
    // 0x47a8a4: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x47a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a8a8:
    // 0x47a8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47a8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a8ac:
    // 0x47a8ac: 0x0  nop
    ctx->pc = 0x47a8acu;
    // NOP
label_47a8b0:
    // 0x47a8b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x47a8b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_47a8b4:
    // 0x47a8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47a8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47a8b8:
    // 0x47a8b8: 0x4500016b  bc1f        . + 4 + (0x16B << 2)
label_47a8bc:
    if (ctx->pc == 0x47A8BCu) {
        ctx->pc = 0x47A8BCu;
            // 0x47a8bc: 0xe6410084  swc1        $f1, 0x84($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->pc = 0x47A8C0u;
        goto label_47a8c0;
    }
    ctx->pc = 0x47A8B8u;
    {
        const bool branch_taken_0x47a8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A8B8u;
            // 0x47a8bc: 0xe6410084  swc1        $f1, 0x84($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a8b8) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A8C0u;
label_47a8c0:
    // 0x47a8c0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x47a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47a8c4:
    // 0x47a8c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a8c8:
    // 0x47a8c8: 0x24427760  addiu       $v0, $v0, 0x7760
    ctx->pc = 0x47a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
label_47a8cc:
    // 0x47a8cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a8d0:
    // 0x47a8d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a8d4:
    // 0x47a8d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47a8d8:
    // 0x47a8d8: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
label_47a8dc:
    if (ctx->pc == 0x47A8DCu) {
        ctx->pc = 0x47A8E0u;
        goto label_47a8e0;
    }
    ctx->pc = 0x47A8D8u;
    {
        const bool branch_taken_0x47a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x47a8d8) {
            ctx->pc = 0x47A8FCu;
            goto label_47a8fc;
        }
    }
    ctx->pc = 0x47A8E0u;
label_47a8e0:
    // 0x47a8e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47a8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47a8e4:
    // 0x47a8e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47a8e8:
    // 0x47a8e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47a8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47a8ec:
    // 0x47a8ec: 0x320f809  jalr        $t9
label_47a8f0:
    if (ctx->pc == 0x47A8F0u) {
        ctx->pc = 0x47A8F0u;
            // 0x47a8f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x47A8F4u;
        goto label_47a8f4;
    }
    ctx->pc = 0x47A8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A8F4u);
        ctx->pc = 0x47A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A8ECu;
            // 0x47a8f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A8F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A8F4u; }
            if (ctx->pc != 0x47A8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x47A8F4u;
label_47a8f4:
    // 0x47a8f4: 0x1000015c  b           . + 4 + (0x15C << 2)
label_47a8f8:
    if (ctx->pc == 0x47A8F8u) {
        ctx->pc = 0x47A8FCu;
        goto label_47a8fc;
    }
    ctx->pc = 0x47A8F4u;
    {
        const bool branch_taken_0x47a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a8f4) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A8FCu;
label_47a8fc:
    // 0x47a8fc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x47a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a900:
    // 0x47a900: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x47a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a904:
    // 0x47a904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47a904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47a908:
    // 0x47a908: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x47a908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47a90c:
    // 0x47a90c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_47a910:
    if (ctx->pc == 0x47A910u) {
        ctx->pc = 0x47A910u;
            // 0x47a910: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->pc = 0x47A914u;
        goto label_47a914;
    }
    ctx->pc = 0x47A90Cu;
    {
        const bool branch_taken_0x47a90c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47A910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A90Cu;
            // 0x47a910: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a90c) {
            ctx->pc = 0x47A928u;
            goto label_47a928;
        }
    }
    ctx->pc = 0x47A914u;
label_47a914:
    // 0x47a914: 0xe655007c  swc1        $f21, 0x7C($s2)
    ctx->pc = 0x47a914u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_47a918:
    // 0x47a918: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47a918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47a91c:
    // 0x47a91c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47a91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47a920:
    // 0x47a920: 0x320f809  jalr        $t9
label_47a924:
    if (ctx->pc == 0x47A924u) {
        ctx->pc = 0x47A924u;
            // 0x47a924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A928u;
        goto label_47a928;
    }
    ctx->pc = 0x47A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A928u);
        ctx->pc = 0x47A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A920u;
            // 0x47a924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A928u; }
            if (ctx->pc != 0x47A928u) { return; }
        }
        }
    }
    ctx->pc = 0x47A928u;
label_47a928:
    // 0x47a928: 0xc11088c  jal         func_442230
label_47a92c:
    if (ctx->pc == 0x47A92Cu) {
        ctx->pc = 0x47A92Cu;
            // 0x47a92c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x47A930u;
        goto label_47a930;
    }
    ctx->pc = 0x47A928u;
    SET_GPR_U32(ctx, 31, 0x47A930u);
    ctx->pc = 0x47A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47A928u;
            // 0x47a92c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A930u; }
        if (ctx->pc != 0x47A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47A930u; }
        if (ctx->pc != 0x47A930u) { return; }
    }
    ctx->pc = 0x47A930u;
label_47a930:
    // 0x47a930: 0x1000014d  b           . + 4 + (0x14D << 2)
label_47a934:
    if (ctx->pc == 0x47A934u) {
        ctx->pc = 0x47A938u;
        goto label_47a938;
    }
    ctx->pc = 0x47A930u;
    {
        const bool branch_taken_0x47a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a930) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A938u;
label_47a938:
    // 0x47a938: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a93c:
    // 0x47a93c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47a940:
    // 0x47a940: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47a944:
    // 0x47a944: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x47a944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_47a948:
    // 0x47a948: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_47a94c:
    if (ctx->pc == 0x47A94Cu) {
        ctx->pc = 0x47A94Cu;
            // 0x47a94c: 0x8e470060  lw          $a3, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x47A950u;
        goto label_47a950;
    }
    ctx->pc = 0x47A948u;
    {
        const bool branch_taken_0x47a948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a948) {
            ctx->pc = 0x47A94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A948u;
            // 0x47a94c: 0x8e470060  lw          $a3, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A968u;
            goto label_47a968;
        }
    }
    ctx->pc = 0x47A950u;
label_47a950:
    // 0x47a950: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a954:
    // 0x47a954: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47a954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47a958:
    // 0x47a958: 0x320f809  jalr        $t9
label_47a95c:
    if (ctx->pc == 0x47A95Cu) {
        ctx->pc = 0x47A95Cu;
            // 0x47a95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A960u;
        goto label_47a960;
    }
    ctx->pc = 0x47A958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A960u);
        ctx->pc = 0x47A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A958u;
            // 0x47a95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A960u; }
            if (ctx->pc != 0x47A960u) { return; }
        }
        }
    }
    ctx->pc = 0x47A960u;
label_47a960:
    // 0x47a960: 0x10000141  b           . + 4 + (0x141 << 2)
label_47a964:
    if (ctx->pc == 0x47A964u) {
        ctx->pc = 0x47A968u;
        goto label_47a968;
    }
    ctx->pc = 0x47A960u;
    {
        const bool branch_taken_0x47a960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a960) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A968u;
label_47a968:
    // 0x47a968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47a96c:
    // 0x47a96c: 0x54e20010  bnel        $a3, $v0, . + 4 + (0x10 << 2)
label_47a970:
    if (ctx->pc == 0x47A970u) {
        ctx->pc = 0x47A970u;
            // 0x47a970: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47A974u;
        goto label_47a974;
    }
    ctx->pc = 0x47A96Cu;
    {
        const bool branch_taken_0x47a96c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x47a96c) {
            ctx->pc = 0x47A970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A96Cu;
            // 0x47a970: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A9B0u;
            goto label_47a9b0;
        }
    }
    ctx->pc = 0x47A974u;
label_47a974:
    // 0x47a974: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x47a974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47a978:
    // 0x47a978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47a978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47a97c:
    // 0x47a97c: 0x24427760  addiu       $v0, $v0, 0x7760
    ctx->pc = 0x47a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
label_47a980:
    // 0x47a980: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x47a980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_47a984:
    // 0x47a984: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x47a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_47a988:
    // 0x47a988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47a98c:
    // 0x47a98c: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
label_47a990:
    if (ctx->pc == 0x47A990u) {
        ctx->pc = 0x47A994u;
        goto label_47a994;
    }
    ctx->pc = 0x47A98Cu;
    {
        const bool branch_taken_0x47a98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x47a98c) {
            ctx->pc = 0x47A9ACu;
            goto label_47a9ac;
        }
    }
    ctx->pc = 0x47A994u;
label_47a994:
    // 0x47a994: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47a994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47a998:
    // 0x47a998: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47a998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47a99c:
    // 0x47a99c: 0x320f809  jalr        $t9
label_47a9a0:
    if (ctx->pc == 0x47A9A0u) {
        ctx->pc = 0x47A9A0u;
            // 0x47a9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47A9A4u;
        goto label_47a9a4;
    }
    ctx->pc = 0x47A99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47A9A4u);
        ctx->pc = 0x47A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47A99Cu;
            // 0x47a9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47A9A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47A9A4u; }
            if (ctx->pc != 0x47A9A4u) { return; }
        }
        }
    }
    ctx->pc = 0x47A9A4u;
label_47a9a4:
    // 0x47a9a4: 0x10000130  b           . + 4 + (0x130 << 2)
label_47a9a8:
    if (ctx->pc == 0x47A9A8u) {
        ctx->pc = 0x47A9ACu;
        goto label_47a9ac;
    }
    ctx->pc = 0x47A9A4u;
    {
        const bool branch_taken_0x47a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a9a4) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47A9ACu;
label_47a9ac:
    // 0x47a9ac: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x47a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a9b0:
    // 0x47a9b0: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x47a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a9b4:
    // 0x47a9b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47a9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47a9b8:
    // 0x47a9b8: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x47a9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47a9bc:
    // 0x47a9bc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x47a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a9c0:
    // 0x47a9c0: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x47a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a9c4:
    // 0x47a9c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47a9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47a9c8:
    // 0x47a9c8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_47a9cc:
    if (ctx->pc == 0x47A9CCu) {
        ctx->pc = 0x47A9CCu;
            // 0x47a9cc: 0x86420072  lh          $v0, 0x72($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->pc = 0x47A9D0u;
        goto label_47a9d0;
    }
    ctx->pc = 0x47A9C8u;
    {
        const bool branch_taken_0x47a9c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47a9c8) {
            ctx->pc = 0x47A9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A9C8u;
            // 0x47a9cc: 0x86420072  lh          $v0, 0x72($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47A9D8u;
            goto label_47a9d8;
        }
    }
    ctx->pc = 0x47A9D0u;
label_47a9d0:
    // 0x47a9d0: 0xe6410078  swc1        $f1, 0x78($s2)
    ctx->pc = 0x47a9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47a9d4:
    // 0x47a9d4: 0x86420072  lh          $v0, 0x72($s2)
    ctx->pc = 0x47a9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
label_47a9d8:
    // 0x47a9d8: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x47a9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_47a9dc:
    // 0x47a9dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x47a9dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_47a9e0:
    // 0x47a9e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x47a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47a9e4:
    // 0x47a9e4: 0xa6420072  sh          $v0, 0x72($s2)
    ctx->pc = 0x47a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 114), (uint16_t)GPR_U32(ctx, 2));
label_47a9e8:
    // 0x47a9e8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x47a9e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_47a9ec:
    // 0x47a9ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47a9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47a9f0:
    // 0x47a9f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47a9f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47a9f4:
    // 0x47a9f4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x47a9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_47a9f8:
    // 0x47a9f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_47a9fc:
    if (ctx->pc == 0x47A9FCu) {
        ctx->pc = 0x47A9FCu;
            // 0x47a9fc: 0x92440070  lbu         $a0, 0x70($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x47AA00u;
        goto label_47aa00;
    }
    ctx->pc = 0x47A9F8u;
    {
        const bool branch_taken_0x47a9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a9f8) {
            ctx->pc = 0x47A9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47A9F8u;
            // 0x47a9fc: 0x92440070  lbu         $a0, 0x70($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AA08u;
            goto label_47aa08;
        }
    }
    ctx->pc = 0x47AA00u;
label_47aa00:
    // 0x47aa00: 0xa6440072  sh          $a0, 0x72($s2)
    ctx->pc = 0x47aa00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 114), (uint16_t)GPR_U32(ctx, 4));
label_47aa04:
    // 0x47aa04: 0x92440070  lbu         $a0, 0x70($s2)
    ctx->pc = 0x47aa04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_47aa08:
    // 0x47aa08: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x47aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_47aa0c:
    // 0x47aa0c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x47aa0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_47aa10:
    // 0x47aa10: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_47aa14:
    if (ctx->pc == 0x47AA14u) {
        ctx->pc = 0x47AA14u;
            // 0x47aa14: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x47AA18u;
        goto label_47aa18;
    }
    ctx->pc = 0x47AA10u;
    {
        const bool branch_taken_0x47aa10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa10) {
            ctx->pc = 0x47AA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA10u;
            // 0x47aa14: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AA28u;
            goto label_47aa28;
        }
    }
    ctx->pc = 0x47AA18u;
label_47aa18:
    // 0x47aa18: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x47aa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47aa1c:
    // 0x47aa1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47aa20:
    // 0x47aa20: 0x1000001c  b           . + 4 + (0x1C << 2)
label_47aa24:
    if (ctx->pc == 0x47AA24u) {
        ctx->pc = 0x47AA24u;
            // 0x47aa24: 0xa2420070  sb          $v0, 0x70($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x47AA28u;
        goto label_47aa28;
    }
    ctx->pc = 0x47AA20u;
    {
        const bool branch_taken_0x47aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA20u;
            // 0x47aa24: 0xa2420070  sb          $v0, 0x70($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aa20) {
            ctx->pc = 0x47AA94u;
            goto label_47aa94;
        }
    }
    ctx->pc = 0x47AA28u;
label_47aa28:
    // 0x47aa28: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x47aa28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_47aa2c:
    // 0x47aa2c: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x47aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_47aa30:
    // 0x47aa30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x47aa30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_47aa34:
    // 0x47aa34: 0x86420074  lh          $v0, 0x74($s2)
    ctx->pc = 0x47aa34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_47aa38:
    // 0x47aa38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x47aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47aa3c:
    // 0x47aa3c: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x47aa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_47aa40:
    // 0x47aa40: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x47aa40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_47aa44:
    // 0x47aa44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47aa48:
    // 0x47aa48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47aa48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47aa4c:
    // 0x47aa4c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x47aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_47aa50:
    // 0x47aa50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_47aa54:
    if (ctx->pc == 0x47AA54u) {
        ctx->pc = 0x47AA54u;
            // 0x47aa54: 0x92440071  lbu         $a0, 0x71($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
        ctx->pc = 0x47AA58u;
        goto label_47aa58;
    }
    ctx->pc = 0x47AA50u;
    {
        const bool branch_taken_0x47aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47aa50) {
            ctx->pc = 0x47AA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA50u;
            // 0x47aa54: 0x92440071  lbu         $a0, 0x71($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AA60u;
            goto label_47aa60;
        }
    }
    ctx->pc = 0x47AA58u;
label_47aa58:
    // 0x47aa58: 0xa6440074  sh          $a0, 0x74($s2)
    ctx->pc = 0x47aa58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 4));
label_47aa5c:
    // 0x47aa5c: 0x92440071  lbu         $a0, 0x71($s2)
    ctx->pc = 0x47aa5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
label_47aa60:
    // 0x47aa60: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x47aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_47aa64:
    // 0x47aa64: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x47aa64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_47aa68:
    // 0x47aa68: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_47aa6c:
    if (ctx->pc == 0x47AA6Cu) {
        ctx->pc = 0x47AA6Cu;
            // 0x47aa6c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x47AA70u;
        goto label_47aa70;
    }
    ctx->pc = 0x47AA68u;
    {
        const bool branch_taken_0x47aa68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa68) {
            ctx->pc = 0x47AA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA68u;
            // 0x47aa6c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AA80u;
            goto label_47aa80;
        }
    }
    ctx->pc = 0x47AA70u;
label_47aa70:
    // 0x47aa70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x47aa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47aa74:
    // 0x47aa74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47aa78:
    // 0x47aa78: 0x10000006  b           . + 4 + (0x6 << 2)
label_47aa7c:
    if (ctx->pc == 0x47AA7Cu) {
        ctx->pc = 0x47AA7Cu;
            // 0x47aa7c: 0xa2420071  sb          $v0, 0x71($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x47AA80u;
        goto label_47aa80;
    }
    ctx->pc = 0x47AA78u;
    {
        const bool branch_taken_0x47aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA78u;
            // 0x47aa7c: 0xa2420071  sb          $v0, 0x71($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aa78) {
            ctx->pc = 0x47AA94u;
            goto label_47aa94;
        }
    }
    ctx->pc = 0x47AA80u;
label_47aa80:
    // 0x47aa80: 0xa2420071  sb          $v0, 0x71($s2)
    ctx->pc = 0x47aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 2));
label_47aa84:
    // 0x47aa84: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47aa84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47aa88:
    // 0x47aa88: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47aa88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47aa8c:
    // 0x47aa8c: 0x320f809  jalr        $t9
label_47aa90:
    if (ctx->pc == 0x47AA90u) {
        ctx->pc = 0x47AA90u;
            // 0x47aa90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AA94u;
        goto label_47aa94;
    }
    ctx->pc = 0x47AA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AA94u);
        ctx->pc = 0x47AA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA8Cu;
            // 0x47aa90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AA94u; }
            if (ctx->pc != 0x47AA94u) { return; }
        }
        }
    }
    ctx->pc = 0x47AA94u;
label_47aa94:
    // 0x47aa94: 0xc11088c  jal         func_442230
label_47aa98:
    if (ctx->pc == 0x47AA98u) {
        ctx->pc = 0x47AA98u;
            // 0x47aa98: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x47AA9Cu;
        goto label_47aa9c;
    }
    ctx->pc = 0x47AA94u;
    SET_GPR_U32(ctx, 31, 0x47AA9Cu);
    ctx->pc = 0x47AA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AA94u;
            // 0x47aa98: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AA9Cu; }
        if (ctx->pc != 0x47AA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AA9Cu; }
        if (ctx->pc != 0x47AA9Cu) { return; }
    }
    ctx->pc = 0x47AA9Cu;
label_47aa9c:
    // 0x47aa9c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_47aaa0:
    if (ctx->pc == 0x47AAA0u) {
        ctx->pc = 0x47AAA4u;
        goto label_47aaa4;
    }
    ctx->pc = 0x47AA9Cu;
    {
        const bool branch_taken_0x47aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa9c) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AAA4u;
label_47aaa4:
    // 0x47aaa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47aaa8:
    // 0x47aaa8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47aaac:
    // 0x47aaac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47aab0:
    // 0x47aab0: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x47aab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_47aab4:
    // 0x47aab4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_47aab8:
    if (ctx->pc == 0x47AAB8u) {
        ctx->pc = 0x47AAB8u;
            // 0x47aab8: 0x8e430060  lw          $v1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x47AABCu;
        goto label_47aabc;
    }
    ctx->pc = 0x47AAB4u;
    {
        const bool branch_taken_0x47aab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aab4) {
            ctx->pc = 0x47AAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AAB4u;
            // 0x47aab8: 0x8e430060  lw          $v1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AAD4u;
            goto label_47aad4;
        }
    }
    ctx->pc = 0x47AABCu;
label_47aabc:
    // 0x47aabc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47aabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47aac0:
    // 0x47aac0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47aac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47aac4:
    // 0x47aac4: 0x320f809  jalr        $t9
label_47aac8:
    if (ctx->pc == 0x47AAC8u) {
        ctx->pc = 0x47AAC8u;
            // 0x47aac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AACCu;
        goto label_47aacc;
    }
    ctx->pc = 0x47AAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AACCu);
        ctx->pc = 0x47AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AAC4u;
            // 0x47aac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AACCu; }
            if (ctx->pc != 0x47AACCu) { return; }
        }
        }
    }
    ctx->pc = 0x47AACCu;
label_47aacc:
    // 0x47aacc: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_47aad0:
    if (ctx->pc == 0x47AAD0u) {
        ctx->pc = 0x47AAD4u;
        goto label_47aad4;
    }
    ctx->pc = 0x47AACCu;
    {
        const bool branch_taken_0x47aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aacc) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AAD4u;
label_47aad4:
    // 0x47aad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47aad8:
    // 0x47aad8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_47aadc:
    if (ctx->pc == 0x47AADCu) {
        ctx->pc = 0x47AADCu;
            // 0x47aadc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47AAE0u;
        goto label_47aae0;
    }
    ctx->pc = 0x47AAD8u;
    {
        const bool branch_taken_0x47aad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47aad8) {
            ctx->pc = 0x47AADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AAD8u;
            // 0x47aadc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AB1Cu;
            goto label_47ab1c;
        }
    }
    ctx->pc = 0x47AAE0u;
label_47aae0:
    // 0x47aae0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x47aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47aae4:
    // 0x47aae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47aae8:
    // 0x47aae8: 0x24427760  addiu       $v0, $v0, 0x7760
    ctx->pc = 0x47aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
label_47aaec:
    // 0x47aaec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47aaf0:
    // 0x47aaf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47aaf4:
    // 0x47aaf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47aaf8:
    // 0x47aaf8: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
label_47aafc:
    if (ctx->pc == 0x47AAFCu) {
        ctx->pc = 0x47AB00u;
        goto label_47ab00;
    }
    ctx->pc = 0x47AAF8u;
    {
        const bool branch_taken_0x47aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x47aaf8) {
            ctx->pc = 0x47AB18u;
            goto label_47ab18;
        }
    }
    ctx->pc = 0x47AB00u;
label_47ab00:
    // 0x47ab00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ab00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ab04:
    // 0x47ab04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47ab04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47ab08:
    // 0x47ab08: 0x320f809  jalr        $t9
label_47ab0c:
    if (ctx->pc == 0x47AB0Cu) {
        ctx->pc = 0x47AB0Cu;
            // 0x47ab0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AB10u;
        goto label_47ab10;
    }
    ctx->pc = 0x47AB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AB10u);
        ctx->pc = 0x47AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AB08u;
            // 0x47ab0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AB10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AB10u; }
            if (ctx->pc != 0x47AB10u) { return; }
        }
        }
    }
    ctx->pc = 0x47AB10u;
label_47ab10:
    // 0x47ab10: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_47ab14:
    if (ctx->pc == 0x47AB14u) {
        ctx->pc = 0x47AB18u;
        goto label_47ab18;
    }
    ctx->pc = 0x47AB10u;
    {
        const bool branch_taken_0x47ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ab10) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AB18u;
label_47ab18:
    // 0x47ab18: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x47ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ab1c:
    // 0x47ab1c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x47ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab20:
    // 0x47ab20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47ab20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47ab24:
    // 0x47ab24: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x47ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47ab28:
    // 0x47ab28: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x47ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ab2c:
    // 0x47ab2c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x47ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab30:
    // 0x47ab30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47ab30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ab34:
    // 0x47ab34: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_47ab38:
    if (ctx->pc == 0x47AB38u) {
        ctx->pc = 0x47AB38u;
            // 0x47ab38: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47AB3Cu;
        goto label_47ab3c;
    }
    ctx->pc = 0x47AB34u;
    {
        const bool branch_taken_0x47ab34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47ab34) {
            ctx->pc = 0x47AB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AB34u;
            // 0x47ab38: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AB44u;
            goto label_47ab44;
        }
    }
    ctx->pc = 0x47AB3Cu;
label_47ab3c:
    // 0x47ab3c: 0xe6410078  swc1        $f1, 0x78($s2)
    ctx->pc = 0x47ab3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47ab40:
    // 0x47ab40: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x47ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ab44:
    // 0x47ab44: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x47ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab48:
    // 0x47ab48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47ab48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47ab4c:
    // 0x47ab4c: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x47ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_47ab50:
    // 0x47ab50: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x47ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ab54:
    // 0x47ab54: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x47ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47ab58:
    // 0x47ab58: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x47ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab5c:
    // 0x47ab5c: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x47ab5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_47ab60:
    // 0x47ab60: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x47ab60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_47ab64:
    // 0x47ab64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47ab64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ab68:
    // 0x47ab68: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_47ab6c:
    if (ctx->pc == 0x47AB6Cu) {
        ctx->pc = 0x47AB6Cu;
            // 0x47ab6c: 0xc4c10030  lwc1        $f1, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x47AB70u;
        goto label_47ab70;
    }
    ctx->pc = 0x47AB68u;
    {
        const bool branch_taken_0x47ab68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47ab68) {
            ctx->pc = 0x47AB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AB68u;
            // 0x47ab6c: 0xc4c10030  lwc1        $f1, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AB78u;
            goto label_47ab78;
        }
    }
    ctx->pc = 0x47AB70u;
label_47ab70:
    // 0x47ab70: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x47ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_47ab74:
    // 0x47ab74: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x47ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ab78:
    // 0x47ab78: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x47ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab7c:
    // 0x47ab7c: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x47ab7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_47ab80:
    // 0x47ab80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47ab80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ab84:
    // 0x47ab84: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_47ab88:
    if (ctx->pc == 0x47AB88u) {
        ctx->pc = 0x47AB88u;
            // 0x47ab88: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x47AB8Cu;
        goto label_47ab8c;
    }
    ctx->pc = 0x47AB84u;
    {
        const bool branch_taken_0x47ab84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47ab84) {
            ctx->pc = 0x47AB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AB84u;
            // 0x47ab88: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47ABF4u;
            goto label_47abf4;
        }
    }
    ctx->pc = 0x47AB8Cu;
label_47ab8c:
    // 0x47ab8c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x47ab8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_47ab90:
    // 0x47ab90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x47ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_47ab94:
    // 0x47ab94: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x47ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ab98:
    // 0x47ab98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47ab9c:
    // 0x47ab9c: 0x0  nop
    ctx->pc = 0x47ab9cu;
    // NOP
label_47aba0:
    // 0x47aba0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47aba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47aba4:
    // 0x47aba4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x47aba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47aba8:
    // 0x47aba8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_47abac:
    if (ctx->pc == 0x47ABACu) {
        ctx->pc = 0x47ABACu;
            // 0x47abac: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x47ABB0u;
        goto label_47abb0;
    }
    ctx->pc = 0x47ABA8u;
    {
        const bool branch_taken_0x47aba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ABA8u;
            // 0x47abac: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aba8) {
            ctx->pc = 0x47ABD4u;
            goto label_47abd4;
        }
    }
    ctx->pc = 0x47ABB0u;
label_47abb0:
    // 0x47abb0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x47abb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_47abb4:
    // 0x47abb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x47abb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47abb8:
    // 0x47abb8: 0xc4c30034  lwc1        $f3, 0x34($a2)
    ctx->pc = 0x47abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47abbc:
    // 0x47abbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47abbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47abc0:
    // 0x47abc0: 0xc4c2003c  lwc1        $f2, 0x3C($a2)
    ctx->pc = 0x47abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47abc4:
    // 0x47abc4: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x47abc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_47abc8:
    // 0x47abc8: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x47abc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_47abcc:
    // 0x47abcc: 0x10000008  b           . + 4 + (0x8 << 2)
label_47abd0:
    if (ctx->pc == 0x47ABD0u) {
        ctx->pc = 0x47ABD0u;
            // 0x47abd0: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x47ABD4u;
        goto label_47abd4;
    }
    ctx->pc = 0x47ABCCu;
    {
        const bool branch_taken_0x47abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ABCCu;
            // 0x47abd0: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47abcc) {
            ctx->pc = 0x47ABF0u;
            goto label_47abf0;
        }
    }
    ctx->pc = 0x47ABD4u;
label_47abd4:
    // 0x47abd4: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x47abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47abd8:
    // 0x47abd8: 0xc4c1003c  lwc1        $f1, 0x3C($a2)
    ctx->pc = 0x47abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47abdc:
    // 0x47abdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47abdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47abe0:
    // 0x47abe0: 0x0  nop
    ctx->pc = 0x47abe0u;
    // NOP
label_47abe4:
    // 0x47abe4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x47abe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_47abe8:
    // 0x47abe8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x47abe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_47abec:
    // 0x47abec: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x47abecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_47abf0:
    // 0x47abf0: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x47abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_47abf4:
    // 0x47abf4: 0xc11088c  jal         func_442230
label_47abf8:
    if (ctx->pc == 0x47ABF8u) {
        ctx->pc = 0x47ABFCu;
        goto label_47abfc;
    }
    ctx->pc = 0x47ABF4u;
    SET_GPR_U32(ctx, 31, 0x47ABFCu);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ABFCu; }
        if (ctx->pc != 0x47ABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ABFCu; }
        if (ctx->pc != 0x47ABFCu) { return; }
    }
    ctx->pc = 0x47ABFCu;
label_47abfc:
    // 0x47abfc: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_47ac00:
    if (ctx->pc == 0x47AC00u) {
        ctx->pc = 0x47AC00u;
            // 0x47ac00: 0x8e45008c  lw          $a1, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x47AC04u;
        goto label_47ac04;
    }
    ctx->pc = 0x47ABFCu;
    {
        const bool branch_taken_0x47abfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47abfc) {
            ctx->pc = 0x47AC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47ABFCu;
            // 0x47ac00: 0x8e45008c  lw          $a1, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AC1Cu;
            goto label_47ac1c;
        }
    }
    ctx->pc = 0x47AC04u;
label_47ac04:
    // 0x47ac04: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x47ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_47ac08:
    // 0x47ac08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x47ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_47ac0c:
    // 0x47ac0c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x47ac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_47ac10:
    // 0x47ac10: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x47ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_47ac14:
    // 0x47ac14: 0x10000005  b           . + 4 + (0x5 << 2)
label_47ac18:
    if (ctx->pc == 0x47AC18u) {
        ctx->pc = 0x47AC18u;
            // 0x47ac18: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->pc = 0x47AC1Cu;
        goto label_47ac1c;
    }
    ctx->pc = 0x47AC14u;
    {
        const bool branch_taken_0x47ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AC14u;
            // 0x47ac18: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac14) {
            ctx->pc = 0x47AC2Cu;
            goto label_47ac2c;
        }
    }
    ctx->pc = 0x47AC1Cu;
label_47ac1c:
    // 0x47ac1c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x47ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_47ac20:
    // 0x47ac20: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x47ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_47ac24:
    // 0x47ac24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x47ac24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_47ac28:
    // 0x47ac28: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x47ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_47ac2c:
    // 0x47ac2c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x47ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47ac30:
    // 0x47ac30: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x47ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ac34:
    // 0x47ac34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ac34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47ac38:
    // 0x47ac38: 0x0  nop
    ctx->pc = 0x47ac38u;
    // NOP
label_47ac3c:
    // 0x47ac3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x47ac3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_47ac40:
    // 0x47ac40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47ac40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ac44:
    // 0x47ac44: 0x45000088  bc1f        . + 4 + (0x88 << 2)
label_47ac48:
    if (ctx->pc == 0x47AC48u) {
        ctx->pc = 0x47AC48u;
            // 0x47ac48: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->pc = 0x47AC4Cu;
        goto label_47ac4c;
    }
    ctx->pc = 0x47AC44u;
    {
        const bool branch_taken_0x47ac44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AC44u;
            // 0x47ac48: 0xe641006c  swc1        $f1, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ac44) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AC4Cu;
label_47ac4c:
    // 0x47ac4c: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x47ac4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_47ac50:
    // 0x47ac50: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x47ac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_47ac54:
    // 0x47ac54: 0xc11088c  jal         func_442230
label_47ac58:
    if (ctx->pc == 0x47AC58u) {
        ctx->pc = 0x47AC58u;
            // 0x47ac58: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x47AC5Cu;
        goto label_47ac5c;
    }
    ctx->pc = 0x47AC54u;
    SET_GPR_U32(ctx, 31, 0x47AC5Cu);
    ctx->pc = 0x47AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AC54u;
            // 0x47ac58: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AC5Cu; }
        if (ctx->pc != 0x47AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AC5Cu; }
        if (ctx->pc != 0x47AC5Cu) { return; }
    }
    ctx->pc = 0x47AC5Cu;
label_47ac5c:
    // 0x47ac5c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x47ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_47ac60:
    // 0x47ac60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47ac64:
    // 0x47ac64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47ac68:
    // 0x47ac68: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x47ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_47ac6c:
    // 0x47ac6c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47ac6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47ac70:
    // 0x47ac70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47ac70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47ac74:
    // 0x47ac74: 0x320f809  jalr        $t9
label_47ac78:
    if (ctx->pc == 0x47AC78u) {
        ctx->pc = 0x47AC78u;
            // 0x47ac78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AC7Cu;
        goto label_47ac7c;
    }
    ctx->pc = 0x47AC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AC7Cu);
        ctx->pc = 0x47AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AC74u;
            // 0x47ac78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AC7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AC7Cu; }
            if (ctx->pc != 0x47AC7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47AC7Cu;
label_47ac7c:
    // 0x47ac7c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_47ac80:
    if (ctx->pc == 0x47AC80u) {
        ctx->pc = 0x47AC84u;
        goto label_47ac84;
    }
    ctx->pc = 0x47AC7Cu;
    {
        const bool branch_taken_0x47ac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ac7c) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AC84u;
label_47ac84:
    // 0x47ac84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47ac88:
    // 0x47ac88: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47ac8c:
    // 0x47ac8c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47ac90:
    // 0x47ac90: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x47ac90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_47ac94:
    // 0x47ac94: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_47ac98:
    if (ctx->pc == 0x47AC98u) {
        ctx->pc = 0x47AC98u;
            // 0x47ac98: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x47AC9Cu;
        goto label_47ac9c;
    }
    ctx->pc = 0x47AC94u;
    {
        const bool branch_taken_0x47ac94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ac94) {
            ctx->pc = 0x47AC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AC94u;
            // 0x47ac98: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47ACB4u;
            goto label_47acb4;
        }
    }
    ctx->pc = 0x47AC9Cu;
label_47ac9c:
    // 0x47ac9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ac9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47aca0:
    // 0x47aca0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47aca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47aca4:
    // 0x47aca4: 0x320f809  jalr        $t9
label_47aca8:
    if (ctx->pc == 0x47ACA8u) {
        ctx->pc = 0x47ACA8u;
            // 0x47aca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ACACu;
        goto label_47acac;
    }
    ctx->pc = 0x47ACA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47ACACu);
        ctx->pc = 0x47ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ACA4u;
            // 0x47aca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47ACACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47ACACu; }
            if (ctx->pc != 0x47ACACu) { return; }
        }
        }
    }
    ctx->pc = 0x47ACACu;
label_47acac:
    // 0x47acac: 0x1000006e  b           . + 4 + (0x6E << 2)
label_47acb0:
    if (ctx->pc == 0x47ACB0u) {
        ctx->pc = 0x47ACB4u;
        goto label_47acb4;
    }
    ctx->pc = 0x47ACACu;
    {
        const bool branch_taken_0x47acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47acac) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47ACB4u;
label_47acb4:
    // 0x47acb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47acb8:
    // 0x47acb8: 0x54c20010  bnel        $a2, $v0, . + 4 + (0x10 << 2)
label_47acbc:
    if (ctx->pc == 0x47ACBCu) {
        ctx->pc = 0x47ACBCu;
            // 0x47acbc: 0x86440072  lh          $a0, 0x72($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->pc = 0x47ACC0u;
        goto label_47acc0;
    }
    ctx->pc = 0x47ACB8u;
    {
        const bool branch_taken_0x47acb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x47acb8) {
            ctx->pc = 0x47ACBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47ACB8u;
            // 0x47acbc: 0x86440072  lh          $a0, 0x72($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47ACFCu;
            goto label_47acfc;
        }
    }
    ctx->pc = 0x47ACC0u;
label_47acc0:
    // 0x47acc0: 0x8e460058  lw          $a2, 0x58($s2)
    ctx->pc = 0x47acc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_47acc4:
    // 0x47acc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47acc8:
    // 0x47acc8: 0x24427760  addiu       $v0, $v0, 0x7760
    ctx->pc = 0x47acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
label_47accc:
    // 0x47accc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x47acccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47acd0:
    // 0x47acd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_47acd4:
    // 0x47acd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47acd8:
    // 0x47acd8: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
label_47acdc:
    if (ctx->pc == 0x47ACDCu) {
        ctx->pc = 0x47ACE0u;
        goto label_47ace0;
    }
    ctx->pc = 0x47ACD8u;
    {
        const bool branch_taken_0x47acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x47acd8) {
            ctx->pc = 0x47ACF8u;
            goto label_47acf8;
        }
    }
    ctx->pc = 0x47ACE0u;
label_47ace0:
    // 0x47ace0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ace0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ace4:
    // 0x47ace4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47ace4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47ace8:
    // 0x47ace8: 0x320f809  jalr        $t9
label_47acec:
    if (ctx->pc == 0x47ACECu) {
        ctx->pc = 0x47ACECu;
            // 0x47acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ACF0u;
        goto label_47acf0;
    }
    ctx->pc = 0x47ACE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47ACF0u);
        ctx->pc = 0x47ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ACE8u;
            // 0x47acec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47ACF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47ACF0u; }
            if (ctx->pc != 0x47ACF0u) { return; }
        }
        }
    }
    ctx->pc = 0x47ACF0u;
label_47acf0:
    // 0x47acf0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_47acf4:
    if (ctx->pc == 0x47ACF4u) {
        ctx->pc = 0x47ACF8u;
        goto label_47acf8;
    }
    ctx->pc = 0x47ACF0u;
    {
        const bool branch_taken_0x47acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47acf0) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47ACF8u;
label_47acf8:
    // 0x47acf8: 0x86440072  lh          $a0, 0x72($s2)
    ctx->pc = 0x47acf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 114)));
label_47acfc:
    // 0x47acfc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x47acfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_47ad00:
    // 0x47ad00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ad00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47ad04:
    // 0x47ad04: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x47ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47ad08:
    // 0x47ad08: 0xa6420072  sh          $v0, 0x72($s2)
    ctx->pc = 0x47ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 114), (uint16_t)GPR_U32(ctx, 2));
label_47ad0c:
    // 0x47ad0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47ad10:
    // 0x47ad10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ad10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47ad14:
    // 0x47ad14: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_47ad18:
    if (ctx->pc == 0x47AD18u) {
        ctx->pc = 0x47AD18u;
            // 0x47ad18: 0x92440070  lbu         $a0, 0x70($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x47AD1Cu;
        goto label_47ad1c;
    }
    ctx->pc = 0x47AD14u;
    {
        const bool branch_taken_0x47ad14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x47ad14) {
            ctx->pc = 0x47AD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AD14u;
            // 0x47ad18: 0x92440070  lbu         $a0, 0x70($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AD24u;
            goto label_47ad24;
        }
    }
    ctx->pc = 0x47AD1Cu;
label_47ad1c:
    // 0x47ad1c: 0xa6400072  sh          $zero, 0x72($s2)
    ctx->pc = 0x47ad1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 114), (uint16_t)GPR_U32(ctx, 0));
label_47ad20:
    // 0x47ad20: 0x92440070  lbu         $a0, 0x70($s2)
    ctx->pc = 0x47ad20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_47ad24:
    // 0x47ad24: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x47ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_47ad28:
    // 0x47ad28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47ad2c:
    if (ctx->pc == 0x47AD2Cu) {
        ctx->pc = 0x47AD2Cu;
            // 0x47ad2c: 0xa2400070  sb          $zero, 0x70($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x47AD30u;
        goto label_47ad30;
    }
    ctx->pc = 0x47AD28u;
    {
        const bool branch_taken_0x47ad28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47ad28) {
            ctx->pc = 0x47AD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AD28u;
            // 0x47ad2c: 0xa2400070  sb          $zero, 0x70($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AD3Cu;
            goto label_47ad3c;
        }
    }
    ctx->pc = 0x47AD30u;
label_47ad30:
    // 0x47ad30: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x47ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47ad34:
    // 0x47ad34: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x47ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47ad38:
    // 0x47ad38: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x47ad38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_47ad3c:
    // 0x47ad3c: 0x86440074  lh          $a0, 0x74($s2)
    ctx->pc = 0x47ad3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_47ad40:
    // 0x47ad40: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x47ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_47ad44:
    // 0x47ad44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ad44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47ad48:
    // 0x47ad48: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x47ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47ad4c:
    // 0x47ad4c: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x47ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_47ad50:
    // 0x47ad50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47ad54:
    // 0x47ad54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ad54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47ad58:
    // 0x47ad58: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_47ad5c:
    if (ctx->pc == 0x47AD5Cu) {
        ctx->pc = 0x47AD5Cu;
            // 0x47ad5c: 0x92440071  lbu         $a0, 0x71($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
        ctx->pc = 0x47AD60u;
        goto label_47ad60;
    }
    ctx->pc = 0x47AD58u;
    {
        const bool branch_taken_0x47ad58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x47ad58) {
            ctx->pc = 0x47AD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AD58u;
            // 0x47ad5c: 0x92440071  lbu         $a0, 0x71($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AD68u;
            goto label_47ad68;
        }
    }
    ctx->pc = 0x47AD60u;
label_47ad60:
    // 0x47ad60: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x47ad60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_47ad64:
    // 0x47ad64: 0x92440071  lbu         $a0, 0x71($s2)
    ctx->pc = 0x47ad64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 113)));
label_47ad68:
    // 0x47ad68: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x47ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_47ad6c:
    // 0x47ad6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47ad70:
    if (ctx->pc == 0x47AD70u) {
        ctx->pc = 0x47AD70u;
            // 0x47ad70: 0xa2400071  sb          $zero, 0x71($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x47AD74u;
        goto label_47ad74;
    }
    ctx->pc = 0x47AD6Cu;
    {
        const bool branch_taken_0x47ad6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47ad6c) {
            ctx->pc = 0x47AD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AD6Cu;
            // 0x47ad70: 0xa2400071  sb          $zero, 0x71($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AD80u;
            goto label_47ad80;
        }
    }
    ctx->pc = 0x47AD74u;
label_47ad74:
    // 0x47ad74: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x47ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47ad78:
    // 0x47ad78: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x47ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47ad7c:
    // 0x47ad7c: 0xa2420071  sb          $v0, 0x71($s2)
    ctx->pc = 0x47ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 2));
label_47ad80:
    // 0x47ad80: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x47ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ad84:
    // 0x47ad84: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x47ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ad88:
    // 0x47ad88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x47ad88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47ad8c:
    // 0x47ad8c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x47ad8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ad90:
    // 0x47ad90: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_47ad94:
    if (ctx->pc == 0x47AD94u) {
        ctx->pc = 0x47AD94u;
            // 0x47ad94: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->pc = 0x47AD98u;
        goto label_47ad98;
    }
    ctx->pc = 0x47AD90u;
    {
        const bool branch_taken_0x47ad90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47AD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AD90u;
            // 0x47ad94: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ad90) {
            ctx->pc = 0x47ADACu;
            goto label_47adac;
        }
    }
    ctx->pc = 0x47AD98u;
label_47ad98:
    // 0x47ad98: 0xe655007c  swc1        $f21, 0x7C($s2)
    ctx->pc = 0x47ad98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_47ad9c:
    // 0x47ad9c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x47ad9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47ada0:
    // 0x47ada0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47ada0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47ada4:
    // 0x47ada4: 0x320f809  jalr        $t9
label_47ada8:
    if (ctx->pc == 0x47ADA8u) {
        ctx->pc = 0x47ADA8u;
            // 0x47ada8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ADACu;
        goto label_47adac;
    }
    ctx->pc = 0x47ADA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47ADACu);
        ctx->pc = 0x47ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ADA4u;
            // 0x47ada8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47ADACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47ADACu; }
            if (ctx->pc != 0x47ADACu) { return; }
        }
        }
    }
    ctx->pc = 0x47ADACu;
label_47adac:
    // 0x47adac: 0xc11088c  jal         func_442230
label_47adb0:
    if (ctx->pc == 0x47ADB0u) {
        ctx->pc = 0x47ADB0u;
            // 0x47adb0: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x47ADB4u;
        goto label_47adb4;
    }
    ctx->pc = 0x47ADACu;
    SET_GPR_U32(ctx, 31, 0x47ADB4u);
    ctx->pc = 0x47ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47ADACu;
            // 0x47adb0: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ADB4u; }
        if (ctx->pc != 0x47ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47ADB4u; }
        if (ctx->pc != 0x47ADB4u) { return; }
    }
    ctx->pc = 0x47ADB4u;
label_47adb4:
    // 0x47adb4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_47adb8:
    if (ctx->pc == 0x47ADB8u) {
        ctx->pc = 0x47ADBCu;
        goto label_47adbc;
    }
    ctx->pc = 0x47ADB4u;
    {
        const bool branch_taken_0x47adb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47adb4) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47ADBCu;
label_47adbc:
    // 0x47adbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47adbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47adc0:
    // 0x47adc0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47adc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47adc4:
    // 0x47adc4: 0x320f809  jalr        $t9
label_47adc8:
    if (ctx->pc == 0x47ADC8u) {
        ctx->pc = 0x47ADC8u;
            // 0x47adc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ADCCu;
        goto label_47adcc;
    }
    ctx->pc = 0x47ADC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47ADCCu);
        ctx->pc = 0x47ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ADC4u;
            // 0x47adc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47ADCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47ADCCu; }
            if (ctx->pc != 0x47ADCCu) { return; }
        }
        }
    }
    ctx->pc = 0x47ADCCu;
label_47adcc:
    // 0x47adcc: 0x10000026  b           . + 4 + (0x26 << 2)
label_47add0:
    if (ctx->pc == 0x47ADD0u) {
        ctx->pc = 0x47ADD4u;
        goto label_47add4;
    }
    ctx->pc = 0x47ADCCu;
    {
        const bool branch_taken_0x47adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47adcc) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47ADD4u;
label_47add4:
    // 0x47add4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47add8:
    // 0x47add8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47addc:
    // 0x47addc: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x47addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_47ade0:
    // 0x47ade0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x47ade0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_47ade4:
    // 0x47ade4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_47ade8:
    if (ctx->pc == 0x47ADE8u) {
        ctx->pc = 0x47ADE8u;
            // 0x47ade8: 0xc6400078  lwc1        $f0, 0x78($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x47ADECu;
        goto label_47adec;
    }
    ctx->pc = 0x47ADE4u;
    {
        const bool branch_taken_0x47ade4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ade4) {
            ctx->pc = 0x47ADE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47ADE4u;
            // 0x47ade8: 0xc6400078  lwc1        $f0, 0x78($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AE04u;
            goto label_47ae04;
        }
    }
    ctx->pc = 0x47ADECu;
label_47adec:
    // 0x47adec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47adecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47adf0:
    // 0x47adf0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47adf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47adf4:
    // 0x47adf4: 0x320f809  jalr        $t9
label_47adf8:
    if (ctx->pc == 0x47ADF8u) {
        ctx->pc = 0x47ADF8u;
            // 0x47adf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47ADFCu;
        goto label_47adfc;
    }
    ctx->pc = 0x47ADF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47ADFCu);
        ctx->pc = 0x47ADF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47ADF4u;
            // 0x47adf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47ADFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47ADFCu; }
            if (ctx->pc != 0x47ADFCu) { return; }
        }
        }
    }
    ctx->pc = 0x47ADFCu;
label_47adfc:
    // 0x47adfc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_47ae00:
    if (ctx->pc == 0x47AE00u) {
        ctx->pc = 0x47AE04u;
        goto label_47ae04;
    }
    ctx->pc = 0x47ADFCu;
    {
        const bool branch_taken_0x47adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47adfc) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AE04u;
label_47ae04:
    // 0x47ae04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47ae04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_47ae08:
    // 0x47ae08: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x47ae08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47ae0c:
    // 0x47ae0c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x47ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47ae10:
    // 0x47ae10: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x47ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47ae14:
    // 0x47ae14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x47ae14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47ae18:
    // 0x47ae18: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_47ae1c:
    if (ctx->pc == 0x47AE1Cu) {
        ctx->pc = 0x47AE20u;
        goto label_47ae20;
    }
    ctx->pc = 0x47AE18u;
    {
        const bool branch_taken_0x47ae18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47ae18) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AE20u;
label_47ae20:
    // 0x47ae20: 0xe6410078  swc1        $f1, 0x78($s2)
    ctx->pc = 0x47ae20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
label_47ae24:
    // 0x47ae24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ae24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ae28:
    // 0x47ae28: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47ae28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_47ae2c:
    // 0x47ae2c: 0x320f809  jalr        $t9
label_47ae30:
    if (ctx->pc == 0x47AE30u) {
        ctx->pc = 0x47AE30u;
            // 0x47ae30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AE34u;
        goto label_47ae34;
    }
    ctx->pc = 0x47AE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AE34u);
        ctx->pc = 0x47AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AE2Cu;
            // 0x47ae30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AE34u; }
            if (ctx->pc != 0x47AE34u) { return; }
        }
        }
    }
    ctx->pc = 0x47AE34u;
label_47ae34:
    // 0x47ae34: 0x1000000c  b           . + 4 + (0xC << 2)
label_47ae38:
    if (ctx->pc == 0x47AE38u) {
        ctx->pc = 0x47AE3Cu;
        goto label_47ae3c;
    }
    ctx->pc = 0x47AE34u;
    {
        const bool branch_taken_0x47ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ae34) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AE3Cu;
label_47ae3c:
    // 0x47ae3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47ae3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ae40:
    // 0x47ae40: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47ae40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47ae44:
    // 0x47ae44: 0x320f809  jalr        $t9
label_47ae48:
    if (ctx->pc == 0x47AE48u) {
        ctx->pc = 0x47AE4Cu;
        goto label_47ae4c;
    }
    ctx->pc = 0x47AE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47AE4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47AE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47AE4Cu; }
            if (ctx->pc != 0x47AE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47AE4Cu;
label_47ae4c:
    // 0x47ae4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_47ae50:
    if (ctx->pc == 0x47AE50u) {
        ctx->pc = 0x47AE54u;
        goto label_47ae54;
    }
    ctx->pc = 0x47AE4Cu;
    {
        const bool branch_taken_0x47ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ae4c) {
            ctx->pc = 0x47AE68u;
            goto label_47ae68;
        }
    }
    ctx->pc = 0x47AE54u;
label_47ae54:
    // 0x47ae54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x47ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_47ae58:
    // 0x47ae58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47ae58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ae5c:
    // 0x47ae5c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x47ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_47ae60:
    // 0x47ae60: 0xc057b7c  jal         func_15EDF0
label_47ae64:
    if (ctx->pc == 0x47AE64u) {
        ctx->pc = 0x47AE64u;
            // 0x47ae64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47AE68u;
        goto label_47ae68;
    }
    ctx->pc = 0x47AE60u;
    SET_GPR_U32(ctx, 31, 0x47AE68u);
    ctx->pc = 0x47AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AE60u;
            // 0x47ae64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AE68u; }
        if (ctx->pc != 0x47AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AE68u; }
        if (ctx->pc != 0x47AE68u) { return; }
    }
    ctx->pc = 0x47AE68u;
label_47ae68:
    // 0x47ae68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47ae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47ae6c:
    // 0x47ae6c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x47ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_47ae70:
    // 0x47ae70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47ae70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ae74:
    // 0x47ae74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47ae78:
    // 0x47ae78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47ae78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ae7c:
    // 0x47ae7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47ae7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ae80:
    // 0x47ae80: 0x3e00008  jr          $ra
label_47ae84:
    if (ctx->pc == 0x47AE84u) {
        ctx->pc = 0x47AE84u;
            // 0x47ae84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47AE88u;
        goto label_47ae88;
    }
    ctx->pc = 0x47AE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AE80u;
            // 0x47ae84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47AE88u;
label_47ae88:
    // 0x47ae88: 0x0  nop
    ctx->pc = 0x47ae88u;
    // NOP
label_47ae8c:
    // 0x47ae8c: 0x0  nop
    ctx->pc = 0x47ae8cu;
    // NOP
label_47ae90:
    // 0x47ae90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47ae94:
    // 0x47ae94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47ae98:
    // 0x47ae98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ae9c:
    // 0x47ae9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47aea0:
    // 0x47aea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47aea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47aea4:
    // 0x47aea4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_47aea8:
    if (ctx->pc == 0x47AEA8u) {
        ctx->pc = 0x47AEA8u;
            // 0x47aea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AEACu;
        goto label_47aeac;
    }
    ctx->pc = 0x47AEA4u;
    {
        const bool branch_taken_0x47aea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AEA4u;
            // 0x47aea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47aea4) {
            ctx->pc = 0x47AEF4u;
            goto label_47aef4;
        }
    }
    ctx->pc = 0x47AEACu;
label_47aeac:
    // 0x47aeac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47aeb0:
    // 0x47aeb0: 0x2442ec10  addiu       $v0, $v0, -0x13F0
    ctx->pc = 0x47aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962192));
label_47aeb4:
    // 0x47aeb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47aeb8:
    // 0x47aeb8: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x47aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_47aebc:
    // 0x47aebc: 0xc1109cc  jal         func_442730
label_47aec0:
    if (ctx->pc == 0x47AEC0u) {
        ctx->pc = 0x47AEC0u;
            // 0x47aec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47AEC4u;
        goto label_47aec4;
    }
    ctx->pc = 0x47AEBCu;
    SET_GPR_U32(ctx, 31, 0x47AEC4u);
    ctx->pc = 0x47AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AEBCu;
            // 0x47aec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEC4u; }
        if (ctx->pc != 0x47AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEC4u; }
        if (ctx->pc != 0x47AEC4u) { return; }
    }
    ctx->pc = 0x47AEC4u;
label_47aec4:
    // 0x47aec4: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x47aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_47aec8:
    // 0x47aec8: 0xc1109cc  jal         func_442730
label_47aecc:
    if (ctx->pc == 0x47AECCu) {
        ctx->pc = 0x47AECCu;
            // 0x47aecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47AED0u;
        goto label_47aed0;
    }
    ctx->pc = 0x47AEC8u;
    SET_GPR_U32(ctx, 31, 0x47AED0u);
    ctx->pc = 0x47AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AEC8u;
            // 0x47aecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AED0u; }
        if (ctx->pc != 0x47AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AED0u; }
        if (ctx->pc != 0x47AED0u) { return; }
    }
    ctx->pc = 0x47AED0u;
label_47aed0:
    // 0x47aed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47aed4:
    // 0x47aed4: 0xc0ee744  jal         func_3B9D10
label_47aed8:
    if (ctx->pc == 0x47AED8u) {
        ctx->pc = 0x47AED8u;
            // 0x47aed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AEDCu;
        goto label_47aedc;
    }
    ctx->pc = 0x47AED4u;
    SET_GPR_U32(ctx, 31, 0x47AEDCu);
    ctx->pc = 0x47AED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AED4u;
            // 0x47aed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEDCu; }
        if (ctx->pc != 0x47AEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEDCu; }
        if (ctx->pc != 0x47AEDCu) { return; }
    }
    ctx->pc = 0x47AEDCu;
label_47aedc:
    // 0x47aedc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47aee0:
    // 0x47aee0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47aee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47aee4:
    // 0x47aee4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47aee8:
    if (ctx->pc == 0x47AEE8u) {
        ctx->pc = 0x47AEE8u;
            // 0x47aee8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AEECu;
        goto label_47aeec;
    }
    ctx->pc = 0x47AEE4u;
    {
        const bool branch_taken_0x47aee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47aee4) {
            ctx->pc = 0x47AEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47AEE4u;
            // 0x47aee8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47AEF8u;
            goto label_47aef8;
        }
    }
    ctx->pc = 0x47AEECu;
label_47aeec:
    // 0x47aeec: 0xc0400a8  jal         func_1002A0
label_47aef0:
    if (ctx->pc == 0x47AEF0u) {
        ctx->pc = 0x47AEF0u;
            // 0x47aef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47AEF4u;
        goto label_47aef4;
    }
    ctx->pc = 0x47AEECu;
    SET_GPR_U32(ctx, 31, 0x47AEF4u);
    ctx->pc = 0x47AEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47AEECu;
            // 0x47aef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEF4u; }
        if (ctx->pc != 0x47AEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47AEF4u; }
        if (ctx->pc != 0x47AEF4u) { return; }
    }
    ctx->pc = 0x47AEF4u;
label_47aef4:
    // 0x47aef4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47aef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47aef8:
    // 0x47aef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47aefc:
    // 0x47aefc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47aefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47af00:
    // 0x47af00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47af00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47af04:
    // 0x47af04: 0x3e00008  jr          $ra
label_47af08:
    if (ctx->pc == 0x47AF08u) {
        ctx->pc = 0x47AF08u;
            // 0x47af08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47AF0Cu;
        goto label_47af0c;
    }
    ctx->pc = 0x47AF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47AF04u;
            // 0x47af08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47AF0Cu;
label_47af0c:
    // 0x47af0c: 0x0  nop
    ctx->pc = 0x47af0cu;
    // NOP
}
