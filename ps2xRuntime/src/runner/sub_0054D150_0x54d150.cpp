#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054D150
// Address: 0x54d150 - 0x54d760
void sub_0054D150_0x54d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054D150_0x54d150");
#endif

    switch (ctx->pc) {
        case 0x54d150u: goto label_54d150;
        case 0x54d154u: goto label_54d154;
        case 0x54d158u: goto label_54d158;
        case 0x54d15cu: goto label_54d15c;
        case 0x54d160u: goto label_54d160;
        case 0x54d164u: goto label_54d164;
        case 0x54d168u: goto label_54d168;
        case 0x54d16cu: goto label_54d16c;
        case 0x54d170u: goto label_54d170;
        case 0x54d174u: goto label_54d174;
        case 0x54d178u: goto label_54d178;
        case 0x54d17cu: goto label_54d17c;
        case 0x54d180u: goto label_54d180;
        case 0x54d184u: goto label_54d184;
        case 0x54d188u: goto label_54d188;
        case 0x54d18cu: goto label_54d18c;
        case 0x54d190u: goto label_54d190;
        case 0x54d194u: goto label_54d194;
        case 0x54d198u: goto label_54d198;
        case 0x54d19cu: goto label_54d19c;
        case 0x54d1a0u: goto label_54d1a0;
        case 0x54d1a4u: goto label_54d1a4;
        case 0x54d1a8u: goto label_54d1a8;
        case 0x54d1acu: goto label_54d1ac;
        case 0x54d1b0u: goto label_54d1b0;
        case 0x54d1b4u: goto label_54d1b4;
        case 0x54d1b8u: goto label_54d1b8;
        case 0x54d1bcu: goto label_54d1bc;
        case 0x54d1c0u: goto label_54d1c0;
        case 0x54d1c4u: goto label_54d1c4;
        case 0x54d1c8u: goto label_54d1c8;
        case 0x54d1ccu: goto label_54d1cc;
        case 0x54d1d0u: goto label_54d1d0;
        case 0x54d1d4u: goto label_54d1d4;
        case 0x54d1d8u: goto label_54d1d8;
        case 0x54d1dcu: goto label_54d1dc;
        case 0x54d1e0u: goto label_54d1e0;
        case 0x54d1e4u: goto label_54d1e4;
        case 0x54d1e8u: goto label_54d1e8;
        case 0x54d1ecu: goto label_54d1ec;
        case 0x54d1f0u: goto label_54d1f0;
        case 0x54d1f4u: goto label_54d1f4;
        case 0x54d1f8u: goto label_54d1f8;
        case 0x54d1fcu: goto label_54d1fc;
        case 0x54d200u: goto label_54d200;
        case 0x54d204u: goto label_54d204;
        case 0x54d208u: goto label_54d208;
        case 0x54d20cu: goto label_54d20c;
        case 0x54d210u: goto label_54d210;
        case 0x54d214u: goto label_54d214;
        case 0x54d218u: goto label_54d218;
        case 0x54d21cu: goto label_54d21c;
        case 0x54d220u: goto label_54d220;
        case 0x54d224u: goto label_54d224;
        case 0x54d228u: goto label_54d228;
        case 0x54d22cu: goto label_54d22c;
        case 0x54d230u: goto label_54d230;
        case 0x54d234u: goto label_54d234;
        case 0x54d238u: goto label_54d238;
        case 0x54d23cu: goto label_54d23c;
        case 0x54d240u: goto label_54d240;
        case 0x54d244u: goto label_54d244;
        case 0x54d248u: goto label_54d248;
        case 0x54d24cu: goto label_54d24c;
        case 0x54d250u: goto label_54d250;
        case 0x54d254u: goto label_54d254;
        case 0x54d258u: goto label_54d258;
        case 0x54d25cu: goto label_54d25c;
        case 0x54d260u: goto label_54d260;
        case 0x54d264u: goto label_54d264;
        case 0x54d268u: goto label_54d268;
        case 0x54d26cu: goto label_54d26c;
        case 0x54d270u: goto label_54d270;
        case 0x54d274u: goto label_54d274;
        case 0x54d278u: goto label_54d278;
        case 0x54d27cu: goto label_54d27c;
        case 0x54d280u: goto label_54d280;
        case 0x54d284u: goto label_54d284;
        case 0x54d288u: goto label_54d288;
        case 0x54d28cu: goto label_54d28c;
        case 0x54d290u: goto label_54d290;
        case 0x54d294u: goto label_54d294;
        case 0x54d298u: goto label_54d298;
        case 0x54d29cu: goto label_54d29c;
        case 0x54d2a0u: goto label_54d2a0;
        case 0x54d2a4u: goto label_54d2a4;
        case 0x54d2a8u: goto label_54d2a8;
        case 0x54d2acu: goto label_54d2ac;
        case 0x54d2b0u: goto label_54d2b0;
        case 0x54d2b4u: goto label_54d2b4;
        case 0x54d2b8u: goto label_54d2b8;
        case 0x54d2bcu: goto label_54d2bc;
        case 0x54d2c0u: goto label_54d2c0;
        case 0x54d2c4u: goto label_54d2c4;
        case 0x54d2c8u: goto label_54d2c8;
        case 0x54d2ccu: goto label_54d2cc;
        case 0x54d2d0u: goto label_54d2d0;
        case 0x54d2d4u: goto label_54d2d4;
        case 0x54d2d8u: goto label_54d2d8;
        case 0x54d2dcu: goto label_54d2dc;
        case 0x54d2e0u: goto label_54d2e0;
        case 0x54d2e4u: goto label_54d2e4;
        case 0x54d2e8u: goto label_54d2e8;
        case 0x54d2ecu: goto label_54d2ec;
        case 0x54d2f0u: goto label_54d2f0;
        case 0x54d2f4u: goto label_54d2f4;
        case 0x54d2f8u: goto label_54d2f8;
        case 0x54d2fcu: goto label_54d2fc;
        case 0x54d300u: goto label_54d300;
        case 0x54d304u: goto label_54d304;
        case 0x54d308u: goto label_54d308;
        case 0x54d30cu: goto label_54d30c;
        case 0x54d310u: goto label_54d310;
        case 0x54d314u: goto label_54d314;
        case 0x54d318u: goto label_54d318;
        case 0x54d31cu: goto label_54d31c;
        case 0x54d320u: goto label_54d320;
        case 0x54d324u: goto label_54d324;
        case 0x54d328u: goto label_54d328;
        case 0x54d32cu: goto label_54d32c;
        case 0x54d330u: goto label_54d330;
        case 0x54d334u: goto label_54d334;
        case 0x54d338u: goto label_54d338;
        case 0x54d33cu: goto label_54d33c;
        case 0x54d340u: goto label_54d340;
        case 0x54d344u: goto label_54d344;
        case 0x54d348u: goto label_54d348;
        case 0x54d34cu: goto label_54d34c;
        case 0x54d350u: goto label_54d350;
        case 0x54d354u: goto label_54d354;
        case 0x54d358u: goto label_54d358;
        case 0x54d35cu: goto label_54d35c;
        case 0x54d360u: goto label_54d360;
        case 0x54d364u: goto label_54d364;
        case 0x54d368u: goto label_54d368;
        case 0x54d36cu: goto label_54d36c;
        case 0x54d370u: goto label_54d370;
        case 0x54d374u: goto label_54d374;
        case 0x54d378u: goto label_54d378;
        case 0x54d37cu: goto label_54d37c;
        case 0x54d380u: goto label_54d380;
        case 0x54d384u: goto label_54d384;
        case 0x54d388u: goto label_54d388;
        case 0x54d38cu: goto label_54d38c;
        case 0x54d390u: goto label_54d390;
        case 0x54d394u: goto label_54d394;
        case 0x54d398u: goto label_54d398;
        case 0x54d39cu: goto label_54d39c;
        case 0x54d3a0u: goto label_54d3a0;
        case 0x54d3a4u: goto label_54d3a4;
        case 0x54d3a8u: goto label_54d3a8;
        case 0x54d3acu: goto label_54d3ac;
        case 0x54d3b0u: goto label_54d3b0;
        case 0x54d3b4u: goto label_54d3b4;
        case 0x54d3b8u: goto label_54d3b8;
        case 0x54d3bcu: goto label_54d3bc;
        case 0x54d3c0u: goto label_54d3c0;
        case 0x54d3c4u: goto label_54d3c4;
        case 0x54d3c8u: goto label_54d3c8;
        case 0x54d3ccu: goto label_54d3cc;
        case 0x54d3d0u: goto label_54d3d0;
        case 0x54d3d4u: goto label_54d3d4;
        case 0x54d3d8u: goto label_54d3d8;
        case 0x54d3dcu: goto label_54d3dc;
        case 0x54d3e0u: goto label_54d3e0;
        case 0x54d3e4u: goto label_54d3e4;
        case 0x54d3e8u: goto label_54d3e8;
        case 0x54d3ecu: goto label_54d3ec;
        case 0x54d3f0u: goto label_54d3f0;
        case 0x54d3f4u: goto label_54d3f4;
        case 0x54d3f8u: goto label_54d3f8;
        case 0x54d3fcu: goto label_54d3fc;
        case 0x54d400u: goto label_54d400;
        case 0x54d404u: goto label_54d404;
        case 0x54d408u: goto label_54d408;
        case 0x54d40cu: goto label_54d40c;
        case 0x54d410u: goto label_54d410;
        case 0x54d414u: goto label_54d414;
        case 0x54d418u: goto label_54d418;
        case 0x54d41cu: goto label_54d41c;
        case 0x54d420u: goto label_54d420;
        case 0x54d424u: goto label_54d424;
        case 0x54d428u: goto label_54d428;
        case 0x54d42cu: goto label_54d42c;
        case 0x54d430u: goto label_54d430;
        case 0x54d434u: goto label_54d434;
        case 0x54d438u: goto label_54d438;
        case 0x54d43cu: goto label_54d43c;
        case 0x54d440u: goto label_54d440;
        case 0x54d444u: goto label_54d444;
        case 0x54d448u: goto label_54d448;
        case 0x54d44cu: goto label_54d44c;
        case 0x54d450u: goto label_54d450;
        case 0x54d454u: goto label_54d454;
        case 0x54d458u: goto label_54d458;
        case 0x54d45cu: goto label_54d45c;
        case 0x54d460u: goto label_54d460;
        case 0x54d464u: goto label_54d464;
        case 0x54d468u: goto label_54d468;
        case 0x54d46cu: goto label_54d46c;
        case 0x54d470u: goto label_54d470;
        case 0x54d474u: goto label_54d474;
        case 0x54d478u: goto label_54d478;
        case 0x54d47cu: goto label_54d47c;
        case 0x54d480u: goto label_54d480;
        case 0x54d484u: goto label_54d484;
        case 0x54d488u: goto label_54d488;
        case 0x54d48cu: goto label_54d48c;
        case 0x54d490u: goto label_54d490;
        case 0x54d494u: goto label_54d494;
        case 0x54d498u: goto label_54d498;
        case 0x54d49cu: goto label_54d49c;
        case 0x54d4a0u: goto label_54d4a0;
        case 0x54d4a4u: goto label_54d4a4;
        case 0x54d4a8u: goto label_54d4a8;
        case 0x54d4acu: goto label_54d4ac;
        case 0x54d4b0u: goto label_54d4b0;
        case 0x54d4b4u: goto label_54d4b4;
        case 0x54d4b8u: goto label_54d4b8;
        case 0x54d4bcu: goto label_54d4bc;
        case 0x54d4c0u: goto label_54d4c0;
        case 0x54d4c4u: goto label_54d4c4;
        case 0x54d4c8u: goto label_54d4c8;
        case 0x54d4ccu: goto label_54d4cc;
        case 0x54d4d0u: goto label_54d4d0;
        case 0x54d4d4u: goto label_54d4d4;
        case 0x54d4d8u: goto label_54d4d8;
        case 0x54d4dcu: goto label_54d4dc;
        case 0x54d4e0u: goto label_54d4e0;
        case 0x54d4e4u: goto label_54d4e4;
        case 0x54d4e8u: goto label_54d4e8;
        case 0x54d4ecu: goto label_54d4ec;
        case 0x54d4f0u: goto label_54d4f0;
        case 0x54d4f4u: goto label_54d4f4;
        case 0x54d4f8u: goto label_54d4f8;
        case 0x54d4fcu: goto label_54d4fc;
        case 0x54d500u: goto label_54d500;
        case 0x54d504u: goto label_54d504;
        case 0x54d508u: goto label_54d508;
        case 0x54d50cu: goto label_54d50c;
        case 0x54d510u: goto label_54d510;
        case 0x54d514u: goto label_54d514;
        case 0x54d518u: goto label_54d518;
        case 0x54d51cu: goto label_54d51c;
        case 0x54d520u: goto label_54d520;
        case 0x54d524u: goto label_54d524;
        case 0x54d528u: goto label_54d528;
        case 0x54d52cu: goto label_54d52c;
        case 0x54d530u: goto label_54d530;
        case 0x54d534u: goto label_54d534;
        case 0x54d538u: goto label_54d538;
        case 0x54d53cu: goto label_54d53c;
        case 0x54d540u: goto label_54d540;
        case 0x54d544u: goto label_54d544;
        case 0x54d548u: goto label_54d548;
        case 0x54d54cu: goto label_54d54c;
        case 0x54d550u: goto label_54d550;
        case 0x54d554u: goto label_54d554;
        case 0x54d558u: goto label_54d558;
        case 0x54d55cu: goto label_54d55c;
        case 0x54d560u: goto label_54d560;
        case 0x54d564u: goto label_54d564;
        case 0x54d568u: goto label_54d568;
        case 0x54d56cu: goto label_54d56c;
        case 0x54d570u: goto label_54d570;
        case 0x54d574u: goto label_54d574;
        case 0x54d578u: goto label_54d578;
        case 0x54d57cu: goto label_54d57c;
        case 0x54d580u: goto label_54d580;
        case 0x54d584u: goto label_54d584;
        case 0x54d588u: goto label_54d588;
        case 0x54d58cu: goto label_54d58c;
        case 0x54d590u: goto label_54d590;
        case 0x54d594u: goto label_54d594;
        case 0x54d598u: goto label_54d598;
        case 0x54d59cu: goto label_54d59c;
        case 0x54d5a0u: goto label_54d5a0;
        case 0x54d5a4u: goto label_54d5a4;
        case 0x54d5a8u: goto label_54d5a8;
        case 0x54d5acu: goto label_54d5ac;
        case 0x54d5b0u: goto label_54d5b0;
        case 0x54d5b4u: goto label_54d5b4;
        case 0x54d5b8u: goto label_54d5b8;
        case 0x54d5bcu: goto label_54d5bc;
        case 0x54d5c0u: goto label_54d5c0;
        case 0x54d5c4u: goto label_54d5c4;
        case 0x54d5c8u: goto label_54d5c8;
        case 0x54d5ccu: goto label_54d5cc;
        case 0x54d5d0u: goto label_54d5d0;
        case 0x54d5d4u: goto label_54d5d4;
        case 0x54d5d8u: goto label_54d5d8;
        case 0x54d5dcu: goto label_54d5dc;
        case 0x54d5e0u: goto label_54d5e0;
        case 0x54d5e4u: goto label_54d5e4;
        case 0x54d5e8u: goto label_54d5e8;
        case 0x54d5ecu: goto label_54d5ec;
        case 0x54d5f0u: goto label_54d5f0;
        case 0x54d5f4u: goto label_54d5f4;
        case 0x54d5f8u: goto label_54d5f8;
        case 0x54d5fcu: goto label_54d5fc;
        case 0x54d600u: goto label_54d600;
        case 0x54d604u: goto label_54d604;
        case 0x54d608u: goto label_54d608;
        case 0x54d60cu: goto label_54d60c;
        case 0x54d610u: goto label_54d610;
        case 0x54d614u: goto label_54d614;
        case 0x54d618u: goto label_54d618;
        case 0x54d61cu: goto label_54d61c;
        case 0x54d620u: goto label_54d620;
        case 0x54d624u: goto label_54d624;
        case 0x54d628u: goto label_54d628;
        case 0x54d62cu: goto label_54d62c;
        case 0x54d630u: goto label_54d630;
        case 0x54d634u: goto label_54d634;
        case 0x54d638u: goto label_54d638;
        case 0x54d63cu: goto label_54d63c;
        case 0x54d640u: goto label_54d640;
        case 0x54d644u: goto label_54d644;
        case 0x54d648u: goto label_54d648;
        case 0x54d64cu: goto label_54d64c;
        case 0x54d650u: goto label_54d650;
        case 0x54d654u: goto label_54d654;
        case 0x54d658u: goto label_54d658;
        case 0x54d65cu: goto label_54d65c;
        case 0x54d660u: goto label_54d660;
        case 0x54d664u: goto label_54d664;
        case 0x54d668u: goto label_54d668;
        case 0x54d66cu: goto label_54d66c;
        case 0x54d670u: goto label_54d670;
        case 0x54d674u: goto label_54d674;
        case 0x54d678u: goto label_54d678;
        case 0x54d67cu: goto label_54d67c;
        case 0x54d680u: goto label_54d680;
        case 0x54d684u: goto label_54d684;
        case 0x54d688u: goto label_54d688;
        case 0x54d68cu: goto label_54d68c;
        case 0x54d690u: goto label_54d690;
        case 0x54d694u: goto label_54d694;
        case 0x54d698u: goto label_54d698;
        case 0x54d69cu: goto label_54d69c;
        case 0x54d6a0u: goto label_54d6a0;
        case 0x54d6a4u: goto label_54d6a4;
        case 0x54d6a8u: goto label_54d6a8;
        case 0x54d6acu: goto label_54d6ac;
        case 0x54d6b0u: goto label_54d6b0;
        case 0x54d6b4u: goto label_54d6b4;
        case 0x54d6b8u: goto label_54d6b8;
        case 0x54d6bcu: goto label_54d6bc;
        case 0x54d6c0u: goto label_54d6c0;
        case 0x54d6c4u: goto label_54d6c4;
        case 0x54d6c8u: goto label_54d6c8;
        case 0x54d6ccu: goto label_54d6cc;
        case 0x54d6d0u: goto label_54d6d0;
        case 0x54d6d4u: goto label_54d6d4;
        case 0x54d6d8u: goto label_54d6d8;
        case 0x54d6dcu: goto label_54d6dc;
        case 0x54d6e0u: goto label_54d6e0;
        case 0x54d6e4u: goto label_54d6e4;
        case 0x54d6e8u: goto label_54d6e8;
        case 0x54d6ecu: goto label_54d6ec;
        case 0x54d6f0u: goto label_54d6f0;
        case 0x54d6f4u: goto label_54d6f4;
        case 0x54d6f8u: goto label_54d6f8;
        case 0x54d6fcu: goto label_54d6fc;
        case 0x54d700u: goto label_54d700;
        case 0x54d704u: goto label_54d704;
        case 0x54d708u: goto label_54d708;
        case 0x54d70cu: goto label_54d70c;
        case 0x54d710u: goto label_54d710;
        case 0x54d714u: goto label_54d714;
        case 0x54d718u: goto label_54d718;
        case 0x54d71cu: goto label_54d71c;
        case 0x54d720u: goto label_54d720;
        case 0x54d724u: goto label_54d724;
        case 0x54d728u: goto label_54d728;
        case 0x54d72cu: goto label_54d72c;
        case 0x54d730u: goto label_54d730;
        case 0x54d734u: goto label_54d734;
        case 0x54d738u: goto label_54d738;
        case 0x54d73cu: goto label_54d73c;
        case 0x54d740u: goto label_54d740;
        case 0x54d744u: goto label_54d744;
        case 0x54d748u: goto label_54d748;
        case 0x54d74cu: goto label_54d74c;
        case 0x54d750u: goto label_54d750;
        case 0x54d754u: goto label_54d754;
        case 0x54d758u: goto label_54d758;
        case 0x54d75cu: goto label_54d75c;
        default: break;
    }

    ctx->pc = 0x54d150u;

label_54d150:
    // 0x54d150: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x54d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_54d154:
    // 0x54d154: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d158:
    // 0x54d158: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x54d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_54d15c:
    // 0x54d15c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x54d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_54d160:
    // 0x54d160: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x54d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_54d164:
    // 0x54d164: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x54d164u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54d168:
    // 0x54d168: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x54d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_54d16c:
    // 0x54d16c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x54d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_54d170:
    // 0x54d170: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x54d170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54d174:
    // 0x54d174: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54d178:
    // 0x54d178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54d178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d17c:
    // 0x54d17c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54d180:
    // 0x54d180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54d184:
    // 0x54d184: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54d188:
    // 0x54d188: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x54d188u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_54d18c:
    // 0x54d18c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x54d18cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_54d190:
    // 0x54d190: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54d190u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54d194:
    // 0x54d194: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54d194u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54d198:
    // 0x54d198: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54d198u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54d19c:
    // 0x54d19c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54d19cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54d1a0:
    // 0x54d1a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54d1a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54d1a4:
    // 0x54d1a4: 0x9454db30  lhu         $s4, -0x24D0($v0)
    ctx->pc = 0x54d1a4u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
label_54d1a8:
    // 0x54d1a8: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x54d1a8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
label_54d1ac:
    // 0x54d1ac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d1b0:
    // 0x54d1b0: 0x9453db32  lhu         $s3, -0x24CE($v0)
    ctx->pc = 0x54d1b0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957874)));
label_54d1b4:
    // 0x54d1b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d1b8:
    // 0x54d1b8: 0x9452db38  lhu         $s2, -0x24C8($v0)
    ctx->pc = 0x54d1b8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957880)));
label_54d1bc:
    // 0x54d1bc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d1c0:
    // 0x54d1c0: 0x9451db3a  lhu         $s1, -0x24C6($v0)
    ctx->pc = 0x54d1c0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957882)));
label_54d1c4:
    // 0x54d1c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d1c8:
    // 0x54d1c8: 0x9450db40  lhu         $s0, -0x24C0($v0)
    ctx->pc = 0x54d1c8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957888)));
label_54d1cc:
    // 0x54d1cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d1d0:
    // 0x54d1d0: 0x9456db42  lhu         $s6, -0x24BE($v0)
    ctx->pc = 0x54d1d0u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957890)));
label_54d1d4:
    // 0x54d1d4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54d1d8:
    // 0x54d1d8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54d1dc:
    // 0x54d1dc: 0xc0506ac  jal         func_141AB0
label_54d1e0:
    if (ctx->pc == 0x54D1E0u) {
        ctx->pc = 0x54D1E0u;
            // 0x54d1e0: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x54D1E4u;
        goto label_54d1e4;
    }
    ctx->pc = 0x54D1DCu;
    SET_GPR_U32(ctx, 31, 0x54D1E4u);
    ctx->pc = 0x54D1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D1DCu;
            // 0x54d1e0: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D1E4u; }
        if (ctx->pc != 0x54D1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D1E4u; }
        if (ctx->pc != 0x54D1E4u) { return; }
    }
    ctx->pc = 0x54D1E4u;
label_54d1e4:
    // 0x54d1e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54d1e8:
    // 0x54d1e8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54d1ec:
    // 0x54d1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d1f0:
    // 0x54d1f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54d1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54d1f4:
    // 0x54d1f4: 0x320f809  jalr        $t9
label_54d1f8:
    if (ctx->pc == 0x54D1F8u) {
        ctx->pc = 0x54D1F8u;
            // 0x54d1f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54D1FCu;
        goto label_54d1fc;
    }
    ctx->pc = 0x54D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D1FCu);
        ctx->pc = 0x54D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D1F4u;
            // 0x54d1f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D1FCu; }
            if (ctx->pc != 0x54D1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x54D1FCu;
label_54d1fc:
    // 0x54d1fc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d200:
    // 0x54d200: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d204:
    // 0x54d204: 0x8446d970  lh          $a2, -0x2690($v0)
    ctx->pc = 0x54d204u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957424)));
label_54d208:
    // 0x54d208: 0x24a5e0f0  addiu       $a1, $a1, -0x1F10
    ctx->pc = 0x54d208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959344));
label_54d20c:
    // 0x54d20c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x54d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_54d210:
    // 0x54d210: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x54d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54d214:
    // 0x54d214: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x54d214u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d218:
    // 0x54d218: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d21c:
    // 0x54d21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d220:
    // 0x54d220: 0x8444d972  lh          $a0, -0x268E($v0)
    ctx->pc = 0x54d220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957426)));
label_54d224:
    // 0x54d224: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d228:
    // 0x54d228: 0x8442d974  lh          $v0, -0x268C($v0)
    ctx->pc = 0x54d228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957428)));
label_54d22c:
    // 0x54d22c: 0x4600d600  add.s       $f24, $f26, $f0
    ctx->pc = 0x54d22cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_54d230:
    // 0x54d230: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54d230u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d234:
    // 0x54d234: 0x0  nop
    ctx->pc = 0x54d234u;
    // NOP
label_54d238:
    // 0x54d238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d23c:
    // 0x54d23c: 0x4600cdc0  add.s       $f23, $f25, $f0
    ctx->pc = 0x54d23cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_54d240:
    // 0x54d240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d244:
    // 0x54d244: 0x0  nop
    ctx->pc = 0x54d244u;
    // NOP
label_54d248:
    // 0x54d248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54d248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54d24c:
    // 0x54d24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54d24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d250:
    // 0x54d250: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x54d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54d254:
    // 0x54d254: 0x4603bd00  add.s       $f20, $f23, $f3
    ctx->pc = 0x54d254u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
label_54d258:
    // 0x54d258: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x54d258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54d25c:
    // 0x54d25c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x54d25cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_54d260:
    // 0x54d260: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_54d264:
    if (ctx->pc == 0x54D264u) {
        ctx->pc = 0x54D264u;
            // 0x54d264: 0x4616155d  msub.s      $f21, $f2, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
        ctx->pc = 0x54D268u;
        goto label_54d268;
    }
    ctx->pc = 0x54D260u;
    {
        const bool branch_taken_0x54d260 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x54D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D260u;
            // 0x54d264: 0x4616155d  msub.s      $f21, $f2, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d260) {
            ctx->pc = 0x54D274u;
            goto label_54d274;
        }
    }
    ctx->pc = 0x54D268u;
label_54d268:
    // 0x54d268: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54d268u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d26c:
    // 0x54d26c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d270:
    if (ctx->pc == 0x54D270u) {
        ctx->pc = 0x54D270u;
            // 0x54d270: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D274u;
        goto label_54d274;
    }
    ctx->pc = 0x54D26Cu;
    {
        const bool branch_taken_0x54d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D26Cu;
            // 0x54d270: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d26c) {
            ctx->pc = 0x54D290u;
            goto label_54d290;
        }
    }
    ctx->pc = 0x54D274u;
label_54d274:
    // 0x54d274: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x54d274u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_54d278:
    // 0x54d278: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x54d278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_54d27c:
    // 0x54d27c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d280:
    // 0x54d280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d284:
    // 0x54d284: 0x0  nop
    ctx->pc = 0x54d284u;
    // NOP
label_54d288:
    // 0x54d288: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d28c:
    // 0x54d28c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d28cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d290:
    // 0x54d290: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
label_54d294:
    if (ctx->pc == 0x54D294u) {
        ctx->pc = 0x54D294u;
            // 0x54d294: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x54D298u;
        goto label_54d298;
    }
    ctx->pc = 0x54D290u;
    {
        const bool branch_taken_0x54d290 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x54d290) {
            ctx->pc = 0x54D294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D290u;
            // 0x54d294: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D2A4u;
            goto label_54d2a4;
        }
    }
    ctx->pc = 0x54D298u;
label_54d298:
    // 0x54d298: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54d298u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d29c:
    // 0x54d29c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d2a0:
    if (ctx->pc == 0x54D2A0u) {
        ctx->pc = 0x54D2A0u;
            // 0x54d2a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D2A4u;
        goto label_54d2a4;
    }
    ctx->pc = 0x54D29Cu;
    {
        const bool branch_taken_0x54d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D29Cu;
            // 0x54d2a0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d29c) {
            ctx->pc = 0x54D2BCu;
            goto label_54d2bc;
        }
    }
    ctx->pc = 0x54D2A4u;
label_54d2a4:
    // 0x54d2a4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x54d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_54d2a8:
    // 0x54d2a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d2ac:
    // 0x54d2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d2b0:
    // 0x54d2b0: 0x0  nop
    ctx->pc = 0x54d2b0u;
    // NOP
label_54d2b4:
    // 0x54d2b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d2b8:
    // 0x54d2b8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d2b8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d2bc:
    // 0x54d2bc: 0x4616c380  add.s       $f14, $f24, $f22
    ctx->pc = 0x54d2bcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_54d2c0:
    // 0x54d2c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d2c4:
    // 0x54d2c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d2c8:
    // 0x54d2c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d2cc:
    // 0x54d2cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d2d0:
    // 0x54d2d0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x54d2d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_54d2d4:
    // 0x54d2d4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54d2d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54d2d8:
    // 0x54d2d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d2dc:
    // 0x54d2dc: 0xc0bc284  jal         func_2F0A10
label_54d2e0:
    if (ctx->pc == 0x54D2E0u) {
        ctx->pc = 0x54D2E0u;
            // 0x54d2e0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54D2E4u;
        goto label_54d2e4;
    }
    ctx->pc = 0x54D2DCu;
    SET_GPR_U32(ctx, 31, 0x54D2E4u);
    ctx->pc = 0x54D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D2DCu;
            // 0x54d2e0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D2E4u; }
        if (ctx->pc != 0x54D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D2E4u; }
        if (ctx->pc != 0x54D2E4u) { return; }
    }
    ctx->pc = 0x54D2E4u;
label_54d2e4:
    // 0x54d2e4: 0x4616c600  add.s       $f24, $f24, $f22
    ctx->pc = 0x54d2e4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_54d2e8:
    // 0x54d2e8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d2ec:
    // 0x54d2ec: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_54d2f0:
    if (ctx->pc == 0x54D2F0u) {
        ctx->pc = 0x54D2F0u;
            // 0x54d2f0: 0x24a5e390  addiu       $a1, $a1, -0x1C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960016));
        ctx->pc = 0x54D2F4u;
        goto label_54d2f4;
    }
    ctx->pc = 0x54D2ECu;
    {
        const bool branch_taken_0x54d2ec = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x54D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D2ECu;
            // 0x54d2f0: 0x24a5e390  addiu       $a1, $a1, -0x1C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d2ec) {
            ctx->pc = 0x54D300u;
            goto label_54d300;
        }
    }
    ctx->pc = 0x54D2F4u;
label_54d2f4:
    // 0x54d2f4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54d2f4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d2f8:
    // 0x54d2f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d2fc:
    if (ctx->pc == 0x54D2FCu) {
        ctx->pc = 0x54D2FCu;
            // 0x54d2fc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D300u;
        goto label_54d300;
    }
    ctx->pc = 0x54D2F8u;
    {
        const bool branch_taken_0x54d2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D2F8u;
            // 0x54d2fc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d2f8) {
            ctx->pc = 0x54D31Cu;
            goto label_54d31c;
        }
    }
    ctx->pc = 0x54D300u;
label_54d300:
    // 0x54d300: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x54d300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_54d304:
    // 0x54d304: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x54d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_54d308:
    // 0x54d308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d30c:
    // 0x54d30c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d310:
    // 0x54d310: 0x0  nop
    ctx->pc = 0x54d310u;
    // NOP
label_54d314:
    // 0x54d314: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d318:
    // 0x54d318: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d318u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d31c:
    // 0x54d31c: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
label_54d320:
    if (ctx->pc == 0x54D320u) {
        ctx->pc = 0x54D320u;
            // 0x54d320: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x54D324u;
        goto label_54d324;
    }
    ctx->pc = 0x54D31Cu;
    {
        const bool branch_taken_0x54d31c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x54d31c) {
            ctx->pc = 0x54D320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D31Cu;
            // 0x54d320: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D330u;
            goto label_54d330;
        }
    }
    ctx->pc = 0x54D324u;
label_54d324:
    // 0x54d324: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54d324u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d328:
    // 0x54d328: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d32c:
    if (ctx->pc == 0x54D32Cu) {
        ctx->pc = 0x54D32Cu;
            // 0x54d32c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D330u;
        goto label_54d330;
    }
    ctx->pc = 0x54D328u;
    {
        const bool branch_taken_0x54d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D328u;
            // 0x54d32c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d328) {
            ctx->pc = 0x54D348u;
            goto label_54d348;
        }
    }
    ctx->pc = 0x54D330u;
label_54d330:
    // 0x54d330: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x54d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_54d334:
    // 0x54d334: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d338:
    // 0x54d338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d33c:
    // 0x54d33c: 0x0  nop
    ctx->pc = 0x54d33cu;
    // NOP
label_54d340:
    // 0x54d340: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d344:
    // 0x54d344: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d344u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d348:
    // 0x54d348: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x54d348u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_54d34c:
    // 0x54d34c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d350:
    // 0x54d350: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d354:
    // 0x54d354: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d358:
    // 0x54d358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d35c:
    // 0x54d35c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x54d35cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_54d360:
    // 0x54d360: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d364:
    // 0x54d364: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x54d364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_54d368:
    // 0x54d368: 0xc0bc284  jal         func_2F0A10
label_54d36c:
    if (ctx->pc == 0x54D36Cu) {
        ctx->pc = 0x54D36Cu;
            // 0x54d36c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x54D370u;
        goto label_54d370;
    }
    ctx->pc = 0x54D368u;
    SET_GPR_U32(ctx, 31, 0x54D370u);
    ctx->pc = 0x54D36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D368u;
            // 0x54d36c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D370u; }
        if (ctx->pc != 0x54D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D370u; }
        if (ctx->pc != 0x54D370u) { return; }
    }
    ctx->pc = 0x54D370u;
label_54d370:
    // 0x54d370: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d374:
    // 0x54d374: 0x24a5e0f0  addiu       $a1, $a1, -0x1F10
    ctx->pc = 0x54d374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959344));
label_54d378:
    // 0x54d378: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54d37c:
    // 0x54d37c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54d380:
    // 0x54d380: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_54d384:
    if (ctx->pc == 0x54D384u) {
        ctx->pc = 0x54D384u;
            // 0x54d384: 0x4615c600  add.s       $f24, $f24, $f21 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
        ctx->pc = 0x54D388u;
        goto label_54d388;
    }
    ctx->pc = 0x54D380u;
    {
        const bool branch_taken_0x54d380 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x54D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D380u;
            // 0x54d384: 0x4615c600  add.s       $f24, $f24, $f21 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d380) {
            ctx->pc = 0x54D394u;
            goto label_54d394;
        }
    }
    ctx->pc = 0x54D388u;
label_54d388:
    // 0x54d388: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54d388u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d38c:
    // 0x54d38c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d390:
    if (ctx->pc == 0x54D390u) {
        ctx->pc = 0x54D390u;
            // 0x54d390: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D394u;
        goto label_54d394;
    }
    ctx->pc = 0x54D38Cu;
    {
        const bool branch_taken_0x54d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D38Cu;
            // 0x54d390: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d38c) {
            ctx->pc = 0x54D3B0u;
            goto label_54d3b0;
        }
    }
    ctx->pc = 0x54D394u;
label_54d394:
    // 0x54d394: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x54d394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_54d398:
    // 0x54d398: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x54d398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_54d39c:
    // 0x54d39c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d3a0:
    // 0x54d3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d3a4:
    // 0x54d3a4: 0x0  nop
    ctx->pc = 0x54d3a4u;
    // NOP
label_54d3a8:
    // 0x54d3a8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d3a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d3ac:
    // 0x54d3ac: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d3acu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d3b0:
    // 0x54d3b0: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
label_54d3b4:
    if (ctx->pc == 0x54D3B4u) {
        ctx->pc = 0x54D3B4u;
            // 0x54d3b4: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x54D3B8u;
        goto label_54d3b8;
    }
    ctx->pc = 0x54D3B0u;
    {
        const bool branch_taken_0x54d3b0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x54d3b0) {
            ctx->pc = 0x54D3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D3B0u;
            // 0x54d3b4: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D3C4u;
            goto label_54d3c4;
        }
    }
    ctx->pc = 0x54D3B8u;
label_54d3b8:
    // 0x54d3b8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54d3b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d3bc:
    // 0x54d3bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d3c0:
    if (ctx->pc == 0x54D3C0u) {
        ctx->pc = 0x54D3C0u;
            // 0x54d3c0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D3C4u;
        goto label_54d3c4;
    }
    ctx->pc = 0x54D3BCu;
    {
        const bool branch_taken_0x54d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D3BCu;
            // 0x54d3c0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d3bc) {
            ctx->pc = 0x54D3DCu;
            goto label_54d3dc;
        }
    }
    ctx->pc = 0x54D3C4u;
label_54d3c4:
    // 0x54d3c4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x54d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_54d3c8:
    // 0x54d3c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d3cc:
    // 0x54d3cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d3d0:
    // 0x54d3d0: 0x0  nop
    ctx->pc = 0x54d3d0u;
    // NOP
label_54d3d4:
    // 0x54d3d4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d3d8:
    // 0x54d3d8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d3d8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d3dc:
    // 0x54d3dc: 0x4602c300  add.s       $f12, $f24, $f2
    ctx->pc = 0x54d3dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_54d3e0:
    // 0x54d3e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d3e4:
    // 0x54d3e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d3e8:
    // 0x54d3e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d3ec:
    // 0x54d3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d3f0:
    // 0x54d3f0: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x54d3f0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_54d3f4:
    // 0x54d3f4: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x54d3f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_54d3f8:
    // 0x54d3f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d3fc:
    // 0x54d3fc: 0xc0bc284  jal         func_2F0A10
label_54d400:
    if (ctx->pc == 0x54D400u) {
        ctx->pc = 0x54D400u;
            // 0x54d400: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x54D404u;
        goto label_54d404;
    }
    ctx->pc = 0x54D3FCu;
    SET_GPR_U32(ctx, 31, 0x54D404u);
    ctx->pc = 0x54D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D3FCu;
            // 0x54d400: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D404u; }
        if (ctx->pc != 0x54D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D404u; }
        if (ctx->pc != 0x54D404u) { return; }
    }
    ctx->pc = 0x54D404u;
label_54d404:
    // 0x54d404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54d408:
    // 0x54d408: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54d40c:
    // 0x54d40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d410:
    // 0x54d410: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54d410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54d414:
    // 0x54d414: 0x320f809  jalr        $t9
label_54d418:
    if (ctx->pc == 0x54D418u) {
        ctx->pc = 0x54D41Cu;
        goto label_54d41c;
    }
    ctx->pc = 0x54D414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D41Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D41Cu; }
            if (ctx->pc != 0x54D41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54D41Cu;
label_54d41c:
    // 0x54d41c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d420:
    // 0x54d420: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54d420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54d424:
    // 0x54d424: 0x8445d974  lh          $a1, -0x268C($v0)
    ctx->pc = 0x54d424u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957428)));
label_54d428:
    // 0x54d428: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x54d428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54d42c:
    // 0x54d42c: 0x8464d970  lh          $a0, -0x2690($v1)
    ctx->pc = 0x54d42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957424)));
label_54d430:
    // 0x54d430: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x54d430u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_54d434:
    // 0x54d434: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d438:
    // 0x54d438: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x54d438u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d43c:
    // 0x54d43c: 0x8443d972  lh          $v1, -0x268E($v0)
    ctx->pc = 0x54d43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957426)));
label_54d440:
    // 0x54d440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54d440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54d444:
    // 0x54d444: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x54d444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
label_54d448:
    // 0x54d448: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54d448u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d44c:
    // 0x54d44c: 0x0  nop
    ctx->pc = 0x54d44cu;
    // NOP
label_54d450:
    // 0x54d450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d454:
    // 0x54d454: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x54d454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_54d458:
    // 0x54d458: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x54d458u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54d45c:
    // 0x54d45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d460:
    // 0x54d460: 0x0  nop
    ctx->pc = 0x54d460u;
    // NOP
label_54d464:
    // 0x54d464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d468:
    // 0x54d468: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_54d46c:
    if (ctx->pc == 0x54D46Cu) {
        ctx->pc = 0x54D46Cu;
            // 0x54d46c: 0x4600cd00  add.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->pc = 0x54D470u;
        goto label_54d470;
    }
    ctx->pc = 0x54D468u;
    {
        const bool branch_taken_0x54d468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54D46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D468u;
            // 0x54d46c: 0x4600cd00  add.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d468) {
            ctx->pc = 0x54D474u;
            goto label_54d474;
        }
    }
    ctx->pc = 0x54D470u;
label_54d470:
    // 0x54d470: 0x26b3ffff  addiu       $s3, $s5, -0x1
    ctx->pc = 0x54d470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_54d474:
    // 0x54d474: 0x2aa20011  slti        $v0, $s5, 0x11
    ctx->pc = 0x54d474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
label_54d478:
    // 0x54d478: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_54d47c:
    if (ctx->pc == 0x54D47Cu) {
        ctx->pc = 0x54D47Cu;
            // 0x54d47c: 0x3c02cccc  lui         $v0, 0xCCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
        ctx->pc = 0x54D480u;
        goto label_54d480;
    }
    ctx->pc = 0x54D478u;
    {
        const bool branch_taken_0x54d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54d478) {
            ctx->pc = 0x54D47Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D478u;
            // 0x54d47c: 0x3c02cccc  lui         $v0, 0xCCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D488u;
            goto label_54d488;
        }
    }
    ctx->pc = 0x54D480u;
label_54d480:
    // 0x54d480: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x54d480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_54d484:
    // 0x54d484: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x54d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_54d488:
    // 0x54d488: 0x8ee40054  lw          $a0, 0x54($s7)
    ctx->pc = 0x54d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_54d48c:
    // 0x54d48c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x54d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_54d490:
    // 0x54d490: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54d490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d494:
    // 0x54d494: 0x530019  multu       $v0, $s3
    ctx->pc = 0x54d494u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_54d498:
    // 0x54d498: 0x1010  mfhi        $v0
    ctx->pc = 0x54d498u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_54d49c:
    // 0x54d49c: 0xc0c9a58  jal         func_326960
label_54d4a0:
    if (ctx->pc == 0x54D4A0u) {
        ctx->pc = 0x54D4A0u;
            // 0x54d4a0: 0x2a102  srl         $s4, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x54D4A4u;
        goto label_54d4a4;
    }
    ctx->pc = 0x54D49Cu;
    SET_GPR_U32(ctx, 31, 0x54D4A4u);
    ctx->pc = 0x54D4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D49Cu;
            // 0x54d4a0: 0x2a102  srl         $s4, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D4A4u; }
        if (ctx->pc != 0x54D4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D4A4u; }
        if (ctx->pc != 0x54D4A4u) { return; }
    }
    ctx->pc = 0x54D4A4u;
label_54d4a4:
    // 0x54d4a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x54d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54d4a8:
    // 0x54d4a8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d4ac:
    // 0x54d4ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d4b0:
    // 0x54d4b0: 0xc441db50  lwc1        $f1, -0x24B0($v0)
    ctx->pc = 0x54d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54d4b4:
    // 0x54d4b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x54d4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_54d4b8:
    // 0x54d4b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d4bc:
    // 0x54d4bc: 0xc442db54  lwc1        $f2, -0x24AC($v0)
    ctx->pc = 0x54d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54d4c0:
    // 0x54d4c0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x54d4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_54d4c4:
    // 0x54d4c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d4c8:
    // 0x54d4c8: 0xc440db58  lwc1        $f0, -0x24A8($v0)
    ctx->pc = 0x54d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54d4cc:
    // 0x54d4cc: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x54d4ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_54d4d0:
    // 0x54d4d0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d4d4:
    // 0x54d4d4: 0xc441db5c  lwc1        $f1, -0x24A4($v0)
    ctx->pc = 0x54d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54d4d8:
    // 0x54d4d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x54d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_54d4dc:
    // 0x54d4dc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d4e0:
    // 0x54d4e0: 0xc440db60  lwc1        $f0, -0x24A0($v0)
    ctx->pc = 0x54d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54d4e4:
    // 0x54d4e4: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x54d4e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_54d4e8:
    // 0x54d4e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x54d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_54d4ec:
    // 0x54d4ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x54d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_54d4f0:
    // 0x54d4f0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x54d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_54d4f4:
    // 0x54d4f4: 0x320f809  jalr        $t9
label_54d4f8:
    if (ctx->pc == 0x54D4F8u) {
        ctx->pc = 0x54D4F8u;
            // 0x54d4f8: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->pc = 0x54D4FCu;
        goto label_54d4fc;
    }
    ctx->pc = 0x54D4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D4FCu);
        ctx->pc = 0x54D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D4F4u;
            // 0x54d4f8: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D4FCu; }
            if (ctx->pc != 0x54D4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x54D4FCu;
label_54d4fc:
    // 0x54d4fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54d500:
    // 0x54d500: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54d500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54d504:
    // 0x54d504: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d508:
    // 0x54d508: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54d508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54d50c:
    // 0x54d50c: 0x320f809  jalr        $t9
label_54d510:
    if (ctx->pc == 0x54D510u) {
        ctx->pc = 0x54D510u;
            // 0x54d510: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54D514u;
        goto label_54d514;
    }
    ctx->pc = 0x54D50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D514u);
        ctx->pc = 0x54D510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D50Cu;
            // 0x54d510: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D514u; }
            if (ctx->pc != 0x54D514u) { return; }
        }
        }
    }
    ctx->pc = 0x54D514u;
label_54d514:
    // 0x54d514: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x54d514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_54d518:
    // 0x54d518: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x54d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_54d51c:
    // 0x54d51c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x54d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_54d520:
    // 0x54d520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54d520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_54d524:
    // 0x54d524: 0x2632023  subu        $a0, $s3, $v1
    ctx->pc = 0x54d524u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_54d528:
    // 0x54d528: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x54d528u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_54d52c:
    // 0x54d52c: 0x1010  mfhi        $v0
    ctx->pc = 0x54d52cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_54d530:
    // 0x54d530: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_54d534:
    if (ctx->pc == 0x54D534u) {
        ctx->pc = 0x54D534u;
            // 0x54d534: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x54D538u;
        goto label_54d538;
    }
    ctx->pc = 0x54D530u;
    {
        const bool branch_taken_0x54d530 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x54d530) {
            ctx->pc = 0x54D534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D530u;
            // 0x54d534: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D544u;
            goto label_54d544;
        }
    }
    ctx->pc = 0x54D538u;
label_54d538:
    // 0x54d538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d53c:
    // 0x54d53c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d540:
    if (ctx->pc == 0x54D540u) {
        ctx->pc = 0x54D540u;
            // 0x54d540: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D544u;
        goto label_54d544;
    }
    ctx->pc = 0x54D53Cu;
    {
        const bool branch_taken_0x54d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D53Cu;
            // 0x54d540: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d53c) {
            ctx->pc = 0x54D55Cu;
            goto label_54d55c;
        }
    }
    ctx->pc = 0x54D544u;
label_54d544:
    // 0x54d544: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54d548:
    // 0x54d548: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d54c:
    // 0x54d54c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d54cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d550:
    // 0x54d550: 0x0  nop
    ctx->pc = 0x54d550u;
    // NOP
label_54d554:
    // 0x54d554: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54d554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54d558:
    // 0x54d558: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x54d558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_54d55c:
    // 0x54d55c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x54d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_54d560:
    // 0x54d560: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x54d560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_54d564:
    // 0x54d564: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x54d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_54d568:
    // 0x54d568: 0x440019  multu       $v0, $a0
    ctx->pc = 0x54d568u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_54d56c:
    // 0x54d56c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d570:
    // 0x54d570: 0x0  nop
    ctx->pc = 0x54d570u;
    // NOP
label_54d574:
    // 0x54d574: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x54d574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_54d578:
    // 0x54d578: 0x1010  mfhi        $v0
    ctx->pc = 0x54d578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_54d57c:
    // 0x54d57c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x54d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_54d580:
    // 0x54d580: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54d584:
    if (ctx->pc == 0x54D584u) {
        ctx->pc = 0x54D584u;
            // 0x54d584: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->pc = 0x54D588u;
        goto label_54d588;
    }
    ctx->pc = 0x54D580u;
    {
        const bool branch_taken_0x54d580 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54D584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D580u;
            // 0x54d584: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d580) {
            ctx->pc = 0x54D594u;
            goto label_54d594;
        }
    }
    ctx->pc = 0x54D588u;
label_54d588:
    // 0x54d588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d58c:
    // 0x54d58c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d590:
    if (ctx->pc == 0x54D590u) {
        ctx->pc = 0x54D590u;
            // 0x54d590: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D594u;
        goto label_54d594;
    }
    ctx->pc = 0x54D58Cu;
    {
        const bool branch_taken_0x54d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D58Cu;
            // 0x54d590: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d58c) {
            ctx->pc = 0x54D5B0u;
            goto label_54d5b0;
        }
    }
    ctx->pc = 0x54D594u;
label_54d594:
    // 0x54d594: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54d594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54d598:
    // 0x54d598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54d59c:
    // 0x54d59c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d5a0:
    // 0x54d5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d5a4:
    // 0x54d5a4: 0x0  nop
    ctx->pc = 0x54d5a4u;
    // NOP
label_54d5a8:
    // 0x54d5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d5ac:
    // 0x54d5ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54d5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54d5b0:
    // 0x54d5b0: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x54d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_54d5b4:
    // 0x54d5b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x54d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_54d5b8:
    // 0x54d5b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x54d5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54d5bc:
    // 0x54d5bc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x54d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_54d5c0:
    // 0x54d5c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x54d5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_54d5c4:
    // 0x54d5c4: 0x2a810003  slti        $at, $s4, 0x3
    ctx->pc = 0x54d5c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_54d5c8:
    // 0x54d5c8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x54d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_54d5cc:
    // 0x54d5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54d5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54d5d0:
    // 0x54d5d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54d5d4:
    // 0x54d5d4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x54d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_54d5d8:
    // 0x54d5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d5dc:
    // 0x54d5dc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_54d5e0:
    if (ctx->pc == 0x54D5E0u) {
        ctx->pc = 0x54D5E0u;
            // 0x54d5e0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x54D5E4u;
        goto label_54d5e4;
    }
    ctx->pc = 0x54D5DCu;
    {
        const bool branch_taken_0x54d5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D5DCu;
            // 0x54d5e0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d5dc) {
            ctx->pc = 0x54D670u;
            goto label_54d670;
        }
    }
    ctx->pc = 0x54D5E4u;
label_54d5e4:
    // 0x54d5e4: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_54d5e8:
    if (ctx->pc == 0x54D5E8u) {
        ctx->pc = 0x54D5E8u;
            // 0x54d5e8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x54D5ECu;
        goto label_54d5ec;
    }
    ctx->pc = 0x54D5E4u;
    {
        const bool branch_taken_0x54d5e4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x54d5e4) {
            ctx->pc = 0x54D5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D5E4u;
            // 0x54d5e8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D5F8u;
            goto label_54d5f8;
        }
    }
    ctx->pc = 0x54D5ECu;
label_54d5ec:
    // 0x54d5ec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54d5ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d5f0:
    // 0x54d5f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d5f4:
    if (ctx->pc == 0x54D5F4u) {
        ctx->pc = 0x54D5F4u;
            // 0x54d5f4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D5F8u;
        goto label_54d5f8;
    }
    ctx->pc = 0x54D5F0u;
    {
        const bool branch_taken_0x54d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D5F0u;
            // 0x54d5f4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d5f0) {
            ctx->pc = 0x54D610u;
            goto label_54d610;
        }
    }
    ctx->pc = 0x54D5F8u;
label_54d5f8:
    // 0x54d5f8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54d5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54d5fc:
    // 0x54d5fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d600:
    // 0x54d600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d604:
    // 0x54d604: 0x0  nop
    ctx->pc = 0x54d604u;
    // NOP
label_54d608:
    // 0x54d608: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d60c:
    // 0x54d60c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d60cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d610:
    // 0x54d610: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54d614:
    if (ctx->pc == 0x54D614u) {
        ctx->pc = 0x54D614u;
            // 0x54d614: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54D618u;
        goto label_54d618;
    }
    ctx->pc = 0x54D610u;
    {
        const bool branch_taken_0x54d610 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54d610) {
            ctx->pc = 0x54D614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D610u;
            // 0x54d614: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D624u;
            goto label_54d624;
        }
    }
    ctx->pc = 0x54D618u;
label_54d618:
    // 0x54d618: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54d618u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d61c:
    // 0x54d61c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d620:
    if (ctx->pc == 0x54D620u) {
        ctx->pc = 0x54D620u;
            // 0x54d620: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D624u;
        goto label_54d624;
    }
    ctx->pc = 0x54D61Cu;
    {
        const bool branch_taken_0x54d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D61Cu;
            // 0x54d620: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d61c) {
            ctx->pc = 0x54D63Cu;
            goto label_54d63c;
        }
    }
    ctx->pc = 0x54D624u;
label_54d624:
    // 0x54d624: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54d628:
    // 0x54d628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d62c:
    // 0x54d62c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d630:
    // 0x54d630: 0x0  nop
    ctx->pc = 0x54d630u;
    // NOP
label_54d634:
    // 0x54d634: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d638:
    // 0x54d638: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d638u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d63c:
    // 0x54d63c: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x54d63cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_54d640:
    // 0x54d640: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d644:
    // 0x54d644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d648:
    // 0x54d648: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x54d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_54d64c:
    // 0x54d64c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d650:
    // 0x54d650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d654:
    // 0x54d654: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x54d654u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_54d658:
    // 0x54d658: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x54d658u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_54d65c:
    // 0x54d65c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d660:
    // 0x54d660: 0xc0bc284  jal         func_2F0A10
label_54d664:
    if (ctx->pc == 0x54D664u) {
        ctx->pc = 0x54D664u;
            // 0x54d664: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54D668u;
        goto label_54d668;
    }
    ctx->pc = 0x54D660u;
    SET_GPR_U32(ctx, 31, 0x54D668u);
    ctx->pc = 0x54D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D660u;
            // 0x54d664: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D668u; }
        if (ctx->pc != 0x54D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D668u; }
        if (ctx->pc != 0x54D668u) { return; }
    }
    ctx->pc = 0x54D668u;
label_54d668:
    // 0x54d668: 0x10000022  b           . + 4 + (0x22 << 2)
label_54d66c:
    if (ctx->pc == 0x54D66Cu) {
        ctx->pc = 0x54D670u;
        goto label_54d670;
    }
    ctx->pc = 0x54D668u;
    {
        const bool branch_taken_0x54d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54d668) {
            ctx->pc = 0x54D6F4u;
            goto label_54d6f4;
        }
    }
    ctx->pc = 0x54D670u;
label_54d670:
    // 0x54d670: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54d674:
    if (ctx->pc == 0x54D674u) {
        ctx->pc = 0x54D674u;
            // 0x54d674: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54D678u;
        goto label_54d678;
    }
    ctx->pc = 0x54D670u;
    {
        const bool branch_taken_0x54d670 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54d670) {
            ctx->pc = 0x54D674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D670u;
            // 0x54d674: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D684u;
            goto label_54d684;
        }
    }
    ctx->pc = 0x54D678u;
label_54d678:
    // 0x54d678: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d678u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d67c:
    // 0x54d67c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d680:
    if (ctx->pc == 0x54D680u) {
        ctx->pc = 0x54D680u;
            // 0x54d680: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D684u;
        goto label_54d684;
    }
    ctx->pc = 0x54D67Cu;
    {
        const bool branch_taken_0x54d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D67Cu;
            // 0x54d680: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d67c) {
            ctx->pc = 0x54D69Cu;
            goto label_54d69c;
        }
    }
    ctx->pc = 0x54D684u;
label_54d684:
    // 0x54d684: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54d688:
    // 0x54d688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d68c:
    // 0x54d68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d690:
    // 0x54d690: 0x0  nop
    ctx->pc = 0x54d690u;
    // NOP
label_54d694:
    // 0x54d694: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d698:
    // 0x54d698: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d698u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d69c:
    // 0x54d69c: 0x6c20004  bltzl       $s6, . + 4 + (0x4 << 2)
label_54d6a0:
    if (ctx->pc == 0x54D6A0u) {
        ctx->pc = 0x54D6A0u;
            // 0x54d6a0: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x54D6A4u;
        goto label_54d6a4;
    }
    ctx->pc = 0x54D69Cu;
    {
        const bool branch_taken_0x54d69c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x54d69c) {
            ctx->pc = 0x54D6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D69Cu;
            // 0x54d6a0: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D6B0u;
            goto label_54d6b0;
        }
    }
    ctx->pc = 0x54D6A4u;
label_54d6a4:
    // 0x54d6a4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54d6a4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d6a8:
    // 0x54d6a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d6ac:
    if (ctx->pc == 0x54D6ACu) {
        ctx->pc = 0x54D6ACu;
            // 0x54d6ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D6B0u;
        goto label_54d6b0;
    }
    ctx->pc = 0x54D6A8u;
    {
        const bool branch_taken_0x54d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D6A8u;
            // 0x54d6ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d6a8) {
            ctx->pc = 0x54D6C8u;
            goto label_54d6c8;
        }
    }
    ctx->pc = 0x54D6B0u;
label_54d6b0:
    // 0x54d6b0: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x54d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_54d6b4:
    // 0x54d6b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d6b8:
    // 0x54d6b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d6bc:
    // 0x54d6bc: 0x0  nop
    ctx->pc = 0x54d6bcu;
    // NOP
label_54d6c0:
    // 0x54d6c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d6c4:
    // 0x54d6c4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d6c4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d6c8:
    // 0x54d6c8: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x54d6c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_54d6cc:
    // 0x54d6cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d6d0:
    // 0x54d6d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d6d4:
    // 0x54d6d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x54d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_54d6d8:
    // 0x54d6d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d6dc:
    // 0x54d6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d6e0:
    // 0x54d6e0: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x54d6e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_54d6e4:
    // 0x54d6e4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x54d6e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_54d6e8:
    // 0x54d6e8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d6ec:
    // 0x54d6ec: 0xc0bc284  jal         func_2F0A10
label_54d6f0:
    if (ctx->pc == 0x54D6F0u) {
        ctx->pc = 0x54D6F0u;
            // 0x54d6f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54D6F4u;
        goto label_54d6f4;
    }
    ctx->pc = 0x54D6ECu;
    SET_GPR_U32(ctx, 31, 0x54D6F4u);
    ctx->pc = 0x54D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D6ECu;
            // 0x54d6f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D6F4u; }
        if (ctx->pc != 0x54D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D6F4u; }
        if (ctx->pc != 0x54D6F4u) { return; }
    }
    ctx->pc = 0x54D6F4u;
label_54d6f4:
    // 0x54d6f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54d6f8:
    // 0x54d6f8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54d6fc:
    // 0x54d6fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d700:
    // 0x54d700: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54d700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54d704:
    // 0x54d704: 0x320f809  jalr        $t9
label_54d708:
    if (ctx->pc == 0x54D708u) {
        ctx->pc = 0x54D70Cu;
        goto label_54d70c;
    }
    ctx->pc = 0x54D704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D70Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D70Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D70Cu; }
            if (ctx->pc != 0x54D70Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54D70Cu;
label_54d70c:
    // 0x54d70c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x54d70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_54d710:
    // 0x54d710: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x54d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_54d714:
    // 0x54d714: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54d714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_54d718:
    // 0x54d718: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x54d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_54d71c:
    // 0x54d71c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x54d71cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54d720:
    // 0x54d720: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54d724:
    // 0x54d724: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54d724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54d728:
    // 0x54d728: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54d728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54d72c:
    // 0x54d72c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x54d72cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54d730:
    // 0x54d730: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54d734:
    // 0x54d734: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54d734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54d738:
    // 0x54d738: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54d73c:
    // 0x54d73c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54d73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54d740:
    // 0x54d740: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54d744:
    // 0x54d744: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54d744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54d748:
    // 0x54d748: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54d748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54d74c:
    // 0x54d74c: 0x3e00008  jr          $ra
label_54d750:
    if (ctx->pc == 0x54D750u) {
        ctx->pc = 0x54D750u;
            // 0x54d750: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x54D754u;
        goto label_54d754;
    }
    ctx->pc = 0x54D74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D74Cu;
            // 0x54d750: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54D754u;
label_54d754:
    // 0x54d754: 0x0  nop
    ctx->pc = 0x54d754u;
    // NOP
label_54d758:
    // 0x54d758: 0x0  nop
    ctx->pc = 0x54d758u;
    // NOP
label_54d75c:
    // 0x54d75c: 0x0  nop
    ctx->pc = 0x54d75cu;
    // NOP
}
