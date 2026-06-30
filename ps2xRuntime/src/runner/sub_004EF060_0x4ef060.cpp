#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EF060
// Address: 0x4ef060 - 0x4ef9c0
void sub_004EF060_0x4ef060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF060_0x4ef060");
#endif

    switch (ctx->pc) {
        case 0x4ef060u: goto label_4ef060;
        case 0x4ef064u: goto label_4ef064;
        case 0x4ef068u: goto label_4ef068;
        case 0x4ef06cu: goto label_4ef06c;
        case 0x4ef070u: goto label_4ef070;
        case 0x4ef074u: goto label_4ef074;
        case 0x4ef078u: goto label_4ef078;
        case 0x4ef07cu: goto label_4ef07c;
        case 0x4ef080u: goto label_4ef080;
        case 0x4ef084u: goto label_4ef084;
        case 0x4ef088u: goto label_4ef088;
        case 0x4ef08cu: goto label_4ef08c;
        case 0x4ef090u: goto label_4ef090;
        case 0x4ef094u: goto label_4ef094;
        case 0x4ef098u: goto label_4ef098;
        case 0x4ef09cu: goto label_4ef09c;
        case 0x4ef0a0u: goto label_4ef0a0;
        case 0x4ef0a4u: goto label_4ef0a4;
        case 0x4ef0a8u: goto label_4ef0a8;
        case 0x4ef0acu: goto label_4ef0ac;
        case 0x4ef0b0u: goto label_4ef0b0;
        case 0x4ef0b4u: goto label_4ef0b4;
        case 0x4ef0b8u: goto label_4ef0b8;
        case 0x4ef0bcu: goto label_4ef0bc;
        case 0x4ef0c0u: goto label_4ef0c0;
        case 0x4ef0c4u: goto label_4ef0c4;
        case 0x4ef0c8u: goto label_4ef0c8;
        case 0x4ef0ccu: goto label_4ef0cc;
        case 0x4ef0d0u: goto label_4ef0d0;
        case 0x4ef0d4u: goto label_4ef0d4;
        case 0x4ef0d8u: goto label_4ef0d8;
        case 0x4ef0dcu: goto label_4ef0dc;
        case 0x4ef0e0u: goto label_4ef0e0;
        case 0x4ef0e4u: goto label_4ef0e4;
        case 0x4ef0e8u: goto label_4ef0e8;
        case 0x4ef0ecu: goto label_4ef0ec;
        case 0x4ef0f0u: goto label_4ef0f0;
        case 0x4ef0f4u: goto label_4ef0f4;
        case 0x4ef0f8u: goto label_4ef0f8;
        case 0x4ef0fcu: goto label_4ef0fc;
        case 0x4ef100u: goto label_4ef100;
        case 0x4ef104u: goto label_4ef104;
        case 0x4ef108u: goto label_4ef108;
        case 0x4ef10cu: goto label_4ef10c;
        case 0x4ef110u: goto label_4ef110;
        case 0x4ef114u: goto label_4ef114;
        case 0x4ef118u: goto label_4ef118;
        case 0x4ef11cu: goto label_4ef11c;
        case 0x4ef120u: goto label_4ef120;
        case 0x4ef124u: goto label_4ef124;
        case 0x4ef128u: goto label_4ef128;
        case 0x4ef12cu: goto label_4ef12c;
        case 0x4ef130u: goto label_4ef130;
        case 0x4ef134u: goto label_4ef134;
        case 0x4ef138u: goto label_4ef138;
        case 0x4ef13cu: goto label_4ef13c;
        case 0x4ef140u: goto label_4ef140;
        case 0x4ef144u: goto label_4ef144;
        case 0x4ef148u: goto label_4ef148;
        case 0x4ef14cu: goto label_4ef14c;
        case 0x4ef150u: goto label_4ef150;
        case 0x4ef154u: goto label_4ef154;
        case 0x4ef158u: goto label_4ef158;
        case 0x4ef15cu: goto label_4ef15c;
        case 0x4ef160u: goto label_4ef160;
        case 0x4ef164u: goto label_4ef164;
        case 0x4ef168u: goto label_4ef168;
        case 0x4ef16cu: goto label_4ef16c;
        case 0x4ef170u: goto label_4ef170;
        case 0x4ef174u: goto label_4ef174;
        case 0x4ef178u: goto label_4ef178;
        case 0x4ef17cu: goto label_4ef17c;
        case 0x4ef180u: goto label_4ef180;
        case 0x4ef184u: goto label_4ef184;
        case 0x4ef188u: goto label_4ef188;
        case 0x4ef18cu: goto label_4ef18c;
        case 0x4ef190u: goto label_4ef190;
        case 0x4ef194u: goto label_4ef194;
        case 0x4ef198u: goto label_4ef198;
        case 0x4ef19cu: goto label_4ef19c;
        case 0x4ef1a0u: goto label_4ef1a0;
        case 0x4ef1a4u: goto label_4ef1a4;
        case 0x4ef1a8u: goto label_4ef1a8;
        case 0x4ef1acu: goto label_4ef1ac;
        case 0x4ef1b0u: goto label_4ef1b0;
        case 0x4ef1b4u: goto label_4ef1b4;
        case 0x4ef1b8u: goto label_4ef1b8;
        case 0x4ef1bcu: goto label_4ef1bc;
        case 0x4ef1c0u: goto label_4ef1c0;
        case 0x4ef1c4u: goto label_4ef1c4;
        case 0x4ef1c8u: goto label_4ef1c8;
        case 0x4ef1ccu: goto label_4ef1cc;
        case 0x4ef1d0u: goto label_4ef1d0;
        case 0x4ef1d4u: goto label_4ef1d4;
        case 0x4ef1d8u: goto label_4ef1d8;
        case 0x4ef1dcu: goto label_4ef1dc;
        case 0x4ef1e0u: goto label_4ef1e0;
        case 0x4ef1e4u: goto label_4ef1e4;
        case 0x4ef1e8u: goto label_4ef1e8;
        case 0x4ef1ecu: goto label_4ef1ec;
        case 0x4ef1f0u: goto label_4ef1f0;
        case 0x4ef1f4u: goto label_4ef1f4;
        case 0x4ef1f8u: goto label_4ef1f8;
        case 0x4ef1fcu: goto label_4ef1fc;
        case 0x4ef200u: goto label_4ef200;
        case 0x4ef204u: goto label_4ef204;
        case 0x4ef208u: goto label_4ef208;
        case 0x4ef20cu: goto label_4ef20c;
        case 0x4ef210u: goto label_4ef210;
        case 0x4ef214u: goto label_4ef214;
        case 0x4ef218u: goto label_4ef218;
        case 0x4ef21cu: goto label_4ef21c;
        case 0x4ef220u: goto label_4ef220;
        case 0x4ef224u: goto label_4ef224;
        case 0x4ef228u: goto label_4ef228;
        case 0x4ef22cu: goto label_4ef22c;
        case 0x4ef230u: goto label_4ef230;
        case 0x4ef234u: goto label_4ef234;
        case 0x4ef238u: goto label_4ef238;
        case 0x4ef23cu: goto label_4ef23c;
        case 0x4ef240u: goto label_4ef240;
        case 0x4ef244u: goto label_4ef244;
        case 0x4ef248u: goto label_4ef248;
        case 0x4ef24cu: goto label_4ef24c;
        case 0x4ef250u: goto label_4ef250;
        case 0x4ef254u: goto label_4ef254;
        case 0x4ef258u: goto label_4ef258;
        case 0x4ef25cu: goto label_4ef25c;
        case 0x4ef260u: goto label_4ef260;
        case 0x4ef264u: goto label_4ef264;
        case 0x4ef268u: goto label_4ef268;
        case 0x4ef26cu: goto label_4ef26c;
        case 0x4ef270u: goto label_4ef270;
        case 0x4ef274u: goto label_4ef274;
        case 0x4ef278u: goto label_4ef278;
        case 0x4ef27cu: goto label_4ef27c;
        case 0x4ef280u: goto label_4ef280;
        case 0x4ef284u: goto label_4ef284;
        case 0x4ef288u: goto label_4ef288;
        case 0x4ef28cu: goto label_4ef28c;
        case 0x4ef290u: goto label_4ef290;
        case 0x4ef294u: goto label_4ef294;
        case 0x4ef298u: goto label_4ef298;
        case 0x4ef29cu: goto label_4ef29c;
        case 0x4ef2a0u: goto label_4ef2a0;
        case 0x4ef2a4u: goto label_4ef2a4;
        case 0x4ef2a8u: goto label_4ef2a8;
        case 0x4ef2acu: goto label_4ef2ac;
        case 0x4ef2b0u: goto label_4ef2b0;
        case 0x4ef2b4u: goto label_4ef2b4;
        case 0x4ef2b8u: goto label_4ef2b8;
        case 0x4ef2bcu: goto label_4ef2bc;
        case 0x4ef2c0u: goto label_4ef2c0;
        case 0x4ef2c4u: goto label_4ef2c4;
        case 0x4ef2c8u: goto label_4ef2c8;
        case 0x4ef2ccu: goto label_4ef2cc;
        case 0x4ef2d0u: goto label_4ef2d0;
        case 0x4ef2d4u: goto label_4ef2d4;
        case 0x4ef2d8u: goto label_4ef2d8;
        case 0x4ef2dcu: goto label_4ef2dc;
        case 0x4ef2e0u: goto label_4ef2e0;
        case 0x4ef2e4u: goto label_4ef2e4;
        case 0x4ef2e8u: goto label_4ef2e8;
        case 0x4ef2ecu: goto label_4ef2ec;
        case 0x4ef2f0u: goto label_4ef2f0;
        case 0x4ef2f4u: goto label_4ef2f4;
        case 0x4ef2f8u: goto label_4ef2f8;
        case 0x4ef2fcu: goto label_4ef2fc;
        case 0x4ef300u: goto label_4ef300;
        case 0x4ef304u: goto label_4ef304;
        case 0x4ef308u: goto label_4ef308;
        case 0x4ef30cu: goto label_4ef30c;
        case 0x4ef310u: goto label_4ef310;
        case 0x4ef314u: goto label_4ef314;
        case 0x4ef318u: goto label_4ef318;
        case 0x4ef31cu: goto label_4ef31c;
        case 0x4ef320u: goto label_4ef320;
        case 0x4ef324u: goto label_4ef324;
        case 0x4ef328u: goto label_4ef328;
        case 0x4ef32cu: goto label_4ef32c;
        case 0x4ef330u: goto label_4ef330;
        case 0x4ef334u: goto label_4ef334;
        case 0x4ef338u: goto label_4ef338;
        case 0x4ef33cu: goto label_4ef33c;
        case 0x4ef340u: goto label_4ef340;
        case 0x4ef344u: goto label_4ef344;
        case 0x4ef348u: goto label_4ef348;
        case 0x4ef34cu: goto label_4ef34c;
        case 0x4ef350u: goto label_4ef350;
        case 0x4ef354u: goto label_4ef354;
        case 0x4ef358u: goto label_4ef358;
        case 0x4ef35cu: goto label_4ef35c;
        case 0x4ef360u: goto label_4ef360;
        case 0x4ef364u: goto label_4ef364;
        case 0x4ef368u: goto label_4ef368;
        case 0x4ef36cu: goto label_4ef36c;
        case 0x4ef370u: goto label_4ef370;
        case 0x4ef374u: goto label_4ef374;
        case 0x4ef378u: goto label_4ef378;
        case 0x4ef37cu: goto label_4ef37c;
        case 0x4ef380u: goto label_4ef380;
        case 0x4ef384u: goto label_4ef384;
        case 0x4ef388u: goto label_4ef388;
        case 0x4ef38cu: goto label_4ef38c;
        case 0x4ef390u: goto label_4ef390;
        case 0x4ef394u: goto label_4ef394;
        case 0x4ef398u: goto label_4ef398;
        case 0x4ef39cu: goto label_4ef39c;
        case 0x4ef3a0u: goto label_4ef3a0;
        case 0x4ef3a4u: goto label_4ef3a4;
        case 0x4ef3a8u: goto label_4ef3a8;
        case 0x4ef3acu: goto label_4ef3ac;
        case 0x4ef3b0u: goto label_4ef3b0;
        case 0x4ef3b4u: goto label_4ef3b4;
        case 0x4ef3b8u: goto label_4ef3b8;
        case 0x4ef3bcu: goto label_4ef3bc;
        case 0x4ef3c0u: goto label_4ef3c0;
        case 0x4ef3c4u: goto label_4ef3c4;
        case 0x4ef3c8u: goto label_4ef3c8;
        case 0x4ef3ccu: goto label_4ef3cc;
        case 0x4ef3d0u: goto label_4ef3d0;
        case 0x4ef3d4u: goto label_4ef3d4;
        case 0x4ef3d8u: goto label_4ef3d8;
        case 0x4ef3dcu: goto label_4ef3dc;
        case 0x4ef3e0u: goto label_4ef3e0;
        case 0x4ef3e4u: goto label_4ef3e4;
        case 0x4ef3e8u: goto label_4ef3e8;
        case 0x4ef3ecu: goto label_4ef3ec;
        case 0x4ef3f0u: goto label_4ef3f0;
        case 0x4ef3f4u: goto label_4ef3f4;
        case 0x4ef3f8u: goto label_4ef3f8;
        case 0x4ef3fcu: goto label_4ef3fc;
        case 0x4ef400u: goto label_4ef400;
        case 0x4ef404u: goto label_4ef404;
        case 0x4ef408u: goto label_4ef408;
        case 0x4ef40cu: goto label_4ef40c;
        case 0x4ef410u: goto label_4ef410;
        case 0x4ef414u: goto label_4ef414;
        case 0x4ef418u: goto label_4ef418;
        case 0x4ef41cu: goto label_4ef41c;
        case 0x4ef420u: goto label_4ef420;
        case 0x4ef424u: goto label_4ef424;
        case 0x4ef428u: goto label_4ef428;
        case 0x4ef42cu: goto label_4ef42c;
        case 0x4ef430u: goto label_4ef430;
        case 0x4ef434u: goto label_4ef434;
        case 0x4ef438u: goto label_4ef438;
        case 0x4ef43cu: goto label_4ef43c;
        case 0x4ef440u: goto label_4ef440;
        case 0x4ef444u: goto label_4ef444;
        case 0x4ef448u: goto label_4ef448;
        case 0x4ef44cu: goto label_4ef44c;
        case 0x4ef450u: goto label_4ef450;
        case 0x4ef454u: goto label_4ef454;
        case 0x4ef458u: goto label_4ef458;
        case 0x4ef45cu: goto label_4ef45c;
        case 0x4ef460u: goto label_4ef460;
        case 0x4ef464u: goto label_4ef464;
        case 0x4ef468u: goto label_4ef468;
        case 0x4ef46cu: goto label_4ef46c;
        case 0x4ef470u: goto label_4ef470;
        case 0x4ef474u: goto label_4ef474;
        case 0x4ef478u: goto label_4ef478;
        case 0x4ef47cu: goto label_4ef47c;
        case 0x4ef480u: goto label_4ef480;
        case 0x4ef484u: goto label_4ef484;
        case 0x4ef488u: goto label_4ef488;
        case 0x4ef48cu: goto label_4ef48c;
        case 0x4ef490u: goto label_4ef490;
        case 0x4ef494u: goto label_4ef494;
        case 0x4ef498u: goto label_4ef498;
        case 0x4ef49cu: goto label_4ef49c;
        case 0x4ef4a0u: goto label_4ef4a0;
        case 0x4ef4a4u: goto label_4ef4a4;
        case 0x4ef4a8u: goto label_4ef4a8;
        case 0x4ef4acu: goto label_4ef4ac;
        case 0x4ef4b0u: goto label_4ef4b0;
        case 0x4ef4b4u: goto label_4ef4b4;
        case 0x4ef4b8u: goto label_4ef4b8;
        case 0x4ef4bcu: goto label_4ef4bc;
        case 0x4ef4c0u: goto label_4ef4c0;
        case 0x4ef4c4u: goto label_4ef4c4;
        case 0x4ef4c8u: goto label_4ef4c8;
        case 0x4ef4ccu: goto label_4ef4cc;
        case 0x4ef4d0u: goto label_4ef4d0;
        case 0x4ef4d4u: goto label_4ef4d4;
        case 0x4ef4d8u: goto label_4ef4d8;
        case 0x4ef4dcu: goto label_4ef4dc;
        case 0x4ef4e0u: goto label_4ef4e0;
        case 0x4ef4e4u: goto label_4ef4e4;
        case 0x4ef4e8u: goto label_4ef4e8;
        case 0x4ef4ecu: goto label_4ef4ec;
        case 0x4ef4f0u: goto label_4ef4f0;
        case 0x4ef4f4u: goto label_4ef4f4;
        case 0x4ef4f8u: goto label_4ef4f8;
        case 0x4ef4fcu: goto label_4ef4fc;
        case 0x4ef500u: goto label_4ef500;
        case 0x4ef504u: goto label_4ef504;
        case 0x4ef508u: goto label_4ef508;
        case 0x4ef50cu: goto label_4ef50c;
        case 0x4ef510u: goto label_4ef510;
        case 0x4ef514u: goto label_4ef514;
        case 0x4ef518u: goto label_4ef518;
        case 0x4ef51cu: goto label_4ef51c;
        case 0x4ef520u: goto label_4ef520;
        case 0x4ef524u: goto label_4ef524;
        case 0x4ef528u: goto label_4ef528;
        case 0x4ef52cu: goto label_4ef52c;
        case 0x4ef530u: goto label_4ef530;
        case 0x4ef534u: goto label_4ef534;
        case 0x4ef538u: goto label_4ef538;
        case 0x4ef53cu: goto label_4ef53c;
        case 0x4ef540u: goto label_4ef540;
        case 0x4ef544u: goto label_4ef544;
        case 0x4ef548u: goto label_4ef548;
        case 0x4ef54cu: goto label_4ef54c;
        case 0x4ef550u: goto label_4ef550;
        case 0x4ef554u: goto label_4ef554;
        case 0x4ef558u: goto label_4ef558;
        case 0x4ef55cu: goto label_4ef55c;
        case 0x4ef560u: goto label_4ef560;
        case 0x4ef564u: goto label_4ef564;
        case 0x4ef568u: goto label_4ef568;
        case 0x4ef56cu: goto label_4ef56c;
        case 0x4ef570u: goto label_4ef570;
        case 0x4ef574u: goto label_4ef574;
        case 0x4ef578u: goto label_4ef578;
        case 0x4ef57cu: goto label_4ef57c;
        case 0x4ef580u: goto label_4ef580;
        case 0x4ef584u: goto label_4ef584;
        case 0x4ef588u: goto label_4ef588;
        case 0x4ef58cu: goto label_4ef58c;
        case 0x4ef590u: goto label_4ef590;
        case 0x4ef594u: goto label_4ef594;
        case 0x4ef598u: goto label_4ef598;
        case 0x4ef59cu: goto label_4ef59c;
        case 0x4ef5a0u: goto label_4ef5a0;
        case 0x4ef5a4u: goto label_4ef5a4;
        case 0x4ef5a8u: goto label_4ef5a8;
        case 0x4ef5acu: goto label_4ef5ac;
        case 0x4ef5b0u: goto label_4ef5b0;
        case 0x4ef5b4u: goto label_4ef5b4;
        case 0x4ef5b8u: goto label_4ef5b8;
        case 0x4ef5bcu: goto label_4ef5bc;
        case 0x4ef5c0u: goto label_4ef5c0;
        case 0x4ef5c4u: goto label_4ef5c4;
        case 0x4ef5c8u: goto label_4ef5c8;
        case 0x4ef5ccu: goto label_4ef5cc;
        case 0x4ef5d0u: goto label_4ef5d0;
        case 0x4ef5d4u: goto label_4ef5d4;
        case 0x4ef5d8u: goto label_4ef5d8;
        case 0x4ef5dcu: goto label_4ef5dc;
        case 0x4ef5e0u: goto label_4ef5e0;
        case 0x4ef5e4u: goto label_4ef5e4;
        case 0x4ef5e8u: goto label_4ef5e8;
        case 0x4ef5ecu: goto label_4ef5ec;
        case 0x4ef5f0u: goto label_4ef5f0;
        case 0x4ef5f4u: goto label_4ef5f4;
        case 0x4ef5f8u: goto label_4ef5f8;
        case 0x4ef5fcu: goto label_4ef5fc;
        case 0x4ef600u: goto label_4ef600;
        case 0x4ef604u: goto label_4ef604;
        case 0x4ef608u: goto label_4ef608;
        case 0x4ef60cu: goto label_4ef60c;
        case 0x4ef610u: goto label_4ef610;
        case 0x4ef614u: goto label_4ef614;
        case 0x4ef618u: goto label_4ef618;
        case 0x4ef61cu: goto label_4ef61c;
        case 0x4ef620u: goto label_4ef620;
        case 0x4ef624u: goto label_4ef624;
        case 0x4ef628u: goto label_4ef628;
        case 0x4ef62cu: goto label_4ef62c;
        case 0x4ef630u: goto label_4ef630;
        case 0x4ef634u: goto label_4ef634;
        case 0x4ef638u: goto label_4ef638;
        case 0x4ef63cu: goto label_4ef63c;
        case 0x4ef640u: goto label_4ef640;
        case 0x4ef644u: goto label_4ef644;
        case 0x4ef648u: goto label_4ef648;
        case 0x4ef64cu: goto label_4ef64c;
        case 0x4ef650u: goto label_4ef650;
        case 0x4ef654u: goto label_4ef654;
        case 0x4ef658u: goto label_4ef658;
        case 0x4ef65cu: goto label_4ef65c;
        case 0x4ef660u: goto label_4ef660;
        case 0x4ef664u: goto label_4ef664;
        case 0x4ef668u: goto label_4ef668;
        case 0x4ef66cu: goto label_4ef66c;
        case 0x4ef670u: goto label_4ef670;
        case 0x4ef674u: goto label_4ef674;
        case 0x4ef678u: goto label_4ef678;
        case 0x4ef67cu: goto label_4ef67c;
        case 0x4ef680u: goto label_4ef680;
        case 0x4ef684u: goto label_4ef684;
        case 0x4ef688u: goto label_4ef688;
        case 0x4ef68cu: goto label_4ef68c;
        case 0x4ef690u: goto label_4ef690;
        case 0x4ef694u: goto label_4ef694;
        case 0x4ef698u: goto label_4ef698;
        case 0x4ef69cu: goto label_4ef69c;
        case 0x4ef6a0u: goto label_4ef6a0;
        case 0x4ef6a4u: goto label_4ef6a4;
        case 0x4ef6a8u: goto label_4ef6a8;
        case 0x4ef6acu: goto label_4ef6ac;
        case 0x4ef6b0u: goto label_4ef6b0;
        case 0x4ef6b4u: goto label_4ef6b4;
        case 0x4ef6b8u: goto label_4ef6b8;
        case 0x4ef6bcu: goto label_4ef6bc;
        case 0x4ef6c0u: goto label_4ef6c0;
        case 0x4ef6c4u: goto label_4ef6c4;
        case 0x4ef6c8u: goto label_4ef6c8;
        case 0x4ef6ccu: goto label_4ef6cc;
        case 0x4ef6d0u: goto label_4ef6d0;
        case 0x4ef6d4u: goto label_4ef6d4;
        case 0x4ef6d8u: goto label_4ef6d8;
        case 0x4ef6dcu: goto label_4ef6dc;
        case 0x4ef6e0u: goto label_4ef6e0;
        case 0x4ef6e4u: goto label_4ef6e4;
        case 0x4ef6e8u: goto label_4ef6e8;
        case 0x4ef6ecu: goto label_4ef6ec;
        case 0x4ef6f0u: goto label_4ef6f0;
        case 0x4ef6f4u: goto label_4ef6f4;
        case 0x4ef6f8u: goto label_4ef6f8;
        case 0x4ef6fcu: goto label_4ef6fc;
        case 0x4ef700u: goto label_4ef700;
        case 0x4ef704u: goto label_4ef704;
        case 0x4ef708u: goto label_4ef708;
        case 0x4ef70cu: goto label_4ef70c;
        case 0x4ef710u: goto label_4ef710;
        case 0x4ef714u: goto label_4ef714;
        case 0x4ef718u: goto label_4ef718;
        case 0x4ef71cu: goto label_4ef71c;
        case 0x4ef720u: goto label_4ef720;
        case 0x4ef724u: goto label_4ef724;
        case 0x4ef728u: goto label_4ef728;
        case 0x4ef72cu: goto label_4ef72c;
        case 0x4ef730u: goto label_4ef730;
        case 0x4ef734u: goto label_4ef734;
        case 0x4ef738u: goto label_4ef738;
        case 0x4ef73cu: goto label_4ef73c;
        case 0x4ef740u: goto label_4ef740;
        case 0x4ef744u: goto label_4ef744;
        case 0x4ef748u: goto label_4ef748;
        case 0x4ef74cu: goto label_4ef74c;
        case 0x4ef750u: goto label_4ef750;
        case 0x4ef754u: goto label_4ef754;
        case 0x4ef758u: goto label_4ef758;
        case 0x4ef75cu: goto label_4ef75c;
        case 0x4ef760u: goto label_4ef760;
        case 0x4ef764u: goto label_4ef764;
        case 0x4ef768u: goto label_4ef768;
        case 0x4ef76cu: goto label_4ef76c;
        case 0x4ef770u: goto label_4ef770;
        case 0x4ef774u: goto label_4ef774;
        case 0x4ef778u: goto label_4ef778;
        case 0x4ef77cu: goto label_4ef77c;
        case 0x4ef780u: goto label_4ef780;
        case 0x4ef784u: goto label_4ef784;
        case 0x4ef788u: goto label_4ef788;
        case 0x4ef78cu: goto label_4ef78c;
        case 0x4ef790u: goto label_4ef790;
        case 0x4ef794u: goto label_4ef794;
        case 0x4ef798u: goto label_4ef798;
        case 0x4ef79cu: goto label_4ef79c;
        case 0x4ef7a0u: goto label_4ef7a0;
        case 0x4ef7a4u: goto label_4ef7a4;
        case 0x4ef7a8u: goto label_4ef7a8;
        case 0x4ef7acu: goto label_4ef7ac;
        case 0x4ef7b0u: goto label_4ef7b0;
        case 0x4ef7b4u: goto label_4ef7b4;
        case 0x4ef7b8u: goto label_4ef7b8;
        case 0x4ef7bcu: goto label_4ef7bc;
        case 0x4ef7c0u: goto label_4ef7c0;
        case 0x4ef7c4u: goto label_4ef7c4;
        case 0x4ef7c8u: goto label_4ef7c8;
        case 0x4ef7ccu: goto label_4ef7cc;
        case 0x4ef7d0u: goto label_4ef7d0;
        case 0x4ef7d4u: goto label_4ef7d4;
        case 0x4ef7d8u: goto label_4ef7d8;
        case 0x4ef7dcu: goto label_4ef7dc;
        case 0x4ef7e0u: goto label_4ef7e0;
        case 0x4ef7e4u: goto label_4ef7e4;
        case 0x4ef7e8u: goto label_4ef7e8;
        case 0x4ef7ecu: goto label_4ef7ec;
        case 0x4ef7f0u: goto label_4ef7f0;
        case 0x4ef7f4u: goto label_4ef7f4;
        case 0x4ef7f8u: goto label_4ef7f8;
        case 0x4ef7fcu: goto label_4ef7fc;
        case 0x4ef800u: goto label_4ef800;
        case 0x4ef804u: goto label_4ef804;
        case 0x4ef808u: goto label_4ef808;
        case 0x4ef80cu: goto label_4ef80c;
        case 0x4ef810u: goto label_4ef810;
        case 0x4ef814u: goto label_4ef814;
        case 0x4ef818u: goto label_4ef818;
        case 0x4ef81cu: goto label_4ef81c;
        case 0x4ef820u: goto label_4ef820;
        case 0x4ef824u: goto label_4ef824;
        case 0x4ef828u: goto label_4ef828;
        case 0x4ef82cu: goto label_4ef82c;
        case 0x4ef830u: goto label_4ef830;
        case 0x4ef834u: goto label_4ef834;
        case 0x4ef838u: goto label_4ef838;
        case 0x4ef83cu: goto label_4ef83c;
        case 0x4ef840u: goto label_4ef840;
        case 0x4ef844u: goto label_4ef844;
        case 0x4ef848u: goto label_4ef848;
        case 0x4ef84cu: goto label_4ef84c;
        case 0x4ef850u: goto label_4ef850;
        case 0x4ef854u: goto label_4ef854;
        case 0x4ef858u: goto label_4ef858;
        case 0x4ef85cu: goto label_4ef85c;
        case 0x4ef860u: goto label_4ef860;
        case 0x4ef864u: goto label_4ef864;
        case 0x4ef868u: goto label_4ef868;
        case 0x4ef86cu: goto label_4ef86c;
        case 0x4ef870u: goto label_4ef870;
        case 0x4ef874u: goto label_4ef874;
        case 0x4ef878u: goto label_4ef878;
        case 0x4ef87cu: goto label_4ef87c;
        case 0x4ef880u: goto label_4ef880;
        case 0x4ef884u: goto label_4ef884;
        case 0x4ef888u: goto label_4ef888;
        case 0x4ef88cu: goto label_4ef88c;
        case 0x4ef890u: goto label_4ef890;
        case 0x4ef894u: goto label_4ef894;
        case 0x4ef898u: goto label_4ef898;
        case 0x4ef89cu: goto label_4ef89c;
        case 0x4ef8a0u: goto label_4ef8a0;
        case 0x4ef8a4u: goto label_4ef8a4;
        case 0x4ef8a8u: goto label_4ef8a8;
        case 0x4ef8acu: goto label_4ef8ac;
        case 0x4ef8b0u: goto label_4ef8b0;
        case 0x4ef8b4u: goto label_4ef8b4;
        case 0x4ef8b8u: goto label_4ef8b8;
        case 0x4ef8bcu: goto label_4ef8bc;
        case 0x4ef8c0u: goto label_4ef8c0;
        case 0x4ef8c4u: goto label_4ef8c4;
        case 0x4ef8c8u: goto label_4ef8c8;
        case 0x4ef8ccu: goto label_4ef8cc;
        case 0x4ef8d0u: goto label_4ef8d0;
        case 0x4ef8d4u: goto label_4ef8d4;
        case 0x4ef8d8u: goto label_4ef8d8;
        case 0x4ef8dcu: goto label_4ef8dc;
        case 0x4ef8e0u: goto label_4ef8e0;
        case 0x4ef8e4u: goto label_4ef8e4;
        case 0x4ef8e8u: goto label_4ef8e8;
        case 0x4ef8ecu: goto label_4ef8ec;
        case 0x4ef8f0u: goto label_4ef8f0;
        case 0x4ef8f4u: goto label_4ef8f4;
        case 0x4ef8f8u: goto label_4ef8f8;
        case 0x4ef8fcu: goto label_4ef8fc;
        case 0x4ef900u: goto label_4ef900;
        case 0x4ef904u: goto label_4ef904;
        case 0x4ef908u: goto label_4ef908;
        case 0x4ef90cu: goto label_4ef90c;
        case 0x4ef910u: goto label_4ef910;
        case 0x4ef914u: goto label_4ef914;
        case 0x4ef918u: goto label_4ef918;
        case 0x4ef91cu: goto label_4ef91c;
        case 0x4ef920u: goto label_4ef920;
        case 0x4ef924u: goto label_4ef924;
        case 0x4ef928u: goto label_4ef928;
        case 0x4ef92cu: goto label_4ef92c;
        case 0x4ef930u: goto label_4ef930;
        case 0x4ef934u: goto label_4ef934;
        case 0x4ef938u: goto label_4ef938;
        case 0x4ef93cu: goto label_4ef93c;
        case 0x4ef940u: goto label_4ef940;
        case 0x4ef944u: goto label_4ef944;
        case 0x4ef948u: goto label_4ef948;
        case 0x4ef94cu: goto label_4ef94c;
        case 0x4ef950u: goto label_4ef950;
        case 0x4ef954u: goto label_4ef954;
        case 0x4ef958u: goto label_4ef958;
        case 0x4ef95cu: goto label_4ef95c;
        case 0x4ef960u: goto label_4ef960;
        case 0x4ef964u: goto label_4ef964;
        case 0x4ef968u: goto label_4ef968;
        case 0x4ef96cu: goto label_4ef96c;
        case 0x4ef970u: goto label_4ef970;
        case 0x4ef974u: goto label_4ef974;
        case 0x4ef978u: goto label_4ef978;
        case 0x4ef97cu: goto label_4ef97c;
        case 0x4ef980u: goto label_4ef980;
        case 0x4ef984u: goto label_4ef984;
        case 0x4ef988u: goto label_4ef988;
        case 0x4ef98cu: goto label_4ef98c;
        case 0x4ef990u: goto label_4ef990;
        case 0x4ef994u: goto label_4ef994;
        case 0x4ef998u: goto label_4ef998;
        case 0x4ef99cu: goto label_4ef99c;
        case 0x4ef9a0u: goto label_4ef9a0;
        case 0x4ef9a4u: goto label_4ef9a4;
        case 0x4ef9a8u: goto label_4ef9a8;
        case 0x4ef9acu: goto label_4ef9ac;
        case 0x4ef9b0u: goto label_4ef9b0;
        case 0x4ef9b4u: goto label_4ef9b4;
        case 0x4ef9b8u: goto label_4ef9b8;
        case 0x4ef9bcu: goto label_4ef9bc;
        default: break;
    }

    ctx->pc = 0x4ef060u;

label_4ef060:
    // 0x4ef060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ef060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ef064:
    // 0x4ef064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ef064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ef068:
    // 0x4ef068: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ef068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4ef06c:
    // 0x4ef06c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ef06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ef070:
    // 0x4ef070: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ef070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ef074:
    // 0x4ef074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ef074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef078:
    // 0x4ef078: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ef078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ef07c:
    // 0x4ef07c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ef07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ef080:
    // 0x4ef080: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ef080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ef084:
    // 0x4ef084: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4ef084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4ef088:
    // 0x4ef088: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4ef088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4ef08c:
    // 0x4ef08c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4ef08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4ef090:
    // 0x4ef090: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4ef090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4ef094:
    // 0x4ef094: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4ef094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ef098:
    // 0x4ef098: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x4ef098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ef09c:
    // 0x4ef09c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4ef09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef0a0:
    // 0x4ef0a0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4ef0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_4ef0a4:
    // 0x4ef0a4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x4ef0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ef0a8:
    // 0x4ef0a8: 0xc0cd08c  jal         func_334230
label_4ef0ac:
    if (ctx->pc == 0x4EF0ACu) {
        ctx->pc = 0x4EF0ACu;
            // 0x4ef0ac: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->pc = 0x4EF0B0u;
        goto label_4ef0b0;
    }
    ctx->pc = 0x4EF0A8u;
    SET_GPR_U32(ctx, 31, 0x4EF0B0u);
    ctx->pc = 0x4EF0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF0A8u;
            // 0x4ef0ac: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF0B0u; }
        if (ctx->pc != 0x4EF0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF0B0u; }
        if (ctx->pc != 0x4EF0B0u) { return; }
    }
    ctx->pc = 0x4EF0B0u;
label_4ef0b0:
    // 0x4ef0b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef0b4:
    // 0x4ef0b4: 0x2406f271  addiu       $a2, $zero, -0xD8F
    ctx->pc = 0x4ef0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963825));
label_4ef0b8:
    // 0x4ef0b8: 0x24423c90  addiu       $v0, $v0, 0x3C90
    ctx->pc = 0x4ef0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
label_4ef0bc:
    // 0x4ef0bc: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x4ef0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4ef0c0:
    // 0x4ef0c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4ef0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4ef0c4:
    // 0x4ef0c4: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x4ef0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4ef0c8:
    // 0x4ef0c8: 0xae600cbc  sw          $zero, 0xCBC($s3)
    ctx->pc = 0x4ef0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3260), GPR_U32(ctx, 0));
label_4ef0cc:
    // 0x4ef0cc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4ef0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4ef0d0:
    // 0x4ef0d0: 0xae720cc0  sw          $s2, 0xCC0($s3)
    ctx->pc = 0x4ef0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3264), GPR_U32(ctx, 18));
label_4ef0d4:
    // 0x4ef0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ef0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ef0d8:
    // 0x4ef0d8: 0xae710cc4  sw          $s1, 0xCC4($s3)
    ctx->pc = 0x4ef0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3268), GPR_U32(ctx, 17));
label_4ef0dc:
    // 0x4ef0dc: 0xae600cc8  sw          $zero, 0xCC8($s3)
    ctx->pc = 0x4ef0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3272), GPR_U32(ctx, 0));
label_4ef0e0:
    // 0x4ef0e0: 0xae600ccc  sw          $zero, 0xCCC($s3)
    ctx->pc = 0x4ef0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3276), GPR_U32(ctx, 0));
label_4ef0e4:
    // 0x4ef0e4: 0xae600cd0  sw          $zero, 0xCD0($s3)
    ctx->pc = 0x4ef0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3280), GPR_U32(ctx, 0));
label_4ef0e8:
    // 0x4ef0e8: 0xae600cdc  sw          $zero, 0xCDC($s3)
    ctx->pc = 0x4ef0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3292), GPR_U32(ctx, 0));
label_4ef0ec:
    // 0x4ef0ec: 0xae600ce0  sw          $zero, 0xCE0($s3)
    ctx->pc = 0x4ef0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3296), GPR_U32(ctx, 0));
label_4ef0f0:
    // 0x4ef0f0: 0xae600ce4  sw          $zero, 0xCE4($s3)
    ctx->pc = 0x4ef0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3300), GPR_U32(ctx, 0));
label_4ef0f4:
    // 0x4ef0f4: 0x8e670960  lw          $a3, 0x960($s3)
    ctx->pc = 0x4ef0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2400)));
label_4ef0f8:
    // 0x4ef0f8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4ef0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4ef0fc:
    // 0x4ef0fc: 0xae660960  sw          $a2, 0x960($s3)
    ctx->pc = 0x4ef0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2400), GPR_U32(ctx, 6));
label_4ef100:
    // 0x4ef100: 0x8e660964  lw          $a2, 0x964($s3)
    ctx->pc = 0x4ef100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2404)));
label_4ef104:
    // 0x4ef104: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4ef104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4ef108:
    // 0x4ef108: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4ef108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4ef10c:
    // 0x4ef10c: 0xae650964  sw          $a1, 0x964($s3)
    ctx->pc = 0x4ef10cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2404), GPR_U32(ctx, 5));
label_4ef110:
    // 0x4ef110: 0xae640964  sw          $a0, 0x964($s3)
    ctx->pc = 0x4ef110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2404), GPR_U32(ctx, 4));
label_4ef114:
    // 0x4ef114: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x4ef114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_4ef118:
    // 0x4ef118: 0xae640964  sw          $a0, 0x964($s3)
    ctx->pc = 0x4ef118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2404), GPR_U32(ctx, 4));
label_4ef11c:
    // 0x4ef11c: 0x1243001c  beq         $s2, $v1, . + 4 + (0x1C << 2)
label_4ef120:
    if (ctx->pc == 0x4EF120u) {
        ctx->pc = 0x4EF120u;
            // 0x4ef120: 0xac40aad0  sw          $zero, -0x5530($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945488), GPR_U32(ctx, 0));
        ctx->pc = 0x4EF124u;
        goto label_4ef124;
    }
    ctx->pc = 0x4EF11Cu;
    {
        const bool branch_taken_0x4ef11c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EF120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF11Cu;
            // 0x4ef120: 0xac40aad0  sw          $zero, -0x5530($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef11c) {
            ctx->pc = 0x4EF190u;
            goto label_4ef190;
        }
    }
    ctx->pc = 0x4EF124u;
label_4ef124:
    // 0x4ef124: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_4ef128:
    if (ctx->pc == 0x4EF128u) {
        ctx->pc = 0x4EF128u;
            // 0x4ef128: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x4EF12Cu;
        goto label_4ef12c;
    }
    ctx->pc = 0x4EF124u;
    {
        const bool branch_taken_0x4ef124 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef124) {
            ctx->pc = 0x4EF128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF124u;
            // 0x4ef128: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF134u;
            goto label_4ef134;
        }
    }
    ctx->pc = 0x4EF12Cu;
label_4ef12c:
    // 0x4ef12c: 0x10000030  b           . + 4 + (0x30 << 2)
label_4ef130:
    if (ctx->pc == 0x4EF130u) {
        ctx->pc = 0x4EF130u;
            // 0x4ef130: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x4EF134u;
        goto label_4ef134;
    }
    ctx->pc = 0x4EF12Cu;
    {
        const bool branch_taken_0x4ef12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF12Cu;
            // 0x4ef130: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef12c) {
            ctx->pc = 0x4EF1F0u;
            goto label_4ef1f0;
        }
    }
    ctx->pc = 0x4EF134u;
label_4ef134:
    // 0x4ef134: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ef134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ef138:
    // 0x4ef138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ef138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ef13c:
    // 0x4ef13c: 0xc040138  jal         func_1004E0
label_4ef140:
    if (ctx->pc == 0x4EF140u) {
        ctx->pc = 0x4EF140u;
            // 0x4ef140: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4EF144u;
        goto label_4ef144;
    }
    ctx->pc = 0x4EF13Cu;
    SET_GPR_U32(ctx, 31, 0x4EF144u);
    ctx->pc = 0x4EF140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF13Cu;
            // 0x4ef140: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF144u; }
        if (ctx->pc != 0x4EF144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF144u; }
        if (ctx->pc != 0x4EF144u) { return; }
    }
    ctx->pc = 0x4EF144u;
label_4ef144:
    // 0x4ef144: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4ef144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4ef148:
    // 0x4ef148: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4ef148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_4ef14c:
    // 0x4ef14c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4ef14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef150:
    // 0x4ef150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ef150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ef154:
    // 0x4ef154: 0x24a5f3b0  addiu       $a1, $a1, -0xC50
    ctx->pc = 0x4ef154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964144));
label_4ef158:
    // 0x4ef158: 0x24c6f350  addiu       $a2, $a2, -0xCB0
    ctx->pc = 0x4ef158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
label_4ef15c:
    // 0x4ef15c: 0xc040840  jal         func_102100
label_4ef160:
    if (ctx->pc == 0x4EF160u) {
        ctx->pc = 0x4EF160u;
            // 0x4ef160: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4EF164u;
        goto label_4ef164;
    }
    ctx->pc = 0x4EF15Cu;
    SET_GPR_U32(ctx, 31, 0x4EF164u);
    ctx->pc = 0x4EF160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF15Cu;
            // 0x4ef160: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF164u; }
        if (ctx->pc != 0x4EF164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF164u; }
        if (ctx->pc != 0x4EF164u) { return; }
    }
    ctx->pc = 0x4EF164u;
label_4ef164:
    // 0x4ef164: 0xae620cbc  sw          $v0, 0xCBC($s3)
    ctx->pc = 0x4ef164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3260), GPR_U32(ctx, 2));
label_4ef168:
    // 0x4ef168: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x4ef168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4ef16c:
    // 0x4ef16c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ef16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ef170:
    // 0x4ef170: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4ef170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4ef174:
    // 0x4ef174: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x4ef174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
label_4ef178:
    // 0x4ef178: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x4ef178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ef17c:
    // 0x4ef17c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4ef17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ef180:
    // 0x4ef180: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ef180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ef184:
    // 0x4ef184: 0xae640cc8  sw          $a0, 0xCC8($s3)
    ctx->pc = 0x4ef184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3272), GPR_U32(ctx, 4));
label_4ef188:
    // 0x4ef188: 0x10000018  b           . + 4 + (0x18 << 2)
label_4ef18c:
    if (ctx->pc == 0x4EF18Cu) {
        ctx->pc = 0x4EF18Cu;
            // 0x4ef18c: 0xac43cdc0  sw          $v1, -0x3240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954432), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF190u;
        goto label_4ef190;
    }
    ctx->pc = 0x4EF188u;
    {
        const bool branch_taken_0x4ef188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF188u;
            // 0x4ef18c: 0xac43cdc0  sw          $v1, -0x3240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef188) {
            ctx->pc = 0x4EF1ECu;
            goto label_4ef1ec;
        }
    }
    ctx->pc = 0x4EF190u;
label_4ef190:
    // 0x4ef190: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4ef190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4ef194:
    // 0x4ef194: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ef194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ef198:
    // 0x4ef198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ef198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ef19c:
    // 0x4ef19c: 0xc040138  jal         func_1004E0
label_4ef1a0:
    if (ctx->pc == 0x4EF1A0u) {
        ctx->pc = 0x4EF1A0u;
            // 0x4ef1a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4EF1A4u;
        goto label_4ef1a4;
    }
    ctx->pc = 0x4EF19Cu;
    SET_GPR_U32(ctx, 31, 0x4EF1A4u);
    ctx->pc = 0x4EF1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF19Cu;
            // 0x4ef1a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1A4u; }
        if (ctx->pc != 0x4EF1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1A4u; }
        if (ctx->pc != 0x4EF1A4u) { return; }
    }
    ctx->pc = 0x4EF1A4u;
label_4ef1a4:
    // 0x4ef1a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4ef1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_4ef1a8:
    // 0x4ef1a8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4ef1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_4ef1ac:
    // 0x4ef1ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4ef1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef1b0:
    // 0x4ef1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ef1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ef1b4:
    // 0x4ef1b4: 0x24a5f320  addiu       $a1, $a1, -0xCE0
    ctx->pc = 0x4ef1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964000));
label_4ef1b8:
    // 0x4ef1b8: 0x24c6f2c0  addiu       $a2, $a2, -0xD40
    ctx->pc = 0x4ef1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963904));
label_4ef1bc:
    // 0x4ef1bc: 0xc040840  jal         func_102100
label_4ef1c0:
    if (ctx->pc == 0x4EF1C0u) {
        ctx->pc = 0x4EF1C0u;
            // 0x4ef1c0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4EF1C4u;
        goto label_4ef1c4;
    }
    ctx->pc = 0x4EF1BCu;
    SET_GPR_U32(ctx, 31, 0x4EF1C4u);
    ctx->pc = 0x4EF1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF1BCu;
            // 0x4ef1c0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1C4u; }
        if (ctx->pc != 0x4EF1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1C4u; }
        if (ctx->pc != 0x4EF1C4u) { return; }
    }
    ctx->pc = 0x4EF1C4u;
label_4ef1c4:
    // 0x4ef1c4: 0xae620cbc  sw          $v0, 0xCBC($s3)
    ctx->pc = 0x4ef1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3260), GPR_U32(ctx, 2));
label_4ef1c8:
    // 0x4ef1c8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4ef1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4ef1cc:
    // 0x4ef1cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ef1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ef1d0:
    // 0x4ef1d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x4ef1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4ef1d4:
    // 0x4ef1d4: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x4ef1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
label_4ef1d8:
    // 0x4ef1d8: 0xae640cc8  sw          $a0, 0xCC8($s3)
    ctx->pc = 0x4ef1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3272), GPR_U32(ctx, 4));
label_4ef1dc:
    // 0x4ef1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ef1e0:
    // 0x4ef1e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ef1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ef1e4:
    // 0x4ef1e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ef1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ef1e8:
    // 0x4ef1e8: 0xac43cdc0  sw          $v1, -0x3240($v0)
    ctx->pc = 0x4ef1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954432), GPR_U32(ctx, 3));
label_4ef1ec:
    // 0x4ef1ec: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x4ef1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_4ef1f0:
    // 0x4ef1f0: 0xc040180  jal         func_100600
label_4ef1f4:
    if (ctx->pc == 0x4EF1F4u) {
        ctx->pc = 0x4EF1F8u;
        goto label_4ef1f8;
    }
    ctx->pc = 0x4EF1F0u;
    SET_GPR_U32(ctx, 31, 0x4EF1F8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1F8u; }
        if (ctx->pc != 0x4EF1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF1F8u; }
        if (ctx->pc != 0x4EF1F8u) { return; }
    }
    ctx->pc = 0x4EF1F8u;
label_4ef1f8:
    // 0x4ef1f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4ef1fc:
    if (ctx->pc == 0x4EF1FCu) {
        ctx->pc = 0x4EF1FCu;
            // 0x4ef1fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF200u;
        goto label_4ef200;
    }
    ctx->pc = 0x4EF1F8u;
    {
        const bool branch_taken_0x4ef1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF1F8u;
            // 0x4ef1fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef1f8) {
            ctx->pc = 0x4EF244u;
            goto label_4ef244;
        }
    }
    ctx->pc = 0x4EF200u;
label_4ef200:
    // 0x4ef200: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4ef200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4ef204:
    // 0x4ef204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef208:
    // 0x4ef208: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x4ef208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_4ef20c:
    // 0x4ef20c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ef20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ef210:
    // 0x4ef210: 0xc10ca68  jal         func_4329A0
label_4ef214:
    if (ctx->pc == 0x4EF214u) {
        ctx->pc = 0x4EF214u;
            // 0x4ef214: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EF218u;
        goto label_4ef218;
    }
    ctx->pc = 0x4EF210u;
    SET_GPR_U32(ctx, 31, 0x4EF218u);
    ctx->pc = 0x4EF214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF210u;
            // 0x4ef214: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF218u; }
        if (ctx->pc != 0x4EF218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF218u; }
        if (ctx->pc != 0x4EF218u) { return; }
    }
    ctx->pc = 0x4EF218u;
label_4ef218:
    // 0x4ef218: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ef218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ef21c:
    // 0x4ef21c: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x4ef21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_4ef220:
    // 0x4ef220: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4ef224:
    // 0x4ef224: 0xc148880  jal         func_522200
label_4ef228:
    if (ctx->pc == 0x4EF228u) {
        ctx->pc = 0x4EF228u;
            // 0x4ef228: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4EF22Cu;
        goto label_4ef22c;
    }
    ctx->pc = 0x4EF224u;
    SET_GPR_U32(ctx, 31, 0x4EF22Cu);
    ctx->pc = 0x4EF228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF224u;
            // 0x4ef228: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF22Cu; }
        if (ctx->pc != 0x4EF22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF22Cu; }
        if (ctx->pc != 0x4EF22Cu) { return; }
    }
    ctx->pc = 0x4EF22Cu;
label_4ef22c:
    // 0x4ef22c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ef22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ef230:
    // 0x4ef230: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef234:
    // 0x4ef234: 0x24633db0  addiu       $v1, $v1, 0x3DB0
    ctx->pc = 0x4ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15792));
label_4ef238:
    // 0x4ef238: 0x24423de0  addiu       $v0, $v0, 0x3DE0
    ctx->pc = 0x4ef238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
label_4ef23c:
    // 0x4ef23c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ef240:
    // 0x4ef240: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4ef240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4ef244:
    // 0x4ef244: 0xc040180  jal         func_100600
label_4ef248:
    if (ctx->pc == 0x4EF248u) {
        ctx->pc = 0x4EF248u;
            // 0x4ef248: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x4EF24Cu;
        goto label_4ef24c;
    }
    ctx->pc = 0x4EF244u;
    SET_GPR_U32(ctx, 31, 0x4EF24Cu);
    ctx->pc = 0x4EF248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF244u;
            // 0x4ef248: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF24Cu; }
        if (ctx->pc != 0x4EF24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF24Cu; }
        if (ctx->pc != 0x4EF24Cu) { return; }
    }
    ctx->pc = 0x4EF24Cu;
label_4ef24c:
    // 0x4ef24c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4ef250:
    if (ctx->pc == 0x4EF250u) {
        ctx->pc = 0x4EF250u;
            // 0x4ef250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF254u;
        goto label_4ef254;
    }
    ctx->pc = 0x4EF24Cu;
    {
        const bool branch_taken_0x4ef24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF24Cu;
            // 0x4ef250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef24c) {
            ctx->pc = 0x4EF284u;
            goto label_4ef284;
        }
    }
    ctx->pc = 0x4EF254u;
label_4ef254:
    // 0x4ef254: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4ef254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4ef258:
    // 0x4ef258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef25c:
    // 0x4ef25c: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x4ef25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
label_4ef260:
    // 0x4ef260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ef260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ef264:
    // 0x4ef264: 0xc10ca68  jal         func_4329A0
label_4ef268:
    if (ctx->pc == 0x4EF268u) {
        ctx->pc = 0x4EF268u;
            // 0x4ef268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF26Cu;
        goto label_4ef26c;
    }
    ctx->pc = 0x4EF264u;
    SET_GPR_U32(ctx, 31, 0x4EF26Cu);
    ctx->pc = 0x4EF268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF264u;
            // 0x4ef268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF26Cu; }
        if (ctx->pc != 0x4EF26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF26Cu; }
        if (ctx->pc != 0x4EF26Cu) { return; }
    }
    ctx->pc = 0x4EF26Cu;
label_4ef26c:
    // 0x4ef26c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ef26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ef270:
    // 0x4ef270: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef274:
    // 0x4ef274: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4ef274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4ef278:
    // 0x4ef278: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x4ef278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_4ef27c:
    // 0x4ef27c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ef280:
    // 0x4ef280: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ef280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ef284:
    // 0x4ef284: 0x26640cd4  addiu       $a0, $s3, 0xCD4
    ctx->pc = 0x4ef284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3284));
label_4ef288:
    // 0x4ef288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ef288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef28c:
    // 0x4ef28c: 0xc04a576  jal         func_1295D8
label_4ef290:
    if (ctx->pc == 0x4EF290u) {
        ctx->pc = 0x4EF290u;
            // 0x4ef290: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EF294u;
        goto label_4ef294;
    }
    ctx->pc = 0x4EF28Cu;
    SET_GPR_U32(ctx, 31, 0x4EF294u);
    ctx->pc = 0x4EF290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF28Cu;
            // 0x4ef290: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF294u; }
        if (ctx->pc != 0x4EF294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF294u; }
        if (ctx->pc != 0x4EF294u) { return; }
    }
    ctx->pc = 0x4EF294u;
label_4ef294:
    // 0x4ef294: 0xa2600cd8  sb          $zero, 0xCD8($s3)
    ctx->pc = 0x4ef294u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3288), (uint8_t)GPR_U32(ctx, 0));
label_4ef298:
    // 0x4ef298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ef298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ef29c:
    // 0x4ef29c: 0xa2620c76  sb          $v0, 0xC76($s3)
    ctx->pc = 0x4ef29cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3190), (uint8_t)GPR_U32(ctx, 2));
label_4ef2a0:
    // 0x4ef2a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4ef2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ef2a4:
    // 0x4ef2a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ef2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ef2a8:
    // 0x4ef2a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ef2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ef2ac:
    // 0x4ef2ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ef2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ef2b0:
    // 0x4ef2b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ef2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef2b4:
    // 0x4ef2b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ef2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef2b8:
    // 0x4ef2b8: 0x3e00008  jr          $ra
label_4ef2bc:
    if (ctx->pc == 0x4EF2BCu) {
        ctx->pc = 0x4EF2BCu;
            // 0x4ef2bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4EF2C0u;
        goto label_4ef2c0;
    }
    ctx->pc = 0x4EF2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF2B8u;
            // 0x4ef2bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF2C0u;
label_4ef2c0:
    // 0x4ef2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ef2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ef2c4:
    // 0x4ef2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ef2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ef2c8:
    // 0x4ef2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef2cc:
    // 0x4ef2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ef2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef2d0:
    // 0x4ef2d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4ef2d4:
    if (ctx->pc == 0x4EF2D4u) {
        ctx->pc = 0x4EF2D4u;
            // 0x4ef2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF2D8u;
        goto label_4ef2d8;
    }
    ctx->pc = 0x4EF2D0u;
    {
        const bool branch_taken_0x4ef2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef2d0) {
            ctx->pc = 0x4EF2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF2D0u;
            // 0x4ef2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF310u;
            goto label_4ef310;
        }
    }
    ctx->pc = 0x4EF2D8u;
label_4ef2d8:
    // 0x4ef2d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef2dc:
    // 0x4ef2dc: 0x24423d80  addiu       $v0, $v0, 0x3D80
    ctx->pc = 0x4ef2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15744));
label_4ef2e0:
    // 0x4ef2e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4ef2e4:
    if (ctx->pc == 0x4EF2E4u) {
        ctx->pc = 0x4EF2E4u;
            // 0x4ef2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4EF2E8u;
        goto label_4ef2e8;
    }
    ctx->pc = 0x4EF2E0u;
    {
        const bool branch_taken_0x4ef2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF2E0u;
            // 0x4ef2e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef2e0) {
            ctx->pc = 0x4EF2F4u;
            goto label_4ef2f4;
        }
    }
    ctx->pc = 0x4EF2E8u;
label_4ef2e8:
    // 0x4ef2e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef2ec:
    // 0x4ef2ec: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x4ef2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_4ef2f0:
    // 0x4ef2f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ef2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ef2f4:
    // 0x4ef2f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4ef2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4ef2f8:
    // 0x4ef2f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ef2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ef2fc:
    // 0x4ef2fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_4ef300:
    if (ctx->pc == 0x4EF300u) {
        ctx->pc = 0x4EF304u;
        goto label_4ef304;
    }
    ctx->pc = 0x4EF2FCu;
    {
        const bool branch_taken_0x4ef2fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ef2fc) {
            ctx->pc = 0x4EF30Cu;
            goto label_4ef30c;
        }
    }
    ctx->pc = 0x4EF304u;
label_4ef304:
    // 0x4ef304: 0xc0400a8  jal         func_1002A0
label_4ef308:
    if (ctx->pc == 0x4EF308u) {
        ctx->pc = 0x4EF308u;
            // 0x4ef308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF30Cu;
        goto label_4ef30c;
    }
    ctx->pc = 0x4EF304u;
    SET_GPR_U32(ctx, 31, 0x4EF30Cu);
    ctx->pc = 0x4EF308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF304u;
            // 0x4ef308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF30Cu; }
        if (ctx->pc != 0x4EF30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF30Cu; }
        if (ctx->pc != 0x4EF30Cu) { return; }
    }
    ctx->pc = 0x4EF30Cu;
label_4ef30c:
    // 0x4ef30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ef30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef310:
    // 0x4ef310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ef310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef314:
    // 0x4ef314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef318:
    // 0x4ef318: 0x3e00008  jr          $ra
label_4ef31c:
    if (ctx->pc == 0x4EF31Cu) {
        ctx->pc = 0x4EF31Cu;
            // 0x4ef31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4EF320u;
        goto label_4ef320;
    }
    ctx->pc = 0x4EF318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF318u;
            // 0x4ef31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF320u;
label_4ef320:
    // 0x4ef320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef324:
    // 0x4ef324: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ef324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ef328:
    // 0x4ef328: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x4ef328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_4ef32c:
    // 0x4ef32c: 0x24633d80  addiu       $v1, $v1, 0x3D80
    ctx->pc = 0x4ef32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15744));
label_4ef330:
    // 0x4ef330: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ef330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4ef334:
    // 0x4ef334: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ef334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ef338:
    // 0x4ef338: 0x8c45cdc0  lw          $a1, -0x3240($v0)
    ctx->pc = 0x4ef338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954432)));
label_4ef33c:
    // 0x4ef33c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4ef33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4ef340:
    // 0x4ef340: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ef340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef344:
    // 0x4ef344: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4ef344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4ef348:
    // 0x4ef348: 0x3e00008  jr          $ra
label_4ef34c:
    if (ctx->pc == 0x4EF34Cu) {
        ctx->pc = 0x4EF34Cu;
            // 0x4ef34c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF350u;
        goto label_4ef350;
    }
    ctx->pc = 0x4EF348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF348u;
            // 0x4ef34c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF350u;
label_4ef350:
    // 0x4ef350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ef350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ef354:
    // 0x4ef354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ef354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ef358:
    // 0x4ef358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef35c:
    // 0x4ef35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ef35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef360:
    // 0x4ef360: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4ef364:
    if (ctx->pc == 0x4EF364u) {
        ctx->pc = 0x4EF364u;
            // 0x4ef364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF368u;
        goto label_4ef368;
    }
    ctx->pc = 0x4EF360u;
    {
        const bool branch_taken_0x4ef360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef360) {
            ctx->pc = 0x4EF364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF360u;
            // 0x4ef364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF3A0u;
            goto label_4ef3a0;
        }
    }
    ctx->pc = 0x4EF368u;
label_4ef368:
    // 0x4ef368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef36c:
    // 0x4ef36c: 0x24423d50  addiu       $v0, $v0, 0x3D50
    ctx->pc = 0x4ef36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15696));
label_4ef370:
    // 0x4ef370: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4ef374:
    if (ctx->pc == 0x4EF374u) {
        ctx->pc = 0x4EF374u;
            // 0x4ef374: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4EF378u;
        goto label_4ef378;
    }
    ctx->pc = 0x4EF370u;
    {
        const bool branch_taken_0x4ef370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF370u;
            // 0x4ef374: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef370) {
            ctx->pc = 0x4EF384u;
            goto label_4ef384;
        }
    }
    ctx->pc = 0x4EF378u;
label_4ef378:
    // 0x4ef378: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef37c:
    // 0x4ef37c: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x4ef37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_4ef380:
    // 0x4ef380: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ef380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ef384:
    // 0x4ef384: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x4ef384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_4ef388:
    // 0x4ef388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ef388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ef38c:
    // 0x4ef38c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_4ef390:
    if (ctx->pc == 0x4EF390u) {
        ctx->pc = 0x4EF394u;
        goto label_4ef394;
    }
    ctx->pc = 0x4EF38Cu;
    {
        const bool branch_taken_0x4ef38c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ef38c) {
            ctx->pc = 0x4EF39Cu;
            goto label_4ef39c;
        }
    }
    ctx->pc = 0x4EF394u;
label_4ef394:
    // 0x4ef394: 0xc0400a8  jal         func_1002A0
label_4ef398:
    if (ctx->pc == 0x4EF398u) {
        ctx->pc = 0x4EF398u;
            // 0x4ef398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF39Cu;
        goto label_4ef39c;
    }
    ctx->pc = 0x4EF394u;
    SET_GPR_U32(ctx, 31, 0x4EF39Cu);
    ctx->pc = 0x4EF398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF394u;
            // 0x4ef398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF39Cu; }
        if (ctx->pc != 0x4EF39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF39Cu; }
        if (ctx->pc != 0x4EF39Cu) { return; }
    }
    ctx->pc = 0x4EF39Cu;
label_4ef39c:
    // 0x4ef39c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ef39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef3a0:
    // 0x4ef3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ef3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef3a4:
    // 0x4ef3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef3a8:
    // 0x4ef3a8: 0x3e00008  jr          $ra
label_4ef3ac:
    if (ctx->pc == 0x4EF3ACu) {
        ctx->pc = 0x4EF3ACu;
            // 0x4ef3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4EF3B0u;
        goto label_4ef3b0;
    }
    ctx->pc = 0x4EF3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF3A8u;
            // 0x4ef3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF3B0u;
label_4ef3b0:
    // 0x4ef3b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef3b4:
    // 0x4ef3b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ef3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ef3b8:
    // 0x4ef3b8: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x4ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_4ef3bc:
    // 0x4ef3bc: 0x24633d50  addiu       $v1, $v1, 0x3D50
    ctx->pc = 0x4ef3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15696));
label_4ef3c0:
    // 0x4ef3c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ef3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4ef3c4:
    // 0x4ef3c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ef3c8:
    // 0x4ef3c8: 0x8c45cdc0  lw          $a1, -0x3240($v0)
    ctx->pc = 0x4ef3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954432)));
label_4ef3cc:
    // 0x4ef3cc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4ef3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4ef3d0:
    // 0x4ef3d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ef3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef3d4:
    // 0x4ef3d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4ef3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4ef3d8:
    // 0x4ef3d8: 0x3e00008  jr          $ra
label_4ef3dc:
    if (ctx->pc == 0x4EF3DCu) {
        ctx->pc = 0x4EF3DCu;
            // 0x4ef3dc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF3E0u;
        goto label_4ef3e0;
    }
    ctx->pc = 0x4EF3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF3D8u;
            // 0x4ef3dc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF3E0u;
label_4ef3e0:
    // 0x4ef3e0: 0x3e00008  jr          $ra
label_4ef3e4:
    if (ctx->pc == 0x4EF3E4u) {
        ctx->pc = 0x4EF3E8u;
        goto label_4ef3e8;
    }
    ctx->pc = 0x4EF3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF3E8u;
label_4ef3e8:
    // 0x4ef3e8: 0x0  nop
    ctx->pc = 0x4ef3e8u;
    // NOP
label_4ef3ec:
    // 0x4ef3ec: 0x0  nop
    ctx->pc = 0x4ef3ecu;
    // NOP
label_4ef3f0:
    // 0x4ef3f0: 0x3e00008  jr          $ra
label_4ef3f4:
    if (ctx->pc == 0x4EF3F4u) {
        ctx->pc = 0x4EF3F8u;
        goto label_4ef3f8;
    }
    ctx->pc = 0x4EF3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF3F8u;
label_4ef3f8:
    // 0x4ef3f8: 0x0  nop
    ctx->pc = 0x4ef3f8u;
    // NOP
label_4ef3fc:
    // 0x4ef3fc: 0x0  nop
    ctx->pc = 0x4ef3fcu;
    // NOP
label_4ef400:
    // 0x4ef400: 0x3e00008  jr          $ra
label_4ef404:
    if (ctx->pc == 0x4EF404u) {
        ctx->pc = 0x4EF408u;
        goto label_4ef408;
    }
    ctx->pc = 0x4EF400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF408u;
label_4ef408:
    // 0x4ef408: 0x0  nop
    ctx->pc = 0x4ef408u;
    // NOP
label_4ef40c:
    // 0x4ef40c: 0x0  nop
    ctx->pc = 0x4ef40cu;
    // NOP
label_4ef410:
    // 0x4ef410: 0x3e00008  jr          $ra
label_4ef414:
    if (ctx->pc == 0x4EF414u) {
        ctx->pc = 0x4EF418u;
        goto label_4ef418;
    }
    ctx->pc = 0x4EF410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF418u;
label_4ef418:
    // 0x4ef418: 0x0  nop
    ctx->pc = 0x4ef418u;
    // NOP
label_4ef41c:
    // 0x4ef41c: 0x0  nop
    ctx->pc = 0x4ef41cu;
    // NOP
label_4ef420:
    // 0x4ef420: 0x3e00008  jr          $ra
label_4ef424:
    if (ctx->pc == 0x4EF424u) {
        ctx->pc = 0x4EF428u;
        goto label_4ef428;
    }
    ctx->pc = 0x4EF420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF428u;
label_4ef428:
    // 0x4ef428: 0x0  nop
    ctx->pc = 0x4ef428u;
    // NOP
label_4ef42c:
    // 0x4ef42c: 0x0  nop
    ctx->pc = 0x4ef42cu;
    // NOP
label_4ef430:
    // 0x4ef430: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4ef430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ef434:
    // 0x4ef434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ef434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4ef438:
    // 0x4ef438: 0x3e00008  jr          $ra
label_4ef43c:
    if (ctx->pc == 0x4EF43Cu) {
        ctx->pc = 0x4EF43Cu;
            // 0x4ef43c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF440u;
        goto label_4ef440;
    }
    ctx->pc = 0x4EF438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF438u;
            // 0x4ef43c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF440u;
label_4ef440:
    // 0x4ef440: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ef440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4ef444:
    // 0x4ef444: 0x8c65cdc0  lw          $a1, -0x3240($v1)
    ctx->pc = 0x4ef444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954432)));
label_4ef448:
    // 0x4ef448: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ef448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ef44c:
    // 0x4ef44c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x4ef44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ef450:
    // 0x4ef450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ef454:
    if (ctx->pc == 0x4EF454u) {
        ctx->pc = 0x4EF458u;
        goto label_4ef458;
    }
    ctx->pc = 0x4EF450u;
    {
        const bool branch_taken_0x4ef450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef450) {
            ctx->pc = 0x4EF45Cu;
            goto label_4ef45c;
        }
    }
    ctx->pc = 0x4EF458u;
label_4ef458:
    // 0x4ef458: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4ef458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4ef45c:
    // 0x4ef45c: 0x3e00008  jr          $ra
label_4ef460:
    if (ctx->pc == 0x4EF460u) {
        ctx->pc = 0x4EF464u;
        goto label_4ef464;
    }
    ctx->pc = 0x4EF45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF464u;
label_4ef464:
    // 0x4ef464: 0x0  nop
    ctx->pc = 0x4ef464u;
    // NOP
label_4ef468:
    // 0x4ef468: 0x0  nop
    ctx->pc = 0x4ef468u;
    // NOP
label_4ef46c:
    // 0x4ef46c: 0x0  nop
    ctx->pc = 0x4ef46cu;
    // NOP
label_4ef470:
    // 0x4ef470: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ef470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ef474:
    // 0x4ef474: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x4ef474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4ef478:
    // 0x4ef478: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4ef47c:
    if (ctx->pc == 0x4EF47Cu) {
        ctx->pc = 0x4EF47Cu;
            // 0x4ef47c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x4EF480u;
        goto label_4ef480;
    }
    ctx->pc = 0x4EF478u;
    {
        const bool branch_taken_0x4ef478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ef478) {
            ctx->pc = 0x4EF47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF478u;
            // 0x4ef47c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF488u;
            goto label_4ef488;
        }
    }
    ctx->pc = 0x4EF480u;
label_4ef480:
    // 0x4ef480: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ef480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4ef484:
    // 0x4ef484: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4ef484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4ef488:
    // 0x4ef488: 0x3e00008  jr          $ra
label_4ef48c:
    if (ctx->pc == 0x4EF48Cu) {
        ctx->pc = 0x4EF490u;
        goto label_4ef490;
    }
    ctx->pc = 0x4EF488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF490u;
label_4ef490:
    // 0x4ef490: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ef490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ef494:
    // 0x4ef494: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x4ef494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4ef498:
    // 0x4ef498: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4ef49c:
    if (ctx->pc == 0x4EF49Cu) {
        ctx->pc = 0x4EF49Cu;
            // 0x4ef49c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x4EF4A0u;
        goto label_4ef4a0;
    }
    ctx->pc = 0x4EF498u;
    {
        const bool branch_taken_0x4ef498 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ef498) {
            ctx->pc = 0x4EF49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF498u;
            // 0x4ef49c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF4A8u;
            goto label_4ef4a8;
        }
    }
    ctx->pc = 0x4EF4A0u;
label_4ef4a0:
    // 0x4ef4a0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x4ef4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_4ef4a4:
    // 0x4ef4a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4ef4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4ef4a8:
    // 0x4ef4a8: 0x3e00008  jr          $ra
label_4ef4ac:
    if (ctx->pc == 0x4EF4ACu) {
        ctx->pc = 0x4EF4B0u;
        goto label_4ef4b0;
    }
    ctx->pc = 0x4EF4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF4B0u;
label_4ef4b0:
    // 0x4ef4b0: 0x3e00008  jr          $ra
label_4ef4b4:
    if (ctx->pc == 0x4EF4B4u) {
        ctx->pc = 0x4EF4B8u;
        goto label_4ef4b8;
    }
    ctx->pc = 0x4EF4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF4B8u;
label_4ef4b8:
    // 0x4ef4b8: 0x0  nop
    ctx->pc = 0x4ef4b8u;
    // NOP
label_4ef4bc:
    // 0x4ef4bc: 0x0  nop
    ctx->pc = 0x4ef4bcu;
    // NOP
label_4ef4c0:
    // 0x4ef4c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ef4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ef4c4:
    // 0x4ef4c4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x4ef4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4ef4c8:
    // 0x4ef4c8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4ef4cc:
    if (ctx->pc == 0x4EF4CCu) {
        ctx->pc = 0x4EF4CCu;
            // 0x4ef4cc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x4EF4D0u;
        goto label_4ef4d0;
    }
    ctx->pc = 0x4EF4C8u;
    {
        const bool branch_taken_0x4ef4c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ef4c8) {
            ctx->pc = 0x4EF4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF4C8u;
            // 0x4ef4cc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF4D8u;
            goto label_4ef4d8;
        }
    }
    ctx->pc = 0x4EF4D0u;
label_4ef4d0:
    // 0x4ef4d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ef4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4ef4d4:
    // 0x4ef4d4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4ef4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4ef4d8:
    // 0x4ef4d8: 0x3e00008  jr          $ra
label_4ef4dc:
    if (ctx->pc == 0x4EF4DCu) {
        ctx->pc = 0x4EF4E0u;
        goto label_4ef4e0;
    }
    ctx->pc = 0x4EF4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF4E0u;
label_4ef4e0:
    // 0x4ef4e0: 0x3e00008  jr          $ra
label_4ef4e4:
    if (ctx->pc == 0x4EF4E4u) {
        ctx->pc = 0x4EF4E8u;
        goto label_4ef4e8;
    }
    ctx->pc = 0x4EF4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF4E8u;
label_4ef4e8:
    // 0x4ef4e8: 0x0  nop
    ctx->pc = 0x4ef4e8u;
    // NOP
label_4ef4ec:
    // 0x4ef4ec: 0x0  nop
    ctx->pc = 0x4ef4ecu;
    // NOP
label_4ef4f0:
    // 0x4ef4f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4ef4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4ef4f4:
    // 0x4ef4f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ef4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4ef4f8:
    // 0x4ef4f8: 0x3e00008  jr          $ra
label_4ef4fc:
    if (ctx->pc == 0x4EF4FCu) {
        ctx->pc = 0x4EF4FCu;
            // 0x4ef4fc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF500u;
        goto label_4ef500;
    }
    ctx->pc = 0x4EF4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF4F8u;
            // 0x4ef4fc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF500u;
label_4ef500:
    // 0x4ef500: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4ef500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4ef504:
    // 0x4ef504: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ef504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4ef508:
    // 0x4ef508: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4ef508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4ef50c:
    // 0x4ef50c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4ef50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4ef510:
    // 0x4ef510: 0x8c63cdc0  lw          $v1, -0x3240($v1)
    ctx->pc = 0x4ef510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954432)));
label_4ef514:
    // 0x4ef514: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x4ef514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4ef518:
    // 0x4ef518: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ef51c:
    if (ctx->pc == 0x4EF51Cu) {
        ctx->pc = 0x4EF520u;
        goto label_4ef520;
    }
    ctx->pc = 0x4EF518u;
    {
        const bool branch_taken_0x4ef518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef518) {
            ctx->pc = 0x4EF524u;
            goto label_4ef524;
        }
    }
    ctx->pc = 0x4EF520u;
label_4ef520:
    // 0x4ef520: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4ef520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4ef524:
    // 0x4ef524: 0x3e00008  jr          $ra
label_4ef528:
    if (ctx->pc == 0x4EF528u) {
        ctx->pc = 0x4EF52Cu;
        goto label_4ef52c;
    }
    ctx->pc = 0x4EF524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF52Cu;
label_4ef52c:
    // 0x4ef52c: 0x0  nop
    ctx->pc = 0x4ef52cu;
    // NOP
label_4ef530:
    // 0x4ef530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ef530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ef534:
    // 0x4ef534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ef534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ef538:
    // 0x4ef538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ef538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ef53c:
    // 0x4ef53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef540:
    // 0x4ef540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ef540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef544:
    // 0x4ef544: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_4ef548:
    if (ctx->pc == 0x4EF548u) {
        ctx->pc = 0x4EF548u;
            // 0x4ef548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF54Cu;
        goto label_4ef54c;
    }
    ctx->pc = 0x4EF544u;
    {
        const bool branch_taken_0x4ef544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF544u;
            // 0x4ef548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef544) {
            ctx->pc = 0x4EF5B0u;
            goto label_4ef5b0;
        }
    }
    ctx->pc = 0x4EF54Cu;
label_4ef54c:
    // 0x4ef54c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef550:
    // 0x4ef550: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ef550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ef554:
    // 0x4ef554: 0x24423db0  addiu       $v0, $v0, 0x3DB0
    ctx->pc = 0x4ef554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15792));
label_4ef558:
    // 0x4ef558: 0x24633de0  addiu       $v1, $v1, 0x3DE0
    ctx->pc = 0x4ef558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15840));
label_4ef55c:
    // 0x4ef55c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ef55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ef560:
    // 0x4ef560: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x4ef560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_4ef564:
    // 0x4ef564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4ef568:
    if (ctx->pc == 0x4EF568u) {
        ctx->pc = 0x4EF568u;
            // 0x4ef568: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4EF56Cu;
        goto label_4ef56c;
    }
    ctx->pc = 0x4EF564u;
    {
        const bool branch_taken_0x4ef564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF564u;
            // 0x4ef568: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef564) {
            ctx->pc = 0x4EF578u;
            goto label_4ef578;
        }
    }
    ctx->pc = 0x4EF56Cu;
label_4ef56c:
    // 0x4ef56c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ef56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ef570:
    // 0x4ef570: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x4ef570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
label_4ef574:
    // 0x4ef574: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4ef574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4ef578:
    // 0x4ef578: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_4ef57c:
    if (ctx->pc == 0x4EF57Cu) {
        ctx->pc = 0x4EF57Cu;
            // 0x4ef57c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4EF580u;
        goto label_4ef580;
    }
    ctx->pc = 0x4EF578u;
    {
        const bool branch_taken_0x4ef578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef578) {
            ctx->pc = 0x4EF57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF578u;
            // 0x4ef57c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF59Cu;
            goto label_4ef59c;
        }
    }
    ctx->pc = 0x4EF580u;
label_4ef580:
    // 0x4ef580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ef580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ef584:
    // 0x4ef584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ef584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ef588:
    // 0x4ef588: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4ef588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4ef58c:
    // 0x4ef58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ef58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef590:
    // 0x4ef590: 0xc057a68  jal         func_15E9A0
label_4ef594:
    if (ctx->pc == 0x4EF594u) {
        ctx->pc = 0x4EF594u;
            // 0x4ef594: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4EF598u;
        goto label_4ef598;
    }
    ctx->pc = 0x4EF590u;
    SET_GPR_U32(ctx, 31, 0x4EF598u);
    ctx->pc = 0x4EF594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF590u;
            // 0x4ef594: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF598u; }
        if (ctx->pc != 0x4EF598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF598u; }
        if (ctx->pc != 0x4EF598u) { return; }
    }
    ctx->pc = 0x4EF598u;
label_4ef598:
    // 0x4ef598: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ef598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ef59c:
    // 0x4ef59c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ef59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ef5a0:
    // 0x4ef5a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ef5a4:
    if (ctx->pc == 0x4EF5A4u) {
        ctx->pc = 0x4EF5A4u;
            // 0x4ef5a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF5A8u;
        goto label_4ef5a8;
    }
    ctx->pc = 0x4EF5A0u;
    {
        const bool branch_taken_0x4ef5a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ef5a0) {
            ctx->pc = 0x4EF5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF5A0u;
            // 0x4ef5a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF5B4u;
            goto label_4ef5b4;
        }
    }
    ctx->pc = 0x4EF5A8u;
label_4ef5a8:
    // 0x4ef5a8: 0xc0400a8  jal         func_1002A0
label_4ef5ac:
    if (ctx->pc == 0x4EF5ACu) {
        ctx->pc = 0x4EF5ACu;
            // 0x4ef5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF5B0u;
        goto label_4ef5b0;
    }
    ctx->pc = 0x4EF5A8u;
    SET_GPR_U32(ctx, 31, 0x4EF5B0u);
    ctx->pc = 0x4EF5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF5A8u;
            // 0x4ef5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF5B0u; }
        if (ctx->pc != 0x4EF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF5B0u; }
        if (ctx->pc != 0x4EF5B0u) { return; }
    }
    ctx->pc = 0x4EF5B0u;
label_4ef5b0:
    // 0x4ef5b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ef5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ef5b4:
    // 0x4ef5b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ef5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef5b8:
    // 0x4ef5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ef5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef5bc:
    // 0x4ef5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef5c0:
    // 0x4ef5c0: 0x3e00008  jr          $ra
label_4ef5c4:
    if (ctx->pc == 0x4EF5C4u) {
        ctx->pc = 0x4EF5C4u;
            // 0x4ef5c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EF5C8u;
        goto label_4ef5c8;
    }
    ctx->pc = 0x4EF5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF5C0u;
            // 0x4ef5c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF5C8u;
label_4ef5c8:
    // 0x4ef5c8: 0x0  nop
    ctx->pc = 0x4ef5c8u;
    // NOP
label_4ef5cc:
    // 0x4ef5cc: 0x0  nop
    ctx->pc = 0x4ef5ccu;
    // NOP
label_4ef5d0:
    // 0x4ef5d0: 0x813bd4c  j           func_4EF530
label_4ef5d4:
    if (ctx->pc == 0x4EF5D4u) {
        ctx->pc = 0x4EF5D4u;
            // 0x4ef5d4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->pc = 0x4EF5D8u;
        goto label_4ef5d8;
    }
    ctx->pc = 0x4EF5D0u;
    ctx->pc = 0x4EF5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF5D0u;
            // 0x4ef5d4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EF530u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4ef530;
    ctx->pc = 0x4EF5D8u;
label_4ef5d8:
    // 0x4ef5d8: 0x0  nop
    ctx->pc = 0x4ef5d8u;
    // NOP
label_4ef5dc:
    // 0x4ef5dc: 0x0  nop
    ctx->pc = 0x4ef5dcu;
    // NOP
label_4ef5e0:
    // 0x4ef5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ef5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ef5e4:
    // 0x4ef5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ef5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ef5e8:
    // 0x4ef5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ef5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ef5ec:
    // 0x4ef5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef5f0:
    // 0x4ef5f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ef5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef5f4:
    // 0x4ef5f4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4ef5f8:
    if (ctx->pc == 0x4EF5F8u) {
        ctx->pc = 0x4EF5F8u;
            // 0x4ef5f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF5FCu;
        goto label_4ef5fc;
    }
    ctx->pc = 0x4EF5F4u;
    {
        const bool branch_taken_0x4ef5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF5F4u;
            // 0x4ef5f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef5f4) {
            ctx->pc = 0x4EF660u;
            goto label_4ef660;
        }
    }
    ctx->pc = 0x4EF5FCu;
label_4ef5fc:
    // 0x4ef5fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ef5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ef600:
    // 0x4ef600: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ef600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ef604:
    // 0x4ef604: 0x24633e20  addiu       $v1, $v1, 0x3E20
    ctx->pc = 0x4ef604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15904));
label_4ef608:
    // 0x4ef608: 0x24423e58  addiu       $v0, $v0, 0x3E58
    ctx->pc = 0x4ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15960));
label_4ef60c:
    // 0x4ef60c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ef610:
    // 0x4ef610: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4ef614:
    if (ctx->pc == 0x4EF614u) {
        ctx->pc = 0x4EF614u;
            // 0x4ef614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4EF618u;
        goto label_4ef618;
    }
    ctx->pc = 0x4EF610u;
    {
        const bool branch_taken_0x4ef610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF610u;
            // 0x4ef614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef610) {
            ctx->pc = 0x4EF648u;
            goto label_4ef648;
        }
    }
    ctx->pc = 0x4EF618u;
label_4ef618:
    // 0x4ef618: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ef618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ef61c:
    // 0x4ef61c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ef61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ef620:
    // 0x4ef620: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x4ef620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
label_4ef624:
    // 0x4ef624: 0x244209c8  addiu       $v0, $v0, 0x9C8
    ctx->pc = 0x4ef624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2504));
label_4ef628:
    // 0x4ef628: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ef628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ef62c:
    // 0x4ef62c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x4ef62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_4ef630:
    // 0x4ef630: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ef630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4ef634:
    // 0x4ef634: 0xc0aed1c  jal         func_2BB470
label_4ef638:
    if (ctx->pc == 0x4EF638u) {
        ctx->pc = 0x4EF638u;
            // 0x4ef638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF63Cu;
        goto label_4ef63c;
    }
    ctx->pc = 0x4EF634u;
    SET_GPR_U32(ctx, 31, 0x4EF63Cu);
    ctx->pc = 0x4EF638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF634u;
            // 0x4ef638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF63Cu; }
        if (ctx->pc != 0x4EF63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF63Cu; }
        if (ctx->pc != 0x4EF63Cu) { return; }
    }
    ctx->pc = 0x4EF63Cu;
label_4ef63c:
    // 0x4ef63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ef63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef640:
    // 0x4ef640: 0xc0b1d14  jal         func_2C7450
label_4ef644:
    if (ctx->pc == 0x4EF644u) {
        ctx->pc = 0x4EF644u;
            // 0x4ef644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF648u;
        goto label_4ef648;
    }
    ctx->pc = 0x4EF640u;
    SET_GPR_U32(ctx, 31, 0x4EF648u);
    ctx->pc = 0x4EF644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF640u;
            // 0x4ef644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7450u;
    if (runtime->hasFunction(0x2C7450u)) {
        auto targetFn = runtime->lookupFunction(0x2C7450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF648u; }
        if (ctx->pc != 0x4EF648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7450_0x2c7450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF648u; }
        if (ctx->pc != 0x4EF648u) { return; }
    }
    ctx->pc = 0x4EF648u;
label_4ef648:
    // 0x4ef648: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ef648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4ef64c:
    // 0x4ef64c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ef64cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ef650:
    // 0x4ef650: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ef654:
    if (ctx->pc == 0x4EF654u) {
        ctx->pc = 0x4EF654u;
            // 0x4ef654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF658u;
        goto label_4ef658;
    }
    ctx->pc = 0x4EF650u;
    {
        const bool branch_taken_0x4ef650 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ef650) {
            ctx->pc = 0x4EF654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF650u;
            // 0x4ef654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF664u;
            goto label_4ef664;
        }
    }
    ctx->pc = 0x4EF658u;
label_4ef658:
    // 0x4ef658: 0xc0400a8  jal         func_1002A0
label_4ef65c:
    if (ctx->pc == 0x4EF65Cu) {
        ctx->pc = 0x4EF65Cu;
            // 0x4ef65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF660u;
        goto label_4ef660;
    }
    ctx->pc = 0x4EF658u;
    SET_GPR_U32(ctx, 31, 0x4EF660u);
    ctx->pc = 0x4EF65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF658u;
            // 0x4ef65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF660u; }
        if (ctx->pc != 0x4EF660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF660u; }
        if (ctx->pc != 0x4EF660u) { return; }
    }
    ctx->pc = 0x4EF660u;
label_4ef660:
    // 0x4ef660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ef660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ef664:
    // 0x4ef664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ef664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef668:
    // 0x4ef668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ef668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef66c:
    // 0x4ef66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef670:
    // 0x4ef670: 0x3e00008  jr          $ra
label_4ef674:
    if (ctx->pc == 0x4EF674u) {
        ctx->pc = 0x4EF674u;
            // 0x4ef674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EF678u;
        goto label_4ef678;
    }
    ctx->pc = 0x4EF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF670u;
            // 0x4ef674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF678u;
label_4ef678:
    // 0x4ef678: 0x0  nop
    ctx->pc = 0x4ef678u;
    // NOP
label_4ef67c:
    // 0x4ef67c: 0x0  nop
    ctx->pc = 0x4ef67cu;
    // NOP
label_4ef680:
    // 0x4ef680: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4ef680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4ef684:
    // 0x4ef684: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ef684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ef688:
    // 0x4ef688: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ef688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4ef68c:
    // 0x4ef68c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4ef68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4ef690:
    // 0x4ef690: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ef690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4ef694:
    // 0x4ef694: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ef694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ef698:
    // 0x4ef698: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ef698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ef69c:
    // 0x4ef69c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ef69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ef6a0:
    // 0x4ef6a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ef6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ef6a4:
    // 0x4ef6a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ef6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ef6a8:
    // 0x4ef6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ef6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ef6ac:
    // 0x4ef6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ef6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ef6b0:
    // 0x4ef6b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ef6b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ef6b4:
    // 0x4ef6b4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4ef6b8:
    if (ctx->pc == 0x4EF6B8u) {
        ctx->pc = 0x4EF6B8u;
            // 0x4ef6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF6BCu;
        goto label_4ef6bc;
    }
    ctx->pc = 0x4EF6B4u;
    {
        const bool branch_taken_0x4ef6b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EF6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF6B4u;
            // 0x4ef6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef6b4) {
            ctx->pc = 0x4EF704u;
            goto label_4ef704;
        }
    }
    ctx->pc = 0x4EF6BCu;
label_4ef6bc:
    // 0x4ef6bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ef6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ef6c0:
    // 0x4ef6c0: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_4ef6c4:
    if (ctx->pc == 0x4EF6C4u) {
        ctx->pc = 0x4EF6C8u;
        goto label_4ef6c8;
    }
    ctx->pc = 0x4EF6C0u;
    {
        const bool branch_taken_0x4ef6c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ef6c0) {
            ctx->pc = 0x4EF790u;
            goto label_4ef790;
        }
    }
    ctx->pc = 0x4EF6C8u;
label_4ef6c8:
    // 0x4ef6c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ef6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ef6cc:
    // 0x4ef6cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4ef6d0:
    if (ctx->pc == 0x4EF6D0u) {
        ctx->pc = 0x4EF6D4u;
        goto label_4ef6d4;
    }
    ctx->pc = 0x4EF6CCu;
    {
        const bool branch_taken_0x4ef6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ef6cc) {
            ctx->pc = 0x4EF6DCu;
            goto label_4ef6dc;
        }
    }
    ctx->pc = 0x4EF6D4u;
label_4ef6d4:
    // 0x4ef6d4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4ef6d8:
    if (ctx->pc == 0x4EF6D8u) {
        ctx->pc = 0x4EF6DCu;
        goto label_4ef6dc;
    }
    ctx->pc = 0x4EF6D4u;
    {
        const bool branch_taken_0x4ef6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef6d4) {
            ctx->pc = 0x4EF790u;
            goto label_4ef790;
        }
    }
    ctx->pc = 0x4EF6DCu;
label_4ef6dc:
    // 0x4ef6dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ef6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ef6e0:
    // 0x4ef6e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ef6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ef6e4:
    // 0x4ef6e4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ef6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ef6e8:
    // 0x4ef6e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4ef6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4ef6ec:
    // 0x4ef6ec: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4ef6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4ef6f0:
    // 0x4ef6f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ef6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ef6f4:
    // 0x4ef6f4: 0x320f809  jalr        $t9
label_4ef6f8:
    if (ctx->pc == 0x4EF6F8u) {
        ctx->pc = 0x4EF6F8u;
            // 0x4ef6f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4EF6FCu;
        goto label_4ef6fc;
    }
    ctx->pc = 0x4EF6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EF6FCu);
        ctx->pc = 0x4EF6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF6F4u;
            // 0x4ef6f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EF6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EF6FCu; }
            if (ctx->pc != 0x4EF6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EF6FCu;
label_4ef6fc:
    // 0x4ef6fc: 0x10000024  b           . + 4 + (0x24 << 2)
label_4ef700:
    if (ctx->pc == 0x4EF700u) {
        ctx->pc = 0x4EF704u;
        goto label_4ef704;
    }
    ctx->pc = 0x4EF6FCu;
    {
        const bool branch_taken_0x4ef6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef6fc) {
            ctx->pc = 0x4EF790u;
            goto label_4ef790;
        }
    }
    ctx->pc = 0x4EF704u;
label_4ef704:
    // 0x4ef704: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4ef704u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4ef708:
    // 0x4ef708: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_4ef70c:
    if (ctx->pc == 0x4EF70Cu) {
        ctx->pc = 0x4EF710u;
        goto label_4ef710;
    }
    ctx->pc = 0x4EF708u;
    {
        const bool branch_taken_0x4ef708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef708) {
            ctx->pc = 0x4EF790u;
            goto label_4ef790;
        }
    }
    ctx->pc = 0x4EF710u;
label_4ef710:
    // 0x4ef710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ef710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ef714:
    // 0x4ef714: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ef718:
    // 0x4ef718: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4ef718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ef71c:
    // 0x4ef71c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ef71cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef720:
    // 0x4ef720: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x4ef720u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4ef724:
    // 0x4ef724: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ef724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef728:
    // 0x4ef728: 0x8e140088  lw          $s4, 0x88($s0)
    ctx->pc = 0x4ef728u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_4ef72c:
    // 0x4ef72c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ef72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ef730:
    // 0x4ef730: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x4ef730u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4ef734:
    // 0x4ef734: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ef734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4ef738:
    // 0x4ef738: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x4ef738u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4ef73c:
    // 0x4ef73c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4ef73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4ef740:
    // 0x4ef740: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4ef740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4ef744:
    // 0x4ef744: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x4ef744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_4ef748:
    // 0x4ef748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ef748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ef74c:
    // 0x4ef74c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ef74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ef750:
    // 0x4ef750: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x4ef750u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4ef754:
    // 0x4ef754: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4ef754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4ef758:
    // 0x4ef758: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ef758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ef75c:
    // 0x4ef75c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4ef75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4ef760:
    // 0x4ef760: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4ef760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ef764:
    // 0x4ef764: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4ef764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ef768:
    // 0x4ef768: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4ef768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ef76c:
    // 0x4ef76c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ef770:
    // 0x4ef770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4ef770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ef774:
    // 0x4ef774: 0xc13be70  jal         func_4EF9C0
label_4ef778:
    if (ctx->pc == 0x4EF778u) {
        ctx->pc = 0x4EF778u;
            // 0x4ef778: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF77Cu;
        goto label_4ef77c;
    }
    ctx->pc = 0x4EF774u;
    SET_GPR_U32(ctx, 31, 0x4EF77Cu);
    ctx->pc = 0x4EF778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF774u;
            // 0x4ef778: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EF9C0u;
    if (runtime->hasFunction(0x4EF9C0u)) {
        auto targetFn = runtime->lookupFunction(0x4EF9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF77Cu; }
        if (ctx->pc != 0x4EF77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EF9C0_0x4ef9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF77Cu; }
        if (ctx->pc != 0x4EF77Cu) { return; }
    }
    ctx->pc = 0x4EF77Cu;
label_4ef77c:
    // 0x4ef77c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ef77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ef780:
    // 0x4ef780: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4ef780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4ef784:
    // 0x4ef784: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4ef788:
    if (ctx->pc == 0x4EF788u) {
        ctx->pc = 0x4EF788u;
            // 0x4ef788: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4EF78Cu;
        goto label_4ef78c;
    }
    ctx->pc = 0x4EF784u;
    {
        const bool branch_taken_0x4ef784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EF788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF784u;
            // 0x4ef788: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef784) {
            ctx->pc = 0x4EF754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ef754;
        }
    }
    ctx->pc = 0x4EF78Cu;
label_4ef78c:
    // 0x4ef78c: 0x0  nop
    ctx->pc = 0x4ef78cu;
    // NOP
label_4ef790:
    // 0x4ef790: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ef790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ef794:
    // 0x4ef794: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4ef794u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ef798:
    // 0x4ef798: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4ef798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ef79c:
    // 0x4ef79c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ef79cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ef7a0:
    // 0x4ef7a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ef7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ef7a4:
    // 0x4ef7a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ef7a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ef7a8:
    // 0x4ef7a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ef7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ef7ac:
    // 0x4ef7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ef7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef7b0:
    // 0x4ef7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ef7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef7b4:
    // 0x4ef7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ef7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef7b8:
    // 0x4ef7b8: 0x3e00008  jr          $ra
label_4ef7bc:
    if (ctx->pc == 0x4EF7BCu) {
        ctx->pc = 0x4EF7BCu;
            // 0x4ef7bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4EF7C0u;
        goto label_4ef7c0;
    }
    ctx->pc = 0x4EF7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF7B8u;
            // 0x4ef7bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF7C0u;
label_4ef7c0:
    // 0x4ef7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ef7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ef7c4:
    // 0x4ef7c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ef7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ef7c8:
    // 0x4ef7c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4ef7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4ef7cc:
    // 0x4ef7cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ef7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ef7d0:
    // 0x4ef7d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ef7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ef7d4:
    // 0x4ef7d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ef7d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ef7d8:
    // 0x4ef7d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ef7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ef7dc:
    // 0x4ef7dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ef7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ef7e0:
    // 0x4ef7e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ef7e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ef7e4:
    // 0x4ef7e4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4ef7e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ef7e8:
    // 0x4ef7e8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_4ef7ec:
    if (ctx->pc == 0x4EF7ECu) {
        ctx->pc = 0x4EF7F0u;
        goto label_4ef7f0;
    }
    ctx->pc = 0x4EF7E8u;
    {
        const bool branch_taken_0x4ef7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ef7e8) {
            ctx->pc = 0x4EF850u;
            goto label_4ef850;
        }
    }
    ctx->pc = 0x4EF7F0u;
label_4ef7f0:
    // 0x4ef7f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ef7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ef7f4:
    // 0x4ef7f4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_4ef7f8:
    if (ctx->pc == 0x4EF7F8u) {
        ctx->pc = 0x4EF7F8u;
            // 0x4ef7f8: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x4EF7FCu;
        goto label_4ef7fc;
    }
    ctx->pc = 0x4EF7F4u;
    {
        const bool branch_taken_0x4ef7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ef7f4) {
            ctx->pc = 0x4EF7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF7F4u;
            // 0x4ef7f8: 0x8e700070  lw          $s0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF810u;
            goto label_4ef810;
        }
    }
    ctx->pc = 0x4EF7FCu;
label_4ef7fc:
    // 0x4ef7fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ef7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ef800:
    // 0x4ef800: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_4ef804:
    if (ctx->pc == 0x4EF804u) {
        ctx->pc = 0x4EF808u;
        goto label_4ef808;
    }
    ctx->pc = 0x4EF800u;
    {
        const bool branch_taken_0x4ef800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ef800) {
            ctx->pc = 0x4EF968u;
            goto label_4ef968;
        }
    }
    ctx->pc = 0x4EF808u;
label_4ef808:
    // 0x4ef808: 0x10000057  b           . + 4 + (0x57 << 2)
label_4ef80c:
    if (ctx->pc == 0x4EF80Cu) {
        ctx->pc = 0x4EF810u;
        goto label_4ef810;
    }
    ctx->pc = 0x4EF808u;
    {
        const bool branch_taken_0x4ef808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef808) {
            ctx->pc = 0x4EF968u;
            goto label_4ef968;
        }
    }
    ctx->pc = 0x4EF810u;
label_4ef810:
    // 0x4ef810: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_4ef814:
    if (ctx->pc == 0x4EF814u) {
        ctx->pc = 0x4EF818u;
        goto label_4ef818;
    }
    ctx->pc = 0x4EF810u;
    {
        const bool branch_taken_0x4ef810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef810) {
            ctx->pc = 0x4EF840u;
            goto label_4ef840;
        }
    }
    ctx->pc = 0x4EF818u;
label_4ef818:
    // 0x4ef818: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ef818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef81c:
    // 0x4ef81c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ef81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef820:
    // 0x4ef820: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4ef824:
    // 0x4ef824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ef824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4ef828:
    // 0x4ef828: 0xc13bf90  jal         func_4EFE40
label_4ef82c:
    if (ctx->pc == 0x4EF82Cu) {
        ctx->pc = 0x4EF82Cu;
            // 0x4ef82c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4EF830u;
        goto label_4ef830;
    }
    ctx->pc = 0x4EF828u;
    SET_GPR_U32(ctx, 31, 0x4EF830u);
    ctx->pc = 0x4EF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF828u;
            // 0x4ef82c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EFE40u;
    if (runtime->hasFunction(0x4EFE40u)) {
        auto targetFn = runtime->lookupFunction(0x4EFE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF830u; }
        if (ctx->pc != 0x4EF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EFE40_0x4efe40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF830u; }
        if (ctx->pc != 0x4EF830u) { return; }
    }
    ctx->pc = 0x4EF830u;
label_4ef830:
    // 0x4ef830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ef830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ef834:
    // 0x4ef834: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4ef834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ef838:
    // 0x4ef838: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4ef83c:
    if (ctx->pc == 0x4EF83Cu) {
        ctx->pc = 0x4EF83Cu;
            // 0x4ef83c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4EF840u;
        goto label_4ef840;
    }
    ctx->pc = 0x4EF838u;
    {
        const bool branch_taken_0x4ef838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EF83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF838u;
            // 0x4ef83c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef838) {
            ctx->pc = 0x4EF820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ef820;
        }
    }
    ctx->pc = 0x4EF840u;
label_4ef840:
    // 0x4ef840: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ef840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ef844:
    // 0x4ef844: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ef844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ef848:
    // 0x4ef848: 0x320f809  jalr        $t9
label_4ef84c:
    if (ctx->pc == 0x4EF84Cu) {
        ctx->pc = 0x4EF84Cu;
            // 0x4ef84c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EF850u;
        goto label_4ef850;
    }
    ctx->pc = 0x4EF848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EF850u);
        ctx->pc = 0x4EF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF848u;
            // 0x4ef84c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EF850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EF850u; }
            if (ctx->pc != 0x4EF850u) { return; }
        }
        }
    }
    ctx->pc = 0x4EF850u;
label_4ef850:
    // 0x4ef850: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ef850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ef854:
    // 0x4ef854: 0x8e710088  lw          $s1, 0x88($s3)
    ctx->pc = 0x4ef854u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_4ef858:
    // 0x4ef858: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4ef858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ef85c:
    // 0x4ef85c: 0x8e700084  lw          $s0, 0x84($s3)
    ctx->pc = 0x4ef85cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_4ef860:
    // 0x4ef860: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x4ef860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ef864:
    // 0x4ef864: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4ef864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ef868:
    // 0x4ef868: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_4ef86c:
    if (ctx->pc == 0x4EF86Cu) {
        ctx->pc = 0x4EF870u;
        goto label_4ef870;
    }
    ctx->pc = 0x4EF868u;
    {
        const bool branch_taken_0x4ef868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef868) {
            ctx->pc = 0x4EF8D8u;
            goto label_4ef8d8;
        }
    }
    ctx->pc = 0x4EF870u;
label_4ef870:
    // 0x4ef870: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4ef870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef874:
    // 0x4ef874: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x4ef874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4ef878:
    // 0x4ef878: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4ef878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4ef87c:
    // 0x4ef87c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x4ef87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_4ef880:
    // 0x4ef880: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4ef880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ef884:
    // 0x4ef884: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4ef884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef888:
    // 0x4ef888: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4ef888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ef88c:
    // 0x4ef88c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ef88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ef890:
    // 0x4ef890: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ef894:
    if (ctx->pc == 0x4EF894u) {
        ctx->pc = 0x4EF894u;
            // 0x4ef894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EF898u;
        goto label_4ef898;
    }
    ctx->pc = 0x4EF890u;
    {
        const bool branch_taken_0x4ef890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EF894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF890u;
            // 0x4ef894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef890) {
            ctx->pc = 0x4EF89Cu;
            goto label_4ef89c;
        }
    }
    ctx->pc = 0x4EF898u;
label_4ef898:
    // 0x4ef898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ef898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef89c:
    // 0x4ef89c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_4ef8a0:
    if (ctx->pc == 0x4EF8A0u) {
        ctx->pc = 0x4EF8A0u;
            // 0x4ef8a0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x4EF8A4u;
        goto label_4ef8a4;
    }
    ctx->pc = 0x4EF89Cu;
    {
        const bool branch_taken_0x4ef89c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4ef89c) {
            ctx->pc = 0x4EF8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF89Cu;
            // 0x4ef8a0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF8B0u;
            goto label_4ef8b0;
        }
    }
    ctx->pc = 0x4EF8A4u;
label_4ef8a4:
    // 0x4ef8a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ef8a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ef8a8:
    // 0x4ef8a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ef8ac:
    if (ctx->pc == 0x4EF8ACu) {
        ctx->pc = 0x4EF8ACu;
            // 0x4ef8ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4EF8B0u;
        goto label_4ef8b0;
    }
    ctx->pc = 0x4EF8A8u;
    {
        const bool branch_taken_0x4ef8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF8A8u;
            // 0x4ef8ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef8a8) {
            ctx->pc = 0x4EF8C8u;
            goto label_4ef8c8;
        }
    }
    ctx->pc = 0x4EF8B0u;
label_4ef8b0:
    // 0x4ef8b0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4ef8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4ef8b4:
    // 0x4ef8b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ef8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4ef8b8:
    // 0x4ef8b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ef8b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ef8bc:
    // 0x4ef8bc: 0x0  nop
    ctx->pc = 0x4ef8bcu;
    // NOP
label_4ef8c0:
    // 0x4ef8c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ef8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ef8c4:
    // 0x4ef8c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4ef8c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4ef8c8:
    // 0x4ef8c8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4ef8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef8cc:
    // 0x4ef8cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ef8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ef8d0:
    // 0x4ef8d0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4ef8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_4ef8d4:
    // 0x4ef8d4: 0x0  nop
    ctx->pc = 0x4ef8d4u;
    // NOP
label_4ef8d8:
    // 0x4ef8d8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4ef8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4ef8dc:
    // 0x4ef8dc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4ef8e0:
    if (ctx->pc == 0x4EF8E0u) {
        ctx->pc = 0x4EF8E4u;
        goto label_4ef8e4;
    }
    ctx->pc = 0x4EF8DCu;
    {
        const bool branch_taken_0x4ef8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ef8dc) {
            ctx->pc = 0x4EF958u;
            goto label_4ef958;
        }
    }
    ctx->pc = 0x4EF8E4u;
label_4ef8e4:
    // 0x4ef8e4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4ef8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef8e8:
    // 0x4ef8e8: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x4ef8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_4ef8ec:
    // 0x4ef8ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4ef8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4ef8f0:
    // 0x4ef8f0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x4ef8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_4ef8f4:
    // 0x4ef8f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4ef8f8:
    // 0x4ef8f8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4ef8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef8fc:
    // 0x4ef8fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4ef8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ef900:
    // 0x4ef900: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ef900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ef904:
    // 0x4ef904: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ef908:
    if (ctx->pc == 0x4EF908u) {
        ctx->pc = 0x4EF908u;
            // 0x4ef908: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EF90Cu;
        goto label_4ef90c;
    }
    ctx->pc = 0x4EF904u;
    {
        const bool branch_taken_0x4ef904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EF908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF904u;
            // 0x4ef908: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef904) {
            ctx->pc = 0x4EF910u;
            goto label_4ef910;
        }
    }
    ctx->pc = 0x4EF90Cu;
label_4ef90c:
    // 0x4ef90c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ef90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ef910:
    // 0x4ef910: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4ef914:
    if (ctx->pc == 0x4EF914u) {
        ctx->pc = 0x4EF914u;
            // 0x4ef914: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4EF918u;
        goto label_4ef918;
    }
    ctx->pc = 0x4EF910u;
    {
        const bool branch_taken_0x4ef910 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4ef910) {
            ctx->pc = 0x4EF914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF910u;
            // 0x4ef914: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EF924u;
            goto label_4ef924;
        }
    }
    ctx->pc = 0x4EF918u;
label_4ef918:
    // 0x4ef918: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ef918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ef91c:
    // 0x4ef91c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ef920:
    if (ctx->pc == 0x4EF920u) {
        ctx->pc = 0x4EF920u;
            // 0x4ef920: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4EF924u;
        goto label_4ef924;
    }
    ctx->pc = 0x4EF91Cu;
    {
        const bool branch_taken_0x4ef91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF91Cu;
            // 0x4ef920: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef91c) {
            ctx->pc = 0x4EF93Cu;
            goto label_4ef93c;
        }
    }
    ctx->pc = 0x4EF924u;
label_4ef924:
    // 0x4ef924: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4ef924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4ef928:
    // 0x4ef928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ef928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ef92c:
    // 0x4ef92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ef92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ef930:
    // 0x4ef930: 0x0  nop
    ctx->pc = 0x4ef930u;
    // NOP
label_4ef934:
    // 0x4ef934: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ef934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ef938:
    // 0x4ef938: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4ef938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4ef93c:
    // 0x4ef93c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4ef93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ef940:
    // 0x4ef940: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x4ef940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ef944:
    // 0x4ef944: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x4ef944u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_4ef948:
    // 0x4ef948: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4ef948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ef94c:
    // 0x4ef94c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x4ef94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4ef950:
    // 0x4ef950: 0xc054bbc  jal         func_152EF0
label_4ef954:
    if (ctx->pc == 0x4EF954u) {
        ctx->pc = 0x4EF954u;
            // 0x4ef954: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x4EF958u;
        goto label_4ef958;
    }
    ctx->pc = 0x4EF950u;
    SET_GPR_U32(ctx, 31, 0x4EF958u);
    ctx->pc = 0x4EF954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF950u;
            // 0x4ef954: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF958u; }
        if (ctx->pc != 0x4EF958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EF958u; }
        if (ctx->pc != 0x4EF958u) { return; }
    }
    ctx->pc = 0x4EF958u;
label_4ef958:
    // 0x4ef958: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4ef958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4ef95c:
    // 0x4ef95c: 0x1600ffc1  bnez        $s0, . + 4 + (-0x3F << 2)
label_4ef960:
    if (ctx->pc == 0x4EF960u) {
        ctx->pc = 0x4EF960u;
            // 0x4ef960: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4EF964u;
        goto label_4ef964;
    }
    ctx->pc = 0x4EF95Cu;
    {
        const bool branch_taken_0x4ef95c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EF960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF95Cu;
            // 0x4ef960: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef95c) {
            ctx->pc = 0x4EF864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ef864;
        }
    }
    ctx->pc = 0x4EF964u;
label_4ef964:
    // 0x4ef964: 0x0  nop
    ctx->pc = 0x4ef964u;
    // NOP
label_4ef968:
    // 0x4ef968: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ef968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ef96c:
    // 0x4ef96c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ef96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ef970:
    // 0x4ef970: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ef970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ef974:
    // 0x4ef974: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ef974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ef978:
    // 0x4ef978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ef978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ef97c:
    // 0x4ef97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ef97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ef980:
    // 0x4ef980: 0x3e00008  jr          $ra
label_4ef984:
    if (ctx->pc == 0x4EF984u) {
        ctx->pc = 0x4EF984u;
            // 0x4ef984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4EF988u;
        goto label_4ef988;
    }
    ctx->pc = 0x4EF980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF980u;
            // 0x4ef984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EF988u;
label_4ef988:
    // 0x4ef988: 0x0  nop
    ctx->pc = 0x4ef988u;
    // NOP
label_4ef98c:
    // 0x4ef98c: 0x0  nop
    ctx->pc = 0x4ef98cu;
    // NOP
label_4ef990:
    // 0x4ef990: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x4ef990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_4ef994:
    // 0x4ef994: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4ef998:
    if (ctx->pc == 0x4EF998u) {
        ctx->pc = 0x4EF998u;
            // 0x4ef998: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x4EF99Cu;
        goto label_4ef99c;
    }
    ctx->pc = 0x4EF994u;
    {
        const bool branch_taken_0x4ef994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EF998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EF994u;
            // 0x4ef998: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef994) {
            ctx->pc = 0x4EF9B8u;
            goto label_4ef9b8;
        }
    }
    ctx->pc = 0x4EF99Cu;
label_4ef99c:
    // 0x4ef99c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x4ef99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_4ef9a0:
    // 0x4ef9a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ef9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4ef9a4:
    // 0x4ef9a4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4ef9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_4ef9a8:
    // 0x4ef9a8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4ef9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4ef9ac:
    // 0x4ef9ac: 0x0  nop
    ctx->pc = 0x4ef9acu;
    // NOP
label_4ef9b0:
    // 0x4ef9b0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4ef9b4:
    if (ctx->pc == 0x4EF9B4u) {
        ctx->pc = 0x4EF9B8u;
        goto label_4ef9b8;
    }
    ctx->pc = 0x4EF9B0u;
    {
        const bool branch_taken_0x4ef9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ef9b0) {
            ctx->pc = 0x4EF99Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ef99c;
        }
    }
    ctx->pc = 0x4EF9B8u;
label_4ef9b8:
    // 0x4ef9b8: 0x3e00008  jr          $ra
label_4ef9bc:
    if (ctx->pc == 0x4EF9BCu) {
        ctx->pc = 0x4EF9C0u;
        goto label_fallthrough_0x4ef9b8;
    }
    ctx->pc = 0x4EF9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ef9b8:
    ctx->pc = 0x4EF9C0u;
}
