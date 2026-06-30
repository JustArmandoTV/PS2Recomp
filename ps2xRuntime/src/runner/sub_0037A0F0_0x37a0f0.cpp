#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037A0F0
// Address: 0x37a0f0 - 0x37a770
void sub_0037A0F0_0x37a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A0F0_0x37a0f0");
#endif

    switch (ctx->pc) {
        case 0x37a0f0u: goto label_37a0f0;
        case 0x37a0f4u: goto label_37a0f4;
        case 0x37a0f8u: goto label_37a0f8;
        case 0x37a0fcu: goto label_37a0fc;
        case 0x37a100u: goto label_37a100;
        case 0x37a104u: goto label_37a104;
        case 0x37a108u: goto label_37a108;
        case 0x37a10cu: goto label_37a10c;
        case 0x37a110u: goto label_37a110;
        case 0x37a114u: goto label_37a114;
        case 0x37a118u: goto label_37a118;
        case 0x37a11cu: goto label_37a11c;
        case 0x37a120u: goto label_37a120;
        case 0x37a124u: goto label_37a124;
        case 0x37a128u: goto label_37a128;
        case 0x37a12cu: goto label_37a12c;
        case 0x37a130u: goto label_37a130;
        case 0x37a134u: goto label_37a134;
        case 0x37a138u: goto label_37a138;
        case 0x37a13cu: goto label_37a13c;
        case 0x37a140u: goto label_37a140;
        case 0x37a144u: goto label_37a144;
        case 0x37a148u: goto label_37a148;
        case 0x37a14cu: goto label_37a14c;
        case 0x37a150u: goto label_37a150;
        case 0x37a154u: goto label_37a154;
        case 0x37a158u: goto label_37a158;
        case 0x37a15cu: goto label_37a15c;
        case 0x37a160u: goto label_37a160;
        case 0x37a164u: goto label_37a164;
        case 0x37a168u: goto label_37a168;
        case 0x37a16cu: goto label_37a16c;
        case 0x37a170u: goto label_37a170;
        case 0x37a174u: goto label_37a174;
        case 0x37a178u: goto label_37a178;
        case 0x37a17cu: goto label_37a17c;
        case 0x37a180u: goto label_37a180;
        case 0x37a184u: goto label_37a184;
        case 0x37a188u: goto label_37a188;
        case 0x37a18cu: goto label_37a18c;
        case 0x37a190u: goto label_37a190;
        case 0x37a194u: goto label_37a194;
        case 0x37a198u: goto label_37a198;
        case 0x37a19cu: goto label_37a19c;
        case 0x37a1a0u: goto label_37a1a0;
        case 0x37a1a4u: goto label_37a1a4;
        case 0x37a1a8u: goto label_37a1a8;
        case 0x37a1acu: goto label_37a1ac;
        case 0x37a1b0u: goto label_37a1b0;
        case 0x37a1b4u: goto label_37a1b4;
        case 0x37a1b8u: goto label_37a1b8;
        case 0x37a1bcu: goto label_37a1bc;
        case 0x37a1c0u: goto label_37a1c0;
        case 0x37a1c4u: goto label_37a1c4;
        case 0x37a1c8u: goto label_37a1c8;
        case 0x37a1ccu: goto label_37a1cc;
        case 0x37a1d0u: goto label_37a1d0;
        case 0x37a1d4u: goto label_37a1d4;
        case 0x37a1d8u: goto label_37a1d8;
        case 0x37a1dcu: goto label_37a1dc;
        case 0x37a1e0u: goto label_37a1e0;
        case 0x37a1e4u: goto label_37a1e4;
        case 0x37a1e8u: goto label_37a1e8;
        case 0x37a1ecu: goto label_37a1ec;
        case 0x37a1f0u: goto label_37a1f0;
        case 0x37a1f4u: goto label_37a1f4;
        case 0x37a1f8u: goto label_37a1f8;
        case 0x37a1fcu: goto label_37a1fc;
        case 0x37a200u: goto label_37a200;
        case 0x37a204u: goto label_37a204;
        case 0x37a208u: goto label_37a208;
        case 0x37a20cu: goto label_37a20c;
        case 0x37a210u: goto label_37a210;
        case 0x37a214u: goto label_37a214;
        case 0x37a218u: goto label_37a218;
        case 0x37a21cu: goto label_37a21c;
        case 0x37a220u: goto label_37a220;
        case 0x37a224u: goto label_37a224;
        case 0x37a228u: goto label_37a228;
        case 0x37a22cu: goto label_37a22c;
        case 0x37a230u: goto label_37a230;
        case 0x37a234u: goto label_37a234;
        case 0x37a238u: goto label_37a238;
        case 0x37a23cu: goto label_37a23c;
        case 0x37a240u: goto label_37a240;
        case 0x37a244u: goto label_37a244;
        case 0x37a248u: goto label_37a248;
        case 0x37a24cu: goto label_37a24c;
        case 0x37a250u: goto label_37a250;
        case 0x37a254u: goto label_37a254;
        case 0x37a258u: goto label_37a258;
        case 0x37a25cu: goto label_37a25c;
        case 0x37a260u: goto label_37a260;
        case 0x37a264u: goto label_37a264;
        case 0x37a268u: goto label_37a268;
        case 0x37a26cu: goto label_37a26c;
        case 0x37a270u: goto label_37a270;
        case 0x37a274u: goto label_37a274;
        case 0x37a278u: goto label_37a278;
        case 0x37a27cu: goto label_37a27c;
        case 0x37a280u: goto label_37a280;
        case 0x37a284u: goto label_37a284;
        case 0x37a288u: goto label_37a288;
        case 0x37a28cu: goto label_37a28c;
        case 0x37a290u: goto label_37a290;
        case 0x37a294u: goto label_37a294;
        case 0x37a298u: goto label_37a298;
        case 0x37a29cu: goto label_37a29c;
        case 0x37a2a0u: goto label_37a2a0;
        case 0x37a2a4u: goto label_37a2a4;
        case 0x37a2a8u: goto label_37a2a8;
        case 0x37a2acu: goto label_37a2ac;
        case 0x37a2b0u: goto label_37a2b0;
        case 0x37a2b4u: goto label_37a2b4;
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a2bcu: goto label_37a2bc;
        case 0x37a2c0u: goto label_37a2c0;
        case 0x37a2c4u: goto label_37a2c4;
        case 0x37a2c8u: goto label_37a2c8;
        case 0x37a2ccu: goto label_37a2cc;
        case 0x37a2d0u: goto label_37a2d0;
        case 0x37a2d4u: goto label_37a2d4;
        case 0x37a2d8u: goto label_37a2d8;
        case 0x37a2dcu: goto label_37a2dc;
        case 0x37a2e0u: goto label_37a2e0;
        case 0x37a2e4u: goto label_37a2e4;
        case 0x37a2e8u: goto label_37a2e8;
        case 0x37a2ecu: goto label_37a2ec;
        case 0x37a2f0u: goto label_37a2f0;
        case 0x37a2f4u: goto label_37a2f4;
        case 0x37a2f8u: goto label_37a2f8;
        case 0x37a2fcu: goto label_37a2fc;
        case 0x37a300u: goto label_37a300;
        case 0x37a304u: goto label_37a304;
        case 0x37a308u: goto label_37a308;
        case 0x37a30cu: goto label_37a30c;
        case 0x37a310u: goto label_37a310;
        case 0x37a314u: goto label_37a314;
        case 0x37a318u: goto label_37a318;
        case 0x37a31cu: goto label_37a31c;
        case 0x37a320u: goto label_37a320;
        case 0x37a324u: goto label_37a324;
        case 0x37a328u: goto label_37a328;
        case 0x37a32cu: goto label_37a32c;
        case 0x37a330u: goto label_37a330;
        case 0x37a334u: goto label_37a334;
        case 0x37a338u: goto label_37a338;
        case 0x37a33cu: goto label_37a33c;
        case 0x37a340u: goto label_37a340;
        case 0x37a344u: goto label_37a344;
        case 0x37a348u: goto label_37a348;
        case 0x37a34cu: goto label_37a34c;
        case 0x37a350u: goto label_37a350;
        case 0x37a354u: goto label_37a354;
        case 0x37a358u: goto label_37a358;
        case 0x37a35cu: goto label_37a35c;
        case 0x37a360u: goto label_37a360;
        case 0x37a364u: goto label_37a364;
        case 0x37a368u: goto label_37a368;
        case 0x37a36cu: goto label_37a36c;
        case 0x37a370u: goto label_37a370;
        case 0x37a374u: goto label_37a374;
        case 0x37a378u: goto label_37a378;
        case 0x37a37cu: goto label_37a37c;
        case 0x37a380u: goto label_37a380;
        case 0x37a384u: goto label_37a384;
        case 0x37a388u: goto label_37a388;
        case 0x37a38cu: goto label_37a38c;
        case 0x37a390u: goto label_37a390;
        case 0x37a394u: goto label_37a394;
        case 0x37a398u: goto label_37a398;
        case 0x37a39cu: goto label_37a39c;
        case 0x37a3a0u: goto label_37a3a0;
        case 0x37a3a4u: goto label_37a3a4;
        case 0x37a3a8u: goto label_37a3a8;
        case 0x37a3acu: goto label_37a3ac;
        case 0x37a3b0u: goto label_37a3b0;
        case 0x37a3b4u: goto label_37a3b4;
        case 0x37a3b8u: goto label_37a3b8;
        case 0x37a3bcu: goto label_37a3bc;
        case 0x37a3c0u: goto label_37a3c0;
        case 0x37a3c4u: goto label_37a3c4;
        case 0x37a3c8u: goto label_37a3c8;
        case 0x37a3ccu: goto label_37a3cc;
        case 0x37a3d0u: goto label_37a3d0;
        case 0x37a3d4u: goto label_37a3d4;
        case 0x37a3d8u: goto label_37a3d8;
        case 0x37a3dcu: goto label_37a3dc;
        case 0x37a3e0u: goto label_37a3e0;
        case 0x37a3e4u: goto label_37a3e4;
        case 0x37a3e8u: goto label_37a3e8;
        case 0x37a3ecu: goto label_37a3ec;
        case 0x37a3f0u: goto label_37a3f0;
        case 0x37a3f4u: goto label_37a3f4;
        case 0x37a3f8u: goto label_37a3f8;
        case 0x37a3fcu: goto label_37a3fc;
        case 0x37a400u: goto label_37a400;
        case 0x37a404u: goto label_37a404;
        case 0x37a408u: goto label_37a408;
        case 0x37a40cu: goto label_37a40c;
        case 0x37a410u: goto label_37a410;
        case 0x37a414u: goto label_37a414;
        case 0x37a418u: goto label_37a418;
        case 0x37a41cu: goto label_37a41c;
        case 0x37a420u: goto label_37a420;
        case 0x37a424u: goto label_37a424;
        case 0x37a428u: goto label_37a428;
        case 0x37a42cu: goto label_37a42c;
        case 0x37a430u: goto label_37a430;
        case 0x37a434u: goto label_37a434;
        case 0x37a438u: goto label_37a438;
        case 0x37a43cu: goto label_37a43c;
        case 0x37a440u: goto label_37a440;
        case 0x37a444u: goto label_37a444;
        case 0x37a448u: goto label_37a448;
        case 0x37a44cu: goto label_37a44c;
        case 0x37a450u: goto label_37a450;
        case 0x37a454u: goto label_37a454;
        case 0x37a458u: goto label_37a458;
        case 0x37a45cu: goto label_37a45c;
        case 0x37a460u: goto label_37a460;
        case 0x37a464u: goto label_37a464;
        case 0x37a468u: goto label_37a468;
        case 0x37a46cu: goto label_37a46c;
        case 0x37a470u: goto label_37a470;
        case 0x37a474u: goto label_37a474;
        case 0x37a478u: goto label_37a478;
        case 0x37a47cu: goto label_37a47c;
        case 0x37a480u: goto label_37a480;
        case 0x37a484u: goto label_37a484;
        case 0x37a488u: goto label_37a488;
        case 0x37a48cu: goto label_37a48c;
        case 0x37a490u: goto label_37a490;
        case 0x37a494u: goto label_37a494;
        case 0x37a498u: goto label_37a498;
        case 0x37a49cu: goto label_37a49c;
        case 0x37a4a0u: goto label_37a4a0;
        case 0x37a4a4u: goto label_37a4a4;
        case 0x37a4a8u: goto label_37a4a8;
        case 0x37a4acu: goto label_37a4ac;
        case 0x37a4b0u: goto label_37a4b0;
        case 0x37a4b4u: goto label_37a4b4;
        case 0x37a4b8u: goto label_37a4b8;
        case 0x37a4bcu: goto label_37a4bc;
        case 0x37a4c0u: goto label_37a4c0;
        case 0x37a4c4u: goto label_37a4c4;
        case 0x37a4c8u: goto label_37a4c8;
        case 0x37a4ccu: goto label_37a4cc;
        case 0x37a4d0u: goto label_37a4d0;
        case 0x37a4d4u: goto label_37a4d4;
        case 0x37a4d8u: goto label_37a4d8;
        case 0x37a4dcu: goto label_37a4dc;
        case 0x37a4e0u: goto label_37a4e0;
        case 0x37a4e4u: goto label_37a4e4;
        case 0x37a4e8u: goto label_37a4e8;
        case 0x37a4ecu: goto label_37a4ec;
        case 0x37a4f0u: goto label_37a4f0;
        case 0x37a4f4u: goto label_37a4f4;
        case 0x37a4f8u: goto label_37a4f8;
        case 0x37a4fcu: goto label_37a4fc;
        case 0x37a500u: goto label_37a500;
        case 0x37a504u: goto label_37a504;
        case 0x37a508u: goto label_37a508;
        case 0x37a50cu: goto label_37a50c;
        case 0x37a510u: goto label_37a510;
        case 0x37a514u: goto label_37a514;
        case 0x37a518u: goto label_37a518;
        case 0x37a51cu: goto label_37a51c;
        case 0x37a520u: goto label_37a520;
        case 0x37a524u: goto label_37a524;
        case 0x37a528u: goto label_37a528;
        case 0x37a52cu: goto label_37a52c;
        case 0x37a530u: goto label_37a530;
        case 0x37a534u: goto label_37a534;
        case 0x37a538u: goto label_37a538;
        case 0x37a53cu: goto label_37a53c;
        case 0x37a540u: goto label_37a540;
        case 0x37a544u: goto label_37a544;
        case 0x37a548u: goto label_37a548;
        case 0x37a54cu: goto label_37a54c;
        case 0x37a550u: goto label_37a550;
        case 0x37a554u: goto label_37a554;
        case 0x37a558u: goto label_37a558;
        case 0x37a55cu: goto label_37a55c;
        case 0x37a560u: goto label_37a560;
        case 0x37a564u: goto label_37a564;
        case 0x37a568u: goto label_37a568;
        case 0x37a56cu: goto label_37a56c;
        case 0x37a570u: goto label_37a570;
        case 0x37a574u: goto label_37a574;
        case 0x37a578u: goto label_37a578;
        case 0x37a57cu: goto label_37a57c;
        case 0x37a580u: goto label_37a580;
        case 0x37a584u: goto label_37a584;
        case 0x37a588u: goto label_37a588;
        case 0x37a58cu: goto label_37a58c;
        case 0x37a590u: goto label_37a590;
        case 0x37a594u: goto label_37a594;
        case 0x37a598u: goto label_37a598;
        case 0x37a59cu: goto label_37a59c;
        case 0x37a5a0u: goto label_37a5a0;
        case 0x37a5a4u: goto label_37a5a4;
        case 0x37a5a8u: goto label_37a5a8;
        case 0x37a5acu: goto label_37a5ac;
        case 0x37a5b0u: goto label_37a5b0;
        case 0x37a5b4u: goto label_37a5b4;
        case 0x37a5b8u: goto label_37a5b8;
        case 0x37a5bcu: goto label_37a5bc;
        case 0x37a5c0u: goto label_37a5c0;
        case 0x37a5c4u: goto label_37a5c4;
        case 0x37a5c8u: goto label_37a5c8;
        case 0x37a5ccu: goto label_37a5cc;
        case 0x37a5d0u: goto label_37a5d0;
        case 0x37a5d4u: goto label_37a5d4;
        case 0x37a5d8u: goto label_37a5d8;
        case 0x37a5dcu: goto label_37a5dc;
        case 0x37a5e0u: goto label_37a5e0;
        case 0x37a5e4u: goto label_37a5e4;
        case 0x37a5e8u: goto label_37a5e8;
        case 0x37a5ecu: goto label_37a5ec;
        case 0x37a5f0u: goto label_37a5f0;
        case 0x37a5f4u: goto label_37a5f4;
        case 0x37a5f8u: goto label_37a5f8;
        case 0x37a5fcu: goto label_37a5fc;
        case 0x37a600u: goto label_37a600;
        case 0x37a604u: goto label_37a604;
        case 0x37a608u: goto label_37a608;
        case 0x37a60cu: goto label_37a60c;
        case 0x37a610u: goto label_37a610;
        case 0x37a614u: goto label_37a614;
        case 0x37a618u: goto label_37a618;
        case 0x37a61cu: goto label_37a61c;
        case 0x37a620u: goto label_37a620;
        case 0x37a624u: goto label_37a624;
        case 0x37a628u: goto label_37a628;
        case 0x37a62cu: goto label_37a62c;
        case 0x37a630u: goto label_37a630;
        case 0x37a634u: goto label_37a634;
        case 0x37a638u: goto label_37a638;
        case 0x37a63cu: goto label_37a63c;
        case 0x37a640u: goto label_37a640;
        case 0x37a644u: goto label_37a644;
        case 0x37a648u: goto label_37a648;
        case 0x37a64cu: goto label_37a64c;
        case 0x37a650u: goto label_37a650;
        case 0x37a654u: goto label_37a654;
        case 0x37a658u: goto label_37a658;
        case 0x37a65cu: goto label_37a65c;
        case 0x37a660u: goto label_37a660;
        case 0x37a664u: goto label_37a664;
        case 0x37a668u: goto label_37a668;
        case 0x37a66cu: goto label_37a66c;
        case 0x37a670u: goto label_37a670;
        case 0x37a674u: goto label_37a674;
        case 0x37a678u: goto label_37a678;
        case 0x37a67cu: goto label_37a67c;
        case 0x37a680u: goto label_37a680;
        case 0x37a684u: goto label_37a684;
        case 0x37a688u: goto label_37a688;
        case 0x37a68cu: goto label_37a68c;
        case 0x37a690u: goto label_37a690;
        case 0x37a694u: goto label_37a694;
        case 0x37a698u: goto label_37a698;
        case 0x37a69cu: goto label_37a69c;
        case 0x37a6a0u: goto label_37a6a0;
        case 0x37a6a4u: goto label_37a6a4;
        case 0x37a6a8u: goto label_37a6a8;
        case 0x37a6acu: goto label_37a6ac;
        case 0x37a6b0u: goto label_37a6b0;
        case 0x37a6b4u: goto label_37a6b4;
        case 0x37a6b8u: goto label_37a6b8;
        case 0x37a6bcu: goto label_37a6bc;
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a6c4u: goto label_37a6c4;
        case 0x37a6c8u: goto label_37a6c8;
        case 0x37a6ccu: goto label_37a6cc;
        case 0x37a6d0u: goto label_37a6d0;
        case 0x37a6d4u: goto label_37a6d4;
        case 0x37a6d8u: goto label_37a6d8;
        case 0x37a6dcu: goto label_37a6dc;
        case 0x37a6e0u: goto label_37a6e0;
        case 0x37a6e4u: goto label_37a6e4;
        case 0x37a6e8u: goto label_37a6e8;
        case 0x37a6ecu: goto label_37a6ec;
        case 0x37a6f0u: goto label_37a6f0;
        case 0x37a6f4u: goto label_37a6f4;
        case 0x37a6f8u: goto label_37a6f8;
        case 0x37a6fcu: goto label_37a6fc;
        case 0x37a700u: goto label_37a700;
        case 0x37a704u: goto label_37a704;
        case 0x37a708u: goto label_37a708;
        case 0x37a70cu: goto label_37a70c;
        case 0x37a710u: goto label_37a710;
        case 0x37a714u: goto label_37a714;
        case 0x37a718u: goto label_37a718;
        case 0x37a71cu: goto label_37a71c;
        case 0x37a720u: goto label_37a720;
        case 0x37a724u: goto label_37a724;
        case 0x37a728u: goto label_37a728;
        case 0x37a72cu: goto label_37a72c;
        case 0x37a730u: goto label_37a730;
        case 0x37a734u: goto label_37a734;
        case 0x37a738u: goto label_37a738;
        case 0x37a73cu: goto label_37a73c;
        case 0x37a740u: goto label_37a740;
        case 0x37a744u: goto label_37a744;
        case 0x37a748u: goto label_37a748;
        case 0x37a74cu: goto label_37a74c;
        case 0x37a750u: goto label_37a750;
        case 0x37a754u: goto label_37a754;
        case 0x37a758u: goto label_37a758;
        case 0x37a75cu: goto label_37a75c;
        case 0x37a760u: goto label_37a760;
        case 0x37a764u: goto label_37a764;
        case 0x37a768u: goto label_37a768;
        case 0x37a76cu: goto label_37a76c;
        default: break;
    }

    ctx->pc = 0x37a0f0u;

label_37a0f0:
    // 0x37a0f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x37a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_37a0f4:
    // 0x37a0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37a0f8:
    // 0x37a0f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x37a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_37a0fc:
    // 0x37a0fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_37a100:
    // 0x37a100: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37a104:
    // 0x37a104: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x37a104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37a108:
    // 0x37a108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37a10c:
    // 0x37a10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37a110:
    // 0x37a110: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x37a110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_37a114:
    // 0x37a114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37a118:
    // 0x37a118: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37a118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a11c:
    // 0x37a11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a120:
    // 0x37a120: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37a120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37a124:
    // 0x37a124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a128:
    // 0x37a128: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x37a128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_37a12c:
    // 0x37a12c: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x37a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_37a130:
    // 0x37a130: 0x14830080  bne         $a0, $v1, . + 4 + (0x80 << 2)
label_37a134:
    if (ctx->pc == 0x37A134u) {
        ctx->pc = 0x37A134u;
            // 0x37a134: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A138u;
        goto label_37a138;
    }
    ctx->pc = 0x37A130u;
    {
        const bool branch_taken_0x37a130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x37A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A130u;
            // 0x37a134: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a130) {
            ctx->pc = 0x37A334u;
            goto label_37a334;
        }
    }
    ctx->pc = 0x37A138u;
label_37a138:
    // 0x37a138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a13c:
    // 0x37a13c: 0xc04f278  jal         func_13C9E0
label_37a140:
    if (ctx->pc == 0x37A140u) {
        ctx->pc = 0x37A140u;
            // 0x37a140: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x37A144u;
        goto label_37a144;
    }
    ctx->pc = 0x37A13Cu;
    SET_GPR_U32(ctx, 31, 0x37A144u);
    ctx->pc = 0x37A140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A13Cu;
            // 0x37a140: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A144u; }
        if (ctx->pc != 0x37A144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A144u; }
        if (ctx->pc != 0x37A144u) { return; }
    }
    ctx->pc = 0x37A144u;
label_37a144:
    // 0x37a144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a148:
    // 0x37a148: 0xc04ce80  jal         func_133A00
label_37a14c:
    if (ctx->pc == 0x37A14Cu) {
        ctx->pc = 0x37A14Cu;
            // 0x37a14c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x37A150u;
        goto label_37a150;
    }
    ctx->pc = 0x37A148u;
    SET_GPR_U32(ctx, 31, 0x37A150u);
    ctx->pc = 0x37A14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A148u;
            // 0x37a14c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A150u; }
        if (ctx->pc != 0x37A150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A150u; }
        if (ctx->pc != 0x37A150u) { return; }
    }
    ctx->pc = 0x37A150u;
label_37a150:
    // 0x37a150: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37a150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37a154:
    // 0x37a154: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x37a154u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_37a158:
    // 0x37a158: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x37a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_37a15c:
    // 0x37a15c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x37a15cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37a160:
    // 0x37a160: 0xc07698c  jal         func_1DA630
label_37a164:
    if (ctx->pc == 0x37A164u) {
        ctx->pc = 0x37A164u;
            // 0x37a164: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A168u;
        goto label_37a168;
    }
    ctx->pc = 0x37A160u;
    SET_GPR_U32(ctx, 31, 0x37A168u);
    ctx->pc = 0x37A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A160u;
            // 0x37a164: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A168u; }
        if (ctx->pc != 0x37A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A168u; }
        if (ctx->pc != 0x37A168u) { return; }
    }
    ctx->pc = 0x37A168u;
label_37a168:
    // 0x37a168: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37a16c:
    // 0x37a16c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_37a170:
    if (ctx->pc == 0x37A170u) {
        ctx->pc = 0x37A174u;
        goto label_37a174;
    }
    ctx->pc = 0x37A16Cu;
    {
        const bool branch_taken_0x37a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37a16c) {
            ctx->pc = 0x37A17Cu;
            goto label_37a17c;
        }
    }
    ctx->pc = 0x37A174u;
label_37a174:
    // 0x37a174: 0x10000033  b           . + 4 + (0x33 << 2)
label_37a178:
    if (ctx->pc == 0x37A178u) {
        ctx->pc = 0x37A178u;
            // 0x37a178: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37A17Cu;
        goto label_37a17c;
    }
    ctx->pc = 0x37A174u;
    {
        const bool branch_taken_0x37a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A174u;
            // 0x37a178: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a174) {
            ctx->pc = 0x37A244u;
            goto label_37a244;
        }
    }
    ctx->pc = 0x37A17Cu;
label_37a17c:
    // 0x37a17c: 0xc0576f4  jal         func_15DBD0
label_37a180:
    if (ctx->pc == 0x37A180u) {
        ctx->pc = 0x37A184u;
        goto label_37a184;
    }
    ctx->pc = 0x37A17Cu;
    SET_GPR_U32(ctx, 31, 0x37A184u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A184u; }
        if (ctx->pc != 0x37A184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A184u; }
        if (ctx->pc != 0x37A184u) { return; }
    }
    ctx->pc = 0x37A184u;
label_37a184:
    // 0x37a184: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37a184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37a188:
    // 0x37a188: 0xc076984  jal         func_1DA610
label_37a18c:
    if (ctx->pc == 0x37A18Cu) {
        ctx->pc = 0x37A18Cu;
            // 0x37a18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A190u;
        goto label_37a190;
    }
    ctx->pc = 0x37A188u;
    SET_GPR_U32(ctx, 31, 0x37A190u);
    ctx->pc = 0x37A18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A188u;
            // 0x37a18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A190u; }
        if (ctx->pc != 0x37A190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A190u; }
        if (ctx->pc != 0x37A190u) { return; }
    }
    ctx->pc = 0x37A190u;
label_37a190:
    // 0x37a190: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37a190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a194:
    // 0x37a194: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x37a194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_37a198:
    // 0x37a198: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37a19c:
    // 0x37a19c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37a19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a1a0:
    // 0x37a1a0: 0xc4421ad0  lwc1        $f2, 0x1AD0($v0)
    ctx->pc = 0x37a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37a1a4:
    // 0x37a1a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37a1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a1a8:
    // 0x37a1a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37a1ac:
    // 0x37a1ac: 0xc4411ad8  lwc1        $f1, 0x1AD8($v0)
    ctx->pc = 0x37a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37a1b0:
    // 0x37a1b0: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x37a1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_37a1b4:
    // 0x37a1b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37a1b8:
    // 0x37a1b8: 0xc4401adc  lwc1        $f0, 0x1ADC($v0)
    ctx->pc = 0x37a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37a1bc:
    // 0x37a1bc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x37a1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_37a1c0:
    // 0x37a1c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37a1c4:
    // 0x37a1c4: 0x8c421ad4  lw          $v0, 0x1AD4($v0)
    ctx->pc = 0x37a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6868)));
label_37a1c8:
    // 0x37a1c8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x37a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_37a1cc:
    // 0x37a1cc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x37a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_37a1d0:
    // 0x37a1d0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x37a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37a1d4:
    // 0x37a1d4: 0xc04cca0  jal         func_133280
label_37a1d8:
    if (ctx->pc == 0x37A1D8u) {
        ctx->pc = 0x37A1D8u;
            // 0x37a1d8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x37A1DCu;
        goto label_37a1dc;
    }
    ctx->pc = 0x37A1D4u;
    SET_GPR_U32(ctx, 31, 0x37A1DCu);
    ctx->pc = 0x37A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A1D4u;
            // 0x37a1d8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1DCu; }
        if (ctx->pc != 0x37A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1DCu; }
        if (ctx->pc != 0x37A1DCu) { return; }
    }
    ctx->pc = 0x37A1DCu;
label_37a1dc:
    // 0x37a1dc: 0xc076980  jal         func_1DA600
label_37a1e0:
    if (ctx->pc == 0x37A1E0u) {
        ctx->pc = 0x37A1E0u;
            // 0x37a1e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A1E4u;
        goto label_37a1e4;
    }
    ctx->pc = 0x37A1DCu;
    SET_GPR_U32(ctx, 31, 0x37A1E4u);
    ctx->pc = 0x37A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A1DCu;
            // 0x37a1e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1E4u; }
        if (ctx->pc != 0x37A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1E4u; }
        if (ctx->pc != 0x37A1E4u) { return; }
    }
    ctx->pc = 0x37A1E4u;
label_37a1e4:
    // 0x37a1e4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x37a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_37a1e8:
    // 0x37a1e8: 0xc04cc34  jal         func_1330D0
label_37a1ec:
    if (ctx->pc == 0x37A1ECu) {
        ctx->pc = 0x37A1ECu;
            // 0x37a1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A1F0u;
        goto label_37a1f0;
    }
    ctx->pc = 0x37A1E8u;
    SET_GPR_U32(ctx, 31, 0x37A1F0u);
    ctx->pc = 0x37A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A1E8u;
            // 0x37a1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1F0u; }
        if (ctx->pc != 0x37A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A1F0u; }
        if (ctx->pc != 0x37A1F0u) { return; }
    }
    ctx->pc = 0x37A1F0u;
label_37a1f0:
    // 0x37a1f0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x37a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_37a1f4:
    // 0x37a1f4: 0xc46152e0  lwc1        $f1, 0x52E0($v1)
    ctx->pc = 0x37a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37a1f8:
    // 0x37a1f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37a1f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37a1fc:
    // 0x37a1fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_37a200:
    if (ctx->pc == 0x37A200u) {
        ctx->pc = 0x37A200u;
            // 0x37a200: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A204u;
        goto label_37a204;
    }
    ctx->pc = 0x37A1FCu;
    {
        const bool branch_taken_0x37a1fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37a1fc) {
            ctx->pc = 0x37A200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A1FCu;
            // 0x37a200: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A20Cu;
            goto label_37a20c;
        }
    }
    ctx->pc = 0x37A204u;
label_37a204:
    // 0x37a204: 0x1000000f  b           . + 4 + (0xF << 2)
label_37a208:
    if (ctx->pc == 0x37A208u) {
        ctx->pc = 0x37A208u;
            // 0x37a208: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x37A20Cu;
        goto label_37a20c;
    }
    ctx->pc = 0x37A204u;
    {
        const bool branch_taken_0x37a204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A204u;
            // 0x37a208: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a204) {
            ctx->pc = 0x37A244u;
            goto label_37a244;
        }
    }
    ctx->pc = 0x37A20Cu;
label_37a20c:
    // 0x37a20c: 0xc07697c  jal         func_1DA5F0
label_37a210:
    if (ctx->pc == 0x37A210u) {
        ctx->pc = 0x37A214u;
        goto label_37a214;
    }
    ctx->pc = 0x37A20Cu;
    SET_GPR_U32(ctx, 31, 0x37A214u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A214u; }
        if (ctx->pc != 0x37A214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A214u; }
        if (ctx->pc != 0x37A214u) { return; }
    }
    ctx->pc = 0x37A214u;
label_37a214:
    // 0x37a214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37a214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a218:
    // 0x37a218: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_37a21c:
    // 0x37a21c: 0xc04cd60  jal         func_133580
label_37a220:
    if (ctx->pc == 0x37A220u) {
        ctx->pc = 0x37A220u;
            // 0x37a220: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A224u;
        goto label_37a224;
    }
    ctx->pc = 0x37A21Cu;
    SET_GPR_U32(ctx, 31, 0x37A224u);
    ctx->pc = 0x37A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A21Cu;
            // 0x37a220: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A224u; }
        if (ctx->pc != 0x37A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A224u; }
        if (ctx->pc != 0x37A224u) { return; }
    }
    ctx->pc = 0x37A224u;
label_37a224:
    // 0x37a224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37a228:
    // 0x37a228: 0xc04c650  jal         func_131940
label_37a22c:
    if (ctx->pc == 0x37A22Cu) {
        ctx->pc = 0x37A22Cu;
            // 0x37a22c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x37A230u;
        goto label_37a230;
    }
    ctx->pc = 0x37A228u;
    SET_GPR_U32(ctx, 31, 0x37A230u);
    ctx->pc = 0x37A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A228u;
            // 0x37a22c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A230u; }
        if (ctx->pc != 0x37A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A230u; }
        if (ctx->pc != 0x37A230u) { return; }
    }
    ctx->pc = 0x37A230u;
label_37a230:
    // 0x37a230: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x37a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_37a234:
    // 0x37a234: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x37a234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a238:
    // 0x37a238: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x37a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_37a23c:
    // 0x37a23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37a240:
    // 0x37a240: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37a244:
    // 0x37a244: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x37a244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_37a248:
    // 0x37a248: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_37a24c:
    if (ctx->pc == 0x37A24Cu) {
        ctx->pc = 0x37A24Cu;
            // 0x37a24c: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x37A250u;
        goto label_37a250;
    }
    ctx->pc = 0x37A248u;
    {
        const bool branch_taken_0x37a248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A248u;
            // 0x37a24c: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a248) {
            ctx->pc = 0x37A334u;
            goto label_37a334;
        }
    }
    ctx->pc = 0x37A250u;
label_37a250:
    // 0x37a250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a254:
    // 0x37a254: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x37a254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37a258:
    // 0x37a258: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x37a258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_37a25c:
    // 0x37a25c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x37a25cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_37a260:
    // 0x37a260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a264:
    // 0x37a264: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x37a264u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_37a268:
    // 0x37a268: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x37a268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_37a26c:
    // 0x37a26c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a270:
    // 0x37a270: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x37a270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_37a274:
    // 0x37a274: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x37a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_37a278:
    // 0x37a278: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x37a278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_37a27c:
    // 0x37a27c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a280:
    // 0x37a280: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x37a280u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_37a284:
    // 0x37a284: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x37a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_37a288:
    // 0x37a288: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a28c:
    // 0x37a28c: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x37a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_37a290:
    // 0x37a290: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x37a290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_37a294:
    // 0x37a294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a298:
    // 0x37a298: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x37a298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_37a29c:
    // 0x37a29c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x37a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_37a2a0:
    // 0x37a2a0: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x37a2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_37a2a4:
    // 0x37a2a4: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x37a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_37a2a8:
    // 0x37a2a8: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x37a2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_37a2ac:
    // 0x37a2ac: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x37a2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_37a2b0:
    // 0x37a2b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a2b4:
    // 0x37a2b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a2b8:
    // 0x37a2b8: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x37a2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_37a2bc:
    // 0x37a2bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a2c0:
    // 0x37a2c0: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x37a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_37a2c4:
    // 0x37a2c4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x37a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_37a2c8:
    // 0x37a2c8: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x37a2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_37a2cc:
    // 0x37a2cc: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x37a2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_37a2d0:
    // 0x37a2d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37a2d4:
    // 0x37a2d4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x37a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_37a2d8:
    // 0x37a2d8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x37a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_37a2dc:
    // 0x37a2dc: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x37a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_37a2e0:
    // 0x37a2e0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x37a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_37a2e4:
    // 0x37a2e4: 0xc04e4a4  jal         func_139290
label_37a2e8:
    if (ctx->pc == 0x37A2E8u) {
        ctx->pc = 0x37A2E8u;
            // 0x37a2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A2ECu;
        goto label_37a2ec;
    }
    ctx->pc = 0x37A2E4u;
    SET_GPR_U32(ctx, 31, 0x37A2ECu);
    ctx->pc = 0x37A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A2E4u;
            // 0x37a2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A2ECu; }
        if (ctx->pc != 0x37A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A2ECu; }
        if (ctx->pc != 0x37A2ECu) { return; }
    }
    ctx->pc = 0x37A2ECu;
label_37a2ec:
    // 0x37a2ec: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x37a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_37a2f0:
    // 0x37a2f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37a2f4:
    // 0x37a2f4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x37a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_37a2f8:
    // 0x37a2f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37a2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a2fc:
    // 0x37a2fc: 0xc04cd60  jal         func_133580
label_37a300:
    if (ctx->pc == 0x37A300u) {
        ctx->pc = 0x37A300u;
            // 0x37a300: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37A304u;
        goto label_37a304;
    }
    ctx->pc = 0x37A2FCu;
    SET_GPR_U32(ctx, 31, 0x37A304u);
    ctx->pc = 0x37A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A2FCu;
            // 0x37a300: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A304u; }
        if (ctx->pc != 0x37A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A304u; }
        if (ctx->pc != 0x37A304u) { return; }
    }
    ctx->pc = 0x37A304u;
label_37a304:
    // 0x37a304: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x37a304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37a308:
    // 0x37a308: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x37a308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_37a30c:
    // 0x37a30c: 0x320f809  jalr        $t9
label_37a310:
    if (ctx->pc == 0x37A310u) {
        ctx->pc = 0x37A310u;
            // 0x37a310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A314u;
        goto label_37a314;
    }
    ctx->pc = 0x37A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A314u);
        ctx->pc = 0x37A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A30Cu;
            // 0x37a310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A314u; }
            if (ctx->pc != 0x37A314u) { return; }
        }
        }
    }
    ctx->pc = 0x37A314u;
label_37a314:
    // 0x37a314: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x37a314u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_37a318:
    // 0x37a318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37a318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37a31c:
    // 0x37a31c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37a31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37a320:
    // 0x37a320: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37a320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37a324:
    // 0x37a324: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x37a324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_37a328:
    // 0x37a328: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x37a328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_37a32c:
    // 0x37a32c: 0xc04cfcc  jal         func_133F30
label_37a330:
    if (ctx->pc == 0x37A330u) {
        ctx->pc = 0x37A330u;
            // 0x37a330: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A334u;
        goto label_37a334;
    }
    ctx->pc = 0x37A32Cu;
    SET_GPR_U32(ctx, 31, 0x37A334u);
    ctx->pc = 0x37A330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A32Cu;
            // 0x37a330: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A334u; }
        if (ctx->pc != 0x37A334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A334u; }
        if (ctx->pc != 0x37A334u) { return; }
    }
    ctx->pc = 0x37A334u;
label_37a334:
    // 0x37a334: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x37a334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_37a338:
    // 0x37a338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37a338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37a33c:
    // 0x37a33c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37a33cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37a340:
    // 0x37a340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37a340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37a344:
    // 0x37a344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37a344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37a348:
    // 0x37a348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37a348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37a34c:
    // 0x37a34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a350:
    // 0x37a350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a354:
    // 0x37a354: 0x3e00008  jr          $ra
label_37a358:
    if (ctx->pc == 0x37A358u) {
        ctx->pc = 0x37A358u;
            // 0x37a358: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x37A35Cu;
        goto label_37a35c;
    }
    ctx->pc = 0x37A354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A354u;
            // 0x37a358: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A35Cu;
label_37a35c:
    // 0x37a35c: 0x0  nop
    ctx->pc = 0x37a35cu;
    // NOP
label_37a360:
    // 0x37a360: 0x3e00008  jr          $ra
label_37a364:
    if (ctx->pc == 0x37A364u) {
        ctx->pc = 0x37A368u;
        goto label_37a368;
    }
    ctx->pc = 0x37A360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A368u;
label_37a368:
    // 0x37a368: 0x0  nop
    ctx->pc = 0x37a368u;
    // NOP
label_37a36c:
    // 0x37a36c: 0x0  nop
    ctx->pc = 0x37a36cu;
    // NOP
label_37a370:
    // 0x37a370: 0x3e00008  jr          $ra
label_37a374:
    if (ctx->pc == 0x37A374u) {
        ctx->pc = 0x37A378u;
        goto label_37a378;
    }
    ctx->pc = 0x37A370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A378u;
label_37a378:
    // 0x37a378: 0x0  nop
    ctx->pc = 0x37a378u;
    // NOP
label_37a37c:
    // 0x37a37c: 0x0  nop
    ctx->pc = 0x37a37cu;
    // NOP
label_37a380:
    // 0x37a380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a384:
    // 0x37a384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37a388:
    // 0x37a388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a38c:
    // 0x37a38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a390:
    // 0x37a390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a394:
    // 0x37a394: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_37a398:
    if (ctx->pc == 0x37A398u) {
        ctx->pc = 0x37A398u;
            // 0x37a398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A39Cu;
        goto label_37a39c;
    }
    ctx->pc = 0x37A394u;
    {
        const bool branch_taken_0x37a394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A394u;
            // 0x37a398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a394) {
            ctx->pc = 0x37A3D8u;
            goto label_37a3d8;
        }
    }
    ctx->pc = 0x37A39Cu;
label_37a39c:
    // 0x37a39c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a3a0:
    // 0x37a3a0: 0x24427210  addiu       $v0, $v0, 0x7210
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29200));
label_37a3a4:
    // 0x37a3a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_37a3a8:
    if (ctx->pc == 0x37A3A8u) {
        ctx->pc = 0x37A3A8u;
            // 0x37a3a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37A3ACu;
        goto label_37a3ac;
    }
    ctx->pc = 0x37A3A4u;
    {
        const bool branch_taken_0x37a3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3A4u;
            // 0x37a3a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3a4) {
            ctx->pc = 0x37A3C0u;
            goto label_37a3c0;
        }
    }
    ctx->pc = 0x37A3ACu;
label_37a3ac:
    // 0x37a3ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a3b0:
    // 0x37a3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a3b4:
    // 0x37a3b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x37a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_37a3b8:
    // 0x37a3b8: 0xc057a68  jal         func_15E9A0
label_37a3bc:
    if (ctx->pc == 0x37A3BCu) {
        ctx->pc = 0x37A3BCu;
            // 0x37a3bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37A3C0u;
        goto label_37a3c0;
    }
    ctx->pc = 0x37A3B8u;
    SET_GPR_U32(ctx, 31, 0x37A3C0u);
    ctx->pc = 0x37A3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3B8u;
            // 0x37a3bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3C0u; }
        if (ctx->pc != 0x37A3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3C0u; }
        if (ctx->pc != 0x37A3C0u) { return; }
    }
    ctx->pc = 0x37A3C0u;
label_37a3c0:
    // 0x37a3c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37a3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37a3c4:
    // 0x37a3c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37a3c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37a3c8:
    // 0x37a3c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37a3cc:
    if (ctx->pc == 0x37A3CCu) {
        ctx->pc = 0x37A3CCu;
            // 0x37a3cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A3D0u;
        goto label_37a3d0;
    }
    ctx->pc = 0x37A3C8u;
    {
        const bool branch_taken_0x37a3c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37a3c8) {
            ctx->pc = 0x37A3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3C8u;
            // 0x37a3cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A3DCu;
            goto label_37a3dc;
        }
    }
    ctx->pc = 0x37A3D0u;
label_37a3d0:
    // 0x37a3d0: 0xc0400a8  jal         func_1002A0
label_37a3d4:
    if (ctx->pc == 0x37A3D4u) {
        ctx->pc = 0x37A3D4u;
            // 0x37a3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A3D8u;
        goto label_37a3d8;
    }
    ctx->pc = 0x37A3D0u;
    SET_GPR_U32(ctx, 31, 0x37A3D8u);
    ctx->pc = 0x37A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3D0u;
            // 0x37a3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3D8u; }
        if (ctx->pc != 0x37A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A3D8u; }
        if (ctx->pc != 0x37A3D8u) { return; }
    }
    ctx->pc = 0x37A3D8u;
label_37a3d8:
    // 0x37a3d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37a3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a3dc:
    // 0x37a3dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37a3e0:
    // 0x37a3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a3e4:
    // 0x37a3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a3e8:
    // 0x37a3e8: 0x3e00008  jr          $ra
label_37a3ec:
    if (ctx->pc == 0x37A3ECu) {
        ctx->pc = 0x37A3ECu;
            // 0x37a3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37A3F0u;
        goto label_37a3f0;
    }
    ctx->pc = 0x37A3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3E8u;
            // 0x37a3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A3F0u;
label_37a3f0:
    // 0x37a3f0: 0x3e00008  jr          $ra
label_37a3f4:
    if (ctx->pc == 0x37A3F4u) {
        ctx->pc = 0x37A3F4u;
            // 0x37a3f4: 0x240232dc  addiu       $v0, $zero, 0x32DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13020));
        ctx->pc = 0x37A3F8u;
        goto label_37a3f8;
    }
    ctx->pc = 0x37A3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A3F0u;
            // 0x37a3f4: 0x240232dc  addiu       $v0, $zero, 0x32DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A3F8u;
label_37a3f8:
    // 0x37a3f8: 0x0  nop
    ctx->pc = 0x37a3f8u;
    // NOP
label_37a3fc:
    // 0x37a3fc: 0x0  nop
    ctx->pc = 0x37a3fcu;
    // NOP
label_37a400:
    // 0x37a400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37a404:
    // 0x37a404: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37a408:
    // 0x37a408: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37a40c:
    // 0x37a40c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37a410:
    // 0x37a410: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37a410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a414:
    // 0x37a414: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37a414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37a418:
    // 0x37a418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a41c:
    // 0x37a41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a420:
    // 0x37a420: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x37a420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37a424:
    // 0x37a424: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_37a428:
    if (ctx->pc == 0x37A428u) {
        ctx->pc = 0x37A428u;
            // 0x37a428: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A42Cu;
        goto label_37a42c;
    }
    ctx->pc = 0x37A424u;
    {
        const bool branch_taken_0x37a424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A424u;
            // 0x37a428: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a424) {
            ctx->pc = 0x37A468u;
            goto label_37a468;
        }
    }
    ctx->pc = 0x37A42Cu;
label_37a42c:
    // 0x37a42c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37a42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a430:
    // 0x37a430: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37a430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a434:
    // 0x37a434: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37a434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a438:
    // 0x37a438: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x37a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37a43c:
    // 0x37a43c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37a440:
    // 0x37a440: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37a440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37a444:
    // 0x37a444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37a444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a448:
    // 0x37a448: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37a448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37a44c:
    // 0x37a44c: 0x320f809  jalr        $t9
label_37a450:
    if (ctx->pc == 0x37A450u) {
        ctx->pc = 0x37A454u;
        goto label_37a454;
    }
    ctx->pc = 0x37A44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A454u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A454u; }
            if (ctx->pc != 0x37A454u) { return; }
        }
        }
    }
    ctx->pc = 0x37A454u;
label_37a454:
    // 0x37a454: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37a454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_37a458:
    // 0x37a458: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37a45c:
    // 0x37a45c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x37a45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37a460:
    // 0x37a460: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_37a464:
    if (ctx->pc == 0x37A464u) {
        ctx->pc = 0x37A464u;
            // 0x37a464: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x37A468u;
        goto label_37a468;
    }
    ctx->pc = 0x37A460u;
    {
        const bool branch_taken_0x37a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A460u;
            // 0x37a464: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a460) {
            ctx->pc = 0x37A438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37a438;
        }
    }
    ctx->pc = 0x37A468u;
label_37a468:
    // 0x37a468: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37a468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37a46c:
    // 0x37a46c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37a46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37a470:
    // 0x37a470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37a470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37a474:
    // 0x37a474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37a474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37a478:
    // 0x37a478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37a478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37a47c:
    // 0x37a47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a480:
    // 0x37a480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a484:
    // 0x37a484: 0x3e00008  jr          $ra
label_37a488:
    if (ctx->pc == 0x37A488u) {
        ctx->pc = 0x37A488u;
            // 0x37a488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37A48Cu;
        goto label_37a48c;
    }
    ctx->pc = 0x37A484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A484u;
            // 0x37a488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A48Cu;
label_37a48c:
    // 0x37a48c: 0x0  nop
    ctx->pc = 0x37a48cu;
    // NOP
label_37a490:
    // 0x37a490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a494:
    // 0x37a494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37a494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37a498:
    // 0x37a498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37a49c:
    // 0x37a49c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x37a49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_37a4a0:
    // 0x37a4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a4a4:
    // 0x37a4a4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x37a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37a4a8:
    // 0x37a4a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37a4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37a4ac:
    // 0x37a4ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x37a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_37a4b0:
    // 0x37a4b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37a4b4:
    // 0x37a4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a4b8:
    // 0x37a4b8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_37a4bc:
    // 0x37a4bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37a4c0:
    // 0x37a4c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37a4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_37a4c4:
    // 0x37a4c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x37a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_37a4c8:
    // 0x37a4c8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x37a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_37a4cc:
    // 0x37a4cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x37a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_37a4d0:
    // 0x37a4d0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x37a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37a4d4:
    // 0x37a4d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37a4d8:
    // 0x37a4d8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x37a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_37a4dc:
    // 0x37a4dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x37a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37a4e0:
    // 0x37a4e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x37a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_37a4e4:
    // 0x37a4e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37a4e8:
    // 0x37a4e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a4ec:
    // 0x37a4ec: 0xc0a997c  jal         func_2A65F0
label_37a4f0:
    if (ctx->pc == 0x37A4F0u) {
        ctx->pc = 0x37A4F0u;
            // 0x37a4f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x37A4F4u;
        goto label_37a4f4;
    }
    ctx->pc = 0x37A4ECu;
    SET_GPR_U32(ctx, 31, 0x37A4F4u);
    ctx->pc = 0x37A4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A4ECu;
            // 0x37a4f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A4F4u; }
        if (ctx->pc != 0x37A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A4F4u; }
        if (ctx->pc != 0x37A4F4u) { return; }
    }
    ctx->pc = 0x37A4F4u;
label_37a4f4:
    // 0x37a4f4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x37a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_37a4f8:
    // 0x37a4f8: 0xc0d879c  jal         func_361E70
label_37a4fc:
    if (ctx->pc == 0x37A4FCu) {
        ctx->pc = 0x37A4FCu;
            // 0x37a4fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A500u;
        goto label_37a500;
    }
    ctx->pc = 0x37A4F8u;
    SET_GPR_U32(ctx, 31, 0x37A500u);
    ctx->pc = 0x37A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A4F8u;
            // 0x37a4fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A500u; }
        if (ctx->pc != 0x37A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A500u; }
        if (ctx->pc != 0x37A500u) { return; }
    }
    ctx->pc = 0x37A500u;
label_37a500:
    // 0x37a500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37a504:
    // 0x37a504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a508:
    // 0x37a508: 0x3e00008  jr          $ra
label_37a50c:
    if (ctx->pc == 0x37A50Cu) {
        ctx->pc = 0x37A50Cu;
            // 0x37a50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37A510u;
        goto label_37a510;
    }
    ctx->pc = 0x37A508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A508u;
            // 0x37a50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A510u;
label_37a510:
    // 0x37a510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37a514:
    // 0x37a514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37a518:
    // 0x37a518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a51c:
    // 0x37a51c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_37a520:
    // 0x37a520: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_37a524:
    if (ctx->pc == 0x37A524u) {
        ctx->pc = 0x37A524u;
            // 0x37a524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A528u;
        goto label_37a528;
    }
    ctx->pc = 0x37A520u;
    {
        const bool branch_taken_0x37a520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A520u;
            // 0x37a524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a520) {
            ctx->pc = 0x37A640u;
            goto label_37a640;
        }
    }
    ctx->pc = 0x37A528u;
label_37a528:
    // 0x37a528: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37a52c:
    // 0x37a52c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x37a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_37a530:
    // 0x37a530: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x37a530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_37a534:
    // 0x37a534: 0xc075128  jal         func_1D44A0
label_37a538:
    if (ctx->pc == 0x37A538u) {
        ctx->pc = 0x37A538u;
            // 0x37a538: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x37A53Cu;
        goto label_37a53c;
    }
    ctx->pc = 0x37A534u;
    SET_GPR_U32(ctx, 31, 0x37A53Cu);
    ctx->pc = 0x37A538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A534u;
            // 0x37a538: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A53Cu; }
        if (ctx->pc != 0x37A53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A53Cu; }
        if (ctx->pc != 0x37A53Cu) { return; }
    }
    ctx->pc = 0x37A53Cu;
label_37a53c:
    // 0x37a53c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x37a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37a540:
    // 0x37a540: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a544:
    // 0x37a544: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x37a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_37a548:
    // 0x37a548: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x37a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_37a54c:
    // 0x37a54c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37a54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a550:
    // 0x37a550: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37a554:
    if (ctx->pc == 0x37A554u) {
        ctx->pc = 0x37A554u;
            // 0x37a554: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x37A558u;
        goto label_37a558;
    }
    ctx->pc = 0x37A550u;
    {
        const bool branch_taken_0x37a550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A550u;
            // 0x37a554: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a550) {
            ctx->pc = 0x37A560u;
            goto label_37a560;
        }
    }
    ctx->pc = 0x37A558u;
label_37a558:
    // 0x37a558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a55c:
    // 0x37a55c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x37a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_37a560:
    // 0x37a560: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a564:
    // 0x37a564: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a568:
    // 0x37a568: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x37a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_37a56c:
    // 0x37a56c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37a570:
    // 0x37a570: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37a570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a574:
    // 0x37a574: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37a578:
    if (ctx->pc == 0x37A578u) {
        ctx->pc = 0x37A578u;
            // 0x37a578: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37A57Cu;
        goto label_37a57c;
    }
    ctx->pc = 0x37A574u;
    {
        const bool branch_taken_0x37a574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a574) {
            ctx->pc = 0x37A578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A574u;
            // 0x37a578: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A588u;
            goto label_37a588;
        }
    }
    ctx->pc = 0x37A57Cu;
label_37a57c:
    // 0x37a57c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a580:
    // 0x37a580: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x37a580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_37a584:
    // 0x37a584: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a588:
    // 0x37a588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a58c:
    // 0x37a58c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x37a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_37a590:
    // 0x37a590: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37a594:
    // 0x37a594: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37a594u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37a598:
    // 0x37a598: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37a59c:
    if (ctx->pc == 0x37A59Cu) {
        ctx->pc = 0x37A59Cu;
            // 0x37a59c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x37A5A0u;
        goto label_37a5a0;
    }
    ctx->pc = 0x37A598u;
    {
        const bool branch_taken_0x37a598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a598) {
            ctx->pc = 0x37A59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A598u;
            // 0x37a59c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A5ACu;
            goto label_37a5ac;
        }
    }
    ctx->pc = 0x37A5A0u;
label_37a5a0:
    // 0x37a5a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37a5a4:
    // 0x37a5a4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x37a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_37a5a8:
    // 0x37a5a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37a5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37a5ac:
    // 0x37a5ac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37a5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37a5b0:
    // 0x37a5b0: 0x320f809  jalr        $t9
label_37a5b4:
    if (ctx->pc == 0x37A5B4u) {
        ctx->pc = 0x37A5B4u;
            // 0x37a5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A5B8u;
        goto label_37a5b8;
    }
    ctx->pc = 0x37A5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A5B8u);
        ctx->pc = 0x37A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A5B0u;
            // 0x37a5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A5B8u; }
            if (ctx->pc != 0x37A5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x37A5B8u;
label_37a5b8:
    // 0x37a5b8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37a5bc:
    // 0x37a5bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a5c0:
    // 0x37a5c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x37a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_37a5c4:
    // 0x37a5c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37a5c8:
    // 0x37a5c8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37a5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37a5cc:
    // 0x37a5cc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37a5ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37a5d0:
    // 0x37a5d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37a5d4:
    if (ctx->pc == 0x37A5D4u) {
        ctx->pc = 0x37A5D4u;
            // 0x37a5d4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x37A5D8u;
        goto label_37a5d8;
    }
    ctx->pc = 0x37A5D0u;
    {
        const bool branch_taken_0x37a5d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5d0) {
            ctx->pc = 0x37A5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A5D0u;
            // 0x37a5d4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A5E4u;
            goto label_37a5e4;
        }
    }
    ctx->pc = 0x37A5D8u;
label_37a5d8:
    // 0x37a5d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a5dc:
    // 0x37a5dc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x37a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_37a5e0:
    // 0x37a5e0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37a5e4:
    // 0x37a5e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a5e8:
    // 0x37a5e8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x37a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_37a5ec:
    // 0x37a5ec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37a5f0:
    // 0x37a5f0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37a5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37a5f4:
    // 0x37a5f4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37a5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37a5f8:
    // 0x37a5f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37a5fc:
    if (ctx->pc == 0x37A5FCu) {
        ctx->pc = 0x37A600u;
        goto label_37a600;
    }
    ctx->pc = 0x37A5F8u;
    {
        const bool branch_taken_0x37a5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5f8) {
            ctx->pc = 0x37A608u;
            goto label_37a608;
        }
    }
    ctx->pc = 0x37A600u;
label_37a600:
    // 0x37a600: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a604:
    // 0x37a604: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x37a604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_37a608:
    // 0x37a608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a60c:
    // 0x37a60c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x37a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_37a610:
    // 0x37a610: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37a610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37a614:
    // 0x37a614: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37a618:
    if (ctx->pc == 0x37A618u) {
        ctx->pc = 0x37A61Cu;
        goto label_37a61c;
    }
    ctx->pc = 0x37A614u;
    {
        const bool branch_taken_0x37a614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a614) {
            ctx->pc = 0x37A624u;
            goto label_37a624;
        }
    }
    ctx->pc = 0x37A61Cu;
label_37a61c:
    // 0x37a61c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a620:
    // 0x37a620: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x37a620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_37a624:
    // 0x37a624: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a628:
    // 0x37a628: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_37a62c:
    // 0x37a62c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37a62cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37a630:
    // 0x37a630: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37a634:
    if (ctx->pc == 0x37A634u) {
        ctx->pc = 0x37A634u;
            // 0x37a634: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x37A638u;
        goto label_37a638;
    }
    ctx->pc = 0x37A630u;
    {
        const bool branch_taken_0x37a630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a630) {
            ctx->pc = 0x37A634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A630u;
            // 0x37a634: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A644u;
            goto label_37a644;
        }
    }
    ctx->pc = 0x37A638u;
label_37a638:
    // 0x37a638: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37a638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37a63c:
    // 0x37a63c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x37a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_37a640:
    // 0x37a640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37a644:
    // 0x37a644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a648:
    // 0x37a648: 0x3e00008  jr          $ra
label_37a64c:
    if (ctx->pc == 0x37A64Cu) {
        ctx->pc = 0x37A64Cu;
            // 0x37a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37A650u;
        goto label_37a650;
    }
    ctx->pc = 0x37A648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A648u;
            // 0x37a64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A650u;
label_37a650:
    // 0x37a650: 0x80de73c  j           func_379CF0
label_37a654:
    if (ctx->pc == 0x37A654u) {
        ctx->pc = 0x37A654u;
            // 0x37a654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37A658u;
        goto label_37a658;
    }
    ctx->pc = 0x37A650u;
    ctx->pc = 0x37A654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A650u;
            // 0x37a654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379CF0u;
    {
        auto targetFn = runtime->lookupFunction(0x379CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37A658u;
label_37a658:
    // 0x37a658: 0x0  nop
    ctx->pc = 0x37a658u;
    // NOP
label_37a65c:
    // 0x37a65c: 0x0  nop
    ctx->pc = 0x37a65cu;
    // NOP
label_37a660:
    // 0x37a660: 0x80de414  j           func_379050
label_37a664:
    if (ctx->pc == 0x37A664u) {
        ctx->pc = 0x37A664u;
            // 0x37a664: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37A668u;
        goto label_37a668;
    }
    ctx->pc = 0x37A660u;
    ctx->pc = 0x37A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A660u;
            // 0x37a664: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379050u;
    if (runtime->hasFunction(0x379050u)) {
        auto targetFn = runtime->lookupFunction(0x379050u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00379050_0x379050(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37A668u;
label_37a668:
    // 0x37a668: 0x0  nop
    ctx->pc = 0x37a668u;
    // NOP
label_37a66c:
    // 0x37a66c: 0x0  nop
    ctx->pc = 0x37a66cu;
    // NOP
label_37a670:
    // 0x37a670: 0x80de3f0  j           func_378FC0
label_37a674:
    if (ctx->pc == 0x37A674u) {
        ctx->pc = 0x37A674u;
            // 0x37a674: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37A678u;
        goto label_37a678;
    }
    ctx->pc = 0x37A670u;
    ctx->pc = 0x37A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A670u;
            // 0x37a674: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x378FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x378FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37A678u;
label_37a678:
    // 0x37a678: 0x0  nop
    ctx->pc = 0x37a678u;
    // NOP
label_37a67c:
    // 0x37a67c: 0x0  nop
    ctx->pc = 0x37a67cu;
    // NOP
label_37a680:
    // 0x37a680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a684:
    // 0x37a684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37a688:
    // 0x37a688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a68c:
    // 0x37a68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a690:
    // 0x37a690: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a694:
    // 0x37a694: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_37a698:
    if (ctx->pc == 0x37A698u) {
        ctx->pc = 0x37A698u;
            // 0x37a698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A69Cu;
        goto label_37a69c;
    }
    ctx->pc = 0x37A694u;
    {
        const bool branch_taken_0x37a694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A694u;
            // 0x37a698: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a694) {
            ctx->pc = 0x37A754u;
            goto label_37a754;
        }
    }
    ctx->pc = 0x37A69Cu;
label_37a69c:
    // 0x37a69c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a6a0:
    // 0x37a6a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a6a4:
    // 0x37a6a4: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x37a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
label_37a6a8:
    // 0x37a6a8: 0x24427368  addiu       $v0, $v0, 0x7368
    ctx->pc = 0x37a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29544));
label_37a6ac:
    // 0x37a6ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a6b0:
    // 0x37a6b0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x37a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_37a6b4:
    // 0x37a6b4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x37a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_37a6b8:
    // 0x37a6b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x37a6b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_37a6bc:
    // 0x37a6bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_37a6c0:
    if (ctx->pc == 0x37A6C0u) {
        ctx->pc = 0x37A6C4u;
        goto label_37a6c4;
    }
    ctx->pc = 0x37A6BCu;
    {
        const bool branch_taken_0x37a6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a6bc) {
            ctx->pc = 0x37A6F8u;
            goto label_37a6f8;
        }
    }
    ctx->pc = 0x37A6C4u;
label_37a6c4:
    // 0x37a6c4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x37a6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_37a6c8:
    // 0x37a6c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37a6cc:
    // 0x37a6cc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x37a6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_37a6d0:
    // 0x37a6d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37a6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_37a6d4:
    // 0x37a6d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37a6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37a6d8:
    // 0x37a6d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_37a6dc:
    if (ctx->pc == 0x37A6DCu) {
        ctx->pc = 0x37A6E0u;
        goto label_37a6e0;
    }
    ctx->pc = 0x37A6D8u;
    {
        const bool branch_taken_0x37a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a6d8) {
            ctx->pc = 0x37A6F8u;
            goto label_37a6f8;
        }
    }
    ctx->pc = 0x37A6E0u;
label_37a6e0:
    // 0x37a6e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_37a6e4:
    if (ctx->pc == 0x37A6E4u) {
        ctx->pc = 0x37A6E8u;
        goto label_37a6e8;
    }
    ctx->pc = 0x37A6E0u;
    {
        const bool branch_taken_0x37a6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a6e0) {
            ctx->pc = 0x37A6F8u;
            goto label_37a6f8;
        }
    }
    ctx->pc = 0x37A6E8u;
label_37a6e8:
    // 0x37a6e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37a6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a6ec:
    // 0x37a6ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37a6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37a6f0:
    // 0x37a6f0: 0x320f809  jalr        $t9
label_37a6f4:
    if (ctx->pc == 0x37A6F4u) {
        ctx->pc = 0x37A6F4u;
            // 0x37a6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37A6F8u;
        goto label_37a6f8;
    }
    ctx->pc = 0x37A6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A6F8u);
        ctx->pc = 0x37A6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A6F0u;
            // 0x37a6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A6F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A6F8u; }
            if (ctx->pc != 0x37A6F8u) { return; }
        }
        }
    }
    ctx->pc = 0x37A6F8u;
label_37a6f8:
    // 0x37a6f8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37a6fc:
    // 0x37a6fc: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x37a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_37a700:
    // 0x37a700: 0x24a5aa30  addiu       $a1, $a1, -0x55D0
    ctx->pc = 0x37a700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
label_37a704:
    // 0x37a704: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x37a704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_37a708:
    // 0x37a708: 0xc0407e8  jal         func_101FA0
label_37a70c:
    if (ctx->pc == 0x37A70Cu) {
        ctx->pc = 0x37A70Cu;
            // 0x37a70c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37A710u;
        goto label_37a710;
    }
    ctx->pc = 0x37A708u;
    SET_GPR_U32(ctx, 31, 0x37A710u);
    ctx->pc = 0x37A70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A708u;
            // 0x37a70c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A710u; }
        if (ctx->pc != 0x37A710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A710u; }
        if (ctx->pc != 0x37A710u) { return; }
    }
    ctx->pc = 0x37A710u;
label_37a710:
    // 0x37a710: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_37a714:
    if (ctx->pc == 0x37A714u) {
        ctx->pc = 0x37A714u;
            // 0x37a714: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x37A718u;
        goto label_37a718;
    }
    ctx->pc = 0x37A710u;
    {
        const bool branch_taken_0x37a710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a710) {
            ctx->pc = 0x37A714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A710u;
            // 0x37a714: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A740u;
            goto label_37a740;
        }
    }
    ctx->pc = 0x37A718u;
label_37a718:
    // 0x37a718: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a71c:
    // 0x37a71c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a720:
    // 0x37a720: 0x24637480  addiu       $v1, $v1, 0x7480
    ctx->pc = 0x37a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29824));
label_37a724:
    // 0x37a724: 0x244274b8  addiu       $v0, $v0, 0x74B8
    ctx->pc = 0x37a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29880));
label_37a728:
    // 0x37a728: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a72c:
    // 0x37a72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a730:
    // 0x37a730: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x37a730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_37a734:
    // 0x37a734: 0xc0de9dc  jal         func_37A770
label_37a738:
    if (ctx->pc == 0x37A738u) {
        ctx->pc = 0x37A738u;
            // 0x37a738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A73Cu;
        goto label_37a73c;
    }
    ctx->pc = 0x37A734u;
    SET_GPR_U32(ctx, 31, 0x37A73Cu);
    ctx->pc = 0x37A738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A734u;
            // 0x37a738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A770u;
    if (runtime->hasFunction(0x37A770u)) {
        auto targetFn = runtime->lookupFunction(0x37A770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A73Cu; }
        if (ctx->pc != 0x37A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A770_0x37a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A73Cu; }
        if (ctx->pc != 0x37A73Cu) { return; }
    }
    ctx->pc = 0x37A73Cu;
label_37a73c:
    // 0x37a73c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37a73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37a740:
    // 0x37a740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37a740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37a744:
    // 0x37a744: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37a748:
    if (ctx->pc == 0x37A748u) {
        ctx->pc = 0x37A748u;
            // 0x37a748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A74Cu;
        goto label_37a74c;
    }
    ctx->pc = 0x37A744u;
    {
        const bool branch_taken_0x37a744 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37a744) {
            ctx->pc = 0x37A748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A744u;
            // 0x37a748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A758u;
            goto label_37a758;
        }
    }
    ctx->pc = 0x37A74Cu;
label_37a74c:
    // 0x37a74c: 0xc0400a8  jal         func_1002A0
label_37a750:
    if (ctx->pc == 0x37A750u) {
        ctx->pc = 0x37A750u;
            // 0x37a750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A754u;
        goto label_37a754;
    }
    ctx->pc = 0x37A74Cu;
    SET_GPR_U32(ctx, 31, 0x37A754u);
    ctx->pc = 0x37A750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A74Cu;
            // 0x37a750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A754u; }
        if (ctx->pc != 0x37A754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A754u; }
        if (ctx->pc != 0x37A754u) { return; }
    }
    ctx->pc = 0x37A754u;
label_37a754:
    // 0x37a754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37a754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a758:
    // 0x37a758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37a75c:
    // 0x37a75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a760:
    // 0x37a760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a764:
    // 0x37a764: 0x3e00008  jr          $ra
label_37a768:
    if (ctx->pc == 0x37A768u) {
        ctx->pc = 0x37A768u;
            // 0x37a768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37A76Cu;
        goto label_37a76c;
    }
    ctx->pc = 0x37A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A764u;
            // 0x37a768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A76Cu;
label_37a76c:
    // 0x37a76c: 0x0  nop
    ctx->pc = 0x37a76cu;
    // NOP
}
