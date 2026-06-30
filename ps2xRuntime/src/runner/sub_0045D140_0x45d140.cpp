#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045D140
// Address: 0x45d140 - 0x45d970
void sub_0045D140_0x45d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045D140_0x45d140");
#endif

    switch (ctx->pc) {
        case 0x45d140u: goto label_45d140;
        case 0x45d144u: goto label_45d144;
        case 0x45d148u: goto label_45d148;
        case 0x45d14cu: goto label_45d14c;
        case 0x45d150u: goto label_45d150;
        case 0x45d154u: goto label_45d154;
        case 0x45d158u: goto label_45d158;
        case 0x45d15cu: goto label_45d15c;
        case 0x45d160u: goto label_45d160;
        case 0x45d164u: goto label_45d164;
        case 0x45d168u: goto label_45d168;
        case 0x45d16cu: goto label_45d16c;
        case 0x45d170u: goto label_45d170;
        case 0x45d174u: goto label_45d174;
        case 0x45d178u: goto label_45d178;
        case 0x45d17cu: goto label_45d17c;
        case 0x45d180u: goto label_45d180;
        case 0x45d184u: goto label_45d184;
        case 0x45d188u: goto label_45d188;
        case 0x45d18cu: goto label_45d18c;
        case 0x45d190u: goto label_45d190;
        case 0x45d194u: goto label_45d194;
        case 0x45d198u: goto label_45d198;
        case 0x45d19cu: goto label_45d19c;
        case 0x45d1a0u: goto label_45d1a0;
        case 0x45d1a4u: goto label_45d1a4;
        case 0x45d1a8u: goto label_45d1a8;
        case 0x45d1acu: goto label_45d1ac;
        case 0x45d1b0u: goto label_45d1b0;
        case 0x45d1b4u: goto label_45d1b4;
        case 0x45d1b8u: goto label_45d1b8;
        case 0x45d1bcu: goto label_45d1bc;
        case 0x45d1c0u: goto label_45d1c0;
        case 0x45d1c4u: goto label_45d1c4;
        case 0x45d1c8u: goto label_45d1c8;
        case 0x45d1ccu: goto label_45d1cc;
        case 0x45d1d0u: goto label_45d1d0;
        case 0x45d1d4u: goto label_45d1d4;
        case 0x45d1d8u: goto label_45d1d8;
        case 0x45d1dcu: goto label_45d1dc;
        case 0x45d1e0u: goto label_45d1e0;
        case 0x45d1e4u: goto label_45d1e4;
        case 0x45d1e8u: goto label_45d1e8;
        case 0x45d1ecu: goto label_45d1ec;
        case 0x45d1f0u: goto label_45d1f0;
        case 0x45d1f4u: goto label_45d1f4;
        case 0x45d1f8u: goto label_45d1f8;
        case 0x45d1fcu: goto label_45d1fc;
        case 0x45d200u: goto label_45d200;
        case 0x45d204u: goto label_45d204;
        case 0x45d208u: goto label_45d208;
        case 0x45d20cu: goto label_45d20c;
        case 0x45d210u: goto label_45d210;
        case 0x45d214u: goto label_45d214;
        case 0x45d218u: goto label_45d218;
        case 0x45d21cu: goto label_45d21c;
        case 0x45d220u: goto label_45d220;
        case 0x45d224u: goto label_45d224;
        case 0x45d228u: goto label_45d228;
        case 0x45d22cu: goto label_45d22c;
        case 0x45d230u: goto label_45d230;
        case 0x45d234u: goto label_45d234;
        case 0x45d238u: goto label_45d238;
        case 0x45d23cu: goto label_45d23c;
        case 0x45d240u: goto label_45d240;
        case 0x45d244u: goto label_45d244;
        case 0x45d248u: goto label_45d248;
        case 0x45d24cu: goto label_45d24c;
        case 0x45d250u: goto label_45d250;
        case 0x45d254u: goto label_45d254;
        case 0x45d258u: goto label_45d258;
        case 0x45d25cu: goto label_45d25c;
        case 0x45d260u: goto label_45d260;
        case 0x45d264u: goto label_45d264;
        case 0x45d268u: goto label_45d268;
        case 0x45d26cu: goto label_45d26c;
        case 0x45d270u: goto label_45d270;
        case 0x45d274u: goto label_45d274;
        case 0x45d278u: goto label_45d278;
        case 0x45d27cu: goto label_45d27c;
        case 0x45d280u: goto label_45d280;
        case 0x45d284u: goto label_45d284;
        case 0x45d288u: goto label_45d288;
        case 0x45d28cu: goto label_45d28c;
        case 0x45d290u: goto label_45d290;
        case 0x45d294u: goto label_45d294;
        case 0x45d298u: goto label_45d298;
        case 0x45d29cu: goto label_45d29c;
        case 0x45d2a0u: goto label_45d2a0;
        case 0x45d2a4u: goto label_45d2a4;
        case 0x45d2a8u: goto label_45d2a8;
        case 0x45d2acu: goto label_45d2ac;
        case 0x45d2b0u: goto label_45d2b0;
        case 0x45d2b4u: goto label_45d2b4;
        case 0x45d2b8u: goto label_45d2b8;
        case 0x45d2bcu: goto label_45d2bc;
        case 0x45d2c0u: goto label_45d2c0;
        case 0x45d2c4u: goto label_45d2c4;
        case 0x45d2c8u: goto label_45d2c8;
        case 0x45d2ccu: goto label_45d2cc;
        case 0x45d2d0u: goto label_45d2d0;
        case 0x45d2d4u: goto label_45d2d4;
        case 0x45d2d8u: goto label_45d2d8;
        case 0x45d2dcu: goto label_45d2dc;
        case 0x45d2e0u: goto label_45d2e0;
        case 0x45d2e4u: goto label_45d2e4;
        case 0x45d2e8u: goto label_45d2e8;
        case 0x45d2ecu: goto label_45d2ec;
        case 0x45d2f0u: goto label_45d2f0;
        case 0x45d2f4u: goto label_45d2f4;
        case 0x45d2f8u: goto label_45d2f8;
        case 0x45d2fcu: goto label_45d2fc;
        case 0x45d300u: goto label_45d300;
        case 0x45d304u: goto label_45d304;
        case 0x45d308u: goto label_45d308;
        case 0x45d30cu: goto label_45d30c;
        case 0x45d310u: goto label_45d310;
        case 0x45d314u: goto label_45d314;
        case 0x45d318u: goto label_45d318;
        case 0x45d31cu: goto label_45d31c;
        case 0x45d320u: goto label_45d320;
        case 0x45d324u: goto label_45d324;
        case 0x45d328u: goto label_45d328;
        case 0x45d32cu: goto label_45d32c;
        case 0x45d330u: goto label_45d330;
        case 0x45d334u: goto label_45d334;
        case 0x45d338u: goto label_45d338;
        case 0x45d33cu: goto label_45d33c;
        case 0x45d340u: goto label_45d340;
        case 0x45d344u: goto label_45d344;
        case 0x45d348u: goto label_45d348;
        case 0x45d34cu: goto label_45d34c;
        case 0x45d350u: goto label_45d350;
        case 0x45d354u: goto label_45d354;
        case 0x45d358u: goto label_45d358;
        case 0x45d35cu: goto label_45d35c;
        case 0x45d360u: goto label_45d360;
        case 0x45d364u: goto label_45d364;
        case 0x45d368u: goto label_45d368;
        case 0x45d36cu: goto label_45d36c;
        case 0x45d370u: goto label_45d370;
        case 0x45d374u: goto label_45d374;
        case 0x45d378u: goto label_45d378;
        case 0x45d37cu: goto label_45d37c;
        case 0x45d380u: goto label_45d380;
        case 0x45d384u: goto label_45d384;
        case 0x45d388u: goto label_45d388;
        case 0x45d38cu: goto label_45d38c;
        case 0x45d390u: goto label_45d390;
        case 0x45d394u: goto label_45d394;
        case 0x45d398u: goto label_45d398;
        case 0x45d39cu: goto label_45d39c;
        case 0x45d3a0u: goto label_45d3a0;
        case 0x45d3a4u: goto label_45d3a4;
        case 0x45d3a8u: goto label_45d3a8;
        case 0x45d3acu: goto label_45d3ac;
        case 0x45d3b0u: goto label_45d3b0;
        case 0x45d3b4u: goto label_45d3b4;
        case 0x45d3b8u: goto label_45d3b8;
        case 0x45d3bcu: goto label_45d3bc;
        case 0x45d3c0u: goto label_45d3c0;
        case 0x45d3c4u: goto label_45d3c4;
        case 0x45d3c8u: goto label_45d3c8;
        case 0x45d3ccu: goto label_45d3cc;
        case 0x45d3d0u: goto label_45d3d0;
        case 0x45d3d4u: goto label_45d3d4;
        case 0x45d3d8u: goto label_45d3d8;
        case 0x45d3dcu: goto label_45d3dc;
        case 0x45d3e0u: goto label_45d3e0;
        case 0x45d3e4u: goto label_45d3e4;
        case 0x45d3e8u: goto label_45d3e8;
        case 0x45d3ecu: goto label_45d3ec;
        case 0x45d3f0u: goto label_45d3f0;
        case 0x45d3f4u: goto label_45d3f4;
        case 0x45d3f8u: goto label_45d3f8;
        case 0x45d3fcu: goto label_45d3fc;
        case 0x45d400u: goto label_45d400;
        case 0x45d404u: goto label_45d404;
        case 0x45d408u: goto label_45d408;
        case 0x45d40cu: goto label_45d40c;
        case 0x45d410u: goto label_45d410;
        case 0x45d414u: goto label_45d414;
        case 0x45d418u: goto label_45d418;
        case 0x45d41cu: goto label_45d41c;
        case 0x45d420u: goto label_45d420;
        case 0x45d424u: goto label_45d424;
        case 0x45d428u: goto label_45d428;
        case 0x45d42cu: goto label_45d42c;
        case 0x45d430u: goto label_45d430;
        case 0x45d434u: goto label_45d434;
        case 0x45d438u: goto label_45d438;
        case 0x45d43cu: goto label_45d43c;
        case 0x45d440u: goto label_45d440;
        case 0x45d444u: goto label_45d444;
        case 0x45d448u: goto label_45d448;
        case 0x45d44cu: goto label_45d44c;
        case 0x45d450u: goto label_45d450;
        case 0x45d454u: goto label_45d454;
        case 0x45d458u: goto label_45d458;
        case 0x45d45cu: goto label_45d45c;
        case 0x45d460u: goto label_45d460;
        case 0x45d464u: goto label_45d464;
        case 0x45d468u: goto label_45d468;
        case 0x45d46cu: goto label_45d46c;
        case 0x45d470u: goto label_45d470;
        case 0x45d474u: goto label_45d474;
        case 0x45d478u: goto label_45d478;
        case 0x45d47cu: goto label_45d47c;
        case 0x45d480u: goto label_45d480;
        case 0x45d484u: goto label_45d484;
        case 0x45d488u: goto label_45d488;
        case 0x45d48cu: goto label_45d48c;
        case 0x45d490u: goto label_45d490;
        case 0x45d494u: goto label_45d494;
        case 0x45d498u: goto label_45d498;
        case 0x45d49cu: goto label_45d49c;
        case 0x45d4a0u: goto label_45d4a0;
        case 0x45d4a4u: goto label_45d4a4;
        case 0x45d4a8u: goto label_45d4a8;
        case 0x45d4acu: goto label_45d4ac;
        case 0x45d4b0u: goto label_45d4b0;
        case 0x45d4b4u: goto label_45d4b4;
        case 0x45d4b8u: goto label_45d4b8;
        case 0x45d4bcu: goto label_45d4bc;
        case 0x45d4c0u: goto label_45d4c0;
        case 0x45d4c4u: goto label_45d4c4;
        case 0x45d4c8u: goto label_45d4c8;
        case 0x45d4ccu: goto label_45d4cc;
        case 0x45d4d0u: goto label_45d4d0;
        case 0x45d4d4u: goto label_45d4d4;
        case 0x45d4d8u: goto label_45d4d8;
        case 0x45d4dcu: goto label_45d4dc;
        case 0x45d4e0u: goto label_45d4e0;
        case 0x45d4e4u: goto label_45d4e4;
        case 0x45d4e8u: goto label_45d4e8;
        case 0x45d4ecu: goto label_45d4ec;
        case 0x45d4f0u: goto label_45d4f0;
        case 0x45d4f4u: goto label_45d4f4;
        case 0x45d4f8u: goto label_45d4f8;
        case 0x45d4fcu: goto label_45d4fc;
        case 0x45d500u: goto label_45d500;
        case 0x45d504u: goto label_45d504;
        case 0x45d508u: goto label_45d508;
        case 0x45d50cu: goto label_45d50c;
        case 0x45d510u: goto label_45d510;
        case 0x45d514u: goto label_45d514;
        case 0x45d518u: goto label_45d518;
        case 0x45d51cu: goto label_45d51c;
        case 0x45d520u: goto label_45d520;
        case 0x45d524u: goto label_45d524;
        case 0x45d528u: goto label_45d528;
        case 0x45d52cu: goto label_45d52c;
        case 0x45d530u: goto label_45d530;
        case 0x45d534u: goto label_45d534;
        case 0x45d538u: goto label_45d538;
        case 0x45d53cu: goto label_45d53c;
        case 0x45d540u: goto label_45d540;
        case 0x45d544u: goto label_45d544;
        case 0x45d548u: goto label_45d548;
        case 0x45d54cu: goto label_45d54c;
        case 0x45d550u: goto label_45d550;
        case 0x45d554u: goto label_45d554;
        case 0x45d558u: goto label_45d558;
        case 0x45d55cu: goto label_45d55c;
        case 0x45d560u: goto label_45d560;
        case 0x45d564u: goto label_45d564;
        case 0x45d568u: goto label_45d568;
        case 0x45d56cu: goto label_45d56c;
        case 0x45d570u: goto label_45d570;
        case 0x45d574u: goto label_45d574;
        case 0x45d578u: goto label_45d578;
        case 0x45d57cu: goto label_45d57c;
        case 0x45d580u: goto label_45d580;
        case 0x45d584u: goto label_45d584;
        case 0x45d588u: goto label_45d588;
        case 0x45d58cu: goto label_45d58c;
        case 0x45d590u: goto label_45d590;
        case 0x45d594u: goto label_45d594;
        case 0x45d598u: goto label_45d598;
        case 0x45d59cu: goto label_45d59c;
        case 0x45d5a0u: goto label_45d5a0;
        case 0x45d5a4u: goto label_45d5a4;
        case 0x45d5a8u: goto label_45d5a8;
        case 0x45d5acu: goto label_45d5ac;
        case 0x45d5b0u: goto label_45d5b0;
        case 0x45d5b4u: goto label_45d5b4;
        case 0x45d5b8u: goto label_45d5b8;
        case 0x45d5bcu: goto label_45d5bc;
        case 0x45d5c0u: goto label_45d5c0;
        case 0x45d5c4u: goto label_45d5c4;
        case 0x45d5c8u: goto label_45d5c8;
        case 0x45d5ccu: goto label_45d5cc;
        case 0x45d5d0u: goto label_45d5d0;
        case 0x45d5d4u: goto label_45d5d4;
        case 0x45d5d8u: goto label_45d5d8;
        case 0x45d5dcu: goto label_45d5dc;
        case 0x45d5e0u: goto label_45d5e0;
        case 0x45d5e4u: goto label_45d5e4;
        case 0x45d5e8u: goto label_45d5e8;
        case 0x45d5ecu: goto label_45d5ec;
        case 0x45d5f0u: goto label_45d5f0;
        case 0x45d5f4u: goto label_45d5f4;
        case 0x45d5f8u: goto label_45d5f8;
        case 0x45d5fcu: goto label_45d5fc;
        case 0x45d600u: goto label_45d600;
        case 0x45d604u: goto label_45d604;
        case 0x45d608u: goto label_45d608;
        case 0x45d60cu: goto label_45d60c;
        case 0x45d610u: goto label_45d610;
        case 0x45d614u: goto label_45d614;
        case 0x45d618u: goto label_45d618;
        case 0x45d61cu: goto label_45d61c;
        case 0x45d620u: goto label_45d620;
        case 0x45d624u: goto label_45d624;
        case 0x45d628u: goto label_45d628;
        case 0x45d62cu: goto label_45d62c;
        case 0x45d630u: goto label_45d630;
        case 0x45d634u: goto label_45d634;
        case 0x45d638u: goto label_45d638;
        case 0x45d63cu: goto label_45d63c;
        case 0x45d640u: goto label_45d640;
        case 0x45d644u: goto label_45d644;
        case 0x45d648u: goto label_45d648;
        case 0x45d64cu: goto label_45d64c;
        case 0x45d650u: goto label_45d650;
        case 0x45d654u: goto label_45d654;
        case 0x45d658u: goto label_45d658;
        case 0x45d65cu: goto label_45d65c;
        case 0x45d660u: goto label_45d660;
        case 0x45d664u: goto label_45d664;
        case 0x45d668u: goto label_45d668;
        case 0x45d66cu: goto label_45d66c;
        case 0x45d670u: goto label_45d670;
        case 0x45d674u: goto label_45d674;
        case 0x45d678u: goto label_45d678;
        case 0x45d67cu: goto label_45d67c;
        case 0x45d680u: goto label_45d680;
        case 0x45d684u: goto label_45d684;
        case 0x45d688u: goto label_45d688;
        case 0x45d68cu: goto label_45d68c;
        case 0x45d690u: goto label_45d690;
        case 0x45d694u: goto label_45d694;
        case 0x45d698u: goto label_45d698;
        case 0x45d69cu: goto label_45d69c;
        case 0x45d6a0u: goto label_45d6a0;
        case 0x45d6a4u: goto label_45d6a4;
        case 0x45d6a8u: goto label_45d6a8;
        case 0x45d6acu: goto label_45d6ac;
        case 0x45d6b0u: goto label_45d6b0;
        case 0x45d6b4u: goto label_45d6b4;
        case 0x45d6b8u: goto label_45d6b8;
        case 0x45d6bcu: goto label_45d6bc;
        case 0x45d6c0u: goto label_45d6c0;
        case 0x45d6c4u: goto label_45d6c4;
        case 0x45d6c8u: goto label_45d6c8;
        case 0x45d6ccu: goto label_45d6cc;
        case 0x45d6d0u: goto label_45d6d0;
        case 0x45d6d4u: goto label_45d6d4;
        case 0x45d6d8u: goto label_45d6d8;
        case 0x45d6dcu: goto label_45d6dc;
        case 0x45d6e0u: goto label_45d6e0;
        case 0x45d6e4u: goto label_45d6e4;
        case 0x45d6e8u: goto label_45d6e8;
        case 0x45d6ecu: goto label_45d6ec;
        case 0x45d6f0u: goto label_45d6f0;
        case 0x45d6f4u: goto label_45d6f4;
        case 0x45d6f8u: goto label_45d6f8;
        case 0x45d6fcu: goto label_45d6fc;
        case 0x45d700u: goto label_45d700;
        case 0x45d704u: goto label_45d704;
        case 0x45d708u: goto label_45d708;
        case 0x45d70cu: goto label_45d70c;
        case 0x45d710u: goto label_45d710;
        case 0x45d714u: goto label_45d714;
        case 0x45d718u: goto label_45d718;
        case 0x45d71cu: goto label_45d71c;
        case 0x45d720u: goto label_45d720;
        case 0x45d724u: goto label_45d724;
        case 0x45d728u: goto label_45d728;
        case 0x45d72cu: goto label_45d72c;
        case 0x45d730u: goto label_45d730;
        case 0x45d734u: goto label_45d734;
        case 0x45d738u: goto label_45d738;
        case 0x45d73cu: goto label_45d73c;
        case 0x45d740u: goto label_45d740;
        case 0x45d744u: goto label_45d744;
        case 0x45d748u: goto label_45d748;
        case 0x45d74cu: goto label_45d74c;
        case 0x45d750u: goto label_45d750;
        case 0x45d754u: goto label_45d754;
        case 0x45d758u: goto label_45d758;
        case 0x45d75cu: goto label_45d75c;
        case 0x45d760u: goto label_45d760;
        case 0x45d764u: goto label_45d764;
        case 0x45d768u: goto label_45d768;
        case 0x45d76cu: goto label_45d76c;
        case 0x45d770u: goto label_45d770;
        case 0x45d774u: goto label_45d774;
        case 0x45d778u: goto label_45d778;
        case 0x45d77cu: goto label_45d77c;
        case 0x45d780u: goto label_45d780;
        case 0x45d784u: goto label_45d784;
        case 0x45d788u: goto label_45d788;
        case 0x45d78cu: goto label_45d78c;
        case 0x45d790u: goto label_45d790;
        case 0x45d794u: goto label_45d794;
        case 0x45d798u: goto label_45d798;
        case 0x45d79cu: goto label_45d79c;
        case 0x45d7a0u: goto label_45d7a0;
        case 0x45d7a4u: goto label_45d7a4;
        case 0x45d7a8u: goto label_45d7a8;
        case 0x45d7acu: goto label_45d7ac;
        case 0x45d7b0u: goto label_45d7b0;
        case 0x45d7b4u: goto label_45d7b4;
        case 0x45d7b8u: goto label_45d7b8;
        case 0x45d7bcu: goto label_45d7bc;
        case 0x45d7c0u: goto label_45d7c0;
        case 0x45d7c4u: goto label_45d7c4;
        case 0x45d7c8u: goto label_45d7c8;
        case 0x45d7ccu: goto label_45d7cc;
        case 0x45d7d0u: goto label_45d7d0;
        case 0x45d7d4u: goto label_45d7d4;
        case 0x45d7d8u: goto label_45d7d8;
        case 0x45d7dcu: goto label_45d7dc;
        case 0x45d7e0u: goto label_45d7e0;
        case 0x45d7e4u: goto label_45d7e4;
        case 0x45d7e8u: goto label_45d7e8;
        case 0x45d7ecu: goto label_45d7ec;
        case 0x45d7f0u: goto label_45d7f0;
        case 0x45d7f4u: goto label_45d7f4;
        case 0x45d7f8u: goto label_45d7f8;
        case 0x45d7fcu: goto label_45d7fc;
        case 0x45d800u: goto label_45d800;
        case 0x45d804u: goto label_45d804;
        case 0x45d808u: goto label_45d808;
        case 0x45d80cu: goto label_45d80c;
        case 0x45d810u: goto label_45d810;
        case 0x45d814u: goto label_45d814;
        case 0x45d818u: goto label_45d818;
        case 0x45d81cu: goto label_45d81c;
        case 0x45d820u: goto label_45d820;
        case 0x45d824u: goto label_45d824;
        case 0x45d828u: goto label_45d828;
        case 0x45d82cu: goto label_45d82c;
        case 0x45d830u: goto label_45d830;
        case 0x45d834u: goto label_45d834;
        case 0x45d838u: goto label_45d838;
        case 0x45d83cu: goto label_45d83c;
        case 0x45d840u: goto label_45d840;
        case 0x45d844u: goto label_45d844;
        case 0x45d848u: goto label_45d848;
        case 0x45d84cu: goto label_45d84c;
        case 0x45d850u: goto label_45d850;
        case 0x45d854u: goto label_45d854;
        case 0x45d858u: goto label_45d858;
        case 0x45d85cu: goto label_45d85c;
        case 0x45d860u: goto label_45d860;
        case 0x45d864u: goto label_45d864;
        case 0x45d868u: goto label_45d868;
        case 0x45d86cu: goto label_45d86c;
        case 0x45d870u: goto label_45d870;
        case 0x45d874u: goto label_45d874;
        case 0x45d878u: goto label_45d878;
        case 0x45d87cu: goto label_45d87c;
        case 0x45d880u: goto label_45d880;
        case 0x45d884u: goto label_45d884;
        case 0x45d888u: goto label_45d888;
        case 0x45d88cu: goto label_45d88c;
        case 0x45d890u: goto label_45d890;
        case 0x45d894u: goto label_45d894;
        case 0x45d898u: goto label_45d898;
        case 0x45d89cu: goto label_45d89c;
        case 0x45d8a0u: goto label_45d8a0;
        case 0x45d8a4u: goto label_45d8a4;
        case 0x45d8a8u: goto label_45d8a8;
        case 0x45d8acu: goto label_45d8ac;
        case 0x45d8b0u: goto label_45d8b0;
        case 0x45d8b4u: goto label_45d8b4;
        case 0x45d8b8u: goto label_45d8b8;
        case 0x45d8bcu: goto label_45d8bc;
        case 0x45d8c0u: goto label_45d8c0;
        case 0x45d8c4u: goto label_45d8c4;
        case 0x45d8c8u: goto label_45d8c8;
        case 0x45d8ccu: goto label_45d8cc;
        case 0x45d8d0u: goto label_45d8d0;
        case 0x45d8d4u: goto label_45d8d4;
        case 0x45d8d8u: goto label_45d8d8;
        case 0x45d8dcu: goto label_45d8dc;
        case 0x45d8e0u: goto label_45d8e0;
        case 0x45d8e4u: goto label_45d8e4;
        case 0x45d8e8u: goto label_45d8e8;
        case 0x45d8ecu: goto label_45d8ec;
        case 0x45d8f0u: goto label_45d8f0;
        case 0x45d8f4u: goto label_45d8f4;
        case 0x45d8f8u: goto label_45d8f8;
        case 0x45d8fcu: goto label_45d8fc;
        case 0x45d900u: goto label_45d900;
        case 0x45d904u: goto label_45d904;
        case 0x45d908u: goto label_45d908;
        case 0x45d90cu: goto label_45d90c;
        case 0x45d910u: goto label_45d910;
        case 0x45d914u: goto label_45d914;
        case 0x45d918u: goto label_45d918;
        case 0x45d91cu: goto label_45d91c;
        case 0x45d920u: goto label_45d920;
        case 0x45d924u: goto label_45d924;
        case 0x45d928u: goto label_45d928;
        case 0x45d92cu: goto label_45d92c;
        case 0x45d930u: goto label_45d930;
        case 0x45d934u: goto label_45d934;
        case 0x45d938u: goto label_45d938;
        case 0x45d93cu: goto label_45d93c;
        case 0x45d940u: goto label_45d940;
        case 0x45d944u: goto label_45d944;
        case 0x45d948u: goto label_45d948;
        case 0x45d94cu: goto label_45d94c;
        case 0x45d950u: goto label_45d950;
        case 0x45d954u: goto label_45d954;
        case 0x45d958u: goto label_45d958;
        case 0x45d95cu: goto label_45d95c;
        case 0x45d960u: goto label_45d960;
        case 0x45d964u: goto label_45d964;
        case 0x45d968u: goto label_45d968;
        case 0x45d96cu: goto label_45d96c;
        default: break;
    }

    ctx->pc = 0x45d140u;

label_45d140:
    // 0x45d140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x45d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_45d144:
    // 0x45d144: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x45d144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45d148:
    // 0x45d148: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x45d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45d14c:
    // 0x45d14c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45d150:
    // 0x45d150: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_45d154:
    // 0x45d154: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x45d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45d158:
    // 0x45d158: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_45d15c:
    // 0x45d15c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x45d15cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45d160:
    // 0x45d160: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45d164:
    // 0x45d164: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_45d168:
    // 0x45d168: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_45d16c:
    // 0x45d16c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_45d170:
    // 0x45d170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45d174:
    // 0x45d174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45d178:
    // 0x45d178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45d17c:
    // 0x45d17c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x45d17cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_45d180:
    // 0x45d180: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x45d180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45d184:
    // 0x45d184: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45d184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45d188:
    // 0x45d188: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x45d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_45d18c:
    // 0x45d18c: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x45d18cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_45d190:
    // 0x45d190: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45d190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45d194:
    // 0x45d194: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x45d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45d198:
    // 0x45d198: 0xc0c9a58  jal         func_326960
label_45d19c:
    if (ctx->pc == 0x45D19Cu) {
        ctx->pc = 0x45D19Cu;
            // 0x45d19c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x45D1A0u;
        goto label_45d1a0;
    }
    ctx->pc = 0x45D198u;
    SET_GPR_U32(ctx, 31, 0x45D1A0u);
    ctx->pc = 0x45D19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D198u;
            // 0x45d19c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1A0u; }
        if (ctx->pc != 0x45D1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1A0u; }
        if (ctx->pc != 0x45D1A0u) { return; }
    }
    ctx->pc = 0x45D1A0u;
label_45d1a0:
    // 0x45d1a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d1a4:
    // 0x45d1a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x45d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_45d1a8:
    // 0x45d1a8: 0xc123328  jal         func_48CCA0
label_45d1ac:
    if (ctx->pc == 0x45D1ACu) {
        ctx->pc = 0x45D1ACu;
            // 0x45d1ac: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x45D1B0u;
        goto label_45d1b0;
    }
    ctx->pc = 0x45D1A8u;
    SET_GPR_U32(ctx, 31, 0x45D1B0u);
    ctx->pc = 0x45D1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D1A8u;
            // 0x45d1ac: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1B0u; }
        if (ctx->pc != 0x45D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1B0u; }
        if (ctx->pc != 0x45D1B0u) { return; }
    }
    ctx->pc = 0x45D1B0u;
label_45d1b0:
    // 0x45d1b0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45d1b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45d1b4:
    // 0x45d1b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d1b8:
    // 0x45d1b8: 0xc123328  jal         func_48CCA0
label_45d1bc:
    if (ctx->pc == 0x45D1BCu) {
        ctx->pc = 0x45D1BCu;
            // 0x45d1bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45D1C0u;
        goto label_45d1c0;
    }
    ctx->pc = 0x45D1B8u;
    SET_GPR_U32(ctx, 31, 0x45D1C0u);
    ctx->pc = 0x45D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D1B8u;
            // 0x45d1bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1C0u; }
        if (ctx->pc != 0x45D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D1C0u; }
        if (ctx->pc != 0x45D1C0u) { return; }
    }
    ctx->pc = 0x45D1C0u;
label_45d1c0:
    // 0x45d1c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45d1c4:
    // 0x45d1c4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45d1c8:
    // 0x45d1c8: 0x845004ea  lh          $s0, 0x4EA($v0)
    ctx->pc = 0x45d1c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1258)));
label_45d1cc:
    // 0x45d1cc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x45d1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_45d1d0:
    // 0x45d1d0: 0x847104e8  lh          $s1, 0x4E8($v1)
    ctx->pc = 0x45d1d0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1256)));
label_45d1d4:
    // 0x45d1d4: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x45d1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_45d1d8:
    // 0x45d1d8: 0x2652c150  addiu       $s2, $s2, -0x3EB0
    ctx->pc = 0x45d1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951248));
label_45d1dc:
    // 0x45d1dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45d1e0:
    // 0x45d1e0: 0x845704f2  lh          $s7, 0x4F2($v0)
    ctx->pc = 0x45d1e0u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1266)));
label_45d1e4:
    // 0x45d1e4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45d1e8:
    // 0x45d1e8: 0x847604f0  lh          $s6, 0x4F0($v1)
    ctx->pc = 0x45d1e8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1264)));
label_45d1ec:
    // 0x45d1ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45d1f0:
    // 0x45d1f0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x45d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45d1f4:
    // 0x45d1f4: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x45d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
label_45d1f8:
    // 0x45d1f8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x45d1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45d1fc:
    // 0x45d1fc: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x45d1fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_45d200:
    // 0x45d200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45d204:
    if (ctx->pc == 0x45D204u) {
        ctx->pc = 0x45D204u;
            // 0x45d204: 0x26b5c230  addiu       $s5, $s5, -0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951472));
        ctx->pc = 0x45D208u;
        goto label_45d208;
    }
    ctx->pc = 0x45D200u;
    {
        const bool branch_taken_0x45d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D200u;
            // 0x45d204: 0x26b5c230  addiu       $s5, $s5, -0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d200) {
            ctx->pc = 0x45D218u;
            goto label_45d218;
        }
    }
    ctx->pc = 0x45D208u;
label_45d208:
    // 0x45d208: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x45d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_45d20c:
    // 0x45d20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45d20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d210:
    // 0x45d210: 0x0  nop
    ctx->pc = 0x45d210u;
    // NOP
label_45d214:
    // 0x45d214: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x45d214u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45d218:
    // 0x45d218: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x45d218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_45d21c:
    // 0x45d21c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45d220:
    // 0x45d220: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45d220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45d224:
    // 0x45d224: 0xc0506ac  jal         func_141AB0
label_45d228:
    if (ctx->pc == 0x45D228u) {
        ctx->pc = 0x45D228u;
            // 0x45d228: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45D22Cu;
        goto label_45d22c;
    }
    ctx->pc = 0x45D224u;
    SET_GPR_U32(ctx, 31, 0x45D22Cu);
    ctx->pc = 0x45D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D224u;
            // 0x45d228: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D22Cu; }
        if (ctx->pc != 0x45D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D22Cu; }
        if (ctx->pc != 0x45D22Cu) { return; }
    }
    ctx->pc = 0x45D22Cu;
label_45d22c:
    // 0x45d22c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45d22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45d230:
    // 0x45d230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45d234:
    // 0x45d234: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45d234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45d238:
    // 0x45d238: 0x320f809  jalr        $t9
label_45d23c:
    if (ctx->pc == 0x45D23Cu) {
        ctx->pc = 0x45D23Cu;
            // 0x45d23c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45D240u;
        goto label_45d240;
    }
    ctx->pc = 0x45D238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45D240u);
        ctx->pc = 0x45D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D238u;
            // 0x45d23c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45D240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45D240u; }
            if (ctx->pc != 0x45D240u) { return; }
        }
        }
    }
    ctx->pc = 0x45D240u;
label_45d240:
    // 0x45d240: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x45d240u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d244:
    // 0x45d244: 0x3c02438e  lui         $v0, 0x438E
    ctx->pc = 0x45d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17294 << 16));
label_45d248:
    // 0x45d248: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45d248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d24c:
    // 0x45d24c: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x45d24cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_45d250:
    // 0x45d250: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45d254:
    // 0x45d254: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x45d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
label_45d258:
    // 0x45d258: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d25c:
    // 0x45d25c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x45d25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_45d260:
    // 0x45d260: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d264:
    // 0x45d264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d268:
    // 0x45d268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45d268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d26c:
    // 0x45d26c: 0x0  nop
    ctx->pc = 0x45d26cu;
    // NOP
label_45d270:
    // 0x45d270: 0x46140540  add.s       $f21, $f0, $f20
    ctx->pc = 0x45d270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d274:
    // 0x45d274: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d278:
    // 0x45d278: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x45d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45d27c:
    // 0x45d27c: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x45d27cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d280:
    // 0x45d280: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x45d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45d284:
    // 0x45d284: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x45d284u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45d288:
    // 0x45d288: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45d288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d28c:
    // 0x45d28c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45d28cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45d290:
    // 0x45d290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45d290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d294:
    // 0x45d294: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x45d294u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_45d298:
    // 0x45d298: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45d298u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45d29c:
    // 0x45d29c: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45d29cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45d2a0:
    // 0x45d2a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d2a4:
    // 0x45d2a4: 0xc0bc284  jal         func_2F0A10
label_45d2a8:
    if (ctx->pc == 0x45D2A8u) {
        ctx->pc = 0x45D2A8u;
            // 0x45d2a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D2ACu;
        goto label_45d2ac;
    }
    ctx->pc = 0x45D2A4u;
    SET_GPR_U32(ctx, 31, 0x45D2ACu);
    ctx->pc = 0x45D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D2A4u;
            // 0x45d2a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D2ACu; }
        if (ctx->pc != 0x45D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D2ACu; }
        if (ctx->pc != 0x45D2ACu) { return; }
    }
    ctx->pc = 0x45D2ACu;
label_45d2ac:
    // 0x45d2ac: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x45d2acu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d2b0:
    // 0x45d2b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45d2b4:
    // 0x45d2b4: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45d2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d2b8:
    // 0x45d2b8: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x45d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_45d2bc:
    // 0x45d2bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d2c0:
    // 0x45d2c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d2c4:
    // 0x45d2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d2c8:
    // 0x45d2c8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45d2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45d2cc:
    // 0x45d2cc: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x45d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45d2d0:
    // 0x45d2d0: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x45d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
label_45d2d4:
    // 0x45d2d4: 0xc6a2002c  lwc1        $f2, 0x2C($s5)
    ctx->pc = 0x45d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45d2d8:
    // 0x45d2d8: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x45d2d8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d2dc:
    // 0x45d2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45d2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d2e0:
    // 0x45d2e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45d2e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45d2e4:
    // 0x45d2e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d2e8:
    // 0x45d2e8: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45d2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d2ec:
    // 0x45d2ec: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x45d2ecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_45d2f0:
    // 0x45d2f0: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45d2f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45d2f4:
    // 0x45d2f4: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45d2f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45d2f8:
    // 0x45d2f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d2fc:
    // 0x45d2fc: 0xc0bc284  jal         func_2F0A10
label_45d300:
    if (ctx->pc == 0x45D300u) {
        ctx->pc = 0x45D300u;
            // 0x45d300: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D304u;
        goto label_45d304;
    }
    ctx->pc = 0x45D2FCu;
    SET_GPR_U32(ctx, 31, 0x45D304u);
    ctx->pc = 0x45D300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D2FCu;
            // 0x45d300: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D304u; }
        if (ctx->pc != 0x45D304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D304u; }
        if (ctx->pc != 0x45D304u) { return; }
    }
    ctx->pc = 0x45D304u;
label_45d304:
    // 0x45d304: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45d304u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d308:
    // 0x45d308: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45d308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45d30c:
    // 0x45d30c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d310:
    // 0x45d310: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45d314:
    // 0x45d314: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x45d314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_45d318:
    // 0x45d318: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x45d318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_45d31c:
    // 0x45d31c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d320:
    // 0x45d320: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d324:
    // 0x45d324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d328:
    // 0x45d328: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x45d328u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d32c:
    // 0x45d32c: 0x0  nop
    ctx->pc = 0x45d32cu;
    // NOP
label_45d330:
    // 0x45d330: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d334:
    // 0x45d334: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x45d334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_45d338:
    // 0x45d338: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45d33c:
    // 0x45d33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d340:
    // 0x45d340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45d340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d344:
    // 0x45d344: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x45d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_45d348:
    // 0x45d348: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45d34c:
    // 0x45d34c: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x45d34cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_45d350:
    // 0x45d350: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x45d350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45d354:
    // 0x45d354: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x45d354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_45d358:
    // 0x45d358: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d35c:
    // 0x45d35c: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x45d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d360:
    // 0x45d360: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x45d360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45d364:
    // 0x45d364: 0x0  nop
    ctx->pc = 0x45d364u;
    // NOP
label_45d368:
    // 0x45d368: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x45d368u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45d36c:
    // 0x45d36c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x45d36cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_45d370:
    // 0x45d370: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x45d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45d374:
    // 0x45d374: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x45d374u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_45d378:
    // 0x45d378: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45d378u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45d37c:
    // 0x45d37c: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x45d37cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_45d380:
    // 0x45d380: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d384:
    // 0x45d384: 0xc0bc284  jal         func_2F0A10
label_45d388:
    if (ctx->pc == 0x45D388u) {
        ctx->pc = 0x45D388u;
            // 0x45d388: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D38Cu;
        goto label_45d38c;
    }
    ctx->pc = 0x45D384u;
    SET_GPR_U32(ctx, 31, 0x45D38Cu);
    ctx->pc = 0x45D388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D384u;
            // 0x45d388: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D38Cu; }
        if (ctx->pc != 0x45D38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D38Cu; }
        if (ctx->pc != 0x45D38Cu) { return; }
    }
    ctx->pc = 0x45D38Cu;
label_45d38c:
    // 0x45d38c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45d38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45d390:
    // 0x45d390: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45d390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45d394:
    // 0x45d394: 0x320f809  jalr        $t9
label_45d398:
    if (ctx->pc == 0x45D398u) {
        ctx->pc = 0x45D398u;
            // 0x45d398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45D39Cu;
        goto label_45d39c;
    }
    ctx->pc = 0x45D394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45D39Cu);
        ctx->pc = 0x45D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D394u;
            // 0x45d398: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45D39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45D39Cu; }
            if (ctx->pc != 0x45D39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45D39Cu;
label_45d39c:
    // 0x45d39c: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x45d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
label_45d3a0:
    // 0x45d3a0: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45d3a4:
    // 0x45d3a4: 0xc0506ac  jal         func_141AB0
label_45d3a8:
    if (ctx->pc == 0x45D3A8u) {
        ctx->pc = 0x45D3A8u;
            // 0x45d3a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45D3ACu;
        goto label_45d3ac;
    }
    ctx->pc = 0x45D3A4u;
    SET_GPR_U32(ctx, 31, 0x45D3ACu);
    ctx->pc = 0x45D3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D3A4u;
            // 0x45d3a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D3ACu; }
        if (ctx->pc != 0x45D3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D3ACu; }
        if (ctx->pc != 0x45D3ACu) { return; }
    }
    ctx->pc = 0x45D3ACu;
label_45d3ac:
    // 0x45d3ac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45d3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45d3b0:
    // 0x45d3b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45d3b4:
    // 0x45d3b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45d3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45d3b8:
    // 0x45d3b8: 0x320f809  jalr        $t9
label_45d3bc:
    if (ctx->pc == 0x45D3BCu) {
        ctx->pc = 0x45D3BCu;
            // 0x45d3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45D3C0u;
        goto label_45d3c0;
    }
    ctx->pc = 0x45D3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45D3C0u);
        ctx->pc = 0x45D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D3B8u;
            // 0x45d3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45D3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45D3C0u; }
            if (ctx->pc != 0x45D3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x45D3C0u;
label_45d3c0:
    // 0x45d3c0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45d3c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45d3c4:
    // 0x45d3c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d3c8:
    // 0x45d3c8: 0xc123328  jal         func_48CCA0
label_45d3cc:
    if (ctx->pc == 0x45D3CCu) {
        ctx->pc = 0x45D3CCu;
            // 0x45d3cc: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x45D3D0u;
        goto label_45d3d0;
    }
    ctx->pc = 0x45D3C8u;
    SET_GPR_U32(ctx, 31, 0x45D3D0u);
    ctx->pc = 0x45D3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D3C8u;
            // 0x45d3cc: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D3D0u; }
        if (ctx->pc != 0x45D3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D3D0u; }
        if (ctx->pc != 0x45D3D0u) { return; }
    }
    ctx->pc = 0x45D3D0u;
label_45d3d0:
    // 0x45d3d0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x45d3d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45d3d4:
    // 0x45d3d4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45d3d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45d3d8:
    // 0x45d3d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x45d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d3dc:
    // 0x45d3dc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x45d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_45d3e0:
    // 0x45d3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45d3e4:
    // 0x45d3e4: 0x8c450408  lw          $a1, 0x408($v0)
    ctx->pc = 0x45d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
label_45d3e8:
    // 0x45d3e8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_45d3ec:
    if (ctx->pc == 0x45D3ECu) {
        ctx->pc = 0x45D3ECu;
            // 0x45d3ec: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->pc = 0x45D3F0u;
        goto label_45d3f0;
    }
    ctx->pc = 0x45D3E8u;
    {
        const bool branch_taken_0x45d3e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d3e8) {
            ctx->pc = 0x45D3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D3E8u;
            // 0x45d3ec: 0x3c031062  lui         $v1, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D3F8u;
            goto label_45d3f8;
        }
    }
    ctx->pc = 0x45D3F0u;
label_45d3f0:
    // 0x45d3f0: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x45d3f0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45d3f4:
    // 0x45d3f4: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x45d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_45d3f8:
    // 0x45d3f8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x45d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_45d3fc:
    // 0x45d3fc: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x45d3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_45d400:
    // 0x45d400: 0x850019  multu       $a0, $a1
    ctx->pc = 0x45d400u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d404:
    // 0x45d404: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x45d404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_45d408:
    // 0x45d408: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45d40c:
    // 0x45d40c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45d40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45d410:
    // 0x45d410: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45d414:
    // 0x45d414: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45d418:
    // 0x45d418: 0x2010  mfhi        $a0
    ctx->pc = 0x45d418u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_45d41c:
    // 0x45d41c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x45d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_45d420:
    // 0x45d420: 0x640019  multu       $v1, $a0
    ctx->pc = 0x45d420u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d424:
    // 0x45d424: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45d424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_45d428:
    // 0x45d428: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x45d428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d42c:
    // 0x45d42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d430:
    // 0x45d430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d434:
    // 0x45d434: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x45d434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_45d438:
    // 0x45d438: 0xa3b023  subu        $s6, $a1, $v1
    ctx->pc = 0x45d438u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_45d43c:
    // 0x45d43c: 0x1810  mfhi        $v1
    ctx->pc = 0x45d43cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_45d440:
    // 0x45d440: 0x33142  srl         $a2, $v1, 5
    ctx->pc = 0x45d440u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_45d444:
    // 0x45d444: 0x460019  multu       $v0, $a2
    ctx->pc = 0x45d444u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d448:
    // 0x45d448: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x45d448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_45d44c:
    // 0x45d44c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x45d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_45d450:
    // 0x45d450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d454:
    // 0x45d454: 0x82b823  subu        $s7, $a0, $v0
    ctx->pc = 0x45d454u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_45d458:
    // 0x45d458: 0x1010  mfhi        $v0
    ctx->pc = 0x45d458u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45d45c:
    // 0x45d45c: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45d460:
    // 0x45d460: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45d460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d464:
    // 0x45d464: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45d464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45d468:
    // 0x45d468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d46c:
    // 0x45d46c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d470:
    // 0x45d470: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45d470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45d474:
    // 0x45d474: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d478:
    if (ctx->pc == 0x45D478u) {
        ctx->pc = 0x45D478u;
            // 0x45d478: 0xc2f023  subu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x45D47Cu;
        goto label_45d47c;
    }
    ctx->pc = 0x45D474u;
    {
        const bool branch_taken_0x45d474 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D474u;
            // 0x45d478: 0xc2f023  subu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d474) {
            ctx->pc = 0x45D480u;
            goto label_45d480;
        }
    }
    ctx->pc = 0x45D47Cu;
label_45d47c:
    // 0x45d47c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d480:
    // 0x45d480: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d480u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d484:
    // 0x45d484: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45d488:
    // 0x45d488: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d48c:
    // 0x45d48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d490:
    // 0x45d490: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d494:
    // 0x45d494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d498:
    // 0x45d498: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d49c:
    // 0x45d49c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d49cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d4a0:
    // 0x45d4a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45d4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45d4a4:
    // 0x45d4a4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d4a8:
    // 0x45d4a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d4ac:
    // 0x45d4ac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d4b0:
    // 0x45d4b0: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d4b0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d4b4:
    // 0x45d4b4: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x45d4b4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
label_45d4b8:
    // 0x45d4b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d4bc:
    // 0x45d4bc: 0xc0bc284  jal         func_2F0A10
label_45d4c0:
    if (ctx->pc == 0x45D4C0u) {
        ctx->pc = 0x45D4C0u;
            // 0x45d4c0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D4C4u;
        goto label_45d4c4;
    }
    ctx->pc = 0x45D4BCu;
    SET_GPR_U32(ctx, 31, 0x45D4C4u);
    ctx->pc = 0x45D4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D4BCu;
            // 0x45d4c0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D4C4u; }
        if (ctx->pc != 0x45D4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D4C4u; }
        if (ctx->pc != 0x45D4C4u) { return; }
    }
    ctx->pc = 0x45D4C4u;
label_45d4c4:
    // 0x45d4c4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d4c8:
    // 0x45d4c8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x45d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_45d4cc:
    // 0x45d4cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d4d0:
    // 0x45d4d0: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d4d4:
    // 0x45d4d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d4d8:
    // 0x45d4d8: 0x0  nop
    ctx->pc = 0x45d4d8u;
    // NOP
label_45d4dc:
    // 0x45d4dc: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d4dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d4e0:
    // 0x45d4e0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d4e4:
    if (ctx->pc == 0x45D4E4u) {
        ctx->pc = 0x45D4E4u;
            // 0x45d4e4: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45D4E8u;
        goto label_45d4e8;
    }
    ctx->pc = 0x45D4E0u;
    {
        const bool branch_taken_0x45d4e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D4E0u;
            // 0x45d4e4: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d4e0) {
            ctx->pc = 0x45D4ECu;
            goto label_45d4ec;
        }
    }
    ctx->pc = 0x45D4E8u;
label_45d4e8:
    // 0x45d4e8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d4ec:
    // 0x45d4ec: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d4ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d4f0:
    // 0x45d4f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d4f4:
    // 0x45d4f4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d4f8:
    // 0x45d4f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d4fc:
    // 0x45d4fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d500:
    // 0x45d500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d504:
    // 0x45d504: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d508:
    // 0x45d508: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d50c:
    // 0x45d50c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d50cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d510:
    // 0x45d510: 0x0  nop
    ctx->pc = 0x45d510u;
    // NOP
label_45d514:
    // 0x45d514: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d518:
    // 0x45d518: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d518u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d51c:
    // 0x45d51c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d51cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d520:
    // 0x45d520: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d524:
    // 0x45d524: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45d524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45d528:
    // 0x45d528: 0xc0bc284  jal         func_2F0A10
label_45d52c:
    if (ctx->pc == 0x45D52Cu) {
        ctx->pc = 0x45D52Cu;
            // 0x45d52c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D530u;
        goto label_45d530;
    }
    ctx->pc = 0x45D528u;
    SET_GPR_U32(ctx, 31, 0x45D530u);
    ctx->pc = 0x45D52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D528u;
            // 0x45d52c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D530u; }
        if (ctx->pc != 0x45D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D530u; }
        if (ctx->pc != 0x45D530u) { return; }
    }
    ctx->pc = 0x45D530u;
label_45d530:
    // 0x45d530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d534:
    // 0x45d534: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45d538:
    // 0x45d538: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d53c:
    // 0x45d53c: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x45d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_45d540:
    // 0x45d540: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d540u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d544:
    // 0x45d544: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d548:
    // 0x45d548: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d54c:
    // 0x45d54c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d550:
    // 0x45d550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d554:
    // 0x45d554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45d554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d558:
    // 0x45d558: 0x0  nop
    ctx->pc = 0x45d558u;
    // NOP
label_45d55c:
    // 0x45d55c: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45d55cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45d560:
    // 0x45d560: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d564:
    // 0x45d564: 0xc65600a8  lwc1        $f22, 0xA8($s2)
    ctx->pc = 0x45d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d568:
    // 0x45d568: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x45d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d56c:
    // 0x45d56c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d56cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d570:
    // 0x45d570: 0x0  nop
    ctx->pc = 0x45d570u;
    // NOP
label_45d574:
    // 0x45d574: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d578:
    // 0x45d578: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d578u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d57c:
    // 0x45d57c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d57cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d580:
    // 0x45d580: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d584:
    // 0x45d584: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45d584u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45d588:
    // 0x45d588: 0xc0bc284  jal         func_2F0A10
label_45d58c:
    if (ctx->pc == 0x45D58Cu) {
        ctx->pc = 0x45D58Cu;
            // 0x45d58c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45D590u;
        goto label_45d590;
    }
    ctx->pc = 0x45D588u;
    SET_GPR_U32(ctx, 31, 0x45D590u);
    ctx->pc = 0x45D58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D588u;
            // 0x45d58c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D590u; }
        if (ctx->pc != 0x45D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D590u; }
        if (ctx->pc != 0x45D590u) { return; }
    }
    ctx->pc = 0x45D590u;
label_45d590:
    // 0x45d590: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45d594:
    // 0x45d594: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d598:
    // 0x45d598: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45d59c:
    // 0x45d59c: 0x570019  multu       $v0, $s7
    ctx->pc = 0x45d59cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d5a0:
    // 0x45d5a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d5a4:
    // 0x45d5a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d5a8:
    // 0x45d5a8: 0x0  nop
    ctx->pc = 0x45d5a8u;
    // NOP
label_45d5ac:
    // 0x45d5ac: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d5acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d5b0:
    // 0x45d5b0: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45d5b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45d5b4:
    // 0x45d5b4: 0x1010  mfhi        $v0
    ctx->pc = 0x45d5b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45d5b8:
    // 0x45d5b8: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45d5bc:
    // 0x45d5bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d5c0:
    // 0x45d5c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45d5c4:
    // 0x45d5c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d5c8:
    // 0x45d5c8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d5cc:
    // 0x45d5cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45d5d0:
    // 0x45d5d0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d5d4:
    if (ctx->pc == 0x45D5D4u) {
        ctx->pc = 0x45D5D4u;
            // 0x45d5d4: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->pc = 0x45D5D8u;
        goto label_45d5d8;
    }
    ctx->pc = 0x45D5D0u;
    {
        const bool branch_taken_0x45d5d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D5D0u;
            // 0x45d5d4: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d5d0) {
            ctx->pc = 0x45D5DCu;
            goto label_45d5dc;
        }
    }
    ctx->pc = 0x45D5D8u;
label_45d5d8:
    // 0x45d5d8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d5dc:
    // 0x45d5dc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d5dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d5e0:
    // 0x45d5e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d5e4:
    // 0x45d5e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d5e8:
    // 0x45d5e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d5ec:
    // 0x45d5ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d5f0:
    // 0x45d5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d5f4:
    // 0x45d5f4: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d5f8:
    // 0x45d5f8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d5fc:
    // 0x45d5fc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d5fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d600:
    // 0x45d600: 0x0  nop
    ctx->pc = 0x45d600u;
    // NOP
label_45d604:
    // 0x45d604: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d608:
    // 0x45d608: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d608u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d60c:
    // 0x45d60c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d60cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d610:
    // 0x45d610: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d614:
    // 0x45d614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45d614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45d618:
    // 0x45d618: 0xc0bc284  jal         func_2F0A10
label_45d61c:
    if (ctx->pc == 0x45D61Cu) {
        ctx->pc = 0x45D61Cu;
            // 0x45d61c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D620u;
        goto label_45d620;
    }
    ctx->pc = 0x45D618u;
    SET_GPR_U32(ctx, 31, 0x45D620u);
    ctx->pc = 0x45D61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D618u;
            // 0x45d61c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D620u; }
        if (ctx->pc != 0x45D620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D620u; }
        if (ctx->pc != 0x45D620u) { return; }
    }
    ctx->pc = 0x45D620u;
label_45d620:
    // 0x45d620: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d624:
    // 0x45d624: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x45d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_45d628:
    // 0x45d628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d62c:
    // 0x45d62c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d630:
    // 0x45d630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d634:
    // 0x45d634: 0x0  nop
    ctx->pc = 0x45d634u;
    // NOP
label_45d638:
    // 0x45d638: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d63c:
    // 0x45d63c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d640:
    if (ctx->pc == 0x45D640u) {
        ctx->pc = 0x45D640u;
            // 0x45d640: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45D644u;
        goto label_45d644;
    }
    ctx->pc = 0x45D63Cu;
    {
        const bool branch_taken_0x45d63c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D63Cu;
            // 0x45d640: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d63c) {
            ctx->pc = 0x45D648u;
            goto label_45d648;
        }
    }
    ctx->pc = 0x45D644u;
label_45d644:
    // 0x45d644: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d648:
    // 0x45d648: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d648u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d64c:
    // 0x45d64c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d650:
    // 0x45d650: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d654:
    // 0x45d654: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d658:
    // 0x45d658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d65c:
    // 0x45d65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d660:
    // 0x45d660: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d664:
    // 0x45d664: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d668:
    // 0x45d668: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d668u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d66c:
    // 0x45d66c: 0x0  nop
    ctx->pc = 0x45d66cu;
    // NOP
label_45d670:
    // 0x45d670: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d674:
    // 0x45d674: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d674u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d678:
    // 0x45d678: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d678u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d67c:
    // 0x45d67c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d680:
    // 0x45d680: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45d680u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45d684:
    // 0x45d684: 0xc0bc284  jal         func_2F0A10
label_45d688:
    if (ctx->pc == 0x45D688u) {
        ctx->pc = 0x45D688u;
            // 0x45d688: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D68Cu;
        goto label_45d68c;
    }
    ctx->pc = 0x45D684u;
    SET_GPR_U32(ctx, 31, 0x45D68Cu);
    ctx->pc = 0x45D688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D684u;
            // 0x45d688: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D68Cu; }
        if (ctx->pc != 0x45D68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D68Cu; }
        if (ctx->pc != 0x45D68Cu) { return; }
    }
    ctx->pc = 0x45D68Cu;
label_45d68c:
    // 0x45d68c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d690:
    // 0x45d690: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45d694:
    // 0x45d694: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d694u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d698:
    // 0x45d698: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x45d698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_45d69c:
    // 0x45d69c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d69cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d6a0:
    // 0x45d6a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d6a4:
    // 0x45d6a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d6a8:
    // 0x45d6a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d6ac:
    // 0x45d6ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d6b0:
    // 0x45d6b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45d6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d6b4:
    // 0x45d6b4: 0x0  nop
    ctx->pc = 0x45d6b4u;
    // NOP
label_45d6b8:
    // 0x45d6b8: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45d6b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45d6bc:
    // 0x45d6bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d6c0:
    // 0x45d6c0: 0xc65600b8  lwc1        $f22, 0xB8($s2)
    ctx->pc = 0x45d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d6c4:
    // 0x45d6c4: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x45d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d6c8:
    // 0x45d6c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d6c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d6cc:
    // 0x45d6cc: 0x0  nop
    ctx->pc = 0x45d6ccu;
    // NOP
label_45d6d0:
    // 0x45d6d0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d6d4:
    // 0x45d6d4: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d6d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d6d8:
    // 0x45d6d8: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d6d8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d6dc:
    // 0x45d6dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d6e0:
    // 0x45d6e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45d6e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45d6e4:
    // 0x45d6e4: 0xc0bc284  jal         func_2F0A10
label_45d6e8:
    if (ctx->pc == 0x45D6E8u) {
        ctx->pc = 0x45D6E8u;
            // 0x45d6e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x45D6ECu;
        goto label_45d6ec;
    }
    ctx->pc = 0x45D6E4u;
    SET_GPR_U32(ctx, 31, 0x45D6ECu);
    ctx->pc = 0x45D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D6E4u;
            // 0x45d6e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D6ECu; }
        if (ctx->pc != 0x45D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D6ECu; }
        if (ctx->pc != 0x45D6ECu) { return; }
    }
    ctx->pc = 0x45D6ECu;
label_45d6ec:
    // 0x45d6ec: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x45d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_45d6f0:
    // 0x45d6f0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d6f4:
    // 0x45d6f4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x45d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_45d6f8:
    // 0x45d6f8: 0x560019  multu       $v0, $s6
    ctx->pc = 0x45d6f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d6fc:
    // 0x45d6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d700:
    // 0x45d700: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d704:
    // 0x45d704: 0x0  nop
    ctx->pc = 0x45d704u;
    // NOP
label_45d708:
    // 0x45d708: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d708u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d70c:
    // 0x45d70c: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45d70cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45d710:
    // 0x45d710: 0x1010  mfhi        $v0
    ctx->pc = 0x45d710u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45d714:
    // 0x45d714: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x45d714u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45d718:
    // 0x45d718: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45d718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d71c:
    // 0x45d71c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45d720:
    // 0x45d720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d724:
    // 0x45d724: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d728:
    // 0x45d728: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45d728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45d72c:
    // 0x45d72c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45d730:
    // 0x45d730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45d730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45d734:
    // 0x45d734: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d738:
    if (ctx->pc == 0x45D738u) {
        ctx->pc = 0x45D738u;
            // 0x45d738: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x45D73Cu;
        goto label_45d73c;
    }
    ctx->pc = 0x45D734u;
    {
        const bool branch_taken_0x45d734 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D734u;
            // 0x45d738: 0x2c2b023  subu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d734) {
            ctx->pc = 0x45D740u;
            goto label_45d740;
        }
    }
    ctx->pc = 0x45D73Cu;
label_45d73c:
    // 0x45d73c: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d740:
    // 0x45d740: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d740u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d744:
    // 0x45d744: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d748:
    // 0x45d748: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d74c:
    // 0x45d74c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d750:
    // 0x45d750: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d754:
    // 0x45d754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d758:
    // 0x45d758: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d75c:
    // 0x45d75c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d760:
    // 0x45d760: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d760u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d764:
    // 0x45d764: 0x0  nop
    ctx->pc = 0x45d764u;
    // NOP
label_45d768:
    // 0x45d768: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d76c:
    // 0x45d76c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d76cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d770:
    // 0x45d770: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45d770u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45d774:
    // 0x45d774: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d778:
    // 0x45d778: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45d778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45d77c:
    // 0x45d77c: 0xc0bc284  jal         func_2F0A10
label_45d780:
    if (ctx->pc == 0x45D780u) {
        ctx->pc = 0x45D780u;
            // 0x45d780: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D784u;
        goto label_45d784;
    }
    ctx->pc = 0x45D77Cu;
    SET_GPR_U32(ctx, 31, 0x45D784u);
    ctx->pc = 0x45D780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D77Cu;
            // 0x45d780: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D784u; }
        if (ctx->pc != 0x45D784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D784u; }
        if (ctx->pc != 0x45D784u) { return; }
    }
    ctx->pc = 0x45D784u;
label_45d784:
    // 0x45d784: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45d788:
    // 0x45d788: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d78c:
    // 0x45d78c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45d790:
    // 0x45d790: 0x560019  multu       $v0, $s6
    ctx->pc = 0x45d790u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d794:
    // 0x45d794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d798:
    // 0x45d798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d79c:
    // 0x45d79c: 0x0  nop
    ctx->pc = 0x45d79cu;
    // NOP
label_45d7a0:
    // 0x45d7a0: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45d7a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45d7a4:
    // 0x45d7a4: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45d7a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45d7a8:
    // 0x45d7a8: 0x1010  mfhi        $v0
    ctx->pc = 0x45d7a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45d7ac:
    // 0x45d7ac: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x45d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45d7b0:
    // 0x45d7b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45d7b4:
    // 0x45d7b4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d7b8:
    if (ctx->pc == 0x45D7B8u) {
        ctx->pc = 0x45D7B8u;
            // 0x45d7b8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x45D7BCu;
        goto label_45d7bc;
    }
    ctx->pc = 0x45D7B4u;
    {
        const bool branch_taken_0x45d7b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D7B4u;
            // 0x45d7b8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d7b4) {
            ctx->pc = 0x45D7C0u;
            goto label_45d7c0;
        }
    }
    ctx->pc = 0x45D7BCu;
label_45d7bc:
    // 0x45d7bc: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d7c0:
    // 0x45d7c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45d7c4:
    // 0x45d7c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d7c8:
    // 0x45d7c8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d7cc:
    // 0x45d7cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d7d0:
    // 0x45d7d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d7d4:
    // 0x45d7d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d7d8:
    // 0x45d7d8: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45d7d8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45d7dc:
    // 0x45d7dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d7e0:
    // 0x45d7e0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d7e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d7e4:
    // 0x45d7e4: 0x0  nop
    ctx->pc = 0x45d7e4u;
    // NOP
label_45d7e8:
    // 0x45d7e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d7ec:
    // 0x45d7ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d7ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d7f0:
    // 0x45d7f0: 0x0  nop
    ctx->pc = 0x45d7f0u;
    // NOP
label_45d7f4:
    // 0x45d7f4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d7f8:
    // 0x45d7f8: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x45d7f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45d7fc:
    // 0x45d7fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45d7fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45d800:
    // 0x45d800: 0xc0bc284  jal         func_2F0A10
label_45d804:
    if (ctx->pc == 0x45D804u) {
        ctx->pc = 0x45D804u;
            // 0x45d804: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D808u;
        goto label_45d808;
    }
    ctx->pc = 0x45D800u;
    SET_GPR_U32(ctx, 31, 0x45D808u);
    ctx->pc = 0x45D804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D800u;
            // 0x45d804: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D808u; }
        if (ctx->pc != 0x45D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D808u; }
        if (ctx->pc != 0x45D808u) { return; }
    }
    ctx->pc = 0x45D808u;
label_45d808:
    // 0x45d808: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45d808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45d80c:
    // 0x45d80c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x45d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d810:
    // 0x45d810: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x45d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_45d814:
    // 0x45d814: 0x90460517  lbu         $a2, 0x517($v0)
    ctx->pc = 0x45d814u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1303)));
label_45d818:
    // 0x45d818: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_45d81c:
    if (ctx->pc == 0x45D81Cu) {
        ctx->pc = 0x45D81Cu;
            // 0x45d81c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45D820u;
        goto label_45d820;
    }
    ctx->pc = 0x45D818u;
    {
        const bool branch_taken_0x45d818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x45D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D818u;
            // 0x45d81c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d818) {
            ctx->pc = 0x45D824u;
            goto label_45d824;
        }
    }
    ctx->pc = 0x45D820u;
label_45d820:
    // 0x45d820: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x45d820u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45d824:
    // 0x45d824: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45d828:
    // 0x45d828: 0x3c0343cf  lui         $v1, 0x43CF
    ctx->pc = 0x45d828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17359 << 16));
label_45d82c:
    // 0x45d82c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45d82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45d830:
    // 0x45d830: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x45d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_45d834:
    // 0x45d834: 0x460019  multu       $v0, $a2
    ctx->pc = 0x45d834u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45d838:
    // 0x45d838: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x45d838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_45d83c:
    // 0x45d83c: 0x0  nop
    ctx->pc = 0x45d83cu;
    // NOP
label_45d840:
    // 0x45d840: 0x1010  mfhi        $v0
    ctx->pc = 0x45d840u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45d844:
    // 0x45d844: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45d844u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45d848:
    // 0x45d848: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45d848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45d84c:
    // 0x45d84c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45d850:
    // 0x45d850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45d854:
    // 0x45d854: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d858:
    // 0x45d858: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45d858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45d85c:
    // 0x45d85c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d860:
    if (ctx->pc == 0x45D860u) {
        ctx->pc = 0x45D860u;
            // 0x45d860: 0xc2a823  subu        $s5, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x45D864u;
        goto label_45d864;
    }
    ctx->pc = 0x45D85Cu;
    {
        const bool branch_taken_0x45d85c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D85Cu;
            // 0x45d860: 0xc2a823  subu        $s5, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d85c) {
            ctx->pc = 0x45D868u;
            goto label_45d868;
        }
    }
    ctx->pc = 0x45D864u;
label_45d864:
    // 0x45d864: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d868:
    // 0x45d868: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d868u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d86c:
    // 0x45d86c: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45d870:
    // 0x45d870: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d874:
    // 0x45d874: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x45d874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45d878:
    // 0x45d878: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d87c:
    // 0x45d87c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d880:
    // 0x45d880: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d884:
    // 0x45d884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d888:
    // 0x45d888: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d88c:
    // 0x45d88c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d88cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d890:
    // 0x45d890: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x45d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45d894:
    // 0x45d894: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x45d894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45d898:
    // 0x45d898: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d89c:
    // 0x45d89c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45d89cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45d8a0:
    // 0x45d8a0: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x45d8a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_45d8a4:
    // 0x45d8a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d8a8:
    // 0x45d8a8: 0xc0bc284  jal         func_2F0A10
label_45d8ac:
    if (ctx->pc == 0x45D8ACu) {
        ctx->pc = 0x45D8ACu;
            // 0x45d8ac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D8B0u;
        goto label_45d8b0;
    }
    ctx->pc = 0x45D8A8u;
    SET_GPR_U32(ctx, 31, 0x45D8B0u);
    ctx->pc = 0x45D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D8A8u;
            // 0x45d8ac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D8B0u; }
        if (ctx->pc != 0x45D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D8B0u; }
        if (ctx->pc != 0x45D8B0u) { return; }
    }
    ctx->pc = 0x45D8B0u;
label_45d8b0:
    // 0x45d8b0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45d8b4:
    // 0x45d8b4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x45d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_45d8b8:
    // 0x45d8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d8bc:
    // 0x45d8bc: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x45d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45d8c0:
    // 0x45d8c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45d8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45d8c4:
    // 0x45d8c4: 0x0  nop
    ctx->pc = 0x45d8c4u;
    // NOP
label_45d8c8:
    // 0x45d8c8: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x45d8c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_45d8cc:
    // 0x45d8cc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_45d8d0:
    if (ctx->pc == 0x45D8D0u) {
        ctx->pc = 0x45D8D0u;
            // 0x45d8d0: 0x4601a59c  madd.s      $f22, $f20, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->pc = 0x45D8D4u;
        goto label_45d8d4;
    }
    ctx->pc = 0x45D8CCu;
    {
        const bool branch_taken_0x45d8cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D8CCu;
            // 0x45d8d0: 0x4601a59c  madd.s      $f22, $f20, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d8cc) {
            ctx->pc = 0x45D8D8u;
            goto label_45d8d8;
        }
    }
    ctx->pc = 0x45D8D4u;
label_45d8d4:
    // 0x45d8d4: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x45d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_45d8d8:
    // 0x45d8d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x45d8d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d8dc:
    // 0x45d8dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45d8e0:
    // 0x45d8e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45d8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45d8e4:
    // 0x45d8e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45d8e8:
    // 0x45d8e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45d8ec:
    // 0x45d8ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45d8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45d8f0:
    // 0x45d8f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x45d8f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45d8f4:
    // 0x45d8f4: 0x0  nop
    ctx->pc = 0x45d8f4u;
    // NOP
label_45d8f8:
    // 0x45d8f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45d8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45d8fc:
    // 0x45d8fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d900:
    // 0x45d900: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45d904:
    // 0x45d904: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x45d904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_45d908:
    // 0x45d908: 0x4601b380  add.s       $f14, $f22, $f1
    ctx->pc = 0x45d908u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_45d90c:
    // 0x45d90c: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45d90cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45d910:
    // 0x45d910: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45d910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45d914:
    // 0x45d914: 0xc0bc284  jal         func_2F0A10
label_45d918:
    if (ctx->pc == 0x45D918u) {
        ctx->pc = 0x45D918u;
            // 0x45d918: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45D91Cu;
        goto label_45d91c;
    }
    ctx->pc = 0x45D914u;
    SET_GPR_U32(ctx, 31, 0x45D91Cu);
    ctx->pc = 0x45D918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D914u;
            // 0x45d918: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D91Cu; }
        if (ctx->pc != 0x45D91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D91Cu; }
        if (ctx->pc != 0x45D91Cu) { return; }
    }
    ctx->pc = 0x45D91Cu;
label_45d91c:
    // 0x45d91c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45d91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45d920:
    // 0x45d920: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45d920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45d924:
    // 0x45d924: 0x320f809  jalr        $t9
label_45d928:
    if (ctx->pc == 0x45D928u) {
        ctx->pc = 0x45D928u;
            // 0x45d928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45D92Cu;
        goto label_45d92c;
    }
    ctx->pc = 0x45D924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45D92Cu);
        ctx->pc = 0x45D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D924u;
            // 0x45d928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45D92Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45D92Cu; }
            if (ctx->pc != 0x45D92Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45D92Cu;
label_45d92c:
    // 0x45d92c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x45d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_45d930:
    // 0x45d930: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x45d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45d934:
    // 0x45d934: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x45d934u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45d938:
    // 0x45d938: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x45d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_45d93c:
    // 0x45d93c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45d93cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45d940:
    // 0x45d940: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45d944:
    // 0x45d944: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45d944u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45d948:
    // 0x45d948: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45d948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45d94c:
    // 0x45d94c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45d94cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45d950:
    // 0x45d950: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45d950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45d954:
    // 0x45d954: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45d954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45d958:
    // 0x45d958: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45d958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45d95c:
    // 0x45d95c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45d95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45d960:
    // 0x45d960: 0x3e00008  jr          $ra
label_45d964:
    if (ctx->pc == 0x45D964u) {
        ctx->pc = 0x45D964u;
            // 0x45d964: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x45D968u;
        goto label_45d968;
    }
    ctx->pc = 0x45D960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D960u;
            // 0x45d964: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45D968u;
label_45d968:
    // 0x45d968: 0x0  nop
    ctx->pc = 0x45d968u;
    // NOP
label_45d96c:
    // 0x45d96c: 0x0  nop
    ctx->pc = 0x45d96cu;
    // NOP
}
