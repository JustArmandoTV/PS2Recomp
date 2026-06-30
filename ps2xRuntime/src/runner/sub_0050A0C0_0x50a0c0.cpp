#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050A0C0
// Address: 0x50a0c0 - 0x50adf0
void sub_0050A0C0_0x50a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A0C0_0x50a0c0");
#endif

    switch (ctx->pc) {
        case 0x50a0c0u: goto label_50a0c0;
        case 0x50a0c4u: goto label_50a0c4;
        case 0x50a0c8u: goto label_50a0c8;
        case 0x50a0ccu: goto label_50a0cc;
        case 0x50a0d0u: goto label_50a0d0;
        case 0x50a0d4u: goto label_50a0d4;
        case 0x50a0d8u: goto label_50a0d8;
        case 0x50a0dcu: goto label_50a0dc;
        case 0x50a0e0u: goto label_50a0e0;
        case 0x50a0e4u: goto label_50a0e4;
        case 0x50a0e8u: goto label_50a0e8;
        case 0x50a0ecu: goto label_50a0ec;
        case 0x50a0f0u: goto label_50a0f0;
        case 0x50a0f4u: goto label_50a0f4;
        case 0x50a0f8u: goto label_50a0f8;
        case 0x50a0fcu: goto label_50a0fc;
        case 0x50a100u: goto label_50a100;
        case 0x50a104u: goto label_50a104;
        case 0x50a108u: goto label_50a108;
        case 0x50a10cu: goto label_50a10c;
        case 0x50a110u: goto label_50a110;
        case 0x50a114u: goto label_50a114;
        case 0x50a118u: goto label_50a118;
        case 0x50a11cu: goto label_50a11c;
        case 0x50a120u: goto label_50a120;
        case 0x50a124u: goto label_50a124;
        case 0x50a128u: goto label_50a128;
        case 0x50a12cu: goto label_50a12c;
        case 0x50a130u: goto label_50a130;
        case 0x50a134u: goto label_50a134;
        case 0x50a138u: goto label_50a138;
        case 0x50a13cu: goto label_50a13c;
        case 0x50a140u: goto label_50a140;
        case 0x50a144u: goto label_50a144;
        case 0x50a148u: goto label_50a148;
        case 0x50a14cu: goto label_50a14c;
        case 0x50a150u: goto label_50a150;
        case 0x50a154u: goto label_50a154;
        case 0x50a158u: goto label_50a158;
        case 0x50a15cu: goto label_50a15c;
        case 0x50a160u: goto label_50a160;
        case 0x50a164u: goto label_50a164;
        case 0x50a168u: goto label_50a168;
        case 0x50a16cu: goto label_50a16c;
        case 0x50a170u: goto label_50a170;
        case 0x50a174u: goto label_50a174;
        case 0x50a178u: goto label_50a178;
        case 0x50a17cu: goto label_50a17c;
        case 0x50a180u: goto label_50a180;
        case 0x50a184u: goto label_50a184;
        case 0x50a188u: goto label_50a188;
        case 0x50a18cu: goto label_50a18c;
        case 0x50a190u: goto label_50a190;
        case 0x50a194u: goto label_50a194;
        case 0x50a198u: goto label_50a198;
        case 0x50a19cu: goto label_50a19c;
        case 0x50a1a0u: goto label_50a1a0;
        case 0x50a1a4u: goto label_50a1a4;
        case 0x50a1a8u: goto label_50a1a8;
        case 0x50a1acu: goto label_50a1ac;
        case 0x50a1b0u: goto label_50a1b0;
        case 0x50a1b4u: goto label_50a1b4;
        case 0x50a1b8u: goto label_50a1b8;
        case 0x50a1bcu: goto label_50a1bc;
        case 0x50a1c0u: goto label_50a1c0;
        case 0x50a1c4u: goto label_50a1c4;
        case 0x50a1c8u: goto label_50a1c8;
        case 0x50a1ccu: goto label_50a1cc;
        case 0x50a1d0u: goto label_50a1d0;
        case 0x50a1d4u: goto label_50a1d4;
        case 0x50a1d8u: goto label_50a1d8;
        case 0x50a1dcu: goto label_50a1dc;
        case 0x50a1e0u: goto label_50a1e0;
        case 0x50a1e4u: goto label_50a1e4;
        case 0x50a1e8u: goto label_50a1e8;
        case 0x50a1ecu: goto label_50a1ec;
        case 0x50a1f0u: goto label_50a1f0;
        case 0x50a1f4u: goto label_50a1f4;
        case 0x50a1f8u: goto label_50a1f8;
        case 0x50a1fcu: goto label_50a1fc;
        case 0x50a200u: goto label_50a200;
        case 0x50a204u: goto label_50a204;
        case 0x50a208u: goto label_50a208;
        case 0x50a20cu: goto label_50a20c;
        case 0x50a210u: goto label_50a210;
        case 0x50a214u: goto label_50a214;
        case 0x50a218u: goto label_50a218;
        case 0x50a21cu: goto label_50a21c;
        case 0x50a220u: goto label_50a220;
        case 0x50a224u: goto label_50a224;
        case 0x50a228u: goto label_50a228;
        case 0x50a22cu: goto label_50a22c;
        case 0x50a230u: goto label_50a230;
        case 0x50a234u: goto label_50a234;
        case 0x50a238u: goto label_50a238;
        case 0x50a23cu: goto label_50a23c;
        case 0x50a240u: goto label_50a240;
        case 0x50a244u: goto label_50a244;
        case 0x50a248u: goto label_50a248;
        case 0x50a24cu: goto label_50a24c;
        case 0x50a250u: goto label_50a250;
        case 0x50a254u: goto label_50a254;
        case 0x50a258u: goto label_50a258;
        case 0x50a25cu: goto label_50a25c;
        case 0x50a260u: goto label_50a260;
        case 0x50a264u: goto label_50a264;
        case 0x50a268u: goto label_50a268;
        case 0x50a26cu: goto label_50a26c;
        case 0x50a270u: goto label_50a270;
        case 0x50a274u: goto label_50a274;
        case 0x50a278u: goto label_50a278;
        case 0x50a27cu: goto label_50a27c;
        case 0x50a280u: goto label_50a280;
        case 0x50a284u: goto label_50a284;
        case 0x50a288u: goto label_50a288;
        case 0x50a28cu: goto label_50a28c;
        case 0x50a290u: goto label_50a290;
        case 0x50a294u: goto label_50a294;
        case 0x50a298u: goto label_50a298;
        case 0x50a29cu: goto label_50a29c;
        case 0x50a2a0u: goto label_50a2a0;
        case 0x50a2a4u: goto label_50a2a4;
        case 0x50a2a8u: goto label_50a2a8;
        case 0x50a2acu: goto label_50a2ac;
        case 0x50a2b0u: goto label_50a2b0;
        case 0x50a2b4u: goto label_50a2b4;
        case 0x50a2b8u: goto label_50a2b8;
        case 0x50a2bcu: goto label_50a2bc;
        case 0x50a2c0u: goto label_50a2c0;
        case 0x50a2c4u: goto label_50a2c4;
        case 0x50a2c8u: goto label_50a2c8;
        case 0x50a2ccu: goto label_50a2cc;
        case 0x50a2d0u: goto label_50a2d0;
        case 0x50a2d4u: goto label_50a2d4;
        case 0x50a2d8u: goto label_50a2d8;
        case 0x50a2dcu: goto label_50a2dc;
        case 0x50a2e0u: goto label_50a2e0;
        case 0x50a2e4u: goto label_50a2e4;
        case 0x50a2e8u: goto label_50a2e8;
        case 0x50a2ecu: goto label_50a2ec;
        case 0x50a2f0u: goto label_50a2f0;
        case 0x50a2f4u: goto label_50a2f4;
        case 0x50a2f8u: goto label_50a2f8;
        case 0x50a2fcu: goto label_50a2fc;
        case 0x50a300u: goto label_50a300;
        case 0x50a304u: goto label_50a304;
        case 0x50a308u: goto label_50a308;
        case 0x50a30cu: goto label_50a30c;
        case 0x50a310u: goto label_50a310;
        case 0x50a314u: goto label_50a314;
        case 0x50a318u: goto label_50a318;
        case 0x50a31cu: goto label_50a31c;
        case 0x50a320u: goto label_50a320;
        case 0x50a324u: goto label_50a324;
        case 0x50a328u: goto label_50a328;
        case 0x50a32cu: goto label_50a32c;
        case 0x50a330u: goto label_50a330;
        case 0x50a334u: goto label_50a334;
        case 0x50a338u: goto label_50a338;
        case 0x50a33cu: goto label_50a33c;
        case 0x50a340u: goto label_50a340;
        case 0x50a344u: goto label_50a344;
        case 0x50a348u: goto label_50a348;
        case 0x50a34cu: goto label_50a34c;
        case 0x50a350u: goto label_50a350;
        case 0x50a354u: goto label_50a354;
        case 0x50a358u: goto label_50a358;
        case 0x50a35cu: goto label_50a35c;
        case 0x50a360u: goto label_50a360;
        case 0x50a364u: goto label_50a364;
        case 0x50a368u: goto label_50a368;
        case 0x50a36cu: goto label_50a36c;
        case 0x50a370u: goto label_50a370;
        case 0x50a374u: goto label_50a374;
        case 0x50a378u: goto label_50a378;
        case 0x50a37cu: goto label_50a37c;
        case 0x50a380u: goto label_50a380;
        case 0x50a384u: goto label_50a384;
        case 0x50a388u: goto label_50a388;
        case 0x50a38cu: goto label_50a38c;
        case 0x50a390u: goto label_50a390;
        case 0x50a394u: goto label_50a394;
        case 0x50a398u: goto label_50a398;
        case 0x50a39cu: goto label_50a39c;
        case 0x50a3a0u: goto label_50a3a0;
        case 0x50a3a4u: goto label_50a3a4;
        case 0x50a3a8u: goto label_50a3a8;
        case 0x50a3acu: goto label_50a3ac;
        case 0x50a3b0u: goto label_50a3b0;
        case 0x50a3b4u: goto label_50a3b4;
        case 0x50a3b8u: goto label_50a3b8;
        case 0x50a3bcu: goto label_50a3bc;
        case 0x50a3c0u: goto label_50a3c0;
        case 0x50a3c4u: goto label_50a3c4;
        case 0x50a3c8u: goto label_50a3c8;
        case 0x50a3ccu: goto label_50a3cc;
        case 0x50a3d0u: goto label_50a3d0;
        case 0x50a3d4u: goto label_50a3d4;
        case 0x50a3d8u: goto label_50a3d8;
        case 0x50a3dcu: goto label_50a3dc;
        case 0x50a3e0u: goto label_50a3e0;
        case 0x50a3e4u: goto label_50a3e4;
        case 0x50a3e8u: goto label_50a3e8;
        case 0x50a3ecu: goto label_50a3ec;
        case 0x50a3f0u: goto label_50a3f0;
        case 0x50a3f4u: goto label_50a3f4;
        case 0x50a3f8u: goto label_50a3f8;
        case 0x50a3fcu: goto label_50a3fc;
        case 0x50a400u: goto label_50a400;
        case 0x50a404u: goto label_50a404;
        case 0x50a408u: goto label_50a408;
        case 0x50a40cu: goto label_50a40c;
        case 0x50a410u: goto label_50a410;
        case 0x50a414u: goto label_50a414;
        case 0x50a418u: goto label_50a418;
        case 0x50a41cu: goto label_50a41c;
        case 0x50a420u: goto label_50a420;
        case 0x50a424u: goto label_50a424;
        case 0x50a428u: goto label_50a428;
        case 0x50a42cu: goto label_50a42c;
        case 0x50a430u: goto label_50a430;
        case 0x50a434u: goto label_50a434;
        case 0x50a438u: goto label_50a438;
        case 0x50a43cu: goto label_50a43c;
        case 0x50a440u: goto label_50a440;
        case 0x50a444u: goto label_50a444;
        case 0x50a448u: goto label_50a448;
        case 0x50a44cu: goto label_50a44c;
        case 0x50a450u: goto label_50a450;
        case 0x50a454u: goto label_50a454;
        case 0x50a458u: goto label_50a458;
        case 0x50a45cu: goto label_50a45c;
        case 0x50a460u: goto label_50a460;
        case 0x50a464u: goto label_50a464;
        case 0x50a468u: goto label_50a468;
        case 0x50a46cu: goto label_50a46c;
        case 0x50a470u: goto label_50a470;
        case 0x50a474u: goto label_50a474;
        case 0x50a478u: goto label_50a478;
        case 0x50a47cu: goto label_50a47c;
        case 0x50a480u: goto label_50a480;
        case 0x50a484u: goto label_50a484;
        case 0x50a488u: goto label_50a488;
        case 0x50a48cu: goto label_50a48c;
        case 0x50a490u: goto label_50a490;
        case 0x50a494u: goto label_50a494;
        case 0x50a498u: goto label_50a498;
        case 0x50a49cu: goto label_50a49c;
        case 0x50a4a0u: goto label_50a4a0;
        case 0x50a4a4u: goto label_50a4a4;
        case 0x50a4a8u: goto label_50a4a8;
        case 0x50a4acu: goto label_50a4ac;
        case 0x50a4b0u: goto label_50a4b0;
        case 0x50a4b4u: goto label_50a4b4;
        case 0x50a4b8u: goto label_50a4b8;
        case 0x50a4bcu: goto label_50a4bc;
        case 0x50a4c0u: goto label_50a4c0;
        case 0x50a4c4u: goto label_50a4c4;
        case 0x50a4c8u: goto label_50a4c8;
        case 0x50a4ccu: goto label_50a4cc;
        case 0x50a4d0u: goto label_50a4d0;
        case 0x50a4d4u: goto label_50a4d4;
        case 0x50a4d8u: goto label_50a4d8;
        case 0x50a4dcu: goto label_50a4dc;
        case 0x50a4e0u: goto label_50a4e0;
        case 0x50a4e4u: goto label_50a4e4;
        case 0x50a4e8u: goto label_50a4e8;
        case 0x50a4ecu: goto label_50a4ec;
        case 0x50a4f0u: goto label_50a4f0;
        case 0x50a4f4u: goto label_50a4f4;
        case 0x50a4f8u: goto label_50a4f8;
        case 0x50a4fcu: goto label_50a4fc;
        case 0x50a500u: goto label_50a500;
        case 0x50a504u: goto label_50a504;
        case 0x50a508u: goto label_50a508;
        case 0x50a50cu: goto label_50a50c;
        case 0x50a510u: goto label_50a510;
        case 0x50a514u: goto label_50a514;
        case 0x50a518u: goto label_50a518;
        case 0x50a51cu: goto label_50a51c;
        case 0x50a520u: goto label_50a520;
        case 0x50a524u: goto label_50a524;
        case 0x50a528u: goto label_50a528;
        case 0x50a52cu: goto label_50a52c;
        case 0x50a530u: goto label_50a530;
        case 0x50a534u: goto label_50a534;
        case 0x50a538u: goto label_50a538;
        case 0x50a53cu: goto label_50a53c;
        case 0x50a540u: goto label_50a540;
        case 0x50a544u: goto label_50a544;
        case 0x50a548u: goto label_50a548;
        case 0x50a54cu: goto label_50a54c;
        case 0x50a550u: goto label_50a550;
        case 0x50a554u: goto label_50a554;
        case 0x50a558u: goto label_50a558;
        case 0x50a55cu: goto label_50a55c;
        case 0x50a560u: goto label_50a560;
        case 0x50a564u: goto label_50a564;
        case 0x50a568u: goto label_50a568;
        case 0x50a56cu: goto label_50a56c;
        case 0x50a570u: goto label_50a570;
        case 0x50a574u: goto label_50a574;
        case 0x50a578u: goto label_50a578;
        case 0x50a57cu: goto label_50a57c;
        case 0x50a580u: goto label_50a580;
        case 0x50a584u: goto label_50a584;
        case 0x50a588u: goto label_50a588;
        case 0x50a58cu: goto label_50a58c;
        case 0x50a590u: goto label_50a590;
        case 0x50a594u: goto label_50a594;
        case 0x50a598u: goto label_50a598;
        case 0x50a59cu: goto label_50a59c;
        case 0x50a5a0u: goto label_50a5a0;
        case 0x50a5a4u: goto label_50a5a4;
        case 0x50a5a8u: goto label_50a5a8;
        case 0x50a5acu: goto label_50a5ac;
        case 0x50a5b0u: goto label_50a5b0;
        case 0x50a5b4u: goto label_50a5b4;
        case 0x50a5b8u: goto label_50a5b8;
        case 0x50a5bcu: goto label_50a5bc;
        case 0x50a5c0u: goto label_50a5c0;
        case 0x50a5c4u: goto label_50a5c4;
        case 0x50a5c8u: goto label_50a5c8;
        case 0x50a5ccu: goto label_50a5cc;
        case 0x50a5d0u: goto label_50a5d0;
        case 0x50a5d4u: goto label_50a5d4;
        case 0x50a5d8u: goto label_50a5d8;
        case 0x50a5dcu: goto label_50a5dc;
        case 0x50a5e0u: goto label_50a5e0;
        case 0x50a5e4u: goto label_50a5e4;
        case 0x50a5e8u: goto label_50a5e8;
        case 0x50a5ecu: goto label_50a5ec;
        case 0x50a5f0u: goto label_50a5f0;
        case 0x50a5f4u: goto label_50a5f4;
        case 0x50a5f8u: goto label_50a5f8;
        case 0x50a5fcu: goto label_50a5fc;
        case 0x50a600u: goto label_50a600;
        case 0x50a604u: goto label_50a604;
        case 0x50a608u: goto label_50a608;
        case 0x50a60cu: goto label_50a60c;
        case 0x50a610u: goto label_50a610;
        case 0x50a614u: goto label_50a614;
        case 0x50a618u: goto label_50a618;
        case 0x50a61cu: goto label_50a61c;
        case 0x50a620u: goto label_50a620;
        case 0x50a624u: goto label_50a624;
        case 0x50a628u: goto label_50a628;
        case 0x50a62cu: goto label_50a62c;
        case 0x50a630u: goto label_50a630;
        case 0x50a634u: goto label_50a634;
        case 0x50a638u: goto label_50a638;
        case 0x50a63cu: goto label_50a63c;
        case 0x50a640u: goto label_50a640;
        case 0x50a644u: goto label_50a644;
        case 0x50a648u: goto label_50a648;
        case 0x50a64cu: goto label_50a64c;
        case 0x50a650u: goto label_50a650;
        case 0x50a654u: goto label_50a654;
        case 0x50a658u: goto label_50a658;
        case 0x50a65cu: goto label_50a65c;
        case 0x50a660u: goto label_50a660;
        case 0x50a664u: goto label_50a664;
        case 0x50a668u: goto label_50a668;
        case 0x50a66cu: goto label_50a66c;
        case 0x50a670u: goto label_50a670;
        case 0x50a674u: goto label_50a674;
        case 0x50a678u: goto label_50a678;
        case 0x50a67cu: goto label_50a67c;
        case 0x50a680u: goto label_50a680;
        case 0x50a684u: goto label_50a684;
        case 0x50a688u: goto label_50a688;
        case 0x50a68cu: goto label_50a68c;
        case 0x50a690u: goto label_50a690;
        case 0x50a694u: goto label_50a694;
        case 0x50a698u: goto label_50a698;
        case 0x50a69cu: goto label_50a69c;
        case 0x50a6a0u: goto label_50a6a0;
        case 0x50a6a4u: goto label_50a6a4;
        case 0x50a6a8u: goto label_50a6a8;
        case 0x50a6acu: goto label_50a6ac;
        case 0x50a6b0u: goto label_50a6b0;
        case 0x50a6b4u: goto label_50a6b4;
        case 0x50a6b8u: goto label_50a6b8;
        case 0x50a6bcu: goto label_50a6bc;
        case 0x50a6c0u: goto label_50a6c0;
        case 0x50a6c4u: goto label_50a6c4;
        case 0x50a6c8u: goto label_50a6c8;
        case 0x50a6ccu: goto label_50a6cc;
        case 0x50a6d0u: goto label_50a6d0;
        case 0x50a6d4u: goto label_50a6d4;
        case 0x50a6d8u: goto label_50a6d8;
        case 0x50a6dcu: goto label_50a6dc;
        case 0x50a6e0u: goto label_50a6e0;
        case 0x50a6e4u: goto label_50a6e4;
        case 0x50a6e8u: goto label_50a6e8;
        case 0x50a6ecu: goto label_50a6ec;
        case 0x50a6f0u: goto label_50a6f0;
        case 0x50a6f4u: goto label_50a6f4;
        case 0x50a6f8u: goto label_50a6f8;
        case 0x50a6fcu: goto label_50a6fc;
        case 0x50a700u: goto label_50a700;
        case 0x50a704u: goto label_50a704;
        case 0x50a708u: goto label_50a708;
        case 0x50a70cu: goto label_50a70c;
        case 0x50a710u: goto label_50a710;
        case 0x50a714u: goto label_50a714;
        case 0x50a718u: goto label_50a718;
        case 0x50a71cu: goto label_50a71c;
        case 0x50a720u: goto label_50a720;
        case 0x50a724u: goto label_50a724;
        case 0x50a728u: goto label_50a728;
        case 0x50a72cu: goto label_50a72c;
        case 0x50a730u: goto label_50a730;
        case 0x50a734u: goto label_50a734;
        case 0x50a738u: goto label_50a738;
        case 0x50a73cu: goto label_50a73c;
        case 0x50a740u: goto label_50a740;
        case 0x50a744u: goto label_50a744;
        case 0x50a748u: goto label_50a748;
        case 0x50a74cu: goto label_50a74c;
        case 0x50a750u: goto label_50a750;
        case 0x50a754u: goto label_50a754;
        case 0x50a758u: goto label_50a758;
        case 0x50a75cu: goto label_50a75c;
        case 0x50a760u: goto label_50a760;
        case 0x50a764u: goto label_50a764;
        case 0x50a768u: goto label_50a768;
        case 0x50a76cu: goto label_50a76c;
        case 0x50a770u: goto label_50a770;
        case 0x50a774u: goto label_50a774;
        case 0x50a778u: goto label_50a778;
        case 0x50a77cu: goto label_50a77c;
        case 0x50a780u: goto label_50a780;
        case 0x50a784u: goto label_50a784;
        case 0x50a788u: goto label_50a788;
        case 0x50a78cu: goto label_50a78c;
        case 0x50a790u: goto label_50a790;
        case 0x50a794u: goto label_50a794;
        case 0x50a798u: goto label_50a798;
        case 0x50a79cu: goto label_50a79c;
        case 0x50a7a0u: goto label_50a7a0;
        case 0x50a7a4u: goto label_50a7a4;
        case 0x50a7a8u: goto label_50a7a8;
        case 0x50a7acu: goto label_50a7ac;
        case 0x50a7b0u: goto label_50a7b0;
        case 0x50a7b4u: goto label_50a7b4;
        case 0x50a7b8u: goto label_50a7b8;
        case 0x50a7bcu: goto label_50a7bc;
        case 0x50a7c0u: goto label_50a7c0;
        case 0x50a7c4u: goto label_50a7c4;
        case 0x50a7c8u: goto label_50a7c8;
        case 0x50a7ccu: goto label_50a7cc;
        case 0x50a7d0u: goto label_50a7d0;
        case 0x50a7d4u: goto label_50a7d4;
        case 0x50a7d8u: goto label_50a7d8;
        case 0x50a7dcu: goto label_50a7dc;
        case 0x50a7e0u: goto label_50a7e0;
        case 0x50a7e4u: goto label_50a7e4;
        case 0x50a7e8u: goto label_50a7e8;
        case 0x50a7ecu: goto label_50a7ec;
        case 0x50a7f0u: goto label_50a7f0;
        case 0x50a7f4u: goto label_50a7f4;
        case 0x50a7f8u: goto label_50a7f8;
        case 0x50a7fcu: goto label_50a7fc;
        case 0x50a800u: goto label_50a800;
        case 0x50a804u: goto label_50a804;
        case 0x50a808u: goto label_50a808;
        case 0x50a80cu: goto label_50a80c;
        case 0x50a810u: goto label_50a810;
        case 0x50a814u: goto label_50a814;
        case 0x50a818u: goto label_50a818;
        case 0x50a81cu: goto label_50a81c;
        case 0x50a820u: goto label_50a820;
        case 0x50a824u: goto label_50a824;
        case 0x50a828u: goto label_50a828;
        case 0x50a82cu: goto label_50a82c;
        case 0x50a830u: goto label_50a830;
        case 0x50a834u: goto label_50a834;
        case 0x50a838u: goto label_50a838;
        case 0x50a83cu: goto label_50a83c;
        case 0x50a840u: goto label_50a840;
        case 0x50a844u: goto label_50a844;
        case 0x50a848u: goto label_50a848;
        case 0x50a84cu: goto label_50a84c;
        case 0x50a850u: goto label_50a850;
        case 0x50a854u: goto label_50a854;
        case 0x50a858u: goto label_50a858;
        case 0x50a85cu: goto label_50a85c;
        case 0x50a860u: goto label_50a860;
        case 0x50a864u: goto label_50a864;
        case 0x50a868u: goto label_50a868;
        case 0x50a86cu: goto label_50a86c;
        case 0x50a870u: goto label_50a870;
        case 0x50a874u: goto label_50a874;
        case 0x50a878u: goto label_50a878;
        case 0x50a87cu: goto label_50a87c;
        case 0x50a880u: goto label_50a880;
        case 0x50a884u: goto label_50a884;
        case 0x50a888u: goto label_50a888;
        case 0x50a88cu: goto label_50a88c;
        case 0x50a890u: goto label_50a890;
        case 0x50a894u: goto label_50a894;
        case 0x50a898u: goto label_50a898;
        case 0x50a89cu: goto label_50a89c;
        case 0x50a8a0u: goto label_50a8a0;
        case 0x50a8a4u: goto label_50a8a4;
        case 0x50a8a8u: goto label_50a8a8;
        case 0x50a8acu: goto label_50a8ac;
        case 0x50a8b0u: goto label_50a8b0;
        case 0x50a8b4u: goto label_50a8b4;
        case 0x50a8b8u: goto label_50a8b8;
        case 0x50a8bcu: goto label_50a8bc;
        case 0x50a8c0u: goto label_50a8c0;
        case 0x50a8c4u: goto label_50a8c4;
        case 0x50a8c8u: goto label_50a8c8;
        case 0x50a8ccu: goto label_50a8cc;
        case 0x50a8d0u: goto label_50a8d0;
        case 0x50a8d4u: goto label_50a8d4;
        case 0x50a8d8u: goto label_50a8d8;
        case 0x50a8dcu: goto label_50a8dc;
        case 0x50a8e0u: goto label_50a8e0;
        case 0x50a8e4u: goto label_50a8e4;
        case 0x50a8e8u: goto label_50a8e8;
        case 0x50a8ecu: goto label_50a8ec;
        case 0x50a8f0u: goto label_50a8f0;
        case 0x50a8f4u: goto label_50a8f4;
        case 0x50a8f8u: goto label_50a8f8;
        case 0x50a8fcu: goto label_50a8fc;
        case 0x50a900u: goto label_50a900;
        case 0x50a904u: goto label_50a904;
        case 0x50a908u: goto label_50a908;
        case 0x50a90cu: goto label_50a90c;
        case 0x50a910u: goto label_50a910;
        case 0x50a914u: goto label_50a914;
        case 0x50a918u: goto label_50a918;
        case 0x50a91cu: goto label_50a91c;
        case 0x50a920u: goto label_50a920;
        case 0x50a924u: goto label_50a924;
        case 0x50a928u: goto label_50a928;
        case 0x50a92cu: goto label_50a92c;
        case 0x50a930u: goto label_50a930;
        case 0x50a934u: goto label_50a934;
        case 0x50a938u: goto label_50a938;
        case 0x50a93cu: goto label_50a93c;
        case 0x50a940u: goto label_50a940;
        case 0x50a944u: goto label_50a944;
        case 0x50a948u: goto label_50a948;
        case 0x50a94cu: goto label_50a94c;
        case 0x50a950u: goto label_50a950;
        case 0x50a954u: goto label_50a954;
        case 0x50a958u: goto label_50a958;
        case 0x50a95cu: goto label_50a95c;
        case 0x50a960u: goto label_50a960;
        case 0x50a964u: goto label_50a964;
        case 0x50a968u: goto label_50a968;
        case 0x50a96cu: goto label_50a96c;
        case 0x50a970u: goto label_50a970;
        case 0x50a974u: goto label_50a974;
        case 0x50a978u: goto label_50a978;
        case 0x50a97cu: goto label_50a97c;
        case 0x50a980u: goto label_50a980;
        case 0x50a984u: goto label_50a984;
        case 0x50a988u: goto label_50a988;
        case 0x50a98cu: goto label_50a98c;
        case 0x50a990u: goto label_50a990;
        case 0x50a994u: goto label_50a994;
        case 0x50a998u: goto label_50a998;
        case 0x50a99cu: goto label_50a99c;
        case 0x50a9a0u: goto label_50a9a0;
        case 0x50a9a4u: goto label_50a9a4;
        case 0x50a9a8u: goto label_50a9a8;
        case 0x50a9acu: goto label_50a9ac;
        case 0x50a9b0u: goto label_50a9b0;
        case 0x50a9b4u: goto label_50a9b4;
        case 0x50a9b8u: goto label_50a9b8;
        case 0x50a9bcu: goto label_50a9bc;
        case 0x50a9c0u: goto label_50a9c0;
        case 0x50a9c4u: goto label_50a9c4;
        case 0x50a9c8u: goto label_50a9c8;
        case 0x50a9ccu: goto label_50a9cc;
        case 0x50a9d0u: goto label_50a9d0;
        case 0x50a9d4u: goto label_50a9d4;
        case 0x50a9d8u: goto label_50a9d8;
        case 0x50a9dcu: goto label_50a9dc;
        case 0x50a9e0u: goto label_50a9e0;
        case 0x50a9e4u: goto label_50a9e4;
        case 0x50a9e8u: goto label_50a9e8;
        case 0x50a9ecu: goto label_50a9ec;
        case 0x50a9f0u: goto label_50a9f0;
        case 0x50a9f4u: goto label_50a9f4;
        case 0x50a9f8u: goto label_50a9f8;
        case 0x50a9fcu: goto label_50a9fc;
        case 0x50aa00u: goto label_50aa00;
        case 0x50aa04u: goto label_50aa04;
        case 0x50aa08u: goto label_50aa08;
        case 0x50aa0cu: goto label_50aa0c;
        case 0x50aa10u: goto label_50aa10;
        case 0x50aa14u: goto label_50aa14;
        case 0x50aa18u: goto label_50aa18;
        case 0x50aa1cu: goto label_50aa1c;
        case 0x50aa20u: goto label_50aa20;
        case 0x50aa24u: goto label_50aa24;
        case 0x50aa28u: goto label_50aa28;
        case 0x50aa2cu: goto label_50aa2c;
        case 0x50aa30u: goto label_50aa30;
        case 0x50aa34u: goto label_50aa34;
        case 0x50aa38u: goto label_50aa38;
        case 0x50aa3cu: goto label_50aa3c;
        case 0x50aa40u: goto label_50aa40;
        case 0x50aa44u: goto label_50aa44;
        case 0x50aa48u: goto label_50aa48;
        case 0x50aa4cu: goto label_50aa4c;
        case 0x50aa50u: goto label_50aa50;
        case 0x50aa54u: goto label_50aa54;
        case 0x50aa58u: goto label_50aa58;
        case 0x50aa5cu: goto label_50aa5c;
        case 0x50aa60u: goto label_50aa60;
        case 0x50aa64u: goto label_50aa64;
        case 0x50aa68u: goto label_50aa68;
        case 0x50aa6cu: goto label_50aa6c;
        case 0x50aa70u: goto label_50aa70;
        case 0x50aa74u: goto label_50aa74;
        case 0x50aa78u: goto label_50aa78;
        case 0x50aa7cu: goto label_50aa7c;
        case 0x50aa80u: goto label_50aa80;
        case 0x50aa84u: goto label_50aa84;
        case 0x50aa88u: goto label_50aa88;
        case 0x50aa8cu: goto label_50aa8c;
        case 0x50aa90u: goto label_50aa90;
        case 0x50aa94u: goto label_50aa94;
        case 0x50aa98u: goto label_50aa98;
        case 0x50aa9cu: goto label_50aa9c;
        case 0x50aaa0u: goto label_50aaa0;
        case 0x50aaa4u: goto label_50aaa4;
        case 0x50aaa8u: goto label_50aaa8;
        case 0x50aaacu: goto label_50aaac;
        case 0x50aab0u: goto label_50aab0;
        case 0x50aab4u: goto label_50aab4;
        case 0x50aab8u: goto label_50aab8;
        case 0x50aabcu: goto label_50aabc;
        case 0x50aac0u: goto label_50aac0;
        case 0x50aac4u: goto label_50aac4;
        case 0x50aac8u: goto label_50aac8;
        case 0x50aaccu: goto label_50aacc;
        case 0x50aad0u: goto label_50aad0;
        case 0x50aad4u: goto label_50aad4;
        case 0x50aad8u: goto label_50aad8;
        case 0x50aadcu: goto label_50aadc;
        case 0x50aae0u: goto label_50aae0;
        case 0x50aae4u: goto label_50aae4;
        case 0x50aae8u: goto label_50aae8;
        case 0x50aaecu: goto label_50aaec;
        case 0x50aaf0u: goto label_50aaf0;
        case 0x50aaf4u: goto label_50aaf4;
        case 0x50aaf8u: goto label_50aaf8;
        case 0x50aafcu: goto label_50aafc;
        case 0x50ab00u: goto label_50ab00;
        case 0x50ab04u: goto label_50ab04;
        case 0x50ab08u: goto label_50ab08;
        case 0x50ab0cu: goto label_50ab0c;
        case 0x50ab10u: goto label_50ab10;
        case 0x50ab14u: goto label_50ab14;
        case 0x50ab18u: goto label_50ab18;
        case 0x50ab1cu: goto label_50ab1c;
        case 0x50ab20u: goto label_50ab20;
        case 0x50ab24u: goto label_50ab24;
        case 0x50ab28u: goto label_50ab28;
        case 0x50ab2cu: goto label_50ab2c;
        case 0x50ab30u: goto label_50ab30;
        case 0x50ab34u: goto label_50ab34;
        case 0x50ab38u: goto label_50ab38;
        case 0x50ab3cu: goto label_50ab3c;
        case 0x50ab40u: goto label_50ab40;
        case 0x50ab44u: goto label_50ab44;
        case 0x50ab48u: goto label_50ab48;
        case 0x50ab4cu: goto label_50ab4c;
        case 0x50ab50u: goto label_50ab50;
        case 0x50ab54u: goto label_50ab54;
        case 0x50ab58u: goto label_50ab58;
        case 0x50ab5cu: goto label_50ab5c;
        case 0x50ab60u: goto label_50ab60;
        case 0x50ab64u: goto label_50ab64;
        case 0x50ab68u: goto label_50ab68;
        case 0x50ab6cu: goto label_50ab6c;
        case 0x50ab70u: goto label_50ab70;
        case 0x50ab74u: goto label_50ab74;
        case 0x50ab78u: goto label_50ab78;
        case 0x50ab7cu: goto label_50ab7c;
        case 0x50ab80u: goto label_50ab80;
        case 0x50ab84u: goto label_50ab84;
        case 0x50ab88u: goto label_50ab88;
        case 0x50ab8cu: goto label_50ab8c;
        case 0x50ab90u: goto label_50ab90;
        case 0x50ab94u: goto label_50ab94;
        case 0x50ab98u: goto label_50ab98;
        case 0x50ab9cu: goto label_50ab9c;
        case 0x50aba0u: goto label_50aba0;
        case 0x50aba4u: goto label_50aba4;
        case 0x50aba8u: goto label_50aba8;
        case 0x50abacu: goto label_50abac;
        case 0x50abb0u: goto label_50abb0;
        case 0x50abb4u: goto label_50abb4;
        case 0x50abb8u: goto label_50abb8;
        case 0x50abbcu: goto label_50abbc;
        case 0x50abc0u: goto label_50abc0;
        case 0x50abc4u: goto label_50abc4;
        case 0x50abc8u: goto label_50abc8;
        case 0x50abccu: goto label_50abcc;
        case 0x50abd0u: goto label_50abd0;
        case 0x50abd4u: goto label_50abd4;
        case 0x50abd8u: goto label_50abd8;
        case 0x50abdcu: goto label_50abdc;
        case 0x50abe0u: goto label_50abe0;
        case 0x50abe4u: goto label_50abe4;
        case 0x50abe8u: goto label_50abe8;
        case 0x50abecu: goto label_50abec;
        case 0x50abf0u: goto label_50abf0;
        case 0x50abf4u: goto label_50abf4;
        case 0x50abf8u: goto label_50abf8;
        case 0x50abfcu: goto label_50abfc;
        case 0x50ac00u: goto label_50ac00;
        case 0x50ac04u: goto label_50ac04;
        case 0x50ac08u: goto label_50ac08;
        case 0x50ac0cu: goto label_50ac0c;
        case 0x50ac10u: goto label_50ac10;
        case 0x50ac14u: goto label_50ac14;
        case 0x50ac18u: goto label_50ac18;
        case 0x50ac1cu: goto label_50ac1c;
        case 0x50ac20u: goto label_50ac20;
        case 0x50ac24u: goto label_50ac24;
        case 0x50ac28u: goto label_50ac28;
        case 0x50ac2cu: goto label_50ac2c;
        case 0x50ac30u: goto label_50ac30;
        case 0x50ac34u: goto label_50ac34;
        case 0x50ac38u: goto label_50ac38;
        case 0x50ac3cu: goto label_50ac3c;
        case 0x50ac40u: goto label_50ac40;
        case 0x50ac44u: goto label_50ac44;
        case 0x50ac48u: goto label_50ac48;
        case 0x50ac4cu: goto label_50ac4c;
        case 0x50ac50u: goto label_50ac50;
        case 0x50ac54u: goto label_50ac54;
        case 0x50ac58u: goto label_50ac58;
        case 0x50ac5cu: goto label_50ac5c;
        case 0x50ac60u: goto label_50ac60;
        case 0x50ac64u: goto label_50ac64;
        case 0x50ac68u: goto label_50ac68;
        case 0x50ac6cu: goto label_50ac6c;
        case 0x50ac70u: goto label_50ac70;
        case 0x50ac74u: goto label_50ac74;
        case 0x50ac78u: goto label_50ac78;
        case 0x50ac7cu: goto label_50ac7c;
        case 0x50ac80u: goto label_50ac80;
        case 0x50ac84u: goto label_50ac84;
        case 0x50ac88u: goto label_50ac88;
        case 0x50ac8cu: goto label_50ac8c;
        case 0x50ac90u: goto label_50ac90;
        case 0x50ac94u: goto label_50ac94;
        case 0x50ac98u: goto label_50ac98;
        case 0x50ac9cu: goto label_50ac9c;
        case 0x50aca0u: goto label_50aca0;
        case 0x50aca4u: goto label_50aca4;
        case 0x50aca8u: goto label_50aca8;
        case 0x50acacu: goto label_50acac;
        case 0x50acb0u: goto label_50acb0;
        case 0x50acb4u: goto label_50acb4;
        case 0x50acb8u: goto label_50acb8;
        case 0x50acbcu: goto label_50acbc;
        case 0x50acc0u: goto label_50acc0;
        case 0x50acc4u: goto label_50acc4;
        case 0x50acc8u: goto label_50acc8;
        case 0x50acccu: goto label_50accc;
        case 0x50acd0u: goto label_50acd0;
        case 0x50acd4u: goto label_50acd4;
        case 0x50acd8u: goto label_50acd8;
        case 0x50acdcu: goto label_50acdc;
        case 0x50ace0u: goto label_50ace0;
        case 0x50ace4u: goto label_50ace4;
        case 0x50ace8u: goto label_50ace8;
        case 0x50acecu: goto label_50acec;
        case 0x50acf0u: goto label_50acf0;
        case 0x50acf4u: goto label_50acf4;
        case 0x50acf8u: goto label_50acf8;
        case 0x50acfcu: goto label_50acfc;
        case 0x50ad00u: goto label_50ad00;
        case 0x50ad04u: goto label_50ad04;
        case 0x50ad08u: goto label_50ad08;
        case 0x50ad0cu: goto label_50ad0c;
        case 0x50ad10u: goto label_50ad10;
        case 0x50ad14u: goto label_50ad14;
        case 0x50ad18u: goto label_50ad18;
        case 0x50ad1cu: goto label_50ad1c;
        case 0x50ad20u: goto label_50ad20;
        case 0x50ad24u: goto label_50ad24;
        case 0x50ad28u: goto label_50ad28;
        case 0x50ad2cu: goto label_50ad2c;
        case 0x50ad30u: goto label_50ad30;
        case 0x50ad34u: goto label_50ad34;
        case 0x50ad38u: goto label_50ad38;
        case 0x50ad3cu: goto label_50ad3c;
        case 0x50ad40u: goto label_50ad40;
        case 0x50ad44u: goto label_50ad44;
        case 0x50ad48u: goto label_50ad48;
        case 0x50ad4cu: goto label_50ad4c;
        case 0x50ad50u: goto label_50ad50;
        case 0x50ad54u: goto label_50ad54;
        case 0x50ad58u: goto label_50ad58;
        case 0x50ad5cu: goto label_50ad5c;
        case 0x50ad60u: goto label_50ad60;
        case 0x50ad64u: goto label_50ad64;
        case 0x50ad68u: goto label_50ad68;
        case 0x50ad6cu: goto label_50ad6c;
        case 0x50ad70u: goto label_50ad70;
        case 0x50ad74u: goto label_50ad74;
        case 0x50ad78u: goto label_50ad78;
        case 0x50ad7cu: goto label_50ad7c;
        case 0x50ad80u: goto label_50ad80;
        case 0x50ad84u: goto label_50ad84;
        case 0x50ad88u: goto label_50ad88;
        case 0x50ad8cu: goto label_50ad8c;
        case 0x50ad90u: goto label_50ad90;
        case 0x50ad94u: goto label_50ad94;
        case 0x50ad98u: goto label_50ad98;
        case 0x50ad9cu: goto label_50ad9c;
        case 0x50ada0u: goto label_50ada0;
        case 0x50ada4u: goto label_50ada4;
        case 0x50ada8u: goto label_50ada8;
        case 0x50adacu: goto label_50adac;
        case 0x50adb0u: goto label_50adb0;
        case 0x50adb4u: goto label_50adb4;
        case 0x50adb8u: goto label_50adb8;
        case 0x50adbcu: goto label_50adbc;
        case 0x50adc0u: goto label_50adc0;
        case 0x50adc4u: goto label_50adc4;
        case 0x50adc8u: goto label_50adc8;
        case 0x50adccu: goto label_50adcc;
        case 0x50add0u: goto label_50add0;
        case 0x50add4u: goto label_50add4;
        case 0x50add8u: goto label_50add8;
        case 0x50addcu: goto label_50addc;
        case 0x50ade0u: goto label_50ade0;
        case 0x50ade4u: goto label_50ade4;
        case 0x50ade8u: goto label_50ade8;
        case 0x50adecu: goto label_50adec;
        default: break;
    }

    ctx->pc = 0x50a0c0u;

label_50a0c0:
    // 0x50a0c0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x50a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_50a0c4:
    // 0x50a0c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_50a0c8:
    // 0x50a0c8: 0x8c650d74  lw          $a1, 0xD74($v1)
    ctx->pc = 0x50a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_50a0cc:
    // 0x50a0cc: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x50a0ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_50a0d0:
    // 0x50a0d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x50a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_50a0d4:
    // 0x50a0d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x50a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_50a0d8:
    // 0x50a0d8: 0x24660280  addiu       $a2, $v1, 0x280
    ctx->pc = 0x50a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_50a0dc:
    // 0x50a0dc: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x50a0dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_50a0e0:
    // 0x50a0e0: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_50a0e4:
    if (ctx->pc == 0x50A0E4u) {
        ctx->pc = 0x50A0E4u;
            // 0x50a0e4: 0x90a302a1  lbu         $v1, 0x2A1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 673)));
        ctx->pc = 0x50A0E8u;
        goto label_50a0e8;
    }
    ctx->pc = 0x50A0E0u;
    {
        const bool branch_taken_0x50a0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a0e0) {
            ctx->pc = 0x50A0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A0E0u;
            // 0x50a0e4: 0x90a302a1  lbu         $v1, 0x2A1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 673)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A120u;
            goto label_50a120;
        }
    }
    ctx->pc = 0x50A0E8u;
label_50a0e8:
    // 0x50a0e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x50a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_50a0ec:
    // 0x50a0ec: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_50a0f0:
    if (ctx->pc == 0x50A0F0u) {
        ctx->pc = 0x50A0F0u;
            // 0x50a0f0: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x50A0F4u;
        goto label_50a0f4;
    }
    ctx->pc = 0x50A0ECu;
    {
        const bool branch_taken_0x50a0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a0ec) {
            ctx->pc = 0x50A0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A0ECu;
            // 0x50a0f0: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A114u;
            goto label_50a114;
        }
    }
    ctx->pc = 0x50A0F4u;
label_50a0f4:
    // 0x50a0f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50a0f8:
    // 0x50a0f8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_50a0fc:
    if (ctx->pc == 0x50A0FCu) {
        ctx->pc = 0x50A0FCu;
            // 0x50a0fc: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x50A100u;
        goto label_50a100;
    }
    ctx->pc = 0x50A0F8u;
    {
        const bool branch_taken_0x50a0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a0f8) {
            ctx->pc = 0x50A0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A0F8u;
            // 0x50a0fc: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A108u;
            goto label_50a108;
        }
    }
    ctx->pc = 0x50A100u;
label_50a100:
    // 0x50a100: 0x10000024  b           . + 4 + (0x24 << 2)
label_50a104:
    if (ctx->pc == 0x50A104u) {
        ctx->pc = 0x50A104u;
            // 0x50a104: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x50A108u;
        goto label_50a108;
    }
    ctx->pc = 0x50A100u;
    {
        const bool branch_taken_0x50a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A100u;
            // 0x50a104: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a100) {
            ctx->pc = 0x50A194u;
            goto label_50a194;
        }
    }
    ctx->pc = 0x50A108u;
label_50a108:
    // 0x50a108: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x50a108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_50a10c:
    // 0x50a10c: 0x10000023  b           . + 4 + (0x23 << 2)
label_50a110:
    if (ctx->pc == 0x50A110u) {
        ctx->pc = 0x50A110u;
            // 0x50a110: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50A114u;
        goto label_50a114;
    }
    ctx->pc = 0x50A10Cu;
    {
        const bool branch_taken_0x50a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A10Cu;
            // 0x50a110: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a10c) {
            ctx->pc = 0x50A19Cu;
            goto label_50a19c;
        }
    }
    ctx->pc = 0x50A114u;
label_50a114:
    // 0x50a114: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50a118:
    // 0x50a118: 0x10000020  b           . + 4 + (0x20 << 2)
label_50a11c:
    if (ctx->pc == 0x50A11Cu) {
        ctx->pc = 0x50A11Cu;
            // 0x50a11c: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50A120u;
        goto label_50a120;
    }
    ctx->pc = 0x50A118u;
    {
        const bool branch_taken_0x50a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A118u;
            // 0x50a11c: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a118) {
            ctx->pc = 0x50A19Cu;
            goto label_50a19c;
        }
    }
    ctx->pc = 0x50A120u;
label_50a120:
    // 0x50a120: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x50a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_50a124:
    // 0x50a124: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_50a128:
    if (ctx->pc == 0x50A128u) {
        ctx->pc = 0x50A128u;
            // 0x50a128: 0x24a602a0  addiu       $a2, $a1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
        ctx->pc = 0x50A12Cu;
        goto label_50a12c;
    }
    ctx->pc = 0x50A124u;
    {
        const bool branch_taken_0x50a124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A124u;
            // 0x50a128: 0x24a602a0  addiu       $a2, $a1, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a124) {
            ctx->pc = 0x50A178u;
            goto label_50a178;
        }
    }
    ctx->pc = 0x50A12Cu;
label_50a12c:
    // 0x50a12c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50a130:
    // 0x50a130: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_50a134:
    if (ctx->pc == 0x50A134u) {
        ctx->pc = 0x50A134u;
            // 0x50a134: 0x90c30004  lbu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->pc = 0x50A138u;
        goto label_50a138;
    }
    ctx->pc = 0x50A130u;
    {
        const bool branch_taken_0x50a130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a130) {
            ctx->pc = 0x50A134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A130u;
            // 0x50a134: 0x90c30004  lbu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A140u;
            goto label_50a140;
        }
    }
    ctx->pc = 0x50A138u;
label_50a138:
    // 0x50a138: 0x10000014  b           . + 4 + (0x14 << 2)
label_50a13c:
    if (ctx->pc == 0x50A13Cu) {
        ctx->pc = 0x50A13Cu;
            // 0x50a13c: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x50A140u;
        goto label_50a140;
    }
    ctx->pc = 0x50A138u;
    {
        const bool branch_taken_0x50a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A138u;
            // 0x50a13c: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a138) {
            ctx->pc = 0x50A18Cu;
            goto label_50a18c;
        }
    }
    ctx->pc = 0x50A140u;
label_50a140:
    // 0x50a140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x50a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50a144:
    // 0x50a144: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_50a148:
    if (ctx->pc == 0x50A148u) {
        ctx->pc = 0x50A148u;
            // 0x50a148: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x50A14Cu;
        goto label_50a14c;
    }
    ctx->pc = 0x50A144u;
    {
        const bool branch_taken_0x50a144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a144) {
            ctx->pc = 0x50A148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A144u;
            // 0x50a148: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A170u;
            goto label_50a170;
        }
    }
    ctx->pc = 0x50A14Cu;
label_50a14c:
    // 0x50a14c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x50a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_50a150:
    // 0x50a150: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_50a154:
    if (ctx->pc == 0x50A154u) {
        ctx->pc = 0x50A158u;
        goto label_50a158;
    }
    ctx->pc = 0x50A150u;
    {
        const bool branch_taken_0x50a150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a150) {
            ctx->pc = 0x50A16Cu;
            goto label_50a16c;
        }
    }
    ctx->pc = 0x50A158u;
label_50a158:
    // 0x50a158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a15c:
    // 0x50a15c: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x50a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
label_50a160:
    // 0x50a160: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x50a160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_50a164:
    // 0x50a164: 0x1000000d  b           . + 4 + (0xD << 2)
label_50a168:
    if (ctx->pc == 0x50A168u) {
        ctx->pc = 0x50A168u;
            // 0x50a168: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50A16Cu;
        goto label_50a16c;
    }
    ctx->pc = 0x50A164u;
    {
        const bool branch_taken_0x50a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A164u;
            // 0x50a168: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a164) {
            ctx->pc = 0x50A19Cu;
            goto label_50a19c;
        }
    }
    ctx->pc = 0x50A16Cu;
label_50a16c:
    // 0x50a16c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x50a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_50a170:
    // 0x50a170: 0x1000000c  b           . + 4 + (0xC << 2)
label_50a174:
    if (ctx->pc == 0x50A174u) {
        ctx->pc = 0x50A174u;
            // 0x50a174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A178u;
        goto label_50a178;
    }
    ctx->pc = 0x50A170u;
    {
        const bool branch_taken_0x50a170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A170u;
            // 0x50a174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a170) {
            ctx->pc = 0x50A1A4u;
            goto label_50a1a4;
        }
    }
    ctx->pc = 0x50A178u;
label_50a178:
    // 0x50a178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a17c:
    // 0x50a17c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50a180:
    // 0x50a180: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x50a180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
label_50a184:
    // 0x50a184: 0x10000005  b           . + 4 + (0x5 << 2)
label_50a188:
    if (ctx->pc == 0x50A188u) {
        ctx->pc = 0x50A188u;
            // 0x50a188: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50A18Cu;
        goto label_50a18c;
    }
    ctx->pc = 0x50A184u;
    {
        const bool branch_taken_0x50a184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A184u;
            // 0x50a188: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a184) {
            ctx->pc = 0x50A19Cu;
            goto label_50a19c;
        }
    }
    ctx->pc = 0x50A18Cu;
label_50a18c:
    // 0x50a18c: 0x10000005  b           . + 4 + (0x5 << 2)
label_50a190:
    if (ctx->pc == 0x50A190u) {
        ctx->pc = 0x50A190u;
            // 0x50a190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A194u;
        goto label_50a194;
    }
    ctx->pc = 0x50A18Cu;
    {
        const bool branch_taken_0x50a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A18Cu;
            // 0x50a190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a18c) {
            ctx->pc = 0x50A1A4u;
            goto label_50a1a4;
        }
    }
    ctx->pc = 0x50A194u;
label_50a194:
    // 0x50a194: 0x10000003  b           . + 4 + (0x3 << 2)
label_50a198:
    if (ctx->pc == 0x50A198u) {
        ctx->pc = 0x50A198u;
            // 0x50a198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A19Cu;
        goto label_50a19c;
    }
    ctx->pc = 0x50A194u;
    {
        const bool branch_taken_0x50a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A194u;
            // 0x50a198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a194) {
            ctx->pc = 0x50A1A4u;
            goto label_50a1a4;
        }
    }
    ctx->pc = 0x50A19Cu;
label_50a19c:
    // 0x50a19c: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x50a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
label_50a1a0:
    // 0x50a1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a1a4:
    // 0x50a1a4: 0x3e00008  jr          $ra
label_50a1a8:
    if (ctx->pc == 0x50A1A8u) {
        ctx->pc = 0x50A1ACu;
        goto label_50a1ac;
    }
    ctx->pc = 0x50A1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50A1ACu;
label_50a1ac:
    // 0x50a1ac: 0x0  nop
    ctx->pc = 0x50a1acu;
    // NOP
label_50a1b0:
    // 0x50a1b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x50a1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_50a1b4:
    // 0x50a1b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x50a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_50a1b8:
    // 0x50a1b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50a1bc:
    // 0x50a1bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a1c0:
    // 0x50a1c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50a1c4:
    // 0x50a1c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50a1c8:
    // 0x50a1c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50a1cc:
    // 0x50a1cc: 0x24631ae0  addiu       $v1, $v1, 0x1AE0
    ctx->pc = 0x50a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6880));
label_50a1d0:
    // 0x50a1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50a1d4:
    // 0x50a1d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x50a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50a1d8:
    // 0x50a1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50a1dc:
    // 0x50a1dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a1dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a1e0:
    // 0x50a1e0: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x50a1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_50a1e4:
    // 0x50a1e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x50a1e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_50a1e8:
    // 0x50a1e8: 0x8c450c78  lw          $a1, 0xC78($v0)
    ctx->pc = 0x50a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_50a1ec:
    // 0x50a1ec: 0x8e260d74  lw          $a2, 0xD74($s1)
    ctx->pc = 0x50a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_50a1f0:
    // 0x50a1f0: 0x8cb20018  lw          $s2, 0x18($a1)
    ctx->pc = 0x50a1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_50a1f4:
    // 0x50a1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50a1f8:
    // 0x50a1f8: 0x90c502c5  lbu         $a1, 0x2C5($a2)
    ctx->pc = 0x50a1f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
label_50a1fc:
    // 0x50a1fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x50a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_50a200:
    // 0x50a200: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x50a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_50a204:
    // 0x50a204: 0x24b00280  addiu       $s0, $a1, 0x280
    ctx->pc = 0x50a204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
label_50a208:
    // 0x50a208: 0x90a50284  lbu         $a1, 0x284($a1)
    ctx->pc = 0x50a208u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 644)));
label_50a20c:
    // 0x50a20c: 0xa7a200a4  sh          $v0, 0xA4($sp)
    ctx->pc = 0x50a20cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
label_50a210:
    // 0x50a210: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x50a210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_50a214:
    // 0x50a214: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x50a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_50a218:
    // 0x50a218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x50a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_50a21c:
    // 0x50a21c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x50a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_50a220:
    // 0x50a220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50a220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50a224:
    // 0x50a224: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x50a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_50a228:
    // 0x50a228: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x50a228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50a22c:
    // 0x50a22c: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x50a22cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
label_50a230:
    // 0x50a230: 0xa7a000a2  sh          $zero, 0xA2($sp)
    ctx->pc = 0x50a230u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 0));
label_50a234:
    // 0x50a234: 0xc04cbd8  jal         func_132F60
label_50a238:
    if (ctx->pc == 0x50A238u) {
        ctx->pc = 0x50A238u;
            // 0x50a238: 0xa7a000a6  sh          $zero, 0xA6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x50A23Cu;
        goto label_50a23c;
    }
    ctx->pc = 0x50A234u;
    SET_GPR_U32(ctx, 31, 0x50A23Cu);
    ctx->pc = 0x50A238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A234u;
            // 0x50a238: 0xa7a000a6  sh          $zero, 0xA6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A23Cu; }
        if (ctx->pc != 0x50A23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A23Cu; }
        if (ctx->pc != 0x50A23Cu) { return; }
    }
    ctx->pc = 0x50A23Cu;
label_50a23c:
    // 0x50a23c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a240:
    // 0x50a240: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x50a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50a244:
    // 0x50a244: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a244u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a248:
    // 0x50a248: 0xc04cbd8  jal         func_132F60
label_50a24c:
    if (ctx->pc == 0x50A24Cu) {
        ctx->pc = 0x50A24Cu;
            // 0x50a24c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A250u;
        goto label_50a250;
    }
    ctx->pc = 0x50A248u;
    SET_GPR_U32(ctx, 31, 0x50A250u);
    ctx->pc = 0x50A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A248u;
            // 0x50a24c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A250u; }
        if (ctx->pc != 0x50A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A250u; }
        if (ctx->pc != 0x50A250u) { return; }
    }
    ctx->pc = 0x50A250u;
label_50a250:
    // 0x50a250: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a254:
    // 0x50a254: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50a258:
    // 0x50a258: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a258u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a25c:
    // 0x50a25c: 0xc04cbd8  jal         func_132F60
label_50a260:
    if (ctx->pc == 0x50A260u) {
        ctx->pc = 0x50A260u;
            // 0x50a260: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A264u;
        goto label_50a264;
    }
    ctx->pc = 0x50A25Cu;
    SET_GPR_U32(ctx, 31, 0x50A264u);
    ctx->pc = 0x50A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A25Cu;
            // 0x50a260: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A264u; }
        if (ctx->pc != 0x50A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A264u; }
        if (ctx->pc != 0x50A264u) { return; }
    }
    ctx->pc = 0x50A264u;
label_50a264:
    // 0x50a264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a268:
    // 0x50a268: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x50a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_50a26c:
    // 0x50a26c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a26cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a270:
    // 0x50a270: 0xc04cbd8  jal         func_132F60
label_50a274:
    if (ctx->pc == 0x50A274u) {
        ctx->pc = 0x50A274u;
            // 0x50a274: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A278u;
        goto label_50a278;
    }
    ctx->pc = 0x50A270u;
    SET_GPR_U32(ctx, 31, 0x50A278u);
    ctx->pc = 0x50A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A270u;
            // 0x50a274: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A278u; }
        if (ctx->pc != 0x50A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A278u; }
        if (ctx->pc != 0x50A278u) { return; }
    }
    ctx->pc = 0x50A278u;
label_50a278:
    // 0x50a278: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x50a278u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_50a27c:
    // 0x50a27c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a280:
    // 0x50a280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x50a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50a284:
    // 0x50a284: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x50a284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_50a288:
    // 0x50a288: 0xc0b7e14  jal         func_2DF850
label_50a28c:
    if (ctx->pc == 0x50A28Cu) {
        ctx->pc = 0x50A28Cu;
            // 0x50a28c: 0x26280820  addiu       $t0, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->pc = 0x50A290u;
        goto label_50a290;
    }
    ctx->pc = 0x50A288u;
    SET_GPR_U32(ctx, 31, 0x50A290u);
    ctx->pc = 0x50A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A288u;
            // 0x50a28c: 0x26280820  addiu       $t0, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF850u;
    if (runtime->hasFunction(0x2DF850u)) {
        auto targetFn = runtime->lookupFunction(0x2DF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A290u; }
        if (ctx->pc != 0x50A290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF850_0x2df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A290u; }
        if (ctx->pc != 0x50A290u) { return; }
    }
    ctx->pc = 0x50A290u;
label_50a290:
    // 0x50a290: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x50a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a294:
    // 0x50a294: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x50a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_50a298:
    // 0x50a298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50a298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50a29c:
    // 0x50a29c: 0x0  nop
    ctx->pc = 0x50a29cu;
    // NOP
label_50a2a0:
    // 0x50a2a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x50a2a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a2a4:
    // 0x50a2a4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50a2a8:
    if (ctx->pc == 0x50A2A8u) {
        ctx->pc = 0x50A2A8u;
            // 0x50a2a8: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x50A2ACu;
        goto label_50a2ac;
    }
    ctx->pc = 0x50A2A4u;
    {
        const bool branch_taken_0x50a2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a2a4) {
            ctx->pc = 0x50A2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2A4u;
            // 0x50a2a8: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A2B4u;
            goto label_50a2b4;
        }
    }
    ctx->pc = 0x50A2ACu;
label_50a2ac:
    // 0x50a2ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_50a2b0:
    if (ctx->pc == 0x50A2B0u) {
        ctx->pc = 0x50A2B0u;
            // 0x50a2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50A2B4u;
        goto label_50a2b4;
    }
    ctx->pc = 0x50A2ACu;
    {
        const bool branch_taken_0x50a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2ACu;
            // 0x50a2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a2ac) {
            ctx->pc = 0x50A2ECu;
            goto label_50a2ec;
        }
    }
    ctx->pc = 0x50A2B4u;
label_50a2b4:
    // 0x50a2b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50a2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a2b8:
    // 0x50a2b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50a2bc:
    if (ctx->pc == 0x50A2BCu) {
        ctx->pc = 0x50A2BCu;
            // 0x50a2bc: 0xc6600004  lwc1        $f0, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x50A2C0u;
        goto label_50a2c0;
    }
    ctx->pc = 0x50A2B8u;
    {
        const bool branch_taken_0x50a2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a2b8) {
            ctx->pc = 0x50A2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2B8u;
            // 0x50a2bc: 0xc6600004  lwc1        $f0, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A2C8u;
            goto label_50a2c8;
        }
    }
    ctx->pc = 0x50A2C0u;
label_50a2c0:
    // 0x50a2c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_50a2c4:
    if (ctx->pc == 0x50A2C4u) {
        ctx->pc = 0x50A2C4u;
            // 0x50a2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A2C8u;
        goto label_50a2c8;
    }
    ctx->pc = 0x50A2C0u;
    {
        const bool branch_taken_0x50a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2C0u;
            // 0x50a2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a2c0) {
            ctx->pc = 0x50A2ECu;
            goto label_50a2ec;
        }
    }
    ctx->pc = 0x50A2C8u;
label_50a2c8:
    // 0x50a2c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50a2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a2cc:
    // 0x50a2cc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50a2d0:
    if (ctx->pc == 0x50A2D0u) {
        ctx->pc = 0x50A2D0u;
            // 0x50a2d0: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x50A2D4u;
        goto label_50a2d4;
    }
    ctx->pc = 0x50A2CCu;
    {
        const bool branch_taken_0x50a2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a2cc) {
            ctx->pc = 0x50A2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2CCu;
            // 0x50a2d0: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A2DCu;
            goto label_50a2dc;
        }
    }
    ctx->pc = 0x50A2D4u;
label_50a2d4:
    // 0x50a2d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_50a2d8:
    if (ctx->pc == 0x50A2D8u) {
        ctx->pc = 0x50A2D8u;
            // 0x50a2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50A2DCu;
        goto label_50a2dc;
    }
    ctx->pc = 0x50A2D4u;
    {
        const bool branch_taken_0x50a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2D4u;
            // 0x50a2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a2d4) {
            ctx->pc = 0x50A2ECu;
            goto label_50a2ec;
        }
    }
    ctx->pc = 0x50A2DCu;
label_50a2dc:
    // 0x50a2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50a2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a2e0:
    // 0x50a2e0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_50a2e4:
    if (ctx->pc == 0x50A2E4u) {
        ctx->pc = 0x50A2E4u;
            // 0x50a2e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50A2E8u;
        goto label_50a2e8;
    }
    ctx->pc = 0x50A2E0u;
    {
        const bool branch_taken_0x50a2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a2e0) {
            ctx->pc = 0x50A2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A2E0u;
            // 0x50a2e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A2ECu;
            goto label_50a2ec;
        }
    }
    ctx->pc = 0x50A2E8u;
label_50a2e8:
    // 0x50a2e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50a2ec:
    // 0x50a2ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50a2f0:
    // 0x50a2f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50a2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50a2f4:
    // 0x50a2f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50a2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50a2f8:
    // 0x50a2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50a2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50a2fc:
    // 0x50a2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50a2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50a300:
    // 0x50a300: 0x3e00008  jr          $ra
label_50a304:
    if (ctx->pc == 0x50A304u) {
        ctx->pc = 0x50A304u;
            // 0x50a304: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50A308u;
        goto label_50a308;
    }
    ctx->pc = 0x50A300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A300u;
            // 0x50a304: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50A308u;
label_50a308:
    // 0x50a308: 0x0  nop
    ctx->pc = 0x50a308u;
    // NOP
label_50a30c:
    // 0x50a30c: 0x0  nop
    ctx->pc = 0x50a30cu;
    // NOP
label_50a310:
    // 0x50a310: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x50a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_50a314:
    // 0x50a314: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50a318:
    // 0x50a318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x50a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_50a31c:
    // 0x50a31c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a320:
    // 0x50a320: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50a324:
    // 0x50a324: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a324u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a328:
    // 0x50a328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50a32c:
    // 0x50a32c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x50a32cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_50a330:
    // 0x50a330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50a334:
    // 0x50a334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50a338:
    // 0x50a338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50a33c:
    // 0x50a33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50a33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50a340:
    // 0x50a340: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x50a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_50a344:
    // 0x50a344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x50a344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50a348:
    // 0x50a348: 0x8cb30024  lw          $s3, 0x24($a1)
    ctx->pc = 0x50a348u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_50a34c:
    // 0x50a34c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50a350:
    // 0x50a350: 0x8cb2002c  lw          $s2, 0x2C($a1)
    ctx->pc = 0x50a350u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_50a354:
    // 0x50a354: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x50a354u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_50a358:
    // 0x50a358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50a35c:
    // 0x50a35c: 0xa7a200c4  sh          $v0, 0xC4($sp)
    ctx->pc = 0x50a35cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 2));
label_50a360:
    // 0x50a360: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x50a360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_50a364:
    // 0x50a364: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x50a364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_50a368:
    // 0x50a368: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x50a368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_50a36c:
    // 0x50a36c: 0xa7a000c0  sh          $zero, 0xC0($sp)
    ctx->pc = 0x50a36cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
label_50a370:
    // 0x50a370: 0xa7a000c2  sh          $zero, 0xC2($sp)
    ctx->pc = 0x50a370u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 194), (uint16_t)GPR_U32(ctx, 0));
label_50a374:
    // 0x50a374: 0xc04cbd8  jal         func_132F60
label_50a378:
    if (ctx->pc == 0x50A378u) {
        ctx->pc = 0x50A378u;
            // 0x50a378: 0xa7a000c6  sh          $zero, 0xC6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 198), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x50A37Cu;
        goto label_50a37c;
    }
    ctx->pc = 0x50A374u;
    SET_GPR_U32(ctx, 31, 0x50A37Cu);
    ctx->pc = 0x50A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A374u;
            // 0x50a378: 0xa7a000c6  sh          $zero, 0xC6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 198), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A37Cu; }
        if (ctx->pc != 0x50A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A37Cu; }
        if (ctx->pc != 0x50A37Cu) { return; }
    }
    ctx->pc = 0x50A37Cu;
label_50a37c:
    // 0x50a37c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a380:
    // 0x50a380: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x50a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_50a384:
    // 0x50a384: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a384u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a388:
    // 0x50a388: 0xc04cbd8  jal         func_132F60
label_50a38c:
    if (ctx->pc == 0x50A38Cu) {
        ctx->pc = 0x50A38Cu;
            // 0x50a38c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A390u;
        goto label_50a390;
    }
    ctx->pc = 0x50A388u;
    SET_GPR_U32(ctx, 31, 0x50A390u);
    ctx->pc = 0x50A38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A388u;
            // 0x50a38c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A390u; }
        if (ctx->pc != 0x50A390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A390u; }
        if (ctx->pc != 0x50A390u) { return; }
    }
    ctx->pc = 0x50A390u;
label_50a390:
    // 0x50a390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a394:
    // 0x50a394: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x50a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_50a398:
    // 0x50a398: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a398u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a39c:
    // 0x50a39c: 0xc04cbd8  jal         func_132F60
label_50a3a0:
    if (ctx->pc == 0x50A3A0u) {
        ctx->pc = 0x50A3A0u;
            // 0x50a3a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A3A4u;
        goto label_50a3a4;
    }
    ctx->pc = 0x50A39Cu;
    SET_GPR_U32(ctx, 31, 0x50A3A4u);
    ctx->pc = 0x50A3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A39Cu;
            // 0x50a3a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3A4u; }
        if (ctx->pc != 0x50A3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3A4u; }
        if (ctx->pc != 0x50A3A4u) { return; }
    }
    ctx->pc = 0x50A3A4u;
label_50a3a4:
    // 0x50a3a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a3a8:
    // 0x50a3a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50a3ac:
    // 0x50a3ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50a3acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50a3b0:
    // 0x50a3b0: 0xc04cbd8  jal         func_132F60
label_50a3b4:
    if (ctx->pc == 0x50A3B4u) {
        ctx->pc = 0x50A3B4u;
            // 0x50a3b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50A3B8u;
        goto label_50a3b8;
    }
    ctx->pc = 0x50A3B0u;
    SET_GPR_U32(ctx, 31, 0x50A3B8u);
    ctx->pc = 0x50A3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3B0u;
            // 0x50a3b4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3B8u; }
        if (ctx->pc != 0x50A3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3B8u; }
        if (ctx->pc != 0x50A3B8u) { return; }
    }
    ctx->pc = 0x50A3B8u;
label_50a3b8:
    // 0x50a3b8: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x50a3b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_50a3bc:
    // 0x50a3bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x50a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50a3c0:
    // 0x50a3c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50a3c4:
    // 0x50a3c4: 0x266702c0  addiu       $a3, $s3, 0x2C0
    ctx->pc = 0x50a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_50a3c8:
    // 0x50a3c8: 0xc0b7e14  jal         func_2DF850
label_50a3cc:
    if (ctx->pc == 0x50A3CCu) {
        ctx->pc = 0x50A3CCu;
            // 0x50a3cc: 0x26680820  addiu       $t0, $s3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
        ctx->pc = 0x50A3D0u;
        goto label_50a3d0;
    }
    ctx->pc = 0x50A3C8u;
    SET_GPR_U32(ctx, 31, 0x50A3D0u);
    ctx->pc = 0x50A3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3C8u;
            // 0x50a3cc: 0x26680820  addiu       $t0, $s3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF850u;
    if (runtime->hasFunction(0x2DF850u)) {
        auto targetFn = runtime->lookupFunction(0x2DF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3D0u; }
        if (ctx->pc != 0x50A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF850_0x2df850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3D0u; }
        if (ctx->pc != 0x50A3D0u) { return; }
    }
    ctx->pc = 0x50A3D0u;
label_50a3d0:
    // 0x50a3d0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x50a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_50a3d4:
    // 0x50a3d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_50a3d8:
    if (ctx->pc == 0x50A3D8u) {
        ctx->pc = 0x50A3D8u;
            // 0x50a3d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x50A3DCu;
        goto label_50a3dc;
    }
    ctx->pc = 0x50A3D4u;
    {
        const bool branch_taken_0x50a3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a3d4) {
            ctx->pc = 0x50A3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3D4u;
            // 0x50a3d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A3F4u;
            goto label_50a3f4;
        }
    }
    ctx->pc = 0x50A3DCu;
label_50a3dc:
    // 0x50a3dc: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x50a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50a3e0:
    // 0x50a3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50a3e4:
    // 0x50a3e4: 0xc1427f0  jal         func_509FC0
label_50a3e8:
    if (ctx->pc == 0x50A3E8u) {
        ctx->pc = 0x50A3E8u;
            // 0x50a3e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A3ECu;
        goto label_50a3ec;
    }
    ctx->pc = 0x50A3E4u;
    SET_GPR_U32(ctx, 31, 0x50A3ECu);
    ctx->pc = 0x50A3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3E4u;
            // 0x50a3e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509FC0u;
    if (runtime->hasFunction(0x509FC0u)) {
        auto targetFn = runtime->lookupFunction(0x509FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3ECu; }
        if (ctx->pc != 0x50A3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509FC0_0x509fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A3ECu; }
        if (ctx->pc != 0x50A3ECu) { return; }
    }
    ctx->pc = 0x50A3ECu;
label_50a3ec:
    // 0x50a3ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_50a3f0:
    if (ctx->pc == 0x50A3F0u) {
        ctx->pc = 0x50A3F0u;
            // 0x50a3f0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50A3F4u;
        goto label_50a3f4;
    }
    ctx->pc = 0x50A3ECu;
    {
        const bool branch_taken_0x50a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3ECu;
            // 0x50a3f0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a3ec) {
            ctx->pc = 0x50A408u;
            goto label_50a408;
        }
    }
    ctx->pc = 0x50A3F4u;
label_50a3f4:
    // 0x50a3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50a3f8:
    // 0x50a3f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50a3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a3fc:
    // 0x50a3fc: 0xc1427f0  jal         func_509FC0
label_50a400:
    if (ctx->pc == 0x50A400u) {
        ctx->pc = 0x50A400u;
            // 0x50a400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A404u;
        goto label_50a404;
    }
    ctx->pc = 0x50A3FCu;
    SET_GPR_U32(ctx, 31, 0x50A404u);
    ctx->pc = 0x50A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A3FCu;
            // 0x50a400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509FC0u;
    if (runtime->hasFunction(0x509FC0u)) {
        auto targetFn = runtime->lookupFunction(0x509FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A404u; }
        if (ctx->pc != 0x50A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509FC0_0x509fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A404u; }
        if (ctx->pc != 0x50A404u) { return; }
    }
    ctx->pc = 0x50A404u;
label_50a404:
    // 0x50a404: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x50a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50a408:
    // 0x50a408: 0xc04cc44  jal         func_133110
label_50a40c:
    if (ctx->pc == 0x50A40Cu) {
        ctx->pc = 0x50A40Cu;
            // 0x50a40c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50A410u;
        goto label_50a410;
    }
    ctx->pc = 0x50A408u;
    SET_GPR_U32(ctx, 31, 0x50A410u);
    ctx->pc = 0x50A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A408u;
            // 0x50a40c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A410u; }
        if (ctx->pc != 0x50A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A410u; }
        if (ctx->pc != 0x50A410u) { return; }
    }
    ctx->pc = 0x50A410u;
label_50a410:
    // 0x50a410: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x50a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50a414:
    // 0x50a414: 0xc04cc04  jal         func_133010
label_50a418:
    if (ctx->pc == 0x50A418u) {
        ctx->pc = 0x50A418u;
            // 0x50a418: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50A41Cu;
        goto label_50a41c;
    }
    ctx->pc = 0x50A414u;
    SET_GPR_U32(ctx, 31, 0x50A41Cu);
    ctx->pc = 0x50A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A414u;
            // 0x50a418: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A41Cu; }
        if (ctx->pc != 0x50A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A41Cu; }
        if (ctx->pc != 0x50A41Cu) { return; }
    }
    ctx->pc = 0x50A41Cu;
label_50a41c:
    // 0x50a41c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x50a41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_50a420:
    // 0x50a420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50a420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50a424:
    // 0x50a424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50a424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50a428:
    // 0x50a428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50a428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50a42c:
    // 0x50a42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50a42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50a430:
    // 0x50a430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50a430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50a434:
    // 0x50a434: 0x3e00008  jr          $ra
label_50a438:
    if (ctx->pc == 0x50A438u) {
        ctx->pc = 0x50A438u;
            // 0x50a438: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x50A43Cu;
        goto label_50a43c;
    }
    ctx->pc = 0x50A434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A434u;
            // 0x50a438: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50A43Cu;
label_50a43c:
    // 0x50a43c: 0x0  nop
    ctx->pc = 0x50a43cu;
    // NOP
label_50a440:
    // 0x50a440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50a444:
    // 0x50a444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50a448:
    // 0x50a448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50a44c:
    // 0x50a44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50a44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50a450:
    // 0x50a450: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_50a454:
    if (ctx->pc == 0x50A454u) {
        ctx->pc = 0x50A454u;
            // 0x50a454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A458u;
        goto label_50a458;
    }
    ctx->pc = 0x50A450u;
    {
        const bool branch_taken_0x50a450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a450) {
            ctx->pc = 0x50A454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A450u;
            // 0x50a454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A490u;
            goto label_50a490;
        }
    }
    ctx->pc = 0x50A458u;
label_50a458:
    // 0x50a458: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_50a45c:
    // 0x50a45c: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x50a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
label_50a460:
    // 0x50a460: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_50a464:
    if (ctx->pc == 0x50A464u) {
        ctx->pc = 0x50A464u;
            // 0x50a464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x50A468u;
        goto label_50a468;
    }
    ctx->pc = 0x50A460u;
    {
        const bool branch_taken_0x50a460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A460u;
            // 0x50a464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a460) {
            ctx->pc = 0x50A474u;
            goto label_50a474;
        }
    }
    ctx->pc = 0x50A468u;
label_50a468:
    // 0x50a468: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_50a46c:
    // 0x50a46c: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
label_50a470:
    // 0x50a470: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50a474:
    // 0x50a474: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50a474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_50a478:
    // 0x50a478: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50a478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_50a47c:
    // 0x50a47c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_50a480:
    if (ctx->pc == 0x50A480u) {
        ctx->pc = 0x50A484u;
        goto label_50a484;
    }
    ctx->pc = 0x50A47Cu;
    {
        const bool branch_taken_0x50a47c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50a47c) {
            ctx->pc = 0x50A48Cu;
            goto label_50a48c;
        }
    }
    ctx->pc = 0x50A484u;
label_50a484:
    // 0x50a484: 0xc0400a8  jal         func_1002A0
label_50a488:
    if (ctx->pc == 0x50A488u) {
        ctx->pc = 0x50A488u;
            // 0x50a488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A48Cu;
        goto label_50a48c;
    }
    ctx->pc = 0x50A484u;
    SET_GPR_U32(ctx, 31, 0x50A48Cu);
    ctx->pc = 0x50A488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A484u;
            // 0x50a488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A48Cu; }
        if (ctx->pc != 0x50A48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A48Cu; }
        if (ctx->pc != 0x50A48Cu) { return; }
    }
    ctx->pc = 0x50A48Cu;
label_50a48c:
    // 0x50a48c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50a48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50a490:
    // 0x50a490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50a494:
    // 0x50a494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50a494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50a498:
    // 0x50a498: 0x3e00008  jr          $ra
label_50a49c:
    if (ctx->pc == 0x50A49Cu) {
        ctx->pc = 0x50A49Cu;
            // 0x50a49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50A4A0u;
        goto label_50a4a0;
    }
    ctx->pc = 0x50A498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A498u;
            // 0x50a49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50A4A0u;
label_50a4a0:
    // 0x50a4a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x50a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_50a4a4:
    // 0x50a4a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50a4a8:
    // 0x50a4a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x50a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_50a4ac:
    // 0x50a4ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x50a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_50a4b0:
    // 0x50a4b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x50a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50a4b4:
    // 0x50a4b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50a4b8:
    // 0x50a4b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x50a4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50a4bc:
    // 0x50a4bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50a4c0:
    // 0x50a4c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50a4c4:
    // 0x50a4c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50a4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50a4c8:
    // 0x50a4c8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x50a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_50a4cc:
    // 0x50a4cc: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x50a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_50a4d0:
    // 0x50a4d0: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x50a4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_50a4d4:
    // 0x50a4d4: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_50a4d8:
    // 0x50a4d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x50a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_50a4dc:
    // 0x50a4dc: 0x90900007  lbu         $s0, 0x7($a0)
    ctx->pc = 0x50a4dcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
label_50a4e0:
    // 0x50a4e0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_50a4e4:
    if (ctx->pc == 0x50A4E4u) {
        ctx->pc = 0x50A4E4u;
            // 0x50a4e4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A4E8u;
        goto label_50a4e8;
    }
    ctx->pc = 0x50A4E0u;
    {
        const bool branch_taken_0x50a4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x50A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A4E0u;
            // 0x50a4e4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a4e0) {
            ctx->pc = 0x50A4F8u;
            goto label_50a4f8;
        }
    }
    ctx->pc = 0x50A4E8u;
label_50a4e8:
    // 0x50a4e8: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x50a4e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_50a4ec:
    // 0x50a4ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_50a4f0:
    if (ctx->pc == 0x50A4F0u) {
        ctx->pc = 0x50A4F0u;
            // 0x50a4f0: 0x8e230e30  lw          $v1, 0xE30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
        ctx->pc = 0x50A4F4u;
        goto label_50a4f4;
    }
    ctx->pc = 0x50A4ECu;
    {
        const bool branch_taken_0x50a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a4ec) {
            ctx->pc = 0x50A4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A4ECu;
            // 0x50a4f0: 0x8e230e30  lw          $v1, 0xE30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A4FCu;
            goto label_50a4fc;
        }
    }
    ctx->pc = 0x50A4F4u;
label_50a4f4:
    // 0x50a4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50a4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50a4f8:
    // 0x50a4f8: 0x8e230e30  lw          $v1, 0xE30($s1)
    ctx->pc = 0x50a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_50a4fc:
    // 0x50a4fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50a500:
    // 0x50a500: 0x5062004c  beql        $v1, $v0, . + 4 + (0x4C << 2)
label_50a504:
    if (ctx->pc == 0x50A504u) {
        ctx->pc = 0x50A504u;
            // 0x50a504: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x50A508u;
        goto label_50a508;
    }
    ctx->pc = 0x50A500u;
    {
        const bool branch_taken_0x50a500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a500) {
            ctx->pc = 0x50A504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A500u;
            // 0x50a504: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A634u;
            goto label_50a634;
        }
    }
    ctx->pc = 0x50A508u;
label_50a508:
    // 0x50a508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a50c:
    // 0x50a50c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_50a510:
    if (ctx->pc == 0x50A510u) {
        ctx->pc = 0x50A510u;
            // 0x50a510: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50A514u;
        goto label_50a514;
    }
    ctx->pc = 0x50A50Cu;
    {
        const bool branch_taken_0x50a50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a50c) {
            ctx->pc = 0x50A510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A50Cu;
            // 0x50a510: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A528u;
            goto label_50a528;
        }
    }
    ctx->pc = 0x50A514u;
label_50a514:
    // 0x50a514: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_50a518:
    if (ctx->pc == 0x50A518u) {
        ctx->pc = 0x50A518u;
            // 0x50a518: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->pc = 0x50A51Cu;
        goto label_50a51c;
    }
    ctx->pc = 0x50A514u;
    {
        const bool branch_taken_0x50a514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a514) {
            ctx->pc = 0x50A518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A514u;
            // 0x50a518: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A524u;
            goto label_50a524;
        }
    }
    ctx->pc = 0x50A51Cu;
label_50a51c:
    // 0x50a51c: 0x10000044  b           . + 4 + (0x44 << 2)
label_50a520:
    if (ctx->pc == 0x50A520u) {
        ctx->pc = 0x50A524u;
        goto label_50a524;
    }
    ctx->pc = 0x50A51Cu;
    {
        const bool branch_taken_0x50a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a51c) {
            ctx->pc = 0x50A630u;
            goto label_50a630;
        }
    }
    ctx->pc = 0x50A524u;
label_50a524:
    // 0x50a524: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50a528:
    // 0x50a528: 0xc04ccf4  jal         func_1333D0
label_50a52c:
    if (ctx->pc == 0x50A52Cu) {
        ctx->pc = 0x50A52Cu;
            // 0x50a52c: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->pc = 0x50A530u;
        goto label_50a530;
    }
    ctx->pc = 0x50A528u;
    SET_GPR_U32(ctx, 31, 0x50A530u);
    ctx->pc = 0x50A52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A528u;
            // 0x50a52c: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A530u; }
        if (ctx->pc != 0x50A530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A530u; }
        if (ctx->pc != 0x50A530u) { return; }
    }
    ctx->pc = 0x50A530u;
label_50a530:
    // 0x50a530: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x50a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50a534:
    // 0x50a534: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x50a534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50a538:
    // 0x50a538: 0xc04cca0  jal         func_133280
label_50a53c:
    if (ctx->pc == 0x50A53Cu) {
        ctx->pc = 0x50A53Cu;
            // 0x50a53c: 0x26260300  addiu       $a2, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x50A540u;
        goto label_50a540;
    }
    ctx->pc = 0x50A538u;
    SET_GPR_U32(ctx, 31, 0x50A540u);
    ctx->pc = 0x50A53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A538u;
            // 0x50a53c: 0x26260300  addiu       $a2, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A540u; }
        if (ctx->pc != 0x50A540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A540u; }
        if (ctx->pc != 0x50A540u) { return; }
    }
    ctx->pc = 0x50A540u;
label_50a540:
    // 0x50a540: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x50a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a544:
    // 0x50a544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50a544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50a548:
    // 0x50a548: 0x0  nop
    ctx->pc = 0x50a548u;
    // NOP
label_50a54c:
    // 0x50a54c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50a54cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a550:
    // 0x50a550: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_50a554:
    if (ctx->pc == 0x50A554u) {
        ctx->pc = 0x50A558u;
        goto label_50a558;
    }
    ctx->pc = 0x50A550u;
    {
        const bool branch_taken_0x50a550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a550) {
            ctx->pc = 0x50A630u;
            goto label_50a630;
        }
    }
    ctx->pc = 0x50A558u;
label_50a558:
    // 0x50a558: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x50a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_50a55c:
    // 0x50a55c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x50a55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_50a560:
    // 0x50a560: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50a564:
    if (ctx->pc == 0x50A564u) {
        ctx->pc = 0x50A568u;
        goto label_50a568;
    }
    ctx->pc = 0x50A560u;
    {
        const bool branch_taken_0x50a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a560) {
            ctx->pc = 0x50A56Cu;
            goto label_50a56c;
        }
    }
    ctx->pc = 0x50A568u;
label_50a568:
    // 0x50a568: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50a56c:
    // 0x50a56c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x50a56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_50a570:
    // 0x50a570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a574:
    // 0x50a574: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x50a574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_50a578:
    // 0x50a578: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_50a57c:
    if (ctx->pc == 0x50A57Cu) {
        ctx->pc = 0x50A57Cu;
            // 0x50a57c: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50A580u;
        goto label_50a580;
    }
    ctx->pc = 0x50A578u;
    {
        const bool branch_taken_0x50a578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a578) {
            ctx->pc = 0x50A57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A578u;
            // 0x50a57c: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A5C8u;
            goto label_50a5c8;
        }
    }
    ctx->pc = 0x50A580u;
label_50a580:
    // 0x50a580: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_50a584:
    if (ctx->pc == 0x50A584u) {
        ctx->pc = 0x50A584u;
            // 0x50a584: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50A588u;
        goto label_50a588;
    }
    ctx->pc = 0x50A580u;
    {
        const bool branch_taken_0x50a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a580) {
            ctx->pc = 0x50A584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A580u;
            // 0x50a584: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A590u;
            goto label_50a590;
        }
    }
    ctx->pc = 0x50A588u;
label_50a588:
    // 0x50a588: 0x1000001d  b           . + 4 + (0x1D << 2)
label_50a58c:
    if (ctx->pc == 0x50A58Cu) {
        ctx->pc = 0x50A58Cu;
            // 0x50a58c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50A590u;
        goto label_50a590;
    }
    ctx->pc = 0x50A588u;
    {
        const bool branch_taken_0x50a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A588u;
            // 0x50a58c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a588) {
            ctx->pc = 0x50A600u;
            goto label_50a600;
        }
    }
    ctx->pc = 0x50A590u;
label_50a590:
    // 0x50a590: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x50a590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_50a594:
    // 0x50a594: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_50a598:
    if (ctx->pc == 0x50A598u) {
        ctx->pc = 0x50A598u;
            // 0x50a598: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50A59Cu;
        goto label_50a59c;
    }
    ctx->pc = 0x50A594u;
    {
        const bool branch_taken_0x50a594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a594) {
            ctx->pc = 0x50A598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A594u;
            // 0x50a598: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A5A4u;
            goto label_50a5a4;
        }
    }
    ctx->pc = 0x50A59Cu;
label_50a59c:
    // 0x50a59c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50a59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a5a0:
    // 0x50a5a0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x50a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_50a5a4:
    // 0x50a5a4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x50a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_50a5a8:
    // 0x50a5a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x50a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50a5ac:
    // 0x50a5ac: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x50a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_50a5b0:
    // 0x50a5b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x50a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_50a5b4:
    // 0x50a5b4: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x50a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_50a5b8:
    // 0x50a5b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_50a5bc:
    // 0x50a5bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50a5c0:
    // 0x50a5c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_50a5c4:
    if (ctx->pc == 0x50A5C4u) {
        ctx->pc = 0x50A5C4u;
            // 0x50a5c4: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50A5C8u;
        goto label_50a5c8;
    }
    ctx->pc = 0x50A5C0u;
    {
        const bool branch_taken_0x50a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A5C0u;
            // 0x50a5c4: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a5c0) {
            ctx->pc = 0x50A610u;
            goto label_50a610;
        }
    }
    ctx->pc = 0x50A5C8u;
label_50a5c8:
    // 0x50a5c8: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x50a5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_50a5cc:
    // 0x50a5cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_50a5d0:
    if (ctx->pc == 0x50A5D0u) {
        ctx->pc = 0x50A5D0u;
            // 0x50a5d0: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50A5D4u;
        goto label_50a5d4;
    }
    ctx->pc = 0x50A5CCu;
    {
        const bool branch_taken_0x50a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a5cc) {
            ctx->pc = 0x50A5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A5CCu;
            // 0x50a5d0: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A5DCu;
            goto label_50a5dc;
        }
    }
    ctx->pc = 0x50A5D4u;
label_50a5d4:
    // 0x50a5d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a5d8:
    // 0x50a5d8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x50a5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_50a5dc:
    // 0x50a5dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x50a5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_50a5e0:
    // 0x50a5e0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x50a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50a5e4:
    // 0x50a5e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x50a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_50a5e8:
    // 0x50a5e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x50a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_50a5ec:
    // 0x50a5ec: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x50a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
label_50a5f0:
    // 0x50a5f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_50a5f4:
    // 0x50a5f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50a5f8:
    // 0x50a5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_50a5fc:
    if (ctx->pc == 0x50A5FCu) {
        ctx->pc = 0x50A5FCu;
            // 0x50a5fc: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50A600u;
        goto label_50a600;
    }
    ctx->pc = 0x50A5F8u;
    {
        const bool branch_taken_0x50a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A5F8u;
            // 0x50a5fc: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a5f8) {
            ctx->pc = 0x50A610u;
            goto label_50a610;
        }
    }
    ctx->pc = 0x50A600u;
label_50a600:
    // 0x50a600: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x50a600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_50a604:
    // 0x50a604: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x50a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_50a608:
    // 0x50a608: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x50a608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_50a60c:
    // 0x50a60c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x50a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50a610:
    // 0x50a610: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x50a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a614:
    // 0x50a614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50a618:
    // 0x50a618: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x50a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_50a61c:
    // 0x50a61c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x50a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a620:
    // 0x50a620: 0xe6200de8  swc1        $f0, 0xDE8($s1)
    ctx->pc = 0x50a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
label_50a624:
    // 0x50a624: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x50a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a628:
    // 0x50a628: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x50a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_50a62c:
    // 0x50a62c: 0xae220e30  sw          $v0, 0xE30($s1)
    ctx->pc = 0x50a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
label_50a630:
    // 0x50a630: 0x82450074  lb          $a1, 0x74($s2)
    ctx->pc = 0x50a630u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a634:
    // 0x50a634: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x50a634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_50a638:
    // 0x50a638: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x50a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_50a63c:
    // 0x50a63c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x50a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50a640:
    // 0x50a640: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x50a640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50a644:
    // 0x50a644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50a648:
    // 0x50a648: 0x10a200fc  beq         $a1, $v0, . + 4 + (0xFC << 2)
label_50a64c:
    if (ctx->pc == 0x50A64Cu) {
        ctx->pc = 0x50A64Cu;
            // 0x50a64c: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x50A650u;
        goto label_50a650;
    }
    ctx->pc = 0x50A648u;
    {
        const bool branch_taken_0x50a648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x50A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A648u;
            // 0x50a64c: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a648) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A650u;
label_50a650:
    // 0x50a650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x50a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50a654:
    // 0x50a654: 0x50a200e1  beql        $a1, $v0, . + 4 + (0xE1 << 2)
label_50a658:
    if (ctx->pc == 0x50A658u) {
        ctx->pc = 0x50A658u;
            // 0x50a658: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50A65Cu;
        goto label_50a65c;
    }
    ctx->pc = 0x50A654u;
    {
        const bool branch_taken_0x50a654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a654) {
            ctx->pc = 0x50A658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A654u;
            // 0x50a658: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A9DCu;
            goto label_50a9dc;
        }
    }
    ctx->pc = 0x50A65Cu;
label_50a65c:
    // 0x50a65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50a660:
    // 0x50a660: 0x50a200a9  beql        $a1, $v0, . + 4 + (0xA9 << 2)
label_50a664:
    if (ctx->pc == 0x50A664u) {
        ctx->pc = 0x50A664u;
            // 0x50a664: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50A668u;
        goto label_50a668;
    }
    ctx->pc = 0x50A660u;
    {
        const bool branch_taken_0x50a660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a660) {
            ctx->pc = 0x50A664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A660u;
            // 0x50a664: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A908u;
            goto label_50a908;
        }
    }
    ctx->pc = 0x50A668u;
label_50a668:
    // 0x50a668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a66c:
    // 0x50a66c: 0x50a30058  beql        $a1, $v1, . + 4 + (0x58 << 2)
label_50a670:
    if (ctx->pc == 0x50A670u) {
        ctx->pc = 0x50A670u;
            // 0x50a670: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50A674u;
        goto label_50a674;
    }
    ctx->pc = 0x50A66Cu;
    {
        const bool branch_taken_0x50a66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50a66c) {
            ctx->pc = 0x50A670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A66Cu;
            // 0x50a670: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A7D0u;
            goto label_50a7d0;
        }
    }
    ctx->pc = 0x50A674u;
label_50a674:
    // 0x50a674: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_50a678:
    if (ctx->pc == 0x50A678u) {
        ctx->pc = 0x50A67Cu;
        goto label_50a67c;
    }
    ctx->pc = 0x50A674u;
    {
        const bool branch_taken_0x50a674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a674) {
            ctx->pc = 0x50A684u;
            goto label_50a684;
        }
    }
    ctx->pc = 0x50A67Cu;
label_50a67c:
    // 0x50a67c: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_50a680:
    if (ctx->pc == 0x50A680u) {
        ctx->pc = 0x50A680u;
            // 0x50a680: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x50A684u;
        goto label_50a684;
    }
    ctx->pc = 0x50A67Cu;
    {
        const bool branch_taken_0x50a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A67Cu;
            // 0x50a680: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a67c) {
            ctx->pc = 0x50AA40u;
            goto label_50aa40;
        }
    }
    ctx->pc = 0x50A684u;
label_50a684:
    // 0x50a684: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50a688:
    // 0x50a688: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50a68c:
    // 0x50a68c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x50a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a690:
    // 0x50a690: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x50a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a694:
    // 0x50a694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50a694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50a698:
    // 0x50a698: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x50a698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a69c:
    // 0x50a69c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_50a6a0:
    if (ctx->pc == 0x50A6A0u) {
        ctx->pc = 0x50A6A0u;
            // 0x50a6a0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x50A6A4u;
        goto label_50a6a4;
    }
    ctx->pc = 0x50A69Cu;
    {
        const bool branch_taken_0x50a69c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50A6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A69Cu;
            // 0x50a6a0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a69c) {
            ctx->pc = 0x50A6BCu;
            goto label_50a6bc;
        }
    }
    ctx->pc = 0x50A6A4u;
label_50a6a4:
    // 0x50a6a4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x50a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_50a6a8:
    // 0x50a6a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x50a6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_50a6ac:
    // 0x50a6ac: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a6b0:
    // 0x50a6b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50a6b4:
    // 0x50a6b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_50a6b8:
    if (ctx->pc == 0x50A6B8u) {
        ctx->pc = 0x50A6B8u;
            // 0x50a6b8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50A6BCu;
        goto label_50a6bc;
    }
    ctx->pc = 0x50A6B4u;
    {
        const bool branch_taken_0x50a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A6B4u;
            // 0x50a6b8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a6b4) {
            ctx->pc = 0x50A6C0u;
            goto label_50a6c0;
        }
    }
    ctx->pc = 0x50A6BCu;
label_50a6bc:
    // 0x50a6bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50a6bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a6c0:
    // 0x50a6c0: 0x106000de  beqz        $v1, . + 4 + (0xDE << 2)
label_50a6c4:
    if (ctx->pc == 0x50A6C4u) {
        ctx->pc = 0x50A6C8u;
        goto label_50a6c8;
    }
    ctx->pc = 0x50A6C0u;
    {
        const bool branch_taken_0x50a6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a6c0) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A6C8u;
label_50a6c8:
    // 0x50a6c8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x50a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_50a6cc:
    // 0x50a6cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50a6d0:
    // 0x50a6d0: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_50a6d4:
    if (ctx->pc == 0x50A6D4u) {
        ctx->pc = 0x50A6D4u;
            // 0x50a6d4: 0x82460074  lb          $a2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x50A6D8u;
        goto label_50a6d8;
    }
    ctx->pc = 0x50A6D0u;
    {
        const bool branch_taken_0x50a6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50a6d0) {
            ctx->pc = 0x50A6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A6D0u;
            // 0x50a6d4: 0x82460074  lb          $a2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A748u;
            goto label_50a748;
        }
    }
    ctx->pc = 0x50A6D8u;
label_50a6d8:
    // 0x50a6d8: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x50a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_50a6dc:
    // 0x50a6dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_50a6e0:
    // 0x50a6e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50a6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50a6e4:
    // 0x50a6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50a6e8:
    // 0x50a6e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x50a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50a6ec:
    // 0x50a6ec: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x50a6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_50a6f0:
    // 0x50a6f0: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x50a6f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_50a6f4:
    // 0x50a6f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50a6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50a6f8:
    // 0x50a6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50a6fc:
    // 0x50a6fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x50a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50a700:
    // 0x50a700: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x50a700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_50a704:
    // 0x50a704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50a708:
    // 0x50a708: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50a708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50a70c:
    // 0x50a70c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x50a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_50a710:
    // 0x50a710: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x50a710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_50a714:
    // 0x50a714: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x50a714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_50a718:
    // 0x50a718: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x50a718u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_50a71c:
    // 0x50a71c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50a71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_50a720:
    // 0x50a720: 0x320f809  jalr        $t9
label_50a724:
    if (ctx->pc == 0x50A724u) {
        ctx->pc = 0x50A724u;
            // 0x50a724: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x50A728u;
        goto label_50a728;
    }
    ctx->pc = 0x50A720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50A728u);
        ctx->pc = 0x50A724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A720u;
            // 0x50a724: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50A728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50A728u; }
            if (ctx->pc != 0x50A728u) { return; }
        }
        }
    }
    ctx->pc = 0x50A728u;
label_50a728:
    // 0x50a728: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x50a728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_50a72c:
    // 0x50a72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50a730:
    // 0x50a730: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x50a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50a734:
    // 0x50a734: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50a734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50a738:
    // 0x50a738: 0x320f809  jalr        $t9
label_50a73c:
    if (ctx->pc == 0x50A73Cu) {
        ctx->pc = 0x50A73Cu;
            // 0x50a73c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50A740u;
        goto label_50a740;
    }
    ctx->pc = 0x50A738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50A740u);
        ctx->pc = 0x50A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A738u;
            // 0x50a73c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50A740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50A740u; }
            if (ctx->pc != 0x50A740u) { return; }
        }
        }
    }
    ctx->pc = 0x50A740u;
label_50a740:
    // 0x50a740: 0x100000be  b           . + 4 + (0xBE << 2)
label_50a744:
    if (ctx->pc == 0x50A744u) {
        ctx->pc = 0x50A744u;
            // 0x50a744: 0xa2400075  sb          $zero, 0x75($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x50A748u;
        goto label_50a748;
    }
    ctx->pc = 0x50A740u;
    {
        const bool branch_taken_0x50a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A740u;
            // 0x50a744: 0xa2400075  sb          $zero, 0x75($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a740) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A748u;
label_50a748:
    // 0x50a748: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x50a748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_50a74c:
    // 0x50a74c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x50a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a750:
    // 0x50a750: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x50a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_50a754:
    // 0x50a754: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a758:
    // 0x50a758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a75c:
    // 0x50a75c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x50a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50a760:
    // 0x50a760: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x50a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_50a764:
    // 0x50a764: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x50a764u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_50a768:
    // 0x50a768: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x50a768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50a76c:
    // 0x50a76c: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x50a76cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_50a770:
    // 0x50a770: 0xc1425e0  jal         func_509780
label_50a774:
    if (ctx->pc == 0x50A774u) {
        ctx->pc = 0x50A774u;
            // 0x50a774: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50A778u;
        goto label_50a778;
    }
    ctx->pc = 0x50A770u;
    SET_GPR_U32(ctx, 31, 0x50A778u);
    ctx->pc = 0x50A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A770u;
            // 0x50a774: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A778u; }
        if (ctx->pc != 0x50A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A778u; }
        if (ctx->pc != 0x50A778u) { return; }
    }
    ctx->pc = 0x50A778u;
label_50a778:
    // 0x50a778: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a77c:
    // 0x50a77c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x50a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a780:
    // 0x50a780: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50a780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50a784:
    // 0x50a784: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50a784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50a788:
    // 0x50a788: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x50a788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_50a78c:
    // 0x50a78c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x50a78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_50a790:
    // 0x50a790: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_50a794:
    if (ctx->pc == 0x50A794u) {
        ctx->pc = 0x50A794u;
            // 0x50a794: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x50A798u;
        goto label_50a798;
    }
    ctx->pc = 0x50A790u;
    {
        const bool branch_taken_0x50a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a790) {
            ctx->pc = 0x50A794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A790u;
            // 0x50a794: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A7A4u;
            goto label_50a7a4;
        }
    }
    ctx->pc = 0x50A798u;
label_50a798:
    // 0x50a798: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x50a798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_50a79c:
    // 0x50a79c: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x50a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50a7a0:
    // 0x50a7a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x50a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_50a7a4:
    // 0x50a7a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a7a8:
    // 0x50a7a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50a7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50a7ac:
    // 0x50a7ac: 0x0  nop
    ctx->pc = 0x50a7acu;
    // NOP
label_50a7b0:
    // 0x50a7b0: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x50a7b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_50a7b4:
    // 0x50a7b4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x50a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50a7b8:
    // 0x50a7b8: 0x0  nop
    ctx->pc = 0x50a7b8u;
    // NOP
label_50a7bc:
    // 0x50a7bc: 0x0  nop
    ctx->pc = 0x50a7bcu;
    // NOP
label_50a7c0:
    // 0x50a7c0: 0xc1425a8  jal         func_5096A0
label_50a7c4:
    if (ctx->pc == 0x50A7C4u) {
        ctx->pc = 0x50A7C4u;
            // 0x50a7c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A7C8u;
        goto label_50a7c8;
    }
    ctx->pc = 0x50A7C0u;
    SET_GPR_U32(ctx, 31, 0x50A7C8u);
    ctx->pc = 0x50A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A7C0u;
            // 0x50a7c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A7C8u; }
        if (ctx->pc != 0x50A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A7C8u; }
        if (ctx->pc != 0x50A7C8u) { return; }
    }
    ctx->pc = 0x50A7C8u;
label_50a7c8:
    // 0x50a7c8: 0x1000009c  b           . + 4 + (0x9C << 2)
label_50a7cc:
    if (ctx->pc == 0x50A7CCu) {
        ctx->pc = 0x50A7D0u;
        goto label_50a7d0;
    }
    ctx->pc = 0x50A7C8u;
    {
        const bool branch_taken_0x50a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a7c8) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A7D0u;
label_50a7d0:
    // 0x50a7d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a7d4:
    // 0x50a7d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a7d8:
    // 0x50a7d8: 0xc142520  jal         func_509480
label_50a7dc:
    if (ctx->pc == 0x50A7DCu) {
        ctx->pc = 0x50A7DCu;
            // 0x50a7dc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50A7E0u;
        goto label_50a7e0;
    }
    ctx->pc = 0x50A7D8u;
    SET_GPR_U32(ctx, 31, 0x50A7E0u);
    ctx->pc = 0x50A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A7D8u;
            // 0x50a7dc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A7E0u; }
        if (ctx->pc != 0x50A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A7E0u; }
        if (ctx->pc != 0x50A7E0u) { return; }
    }
    ctx->pc = 0x50A7E0u;
label_50a7e0:
    // 0x50a7e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50a7e4:
    // 0x50a7e4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50a7e8:
    // 0x50a7e8: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x50a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a7ec:
    // 0x50a7ec: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x50a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a7f0:
    // 0x50a7f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50a7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50a7f4:
    // 0x50a7f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x50a7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a7f8:
    // 0x50a7f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_50a7fc:
    if (ctx->pc == 0x50A7FCu) {
        ctx->pc = 0x50A7FCu;
            // 0x50a7fc: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x50A800u;
        goto label_50a800;
    }
    ctx->pc = 0x50A7F8u;
    {
        const bool branch_taken_0x50a7f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A7F8u;
            // 0x50a7fc: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a7f8) {
            ctx->pc = 0x50A818u;
            goto label_50a818;
        }
    }
    ctx->pc = 0x50A800u;
label_50a800:
    // 0x50a800: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x50a800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_50a804:
    // 0x50a804: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x50a804u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50a808:
    // 0x50a808: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a80c:
    // 0x50a80c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50a810:
    // 0x50a810: 0x10000002  b           . + 4 + (0x2 << 2)
label_50a814:
    if (ctx->pc == 0x50A814u) {
        ctx->pc = 0x50A814u;
            // 0x50a814: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50A818u;
        goto label_50a818;
    }
    ctx->pc = 0x50A810u;
    {
        const bool branch_taken_0x50a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A810u;
            // 0x50a814: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a810) {
            ctx->pc = 0x50A81Cu;
            goto label_50a81c;
        }
    }
    ctx->pc = 0x50A818u;
label_50a818:
    // 0x50a818: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50a818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a81c:
    // 0x50a81c: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_50a820:
    if (ctx->pc == 0x50A820u) {
        ctx->pc = 0x50A824u;
        goto label_50a824;
    }
    ctx->pc = 0x50A81Cu;
    {
        const bool branch_taken_0x50a81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a81c) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A824u;
label_50a824:
    // 0x50a824: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x50a824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_50a828:
    // 0x50a828: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x50a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_50a82c:
    // 0x50a82c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x50a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_50a830:
    // 0x50a830: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x50a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_50a834:
    // 0x50a834: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50a838:
    // 0x50a838: 0xc0a545c  jal         func_295170
label_50a83c:
    if (ctx->pc == 0x50A83Cu) {
        ctx->pc = 0x50A83Cu;
            // 0x50a83c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x50A840u;
        goto label_50a840;
    }
    ctx->pc = 0x50A838u;
    SET_GPR_U32(ctx, 31, 0x50A840u);
    ctx->pc = 0x50A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A838u;
            // 0x50a83c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A840u; }
        if (ctx->pc != 0x50A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A840u; }
        if (ctx->pc != 0x50A840u) { return; }
    }
    ctx->pc = 0x50A840u;
label_50a840:
    // 0x50a840: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x50a840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_50a844:
    // 0x50a844: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50a844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50a848:
    // 0x50a848: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50a848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50a84c:
    // 0x50a84c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50a850:
    // 0x50a850: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50a850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50a854:
    // 0x50a854: 0xc08bf20  jal         func_22FC80
label_50a858:
    if (ctx->pc == 0x50A858u) {
        ctx->pc = 0x50A858u;
            // 0x50a858: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A85Cu;
        goto label_50a85c;
    }
    ctx->pc = 0x50A854u;
    SET_GPR_U32(ctx, 31, 0x50A85Cu);
    ctx->pc = 0x50A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A854u;
            // 0x50a858: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A85Cu; }
        if (ctx->pc != 0x50A85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A85Cu; }
        if (ctx->pc != 0x50A85Cu) { return; }
    }
    ctx->pc = 0x50A85Cu;
label_50a85c:
    // 0x50a85c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x50a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_50a860:
    // 0x50a860: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50a864:
    // 0x50a864: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
label_50a868:
    if (ctx->pc == 0x50A868u) {
        ctx->pc = 0x50A86Cu;
        goto label_50a86c;
    }
    ctx->pc = 0x50A864u;
    {
        const bool branch_taken_0x50a864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a864) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A86Cu;
label_50a86c:
    // 0x50a86c: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x50a86cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a870:
    // 0x50a870: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x50a870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_50a874:
    // 0x50a874: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x50a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a878:
    // 0x50a878: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x50a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_50a87c:
    // 0x50a87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a880:
    // 0x50a880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a884:
    // 0x50a884: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x50a884u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50a888:
    // 0x50a888: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x50a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_50a88c:
    // 0x50a88c: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x50a88cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_50a890:
    // 0x50a890: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x50a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50a894:
    // 0x50a894: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x50a894u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_50a898:
    // 0x50a898: 0xc1425e0  jal         func_509780
label_50a89c:
    if (ctx->pc == 0x50A89Cu) {
        ctx->pc = 0x50A89Cu;
            // 0x50a89c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50A8A0u;
        goto label_50a8a0;
    }
    ctx->pc = 0x50A898u;
    SET_GPR_U32(ctx, 31, 0x50A8A0u);
    ctx->pc = 0x50A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A898u;
            // 0x50a89c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A8A0u; }
        if (ctx->pc != 0x50A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A8A0u; }
        if (ctx->pc != 0x50A8A0u) { return; }
    }
    ctx->pc = 0x50A8A0u;
label_50a8a0:
    // 0x50a8a0: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a8a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a8a4:
    // 0x50a8a4: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x50a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a8a8:
    // 0x50a8a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50a8ac:
    // 0x50a8ac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x50a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_50a8b0:
    // 0x50a8b0: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x50a8b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
label_50a8b4:
    // 0x50a8b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x50a8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_50a8b8:
    // 0x50a8b8: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_50a8bc:
    if (ctx->pc == 0x50A8BCu) {
        ctx->pc = 0x50A8C0u;
        goto label_50a8c0;
    }
    ctx->pc = 0x50A8B8u;
    {
        const bool branch_taken_0x50a8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a8b8) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A8C0u;
label_50a8c0:
    // 0x50a8c0: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x50a8c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_50a8c4:
    // 0x50a8c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x50a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_50a8c8:
    // 0x50a8c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_50a8cc:
    if (ctx->pc == 0x50A8CCu) {
        ctx->pc = 0x50A8CCu;
            // 0x50a8cc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x50A8D0u;
        goto label_50a8d0;
    }
    ctx->pc = 0x50A8C8u;
    {
        const bool branch_taken_0x50a8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a8c8) {
            ctx->pc = 0x50A8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A8C8u;
            // 0x50a8cc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A8DCu;
            goto label_50a8dc;
        }
    }
    ctx->pc = 0x50A8D0u;
label_50a8d0:
    // 0x50a8d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x50a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_50a8d4:
    // 0x50a8d4: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x50a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50a8d8:
    // 0x50a8d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x50a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_50a8dc:
    // 0x50a8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50a8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50a8e0:
    // 0x50a8e0: 0x0  nop
    ctx->pc = 0x50a8e0u;
    // NOP
label_50a8e4:
    // 0x50a8e4: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x50a8e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_50a8e8:
    // 0x50a8e8: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x50a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50a8ec:
    // 0x50a8ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a8f0:
    // 0x50a8f0: 0x0  nop
    ctx->pc = 0x50a8f0u;
    // NOP
label_50a8f4:
    // 0x50a8f4: 0x0  nop
    ctx->pc = 0x50a8f4u;
    // NOP
label_50a8f8:
    // 0x50a8f8: 0xc1425a8  jal         func_5096A0
label_50a8fc:
    if (ctx->pc == 0x50A8FCu) {
        ctx->pc = 0x50A8FCu;
            // 0x50a8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A900u;
        goto label_50a900;
    }
    ctx->pc = 0x50A8F8u;
    SET_GPR_U32(ctx, 31, 0x50A900u);
    ctx->pc = 0x50A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A8F8u;
            // 0x50a8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A900u; }
        if (ctx->pc != 0x50A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A900u; }
        if (ctx->pc != 0x50A900u) { return; }
    }
    ctx->pc = 0x50A900u;
label_50a900:
    // 0x50a900: 0x1000004e  b           . + 4 + (0x4E << 2)
label_50a904:
    if (ctx->pc == 0x50A904u) {
        ctx->pc = 0x50A908u;
        goto label_50a908;
    }
    ctx->pc = 0x50A900u;
    {
        const bool branch_taken_0x50a900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a900) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A908u;
label_50a908:
    // 0x50a908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a90c:
    // 0x50a90c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a910:
    // 0x50a910: 0xc142520  jal         func_509480
label_50a914:
    if (ctx->pc == 0x50A914u) {
        ctx->pc = 0x50A914u;
            // 0x50a914: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50A918u;
        goto label_50a918;
    }
    ctx->pc = 0x50A910u;
    SET_GPR_U32(ctx, 31, 0x50A918u);
    ctx->pc = 0x50A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A910u;
            // 0x50a914: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A918u; }
        if (ctx->pc != 0x50A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A918u; }
        if (ctx->pc != 0x50A918u) { return; }
    }
    ctx->pc = 0x50A918u;
label_50a918:
    // 0x50a918: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50a918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50a91c:
    // 0x50a91c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50a920:
    // 0x50a920: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x50a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a924:
    // 0x50a924: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x50a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a928:
    // 0x50a928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50a928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50a92c:
    // 0x50a92c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x50a92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50a930:
    // 0x50a930: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_50a934:
    if (ctx->pc == 0x50A934u) {
        ctx->pc = 0x50A934u;
            // 0x50a934: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x50A938u;
        goto label_50a938;
    }
    ctx->pc = 0x50A930u;
    {
        const bool branch_taken_0x50a930 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A930u;
            // 0x50a934: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a930) {
            ctx->pc = 0x50A950u;
            goto label_50a950;
        }
    }
    ctx->pc = 0x50A938u;
label_50a938:
    // 0x50a938: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x50a938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_50a93c:
    // 0x50a93c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x50a93cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50a940:
    // 0x50a940: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a944:
    // 0x50a944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50a948:
    // 0x50a948: 0x10000002  b           . + 4 + (0x2 << 2)
label_50a94c:
    if (ctx->pc == 0x50A94Cu) {
        ctx->pc = 0x50A94Cu;
            // 0x50a94c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50A950u;
        goto label_50a950;
    }
    ctx->pc = 0x50A948u;
    {
        const bool branch_taken_0x50a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A948u;
            // 0x50a94c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a948) {
            ctx->pc = 0x50A954u;
            goto label_50a954;
        }
    }
    ctx->pc = 0x50A950u;
label_50a950:
    // 0x50a950: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50a950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50a954:
    // 0x50a954: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_50a958:
    if (ctx->pc == 0x50A958u) {
        ctx->pc = 0x50A95Cu;
        goto label_50a95c;
    }
    ctx->pc = 0x50A954u;
    {
        const bool branch_taken_0x50a954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a954) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A95Cu;
label_50a95c:
    // 0x50a95c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x50a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_50a960:
    // 0x50a960: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x50a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50a964:
    // 0x50a964: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_50a968:
    if (ctx->pc == 0x50A968u) {
        ctx->pc = 0x50A96Cu;
        goto label_50a96c;
    }
    ctx->pc = 0x50A964u;
    {
        const bool branch_taken_0x50a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50a964) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A96Cu;
label_50a96c:
    // 0x50a96c: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x50a96cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a970:
    // 0x50a970: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x50a970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_50a974:
    // 0x50a974: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x50a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a978:
    // 0x50a978: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x50a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_50a97c:
    // 0x50a97c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a980:
    // 0x50a980: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x50a980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50a984:
    // 0x50a984: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x50a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_50a988:
    // 0x50a988: 0x80470016  lb          $a3, 0x16($v0)
    ctx->pc = 0x50a988u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
label_50a98c:
    // 0x50a98c: 0x84460014  lh          $a2, 0x14($v0)
    ctx->pc = 0x50a98cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_50a990:
    // 0x50a990: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x50a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50a994:
    // 0x50a994: 0xc1425e0  jal         func_509780
label_50a998:
    if (ctx->pc == 0x50A998u) {
        ctx->pc = 0x50A998u;
            // 0x50a998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A99Cu;
        goto label_50a99c;
    }
    ctx->pc = 0x50A994u;
    SET_GPR_U32(ctx, 31, 0x50A99Cu);
    ctx->pc = 0x50A998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A994u;
            // 0x50a998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A99Cu; }
        if (ctx->pc != 0x50A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A99Cu; }
        if (ctx->pc != 0x50A99Cu) { return; }
    }
    ctx->pc = 0x50A99Cu;
label_50a99c:
    // 0x50a99c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50a99cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50a9a0:
    // 0x50a9a0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x50a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_50a9a4:
    // 0x50a9a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50a9a8:
    // 0x50a9a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50a9ac:
    // 0x50a9ac: 0x8042fff7  lb          $v0, -0x9($v0)
    ctx->pc = 0x50a9acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967287)));
label_50a9b0:
    // 0x50a9b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x50a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_50a9b4:
    // 0x50a9b4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_50a9b8:
    if (ctx->pc == 0x50A9B8u) {
        ctx->pc = 0x50A9BCu;
        goto label_50a9bc;
    }
    ctx->pc = 0x50A9B4u;
    {
        const bool branch_taken_0x50a9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50a9b4) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A9BCu;
label_50a9bc:
    // 0x50a9bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x50a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_50a9c0:
    // 0x50a9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a9c4:
    // 0x50a9c4: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x50a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50a9c8:
    // 0x50a9c8: 0xc44da478  lwc1        $f13, -0x5B88($v0)
    ctx->pc = 0x50a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50a9cc:
    // 0x50a9cc: 0xc1425a8  jal         func_5096A0
label_50a9d0:
    if (ctx->pc == 0x50A9D0u) {
        ctx->pc = 0x50A9D0u;
            // 0x50a9d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50A9D4u;
        goto label_50a9d4;
    }
    ctx->pc = 0x50A9CCu;
    SET_GPR_U32(ctx, 31, 0x50A9D4u);
    ctx->pc = 0x50A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A9CCu;
            // 0x50a9d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A9D4u; }
        if (ctx->pc != 0x50A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A9D4u; }
        if (ctx->pc != 0x50A9D4u) { return; }
    }
    ctx->pc = 0x50A9D4u;
label_50a9d4:
    // 0x50a9d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_50a9d8:
    if (ctx->pc == 0x50A9D8u) {
        ctx->pc = 0x50A9DCu;
        goto label_50a9dc;
    }
    ctx->pc = 0x50A9D4u;
    {
        const bool branch_taken_0x50a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a9d4) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50A9DCu;
label_50a9dc:
    // 0x50a9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50a9e0:
    // 0x50a9e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50a9e4:
    // 0x50a9e4: 0xc142520  jal         func_509480
label_50a9e8:
    if (ctx->pc == 0x50A9E8u) {
        ctx->pc = 0x50A9E8u;
            // 0x50a9e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50A9ECu;
        goto label_50a9ec;
    }
    ctx->pc = 0x50A9E4u;
    SET_GPR_U32(ctx, 31, 0x50A9ECu);
    ctx->pc = 0x50A9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50A9E4u;
            // 0x50a9e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A9ECu; }
        if (ctx->pc != 0x50A9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50A9ECu; }
        if (ctx->pc != 0x50A9ECu) { return; }
    }
    ctx->pc = 0x50A9ECu;
label_50a9ec:
    // 0x50a9ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50a9f0:
    // 0x50a9f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50a9f4:
    // 0x50a9f4: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x50a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50a9f8:
    // 0x50a9f8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x50a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50a9fc:
    // 0x50a9fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50a9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50aa00:
    // 0x50aa00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x50aa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50aa04:
    // 0x50aa04: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_50aa08:
    if (ctx->pc == 0x50AA08u) {
        ctx->pc = 0x50AA08u;
            // 0x50aa08: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x50AA0Cu;
        goto label_50aa0c;
    }
    ctx->pc = 0x50AA04u;
    {
        const bool branch_taken_0x50aa04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA04u;
            // 0x50aa08: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50aa04) {
            ctx->pc = 0x50AA24u;
            goto label_50aa24;
        }
    }
    ctx->pc = 0x50AA0Cu;
label_50aa0c:
    // 0x50aa0c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x50aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_50aa10:
    // 0x50aa10: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x50aa10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50aa14:
    // 0x50aa14: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x50aa14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_50aa18:
    // 0x50aa18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50aa1c:
    // 0x50aa1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_50aa20:
    if (ctx->pc == 0x50AA20u) {
        ctx->pc = 0x50AA20u;
            // 0x50aa20: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50AA24u;
        goto label_50aa24;
    }
    ctx->pc = 0x50AA1Cu;
    {
        const bool branch_taken_0x50aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA1Cu;
            // 0x50aa20: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50aa1c) {
            ctx->pc = 0x50AA28u;
            goto label_50aa28;
        }
    }
    ctx->pc = 0x50AA24u;
label_50aa24:
    // 0x50aa24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50aa24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50aa28:
    // 0x50aa28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_50aa2c:
    if (ctx->pc == 0x50AA2Cu) {
        ctx->pc = 0x50AA30u;
        goto label_50aa30;
    }
    ctx->pc = 0x50AA28u;
    {
        const bool branch_taken_0x50aa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50aa28) {
            ctx->pc = 0x50AA3Cu;
            goto label_50aa3c;
        }
    }
    ctx->pc = 0x50AA30u;
label_50aa30:
    // 0x50aa30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50aa34:
    // 0x50aa34: 0xc142584  jal         func_509610
label_50aa38:
    if (ctx->pc == 0x50AA38u) {
        ctx->pc = 0x50AA38u;
            // 0x50aa38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50AA3Cu;
        goto label_50aa3c;
    }
    ctx->pc = 0x50AA34u;
    SET_GPR_U32(ctx, 31, 0x50AA3Cu);
    ctx->pc = 0x50AA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA34u;
            // 0x50aa38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA3Cu; }
        if (ctx->pc != 0x50AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA3Cu; }
        if (ctx->pc != 0x50AA3Cu) { return; }
    }
    ctx->pc = 0x50AA3Cu;
label_50aa3c:
    // 0x50aa3c: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x50aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_50aa40:
    // 0x50aa40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_50aa44:
    // 0x50aa44: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_50aa48:
    if (ctx->pc == 0x50AA48u) {
        ctx->pc = 0x50AA48u;
            // 0x50aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50AA4Cu;
        goto label_50aa4c;
    }
    ctx->pc = 0x50AA44u;
    {
        const bool branch_taken_0x50aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50aa44) {
            ctx->pc = 0x50AA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA44u;
            // 0x50aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AA6Cu;
            goto label_50aa6c;
        }
    }
    ctx->pc = 0x50AA4Cu;
label_50aa4c:
    // 0x50aa4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50aa50:
    // 0x50aa50: 0xc142654  jal         func_509950
label_50aa54:
    if (ctx->pc == 0x50AA54u) {
        ctx->pc = 0x50AA54u;
            // 0x50aa54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50AA58u;
        goto label_50aa58;
    }
    ctx->pc = 0x50AA50u;
    SET_GPR_U32(ctx, 31, 0x50AA58u);
    ctx->pc = 0x50AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA50u;
            // 0x50aa54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA58u; }
        if (ctx->pc != 0x50AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA58u; }
        if (ctx->pc != 0x50AA58u) { return; }
    }
    ctx->pc = 0x50AA58u;
label_50aa58:
    // 0x50aa58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50aa5c:
    // 0x50aa5c: 0xc07649c  jal         func_1D9270
label_50aa60:
    if (ctx->pc == 0x50AA60u) {
        ctx->pc = 0x50AA60u;
            // 0x50aa60: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x50AA64u;
        goto label_50aa64;
    }
    ctx->pc = 0x50AA5Cu;
    SET_GPR_U32(ctx, 31, 0x50AA64u);
    ctx->pc = 0x50AA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA5Cu;
            // 0x50aa60: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA64u; }
        if (ctx->pc != 0x50AA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA64u; }
        if (ctx->pc != 0x50AA64u) { return; }
    }
    ctx->pc = 0x50AA64u;
label_50aa64:
    // 0x50aa64: 0x10000011  b           . + 4 + (0x11 << 2)
label_50aa68:
    if (ctx->pc == 0x50AA68u) {
        ctx->pc = 0x50AA68u;
            // 0x50aa68: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x50AA6Cu;
        goto label_50aa6c;
    }
    ctx->pc = 0x50AA64u;
    {
        const bool branch_taken_0x50aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA64u;
            // 0x50aa68: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50aa64) {
            ctx->pc = 0x50AAACu;
            goto label_50aaac;
        }
    }
    ctx->pc = 0x50AA6Cu;
label_50aa6c:
    // 0x50aa6c: 0xc0c1418  jal         func_305060
label_50aa70:
    if (ctx->pc == 0x50AA70u) {
        ctx->pc = 0x50AA74u;
        goto label_50aa74;
    }
    ctx->pc = 0x50AA6Cu;
    SET_GPR_U32(ctx, 31, 0x50AA74u);
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA74u; }
        if (ctx->pc != 0x50AA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AA74u; }
        if (ctx->pc != 0x50AA74u) { return; }
    }
    ctx->pc = 0x50AA74u;
label_50aa74:
    // 0x50aa74: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x50aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_50aa78:
    // 0x50aa78: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x50aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_50aa7c:
    // 0x50aa7c: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_50aa80:
    if (ctx->pc == 0x50AA80u) {
        ctx->pc = 0x50AA80u;
            // 0x50aa80: 0x8e230af0  lw          $v1, 0xAF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2800)));
        ctx->pc = 0x50AA84u;
        goto label_50aa84;
    }
    ctx->pc = 0x50AA7Cu;
    {
        const bool branch_taken_0x50aa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x50aa7c) {
            ctx->pc = 0x50AA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AA7Cu;
            // 0x50aa80: 0x8e230af0  lw          $v1, 0xAF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AA94u;
            goto label_50aa94;
        }
    }
    ctx->pc = 0x50AA84u;
label_50aa84:
    // 0x50aa84: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x50aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_50aa88:
    // 0x50aa88: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_50aa8c:
    if (ctx->pc == 0x50AA8Cu) {
        ctx->pc = 0x50AA90u;
        goto label_50aa90;
    }
    ctx->pc = 0x50AA88u;
    {
        const bool branch_taken_0x50aa88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50aa88) {
            ctx->pc = 0x50AAA8u;
            goto label_50aaa8;
        }
    }
    ctx->pc = 0x50AA90u;
label_50aa90:
    // 0x50aa90: 0x8e230af0  lw          $v1, 0xAF0($s1)
    ctx->pc = 0x50aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2800)));
label_50aa94:
    // 0x50aa94: 0xae230afc  sw          $v1, 0xAFC($s1)
    ctx->pc = 0x50aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2812), GPR_U32(ctx, 3));
label_50aa98:
    // 0x50aa98: 0x8e230af4  lw          $v1, 0xAF4($s1)
    ctx->pc = 0x50aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2804)));
label_50aa9c:
    // 0x50aa9c: 0xae230b00  sw          $v1, 0xB00($s1)
    ctx->pc = 0x50aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 3));
label_50aaa0:
    // 0x50aaa0: 0x8e230af8  lw          $v1, 0xAF8($s1)
    ctx->pc = 0x50aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2808)));
label_50aaa4:
    // 0x50aaa4: 0xae230b04  sw          $v1, 0xB04($s1)
    ctx->pc = 0x50aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2820), GPR_U32(ctx, 3));
label_50aaa8:
    // 0x50aaa8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x50aaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_50aaac:
    // 0x50aaac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50aab0:
    // 0x50aab0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x50aab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50aab4:
    // 0x50aab4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x50aab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50aab8:
    // 0x50aab8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50aab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50aabc:
    // 0x50aabc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50aabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50aac0:
    // 0x50aac0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50aac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50aac4:
    // 0x50aac4: 0x3e00008  jr          $ra
label_50aac8:
    if (ctx->pc == 0x50AAC8u) {
        ctx->pc = 0x50AAC8u;
            // 0x50aac8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x50AACCu;
        goto label_50aacc;
    }
    ctx->pc = 0x50AAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AAC4u;
            // 0x50aac8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50AACCu;
label_50aacc:
    // 0x50aacc: 0x0  nop
    ctx->pc = 0x50aaccu;
    // NOP
label_50aad0:
    // 0x50aad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x50aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_50aad4:
    // 0x50aad4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x50aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_50aad8:
    // 0x50aad8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50aadc:
    // 0x50aadc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50aae0:
    // 0x50aae0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x50aae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50aae4:
    // 0x50aae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50aae8:
    // 0x50aae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50aaec:
    // 0x50aaec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50aaf0:
    // 0x50aaf0: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x50aaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_50aaf4:
    // 0x50aaf4: 0x8cb0002c  lw          $s0, 0x2C($a1)
    ctx->pc = 0x50aaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_50aaf8:
    // 0x50aaf8: 0xc142760  jal         func_509D80
label_50aafc:
    if (ctx->pc == 0x50AAFCu) {
        ctx->pc = 0x50AAFCu;
            // 0x50aafc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50AB00u;
        goto label_50ab00;
    }
    ctx->pc = 0x50AAF8u;
    SET_GPR_U32(ctx, 31, 0x50AB00u);
    ctx->pc = 0x50AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AAF8u;
            // 0x50aafc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509D80u;
    if (runtime->hasFunction(0x509D80u)) {
        auto targetFn = runtime->lookupFunction(0x509D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB00u; }
        if (ctx->pc != 0x50AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509D80_0x509d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB00u; }
        if (ctx->pc != 0x50AB00u) { return; }
    }
    ctx->pc = 0x50AB00u;
label_50ab00:
    // 0x50ab00: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x50ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_50ab04:
    // 0x50ab04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ab08:
    // 0x50ab08: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_50ab0c:
    if (ctx->pc == 0x50AB0Cu) {
        ctx->pc = 0x50AB10u;
        goto label_50ab10;
    }
    ctx->pc = 0x50AB08u;
    {
        const bool branch_taken_0x50ab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50ab08) {
            ctx->pc = 0x50AB58u;
            goto label_50ab58;
        }
    }
    ctx->pc = 0x50AB10u;
label_50ab10:
    // 0x50ab10: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x50ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_50ab14:
    // 0x50ab14: 0xc04cc04  jal         func_133010
label_50ab18:
    if (ctx->pc == 0x50AB18u) {
        ctx->pc = 0x50AB18u;
            // 0x50ab18: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x50AB1Cu;
        goto label_50ab1c;
    }
    ctx->pc = 0x50AB14u;
    SET_GPR_U32(ctx, 31, 0x50AB1Cu);
    ctx->pc = 0x50AB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AB14u;
            // 0x50ab18: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB1Cu; }
        if (ctx->pc != 0x50AB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB1Cu; }
        if (ctx->pc != 0x50AB1Cu) { return; }
    }
    ctx->pc = 0x50AB1Cu;
label_50ab1c:
    // 0x50ab1c: 0x8e320d74  lw          $s2, 0xD74($s1)
    ctx->pc = 0x50ab1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_50ab20:
    // 0x50ab20: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x50ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50ab24:
    // 0x50ab24: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x50ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ab28:
    // 0x50ab28: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x50ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ab2c:
    // 0x50ab2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x50ab2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_50ab30:
    // 0x50ab30: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x50ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_50ab34:
    // 0x50ab34: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x50ab34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_50ab38:
    // 0x50ab38: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x50ab38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_50ab3c:
    // 0x50ab3c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x50ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_50ab40:
    // 0x50ab40: 0xc0a5444  jal         func_295110
label_50ab44:
    if (ctx->pc == 0x50AB44u) {
        ctx->pc = 0x50AB44u;
            // 0x50ab44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50AB48u;
        goto label_50ab48;
    }
    ctx->pc = 0x50AB40u;
    SET_GPR_U32(ctx, 31, 0x50AB48u);
    ctx->pc = 0x50AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AB40u;
            // 0x50ab44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB48u; }
        if (ctx->pc != 0x50AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AB48u; }
        if (ctx->pc != 0x50AB48u) { return; }
    }
    ctx->pc = 0x50AB48u;
label_50ab48:
    // 0x50ab48: 0xae4002d0  sw          $zero, 0x2D0($s2)
    ctx->pc = 0x50ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 0));
label_50ab4c:
    // 0x50ab4c: 0xae4002d4  sw          $zero, 0x2D4($s2)
    ctx->pc = 0x50ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 0));
label_50ab50:
    // 0x50ab50: 0xae4002d8  sw          $zero, 0x2D8($s2)
    ctx->pc = 0x50ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 0));
label_50ab54:
    // 0x50ab54: 0xae4002dc  sw          $zero, 0x2DC($s2)
    ctx->pc = 0x50ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
label_50ab58:
    // 0x50ab58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50ab5c:
    // 0x50ab5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50ab60:
    // 0x50ab60: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x50ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50ab64:
    // 0x50ab64: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x50ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_50ab68:
    // 0x50ab68: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_50ab6c:
    if (ctx->pc == 0x50AB6Cu) {
        ctx->pc = 0x50AB6Cu;
            // 0x50ab6c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x50AB70u;
        goto label_50ab70;
    }
    ctx->pc = 0x50AB68u;
    {
        const bool branch_taken_0x50ab68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50ab68) {
            ctx->pc = 0x50AB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AB68u;
            // 0x50ab6c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AB84u;
            goto label_50ab84;
        }
    }
    ctx->pc = 0x50AB70u;
label_50ab70:
    // 0x50ab70: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x50ab70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_50ab74:
    // 0x50ab74: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x50ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_50ab78:
    // 0x50ab78: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_50ab7c:
    if (ctx->pc == 0x50AB7Cu) {
        ctx->pc = 0x50AB7Cu;
            // 0x50ab7c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x50AB80u;
        goto label_50ab80;
    }
    ctx->pc = 0x50AB78u;
    {
        const bool branch_taken_0x50ab78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50ab78) {
            ctx->pc = 0x50AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AB78u;
            // 0x50ab7c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50ABA0u;
            goto label_50aba0;
        }
    }
    ctx->pc = 0x50AB80u;
label_50ab80:
    // 0x50ab80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_50ab84:
    // 0x50ab84: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_50ab88:
    if (ctx->pc == 0x50AB88u) {
        ctx->pc = 0x50AB88u;
            // 0x50ab88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50AB8Cu;
        goto label_50ab8c;
    }
    ctx->pc = 0x50AB84u;
    {
        const bool branch_taken_0x50ab84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x50ab84) {
            ctx->pc = 0x50AB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AB84u;
            // 0x50ab88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50ABB0u;
            goto label_50abb0;
        }
    }
    ctx->pc = 0x50AB8Cu;
label_50ab8c:
    // 0x50ab8c: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x50ab8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_50ab90:
    // 0x50ab90: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x50ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_50ab94:
    // 0x50ab94: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_50ab98:
    if (ctx->pc == 0x50AB98u) {
        ctx->pc = 0x50AB9Cu;
        goto label_50ab9c;
    }
    ctx->pc = 0x50AB94u;
    {
        const bool branch_taken_0x50ab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50ab94) {
            ctx->pc = 0x50ABACu;
            goto label_50abac;
        }
    }
    ctx->pc = 0x50AB9Cu;
label_50ab9c:
    // 0x50ab9c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_50aba0:
    // 0x50aba0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50aba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50aba4:
    // 0x50aba4: 0xc0ab5f0  jal         func_2AD7C0
label_50aba8:
    if (ctx->pc == 0x50ABA8u) {
        ctx->pc = 0x50ABA8u;
            // 0x50aba8: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->pc = 0x50ABACu;
        goto label_50abac;
    }
    ctx->pc = 0x50ABA4u;
    SET_GPR_U32(ctx, 31, 0x50ABACu);
    ctx->pc = 0x50ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABA4u;
            // 0x50aba8: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD7C0u;
    if (runtime->hasFunction(0x2AD7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABACu; }
        if (ctx->pc != 0x50ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD7C0_0x2ad7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABACu; }
        if (ctx->pc != 0x50ABACu) { return; }
    }
    ctx->pc = 0x50ABACu;
label_50abac:
    // 0x50abac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50abb0:
    // 0x50abb0: 0xc1427ac  jal         func_509EB0
label_50abb4:
    if (ctx->pc == 0x50ABB4u) {
        ctx->pc = 0x50ABB4u;
            // 0x50abb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50ABB8u;
        goto label_50abb8;
    }
    ctx->pc = 0x50ABB0u;
    SET_GPR_U32(ctx, 31, 0x50ABB8u);
    ctx->pc = 0x50ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABB0u;
            // 0x50abb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509EB0u;
    if (runtime->hasFunction(0x509EB0u)) {
        auto targetFn = runtime->lookupFunction(0x509EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABB8u; }
        if (ctx->pc != 0x50ABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509EB0_0x509eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABB8u; }
        if (ctx->pc != 0x50ABB8u) { return; }
    }
    ctx->pc = 0x50ABB8u;
label_50abb8:
    // 0x50abb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x50abb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50abbc:
    // 0x50abbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50abc0:
    // 0x50abc0: 0xc142504  jal         func_509410
label_50abc4:
    if (ctx->pc == 0x50ABC4u) {
        ctx->pc = 0x50ABC4u;
            // 0x50abc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50ABC8u;
        goto label_50abc8;
    }
    ctx->pc = 0x50ABC0u;
    SET_GPR_U32(ctx, 31, 0x50ABC8u);
    ctx->pc = 0x50ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABC0u;
            // 0x50abc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABC8u; }
        if (ctx->pc != 0x50ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ABC8u; }
        if (ctx->pc != 0x50ABC8u) { return; }
    }
    ctx->pc = 0x50ABC8u;
label_50abc8:
    // 0x50abc8: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x50abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_50abcc:
    // 0x50abcc: 0x28810006  slti        $at, $a0, 0x6
    ctx->pc = 0x50abccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_50abd0:
    // 0x50abd0: 0x5020001c  beql        $at, $zero, . + 4 + (0x1C << 2)
label_50abd4:
    if (ctx->pc == 0x50ABD4u) {
        ctx->pc = 0x50ABD4u;
            // 0x50abd4: 0x26230890  addiu       $v1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x50ABD8u;
        goto label_50abd8;
    }
    ctx->pc = 0x50ABD0u;
    {
        const bool branch_taken_0x50abd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50abd0) {
            ctx->pc = 0x50ABD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABD0u;
            // 0x50abd4: 0x26230890  addiu       $v1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AC44u;
            goto label_50ac44;
        }
    }
    ctx->pc = 0x50ABD8u;
label_50abd8:
    // 0x50abd8: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x50abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_50abdc:
    // 0x50abdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50abe0:
    // 0x50abe0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x50abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50abe4:
    // 0x50abe4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x50abe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_50abe8:
    // 0x50abe8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_50abec:
    if (ctx->pc == 0x50ABECu) {
        ctx->pc = 0x50ABECu;
            // 0x50abec: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x50ABF0u;
        goto label_50abf0;
    }
    ctx->pc = 0x50ABE8u;
    {
        const bool branch_taken_0x50abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50abe8) {
            ctx->pc = 0x50ABECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABE8u;
            // 0x50abec: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AC10u;
            goto label_50ac10;
        }
    }
    ctx->pc = 0x50ABF0u;
label_50abf0:
    // 0x50abf0: 0x56430003  bnel        $s2, $v1, . + 4 + (0x3 << 2)
label_50abf4:
    if (ctx->pc == 0x50ABF4u) {
        ctx->pc = 0x50ABF4u;
            // 0x50abf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50ABF8u;
        goto label_50abf8;
    }
    ctx->pc = 0x50ABF0u;
    {
        const bool branch_taken_0x50abf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x50abf0) {
            ctx->pc = 0x50ABF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABF0u;
            // 0x50abf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AC00u;
            goto label_50ac00;
        }
    }
    ctx->pc = 0x50ABF8u;
label_50abf8:
    // 0x50abf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_50abfc:
    if (ctx->pc == 0x50ABFCu) {
        ctx->pc = 0x50ABFCu;
            // 0x50abfc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50AC00u;
        goto label_50ac00;
    }
    ctx->pc = 0x50ABF8u;
    {
        const bool branch_taken_0x50abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ABF8u;
            // 0x50abfc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50abf8) {
            ctx->pc = 0x50AC0Cu;
            goto label_50ac0c;
        }
    }
    ctx->pc = 0x50AC00u;
label_50ac00:
    // 0x50ac00: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_50ac04:
    if (ctx->pc == 0x50AC04u) {
        ctx->pc = 0x50AC08u;
        goto label_50ac08;
    }
    ctx->pc = 0x50AC00u;
    {
        const bool branch_taken_0x50ac00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x50ac00) {
            ctx->pc = 0x50AC0Cu;
            goto label_50ac0c;
        }
    }
    ctx->pc = 0x50AC08u;
label_50ac08:
    // 0x50ac08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x50ac08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_50ac0c:
    // 0x50ac0c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x50ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_50ac10:
    // 0x50ac10: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x50ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_50ac14:
    // 0x50ac14: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x50ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_50ac18:
    // 0x50ac18: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x50ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_50ac1c:
    // 0x50ac1c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x50ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50ac20:
    // 0x50ac20: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x50ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_50ac24:
    // 0x50ac24: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x50ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_50ac28:
    // 0x50ac28: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_50ac2c:
    // 0x50ac2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x50ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_50ac30:
    // 0x50ac30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50ac34:
    // 0x50ac34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50ac38:
    // 0x50ac38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50ac3c:
    // 0x50ac3c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x50ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_50ac40:
    // 0x50ac40: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x50ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_50ac44:
    // 0x50ac44: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x50ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_50ac48:
    // 0x50ac48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50ac48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50ac4c:
    // 0x50ac4c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x50ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_50ac50:
    // 0x50ac50: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x50ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_50ac54:
    // 0x50ac54: 0xc0c6250  jal         func_318940
label_50ac58:
    if (ctx->pc == 0x50AC58u) {
        ctx->pc = 0x50AC58u;
            // 0x50ac58: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x50AC5Cu;
        goto label_50ac5c;
    }
    ctx->pc = 0x50AC54u;
    SET_GPR_U32(ctx, 31, 0x50AC5Cu);
    ctx->pc = 0x50AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AC54u;
            // 0x50ac58: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC5Cu; }
        if (ctx->pc != 0x50AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC5Cu; }
        if (ctx->pc != 0x50AC5Cu) { return; }
    }
    ctx->pc = 0x50AC5Cu;
label_50ac5c:
    // 0x50ac5c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x50ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_50ac60:
    // 0x50ac60: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x50ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_50ac64:
    // 0x50ac64: 0xc075378  jal         func_1D4DE0
label_50ac68:
    if (ctx->pc == 0x50AC68u) {
        ctx->pc = 0x50AC68u;
            // 0x50ac68: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x50AC6Cu;
        goto label_50ac6c;
    }
    ctx->pc = 0x50AC64u;
    SET_GPR_U32(ctx, 31, 0x50AC6Cu);
    ctx->pc = 0x50AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AC64u;
            // 0x50ac68: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC6Cu; }
        if (ctx->pc != 0x50AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC6Cu; }
        if (ctx->pc != 0x50AC6Cu) { return; }
    }
    ctx->pc = 0x50AC6Cu;
label_50ac6c:
    // 0x50ac6c: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x50ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50ac70:
    // 0x50ac70: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x50ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_50ac74:
    // 0x50ac74: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x50ac74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50ac78:
    // 0x50ac78: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x50ac78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50ac7c:
    // 0x50ac7c: 0xc0c753c  jal         func_31D4F0
label_50ac80:
    if (ctx->pc == 0x50AC80u) {
        ctx->pc = 0x50AC80u;
            // 0x50ac80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50AC84u;
        goto label_50ac84;
    }
    ctx->pc = 0x50AC7Cu;
    SET_GPR_U32(ctx, 31, 0x50AC84u);
    ctx->pc = 0x50AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AC7Cu;
            // 0x50ac80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC84u; }
        if (ctx->pc != 0x50AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AC84u; }
        if (ctx->pc != 0x50AC84u) { return; }
    }
    ctx->pc = 0x50AC84u;
label_50ac84:
    // 0x50ac84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x50ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_50ac88:
    // 0x50ac88: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x50ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_50ac8c:
    // 0x50ac8c: 0xc44ea488  lwc1        $f14, -0x5B78($v0)
    ctx->pc = 0x50ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_50ac90:
    // 0x50ac90: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x50ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50ac94:
    // 0x50ac94: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x50ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50ac98:
    // 0x50ac98: 0xc0c753c  jal         func_31D4F0
label_50ac9c:
    if (ctx->pc == 0x50AC9Cu) {
        ctx->pc = 0x50AC9Cu;
            // 0x50ac9c: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x50ACA0u;
        goto label_50aca0;
    }
    ctx->pc = 0x50AC98u;
    SET_GPR_U32(ctx, 31, 0x50ACA0u);
    ctx->pc = 0x50AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AC98u;
            // 0x50ac9c: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ACA0u; }
        if (ctx->pc != 0x50ACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ACA0u; }
        if (ctx->pc != 0x50ACA0u) { return; }
    }
    ctx->pc = 0x50ACA0u;
label_50aca0:
    // 0x50aca0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50aca4:
    // 0x50aca4: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x50aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_50aca8:
    // 0x50aca8: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_50acac:
    // 0x50acac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x50acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_50acb0:
    // 0x50acb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_50acb4:
    if (ctx->pc == 0x50ACB4u) {
        ctx->pc = 0x50ACB4u;
            // 0x50acb4: 0x92050007  lbu         $a1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x50ACB8u;
        goto label_50acb8;
    }
    ctx->pc = 0x50ACB0u;
    {
        const bool branch_taken_0x50acb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x50ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ACB0u;
            // 0x50acb4: 0x92050007  lbu         $a1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50acb0) {
            ctx->pc = 0x50ACC8u;
            goto label_50acc8;
        }
    }
    ctx->pc = 0x50ACB8u;
label_50acb8:
    // 0x50acb8: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x50acb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_50acbc:
    // 0x50acbc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_50acc0:
    if (ctx->pc == 0x50ACC0u) {
        ctx->pc = 0x50ACC0u;
            // 0x50acc0: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x50ACC4u;
        goto label_50acc4;
    }
    ctx->pc = 0x50ACBCu;
    {
        const bool branch_taken_0x50acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50acbc) {
            ctx->pc = 0x50ACC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ACBCu;
            // 0x50acc0: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50ACCCu;
            goto label_50accc;
        }
    }
    ctx->pc = 0x50ACC4u;
label_50acc4:
    // 0x50acc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50acc8:
    // 0x50acc8: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x50acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_50accc:
    // 0x50accc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x50acccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_50acd0:
    // 0x50acd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50acd4:
    if (ctx->pc == 0x50ACD4u) {
        ctx->pc = 0x50ACD8u;
        goto label_50acd8;
    }
    ctx->pc = 0x50ACD0u;
    {
        const bool branch_taken_0x50acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50acd0) {
            ctx->pc = 0x50ACDCu;
            goto label_50acdc;
        }
    }
    ctx->pc = 0x50ACD8u;
label_50acd8:
    // 0x50acd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50acdc:
    // 0x50acdc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x50acdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_50ace0:
    // 0x50ace0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ace4:
    // 0x50ace4: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x50ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_50ace8:
    // 0x50ace8: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_50acec:
    if (ctx->pc == 0x50ACECu) {
        ctx->pc = 0x50ACECu;
            // 0x50acec: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50ACF0u;
        goto label_50acf0;
    }
    ctx->pc = 0x50ACE8u;
    {
        const bool branch_taken_0x50ace8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50ace8) {
            ctx->pc = 0x50ACECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ACE8u;
            // 0x50acec: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AD38u;
            goto label_50ad38;
        }
    }
    ctx->pc = 0x50ACF0u;
label_50acf0:
    // 0x50acf0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_50acf4:
    if (ctx->pc == 0x50ACF4u) {
        ctx->pc = 0x50ACF4u;
            // 0x50acf4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50ACF8u;
        goto label_50acf8;
    }
    ctx->pc = 0x50ACF0u;
    {
        const bool branch_taken_0x50acf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50acf0) {
            ctx->pc = 0x50ACF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50ACF0u;
            // 0x50acf4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AD00u;
            goto label_50ad00;
        }
    }
    ctx->pc = 0x50ACF8u;
label_50acf8:
    // 0x50acf8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_50acfc:
    if (ctx->pc == 0x50ACFCu) {
        ctx->pc = 0x50ACFCu;
            // 0x50acfc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50AD00u;
        goto label_50ad00;
    }
    ctx->pc = 0x50ACF8u;
    {
        const bool branch_taken_0x50acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ACF8u;
            // 0x50acfc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50acf8) {
            ctx->pc = 0x50AD70u;
            goto label_50ad70;
        }
    }
    ctx->pc = 0x50AD00u;
label_50ad00:
    // 0x50ad00: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x50ad00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_50ad04:
    // 0x50ad04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_50ad08:
    if (ctx->pc == 0x50AD08u) {
        ctx->pc = 0x50AD08u;
            // 0x50ad08: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50AD0Cu;
        goto label_50ad0c;
    }
    ctx->pc = 0x50AD04u;
    {
        const bool branch_taken_0x50ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ad04) {
            ctx->pc = 0x50AD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AD04u;
            // 0x50ad08: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AD14u;
            goto label_50ad14;
        }
    }
    ctx->pc = 0x50AD0Cu;
label_50ad0c:
    // 0x50ad0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50ad10:
    // 0x50ad10: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x50ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_50ad14:
    // 0x50ad14: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x50ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_50ad18:
    // 0x50ad18: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x50ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50ad1c:
    // 0x50ad1c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x50ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_50ad20:
    // 0x50ad20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x50ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_50ad24:
    // 0x50ad24: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x50ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_50ad28:
    // 0x50ad28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_50ad2c:
    // 0x50ad2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50ad30:
    // 0x50ad30: 0x10000013  b           . + 4 + (0x13 << 2)
label_50ad34:
    if (ctx->pc == 0x50AD34u) {
        ctx->pc = 0x50AD34u;
            // 0x50ad34: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50AD38u;
        goto label_50ad38;
    }
    ctx->pc = 0x50AD30u;
    {
        const bool branch_taken_0x50ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AD30u;
            // 0x50ad34: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ad30) {
            ctx->pc = 0x50AD80u;
            goto label_50ad80;
        }
    }
    ctx->pc = 0x50AD38u;
label_50ad38:
    // 0x50ad38: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x50ad38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_50ad3c:
    // 0x50ad3c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_50ad40:
    if (ctx->pc == 0x50AD40u) {
        ctx->pc = 0x50AD40u;
            // 0x50ad40: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x50AD44u;
        goto label_50ad44;
    }
    ctx->pc = 0x50AD3Cu;
    {
        const bool branch_taken_0x50ad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ad3c) {
            ctx->pc = 0x50AD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AD3Cu;
            // 0x50ad40: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AD4Cu;
            goto label_50ad4c;
        }
    }
    ctx->pc = 0x50AD44u;
label_50ad44:
    // 0x50ad44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50ad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50ad48:
    // 0x50ad48: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x50ad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_50ad4c:
    // 0x50ad4c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x50ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_50ad50:
    // 0x50ad50: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x50ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50ad54:
    // 0x50ad54: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x50ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_50ad58:
    // 0x50ad58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x50ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_50ad5c:
    // 0x50ad5c: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x50ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
label_50ad60:
    // 0x50ad60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_50ad64:
    // 0x50ad64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x50ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50ad68:
    // 0x50ad68: 0x10000005  b           . + 4 + (0x5 << 2)
label_50ad6c:
    if (ctx->pc == 0x50AD6Cu) {
        ctx->pc = 0x50AD6Cu;
            // 0x50ad6c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x50AD70u;
        goto label_50ad70;
    }
    ctx->pc = 0x50AD68u;
    {
        const bool branch_taken_0x50ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AD68u;
            // 0x50ad6c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ad68) {
            ctx->pc = 0x50AD80u;
            goto label_50ad80;
        }
    }
    ctx->pc = 0x50AD70u;
label_50ad70:
    // 0x50ad70: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x50ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_50ad74:
    // 0x50ad74: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x50ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_50ad78:
    // 0x50ad78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x50ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_50ad7c:
    // 0x50ad7c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x50ad7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50ad80:
    // 0x50ad80: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x50ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ad84:
    // 0x50ad84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50ad88:
    // 0x50ad88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50ad88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50ad8c:
    // 0x50ad8c: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x50ad8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_50ad90:
    // 0x50ad90: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x50ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ad94:
    // 0x50ad94: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x50ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_50ad98:
    // 0x50ad98: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x50ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50ad9c:
    // 0x50ad9c: 0xe6200de8  swc1        $f0, 0xDE8($s1)
    ctx->pc = 0x50ad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
label_50ada0:
    // 0x50ada0: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x50ada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50ada4:
    // 0x50ada4: 0xc04cbd8  jal         func_132F60
label_50ada8:
    if (ctx->pc == 0x50ADA8u) {
        ctx->pc = 0x50ADA8u;
            // 0x50ada8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50ADACu;
        goto label_50adac;
    }
    ctx->pc = 0x50ADA4u;
    SET_GPR_U32(ctx, 31, 0x50ADACu);
    ctx->pc = 0x50ADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ADA4u;
            // 0x50ada8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ADACu; }
        if (ctx->pc != 0x50ADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ADACu; }
        if (ctx->pc != 0x50ADACu) { return; }
    }
    ctx->pc = 0x50ADACu;
label_50adac:
    // 0x50adac: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x50adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_50adb0:
    // 0x50adb0: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x50adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_50adb4:
    // 0x50adb4: 0xc04cca0  jal         func_133280
label_50adb8:
    if (ctx->pc == 0x50ADB8u) {
        ctx->pc = 0x50ADB8u;
            // 0x50adb8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50ADBCu;
        goto label_50adbc;
    }
    ctx->pc = 0x50ADB4u;
    SET_GPR_U32(ctx, 31, 0x50ADBCu);
    ctx->pc = 0x50ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50ADB4u;
            // 0x50adb8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ADBCu; }
        if (ctx->pc != 0x50ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50ADBCu; }
        if (ctx->pc != 0x50ADBCu) { return; }
    }
    ctx->pc = 0x50ADBCu;
label_50adbc:
    // 0x50adbc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x50adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50adc0:
    // 0x50adc0: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x50adc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_50adc4:
    // 0x50adc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x50adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_50adc8:
    // 0x50adc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50adc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50adcc:
    // 0x50adcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50adccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50add0:
    // 0x50add0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50add0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50add4:
    // 0x50add4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50add4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50add8:
    // 0x50add8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50add8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50addc:
    // 0x50addc: 0x3e00008  jr          $ra
label_50ade0:
    if (ctx->pc == 0x50ADE0u) {
        ctx->pc = 0x50ADE0u;
            // 0x50ade0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50ADE4u;
        goto label_50ade4;
    }
    ctx->pc = 0x50ADDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50ADDCu;
            // 0x50ade0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50ADE4u;
label_50ade4:
    // 0x50ade4: 0x0  nop
    ctx->pc = 0x50ade4u;
    // NOP
label_50ade8:
    // 0x50ade8: 0x0  nop
    ctx->pc = 0x50ade8u;
    // NOP
label_50adec:
    // 0x50adec: 0x0  nop
    ctx->pc = 0x50adecu;
    // NOP
}
