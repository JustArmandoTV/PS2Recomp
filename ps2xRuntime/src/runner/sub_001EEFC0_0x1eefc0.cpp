#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEFC0
// Address: 0x1eefc0 - 0x1ef670
void sub_001EEFC0_0x1eefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEFC0_0x1eefc0");
#endif

    switch (ctx->pc) {
        case 0x1eefc0u: goto label_1eefc0;
        case 0x1eefc4u: goto label_1eefc4;
        case 0x1eefc8u: goto label_1eefc8;
        case 0x1eefccu: goto label_1eefcc;
        case 0x1eefd0u: goto label_1eefd0;
        case 0x1eefd4u: goto label_1eefd4;
        case 0x1eefd8u: goto label_1eefd8;
        case 0x1eefdcu: goto label_1eefdc;
        case 0x1eefe0u: goto label_1eefe0;
        case 0x1eefe4u: goto label_1eefe4;
        case 0x1eefe8u: goto label_1eefe8;
        case 0x1eefecu: goto label_1eefec;
        case 0x1eeff0u: goto label_1eeff0;
        case 0x1eeff4u: goto label_1eeff4;
        case 0x1eeff8u: goto label_1eeff8;
        case 0x1eeffcu: goto label_1eeffc;
        case 0x1ef000u: goto label_1ef000;
        case 0x1ef004u: goto label_1ef004;
        case 0x1ef008u: goto label_1ef008;
        case 0x1ef00cu: goto label_1ef00c;
        case 0x1ef010u: goto label_1ef010;
        case 0x1ef014u: goto label_1ef014;
        case 0x1ef018u: goto label_1ef018;
        case 0x1ef01cu: goto label_1ef01c;
        case 0x1ef020u: goto label_1ef020;
        case 0x1ef024u: goto label_1ef024;
        case 0x1ef028u: goto label_1ef028;
        case 0x1ef02cu: goto label_1ef02c;
        case 0x1ef030u: goto label_1ef030;
        case 0x1ef034u: goto label_1ef034;
        case 0x1ef038u: goto label_1ef038;
        case 0x1ef03cu: goto label_1ef03c;
        case 0x1ef040u: goto label_1ef040;
        case 0x1ef044u: goto label_1ef044;
        case 0x1ef048u: goto label_1ef048;
        case 0x1ef04cu: goto label_1ef04c;
        case 0x1ef050u: goto label_1ef050;
        case 0x1ef054u: goto label_1ef054;
        case 0x1ef058u: goto label_1ef058;
        case 0x1ef05cu: goto label_1ef05c;
        case 0x1ef060u: goto label_1ef060;
        case 0x1ef064u: goto label_1ef064;
        case 0x1ef068u: goto label_1ef068;
        case 0x1ef06cu: goto label_1ef06c;
        case 0x1ef070u: goto label_1ef070;
        case 0x1ef074u: goto label_1ef074;
        case 0x1ef078u: goto label_1ef078;
        case 0x1ef07cu: goto label_1ef07c;
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef084u: goto label_1ef084;
        case 0x1ef088u: goto label_1ef088;
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        case 0x1ef150u: goto label_1ef150;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef158u: goto label_1ef158;
        case 0x1ef15cu: goto label_1ef15c;
        case 0x1ef160u: goto label_1ef160;
        case 0x1ef164u: goto label_1ef164;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef16cu: goto label_1ef16c;
        case 0x1ef170u: goto label_1ef170;
        case 0x1ef174u: goto label_1ef174;
        case 0x1ef178u: goto label_1ef178;
        case 0x1ef17cu: goto label_1ef17c;
        case 0x1ef180u: goto label_1ef180;
        case 0x1ef184u: goto label_1ef184;
        case 0x1ef188u: goto label_1ef188;
        case 0x1ef18cu: goto label_1ef18c;
        case 0x1ef190u: goto label_1ef190;
        case 0x1ef194u: goto label_1ef194;
        case 0x1ef198u: goto label_1ef198;
        case 0x1ef19cu: goto label_1ef19c;
        case 0x1ef1a0u: goto label_1ef1a0;
        case 0x1ef1a4u: goto label_1ef1a4;
        case 0x1ef1a8u: goto label_1ef1a8;
        case 0x1ef1acu: goto label_1ef1ac;
        case 0x1ef1b0u: goto label_1ef1b0;
        case 0x1ef1b4u: goto label_1ef1b4;
        case 0x1ef1b8u: goto label_1ef1b8;
        case 0x1ef1bcu: goto label_1ef1bc;
        case 0x1ef1c0u: goto label_1ef1c0;
        case 0x1ef1c4u: goto label_1ef1c4;
        case 0x1ef1c8u: goto label_1ef1c8;
        case 0x1ef1ccu: goto label_1ef1cc;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1d4u: goto label_1ef1d4;
        case 0x1ef1d8u: goto label_1ef1d8;
        case 0x1ef1dcu: goto label_1ef1dc;
        case 0x1ef1e0u: goto label_1ef1e0;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef1e8u: goto label_1ef1e8;
        case 0x1ef1ecu: goto label_1ef1ec;
        case 0x1ef1f0u: goto label_1ef1f0;
        case 0x1ef1f4u: goto label_1ef1f4;
        case 0x1ef1f8u: goto label_1ef1f8;
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef200u: goto label_1ef200;
        case 0x1ef204u: goto label_1ef204;
        case 0x1ef208u: goto label_1ef208;
        case 0x1ef20cu: goto label_1ef20c;
        case 0x1ef210u: goto label_1ef210;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef218u: goto label_1ef218;
        case 0x1ef21cu: goto label_1ef21c;
        case 0x1ef220u: goto label_1ef220;
        case 0x1ef224u: goto label_1ef224;
        case 0x1ef228u: goto label_1ef228;
        case 0x1ef22cu: goto label_1ef22c;
        case 0x1ef230u: goto label_1ef230;
        case 0x1ef234u: goto label_1ef234;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef23cu: goto label_1ef23c;
        case 0x1ef240u: goto label_1ef240;
        case 0x1ef244u: goto label_1ef244;
        case 0x1ef248u: goto label_1ef248;
        case 0x1ef24cu: goto label_1ef24c;
        case 0x1ef250u: goto label_1ef250;
        case 0x1ef254u: goto label_1ef254;
        case 0x1ef258u: goto label_1ef258;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef260u: goto label_1ef260;
        case 0x1ef264u: goto label_1ef264;
        case 0x1ef268u: goto label_1ef268;
        case 0x1ef26cu: goto label_1ef26c;
        case 0x1ef270u: goto label_1ef270;
        case 0x1ef274u: goto label_1ef274;
        case 0x1ef278u: goto label_1ef278;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef284u: goto label_1ef284;
        case 0x1ef288u: goto label_1ef288;
        case 0x1ef28cu: goto label_1ef28c;
        case 0x1ef290u: goto label_1ef290;
        case 0x1ef294u: goto label_1ef294;
        case 0x1ef298u: goto label_1ef298;
        case 0x1ef29cu: goto label_1ef29c;
        case 0x1ef2a0u: goto label_1ef2a0;
        case 0x1ef2a4u: goto label_1ef2a4;
        case 0x1ef2a8u: goto label_1ef2a8;
        case 0x1ef2acu: goto label_1ef2ac;
        case 0x1ef2b0u: goto label_1ef2b0;
        case 0x1ef2b4u: goto label_1ef2b4;
        case 0x1ef2b8u: goto label_1ef2b8;
        case 0x1ef2bcu: goto label_1ef2bc;
        case 0x1ef2c0u: goto label_1ef2c0;
        case 0x1ef2c4u: goto label_1ef2c4;
        case 0x1ef2c8u: goto label_1ef2c8;
        case 0x1ef2ccu: goto label_1ef2cc;
        case 0x1ef2d0u: goto label_1ef2d0;
        case 0x1ef2d4u: goto label_1ef2d4;
        case 0x1ef2d8u: goto label_1ef2d8;
        case 0x1ef2dcu: goto label_1ef2dc;
        case 0x1ef2e0u: goto label_1ef2e0;
        case 0x1ef2e4u: goto label_1ef2e4;
        case 0x1ef2e8u: goto label_1ef2e8;
        case 0x1ef2ecu: goto label_1ef2ec;
        case 0x1ef2f0u: goto label_1ef2f0;
        case 0x1ef2f4u: goto label_1ef2f4;
        case 0x1ef2f8u: goto label_1ef2f8;
        case 0x1ef2fcu: goto label_1ef2fc;
        case 0x1ef300u: goto label_1ef300;
        case 0x1ef304u: goto label_1ef304;
        case 0x1ef308u: goto label_1ef308;
        case 0x1ef30cu: goto label_1ef30c;
        case 0x1ef310u: goto label_1ef310;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef318u: goto label_1ef318;
        case 0x1ef31cu: goto label_1ef31c;
        case 0x1ef320u: goto label_1ef320;
        case 0x1ef324u: goto label_1ef324;
        case 0x1ef328u: goto label_1ef328;
        case 0x1ef32cu: goto label_1ef32c;
        case 0x1ef330u: goto label_1ef330;
        case 0x1ef334u: goto label_1ef334;
        case 0x1ef338u: goto label_1ef338;
        case 0x1ef33cu: goto label_1ef33c;
        case 0x1ef340u: goto label_1ef340;
        case 0x1ef344u: goto label_1ef344;
        case 0x1ef348u: goto label_1ef348;
        case 0x1ef34cu: goto label_1ef34c;
        case 0x1ef350u: goto label_1ef350;
        case 0x1ef354u: goto label_1ef354;
        case 0x1ef358u: goto label_1ef358;
        case 0x1ef35cu: goto label_1ef35c;
        case 0x1ef360u: goto label_1ef360;
        case 0x1ef364u: goto label_1ef364;
        case 0x1ef368u: goto label_1ef368;
        case 0x1ef36cu: goto label_1ef36c;
        case 0x1ef370u: goto label_1ef370;
        case 0x1ef374u: goto label_1ef374;
        case 0x1ef378u: goto label_1ef378;
        case 0x1ef37cu: goto label_1ef37c;
        case 0x1ef380u: goto label_1ef380;
        case 0x1ef384u: goto label_1ef384;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef38cu: goto label_1ef38c;
        case 0x1ef390u: goto label_1ef390;
        case 0x1ef394u: goto label_1ef394;
        case 0x1ef398u: goto label_1ef398;
        case 0x1ef39cu: goto label_1ef39c;
        case 0x1ef3a0u: goto label_1ef3a0;
        case 0x1ef3a4u: goto label_1ef3a4;
        case 0x1ef3a8u: goto label_1ef3a8;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3b0u: goto label_1ef3b0;
        case 0x1ef3b4u: goto label_1ef3b4;
        case 0x1ef3b8u: goto label_1ef3b8;
        case 0x1ef3bcu: goto label_1ef3bc;
        case 0x1ef3c0u: goto label_1ef3c0;
        case 0x1ef3c4u: goto label_1ef3c4;
        case 0x1ef3c8u: goto label_1ef3c8;
        case 0x1ef3ccu: goto label_1ef3cc;
        case 0x1ef3d0u: goto label_1ef3d0;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef3d8u: goto label_1ef3d8;
        case 0x1ef3dcu: goto label_1ef3dc;
        case 0x1ef3e0u: goto label_1ef3e0;
        case 0x1ef3e4u: goto label_1ef3e4;
        case 0x1ef3e8u: goto label_1ef3e8;
        case 0x1ef3ecu: goto label_1ef3ec;
        case 0x1ef3f0u: goto label_1ef3f0;
        case 0x1ef3f4u: goto label_1ef3f4;
        case 0x1ef3f8u: goto label_1ef3f8;
        case 0x1ef3fcu: goto label_1ef3fc;
        case 0x1ef400u: goto label_1ef400;
        case 0x1ef404u: goto label_1ef404;
        case 0x1ef408u: goto label_1ef408;
        case 0x1ef40cu: goto label_1ef40c;
        case 0x1ef410u: goto label_1ef410;
        case 0x1ef414u: goto label_1ef414;
        case 0x1ef418u: goto label_1ef418;
        case 0x1ef41cu: goto label_1ef41c;
        case 0x1ef420u: goto label_1ef420;
        case 0x1ef424u: goto label_1ef424;
        case 0x1ef428u: goto label_1ef428;
        case 0x1ef42cu: goto label_1ef42c;
        case 0x1ef430u: goto label_1ef430;
        case 0x1ef434u: goto label_1ef434;
        case 0x1ef438u: goto label_1ef438;
        case 0x1ef43cu: goto label_1ef43c;
        case 0x1ef440u: goto label_1ef440;
        case 0x1ef444u: goto label_1ef444;
        case 0x1ef448u: goto label_1ef448;
        case 0x1ef44cu: goto label_1ef44c;
        case 0x1ef450u: goto label_1ef450;
        case 0x1ef454u: goto label_1ef454;
        case 0x1ef458u: goto label_1ef458;
        case 0x1ef45cu: goto label_1ef45c;
        case 0x1ef460u: goto label_1ef460;
        case 0x1ef464u: goto label_1ef464;
        case 0x1ef468u: goto label_1ef468;
        case 0x1ef46cu: goto label_1ef46c;
        case 0x1ef470u: goto label_1ef470;
        case 0x1ef474u: goto label_1ef474;
        case 0x1ef478u: goto label_1ef478;
        case 0x1ef47cu: goto label_1ef47c;
        case 0x1ef480u: goto label_1ef480;
        case 0x1ef484u: goto label_1ef484;
        case 0x1ef488u: goto label_1ef488;
        case 0x1ef48cu: goto label_1ef48c;
        case 0x1ef490u: goto label_1ef490;
        case 0x1ef494u: goto label_1ef494;
        case 0x1ef498u: goto label_1ef498;
        case 0x1ef49cu: goto label_1ef49c;
        case 0x1ef4a0u: goto label_1ef4a0;
        case 0x1ef4a4u: goto label_1ef4a4;
        case 0x1ef4a8u: goto label_1ef4a8;
        case 0x1ef4acu: goto label_1ef4ac;
        case 0x1ef4b0u: goto label_1ef4b0;
        case 0x1ef4b4u: goto label_1ef4b4;
        case 0x1ef4b8u: goto label_1ef4b8;
        case 0x1ef4bcu: goto label_1ef4bc;
        case 0x1ef4c0u: goto label_1ef4c0;
        case 0x1ef4c4u: goto label_1ef4c4;
        case 0x1ef4c8u: goto label_1ef4c8;
        case 0x1ef4ccu: goto label_1ef4cc;
        case 0x1ef4d0u: goto label_1ef4d0;
        case 0x1ef4d4u: goto label_1ef4d4;
        case 0x1ef4d8u: goto label_1ef4d8;
        case 0x1ef4dcu: goto label_1ef4dc;
        case 0x1ef4e0u: goto label_1ef4e0;
        case 0x1ef4e4u: goto label_1ef4e4;
        case 0x1ef4e8u: goto label_1ef4e8;
        case 0x1ef4ecu: goto label_1ef4ec;
        case 0x1ef4f0u: goto label_1ef4f0;
        case 0x1ef4f4u: goto label_1ef4f4;
        case 0x1ef4f8u: goto label_1ef4f8;
        case 0x1ef4fcu: goto label_1ef4fc;
        case 0x1ef500u: goto label_1ef500;
        case 0x1ef504u: goto label_1ef504;
        case 0x1ef508u: goto label_1ef508;
        case 0x1ef50cu: goto label_1ef50c;
        case 0x1ef510u: goto label_1ef510;
        case 0x1ef514u: goto label_1ef514;
        case 0x1ef518u: goto label_1ef518;
        case 0x1ef51cu: goto label_1ef51c;
        case 0x1ef520u: goto label_1ef520;
        case 0x1ef524u: goto label_1ef524;
        case 0x1ef528u: goto label_1ef528;
        case 0x1ef52cu: goto label_1ef52c;
        case 0x1ef530u: goto label_1ef530;
        case 0x1ef534u: goto label_1ef534;
        case 0x1ef538u: goto label_1ef538;
        case 0x1ef53cu: goto label_1ef53c;
        case 0x1ef540u: goto label_1ef540;
        case 0x1ef544u: goto label_1ef544;
        case 0x1ef548u: goto label_1ef548;
        case 0x1ef54cu: goto label_1ef54c;
        case 0x1ef550u: goto label_1ef550;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef558u: goto label_1ef558;
        case 0x1ef55cu: goto label_1ef55c;
        case 0x1ef560u: goto label_1ef560;
        case 0x1ef564u: goto label_1ef564;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef56cu: goto label_1ef56c;
        case 0x1ef570u: goto label_1ef570;
        case 0x1ef574u: goto label_1ef574;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef57cu: goto label_1ef57c;
        case 0x1ef580u: goto label_1ef580;
        case 0x1ef584u: goto label_1ef584;
        case 0x1ef588u: goto label_1ef588;
        case 0x1ef58cu: goto label_1ef58c;
        case 0x1ef590u: goto label_1ef590;
        case 0x1ef594u: goto label_1ef594;
        case 0x1ef598u: goto label_1ef598;
        case 0x1ef59cu: goto label_1ef59c;
        case 0x1ef5a0u: goto label_1ef5a0;
        case 0x1ef5a4u: goto label_1ef5a4;
        case 0x1ef5a8u: goto label_1ef5a8;
        case 0x1ef5acu: goto label_1ef5ac;
        case 0x1ef5b0u: goto label_1ef5b0;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5b8u: goto label_1ef5b8;
        case 0x1ef5bcu: goto label_1ef5bc;
        case 0x1ef5c0u: goto label_1ef5c0;
        case 0x1ef5c4u: goto label_1ef5c4;
        case 0x1ef5c8u: goto label_1ef5c8;
        case 0x1ef5ccu: goto label_1ef5cc;
        case 0x1ef5d0u: goto label_1ef5d0;
        case 0x1ef5d4u: goto label_1ef5d4;
        case 0x1ef5d8u: goto label_1ef5d8;
        case 0x1ef5dcu: goto label_1ef5dc;
        case 0x1ef5e0u: goto label_1ef5e0;
        case 0x1ef5e4u: goto label_1ef5e4;
        case 0x1ef5e8u: goto label_1ef5e8;
        case 0x1ef5ecu: goto label_1ef5ec;
        case 0x1ef5f0u: goto label_1ef5f0;
        case 0x1ef5f4u: goto label_1ef5f4;
        case 0x1ef5f8u: goto label_1ef5f8;
        case 0x1ef5fcu: goto label_1ef5fc;
        case 0x1ef600u: goto label_1ef600;
        case 0x1ef604u: goto label_1ef604;
        case 0x1ef608u: goto label_1ef608;
        case 0x1ef60cu: goto label_1ef60c;
        case 0x1ef610u: goto label_1ef610;
        case 0x1ef614u: goto label_1ef614;
        case 0x1ef618u: goto label_1ef618;
        case 0x1ef61cu: goto label_1ef61c;
        case 0x1ef620u: goto label_1ef620;
        case 0x1ef624u: goto label_1ef624;
        case 0x1ef628u: goto label_1ef628;
        case 0x1ef62cu: goto label_1ef62c;
        case 0x1ef630u: goto label_1ef630;
        case 0x1ef634u: goto label_1ef634;
        case 0x1ef638u: goto label_1ef638;
        case 0x1ef63cu: goto label_1ef63c;
        case 0x1ef640u: goto label_1ef640;
        case 0x1ef644u: goto label_1ef644;
        case 0x1ef648u: goto label_1ef648;
        case 0x1ef64cu: goto label_1ef64c;
        case 0x1ef650u: goto label_1ef650;
        case 0x1ef654u: goto label_1ef654;
        case 0x1ef658u: goto label_1ef658;
        case 0x1ef65cu: goto label_1ef65c;
        case 0x1ef660u: goto label_1ef660;
        case 0x1ef664u: goto label_1ef664;
        case 0x1ef668u: goto label_1ef668;
        case 0x1ef66cu: goto label_1ef66c;
        default: break;
    }

    ctx->pc = 0x1eefc0u;

label_1eefc0:
    // 0x1eefc0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_1eefc4:
    // 0x1eefc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1eefc8:
    // 0x1eefc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1eefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1eefcc:
    // 0x1eefcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eefccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1eefd0:
    // 0x1eefd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eefd4:
    // 0x1eefd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eefd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eefd8:
    // 0x1eefd8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1eefd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eefdc:
    // 0x1eefdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eefdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eefe0:
    // 0x1eefe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eefe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eefe4:
    // 0x1eefe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eefe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eefe8:
    // 0x1eefe8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eefe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eefec:
    // 0x1eefec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eefecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eeff0:
    // 0x1eeff0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1eeff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1eeff4:
    // 0x1eeff4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1eeff8:
    // 0x1eeff8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eeff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eeffc:
    // 0x1eeffc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1eeffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ef000:
    // 0x1ef000: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ef000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ef004:
    // 0x1ef004: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ef004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef008:
    // 0x1ef008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ef00c:
    if (ctx->pc == 0x1EF00Cu) {
        ctx->pc = 0x1EF00Cu;
            // 0x1ef00c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1EF010u;
        goto label_1ef010;
    }
    ctx->pc = 0x1EF008u;
    {
        const bool branch_taken_0x1ef008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF008u;
            // 0x1ef00c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef008) {
            ctx->pc = 0x1EF038u;
            goto label_1ef038;
        }
    }
    ctx->pc = 0x1EF010u;
label_1ef010:
    // 0x1ef010: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ef010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ef014:
    // 0x1ef014: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ef018:
    // 0x1ef018: 0x2442ade0  addiu       $v0, $v0, -0x5220
    ctx->pc = 0x1ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946272));
label_1ef01c:
    // 0x1ef01c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef020:
    // 0x1ef020: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef020u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ef024:
    // 0x1ef024: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ef024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ef028:
    // 0x1ef028: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ef02c:
    // 0x1ef02c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ef02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ef030:
    // 0x1ef030: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ef030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ef034:
    // 0x1ef034: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ef034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ef038:
    // 0x1ef038: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef03c:
    // 0x1ef03c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1ef03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef040:
    // 0x1ef040: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef044:
    // 0x1ef044: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1ef044u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ef048:
    // 0x1ef048: 0xc0a45a0  jal         func_291680
label_1ef04c:
    if (ctx->pc == 0x1EF04Cu) {
        ctx->pc = 0x1EF04Cu;
            // 0x1ef04c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1EF050u;
        goto label_1ef050;
    }
    ctx->pc = 0x1EF048u;
    SET_GPR_U32(ctx, 31, 0x1EF050u);
    ctx->pc = 0x1EF04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF048u;
            // 0x1ef04c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF050u; }
        if (ctx->pc != 0x1EF050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF050u; }
        if (ctx->pc != 0x1EF050u) { return; }
    }
    ctx->pc = 0x1EF050u;
label_1ef050:
    // 0x1ef050: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1ef050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ef054:
    // 0x1ef054: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ef054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ef058:
    // 0x1ef058: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_1ef05c:
    if (ctx->pc == 0x1EF05Cu) {
        ctx->pc = 0x1EF05Cu;
            // 0x1ef05c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF060u;
        goto label_1ef060;
    }
    ctx->pc = 0x1EF058u;
    {
        const bool branch_taken_0x1ef058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef058) {
            ctx->pc = 0x1EF05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF058u;
            // 0x1ef05c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF07Cu;
            goto label_1ef07c;
        }
    }
    ctx->pc = 0x1EF060u;
label_1ef060:
    // 0x1ef060: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ef060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ef064:
    // 0x1ef064: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ef064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef068:
    // 0x1ef068: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1ef068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1ef06c:
    // 0x1ef06c: 0xc09978c  jal         func_265E30
label_1ef070:
    if (ctx->pc == 0x1EF070u) {
        ctx->pc = 0x1EF070u;
            // 0x1ef070: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1EF074u;
        goto label_1ef074;
    }
    ctx->pc = 0x1EF06Cu;
    SET_GPR_U32(ctx, 31, 0x1EF074u);
    ctx->pc = 0x1EF070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF06Cu;
            // 0x1ef070: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265E30u;
    if (runtime->hasFunction(0x265E30u)) {
        auto targetFn = runtime->lookupFunction(0x265E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF074u; }
        if (ctx->pc != 0x1EF074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265E30_0x265e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF074u; }
        if (ctx->pc != 0x1EF074u) { return; }
    }
    ctx->pc = 0x1EF074u;
label_1ef074:
    // 0x1ef074: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ef078:
    if (ctx->pc == 0x1EF078u) {
        ctx->pc = 0x1EF078u;
            // 0x1ef078: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1EF07Cu;
        goto label_1ef07c;
    }
    ctx->pc = 0x1EF074u;
    {
        const bool branch_taken_0x1ef074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF074u;
            // 0x1ef078: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef074) {
            ctx->pc = 0x1EF090u;
            goto label_1ef090;
        }
    }
    ctx->pc = 0x1EF07Cu;
label_1ef07c:
    // 0x1ef07c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ef07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef080:
    // 0x1ef080: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1ef084:
    // 0x1ef084: 0xc099878  jal         func_2661E0
label_1ef088:
    if (ctx->pc == 0x1EF088u) {
        ctx->pc = 0x1EF088u;
            // 0x1ef088: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1EF08Cu;
        goto label_1ef08c;
    }
    ctx->pc = 0x1EF084u;
    SET_GPR_U32(ctx, 31, 0x1EF08Cu);
    ctx->pc = 0x1EF088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF084u;
            // 0x1ef088: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF08Cu; }
        if (ctx->pc != 0x1EF08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF08Cu; }
        if (ctx->pc != 0x1EF08Cu) { return; }
    }
    ctx->pc = 0x1EF08Cu;
label_1ef08c:
    // 0x1ef08c: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef090:
    // 0x1ef090: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1ef094:
    // 0x1ef094: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1ef094u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ef098:
    // 0x1ef098: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ef09c:
    // 0x1ef09c: 0x93a202c9  lbu         $v0, 0x2C9($sp)
    ctx->pc = 0x1ef09cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 713)));
label_1ef0a0:
    // 0x1ef0a0: 0x93a602c8  lbu         $a2, 0x2C8($sp)
    ctx->pc = 0x1ef0a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 712)));
label_1ef0a4:
    // 0x1ef0a4: 0x93a302ca  lbu         $v1, 0x2CA($sp)
    ctx->pc = 0x1ef0a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 714)));
label_1ef0a8:
    // 0x1ef0a8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1ef0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1ef0ac:
    // 0x1ef0ac: 0x93a202cb  lbu         $v0, 0x2CB($sp)
    ctx->pc = 0x1ef0acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 715)));
label_1ef0b0:
    // 0x1ef0b0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1ef0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_1ef0b4:
    // 0x1ef0b4: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1ef0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
label_1ef0b8:
    // 0x1ef0b8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1ef0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1ef0bc:
    // 0x1ef0bc: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1ef0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_1ef0c0:
    // 0x1ef0c0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1ef0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1ef0c4:
    // 0x1ef0c4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ef0c8:
    // 0x1ef0c8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef0cc:
    // 0x1ef0cc: 0x320f809  jalr        $t9
label_1ef0d0:
    if (ctx->pc == 0x1EF0D0u) {
        ctx->pc = 0x1EF0D0u;
            // 0x1ef0d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0D4u;
        goto label_1ef0d4;
    }
    ctx->pc = 0x1EF0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF0D4u);
        ctx->pc = 0x1EF0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0CCu;
            // 0x1ef0d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF0D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0D4u; }
            if (ctx->pc != 0x1EF0D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF0D4u;
label_1ef0d4:
    // 0x1ef0d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ef0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1ef0d8:
    // 0x1ef0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ef0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef0dc:
    // 0x1ef0dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1ef0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef0e0:
    // 0x1ef0e0: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ef0e4:
    // 0x1ef0e4: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x1ef0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1ef0e8:
    // 0x1ef0e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ef0ec:
    // 0x1ef0ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ef0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ef0f0:
    // 0x1ef0f0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef0f4:
    // 0x1ef0f4: 0x320f809  jalr        $t9
label_1ef0f8:
    if (ctx->pc == 0x1EF0F8u) {
        ctx->pc = 0x1EF0F8u;
            // 0x1ef0f8: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x1EF0FCu;
        goto label_1ef0fc;
    }
    ctx->pc = 0x1EF0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF0FCu);
        ctx->pc = 0x1EF0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0F4u;
            // 0x1ef0f8: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0FCu; }
            if (ctx->pc != 0x1EF0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EF0FCu;
label_1ef0fc:
    // 0x1ef0fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ef0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ef100:
    // 0x1ef100: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ef100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ef104:
    // 0x1ef104: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ef104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef108:
    // 0x1ef108: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1ef10c:
    // 0x1ef10c: 0xc098b60  jal         func_262D80
label_1ef110:
    if (ctx->pc == 0x1EF110u) {
        ctx->pc = 0x1EF110u;
            // 0x1ef110: 0x27a801f0  addiu       $t0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1EF114u;
        goto label_1ef114;
    }
    ctx->pc = 0x1EF10Cu;
    SET_GPR_U32(ctx, 31, 0x1EF114u);
    ctx->pc = 0x1EF110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF10Cu;
            // 0x1ef110: 0x27a801f0  addiu       $t0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF114u; }
        if (ctx->pc != 0x1EF114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF114u; }
        if (ctx->pc != 0x1EF114u) { return; }
    }
    ctx->pc = 0x1EF114u;
label_1ef114:
    // 0x1ef114: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_1ef118:
    if (ctx->pc == 0x1EF118u) {
        ctx->pc = 0x1EF118u;
            // 0x1ef118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF11Cu;
        goto label_1ef11c;
    }
    ctx->pc = 0x1EF114u;
    {
        const bool branch_taken_0x1ef114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef114) {
            ctx->pc = 0x1EF118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF114u;
            // 0x1ef118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF254u;
            goto label_1ef254;
        }
    }
    ctx->pc = 0x1EF11Cu;
label_1ef11c:
    // 0x1ef11c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ef11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ef120:
    // 0x1ef120: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1ef124:
    // 0x1ef124: 0xc0991a8  jal         func_2646A0
label_1ef128:
    if (ctx->pc == 0x1EF128u) {
        ctx->pc = 0x1EF128u;
            // 0x1ef128: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1EF12Cu;
        goto label_1ef12c;
    }
    ctx->pc = 0x1EF124u;
    SET_GPR_U32(ctx, 31, 0x1EF12Cu);
    ctx->pc = 0x1EF128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF124u;
            // 0x1ef128: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2646A0u;
    if (runtime->hasFunction(0x2646A0u)) {
        auto targetFn = runtime->lookupFunction(0x2646A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF12Cu; }
        if (ctx->pc != 0x1EF12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002646A0_0x2646a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF12Cu; }
        if (ctx->pc != 0x1EF12Cu) { return; }
    }
    ctx->pc = 0x1EF12Cu;
label_1ef12c:
    // 0x1ef12c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ef12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef130:
    // 0x1ef130: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1ef130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1ef134:
    // 0x1ef134: 0xc0a4628  jal         func_2918A0
label_1ef138:
    if (ctx->pc == 0x1EF138u) {
        ctx->pc = 0x1EF138u;
            // 0x1ef138: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1EF13Cu;
        goto label_1ef13c;
    }
    ctx->pc = 0x1EF134u;
    SET_GPR_U32(ctx, 31, 0x1EF13Cu);
    ctx->pc = 0x1EF138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF134u;
            // 0x1ef138: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF13Cu; }
        if (ctx->pc != 0x1EF13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF13Cu; }
        if (ctx->pc != 0x1EF13Cu) { return; }
    }
    ctx->pc = 0x1EF13Cu;
label_1ef13c:
    // 0x1ef13c: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x1ef13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef140:
    // 0x1ef140: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x1ef140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef144:
    // 0x1ef144: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1ef144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef148:
    // 0x1ef148: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1ef148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1ef14c:
    // 0x1ef14c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ef14cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ef150:
    // 0x1ef150: 0xe7a10290  swc1        $f1, 0x290($sp)
    ctx->pc = 0x1ef150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_1ef154:
    // 0x1ef154: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1ef154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef158:
    // 0x1ef158: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef15c:
    // 0x1ef15c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_1ef160:
    if (ctx->pc == 0x1EF160u) {
        ctx->pc = 0x1EF164u;
        goto label_1ef164;
    }
    ctx->pc = 0x1EF15Cu;
    {
        const bool branch_taken_0x1ef15c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef15c) {
            ctx->pc = 0x1EF250u;
            goto label_1ef250;
        }
    }
    ctx->pc = 0x1EF164u;
label_1ef164:
    // 0x1ef164: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x1ef164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef168:
    // 0x1ef168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef16c:
    // 0x1ef16c: 0x46000b47  neg.s       $f13, $f1
    ctx->pc = 0x1ef16cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
label_1ef170:
    // 0x1ef170: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1ef170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ef174:
    // 0x1ef174: 0x46001187  neg.s       $f6, $f2
    ctx->pc = 0x1ef174u;
    ctx->f[6] = FPU_NEG_S(ctx->f[2]);
label_1ef178:
    // 0x1ef178: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x1ef178u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_1ef17c:
    // 0x1ef17c: 0xc7a50270  lwc1        $f5, 0x270($sp)
    ctx->pc = 0x1ef17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef180:
    // 0x1ef180: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x1ef180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef184:
    // 0x1ef184: 0xc7aa0274  lwc1        $f10, 0x274($sp)
    ctx->pc = 0x1ef184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1ef188:
    // 0x1ef188: 0x4605311c  madd.s      $f4, $f6, $f5
    ctx->pc = 0x1ef188u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1ef18c:
    // 0x1ef18c: 0x46017818  adda.s      $f15, $f1
    ctx->pc = 0x1ef18cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
label_1ef190:
    // 0x1ef190: 0x460a30dc  madd.s      $f3, $f6, $f10
    ctx->pc = 0x1ef190u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_1ef194:
    // 0x1ef194: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x1ef194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef198:
    // 0x1ef198: 0xc7ae0278  lwc1        $f14, 0x278($sp)
    ctx->pc = 0x1ef198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1ef19c:
    // 0x1ef19c: 0xc7a2027c  lwc1        $f2, 0x27C($sp)
    ctx->pc = 0x1ef19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef1a0:
    // 0x1ef1a0: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x1ef1a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_1ef1a4:
    // 0x1ef1a4: 0x460e32dc  madd.s      $f11, $f6, $f14
    ctx->pc = 0x1ef1a4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[14]));
label_1ef1a8:
    // 0x1ef1a8: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x1ef1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef1ac:
    // 0x1ef1ac: 0xe7ab0288  swc1        $f11, 0x288($sp)
    ctx->pc = 0x1ef1acu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_1ef1b0:
    // 0x1ef1b0: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x1ef1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef1b4:
    // 0x1ef1b4: 0x46007818  adda.s      $f15, $f0
    ctx->pc = 0x1ef1b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
label_1ef1b8:
    // 0x1ef1b8: 0x4602309c  madd.s      $f2, $f6, $f2
    ctx->pc = 0x1ef1b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
label_1ef1bc:
    // 0x1ef1bc: 0xe7a2028c  swc1        $f2, 0x28C($sp)
    ctx->pc = 0x1ef1bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_1ef1c0:
    // 0x1ef1c0: 0x46047818  adda.s      $f15, $f4
    ctx->pc = 0x1ef1c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[4]);
label_1ef1c4:
    // 0x1ef1c4: 0x4605689c  madd.s      $f2, $f13, $f5
    ctx->pc = 0x1ef1c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[5]));
label_1ef1c8:
    // 0x1ef1c8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1ef1c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ef1cc:
    // 0x1ef1cc: 0x46037818  adda.s      $f15, $f3
    ctx->pc = 0x1ef1ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
label_1ef1d0:
    // 0x1ef1d0: 0x460a6a9c  madd.s      $f10, $f13, $f10
    ctx->pc = 0x1ef1d0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[10]));
label_1ef1d4:
    // 0x1ef1d4: 0xe7a30284  swc1        $f3, 0x284($sp)
    ctx->pc = 0x1ef1d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_1ef1d8:
    // 0x1ef1d8: 0xe7a40280  swc1        $f4, 0x280($sp)
    ctx->pc = 0x1ef1d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1ef1dc:
    // 0x1ef1dc: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x1ef1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef1e0:
    // 0x1ef1e0: 0x460b7818  adda.s      $f15, $f11
    ctx->pc = 0x1ef1e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[11]);
label_1ef1e4:
    // 0x1ef1e4: 0xc7a90268  lwc1        $f9, 0x268($sp)
    ctx->pc = 0x1ef1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ef1e8:
    // 0x1ef1e8: 0x460052c1  sub.s       $f11, $f10, $f0
    ctx->pc = 0x1ef1e8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_1ef1ec:
    // 0x1ef1ec: 0x460e6a9c  madd.s      $f10, $f13, $f14
    ctx->pc = 0x1ef1ecu;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[14]));
label_1ef1f0:
    // 0x1ef1f0: 0xc7a60234  lwc1        $f6, 0x234($sp)
    ctx->pc = 0x1ef1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ef1f4:
    // 0x1ef1f4: 0xc7a70230  lwc1        $f7, 0x230($sp)
    ctx->pc = 0x1ef1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ef1f8:
    // 0x1ef1f8: 0x46095241  sub.s       $f9, $f10, $f9
    ctx->pc = 0x1ef1f8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_1ef1fc:
    // 0x1ef1fc: 0x4606581a  mula.s      $f11, $f6
    ctx->pc = 0x1ef1fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_1ef200:
    // 0x1ef200: 0xc7a80238  lwc1        $f8, 0x238($sp)
    ctx->pc = 0x1ef200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ef204:
    // 0x1ef204: 0x4607601e  madda.s     $f12, $f7
    ctx->pc = 0x1ef204u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[7]));
label_1ef208:
    // 0x1ef208: 0xc7a30244  lwc1        $f3, 0x244($sp)
    ctx->pc = 0x1ef208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef20c:
    // 0x1ef20c: 0x4608499c  madd.s      $f6, $f9, $f8
    ctx->pc = 0x1ef20cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_1ef210:
    // 0x1ef210: 0xc7a40240  lwc1        $f4, 0x240($sp)
    ctx->pc = 0x1ef210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ef214:
    // 0x1ef214: 0x4603581a  mula.s      $f11, $f3
    ctx->pc = 0x1ef214u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
label_1ef218:
    // 0x1ef218: 0xc7a50248  lwc1        $f5, 0x248($sp)
    ctx->pc = 0x1ef218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef21c:
    // 0x1ef21c: 0x4604601e  madda.s     $f12, $f4
    ctx->pc = 0x1ef21cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
label_1ef220:
    // 0x1ef220: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x1ef220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef224:
    // 0x1ef224: 0x460548dc  madd.s      $f3, $f9, $f5
    ctx->pc = 0x1ef224u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
label_1ef228:
    // 0x1ef228: 0xe7a602a0  swc1        $f6, 0x2A0($sp)
    ctx->pc = 0x1ef228u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1ef22c:
    // 0x1ef22c: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x1ef22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef230:
    // 0x1ef230: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x1ef230u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_1ef234:
    // 0x1ef234: 0xc7a20258  lwc1        $f2, 0x258($sp)
    ctx->pc = 0x1ef234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef238:
    // 0x1ef238: 0x4601601e  madda.s     $f12, $f1
    ctx->pc = 0x1ef238u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_1ef23c:
    // 0x1ef23c: 0xe7a302a4  swc1        $f3, 0x2A4($sp)
    ctx->pc = 0x1ef23cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1ef240:
    // 0x1ef240: 0x4602481c  madd.s      $f0, $f9, $f2
    ctx->pc = 0x1ef240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_1ef244:
    // 0x1ef244: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x1ef244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1ef248:
    // 0x1ef248: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ef24c:
    if (ctx->pc == 0x1EF24Cu) {
        ctx->pc = 0x1EF24Cu;
            // 0x1ef24c: 0xafa002ac  sw          $zero, 0x2AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
        ctx->pc = 0x1EF250u;
        goto label_1ef250;
    }
    ctx->pc = 0x1EF248u;
    {
        const bool branch_taken_0x1ef248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF248u;
            // 0x1ef24c: 0xafa002ac  sw          $zero, 0x2AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef248) {
            ctx->pc = 0x1EF254u;
            goto label_1ef254;
        }
    }
    ctx->pc = 0x1EF250u;
label_1ef250:
    // 0x1ef250: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef254:
    // 0x1ef254: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1ef254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1ef258:
    // 0x1ef258: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1ef258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1ef25c:
    // 0x1ef25c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1ef260:
    if (ctx->pc == 0x1EF260u) {
        ctx->pc = 0x1EF264u;
        goto label_1ef264;
    }
    ctx->pc = 0x1EF25Cu;
    {
        const bool branch_taken_0x1ef25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef25c) {
            ctx->pc = 0x1EF328u;
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF264u;
label_1ef264:
    // 0x1ef264: 0xafb20220  sw          $s2, 0x220($sp)
    ctx->pc = 0x1ef264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 18));
label_1ef268:
    // 0x1ef268: 0xc7aa02a4  lwc1        $f10, 0x2A4($sp)
    ctx->pc = 0x1ef268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1ef26c:
    // 0x1ef26c: 0xafb10224  sw          $s1, 0x224($sp)
    ctx->pc = 0x1ef26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 17));
label_1ef270:
    // 0x1ef270: 0xc7ab02a0  lwc1        $f11, 0x2A0($sp)
    ctx->pc = 0x1ef270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1ef274:
    // 0x1ef274: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef278:
    // 0x1ef278: 0xc7a902a8  lwc1        $f9, 0x2A8($sp)
    ctx->pc = 0x1ef278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1ef27c:
    // 0x1ef27c: 0xc7a402b0  lwc1        $f4, 0x2B0($sp)
    ctx->pc = 0x1ef27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ef280:
    // 0x1ef280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef284:
    // 0x1ef284: 0xc7a302b4  lwc1        $f3, 0x2B4($sp)
    ctx->pc = 0x1ef284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef288:
    // 0x1ef288: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1ef288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef28c:
    // 0x1ef28c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x1ef28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ef290:
    // 0x1ef290: 0xc4470020  lwc1        $f7, 0x20($v0)
    ctx->pc = 0x1ef290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ef294:
    // 0x1ef294: 0x4600501a  mula.s      $f10, $f0
    ctx->pc = 0x1ef294u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_1ef298:
    // 0x1ef298: 0x4606581e  madda.s     $f11, $f6
    ctx->pc = 0x1ef298u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[6]));
label_1ef29c:
    // 0x1ef29c: 0xc4450030  lwc1        $f5, 0x30($v0)
    ctx->pc = 0x1ef29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef2a0:
    // 0x1ef2a0: 0x4607499c  madd.s      $f6, $f9, $f7
    ctx->pc = 0x1ef2a0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
label_1ef2a4:
    // 0x1ef2a4: 0xc7a102bc  lwc1        $f1, 0x2BC($sp)
    ctx->pc = 0x1ef2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef2a8:
    // 0x1ef2a8: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x1ef2a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1ef2ac:
    // 0x1ef2ac: 0xe7a50200  swc1        $f5, 0x200($sp)
    ctx->pc = 0x1ef2acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_1ef2b0:
    // 0x1ef2b0: 0xc4460014  lwc1        $f6, 0x14($v0)
    ctx->pc = 0x1ef2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ef2b4:
    // 0x1ef2b4: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x1ef2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ef2b8:
    // 0x1ef2b8: 0xc4480024  lwc1        $f8, 0x24($v0)
    ctx->pc = 0x1ef2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ef2bc:
    // 0x1ef2bc: 0x4606501a  mula.s      $f10, $f6
    ctx->pc = 0x1ef2bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_1ef2c0:
    // 0x1ef2c0: 0x4607581e  madda.s     $f11, $f7
    ctx->pc = 0x1ef2c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[7]));
label_1ef2c4:
    // 0x1ef2c4: 0xc4450034  lwc1        $f5, 0x34($v0)
    ctx->pc = 0x1ef2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef2c8:
    // 0x1ef2c8: 0x4608499c  madd.s      $f6, $f9, $f8
    ctx->pc = 0x1ef2c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_1ef2cc:
    // 0x1ef2cc: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x1ef2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef2d0:
    // 0x1ef2d0: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x1ef2d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1ef2d4:
    // 0x1ef2d4: 0xe7a50204  swc1        $f5, 0x204($sp)
    ctx->pc = 0x1ef2d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_1ef2d8:
    // 0x1ef2d8: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1ef2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ef2dc:
    // 0x1ef2dc: 0xc4480028  lwc1        $f8, 0x28($v0)
    ctx->pc = 0x1ef2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ef2e0:
    // 0x1ef2e0: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x1ef2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ef2e4:
    // 0x1ef2e4: 0xc4450038  lwc1        $f5, 0x38($v0)
    ctx->pc = 0x1ef2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef2e8:
    // 0x1ef2e8: 0x4606501a  mula.s      $f10, $f6
    ctx->pc = 0x1ef2e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_1ef2ec:
    // 0x1ef2ec: 0x4607581e  madda.s     $f11, $f7
    ctx->pc = 0x1ef2ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[7]));
label_1ef2f0:
    // 0x1ef2f0: 0xe7a40210  swc1        $f4, 0x210($sp)
    ctx->pc = 0x1ef2f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_1ef2f4:
    // 0x1ef2f4: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x1ef2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_1ef2f8:
    // 0x1ef2f8: 0x4608491c  madd.s      $f4, $f9, $f8
    ctx->pc = 0x1ef2f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[8]));
label_1ef2fc:
    // 0x1ef2fc: 0xe7a30214  swc1        $f3, 0x214($sp)
    ctx->pc = 0x1ef2fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_1ef300:
    // 0x1ef300: 0x460428c0  add.s       $f3, $f5, $f4
    ctx->pc = 0x1ef300u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_1ef304:
    // 0x1ef304: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x1ef304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef308:
    // 0x1ef308: 0xe7a1021c  swc1        $f1, 0x21C($sp)
    ctx->pc = 0x1ef308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_1ef30c:
    // 0x1ef30c: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x1ef30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_1ef310:
    // 0x1ef310: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x1ef310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_1ef314:
    // 0x1ef314: 0xe7a30208  swc1        $f3, 0x208($sp)
    ctx->pc = 0x1ef314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1ef318:
    // 0x1ef318: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ef318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef31c:
    // 0x1ef31c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef320:
    // 0x1ef320: 0x320f809  jalr        $t9
label_1ef324:
    if (ctx->pc == 0x1EF324u) {
        ctx->pc = 0x1EF324u;
            // 0x1ef324: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1EF328u;
        goto label_1ef328;
    }
    ctx->pc = 0x1EF320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF328u);
        ctx->pc = 0x1EF324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF320u;
            // 0x1ef324: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF328u; }
            if (ctx->pc != 0x1EF328u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF328u;
label_1ef328:
    // 0x1ef328: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef32c:
    // 0x1ef32c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ef32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ef330:
    // 0x1ef330: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ef330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ef334:
    // 0x1ef334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef338:
    // 0x1ef338: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ef338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ef33c:
    // 0x1ef33c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ef33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ef340:
    // 0x1ef340: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ef344:
    if (ctx->pc == 0x1EF344u) {
        ctx->pc = 0x1EF344u;
            // 0x1ef344: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EF348u;
        goto label_1ef348;
    }
    ctx->pc = 0x1EF340u;
    {
        const bool branch_taken_0x1ef340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF340u;
            // 0x1ef344: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef340) {
            ctx->pc = 0x1EF370u;
            goto label_1ef370;
        }
    }
    ctx->pc = 0x1EF348u;
label_1ef348:
    // 0x1ef348: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ef348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef34c:
    // 0x1ef34c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ef34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ef350:
    // 0x1ef350: 0x2463ade8  addiu       $v1, $v1, -0x5218
    ctx->pc = 0x1ef350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946280));
label_1ef354:
    // 0x1ef354: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ef354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ef358:
    // 0x1ef358: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ef35c:
    // 0x1ef35c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ef35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ef360:
    // 0x1ef360: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1ef364:
    // 0x1ef364: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ef364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1ef368:
    // 0x1ef368: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ef368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1ef36c:
    // 0x1ef36c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ef36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ef370:
    // 0x1ef370: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ef370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ef374:
    // 0x1ef374: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef374u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef378:
    // 0x1ef378: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef378u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef37c:
    // 0x1ef37c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef37cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef380:
    // 0x1ef380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef384:
    // 0x1ef384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef388:
    // 0x1ef388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef38c:
    // 0x1ef38c: 0x3e00008  jr          $ra
label_1ef390:
    if (ctx->pc == 0x1EF390u) {
        ctx->pc = 0x1EF390u;
            // 0x1ef390: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x1EF394u;
        goto label_1ef394;
    }
    ctx->pc = 0x1EF38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF38Cu;
            // 0x1ef390: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF394u;
label_1ef394:
    // 0x1ef394: 0x0  nop
    ctx->pc = 0x1ef394u;
    // NOP
label_1ef398:
    // 0x1ef398: 0x0  nop
    ctx->pc = 0x1ef398u;
    // NOP
label_1ef39c:
    // 0x1ef39c: 0x0  nop
    ctx->pc = 0x1ef39cu;
    // NOP
label_1ef3a0:
    // 0x1ef3a0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_1ef3a4:
    // 0x1ef3a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef3a8:
    // 0x1ef3a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ef3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ef3ac:
    // 0x1ef3ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef3b0:
    // 0x1ef3b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ef3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ef3b4:
    // 0x1ef3b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ef3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ef3b8:
    // 0x1ef3b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ef3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ef3bc:
    // 0x1ef3bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ef3c0:
    // 0x1ef3c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ef3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3c4:
    // 0x1ef3c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef3c8:
    // 0x1ef3c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ef3c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3cc:
    // 0x1ef3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef3d0:
    // 0x1ef3d0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ef3d4:
    // 0x1ef3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ef3d8:
    // 0x1ef3d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ef3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3dc:
    // 0x1ef3dc: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ef3e0:
    // 0x1ef3e0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ef3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3e4:
    // 0x1ef3e4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ef3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ef3e8:
    // 0x1ef3e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ef3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef3ec:
    // 0x1ef3ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ef3f0:
    if (ctx->pc == 0x1EF3F0u) {
        ctx->pc = 0x1EF3F0u;
            // 0x1ef3f0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EF3F4u;
        goto label_1ef3f4;
    }
    ctx->pc = 0x1EF3ECu;
    {
        const bool branch_taken_0x1ef3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3ECu;
            // 0x1ef3f0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3ec) {
            ctx->pc = 0x1EF428u;
            goto label_1ef428;
        }
    }
    ctx->pc = 0x1EF3F4u;
label_1ef3f4:
    // 0x1ef3f4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef3f8:
    // 0x1ef3f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ef3fc:
    // 0x1ef3fc: 0x2463adf0  addiu       $v1, $v1, -0x5210
    ctx->pc = 0x1ef3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946288));
label_1ef400:
    // 0x1ef400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ef400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ef404:
    // 0x1ef404: 0x2442adf8  addiu       $v0, $v0, -0x5208
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946296));
label_1ef408:
    // 0x1ef408: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ef408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ef40c:
    // 0x1ef40c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ef40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1ef410:
    // 0x1ef410: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ef414:
    // 0x1ef414: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ef414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ef418:
    // 0x1ef418: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ef41c:
    // 0x1ef41c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ef41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1ef420:
    // 0x1ef420: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ef420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1ef424:
    // 0x1ef424: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ef424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ef428:
    // 0x1ef428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef42c:
    // 0x1ef42c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ef430:
    // 0x1ef430: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ef430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ef434:
    // 0x1ef434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef438:
    // 0x1ef438: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ef438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ef43c:
    // 0x1ef43c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ef43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef440:
    // 0x1ef440: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ef444:
    if (ctx->pc == 0x1EF444u) {
        ctx->pc = 0x1EF444u;
            // 0x1ef444: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1EF448u;
        goto label_1ef448;
    }
    ctx->pc = 0x1EF440u;
    {
        const bool branch_taken_0x1ef440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF440u;
            // 0x1ef444: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef440) {
            ctx->pc = 0x1EF470u;
            goto label_1ef470;
        }
    }
    ctx->pc = 0x1EF448u;
label_1ef448:
    // 0x1ef448: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ef448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ef44c:
    // 0x1ef44c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ef450:
    // 0x1ef450: 0x2442ae00  addiu       $v0, $v0, -0x5200
    ctx->pc = 0x1ef450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
label_1ef454:
    // 0x1ef454: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef458:
    // 0x1ef458: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef458u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ef45c:
    // 0x1ef45c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ef45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ef460:
    // 0x1ef460: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ef464:
    // 0x1ef464: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ef468:
    // 0x1ef468: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ef468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ef46c:
    // 0x1ef46c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ef46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ef470:
    // 0x1ef470: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ef474:
    // 0x1ef474: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef478:
    // 0x1ef478: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1ef478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef47c:
    // 0x1ef47c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x1ef47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef480:
    // 0x1ef480: 0xc0a45a0  jal         func_291680
label_1ef484:
    if (ctx->pc == 0x1EF484u) {
        ctx->pc = 0x1EF484u;
            // 0x1ef484: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1EF488u;
        goto label_1ef488;
    }
    ctx->pc = 0x1EF480u;
    SET_GPR_U32(ctx, 31, 0x1EF488u);
    ctx->pc = 0x1EF484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF480u;
            // 0x1ef484: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF488u; }
        if (ctx->pc != 0x1EF488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF488u; }
        if (ctx->pc != 0x1EF488u) { return; }
    }
    ctx->pc = 0x1EF488u;
label_1ef488:
    // 0x1ef488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef48c:
    // 0x1ef48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef490:
    // 0x1ef490: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1ef490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1ef494:
    // 0x1ef494: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1ef494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1ef498:
    // 0x1ef498: 0x92860014  lbu         $a2, 0x14($s4)
    ctx->pc = 0x1ef498u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
label_1ef49c:
    // 0x1ef49c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1ef49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_1ef4a0:
    // 0x1ef4a0: 0x92820015  lbu         $v0, 0x15($s4)
    ctx->pc = 0x1ef4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
label_1ef4a4:
    // 0x1ef4a4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1ef4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1ef4a8:
    // 0x1ef4a8: 0x92820016  lbu         $v0, 0x16($s4)
    ctx->pc = 0x1ef4a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
label_1ef4ac:
    // 0x1ef4ac: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1ef4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1ef4b0:
    // 0x1ef4b0: 0x92820017  lbu         $v0, 0x17($s4)
    ctx->pc = 0x1ef4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
label_1ef4b4:
    // 0x1ef4b4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1ef4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1ef4b8:
    // 0x1ef4b8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1ef4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1ef4bc:
    // 0x1ef4bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ef4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef4c0:
    // 0x1ef4c0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef4c4:
    // 0x1ef4c4: 0x320f809  jalr        $t9
label_1ef4c8:
    if (ctx->pc == 0x1EF4C8u) {
        ctx->pc = 0x1EF4C8u;
            // 0x1ef4c8: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1EF4CCu;
        goto label_1ef4cc;
    }
    ctx->pc = 0x1EF4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF4CCu);
        ctx->pc = 0x1EF4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4C4u;
            // 0x1ef4c8: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF4CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF4CCu; }
            if (ctx->pc != 0x1EF4CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EF4CCu;
label_1ef4cc:
    // 0x1ef4cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1ef4d0:
    // 0x1ef4d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ef4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ef4d4:
    // 0x1ef4d4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1ef4d8:
    // 0x1ef4d8: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x1ef4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1ef4dc:
    // 0x1ef4dc: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1ef4e0:
    // 0x1ef4e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ef4e4:
    // 0x1ef4e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ef4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ef4e8:
    // 0x1ef4e8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef4ec:
    // 0x1ef4ec: 0x320f809  jalr        $t9
label_1ef4f0:
    if (ctx->pc == 0x1EF4F0u) {
        ctx->pc = 0x1EF4F0u;
            // 0x1ef4f0: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x1EF4F4u;
        goto label_1ef4f4;
    }
    ctx->pc = 0x1EF4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF4F4u);
        ctx->pc = 0x1EF4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4ECu;
            // 0x1ef4f0: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF4F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF4F4u; }
            if (ctx->pc != 0x1EF4F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF4F4u;
label_1ef4f4:
    // 0x1ef4f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ef4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ef4f8:
    // 0x1ef4f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef4fc:
    // 0x1ef4fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ef4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ef500:
    // 0x1ef500: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1ef504:
    // 0x1ef504: 0xc098b60  jal         func_262D80
label_1ef508:
    if (ctx->pc == 0x1EF508u) {
        ctx->pc = 0x1EF508u;
            // 0x1ef508: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1EF50Cu;
        goto label_1ef50c;
    }
    ctx->pc = 0x1EF504u;
    SET_GPR_U32(ctx, 31, 0x1EF50Cu);
    ctx->pc = 0x1EF508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF504u;
            // 0x1ef508: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF50Cu; }
        if (ctx->pc != 0x1EF50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF50Cu; }
        if (ctx->pc != 0x1EF50Cu) { return; }
    }
    ctx->pc = 0x1EF50Cu;
label_1ef50c:
    // 0x1ef50c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1ef510:
    // 0x1ef510: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ef514:
    if (ctx->pc == 0x1EF514u) {
        ctx->pc = 0x1EF514u;
            // 0x1ef514: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF518u;
        goto label_1ef518;
    }
    ctx->pc = 0x1EF510u;
    {
        const bool branch_taken_0x1ef510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF510u;
            // 0x1ef514: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef510) {
            ctx->pc = 0x1EF524u;
            goto label_1ef524;
        }
    }
    ctx->pc = 0x1EF518u;
label_1ef518:
    // 0x1ef518: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ef518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ef51c:
    // 0x1ef51c: 0xc099150  jal         func_264540
label_1ef520:
    if (ctx->pc == 0x1EF520u) {
        ctx->pc = 0x1EF520u;
            // 0x1ef520: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x1EF524u;
        goto label_1ef524;
    }
    ctx->pc = 0x1EF51Cu;
    SET_GPR_U32(ctx, 31, 0x1EF524u);
    ctx->pc = 0x1EF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF51Cu;
            // 0x1ef520: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF524u; }
        if (ctx->pc != 0x1EF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF524u; }
        if (ctx->pc != 0x1EF524u) { return; }
    }
    ctx->pc = 0x1EF524u;
label_1ef524:
    // 0x1ef524: 0x56c0002c  bnel        $s6, $zero, . + 4 + (0x2C << 2)
label_1ef528:
    if (ctx->pc == 0x1EF528u) {
        ctx->pc = 0x1EF528u;
            // 0x1ef528: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x1EF52Cu;
        goto label_1ef52c;
    }
    ctx->pc = 0x1EF524u;
    {
        const bool branch_taken_0x1ef524 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef524) {
            ctx->pc = 0x1EF528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF524u;
            // 0x1ef528: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF5D8u;
            goto label_1ef5d8;
        }
    }
    ctx->pc = 0x1EF52Cu;
label_1ef52c:
    // 0x1ef52c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1ef52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef530:
    // 0x1ef530: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ef534:
    // 0x1ef534: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1ef534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef538:
    // 0x1ef538: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x1ef538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef53c:
    // 0x1ef53c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef53cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef540:
    // 0x1ef540: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1ef540u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1ef544:
    // 0x1ef544: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x1ef544u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ef548:
    // 0x1ef548: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1ef548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef54c:
    // 0x1ef54c: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x1ef54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ef550:
    // 0x1ef550: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1ef550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef554:
    // 0x1ef554: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x1ef554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef558:
    // 0x1ef558: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1ef558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef55c:
    // 0x1ef55c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1ef55cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1ef560:
    // 0x1ef560: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x1ef560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef564:
    // 0x1ef564: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1ef564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef568:
    // 0x1ef568: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1ef568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1ef56c:
    // 0x1ef56c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ef56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1ef570:
    // 0x1ef570: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1ef570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1ef574:
    // 0x1ef574: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ef574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef578:
    // 0x1ef578: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1ef578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef57c:
    // 0x1ef57c: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x1ef57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef580:
    // 0x1ef580: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1ef580u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1ef584:
    // 0x1ef584: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1ef584u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1ef588:
    // 0x1ef588: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ef588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1ef58c:
    // 0x1ef58c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1ef58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_1ef590:
    // 0x1ef590: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ef590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef594:
    // 0x1ef594: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1ef594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef598:
    // 0x1ef598: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x1ef598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef59c:
    // 0x1ef59c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1ef59cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1ef5a0:
    // 0x1ef5a0: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1ef5a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1ef5a4:
    // 0x1ef5a4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ef5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1ef5a8:
    // 0x1ef5a8: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x1ef5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_1ef5ac:
    // 0x1ef5ac: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x1ef5acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_1ef5b0:
    // 0x1ef5b0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1ef5b4:
    if (ctx->pc == 0x1EF5B4u) {
        ctx->pc = 0x1EF5B4u;
            // 0x1ef5b4: 0xe686002c  swc1        $f6, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x1EF5B8u;
        goto label_1ef5b8;
    }
    ctx->pc = 0x1EF5B0u;
    {
        const bool branch_taken_0x1ef5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5B0u;
            // 0x1ef5b4: 0xe686002c  swc1        $f6, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5b0) {
            ctx->pc = 0x1EF5FCu;
            goto label_1ef5fc;
        }
    }
    ctx->pc = 0x1EF5B8u;
label_1ef5b8:
    // 0x1ef5b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1ef5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ef5bc:
    // 0x1ef5bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ef5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5c0:
    // 0x1ef5c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ef5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5c4:
    // 0x1ef5c4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef5c8:
    // 0x1ef5c8: 0x320f809  jalr        $t9
label_1ef5cc:
    if (ctx->pc == 0x1EF5CCu) {
        ctx->pc = 0x1EF5CCu;
            // 0x1ef5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5D0u;
        goto label_1ef5d0;
    }
    ctx->pc = 0x1EF5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF5D0u);
        ctx->pc = 0x1EF5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5C8u;
            // 0x1ef5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF5D0u; }
            if (ctx->pc != 0x1EF5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF5D0u;
label_1ef5d0:
    // 0x1ef5d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ef5d4:
    if (ctx->pc == 0x1EF5D4u) {
        ctx->pc = 0x1EF5D8u;
        goto label_1ef5d8;
    }
    ctx->pc = 0x1EF5D0u;
    {
        const bool branch_taken_0x1ef5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5d0) {
            ctx->pc = 0x1EF5FCu;
            goto label_1ef5fc;
        }
    }
    ctx->pc = 0x1EF5D8u;
label_1ef5d8:
    // 0x1ef5d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ef5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5dc:
    // 0x1ef5dc: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x1ef5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_1ef5e0:
    // 0x1ef5e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ef5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef5e4:
    // 0x1ef5e4: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x1ef5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
label_1ef5e8:
    // 0x1ef5e8: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1ef5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_1ef5ec:
    // 0x1ef5ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ef5f0:
    // 0x1ef5f0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef5f4:
    // 0x1ef5f4: 0x320f809  jalr        $t9
label_1ef5f8:
    if (ctx->pc == 0x1EF5F8u) {
        ctx->pc = 0x1EF5F8u;
            // 0x1ef5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5FCu;
        goto label_1ef5fc;
    }
    ctx->pc = 0x1EF5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF5FCu);
        ctx->pc = 0x1EF5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5F4u;
            // 0x1ef5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF5FCu; }
            if (ctx->pc != 0x1EF5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EF5FCu;
label_1ef5fc:
    // 0x1ef5fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef600:
    // 0x1ef600: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ef600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ef604:
    // 0x1ef604: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ef604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ef608:
    // 0x1ef608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef60c:
    // 0x1ef60c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ef60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ef610:
    // 0x1ef610: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ef610u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ef614:
    // 0x1ef614: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ef618:
    if (ctx->pc == 0x1EF618u) {
        ctx->pc = 0x1EF618u;
            // 0x1ef618: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EF61Cu;
        goto label_1ef61c;
    }
    ctx->pc = 0x1EF614u;
    {
        const bool branch_taken_0x1ef614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF614u;
            // 0x1ef618: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef614) {
            ctx->pc = 0x1EF644u;
            goto label_1ef644;
        }
    }
    ctx->pc = 0x1EF61Cu;
label_1ef61c:
    // 0x1ef61c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ef61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef620:
    // 0x1ef620: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ef620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ef624:
    // 0x1ef624: 0x2463ae10  addiu       $v1, $v1, -0x51F0
    ctx->pc = 0x1ef624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946320));
label_1ef628:
    // 0x1ef628: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ef628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ef62c:
    // 0x1ef62c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ef630:
    // 0x1ef630: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ef630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ef634:
    // 0x1ef634: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef634u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1ef638:
    // 0x1ef638: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1ef63c:
    // 0x1ef63c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ef63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1ef640:
    // 0x1ef640: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ef640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ef644:
    // 0x1ef644: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ef644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ef648:
    // 0x1ef648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ef648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ef64c:
    // 0x1ef64c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ef64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef650:
    // 0x1ef650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef654:
    // 0x1ef654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef658:
    // 0x1ef658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef65c:
    // 0x1ef65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef660:
    // 0x1ef660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef664:
    // 0x1ef664: 0x3e00008  jr          $ra
label_1ef668:
    if (ctx->pc == 0x1EF668u) {
        ctx->pc = 0x1EF668u;
            // 0x1ef668: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1EF66Cu;
        goto label_1ef66c;
    }
    ctx->pc = 0x1EF664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF664u;
            // 0x1ef668: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF66Cu;
label_1ef66c:
    // 0x1ef66c: 0x0  nop
    ctx->pc = 0x1ef66cu;
    // NOP
}
