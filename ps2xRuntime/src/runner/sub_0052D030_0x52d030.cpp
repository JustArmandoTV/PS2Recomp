#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052D030
// Address: 0x52d030 - 0x52dd80
void sub_0052D030_0x52d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052D030_0x52d030");
#endif

    switch (ctx->pc) {
        case 0x52d030u: goto label_52d030;
        case 0x52d034u: goto label_52d034;
        case 0x52d038u: goto label_52d038;
        case 0x52d03cu: goto label_52d03c;
        case 0x52d040u: goto label_52d040;
        case 0x52d044u: goto label_52d044;
        case 0x52d048u: goto label_52d048;
        case 0x52d04cu: goto label_52d04c;
        case 0x52d050u: goto label_52d050;
        case 0x52d054u: goto label_52d054;
        case 0x52d058u: goto label_52d058;
        case 0x52d05cu: goto label_52d05c;
        case 0x52d060u: goto label_52d060;
        case 0x52d064u: goto label_52d064;
        case 0x52d068u: goto label_52d068;
        case 0x52d06cu: goto label_52d06c;
        case 0x52d070u: goto label_52d070;
        case 0x52d074u: goto label_52d074;
        case 0x52d078u: goto label_52d078;
        case 0x52d07cu: goto label_52d07c;
        case 0x52d080u: goto label_52d080;
        case 0x52d084u: goto label_52d084;
        case 0x52d088u: goto label_52d088;
        case 0x52d08cu: goto label_52d08c;
        case 0x52d090u: goto label_52d090;
        case 0x52d094u: goto label_52d094;
        case 0x52d098u: goto label_52d098;
        case 0x52d09cu: goto label_52d09c;
        case 0x52d0a0u: goto label_52d0a0;
        case 0x52d0a4u: goto label_52d0a4;
        case 0x52d0a8u: goto label_52d0a8;
        case 0x52d0acu: goto label_52d0ac;
        case 0x52d0b0u: goto label_52d0b0;
        case 0x52d0b4u: goto label_52d0b4;
        case 0x52d0b8u: goto label_52d0b8;
        case 0x52d0bcu: goto label_52d0bc;
        case 0x52d0c0u: goto label_52d0c0;
        case 0x52d0c4u: goto label_52d0c4;
        case 0x52d0c8u: goto label_52d0c8;
        case 0x52d0ccu: goto label_52d0cc;
        case 0x52d0d0u: goto label_52d0d0;
        case 0x52d0d4u: goto label_52d0d4;
        case 0x52d0d8u: goto label_52d0d8;
        case 0x52d0dcu: goto label_52d0dc;
        case 0x52d0e0u: goto label_52d0e0;
        case 0x52d0e4u: goto label_52d0e4;
        case 0x52d0e8u: goto label_52d0e8;
        case 0x52d0ecu: goto label_52d0ec;
        case 0x52d0f0u: goto label_52d0f0;
        case 0x52d0f4u: goto label_52d0f4;
        case 0x52d0f8u: goto label_52d0f8;
        case 0x52d0fcu: goto label_52d0fc;
        case 0x52d100u: goto label_52d100;
        case 0x52d104u: goto label_52d104;
        case 0x52d108u: goto label_52d108;
        case 0x52d10cu: goto label_52d10c;
        case 0x52d110u: goto label_52d110;
        case 0x52d114u: goto label_52d114;
        case 0x52d118u: goto label_52d118;
        case 0x52d11cu: goto label_52d11c;
        case 0x52d120u: goto label_52d120;
        case 0x52d124u: goto label_52d124;
        case 0x52d128u: goto label_52d128;
        case 0x52d12cu: goto label_52d12c;
        case 0x52d130u: goto label_52d130;
        case 0x52d134u: goto label_52d134;
        case 0x52d138u: goto label_52d138;
        case 0x52d13cu: goto label_52d13c;
        case 0x52d140u: goto label_52d140;
        case 0x52d144u: goto label_52d144;
        case 0x52d148u: goto label_52d148;
        case 0x52d14cu: goto label_52d14c;
        case 0x52d150u: goto label_52d150;
        case 0x52d154u: goto label_52d154;
        case 0x52d158u: goto label_52d158;
        case 0x52d15cu: goto label_52d15c;
        case 0x52d160u: goto label_52d160;
        case 0x52d164u: goto label_52d164;
        case 0x52d168u: goto label_52d168;
        case 0x52d16cu: goto label_52d16c;
        case 0x52d170u: goto label_52d170;
        case 0x52d174u: goto label_52d174;
        case 0x52d178u: goto label_52d178;
        case 0x52d17cu: goto label_52d17c;
        case 0x52d180u: goto label_52d180;
        case 0x52d184u: goto label_52d184;
        case 0x52d188u: goto label_52d188;
        case 0x52d18cu: goto label_52d18c;
        case 0x52d190u: goto label_52d190;
        case 0x52d194u: goto label_52d194;
        case 0x52d198u: goto label_52d198;
        case 0x52d19cu: goto label_52d19c;
        case 0x52d1a0u: goto label_52d1a0;
        case 0x52d1a4u: goto label_52d1a4;
        case 0x52d1a8u: goto label_52d1a8;
        case 0x52d1acu: goto label_52d1ac;
        case 0x52d1b0u: goto label_52d1b0;
        case 0x52d1b4u: goto label_52d1b4;
        case 0x52d1b8u: goto label_52d1b8;
        case 0x52d1bcu: goto label_52d1bc;
        case 0x52d1c0u: goto label_52d1c0;
        case 0x52d1c4u: goto label_52d1c4;
        case 0x52d1c8u: goto label_52d1c8;
        case 0x52d1ccu: goto label_52d1cc;
        case 0x52d1d0u: goto label_52d1d0;
        case 0x52d1d4u: goto label_52d1d4;
        case 0x52d1d8u: goto label_52d1d8;
        case 0x52d1dcu: goto label_52d1dc;
        case 0x52d1e0u: goto label_52d1e0;
        case 0x52d1e4u: goto label_52d1e4;
        case 0x52d1e8u: goto label_52d1e8;
        case 0x52d1ecu: goto label_52d1ec;
        case 0x52d1f0u: goto label_52d1f0;
        case 0x52d1f4u: goto label_52d1f4;
        case 0x52d1f8u: goto label_52d1f8;
        case 0x52d1fcu: goto label_52d1fc;
        case 0x52d200u: goto label_52d200;
        case 0x52d204u: goto label_52d204;
        case 0x52d208u: goto label_52d208;
        case 0x52d20cu: goto label_52d20c;
        case 0x52d210u: goto label_52d210;
        case 0x52d214u: goto label_52d214;
        case 0x52d218u: goto label_52d218;
        case 0x52d21cu: goto label_52d21c;
        case 0x52d220u: goto label_52d220;
        case 0x52d224u: goto label_52d224;
        case 0x52d228u: goto label_52d228;
        case 0x52d22cu: goto label_52d22c;
        case 0x52d230u: goto label_52d230;
        case 0x52d234u: goto label_52d234;
        case 0x52d238u: goto label_52d238;
        case 0x52d23cu: goto label_52d23c;
        case 0x52d240u: goto label_52d240;
        case 0x52d244u: goto label_52d244;
        case 0x52d248u: goto label_52d248;
        case 0x52d24cu: goto label_52d24c;
        case 0x52d250u: goto label_52d250;
        case 0x52d254u: goto label_52d254;
        case 0x52d258u: goto label_52d258;
        case 0x52d25cu: goto label_52d25c;
        case 0x52d260u: goto label_52d260;
        case 0x52d264u: goto label_52d264;
        case 0x52d268u: goto label_52d268;
        case 0x52d26cu: goto label_52d26c;
        case 0x52d270u: goto label_52d270;
        case 0x52d274u: goto label_52d274;
        case 0x52d278u: goto label_52d278;
        case 0x52d27cu: goto label_52d27c;
        case 0x52d280u: goto label_52d280;
        case 0x52d284u: goto label_52d284;
        case 0x52d288u: goto label_52d288;
        case 0x52d28cu: goto label_52d28c;
        case 0x52d290u: goto label_52d290;
        case 0x52d294u: goto label_52d294;
        case 0x52d298u: goto label_52d298;
        case 0x52d29cu: goto label_52d29c;
        case 0x52d2a0u: goto label_52d2a0;
        case 0x52d2a4u: goto label_52d2a4;
        case 0x52d2a8u: goto label_52d2a8;
        case 0x52d2acu: goto label_52d2ac;
        case 0x52d2b0u: goto label_52d2b0;
        case 0x52d2b4u: goto label_52d2b4;
        case 0x52d2b8u: goto label_52d2b8;
        case 0x52d2bcu: goto label_52d2bc;
        case 0x52d2c0u: goto label_52d2c0;
        case 0x52d2c4u: goto label_52d2c4;
        case 0x52d2c8u: goto label_52d2c8;
        case 0x52d2ccu: goto label_52d2cc;
        case 0x52d2d0u: goto label_52d2d0;
        case 0x52d2d4u: goto label_52d2d4;
        case 0x52d2d8u: goto label_52d2d8;
        case 0x52d2dcu: goto label_52d2dc;
        case 0x52d2e0u: goto label_52d2e0;
        case 0x52d2e4u: goto label_52d2e4;
        case 0x52d2e8u: goto label_52d2e8;
        case 0x52d2ecu: goto label_52d2ec;
        case 0x52d2f0u: goto label_52d2f0;
        case 0x52d2f4u: goto label_52d2f4;
        case 0x52d2f8u: goto label_52d2f8;
        case 0x52d2fcu: goto label_52d2fc;
        case 0x52d300u: goto label_52d300;
        case 0x52d304u: goto label_52d304;
        case 0x52d308u: goto label_52d308;
        case 0x52d30cu: goto label_52d30c;
        case 0x52d310u: goto label_52d310;
        case 0x52d314u: goto label_52d314;
        case 0x52d318u: goto label_52d318;
        case 0x52d31cu: goto label_52d31c;
        case 0x52d320u: goto label_52d320;
        case 0x52d324u: goto label_52d324;
        case 0x52d328u: goto label_52d328;
        case 0x52d32cu: goto label_52d32c;
        case 0x52d330u: goto label_52d330;
        case 0x52d334u: goto label_52d334;
        case 0x52d338u: goto label_52d338;
        case 0x52d33cu: goto label_52d33c;
        case 0x52d340u: goto label_52d340;
        case 0x52d344u: goto label_52d344;
        case 0x52d348u: goto label_52d348;
        case 0x52d34cu: goto label_52d34c;
        case 0x52d350u: goto label_52d350;
        case 0x52d354u: goto label_52d354;
        case 0x52d358u: goto label_52d358;
        case 0x52d35cu: goto label_52d35c;
        case 0x52d360u: goto label_52d360;
        case 0x52d364u: goto label_52d364;
        case 0x52d368u: goto label_52d368;
        case 0x52d36cu: goto label_52d36c;
        case 0x52d370u: goto label_52d370;
        case 0x52d374u: goto label_52d374;
        case 0x52d378u: goto label_52d378;
        case 0x52d37cu: goto label_52d37c;
        case 0x52d380u: goto label_52d380;
        case 0x52d384u: goto label_52d384;
        case 0x52d388u: goto label_52d388;
        case 0x52d38cu: goto label_52d38c;
        case 0x52d390u: goto label_52d390;
        case 0x52d394u: goto label_52d394;
        case 0x52d398u: goto label_52d398;
        case 0x52d39cu: goto label_52d39c;
        case 0x52d3a0u: goto label_52d3a0;
        case 0x52d3a4u: goto label_52d3a4;
        case 0x52d3a8u: goto label_52d3a8;
        case 0x52d3acu: goto label_52d3ac;
        case 0x52d3b0u: goto label_52d3b0;
        case 0x52d3b4u: goto label_52d3b4;
        case 0x52d3b8u: goto label_52d3b8;
        case 0x52d3bcu: goto label_52d3bc;
        case 0x52d3c0u: goto label_52d3c0;
        case 0x52d3c4u: goto label_52d3c4;
        case 0x52d3c8u: goto label_52d3c8;
        case 0x52d3ccu: goto label_52d3cc;
        case 0x52d3d0u: goto label_52d3d0;
        case 0x52d3d4u: goto label_52d3d4;
        case 0x52d3d8u: goto label_52d3d8;
        case 0x52d3dcu: goto label_52d3dc;
        case 0x52d3e0u: goto label_52d3e0;
        case 0x52d3e4u: goto label_52d3e4;
        case 0x52d3e8u: goto label_52d3e8;
        case 0x52d3ecu: goto label_52d3ec;
        case 0x52d3f0u: goto label_52d3f0;
        case 0x52d3f4u: goto label_52d3f4;
        case 0x52d3f8u: goto label_52d3f8;
        case 0x52d3fcu: goto label_52d3fc;
        case 0x52d400u: goto label_52d400;
        case 0x52d404u: goto label_52d404;
        case 0x52d408u: goto label_52d408;
        case 0x52d40cu: goto label_52d40c;
        case 0x52d410u: goto label_52d410;
        case 0x52d414u: goto label_52d414;
        case 0x52d418u: goto label_52d418;
        case 0x52d41cu: goto label_52d41c;
        case 0x52d420u: goto label_52d420;
        case 0x52d424u: goto label_52d424;
        case 0x52d428u: goto label_52d428;
        case 0x52d42cu: goto label_52d42c;
        case 0x52d430u: goto label_52d430;
        case 0x52d434u: goto label_52d434;
        case 0x52d438u: goto label_52d438;
        case 0x52d43cu: goto label_52d43c;
        case 0x52d440u: goto label_52d440;
        case 0x52d444u: goto label_52d444;
        case 0x52d448u: goto label_52d448;
        case 0x52d44cu: goto label_52d44c;
        case 0x52d450u: goto label_52d450;
        case 0x52d454u: goto label_52d454;
        case 0x52d458u: goto label_52d458;
        case 0x52d45cu: goto label_52d45c;
        case 0x52d460u: goto label_52d460;
        case 0x52d464u: goto label_52d464;
        case 0x52d468u: goto label_52d468;
        case 0x52d46cu: goto label_52d46c;
        case 0x52d470u: goto label_52d470;
        case 0x52d474u: goto label_52d474;
        case 0x52d478u: goto label_52d478;
        case 0x52d47cu: goto label_52d47c;
        case 0x52d480u: goto label_52d480;
        case 0x52d484u: goto label_52d484;
        case 0x52d488u: goto label_52d488;
        case 0x52d48cu: goto label_52d48c;
        case 0x52d490u: goto label_52d490;
        case 0x52d494u: goto label_52d494;
        case 0x52d498u: goto label_52d498;
        case 0x52d49cu: goto label_52d49c;
        case 0x52d4a0u: goto label_52d4a0;
        case 0x52d4a4u: goto label_52d4a4;
        case 0x52d4a8u: goto label_52d4a8;
        case 0x52d4acu: goto label_52d4ac;
        case 0x52d4b0u: goto label_52d4b0;
        case 0x52d4b4u: goto label_52d4b4;
        case 0x52d4b8u: goto label_52d4b8;
        case 0x52d4bcu: goto label_52d4bc;
        case 0x52d4c0u: goto label_52d4c0;
        case 0x52d4c4u: goto label_52d4c4;
        case 0x52d4c8u: goto label_52d4c8;
        case 0x52d4ccu: goto label_52d4cc;
        case 0x52d4d0u: goto label_52d4d0;
        case 0x52d4d4u: goto label_52d4d4;
        case 0x52d4d8u: goto label_52d4d8;
        case 0x52d4dcu: goto label_52d4dc;
        case 0x52d4e0u: goto label_52d4e0;
        case 0x52d4e4u: goto label_52d4e4;
        case 0x52d4e8u: goto label_52d4e8;
        case 0x52d4ecu: goto label_52d4ec;
        case 0x52d4f0u: goto label_52d4f0;
        case 0x52d4f4u: goto label_52d4f4;
        case 0x52d4f8u: goto label_52d4f8;
        case 0x52d4fcu: goto label_52d4fc;
        case 0x52d500u: goto label_52d500;
        case 0x52d504u: goto label_52d504;
        case 0x52d508u: goto label_52d508;
        case 0x52d50cu: goto label_52d50c;
        case 0x52d510u: goto label_52d510;
        case 0x52d514u: goto label_52d514;
        case 0x52d518u: goto label_52d518;
        case 0x52d51cu: goto label_52d51c;
        case 0x52d520u: goto label_52d520;
        case 0x52d524u: goto label_52d524;
        case 0x52d528u: goto label_52d528;
        case 0x52d52cu: goto label_52d52c;
        case 0x52d530u: goto label_52d530;
        case 0x52d534u: goto label_52d534;
        case 0x52d538u: goto label_52d538;
        case 0x52d53cu: goto label_52d53c;
        case 0x52d540u: goto label_52d540;
        case 0x52d544u: goto label_52d544;
        case 0x52d548u: goto label_52d548;
        case 0x52d54cu: goto label_52d54c;
        case 0x52d550u: goto label_52d550;
        case 0x52d554u: goto label_52d554;
        case 0x52d558u: goto label_52d558;
        case 0x52d55cu: goto label_52d55c;
        case 0x52d560u: goto label_52d560;
        case 0x52d564u: goto label_52d564;
        case 0x52d568u: goto label_52d568;
        case 0x52d56cu: goto label_52d56c;
        case 0x52d570u: goto label_52d570;
        case 0x52d574u: goto label_52d574;
        case 0x52d578u: goto label_52d578;
        case 0x52d57cu: goto label_52d57c;
        case 0x52d580u: goto label_52d580;
        case 0x52d584u: goto label_52d584;
        case 0x52d588u: goto label_52d588;
        case 0x52d58cu: goto label_52d58c;
        case 0x52d590u: goto label_52d590;
        case 0x52d594u: goto label_52d594;
        case 0x52d598u: goto label_52d598;
        case 0x52d59cu: goto label_52d59c;
        case 0x52d5a0u: goto label_52d5a0;
        case 0x52d5a4u: goto label_52d5a4;
        case 0x52d5a8u: goto label_52d5a8;
        case 0x52d5acu: goto label_52d5ac;
        case 0x52d5b0u: goto label_52d5b0;
        case 0x52d5b4u: goto label_52d5b4;
        case 0x52d5b8u: goto label_52d5b8;
        case 0x52d5bcu: goto label_52d5bc;
        case 0x52d5c0u: goto label_52d5c0;
        case 0x52d5c4u: goto label_52d5c4;
        case 0x52d5c8u: goto label_52d5c8;
        case 0x52d5ccu: goto label_52d5cc;
        case 0x52d5d0u: goto label_52d5d0;
        case 0x52d5d4u: goto label_52d5d4;
        case 0x52d5d8u: goto label_52d5d8;
        case 0x52d5dcu: goto label_52d5dc;
        case 0x52d5e0u: goto label_52d5e0;
        case 0x52d5e4u: goto label_52d5e4;
        case 0x52d5e8u: goto label_52d5e8;
        case 0x52d5ecu: goto label_52d5ec;
        case 0x52d5f0u: goto label_52d5f0;
        case 0x52d5f4u: goto label_52d5f4;
        case 0x52d5f8u: goto label_52d5f8;
        case 0x52d5fcu: goto label_52d5fc;
        case 0x52d600u: goto label_52d600;
        case 0x52d604u: goto label_52d604;
        case 0x52d608u: goto label_52d608;
        case 0x52d60cu: goto label_52d60c;
        case 0x52d610u: goto label_52d610;
        case 0x52d614u: goto label_52d614;
        case 0x52d618u: goto label_52d618;
        case 0x52d61cu: goto label_52d61c;
        case 0x52d620u: goto label_52d620;
        case 0x52d624u: goto label_52d624;
        case 0x52d628u: goto label_52d628;
        case 0x52d62cu: goto label_52d62c;
        case 0x52d630u: goto label_52d630;
        case 0x52d634u: goto label_52d634;
        case 0x52d638u: goto label_52d638;
        case 0x52d63cu: goto label_52d63c;
        case 0x52d640u: goto label_52d640;
        case 0x52d644u: goto label_52d644;
        case 0x52d648u: goto label_52d648;
        case 0x52d64cu: goto label_52d64c;
        case 0x52d650u: goto label_52d650;
        case 0x52d654u: goto label_52d654;
        case 0x52d658u: goto label_52d658;
        case 0x52d65cu: goto label_52d65c;
        case 0x52d660u: goto label_52d660;
        case 0x52d664u: goto label_52d664;
        case 0x52d668u: goto label_52d668;
        case 0x52d66cu: goto label_52d66c;
        case 0x52d670u: goto label_52d670;
        case 0x52d674u: goto label_52d674;
        case 0x52d678u: goto label_52d678;
        case 0x52d67cu: goto label_52d67c;
        case 0x52d680u: goto label_52d680;
        case 0x52d684u: goto label_52d684;
        case 0x52d688u: goto label_52d688;
        case 0x52d68cu: goto label_52d68c;
        case 0x52d690u: goto label_52d690;
        case 0x52d694u: goto label_52d694;
        case 0x52d698u: goto label_52d698;
        case 0x52d69cu: goto label_52d69c;
        case 0x52d6a0u: goto label_52d6a0;
        case 0x52d6a4u: goto label_52d6a4;
        case 0x52d6a8u: goto label_52d6a8;
        case 0x52d6acu: goto label_52d6ac;
        case 0x52d6b0u: goto label_52d6b0;
        case 0x52d6b4u: goto label_52d6b4;
        case 0x52d6b8u: goto label_52d6b8;
        case 0x52d6bcu: goto label_52d6bc;
        case 0x52d6c0u: goto label_52d6c0;
        case 0x52d6c4u: goto label_52d6c4;
        case 0x52d6c8u: goto label_52d6c8;
        case 0x52d6ccu: goto label_52d6cc;
        case 0x52d6d0u: goto label_52d6d0;
        case 0x52d6d4u: goto label_52d6d4;
        case 0x52d6d8u: goto label_52d6d8;
        case 0x52d6dcu: goto label_52d6dc;
        case 0x52d6e0u: goto label_52d6e0;
        case 0x52d6e4u: goto label_52d6e4;
        case 0x52d6e8u: goto label_52d6e8;
        case 0x52d6ecu: goto label_52d6ec;
        case 0x52d6f0u: goto label_52d6f0;
        case 0x52d6f4u: goto label_52d6f4;
        case 0x52d6f8u: goto label_52d6f8;
        case 0x52d6fcu: goto label_52d6fc;
        case 0x52d700u: goto label_52d700;
        case 0x52d704u: goto label_52d704;
        case 0x52d708u: goto label_52d708;
        case 0x52d70cu: goto label_52d70c;
        case 0x52d710u: goto label_52d710;
        case 0x52d714u: goto label_52d714;
        case 0x52d718u: goto label_52d718;
        case 0x52d71cu: goto label_52d71c;
        case 0x52d720u: goto label_52d720;
        case 0x52d724u: goto label_52d724;
        case 0x52d728u: goto label_52d728;
        case 0x52d72cu: goto label_52d72c;
        case 0x52d730u: goto label_52d730;
        case 0x52d734u: goto label_52d734;
        case 0x52d738u: goto label_52d738;
        case 0x52d73cu: goto label_52d73c;
        case 0x52d740u: goto label_52d740;
        case 0x52d744u: goto label_52d744;
        case 0x52d748u: goto label_52d748;
        case 0x52d74cu: goto label_52d74c;
        case 0x52d750u: goto label_52d750;
        case 0x52d754u: goto label_52d754;
        case 0x52d758u: goto label_52d758;
        case 0x52d75cu: goto label_52d75c;
        case 0x52d760u: goto label_52d760;
        case 0x52d764u: goto label_52d764;
        case 0x52d768u: goto label_52d768;
        case 0x52d76cu: goto label_52d76c;
        case 0x52d770u: goto label_52d770;
        case 0x52d774u: goto label_52d774;
        case 0x52d778u: goto label_52d778;
        case 0x52d77cu: goto label_52d77c;
        case 0x52d780u: goto label_52d780;
        case 0x52d784u: goto label_52d784;
        case 0x52d788u: goto label_52d788;
        case 0x52d78cu: goto label_52d78c;
        case 0x52d790u: goto label_52d790;
        case 0x52d794u: goto label_52d794;
        case 0x52d798u: goto label_52d798;
        case 0x52d79cu: goto label_52d79c;
        case 0x52d7a0u: goto label_52d7a0;
        case 0x52d7a4u: goto label_52d7a4;
        case 0x52d7a8u: goto label_52d7a8;
        case 0x52d7acu: goto label_52d7ac;
        case 0x52d7b0u: goto label_52d7b0;
        case 0x52d7b4u: goto label_52d7b4;
        case 0x52d7b8u: goto label_52d7b8;
        case 0x52d7bcu: goto label_52d7bc;
        case 0x52d7c0u: goto label_52d7c0;
        case 0x52d7c4u: goto label_52d7c4;
        case 0x52d7c8u: goto label_52d7c8;
        case 0x52d7ccu: goto label_52d7cc;
        case 0x52d7d0u: goto label_52d7d0;
        case 0x52d7d4u: goto label_52d7d4;
        case 0x52d7d8u: goto label_52d7d8;
        case 0x52d7dcu: goto label_52d7dc;
        case 0x52d7e0u: goto label_52d7e0;
        case 0x52d7e4u: goto label_52d7e4;
        case 0x52d7e8u: goto label_52d7e8;
        case 0x52d7ecu: goto label_52d7ec;
        case 0x52d7f0u: goto label_52d7f0;
        case 0x52d7f4u: goto label_52d7f4;
        case 0x52d7f8u: goto label_52d7f8;
        case 0x52d7fcu: goto label_52d7fc;
        case 0x52d800u: goto label_52d800;
        case 0x52d804u: goto label_52d804;
        case 0x52d808u: goto label_52d808;
        case 0x52d80cu: goto label_52d80c;
        case 0x52d810u: goto label_52d810;
        case 0x52d814u: goto label_52d814;
        case 0x52d818u: goto label_52d818;
        case 0x52d81cu: goto label_52d81c;
        case 0x52d820u: goto label_52d820;
        case 0x52d824u: goto label_52d824;
        case 0x52d828u: goto label_52d828;
        case 0x52d82cu: goto label_52d82c;
        case 0x52d830u: goto label_52d830;
        case 0x52d834u: goto label_52d834;
        case 0x52d838u: goto label_52d838;
        case 0x52d83cu: goto label_52d83c;
        case 0x52d840u: goto label_52d840;
        case 0x52d844u: goto label_52d844;
        case 0x52d848u: goto label_52d848;
        case 0x52d84cu: goto label_52d84c;
        case 0x52d850u: goto label_52d850;
        case 0x52d854u: goto label_52d854;
        case 0x52d858u: goto label_52d858;
        case 0x52d85cu: goto label_52d85c;
        case 0x52d860u: goto label_52d860;
        case 0x52d864u: goto label_52d864;
        case 0x52d868u: goto label_52d868;
        case 0x52d86cu: goto label_52d86c;
        case 0x52d870u: goto label_52d870;
        case 0x52d874u: goto label_52d874;
        case 0x52d878u: goto label_52d878;
        case 0x52d87cu: goto label_52d87c;
        case 0x52d880u: goto label_52d880;
        case 0x52d884u: goto label_52d884;
        case 0x52d888u: goto label_52d888;
        case 0x52d88cu: goto label_52d88c;
        case 0x52d890u: goto label_52d890;
        case 0x52d894u: goto label_52d894;
        case 0x52d898u: goto label_52d898;
        case 0x52d89cu: goto label_52d89c;
        case 0x52d8a0u: goto label_52d8a0;
        case 0x52d8a4u: goto label_52d8a4;
        case 0x52d8a8u: goto label_52d8a8;
        case 0x52d8acu: goto label_52d8ac;
        case 0x52d8b0u: goto label_52d8b0;
        case 0x52d8b4u: goto label_52d8b4;
        case 0x52d8b8u: goto label_52d8b8;
        case 0x52d8bcu: goto label_52d8bc;
        case 0x52d8c0u: goto label_52d8c0;
        case 0x52d8c4u: goto label_52d8c4;
        case 0x52d8c8u: goto label_52d8c8;
        case 0x52d8ccu: goto label_52d8cc;
        case 0x52d8d0u: goto label_52d8d0;
        case 0x52d8d4u: goto label_52d8d4;
        case 0x52d8d8u: goto label_52d8d8;
        case 0x52d8dcu: goto label_52d8dc;
        case 0x52d8e0u: goto label_52d8e0;
        case 0x52d8e4u: goto label_52d8e4;
        case 0x52d8e8u: goto label_52d8e8;
        case 0x52d8ecu: goto label_52d8ec;
        case 0x52d8f0u: goto label_52d8f0;
        case 0x52d8f4u: goto label_52d8f4;
        case 0x52d8f8u: goto label_52d8f8;
        case 0x52d8fcu: goto label_52d8fc;
        case 0x52d900u: goto label_52d900;
        case 0x52d904u: goto label_52d904;
        case 0x52d908u: goto label_52d908;
        case 0x52d90cu: goto label_52d90c;
        case 0x52d910u: goto label_52d910;
        case 0x52d914u: goto label_52d914;
        case 0x52d918u: goto label_52d918;
        case 0x52d91cu: goto label_52d91c;
        case 0x52d920u: goto label_52d920;
        case 0x52d924u: goto label_52d924;
        case 0x52d928u: goto label_52d928;
        case 0x52d92cu: goto label_52d92c;
        case 0x52d930u: goto label_52d930;
        case 0x52d934u: goto label_52d934;
        case 0x52d938u: goto label_52d938;
        case 0x52d93cu: goto label_52d93c;
        case 0x52d940u: goto label_52d940;
        case 0x52d944u: goto label_52d944;
        case 0x52d948u: goto label_52d948;
        case 0x52d94cu: goto label_52d94c;
        case 0x52d950u: goto label_52d950;
        case 0x52d954u: goto label_52d954;
        case 0x52d958u: goto label_52d958;
        case 0x52d95cu: goto label_52d95c;
        case 0x52d960u: goto label_52d960;
        case 0x52d964u: goto label_52d964;
        case 0x52d968u: goto label_52d968;
        case 0x52d96cu: goto label_52d96c;
        case 0x52d970u: goto label_52d970;
        case 0x52d974u: goto label_52d974;
        case 0x52d978u: goto label_52d978;
        case 0x52d97cu: goto label_52d97c;
        case 0x52d980u: goto label_52d980;
        case 0x52d984u: goto label_52d984;
        case 0x52d988u: goto label_52d988;
        case 0x52d98cu: goto label_52d98c;
        case 0x52d990u: goto label_52d990;
        case 0x52d994u: goto label_52d994;
        case 0x52d998u: goto label_52d998;
        case 0x52d99cu: goto label_52d99c;
        case 0x52d9a0u: goto label_52d9a0;
        case 0x52d9a4u: goto label_52d9a4;
        case 0x52d9a8u: goto label_52d9a8;
        case 0x52d9acu: goto label_52d9ac;
        case 0x52d9b0u: goto label_52d9b0;
        case 0x52d9b4u: goto label_52d9b4;
        case 0x52d9b8u: goto label_52d9b8;
        case 0x52d9bcu: goto label_52d9bc;
        case 0x52d9c0u: goto label_52d9c0;
        case 0x52d9c4u: goto label_52d9c4;
        case 0x52d9c8u: goto label_52d9c8;
        case 0x52d9ccu: goto label_52d9cc;
        case 0x52d9d0u: goto label_52d9d0;
        case 0x52d9d4u: goto label_52d9d4;
        case 0x52d9d8u: goto label_52d9d8;
        case 0x52d9dcu: goto label_52d9dc;
        case 0x52d9e0u: goto label_52d9e0;
        case 0x52d9e4u: goto label_52d9e4;
        case 0x52d9e8u: goto label_52d9e8;
        case 0x52d9ecu: goto label_52d9ec;
        case 0x52d9f0u: goto label_52d9f0;
        case 0x52d9f4u: goto label_52d9f4;
        case 0x52d9f8u: goto label_52d9f8;
        case 0x52d9fcu: goto label_52d9fc;
        case 0x52da00u: goto label_52da00;
        case 0x52da04u: goto label_52da04;
        case 0x52da08u: goto label_52da08;
        case 0x52da0cu: goto label_52da0c;
        case 0x52da10u: goto label_52da10;
        case 0x52da14u: goto label_52da14;
        case 0x52da18u: goto label_52da18;
        case 0x52da1cu: goto label_52da1c;
        case 0x52da20u: goto label_52da20;
        case 0x52da24u: goto label_52da24;
        case 0x52da28u: goto label_52da28;
        case 0x52da2cu: goto label_52da2c;
        case 0x52da30u: goto label_52da30;
        case 0x52da34u: goto label_52da34;
        case 0x52da38u: goto label_52da38;
        case 0x52da3cu: goto label_52da3c;
        case 0x52da40u: goto label_52da40;
        case 0x52da44u: goto label_52da44;
        case 0x52da48u: goto label_52da48;
        case 0x52da4cu: goto label_52da4c;
        case 0x52da50u: goto label_52da50;
        case 0x52da54u: goto label_52da54;
        case 0x52da58u: goto label_52da58;
        case 0x52da5cu: goto label_52da5c;
        case 0x52da60u: goto label_52da60;
        case 0x52da64u: goto label_52da64;
        case 0x52da68u: goto label_52da68;
        case 0x52da6cu: goto label_52da6c;
        case 0x52da70u: goto label_52da70;
        case 0x52da74u: goto label_52da74;
        case 0x52da78u: goto label_52da78;
        case 0x52da7cu: goto label_52da7c;
        case 0x52da80u: goto label_52da80;
        case 0x52da84u: goto label_52da84;
        case 0x52da88u: goto label_52da88;
        case 0x52da8cu: goto label_52da8c;
        case 0x52da90u: goto label_52da90;
        case 0x52da94u: goto label_52da94;
        case 0x52da98u: goto label_52da98;
        case 0x52da9cu: goto label_52da9c;
        case 0x52daa0u: goto label_52daa0;
        case 0x52daa4u: goto label_52daa4;
        case 0x52daa8u: goto label_52daa8;
        case 0x52daacu: goto label_52daac;
        case 0x52dab0u: goto label_52dab0;
        case 0x52dab4u: goto label_52dab4;
        case 0x52dab8u: goto label_52dab8;
        case 0x52dabcu: goto label_52dabc;
        case 0x52dac0u: goto label_52dac0;
        case 0x52dac4u: goto label_52dac4;
        case 0x52dac8u: goto label_52dac8;
        case 0x52daccu: goto label_52dacc;
        case 0x52dad0u: goto label_52dad0;
        case 0x52dad4u: goto label_52dad4;
        case 0x52dad8u: goto label_52dad8;
        case 0x52dadcu: goto label_52dadc;
        case 0x52dae0u: goto label_52dae0;
        case 0x52dae4u: goto label_52dae4;
        case 0x52dae8u: goto label_52dae8;
        case 0x52daecu: goto label_52daec;
        case 0x52daf0u: goto label_52daf0;
        case 0x52daf4u: goto label_52daf4;
        case 0x52daf8u: goto label_52daf8;
        case 0x52dafcu: goto label_52dafc;
        case 0x52db00u: goto label_52db00;
        case 0x52db04u: goto label_52db04;
        case 0x52db08u: goto label_52db08;
        case 0x52db0cu: goto label_52db0c;
        case 0x52db10u: goto label_52db10;
        case 0x52db14u: goto label_52db14;
        case 0x52db18u: goto label_52db18;
        case 0x52db1cu: goto label_52db1c;
        case 0x52db20u: goto label_52db20;
        case 0x52db24u: goto label_52db24;
        case 0x52db28u: goto label_52db28;
        case 0x52db2cu: goto label_52db2c;
        case 0x52db30u: goto label_52db30;
        case 0x52db34u: goto label_52db34;
        case 0x52db38u: goto label_52db38;
        case 0x52db3cu: goto label_52db3c;
        case 0x52db40u: goto label_52db40;
        case 0x52db44u: goto label_52db44;
        case 0x52db48u: goto label_52db48;
        case 0x52db4cu: goto label_52db4c;
        case 0x52db50u: goto label_52db50;
        case 0x52db54u: goto label_52db54;
        case 0x52db58u: goto label_52db58;
        case 0x52db5cu: goto label_52db5c;
        case 0x52db60u: goto label_52db60;
        case 0x52db64u: goto label_52db64;
        case 0x52db68u: goto label_52db68;
        case 0x52db6cu: goto label_52db6c;
        case 0x52db70u: goto label_52db70;
        case 0x52db74u: goto label_52db74;
        case 0x52db78u: goto label_52db78;
        case 0x52db7cu: goto label_52db7c;
        case 0x52db80u: goto label_52db80;
        case 0x52db84u: goto label_52db84;
        case 0x52db88u: goto label_52db88;
        case 0x52db8cu: goto label_52db8c;
        case 0x52db90u: goto label_52db90;
        case 0x52db94u: goto label_52db94;
        case 0x52db98u: goto label_52db98;
        case 0x52db9cu: goto label_52db9c;
        case 0x52dba0u: goto label_52dba0;
        case 0x52dba4u: goto label_52dba4;
        case 0x52dba8u: goto label_52dba8;
        case 0x52dbacu: goto label_52dbac;
        case 0x52dbb0u: goto label_52dbb0;
        case 0x52dbb4u: goto label_52dbb4;
        case 0x52dbb8u: goto label_52dbb8;
        case 0x52dbbcu: goto label_52dbbc;
        case 0x52dbc0u: goto label_52dbc0;
        case 0x52dbc4u: goto label_52dbc4;
        case 0x52dbc8u: goto label_52dbc8;
        case 0x52dbccu: goto label_52dbcc;
        case 0x52dbd0u: goto label_52dbd0;
        case 0x52dbd4u: goto label_52dbd4;
        case 0x52dbd8u: goto label_52dbd8;
        case 0x52dbdcu: goto label_52dbdc;
        case 0x52dbe0u: goto label_52dbe0;
        case 0x52dbe4u: goto label_52dbe4;
        case 0x52dbe8u: goto label_52dbe8;
        case 0x52dbecu: goto label_52dbec;
        case 0x52dbf0u: goto label_52dbf0;
        case 0x52dbf4u: goto label_52dbf4;
        case 0x52dbf8u: goto label_52dbf8;
        case 0x52dbfcu: goto label_52dbfc;
        case 0x52dc00u: goto label_52dc00;
        case 0x52dc04u: goto label_52dc04;
        case 0x52dc08u: goto label_52dc08;
        case 0x52dc0cu: goto label_52dc0c;
        case 0x52dc10u: goto label_52dc10;
        case 0x52dc14u: goto label_52dc14;
        case 0x52dc18u: goto label_52dc18;
        case 0x52dc1cu: goto label_52dc1c;
        case 0x52dc20u: goto label_52dc20;
        case 0x52dc24u: goto label_52dc24;
        case 0x52dc28u: goto label_52dc28;
        case 0x52dc2cu: goto label_52dc2c;
        case 0x52dc30u: goto label_52dc30;
        case 0x52dc34u: goto label_52dc34;
        case 0x52dc38u: goto label_52dc38;
        case 0x52dc3cu: goto label_52dc3c;
        case 0x52dc40u: goto label_52dc40;
        case 0x52dc44u: goto label_52dc44;
        case 0x52dc48u: goto label_52dc48;
        case 0x52dc4cu: goto label_52dc4c;
        case 0x52dc50u: goto label_52dc50;
        case 0x52dc54u: goto label_52dc54;
        case 0x52dc58u: goto label_52dc58;
        case 0x52dc5cu: goto label_52dc5c;
        case 0x52dc60u: goto label_52dc60;
        case 0x52dc64u: goto label_52dc64;
        case 0x52dc68u: goto label_52dc68;
        case 0x52dc6cu: goto label_52dc6c;
        case 0x52dc70u: goto label_52dc70;
        case 0x52dc74u: goto label_52dc74;
        case 0x52dc78u: goto label_52dc78;
        case 0x52dc7cu: goto label_52dc7c;
        case 0x52dc80u: goto label_52dc80;
        case 0x52dc84u: goto label_52dc84;
        case 0x52dc88u: goto label_52dc88;
        case 0x52dc8cu: goto label_52dc8c;
        case 0x52dc90u: goto label_52dc90;
        case 0x52dc94u: goto label_52dc94;
        case 0x52dc98u: goto label_52dc98;
        case 0x52dc9cu: goto label_52dc9c;
        case 0x52dca0u: goto label_52dca0;
        case 0x52dca4u: goto label_52dca4;
        case 0x52dca8u: goto label_52dca8;
        case 0x52dcacu: goto label_52dcac;
        case 0x52dcb0u: goto label_52dcb0;
        case 0x52dcb4u: goto label_52dcb4;
        case 0x52dcb8u: goto label_52dcb8;
        case 0x52dcbcu: goto label_52dcbc;
        case 0x52dcc0u: goto label_52dcc0;
        case 0x52dcc4u: goto label_52dcc4;
        case 0x52dcc8u: goto label_52dcc8;
        case 0x52dcccu: goto label_52dccc;
        case 0x52dcd0u: goto label_52dcd0;
        case 0x52dcd4u: goto label_52dcd4;
        case 0x52dcd8u: goto label_52dcd8;
        case 0x52dcdcu: goto label_52dcdc;
        case 0x52dce0u: goto label_52dce0;
        case 0x52dce4u: goto label_52dce4;
        case 0x52dce8u: goto label_52dce8;
        case 0x52dcecu: goto label_52dcec;
        case 0x52dcf0u: goto label_52dcf0;
        case 0x52dcf4u: goto label_52dcf4;
        case 0x52dcf8u: goto label_52dcf8;
        case 0x52dcfcu: goto label_52dcfc;
        case 0x52dd00u: goto label_52dd00;
        case 0x52dd04u: goto label_52dd04;
        case 0x52dd08u: goto label_52dd08;
        case 0x52dd0cu: goto label_52dd0c;
        case 0x52dd10u: goto label_52dd10;
        case 0x52dd14u: goto label_52dd14;
        case 0x52dd18u: goto label_52dd18;
        case 0x52dd1cu: goto label_52dd1c;
        case 0x52dd20u: goto label_52dd20;
        case 0x52dd24u: goto label_52dd24;
        case 0x52dd28u: goto label_52dd28;
        case 0x52dd2cu: goto label_52dd2c;
        case 0x52dd30u: goto label_52dd30;
        case 0x52dd34u: goto label_52dd34;
        case 0x52dd38u: goto label_52dd38;
        case 0x52dd3cu: goto label_52dd3c;
        case 0x52dd40u: goto label_52dd40;
        case 0x52dd44u: goto label_52dd44;
        case 0x52dd48u: goto label_52dd48;
        case 0x52dd4cu: goto label_52dd4c;
        case 0x52dd50u: goto label_52dd50;
        case 0x52dd54u: goto label_52dd54;
        case 0x52dd58u: goto label_52dd58;
        case 0x52dd5cu: goto label_52dd5c;
        case 0x52dd60u: goto label_52dd60;
        case 0x52dd64u: goto label_52dd64;
        case 0x52dd68u: goto label_52dd68;
        case 0x52dd6cu: goto label_52dd6c;
        case 0x52dd70u: goto label_52dd70;
        case 0x52dd74u: goto label_52dd74;
        case 0x52dd78u: goto label_52dd78;
        case 0x52dd7cu: goto label_52dd7c;
        default: break;
    }

    ctx->pc = 0x52d030u;

label_52d030:
    // 0x52d030: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x52d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_52d034:
    // 0x52d034: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x52d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52d038:
    // 0x52d038: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_52d03c:
    // 0x52d03c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52d03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52d040:
    // 0x52d040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52d044:
    // 0x52d044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52d048:
    // 0x52d048: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52d048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52d04c:
    // 0x52d04c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52d04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52d050:
    // 0x52d050: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x52d050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52d054:
    // 0x52d054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52d058:
    // 0x52d058: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x52d058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_52d05c:
    // 0x52d05c: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x52d05cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_52d060:
    // 0x52d060: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_52d064:
    if (ctx->pc == 0x52D064u) {
        ctx->pc = 0x52D064u;
            // 0x52d064: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D068u;
        goto label_52d068;
    }
    ctx->pc = 0x52D060u;
    {
        const bool branch_taken_0x52d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D060u;
            // 0x52d064: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d060) {
            ctx->pc = 0x52D26Cu;
            goto label_52d26c;
        }
    }
    ctx->pc = 0x52D068u;
label_52d068:
    // 0x52d068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d06c:
    // 0x52d06c: 0xc04f278  jal         func_13C9E0
label_52d070:
    if (ctx->pc == 0x52D070u) {
        ctx->pc = 0x52D070u;
            // 0x52d070: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x52D074u;
        goto label_52d074;
    }
    ctx->pc = 0x52D06Cu;
    SET_GPR_U32(ctx, 31, 0x52D074u);
    ctx->pc = 0x52D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D06Cu;
            // 0x52d070: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D074u; }
        if (ctx->pc != 0x52D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D074u; }
        if (ctx->pc != 0x52D074u) { return; }
    }
    ctx->pc = 0x52D074u;
label_52d074:
    // 0x52d074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d078:
    // 0x52d078: 0xc04ce80  jal         func_133A00
label_52d07c:
    if (ctx->pc == 0x52D07Cu) {
        ctx->pc = 0x52D07Cu;
            // 0x52d07c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x52D080u;
        goto label_52d080;
    }
    ctx->pc = 0x52D078u;
    SET_GPR_U32(ctx, 31, 0x52D080u);
    ctx->pc = 0x52D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D078u;
            // 0x52d07c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D080u; }
        if (ctx->pc != 0x52D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D080u; }
        if (ctx->pc != 0x52D080u) { return; }
    }
    ctx->pc = 0x52D080u;
label_52d080:
    // 0x52d080: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52d084:
    // 0x52d084: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x52d084u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_52d088:
    // 0x52d088: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x52d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_52d08c:
    // 0x52d08c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x52d08cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52d090:
    // 0x52d090: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52d090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52d094:
    // 0x52d094: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x52d094u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_52d098:
    // 0x52d098: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x52d098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_52d09c:
    // 0x52d09c: 0xc07698c  jal         func_1DA630
label_52d0a0:
    if (ctx->pc == 0x52D0A0u) {
        ctx->pc = 0x52D0A0u;
            // 0x52d0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D0A4u;
        goto label_52d0a4;
    }
    ctx->pc = 0x52D09Cu;
    SET_GPR_U32(ctx, 31, 0x52D0A4u);
    ctx->pc = 0x52D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D09Cu;
            // 0x52d0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0A4u; }
        if (ctx->pc != 0x52D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0A4u; }
        if (ctx->pc != 0x52D0A4u) { return; }
    }
    ctx->pc = 0x52D0A4u;
label_52d0a4:
    // 0x52d0a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52d0a8:
    // 0x52d0a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_52d0ac:
    if (ctx->pc == 0x52D0ACu) {
        ctx->pc = 0x52D0B0u;
        goto label_52d0b0;
    }
    ctx->pc = 0x52D0A8u;
    {
        const bool branch_taken_0x52d0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x52d0a8) {
            ctx->pc = 0x52D0B8u;
            goto label_52d0b8;
        }
    }
    ctx->pc = 0x52D0B0u;
label_52d0b0:
    // 0x52d0b0: 0x10000033  b           . + 4 + (0x33 << 2)
label_52d0b4:
    if (ctx->pc == 0x52D0B4u) {
        ctx->pc = 0x52D0B4u;
            // 0x52d0b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52D0B8u;
        goto label_52d0b8;
    }
    ctx->pc = 0x52D0B0u;
    {
        const bool branch_taken_0x52d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D0B0u;
            // 0x52d0b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d0b0) {
            ctx->pc = 0x52D180u;
            goto label_52d180;
        }
    }
    ctx->pc = 0x52D0B8u;
label_52d0b8:
    // 0x52d0b8: 0xc0576f4  jal         func_15DBD0
label_52d0bc:
    if (ctx->pc == 0x52D0BCu) {
        ctx->pc = 0x52D0C0u;
        goto label_52d0c0;
    }
    ctx->pc = 0x52D0B8u;
    SET_GPR_U32(ctx, 31, 0x52D0C0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0C0u; }
        if (ctx->pc != 0x52D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0C0u; }
        if (ctx->pc != 0x52D0C0u) { return; }
    }
    ctx->pc = 0x52D0C0u;
label_52d0c0:
    // 0x52d0c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52d0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52d0c4:
    // 0x52d0c4: 0xc076984  jal         func_1DA610
label_52d0c8:
    if (ctx->pc == 0x52D0C8u) {
        ctx->pc = 0x52D0C8u;
            // 0x52d0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D0CCu;
        goto label_52d0cc;
    }
    ctx->pc = 0x52D0C4u;
    SET_GPR_U32(ctx, 31, 0x52D0CCu);
    ctx->pc = 0x52D0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D0C4u;
            // 0x52d0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0CCu; }
        if (ctx->pc != 0x52D0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D0CCu; }
        if (ctx->pc != 0x52D0CCu) { return; }
    }
    ctx->pc = 0x52D0CCu;
label_52d0cc:
    // 0x52d0cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x52d0ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d0d0:
    // 0x52d0d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x52d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52d0d4:
    // 0x52d0d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52d0d8:
    // 0x52d0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52d0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d0dc:
    // 0x52d0dc: 0xc442cf10  lwc1        $f2, -0x30F0($v0)
    ctx->pc = 0x52d0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52d0e0:
    // 0x52d0e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x52d0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52d0e4:
    // 0x52d0e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52d0e8:
    // 0x52d0e8: 0xc441cf18  lwc1        $f1, -0x30E8($v0)
    ctx->pc = 0x52d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d0ec:
    // 0x52d0ec: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x52d0ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_52d0f0:
    // 0x52d0f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52d0f4:
    // 0x52d0f4: 0xc440cf1c  lwc1        $f0, -0x30E4($v0)
    ctx->pc = 0x52d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d0f8:
    // 0x52d0f8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x52d0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_52d0fc:
    // 0x52d0fc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x52d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_52d100:
    // 0x52d100: 0x8c42cf14  lw          $v0, -0x30EC($v0)
    ctx->pc = 0x52d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
label_52d104:
    // 0x52d104: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x52d104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_52d108:
    // 0x52d108: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x52d108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_52d10c:
    // 0x52d10c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x52d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d110:
    // 0x52d110: 0xc04cca0  jal         func_133280
label_52d114:
    if (ctx->pc == 0x52D114u) {
        ctx->pc = 0x52D114u;
            // 0x52d114: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x52D118u;
        goto label_52d118;
    }
    ctx->pc = 0x52D110u;
    SET_GPR_U32(ctx, 31, 0x52D118u);
    ctx->pc = 0x52D114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D110u;
            // 0x52d114: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D118u; }
        if (ctx->pc != 0x52D118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D118u; }
        if (ctx->pc != 0x52D118u) { return; }
    }
    ctx->pc = 0x52D118u;
label_52d118:
    // 0x52d118: 0xc076980  jal         func_1DA600
label_52d11c:
    if (ctx->pc == 0x52D11Cu) {
        ctx->pc = 0x52D11Cu;
            // 0x52d11c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D120u;
        goto label_52d120;
    }
    ctx->pc = 0x52D118u;
    SET_GPR_U32(ctx, 31, 0x52D120u);
    ctx->pc = 0x52D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D118u;
            // 0x52d11c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D120u; }
        if (ctx->pc != 0x52D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D120u; }
        if (ctx->pc != 0x52D120u) { return; }
    }
    ctx->pc = 0x52D120u;
label_52d120:
    // 0x52d120: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x52d120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52d124:
    // 0x52d124: 0xc04cc34  jal         func_1330D0
label_52d128:
    if (ctx->pc == 0x52D128u) {
        ctx->pc = 0x52D128u;
            // 0x52d128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D12Cu;
        goto label_52d12c;
    }
    ctx->pc = 0x52D124u;
    SET_GPR_U32(ctx, 31, 0x52D12Cu);
    ctx->pc = 0x52D128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D124u;
            // 0x52d128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D12Cu; }
        if (ctx->pc != 0x52D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D12Cu; }
        if (ctx->pc != 0x52D12Cu) { return; }
    }
    ctx->pc = 0x52D12Cu;
label_52d12c:
    // 0x52d12c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52d130:
    // 0x52d130: 0xc461ccd0  lwc1        $f1, -0x3330($v1)
    ctx->pc = 0x52d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d134:
    // 0x52d134: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x52d134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52d138:
    // 0x52d138: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_52d13c:
    if (ctx->pc == 0x52D13Cu) {
        ctx->pc = 0x52D13Cu;
            // 0x52d13c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D140u;
        goto label_52d140;
    }
    ctx->pc = 0x52D138u;
    {
        const bool branch_taken_0x52d138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x52d138) {
            ctx->pc = 0x52D13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D138u;
            // 0x52d13c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D148u;
            goto label_52d148;
        }
    }
    ctx->pc = 0x52D140u;
label_52d140:
    // 0x52d140: 0x1000000f  b           . + 4 + (0xF << 2)
label_52d144:
    if (ctx->pc == 0x52D144u) {
        ctx->pc = 0x52D144u;
            // 0x52d144: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x52D148u;
        goto label_52d148;
    }
    ctx->pc = 0x52D140u;
    {
        const bool branch_taken_0x52d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D140u;
            // 0x52d144: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d140) {
            ctx->pc = 0x52D180u;
            goto label_52d180;
        }
    }
    ctx->pc = 0x52D148u;
label_52d148:
    // 0x52d148: 0xc07697c  jal         func_1DA5F0
label_52d14c:
    if (ctx->pc == 0x52D14Cu) {
        ctx->pc = 0x52D150u;
        goto label_52d150;
    }
    ctx->pc = 0x52D148u;
    SET_GPR_U32(ctx, 31, 0x52D150u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D150u; }
        if (ctx->pc != 0x52D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D150u; }
        if (ctx->pc != 0x52D150u) { return; }
    }
    ctx->pc = 0x52D150u;
label_52d150:
    // 0x52d150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x52d150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d154:
    // 0x52d154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x52d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_52d158:
    // 0x52d158: 0xc04cd60  jal         func_133580
label_52d15c:
    if (ctx->pc == 0x52D15Cu) {
        ctx->pc = 0x52D15Cu;
            // 0x52d15c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D160u;
        goto label_52d160;
    }
    ctx->pc = 0x52D158u;
    SET_GPR_U32(ctx, 31, 0x52D160u);
    ctx->pc = 0x52D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D158u;
            // 0x52d15c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D160u; }
        if (ctx->pc != 0x52D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D160u; }
        if (ctx->pc != 0x52D160u) { return; }
    }
    ctx->pc = 0x52D160u;
label_52d160:
    // 0x52d160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x52d160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_52d164:
    // 0x52d164: 0xc04c650  jal         func_131940
label_52d168:
    if (ctx->pc == 0x52D168u) {
        ctx->pc = 0x52D168u;
            // 0x52d168: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52D16Cu;
        goto label_52d16c;
    }
    ctx->pc = 0x52D164u;
    SET_GPR_U32(ctx, 31, 0x52D16Cu);
    ctx->pc = 0x52D168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D164u;
            // 0x52d168: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D16Cu; }
        if (ctx->pc != 0x52D16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D16Cu; }
        if (ctx->pc != 0x52D16Cu) { return; }
    }
    ctx->pc = 0x52D16Cu;
label_52d16c:
    // 0x52d16c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x52d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_52d170:
    // 0x52d170: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x52d170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_52d174:
    // 0x52d174: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x52d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_52d178:
    // 0x52d178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x52d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_52d17c:
    // 0x52d17c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x52d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52d180:
    // 0x52d180: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x52d180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_52d184:
    // 0x52d184: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_52d188:
    if (ctx->pc == 0x52D188u) {
        ctx->pc = 0x52D188u;
            // 0x52d188: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x52D18Cu;
        goto label_52d18c;
    }
    ctx->pc = 0x52D184u;
    {
        const bool branch_taken_0x52d184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D184u;
            // 0x52d188: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d184) {
            ctx->pc = 0x52D284u;
            goto label_52d284;
        }
    }
    ctx->pc = 0x52D18Cu;
label_52d18c:
    // 0x52d18c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d190:
    // 0x52d190: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52d190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52d194:
    // 0x52d194: 0x8c68e3c0  lw          $t0, -0x1C40($v1)
    ctx->pc = 0x52d194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_52d198:
    // 0x52d198: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x52d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d19c:
    // 0x52d19c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x52d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52d1a0:
    // 0x52d1a0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x52d1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_52d1a4:
    // 0x52d1a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d1a8:
    // 0x52d1a8: 0x86880  sll         $t5, $t0, 2
    ctx->pc = 0x52d1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_52d1ac:
    // 0x52d1ac: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x52d1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_52d1b0:
    // 0x52d1b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d1b4:
    // 0x52d1b4: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x52d1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_52d1b8:
    // 0x52d1b8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x52d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_52d1bc:
    // 0x52d1bc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x52d1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_52d1c0:
    // 0x52d1c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d1c4:
    // 0x52d1c4: 0x888821  addu        $s1, $a0, $t0
    ctx->pc = 0x52d1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_52d1c8:
    // 0x52d1c8: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x52d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_52d1cc:
    // 0x52d1cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x52d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_52d1d0:
    // 0x52d1d0: 0x6d4021  addu        $t0, $v1, $t5
    ctx->pc = 0x52d1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_52d1d4:
    // 0x52d1d4: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x52d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_52d1d8:
    // 0x52d1d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d1dc:
    // 0x52d1dc: 0x8cece3d8  lw          $t4, -0x1C28($a3)
    ctx->pc = 0x52d1dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_52d1e0:
    // 0x52d1e0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x52d1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_52d1e4:
    // 0x52d1e4: 0x8c6ae3b8  lw          $t2, -0x1C48($v1)
    ctx->pc = 0x52d1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_52d1e8:
    // 0x52d1e8: 0x8c8be378  lw          $t3, -0x1C88($a0)
    ctx->pc = 0x52d1e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_52d1ec:
    // 0x52d1ec: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x52d1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_52d1f0:
    // 0x52d1f0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x52d1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_52d1f4:
    // 0x52d1f4: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x52d1f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_52d1f8:
    // 0x52d1f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52d1fc:
    // 0x52d1fc: 0x16c8021  addu        $s0, $t3, $t4
    ctx->pc = 0x52d1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_52d200:
    // 0x52d200: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x52d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52d204:
    // 0x52d204: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x52d204u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
label_52d208:
    // 0x52d208: 0x8c4a0028  lw          $t2, 0x28($v0)
    ctx->pc = 0x52d208u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52d20c:
    // 0x52d20c: 0x8d29e3d8  lw          $t1, -0x1C28($t1)
    ctx->pc = 0x52d20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_52d210:
    // 0x52d210: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x52d210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_52d214:
    // 0x52d214: 0x12a3821  addu        $a3, $t1, $t2
    ctx->pc = 0x52d214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_52d218:
    // 0x52d218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x52d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_52d21c:
    // 0x52d21c: 0xad07e3d8  sw          $a3, -0x1C28($t0)
    ctx->pc = 0x52d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 7));
label_52d220:
    // 0x52d220: 0xc04cd60  jal         func_133580
label_52d224:
    if (ctx->pc == 0x52D224u) {
        ctx->pc = 0x52D224u;
            // 0x52d224: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->pc = 0x52D228u;
        goto label_52d228;
    }
    ctx->pc = 0x52D220u;
    SET_GPR_U32(ctx, 31, 0x52D228u);
    ctx->pc = 0x52D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D220u;
            // 0x52d224: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D228u; }
        if (ctx->pc != 0x52D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D228u; }
        if (ctx->pc != 0x52D228u) { return; }
    }
    ctx->pc = 0x52D228u;
label_52d228:
    // 0x52d228: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x52d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52d22c:
    // 0x52d22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d230:
    // 0x52d230: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x52d230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_52d234:
    // 0x52d234: 0xc04e4a4  jal         func_139290
label_52d238:
    if (ctx->pc == 0x52D238u) {
        ctx->pc = 0x52D238u;
            // 0x52d238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D23Cu;
        goto label_52d23c;
    }
    ctx->pc = 0x52D234u;
    SET_GPR_U32(ctx, 31, 0x52D23Cu);
    ctx->pc = 0x52D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D234u;
            // 0x52d238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D23Cu; }
        if (ctx->pc != 0x52D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D23Cu; }
        if (ctx->pc != 0x52D23Cu) { return; }
    }
    ctx->pc = 0x52D23Cu;
label_52d23c:
    // 0x52d23c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x52d23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_52d240:
    // 0x52d240: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x52d240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_52d244:
    // 0x52d244: 0x320f809  jalr        $t9
label_52d248:
    if (ctx->pc == 0x52D248u) {
        ctx->pc = 0x52D248u;
            // 0x52d248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D24Cu;
        goto label_52d24c;
    }
    ctx->pc = 0x52D244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D24Cu);
        ctx->pc = 0x52D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D244u;
            // 0x52d248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D24Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D24Cu; }
            if (ctx->pc != 0x52D24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52D24Cu;
label_52d24c:
    // 0x52d24c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x52d24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52d250:
    // 0x52d250: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x52d250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_52d254:
    // 0x52d254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52d258:
    // 0x52d258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52d258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d25c:
    // 0x52d25c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x52d25cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d260:
    // 0x52d260: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x52d260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52d264:
    // 0x52d264: 0xc04cfcc  jal         func_133F30
label_52d268:
    if (ctx->pc == 0x52D268u) {
        ctx->pc = 0x52D268u;
            // 0x52d268: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x52D26Cu;
        goto label_52d26c;
    }
    ctx->pc = 0x52D264u;
    SET_GPR_U32(ctx, 31, 0x52D26Cu);
    ctx->pc = 0x52D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D264u;
            // 0x52d268: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D26Cu; }
        if (ctx->pc != 0x52D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D26Cu; }
        if (ctx->pc != 0x52D26Cu) { return; }
    }
    ctx->pc = 0x52D26Cu;
label_52d26c:
    // 0x52d26c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x52d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_52d270:
    // 0x52d270: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x52d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_52d274:
    // 0x52d274: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x52d274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52d278:
    // 0x52d278: 0xc44cccd0  lwc1        $f12, -0x3330($v0)
    ctx->pc = 0x52d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52d27c:
    // 0x52d27c: 0xc0e325c  jal         func_38C970
label_52d280:
    if (ctx->pc == 0x52D280u) {
        ctx->pc = 0x52D280u;
            // 0x52d280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D284u;
        goto label_52d284;
    }
    ctx->pc = 0x52D27Cu;
    SET_GPR_U32(ctx, 31, 0x52D284u);
    ctx->pc = 0x52D280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D27Cu;
            // 0x52d280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C970u;
    if (runtime->hasFunction(0x38C970u)) {
        auto targetFn = runtime->lookupFunction(0x38C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D284u; }
        if (ctx->pc != 0x52D284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C970_0x38c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D284u; }
        if (ctx->pc != 0x52D284u) { return; }
    }
    ctx->pc = 0x52D284u;
label_52d284:
    // 0x52d284: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x52d284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_52d288:
    // 0x52d288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52d288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52d28c:
    // 0x52d28c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52d28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52d290:
    // 0x52d290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52d290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52d294:
    // 0x52d294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52d294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52d298:
    // 0x52d298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52d298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52d29c:
    // 0x52d29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52d29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52d2a0:
    // 0x52d2a0: 0x3e00008  jr          $ra
label_52d2a4:
    if (ctx->pc == 0x52D2A4u) {
        ctx->pc = 0x52D2A4u;
            // 0x52d2a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x52D2A8u;
        goto label_52d2a8;
    }
    ctx->pc = 0x52D2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D2A0u;
            // 0x52d2a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D2A8u;
label_52d2a8:
    // 0x52d2a8: 0x0  nop
    ctx->pc = 0x52d2a8u;
    // NOP
label_52d2ac:
    // 0x52d2ac: 0x0  nop
    ctx->pc = 0x52d2acu;
    // NOP
label_52d2b0:
    // 0x52d2b0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x52d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_52d2b4:
    // 0x52d2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d2b8:
    // 0x52d2b8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_52d2bc:
    if (ctx->pc == 0x52D2BCu) {
        ctx->pc = 0x52D2C0u;
        goto label_52d2c0;
    }
    ctx->pc = 0x52D2B8u;
    {
        const bool branch_taken_0x52d2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52d2b8) {
            ctx->pc = 0x52D334u;
            goto label_52d334;
        }
    }
    ctx->pc = 0x52D2C0u;
label_52d2c0:
    // 0x52d2c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_52d2c4:
    if (ctx->pc == 0x52D2C4u) {
        ctx->pc = 0x52D2C8u;
        goto label_52d2c8;
    }
    ctx->pc = 0x52D2C0u;
    {
        const bool branch_taken_0x52d2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d2c0) {
            ctx->pc = 0x52D2D0u;
            goto label_52d2d0;
        }
    }
    ctx->pc = 0x52D2C8u;
label_52d2c8:
    // 0x52d2c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_52d2cc:
    if (ctx->pc == 0x52D2CCu) {
        ctx->pc = 0x52D2D0u;
        goto label_52d2d0;
    }
    ctx->pc = 0x52D2C8u;
    {
        const bool branch_taken_0x52d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d2c8) {
            ctx->pc = 0x52D334u;
            goto label_52d334;
        }
    }
    ctx->pc = 0x52D2D0u;
label_52d2d0:
    // 0x52d2d0: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x52d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_52d2d4:
    // 0x52d2d4: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x52d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_52d2d8:
    // 0x52d2d8: 0x8c63b608  lw          $v1, -0x49F8($v1)
    ctx->pc = 0x52d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948360)));
label_52d2dc:
    // 0x52d2dc: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x52d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_52d2e0:
    // 0x52d2e0: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x52d2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_52d2e4:
    // 0x52d2e4: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x52d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_52d2e8:
    // 0x52d2e8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x52d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_52d2ec:
    // 0x52d2ec: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x52d2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52d2f0:
    // 0x52d2f0: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x52d2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_52d2f4:
    // 0x52d2f4: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x52d2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_52d2f8:
    // 0x52d2f8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x52d2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_52d2fc:
    // 0x52d2fc: 0x8c65cf00  lw          $a1, -0x3100($v1)
    ctx->pc = 0x52d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954752)));
label_52d300:
    // 0x52d300: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x52d300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_52d304:
    // 0x52d304: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x52d304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_52d308:
    // 0x52d308: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x52d308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_52d30c:
    // 0x52d30c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x52d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_52d310:
    // 0x52d310: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x52d310u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_52d314:
    // 0x52d314: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x52d314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_52d318:
    // 0x52d318: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x52d318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_52d31c:
    // 0x52d31c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x52d31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_52d320:
    // 0x52d320: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x52d320u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_52d324:
    // 0x52d324: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_52d328:
    if (ctx->pc == 0x52D328u) {
        ctx->pc = 0x52D328u;
            // 0x52d328: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x52D32Cu;
        goto label_52d32c;
    }
    ctx->pc = 0x52D324u;
    {
        const bool branch_taken_0x52d324 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x52D328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D324u;
            // 0x52d328: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d324) {
            ctx->pc = 0x52D2F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52d2f4;
        }
    }
    ctx->pc = 0x52D32Cu;
label_52d32c:
    // 0x52d32c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x52d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d330:
    // 0x52d330: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x52d330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_52d334:
    // 0x52d334: 0x3e00008  jr          $ra
label_52d338:
    if (ctx->pc == 0x52D338u) {
        ctx->pc = 0x52D33Cu;
        goto label_52d33c;
    }
    ctx->pc = 0x52D334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D33Cu;
label_52d33c:
    // 0x52d33c: 0x0  nop
    ctx->pc = 0x52d33cu;
    // NOP
label_52d340:
    // 0x52d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52d344:
    // 0x52d344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52d348:
    // 0x52d348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52d34c:
    // 0x52d34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52d350:
    // 0x52d350: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x52d350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_52d354:
    // 0x52d354: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_52d358:
    if (ctx->pc == 0x52D358u) {
        ctx->pc = 0x52D358u;
            // 0x52d358: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D35Cu;
        goto label_52d35c;
    }
    ctx->pc = 0x52D354u;
    {
        const bool branch_taken_0x52d354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D354u;
            // 0x52d358: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d354) {
            ctx->pc = 0x52D38Cu;
            goto label_52d38c;
        }
    }
    ctx->pc = 0x52D35Cu;
label_52d35c:
    // 0x52d35c: 0xc04008c  jal         func_100230
label_52d360:
    if (ctx->pc == 0x52D360u) {
        ctx->pc = 0x52D360u;
            // 0x52d360: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52D364u;
        goto label_52d364;
    }
    ctx->pc = 0x52D35Cu;
    SET_GPR_U32(ctx, 31, 0x52D364u);
    ctx->pc = 0x52D360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D35Cu;
            // 0x52d360: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D364u; }
        if (ctx->pc != 0x52D364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D364u; }
        if (ctx->pc != 0x52D364u) { return; }
    }
    ctx->pc = 0x52D364u;
label_52d364:
    // 0x52d364: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x52d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_52d368:
    // 0x52d368: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x52d368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52d36c:
    // 0x52d36c: 0xc0407c0  jal         func_101F00
label_52d370:
    if (ctx->pc == 0x52D370u) {
        ctx->pc = 0x52D370u;
            // 0x52d370: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x52D374u;
        goto label_52d374;
    }
    ctx->pc = 0x52D36Cu;
    SET_GPR_U32(ctx, 31, 0x52D374u);
    ctx->pc = 0x52D370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D36Cu;
            // 0x52d370: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D374u; }
        if (ctx->pc != 0x52D374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D374u; }
        if (ctx->pc != 0x52D374u) { return; }
    }
    ctx->pc = 0x52D374u;
label_52d374:
    // 0x52d374: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x52d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_52d378:
    // 0x52d378: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x52d378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52d37c:
    // 0x52d37c: 0xc0407c0  jal         func_101F00
label_52d380:
    if (ctx->pc == 0x52D380u) {
        ctx->pc = 0x52D380u;
            // 0x52d380: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x52D384u;
        goto label_52d384;
    }
    ctx->pc = 0x52D37Cu;
    SET_GPR_U32(ctx, 31, 0x52D384u);
    ctx->pc = 0x52D380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D37Cu;
            // 0x52d380: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D384u; }
        if (ctx->pc != 0x52D384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D384u; }
        if (ctx->pc != 0x52D384u) { return; }
    }
    ctx->pc = 0x52D384u;
label_52d384:
    // 0x52d384: 0xc0400a8  jal         func_1002A0
label_52d388:
    if (ctx->pc == 0x52D388u) {
        ctx->pc = 0x52D388u;
            // 0x52d388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D38Cu;
        goto label_52d38c;
    }
    ctx->pc = 0x52D384u;
    SET_GPR_U32(ctx, 31, 0x52D38Cu);
    ctx->pc = 0x52D388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D384u;
            // 0x52d388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D38Cu; }
        if (ctx->pc != 0x52D38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D38Cu; }
        if (ctx->pc != 0x52D38Cu) { return; }
    }
    ctx->pc = 0x52D38Cu;
label_52d38c:
    // 0x52d38c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x52d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_52d390:
    // 0x52d390: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x52d390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_52d394:
    // 0x52d394: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52d398:
    if (ctx->pc == 0x52D398u) {
        ctx->pc = 0x52D398u;
            // 0x52d398: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x52D39Cu;
        goto label_52d39c;
    }
    ctx->pc = 0x52D394u;
    {
        const bool branch_taken_0x52d394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d394) {
            ctx->pc = 0x52D398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D394u;
            // 0x52d398: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D3B0u;
            goto label_52d3b0;
        }
    }
    ctx->pc = 0x52D39Cu;
label_52d39c:
    // 0x52d39c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x52d39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_52d3a0:
    // 0x52d3a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52d3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52d3a4:
    // 0x52d3a4: 0x320f809  jalr        $t9
label_52d3a8:
    if (ctx->pc == 0x52D3A8u) {
        ctx->pc = 0x52D3A8u;
            // 0x52d3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52D3ACu;
        goto label_52d3ac;
    }
    ctx->pc = 0x52D3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D3ACu);
        ctx->pc = 0x52D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D3A4u;
            // 0x52d3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D3ACu; }
            if (ctx->pc != 0x52D3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x52D3ACu;
label_52d3ac:
    // 0x52d3ac: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x52d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_52d3b0:
    // 0x52d3b0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x52d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d3b4:
    // 0x52d3b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52d3b8:
    if (ctx->pc == 0x52D3B8u) {
        ctx->pc = 0x52D3B8u;
            // 0x52d3b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x52D3BCu;
        goto label_52d3bc;
    }
    ctx->pc = 0x52D3B4u;
    {
        const bool branch_taken_0x52d3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d3b4) {
            ctx->pc = 0x52D3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D3B4u;
            // 0x52d3b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D3D0u;
            goto label_52d3d0;
        }
    }
    ctx->pc = 0x52D3BCu;
label_52d3bc:
    // 0x52d3bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52d3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52d3c0:
    // 0x52d3c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52d3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52d3c4:
    // 0x52d3c4: 0x320f809  jalr        $t9
label_52d3c8:
    if (ctx->pc == 0x52D3C8u) {
        ctx->pc = 0x52D3C8u;
            // 0x52d3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52D3CCu;
        goto label_52d3cc;
    }
    ctx->pc = 0x52D3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D3CCu);
        ctx->pc = 0x52D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D3C4u;
            // 0x52d3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D3CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D3CCu; }
            if (ctx->pc != 0x52D3CCu) { return; }
        }
        }
    }
    ctx->pc = 0x52D3CCu;
label_52d3cc:
    // 0x52d3cc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x52d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_52d3d0:
    // 0x52d3d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52d3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52d3d4:
    // 0x52d3d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52d3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52d3d8:
    // 0x52d3d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52d3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52d3dc:
    // 0x52d3dc: 0x3e00008  jr          $ra
label_52d3e0:
    if (ctx->pc == 0x52D3E0u) {
        ctx->pc = 0x52D3E0u;
            // 0x52d3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52D3E4u;
        goto label_52d3e4;
    }
    ctx->pc = 0x52D3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D3DCu;
            // 0x52d3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D3E4u;
label_52d3e4:
    // 0x52d3e4: 0x0  nop
    ctx->pc = 0x52d3e4u;
    // NOP
label_52d3e8:
    // 0x52d3e8: 0x0  nop
    ctx->pc = 0x52d3e8u;
    // NOP
label_52d3ec:
    // 0x52d3ec: 0x0  nop
    ctx->pc = 0x52d3ecu;
    // NOP
label_52d3f0:
    // 0x52d3f0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x52d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_52d3f4:
    // 0x52d3f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52d3f8:
    // 0x52d3f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52d3fc:
    // 0x52d3fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52d400:
    // 0x52d400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52d404:
    // 0x52d404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52d408:
    // 0x52d408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52d408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52d40c:
    // 0x52d40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52d40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52d410:
    // 0x52d410: 0xc0892d0  jal         func_224B40
label_52d414:
    if (ctx->pc == 0x52D414u) {
        ctx->pc = 0x52D414u;
            // 0x52d414: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x52D418u;
        goto label_52d418;
    }
    ctx->pc = 0x52D410u;
    SET_GPR_U32(ctx, 31, 0x52D418u);
    ctx->pc = 0x52D414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D410u;
            // 0x52d414: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D418u; }
        if (ctx->pc != 0x52D418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D418u; }
        if (ctx->pc != 0x52D418u) { return; }
    }
    ctx->pc = 0x52D418u;
label_52d418:
    // 0x52d418: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x52d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d41c:
    // 0x52d41c: 0x54600125  bnel        $v1, $zero, . + 4 + (0x125 << 2)
label_52d420:
    if (ctx->pc == 0x52D420u) {
        ctx->pc = 0x52D420u;
            // 0x52d420: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x52D424u;
        goto label_52d424;
    }
    ctx->pc = 0x52D41Cu;
    {
        const bool branch_taken_0x52d41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x52d41c) {
            ctx->pc = 0x52D420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D41Cu;
            // 0x52d420: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D8B4u;
            goto label_52d8b4;
        }
    }
    ctx->pc = 0x52D424u;
label_52d424:
    // 0x52d424: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x52d424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_52d428:
    // 0x52d428: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x52d428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_52d42c:
    // 0x52d42c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52d430:
    // 0x52d430: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x52d430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_52d434:
    // 0x52d434: 0x24a5cce0  addiu       $a1, $a1, -0x3320
    ctx->pc = 0x52d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
label_52d438:
    // 0x52d438: 0x2463cce4  addiu       $v1, $v1, -0x331C
    ctx->pc = 0x52d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954212));
label_52d43c:
    // 0x52d43c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x52d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_52d440:
    // 0x52d440: 0x2442cce8  addiu       $v0, $v0, -0x3318
    ctx->pc = 0x52d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954216));
label_52d444:
    // 0x52d444: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x52d444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_52d448:
    // 0x52d448: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x52d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_52d44c:
    // 0x52d44c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x52d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_52d450:
    // 0x52d450: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x52d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52d454:
    // 0x52d454: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x52d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_52d458:
    // 0x52d458: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x52d458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_52d45c:
    // 0x52d45c: 0xc04cbd8  jal         func_132F60
label_52d460:
    if (ctx->pc == 0x52D460u) {
        ctx->pc = 0x52D460u;
            // 0x52d460: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x52D464u;
        goto label_52d464;
    }
    ctx->pc = 0x52D45Cu;
    SET_GPR_U32(ctx, 31, 0x52D464u);
    ctx->pc = 0x52D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D45Cu;
            // 0x52d460: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D464u; }
        if (ctx->pc != 0x52D464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D464u; }
        if (ctx->pc != 0x52D464u) { return; }
    }
    ctx->pc = 0x52D464u;
label_52d464:
    // 0x52d464: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x52d464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52d468:
    // 0x52d468: 0xc04f278  jal         func_13C9E0
label_52d46c:
    if (ctx->pc == 0x52D46Cu) {
        ctx->pc = 0x52D46Cu;
            // 0x52d46c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x52D470u;
        goto label_52d470;
    }
    ctx->pc = 0x52D468u;
    SET_GPR_U32(ctx, 31, 0x52D470u);
    ctx->pc = 0x52D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D468u;
            // 0x52d46c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D470u; }
        if (ctx->pc != 0x52D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D470u; }
        if (ctx->pc != 0x52D470u) { return; }
    }
    ctx->pc = 0x52D470u;
label_52d470:
    // 0x52d470: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52d474:
    // 0x52d474: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x52d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52d478:
    // 0x52d478: 0xc04cca0  jal         func_133280
label_52d47c:
    if (ctx->pc == 0x52D47Cu) {
        ctx->pc = 0x52D47Cu;
            // 0x52d47c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D480u;
        goto label_52d480;
    }
    ctx->pc = 0x52D478u;
    SET_GPR_U32(ctx, 31, 0x52D480u);
    ctx->pc = 0x52D47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D478u;
            // 0x52d47c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D480u; }
        if (ctx->pc != 0x52D480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D480u; }
        if (ctx->pc != 0x52D480u) { return; }
    }
    ctx->pc = 0x52D480u;
label_52d480:
    // 0x52d480: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x52d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_52d484:
    // 0x52d484: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x52d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_52d488:
    // 0x52d488: 0xc04cbe0  jal         func_132F80
label_52d48c:
    if (ctx->pc == 0x52D48Cu) {
        ctx->pc = 0x52D48Cu;
            // 0x52d48c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D490u;
        goto label_52d490;
    }
    ctx->pc = 0x52D488u;
    SET_GPR_U32(ctx, 31, 0x52D490u);
    ctx->pc = 0x52D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D488u;
            // 0x52d48c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D490u; }
        if (ctx->pc != 0x52D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D490u; }
        if (ctx->pc != 0x52D490u) { return; }
    }
    ctx->pc = 0x52D490u;
label_52d490:
    // 0x52d490: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x52d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52d494:
    // 0x52d494: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x52d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52d498:
    // 0x52d498: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x52d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d49c:
    // 0x52d49c: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x52d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d4a0:
    // 0x52d4a0: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x52d4a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_52d4a4:
    // 0x52d4a4: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x52d4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_52d4a8:
    // 0x52d4a8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x52d4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_52d4ac:
    // 0x52d4ac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x52d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_52d4b0:
    // 0x52d4b0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x52d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_52d4b4:
    // 0x52d4b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_52d4b8:
    if (ctx->pc == 0x52D4B8u) {
        ctx->pc = 0x52D4B8u;
            // 0x52d4b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x52D4BCu;
        goto label_52d4bc;
    }
    ctx->pc = 0x52D4B4u;
    {
        const bool branch_taken_0x52d4b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x52d4b4) {
            ctx->pc = 0x52D4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D4B4u;
            // 0x52d4b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D4C8u;
            goto label_52d4c8;
        }
    }
    ctx->pc = 0x52D4BCu;
label_52d4bc:
    // 0x52d4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52d4c0:
    // 0x52d4c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_52d4c4:
    if (ctx->pc == 0x52D4C4u) {
        ctx->pc = 0x52D4C4u;
            // 0x52d4c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x52D4C8u;
        goto label_52d4c8;
    }
    ctx->pc = 0x52D4C0u;
    {
        const bool branch_taken_0x52d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D4C0u;
            // 0x52d4c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d4c0) {
            ctx->pc = 0x52D4E0u;
            goto label_52d4e0;
        }
    }
    ctx->pc = 0x52D4C8u;
label_52d4c8:
    // 0x52d4c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x52d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_52d4cc:
    // 0x52d4cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52d4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_52d4d0:
    // 0x52d4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52d4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52d4d4:
    // 0x52d4d4: 0x0  nop
    ctx->pc = 0x52d4d4u;
    // NOP
label_52d4d8:
    // 0x52d4d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x52d4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_52d4dc:
    // 0x52d4dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x52d4dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_52d4e0:
    // 0x52d4e0: 0x3c03c2b4  lui         $v1, 0xC2B4
    ctx->pc = 0x52d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49844 << 16));
label_52d4e4:
    // 0x52d4e4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x52d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_52d4e8:
    // 0x52d4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52d4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52d4ec:
    // 0x52d4ec: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x52d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_52d4f0:
    // 0x52d4f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x52d4f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_52d4f4:
    // 0x52d4f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x52d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52d4f8:
    // 0x52d4f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52d4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52d4fc:
    // 0x52d4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52d4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52d500:
    // 0x52d500: 0x0  nop
    ctx->pc = 0x52d500u;
    // NOP
label_52d504:
    // 0x52d504: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x52d504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_52d508:
    // 0x52d508: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x52d508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_52d50c:
    // 0x52d50c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x52d50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_52d510:
    // 0x52d510: 0xc04ca18  jal         func_132860
label_52d514:
    if (ctx->pc == 0x52D514u) {
        ctx->pc = 0x52D514u;
            // 0x52d514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D518u;
        goto label_52d518;
    }
    ctx->pc = 0x52D510u;
    SET_GPR_U32(ctx, 31, 0x52D518u);
    ctx->pc = 0x52D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D510u;
            // 0x52d514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D518u; }
        if (ctx->pc != 0x52D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D518u; }
        if (ctx->pc != 0x52D518u) { return; }
    }
    ctx->pc = 0x52D518u;
label_52d518:
    // 0x52d518: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x52d518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52d51c:
    // 0x52d51c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x52d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_52d520:
    // 0x52d520: 0xc04c72c  jal         func_131CB0
label_52d524:
    if (ctx->pc == 0x52D524u) {
        ctx->pc = 0x52D524u;
            // 0x52d524: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D528u;
        goto label_52d528;
    }
    ctx->pc = 0x52D520u;
    SET_GPR_U32(ctx, 31, 0x52D528u);
    ctx->pc = 0x52D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D520u;
            // 0x52d524: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D528u; }
        if (ctx->pc != 0x52D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D528u; }
        if (ctx->pc != 0x52D528u) { return; }
    }
    ctx->pc = 0x52D528u;
label_52d528:
    // 0x52d528: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52d52c:
    // 0x52d52c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x52d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_52d530:
    // 0x52d530: 0x8c42b608  lw          $v0, -0x49F8($v0)
    ctx->pc = 0x52d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948360)));
label_52d534:
    // 0x52d534: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x52d534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_52d538:
    // 0x52d538: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x52d538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_52d53c:
    // 0x52d53c: 0xc0b6e68  jal         func_2DB9A0
label_52d540:
    if (ctx->pc == 0x52D540u) {
        ctx->pc = 0x52D540u;
            // 0x52d540: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x52D544u;
        goto label_52d544;
    }
    ctx->pc = 0x52D53Cu;
    SET_GPR_U32(ctx, 31, 0x52D544u);
    ctx->pc = 0x52D540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D53Cu;
            // 0x52d540: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D544u; }
        if (ctx->pc != 0x52D544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D544u; }
        if (ctx->pc != 0x52D544u) { return; }
    }
    ctx->pc = 0x52D544u;
label_52d544:
    // 0x52d544: 0xc0b6dac  jal         func_2DB6B0
label_52d548:
    if (ctx->pc == 0x52D548u) {
        ctx->pc = 0x52D548u;
            // 0x52d548: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52D54Cu;
        goto label_52d54c;
    }
    ctx->pc = 0x52D544u;
    SET_GPR_U32(ctx, 31, 0x52D54Cu);
    ctx->pc = 0x52D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D544u;
            // 0x52d548: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D54Cu; }
        if (ctx->pc != 0x52D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D54Cu; }
        if (ctx->pc != 0x52D54Cu) { return; }
    }
    ctx->pc = 0x52D54Cu;
label_52d54c:
    // 0x52d54c: 0xc0cac94  jal         func_32B250
label_52d550:
    if (ctx->pc == 0x52D550u) {
        ctx->pc = 0x52D550u;
            // 0x52d550: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52D554u;
        goto label_52d554;
    }
    ctx->pc = 0x52D54Cu;
    SET_GPR_U32(ctx, 31, 0x52D554u);
    ctx->pc = 0x52D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D54Cu;
            // 0x52d550: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D554u; }
        if (ctx->pc != 0x52D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D554u; }
        if (ctx->pc != 0x52D554u) { return; }
    }
    ctx->pc = 0x52D554u;
label_52d554:
    // 0x52d554: 0xc0cac84  jal         func_32B210
label_52d558:
    if (ctx->pc == 0x52D558u) {
        ctx->pc = 0x52D558u;
            // 0x52d558: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x52D55Cu;
        goto label_52d55c;
    }
    ctx->pc = 0x52D554u;
    SET_GPR_U32(ctx, 31, 0x52D55Cu);
    ctx->pc = 0x52D558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D554u;
            // 0x52d558: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D55Cu; }
        if (ctx->pc != 0x52D55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D55Cu; }
        if (ctx->pc != 0x52D55Cu) { return; }
    }
    ctx->pc = 0x52D55Cu;
label_52d55c:
    // 0x52d55c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x52d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_52d560:
    // 0x52d560: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x52d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_52d564:
    // 0x52d564: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x52d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_52d568:
    // 0x52d568: 0xc0a5a68  jal         func_2969A0
label_52d56c:
    if (ctx->pc == 0x52D56Cu) {
        ctx->pc = 0x52D56Cu;
            // 0x52d56c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52D570u;
        goto label_52d570;
    }
    ctx->pc = 0x52D568u;
    SET_GPR_U32(ctx, 31, 0x52D570u);
    ctx->pc = 0x52D56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D568u;
            // 0x52d56c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D570u; }
        if (ctx->pc != 0x52D570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D570u; }
        if (ctx->pc != 0x52D570u) { return; }
    }
    ctx->pc = 0x52D570u;
label_52d570:
    // 0x52d570: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x52d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_52d574:
    // 0x52d574: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x52d574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_52d578:
    // 0x52d578: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x52d578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_52d57c:
    // 0x52d57c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x52d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d580:
    // 0x52d580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d584:
    // 0x52d584: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x52d584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_52d588:
    // 0x52d588: 0xa3a201d0  sb          $v0, 0x1D0($sp)
    ctx->pc = 0x52d588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 2));
label_52d58c:
    // 0x52d58c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x52d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d590:
    // 0x52d590: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x52d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_52d594:
    // 0x52d594: 0xafb00124  sw          $s0, 0x124($sp)
    ctx->pc = 0x52d594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 16));
label_52d598:
    // 0x52d598: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x52d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_52d59c:
    // 0x52d59c: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x52d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_52d5a0:
    // 0x52d5a0: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x52d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_52d5a4:
    // 0x52d5a4: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x52d5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_52d5a8:
    // 0x52d5a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x52d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52d5ac:
    // 0x52d5ac: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x52d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_52d5b0:
    // 0x52d5b0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x52d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_52d5b4:
    // 0x52d5b4: 0xa3a201d2  sb          $v0, 0x1D2($sp)
    ctx->pc = 0x52d5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 466), (uint8_t)GPR_U32(ctx, 2));
label_52d5b8:
    // 0x52d5b8: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x52d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52d5bc:
    // 0x52d5bc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52d5c0:
    // 0x52d5c0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x52d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d5c4:
    // 0x52d5c4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x52d5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_52d5c8:
    // 0x52d5c8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x52d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d5cc:
    // 0x52d5cc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x52d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_52d5d0:
    // 0x52d5d0: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x52d5d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_52d5d4:
    // 0x52d5d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52d5d8:
    // 0x52d5d8: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x52d5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_52d5dc:
    // 0x52d5dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52d5e0:
    // 0x52d5e0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x52d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_52d5e4:
    // 0x52d5e4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x52d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52d5e8:
    // 0x52d5e8: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x52d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_52d5ec:
    // 0x52d5ec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x52d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d5f0:
    // 0x52d5f0: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x52d5f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_52d5f4:
    // 0x52d5f4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x52d5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_52d5f8:
    // 0x52d5f8: 0xc0a7a88  jal         func_29EA20
label_52d5fc:
    if (ctx->pc == 0x52D5FCu) {
        ctx->pc = 0x52D5FCu;
            // 0x52d5fc: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->pc = 0x52D600u;
        goto label_52d600;
    }
    ctx->pc = 0x52D5F8u;
    SET_GPR_U32(ctx, 31, 0x52D600u);
    ctx->pc = 0x52D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D5F8u;
            // 0x52d5fc: 0xe7a001b0  swc1        $f0, 0x1B0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D600u; }
        if (ctx->pc != 0x52D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D600u; }
        if (ctx->pc != 0x52D600u) { return; }
    }
    ctx->pc = 0x52D600u;
label_52d600:
    // 0x52d600: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x52d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_52d604:
    // 0x52d604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52d604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d608:
    // 0x52d608: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_52d60c:
    if (ctx->pc == 0x52D60Cu) {
        ctx->pc = 0x52D60Cu;
            // 0x52d60c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52D610u;
        goto label_52d610;
    }
    ctx->pc = 0x52D608u;
    {
        const bool branch_taken_0x52d608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D608u;
            // 0x52d60c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d608) {
            ctx->pc = 0x52D658u;
            goto label_52d658;
        }
    }
    ctx->pc = 0x52D610u;
label_52d610:
    // 0x52d610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d614:
    // 0x52d614: 0xc088ef4  jal         func_223BD0
label_52d618:
    if (ctx->pc == 0x52D618u) {
        ctx->pc = 0x52D618u;
            // 0x52d618: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x52D61Cu;
        goto label_52d61c;
    }
    ctx->pc = 0x52D614u;
    SET_GPR_U32(ctx, 31, 0x52D61Cu);
    ctx->pc = 0x52D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D614u;
            // 0x52d618: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D61Cu; }
        if (ctx->pc != 0x52D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D61Cu; }
        if (ctx->pc != 0x52D61Cu) { return; }
    }
    ctx->pc = 0x52D61Cu;
label_52d61c:
    // 0x52d61c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52d620:
    // 0x52d620: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52d620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52d624:
    // 0x52d624: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x52d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_52d628:
    // 0x52d628: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x52d628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_52d62c:
    // 0x52d62c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52d630:
    // 0x52d630: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x52d630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_52d634:
    // 0x52d634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52d638:
    // 0x52d638: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52d638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52d63c:
    // 0x52d63c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x52d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_52d640:
    // 0x52d640: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x52d640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_52d644:
    // 0x52d644: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x52d644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_52d648:
    // 0x52d648: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52d64c:
    // 0x52d64c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x52d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_52d650:
    // 0x52d650: 0xc088b38  jal         func_222CE0
label_52d654:
    if (ctx->pc == 0x52D654u) {
        ctx->pc = 0x52D654u;
            // 0x52d654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D658u;
        goto label_52d658;
    }
    ctx->pc = 0x52D650u;
    SET_GPR_U32(ctx, 31, 0x52D658u);
    ctx->pc = 0x52D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D650u;
            // 0x52d654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D658u; }
        if (ctx->pc != 0x52D658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D658u; }
        if (ctx->pc != 0x52D658u) { return; }
    }
    ctx->pc = 0x52D658u;
label_52d658:
    // 0x52d658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d65c:
    // 0x52d65c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52d660:
    // 0x52d660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d664:
    // 0x52d664: 0xc08914c  jal         func_224530
label_52d668:
    if (ctx->pc == 0x52D668u) {
        ctx->pc = 0x52D668u;
            // 0x52d668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D66Cu;
        goto label_52d66c;
    }
    ctx->pc = 0x52D664u;
    SET_GPR_U32(ctx, 31, 0x52D66Cu);
    ctx->pc = 0x52D668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D664u;
            // 0x52d668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D66Cu; }
        if (ctx->pc != 0x52D66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D66Cu; }
        if (ctx->pc != 0x52D66Cu) { return; }
    }
    ctx->pc = 0x52D66Cu;
label_52d66c:
    // 0x52d66c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x52d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_52d670:
    // 0x52d670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52d674:
    // 0x52d674: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x52d674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
label_52d678:
    // 0x52d678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52d678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d67c:
    // 0x52d67c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x52d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_52d680:
    // 0x52d680: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52d684:
    // 0x52d684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52d684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52d688:
    // 0x52d688: 0xc08c164  jal         func_230590
label_52d68c:
    if (ctx->pc == 0x52D68Cu) {
        ctx->pc = 0x52D68Cu;
            // 0x52d68c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52D690u;
        goto label_52d690;
    }
    ctx->pc = 0x52D688u;
    SET_GPR_U32(ctx, 31, 0x52D690u);
    ctx->pc = 0x52D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D688u;
            // 0x52d68c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D690u; }
        if (ctx->pc != 0x52D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D690u; }
        if (ctx->pc != 0x52D690u) { return; }
    }
    ctx->pc = 0x52D690u;
label_52d690:
    // 0x52d690: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x52d690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_52d694:
    // 0x52d694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52d694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52d698:
    // 0x52d698: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52d698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_52d69c:
    // 0x52d69c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x52d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_52d6a0:
    // 0x52d6a0: 0xc0a7a88  jal         func_29EA20
label_52d6a4:
    if (ctx->pc == 0x52D6A4u) {
        ctx->pc = 0x52D6A4u;
            // 0x52d6a4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x52D6A8u;
        goto label_52d6a8;
    }
    ctx->pc = 0x52D6A0u;
    SET_GPR_U32(ctx, 31, 0x52D6A8u);
    ctx->pc = 0x52D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6A0u;
            // 0x52d6a4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6A8u; }
        if (ctx->pc != 0x52D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6A8u; }
        if (ctx->pc != 0x52D6A8u) { return; }
    }
    ctx->pc = 0x52D6A8u;
label_52d6a8:
    // 0x52d6a8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x52d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_52d6ac:
    // 0x52d6ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52d6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d6b0:
    // 0x52d6b0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_52d6b4:
    if (ctx->pc == 0x52D6B4u) {
        ctx->pc = 0x52D6B4u;
            // 0x52d6b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x52D6B8u;
        goto label_52d6b8;
    }
    ctx->pc = 0x52D6B0u;
    {
        const bool branch_taken_0x52d6b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x52D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6B0u;
            // 0x52d6b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d6b0) {
            ctx->pc = 0x52D6D4u;
            goto label_52d6d4;
        }
    }
    ctx->pc = 0x52D6B8u;
label_52d6b8:
    // 0x52d6b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x52d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52d6bc:
    // 0x52d6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d6c0:
    // 0x52d6c0: 0xc0869d0  jal         func_21A740
label_52d6c4:
    if (ctx->pc == 0x52D6C4u) {
        ctx->pc = 0x52D6C4u;
            // 0x52d6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D6C8u;
        goto label_52d6c8;
    }
    ctx->pc = 0x52D6C0u;
    SET_GPR_U32(ctx, 31, 0x52D6C8u);
    ctx->pc = 0x52D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6C0u;
            // 0x52d6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6C8u; }
        if (ctx->pc != 0x52D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6C8u; }
        if (ctx->pc != 0x52D6C8u) { return; }
    }
    ctx->pc = 0x52D6C8u;
label_52d6c8:
    // 0x52d6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52d6cc:
    // 0x52d6cc: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x52d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_52d6d0:
    // 0x52d6d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x52d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_52d6d4:
    // 0x52d6d4: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x52d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_52d6d8:
    // 0x52d6d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52d6dc:
    // 0x52d6dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_52d6e0:
    // 0x52d6e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52d6e4:
    // 0x52d6e4: 0xc08c650  jal         func_231940
label_52d6e8:
    if (ctx->pc == 0x52D6E8u) {
        ctx->pc = 0x52D6E8u;
            // 0x52d6e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D6ECu;
        goto label_52d6ec;
    }
    ctx->pc = 0x52D6E4u;
    SET_GPR_U32(ctx, 31, 0x52D6ECu);
    ctx->pc = 0x52D6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6E4u;
            // 0x52d6e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6ECu; }
        if (ctx->pc != 0x52D6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6ECu; }
        if (ctx->pc != 0x52D6ECu) { return; }
    }
    ctx->pc = 0x52D6ECu;
label_52d6ec:
    // 0x52d6ec: 0xc040180  jal         func_100600
label_52d6f0:
    if (ctx->pc == 0x52D6F0u) {
        ctx->pc = 0x52D6F0u;
            // 0x52d6f0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x52D6F4u;
        goto label_52d6f4;
    }
    ctx->pc = 0x52D6ECu;
    SET_GPR_U32(ctx, 31, 0x52D6F4u);
    ctx->pc = 0x52D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6ECu;
            // 0x52d6f0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6F4u; }
        if (ctx->pc != 0x52D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D6F4u; }
        if (ctx->pc != 0x52D6F4u) { return; }
    }
    ctx->pc = 0x52D6F4u;
label_52d6f4:
    // 0x52d6f4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_52d6f8:
    if (ctx->pc == 0x52D6F8u) {
        ctx->pc = 0x52D6F8u;
            // 0x52d6f8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x52D6FCu;
        goto label_52d6fc;
    }
    ctx->pc = 0x52D6F4u;
    {
        const bool branch_taken_0x52d6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d6f4) {
            ctx->pc = 0x52D6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52D6F4u;
            // 0x52d6f8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52D744u;
            goto label_52d744;
        }
    }
    ctx->pc = 0x52D6FCu;
label_52d6fc:
    // 0x52d6fc: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x52d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d700:
    // 0x52d700: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x52d700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_52d704:
    // 0x52d704: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x52d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_52d708:
    // 0x52d708: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x52d708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_52d70c:
    // 0x52d70c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x52d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_52d710:
    // 0x52d710: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x52d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_52d714:
    // 0x52d714: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x52d714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_52d718:
    // 0x52d718: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x52d718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_52d71c:
    // 0x52d71c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x52d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_52d720:
    // 0x52d720: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x52d720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_52d724:
    // 0x52d724: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x52d724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_52d728:
    // 0x52d728: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x52d728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_52d72c:
    // 0x52d72c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x52d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_52d730:
    // 0x52d730: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x52d730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_52d734:
    // 0x52d734: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x52d734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_52d738:
    // 0x52d738: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x52d738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_52d73c:
    // 0x52d73c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x52d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_52d740:
    // 0x52d740: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x52d740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_52d744:
    // 0x52d744: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x52d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_52d748:
    // 0x52d748: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x52d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_52d74c:
    // 0x52d74c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x52d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_52d750:
    // 0x52d750: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x52d750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_52d754:
    // 0x52d754: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x52d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_52d758:
    // 0x52d758: 0xc040180  jal         func_100600
label_52d75c:
    if (ctx->pc == 0x52D75Cu) {
        ctx->pc = 0x52D75Cu;
            // 0x52d75c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x52D760u;
        goto label_52d760;
    }
    ctx->pc = 0x52D758u;
    SET_GPR_U32(ctx, 31, 0x52D760u);
    ctx->pc = 0x52D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D758u;
            // 0x52d75c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D760u; }
        if (ctx->pc != 0x52D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D760u; }
        if (ctx->pc != 0x52D760u) { return; }
    }
    ctx->pc = 0x52D760u;
label_52d760:
    // 0x52d760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x52d760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d764:
    // 0x52d764: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_52d768:
    if (ctx->pc == 0x52D768u) {
        ctx->pc = 0x52D76Cu;
        goto label_52d76c;
    }
    ctx->pc = 0x52D764u;
    {
        const bool branch_taken_0x52d764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52d764) {
            ctx->pc = 0x52D7F8u;
            goto label_52d7f8;
        }
    }
    ctx->pc = 0x52D76Cu;
label_52d76c:
    // 0x52d76c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x52d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_52d770:
    // 0x52d770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x52d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52d774:
    // 0x52d774: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x52d774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_52d778:
    // 0x52d778: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x52d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_52d77c:
    // 0x52d77c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x52d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_52d780:
    // 0x52d780: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x52d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_52d784:
    // 0x52d784: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x52d784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_52d788:
    // 0x52d788: 0xc040138  jal         func_1004E0
label_52d78c:
    if (ctx->pc == 0x52D78Cu) {
        ctx->pc = 0x52D78Cu;
            // 0x52d78c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x52D790u;
        goto label_52d790;
    }
    ctx->pc = 0x52D788u;
    SET_GPR_U32(ctx, 31, 0x52D790u);
    ctx->pc = 0x52D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D788u;
            // 0x52d78c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D790u; }
        if (ctx->pc != 0x52D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D790u; }
        if (ctx->pc != 0x52D790u) { return; }
    }
    ctx->pc = 0x52D790u;
label_52d790:
    // 0x52d790: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52d790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52d794:
    // 0x52d794: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x52d794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d798:
    // 0x52d798: 0xc040138  jal         func_1004E0
label_52d79c:
    if (ctx->pc == 0x52D79Cu) {
        ctx->pc = 0x52D79Cu;
            // 0x52d79c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x52D7A0u;
        goto label_52d7a0;
    }
    ctx->pc = 0x52D798u;
    SET_GPR_U32(ctx, 31, 0x52D7A0u);
    ctx->pc = 0x52D79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D798u;
            // 0x52d79c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7A0u; }
        if (ctx->pc != 0x52D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7A0u; }
        if (ctx->pc != 0x52D7A0u) { return; }
    }
    ctx->pc = 0x52D7A0u;
label_52d7a0:
    // 0x52d7a0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x52d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_52d7a4:
    // 0x52d7a4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x52d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_52d7a8:
    // 0x52d7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d7ac:
    // 0x52d7ac: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x52d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
label_52d7b0:
    // 0x52d7b0: 0x24c6b390  addiu       $a2, $a2, -0x4C70
    ctx->pc = 0x52d7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947728));
label_52d7b4:
    // 0x52d7b4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x52d7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_52d7b8:
    // 0x52d7b8: 0xc040840  jal         func_102100
label_52d7bc:
    if (ctx->pc == 0x52D7BCu) {
        ctx->pc = 0x52D7BCu;
            // 0x52d7bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x52D7C0u;
        goto label_52d7c0;
    }
    ctx->pc = 0x52D7B8u;
    SET_GPR_U32(ctx, 31, 0x52D7C0u);
    ctx->pc = 0x52D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D7B8u;
            // 0x52d7bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7C0u; }
        if (ctx->pc != 0x52D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7C0u; }
        if (ctx->pc != 0x52D7C0u) { return; }
    }
    ctx->pc = 0x52D7C0u;
label_52d7c0:
    // 0x52d7c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x52d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_52d7c4:
    // 0x52d7c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x52d7c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52d7c8:
    // 0x52d7c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52d7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52d7cc:
    // 0x52d7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x52d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52d7d0:
    // 0x52d7d0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x52d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_52d7d4:
    // 0x52d7d4: 0xc0e7f1c  jal         func_39FC70
label_52d7d8:
    if (ctx->pc == 0x52D7D8u) {
        ctx->pc = 0x52D7D8u;
            // 0x52d7d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D7DCu;
        goto label_52d7dc;
    }
    ctx->pc = 0x52D7D4u;
    SET_GPR_U32(ctx, 31, 0x52D7DCu);
    ctx->pc = 0x52D7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D7D4u;
            // 0x52d7d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39FC70u;
    if (runtime->hasFunction(0x39FC70u)) {
        auto targetFn = runtime->lookupFunction(0x39FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7DCu; }
        if (ctx->pc != 0x52D7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039FC70_0x39fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D7DCu; }
        if (ctx->pc != 0x52D7DCu) { return; }
    }
    ctx->pc = 0x52D7DCu;
label_52d7dc:
    // 0x52d7dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52d7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52d7e0:
    // 0x52d7e0: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x52d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_52d7e4:
    // 0x52d7e4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x52d7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_52d7e8:
    // 0x52d7e8: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x52d7e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_52d7ec:
    // 0x52d7ec: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_52d7f0:
    if (ctx->pc == 0x52D7F0u) {
        ctx->pc = 0x52D7F0u;
            // 0x52d7f0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x52D7F4u;
        goto label_52d7f4;
    }
    ctx->pc = 0x52D7ECu;
    {
        const bool branch_taken_0x52d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D7ECu;
            // 0x52d7f0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52d7ec) {
            ctx->pc = 0x52D7CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52d7cc;
        }
    }
    ctx->pc = 0x52D7F4u;
label_52d7f4:
    // 0x52d7f4: 0x0  nop
    ctx->pc = 0x52d7f4u;
    // NOP
label_52d7f8:
    // 0x52d7f8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x52d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_52d7fc:
    // 0x52d7fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x52d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52d800:
    // 0x52d800: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x52d800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_52d804:
    // 0x52d804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52d804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52d808:
    // 0x52d808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x52d808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d80c:
    // 0x52d80c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x52d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52d810:
    // 0x52d810: 0xc0e7d2c  jal         func_39F4B0
label_52d814:
    if (ctx->pc == 0x52D814u) {
        ctx->pc = 0x52D814u;
            // 0x52d814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D818u;
        goto label_52d818;
    }
    ctx->pc = 0x52D810u;
    SET_GPR_U32(ctx, 31, 0x52D818u);
    ctx->pc = 0x52D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D810u;
            // 0x52d814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D818u; }
        if (ctx->pc != 0x52D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D818u; }
        if (ctx->pc != 0x52D818u) { return; }
    }
    ctx->pc = 0x52D818u;
label_52d818:
    // 0x52d818: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x52d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_52d81c:
    // 0x52d81c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x52d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_52d820:
    // 0x52d820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52d820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52d824:
    // 0x52d824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x52d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52d828:
    // 0x52d828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x52d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52d82c:
    // 0x52d82c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_52d830:
    // 0x52d830: 0xc0e7d2c  jal         func_39F4B0
label_52d834:
    if (ctx->pc == 0x52D834u) {
        ctx->pc = 0x52D834u;
            // 0x52d834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D838u;
        goto label_52d838;
    }
    ctx->pc = 0x52D830u;
    SET_GPR_U32(ctx, 31, 0x52D838u);
    ctx->pc = 0x52D834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D830u;
            // 0x52d834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D838u; }
        if (ctx->pc != 0x52D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D838u; }
        if (ctx->pc != 0x52D838u) { return; }
    }
    ctx->pc = 0x52D838u;
label_52d838:
    // 0x52d838: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x52d838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_52d83c:
    // 0x52d83c: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x52d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_52d840:
    // 0x52d840: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x52d840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d844:
    // 0x52d844: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x52d844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_52d848:
    // 0x52d848: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x52d848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_52d84c:
    // 0x52d84c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x52d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_52d850:
    // 0x52d850: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x52d850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_52d854:
    // 0x52d854: 0x34a80008  ori         $t0, $a1, 0x8
    ctx->pc = 0x52d854u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_52d858:
    // 0x52d858: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x52d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_52d85c:
    // 0x52d85c: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x52d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_52d860:
    // 0x52d860: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x52d860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52d864:
    // 0x52d864: 0xa2270064  sb          $a3, 0x64($s1)
    ctx->pc = 0x52d864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 7));
label_52d868:
    // 0x52d868: 0xa2270065  sb          $a3, 0x65($s1)
    ctx->pc = 0x52d868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 7));
label_52d86c:
    // 0x52d86c: 0xa2260068  sb          $a2, 0x68($s1)
    ctx->pc = 0x52d86cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 6));
label_52d870:
    // 0x52d870: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x52d870u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_52d874:
    // 0x52d874: 0xa226006a  sb          $a2, 0x6A($s1)
    ctx->pc = 0x52d874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 6));
label_52d878:
    // 0x52d878: 0xa226006b  sb          $a2, 0x6B($s1)
    ctx->pc = 0x52d878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 6));
label_52d87c:
    // 0x52d87c: 0xae27008c  sw          $a3, 0x8C($s1)
    ctx->pc = 0x52d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 7));
label_52d880:
    // 0x52d880: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x52d880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_52d884:
    // 0x52d884: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x52d884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_52d888:
    // 0x52d888: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x52d888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_52d88c:
    // 0x52d88c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x52d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d890:
    // 0x52d890: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x52d890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_52d894:
    // 0x52d894: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x52d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d898:
    // 0x52d898: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x52d898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_52d89c:
    // 0x52d89c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x52d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d8a0:
    // 0x52d8a0: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x52d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_52d8a4:
    // 0x52d8a4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x52d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52d8a8:
    // 0x52d8a8: 0xc04c720  jal         func_131C80
label_52d8ac:
    if (ctx->pc == 0x52D8ACu) {
        ctx->pc = 0x52D8ACu;
            // 0x52d8ac: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->pc = 0x52D8B0u;
        goto label_52d8b0;
    }
    ctx->pc = 0x52D8A8u;
    SET_GPR_U32(ctx, 31, 0x52D8B0u);
    ctx->pc = 0x52D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D8A8u;
            // 0x52d8ac: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D8B0u; }
        if (ctx->pc != 0x52D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D8B0u; }
        if (ctx->pc != 0x52D8B0u) { return; }
    }
    ctx->pc = 0x52D8B0u;
label_52d8b0:
    // 0x52d8b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52d8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52d8b4:
    // 0x52d8b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52d8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52d8b8:
    // 0x52d8b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52d8b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52d8bc:
    // 0x52d8bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52d8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52d8c0:
    // 0x52d8c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52d8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52d8c4:
    // 0x52d8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52d8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52d8c8:
    // 0x52d8c8: 0x3e00008  jr          $ra
label_52d8cc:
    if (ctx->pc == 0x52D8CCu) {
        ctx->pc = 0x52D8CCu;
            // 0x52d8cc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x52D8D0u;
        goto label_52d8d0;
    }
    ctx->pc = 0x52D8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D8C8u;
            // 0x52d8cc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D8D0u;
label_52d8d0:
    // 0x52d8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x52d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_52d8d4:
    // 0x52d8d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52d8d8:
    // 0x52d8d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52d8dc:
    // 0x52d8dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52d8e0:
    // 0x52d8e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52d8e4:
    // 0x52d8e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x52d8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52d8e8:
    // 0x52d8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52d8ec:
    // 0x52d8ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52d8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52d8f0:
    // 0x52d8f0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x52d8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_52d8f4:
    // 0x52d8f4: 0xc08914c  jal         func_224530
label_52d8f8:
    if (ctx->pc == 0x52D8F8u) {
        ctx->pc = 0x52D8F8u;
            // 0x52d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D8FCu;
        goto label_52d8fc;
    }
    ctx->pc = 0x52D8F4u;
    SET_GPR_U32(ctx, 31, 0x52D8FCu);
    ctx->pc = 0x52D8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D8F4u;
            // 0x52d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D8FCu; }
        if (ctx->pc != 0x52D8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D8FCu; }
        if (ctx->pc != 0x52D8FCu) { return; }
    }
    ctx->pc = 0x52D8FCu;
label_52d8fc:
    // 0x52d8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52d8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52d900:
    // 0x52d900: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x52d900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_52d904:
    // 0x52d904: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x52d904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_52d908:
    // 0x52d908: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x52d908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_52d90c:
    // 0x52d90c: 0xc088b74  jal         func_222DD0
label_52d910:
    if (ctx->pc == 0x52D910u) {
        ctx->pc = 0x52D910u;
            // 0x52d910: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->pc = 0x52D914u;
        goto label_52d914;
    }
    ctx->pc = 0x52D90Cu;
    SET_GPR_U32(ctx, 31, 0x52D914u);
    ctx->pc = 0x52D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D90Cu;
            // 0x52d910: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D914u; }
        if (ctx->pc != 0x52D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D914u; }
        if (ctx->pc != 0x52D914u) { return; }
    }
    ctx->pc = 0x52D914u;
label_52d914:
    // 0x52d914: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52d914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52d918:
    // 0x52d918: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52d91c:
    // 0x52d91c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52d91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52d920:
    // 0x52d920: 0x320f809  jalr        $t9
label_52d924:
    if (ctx->pc == 0x52D924u) {
        ctx->pc = 0x52D924u;
            // 0x52d924: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52D928u;
        goto label_52d928;
    }
    ctx->pc = 0x52D920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D928u);
        ctx->pc = 0x52D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D920u;
            // 0x52d924: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D928u; }
            if (ctx->pc != 0x52D928u) { return; }
        }
        }
    }
    ctx->pc = 0x52D928u;
label_52d928:
    // 0x52d928: 0xc088b74  jal         func_222DD0
label_52d92c:
    if (ctx->pc == 0x52D92Cu) {
        ctx->pc = 0x52D92Cu;
            // 0x52d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D930u;
        goto label_52d930;
    }
    ctx->pc = 0x52D928u;
    SET_GPR_U32(ctx, 31, 0x52D930u);
    ctx->pc = 0x52D92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D928u;
            // 0x52d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D930u; }
        if (ctx->pc != 0x52D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D930u; }
        if (ctx->pc != 0x52D930u) { return; }
    }
    ctx->pc = 0x52D930u;
label_52d930:
    // 0x52d930: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x52d930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52d934:
    // 0x52d934: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x52d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_52d938:
    // 0x52d938: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x52d938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_52d93c:
    // 0x52d93c: 0x320f809  jalr        $t9
label_52d940:
    if (ctx->pc == 0x52D940u) {
        ctx->pc = 0x52D940u;
            // 0x52d940: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52D944u;
        goto label_52d944;
    }
    ctx->pc = 0x52D93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D944u);
        ctx->pc = 0x52D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D93Cu;
            // 0x52d940: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D944u; }
            if (ctx->pc != 0x52D944u) { return; }
        }
        }
    }
    ctx->pc = 0x52D944u;
label_52d944:
    // 0x52d944: 0xc0e39b4  jal         func_38E6D0
label_52d948:
    if (ctx->pc == 0x52D948u) {
        ctx->pc = 0x52D948u;
            // 0x52d948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D94Cu;
        goto label_52d94c;
    }
    ctx->pc = 0x52D944u;
    SET_GPR_U32(ctx, 31, 0x52D94Cu);
    ctx->pc = 0x52D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D944u;
            // 0x52d948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D94Cu; }
        if (ctx->pc != 0x52D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D94Cu; }
        if (ctx->pc != 0x52D94Cu) { return; }
    }
    ctx->pc = 0x52D94Cu;
label_52d94c:
    // 0x52d94c: 0xc0d8760  jal         func_361D80
label_52d950:
    if (ctx->pc == 0x52D950u) {
        ctx->pc = 0x52D950u;
            // 0x52d950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D954u;
        goto label_52d954;
    }
    ctx->pc = 0x52D94Cu;
    SET_GPR_U32(ctx, 31, 0x52D954u);
    ctx->pc = 0x52D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D94Cu;
            // 0x52d950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D954u; }
        if (ctx->pc != 0x52D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D954u; }
        if (ctx->pc != 0x52D954u) { return; }
    }
    ctx->pc = 0x52D954u;
label_52d954:
    // 0x52d954: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x52d954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_52d958:
    // 0x52d958: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x52d958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_52d95c:
    // 0x52d95c: 0x320f809  jalr        $t9
label_52d960:
    if (ctx->pc == 0x52D960u) {
        ctx->pc = 0x52D960u;
            // 0x52d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52D964u;
        goto label_52d964;
    }
    ctx->pc = 0x52D95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52D964u);
        ctx->pc = 0x52D960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D95Cu;
            // 0x52d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52D964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52D964u; }
            if (ctx->pc != 0x52D964u) { return; }
        }
        }
    }
    ctx->pc = 0x52D964u;
label_52d964:
    // 0x52d964: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x52d964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d968:
    // 0x52d968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52d96c:
    // 0x52d96c: 0xc0e1b0c  jal         func_386C30
label_52d970:
    if (ctx->pc == 0x52D970u) {
        ctx->pc = 0x52D970u;
            // 0x52d970: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x52D974u;
        goto label_52d974;
    }
    ctx->pc = 0x52D96Cu;
    SET_GPR_U32(ctx, 31, 0x52D974u);
    ctx->pc = 0x52D970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D96Cu;
            // 0x52d970: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D974u; }
        if (ctx->pc != 0x52D974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D974u; }
        if (ctx->pc != 0x52D974u) { return; }
    }
    ctx->pc = 0x52D974u;
label_52d974:
    // 0x52d974: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x52d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d978:
    // 0x52d978: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x52d978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_52d97c:
    // 0x52d97c: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x52d97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_52d980:
    // 0x52d980: 0xc0e1b0c  jal         func_386C30
label_52d984:
    if (ctx->pc == 0x52D984u) {
        ctx->pc = 0x52D984u;
            // 0x52d984: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x52D988u;
        goto label_52d988;
    }
    ctx->pc = 0x52D980u;
    SET_GPR_U32(ctx, 31, 0x52D988u);
    ctx->pc = 0x52D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D980u;
            // 0x52d984: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D988u; }
        if (ctx->pc != 0x52D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D988u; }
        if (ctx->pc != 0x52D988u) { return; }
    }
    ctx->pc = 0x52D988u;
label_52d988:
    // 0x52d988: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x52d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_52d98c:
    // 0x52d98c: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x52d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_52d990:
    // 0x52d990: 0xc0e1ad4  jal         func_386B50
label_52d994:
    if (ctx->pc == 0x52D994u) {
        ctx->pc = 0x52D994u;
            // 0x52d994: 0x262600f0  addiu       $a2, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x52D998u;
        goto label_52d998;
    }
    ctx->pc = 0x52D990u;
    SET_GPR_U32(ctx, 31, 0x52D998u);
    ctx->pc = 0x52D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D990u;
            // 0x52d994: 0x262600f0  addiu       $a2, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D998u; }
        if (ctx->pc != 0x52D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D998u; }
        if (ctx->pc != 0x52D998u) { return; }
    }
    ctx->pc = 0x52D998u;
label_52d998:
    // 0x52d998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52d99c:
    // 0x52d99c: 0xc0f8e34  jal         func_3E38D0
label_52d9a0:
    if (ctx->pc == 0x52D9A0u) {
        ctx->pc = 0x52D9A0u;
            // 0x52d9a0: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x52D9A4u;
        goto label_52d9a4;
    }
    ctx->pc = 0x52D99Cu;
    SET_GPR_U32(ctx, 31, 0x52D9A4u);
    ctx->pc = 0x52D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D99Cu;
            // 0x52d9a0: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D9A4u; }
        if (ctx->pc != 0x52D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D9A4u; }
        if (ctx->pc != 0x52D9A4u) { return; }
    }
    ctx->pc = 0x52D9A4u;
label_52d9a4:
    // 0x52d9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52d9a8:
    // 0x52d9a8: 0xc0e1b28  jal         func_386CA0
label_52d9ac:
    if (ctx->pc == 0x52D9ACu) {
        ctx->pc = 0x52D9ACu;
            // 0x52d9ac: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x52D9B0u;
        goto label_52d9b0;
    }
    ctx->pc = 0x52D9A8u;
    SET_GPR_U32(ctx, 31, 0x52D9B0u);
    ctx->pc = 0x52D9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52D9A8u;
            // 0x52d9ac: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D9B0u; }
        if (ctx->pc != 0x52D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52D9B0u; }
        if (ctx->pc != 0x52D9B0u) { return; }
    }
    ctx->pc = 0x52D9B0u;
label_52d9b0:
    // 0x52d9b0: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x52d9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
label_52d9b4:
    // 0x52d9b4: 0xa2200101  sb          $zero, 0x101($s1)
    ctx->pc = 0x52d9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 257), (uint8_t)GPR_U32(ctx, 0));
label_52d9b8:
    // 0x52d9b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52d9bc:
    // 0x52d9bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52d9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52d9c0:
    // 0x52d9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52d9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52d9c4:
    // 0x52d9c4: 0x3e00008  jr          $ra
label_52d9c8:
    if (ctx->pc == 0x52D9C8u) {
        ctx->pc = 0x52D9C8u;
            // 0x52d9c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x52D9CCu;
        goto label_52d9cc;
    }
    ctx->pc = 0x52D9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D9C4u;
            // 0x52d9c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D9CCu;
label_52d9cc:
    // 0x52d9cc: 0x0  nop
    ctx->pc = 0x52d9ccu;
    // NOP
label_52d9d0:
    // 0x52d9d0: 0x3e00008  jr          $ra
label_52d9d4:
    if (ctx->pc == 0x52D9D4u) {
        ctx->pc = 0x52D9D4u;
            // 0x52d9d4: 0x24025a50  addiu       $v0, $zero, 0x5A50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23120));
        ctx->pc = 0x52D9D8u;
        goto label_52d9d8;
    }
    ctx->pc = 0x52D9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52D9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52D9D0u;
            // 0x52d9d4: 0x24025a50  addiu       $v0, $zero, 0x5A50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52D9D8u;
label_52d9d8:
    // 0x52d9d8: 0x0  nop
    ctx->pc = 0x52d9d8u;
    // NOP
label_52d9dc:
    // 0x52d9dc: 0x0  nop
    ctx->pc = 0x52d9dcu;
    // NOP
label_52d9e0:
    // 0x52d9e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52d9e4:
    // 0x52d9e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52d9e8:
    // 0x52d9e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52d9ec:
    // 0x52d9ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52d9f0:
    // 0x52d9f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x52d9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52d9f4:
    // 0x52d9f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52d9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52d9f8:
    // 0x52d9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52d9fc:
    // 0x52d9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52da00:
    // 0x52da00: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x52da00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52da04:
    // 0x52da04: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_52da08:
    if (ctx->pc == 0x52DA08u) {
        ctx->pc = 0x52DA08u;
            // 0x52da08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DA0Cu;
        goto label_52da0c;
    }
    ctx->pc = 0x52DA04u;
    {
        const bool branch_taken_0x52da04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DA04u;
            // 0x52da08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52da04) {
            ctx->pc = 0x52DA48u;
            goto label_52da48;
        }
    }
    ctx->pc = 0x52DA0Cu;
label_52da0c:
    // 0x52da0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52da0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52da10:
    // 0x52da10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52da10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52da14:
    // 0x52da14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52da14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52da18:
    // 0x52da18: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x52da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52da1c:
    // 0x52da1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_52da20:
    // 0x52da20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x52da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52da24:
    // 0x52da24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52da24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52da28:
    // 0x52da28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x52da28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52da2c:
    // 0x52da2c: 0x320f809  jalr        $t9
label_52da30:
    if (ctx->pc == 0x52DA30u) {
        ctx->pc = 0x52DA34u;
        goto label_52da34;
    }
    ctx->pc = 0x52DA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52DA34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52DA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52DA34u; }
            if (ctx->pc != 0x52DA34u) { return; }
        }
        }
    }
    ctx->pc = 0x52DA34u;
label_52da34:
    // 0x52da34: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x52da34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_52da38:
    // 0x52da38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52da38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52da3c:
    // 0x52da3c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x52da3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52da40:
    // 0x52da40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_52da44:
    if (ctx->pc == 0x52DA44u) {
        ctx->pc = 0x52DA44u;
            // 0x52da44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52DA48u;
        goto label_52da48;
    }
    ctx->pc = 0x52DA40u;
    {
        const bool branch_taken_0x52da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DA40u;
            // 0x52da44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52da40) {
            ctx->pc = 0x52DA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52da18;
        }
    }
    ctx->pc = 0x52DA48u;
label_52da48:
    // 0x52da48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52da48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52da4c:
    // 0x52da4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52da4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52da50:
    // 0x52da50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52da50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52da54:
    // 0x52da54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52da54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52da58:
    // 0x52da58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52da58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52da5c:
    // 0x52da5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52da5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52da60:
    // 0x52da60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52da60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52da64:
    // 0x52da64: 0x3e00008  jr          $ra
label_52da68:
    if (ctx->pc == 0x52DA68u) {
        ctx->pc = 0x52DA68u;
            // 0x52da68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52DA6Cu;
        goto label_52da6c;
    }
    ctx->pc = 0x52DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DA64u;
            // 0x52da68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DA6Cu;
label_52da6c:
    // 0x52da6c: 0x0  nop
    ctx->pc = 0x52da6cu;
    // NOP
label_52da70:
    // 0x52da70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52da74:
    // 0x52da74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52da74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52da78:
    // 0x52da78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52da7c:
    // 0x52da7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x52da7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_52da80:
    // 0x52da80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52da84:
    // 0x52da84: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x52da84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52da88:
    // 0x52da88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52da88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52da8c:
    // 0x52da8c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x52da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_52da90:
    // 0x52da90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52da90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52da94:
    // 0x52da94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52da98:
    // 0x52da98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52da98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_52da9c:
    // 0x52da9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x52da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52daa0:
    // 0x52daa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x52daa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_52daa4:
    // 0x52daa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x52daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_52daa8:
    // 0x52daa8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_52daac:
    // 0x52daac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x52daacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_52dab0:
    // 0x52dab0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x52dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52dab4:
    // 0x52dab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_52dab8:
    // 0x52dab8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x52dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52dabc:
    // 0x52dabc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52dac0:
    // 0x52dac0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x52dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52dac4:
    // 0x52dac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52dac8:
    // 0x52dac8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x52dac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52dacc:
    // 0x52dacc: 0xc0a997c  jal         func_2A65F0
label_52dad0:
    if (ctx->pc == 0x52DAD0u) {
        ctx->pc = 0x52DAD0u;
            // 0x52dad0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x52DAD4u;
        goto label_52dad4;
    }
    ctx->pc = 0x52DACCu;
    SET_GPR_U32(ctx, 31, 0x52DAD4u);
    ctx->pc = 0x52DAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DACCu;
            // 0x52dad0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DAD4u; }
        if (ctx->pc != 0x52DAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DAD4u; }
        if (ctx->pc != 0x52DAD4u) { return; }
    }
    ctx->pc = 0x52DAD4u;
label_52dad4:
    // 0x52dad4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x52dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_52dad8:
    // 0x52dad8: 0xc0d879c  jal         func_361E70
label_52dadc:
    if (ctx->pc == 0x52DADCu) {
        ctx->pc = 0x52DADCu;
            // 0x52dadc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DAE0u;
        goto label_52dae0;
    }
    ctx->pc = 0x52DAD8u;
    SET_GPR_U32(ctx, 31, 0x52DAE0u);
    ctx->pc = 0x52DADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DAD8u;
            // 0x52dadc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DAE0u; }
        if (ctx->pc != 0x52DAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DAE0u; }
        if (ctx->pc != 0x52DAE0u) { return; }
    }
    ctx->pc = 0x52DAE0u;
label_52dae0:
    // 0x52dae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52dae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52dae4:
    // 0x52dae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52dae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52dae8:
    // 0x52dae8: 0x3e00008  jr          $ra
label_52daec:
    if (ctx->pc == 0x52DAECu) {
        ctx->pc = 0x52DAECu;
            // 0x52daec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52DAF0u;
        goto label_52daf0;
    }
    ctx->pc = 0x52DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DAE8u;
            // 0x52daec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DAF0u;
label_52daf0:
    // 0x52daf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52daf4:
    // 0x52daf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52daf8:
    // 0x52daf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52dafc:
    // 0x52dafc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_52db00:
    // 0x52db00: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_52db04:
    if (ctx->pc == 0x52DB04u) {
        ctx->pc = 0x52DB04u;
            // 0x52db04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DB08u;
        goto label_52db08;
    }
    ctx->pc = 0x52DB00u;
    {
        const bool branch_taken_0x52db00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB00u;
            // 0x52db04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52db00) {
            ctx->pc = 0x52DC20u;
            goto label_52dc20;
        }
    }
    ctx->pc = 0x52DB08u;
label_52db08:
    // 0x52db08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x52db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52db0c:
    // 0x52db0c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_52db10:
    // 0x52db10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52db10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_52db14:
    // 0x52db14: 0xc075128  jal         func_1D44A0
label_52db18:
    if (ctx->pc == 0x52DB18u) {
        ctx->pc = 0x52DB18u;
            // 0x52db18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x52DB1Cu;
        goto label_52db1c;
    }
    ctx->pc = 0x52DB14u;
    SET_GPR_U32(ctx, 31, 0x52DB1Cu);
    ctx->pc = 0x52DB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB14u;
            // 0x52db18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DB1Cu; }
        if (ctx->pc != 0x52DB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DB1Cu; }
        if (ctx->pc != 0x52DB1Cu) { return; }
    }
    ctx->pc = 0x52DB1Cu;
label_52db1c:
    // 0x52db1c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x52db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52db20:
    // 0x52db20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db24:
    // 0x52db24: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x52db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_52db28:
    // 0x52db28: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x52db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_52db2c:
    // 0x52db2c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52db2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52db30:
    // 0x52db30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52db34:
    if (ctx->pc == 0x52DB34u) {
        ctx->pc = 0x52DB34u;
            // 0x52db34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x52DB38u;
        goto label_52db38;
    }
    ctx->pc = 0x52DB30u;
    {
        const bool branch_taken_0x52db30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB30u;
            // 0x52db34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52db30) {
            ctx->pc = 0x52DB40u;
            goto label_52db40;
        }
    }
    ctx->pc = 0x52DB38u;
label_52db38:
    // 0x52db38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db3c:
    // 0x52db3c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_52db40:
    // 0x52db40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52db44:
    // 0x52db44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db48:
    // 0x52db48: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x52db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52db4c:
    // 0x52db4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52db50:
    // 0x52db50: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52db50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52db54:
    // 0x52db54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52db58:
    if (ctx->pc == 0x52DB58u) {
        ctx->pc = 0x52DB58u;
            // 0x52db58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52DB5Cu;
        goto label_52db5c;
    }
    ctx->pc = 0x52DB54u;
    {
        const bool branch_taken_0x52db54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52db54) {
            ctx->pc = 0x52DB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB54u;
            // 0x52db58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DB68u;
            goto label_52db68;
        }
    }
    ctx->pc = 0x52DB5Cu;
label_52db5c:
    // 0x52db5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db60:
    // 0x52db60: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x52db60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_52db64:
    // 0x52db64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52db68:
    // 0x52db68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db6c:
    // 0x52db6c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_52db70:
    // 0x52db70: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52db74:
    // 0x52db74: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52db74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52db78:
    // 0x52db78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52db7c:
    if (ctx->pc == 0x52DB7Cu) {
        ctx->pc = 0x52DB7Cu;
            // 0x52db7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52DB80u;
        goto label_52db80;
    }
    ctx->pc = 0x52DB78u;
    {
        const bool branch_taken_0x52db78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52db78) {
            ctx->pc = 0x52DB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB78u;
            // 0x52db7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DB8Cu;
            goto label_52db8c;
        }
    }
    ctx->pc = 0x52DB80u;
label_52db80:
    // 0x52db80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52db80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52db84:
    // 0x52db84: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x52db84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_52db88:
    // 0x52db88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52db88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52db8c:
    // 0x52db8c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52db8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52db90:
    // 0x52db90: 0x320f809  jalr        $t9
label_52db94:
    if (ctx->pc == 0x52DB94u) {
        ctx->pc = 0x52DB94u;
            // 0x52db94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DB98u;
        goto label_52db98;
    }
    ctx->pc = 0x52DB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52DB98u);
        ctx->pc = 0x52DB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DB90u;
            // 0x52db94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52DB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52DB98u; }
            if (ctx->pc != 0x52DB98u) { return; }
        }
        }
    }
    ctx->pc = 0x52DB98u;
label_52db98:
    // 0x52db98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52db9c:
    // 0x52db9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dba0:
    // 0x52dba0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x52dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_52dba4:
    // 0x52dba4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52dba8:
    // 0x52dba8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52dba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52dbac:
    // 0x52dbac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52dbacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52dbb0:
    // 0x52dbb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52dbb4:
    if (ctx->pc == 0x52DBB4u) {
        ctx->pc = 0x52DBB4u;
            // 0x52dbb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x52DBB8u;
        goto label_52dbb8;
    }
    ctx->pc = 0x52DBB0u;
    {
        const bool branch_taken_0x52dbb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dbb0) {
            ctx->pc = 0x52DBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DBB0u;
            // 0x52dbb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DBC4u;
            goto label_52dbc4;
        }
    }
    ctx->pc = 0x52DBB8u;
label_52dbb8:
    // 0x52dbb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dbbc:
    // 0x52dbbc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_52dbc0:
    // 0x52dbc0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52dbc4:
    // 0x52dbc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dbc8:
    // 0x52dbc8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x52dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52dbcc:
    // 0x52dbcc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52dbd0:
    // 0x52dbd0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52dbd4:
    // 0x52dbd4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52dbd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52dbd8:
    // 0x52dbd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52dbdc:
    if (ctx->pc == 0x52DBDCu) {
        ctx->pc = 0x52DBE0u;
        goto label_52dbe0;
    }
    ctx->pc = 0x52DBD8u;
    {
        const bool branch_taken_0x52dbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dbd8) {
            ctx->pc = 0x52DBE8u;
            goto label_52dbe8;
        }
    }
    ctx->pc = 0x52DBE0u;
label_52dbe0:
    // 0x52dbe0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dbe4:
    // 0x52dbe4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x52dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_52dbe8:
    // 0x52dbe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dbec:
    // 0x52dbec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_52dbf0:
    // 0x52dbf0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52dbf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52dbf4:
    // 0x52dbf4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52dbf8:
    if (ctx->pc == 0x52DBF8u) {
        ctx->pc = 0x52DBFCu;
        goto label_52dbfc;
    }
    ctx->pc = 0x52DBF4u;
    {
        const bool branch_taken_0x52dbf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dbf4) {
            ctx->pc = 0x52DC04u;
            goto label_52dc04;
        }
    }
    ctx->pc = 0x52DBFCu;
label_52dbfc:
    // 0x52dbfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dc00:
    // 0x52dc00: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x52dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_52dc04:
    // 0x52dc04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dc08:
    // 0x52dc08: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x52dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52dc0c:
    // 0x52dc0c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52dc0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52dc10:
    // 0x52dc10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52dc14:
    if (ctx->pc == 0x52DC14u) {
        ctx->pc = 0x52DC14u;
            // 0x52dc14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52DC18u;
        goto label_52dc18;
    }
    ctx->pc = 0x52DC10u;
    {
        const bool branch_taken_0x52dc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dc10) {
            ctx->pc = 0x52DC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC10u;
            // 0x52dc14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DC24u;
            goto label_52dc24;
        }
    }
    ctx->pc = 0x52DC18u;
label_52dc18:
    // 0x52dc18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52dc1c:
    // 0x52dc1c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x52dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_52dc20:
    // 0x52dc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52dc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52dc24:
    // 0x52dc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52dc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52dc28:
    // 0x52dc28: 0x3e00008  jr          $ra
label_52dc2c:
    if (ctx->pc == 0x52DC2Cu) {
        ctx->pc = 0x52DC2Cu;
            // 0x52dc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52DC30u;
        goto label_52dc30;
    }
    ctx->pc = 0x52DC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC28u;
            // 0x52dc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DC30u;
label_52dc30:
    // 0x52dc30: 0x814b094  j           func_52C250
label_52dc34:
    if (ctx->pc == 0x52DC34u) {
        ctx->pc = 0x52DC34u;
            // 0x52dc34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x52DC38u;
        goto label_52dc38;
    }
    ctx->pc = 0x52DC30u;
    ctx->pc = 0x52DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC30u;
            // 0x52dc34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C250u;
    {
        auto targetFn = runtime->lookupFunction(0x52C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52DC38u;
label_52dc38:
    // 0x52dc38: 0x0  nop
    ctx->pc = 0x52dc38u;
    // NOP
label_52dc3c:
    // 0x52dc3c: 0x0  nop
    ctx->pc = 0x52dc3cu;
    // NOP
label_52dc40:
    // 0x52dc40: 0x814b1d4  j           func_52C750
label_52dc44:
    if (ctx->pc == 0x52DC44u) {
        ctx->pc = 0x52DC44u;
            // 0x52dc44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52DC48u;
        goto label_52dc48;
    }
    ctx->pc = 0x52DC40u;
    ctx->pc = 0x52DC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC40u;
            // 0x52dc44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C750u;
    {
        auto targetFn = runtime->lookupFunction(0x52C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52DC48u;
label_52dc48:
    // 0x52dc48: 0x0  nop
    ctx->pc = 0x52dc48u;
    // NOP
label_52dc4c:
    // 0x52dc4c: 0x0  nop
    ctx->pc = 0x52dc4cu;
    // NOP
label_52dc50:
    // 0x52dc50: 0x814b010  j           func_52C040
label_52dc54:
    if (ctx->pc == 0x52DC54u) {
        ctx->pc = 0x52DC54u;
            // 0x52dc54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52DC58u;
        goto label_52dc58;
    }
    ctx->pc = 0x52DC50u;
    ctx->pc = 0x52DC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC50u;
            // 0x52dc54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52C040u;
    if (runtime->hasFunction(0x52C040u)) {
        auto targetFn = runtime->lookupFunction(0x52C040u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0052C040_0x52c040(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52DC58u;
label_52dc58:
    // 0x52dc58: 0x0  nop
    ctx->pc = 0x52dc58u;
    // NOP
label_52dc5c:
    // 0x52dc5c: 0x0  nop
    ctx->pc = 0x52dc5cu;
    // NOP
label_52dc60:
    // 0x52dc60: 0x814afec  j           func_52BFB0
label_52dc64:
    if (ctx->pc == 0x52DC64u) {
        ctx->pc = 0x52DC64u;
            // 0x52dc64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52DC68u;
        goto label_52dc68;
    }
    ctx->pc = 0x52DC60u;
    ctx->pc = 0x52DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DC60u;
            // 0x52dc64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52BFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x52BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52DC68u;
label_52dc68:
    // 0x52dc68: 0x0  nop
    ctx->pc = 0x52dc68u;
    // NOP
label_52dc6c:
    // 0x52dc6c: 0x0  nop
    ctx->pc = 0x52dc6cu;
    // NOP
label_52dc70:
    // 0x52dc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52dc74:
    // 0x52dc74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52dc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52dc78:
    // 0x52dc78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52dc7c:
    // 0x52dc7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x52dc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_52dc80:
    // 0x52dc80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52dc84:
    // 0x52dc84: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x52dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52dc88:
    // 0x52dc88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52dc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52dc8c:
    // 0x52dc8c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x52dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_52dc90:
    // 0x52dc90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52dc94:
    // 0x52dc94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52dc98:
    // 0x52dc98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_52dc9c:
    // 0x52dc9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x52dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52dca0:
    // 0x52dca0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x52dca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_52dca4:
    // 0x52dca4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x52dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_52dca8:
    // 0x52dca8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_52dcac:
    // 0x52dcac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x52dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_52dcb0:
    // 0x52dcb0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x52dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52dcb4:
    // 0x52dcb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_52dcb8:
    // 0x52dcb8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x52dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52dcbc:
    // 0x52dcbc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52dcc0:
    // 0x52dcc0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x52dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52dcc4:
    // 0x52dcc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52dcc8:
    // 0x52dcc8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x52dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52dccc:
    // 0x52dccc: 0xc0a997c  jal         func_2A65F0
label_52dcd0:
    if (ctx->pc == 0x52DCD0u) {
        ctx->pc = 0x52DCD0u;
            // 0x52dcd0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x52DCD4u;
        goto label_52dcd4;
    }
    ctx->pc = 0x52DCCCu;
    SET_GPR_U32(ctx, 31, 0x52DCD4u);
    ctx->pc = 0x52DCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DCCCu;
            // 0x52dcd0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DCD4u; }
        if (ctx->pc != 0x52DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DCD4u; }
        if (ctx->pc != 0x52DCD4u) { return; }
    }
    ctx->pc = 0x52DCD4u;
label_52dcd4:
    // 0x52dcd4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x52dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_52dcd8:
    // 0x52dcd8: 0xc0d879c  jal         func_361E70
label_52dcdc:
    if (ctx->pc == 0x52DCDCu) {
        ctx->pc = 0x52DCDCu;
            // 0x52dcdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DCE0u;
        goto label_52dce0;
    }
    ctx->pc = 0x52DCD8u;
    SET_GPR_U32(ctx, 31, 0x52DCE0u);
    ctx->pc = 0x52DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DCD8u;
            // 0x52dcdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DCE0u; }
        if (ctx->pc != 0x52DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DCE0u; }
        if (ctx->pc != 0x52DCE0u) { return; }
    }
    ctx->pc = 0x52DCE0u;
label_52dce0:
    // 0x52dce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52dce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52dce4:
    // 0x52dce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52dce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52dce8:
    // 0x52dce8: 0x3e00008  jr          $ra
label_52dcec:
    if (ctx->pc == 0x52DCECu) {
        ctx->pc = 0x52DCECu;
            // 0x52dcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52DCF0u;
        goto label_52dcf0;
    }
    ctx->pc = 0x52DCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DCE8u;
            // 0x52dcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DCF0u;
label_52dcf0:
    // 0x52dcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52dcf4:
    // 0x52dcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52dcf8:
    // 0x52dcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52dcfc:
    // 0x52dcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52dd00:
    // 0x52dd00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52dd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52dd04:
    // 0x52dd04: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_52dd08:
    if (ctx->pc == 0x52DD08u) {
        ctx->pc = 0x52DD08u;
            // 0x52dd08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DD0Cu;
        goto label_52dd0c;
    }
    ctx->pc = 0x52DD04u;
    {
        const bool branch_taken_0x52dd04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD04u;
            // 0x52dd08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52dd04) {
            ctx->pc = 0x52DD60u;
            goto label_52dd60;
        }
    }
    ctx->pc = 0x52DD0Cu;
label_52dd0c:
    // 0x52dd0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52dd10:
    // 0x52dd10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52dd14:
    // 0x52dd14: 0x24636aa0  addiu       $v1, $v1, 0x6AA0
    ctx->pc = 0x52dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27296));
label_52dd18:
    // 0x52dd18: 0x24426ad8  addiu       $v0, $v0, 0x6AD8
    ctx->pc = 0x52dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27352));
label_52dd1c:
    // 0x52dd1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52dd20:
    // 0x52dd20: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_52dd24:
    if (ctx->pc == 0x52DD24u) {
        ctx->pc = 0x52DD24u;
            // 0x52dd24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52DD28u;
        goto label_52dd28;
    }
    ctx->pc = 0x52DD20u;
    {
        const bool branch_taken_0x52dd20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD20u;
            // 0x52dd24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52dd20) {
            ctx->pc = 0x52DD48u;
            goto label_52dd48;
        }
    }
    ctx->pc = 0x52DD28u;
label_52dd28:
    // 0x52dd28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52dd2c:
    // 0x52dd2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52dd30:
    // 0x52dd30: 0x24636b90  addiu       $v1, $v1, 0x6B90
    ctx->pc = 0x52dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27536));
label_52dd34:
    // 0x52dd34: 0x24426bc8  addiu       $v0, $v0, 0x6BC8
    ctx->pc = 0x52dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27592));
label_52dd38:
    // 0x52dd38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52dd3c:
    // 0x52dd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52dd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52dd40:
    // 0x52dd40: 0xc14b760  jal         func_52DD80
label_52dd44:
    if (ctx->pc == 0x52DD44u) {
        ctx->pc = 0x52DD44u;
            // 0x52dd44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52DD48u;
        goto label_52dd48;
    }
    ctx->pc = 0x52DD40u;
    SET_GPR_U32(ctx, 31, 0x52DD48u);
    ctx->pc = 0x52DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD40u;
            // 0x52dd44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DD80u;
    if (runtime->hasFunction(0x52DD80u)) {
        auto targetFn = runtime->lookupFunction(0x52DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DD48u; }
        if (ctx->pc != 0x52DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DD80_0x52dd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DD48u; }
        if (ctx->pc != 0x52DD48u) { return; }
    }
    ctx->pc = 0x52DD48u;
label_52dd48:
    // 0x52dd48: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52dd4c:
    // 0x52dd4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52dd4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52dd50:
    // 0x52dd50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52dd54:
    if (ctx->pc == 0x52DD54u) {
        ctx->pc = 0x52DD54u;
            // 0x52dd54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DD58u;
        goto label_52dd58;
    }
    ctx->pc = 0x52DD50u;
    {
        const bool branch_taken_0x52dd50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52dd50) {
            ctx->pc = 0x52DD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD50u;
            // 0x52dd54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DD64u;
            goto label_52dd64;
        }
    }
    ctx->pc = 0x52DD58u;
label_52dd58:
    // 0x52dd58: 0xc0400a8  jal         func_1002A0
label_52dd5c:
    if (ctx->pc == 0x52DD5Cu) {
        ctx->pc = 0x52DD5Cu;
            // 0x52dd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DD60u;
        goto label_52dd60;
    }
    ctx->pc = 0x52DD58u;
    SET_GPR_U32(ctx, 31, 0x52DD60u);
    ctx->pc = 0x52DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD58u;
            // 0x52dd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DD60u; }
        if (ctx->pc != 0x52DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DD60u; }
        if (ctx->pc != 0x52DD60u) { return; }
    }
    ctx->pc = 0x52DD60u;
label_52dd60:
    // 0x52dd60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52dd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52dd64:
    // 0x52dd64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52dd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52dd68:
    // 0x52dd68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52dd68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52dd6c:
    // 0x52dd6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52dd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52dd70:
    // 0x52dd70: 0x3e00008  jr          $ra
label_52dd74:
    if (ctx->pc == 0x52DD74u) {
        ctx->pc = 0x52DD74u;
            // 0x52dd74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52DD78u;
        goto label_52dd78;
    }
    ctx->pc = 0x52DD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD70u;
            // 0x52dd74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DD78u;
label_52dd78:
    // 0x52dd78: 0x0  nop
    ctx->pc = 0x52dd78u;
    // NOP
label_52dd7c:
    // 0x52dd7c: 0x0  nop
    ctx->pc = 0x52dd7cu;
    // NOP
}
