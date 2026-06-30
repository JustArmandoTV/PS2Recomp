#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046A030
// Address: 0x46a030 - 0x46a790
void sub_0046A030_0x46a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A030_0x46a030");
#endif

    switch (ctx->pc) {
        case 0x46a030u: goto label_46a030;
        case 0x46a034u: goto label_46a034;
        case 0x46a038u: goto label_46a038;
        case 0x46a03cu: goto label_46a03c;
        case 0x46a040u: goto label_46a040;
        case 0x46a044u: goto label_46a044;
        case 0x46a048u: goto label_46a048;
        case 0x46a04cu: goto label_46a04c;
        case 0x46a050u: goto label_46a050;
        case 0x46a054u: goto label_46a054;
        case 0x46a058u: goto label_46a058;
        case 0x46a05cu: goto label_46a05c;
        case 0x46a060u: goto label_46a060;
        case 0x46a064u: goto label_46a064;
        case 0x46a068u: goto label_46a068;
        case 0x46a06cu: goto label_46a06c;
        case 0x46a070u: goto label_46a070;
        case 0x46a074u: goto label_46a074;
        case 0x46a078u: goto label_46a078;
        case 0x46a07cu: goto label_46a07c;
        case 0x46a080u: goto label_46a080;
        case 0x46a084u: goto label_46a084;
        case 0x46a088u: goto label_46a088;
        case 0x46a08cu: goto label_46a08c;
        case 0x46a090u: goto label_46a090;
        case 0x46a094u: goto label_46a094;
        case 0x46a098u: goto label_46a098;
        case 0x46a09cu: goto label_46a09c;
        case 0x46a0a0u: goto label_46a0a0;
        case 0x46a0a4u: goto label_46a0a4;
        case 0x46a0a8u: goto label_46a0a8;
        case 0x46a0acu: goto label_46a0ac;
        case 0x46a0b0u: goto label_46a0b0;
        case 0x46a0b4u: goto label_46a0b4;
        case 0x46a0b8u: goto label_46a0b8;
        case 0x46a0bcu: goto label_46a0bc;
        case 0x46a0c0u: goto label_46a0c0;
        case 0x46a0c4u: goto label_46a0c4;
        case 0x46a0c8u: goto label_46a0c8;
        case 0x46a0ccu: goto label_46a0cc;
        case 0x46a0d0u: goto label_46a0d0;
        case 0x46a0d4u: goto label_46a0d4;
        case 0x46a0d8u: goto label_46a0d8;
        case 0x46a0dcu: goto label_46a0dc;
        case 0x46a0e0u: goto label_46a0e0;
        case 0x46a0e4u: goto label_46a0e4;
        case 0x46a0e8u: goto label_46a0e8;
        case 0x46a0ecu: goto label_46a0ec;
        case 0x46a0f0u: goto label_46a0f0;
        case 0x46a0f4u: goto label_46a0f4;
        case 0x46a0f8u: goto label_46a0f8;
        case 0x46a0fcu: goto label_46a0fc;
        case 0x46a100u: goto label_46a100;
        case 0x46a104u: goto label_46a104;
        case 0x46a108u: goto label_46a108;
        case 0x46a10cu: goto label_46a10c;
        case 0x46a110u: goto label_46a110;
        case 0x46a114u: goto label_46a114;
        case 0x46a118u: goto label_46a118;
        case 0x46a11cu: goto label_46a11c;
        case 0x46a120u: goto label_46a120;
        case 0x46a124u: goto label_46a124;
        case 0x46a128u: goto label_46a128;
        case 0x46a12cu: goto label_46a12c;
        case 0x46a130u: goto label_46a130;
        case 0x46a134u: goto label_46a134;
        case 0x46a138u: goto label_46a138;
        case 0x46a13cu: goto label_46a13c;
        case 0x46a140u: goto label_46a140;
        case 0x46a144u: goto label_46a144;
        case 0x46a148u: goto label_46a148;
        case 0x46a14cu: goto label_46a14c;
        case 0x46a150u: goto label_46a150;
        case 0x46a154u: goto label_46a154;
        case 0x46a158u: goto label_46a158;
        case 0x46a15cu: goto label_46a15c;
        case 0x46a160u: goto label_46a160;
        case 0x46a164u: goto label_46a164;
        case 0x46a168u: goto label_46a168;
        case 0x46a16cu: goto label_46a16c;
        case 0x46a170u: goto label_46a170;
        case 0x46a174u: goto label_46a174;
        case 0x46a178u: goto label_46a178;
        case 0x46a17cu: goto label_46a17c;
        case 0x46a180u: goto label_46a180;
        case 0x46a184u: goto label_46a184;
        case 0x46a188u: goto label_46a188;
        case 0x46a18cu: goto label_46a18c;
        case 0x46a190u: goto label_46a190;
        case 0x46a194u: goto label_46a194;
        case 0x46a198u: goto label_46a198;
        case 0x46a19cu: goto label_46a19c;
        case 0x46a1a0u: goto label_46a1a0;
        case 0x46a1a4u: goto label_46a1a4;
        case 0x46a1a8u: goto label_46a1a8;
        case 0x46a1acu: goto label_46a1ac;
        case 0x46a1b0u: goto label_46a1b0;
        case 0x46a1b4u: goto label_46a1b4;
        case 0x46a1b8u: goto label_46a1b8;
        case 0x46a1bcu: goto label_46a1bc;
        case 0x46a1c0u: goto label_46a1c0;
        case 0x46a1c4u: goto label_46a1c4;
        case 0x46a1c8u: goto label_46a1c8;
        case 0x46a1ccu: goto label_46a1cc;
        case 0x46a1d0u: goto label_46a1d0;
        case 0x46a1d4u: goto label_46a1d4;
        case 0x46a1d8u: goto label_46a1d8;
        case 0x46a1dcu: goto label_46a1dc;
        case 0x46a1e0u: goto label_46a1e0;
        case 0x46a1e4u: goto label_46a1e4;
        case 0x46a1e8u: goto label_46a1e8;
        case 0x46a1ecu: goto label_46a1ec;
        case 0x46a1f0u: goto label_46a1f0;
        case 0x46a1f4u: goto label_46a1f4;
        case 0x46a1f8u: goto label_46a1f8;
        case 0x46a1fcu: goto label_46a1fc;
        case 0x46a200u: goto label_46a200;
        case 0x46a204u: goto label_46a204;
        case 0x46a208u: goto label_46a208;
        case 0x46a20cu: goto label_46a20c;
        case 0x46a210u: goto label_46a210;
        case 0x46a214u: goto label_46a214;
        case 0x46a218u: goto label_46a218;
        case 0x46a21cu: goto label_46a21c;
        case 0x46a220u: goto label_46a220;
        case 0x46a224u: goto label_46a224;
        case 0x46a228u: goto label_46a228;
        case 0x46a22cu: goto label_46a22c;
        case 0x46a230u: goto label_46a230;
        case 0x46a234u: goto label_46a234;
        case 0x46a238u: goto label_46a238;
        case 0x46a23cu: goto label_46a23c;
        case 0x46a240u: goto label_46a240;
        case 0x46a244u: goto label_46a244;
        case 0x46a248u: goto label_46a248;
        case 0x46a24cu: goto label_46a24c;
        case 0x46a250u: goto label_46a250;
        case 0x46a254u: goto label_46a254;
        case 0x46a258u: goto label_46a258;
        case 0x46a25cu: goto label_46a25c;
        case 0x46a260u: goto label_46a260;
        case 0x46a264u: goto label_46a264;
        case 0x46a268u: goto label_46a268;
        case 0x46a26cu: goto label_46a26c;
        case 0x46a270u: goto label_46a270;
        case 0x46a274u: goto label_46a274;
        case 0x46a278u: goto label_46a278;
        case 0x46a27cu: goto label_46a27c;
        case 0x46a280u: goto label_46a280;
        case 0x46a284u: goto label_46a284;
        case 0x46a288u: goto label_46a288;
        case 0x46a28cu: goto label_46a28c;
        case 0x46a290u: goto label_46a290;
        case 0x46a294u: goto label_46a294;
        case 0x46a298u: goto label_46a298;
        case 0x46a29cu: goto label_46a29c;
        case 0x46a2a0u: goto label_46a2a0;
        case 0x46a2a4u: goto label_46a2a4;
        case 0x46a2a8u: goto label_46a2a8;
        case 0x46a2acu: goto label_46a2ac;
        case 0x46a2b0u: goto label_46a2b0;
        case 0x46a2b4u: goto label_46a2b4;
        case 0x46a2b8u: goto label_46a2b8;
        case 0x46a2bcu: goto label_46a2bc;
        case 0x46a2c0u: goto label_46a2c0;
        case 0x46a2c4u: goto label_46a2c4;
        case 0x46a2c8u: goto label_46a2c8;
        case 0x46a2ccu: goto label_46a2cc;
        case 0x46a2d0u: goto label_46a2d0;
        case 0x46a2d4u: goto label_46a2d4;
        case 0x46a2d8u: goto label_46a2d8;
        case 0x46a2dcu: goto label_46a2dc;
        case 0x46a2e0u: goto label_46a2e0;
        case 0x46a2e4u: goto label_46a2e4;
        case 0x46a2e8u: goto label_46a2e8;
        case 0x46a2ecu: goto label_46a2ec;
        case 0x46a2f0u: goto label_46a2f0;
        case 0x46a2f4u: goto label_46a2f4;
        case 0x46a2f8u: goto label_46a2f8;
        case 0x46a2fcu: goto label_46a2fc;
        case 0x46a300u: goto label_46a300;
        case 0x46a304u: goto label_46a304;
        case 0x46a308u: goto label_46a308;
        case 0x46a30cu: goto label_46a30c;
        case 0x46a310u: goto label_46a310;
        case 0x46a314u: goto label_46a314;
        case 0x46a318u: goto label_46a318;
        case 0x46a31cu: goto label_46a31c;
        case 0x46a320u: goto label_46a320;
        case 0x46a324u: goto label_46a324;
        case 0x46a328u: goto label_46a328;
        case 0x46a32cu: goto label_46a32c;
        case 0x46a330u: goto label_46a330;
        case 0x46a334u: goto label_46a334;
        case 0x46a338u: goto label_46a338;
        case 0x46a33cu: goto label_46a33c;
        case 0x46a340u: goto label_46a340;
        case 0x46a344u: goto label_46a344;
        case 0x46a348u: goto label_46a348;
        case 0x46a34cu: goto label_46a34c;
        case 0x46a350u: goto label_46a350;
        case 0x46a354u: goto label_46a354;
        case 0x46a358u: goto label_46a358;
        case 0x46a35cu: goto label_46a35c;
        case 0x46a360u: goto label_46a360;
        case 0x46a364u: goto label_46a364;
        case 0x46a368u: goto label_46a368;
        case 0x46a36cu: goto label_46a36c;
        case 0x46a370u: goto label_46a370;
        case 0x46a374u: goto label_46a374;
        case 0x46a378u: goto label_46a378;
        case 0x46a37cu: goto label_46a37c;
        case 0x46a380u: goto label_46a380;
        case 0x46a384u: goto label_46a384;
        case 0x46a388u: goto label_46a388;
        case 0x46a38cu: goto label_46a38c;
        case 0x46a390u: goto label_46a390;
        case 0x46a394u: goto label_46a394;
        case 0x46a398u: goto label_46a398;
        case 0x46a39cu: goto label_46a39c;
        case 0x46a3a0u: goto label_46a3a0;
        case 0x46a3a4u: goto label_46a3a4;
        case 0x46a3a8u: goto label_46a3a8;
        case 0x46a3acu: goto label_46a3ac;
        case 0x46a3b0u: goto label_46a3b0;
        case 0x46a3b4u: goto label_46a3b4;
        case 0x46a3b8u: goto label_46a3b8;
        case 0x46a3bcu: goto label_46a3bc;
        case 0x46a3c0u: goto label_46a3c0;
        case 0x46a3c4u: goto label_46a3c4;
        case 0x46a3c8u: goto label_46a3c8;
        case 0x46a3ccu: goto label_46a3cc;
        case 0x46a3d0u: goto label_46a3d0;
        case 0x46a3d4u: goto label_46a3d4;
        case 0x46a3d8u: goto label_46a3d8;
        case 0x46a3dcu: goto label_46a3dc;
        case 0x46a3e0u: goto label_46a3e0;
        case 0x46a3e4u: goto label_46a3e4;
        case 0x46a3e8u: goto label_46a3e8;
        case 0x46a3ecu: goto label_46a3ec;
        case 0x46a3f0u: goto label_46a3f0;
        case 0x46a3f4u: goto label_46a3f4;
        case 0x46a3f8u: goto label_46a3f8;
        case 0x46a3fcu: goto label_46a3fc;
        case 0x46a400u: goto label_46a400;
        case 0x46a404u: goto label_46a404;
        case 0x46a408u: goto label_46a408;
        case 0x46a40cu: goto label_46a40c;
        case 0x46a410u: goto label_46a410;
        case 0x46a414u: goto label_46a414;
        case 0x46a418u: goto label_46a418;
        case 0x46a41cu: goto label_46a41c;
        case 0x46a420u: goto label_46a420;
        case 0x46a424u: goto label_46a424;
        case 0x46a428u: goto label_46a428;
        case 0x46a42cu: goto label_46a42c;
        case 0x46a430u: goto label_46a430;
        case 0x46a434u: goto label_46a434;
        case 0x46a438u: goto label_46a438;
        case 0x46a43cu: goto label_46a43c;
        case 0x46a440u: goto label_46a440;
        case 0x46a444u: goto label_46a444;
        case 0x46a448u: goto label_46a448;
        case 0x46a44cu: goto label_46a44c;
        case 0x46a450u: goto label_46a450;
        case 0x46a454u: goto label_46a454;
        case 0x46a458u: goto label_46a458;
        case 0x46a45cu: goto label_46a45c;
        case 0x46a460u: goto label_46a460;
        case 0x46a464u: goto label_46a464;
        case 0x46a468u: goto label_46a468;
        case 0x46a46cu: goto label_46a46c;
        case 0x46a470u: goto label_46a470;
        case 0x46a474u: goto label_46a474;
        case 0x46a478u: goto label_46a478;
        case 0x46a47cu: goto label_46a47c;
        case 0x46a480u: goto label_46a480;
        case 0x46a484u: goto label_46a484;
        case 0x46a488u: goto label_46a488;
        case 0x46a48cu: goto label_46a48c;
        case 0x46a490u: goto label_46a490;
        case 0x46a494u: goto label_46a494;
        case 0x46a498u: goto label_46a498;
        case 0x46a49cu: goto label_46a49c;
        case 0x46a4a0u: goto label_46a4a0;
        case 0x46a4a4u: goto label_46a4a4;
        case 0x46a4a8u: goto label_46a4a8;
        case 0x46a4acu: goto label_46a4ac;
        case 0x46a4b0u: goto label_46a4b0;
        case 0x46a4b4u: goto label_46a4b4;
        case 0x46a4b8u: goto label_46a4b8;
        case 0x46a4bcu: goto label_46a4bc;
        case 0x46a4c0u: goto label_46a4c0;
        case 0x46a4c4u: goto label_46a4c4;
        case 0x46a4c8u: goto label_46a4c8;
        case 0x46a4ccu: goto label_46a4cc;
        case 0x46a4d0u: goto label_46a4d0;
        case 0x46a4d4u: goto label_46a4d4;
        case 0x46a4d8u: goto label_46a4d8;
        case 0x46a4dcu: goto label_46a4dc;
        case 0x46a4e0u: goto label_46a4e0;
        case 0x46a4e4u: goto label_46a4e4;
        case 0x46a4e8u: goto label_46a4e8;
        case 0x46a4ecu: goto label_46a4ec;
        case 0x46a4f0u: goto label_46a4f0;
        case 0x46a4f4u: goto label_46a4f4;
        case 0x46a4f8u: goto label_46a4f8;
        case 0x46a4fcu: goto label_46a4fc;
        case 0x46a500u: goto label_46a500;
        case 0x46a504u: goto label_46a504;
        case 0x46a508u: goto label_46a508;
        case 0x46a50cu: goto label_46a50c;
        case 0x46a510u: goto label_46a510;
        case 0x46a514u: goto label_46a514;
        case 0x46a518u: goto label_46a518;
        case 0x46a51cu: goto label_46a51c;
        case 0x46a520u: goto label_46a520;
        case 0x46a524u: goto label_46a524;
        case 0x46a528u: goto label_46a528;
        case 0x46a52cu: goto label_46a52c;
        case 0x46a530u: goto label_46a530;
        case 0x46a534u: goto label_46a534;
        case 0x46a538u: goto label_46a538;
        case 0x46a53cu: goto label_46a53c;
        case 0x46a540u: goto label_46a540;
        case 0x46a544u: goto label_46a544;
        case 0x46a548u: goto label_46a548;
        case 0x46a54cu: goto label_46a54c;
        case 0x46a550u: goto label_46a550;
        case 0x46a554u: goto label_46a554;
        case 0x46a558u: goto label_46a558;
        case 0x46a55cu: goto label_46a55c;
        case 0x46a560u: goto label_46a560;
        case 0x46a564u: goto label_46a564;
        case 0x46a568u: goto label_46a568;
        case 0x46a56cu: goto label_46a56c;
        case 0x46a570u: goto label_46a570;
        case 0x46a574u: goto label_46a574;
        case 0x46a578u: goto label_46a578;
        case 0x46a57cu: goto label_46a57c;
        case 0x46a580u: goto label_46a580;
        case 0x46a584u: goto label_46a584;
        case 0x46a588u: goto label_46a588;
        case 0x46a58cu: goto label_46a58c;
        case 0x46a590u: goto label_46a590;
        case 0x46a594u: goto label_46a594;
        case 0x46a598u: goto label_46a598;
        case 0x46a59cu: goto label_46a59c;
        case 0x46a5a0u: goto label_46a5a0;
        case 0x46a5a4u: goto label_46a5a4;
        case 0x46a5a8u: goto label_46a5a8;
        case 0x46a5acu: goto label_46a5ac;
        case 0x46a5b0u: goto label_46a5b0;
        case 0x46a5b4u: goto label_46a5b4;
        case 0x46a5b8u: goto label_46a5b8;
        case 0x46a5bcu: goto label_46a5bc;
        case 0x46a5c0u: goto label_46a5c0;
        case 0x46a5c4u: goto label_46a5c4;
        case 0x46a5c8u: goto label_46a5c8;
        case 0x46a5ccu: goto label_46a5cc;
        case 0x46a5d0u: goto label_46a5d0;
        case 0x46a5d4u: goto label_46a5d4;
        case 0x46a5d8u: goto label_46a5d8;
        case 0x46a5dcu: goto label_46a5dc;
        case 0x46a5e0u: goto label_46a5e0;
        case 0x46a5e4u: goto label_46a5e4;
        case 0x46a5e8u: goto label_46a5e8;
        case 0x46a5ecu: goto label_46a5ec;
        case 0x46a5f0u: goto label_46a5f0;
        case 0x46a5f4u: goto label_46a5f4;
        case 0x46a5f8u: goto label_46a5f8;
        case 0x46a5fcu: goto label_46a5fc;
        case 0x46a600u: goto label_46a600;
        case 0x46a604u: goto label_46a604;
        case 0x46a608u: goto label_46a608;
        case 0x46a60cu: goto label_46a60c;
        case 0x46a610u: goto label_46a610;
        case 0x46a614u: goto label_46a614;
        case 0x46a618u: goto label_46a618;
        case 0x46a61cu: goto label_46a61c;
        case 0x46a620u: goto label_46a620;
        case 0x46a624u: goto label_46a624;
        case 0x46a628u: goto label_46a628;
        case 0x46a62cu: goto label_46a62c;
        case 0x46a630u: goto label_46a630;
        case 0x46a634u: goto label_46a634;
        case 0x46a638u: goto label_46a638;
        case 0x46a63cu: goto label_46a63c;
        case 0x46a640u: goto label_46a640;
        case 0x46a644u: goto label_46a644;
        case 0x46a648u: goto label_46a648;
        case 0x46a64cu: goto label_46a64c;
        case 0x46a650u: goto label_46a650;
        case 0x46a654u: goto label_46a654;
        case 0x46a658u: goto label_46a658;
        case 0x46a65cu: goto label_46a65c;
        case 0x46a660u: goto label_46a660;
        case 0x46a664u: goto label_46a664;
        case 0x46a668u: goto label_46a668;
        case 0x46a66cu: goto label_46a66c;
        case 0x46a670u: goto label_46a670;
        case 0x46a674u: goto label_46a674;
        case 0x46a678u: goto label_46a678;
        case 0x46a67cu: goto label_46a67c;
        case 0x46a680u: goto label_46a680;
        case 0x46a684u: goto label_46a684;
        case 0x46a688u: goto label_46a688;
        case 0x46a68cu: goto label_46a68c;
        case 0x46a690u: goto label_46a690;
        case 0x46a694u: goto label_46a694;
        case 0x46a698u: goto label_46a698;
        case 0x46a69cu: goto label_46a69c;
        case 0x46a6a0u: goto label_46a6a0;
        case 0x46a6a4u: goto label_46a6a4;
        case 0x46a6a8u: goto label_46a6a8;
        case 0x46a6acu: goto label_46a6ac;
        case 0x46a6b0u: goto label_46a6b0;
        case 0x46a6b4u: goto label_46a6b4;
        case 0x46a6b8u: goto label_46a6b8;
        case 0x46a6bcu: goto label_46a6bc;
        case 0x46a6c0u: goto label_46a6c0;
        case 0x46a6c4u: goto label_46a6c4;
        case 0x46a6c8u: goto label_46a6c8;
        case 0x46a6ccu: goto label_46a6cc;
        case 0x46a6d0u: goto label_46a6d0;
        case 0x46a6d4u: goto label_46a6d4;
        case 0x46a6d8u: goto label_46a6d8;
        case 0x46a6dcu: goto label_46a6dc;
        case 0x46a6e0u: goto label_46a6e0;
        case 0x46a6e4u: goto label_46a6e4;
        case 0x46a6e8u: goto label_46a6e8;
        case 0x46a6ecu: goto label_46a6ec;
        case 0x46a6f0u: goto label_46a6f0;
        case 0x46a6f4u: goto label_46a6f4;
        case 0x46a6f8u: goto label_46a6f8;
        case 0x46a6fcu: goto label_46a6fc;
        case 0x46a700u: goto label_46a700;
        case 0x46a704u: goto label_46a704;
        case 0x46a708u: goto label_46a708;
        case 0x46a70cu: goto label_46a70c;
        case 0x46a710u: goto label_46a710;
        case 0x46a714u: goto label_46a714;
        case 0x46a718u: goto label_46a718;
        case 0x46a71cu: goto label_46a71c;
        case 0x46a720u: goto label_46a720;
        case 0x46a724u: goto label_46a724;
        case 0x46a728u: goto label_46a728;
        case 0x46a72cu: goto label_46a72c;
        case 0x46a730u: goto label_46a730;
        case 0x46a734u: goto label_46a734;
        case 0x46a738u: goto label_46a738;
        case 0x46a73cu: goto label_46a73c;
        case 0x46a740u: goto label_46a740;
        case 0x46a744u: goto label_46a744;
        case 0x46a748u: goto label_46a748;
        case 0x46a74cu: goto label_46a74c;
        case 0x46a750u: goto label_46a750;
        case 0x46a754u: goto label_46a754;
        case 0x46a758u: goto label_46a758;
        case 0x46a75cu: goto label_46a75c;
        case 0x46a760u: goto label_46a760;
        case 0x46a764u: goto label_46a764;
        case 0x46a768u: goto label_46a768;
        case 0x46a76cu: goto label_46a76c;
        case 0x46a770u: goto label_46a770;
        case 0x46a774u: goto label_46a774;
        case 0x46a778u: goto label_46a778;
        case 0x46a77cu: goto label_46a77c;
        case 0x46a780u: goto label_46a780;
        case 0x46a784u: goto label_46a784;
        case 0x46a788u: goto label_46a788;
        case 0x46a78cu: goto label_46a78c;
        default: break;
    }

    ctx->pc = 0x46a030u;

label_46a030:
    // 0x46a030: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_46a034:
    // 0x46a034: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46a034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46a038:
    // 0x46a038: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x46a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_46a03c:
    // 0x46a03c: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46a040:
    // 0x46a040: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x46a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_46a044:
    // 0x46a044: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46a048:
    // 0x46a048: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46a04c:
    // 0x46a04c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46a050:
    // 0x46a050: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46a054:
    // 0x46a054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46a058:
    // 0x46a058: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x46a058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a05c:
    // 0x46a05c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x46a05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46a060:
    // 0x46a060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46a064:
    // 0x46a064: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x46a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_46a068:
    // 0x46a068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46a06c:
    // 0x46a06c: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x46a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_46a070:
    // 0x46a070: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x46a070u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46a074:
    // 0x46a074: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x46a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_46a078:
    // 0x46a078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46a07c:
    // 0x46a07c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x46a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_46a080:
    // 0x46a080: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x46a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46a084:
    // 0x46a084: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x46a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_46a088:
    // 0x46a088: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x46a088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_46a08c:
    // 0x46a08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46a090:
    // 0x46a090: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x46a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_46a094:
    // 0x46a094: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x46a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_46a098:
    // 0x46a098: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a09c:
    // 0x46a09c: 0xc123240  jal         func_48C900
label_46a0a0:
    if (ctx->pc == 0x46A0A0u) {
        ctx->pc = 0x46A0A0u;
            // 0x46a0a0: 0x24700070  addiu       $s0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->pc = 0x46A0A4u;
        goto label_46a0a4;
    }
    ctx->pc = 0x46A09Cu;
    SET_GPR_U32(ctx, 31, 0x46A0A4u);
    ctx->pc = 0x46A0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A09Cu;
            // 0x46a0a0: 0x24700070  addiu       $s0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A0A4u; }
        if (ctx->pc != 0x46A0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A0A4u; }
        if (ctx->pc != 0x46A0A4u) { return; }
    }
    ctx->pc = 0x46A0A4u;
label_46a0a4:
    // 0x46a0a4: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a0a8:
    // 0x46a0a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46a0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46a0ac:
    // 0x46a0ac: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46a0acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46a0b0:
    // 0x46a0b0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x46a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_46a0b4:
    // 0x46a0b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46a0b8:
    // 0x46a0b8: 0xc123240  jal         func_48C900
label_46a0bc:
    if (ctx->pc == 0x46A0BCu) {
        ctx->pc = 0x46A0BCu;
            // 0x46a0bc: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x46A0C0u;
        goto label_46a0c0;
    }
    ctx->pc = 0x46A0B8u;
    SET_GPR_U32(ctx, 31, 0x46A0C0u);
    ctx->pc = 0x46A0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A0B8u;
            // 0x46a0bc: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A0C0u; }
        if (ctx->pc != 0x46A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A0C0u; }
        if (ctx->pc != 0x46A0C0u) { return; }
    }
    ctx->pc = 0x46A0C0u;
label_46a0c0:
    // 0x46a0c0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x46a0c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_46a0c4:
    // 0x46a0c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46a0c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46a0c8:
    // 0x46a0c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_46a0cc:
    if (ctx->pc == 0x46A0CCu) {
        ctx->pc = 0x46A0CCu;
            // 0x46a0cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A0D0u;
        goto label_46a0d0;
    }
    ctx->pc = 0x46A0C8u;
    {
        const bool branch_taken_0x46a0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A0C8u;
            // 0x46a0cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a0c8) {
            ctx->pc = 0x46A0D4u;
            goto label_46a0d4;
        }
    }
    ctx->pc = 0x46A0D0u;
label_46a0d0:
    // 0x46a0d0: 0x36310100  ori         $s1, $s1, 0x100
    ctx->pc = 0x46a0d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
label_46a0d4:
    // 0x46a0d4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x46a0d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_46a0d8:
    // 0x46a0d8: 0x50200018  beql        $at, $zero, . + 4 + (0x18 << 2)
label_46a0dc:
    if (ctx->pc == 0x46A0DCu) {
        ctx->pc = 0x46A0DCu;
            // 0x46a0dc: 0x93c50000  lbu         $a1, 0x0($fp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x46A0E0u;
        goto label_46a0e0;
    }
    ctx->pc = 0x46A0D8u;
    {
        const bool branch_taken_0x46a0d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a0d8) {
            ctx->pc = 0x46A0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A0D8u;
            // 0x46a0dc: 0x93c50000  lbu         $a1, 0x0($fp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A13Cu;
            goto label_46a13c;
        }
    }
    ctx->pc = 0x46A0E0u;
label_46a0e0:
    // 0x46a0e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46a0e4:
    // 0x46a0e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x46a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46a0e8:
    // 0x46a0e8: 0x24a5eda0  addiu       $a1, $a1, -0x1260
    ctx->pc = 0x46a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962592));
label_46a0ec:
    // 0x46a0ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_46a0f0:
    // 0x46a0f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x46a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46a0f4:
    // 0x46a0f4: 0x800008  jr          $a0
label_46a0f8:
    if (ctx->pc == 0x46A0F8u) {
        ctx->pc = 0x46A0FCu;
        goto label_46a0fc;
    }
    ctx->pc = 0x46A0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46A0FCu: goto label_46a0fc;
            case 0x46A104u: goto label_46a104;
            case 0x46A10Cu: goto label_46a10c;
            case 0x46A124u: goto label_46a124;
            case 0x46A12Cu: goto label_46a12c;
            case 0x46A134u: goto label_46a134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46A0FCu;
label_46a0fc:
    // 0x46a0fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_46a100:
    if (ctx->pc == 0x46A100u) {
        ctx->pc = 0x46A100u;
            // 0x46a100: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x46A104u;
        goto label_46a104;
    }
    ctx->pc = 0x46A0FCu;
    {
        const bool branch_taken_0x46a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A0FCu;
            // 0x46a100: 0x36310001  ori         $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a0fc) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A104u;
label_46a104:
    // 0x46a104: 0x1000000c  b           . + 4 + (0xC << 2)
label_46a108:
    if (ctx->pc == 0x46A108u) {
        ctx->pc = 0x46A108u;
            // 0x46a108: 0x36310006  ori         $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
        ctx->pc = 0x46A10Cu;
        goto label_46a10c;
    }
    ctx->pc = 0x46A104u;
    {
        const bool branch_taken_0x46a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A104u;
            // 0x46a108: 0x36310006  ori         $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a104) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A10Cu;
label_46a10c:
    // 0x46a10c: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x46a10cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a110:
    // 0x46a110: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x46a110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_46a114:
    // 0x46a114: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_46a118:
    if (ctx->pc == 0x46A118u) {
        ctx->pc = 0x46A118u;
            // 0x46a118: 0x3631001e  ori         $s1, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)30);
        ctx->pc = 0x46A11Cu;
        goto label_46a11c;
    }
    ctx->pc = 0x46A114u;
    {
        const bool branch_taken_0x46a114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A114u;
            // 0x46a118: 0x3631001e  ori         $s1, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a114) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A11Cu;
label_46a11c:
    // 0x46a11c: 0x10000006  b           . + 4 + (0x6 << 2)
label_46a120:
    if (ctx->pc == 0x46A120u) {
        ctx->pc = 0x46A120u;
            // 0x46a120: 0x36310020  ori         $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x46A124u;
        goto label_46a124;
    }
    ctx->pc = 0x46A11Cu;
    {
        const bool branch_taken_0x46a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A11Cu;
            // 0x46a120: 0x36310020  ori         $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a11c) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A124u;
label_46a124:
    // 0x46a124: 0x10000004  b           . + 4 + (0x4 << 2)
label_46a128:
    if (ctx->pc == 0x46A128u) {
        ctx->pc = 0x46A128u;
            // 0x46a128: 0x36310007  ori         $s1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7);
        ctx->pc = 0x46A12Cu;
        goto label_46a12c;
    }
    ctx->pc = 0x46A124u;
    {
        const bool branch_taken_0x46a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A124u;
            // 0x46a128: 0x36310007  ori         $s1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a124) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A12Cu;
label_46a12c:
    // 0x46a12c: 0x10000002  b           . + 4 + (0x2 << 2)
label_46a130:
    if (ctx->pc == 0x46A130u) {
        ctx->pc = 0x46A130u;
            // 0x46a130: 0x3631003e  ori         $s1, $s1, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)62);
        ctx->pc = 0x46A134u;
        goto label_46a134;
    }
    ctx->pc = 0x46A12Cu;
    {
        const bool branch_taken_0x46a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A12Cu;
            // 0x46a130: 0x3631003e  ori         $s1, $s1, 0x3E (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)62);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a12c) {
            ctx->pc = 0x46A138u;
            goto label_46a138;
        }
    }
    ctx->pc = 0x46A134u;
label_46a134:
    // 0x46a134: 0x36310296  ori         $s1, $s1, 0x296
    ctx->pc = 0x46a134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)662);
label_46a138:
    // 0x46a138: 0x93c50000  lbu         $a1, 0x0($fp)
    ctx->pc = 0x46a138u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_46a13c:
    // 0x46a13c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x46a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46a140:
    // 0x46a140: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x46a140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_46a144:
    // 0x46a144: 0x50a4000e  beql        $a1, $a0, . + 4 + (0xE << 2)
label_46a148:
    if (ctx->pc == 0x46A148u) {
        ctx->pc = 0x46A148u;
            // 0x46a148: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->pc = 0x46A14Cu;
        goto label_46a14c;
    }
    ctx->pc = 0x46A144u;
    {
        const bool branch_taken_0x46a144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x46a144) {
            ctx->pc = 0x46A148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A144u;
            // 0x46a148: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A180u;
            goto label_46a180;
        }
    }
    ctx->pc = 0x46A14Cu;
label_46a14c:
    // 0x46a14c: 0x93c50001  lbu         $a1, 0x1($fp)
    ctx->pc = 0x46a14cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
label_46a150:
    // 0x46a150: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x46a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46a154:
    // 0x46a154: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
label_46a158:
    if (ctx->pc == 0x46A158u) {
        ctx->pc = 0x46A15Cu;
        goto label_46a15c;
    }
    ctx->pc = 0x46A154u;
    {
        const bool branch_taken_0x46a154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x46a154) {
            ctx->pc = 0x46A17Cu;
            goto label_46a17c;
        }
    }
    ctx->pc = 0x46A15Cu;
label_46a15c:
    // 0x46a15c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x46a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_46a160:
    // 0x46a160: 0x30840006  andi        $a0, $a0, 0x6
    ctx->pc = 0x46a160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_46a164:
    // 0x46a164: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_46a168:
    if (ctx->pc == 0x46A168u) {
        ctx->pc = 0x46A16Cu;
        goto label_46a16c;
    }
    ctx->pc = 0x46A164u;
    {
        const bool branch_taken_0x46a164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a164) {
            ctx->pc = 0x46A17Cu;
            goto label_46a17c;
        }
    }
    ctx->pc = 0x46A16Cu;
label_46a16c:
    // 0x46a16c: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x46a16cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a170:
    // 0x46a170: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x46a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_46a174:
    // 0x46a174: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46a178:
    if (ctx->pc == 0x46A178u) {
        ctx->pc = 0x46A178u;
            // 0x46a178: 0x32240002  andi        $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x46A17Cu;
        goto label_46a17c;
    }
    ctx->pc = 0x46A174u;
    {
        const bool branch_taken_0x46a174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a174) {
            ctx->pc = 0x46A178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A174u;
            // 0x46a178: 0x32240002  andi        $a0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A188u;
            goto label_46a188;
        }
    }
    ctx->pc = 0x46A17Cu;
label_46a17c:
    // 0x46a17c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x46a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_46a180:
    // 0x46a180: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x46a180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_46a184:
    // 0x46a184: 0x32240002  andi        $a0, $s1, 0x2
    ctx->pc = 0x46a184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_46a188:
    // 0x46a188: 0x5080004d  beql        $a0, $zero, . + 4 + (0x4D << 2)
label_46a18c:
    if (ctx->pc == 0x46A18Cu) {
        ctx->pc = 0x46A18Cu;
            // 0x46a18c: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x46A190u;
        goto label_46a190;
    }
    ctx->pc = 0x46A188u;
    {
        const bool branch_taken_0x46a188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a188) {
            ctx->pc = 0x46A18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A188u;
            // 0x46a18c: 0x32230004  andi        $v1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A2C0u;
            goto label_46a2c0;
        }
    }
    ctx->pc = 0x46A190u;
label_46a190:
    // 0x46a190: 0x12e0004a  beqz        $s7, . + 4 + (0x4A << 2)
label_46a194:
    if (ctx->pc == 0x46A194u) {
        ctx->pc = 0x46A198u;
        goto label_46a198;
    }
    ctx->pc = 0x46A190u;
    {
        const bool branch_taken_0x46a190 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a190) {
            ctx->pc = 0x46A2BCu;
            goto label_46a2bc;
        }
    }
    ctx->pc = 0x46A198u;
label_46a198:
    // 0x46a198: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x46a198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_46a19c:
    // 0x46a19c: 0x50200014  beql        $at, $zero, . + 4 + (0x14 << 2)
label_46a1a0:
    if (ctx->pc == 0x46A1A0u) {
        ctx->pc = 0x46A1A0u;
            // 0x46a1a0: 0x26620024  addiu       $v0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x46A1A4u;
        goto label_46a1a4;
    }
    ctx->pc = 0x46A19Cu;
    {
        const bool branch_taken_0x46a19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a19c) {
            ctx->pc = 0x46A1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A19Cu;
            // 0x46a1a0: 0x26620024  addiu       $v0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A1F0u;
            goto label_46a1f0;
        }
    }
    ctx->pc = 0x46A1A4u;
label_46a1a4:
    // 0x46a1a4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a1a8:
    // 0x46a1a8: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x46a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_46a1ac:
    // 0x46a1ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46a1b0:
    // 0x46a1b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a1b4:
    // 0x46a1b4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a1b8:
    // 0x46a1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46a1bc:
    // 0x46a1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a1c0:
    // 0x46a1c0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46a1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46a1c4:
    // 0x46a1c4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a1c8:
    // 0x46a1c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a1cc:
    // 0x46a1cc: 0xc12326c  jal         func_48C9B0
label_46a1d0:
    if (ctx->pc == 0x46A1D0u) {
        ctx->pc = 0x46A1D0u;
            // 0x46a1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A1D4u;
        goto label_46a1d4;
    }
    ctx->pc = 0x46A1CCu;
    SET_GPR_U32(ctx, 31, 0x46A1D4u);
    ctx->pc = 0x46A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A1CCu;
            // 0x46a1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A1D4u; }
        if (ctx->pc != 0x46A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A1D4u; }
        if (ctx->pc != 0x46A1D4u) { return; }
    }
    ctx->pc = 0x46A1D4u;
label_46a1d4:
    // 0x46a1d4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a1d8:
    // 0x46a1d8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x46a1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46a1dc:
    // 0x46a1dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a1e0:
    // 0x46a1e0: 0xc1232ac  jal         func_48CAB0
label_46a1e4:
    if (ctx->pc == 0x46A1E4u) {
        ctx->pc = 0x46A1E4u;
            // 0x46a1e4: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x46A1E8u;
        goto label_46a1e8;
    }
    ctx->pc = 0x46A1E0u;
    SET_GPR_U32(ctx, 31, 0x46A1E8u);
    ctx->pc = 0x46A1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A1E0u;
            // 0x46a1e4: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A1E8u; }
        if (ctx->pc != 0x46A1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A1E8u; }
        if (ctx->pc != 0x46A1E8u) { return; }
    }
    ctx->pc = 0x46A1E8u;
label_46a1e8:
    // 0x46a1e8: 0x10000034  b           . + 4 + (0x34 << 2)
label_46a1ec:
    if (ctx->pc == 0x46A1ECu) {
        ctx->pc = 0x46A1F0u;
        goto label_46a1f0;
    }
    ctx->pc = 0x46A1E8u;
    {
        const bool branch_taken_0x46a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a1e8) {
            ctx->pc = 0x46A2BCu;
            goto label_46a2bc;
        }
    }
    ctx->pc = 0x46A1F0u;
label_46a1f0:
    // 0x46a1f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46a1f4:
    // 0x46a1f4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x46a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_46a1f8:
    // 0x46a1f8: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x46a1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46a1fc:
    // 0x46a1fc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a200:
    // 0x46a200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a204:
    // 0x46a204: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a208:
    // 0x46a208: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a20c:
    // 0x46a20c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46a210:
    // 0x46a210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a214:
    // 0x46a214: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46a214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46a218:
    // 0x46a218: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a21c:
    // 0x46a21c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a220:
    // 0x46a220: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a224:
    // 0x46a224: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46a228:
    // 0x46a228: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a22c:
    // 0x46a22c: 0xc12512c  jal         func_4944B0
label_46a230:
    if (ctx->pc == 0x46A230u) {
        ctx->pc = 0x46A230u;
            // 0x46a230: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->pc = 0x46A234u;
        goto label_46a234;
    }
    ctx->pc = 0x46A22Cu;
    SET_GPR_U32(ctx, 31, 0x46A234u);
    ctx->pc = 0x46A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A22Cu;
            // 0x46a230: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A234u; }
        if (ctx->pc != 0x46A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A234u; }
        if (ctx->pc != 0x46A234u) { return; }
    }
    ctx->pc = 0x46A234u;
label_46a234:
    // 0x46a234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46a238:
    // 0x46a238: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a23c:
    // 0x46a23c: 0x8c560004  lw          $s6, 0x4($v0)
    ctx->pc = 0x46a23cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a240:
    // 0x46a240: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x46a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_46a244:
    // 0x46a244: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46a248:
    // 0x46a248: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a24c:
    // 0x46a24c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46a24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46a250:
    // 0x46a250: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46a250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46a254:
    // 0x46a254: 0x320f809  jalr        $t9
label_46a258:
    if (ctx->pc == 0x46A258u) {
        ctx->pc = 0x46A25Cu;
        goto label_46a25c;
    }
    ctx->pc = 0x46A254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46A25Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46A25Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46A25Cu; }
            if (ctx->pc != 0x46A25Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46A25Cu;
label_46a25c:
    // 0x46a25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a260:
    // 0x46a260: 0xa2c2007c  sb          $v0, 0x7C($s6)
    ctx->pc = 0x46a260u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 124), (uint8_t)GPR_U32(ctx, 2));
label_46a264:
    // 0x46a264: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x46a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_46a268:
    // 0x46a268: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46a26c:
    // 0x46a26c: 0xc123848  jal         func_48E120
label_46a270:
    if (ctx->pc == 0x46A270u) {
        ctx->pc = 0x46A270u;
            // 0x46a270: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46A274u;
        goto label_46a274;
    }
    ctx->pc = 0x46A26Cu;
    SET_GPR_U32(ctx, 31, 0x46A274u);
    ctx->pc = 0x46A270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A26Cu;
            // 0x46a270: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A274u; }
        if (ctx->pc != 0x46A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A274u; }
        if (ctx->pc != 0x46A274u) { return; }
    }
    ctx->pc = 0x46A274u;
label_46a274:
    // 0x46a274: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x46a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_46a278:
    // 0x46a278: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a27c:
    // 0x46a27c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x46a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_46a280:
    // 0x46a280: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x46a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_46a284:
    // 0x46a284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a288:
    // 0x46a288: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46a288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46a28c:
    // 0x46a28c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a290:
    // 0x46a290: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a294:
    // 0x46a294: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46a294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46a298:
    // 0x46a298: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a29c:
    // 0x46a29c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a2a0:
    // 0x46a2a0: 0xc12326c  jal         func_48C9B0
label_46a2a4:
    if (ctx->pc == 0x46A2A4u) {
        ctx->pc = 0x46A2A4u;
            // 0x46a2a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A2A8u;
        goto label_46a2a8;
    }
    ctx->pc = 0x46A2A0u;
    SET_GPR_U32(ctx, 31, 0x46A2A8u);
    ctx->pc = 0x46A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A2A0u;
            // 0x46a2a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2A8u; }
        if (ctx->pc != 0x46A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2A8u; }
        if (ctx->pc != 0x46A2A8u) { return; }
    }
    ctx->pc = 0x46A2A8u;
label_46a2a8:
    // 0x46a2a8: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a2ac:
    // 0x46a2ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x46a2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46a2b0:
    // 0x46a2b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a2b4:
    // 0x46a2b4: 0xc1232ac  jal         func_48CAB0
label_46a2b8:
    if (ctx->pc == 0x46A2B8u) {
        ctx->pc = 0x46A2B8u;
            // 0x46a2b8: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x46A2BCu;
        goto label_46a2bc;
    }
    ctx->pc = 0x46A2B4u;
    SET_GPR_U32(ctx, 31, 0x46A2BCu);
    ctx->pc = 0x46A2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A2B4u;
            // 0x46a2b8: 0x26650024  addiu       $a1, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2BCu; }
        if (ctx->pc != 0x46A2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2BCu; }
        if (ctx->pc != 0x46A2BCu) { return; }
    }
    ctx->pc = 0x46A2BCu;
label_46a2bc:
    // 0x46a2bc: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x46a2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_46a2c0:
    // 0x46a2c0: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_46a2c4:
    if (ctx->pc == 0x46A2C4u) {
        ctx->pc = 0x46A2C4u;
            // 0x46a2c4: 0x32230008  andi        $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x46A2C8u;
        goto label_46a2c8;
    }
    ctx->pc = 0x46A2C0u;
    {
        const bool branch_taken_0x46a2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a2c0) {
            ctx->pc = 0x46A2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A2C0u;
            // 0x46a2c4: 0x32230008  andi        $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A36Cu;
            goto label_46a36c;
        }
    }
    ctx->pc = 0x46A2C8u;
label_46a2c8:
    // 0x46a2c8: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
label_46a2cc:
    if (ctx->pc == 0x46A2CCu) {
        ctx->pc = 0x46A2D0u;
        goto label_46a2d0;
    }
    ctx->pc = 0x46A2C8u;
    {
        const bool branch_taken_0x46a2c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a2c8) {
            ctx->pc = 0x46A368u;
            goto label_46a368;
        }
    }
    ctx->pc = 0x46A2D0u;
label_46a2d0:
    // 0x46a2d0: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a2d4:
    // 0x46a2d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46a2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46a2d8:
    // 0x46a2d8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46a2d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46a2dc:
    // 0x46a2dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46a2e0:
    // 0x46a2e0: 0xc12326c  jal         func_48C9B0
label_46a2e4:
    if (ctx->pc == 0x46A2E4u) {
        ctx->pc = 0x46A2E4u;
            // 0x46a2e4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46A2E8u;
        goto label_46a2e8;
    }
    ctx->pc = 0x46A2E0u;
    SET_GPR_U32(ctx, 31, 0x46A2E8u);
    ctx->pc = 0x46A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A2E0u;
            // 0x46a2e4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2E8u; }
        if (ctx->pc != 0x46A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A2E8u; }
        if (ctx->pc != 0x46A2E8u) { return; }
    }
    ctx->pc = 0x46A2E8u;
label_46a2e8:
    // 0x46a2e8: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a2ec:
    // 0x46a2ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46a2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46a2f0:
    // 0x46a2f0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46a2f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46a2f4:
    // 0x46a2f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46a2f8:
    // 0x46a2f8: 0xc1232ac  jal         func_48CAB0
label_46a2fc:
    if (ctx->pc == 0x46A2FCu) {
        ctx->pc = 0x46A2FCu;
            // 0x46a2fc: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46A300u;
        goto label_46a300;
    }
    ctx->pc = 0x46A2F8u;
    SET_GPR_U32(ctx, 31, 0x46A300u);
    ctx->pc = 0x46A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A2F8u;
            // 0x46a2fc: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A300u; }
        if (ctx->pc != 0x46A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A300u; }
        if (ctx->pc != 0x46A300u) { return; }
    }
    ctx->pc = 0x46A300u;
label_46a300:
    // 0x46a300: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x46a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a304:
    // 0x46a304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46a304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a308:
    // 0x46a308: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x46a308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46a30c:
    // 0x46a30c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x46a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46a310:
    // 0x46a310: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x46a310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_46a314:
    // 0x46a314: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x46a314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46a318:
    // 0x46a318: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x46a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_46a31c:
    // 0x46a31c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46a320:
    // 0x46a320: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46a324:
    // 0x46a324: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x46a324u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_46a328:
    // 0x46a328: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
label_46a32c:
    if (ctx->pc == 0x46A32Cu) {
        ctx->pc = 0x46A330u;
        goto label_46a330;
    }
    ctx->pc = 0x46A328u;
    {
        const bool branch_taken_0x46a328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x46a328) {
            ctx->pc = 0x46A368u;
            goto label_46a368;
        }
    }
    ctx->pc = 0x46A330u;
label_46a330:
    // 0x46a330: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x46a330u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_46a334:
    // 0x46a334: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46a334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46a338:
    // 0x46a338: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_46a33c:
    if (ctx->pc == 0x46A33Cu) {
        ctx->pc = 0x46A33Cu;
            // 0x46a33c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A340u;
        goto label_46a340;
    }
    ctx->pc = 0x46A338u;
    {
        const bool branch_taken_0x46a338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46a338) {
            ctx->pc = 0x46A33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A338u;
            // 0x46a33c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A360u;
            goto label_46a360;
        }
    }
    ctx->pc = 0x46A340u;
label_46a340:
    // 0x46a340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a344:
    // 0x46a344: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_46a348:
    if (ctx->pc == 0x46A348u) {
        ctx->pc = 0x46A34Cu;
        goto label_46a34c;
    }
    ctx->pc = 0x46A344u;
    {
        const bool branch_taken_0x46a344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46a344) {
            ctx->pc = 0x46A35Cu;
            goto label_46a35c;
        }
    }
    ctx->pc = 0x46A34Cu;
label_46a34c:
    // 0x46a34c: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
label_46a350:
    if (ctx->pc == 0x46A350u) {
        ctx->pc = 0x46A354u;
        goto label_46a354;
    }
    ctx->pc = 0x46A34Cu;
    {
        const bool branch_taken_0x46a34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x46a34c) {
            ctx->pc = 0x46A35Cu;
            goto label_46a35c;
        }
    }
    ctx->pc = 0x46A354u;
label_46a354:
    // 0x46a354: 0x10000004  b           . + 4 + (0x4 << 2)
label_46a358:
    if (ctx->pc == 0x46A358u) {
        ctx->pc = 0x46A35Cu;
        goto label_46a35c;
    }
    ctx->pc = 0x46A354u;
    {
        const bool branch_taken_0x46a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a354) {
            ctx->pc = 0x46A368u;
            goto label_46a368;
        }
    }
    ctx->pc = 0x46A35Cu;
label_46a35c:
    // 0x46a35c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46a35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46a360:
    // 0x46a360: 0xc11a9e4  jal         func_46A790
label_46a364:
    if (ctx->pc == 0x46A364u) {
        ctx->pc = 0x46A364u;
            // 0x46a364: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A368u;
        goto label_46a368;
    }
    ctx->pc = 0x46A360u;
    SET_GPR_U32(ctx, 31, 0x46A368u);
    ctx->pc = 0x46A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A360u;
            // 0x46a364: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46A790u;
    if (runtime->hasFunction(0x46A790u)) {
        auto targetFn = runtime->lookupFunction(0x46A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A368u; }
        if (ctx->pc != 0x46A368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046A790_0x46a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A368u; }
        if (ctx->pc != 0x46A368u) { return; }
    }
    ctx->pc = 0x46A368u;
label_46a368:
    // 0x46a368: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x46a368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_46a36c:
    // 0x46a36c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_46a370:
    if (ctx->pc == 0x46A370u) {
        ctx->pc = 0x46A370u;
            // 0x46a370: 0x32230010  andi        $v1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x46A374u;
        goto label_46a374;
    }
    ctx->pc = 0x46A36Cu;
    {
        const bool branch_taken_0x46a36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a36c) {
            ctx->pc = 0x46A370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A36Cu;
            // 0x46a370: 0x32230010  andi        $v1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A394u;
            goto label_46a394;
        }
    }
    ctx->pc = 0x46A374u;
label_46a374:
    // 0x46a374: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_46a378:
    if (ctx->pc == 0x46A378u) {
        ctx->pc = 0x46A37Cu;
        goto label_46a37c;
    }
    ctx->pc = 0x46A374u;
    {
        const bool branch_taken_0x46a374 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a374) {
            ctx->pc = 0x46A390u;
            goto label_46a390;
        }
    }
    ctx->pc = 0x46A37Cu;
label_46a37c:
    // 0x46a37c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a380:
    // 0x46a380: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x46a380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46a384:
    // 0x46a384: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a388:
    // 0x46a388: 0xc1232ac  jal         func_48CAB0
label_46a38c:
    if (ctx->pc == 0x46A38Cu) {
        ctx->pc = 0x46A38Cu;
            // 0x46a38c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A390u;
        goto label_46a390;
    }
    ctx->pc = 0x46A388u;
    SET_GPR_U32(ctx, 31, 0x46A390u);
    ctx->pc = 0x46A38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A388u;
            // 0x46a38c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A390u; }
        if (ctx->pc != 0x46A390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A390u; }
        if (ctx->pc != 0x46A390u) { return; }
    }
    ctx->pc = 0x46A390u;
label_46a390:
    // 0x46a390: 0x32230010  andi        $v1, $s1, 0x10
    ctx->pc = 0x46a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_46a394:
    // 0x46a394: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
label_46a398:
    if (ctx->pc == 0x46A398u) {
        ctx->pc = 0x46A398u;
            // 0x46a398: 0x32230100  andi        $v1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x46A39Cu;
        goto label_46a39c;
    }
    ctx->pc = 0x46A394u;
    {
        const bool branch_taken_0x46a394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a394) {
            ctx->pc = 0x46A398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A394u;
            // 0x46a398: 0x32230100  andi        $v1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A478u;
            goto label_46a478;
        }
    }
    ctx->pc = 0x46A39Cu;
label_46a39c:
    // 0x46a39c: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_46a3a0:
    if (ctx->pc == 0x46A3A0u) {
        ctx->pc = 0x46A3A4u;
        goto label_46a3a4;
    }
    ctx->pc = 0x46A39Cu;
    {
        const bool branch_taken_0x46a39c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a39c) {
            ctx->pc = 0x46A474u;
            goto label_46a474;
        }
    }
    ctx->pc = 0x46A3A4u;
label_46a3a4:
    // 0x46a3a4: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x46a3a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
label_46a3a8:
    // 0x46a3a8: 0x2455003b  addiu       $s5, $v0, 0x3B
    ctx->pc = 0x46a3a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 59));
label_46a3ac:
    // 0x46a3ac: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x46a3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_46a3b0:
    // 0x46a3b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46a3b4:
    if (ctx->pc == 0x46A3B4u) {
        ctx->pc = 0x46A3B4u;
            // 0x46a3b4: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46A3B8u;
        goto label_46a3b8;
    }
    ctx->pc = 0x46A3B0u;
    {
        const bool branch_taken_0x46a3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46a3b0) {
            ctx->pc = 0x46A3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A3B0u;
            // 0x46a3b4: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A3C0u;
            goto label_46a3c0;
        }
    }
    ctx->pc = 0x46A3B8u;
label_46a3b8:
    // 0x46a3b8: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x46a3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
label_46a3bc:
    // 0x46a3bc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a3c0:
    // 0x46a3c0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46a3c4:
    // 0x46a3c4: 0x15b080  sll         $s6, $s5, 2
    ctx->pc = 0x46a3c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_46a3c8:
    // 0x46a3c8: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x46a3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46a3cc:
    // 0x46a3cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a3d0:
    // 0x46a3d0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a3d4:
    // 0x46a3d4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46a3d8:
    // 0x46a3d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a3dc:
    // 0x46a3dc: 0xc12512c  jal         func_4944B0
label_46a3e0:
    if (ctx->pc == 0x46A3E0u) {
        ctx->pc = 0x46A3E0u;
            // 0x46a3e0: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->pc = 0x46A3E4u;
        goto label_46a3e4;
    }
    ctx->pc = 0x46A3DCu;
    SET_GPR_U32(ctx, 31, 0x46A3E4u);
    ctx->pc = 0x46A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A3DCu;
            // 0x46a3e0: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A3E4u; }
        if (ctx->pc != 0x46A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A3E4u; }
        if (ctx->pc != 0x46A3E4u) { return; }
    }
    ctx->pc = 0x46A3E4u;
label_46a3e4:
    // 0x46a3e4: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x46a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a3e8:
    // 0x46a3e8: 0x17182b  sltu        $v1, $zero, $s7
    ctx->pc = 0x46a3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_46a3ec:
    // 0x46a3ec: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x46a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_46a3f0:
    // 0x46a3f0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x46a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46a3f4:
    // 0x46a3f4: 0x8c970004  lw          $s7, 0x4($a0)
    ctx->pc = 0x46a3f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_46a3f8:
    // 0x46a3f8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x46a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_46a3fc:
    // 0x46a3fc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46a400:
    // 0x46a400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a404:
    // 0x46a404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46a404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46a408:
    // 0x46a408: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46a408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46a40c:
    // 0x46a40c: 0x320f809  jalr        $t9
label_46a410:
    if (ctx->pc == 0x46A410u) {
        ctx->pc = 0x46A414u;
        goto label_46a414;
    }
    ctx->pc = 0x46A40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46A414u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46A414u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46A414u; }
            if (ctx->pc != 0x46A414u) { return; }
        }
        }
    }
    ctx->pc = 0x46A414u;
label_46a414:
    // 0x46a414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a418:
    // 0x46a418: 0xa2e2007c  sb          $v0, 0x7C($s7)
    ctx->pc = 0x46a418u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 124), (uint8_t)GPR_U32(ctx, 2));
label_46a41c:
    // 0x46a41c: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x46a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_46a420:
    // 0x46a420: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46a424:
    // 0x46a424: 0xc123848  jal         func_48E120
label_46a428:
    if (ctx->pc == 0x46A428u) {
        ctx->pc = 0x46A428u;
            // 0x46a428: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46A42Cu;
        goto label_46a42c;
    }
    ctx->pc = 0x46A424u;
    SET_GPR_U32(ctx, 31, 0x46A42Cu);
    ctx->pc = 0x46A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A424u;
            // 0x46a428: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A42Cu; }
        if (ctx->pc != 0x46A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A42Cu; }
        if (ctx->pc != 0x46A42Cu) { return; }
    }
    ctx->pc = 0x46A42Cu;
label_46a42c:
    // 0x46a42c: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x46a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_46a430:
    // 0x46a430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a434:
    // 0x46a434: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46a438:
    // 0x46a438: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x46a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_46a43c:
    // 0x46a43c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46a440:
    // 0x46a440: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46a440u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46a444:
    // 0x46a444: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a448:
    // 0x46a448: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a44c:
    // 0x46a44c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46a44cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46a450:
    // 0x46a450: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a454:
    // 0x46a454: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a458:
    // 0x46a458: 0xc12326c  jal         func_48C9B0
label_46a45c:
    if (ctx->pc == 0x46A45Cu) {
        ctx->pc = 0x46A45Cu;
            // 0x46a45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A460u;
        goto label_46a460;
    }
    ctx->pc = 0x46A458u;
    SET_GPR_U32(ctx, 31, 0x46A460u);
    ctx->pc = 0x46A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A458u;
            // 0x46a45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A460u; }
        if (ctx->pc != 0x46A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A460u; }
        if (ctx->pc != 0x46A460u) { return; }
    }
    ctx->pc = 0x46A460u;
label_46a460:
    // 0x46a460: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a464:
    // 0x46a464: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46a468:
    // 0x46a468: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a46c:
    // 0x46a46c: 0xc1232ac  jal         func_48CAB0
label_46a470:
    if (ctx->pc == 0x46A470u) {
        ctx->pc = 0x46A470u;
            // 0x46a470: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A474u;
        goto label_46a474;
    }
    ctx->pc = 0x46A46Cu;
    SET_GPR_U32(ctx, 31, 0x46A474u);
    ctx->pc = 0x46A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A46Cu;
            // 0x46a470: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A474u; }
        if (ctx->pc != 0x46A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A474u; }
        if (ctx->pc != 0x46A474u) { return; }
    }
    ctx->pc = 0x46A474u;
label_46a474:
    // 0x46a474: 0x32230100  andi        $v1, $s1, 0x100
    ctx->pc = 0x46a474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_46a478:
    // 0x46a478: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_46a47c:
    if (ctx->pc == 0x46A47Cu) {
        ctx->pc = 0x46A47Cu;
            // 0x46a47c: 0x32230200  andi        $v1, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x46A480u;
        goto label_46a480;
    }
    ctx->pc = 0x46A478u;
    {
        const bool branch_taken_0x46a478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a478) {
            ctx->pc = 0x46A47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A478u;
            // 0x46a47c: 0x32230200  andi        $v1, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A4B4u;
            goto label_46a4b4;
        }
    }
    ctx->pc = 0x46A480u;
label_46a480:
    // 0x46a480: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_46a484:
    if (ctx->pc == 0x46A484u) {
        ctx->pc = 0x46A488u;
        goto label_46a488;
    }
    ctx->pc = 0x46A480u;
    {
        const bool branch_taken_0x46a480 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a480) {
            ctx->pc = 0x46A4B0u;
            goto label_46a4b0;
        }
    }
    ctx->pc = 0x46A488u;
label_46a488:
    // 0x46a488: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a48c:
    // 0x46a48c: 0x2665007e  addiu       $a1, $s3, 0x7E
    ctx->pc = 0x46a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 126));
label_46a490:
    // 0x46a490: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a494:
    // 0x46a494: 0xc12326c  jal         func_48C9B0
label_46a498:
    if (ctx->pc == 0x46A498u) {
        ctx->pc = 0x46A498u;
            // 0x46a498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A49Cu;
        goto label_46a49c;
    }
    ctx->pc = 0x46A494u;
    SET_GPR_U32(ctx, 31, 0x46A49Cu);
    ctx->pc = 0x46A498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A494u;
            // 0x46a498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A49Cu; }
        if (ctx->pc != 0x46A49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A49Cu; }
        if (ctx->pc != 0x46A49Cu) { return; }
    }
    ctx->pc = 0x46A49Cu;
label_46a49c:
    // 0x46a49c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a4a0:
    // 0x46a4a0: 0x2665007e  addiu       $a1, $s3, 0x7E
    ctx->pc = 0x46a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 126));
label_46a4a4:
    // 0x46a4a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a4a8:
    // 0x46a4a8: 0xc1232ac  jal         func_48CAB0
label_46a4ac:
    if (ctx->pc == 0x46A4ACu) {
        ctx->pc = 0x46A4ACu;
            // 0x46a4ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A4B0u;
        goto label_46a4b0;
    }
    ctx->pc = 0x46A4A8u;
    SET_GPR_U32(ctx, 31, 0x46A4B0u);
    ctx->pc = 0x46A4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A4A8u;
            // 0x46a4ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A4B0u; }
        if (ctx->pc != 0x46A4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A4B0u; }
        if (ctx->pc != 0x46A4B0u) { return; }
    }
    ctx->pc = 0x46A4B0u;
label_46a4b0:
    // 0x46a4b0: 0x32230200  andi        $v1, $s1, 0x200
    ctx->pc = 0x46a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
label_46a4b4:
    // 0x46a4b4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_46a4b8:
    if (ctx->pc == 0x46A4B8u) {
        ctx->pc = 0x46A4B8u;
            // 0x46a4b8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x46A4BCu;
        goto label_46a4bc;
    }
    ctx->pc = 0x46A4B4u;
    {
        const bool branch_taken_0x46a4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a4b4) {
            ctx->pc = 0x46A4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A4B4u;
            // 0x46a4b8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A4DCu;
            goto label_46a4dc;
        }
    }
    ctx->pc = 0x46A4BCu;
label_46a4bc:
    // 0x46a4bc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_46a4c0:
    if (ctx->pc == 0x46A4C0u) {
        ctx->pc = 0x46A4C4u;
        goto label_46a4c4;
    }
    ctx->pc = 0x46A4BCu;
    {
        const bool branch_taken_0x46a4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a4bc) {
            ctx->pc = 0x46A4D8u;
            goto label_46a4d8;
        }
    }
    ctx->pc = 0x46A4C4u;
label_46a4c4:
    // 0x46a4c4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a4c8:
    // 0x46a4c8: 0x2665007a  addiu       $a1, $s3, 0x7A
    ctx->pc = 0x46a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 122));
label_46a4cc:
    // 0x46a4cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a4d0:
    // 0x46a4d0: 0xc1232ac  jal         func_48CAB0
label_46a4d4:
    if (ctx->pc == 0x46A4D4u) {
        ctx->pc = 0x46A4D4u;
            // 0x46a4d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A4D8u;
        goto label_46a4d8;
    }
    ctx->pc = 0x46A4D0u;
    SET_GPR_U32(ctx, 31, 0x46A4D8u);
    ctx->pc = 0x46A4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A4D0u;
            // 0x46a4d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A4D8u; }
        if (ctx->pc != 0x46A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A4D8u; }
        if (ctx->pc != 0x46A4D8u) { return; }
    }
    ctx->pc = 0x46A4D8u;
label_46a4d8:
    // 0x46a4d8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x46a4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_46a4dc:
    // 0x46a4dc: 0x5060003d  beql        $v1, $zero, . + 4 + (0x3D << 2)
label_46a4e0:
    if (ctx->pc == 0x46A4E0u) {
        ctx->pc = 0x46A4E0u;
            // 0x46a4e0: 0x32230080  andi        $v1, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x46A4E4u;
        goto label_46a4e4;
    }
    ctx->pc = 0x46A4DCu;
    {
        const bool branch_taken_0x46a4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a4dc) {
            ctx->pc = 0x46A4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A4DCu;
            // 0x46a4e0: 0x32230080  andi        $v1, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A5D4u;
            goto label_46a5d4;
        }
    }
    ctx->pc = 0x46A4E4u;
label_46a4e4:
    // 0x46a4e4: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_46a4e8:
    if (ctx->pc == 0x46A4E8u) {
        ctx->pc = 0x46A4ECu;
        goto label_46a4ec;
    }
    ctx->pc = 0x46A4E4u;
    {
        const bool branch_taken_0x46a4e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a4e4) {
            ctx->pc = 0x46A5D0u;
            goto label_46a5d0;
        }
    }
    ctx->pc = 0x46A4ECu;
label_46a4ec:
    // 0x46a4ec: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x46a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_46a4f0:
    // 0x46a4f0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x46a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_46a4f4:
    // 0x46a4f4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x46a4f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46a4f8:
    // 0x46a4f8: 0x5020001c  beql        $at, $zero, . + 4 + (0x1C << 2)
label_46a4fc:
    if (ctx->pc == 0x46A4FCu) {
        ctx->pc = 0x46A4FCu;
            // 0x46a4fc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x46A500u;
        goto label_46a500;
    }
    ctx->pc = 0x46A4F8u;
    {
        const bool branch_taken_0x46a4f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a4f8) {
            ctx->pc = 0x46A4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A4F8u;
            // 0x46a4fc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A56Cu;
            goto label_46a56c;
        }
    }
    ctx->pc = 0x46A500u;
label_46a500:
    // 0x46a500: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46a500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a504:
    // 0x46a504: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x46a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_46a508:
    // 0x46a508: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_46a50c:
    if (ctx->pc == 0x46A50Cu) {
        ctx->pc = 0x46A50Cu;
            // 0x46a50c: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46A510u;
        goto label_46a510;
    }
    ctx->pc = 0x46A508u;
    {
        const bool branch_taken_0x46a508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a508) {
            ctx->pc = 0x46A50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A508u;
            // 0x46a50c: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A540u;
            goto label_46a540;
        }
    }
    ctx->pc = 0x46A510u;
label_46a510:
    // 0x46a510: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a514:
    // 0x46a514: 0x26650082  addiu       $a1, $s3, 0x82
    ctx->pc = 0x46a514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 130));
label_46a518:
    // 0x46a518: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a51c:
    // 0x46a51c: 0xc12326c  jal         func_48C9B0
label_46a520:
    if (ctx->pc == 0x46A520u) {
        ctx->pc = 0x46A520u;
            // 0x46a520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A524u;
        goto label_46a524;
    }
    ctx->pc = 0x46A51Cu;
    SET_GPR_U32(ctx, 31, 0x46A524u);
    ctx->pc = 0x46A520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A51Cu;
            // 0x46a520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A524u; }
        if (ctx->pc != 0x46A524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A524u; }
        if (ctx->pc != 0x46A524u) { return; }
    }
    ctx->pc = 0x46A524u;
label_46a524:
    // 0x46a524: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a528:
    // 0x46a528: 0x26650082  addiu       $a1, $s3, 0x82
    ctx->pc = 0x46a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 130));
label_46a52c:
    // 0x46a52c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a530:
    // 0x46a530: 0xc1232ac  jal         func_48CAB0
label_46a534:
    if (ctx->pc == 0x46A534u) {
        ctx->pc = 0x46A534u;
            // 0x46a534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A538u;
        goto label_46a538;
    }
    ctx->pc = 0x46A530u;
    SET_GPR_U32(ctx, 31, 0x46A538u);
    ctx->pc = 0x46A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A530u;
            // 0x46a534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A538u; }
        if (ctx->pc != 0x46A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A538u; }
        if (ctx->pc != 0x46A538u) { return; }
    }
    ctx->pc = 0x46A538u;
label_46a538:
    // 0x46a538: 0x10000025  b           . + 4 + (0x25 << 2)
label_46a53c:
    if (ctx->pc == 0x46A53Cu) {
        ctx->pc = 0x46A540u;
        goto label_46a540;
    }
    ctx->pc = 0x46A538u;
    {
        const bool branch_taken_0x46a538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a538) {
            ctx->pc = 0x46A5D0u;
            goto label_46a5d0;
        }
    }
    ctx->pc = 0x46A540u;
label_46a540:
    // 0x46a540: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x46a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_46a544:
    // 0x46a544: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a548:
    // 0x46a548: 0xc12326c  jal         func_48C9B0
label_46a54c:
    if (ctx->pc == 0x46A54Cu) {
        ctx->pc = 0x46A54Cu;
            // 0x46a54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A550u;
        goto label_46a550;
    }
    ctx->pc = 0x46A548u;
    SET_GPR_U32(ctx, 31, 0x46A550u);
    ctx->pc = 0x46A54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A548u;
            // 0x46a54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A550u; }
        if (ctx->pc != 0x46A550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A550u; }
        if (ctx->pc != 0x46A550u) { return; }
    }
    ctx->pc = 0x46A550u;
label_46a550:
    // 0x46a550: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a554:
    // 0x46a554: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x46a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_46a558:
    // 0x46a558: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a55c:
    // 0x46a55c: 0xc1232ac  jal         func_48CAB0
label_46a560:
    if (ctx->pc == 0x46A560u) {
        ctx->pc = 0x46A560u;
            // 0x46a560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A564u;
        goto label_46a564;
    }
    ctx->pc = 0x46A55Cu;
    SET_GPR_U32(ctx, 31, 0x46A564u);
    ctx->pc = 0x46A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A55Cu;
            // 0x46a560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A564u; }
        if (ctx->pc != 0x46A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A564u; }
        if (ctx->pc != 0x46A564u) { return; }
    }
    ctx->pc = 0x46A564u;
label_46a564:
    // 0x46a564: 0x1000001a  b           . + 4 + (0x1A << 2)
label_46a568:
    if (ctx->pc == 0x46A568u) {
        ctx->pc = 0x46A56Cu;
        goto label_46a56c;
    }
    ctx->pc = 0x46A564u;
    {
        const bool branch_taken_0x46a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a564) {
            ctx->pc = 0x46A5D0u;
            goto label_46a5d0;
        }
    }
    ctx->pc = 0x46A56Cu;
label_46a56c:
    // 0x46a56c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x46a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_46a570:
    // 0x46a570: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x46a570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_46a574:
    // 0x46a574: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
label_46a578:
    if (ctx->pc == 0x46A578u) {
        ctx->pc = 0x46A578u;
            // 0x46a578: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46A57Cu;
        goto label_46a57c;
    }
    ctx->pc = 0x46A574u;
    {
        const bool branch_taken_0x46a574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a574) {
            ctx->pc = 0x46A578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A574u;
            // 0x46a578: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A5ACu;
            goto label_46a5ac;
        }
    }
    ctx->pc = 0x46A57Cu;
label_46a57c:
    // 0x46a57c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a580:
    // 0x46a580: 0x26650099  addiu       $a1, $s3, 0x99
    ctx->pc = 0x46a580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
label_46a584:
    // 0x46a584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a588:
    // 0x46a588: 0xc12326c  jal         func_48C9B0
label_46a58c:
    if (ctx->pc == 0x46A58Cu) {
        ctx->pc = 0x46A58Cu;
            // 0x46a58c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A590u;
        goto label_46a590;
    }
    ctx->pc = 0x46A588u;
    SET_GPR_U32(ctx, 31, 0x46A590u);
    ctx->pc = 0x46A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A588u;
            // 0x46a58c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A590u; }
        if (ctx->pc != 0x46A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A590u; }
        if (ctx->pc != 0x46A590u) { return; }
    }
    ctx->pc = 0x46A590u;
label_46a590:
    // 0x46a590: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a594:
    // 0x46a594: 0x26650099  addiu       $a1, $s3, 0x99
    ctx->pc = 0x46a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
label_46a598:
    // 0x46a598: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a59c:
    // 0x46a59c: 0xc1232ac  jal         func_48CAB0
label_46a5a0:
    if (ctx->pc == 0x46A5A0u) {
        ctx->pc = 0x46A5A0u;
            // 0x46a5a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A5A4u;
        goto label_46a5a4;
    }
    ctx->pc = 0x46A59Cu;
    SET_GPR_U32(ctx, 31, 0x46A5A4u);
    ctx->pc = 0x46A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A59Cu;
            // 0x46a5a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5A4u; }
        if (ctx->pc != 0x46A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5A4u; }
        if (ctx->pc != 0x46A5A4u) { return; }
    }
    ctx->pc = 0x46A5A4u;
label_46a5a4:
    // 0x46a5a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_46a5a8:
    if (ctx->pc == 0x46A5A8u) {
        ctx->pc = 0x46A5ACu;
        goto label_46a5ac;
    }
    ctx->pc = 0x46A5A4u;
    {
        const bool branch_taken_0x46a5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5a4) {
            ctx->pc = 0x46A5D0u;
            goto label_46a5d0;
        }
    }
    ctx->pc = 0x46A5ACu;
label_46a5ac:
    // 0x46a5ac: 0x26650082  addiu       $a1, $s3, 0x82
    ctx->pc = 0x46a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 130));
label_46a5b0:
    // 0x46a5b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a5b4:
    // 0x46a5b4: 0xc12326c  jal         func_48C9B0
label_46a5b8:
    if (ctx->pc == 0x46A5B8u) {
        ctx->pc = 0x46A5B8u;
            // 0x46a5b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A5BCu;
        goto label_46a5bc;
    }
    ctx->pc = 0x46A5B4u;
    SET_GPR_U32(ctx, 31, 0x46A5BCu);
    ctx->pc = 0x46A5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A5B4u;
            // 0x46a5b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5BCu; }
        if (ctx->pc != 0x46A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5BCu; }
        if (ctx->pc != 0x46A5BCu) { return; }
    }
    ctx->pc = 0x46A5BCu;
label_46a5bc:
    // 0x46a5bc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a5c0:
    // 0x46a5c0: 0x26650082  addiu       $a1, $s3, 0x82
    ctx->pc = 0x46a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 130));
label_46a5c4:
    // 0x46a5c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a5c8:
    // 0x46a5c8: 0xc1232ac  jal         func_48CAB0
label_46a5cc:
    if (ctx->pc == 0x46A5CCu) {
        ctx->pc = 0x46A5CCu;
            // 0x46a5cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A5D0u;
        goto label_46a5d0;
    }
    ctx->pc = 0x46A5C8u;
    SET_GPR_U32(ctx, 31, 0x46A5D0u);
    ctx->pc = 0x46A5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A5C8u;
            // 0x46a5cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5D0u; }
        if (ctx->pc != 0x46A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5D0u; }
        if (ctx->pc != 0x46A5D0u) { return; }
    }
    ctx->pc = 0x46A5D0u;
label_46a5d0:
    // 0x46a5d0: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x46a5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_46a5d4:
    // 0x46a5d4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_46a5d8:
    if (ctx->pc == 0x46A5D8u) {
        ctx->pc = 0x46A5D8u;
            // 0x46a5d8: 0x32230020  andi        $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x46A5DCu;
        goto label_46a5dc;
    }
    ctx->pc = 0x46A5D4u;
    {
        const bool branch_taken_0x46a5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5d4) {
            ctx->pc = 0x46A5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A5D4u;
            // 0x46a5d8: 0x32230020  andi        $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A614u;
            goto label_46a614;
        }
    }
    ctx->pc = 0x46A5DCu;
label_46a5dc:
    // 0x46a5dc: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x46a5dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a5e0:
    // 0x46a5e0: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x46a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_46a5e4:
    // 0x46a5e4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_46a5e8:
    if (ctx->pc == 0x46A5E8u) {
        ctx->pc = 0x46A5E8u;
            // 0x46a5e8: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x46A5ECu;
        goto label_46a5ec;
    }
    ctx->pc = 0x46A5E4u;
    {
        const bool branch_taken_0x46a5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5e4) {
            ctx->pc = 0x46A5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A5E4u;
            // 0x46a5e8: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A600u;
            goto label_46a600;
        }
    }
    ctx->pc = 0x46A5ECu;
label_46a5ec:
    // 0x46a5ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46a5f0:
    // 0x46a5f0: 0xc11aacc  jal         func_46AB30
label_46a5f4:
    if (ctx->pc == 0x46A5F4u) {
        ctx->pc = 0x46A5F4u;
            // 0x46a5f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A5F8u;
        goto label_46a5f8;
    }
    ctx->pc = 0x46A5F0u;
    SET_GPR_U32(ctx, 31, 0x46A5F8u);
    ctx->pc = 0x46A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A5F0u;
            // 0x46a5f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46AB30u;
    if (runtime->hasFunction(0x46AB30u)) {
        auto targetFn = runtime->lookupFunction(0x46AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5F8u; }
        if (ctx->pc != 0x46A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046AB30_0x46ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A5F8u; }
        if (ctx->pc != 0x46A5F8u) { return; }
    }
    ctx->pc = 0x46A5F8u;
label_46a5f8:
    // 0x46a5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_46a5fc:
    if (ctx->pc == 0x46A5FCu) {
        ctx->pc = 0x46A600u;
        goto label_46a600;
    }
    ctx->pc = 0x46A5F8u;
    {
        const bool branch_taken_0x46a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5f8) {
            ctx->pc = 0x46A610u;
            goto label_46a610;
        }
    }
    ctx->pc = 0x46A600u;
label_46a600:
    // 0x46a600: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_46a604:
    if (ctx->pc == 0x46A604u) {
        ctx->pc = 0x46A608u;
        goto label_46a608;
    }
    ctx->pc = 0x46A600u;
    {
        const bool branch_taken_0x46a600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a600) {
            ctx->pc = 0x46A610u;
            goto label_46a610;
        }
    }
    ctx->pc = 0x46A608u;
label_46a608:
    // 0x46a608: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x46a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_46a60c:
    // 0x46a60c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x46a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_46a610:
    // 0x46a610: 0x32230020  andi        $v1, $s1, 0x20
    ctx->pc = 0x46a610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_46a614:
    // 0x46a614: 0x50600051  beql        $v1, $zero, . + 4 + (0x51 << 2)
label_46a618:
    if (ctx->pc == 0x46A618u) {
        ctx->pc = 0x46A618u;
            // 0x46a618: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x46A61Cu;
        goto label_46a61c;
    }
    ctx->pc = 0x46A614u;
    {
        const bool branch_taken_0x46a614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a614) {
            ctx->pc = 0x46A618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A614u;
            // 0x46a618: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A75Cu;
            goto label_46a75c;
        }
    }
    ctx->pc = 0x46A61Cu;
label_46a61c:
    // 0x46a61c: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
label_46a620:
    if (ctx->pc == 0x46A620u) {
        ctx->pc = 0x46A624u;
        goto label_46a624;
    }
    ctx->pc = 0x46A61Cu;
    {
        const bool branch_taken_0x46a61c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a61c) {
            ctx->pc = 0x46A758u;
            goto label_46a758;
        }
    }
    ctx->pc = 0x46A624u;
label_46a624:
    // 0x46a624: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46a624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a628:
    // 0x46a628: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x46a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_46a62c:
    // 0x46a62c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_46a630:
    if (ctx->pc == 0x46A630u) {
        ctx->pc = 0x46A630u;
            // 0x46a630: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46A634u;
        goto label_46a634;
    }
    ctx->pc = 0x46A62Cu;
    {
        const bool branch_taken_0x46a62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a62c) {
            ctx->pc = 0x46A630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46A62Cu;
            // 0x46a630: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46A6A0u;
            goto label_46a6a0;
        }
    }
    ctx->pc = 0x46A634u;
label_46a634:
    // 0x46a634: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a638:
    // 0x46a638: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46a638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46a63c:
    // 0x46a63c: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x46a63cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_46a640:
    // 0x46a640: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a644:
    // 0x46a644: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a648:
    // 0x46a648: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a64c:
    // 0x46a64c: 0xc12512c  jal         func_4944B0
label_46a650:
    if (ctx->pc == 0x46A650u) {
        ctx->pc = 0x46A650u;
            // 0x46a650: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->pc = 0x46A654u;
        goto label_46a654;
    }
    ctx->pc = 0x46A64Cu;
    SET_GPR_U32(ctx, 31, 0x46A654u);
    ctx->pc = 0x46A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A64Cu;
            // 0x46a650: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A654u; }
        if (ctx->pc != 0x46A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A654u; }
        if (ctx->pc != 0x46A654u) { return; }
    }
    ctx->pc = 0x46A654u;
label_46a654:
    // 0x46a654: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x46a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_46a658:
    // 0x46a658: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a65c:
    // 0x46a65c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46a65cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a660:
    // 0x46a660: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a664:
    // 0x46a664: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46a664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a668:
    // 0x46a668: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46a668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46a66c:
    // 0x46a66c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46a66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46a670:
    // 0x46a670: 0x320f809  jalr        $t9
label_46a674:
    if (ctx->pc == 0x46A674u) {
        ctx->pc = 0x46A678u;
        goto label_46a678;
    }
    ctx->pc = 0x46A670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46A678u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46A678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46A678u; }
            if (ctx->pc != 0x46A678u) { return; }
        }
        }
    }
    ctx->pc = 0x46A678u;
label_46a678:
    // 0x46a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a67c:
    // 0x46a67c: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46a67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46a680:
    // 0x46a680: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a684:
    // 0x46a684: 0xc123848  jal         func_48E120
label_46a688:
    if (ctx->pc == 0x46A688u) {
        ctx->pc = 0x46A688u;
            // 0x46a688: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->pc = 0x46A68Cu;
        goto label_46a68c;
    }
    ctx->pc = 0x46A684u;
    SET_GPR_U32(ctx, 31, 0x46A68Cu);
    ctx->pc = 0x46A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A684u;
            // 0x46a688: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A68Cu; }
        if (ctx->pc != 0x46A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A68Cu; }
        if (ctx->pc != 0x46A68Cu) { return; }
    }
    ctx->pc = 0x46A68Cu;
label_46a68c:
    // 0x46a68c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a690:
    // 0x46a690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a694:
    // 0x46a694: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x46a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a698:
    // 0x46a698: 0x1000001a  b           . + 4 + (0x1A << 2)
label_46a69c:
    if (ctx->pc == 0x46A69Cu) {
        ctx->pc = 0x46A69Cu;
            // 0x46a69c: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46A6A0u;
        goto label_46a6a0;
    }
    ctx->pc = 0x46A698u;
    {
        const bool branch_taken_0x46a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A698u;
            // 0x46a69c: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a698) {
            ctx->pc = 0x46A704u;
            goto label_46a704;
        }
    }
    ctx->pc = 0x46A6A0u;
label_46a6a0:
    // 0x46a6a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46a6a4:
    // 0x46a6a4: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x46a6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_46a6a8:
    // 0x46a6a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a6ac:
    // 0x46a6ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46a6b0:
    // 0x46a6b0: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a6b4:
    // 0x46a6b4: 0xc12512c  jal         func_4944B0
label_46a6b8:
    if (ctx->pc == 0x46A6B8u) {
        ctx->pc = 0x46A6B8u;
            // 0x46a6b8: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->pc = 0x46A6BCu;
        goto label_46a6bc;
    }
    ctx->pc = 0x46A6B4u;
    SET_GPR_U32(ctx, 31, 0x46A6BCu);
    ctx->pc = 0x46A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A6B4u;
            // 0x46a6b8: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A6BCu; }
        if (ctx->pc != 0x46A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A6BCu; }
        if (ctx->pc != 0x46A6BCu) { return; }
    }
    ctx->pc = 0x46A6BCu;
label_46a6bc:
    // 0x46a6bc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x46a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_46a6c0:
    // 0x46a6c0: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a6c4:
    // 0x46a6c4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46a6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a6c8:
    // 0x46a6c8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a6cc:
    // 0x46a6cc: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a6d0:
    // 0x46a6d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46a6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46a6d4:
    // 0x46a6d4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46a6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46a6d8:
    // 0x46a6d8: 0x320f809  jalr        $t9
label_46a6dc:
    if (ctx->pc == 0x46A6DCu) {
        ctx->pc = 0x46A6E0u;
        goto label_46a6e0;
    }
    ctx->pc = 0x46A6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46A6E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46A6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46A6E0u; }
            if (ctx->pc != 0x46A6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x46A6E0u;
label_46a6e0:
    // 0x46a6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46a6e4:
    // 0x46a6e4: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46a6e8:
    // 0x46a6e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a6ec:
    // 0x46a6ec: 0xc123848  jal         func_48E120
label_46a6f0:
    if (ctx->pc == 0x46A6F0u) {
        ctx->pc = 0x46A6F0u;
            // 0x46a6f0: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->pc = 0x46A6F4u;
        goto label_46a6f4;
    }
    ctx->pc = 0x46A6ECu;
    SET_GPR_U32(ctx, 31, 0x46A6F4u);
    ctx->pc = 0x46A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A6ECu;
            // 0x46a6f0: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A6F4u; }
        if (ctx->pc != 0x46A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A6F4u; }
        if (ctx->pc != 0x46A6F4u) { return; }
    }
    ctx->pc = 0x46A6F4u;
label_46a6f4:
    // 0x46a6f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46a6f8:
    // 0x46a6f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46a6fc:
    // 0x46a6fc: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x46a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46a700:
    // 0x46a700: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46a700u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46a704:
    // 0x46a704: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a708:
    // 0x46a708: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x46a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_46a70c:
    // 0x46a70c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a710:
    // 0x46a710: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46a710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_46a714:
    // 0x46a714: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a718:
    // 0x46a718: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a71c:
    // 0x46a71c: 0xc12326c  jal         func_48C9B0
label_46a720:
    if (ctx->pc == 0x46A720u) {
        ctx->pc = 0x46A720u;
            // 0x46a720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A724u;
        goto label_46a724;
    }
    ctx->pc = 0x46A71Cu;
    SET_GPR_U32(ctx, 31, 0x46A724u);
    ctx->pc = 0x46A720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A71Cu;
            // 0x46a720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A724u; }
        if (ctx->pc != 0x46A724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A724u; }
        if (ctx->pc != 0x46A724u) { return; }
    }
    ctx->pc = 0x46A724u;
label_46a724:
    // 0x46a724: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46a728:
    // 0x46a728: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x46a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_46a72c:
    // 0x46a72c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46a730:
    // 0x46a730: 0xc1232ac  jal         func_48CAB0
label_46a734:
    if (ctx->pc == 0x46A734u) {
        ctx->pc = 0x46A734u;
            // 0x46a734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A738u;
        goto label_46a738;
    }
    ctx->pc = 0x46A730u;
    SET_GPR_U32(ctx, 31, 0x46A738u);
    ctx->pc = 0x46A734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A730u;
            // 0x46a734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A738u; }
        if (ctx->pc != 0x46A738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A738u; }
        if (ctx->pc != 0x46A738u) { return; }
    }
    ctx->pc = 0x46A738u;
label_46a738:
    // 0x46a738: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x46a738u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46a73c:
    // 0x46a73c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x46a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_46a740:
    // 0x46a740: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_46a744:
    if (ctx->pc == 0x46A744u) {
        ctx->pc = 0x46A748u;
        goto label_46a748;
    }
    ctx->pc = 0x46A740u;
    {
        const bool branch_taken_0x46a740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a740) {
            ctx->pc = 0x46A758u;
            goto label_46a758;
        }
    }
    ctx->pc = 0x46A748u;
label_46a748:
    // 0x46a748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46a74c:
    // 0x46a74c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46a750:
    // 0x46a750: 0xc11acf0  jal         func_46B3C0
label_46a754:
    if (ctx->pc == 0x46A754u) {
        ctx->pc = 0x46A754u;
            // 0x46a754: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A758u;
        goto label_46a758;
    }
    ctx->pc = 0x46A750u;
    SET_GPR_U32(ctx, 31, 0x46A758u);
    ctx->pc = 0x46A754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A750u;
            // 0x46a754: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46B3C0u;
    if (runtime->hasFunction(0x46B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x46B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A758u; }
        if (ctx->pc != 0x46A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046B3C0_0x46b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A758u; }
        if (ctx->pc != 0x46A758u) { return; }
    }
    ctx->pc = 0x46A758u;
label_46a758:
    // 0x46a758: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x46a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_46a75c:
    // 0x46a75c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x46a75cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46a760:
    // 0x46a760: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x46a760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46a764:
    // 0x46a764: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46a764u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46a768:
    // 0x46a768: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46a768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46a76c:
    // 0x46a76c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46a76cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46a770:
    // 0x46a770: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46a770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46a774:
    // 0x46a774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a778:
    // 0x46a778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a77c:
    // 0x46a77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46a780:
    // 0x46a780: 0x3e00008  jr          $ra
label_46a784:
    if (ctx->pc == 0x46A784u) {
        ctx->pc = 0x46A784u;
            // 0x46a784: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x46A788u;
        goto label_46a788;
    }
    ctx->pc = 0x46A780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A780u;
            // 0x46a784: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46A788u;
label_46a788:
    // 0x46a788: 0x0  nop
    ctx->pc = 0x46a788u;
    // NOP
label_46a78c:
    // 0x46a78c: 0x0  nop
    ctx->pc = 0x46a78cu;
    // NOP
}
