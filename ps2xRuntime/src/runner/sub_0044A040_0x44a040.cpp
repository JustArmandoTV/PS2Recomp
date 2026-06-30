#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044A040
// Address: 0x44a040 - 0x44abd0
void sub_0044A040_0x44a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A040_0x44a040");
#endif

    switch (ctx->pc) {
        case 0x44a040u: goto label_44a040;
        case 0x44a044u: goto label_44a044;
        case 0x44a048u: goto label_44a048;
        case 0x44a04cu: goto label_44a04c;
        case 0x44a050u: goto label_44a050;
        case 0x44a054u: goto label_44a054;
        case 0x44a058u: goto label_44a058;
        case 0x44a05cu: goto label_44a05c;
        case 0x44a060u: goto label_44a060;
        case 0x44a064u: goto label_44a064;
        case 0x44a068u: goto label_44a068;
        case 0x44a06cu: goto label_44a06c;
        case 0x44a070u: goto label_44a070;
        case 0x44a074u: goto label_44a074;
        case 0x44a078u: goto label_44a078;
        case 0x44a07cu: goto label_44a07c;
        case 0x44a080u: goto label_44a080;
        case 0x44a084u: goto label_44a084;
        case 0x44a088u: goto label_44a088;
        case 0x44a08cu: goto label_44a08c;
        case 0x44a090u: goto label_44a090;
        case 0x44a094u: goto label_44a094;
        case 0x44a098u: goto label_44a098;
        case 0x44a09cu: goto label_44a09c;
        case 0x44a0a0u: goto label_44a0a0;
        case 0x44a0a4u: goto label_44a0a4;
        case 0x44a0a8u: goto label_44a0a8;
        case 0x44a0acu: goto label_44a0ac;
        case 0x44a0b0u: goto label_44a0b0;
        case 0x44a0b4u: goto label_44a0b4;
        case 0x44a0b8u: goto label_44a0b8;
        case 0x44a0bcu: goto label_44a0bc;
        case 0x44a0c0u: goto label_44a0c0;
        case 0x44a0c4u: goto label_44a0c4;
        case 0x44a0c8u: goto label_44a0c8;
        case 0x44a0ccu: goto label_44a0cc;
        case 0x44a0d0u: goto label_44a0d0;
        case 0x44a0d4u: goto label_44a0d4;
        case 0x44a0d8u: goto label_44a0d8;
        case 0x44a0dcu: goto label_44a0dc;
        case 0x44a0e0u: goto label_44a0e0;
        case 0x44a0e4u: goto label_44a0e4;
        case 0x44a0e8u: goto label_44a0e8;
        case 0x44a0ecu: goto label_44a0ec;
        case 0x44a0f0u: goto label_44a0f0;
        case 0x44a0f4u: goto label_44a0f4;
        case 0x44a0f8u: goto label_44a0f8;
        case 0x44a0fcu: goto label_44a0fc;
        case 0x44a100u: goto label_44a100;
        case 0x44a104u: goto label_44a104;
        case 0x44a108u: goto label_44a108;
        case 0x44a10cu: goto label_44a10c;
        case 0x44a110u: goto label_44a110;
        case 0x44a114u: goto label_44a114;
        case 0x44a118u: goto label_44a118;
        case 0x44a11cu: goto label_44a11c;
        case 0x44a120u: goto label_44a120;
        case 0x44a124u: goto label_44a124;
        case 0x44a128u: goto label_44a128;
        case 0x44a12cu: goto label_44a12c;
        case 0x44a130u: goto label_44a130;
        case 0x44a134u: goto label_44a134;
        case 0x44a138u: goto label_44a138;
        case 0x44a13cu: goto label_44a13c;
        case 0x44a140u: goto label_44a140;
        case 0x44a144u: goto label_44a144;
        case 0x44a148u: goto label_44a148;
        case 0x44a14cu: goto label_44a14c;
        case 0x44a150u: goto label_44a150;
        case 0x44a154u: goto label_44a154;
        case 0x44a158u: goto label_44a158;
        case 0x44a15cu: goto label_44a15c;
        case 0x44a160u: goto label_44a160;
        case 0x44a164u: goto label_44a164;
        case 0x44a168u: goto label_44a168;
        case 0x44a16cu: goto label_44a16c;
        case 0x44a170u: goto label_44a170;
        case 0x44a174u: goto label_44a174;
        case 0x44a178u: goto label_44a178;
        case 0x44a17cu: goto label_44a17c;
        case 0x44a180u: goto label_44a180;
        case 0x44a184u: goto label_44a184;
        case 0x44a188u: goto label_44a188;
        case 0x44a18cu: goto label_44a18c;
        case 0x44a190u: goto label_44a190;
        case 0x44a194u: goto label_44a194;
        case 0x44a198u: goto label_44a198;
        case 0x44a19cu: goto label_44a19c;
        case 0x44a1a0u: goto label_44a1a0;
        case 0x44a1a4u: goto label_44a1a4;
        case 0x44a1a8u: goto label_44a1a8;
        case 0x44a1acu: goto label_44a1ac;
        case 0x44a1b0u: goto label_44a1b0;
        case 0x44a1b4u: goto label_44a1b4;
        case 0x44a1b8u: goto label_44a1b8;
        case 0x44a1bcu: goto label_44a1bc;
        case 0x44a1c0u: goto label_44a1c0;
        case 0x44a1c4u: goto label_44a1c4;
        case 0x44a1c8u: goto label_44a1c8;
        case 0x44a1ccu: goto label_44a1cc;
        case 0x44a1d0u: goto label_44a1d0;
        case 0x44a1d4u: goto label_44a1d4;
        case 0x44a1d8u: goto label_44a1d8;
        case 0x44a1dcu: goto label_44a1dc;
        case 0x44a1e0u: goto label_44a1e0;
        case 0x44a1e4u: goto label_44a1e4;
        case 0x44a1e8u: goto label_44a1e8;
        case 0x44a1ecu: goto label_44a1ec;
        case 0x44a1f0u: goto label_44a1f0;
        case 0x44a1f4u: goto label_44a1f4;
        case 0x44a1f8u: goto label_44a1f8;
        case 0x44a1fcu: goto label_44a1fc;
        case 0x44a200u: goto label_44a200;
        case 0x44a204u: goto label_44a204;
        case 0x44a208u: goto label_44a208;
        case 0x44a20cu: goto label_44a20c;
        case 0x44a210u: goto label_44a210;
        case 0x44a214u: goto label_44a214;
        case 0x44a218u: goto label_44a218;
        case 0x44a21cu: goto label_44a21c;
        case 0x44a220u: goto label_44a220;
        case 0x44a224u: goto label_44a224;
        case 0x44a228u: goto label_44a228;
        case 0x44a22cu: goto label_44a22c;
        case 0x44a230u: goto label_44a230;
        case 0x44a234u: goto label_44a234;
        case 0x44a238u: goto label_44a238;
        case 0x44a23cu: goto label_44a23c;
        case 0x44a240u: goto label_44a240;
        case 0x44a244u: goto label_44a244;
        case 0x44a248u: goto label_44a248;
        case 0x44a24cu: goto label_44a24c;
        case 0x44a250u: goto label_44a250;
        case 0x44a254u: goto label_44a254;
        case 0x44a258u: goto label_44a258;
        case 0x44a25cu: goto label_44a25c;
        case 0x44a260u: goto label_44a260;
        case 0x44a264u: goto label_44a264;
        case 0x44a268u: goto label_44a268;
        case 0x44a26cu: goto label_44a26c;
        case 0x44a270u: goto label_44a270;
        case 0x44a274u: goto label_44a274;
        case 0x44a278u: goto label_44a278;
        case 0x44a27cu: goto label_44a27c;
        case 0x44a280u: goto label_44a280;
        case 0x44a284u: goto label_44a284;
        case 0x44a288u: goto label_44a288;
        case 0x44a28cu: goto label_44a28c;
        case 0x44a290u: goto label_44a290;
        case 0x44a294u: goto label_44a294;
        case 0x44a298u: goto label_44a298;
        case 0x44a29cu: goto label_44a29c;
        case 0x44a2a0u: goto label_44a2a0;
        case 0x44a2a4u: goto label_44a2a4;
        case 0x44a2a8u: goto label_44a2a8;
        case 0x44a2acu: goto label_44a2ac;
        case 0x44a2b0u: goto label_44a2b0;
        case 0x44a2b4u: goto label_44a2b4;
        case 0x44a2b8u: goto label_44a2b8;
        case 0x44a2bcu: goto label_44a2bc;
        case 0x44a2c0u: goto label_44a2c0;
        case 0x44a2c4u: goto label_44a2c4;
        case 0x44a2c8u: goto label_44a2c8;
        case 0x44a2ccu: goto label_44a2cc;
        case 0x44a2d0u: goto label_44a2d0;
        case 0x44a2d4u: goto label_44a2d4;
        case 0x44a2d8u: goto label_44a2d8;
        case 0x44a2dcu: goto label_44a2dc;
        case 0x44a2e0u: goto label_44a2e0;
        case 0x44a2e4u: goto label_44a2e4;
        case 0x44a2e8u: goto label_44a2e8;
        case 0x44a2ecu: goto label_44a2ec;
        case 0x44a2f0u: goto label_44a2f0;
        case 0x44a2f4u: goto label_44a2f4;
        case 0x44a2f8u: goto label_44a2f8;
        case 0x44a2fcu: goto label_44a2fc;
        case 0x44a300u: goto label_44a300;
        case 0x44a304u: goto label_44a304;
        case 0x44a308u: goto label_44a308;
        case 0x44a30cu: goto label_44a30c;
        case 0x44a310u: goto label_44a310;
        case 0x44a314u: goto label_44a314;
        case 0x44a318u: goto label_44a318;
        case 0x44a31cu: goto label_44a31c;
        case 0x44a320u: goto label_44a320;
        case 0x44a324u: goto label_44a324;
        case 0x44a328u: goto label_44a328;
        case 0x44a32cu: goto label_44a32c;
        case 0x44a330u: goto label_44a330;
        case 0x44a334u: goto label_44a334;
        case 0x44a338u: goto label_44a338;
        case 0x44a33cu: goto label_44a33c;
        case 0x44a340u: goto label_44a340;
        case 0x44a344u: goto label_44a344;
        case 0x44a348u: goto label_44a348;
        case 0x44a34cu: goto label_44a34c;
        case 0x44a350u: goto label_44a350;
        case 0x44a354u: goto label_44a354;
        case 0x44a358u: goto label_44a358;
        case 0x44a35cu: goto label_44a35c;
        case 0x44a360u: goto label_44a360;
        case 0x44a364u: goto label_44a364;
        case 0x44a368u: goto label_44a368;
        case 0x44a36cu: goto label_44a36c;
        case 0x44a370u: goto label_44a370;
        case 0x44a374u: goto label_44a374;
        case 0x44a378u: goto label_44a378;
        case 0x44a37cu: goto label_44a37c;
        case 0x44a380u: goto label_44a380;
        case 0x44a384u: goto label_44a384;
        case 0x44a388u: goto label_44a388;
        case 0x44a38cu: goto label_44a38c;
        case 0x44a390u: goto label_44a390;
        case 0x44a394u: goto label_44a394;
        case 0x44a398u: goto label_44a398;
        case 0x44a39cu: goto label_44a39c;
        case 0x44a3a0u: goto label_44a3a0;
        case 0x44a3a4u: goto label_44a3a4;
        case 0x44a3a8u: goto label_44a3a8;
        case 0x44a3acu: goto label_44a3ac;
        case 0x44a3b0u: goto label_44a3b0;
        case 0x44a3b4u: goto label_44a3b4;
        case 0x44a3b8u: goto label_44a3b8;
        case 0x44a3bcu: goto label_44a3bc;
        case 0x44a3c0u: goto label_44a3c0;
        case 0x44a3c4u: goto label_44a3c4;
        case 0x44a3c8u: goto label_44a3c8;
        case 0x44a3ccu: goto label_44a3cc;
        case 0x44a3d0u: goto label_44a3d0;
        case 0x44a3d4u: goto label_44a3d4;
        case 0x44a3d8u: goto label_44a3d8;
        case 0x44a3dcu: goto label_44a3dc;
        case 0x44a3e0u: goto label_44a3e0;
        case 0x44a3e4u: goto label_44a3e4;
        case 0x44a3e8u: goto label_44a3e8;
        case 0x44a3ecu: goto label_44a3ec;
        case 0x44a3f0u: goto label_44a3f0;
        case 0x44a3f4u: goto label_44a3f4;
        case 0x44a3f8u: goto label_44a3f8;
        case 0x44a3fcu: goto label_44a3fc;
        case 0x44a400u: goto label_44a400;
        case 0x44a404u: goto label_44a404;
        case 0x44a408u: goto label_44a408;
        case 0x44a40cu: goto label_44a40c;
        case 0x44a410u: goto label_44a410;
        case 0x44a414u: goto label_44a414;
        case 0x44a418u: goto label_44a418;
        case 0x44a41cu: goto label_44a41c;
        case 0x44a420u: goto label_44a420;
        case 0x44a424u: goto label_44a424;
        case 0x44a428u: goto label_44a428;
        case 0x44a42cu: goto label_44a42c;
        case 0x44a430u: goto label_44a430;
        case 0x44a434u: goto label_44a434;
        case 0x44a438u: goto label_44a438;
        case 0x44a43cu: goto label_44a43c;
        case 0x44a440u: goto label_44a440;
        case 0x44a444u: goto label_44a444;
        case 0x44a448u: goto label_44a448;
        case 0x44a44cu: goto label_44a44c;
        case 0x44a450u: goto label_44a450;
        case 0x44a454u: goto label_44a454;
        case 0x44a458u: goto label_44a458;
        case 0x44a45cu: goto label_44a45c;
        case 0x44a460u: goto label_44a460;
        case 0x44a464u: goto label_44a464;
        case 0x44a468u: goto label_44a468;
        case 0x44a46cu: goto label_44a46c;
        case 0x44a470u: goto label_44a470;
        case 0x44a474u: goto label_44a474;
        case 0x44a478u: goto label_44a478;
        case 0x44a47cu: goto label_44a47c;
        case 0x44a480u: goto label_44a480;
        case 0x44a484u: goto label_44a484;
        case 0x44a488u: goto label_44a488;
        case 0x44a48cu: goto label_44a48c;
        case 0x44a490u: goto label_44a490;
        case 0x44a494u: goto label_44a494;
        case 0x44a498u: goto label_44a498;
        case 0x44a49cu: goto label_44a49c;
        case 0x44a4a0u: goto label_44a4a0;
        case 0x44a4a4u: goto label_44a4a4;
        case 0x44a4a8u: goto label_44a4a8;
        case 0x44a4acu: goto label_44a4ac;
        case 0x44a4b0u: goto label_44a4b0;
        case 0x44a4b4u: goto label_44a4b4;
        case 0x44a4b8u: goto label_44a4b8;
        case 0x44a4bcu: goto label_44a4bc;
        case 0x44a4c0u: goto label_44a4c0;
        case 0x44a4c4u: goto label_44a4c4;
        case 0x44a4c8u: goto label_44a4c8;
        case 0x44a4ccu: goto label_44a4cc;
        case 0x44a4d0u: goto label_44a4d0;
        case 0x44a4d4u: goto label_44a4d4;
        case 0x44a4d8u: goto label_44a4d8;
        case 0x44a4dcu: goto label_44a4dc;
        case 0x44a4e0u: goto label_44a4e0;
        case 0x44a4e4u: goto label_44a4e4;
        case 0x44a4e8u: goto label_44a4e8;
        case 0x44a4ecu: goto label_44a4ec;
        case 0x44a4f0u: goto label_44a4f0;
        case 0x44a4f4u: goto label_44a4f4;
        case 0x44a4f8u: goto label_44a4f8;
        case 0x44a4fcu: goto label_44a4fc;
        case 0x44a500u: goto label_44a500;
        case 0x44a504u: goto label_44a504;
        case 0x44a508u: goto label_44a508;
        case 0x44a50cu: goto label_44a50c;
        case 0x44a510u: goto label_44a510;
        case 0x44a514u: goto label_44a514;
        case 0x44a518u: goto label_44a518;
        case 0x44a51cu: goto label_44a51c;
        case 0x44a520u: goto label_44a520;
        case 0x44a524u: goto label_44a524;
        case 0x44a528u: goto label_44a528;
        case 0x44a52cu: goto label_44a52c;
        case 0x44a530u: goto label_44a530;
        case 0x44a534u: goto label_44a534;
        case 0x44a538u: goto label_44a538;
        case 0x44a53cu: goto label_44a53c;
        case 0x44a540u: goto label_44a540;
        case 0x44a544u: goto label_44a544;
        case 0x44a548u: goto label_44a548;
        case 0x44a54cu: goto label_44a54c;
        case 0x44a550u: goto label_44a550;
        case 0x44a554u: goto label_44a554;
        case 0x44a558u: goto label_44a558;
        case 0x44a55cu: goto label_44a55c;
        case 0x44a560u: goto label_44a560;
        case 0x44a564u: goto label_44a564;
        case 0x44a568u: goto label_44a568;
        case 0x44a56cu: goto label_44a56c;
        case 0x44a570u: goto label_44a570;
        case 0x44a574u: goto label_44a574;
        case 0x44a578u: goto label_44a578;
        case 0x44a57cu: goto label_44a57c;
        case 0x44a580u: goto label_44a580;
        case 0x44a584u: goto label_44a584;
        case 0x44a588u: goto label_44a588;
        case 0x44a58cu: goto label_44a58c;
        case 0x44a590u: goto label_44a590;
        case 0x44a594u: goto label_44a594;
        case 0x44a598u: goto label_44a598;
        case 0x44a59cu: goto label_44a59c;
        case 0x44a5a0u: goto label_44a5a0;
        case 0x44a5a4u: goto label_44a5a4;
        case 0x44a5a8u: goto label_44a5a8;
        case 0x44a5acu: goto label_44a5ac;
        case 0x44a5b0u: goto label_44a5b0;
        case 0x44a5b4u: goto label_44a5b4;
        case 0x44a5b8u: goto label_44a5b8;
        case 0x44a5bcu: goto label_44a5bc;
        case 0x44a5c0u: goto label_44a5c0;
        case 0x44a5c4u: goto label_44a5c4;
        case 0x44a5c8u: goto label_44a5c8;
        case 0x44a5ccu: goto label_44a5cc;
        case 0x44a5d0u: goto label_44a5d0;
        case 0x44a5d4u: goto label_44a5d4;
        case 0x44a5d8u: goto label_44a5d8;
        case 0x44a5dcu: goto label_44a5dc;
        case 0x44a5e0u: goto label_44a5e0;
        case 0x44a5e4u: goto label_44a5e4;
        case 0x44a5e8u: goto label_44a5e8;
        case 0x44a5ecu: goto label_44a5ec;
        case 0x44a5f0u: goto label_44a5f0;
        case 0x44a5f4u: goto label_44a5f4;
        case 0x44a5f8u: goto label_44a5f8;
        case 0x44a5fcu: goto label_44a5fc;
        case 0x44a600u: goto label_44a600;
        case 0x44a604u: goto label_44a604;
        case 0x44a608u: goto label_44a608;
        case 0x44a60cu: goto label_44a60c;
        case 0x44a610u: goto label_44a610;
        case 0x44a614u: goto label_44a614;
        case 0x44a618u: goto label_44a618;
        case 0x44a61cu: goto label_44a61c;
        case 0x44a620u: goto label_44a620;
        case 0x44a624u: goto label_44a624;
        case 0x44a628u: goto label_44a628;
        case 0x44a62cu: goto label_44a62c;
        case 0x44a630u: goto label_44a630;
        case 0x44a634u: goto label_44a634;
        case 0x44a638u: goto label_44a638;
        case 0x44a63cu: goto label_44a63c;
        case 0x44a640u: goto label_44a640;
        case 0x44a644u: goto label_44a644;
        case 0x44a648u: goto label_44a648;
        case 0x44a64cu: goto label_44a64c;
        case 0x44a650u: goto label_44a650;
        case 0x44a654u: goto label_44a654;
        case 0x44a658u: goto label_44a658;
        case 0x44a65cu: goto label_44a65c;
        case 0x44a660u: goto label_44a660;
        case 0x44a664u: goto label_44a664;
        case 0x44a668u: goto label_44a668;
        case 0x44a66cu: goto label_44a66c;
        case 0x44a670u: goto label_44a670;
        case 0x44a674u: goto label_44a674;
        case 0x44a678u: goto label_44a678;
        case 0x44a67cu: goto label_44a67c;
        case 0x44a680u: goto label_44a680;
        case 0x44a684u: goto label_44a684;
        case 0x44a688u: goto label_44a688;
        case 0x44a68cu: goto label_44a68c;
        case 0x44a690u: goto label_44a690;
        case 0x44a694u: goto label_44a694;
        case 0x44a698u: goto label_44a698;
        case 0x44a69cu: goto label_44a69c;
        case 0x44a6a0u: goto label_44a6a0;
        case 0x44a6a4u: goto label_44a6a4;
        case 0x44a6a8u: goto label_44a6a8;
        case 0x44a6acu: goto label_44a6ac;
        case 0x44a6b0u: goto label_44a6b0;
        case 0x44a6b4u: goto label_44a6b4;
        case 0x44a6b8u: goto label_44a6b8;
        case 0x44a6bcu: goto label_44a6bc;
        case 0x44a6c0u: goto label_44a6c0;
        case 0x44a6c4u: goto label_44a6c4;
        case 0x44a6c8u: goto label_44a6c8;
        case 0x44a6ccu: goto label_44a6cc;
        case 0x44a6d0u: goto label_44a6d0;
        case 0x44a6d4u: goto label_44a6d4;
        case 0x44a6d8u: goto label_44a6d8;
        case 0x44a6dcu: goto label_44a6dc;
        case 0x44a6e0u: goto label_44a6e0;
        case 0x44a6e4u: goto label_44a6e4;
        case 0x44a6e8u: goto label_44a6e8;
        case 0x44a6ecu: goto label_44a6ec;
        case 0x44a6f0u: goto label_44a6f0;
        case 0x44a6f4u: goto label_44a6f4;
        case 0x44a6f8u: goto label_44a6f8;
        case 0x44a6fcu: goto label_44a6fc;
        case 0x44a700u: goto label_44a700;
        case 0x44a704u: goto label_44a704;
        case 0x44a708u: goto label_44a708;
        case 0x44a70cu: goto label_44a70c;
        case 0x44a710u: goto label_44a710;
        case 0x44a714u: goto label_44a714;
        case 0x44a718u: goto label_44a718;
        case 0x44a71cu: goto label_44a71c;
        case 0x44a720u: goto label_44a720;
        case 0x44a724u: goto label_44a724;
        case 0x44a728u: goto label_44a728;
        case 0x44a72cu: goto label_44a72c;
        case 0x44a730u: goto label_44a730;
        case 0x44a734u: goto label_44a734;
        case 0x44a738u: goto label_44a738;
        case 0x44a73cu: goto label_44a73c;
        case 0x44a740u: goto label_44a740;
        case 0x44a744u: goto label_44a744;
        case 0x44a748u: goto label_44a748;
        case 0x44a74cu: goto label_44a74c;
        case 0x44a750u: goto label_44a750;
        case 0x44a754u: goto label_44a754;
        case 0x44a758u: goto label_44a758;
        case 0x44a75cu: goto label_44a75c;
        case 0x44a760u: goto label_44a760;
        case 0x44a764u: goto label_44a764;
        case 0x44a768u: goto label_44a768;
        case 0x44a76cu: goto label_44a76c;
        case 0x44a770u: goto label_44a770;
        case 0x44a774u: goto label_44a774;
        case 0x44a778u: goto label_44a778;
        case 0x44a77cu: goto label_44a77c;
        case 0x44a780u: goto label_44a780;
        case 0x44a784u: goto label_44a784;
        case 0x44a788u: goto label_44a788;
        case 0x44a78cu: goto label_44a78c;
        case 0x44a790u: goto label_44a790;
        case 0x44a794u: goto label_44a794;
        case 0x44a798u: goto label_44a798;
        case 0x44a79cu: goto label_44a79c;
        case 0x44a7a0u: goto label_44a7a0;
        case 0x44a7a4u: goto label_44a7a4;
        case 0x44a7a8u: goto label_44a7a8;
        case 0x44a7acu: goto label_44a7ac;
        case 0x44a7b0u: goto label_44a7b0;
        case 0x44a7b4u: goto label_44a7b4;
        case 0x44a7b8u: goto label_44a7b8;
        case 0x44a7bcu: goto label_44a7bc;
        case 0x44a7c0u: goto label_44a7c0;
        case 0x44a7c4u: goto label_44a7c4;
        case 0x44a7c8u: goto label_44a7c8;
        case 0x44a7ccu: goto label_44a7cc;
        case 0x44a7d0u: goto label_44a7d0;
        case 0x44a7d4u: goto label_44a7d4;
        case 0x44a7d8u: goto label_44a7d8;
        case 0x44a7dcu: goto label_44a7dc;
        case 0x44a7e0u: goto label_44a7e0;
        case 0x44a7e4u: goto label_44a7e4;
        case 0x44a7e8u: goto label_44a7e8;
        case 0x44a7ecu: goto label_44a7ec;
        case 0x44a7f0u: goto label_44a7f0;
        case 0x44a7f4u: goto label_44a7f4;
        case 0x44a7f8u: goto label_44a7f8;
        case 0x44a7fcu: goto label_44a7fc;
        case 0x44a800u: goto label_44a800;
        case 0x44a804u: goto label_44a804;
        case 0x44a808u: goto label_44a808;
        case 0x44a80cu: goto label_44a80c;
        case 0x44a810u: goto label_44a810;
        case 0x44a814u: goto label_44a814;
        case 0x44a818u: goto label_44a818;
        case 0x44a81cu: goto label_44a81c;
        case 0x44a820u: goto label_44a820;
        case 0x44a824u: goto label_44a824;
        case 0x44a828u: goto label_44a828;
        case 0x44a82cu: goto label_44a82c;
        case 0x44a830u: goto label_44a830;
        case 0x44a834u: goto label_44a834;
        case 0x44a838u: goto label_44a838;
        case 0x44a83cu: goto label_44a83c;
        case 0x44a840u: goto label_44a840;
        case 0x44a844u: goto label_44a844;
        case 0x44a848u: goto label_44a848;
        case 0x44a84cu: goto label_44a84c;
        case 0x44a850u: goto label_44a850;
        case 0x44a854u: goto label_44a854;
        case 0x44a858u: goto label_44a858;
        case 0x44a85cu: goto label_44a85c;
        case 0x44a860u: goto label_44a860;
        case 0x44a864u: goto label_44a864;
        case 0x44a868u: goto label_44a868;
        case 0x44a86cu: goto label_44a86c;
        case 0x44a870u: goto label_44a870;
        case 0x44a874u: goto label_44a874;
        case 0x44a878u: goto label_44a878;
        case 0x44a87cu: goto label_44a87c;
        case 0x44a880u: goto label_44a880;
        case 0x44a884u: goto label_44a884;
        case 0x44a888u: goto label_44a888;
        case 0x44a88cu: goto label_44a88c;
        case 0x44a890u: goto label_44a890;
        case 0x44a894u: goto label_44a894;
        case 0x44a898u: goto label_44a898;
        case 0x44a89cu: goto label_44a89c;
        case 0x44a8a0u: goto label_44a8a0;
        case 0x44a8a4u: goto label_44a8a4;
        case 0x44a8a8u: goto label_44a8a8;
        case 0x44a8acu: goto label_44a8ac;
        case 0x44a8b0u: goto label_44a8b0;
        case 0x44a8b4u: goto label_44a8b4;
        case 0x44a8b8u: goto label_44a8b8;
        case 0x44a8bcu: goto label_44a8bc;
        case 0x44a8c0u: goto label_44a8c0;
        case 0x44a8c4u: goto label_44a8c4;
        case 0x44a8c8u: goto label_44a8c8;
        case 0x44a8ccu: goto label_44a8cc;
        case 0x44a8d0u: goto label_44a8d0;
        case 0x44a8d4u: goto label_44a8d4;
        case 0x44a8d8u: goto label_44a8d8;
        case 0x44a8dcu: goto label_44a8dc;
        case 0x44a8e0u: goto label_44a8e0;
        case 0x44a8e4u: goto label_44a8e4;
        case 0x44a8e8u: goto label_44a8e8;
        case 0x44a8ecu: goto label_44a8ec;
        case 0x44a8f0u: goto label_44a8f0;
        case 0x44a8f4u: goto label_44a8f4;
        case 0x44a8f8u: goto label_44a8f8;
        case 0x44a8fcu: goto label_44a8fc;
        case 0x44a900u: goto label_44a900;
        case 0x44a904u: goto label_44a904;
        case 0x44a908u: goto label_44a908;
        case 0x44a90cu: goto label_44a90c;
        case 0x44a910u: goto label_44a910;
        case 0x44a914u: goto label_44a914;
        case 0x44a918u: goto label_44a918;
        case 0x44a91cu: goto label_44a91c;
        case 0x44a920u: goto label_44a920;
        case 0x44a924u: goto label_44a924;
        case 0x44a928u: goto label_44a928;
        case 0x44a92cu: goto label_44a92c;
        case 0x44a930u: goto label_44a930;
        case 0x44a934u: goto label_44a934;
        case 0x44a938u: goto label_44a938;
        case 0x44a93cu: goto label_44a93c;
        case 0x44a940u: goto label_44a940;
        case 0x44a944u: goto label_44a944;
        case 0x44a948u: goto label_44a948;
        case 0x44a94cu: goto label_44a94c;
        case 0x44a950u: goto label_44a950;
        case 0x44a954u: goto label_44a954;
        case 0x44a958u: goto label_44a958;
        case 0x44a95cu: goto label_44a95c;
        case 0x44a960u: goto label_44a960;
        case 0x44a964u: goto label_44a964;
        case 0x44a968u: goto label_44a968;
        case 0x44a96cu: goto label_44a96c;
        case 0x44a970u: goto label_44a970;
        case 0x44a974u: goto label_44a974;
        case 0x44a978u: goto label_44a978;
        case 0x44a97cu: goto label_44a97c;
        case 0x44a980u: goto label_44a980;
        case 0x44a984u: goto label_44a984;
        case 0x44a988u: goto label_44a988;
        case 0x44a98cu: goto label_44a98c;
        case 0x44a990u: goto label_44a990;
        case 0x44a994u: goto label_44a994;
        case 0x44a998u: goto label_44a998;
        case 0x44a99cu: goto label_44a99c;
        case 0x44a9a0u: goto label_44a9a0;
        case 0x44a9a4u: goto label_44a9a4;
        case 0x44a9a8u: goto label_44a9a8;
        case 0x44a9acu: goto label_44a9ac;
        case 0x44a9b0u: goto label_44a9b0;
        case 0x44a9b4u: goto label_44a9b4;
        case 0x44a9b8u: goto label_44a9b8;
        case 0x44a9bcu: goto label_44a9bc;
        case 0x44a9c0u: goto label_44a9c0;
        case 0x44a9c4u: goto label_44a9c4;
        case 0x44a9c8u: goto label_44a9c8;
        case 0x44a9ccu: goto label_44a9cc;
        case 0x44a9d0u: goto label_44a9d0;
        case 0x44a9d4u: goto label_44a9d4;
        case 0x44a9d8u: goto label_44a9d8;
        case 0x44a9dcu: goto label_44a9dc;
        case 0x44a9e0u: goto label_44a9e0;
        case 0x44a9e4u: goto label_44a9e4;
        case 0x44a9e8u: goto label_44a9e8;
        case 0x44a9ecu: goto label_44a9ec;
        case 0x44a9f0u: goto label_44a9f0;
        case 0x44a9f4u: goto label_44a9f4;
        case 0x44a9f8u: goto label_44a9f8;
        case 0x44a9fcu: goto label_44a9fc;
        case 0x44aa00u: goto label_44aa00;
        case 0x44aa04u: goto label_44aa04;
        case 0x44aa08u: goto label_44aa08;
        case 0x44aa0cu: goto label_44aa0c;
        case 0x44aa10u: goto label_44aa10;
        case 0x44aa14u: goto label_44aa14;
        case 0x44aa18u: goto label_44aa18;
        case 0x44aa1cu: goto label_44aa1c;
        case 0x44aa20u: goto label_44aa20;
        case 0x44aa24u: goto label_44aa24;
        case 0x44aa28u: goto label_44aa28;
        case 0x44aa2cu: goto label_44aa2c;
        case 0x44aa30u: goto label_44aa30;
        case 0x44aa34u: goto label_44aa34;
        case 0x44aa38u: goto label_44aa38;
        case 0x44aa3cu: goto label_44aa3c;
        case 0x44aa40u: goto label_44aa40;
        case 0x44aa44u: goto label_44aa44;
        case 0x44aa48u: goto label_44aa48;
        case 0x44aa4cu: goto label_44aa4c;
        case 0x44aa50u: goto label_44aa50;
        case 0x44aa54u: goto label_44aa54;
        case 0x44aa58u: goto label_44aa58;
        case 0x44aa5cu: goto label_44aa5c;
        case 0x44aa60u: goto label_44aa60;
        case 0x44aa64u: goto label_44aa64;
        case 0x44aa68u: goto label_44aa68;
        case 0x44aa6cu: goto label_44aa6c;
        case 0x44aa70u: goto label_44aa70;
        case 0x44aa74u: goto label_44aa74;
        case 0x44aa78u: goto label_44aa78;
        case 0x44aa7cu: goto label_44aa7c;
        case 0x44aa80u: goto label_44aa80;
        case 0x44aa84u: goto label_44aa84;
        case 0x44aa88u: goto label_44aa88;
        case 0x44aa8cu: goto label_44aa8c;
        case 0x44aa90u: goto label_44aa90;
        case 0x44aa94u: goto label_44aa94;
        case 0x44aa98u: goto label_44aa98;
        case 0x44aa9cu: goto label_44aa9c;
        case 0x44aaa0u: goto label_44aaa0;
        case 0x44aaa4u: goto label_44aaa4;
        case 0x44aaa8u: goto label_44aaa8;
        case 0x44aaacu: goto label_44aaac;
        case 0x44aab0u: goto label_44aab0;
        case 0x44aab4u: goto label_44aab4;
        case 0x44aab8u: goto label_44aab8;
        case 0x44aabcu: goto label_44aabc;
        case 0x44aac0u: goto label_44aac0;
        case 0x44aac4u: goto label_44aac4;
        case 0x44aac8u: goto label_44aac8;
        case 0x44aaccu: goto label_44aacc;
        case 0x44aad0u: goto label_44aad0;
        case 0x44aad4u: goto label_44aad4;
        case 0x44aad8u: goto label_44aad8;
        case 0x44aadcu: goto label_44aadc;
        case 0x44aae0u: goto label_44aae0;
        case 0x44aae4u: goto label_44aae4;
        case 0x44aae8u: goto label_44aae8;
        case 0x44aaecu: goto label_44aaec;
        case 0x44aaf0u: goto label_44aaf0;
        case 0x44aaf4u: goto label_44aaf4;
        case 0x44aaf8u: goto label_44aaf8;
        case 0x44aafcu: goto label_44aafc;
        case 0x44ab00u: goto label_44ab00;
        case 0x44ab04u: goto label_44ab04;
        case 0x44ab08u: goto label_44ab08;
        case 0x44ab0cu: goto label_44ab0c;
        case 0x44ab10u: goto label_44ab10;
        case 0x44ab14u: goto label_44ab14;
        case 0x44ab18u: goto label_44ab18;
        case 0x44ab1cu: goto label_44ab1c;
        case 0x44ab20u: goto label_44ab20;
        case 0x44ab24u: goto label_44ab24;
        case 0x44ab28u: goto label_44ab28;
        case 0x44ab2cu: goto label_44ab2c;
        case 0x44ab30u: goto label_44ab30;
        case 0x44ab34u: goto label_44ab34;
        case 0x44ab38u: goto label_44ab38;
        case 0x44ab3cu: goto label_44ab3c;
        case 0x44ab40u: goto label_44ab40;
        case 0x44ab44u: goto label_44ab44;
        case 0x44ab48u: goto label_44ab48;
        case 0x44ab4cu: goto label_44ab4c;
        case 0x44ab50u: goto label_44ab50;
        case 0x44ab54u: goto label_44ab54;
        case 0x44ab58u: goto label_44ab58;
        case 0x44ab5cu: goto label_44ab5c;
        case 0x44ab60u: goto label_44ab60;
        case 0x44ab64u: goto label_44ab64;
        case 0x44ab68u: goto label_44ab68;
        case 0x44ab6cu: goto label_44ab6c;
        case 0x44ab70u: goto label_44ab70;
        case 0x44ab74u: goto label_44ab74;
        case 0x44ab78u: goto label_44ab78;
        case 0x44ab7cu: goto label_44ab7c;
        case 0x44ab80u: goto label_44ab80;
        case 0x44ab84u: goto label_44ab84;
        case 0x44ab88u: goto label_44ab88;
        case 0x44ab8cu: goto label_44ab8c;
        case 0x44ab90u: goto label_44ab90;
        case 0x44ab94u: goto label_44ab94;
        case 0x44ab98u: goto label_44ab98;
        case 0x44ab9cu: goto label_44ab9c;
        case 0x44aba0u: goto label_44aba0;
        case 0x44aba4u: goto label_44aba4;
        case 0x44aba8u: goto label_44aba8;
        case 0x44abacu: goto label_44abac;
        case 0x44abb0u: goto label_44abb0;
        case 0x44abb4u: goto label_44abb4;
        case 0x44abb8u: goto label_44abb8;
        case 0x44abbcu: goto label_44abbc;
        case 0x44abc0u: goto label_44abc0;
        case 0x44abc4u: goto label_44abc4;
        case 0x44abc8u: goto label_44abc8;
        case 0x44abccu: goto label_44abcc;
        default: break;
    }

    ctx->pc = 0x44a040u;

label_44a040:
    // 0x44a040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44a044:
    // 0x44a044: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x44a044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44a048:
    // 0x44a048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44a04c:
    // 0x44a04c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44a050:
    // 0x44a050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44a054:
    // 0x44a054: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44a054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44a058:
    // 0x44a058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44a05c:
    // 0x44a05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a060:
    // 0x44a060: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44a064:
    // 0x44a064: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44a068:
    // 0x44a068: 0xc10ca68  jal         func_4329A0
label_44a06c:
    if (ctx->pc == 0x44A06Cu) {
        ctx->pc = 0x44A06Cu;
            // 0x44a06c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x44A070u;
        goto label_44a070;
    }
    ctx->pc = 0x44A068u;
    SET_GPR_U32(ctx, 31, 0x44A070u);
    ctx->pc = 0x44A06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A068u;
            // 0x44a06c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A070u; }
        if (ctx->pc != 0x44A070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A070u; }
        if (ctx->pc != 0x44A070u) { return; }
    }
    ctx->pc = 0x44A070u;
label_44a070:
    // 0x44a070: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44a074:
    // 0x44a074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44a074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44a078:
    // 0x44a078: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x44a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_44a07c:
    // 0x44a07c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44a080:
    // 0x44a080: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44a080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44a084:
    // 0x44a084: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x44a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_44a088:
    // 0x44a088: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x44a088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_44a08c:
    // 0x44a08c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x44a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44a090:
    // 0x44a090: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x44a090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_44a094:
    // 0x44a094: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44a098:
    // 0x44a098: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x44a098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_44a09c:
    // 0x44a09c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x44a09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44a0a0:
    // 0x44a0a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x44a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_44a0a4:
    // 0x44a0a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x44a0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_44a0a8:
    // 0x44a0a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x44a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_44a0ac:
    // 0x44a0ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x44a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_44a0b0:
    // 0x44a0b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x44a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_44a0b4:
    // 0x44a0b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x44a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_44a0b8:
    // 0x44a0b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x44a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_44a0bc:
    // 0x44a0bc: 0xc0582cc  jal         func_160B30
label_44a0c0:
    if (ctx->pc == 0x44A0C0u) {
        ctx->pc = 0x44A0C0u;
            // 0x44a0c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x44A0C4u;
        goto label_44a0c4;
    }
    ctx->pc = 0x44A0BCu;
    SET_GPR_U32(ctx, 31, 0x44A0C4u);
    ctx->pc = 0x44A0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A0BCu;
            // 0x44a0c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A0C4u; }
        if (ctx->pc != 0x44A0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A0C4u; }
        if (ctx->pc != 0x44A0C4u) { return; }
    }
    ctx->pc = 0x44A0C4u;
label_44a0c4:
    // 0x44a0c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44a0c8:
    // 0x44a0c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x44a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_44a0cc:
    // 0x44a0cc: 0x2463d7c0  addiu       $v1, $v1, -0x2840
    ctx->pc = 0x44a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956992));
label_44a0d0:
    // 0x44a0d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x44a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_44a0d4:
    // 0x44a0d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x44a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_44a0d8:
    // 0x44a0d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44a0dc:
    // 0x44a0dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44a0e0:
    // 0x44a0e0: 0xac447540  sw          $a0, 0x7540($v0)
    ctx->pc = 0x44a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30016), GPR_U32(ctx, 4));
label_44a0e4:
    // 0x44a0e4: 0x2463d7d0  addiu       $v1, $v1, -0x2830
    ctx->pc = 0x44a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957008));
label_44a0e8:
    // 0x44a0e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44a0ec:
    // 0x44a0ec: 0x2442d808  addiu       $v0, $v0, -0x27F8
    ctx->pc = 0x44a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957064));
label_44a0f0:
    // 0x44a0f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44a0f4:
    // 0x44a0f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x44a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_44a0f8:
    // 0x44a0f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x44a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_44a0fc:
    // 0x44a0fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x44a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_44a100:
    // 0x44a100: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x44a100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_44a104:
    // 0x44a104: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x44a104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_44a108:
    // 0x44a108: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x44a108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_44a10c:
    // 0x44a10c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x44a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_44a110:
    // 0x44a110: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x44a110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_44a114:
    // 0x44a114: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x44a114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_44a118:
    // 0x44a118: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x44a118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_44a11c:
    // 0x44a11c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x44a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_44a120:
    // 0x44a120: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x44a120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44a124:
    // 0x44a124: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_44a128:
    if (ctx->pc == 0x44A128u) {
        ctx->pc = 0x44A12Cu;
        goto label_44a12c;
    }
    ctx->pc = 0x44A124u;
    {
        const bool branch_taken_0x44a124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a124) {
            ctx->pc = 0x44A1B8u;
            goto label_44a1b8;
        }
    }
    ctx->pc = 0x44A12Cu;
label_44a12c:
    // 0x44a12c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x44a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_44a130:
    // 0x44a130: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x44a130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_44a134:
    // 0x44a134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44a134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44a138:
    // 0x44a138: 0xc040138  jal         func_1004E0
label_44a13c:
    if (ctx->pc == 0x44A13Cu) {
        ctx->pc = 0x44A13Cu;
            // 0x44a13c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x44A140u;
        goto label_44a140;
    }
    ctx->pc = 0x44A138u;
    SET_GPR_U32(ctx, 31, 0x44A140u);
    ctx->pc = 0x44A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A138u;
            // 0x44a13c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A140u; }
        if (ctx->pc != 0x44A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A140u; }
        if (ctx->pc != 0x44A140u) { return; }
    }
    ctx->pc = 0x44A140u;
label_44a140:
    // 0x44a140: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44a140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44a144:
    // 0x44a144: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44a144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_44a148:
    // 0x44a148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44a14c:
    // 0x44a14c: 0x24a5a1e0  addiu       $a1, $a1, -0x5E20
    ctx->pc = 0x44a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943200));
label_44a150:
    // 0x44a150: 0x24c69660  addiu       $a2, $a2, -0x69A0
    ctx->pc = 0x44a150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940256));
label_44a154:
    // 0x44a154: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x44a154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_44a158:
    // 0x44a158: 0xc040840  jal         func_102100
label_44a15c:
    if (ctx->pc == 0x44A15Cu) {
        ctx->pc = 0x44A15Cu;
            // 0x44a15c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A160u;
        goto label_44a160;
    }
    ctx->pc = 0x44A158u;
    SET_GPR_U32(ctx, 31, 0x44A160u);
    ctx->pc = 0x44A15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A158u;
            // 0x44a15c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A160u; }
        if (ctx->pc != 0x44A160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A160u; }
        if (ctx->pc != 0x44A160u) { return; }
    }
    ctx->pc = 0x44A160u;
label_44a160:
    // 0x44a160: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x44a160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_44a164:
    // 0x44a164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44a164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44a168:
    // 0x44a168: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x44a168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_44a16c:
    // 0x44a16c: 0xc0788fc  jal         func_1E23F0
label_44a170:
    if (ctx->pc == 0x44A170u) {
        ctx->pc = 0x44A170u;
            // 0x44a170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A174u;
        goto label_44a174;
    }
    ctx->pc = 0x44A16Cu;
    SET_GPR_U32(ctx, 31, 0x44A174u);
    ctx->pc = 0x44A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A16Cu;
            // 0x44a170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A174u; }
        if (ctx->pc != 0x44A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A174u; }
        if (ctx->pc != 0x44A174u) { return; }
    }
    ctx->pc = 0x44A174u;
label_44a174:
    // 0x44a174: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44a178:
    // 0x44a178: 0xc0788fc  jal         func_1E23F0
label_44a17c:
    if (ctx->pc == 0x44A17Cu) {
        ctx->pc = 0x44A17Cu;
            // 0x44a17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A180u;
        goto label_44a180;
    }
    ctx->pc = 0x44A178u;
    SET_GPR_U32(ctx, 31, 0x44A180u);
    ctx->pc = 0x44A17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A178u;
            // 0x44a17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A180u; }
        if (ctx->pc != 0x44A180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A180u; }
        if (ctx->pc != 0x44A180u) { return; }
    }
    ctx->pc = 0x44A180u;
label_44a180:
    // 0x44a180: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44a180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a184:
    // 0x44a184: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x44a184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_44a188:
    // 0x44a188: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44a18c:
    // 0x44a18c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x44a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_44a190:
    // 0x44a190: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44a190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a194:
    // 0x44a194: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x44a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_44a198:
    // 0x44a198: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x44a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_44a19c:
    // 0x44a19c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44a1a0:
    // 0x44a1a0: 0xc0a997c  jal         func_2A65F0
label_44a1a4:
    if (ctx->pc == 0x44A1A4u) {
        ctx->pc = 0x44A1A4u;
            // 0x44a1a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x44A1A8u;
        goto label_44a1a8;
    }
    ctx->pc = 0x44A1A0u;
    SET_GPR_U32(ctx, 31, 0x44A1A8u);
    ctx->pc = 0x44A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A1A0u;
            // 0x44a1a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1A8u; }
        if (ctx->pc != 0x44A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1A8u; }
        if (ctx->pc != 0x44A1A8u) { return; }
    }
    ctx->pc = 0x44A1A8u;
label_44a1a8:
    // 0x44a1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44a1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_44a1ac:
    // 0x44a1ac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x44a1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44a1b0:
    // 0x44a1b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_44a1b4:
    if (ctx->pc == 0x44A1B4u) {
        ctx->pc = 0x44A1B4u;
            // 0x44a1b4: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x44A1B8u;
        goto label_44a1b8;
    }
    ctx->pc = 0x44A1B0u;
    {
        const bool branch_taken_0x44a1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A1B0u;
            // 0x44a1b4: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1b0) {
            ctx->pc = 0x44A184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44a184;
        }
    }
    ctx->pc = 0x44A1B8u;
label_44a1b8:
    // 0x44a1b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44a1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44a1bc:
    // 0x44a1bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44a1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44a1c0:
    // 0x44a1c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44a1c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44a1c4:
    // 0x44a1c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44a1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44a1c8:
    // 0x44a1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44a1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44a1cc:
    // 0x44a1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a1d0:
    // 0x44a1d0: 0x3e00008  jr          $ra
label_44a1d4:
    if (ctx->pc == 0x44A1D4u) {
        ctx->pc = 0x44A1D4u;
            // 0x44a1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44A1D8u;
        goto label_44a1d8;
    }
    ctx->pc = 0x44A1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A1D0u;
            // 0x44a1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A1D8u;
label_44a1d8:
    // 0x44a1d8: 0x0  nop
    ctx->pc = 0x44a1d8u;
    // NOP
label_44a1dc:
    // 0x44a1dc: 0x0  nop
    ctx->pc = 0x44a1dcu;
    // NOP
label_44a1e0:
    // 0x44a1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44a1e4:
    // 0x44a1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44a1e8:
    // 0x44a1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a1ec:
    // 0x44a1ec: 0xc0aeebc  jal         func_2BBAF0
label_44a1f0:
    if (ctx->pc == 0x44A1F0u) {
        ctx->pc = 0x44A1F0u;
            // 0x44a1f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A1F4u;
        goto label_44a1f4;
    }
    ctx->pc = 0x44A1ECu;
    SET_GPR_U32(ctx, 31, 0x44A1F4u);
    ctx->pc = 0x44A1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A1ECu;
            // 0x44a1f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1F4u; }
        if (ctx->pc != 0x44A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1F4u; }
        if (ctx->pc != 0x44A1F4u) { return; }
    }
    ctx->pc = 0x44A1F4u;
label_44a1f4:
    // 0x44a1f4: 0xc0aeeb4  jal         func_2BBAD0
label_44a1f8:
    if (ctx->pc == 0x44A1F8u) {
        ctx->pc = 0x44A1F8u;
            // 0x44a1f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x44A1FCu;
        goto label_44a1fc;
    }
    ctx->pc = 0x44A1F4u;
    SET_GPR_U32(ctx, 31, 0x44A1FCu);
    ctx->pc = 0x44A1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A1F4u;
            // 0x44a1f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1FCu; }
        if (ctx->pc != 0x44A1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A1FCu; }
        if (ctx->pc != 0x44A1FCu) { return; }
    }
    ctx->pc = 0x44A1FCu;
label_44a1fc:
    // 0x44a1fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44a200:
    // 0x44a200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44a204:
    // 0x44a204: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x44a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_44a208:
    // 0x44a208: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x44a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_44a20c:
    // 0x44a20c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44a210:
    // 0x44a210: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x44a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_44a214:
    // 0x44a214: 0xc0aeea4  jal         func_2BBA90
label_44a218:
    if (ctx->pc == 0x44A218u) {
        ctx->pc = 0x44A218u;
            // 0x44a218: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x44A21Cu;
        goto label_44a21c;
    }
    ctx->pc = 0x44A214u;
    SET_GPR_U32(ctx, 31, 0x44A21Cu);
    ctx->pc = 0x44A218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A214u;
            // 0x44a218: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A21Cu; }
        if (ctx->pc != 0x44A21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A21Cu; }
        if (ctx->pc != 0x44A21Cu) { return; }
    }
    ctx->pc = 0x44A21Cu;
label_44a21c:
    // 0x44a21c: 0xc0aee8c  jal         func_2BBA30
label_44a220:
    if (ctx->pc == 0x44A220u) {
        ctx->pc = 0x44A220u;
            // 0x44a220: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x44A224u;
        goto label_44a224;
    }
    ctx->pc = 0x44A21Cu;
    SET_GPR_U32(ctx, 31, 0x44A224u);
    ctx->pc = 0x44A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A21Cu;
            // 0x44a220: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A224u; }
        if (ctx->pc != 0x44A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A224u; }
        if (ctx->pc != 0x44A224u) { return; }
    }
    ctx->pc = 0x44A224u;
label_44a224:
    // 0x44a224: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x44a224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_44a228:
    // 0x44a228: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x44a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_44a22c:
    // 0x44a22c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x44a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_44a230:
    // 0x44a230: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x44a230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_44a234:
    // 0x44a234: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x44a234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_44a238:
    // 0x44a238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a23c:
    // 0x44a23c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x44a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_44a240:
    // 0x44a240: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x44a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44a244:
    // 0x44a244: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x44a244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_44a248:
    // 0x44a248: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x44a248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_44a24c:
    // 0x44a24c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x44a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_44a250:
    // 0x44a250: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x44a250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_44a254:
    // 0x44a254: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x44a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_44a258:
    // 0x44a258: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x44a258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_44a25c:
    // 0x44a25c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x44a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_44a260:
    // 0x44a260: 0xc0775b8  jal         func_1DD6E0
label_44a264:
    if (ctx->pc == 0x44A264u) {
        ctx->pc = 0x44A264u;
            // 0x44a264: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44A268u;
        goto label_44a268;
    }
    ctx->pc = 0x44A260u;
    SET_GPR_U32(ctx, 31, 0x44A268u);
    ctx->pc = 0x44A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A260u;
            // 0x44a264: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A268u; }
        if (ctx->pc != 0x44A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A268u; }
        if (ctx->pc != 0x44A268u) { return; }
    }
    ctx->pc = 0x44A268u;
label_44a268:
    // 0x44a268: 0xc077314  jal         func_1DCC50
label_44a26c:
    if (ctx->pc == 0x44A26Cu) {
        ctx->pc = 0x44A26Cu;
            // 0x44a26c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x44A270u;
        goto label_44a270;
    }
    ctx->pc = 0x44A268u;
    SET_GPR_U32(ctx, 31, 0x44A270u);
    ctx->pc = 0x44A26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A268u;
            // 0x44a26c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A270u; }
        if (ctx->pc != 0x44A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A270u; }
        if (ctx->pc != 0x44A270u) { return; }
    }
    ctx->pc = 0x44A270u;
label_44a270:
    // 0x44a270: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x44a270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_44a274:
    // 0x44a274: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x44a274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_44a278:
    // 0x44a278: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x44a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_44a27c:
    // 0x44a27c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x44a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_44a280:
    // 0x44a280: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x44a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44a284:
    // 0x44a284: 0x2484d720  addiu       $a0, $a0, -0x28E0
    ctx->pc = 0x44a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956832));
label_44a288:
    // 0x44a288: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x44a288u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_44a28c:
    // 0x44a28c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44a290:
    // 0x44a290: 0x2463d760  addiu       $v1, $v1, -0x28A0
    ctx->pc = 0x44a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956896));
label_44a294:
    // 0x44a294: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x44a294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_44a298:
    // 0x44a298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44a298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a29c:
    // 0x44a29c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x44a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_44a2a0:
    // 0x44a2a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x44a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_44a2a4:
    // 0x44a2a4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x44a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_44a2a8:
    // 0x44a2a8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x44a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_44a2ac:
    // 0x44a2ac: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x44a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_44a2b0:
    // 0x44a2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44a2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44a2b4:
    // 0x44a2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a2b8:
    // 0x44a2b8: 0x3e00008  jr          $ra
label_44a2bc:
    if (ctx->pc == 0x44A2BCu) {
        ctx->pc = 0x44A2BCu;
            // 0x44a2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44A2C0u;
        goto label_44a2c0;
    }
    ctx->pc = 0x44A2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A2B8u;
            // 0x44a2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A2C0u;
label_44a2c0:
    // 0x44a2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44a2c4:
    // 0x44a2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44a2c8:
    // 0x44a2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a2cc:
    // 0x44a2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44a2d0:
    // 0x44a2d0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x44a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_44a2d4:
    // 0x44a2d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44a2d8:
    if (ctx->pc == 0x44A2D8u) {
        ctx->pc = 0x44A2D8u;
            // 0x44a2d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x44A2DCu;
        goto label_44a2dc;
    }
    ctx->pc = 0x44A2D4u;
    {
        const bool branch_taken_0x44a2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a2d4) {
            ctx->pc = 0x44A2D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A2D4u;
            // 0x44a2d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A2F0u;
            goto label_44a2f0;
        }
    }
    ctx->pc = 0x44A2DCu;
label_44a2dc:
    // 0x44a2dc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x44a2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_44a2e0:
    // 0x44a2e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44a2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44a2e4:
    // 0x44a2e4: 0x320f809  jalr        $t9
label_44a2e8:
    if (ctx->pc == 0x44A2E8u) {
        ctx->pc = 0x44A2E8u;
            // 0x44a2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44A2ECu;
        goto label_44a2ec;
    }
    ctx->pc = 0x44A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44A2ECu);
        ctx->pc = 0x44A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A2E4u;
            // 0x44a2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44A2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44A2ECu; }
            if (ctx->pc != 0x44A2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x44A2ECu;
label_44a2ec:
    // 0x44a2ec: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x44a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_44a2f0:
    // 0x44a2f0: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x44a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_44a2f4:
    // 0x44a2f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44a2f8:
    if (ctx->pc == 0x44A2F8u) {
        ctx->pc = 0x44A2F8u;
            // 0x44a2f8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x44A2FCu;
        goto label_44a2fc;
    }
    ctx->pc = 0x44A2F4u;
    {
        const bool branch_taken_0x44a2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a2f4) {
            ctx->pc = 0x44A2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A2F4u;
            // 0x44a2f8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A310u;
            goto label_44a310;
        }
    }
    ctx->pc = 0x44A2FCu;
label_44a2fc:
    // 0x44a2fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44a2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44a300:
    // 0x44a300: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44a300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44a304:
    // 0x44a304: 0x320f809  jalr        $t9
label_44a308:
    if (ctx->pc == 0x44A308u) {
        ctx->pc = 0x44A308u;
            // 0x44a308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44A30Cu;
        goto label_44a30c;
    }
    ctx->pc = 0x44A304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44A30Cu);
        ctx->pc = 0x44A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A304u;
            // 0x44a308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44A30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44A30Cu; }
            if (ctx->pc != 0x44A30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44A30Cu;
label_44a30c:
    // 0x44a30c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x44a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_44a310:
    // 0x44a310: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x44a310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_44a314:
    // 0x44a314: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44a318:
    if (ctx->pc == 0x44A318u) {
        ctx->pc = 0x44A318u;
            // 0x44a318: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44A31Cu;
        goto label_44a31c;
    }
    ctx->pc = 0x44A314u;
    {
        const bool branch_taken_0x44a314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a314) {
            ctx->pc = 0x44A318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A314u;
            // 0x44a318: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A330u;
            goto label_44a330;
        }
    }
    ctx->pc = 0x44A31Cu;
label_44a31c:
    // 0x44a31c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44a31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44a320:
    // 0x44a320: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44a320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44a324:
    // 0x44a324: 0x320f809  jalr        $t9
label_44a328:
    if (ctx->pc == 0x44A328u) {
        ctx->pc = 0x44A328u;
            // 0x44a328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44A32Cu;
        goto label_44a32c;
    }
    ctx->pc = 0x44A324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44A32Cu);
        ctx->pc = 0x44A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A324u;
            // 0x44a328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44A32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44A32Cu; }
            if (ctx->pc != 0x44A32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44A32Cu;
label_44a32c:
    // 0x44a32c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_44a330:
    // 0x44a330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44a330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44a334:
    // 0x44a334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a338:
    // 0x44a338: 0x3e00008  jr          $ra
label_44a33c:
    if (ctx->pc == 0x44A33Cu) {
        ctx->pc = 0x44A33Cu;
            // 0x44a33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44A340u;
        goto label_44a340;
    }
    ctx->pc = 0x44A338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A338u;
            // 0x44a33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A340u;
label_44a340:
    // 0x44a340: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x44a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_44a344:
    // 0x44a344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44a348:
    // 0x44a348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44a34c:
    // 0x44a34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44a350:
    // 0x44a350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44a350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44a354:
    // 0x44a354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a358:
    // 0x44a358: 0xc0892d0  jal         func_224B40
label_44a35c:
    if (ctx->pc == 0x44A35Cu) {
        ctx->pc = 0x44A35Cu;
            // 0x44a35c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44A360u;
        goto label_44a360;
    }
    ctx->pc = 0x44A358u;
    SET_GPR_U32(ctx, 31, 0x44A360u);
    ctx->pc = 0x44A35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A358u;
            // 0x44a35c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A360u; }
        if (ctx->pc != 0x44A360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A360u; }
        if (ctx->pc != 0x44A360u) { return; }
    }
    ctx->pc = 0x44A360u;
label_44a360:
    // 0x44a360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44a360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44a364:
    // 0x44a364: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x44a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_44a368:
    // 0x44a368: 0x8c427540  lw          $v0, 0x7540($v0)
    ctx->pc = 0x44a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30016)));
label_44a36c:
    // 0x44a36c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x44a36cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_44a370:
    // 0x44a370: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x44a370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_44a374:
    // 0x44a374: 0xc0b6e68  jal         func_2DB9A0
label_44a378:
    if (ctx->pc == 0x44A378u) {
        ctx->pc = 0x44A378u;
            // 0x44a378: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x44A37Cu;
        goto label_44a37c;
    }
    ctx->pc = 0x44A374u;
    SET_GPR_U32(ctx, 31, 0x44A37Cu);
    ctx->pc = 0x44A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A374u;
            // 0x44a378: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A37Cu; }
        if (ctx->pc != 0x44A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A37Cu; }
        if (ctx->pc != 0x44A37Cu) { return; }
    }
    ctx->pc = 0x44A37Cu;
label_44a37c:
    // 0x44a37c: 0xc0b6dac  jal         func_2DB6B0
label_44a380:
    if (ctx->pc == 0x44A380u) {
        ctx->pc = 0x44A380u;
            // 0x44a380: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x44A384u;
        goto label_44a384;
    }
    ctx->pc = 0x44A37Cu;
    SET_GPR_U32(ctx, 31, 0x44A384u);
    ctx->pc = 0x44A380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A37Cu;
            // 0x44a380: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A384u; }
        if (ctx->pc != 0x44A384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A384u; }
        if (ctx->pc != 0x44A384u) { return; }
    }
    ctx->pc = 0x44A384u;
label_44a384:
    // 0x44a384: 0xc0cac94  jal         func_32B250
label_44a388:
    if (ctx->pc == 0x44A388u) {
        ctx->pc = 0x44A388u;
            // 0x44a388: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x44A38Cu;
        goto label_44a38c;
    }
    ctx->pc = 0x44A384u;
    SET_GPR_U32(ctx, 31, 0x44A38Cu);
    ctx->pc = 0x44A388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A384u;
            // 0x44a388: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A38Cu; }
        if (ctx->pc != 0x44A38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A38Cu; }
        if (ctx->pc != 0x44A38Cu) { return; }
    }
    ctx->pc = 0x44A38Cu;
label_44a38c:
    // 0x44a38c: 0xc0cac84  jal         func_32B210
label_44a390:
    if (ctx->pc == 0x44A390u) {
        ctx->pc = 0x44A390u;
            // 0x44a390: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x44A394u;
        goto label_44a394;
    }
    ctx->pc = 0x44A38Cu;
    SET_GPR_U32(ctx, 31, 0x44A394u);
    ctx->pc = 0x44A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A38Cu;
            // 0x44a390: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A394u; }
        if (ctx->pc != 0x44A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A394u; }
        if (ctx->pc != 0x44A394u) { return; }
    }
    ctx->pc = 0x44A394u;
label_44a394:
    // 0x44a394: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x44a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_44a398:
    // 0x44a398: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x44a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44a39c:
    // 0x44a39c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x44a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_44a3a0:
    // 0x44a3a0: 0xc0a562c  jal         func_2958B0
label_44a3a4:
    if (ctx->pc == 0x44A3A4u) {
        ctx->pc = 0x44A3A4u;
            // 0x44a3a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x44A3A8u;
        goto label_44a3a8;
    }
    ctx->pc = 0x44A3A0u;
    SET_GPR_U32(ctx, 31, 0x44A3A8u);
    ctx->pc = 0x44A3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A3A0u;
            // 0x44a3a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A3A8u; }
        if (ctx->pc != 0x44A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A3A8u; }
        if (ctx->pc != 0x44A3A8u) { return; }
    }
    ctx->pc = 0x44A3A8u;
label_44a3a8:
    // 0x44a3a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44a3ac:
    // 0x44a3ac: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x44a3acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_44a3b0:
    // 0x44a3b0: 0x8c437540  lw          $v1, 0x7540($v0)
    ctx->pc = 0x44a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30016)));
label_44a3b4:
    // 0x44a3b4: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x44a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a3b8:
    // 0x44a3b8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x44a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a3bc:
    // 0x44a3bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x44a3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a3c0:
    // 0x44a3c0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x44a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a3c4:
    // 0x44a3c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x44a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44a3c8:
    // 0x44a3c8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x44a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_44a3cc:
    // 0x44a3cc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x44a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_44a3d0:
    // 0x44a3d0: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x44a3d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_44a3d4:
    // 0x44a3d4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x44a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44a3d8:
    // 0x44a3d8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x44a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_44a3dc:
    // 0x44a3dc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x44a3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_44a3e0:
    // 0x44a3e0: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x44a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
label_44a3e4:
    // 0x44a3e4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x44a3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_44a3e8:
    // 0x44a3e8: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x44a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_44a3ec:
    // 0x44a3ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44a3f0:
    // 0x44a3f0: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x44a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_44a3f4:
    // 0x44a3f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44a3f8:
    // 0x44a3f8: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x44a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_44a3fc:
    // 0x44a3fc: 0xc7a700a0  lwc1        $f7, 0xA0($sp)
    ctx->pc = 0x44a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_44a400:
    // 0x44a400: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x44a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_44a404:
    // 0x44a404: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x44a404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_44a408:
    // 0x44a408: 0xafaa0178  sw          $t2, 0x178($sp)
    ctx->pc = 0x44a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 10));
label_44a40c:
    // 0x44a40c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x44a40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_44a410:
    // 0x44a410: 0xa3a90180  sb          $t1, 0x180($sp)
    ctx->pc = 0x44a410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 9));
label_44a414:
    // 0x44a414: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x44a414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_44a418:
    // 0x44a418: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x44a418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_44a41c:
    // 0x44a41c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x44a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a420:
    // 0x44a420: 0xa3a70182  sb          $a3, 0x182($sp)
    ctx->pc = 0x44a420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 7));
label_44a424:
    // 0x44a424: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x44a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a428:
    // 0x44a428: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x44a428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_44a42c:
    // 0x44a42c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x44a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a430:
    // 0x44a430: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x44a430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_44a434:
    // 0x44a434: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x44a434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_44a438:
    // 0x44a438: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x44a438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_44a43c:
    // 0x44a43c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x44a43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_44a440:
    // 0x44a440: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x44a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a444:
    // 0x44a444: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x44a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a448:
    // 0x44a448: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x44a448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a44c:
    // 0x44a44c: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x44a44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_44a450:
    // 0x44a450: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x44a450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_44a454:
    // 0x44a454: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x44a454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_44a458:
    // 0x44a458: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x44a458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_44a45c:
    // 0x44a45c: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x44a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_44a460:
    // 0x44a460: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x44a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44a464:
    // 0x44a464: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x44a464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a468:
    // 0x44a468: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x44a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a46c:
    // 0x44a46c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x44a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a470:
    // 0x44a470: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x44a470u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_44a474:
    // 0x44a474: 0xe7a900e4  swc1        $f9, 0xE4($sp)
    ctx->pc = 0x44a474u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_44a478:
    // 0x44a478: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x44a478u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_44a47c:
    // 0x44a47c: 0xe7a70120  swc1        $f7, 0x120($sp)
    ctx->pc = 0x44a47cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_44a480:
    // 0x44a480: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x44a480u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_44a484:
    // 0x44a484: 0xe7a50128  swc1        $f5, 0x128($sp)
    ctx->pc = 0x44a484u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_44a488:
    // 0x44a488: 0xe7a4012c  swc1        $f4, 0x12C($sp)
    ctx->pc = 0x44a488u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_44a48c:
    // 0x44a48c: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x44a48cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_44a490:
    // 0x44a490: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x44a490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_44a494:
    // 0x44a494: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x44a494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_44a498:
    // 0x44a498: 0xc0a7a88  jal         func_29EA20
label_44a49c:
    if (ctx->pc == 0x44A49Cu) {
        ctx->pc = 0x44A49Cu;
            // 0x44a49c: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x44A4A0u;
        goto label_44a4a0;
    }
    ctx->pc = 0x44A498u;
    SET_GPR_U32(ctx, 31, 0x44A4A0u);
    ctx->pc = 0x44A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A498u;
            // 0x44a49c: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4A0u; }
        if (ctx->pc != 0x44A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4A0u; }
        if (ctx->pc != 0x44A4A0u) { return; }
    }
    ctx->pc = 0x44A4A0u;
label_44a4a0:
    // 0x44a4a0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x44a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44a4a4:
    // 0x44a4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44a4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44a4a8:
    // 0x44a4a8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_44a4ac:
    if (ctx->pc == 0x44A4ACu) {
        ctx->pc = 0x44A4ACu;
            // 0x44a4ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44A4B0u;
        goto label_44a4b0;
    }
    ctx->pc = 0x44A4A8u;
    {
        const bool branch_taken_0x44a4a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A4A8u;
            // 0x44a4ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a4a8) {
            ctx->pc = 0x44A4F8u;
            goto label_44a4f8;
        }
    }
    ctx->pc = 0x44A4B0u;
label_44a4b0:
    // 0x44a4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a4b4:
    // 0x44a4b4: 0xc088ef4  jal         func_223BD0
label_44a4b8:
    if (ctx->pc == 0x44A4B8u) {
        ctx->pc = 0x44A4B8u;
            // 0x44a4b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x44A4BCu;
        goto label_44a4bc;
    }
    ctx->pc = 0x44A4B4u;
    SET_GPR_U32(ctx, 31, 0x44A4BCu);
    ctx->pc = 0x44A4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A4B4u;
            // 0x44a4b8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4BCu; }
        if (ctx->pc != 0x44A4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4BCu; }
        if (ctx->pc != 0x44A4BCu) { return; }
    }
    ctx->pc = 0x44A4BCu;
label_44a4bc:
    // 0x44a4bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44a4c0:
    // 0x44a4c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44a4c4:
    // 0x44a4c4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x44a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_44a4c8:
    // 0x44a4c8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x44a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_44a4cc:
    // 0x44a4cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44a4d0:
    // 0x44a4d0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x44a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_44a4d4:
    // 0x44a4d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44a4d8:
    // 0x44a4d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44a4dc:
    // 0x44a4dc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x44a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_44a4e0:
    // 0x44a4e0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x44a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_44a4e4:
    // 0x44a4e4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x44a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_44a4e8:
    // 0x44a4e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44a4ec:
    // 0x44a4ec: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x44a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44a4f0:
    // 0x44a4f0: 0xc088b38  jal         func_222CE0
label_44a4f4:
    if (ctx->pc == 0x44A4F4u) {
        ctx->pc = 0x44A4F4u;
            // 0x44a4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A4F8u;
        goto label_44a4f8;
    }
    ctx->pc = 0x44A4F0u;
    SET_GPR_U32(ctx, 31, 0x44A4F8u);
    ctx->pc = 0x44A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A4F0u;
            // 0x44a4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4F8u; }
        if (ctx->pc != 0x44A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A4F8u; }
        if (ctx->pc != 0x44A4F8u) { return; }
    }
    ctx->pc = 0x44A4F8u;
label_44a4f8:
    // 0x44a4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a4fc:
    // 0x44a4fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x44a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44a500:
    // 0x44a500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44a500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a504:
    // 0x44a504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44a504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a508:
    // 0x44a508: 0xc08914c  jal         func_224530
label_44a50c:
    if (ctx->pc == 0x44A50Cu) {
        ctx->pc = 0x44A50Cu;
            // 0x44a50c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x44A510u;
        goto label_44a510;
    }
    ctx->pc = 0x44A508u;
    SET_GPR_U32(ctx, 31, 0x44A510u);
    ctx->pc = 0x44A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A508u;
            // 0x44a50c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A510u; }
        if (ctx->pc != 0x44A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A510u; }
        if (ctx->pc != 0x44A510u) { return; }
    }
    ctx->pc = 0x44A510u;
label_44a510:
    // 0x44a510: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x44a510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a514:
    // 0x44a514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a518:
    // 0x44a518: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x44a518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a51c:
    // 0x44a51c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x44a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44a520:
    // 0x44a520: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x44a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a524:
    // 0x44a524: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x44a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_44a528:
    // 0x44a528: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x44a528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_44a52c:
    // 0x44a52c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x44a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_44a530:
    // 0x44a530: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x44a530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_44a534:
    // 0x44a534: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x44a534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_44a538:
    // 0x44a538: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x44a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44a53c:
    // 0x44a53c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x44a53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a540:
    // 0x44a540: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x44a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a544:
    // 0x44a544: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x44a544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a548:
    // 0x44a548: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x44a548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_44a54c:
    // 0x44a54c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x44a54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_44a550:
    // 0x44a550: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x44a550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_44a554:
    // 0x44a554: 0xc0892b0  jal         func_224AC0
label_44a558:
    if (ctx->pc == 0x44A558u) {
        ctx->pc = 0x44A558u;
            // 0x44a558: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x44A55Cu;
        goto label_44a55c;
    }
    ctx->pc = 0x44A554u;
    SET_GPR_U32(ctx, 31, 0x44A55Cu);
    ctx->pc = 0x44A558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A554u;
            // 0x44a558: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A55Cu; }
        if (ctx->pc != 0x44A55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A55Cu; }
        if (ctx->pc != 0x44A55Cu) { return; }
    }
    ctx->pc = 0x44A55Cu;
label_44a55c:
    // 0x44a55c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x44a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_44a560:
    // 0x44a560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a564:
    // 0x44a564: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x44a564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_44a568:
    // 0x44a568: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x44a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_44a56c:
    // 0x44a56c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x44a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_44a570:
    // 0x44a570: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x44a570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_44a574:
    // 0x44a574: 0xc0891d8  jal         func_224760
label_44a578:
    if (ctx->pc == 0x44A578u) {
        ctx->pc = 0x44A578u;
            // 0x44a578: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x44A57Cu;
        goto label_44a57c;
    }
    ctx->pc = 0x44A574u;
    SET_GPR_U32(ctx, 31, 0x44A57Cu);
    ctx->pc = 0x44A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A574u;
            // 0x44a578: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A57Cu; }
        if (ctx->pc != 0x44A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A57Cu; }
        if (ctx->pc != 0x44A57Cu) { return; }
    }
    ctx->pc = 0x44A57Cu;
label_44a57c:
    // 0x44a57c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44a580:
    // 0x44a580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a584:
    // 0x44a584: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44a588:
    // 0x44a588: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44a588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44a58c:
    // 0x44a58c: 0xc08c164  jal         func_230590
label_44a590:
    if (ctx->pc == 0x44A590u) {
        ctx->pc = 0x44A590u;
            // 0x44a590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44A594u;
        goto label_44a594;
    }
    ctx->pc = 0x44A58Cu;
    SET_GPR_U32(ctx, 31, 0x44A594u);
    ctx->pc = 0x44A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A58Cu;
            // 0x44a590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A594u; }
        if (ctx->pc != 0x44A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A594u; }
        if (ctx->pc != 0x44A594u) { return; }
    }
    ctx->pc = 0x44A594u;
label_44a594:
    // 0x44a594: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x44a594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_44a598:
    // 0x44a598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44a59c:
    // 0x44a59c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44a5a0:
    // 0x44a5a0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x44a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44a5a4:
    // 0x44a5a4: 0xc0a7a88  jal         func_29EA20
label_44a5a8:
    if (ctx->pc == 0x44A5A8u) {
        ctx->pc = 0x44A5A8u;
            // 0x44a5a8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x44A5ACu;
        goto label_44a5ac;
    }
    ctx->pc = 0x44A5A4u;
    SET_GPR_U32(ctx, 31, 0x44A5ACu);
    ctx->pc = 0x44A5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5A4u;
            // 0x44a5a8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5ACu; }
        if (ctx->pc != 0x44A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5ACu; }
        if (ctx->pc != 0x44A5ACu) { return; }
    }
    ctx->pc = 0x44A5ACu;
label_44a5ac:
    // 0x44a5ac: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x44a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44a5b0:
    // 0x44a5b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44a5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44a5b4:
    // 0x44a5b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_44a5b8:
    if (ctx->pc == 0x44A5B8u) {
        ctx->pc = 0x44A5B8u;
            // 0x44a5b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44A5BCu;
        goto label_44a5bc;
    }
    ctx->pc = 0x44A5B4u;
    {
        const bool branch_taken_0x44a5b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5B4u;
            // 0x44a5b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a5b4) {
            ctx->pc = 0x44A5D8u;
            goto label_44a5d8;
        }
    }
    ctx->pc = 0x44A5BCu;
label_44a5bc:
    // 0x44a5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44a5c0:
    // 0x44a5c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44a5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44a5c4:
    // 0x44a5c4: 0xc0869d0  jal         func_21A740
label_44a5c8:
    if (ctx->pc == 0x44A5C8u) {
        ctx->pc = 0x44A5C8u;
            // 0x44a5c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A5CCu;
        goto label_44a5cc;
    }
    ctx->pc = 0x44A5C4u;
    SET_GPR_U32(ctx, 31, 0x44A5CCu);
    ctx->pc = 0x44A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5C4u;
            // 0x44a5c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5CCu; }
        if (ctx->pc != 0x44A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5CCu; }
        if (ctx->pc != 0x44A5CCu) { return; }
    }
    ctx->pc = 0x44A5CCu;
label_44a5cc:
    // 0x44a5cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44a5d0:
    // 0x44a5d0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x44a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_44a5d4:
    // 0x44a5d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x44a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_44a5d8:
    // 0x44a5d8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x44a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_44a5dc:
    // 0x44a5dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44a5e0:
    // 0x44a5e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44a5e4:
    // 0x44a5e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44a5e8:
    // 0x44a5e8: 0xc08c650  jal         func_231940
label_44a5ec:
    if (ctx->pc == 0x44A5ECu) {
        ctx->pc = 0x44A5ECu;
            // 0x44a5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A5F0u;
        goto label_44a5f0;
    }
    ctx->pc = 0x44A5E8u;
    SET_GPR_U32(ctx, 31, 0x44A5F0u);
    ctx->pc = 0x44A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5E8u;
            // 0x44a5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5F0u; }
        if (ctx->pc != 0x44A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5F0u; }
        if (ctx->pc != 0x44A5F0u) { return; }
    }
    ctx->pc = 0x44A5F0u;
label_44a5f0:
    // 0x44a5f0: 0xc040180  jal         func_100600
label_44a5f4:
    if (ctx->pc == 0x44A5F4u) {
        ctx->pc = 0x44A5F4u;
            // 0x44a5f4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x44A5F8u;
        goto label_44a5f8;
    }
    ctx->pc = 0x44A5F0u;
    SET_GPR_U32(ctx, 31, 0x44A5F8u);
    ctx->pc = 0x44A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5F0u;
            // 0x44a5f4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5F8u; }
        if (ctx->pc != 0x44A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A5F8u; }
        if (ctx->pc != 0x44A5F8u) { return; }
    }
    ctx->pc = 0x44A5F8u;
label_44a5f8:
    // 0x44a5f8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_44a5fc:
    if (ctx->pc == 0x44A5FCu) {
        ctx->pc = 0x44A5FCu;
            // 0x44a5fc: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x44A600u;
        goto label_44a600;
    }
    ctx->pc = 0x44A5F8u;
    {
        const bool branch_taken_0x44a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a5f8) {
            ctx->pc = 0x44A5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A5F8u;
            // 0x44a5fc: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A648u;
            goto label_44a648;
        }
    }
    ctx->pc = 0x44A600u;
label_44a600:
    // 0x44a600: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x44a600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44a604:
    // 0x44a604: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x44a604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_44a608:
    // 0x44a608: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x44a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_44a60c:
    // 0x44a60c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x44a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_44a610:
    // 0x44a610: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x44a610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_44a614:
    // 0x44a614: 0x2463d780  addiu       $v1, $v1, -0x2880
    ctx->pc = 0x44a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956928));
label_44a618:
    // 0x44a618: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x44a618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_44a61c:
    // 0x44a61c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_44a620:
    // 0x44a620: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x44a620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_44a624:
    // 0x44a624: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x44a624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_44a628:
    // 0x44a628: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x44a628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_44a62c:
    // 0x44a62c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x44a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_44a630:
    // 0x44a630: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x44a630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_44a634:
    // 0x44a634: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x44a634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_44a638:
    // 0x44a638: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x44a638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_44a63c:
    // 0x44a63c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x44a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_44a640:
    // 0x44a640: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x44a640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_44a644:
    // 0x44a644: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x44a644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_44a648:
    // 0x44a648: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x44a648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_44a64c:
    // 0x44a64c: 0x8e2800b0  lw          $t0, 0xB0($s1)
    ctx->pc = 0x44a64cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_44a650:
    // 0x44a650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44a650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44a654:
    // 0x44a654: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x44a654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_44a658:
    // 0x44a658: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x44a658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_44a65c:
    // 0x44a65c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x44a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_44a660:
    // 0x44a660: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x44a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_44a664:
    // 0x44a664: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x44a664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_44a668:
    // 0x44a668: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x44a668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
label_44a66c:
    // 0x44a66c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x44a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44a670:
    // 0x44a670: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x44a670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_44a674:
    // 0x44a674: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44a678:
    // 0x44a678: 0xc4e003c0  lwc1        $f0, 0x3C0($a3)
    ctx->pc = 0x44a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a67c:
    // 0x44a67c: 0xc4c203c4  lwc1        $f2, 0x3C4($a2)
    ctx->pc = 0x44a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a680:
    // 0x44a680: 0xc4a103c8  lwc1        $f1, 0x3C8($a1)
    ctx->pc = 0x44a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a684:
    // 0x44a684: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x44a684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_44a688:
    // 0x44a688: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x44a688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_44a68c:
    // 0x44a68c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x44a68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_44a690:
    // 0x44a690: 0xc46003cc  lwc1        $f0, 0x3CC($v1)
    ctx->pc = 0x44a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a694:
    // 0x44a694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x44a694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44a698:
    // 0x44a698: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x44a698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_44a69c:
    // 0x44a69c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x44a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_44a6a0:
    // 0x44a6a0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x44a6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_44a6a4:
    // 0x44a6a4: 0xc040180  jal         func_100600
label_44a6a8:
    if (ctx->pc == 0x44A6A8u) {
        ctx->pc = 0x44A6A8u;
            // 0x44a6a8: 0x24500060  addiu       $s0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x44A6ACu;
        goto label_44a6ac;
    }
    ctx->pc = 0x44A6A4u;
    SET_GPR_U32(ctx, 31, 0x44A6ACu);
    ctx->pc = 0x44A6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A6A4u;
            // 0x44a6a8: 0x24500060  addiu       $s0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6ACu; }
        if (ctx->pc != 0x44A6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6ACu; }
        if (ctx->pc != 0x44A6ACu) { return; }
    }
    ctx->pc = 0x44A6ACu;
label_44a6ac:
    // 0x44a6ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44a6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44a6b0:
    // 0x44a6b0: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_44a6b4:
    if (ctx->pc == 0x44A6B4u) {
        ctx->pc = 0x44A6B4u;
            // 0x44a6b4: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x44A6B8u;
        goto label_44a6b8;
    }
    ctx->pc = 0x44A6B0u;
    {
        const bool branch_taken_0x44a6b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a6b0) {
            ctx->pc = 0x44A6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A6B0u;
            // 0x44a6b4: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A6F0u;
            goto label_44a6f0;
        }
    }
    ctx->pc = 0x44A6B8u;
label_44a6b8:
    // 0x44a6b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44a6bc:
    // 0x44a6bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x44a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44a6c0:
    // 0x44a6c0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x44a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_44a6c4:
    // 0x44a6c4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x44a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_44a6c8:
    // 0x44a6c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x44a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_44a6cc:
    // 0x44a6cc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x44a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_44a6d0:
    // 0x44a6d0: 0xc040138  jal         func_1004E0
label_44a6d4:
    if (ctx->pc == 0x44A6D4u) {
        ctx->pc = 0x44A6D4u;
            // 0x44a6d4: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44A6D8u;
        goto label_44a6d8;
    }
    ctx->pc = 0x44A6D0u;
    SET_GPR_U32(ctx, 31, 0x44A6D8u);
    ctx->pc = 0x44A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A6D0u;
            // 0x44a6d4: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6D8u; }
        if (ctx->pc != 0x44A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6D8u; }
        if (ctx->pc != 0x44A6D8u) { return; }
    }
    ctx->pc = 0x44A6D8u;
label_44a6d8:
    // 0x44a6d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x44a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_44a6dc:
    // 0x44a6dc: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x44a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_44a6e0:
    // 0x44a6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a6e4:
    // 0x44a6e4: 0xc04a576  jal         func_1295D8
label_44a6e8:
    if (ctx->pc == 0x44A6E8u) {
        ctx->pc = 0x44A6E8u;
            // 0x44a6e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x44A6ECu;
        goto label_44a6ec;
    }
    ctx->pc = 0x44A6E4u;
    SET_GPR_U32(ctx, 31, 0x44A6ECu);
    ctx->pc = 0x44A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A6E4u;
            // 0x44a6e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6ECu; }
        if (ctx->pc != 0x44A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A6ECu; }
        if (ctx->pc != 0x44A6ECu) { return; }
    }
    ctx->pc = 0x44A6ECu;
label_44a6ec:
    // 0x44a6ec: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x44a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_44a6f0:
    // 0x44a6f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x44a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44a6f4:
    // 0x44a6f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44a6f8:
    // 0x44a6f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x44a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_44a6fc:
    // 0x44a6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44a700:
    // 0x44a700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44a700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a704:
    // 0x44a704: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x44a704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44a708:
    // 0x44a708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44a708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a70c:
    // 0x44a70c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44a70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_44a710:
    // 0x44a710: 0xc122cd8  jal         func_48B360
label_44a714:
    if (ctx->pc == 0x44A714u) {
        ctx->pc = 0x44A714u;
            // 0x44a714: 0xae3200d0  sw          $s2, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 18));
        ctx->pc = 0x44A718u;
        goto label_44a718;
    }
    ctx->pc = 0x44A710u;
    SET_GPR_U32(ctx, 31, 0x44A718u);
    ctx->pc = 0x44A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A710u;
            // 0x44a714: 0xae3200d0  sw          $s2, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A718u; }
        if (ctx->pc != 0x44A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A718u; }
        if (ctx->pc != 0x44A718u) { return; }
    }
    ctx->pc = 0x44A718u;
label_44a718:
    // 0x44a718: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x44a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_44a71c:
    // 0x44a71c: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x44a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_44a720:
    // 0x44a720: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x44a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_44a724:
    // 0x44a724: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x44a724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44a728:
    // 0x44a728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44a728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44a72c:
    // 0x44a72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a730:
    // 0x44a730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44a734:
    // 0x44a734: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x44a734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_44a738:
    // 0x44a738: 0xc122cd8  jal         func_48B360
label_44a73c:
    if (ctx->pc == 0x44A73Cu) {
        ctx->pc = 0x44A73Cu;
            // 0x44a73c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A740u;
        goto label_44a740;
    }
    ctx->pc = 0x44A738u;
    SET_GPR_U32(ctx, 31, 0x44A740u);
    ctx->pc = 0x44A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A738u;
            // 0x44a73c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A740u; }
        if (ctx->pc != 0x44A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A740u; }
        if (ctx->pc != 0x44A740u) { return; }
    }
    ctx->pc = 0x44A740u;
label_44a740:
    // 0x44a740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44a744:
    // 0x44a744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44a744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44a748:
    // 0x44a748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44a748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44a74c:
    // 0x44a74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a750:
    // 0x44a750: 0x3e00008  jr          $ra
label_44a754:
    if (ctx->pc == 0x44A754u) {
        ctx->pc = 0x44A754u;
            // 0x44a754: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x44A758u;
        goto label_44a758;
    }
    ctx->pc = 0x44A750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A750u;
            // 0x44a754: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A758u;
label_44a758:
    // 0x44a758: 0x0  nop
    ctx->pc = 0x44a758u;
    // NOP
label_44a75c:
    // 0x44a75c: 0x0  nop
    ctx->pc = 0x44a75cu;
    // NOP
label_44a760:
    // 0x44a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44a764:
    // 0x44a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44a768:
    // 0x44a768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a76c:
    // 0x44a76c: 0xc0e3580  jal         func_38D600
label_44a770:
    if (ctx->pc == 0x44A770u) {
        ctx->pc = 0x44A770u;
            // 0x44a770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A774u;
        goto label_44a774;
    }
    ctx->pc = 0x44A76Cu;
    SET_GPR_U32(ctx, 31, 0x44A774u);
    ctx->pc = 0x44A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A76Cu;
            // 0x44a770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A774u; }
        if (ctx->pc != 0x44A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A774u; }
        if (ctx->pc != 0x44A774u) { return; }
    }
    ctx->pc = 0x44A774u;
label_44a774:
    // 0x44a774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a778:
    // 0x44a778: 0x3c084270  lui         $t0, 0x4270
    ctx->pc = 0x44a778u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17008 << 16));
label_44a77c:
    // 0x44a77c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x44a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_44a780:
    // 0x44a780: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x44a780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
label_44a784:
    // 0x44a784: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x44a784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
label_44a788:
    // 0x44a788: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x44a788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_44a78c:
    // 0x44a78c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x44a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_44a790:
    // 0x44a790: 0x2406f9ff  addiu       $a2, $zero, -0x601
    ctx->pc = 0x44a790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_44a794:
    // 0x44a794: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x44a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_44a798:
    // 0x44a798: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x44a798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_44a79c:
    // 0x44a79c: 0x8e0700b0  lw          $a3, 0xB0($s0)
    ctx->pc = 0x44a79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_44a7a0:
    // 0x44a7a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44a7a4:
    // 0x44a7a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44a7a8:
    // 0x44a7a8: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x44a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_44a7ac:
    // 0x44a7ac: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x44a7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_44a7b0:
    // 0x44a7b0: 0x34c60600  ori         $a2, $a2, 0x600
    ctx->pc = 0x44a7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1536);
label_44a7b4:
    // 0x44a7b4: 0xae0600b0  sw          $a2, 0xB0($s0)
    ctx->pc = 0x44a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 6));
label_44a7b8:
    // 0x44a7b8: 0xa20500cc  sb          $a1, 0xCC($s0)
    ctx->pc = 0x44a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 5));
label_44a7bc:
    // 0x44a7bc: 0xae0800c4  sw          $t0, 0xC4($s0)
    ctx->pc = 0x44a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 8));
label_44a7c0:
    // 0x44a7c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44a7c4:
    // 0x44a7c4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x44a7c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_44a7c8:
    // 0x44a7c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x44a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_44a7cc:
    // 0x44a7cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x44a7ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_44a7d0:
    // 0x44a7d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44a7d4:
    // 0x44a7d4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x44a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_44a7d8:
    // 0x44a7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44a7dc:
    // 0x44a7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a7e0:
    // 0x44a7e0: 0x3e00008  jr          $ra
label_44a7e4:
    if (ctx->pc == 0x44A7E4u) {
        ctx->pc = 0x44A7E4u;
            // 0x44a7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44A7E8u;
        goto label_44a7e8;
    }
    ctx->pc = 0x44A7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A7E0u;
            // 0x44a7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A7E8u;
label_44a7e8:
    // 0x44a7e8: 0x0  nop
    ctx->pc = 0x44a7e8u;
    // NOP
label_44a7ec:
    // 0x44a7ec: 0x0  nop
    ctx->pc = 0x44a7ecu;
    // NOP
label_44a7f0:
    // 0x44a7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44a7f4:
    // 0x44a7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a7f8:
    // 0x44a7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44a7fc:
    // 0x44a7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a800:
    // 0x44a800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44a804:
    // 0x44a804: 0xc0baaa0  jal         func_2EAA80
label_44a808:
    if (ctx->pc == 0x44A808u) {
        ctx->pc = 0x44A808u;
            // 0x44a808: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x44A80Cu;
        goto label_44a80c;
    }
    ctx->pc = 0x44A804u;
    SET_GPR_U32(ctx, 31, 0x44A80Cu);
    ctx->pc = 0x44A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A804u;
            // 0x44a808: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A80Cu; }
        if (ctx->pc != 0x44A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A80Cu; }
        if (ctx->pc != 0x44A80Cu) { return; }
    }
    ctx->pc = 0x44A80Cu;
label_44a80c:
    // 0x44a80c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x44a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_44a810:
    // 0x44a810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a814:
    // 0x44a814: 0xc122d2c  jal         func_48B4B0
label_44a818:
    if (ctx->pc == 0x44A818u) {
        ctx->pc = 0x44A818u;
            // 0x44a818: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x44A81Cu;
        goto label_44a81c;
    }
    ctx->pc = 0x44A814u;
    SET_GPR_U32(ctx, 31, 0x44A81Cu);
    ctx->pc = 0x44A818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A814u;
            // 0x44a818: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A81Cu; }
        if (ctx->pc != 0x44A81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44A81Cu; }
        if (ctx->pc != 0x44A81Cu) { return; }
    }
    ctx->pc = 0x44A81Cu;
label_44a81c:
    // 0x44a81c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44a820:
    // 0x44a820: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x44a820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_44a824:
    // 0x44a824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44a828:
    // 0x44a828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a82c:
    // 0x44a82c: 0x3e00008  jr          $ra
label_44a830:
    if (ctx->pc == 0x44A830u) {
        ctx->pc = 0x44A830u;
            // 0x44a830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44A834u;
        goto label_44a834;
    }
    ctx->pc = 0x44A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A82Cu;
            // 0x44a830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A834u;
label_44a834:
    // 0x44a834: 0x0  nop
    ctx->pc = 0x44a834u;
    // NOP
label_44a838:
    // 0x44a838: 0x0  nop
    ctx->pc = 0x44a838u;
    // NOP
label_44a83c:
    // 0x44a83c: 0x0  nop
    ctx->pc = 0x44a83cu;
    // NOP
label_44a840:
    // 0x44a840: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x44a840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_44a844:
    // 0x44a844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44a848:
    // 0x44a848: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
label_44a84c:
    if (ctx->pc == 0x44A84Cu) {
        ctx->pc = 0x44A850u;
        goto label_44a850;
    }
    ctx->pc = 0x44A848u;
    {
        const bool branch_taken_0x44a848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44a848) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A850u;
label_44a850:
    // 0x44a850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x44a850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a854:
    // 0x44a854: 0x50a70005  beql        $a1, $a3, . + 4 + (0x5 << 2)
label_44a858:
    if (ctx->pc == 0x44A858u) {
        ctx->pc = 0x44A858u;
            // 0x44a858: 0x8c8300d8  lw          $v1, 0xD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
        ctx->pc = 0x44A85Cu;
        goto label_44a85c;
    }
    ctx->pc = 0x44A854u;
    {
        const bool branch_taken_0x44a854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x44a854) {
            ctx->pc = 0x44A858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A854u;
            // 0x44a858: 0x8c8300d8  lw          $v1, 0xD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A86Cu;
            goto label_44a86c;
        }
    }
    ctx->pc = 0x44A85Cu;
label_44a85c:
    // 0x44a85c: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
label_44a860:
    if (ctx->pc == 0x44A860u) {
        ctx->pc = 0x44A860u;
            // 0x44a860: 0xac8700d4  sw          $a3, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 7));
        ctx->pc = 0x44A864u;
        goto label_44a864;
    }
    ctx->pc = 0x44A85Cu;
    {
        const bool branch_taken_0x44a85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a85c) {
            ctx->pc = 0x44A860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A85Cu;
            // 0x44a860: 0xac8700d4  sw          $a3, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A864u;
label_44a864:
    // 0x44a864: 0x10000028  b           . + 4 + (0x28 << 2)
label_44a868:
    if (ctx->pc == 0x44A868u) {
        ctx->pc = 0x44A86Cu;
        goto label_44a86c;
    }
    ctx->pc = 0x44A864u;
    {
        const bool branch_taken_0x44a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a864) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A86Cu;
label_44a86c:
    // 0x44a86c: 0x10670014  beq         $v1, $a3, . + 4 + (0x14 << 2)
label_44a870:
    if (ctx->pc == 0x44A870u) {
        ctx->pc = 0x44A874u;
        goto label_44a874;
    }
    ctx->pc = 0x44A86Cu;
    {
        const bool branch_taken_0x44a86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x44a86c) {
            ctx->pc = 0x44A8C0u;
            goto label_44a8c0;
        }
    }
    ctx->pc = 0x44A874u;
label_44a874:
    // 0x44a874: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_44a878:
    if (ctx->pc == 0x44A878u) {
        ctx->pc = 0x44A878u;
            // 0x44a878: 0x8c8600dc  lw          $a2, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->pc = 0x44A87Cu;
        goto label_44a87c;
    }
    ctx->pc = 0x44A874u;
    {
        const bool branch_taken_0x44a874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a874) {
            ctx->pc = 0x44A878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44A874u;
            // 0x44a878: 0x8c8600dc  lw          $a2, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44A884u;
            goto label_44a884;
        }
    }
    ctx->pc = 0x44A87Cu;
label_44a87c:
    // 0x44a87c: 0x10000022  b           . + 4 + (0x22 << 2)
label_44a880:
    if (ctx->pc == 0x44A880u) {
        ctx->pc = 0x44A884u;
        goto label_44a884;
    }
    ctx->pc = 0x44A87Cu;
    {
        const bool branch_taken_0x44a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a87c) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A884u;
label_44a884:
    // 0x44a884: 0x8c8500ec  lw          $a1, 0xEC($a0)
    ctx->pc = 0x44a884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
label_44a888:
    // 0x44a888: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x44a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_44a88c:
    // 0x44a88c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x44a88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_44a890:
    // 0x44a890: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x44a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_44a894:
    // 0x44a894: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x44a894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
label_44a898:
    // 0x44a898: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x44a898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_44a89c:
    // 0x44a89c: 0x8c8500e4  lw          $a1, 0xE4($a0)
    ctx->pc = 0x44a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_44a8a0:
    // 0x44a8a0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x44a8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44a8a4:
    // 0x44a8a4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x44a8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_44a8a8:
    // 0x44a8a8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_44a8ac:
    if (ctx->pc == 0x44A8ACu) {
        ctx->pc = 0x44A8B0u;
        goto label_44a8b0;
    }
    ctx->pc = 0x44A8A8u;
    {
        const bool branch_taken_0x44a8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a8a8) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A8B0u;
label_44a8b0:
    // 0x44a8b0: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x44a8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44a8b4:
    // 0x44a8b4: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x44a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
label_44a8b8:
    // 0x44a8b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_44a8bc:
    if (ctx->pc == 0x44A8BCu) {
        ctx->pc = 0x44A8BCu;
            // 0x44a8bc: 0xac8700d8  sw          $a3, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 7));
        ctx->pc = 0x44A8C0u;
        goto label_44a8c0;
    }
    ctx->pc = 0x44A8B8u;
    {
        const bool branch_taken_0x44a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A8B8u;
            // 0x44a8bc: 0xac8700d8  sw          $a3, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8b8) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A8C0u;
label_44a8c0:
    // 0x44a8c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44a8c4:
    // 0x44a8c4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44a8c8:
    // 0x44a8c8: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x44a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44a8cc:
    // 0x44a8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44a8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44a8d0:
    // 0x44a8d0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x44a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44a8d4:
    // 0x44a8d4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x44a8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_44a8d8:
    // 0x44a8d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44a8d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44a8dc:
    // 0x44a8dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_44a8e0:
    if (ctx->pc == 0x44A8E0u) {
        ctx->pc = 0x44A8E0u;
            // 0x44a8e0: 0xe48100e0  swc1        $f1, 0xE0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
        ctx->pc = 0x44A8E4u;
        goto label_44a8e4;
    }
    ctx->pc = 0x44A8DCu;
    {
        const bool branch_taken_0x44a8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44A8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A8DCu;
            // 0x44a8e0: 0xe48100e0  swc1        $f1, 0xE0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a8dc) {
            ctx->pc = 0x44A908u;
            goto label_44a908;
        }
    }
    ctx->pc = 0x44A8E4u;
label_44a8e4:
    // 0x44a8e4: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x44a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
label_44a8e8:
    // 0x44a8e8: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x44a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_44a8ec:
    // 0x44a8ec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x44a8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_44a8f0:
    // 0x44a8f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x44a8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_44a8f4:
    // 0x44a8f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x44a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_44a8f8:
    // 0x44a8f8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x44a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_44a8fc:
    // 0x44a8fc: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x44a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_44a900:
    // 0x44a900: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x44a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44a904:
    // 0x44a904: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x44a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_44a908:
    // 0x44a908: 0x3e00008  jr          $ra
label_44a90c:
    if (ctx->pc == 0x44A90Cu) {
        ctx->pc = 0x44A910u;
        goto label_44a910;
    }
    ctx->pc = 0x44A908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A910u;
label_44a910:
    // 0x44a910: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x44a910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_44a914:
    // 0x44a914: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x44a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_44a918:
    // 0x44a918: 0x8122d2c  j           func_48B4B0
label_44a91c:
    if (ctx->pc == 0x44A91Cu) {
        ctx->pc = 0x44A91Cu;
            // 0x44a91c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44A920u;
        goto label_44a920;
    }
    ctx->pc = 0x44A918u;
    ctx->pc = 0x44A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44A918u;
            // 0x44a91c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x44A920u;
label_44a920:
    // 0x44a920: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x44a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_44a924:
    // 0x44a924: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x44a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_44a928:
    // 0x44a928: 0x3e00008  jr          $ra
label_44a92c:
    if (ctx->pc == 0x44A92Cu) {
        ctx->pc = 0x44A92Cu;
            // 0x44a92c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x44A930u;
        goto label_44a930;
    }
    ctx->pc = 0x44A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A928u;
            // 0x44a92c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A930u;
label_44a930:
    // 0x44a930: 0x3e00008  jr          $ra
label_44a934:
    if (ctx->pc == 0x44A934u) {
        ctx->pc = 0x44A934u;
            // 0x44a934: 0x24023e80  addiu       $v0, $zero, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
        ctx->pc = 0x44A938u;
        goto label_44a938;
    }
    ctx->pc = 0x44A930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A930u;
            // 0x44a934: 0x24023e80  addiu       $v0, $zero, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A938u;
label_44a938:
    // 0x44a938: 0x0  nop
    ctx->pc = 0x44a938u;
    // NOP
label_44a93c:
    // 0x44a93c: 0x0  nop
    ctx->pc = 0x44a93cu;
    // NOP
label_44a940:
    // 0x44a940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44a944:
    // 0x44a944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44a948:
    // 0x44a948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44a94c:
    // 0x44a94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44a950:
    // 0x44a950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44a950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44a954:
    // 0x44a954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44a958:
    // 0x44a958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44a95c:
    // 0x44a95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a960:
    // 0x44a960: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x44a960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44a964:
    // 0x44a964: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_44a968:
    if (ctx->pc == 0x44A968u) {
        ctx->pc = 0x44A968u;
            // 0x44a968: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44A96Cu;
        goto label_44a96c;
    }
    ctx->pc = 0x44A964u;
    {
        const bool branch_taken_0x44a964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A964u;
            // 0x44a968: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a964) {
            ctx->pc = 0x44A9A8u;
            goto label_44a9a8;
        }
    }
    ctx->pc = 0x44A96Cu;
label_44a96c:
    // 0x44a96c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44a96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a970:
    // 0x44a970: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44a970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a974:
    // 0x44a974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44a974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a978:
    // 0x44a978: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x44a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44a97c:
    // 0x44a97c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44a980:
    // 0x44a980: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44a984:
    // 0x44a984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44a984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44a988:
    // 0x44a988: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x44a988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_44a98c:
    // 0x44a98c: 0x320f809  jalr        $t9
label_44a990:
    if (ctx->pc == 0x44A990u) {
        ctx->pc = 0x44A994u;
        goto label_44a994;
    }
    ctx->pc = 0x44A98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44A994u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44A994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44A994u; }
            if (ctx->pc != 0x44A994u) { return; }
        }
        }
    }
    ctx->pc = 0x44A994u;
label_44a994:
    // 0x44a994: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x44a994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_44a998:
    // 0x44a998: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44a998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44a99c:
    // 0x44a99c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x44a99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44a9a0:
    // 0x44a9a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_44a9a4:
    if (ctx->pc == 0x44A9A4u) {
        ctx->pc = 0x44A9A4u;
            // 0x44a9a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44A9A8u;
        goto label_44a9a8;
    }
    ctx->pc = 0x44A9A0u;
    {
        const bool branch_taken_0x44a9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A9A0u;
            // 0x44a9a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a9a0) {
            ctx->pc = 0x44A978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44a978;
        }
    }
    ctx->pc = 0x44A9A8u;
label_44a9a8:
    // 0x44a9a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44a9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44a9ac:
    // 0x44a9ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44a9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44a9b0:
    // 0x44a9b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44a9b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44a9b4:
    // 0x44a9b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44a9b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44a9b8:
    // 0x44a9b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44a9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44a9bc:
    // 0x44a9bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44a9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44a9c0:
    // 0x44a9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44a9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44a9c4:
    // 0x44a9c4: 0x3e00008  jr          $ra
label_44a9c8:
    if (ctx->pc == 0x44A9C8u) {
        ctx->pc = 0x44A9C8u;
            // 0x44a9c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44A9CCu;
        goto label_44a9cc;
    }
    ctx->pc = 0x44A9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44A9C4u;
            // 0x44a9c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44A9CCu;
label_44a9cc:
    // 0x44a9cc: 0x0  nop
    ctx->pc = 0x44a9ccu;
    // NOP
label_44a9d0:
    // 0x44a9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44a9d4:
    // 0x44a9d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44a9d8:
    // 0x44a9d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44a9dc:
    // 0x44a9dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44a9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_44a9e0:
    // 0x44a9e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44a9e4:
    // 0x44a9e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x44a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44a9e8:
    // 0x44a9e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44a9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44a9ec:
    // 0x44a9ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_44a9f0:
    // 0x44a9f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44a9f4:
    // 0x44a9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44a9f8:
    // 0x44a9f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x44a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_44a9fc:
    // 0x44a9fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44aa00:
    // 0x44aa00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x44aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_44aa04:
    // 0x44aa04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44aa08:
    // 0x44aa08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x44aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_44aa0c:
    // 0x44aa0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_44aa10:
    // 0x44aa10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x44aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44aa14:
    // 0x44aa14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44aa18:
    // 0x44aa18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x44aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_44aa1c:
    // 0x44aa1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44aa20:
    // 0x44aa20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x44aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44aa24:
    // 0x44aa24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44aa28:
    // 0x44aa28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x44aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44aa2c:
    // 0x44aa2c: 0xc0a997c  jal         func_2A65F0
label_44aa30:
    if (ctx->pc == 0x44AA30u) {
        ctx->pc = 0x44AA30u;
            // 0x44aa30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x44AA34u;
        goto label_44aa34;
    }
    ctx->pc = 0x44AA2Cu;
    SET_GPR_U32(ctx, 31, 0x44AA34u);
    ctx->pc = 0x44AA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA2Cu;
            // 0x44aa30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA34u; }
        if (ctx->pc != 0x44AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA34u; }
        if (ctx->pc != 0x44AA34u) { return; }
    }
    ctx->pc = 0x44AA34u;
label_44aa34:
    // 0x44aa34: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x44aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_44aa38:
    // 0x44aa38: 0xc0d879c  jal         func_361E70
label_44aa3c:
    if (ctx->pc == 0x44AA3Cu) {
        ctx->pc = 0x44AA3Cu;
            // 0x44aa3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44AA40u;
        goto label_44aa40;
    }
    ctx->pc = 0x44AA38u;
    SET_GPR_U32(ctx, 31, 0x44AA40u);
    ctx->pc = 0x44AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA38u;
            // 0x44aa3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA40u; }
        if (ctx->pc != 0x44AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA40u; }
        if (ctx->pc != 0x44AA40u) { return; }
    }
    ctx->pc = 0x44AA40u;
label_44aa40:
    // 0x44aa40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44aa44:
    // 0x44aa44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44aa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44aa48:
    // 0x44aa48: 0x3e00008  jr          $ra
label_44aa4c:
    if (ctx->pc == 0x44AA4Cu) {
        ctx->pc = 0x44AA4Cu;
            // 0x44aa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44AA50u;
        goto label_44aa50;
    }
    ctx->pc = 0x44AA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA48u;
            // 0x44aa4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AA50u;
label_44aa50:
    // 0x44aa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44aa54:
    // 0x44aa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44aa58:
    // 0x44aa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44aa5c:
    // 0x44aa5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x44aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_44aa60:
    // 0x44aa60: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_44aa64:
    if (ctx->pc == 0x44AA64u) {
        ctx->pc = 0x44AA64u;
            // 0x44aa64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44AA68u;
        goto label_44aa68;
    }
    ctx->pc = 0x44AA60u;
    {
        const bool branch_taken_0x44aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA60u;
            // 0x44aa64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa60) {
            ctx->pc = 0x44AB80u;
            goto label_44ab80;
        }
    }
    ctx->pc = 0x44AA68u;
label_44aa68:
    // 0x44aa68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44aa6c:
    // 0x44aa6c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_44aa70:
    // 0x44aa70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44aa74:
    // 0x44aa74: 0xc075128  jal         func_1D44A0
label_44aa78:
    if (ctx->pc == 0x44AA78u) {
        ctx->pc = 0x44AA78u;
            // 0x44aa78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x44AA7Cu;
        goto label_44aa7c;
    }
    ctx->pc = 0x44AA74u;
    SET_GPR_U32(ctx, 31, 0x44AA7Cu);
    ctx->pc = 0x44AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA74u;
            // 0x44aa78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA7Cu; }
        if (ctx->pc != 0x44AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AA7Cu; }
        if (ctx->pc != 0x44AA7Cu) { return; }
    }
    ctx->pc = 0x44AA7Cu;
label_44aa7c:
    // 0x44aa7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x44aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44aa80:
    // 0x44aa80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aa84:
    // 0x44aa84: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x44aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_44aa88:
    // 0x44aa88: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x44aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_44aa8c:
    // 0x44aa8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44aa8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44aa90:
    // 0x44aa90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44aa94:
    if (ctx->pc == 0x44AA94u) {
        ctx->pc = 0x44AA94u;
            // 0x44aa94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x44AA98u;
        goto label_44aa98;
    }
    ctx->pc = 0x44AA90u;
    {
        const bool branch_taken_0x44aa90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AA90u;
            // 0x44aa94: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aa90) {
            ctx->pc = 0x44AAA0u;
            goto label_44aaa0;
        }
    }
    ctx->pc = 0x44AA98u;
label_44aa98:
    // 0x44aa98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aa9c:
    // 0x44aa9c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x44aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_44aaa0:
    // 0x44aaa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44aaa4:
    // 0x44aaa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aaa8:
    // 0x44aaa8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x44aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_44aaac:
    // 0x44aaac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44aab0:
    // 0x44aab0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44aab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44aab4:
    // 0x44aab4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44aab8:
    if (ctx->pc == 0x44AAB8u) {
        ctx->pc = 0x44AAB8u;
            // 0x44aab8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44AABCu;
        goto label_44aabc;
    }
    ctx->pc = 0x44AAB4u;
    {
        const bool branch_taken_0x44aab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44aab4) {
            ctx->pc = 0x44AAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AAB4u;
            // 0x44aab8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AAC8u;
            goto label_44aac8;
        }
    }
    ctx->pc = 0x44AABCu;
label_44aabc:
    // 0x44aabc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aac0:
    // 0x44aac0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x44aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_44aac4:
    // 0x44aac4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44aac8:
    // 0x44aac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aacc:
    // 0x44aacc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x44aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_44aad0:
    // 0x44aad0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44aad4:
    // 0x44aad4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44aad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44aad8:
    // 0x44aad8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44aadc:
    if (ctx->pc == 0x44AADCu) {
        ctx->pc = 0x44AADCu;
            // 0x44aadc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44AAE0u;
        goto label_44aae0;
    }
    ctx->pc = 0x44AAD8u;
    {
        const bool branch_taken_0x44aad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44aad8) {
            ctx->pc = 0x44AADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AAD8u;
            // 0x44aadc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AAECu;
            goto label_44aaec;
        }
    }
    ctx->pc = 0x44AAE0u;
label_44aae0:
    // 0x44aae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44aae4:
    // 0x44aae4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x44aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44aae8:
    // 0x44aae8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x44aae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44aaec:
    // 0x44aaec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x44aaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_44aaf0:
    // 0x44aaf0: 0x320f809  jalr        $t9
label_44aaf4:
    if (ctx->pc == 0x44AAF4u) {
        ctx->pc = 0x44AAF4u;
            // 0x44aaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44AAF8u;
        goto label_44aaf8;
    }
    ctx->pc = 0x44AAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44AAF8u);
        ctx->pc = 0x44AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AAF0u;
            // 0x44aaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44AAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44AAF8u; }
            if (ctx->pc != 0x44AAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x44AAF8u;
label_44aaf8:
    // 0x44aaf8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44aafc:
    // 0x44aafc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab00:
    // 0x44ab00: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x44ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_44ab04:
    // 0x44ab04: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44ab08:
    // 0x44ab08: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44ab08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44ab0c:
    // 0x44ab0c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44ab0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44ab10:
    // 0x44ab10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44ab14:
    if (ctx->pc == 0x44AB14u) {
        ctx->pc = 0x44AB14u;
            // 0x44ab14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x44AB18u;
        goto label_44ab18;
    }
    ctx->pc = 0x44AB10u;
    {
        const bool branch_taken_0x44ab10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ab10) {
            ctx->pc = 0x44AB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AB10u;
            // 0x44ab14: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AB24u;
            goto label_44ab24;
        }
    }
    ctx->pc = 0x44AB18u;
label_44ab18:
    // 0x44ab18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab1c:
    // 0x44ab1c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x44ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_44ab20:
    // 0x44ab20: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44ab24:
    // 0x44ab24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab28:
    // 0x44ab28: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x44ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_44ab2c:
    // 0x44ab2c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44ab30:
    // 0x44ab30: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44ab30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44ab34:
    // 0x44ab34: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44ab34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44ab38:
    // 0x44ab38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44ab3c:
    if (ctx->pc == 0x44AB3Cu) {
        ctx->pc = 0x44AB40u;
        goto label_44ab40;
    }
    ctx->pc = 0x44AB38u;
    {
        const bool branch_taken_0x44ab38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ab38) {
            ctx->pc = 0x44AB48u;
            goto label_44ab48;
        }
    }
    ctx->pc = 0x44AB40u;
label_44ab40:
    // 0x44ab40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab44:
    // 0x44ab44: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x44ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_44ab48:
    // 0x44ab48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab4c:
    // 0x44ab4c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x44ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_44ab50:
    // 0x44ab50: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44ab50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44ab54:
    // 0x44ab54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44ab58:
    if (ctx->pc == 0x44AB58u) {
        ctx->pc = 0x44AB5Cu;
        goto label_44ab5c;
    }
    ctx->pc = 0x44AB54u;
    {
        const bool branch_taken_0x44ab54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ab54) {
            ctx->pc = 0x44AB64u;
            goto label_44ab64;
        }
    }
    ctx->pc = 0x44AB5Cu;
label_44ab5c:
    // 0x44ab5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab60:
    // 0x44ab60: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x44ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_44ab64:
    // 0x44ab64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab68:
    // 0x44ab68: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x44ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_44ab6c:
    // 0x44ab6c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44ab6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44ab70:
    // 0x44ab70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44ab74:
    if (ctx->pc == 0x44AB74u) {
        ctx->pc = 0x44AB74u;
            // 0x44ab74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44AB78u;
        goto label_44ab78;
    }
    ctx->pc = 0x44AB70u;
    {
        const bool branch_taken_0x44ab70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ab70) {
            ctx->pc = 0x44AB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AB70u;
            // 0x44ab74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AB84u;
            goto label_44ab84;
        }
    }
    ctx->pc = 0x44AB78u;
label_44ab78:
    // 0x44ab78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44ab7c:
    // 0x44ab7c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x44ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_44ab80:
    // 0x44ab80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44ab84:
    // 0x44ab84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ab88:
    // 0x44ab88: 0x3e00008  jr          $ra
label_44ab8c:
    if (ctx->pc == 0x44AB8Cu) {
        ctx->pc = 0x44AB8Cu;
            // 0x44ab8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44AB90u;
        goto label_44ab90;
    }
    ctx->pc = 0x44AB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AB88u;
            // 0x44ab8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AB90u;
label_44ab90:
    // 0x44ab90: 0x81127a4  j           func_449E90
label_44ab94:
    if (ctx->pc == 0x44AB94u) {
        ctx->pc = 0x44AB94u;
            // 0x44ab94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44AB98u;
        goto label_44ab98;
    }
    ctx->pc = 0x44AB90u;
    ctx->pc = 0x44AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AB90u;
            // 0x44ab94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449E90u;
    {
        auto targetFn = runtime->lookupFunction(0x449E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44AB98u;
label_44ab98:
    // 0x44ab98: 0x0  nop
    ctx->pc = 0x44ab98u;
    // NOP
label_44ab9c:
    // 0x44ab9c: 0x0  nop
    ctx->pc = 0x44ab9cu;
    // NOP
label_44aba0:
    // 0x44aba0: 0x8112540  j           func_449500
label_44aba4:
    if (ctx->pc == 0x44ABA4u) {
        ctx->pc = 0x44ABA4u;
            // 0x44aba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44ABA8u;
        goto label_44aba8;
    }
    ctx->pc = 0x44ABA0u;
    ctx->pc = 0x44ABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABA0u;
            // 0x44aba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449500u;
    if (runtime->hasFunction(0x449500u)) {
        auto targetFn = runtime->lookupFunction(0x449500u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00449500_0x449500(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x44ABA8u;
label_44aba8:
    // 0x44aba8: 0x0  nop
    ctx->pc = 0x44aba8u;
    // NOP
label_44abac:
    // 0x44abac: 0x0  nop
    ctx->pc = 0x44abacu;
    // NOP
label_44abb0:
    // 0x44abb0: 0x8112598  j           func_449660
label_44abb4:
    if (ctx->pc == 0x44ABB4u) {
        ctx->pc = 0x44ABB4u;
            // 0x44abb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x44ABB8u;
        goto label_44abb8;
    }
    ctx->pc = 0x44ABB0u;
    ctx->pc = 0x44ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABB0u;
            // 0x44abb4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449660u;
    {
        auto targetFn = runtime->lookupFunction(0x449660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44ABB8u;
label_44abb8:
    // 0x44abb8: 0x0  nop
    ctx->pc = 0x44abb8u;
    // NOP
label_44abbc:
    // 0x44abbc: 0x0  nop
    ctx->pc = 0x44abbcu;
    // NOP
label_44abc0:
    // 0x44abc0: 0x811251c  j           func_449470
label_44abc4:
    if (ctx->pc == 0x44ABC4u) {
        ctx->pc = 0x44ABC4u;
            // 0x44abc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44ABC8u;
        goto label_44abc8;
    }
    ctx->pc = 0x44ABC0u;
    ctx->pc = 0x44ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABC0u;
            // 0x44abc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449470u;
    {
        auto targetFn = runtime->lookupFunction(0x449470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44ABC8u;
label_44abc8:
    // 0x44abc8: 0x0  nop
    ctx->pc = 0x44abc8u;
    // NOP
label_44abcc:
    // 0x44abcc: 0x0  nop
    ctx->pc = 0x44abccu;
    // NOP
}
